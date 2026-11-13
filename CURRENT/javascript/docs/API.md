# Public API and native runtime

This binding exposes the reviewed public Java/C# API where implemented by the
native C++ engine. C++ implementation helpers, private managed members and
native-only copy/move facilities are not public JavaScript APIs. `Random`,
`IRandom` and `ReaderStream` provide the necessary native transport interfaces.

## Ownership

Release owned native handles with `.delete()` in a `finally` block. Native
dependencies retain their own shared references. Different JavaScript wrappers
can refer to the same C++ object: use `isAliasOf()` for native identity, not `===`.
`cloneHandle()` retains an alias; `clone()` and `cloneForThreadSafe()` use native
cloning. Deliberate mutually owning user definitions still require the existing
definition-removal methods before releasing their final handles.

Embind can also release smart-pointer handles through FinalizationRegistry, but
the callback is not guaranteed to execute or to run promptly. Use explicit
`.delete()` for deterministic cleanup. Releasing a handle does not destroy an
object still owned by another native dependency or handle. The WASM memory buffer
may retain its high-water size after objects are freed; freed space can be reused.
Automatic finalization does not collect deliberately established native owning
cycles. The tutorial demonstrates disconnecting both sides of such a cycle.

Extension callbacks are synchronous and must implement their native interface,
including `clone()`. Variadic callback parameters are borrowed native lists;
use `cloneHandle()` to retain an owned alias beyond the callback.

## Types and overloads

The shipped TypeScript declarations describe the public binding. JavaScript
numbers normally select native double overloads; `mx.int32(value)` selects a
signed 32-bit int overload where supported. Native 64-bit integer values use
`bigint`. Byte transport uses `Uint8Array`. A returned help JSON document remains
a string; parse it explicitly if needed.

## Serialization and console

`SerializationUtils` uses the native cereal binary format and its existing
security opt-in. Enable it explicitly with
`enableBinarySerializationIamAwareOfSecurityRisks()` and disable it when finished.
Browser file methods address the module's virtual filesystem, not host files.

`mXparser.consolePrint*` preserves native prefixes, counters and output buffering.
JavaScript `console.log` is a separate host console operation.

## Native differences

- `CharStream` initially uses the C++ tab size of 1; use `setTabSize(8)` if needed.
- `ParseException` retains native token value-copy and formatting behavior.
- Native stdio selectors replace managed `PrintStream` objects.
- `SyntaxChecker.jj_nt` is read-only: it exposes the actual borrowed cached token,
  but arbitrary raw-pointer assignment is not supported. Other borrowed syntax
  views retain their ownership and generation restrictions.
- Managed platform/encoding APIs with no native counterpart are not simulated.
- Synchronous calculations block their JavaScript execution thread. This public
  build uses no pthreads and requires no cross-origin isolation. Applications may
  place a module instance in a Worker; that does not make calculate asynchronous.

These adaptations do not replace native mathematics, parsing, dependency
invalidation, cloning or serialization with JavaScript implementations.

## Limits and failure lifecycle

See [Limits and security](LIMITS.md) for untrusted-input isolation, stack overflow,
permanent module failure, the current 2 GiB memory ceiling, explicit self/mutual
cycles and JS extension serialization. After a fatal native failure, subsequent
native calls report `MXPARSER_MODULE_UNUSABLE`; that instance cannot be repaired
by restoring a stack pointer or releasing its handles. Ordinary controlled
errors and independent module instances retain their existing behavior.

`NumberTheory.gcd/lcm` return `number` for double inputs and `bigint` for int64
pairs or nonempty bigint inputs. An empty plain JS array selects the double path;
a dynamically sized bigint array therefore has a `number | bigint` return type.
The explicit number/bigint distinction is reflected in the declarations and
checked both by TypeScript and actual runtime `typeof` tests.

## LaTeX export and experimental parser

```js
const expression = new mx.Expression('sin(x)^2+cos(x)^2');
try {
    console.log(expression.getExpressionAsLaTeX()); // \sin^{2}x+\cos^{2}x
} finally {
    expression.delete();
}

const root = mx.LaTeXParser.parse('\\frac{x+1}{y}^{2}');
const children = root.getChildren();
try {
    console.log(root.getKind() === mx.LaTeXParser.Kind.POWER); // true
    console.log(root.getStartOffset(), root.getEndOffset());
} finally {
    for (const child of children) child.delete();
    root.delete();
}
```

Export uses the existing C++ `Expression.getExpressionAsLaTeX()` and its copy of
initial tokens. It needs no evaluation or defined numeric values for symbols.
Its fragment contains no surrounding math delimiters. Mathematical typography,
operator grouping and the full token dictionary are the accepted native rules.
Invalid or unsupported structure throws an `Error` named `std::logic_error` with
the native diagnostic. The existing null-stored-expression boundary guard throws
`std::invalid_argument`, matching other token-inspection operations in this binding.
Token acquisition retains its existing native state/cache and extension-metadata
behavior; export does not introduce a separate JS tokenizer or evaluator.

**Only the parser API is experimental.** Its supported subset, node metadata and
API may evolve before stabilization. The export API is not experimental.
`LaTeXParser.parse(string | null)` returns an owning opaque node or throws an
`Error` named `std::invalid_argument` containing a zero-based UTF-16 offset.
Passing a non-string/non-null value is a JS `TypeError`. It accepts an arithmetic
fragment, not a TeX document, functions, general macros or mathematical delimiters.
For example, `x^{12}` is one power, while `x^12` follows TeX's single-token script
rule and means `(x^1)*2`; `xy` is juxtaposition, whereas `\mathit{xy}` is one name.
`\sin x`, `\alpha`, `f(x)` and `\frac12` are outside the current subset.
No numeric evaluation, definition resolution or reverse conversion is performed.

Each node exposes exactly `getKind()`, `getText()`, `getSymbolStyle()`,
`getChildren()`, `getStartOffset()`, `getEndOffset()` and `getSourceText()`.
`Kind` has the 13 arithmetic operations from Java/C#; `SymbolStyle` has `DEFAULT`,
`ITALIC`, `UPRIGHT`. Both are frozen numeric constant objects nested under
`mx.LaTeXParser`. Nodes have no public constructor or mutators.
`getChildren()` returns a frozen JS array of **owning native handles**, not a
mutable native list. Release each returned handle, even for repeated calls.
Children and cloned handles remain valid after the parent handle is released.
`cloneHandle()` shares the native node; `isAliasOf()` tests native identity while
two wrappers need not satisfy `===`. The source and offsets survive parent release.

Offsets and source slices use UTF-16 units on every host, including WASM's 32-bit
`wchar_t`. The parser uses the same closed ASCII-plus-mathematical-symbol alphabet
as the native implementation and preserves explicit italic/upright typography.
Its current limits are 1,000,000 input UTF-16 units, 100,000 nodes and depth 128;
these do not imply that every fragment produced by the full exporter is accepted
by this intentionally smaller parser. Use the general Worker guidance for
untrusted work. C++ implementation helpers (`LaTeXExporter`, `ReadOnlyList`,
`new_Node`, string overloads) are not exposed as public JS/TS APIs.

## Per-calculation cancellation

[Cancellation](CANCELLATION.md) documents the 148 new canonical public methods,
MAX_CANCELLATION_TOKEN_ID, strict ID conversion, fixed-array overloads,
RecursiveArgument dispatch and actual synchronous WASM delivery limitations.
Native implementation-only cores and recursion-counter helpers stay hidden.
