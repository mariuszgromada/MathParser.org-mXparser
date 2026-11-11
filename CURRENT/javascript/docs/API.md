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
