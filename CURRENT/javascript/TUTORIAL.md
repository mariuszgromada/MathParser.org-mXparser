# mXparser for JavaScript and TypeScript

This tutorial covers all 58 historical chapters and 266 original examples using
the public Java/C#-aligned JavaScript API. The executable examples are tested
directly from this document; verification results belong to the source checkout's
`docs/VALIDATION.md`. Consumer limitations are in [Limits and security](docs/LIMITS.md).

<!-- c2-chapter: C2-chapter-001 -->
## 1. JavaScript support: the execution and ownership model

mXparser evaluates mathematical expressions supplied as strings. The JavaScript
and TypeScript package runs the original C++17 engine through WebAssembly.
Parsing, mathematics, dependency tracking, settings, cloning and binary
serialization execute in that engine. JavaScript provides its public interface.

After the maintainer publishes this package, install it by its registry name:

```sh
npm install @mathparser.org/mxparser
```

Until publication, install the locally prepared review archive instead:

```sh
npm install ./mathparser.org-mxparser-6.2.0.tgz
```

The archive is currently a local review artifact. Package-building instructions
belong to the build guide; application code does not need Emscripten.

Initialize the module before constructing expressions. Initialization is
asynchronous; ordinary calculations after initialization are synchronous.
The examples below use this initialized `mx` object.

<!-- mx-example {"id":"JS-setup-001","chapter":"C2-chapter-001"} -->
```javascript
import { initMxParser } from '@mathparser.org/mxparser';

const mx = await initMxParser();
```

`new mx.Expression(...)` uses the existing C++ factory and its `std::shared_ptr`.
An expression, argument or function exposed to JavaScript is an Embind handle
to the native object. Release each handle with `.delete()` when finished.
Use `try` and `finally` so cleanup also happens if an operation throws.

Releasing a handle releases that handle's ownership. A native expression can
continue owning an argument after the argument's original JavaScript handle
has been released. Two handles can share the same native state without being
the same JavaScript object: use `isAliasOf()` to test native object identity.
`cloneHandle()` creates another handle to that same native object; engine
`clone()` and `cloneForThreadSafe()` perform their separate native operations.

Ordinary dependencies and recursion created by the engine follow the native
ownership rules. If the application adds definitions that retain each other in a
cycle, remove those definitions before releasing the handles. The examples below
show both patterns. See [ownership and explicit cycles](docs/LIMITS.md#ownership-and-explicit-cycles)
for the specific free-argument self-reference case.

For a method with distinct C++ `int` and `double` overloads, an ordinary JS
number retains the default double selection. `mx.int32(value)` explicitly
selects the original signed 32-bit int parameter: for example,
`mx.StringUtils.numberToHexString(mx.int32(-1))` returns `ffffffff`, while the
ordinary number `-1` selects the native Long conversion and returns
`ffffffffffffffff`. The selector accepts integers from -2147483648 through
2147483647. It is an immutable value, needs no `.delete()`, and is only a method
overload selector; constructors, fields, callbacks and collections retain their
documented primitive types.

Native `double` values use JavaScript `number`, including NaN and infinities.
This public profile excludes the C++ runtime wrapper classes such as `Double`
and `Math`. Application callbacks may use standard JavaScript values such as
`Math.PI`; expression evaluation continues to use the native mXparser engine.
The `LongDouble.fromBits()` transport preserves a raw binary128 payload where
required by an exposed native signature; it does not provide a JS numerical engine.

### Releasing handles in an ordinary dependency graph

The expression retains `x` and dependent argument `y`. Releasing their original
handles does not remove those definitions. A handle obtained through
`getArgument()` aliases the same native `x`; updating it changes subsequent
results from `6` to `12` and then `20`. This graph needs no definition removal.

<!-- mx-example {"id":"JS-ownership-001","chapter":"C2-chapter-001","nativeReference":true} -->
```javascript
{
  const x = new mx.Argument('x', 2);
  const y = new mx.Argument('y=x^2', x);
  const e = new mx.Expression('x+y', x, y);
  const alias = e.getArgument('x');
  try {
    x.delete();
    y.delete();
    console.log(e.getExpressionString(), e.calculate());
    alias.setArgumentValue(3);
    console.log(e.getExpressionString(), e.calculate());
    alias.setArgumentValue(4);
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    for (const object of [alias, e, y, x]) {
      if (!object.isDeleted()) object.delete();
    }
  }
}
```

### Disconnecting a deliberately established mutual owning cycle

`addFunctions()` retains the supplied native function even if its name is not
used in the current function body. Calling it in both directions deliberately
creates two owning edges. This advanced example uses `removeFunctions()` to
remove those edges before releasing the handles. It prints `3` and `4`.
Ordinary functions and expressions do not need this cycle teardown.

<!-- mx-example {"id":"JS-ownership-002","chapter":"C2-chapter-001","nativeReference":true} -->
```javascript
{
  const f = new mx.Function('first(t)=t+1');
  const g = new mx.Function('second(t)=t+2');
  try {
    f.addFunctions(g);
    g.addFunctions(f);
    console.log('first(2)', f.calculate(2));
    console.log('second(2)', g.calculate(2));
  } finally {
    f.removeFunctions(g);
    g.removeFunctions(f);
    g.delete();
    f.delete();
  }
}
```

Each handle must be released once. `isDeleted()` is useful when control flow
has already released some handles. It describes that handle, not whether the
underlying object is still owned by another handle or native definition.

TypeScript uses the same asynchronous initialization and synchronous methods.
The package supplies declarations for the implemented constructors, overloads
and return types. Class constructors are properties of the initialized module;
the top-level runtime import is `initMxParser`.

Node loads the packaged `.wasm` file through the loader. The public browser
build uses unshared WebAssembly memory and does not require COOP/COEP headers.
Files used by native serialization belong to its virtual filesystem. Browser
support does not imply automatic access to host files.

The original mXparser license and its explicit confirmation API apply.
Initializing the module does not confirm a use type or grant commercial rights.

<!-- c2-chapter: C2-chapter-002 -->
## 2. Mathematical expression evaluator and parser

An `Expression` represents mathematical source text and its definitions.
`calculate()` returns a JavaScript `number`, including the original engine's
`NaN` and infinity results. Syntax checking and diagnostics are available through
methods such as `checkSyntax()` and `getErrorMessage()`.

The expression language includes arithmetic, functions, constants, logical and
bitwise operators, relations, user definitions, recursion, iterated operators,
calculus, numerical solving, probability distributions and random variables.
Expression source is parsed by mXparser. JavaScript never evaluates that source
as JavaScript code.

Arguments, constants and functions can be shared between expressions. Changing
an argument through its native API updates the shared dependency, so subsequent
calculations use the new value. The engine controls precompilation and cache
invalidation; application code does not need to reproduce them.

Help and diagnostics can be localized. Their language does not change decimal
notation, expression operators or mathematical grammar. The English help-search
examples below explicitly select English resources. Releasing this resource
handle is safe because the native string model retains the selected resource.

<!-- mx-example {"id":"JS-language-001","chapter":"C2-chapter-002"} -->
```javascript
{
  const english = mx.StringResources.languageEnglish();
  try {
    mx.StringModel.setStringResources(english);
  } finally {
    english.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-003 -->
## 3. Using internal help

### Case 1: Full help

The internal help describes the current engine's vocabulary, syntax and token
metadata. Print the complete help when exploring the available language.
Its content follows the installed engine version rather than an old tutorial
table, so vocabulary and descriptions can grow between releases.

<!-- mx-example {"id":"C2-example-001","chapter":"C2-chapter-003","case":"C2-case-001","nativeContains":["sin","cos"],"cases":["C2-case-001","C2-case-004"]} -->
```javascript
mx.mXparser.consolePrintHelp();
```

### Case 2: In-line help searching with a simple keyword

Supply a search word to narrow the help. The word `sine` finds matching entries
in the English help. This is a help query, not an expression to calculate.

<!-- mx-example {"id":"C2-example-002","chapter":"C2-chapter-003","case":"C2-case-002","nativeContains":["sin","Sine"],"cases":["C2-case-002","C2-case-005"]} -->
```javascript
mx.mXparser.consolePrintHelp('sine');
```

### Case 3: Advanced help searching

A query can use one search tag: `key=` for a keyword, `desc=` for its
description, `syn=` for syntax, `type=` for a token type, or `since=` for the
version in which it appeared. `typeid=` and `keyid=` search numeric token
identifiers. Use one tag per query. For example, `desc=inver` searches for
descriptions containing that text.

<!-- mx-example {"id":"C2-example-003","chapter":"C2-chapter-003","case":"C2-case-003","nativeContains":["asin","Inverse"],"cases":["C2-case-003","C2-case-006"]} -->
```javascript
mx.mXparser.consolePrintHelp('desc=inver');
```

Your own arguments, constants and functions can also appear in help associated
with an expression. Later chapters introduce these definitions and their help.

<!-- c2-chapter: C2-chapter-004 -->
## 4. Simple expressions

### Case 1: Simple calculation

Construct an expression from its source string, then call `calculate()`.
`getExpressionString()` returns its source. This calculation returns `3`.

<!-- mx-example {"id":"C2-example-004","chapter":"C2-chapter-004","case":"C2-case-007","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('2+1');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 2: Changing the expression string

Use the original setter to replace the source. The same expression now
calculates `2-1`, returning `1`. The engine invalidates its own compiled state.

<!-- mx-example {"id":"C2-example-005","chapter":"C2-chapter-004","case":"C2-case-008","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('2+1');
  try {
    e.setExpressionString('2-1');
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); }
}
```

### Case 3: Using operators

Parentheses group subexpressions. Arithmetic operators and their precedence
belong to the mXparser language; the JavaScript string contains the complete
mathematical expression.

<!-- mx-example {"id":"C2-example-006","chapter":"C2-chapter-004","case":"C2-case-009","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('2-(32-4)/(23+4/5)-(2-4)*(4+6-98.2)+4');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 4: Power function

The expression-language power operator is `^`. It is evaluated by mXparser,
including negative exponents and the engine's rules for chained powers.

<!-- mx-example {"id":"C2-example-007","chapter":"C2-chapter-004","case":"C2-case-010","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('2^3+2^(-3)+2^3^(-4)');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 5: Scientific notation

Both `e` and `E` introduce a decimal exponent. A positive exponent can use an
explicit `+`. Each expression below returns `240.012`.

<!-- mx-example {"id":"C2-example-008","chapter":"C2-chapter-004","case":"C2-case-011","nativeReference":true} -->
```javascript
{
  const expressions = [
    new mx.Expression('1.2e2 + 1.2e+2 + 1.2e-2'),
    new mx.Expression('1.2E2 + 1.2E+2 + 1.2E-2')
  ];
  try { for (const e of expressions) console.log(e.getExpressionString(), e.calculate()); }
  finally { for (const e of expressions) e.delete(); }
}
```

### Case 6: Percent sign support

The postfix percent operator divides its operand by one hundred. The examples
calculate `0.02`, `2`, and the engine's value of pi, respectively.

<!-- mx-example {"id":"C2-example-009","chapter":"C2-chapter-004","case":"C2-case-012","nativeReference":true} -->
```javascript
{
  const expressions = [new mx.Expression('2%'), new mx.Expression('2% * 100'), new mx.Expression('pi% * 100')];
  try { for (const e of expressions) console.log(e.getExpressionString(), e.calculate()); }
  finally { for (const e of expressions) e.delete(); }
}
```

### Case 7: Leading zeros

Leading zeros are accepted in ordinary decimal literals. They do not select an
octal numeral system. Signs, fractional parts and scientific notation still
apply normally.

<!-- mx-example {"id":"C2-example-010","chapter":"C2-chapter-004","case":"C2-case-013","nativeReference":true} -->
```javascript
{
  const expressions = [new mx.Expression('00123'), new mx.Expression('-00123'), new mx.Expression('-00000123.123e-10')];
  try { for (const e of expressions) console.log(e.getExpressionString(), e.calculate()); }
  finally { for (const e of expressions) e.delete(); }
}
```

### Case 8: Fractions

An underscore separates the numerator and denominator of a fraction. A mixed
fraction also starts with an integer part: `2_1_2` means two and one half.
The expression below adds one half and two and one half, returning `3`.

<!-- mx-example {"id":"C2-example-011","chapter":"C2-chapter-004","case":"C2-case-014","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('1_2 + 2_1_2');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 9: Additional division operators

The colon division notation is familiar in Central and Eastern Europe. A
backslash selects integer division. Escape that backslash in a JavaScript string
literal so the mathematical source contains one backslash. These examples
return `2` and `2`.

<!-- mx-example {"id":"C2-example-012","chapter":"C2-chapter-004","case":"C2-case-015","nativeReference":true} -->
```javascript
{
  const expressions = [new mx.Expression('6:3'), new mx.Expression('7\\3')];
  try { for (const e of expressions) console.log(e.getExpressionString(), e.calculate()); }
  finally { for (const e of expressions) e.delete(); }
}
```

<!-- c2-chapter: C2-chapter-005 -->
## 5. Implied multiplication

mXparser can recognize multiplication without an explicit `*` in supported
positions. Inspect `getCanonicalExpressionString()` to see the form understood
by the parser. This method exposes the engine's interpretation; application
code does not need to insert multiplication operators itself.

### Case 1: Numbers and parentheses

`2(3+4)3` is interpreted as `2*(3+4)*3` and returns `42`. The stored expression
and its canonical form remain available as separate strings.

<!-- mx-example {"id":"C2-example-013","chapter":"C2-chapter-005","case":"C2-case-016","nativeReference":true,"nativeCanonical":true} -->
```javascript
{
  const e = new mx.Expression('2(3+4)3');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); }
}
```

### Case 2: Numbers and constants or arguments

In `2pi+3e`, `pi` and `e` are built-in mathematical constants. The canonical
form is `2*pi+3*e`. User-defined arguments are introduced in their own chapter.

<!-- mx-example {"id":"C2-example-014","chapter":"C2-chapter-005","case":"C2-case-017","nativeReference":true,"nativeCanonical":true} -->
```javascript
{
  const e = new mx.Expression('2pi+3e');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); }
}
```

### Case 3: Combining constants and parentheses

The same interpretation applies across a longer product. Here the engine
inserts multiplication between the number, constants and parenthesized group,
producing `2*pi*(3+4)*2*e`.

<!-- mx-example {"id":"C2-example-015","chapter":"C2-chapter-005","case":"C2-case-018","nativeReference":true,"nativeCanonical":true} -->
```javascript
{
  const e = new mx.Expression('2pi(3+4)2e');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); }
}
```

### Case 4: Combining constants, parentheses and functions

Function calls can participate in the product as well. The canonical form below
is `2*pi*(3+4)*2*sin(3)*e`. The initial angle mode is radians, so `sin(3)` uses
three radians. Angle-mode settings are discussed later.

<!-- mx-example {"id":"C2-example-016","chapter":"C2-chapter-005","case":"C2-case-019","nativeReference":true,"nativeCanonical":true} -->
```javascript
{
  const e = new mx.Expression('2pi(3+4)2sin(3)e');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); }
}
```

### Case 5: Possible ambiguity

Implied multiplication does not make every adjoining name unambiguous. The
engine interprets `2pi2` as `2*pi2`; `pi2` is then an unknown token. It does not
split that name into `pi*2`. Check the syntax and read the diagnostic. Write
`2*pi*2` when that is the intended product.

<!-- mx-example {"id":"C2-example-017","chapter":"C2-chapter-005","case":"C2-case-020","nativeSyntax":true,"nativeCanonical":true} -->
```javascript
{
  const e = new mx.Expression('2pi2');
  try {
    const valid = e.checkSyntax();
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(valid);
    console.log(e.getErrorMessage());
  } finally { e.delete(); }
}
```

### Case 6: Inspecting tokens

Print the engine's initial token list to inspect the inserted operators. The
same tokens are available programmatically as a copied collection of native
token handles. Release those handles after inspecting their metadata.

<!-- mx-example {"id":"C2-example-018","chapter":"C2-chapter-005","case":"C2-case-021","nativeTokens":true} -->
```javascript
{
  const e = new mx.Expression('2pi(3+4)2e');
  try {
    e.consolePrintCopyOfInitialTokens();
    const tokens = e.getCopyOfInitialTokens();
    try { console.log(tokens.map(token => token?.tokenStr)); }
    finally { for (const token of tokens) token?.delete(); }
  } finally { e.delete(); }
}
```

### Case 7: Enabling and disabling the mode

An expression can override its implied-multiplication mode. With the mode
disabled, `2pi+3e` fails syntax checking and the diagnostic identifies missing
multiplication operators. Enabling the mode on that expression makes it valid.
These instance methods operate on the expression rather than changing every
expression in the module.

<!-- mx-example {"id":"C2-example-019","chapter":"C2-chapter-005","case":"C2-case-022","nativeSyntax":true} -->
```javascript
{
  const e = new mx.Expression('2pi+3e');
  try {
    e.disableImpliedMultiplicationMode();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    e.enableImpliedMultiplicationMode();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
  } finally { e.delete(); }
}
```

<!-- c2-chapter: C2-chapter-006 -->
## 6. Evaluating relations

### Case 1: Equality

A relation evaluates to a numeric result: `1` means true and `0` means false. The mathematical equality operator inside the expression is `=`. The expression `2=3` therefore evaluates to `0`.

<!-- mx-example {"id":"C2-example-020","chapter":"C2-chapter-006","case":"C2-case-023","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("2=3");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 2: Less than

The relation `2<3` evaluates to `1`. These are engine values returned as JavaScript numbers; they are not JavaScript Boolean objects.

<!-- mx-example {"id":"C2-example-021","chapter":"C2-chapter-006","case":"C2-case-024","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("2<3");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 3: Logical OR

Use `|` inside an expression for logical OR. The false equality and true comparison below combine to produce `1`. This operator is part of the mathematical expression language; JavaScript receives the expression as a string.

<!-- mx-example {"id":"C2-example-022","chapter":"C2-chapter-006","case":"C2-case-025","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("(2=3) | (2<3)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 4: Logical AND

Use `&` for logical AND. Both conditions must hold, so this expression evaluates to `0`. Parentheses make the intended groups explicit.

<!-- mx-example {"id":"C2-example-023","chapter":"C2-chapter-006","case":"C2-case-026","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("(2=3) & (2<3)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

<!-- c2-chapter: C2-chapter-007 -->
## 7. Using built-in functions

### Case 1: Unary functions

A unary function takes one parameter. The trigonometric functions use radians in the initial module configuration. This example subtracts `cos(3)` from `sin(2)`; both functions run in the native engine.

<!-- mx-example {"id":"C2-example-024","chapter":"C2-chapter-007","case":"C2-case-027","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("sin(2)-cos(3)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 2: Minimum and maximum

Function parameters are separated by commas. The minimum of `3` and `4` is `3`, and the maximum of `-2` and `-1` is `-1`, giving a sum of `2`.

<!-- mx-example {"id":"C2-example-025","chapter":"C2-chapter-007","case":"C2-case-028","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("min(3,4) + max(-2,-1)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 3: Binomial coefficients

`C(n,k)` returns the binomial coefficient. There are `252` ways to choose five elements from ten, without regard to order.

<!-- mx-example {"id":"C2-example-026","chapter":"C2-chapter-007","case":"C2-case-029","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("C(10,5)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 4: Conditional expressions

`if(condition, whenTrue, whenFalse)` chooses a value according to its condition. Since `2<3` is true, the expression returns `1`.

<!-- mx-example {"id":"C2-example-027","chapter":"C2-chapter-007","case":"C2-case-030","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("if(2<3, 1, 0)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 5: Nested conditions

A branch can itself contain another conditional expression. Here the outer condition is false; the inner equality is true, so the final value is `5`.

<!-- mx-example {"id":"C2-example-028","chapter":"C2-chapter-007","case":"C2-case-031","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("if(3<2, 1, if(1=1, 5, 0) )");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 6: Variable numbers of parameters

Some built-in functions accept a variable number of parameters. `gcd(4,2,8,20)` evaluates to the greatest common divisor, `2`.

<!-- mx-example {"id":"C2-example-029","chapter":"C2-chapter-007","case":"C2-case-032","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("gcd(4,2,8,20)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 7: Pairs of conditions and values

`iff` accepts condition/value pairs and returns the value for the first true condition. The first two conditions here are false and the third is true, so the result is `3`.

<!-- mx-example {"id":"C2-example-030","chapter":"C2-chapter-007","case":"C2-case-033","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("iff( 1>2, 1, 3<2, 2, 5>3, 3, 7 < 3, 4 )");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 8: Separating condition/value pairs

Semicolons can make the pairs easier to read. This is the same expression as the previous case, with the same result. The separators belong to the expression string and do not change JavaScript syntax.

<!-- mx-example {"id":"C2-example-031","chapter":"C2-chapter-007","case":"C2-case-034","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("iff( 1>2, 1; 3<2, 2; 5>3, 3; 7 < 3, 4 )");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

<!-- c2-chapter: C2-chapter-008 -->
## 8. User-defined arguments

### Case 1: Free arguments and shared mutable values

An argument can be defined by a name and numeric value, or by a definition
string. Pass the native argument objects to the expression. Changing `x` and
`z` changes the next calculation of the same expression; the engine handles
its dependencies and compiled state. The last line reads `x` directly.

<!-- mx-example {"id":"C2-example-032","chapter":"C2-chapter-008","case":"C2-case-035","nativeReference":true} -->
```javascript
{
  const x = new mx.Argument('x = 1');
  const y = new mx.Argument('y = 2*pi');
  const z = new mx.Argument('z', 3);
  const n = new mx.Argument('n', 4);
  const e = new mx.Expression('n*( sin(x+y)-cos(y/z) )', x, y, z, n);
  try {
    console.log(e.getExpressionString(), e.calculate());
    x.setArgumentValue(0);
    z.setArgumentValue(4);
    console.log(e.getExpressionString(), e.calculate());
    x.setArgumentValue(5);
    console.log(x.getArgumentName(), x.getArgumentValue());
  } finally {
    e.delete(); n.delete(); z.delete(); y.delete(); x.delete();
  }
}
```

### Case 2: Dependent arguments

`y=x^2` is a dependent argument: it evaluates its expression using the same
native `x` supplied to its constructor. Setting `x` to `1`, `2` and `3` gives
`y` values `1`, `4` and `9`. Combining both arguments in `x*y` then gives `27`.
A dependent argument is not a JavaScript getter that duplicates engine logic.

<!-- mx-example {"id":"C2-example-033","chapter":"C2-chapter-008","case":"C2-case-036","nativeReference":true} -->
```javascript
{
  const x = new mx.Argument('x');
  const y = new mx.Argument('y = x^2', x);
  let e;
  try {
    x.setArgumentValue(1);
    console.log(y.getArgumentName(), y.getArgumentValue());
    x.setArgumentValue(2);
    console.log(y.getArgumentName(), y.getArgumentValue());
    x.setArgumentValue(3);
    console.log(y.getArgumentName(), y.getArgumentValue());
    e = new mx.Expression('x*y', x, y);
    console.log(e.getExpressionString(), e.calculate());
  } finally { e?.delete(); y.delete(); x.delete(); }
}
```

### Case 3: Implementing ArgumentExtension in JavaScript

Implement the original `getArgumentValue()` and `clone()` contract. This
extension increments its own counter each time the engine requests its value,
so the three calculations return successive multiples of pi. The multiplication
below is the user's extension behavior; parsing and evaluation still run in C++.

The extension class is a JavaScript implementation object. `Argument` creates
and owns its native virtual bridge. Release native argument/expression handles;
the implementation object itself has no Embind `delete()` method. `clone()`
returns a complete new implementation and, as in the C++ example, starts its
counter at zero. Callbacks and clone methods must complete synchronously.

<!-- mx-example {"id":"C2-example-034","chapter":"C2-chapter-008","case":"C2-case-037","nativeReference":true} -->
```javascript
{
  class PiMultArgExt extends mx.ArgumentExtension {
    multiple = 0;
    getArgumentValue() {
      this.multiple++;
      return Math.PI * this.multiple;
    }
    clone() { return new PiMultArgExt(); }
  }
  const extension = new PiMultArgExt();
  const pim = new mx.Argument('pim', extension);
  const e = new mx.Expression('pim', pim);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); pim.delete(); }
}
```

### Case 4: Discovering missing arguments

Syntax checking identifies unknown names. `getMissingUserDefinedArguments()`
returns a JavaScript value array containing the missing names, here `y` and `a`.
The array and its string elements are values and need no native handle cleanup.
The diagnostic gives the context needed to correct the expression.

<!-- mx-example {"id":"C2-example-035","chapter":"C2-chapter-008","case":"C2-case-038","nativeSyntax":true,"nativeMissing":true} -->
```javascript
{
  const x = new mx.Argument('x = 2');
  const e = new mx.Expression('2x+3y+4*a', x);
  try {
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); x.delete(); }
}
```

### Case 5: Missing names and implied multiplication

Known constants and user arguments influence implied multiplication. In the
original example, Euler's number `e` is found inside `CasterAttack`. Inspect
the canonical expression and the actual missing-name list rather than assuming
that every unknown word remains one token.

<!-- mx-example {"id":"C2-example-036","chapter":"C2-chapter-008","case":"C2-case-039","nativeCanonical":true,"nativeMissing":true} -->
```javascript
{
  const e = new mx.Expression('3*CasterAttack');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); }
}
```

#### Solution 1: Disable implied multiplication locally

Disable the mode on this expression to keep `CasterAttack` together. Other
expressions retain their own settings.

<!-- mx-example {"id":"C2-example-037","chapter":"C2-chapter-008","case":"C2-case-039","nativeCanonical":true,"nativeMissing":true} -->
```javascript
{
  const e = new mx.Expression('3*CasterAttack');
  try {
    e.disableImpliedMultiplicationMode();
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); }
}
```

#### Solution 2: Change the module default

The global mode affects expressions created with that module's defaults. This
example restores its previous setting after releasing the expression.

<!-- mx-example {"id":"C2-example-038","chapter":"C2-chapter-008","case":"C2-case-039","nativeCanonical":true,"nativeMissing":true} -->
```javascript
{
  const previous = mx.mXparser.checkIfImpliedMultiplicationMode();
  mx.mXparser.disableImpliedMultiplicationMode();
  let e;
  try {
    e = new mx.Expression('3*CasterAttack');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedArguments());
  } finally {
    e?.delete();
    if (previous) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}
```

#### Solution 3: Remove a built-in keyword

Alternatively remove `e` from the native built-in keyword set. This deliberately
changes which expressions recognize that constant. These keyword examples assume
the default keyword set and restore their own change after the demonstration.

<!-- mx-example {"id":"C2-example-039","chapter":"C2-chapter-008","case":"C2-case-039","nativeCanonical":true,"nativeMissing":true} -->
```javascript
{
  mx.mXparser.removeBuiltinTokens('e');
  let e;
  try {
    e = new mx.Expression('3*CasterAttack');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e?.delete(); mx.mXparser.unremoveBuiltinTokens('e'); }
}
```

#### Solution 4: Rename the built-in keyword

Renaming `e` to `ee` preserves access to the built-in constant under its new
keyword and removes the single-letter match. The existing API restores the
original keyword after this example.

<!-- mx-example {"id":"C2-example-040","chapter":"C2-chapter-008","case":"C2-case-039","nativeCanonical":true,"nativeMissing":true} -->
```javascript
{
  mx.mXparser.modifyBuiltinToken('e', 'ee');
  let e;
  try {
    e = new mx.Expression('3*CasterAttack');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e?.delete(); mx.mXparser.unmodifyBuiltinTokens('e'); }
}
```

<!-- c2-chapter: C2-chapter-009 -->
## 9. User-defined functions

A function has a name, an expression body and parameter names. It can be called
directly or supplied as a definition to another native expression. Updating and
evaluating its body remains the work of the C++ engine.

### Case 1: Supply the name, body and parameters separately

This constructor provides the declaration components directly, avoiding the
declaration parsing needed by the single-string form in the next example.
Both forms use the same native calculation machinery.

<!-- mx-example {"id":"C2-example-041","chapter":"C2-chapter-009","case":"C2-case-040","nativeReference":true} -->
```javascript
{
  const f = new mx.Function('f', 'x^2', 'x');
  const e = new mx.Expression('f(2)', f);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('f(5)', f.calculate(5));
  } finally { e.delete(); f.delete(); }
}
```

The results are `4` and `25`. The direct call passes the value of the function
parameter; it does not change the text of the expression `f(2)`.

### Case 2: Use a complete function declaration

The declaration string combines the same three components in a familiar form.
Its additional declaration parsing concerns construction, not the mathematical
meaning of later calls.

<!-- mx-example {"id":"C2-example-042","chapter":"C2-chapter-009","case":"C2-case-041","nativeReference":true} -->
```javascript
{
  const f = new mx.Function('f(x) = x^2');
  const e = new mx.Expression('f(2)', f);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('f(5)', f.calculate(5));
  } finally { e.delete(); f.delete(); }
}
```

### Case 3: Functions with several parameters

Parameter positions follow the order in the declaration. Direct calls accept
the corresponding numeric arguments.

<!-- mx-example {"id":"C2-example-043","chapter":"C2-chapter-009","case":"C2-case-042","nativeReference":true} -->
```javascript
{
  const f = new mx.Function('f(a, b, c) = a+b+c');
  const e = new mx.Expression('f(1,2,3)', f);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('f(1,2,3)', f.calculate(1, 2, 3));
  } finally { e.delete(); f.delete(); }
}
```

Both calls return `6`.

### Case 4: A function that uses another function

Pass `g` when defining `f` so the native body can resolve `g(x)`. This is an
ordinary owning dependency. It needs no manual removal of definitions when
you finish using the functions.

<!-- mx-example {"id":"C2-example-044","chapter":"C2-chapter-009","case":"C2-case-043","nativeReference":true} -->
```javascript
{
  const g = new mx.Function('g(x) = 2*x');
  const f = new mx.Function('f(x) = g(x)^2', g);
  try {
    console.log('g(1)', g.calculate(1));
    console.log('f(1)', f.calculate(1));
  } finally { f.delete(); g.delete(); }
}
```

Here `g(1)` is `2`, so `f(1)` is `4`.

### Case 5: Implement a function extension in JavaScript

`FunctionExtension` exposes the original native interface: report the parameter
count and names, receive parameter values, then calculate with no additional
arguments. The engine sets those values before calling `calculate()`.

`clone()` must return an independent implementation with the appropriate state.
It is part of the interface even if the first calculation does not need it.
Callbacks run synchronously; promises cannot supply a native numeric result.

<!-- mx-example {"id":"C2-example-045","chapter":"C2-chapter-009","case":"C2-case-044","nativeReference":true} -->
```javascript
{
  class Addition extends mx.FunctionExtension {
    constructor(x = NaN, y = NaN) {
      super();
      this.x = x;
      this.y = y;
    }
    getParametersNumber() { return 2; }
    setParameterValue(index, value) {
      if (index === 0) this.x = value;
      if (index === 1) this.y = value;
    }
    getParameterName(index) {
      if (index === 0) return 'x';
      if (index === 1) return 'y';
      return '';
    }
    calculate() { return this.x + this.y; }
    clone() { return new Addition(this.x, this.y); }
  }
  const addition = new Addition();
  const f = new mx.Function('f', addition);
  let e;
  try {
    console.log('f(1,2)', f.calculate(1, 2));
    e = new mx.Expression('f(2,3)', f);
    console.log(e.getExpressionString(), e.calculate());
  } finally { e?.delete(); f.delete(); }
}
```

The results are `3` and `5`. `addition` is an ordinary JavaScript implementation
object; the owning native function handle is `f`, which is released explicitly.
The surrounding expression also retains its native function dependency.

### Case 6: Find missing function definitions

Syntax diagnostics and missing-name lists answer different questions. The
diagnostic explains the failure; the lists help an application request or
construct the required definitions. This example needs functions `f` and `g`,
and argument `x`.

<!-- mx-example {"id":"C2-example-046","chapter":"C2-chapter-009","case":"C2-case-045","nativeSyntax":true,"nativeMissingFunctions":true} -->
```javascript
{
  const e = new mx.Expression('2sin(pi)+2f(1)g(3,4)+4*x');
  try {
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); }
}
```

### Case 7: Missing functions and implied multiplication

As with missing arguments, known keywords can split an apparently unknown
name. With the default keywords, `e` inside `CasterAttack` is Euler's number.
Inspect the canonical form and both name lists before creating definitions.

<!-- mx-example {"id":"C2-example-047","chapter":"C2-chapter-009","case":"C2-case-046","nativeCanonical":true,"nativeMissingFunctions":true} -->
```javascript
{
  const e = new mx.Expression('3*CasterAttack(4,5)');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); }
}
```

#### Solution 1: Disable implied multiplication on this expression

The full name `CasterAttack` is then reported as a missing function. Other
expressions keep their own mode.

<!-- mx-example {"id":"C2-example-048","chapter":"C2-chapter-009","case":"C2-case-046","nativeCanonical":true,"nativeMissingFunctions":true} -->
```javascript
{
  const e = new mx.Expression('3*CasterAttack(4,5)');
  try {
    e.disableImpliedMultiplicationMode();
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); }
}
```

#### Solution 2: Change the module default before construction

Restore the previous default when the demonstration finishes.

<!-- mx-example {"id":"C2-example-049","chapter":"C2-chapter-009","case":"C2-case-046","nativeCanonical":true,"nativeMissingFunctions":true} -->
```javascript
{
  const previous = mx.mXparser.checkIfImpliedMultiplicationMode();
  mx.mXparser.disableImpliedMultiplicationMode();
  let e;
  try {
    e = new mx.Expression('3*CasterAttack(4,5)');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally {
    e?.delete();
    if (previous) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}
```

#### Solution 3: Remove the colliding built-in keyword

This changes keyword recognition for the module. Like the previous chapter's
keyword demonstrations, this example assumes the default keyword set and
restores the change it makes.

<!-- mx-example {"id":"C2-example-050","chapter":"C2-chapter-009","case":"C2-case-046","nativeCanonical":true,"nativeMissingFunctions":true} -->
```javascript
{
  mx.mXparser.removeBuiltinTokens('e');
  let e;
  try {
    e = new mx.Expression('3*CasterAttack(4,5)');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e?.delete(); mx.mXparser.unremoveBuiltinTokens('e'); }
}
```

#### Solution 4: Rename the built-in keyword

Rename `e` to `ee` to keep access to the same built-in constant under its new
name, while allowing the full missing function name to be recognized.

<!-- mx-example {"id":"C2-example-051","chapter":"C2-chapter-009","case":"C2-case-046","nativeCanonical":true,"nativeMissingFunctions":true} -->
```javascript
{
  mx.mXparser.modifyBuiltinToken('e', 'ee');
  let e;
  try {
    e = new mx.Expression('3*CasterAttack(4,5)');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e?.delete(); mx.mXparser.unmodifyBuiltinTokens('e'); }
}
```

<!-- c2-chapter: C2-chapter-010 -->
## 10. Expression pre-compilation

The engine checks grammar, resolves definitions and prepares its native token
stream before evaluating an expression. A successful `checkSyntax()` records
the syntax result; `calculate()` also performs the required syntax check.
The native engine retains prepared calculation information for later calls.

Changing an argument's numeric value lets an existing expression use that new
value. Structural changes, such as changing expression text, definition text or
definition names, notify dependent expressions and invalidate the appropriate
native preparation. The JavaScript layer does not maintain another cache.

### Case 1: Reconstructing the expression for every value

This comparison deliberately creates new native objects on every iteration.
It repeats construction and preparation 100000 times. Release both handles in
every iteration; the example does not rely on JavaScript garbage collection.

<!-- mx-example {"id":"C2-example-052","chapter":"C2-chapter-010","case":"C2-case-047","nativeReference":true} -->
```javascript
{
  const started = performance.now();
  let lastResult = NaN;
  for (let i = 0; i < 100000; i++) {
    const x = new mx.Argument('x');
    const e = new mx.Expression('2sin(x)', x);
    try {
      x.setArgumentValue(i);
      lastResult = e.calculate();
    } finally { e.delete(); x.delete(); }
  }
  const finished = performance.now();
  console.log('Computing time =', Number(finished - started) / 1000, 's');
  console.log('2sin(x)', lastResult);
}
```

Native millisecond timestamps use `bigint`. Convert their elapsed difference
to `number` for the displayed duration. The last value is also printed so the
calculation can be checked independently of its timing.

### Case 2: Reuse the expression and mutate the argument

Create `x` and `e` once, then change only the argument value. This is the
pattern to use for repeated evaluations of the same expression structure.

As in the original example, the three smart-rounding settings are disabled
while measuring this loop. Those settings can affect numerical results as well
as execution cost; choose them deliberately for the application. This example
restores their previous values when finished.

<!-- mx-example {"id":"C2-example-053","chapter":"C2-chapter-010","case":"C2-case-048","nativeReference":true} -->
```javascript
{
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const previousAlmostInt = mx.mXparser.checkIfAlmostIntRounding();
  mx.mXparser.disableUlpRounding();
  mx.mXparser.disableCanonicalRounding();
  mx.mXparser.disableAlmostIntRounding();
  let x, e;
  try {
    const started = performance.now();
    x = new mx.Argument('x');
    e = new mx.Expression('2sin(x)', x);
    let lastResult = NaN;
    for (let i = 0; i < 100000; i++) {
      x.setArgumentValue(i);
      lastResult = e.calculate();
    }
    const finished = performance.now();
    console.log('Computing time =', Number(finished - started) / 1000, 's');
    console.log(e.getExpressionString(), lastResult);
  } finally {
    e?.delete(); x?.delete();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
    if (previousAlmostInt) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
  }
}
```

Elapsed times depend on the runtime, hardware, warm-up and concurrent work.
These two examples also differ in their rounding configuration. They teach the
construction and reuse patterns; their timings do not isolate the cost of
pre-compilation alone or establish a portable speed ratio.

<!-- c2-chapter: C2-chapter-011 -->
## 11. Summation and product operators

Iterated operators evaluate a body repeatedly with a local iteration variable.
The bounds, body and optional increment belong to the expression language;
the original native engine performs the iteration.

### Case 1: Summation

`sum(i, 1, 10, 2*i)` adds twice each integer from 1 through 10. The optional
fifth parameter changes the increment: `0.5` visits 1, 1.5, …, 10.

<!-- mx-example {"id":"C2-example-054","chapter":"C2-chapter-011","case":"C2-case-049","nativeReference":true} -->
```javascript
{
  for (const text of ['sum(i, 1, 10, 2*i)', 'sum(i, 1, 10, i, 0.5)']) {
    const e = new mx.Expression(text);
    try { console.log(e.getExpressionString(), e.calculate()); }
    finally { e.delete(); }
  }
}
```

These sums are `110` and `104.5`. The JavaScript loop simply displays the two
examples; each summation itself runs entirely inside the native expression.

### Case 2: Product

`prod` multiplies the body values over the same kind of iteration range. With
an increment of `0.5`, the values of `2*i` in the second example are 2 through 10.

<!-- mx-example {"id":"C2-example-055","chapter":"C2-chapter-011","case":"C2-case-050","nativeReference":true} -->
```javascript
{
  for (const text of ['prod(i, 1, 5, i)', 'prod(i, 1, 5, 2*i, 0.5)']) {
    const e = new mx.Expression(text);
    try { console.log(e.getExpressionString(), e.calculate()); }
    finally { e.delete(); }
  }
}
```

The products are `120` and `3628800`, respectively.

### Case 3: Approximate sine with a Taylor series

The expression below subtracts a truncated Taylor series from the built-in
`sin(x)`. Its result is the approximation residual. The sum runs from `k=0`
through `k=n`, so `n=3` includes four terms.

<!-- mx-example {"id":"C2-example-056","chapter":"C2-chapter-011","case":"C2-case-051","nativeReference":true} -->
```javascript
{
  const x = new mx.Argument('x = 2*pi');
  const n = new mx.Argument('n = 3');
  const e = new mx.Expression('sin(x) - sum(k, 0, n, (-1)^k*(x^(2*k+1))/(2*k+1)! )', x, n);
  try {
    console.log(e.getExpressionString(), e.calculate());
    n.setArgumentValue(5);
    console.log(e.getExpressionString(), e.calculate());
    n.setArgumentValue(10);
    console.log(e.getExpressionString(), e.calculate());
    n.setArgumentValue(20);
    console.log(e.getExpressionString(), e.calculate());
    x.setArgumentValue(2);
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); n.delete(); x.delete(); }
}
```

At `x=2*pi`, a short truncation initially has a large residual; increasing
`n` improves this approximation. Changing `x` to 2 demonstrates another input
without reconstructing the expression. A displayed zero reflects the native
floating-point calculation and active rounding settings; it does not prove
that a finite Taylor polynomial equals sine mathematically.

The current C++ engine leaves a small nonzero residual for the `n=20`,
`x=2*pi` calculation with these defaults. In the final `x=2` calculation, the
WASM backend returns `-0`; the native MSVC backend returns `+0`. A native replay
shows a one-ULP difference in the series sum before the final rounding. The
JavaScript interface preserves the exact WASM result, including its zero sign.

### Case 4: Approximate pi using the area of a semicircle

For `-1 <= x <= 1`, `sqrt(1-x^2)` describes the upper unit semicircle. Its
integral is half of pi. The following sum approximates that integral with
increments `d`, then multiplies by 2.

<!-- mx-example {"id":"C2-example-057","chapter":"C2-chapter-011","case":"C2-case-052","nativeReference":true} -->
```javascript
{
  const d = new mx.Argument('d', 0.1);
  const e = new mx.Expression('2 * sum(x, -1, 1, d*sqrt(1-x^2), d)', d);
  try {
    console.log(e.getExpressionString(), 'd =', d.getArgumentValue(), e.calculate());
    d.setArgumentValue(0.01);
    console.log(e.getExpressionString(), 'd =', d.getArgumentValue(), e.calculate());
  } finally { e.delete(); d.delete(); }
}
```

The smaller increment gives a closer approximation in this example. The sum
still uses finite steps and should be interpreted as a numerical approximation.

<!-- c2-chapter: C2-chapter-012 -->
## 12. Derivatives and integrals

mXparser calculates derivatives and definite integrals numerically. The
expressions below compare numerical derivatives with known analytical results.
A small residual measures numerical error; these operations do not produce a
symbolic derivative or antiderivative. Use radians for the trigonometric
comparisons in this chapter, as in the default engine configuration.

### Case 1: A derivative at an explicit point

The third parameter of `der` supplies the evaluation point. Since the derivative
of sine is cosine, this subtraction should be close to zero.

<!-- mx-example {"id":"C2-example-058","chapter":"C2-chapter-012","case":"C2-case-053","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('cos(1) - der(sin(x), x, 1)');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

Here `x` is the local differentiation variable; this form does not require an
external `Argument` object.

### Case 2: Use an argument's value as the evaluation point

Omit the third parameter to use the current value of the supplied argument.

<!-- mx-example {"id":"C2-example-059","chapter":"C2-chapter-012","case":"C2-case-054","nativeReference":true} -->
```javascript
{
  const x = new mx.Argument('x = 1');
  const e = new mx.Expression('cos(x) - der(sin(x), x)', x);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); x.delete(); }
}
```

The expression owns its native dependency while it is needed. The `finally`
block releases the two JavaScript handles deterministically.

### Case 3: Left and right derivatives at an explicit point

The absolute-value function has different one-sided derivatives at zero.
`der-` approaches from the left and `der+` from the right.

<!-- mx-example {"id":"C2-example-060","chapter":"C2-chapter-012","case":"C2-case-055","nativeReference":true} -->
```javascript
{
  const left = new mx.Expression('der-(abs(x), x, 0)');
  const right = new mx.Expression('der+(abs(x), x, 0)');
  try {
    console.log(left.getExpressionString(), left.calculate());
    console.log(right.getExpressionString(), right.calculate());
  } finally { right.delete(); left.delete(); }
}
```

These derivatives are `-1` and `1`. Their difference explains why an ordinary
two-sided derivative of `abs(x)` does not exist at zero.

### Case 4: One-sided derivatives using an argument

The forms without an explicit point also work with one-sided derivatives.

<!-- mx-example {"id":"C2-example-061","chapter":"C2-chapter-012","case":"C2-case-056","nativeReference":true} -->
```javascript
{
  const x = new mx.Argument('x = 0');
  const left = new mx.Expression('der-(abs(x), x)', x);
  const right = new mx.Expression('der+(abs(x), x)', x);
  try {
    console.log(left.getExpressionString(), left.calculate());
    console.log(right.getExpressionString(), right.calculate());
  } finally { right.delete(); left.delete(); x.delete(); }
}
```

### Case 5: Differentiate a Taylor polynomial at explicit points

The body of `der` may itself contain an iterated operator. This example
differentiates the same truncated sine series at three points and compares
each result with cosine. The residual includes both the polynomial's
approximation error and the numerical differentiation error.

<!-- mx-example {"id":"C2-example-062","chapter":"C2-chapter-012","case":"C2-case-057","nativeReference":true} -->
```javascript
{
  for (const text of [
    'cos(1) - der( sum(k,0,10,(-1)^k*(x^(2*k+1))/(2*k+1)!), x, 1)',
    'cos(2) - der( sum(k,0,10,(-1)^k*(x^(2*k+1))/(2*k+1)!), x, 2)',
    'cos(3) - der( sum(k,0,10,(-1)^k*(x^(2*k+1))/(2*k+1)!), x, 3)',
  ]) {
    const e = new mx.Expression(text);
    try { console.log(e.getExpressionString(), e.calculate()); }
    finally { e.delete(); }
  }
}
```

### Case 6: Reuse the expression at changing argument values

The argument-based form keeps one expression and changes its evaluation point.
Each `calculate()` uses the current value of `x`.

<!-- mx-example {"id":"C2-example-063","chapter":"C2-chapter-012","case":"C2-case-058","nativeReference":true} -->
```javascript
{
  const x = new mx.Argument('x = 1');
  const e = new mx.Expression('cos(x) - der( sum(k,0,10,(-1)^k*(x^(2*k+1))/(2*k+1)!), x)', x);
  try {
    console.log(e.getExpressionString(), e.calculate());
    x.setArgumentValue(2);
    console.log(e.getExpressionString(), e.calculate());
    x.setArgumentValue(3);
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}
```

### Case 7: Approximate pi with a definite integral

`int(body, variable, lower, upper)` integrates the body over the given interval.
The area under the upper unit semicircle is half of pi, so doubling it gives
a numerical approximation to pi.

<!-- mx-example {"id":"C2-example-064","chapter":"C2-chapter-012","case":"C2-case-059","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('2 * int( sqrt(1-x^2), x, -1, 1 )');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

Floating-point values and final digits depend on the native numerical
calculation. The expression performs the integration in the original C++
engine; JavaScript only constructs it and displays the result.

<!-- c2-chapter: C2-chapter-013 -->
## 13. Solve equations of the form f(x) = 0

`solve(body, variable, lower, upper)` searches for a root numerically. Supply
the expression whose value should become zero, the unknown variable and a
search interval. The result is a numeric root, not a symbolic rearrangement
of the equation. Failure to find a root can return `NaN`.

### Case 1: Solve a linear equation

The equation `2*x - 4 = 0` has the root 2, inside the given interval.

<!-- mx-example {"id":"C2-example-065","chapter":"C2-chapter-013","case":"C2-case-060","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('solve( 2*x - 4, x, 0, 10 )');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 2: Solve a trigonometric equation with a bracketed root

Cosine changes sign between 0 and pi. The root in that interval is pi/2;
the numerical result reflects the native solver's precision and rounding.

<!-- mx-example {"id":"C2-example-066","chapter":"C2-chapter-013","case":"C2-case-061","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('solve( cos(x), x, 0, pi )');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 3: An interval containing roots without bracketing one

Cosine has the same sign at both endpoints of `[-pi, pi]`, even though that
interval contains two roots. The original native solver tries a random search
for a bracket before continuing its numerical iteration. Either root may be
found; the negative root printed in the historical article is one outcome,
not a guarantee that the solver always selects the left root.

This example seeds the native generator to make its run reproducible within
the same runtime. The extra setup controls the search's random input; it does
not replace the solver. Restore the previous generator after the calculation.
Identical seeds are not a cross-standard-library sequence guarantee.

<!-- mx-example {"id":"C2-example-067","chapter":"C2-chapter-013","case":"C2-case-062","nativeReference":true} -->
```javascript
{
  const previous = mx.ProbabilityDistributions.randomGenerator;
  const random = new mx.Random(1729);
  const e = new mx.Expression('solve( cos(x), x, -pi, pi )');
  try {
    mx.mXparser.setRandomGenerator(random);
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previous;
    e.delete(); random.delete(); previous?.delete();
  }
}
```

The historical Case heading accidentally lists `[pi, pi]`; its actual code
uses `[-pi, pi]`, which is preserved here.

### Case 4: Keep other parameters as arguments

Only `x` is the unknown. The independent argument `y` supplies the current
parameter value 4, so the solution of `x-y = 0` is 4.

<!-- mx-example {"id":"C2-example-068","chapter":"C2-chapter-013","case":"C2-case-063","nativeReference":true} -->
```javascript
{
  const y = new mx.Argument('y = 4');
  const e = new mx.Expression('solve( x-y, x, 0, 10 )', y);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); y.delete(); }
}
```

### Case 5: Solve for a stationary point

A derivative may be the body of `solve`. Here a zero of the numerical
derivative of sine locates a stationary point near pi/2. This combines two
numerical calculations; it does not perform symbolic differentiation.

<!-- mx-example {"id":"C2-example-069","chapter":"C2-chapter-013","case":"C2-case-064","nativeReference":true} -->
```javascript
{
  const x = new mx.Argument('x');
  const e = new mx.Expression('solve( der( sin(x), x ), x, 0, pi )', x);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); x.delete(); }
}
```

<!-- c2-chapter: C2-chapter-014 -->
## 14. Conditional functions: if and iff

Conditional expressions select a value from mathematical conditions. The
selection runs in the native expression engine; a JavaScript `if` statement
is not needed to choose the formula's branch.

### Case 1: Choose between two values

`if(condition, whenTrue, whenFalse)` selects the second parameter when the
condition is true and the third when it is false.

<!-- mx-example {"id":"C2-example-070","chapter":"C2-chapter-014","case":"C2-case-065","nativeReference":true} -->
```javascript
{
  const first = new mx.Expression('if(2<3, 1, 2)');
  const second = new mx.Expression('if(4<3, 1, 2)');
  try {
    console.log(first.getExpressionString(), first.calculate());
    console.log(second.getExpressionString(), second.calculate());
  } finally { second.delete(); first.delete(); }
}
```

The results are 1 and 2.

### Case 2: Recalculate with a changed argument

Both the condition and the selected formula can depend on an argument.
With `x=2` this example selects `x+2`; with `x=4` it selects `x-2`.

<!-- mx-example {"id":"C2-example-071","chapter":"C2-chapter-014","case":"C2-case-066","nativeReference":true,"argumentValues":[2,4]} -->
```javascript
{
  const x = new mx.Argument('x = 2');
  const e = new mx.Expression('if(x<3, x+2, x-2)', x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(4);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}
```

### Case 3: Put the conditional inside a user-defined function

The same formula can be the body of a native mXparser function.

<!-- mx-example {"id":"C2-example-072","chapter":"C2-chapter-014","case":"C2-case-067","nativeReference":true} -->
```javascript
{
  const f = new mx.Function('f(x) = if(x<3, x+2, x-2)');
  const first = new mx.Expression('f(2)', f);
  const second = new mx.Expression('f(4)', f);
  try {
    console.log(first.getExpressionString(), first.calculate());
    console.log(second.getExpressionString(), second.calculate());
  } finally { second.delete(); first.delete(); f.delete(); }
}
```

The two calls return 4 and 2, matching the direct argument-based example.

### Case 4: Select from several condition/value pairs

`iff` checks pairs in order and returns the value belonging to the first
true condition. Semicolons separate the pairs in these examples. When none
of the supplied conditions is true, the result is `NaN`.

<!-- mx-example {"id":"C2-example-073","chapter":"C2-chapter-014","case":"C2-case-068","nativeReference":true,"argumentValues":[0.5,1.5,2.5,3.5]} -->
```javascript
{
  const x = new mx.Argument('x = 0.5');
  const e = new mx.Expression('iff(x<1, 1; x<2, 2; x<3, 3)', x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(1.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(2.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(3.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}
```

The results are 1, 2, 3 and `NaN`. At `x=0.5` all three conditions are true,
so the first pair wins. At `x=3.5` none is true. Use `Number.isNaN(value)`
when testing a returned NaN in application code.

### Case 5: Add more cases

`iff` is variadic; the three-pair example is not a fixed limit. Add further
condition/value pairs to cover additional ranges.

<!-- mx-example {"id":"C2-example-074","chapter":"C2-chapter-014","case":"C2-case-069","nativeReference":true,"argumentValues":[0.5,1.5,2.5,3.5,4.5]} -->
```javascript
{
  const x = new mx.Argument('x = 0.5');
  const e = new mx.Expression('iff(x<1, 1; x<2, 2; x<3, 3; x<4, 4; x<5, 5)', x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(1.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(2.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(3.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(4.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}
```

This sequence returns 1 through 5. Each evaluation uses the current argument
value and the original native conditional implementation.

<!-- c2-chapter: C2-chapter-015 -->
## 15. Built-in constants

Built-in constants are keywords that can appear directly in an expression.
They include mathematical numbers, physical quantities and astronomical
parameters supplied by the engine. Their names and numeric values come from
the checked-out C++ implementation.

### Case 1: Mathematical constants

`pi` denotes the circle constant and `e` the base of the natural logarithm.
They do not require separate `Constant` objects.

<!-- mx-example {"id":"C2-example-075","chapter":"C2-chapter-015","case":"C2-case-070","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('pi+e');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

The result is approximately 5.859874482048838.

### Case 2: Estimate gravitational acceleration on the Moon

The expression combines the stored gravitational constant `[G.]`, Moon mass
`[Moon-M]` and mean radius `[Moon-R]` using the formula `G*M/R^2`. The bracketed
unit keywords `[m]` and `[s]` are the native engine's numeric unit factors.

<!-- mx-example {"id":"C2-example-076","chapter":"C2-chapter-015","case":"C2-case-071","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('( [G.] * [Moon-M] / [Moon-R]^2 ) * ( [m] / [s]^2 )');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

This gives about 1.6247 for the supplied constants and base-unit factors.
These are stored engine values, not measurements retrieved from an external
service. The following chapter explains the built-in unit keywords.

### Case 3: Discover the available constants

Query the current engine's help instead of depending on a historical list.
In this English-language tutorial, `constant` finds matching keyword metadata.

<!-- mx-example {"id":"C2-example-077","chapter":"C2-chapter-015","case":"C2-case-072","nativeText":true} -->
```javascript
{
  const e = new mx.Expression();
  try { console.log(e.getHelp('constant')); }
  finally { e.delete(); }
}
```

The returned text lists keywords, types, syntax, introduction versions and
descriptions. Alongside `pi` and `e`, it includes named mathematical constants,
physical constants and astronomical quantities. The current result can differ
from the older article's table as the engine's vocabulary and descriptions
develop; the query itself retains its native behavior.

<!-- c2-chapter: C2-chapter-016 -->
## 16. Built-in units

Unit keywords are numeric conversion factors inside expressions. Multiply a
quantity by its unit factor, combine compatible quantities, then divide by
the desired output unit. mXparser performs this arithmetic in the native
engine. It does not attach a separate dimension type to the returned number.

### Case 1: Combine distances and express the result in kilometers

<!-- mx-example {"id":"C2-example-078","chapter":"C2-chapter-016","case":"C2-case-073","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('( 95*[cm] + 200*[m] + 1*[km] ) / [km]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

The sum is 1200.95 meters, or 1.20095 kilometers. Dividing by `[km]` expresses
the numeric result in kilometers.

### Case 2: Combine time intervals

<!-- mx-example {"id":"C2-example-079","chapter":"C2-chapter-016","case":"C2-case-074","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('( 60*[min] + 2*[h] ) / [h]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

Sixty minutes plus two hours gives 3 hours.

### Case 3: Convert information units

The keyword spelling distinguishes bits (`b`) from bytes (`B`).

<!-- mx-example {"id":"C2-example-080","chapter":"C2-chapter-016","case":"C2-case-075","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('8*[Mb] / [MB]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

Eight megabits correspond to 1 megabyte with these engine unit factors.

### Case 4: Convert liters to cubic meters

<!-- mx-example {"id":"C2-example-081","chapter":"C2-chapter-016","case":"C2-case-076","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('2000*[l] / [m3]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

The result is 2 cubic meters.

### Case 5: Express feet in inches

Implied multiplication also works between a numeric literal and a bracketed
unit keyword. The expression below is equivalent to `4*[ft]/[inch]`.

<!-- mx-example {"id":"C2-example-082","chapter":"C2-chapter-016","case":"C2-case-077","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('4[ft]/[inch]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

Four feet equal 48 inches. This spelling relies on implied multiplication
being enabled, as it is in the default configuration used here.

### Case 6: Express a rectangle's area in square kilometers

<!-- mx-example {"id":"C2-example-083","chapter":"C2-chapter-016","case":"C2-case-078","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('100[m] * 2[km] / [km2]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

The 100-meter by 2-kilometer rectangle has an area of 0.2 square kilometers.
Use the area factor `[km2]` when choosing that output unit.

### Case 7: List the supported units

The advanced help query `type=unit` filters by keyword type. It includes
physical units and dimensionless factors such as percentages and metric
prefixes. The current engine supplies the complete table.

<!-- mx-example {"id":"C2-example-084","chapter":"C2-chapter-016","case":"C2-case-079","nativeConsole":true,"nativeContains":["type=unit","[km]","[inch]","[m3]","[MB]"]} -->
```javascript
mx.mXparser.consolePrintHelp('type=unit');
```

The table documents each keyword's spelling, introduction version and meaning.
Names are expression syntax, so preserve their case and brackets. JavaScript
does not translate these unit names when changing the user-interface language.

<!-- c2-chapter: C2-chapter-017 -->
## 17. Metric prefixes

Metric-prefix keywords provide dimensionless powers-of-ten factors. They use
brackets like unit keywords, and their spelling is case-sensitive. For
example, `[M]` is the million/mega factor and `[k]` the thousand/kilo factor.

### Case 1: Express ten millions in thousands

<!-- mx-example {"id":"C2-example-085","chapter":"C2-chapter-017","case":"C2-case-080","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('10*[M] / [k]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

The result is 10000: ten million contains ten thousand groups of one thousand.
The prefix factors participate in the ordinary native arithmetic expression.

### Case 2: Discover the supported prefixes

<!-- mx-example {"id":"C2-example-086","chapter":"C2-chapter-017","case":"C2-case-081","nativeConsole":true,"nativeContains":["metric prefix","[M]","[k]","[milli]","[mic]"]} -->
```javascript
mx.mXparser.consolePrintHelp('metric prefix');
```

This English help query lists the current prefix keywords and descriptions,
including large factors and fractions. Consult the returned table for exact
spellings and aliases. A factor keyword such as `[milli]` is distinct from a
physical unit keyword such as `[m]`, which denotes the meter.

<!-- c2-chapter: C2-chapter-018 -->
## 18. Bitwise operators

The engine's bitwise operators start with `@`. Their operands and results pass
through the existing C++ numeric rules; `calculate()` still returns a JavaScript
`number`. Keep the operation inside the mathematical expression. JavaScript's
own bitwise operators have different conversion rules and do not evaluate this
expression syntax.

Each pair below writes the same operands in decimal and binary (`b.`) notation.
The second output uses the native `convDecimal2OthBase()` formatter to display
the result in base two. Its minus sign represents a negative number; it does
not print a fixed-width two's-complement bit pattern.

### Case 1: Bitwise unary complement

<!-- mx-example {"id":"C2-example-087","chapter":"C2-chapter-018","case":"C2-case-082","nativeReference":true,"nativeRadix":true} -->
```javascript
{
  const e1 = new mx.Expression("@~ 2");
  const e2 = new mx.Expression("@~ b.10");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}
```

Complementing 2 gives −3, displayed as `-11` in base two.

### Case 2: Bitwise AND

<!-- mx-example {"id":"C2-example-088","chapter":"C2-chapter-018","case":"C2-case-083","nativeReference":true,"nativeRadix":true} -->
```javascript
{
  const e1 = new mx.Expression("13 @& 10");
  const e2 = new mx.Expression("b.1101 @& b.1010");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}
```

AND keeps the positions set in both operands: 13 AND 10 gives 8 (`1000`).

### Case 3: Bitwise exclusive OR

<!-- mx-example {"id":"C2-example-089","chapter":"C2-chapter-018","case":"C2-case-084","nativeReference":true,"nativeRadix":true} -->
```javascript
{
  const e1 = new mx.Expression("13 @^ 10");
  const e2 = new mx.Expression("b.1101 @^ b.1010");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}
```

Exclusive OR keeps positions set in exactly one operand: the result is 7 (`111`).

### Case 4: Bitwise inclusive OR

<!-- mx-example {"id":"C2-example-090","chapter":"C2-chapter-018","case":"C2-case-085","nativeReference":true,"nativeRadix":true} -->
```javascript
{
  const e1 = new mx.Expression("13 @| 10");
  const e2 = new mx.Expression("b.1101 @| b.1010");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}
```

Inclusive OR keeps positions set in either operand: the result is 15 (`1111`).

### Case 5: Signed left shift

<!-- mx-example {"id":"C2-example-091","chapter":"C2-chapter-018","case":"C2-case-086","nativeReference":true,"nativeRadix":true} -->
```javascript
{
  const e1 = new mx.Expression("13 @<< 2");
  const e2 = new mx.Expression("b.1101 @<< b.10");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}
```

Shifting 13 left by two positions gives 52 (`110100`).

### Case 6: Signed right shift

<!-- mx-example {"id":"C2-example-092","chapter":"C2-chapter-018","case":"C2-case-087","nativeReference":true,"nativeRadix":true} -->
```javascript
{
  const e1 = new mx.Expression("13 @>> 2");
  const e2 = new mx.Expression("b.1101 @>> b.10");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}
```

Shifting 13 right by two positions gives 3 (`11`).

### Case 7: Discover NAND, NOR and XNOR

The historical article's heading calls the last operation XOR, but its actual
keyword table describes `@~^` as exclusive NOR (XNOR). Preserve the operator
descriptions returned by the current engine. `getHelpAsHtmlTable()` returns
HTML text; logging it does not render a browser table.

<!-- mx-example {"id":"C2-example-093","chapter":"C2-chapter-018","case":"C2-case-088","nativeText":true} -->
```javascript
console.log(mx.mXparser.getHelpAsHtmlTable('bitwise'));
```

The returned table also documents `@~&` (NAND), `@~|` (NOR), shifts and the other
bitwise keywords, with their syntax and introduction versions. Querying help
does not change the expression language.

<!-- c2-chapter: C2-chapter-019 -->
## 19. Variadic user-defined functions

Use `...` in a function definition to accept a variable number of parameters.
Inside that function, `[npar]` is the number supplied for the current call and
`par(i)` accesses the parameter at the engine's one-based index `i`. These are
native expression features; JavaScript only supplies the function definition
and calls the resulting objects.

### Case 1: Return the number of supplied parameters

<!-- mx-example {"id":"C2-example-094","chapter":"C2-chapter-019","case":"C2-case-089","nativeReference":true} -->
```javascript
{
  const f = new mx.Function("f(...) = [npar]");
  const e1 = new mx.Expression("f(5)", f);
  const e2 = new mx.Expression("f(5,2)", f);
  const e3 = new mx.Expression("f(5,2,4)", f);
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
  } finally { e3.delete(); e2.delete(); e1.delete(); f.delete(); }
}
```

The three calls return 1, 2 and 3.

### Case 2: Add the first and last parameters

<!-- mx-example {"id":"C2-example-095","chapter":"C2-chapter-019","case":"C2-case-090","nativeReference":true} -->
```javascript
{
  const f = new mx.Function("f(...) = par(1) + par([npar])");
  const e1 = new mx.Expression("f(5)", f);
  const e2 = new mx.Expression("f(5,2)", f);
  const e3 = new mx.Expression("f(5,2,4)", f);
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
  } finally { e3.delete(); e2.delete(); e1.delete(); f.delete(); }
}
```

With one parameter, the first and last positions refer to the same value, so `f(5)` returns 10. The other results are 7 and 9.

### Case 3: Select a parameter using the first parameter

<!-- mx-example {"id":"C2-example-096","chapter":"C2-chapter-019","case":"C2-case-091","nativeReference":true} -->
```javascript
{
  const f = new mx.Function("f(...) = par(par(1))");
  const e1 = new mx.Expression("f(5)", f);
  const e2 = new mx.Expression("f(1,2)", f);
  const e3 = new mx.Expression("f(3,2,4)", f);
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
  } finally { e3.delete(); e2.delete(); e1.delete(); f.delete(); }
}
```

`f(5)` requests a fifth parameter that does not exist and returns `NaN`. The other calls select their first and third parameters, returning 1 and 4.

### Case 4: Sum the squares of all parameters

<!-- mx-example {"id":"C2-example-097","chapter":"C2-chapter-019","case":"C2-case-092","nativeReference":true} -->
```javascript
{
  const f = new mx.Function("f(...) = sum(i, 1, [npar], par(i)^2)");
  const e1 = new mx.Expression("f(5)", f);
  const e2 = new mx.Expression("f(1,2)", f);
  const e3 = new mx.Expression("f(3,2,4)", f);
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
  } finally { e3.delete(); e2.delete(); e1.delete(); f.delete(); }
}
```

The native iterated sum visits indices 1 through `[npar]`. The results are 25, 5 and 29.

### Case 5: Implement a variadic extension in JavaScript

Implement the original `FunctionExtensionVariadic` interface when a function
must call application code. Its `calculate(parameters)` method receives a
borrowed native list, or `null`, matching the C++ interface. Read or iterate
the list synchronously. The borrowed handle is valid for that callback; use
`cloneHandle()` and later `.delete()` only if you need to retain its native list.
This example does not retain it.

`clone()` must return a valid implementation with the intended independent
state. Here each clone is a new stateless `SumVar`. Ordinary evaluation and
`cloneForThreadSafe()` remain synchronous; this name does not transfer a
JavaScript callback into another browser Worker.

<!-- mx-example {"id":"C2-example-098","chapter":"C2-chapter-019","case":"C2-case-093","nativeReference":true} -->
```javascript
{
  class SumVar extends mx.FunctionExtensionVariadic {
    calculate(parameters) {
      if (parameters === null || parameters.size() === 0) return NaN;
      let result = 0;
      for (const value of parameters) result += value;
      return result;
    }
    clone() { return new SumVar(); }
  }
  const sumVar = new mx.Function('sumVar', new SumVar());
  const e1 = new mx.Expression('sumVar(1)', sumVar);
  const e2 = new mx.Expression('sumVar(1,2)', sumVar);
  const e3 = new mx.Expression('sumVar(1,2,3)', sumVar);
  let copied;
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
    copied = sumVar.cloneForThreadSafe();
    if (copied.calculate(1, 2, 3) !== 6) throw new Error('Extension clone failed');
  } finally {
    copied?.delete(); e3.delete(); e2.delete(); e1.delete(); sumVar.delete();
  }
}
```

The printed results are 1, 3 and 6. The final check exercises the native clone
path and its call back into `SumVar.clone()`. JavaScript extension instances
are application objects; the native `Function` handle is explicitly deleted.
The expression handles keep their function dependency alive until they are
deleted, so a normal graph needs no manual removal of definitions.

The historical 266-block index contains the extension declaration but omits
the following usage block from the complete article. This example includes
that original three-call usage. The index also decoded `&parameters` as
`¶meters`; the full article supplies the correct C++ parameter spelling.

<!-- c2-chapter: C2-chapter-020 -->
## 20. User-defined constants

A `Constant` supplies a named value to an expression. Create it from a name and
value or from a definition string. The expression keeps native shared ownership
of the supplied constants, just as it does for arguments and functions.

<!-- mx-example {"id":"C2-example-099","chapter":"C2-chapter-020","case":null,"nativeReference":true} -->
```javascript
{
  const a = new mx.Constant('a', 5);
  const b = new mx.Constant('b = 10');
  const e = new mx.Expression('a+b', a, b);
  try {
    console.log(a.getConstantName(), a.getConstantValue());
    console.log(b.getConstantName(), b.getConstantValue());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); b.delete(); a.delete(); }
}
```

The named values are 5 and 10, and `a+b` evaluates to 15. Values and names come
from the native `Constant` objects; no JavaScript variable substitution occurs.

<!-- c2-chapter: C2-chapter-021 -->
## 21. Fast recursion with RecursiveArgument

`RecursiveArgument` represents a recursively defined sequence indexed by one
argument. Provide its base cases explicitly. The original engine manages the
recursive evaluation and previously calculated sequence values; JavaScript
does not implement a recursive evaluator or a second cache.

### Case 1: Fibonacci numbers from a definition string

<!-- mx-example {"id":"C2-example-100","chapter":"C2-chapter-021","case":"C2-case-094","nativeReference":true} -->
```javascript
{
  const fib = new mx.RecursiveArgument('fib(n) = fib(n-1) + fib(n-2)');
  fib.addBaseCase(0, 0);
  fib.addBaseCase(1, 1);
  const e = new mx.Expression('fib(10)', fib);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('fib(11)', fib.getArgumentValue(11));
  } finally { e.delete(); fib.delete(); }
}
```

The two values are 55 and 89. The second call uses `getArgumentValue(index)`
directly on the sequence object.

### Case 2: Supply the name, body and index separately

The separate constructor avoids parsing the combined definition's outer name
and index declaration. Its recursive mathematical body and base cases are the
same as in the first example; it does not change the Fibonacci sequence.

<!-- mx-example {"id":"C2-example-101","chapter":"C2-chapter-021","case":"C2-case-095","nativeReference":true} -->
```javascript
{
  const fib = new mx.RecursiveArgument('fib', 'fib(n-1) + fib(n-2)', 'n');
  fib.addBaseCase(0, 0);
  fib.addBaseCase(1, 1);
  const e = new mx.Expression('fib(10)', fib);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('fib(11)', fib.getArgumentValue(11));
  } finally { e.delete(); fib.delete(); }
}
```

The two values are 55 and 89. The second call uses `getArgumentValue(index)`
directly on the sequence object.

<!-- c2-chapter: C2-chapter-022 -->
## 22. Recursion with user-defined functions

A recursive `Function` can have multiple parameters and can call other
functions. The historical title “not limited” refers to the single-index
restriction of `RecursiveArgument`, not to unlimited stack space or execution
time. The current engine's recursion safeguards and the runtime's resources
still apply. Define a terminating base case for every intended input.

### Case 1: Fibonacci numbers as a recursive function

The historical C++ subsection contains only an include directive. The complete
article supplies the following definition and calls in its Java/C# example;
they are tested here through the existing native C++ `Function` factory.

<!-- mx-example {"id":"C2-example-102","chapter":"C2-chapter-022","case":"C2-case-096","nativeReference":true} -->
```javascript
{
  const fib = new mx.Function('fib(n) = if( n>1, fib(n-1)+fib(n-2), if(n>0, 1, 0) )');
  const e = new mx.Expression('fib(10)', fib);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('fib(11)', fib.calculate(11));
  } finally { e.delete(); fib.delete(); }
}
```

The calls return 55 and 89. Unlike `RecursiveArgument`, the function expresses
its terminating cases inside the conditional expression.

### Case 2: A recursive binomial coefficient with two parameters

Pascal's recurrence combines two smaller coefficients and returns 1 at its
boundaries. The first expression compares that definition with the built-in
`C(n,k)` function; the second calls the user-defined function directly.

<!-- mx-example {"id":"C2-example-103","chapter":"C2-chapter-022","case":"C2-case-097","nativeReference":true} -->
```javascript
{
  const Cnk = new mx.Function('Cnk(n,k) = if( k>0, if( k<n, Cnk(n-1,k-1)+Cnk(n-1,k), 1), 1)');
  const e = new mx.Expression('Cnk(10,3) - C(10,3)', Cnk);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('Cnk(10,3)', Cnk.calculate(10, 3));
  } finally { e.delete(); Cnk.delete(); }
}
```

The difference is 0 and the coefficient is 120. The example's recurrence is
intended for its stated integer inputs; these conditionals are not an input
validator for every possible real argument.

### Case 3: Recurse on one parameter and carry another unchanged

The Chebyshev recurrence decreases `n` while keeping `x` fixed. This example
compares its result at `n=5`, `x=2` with the closed expression in the article.

<!-- mx-example {"id":"C2-example-104","chapter":"C2-chapter-022","case":"C2-case-098","nativeReference":true} -->
```javascript
{
  const T = new mx.Function('T(n,x) = if(n>1, 2*x*T(n-1,x)-T(n-2,x), if(n>0, x, 1) )');
  const k = new mx.Argument('k = 5');
  const x = new mx.Argument('x = 2');
  const e = new mx.Expression('T(k,x) - ( (x + sqrt(x^2-1))^k + (x - sqrt(x^2-1))^k)/2', T, k, x);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); x.delete(); k.delete(); T.delete(); }
}
```

The engine performs both calculations using its current numeric and rounding
rules. This identity at a particular input does not establish an error bound
for arbitrary large polynomial degrees.

### Case 4: Indirect recursion and a deliberately created owning cycle

The functions `s` and `c` approximate sine and cosine using half-angle
identities and a small-input approximation. Each must refer to the other.
Calling `addDefinitions()` in both directions establishes a genuine mutual
native owning cycle. This is a case where the application must disconnect
the definitions when it is finished, using the existing removal API.

<!-- mx-example {"id":"C2-example-105","chapter":"C2-chapter-022","case":"C2-case-099","nativeReference":true} -->
```javascript
{
  const a = new mx.Constant('a = 0.0001');
  const s = new mx.Function('s(x) = if( abs(x) < a, x, 2*s(x/2)*c(x/2) )', a);
  const c = new mx.Function('c(x) = if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )', a);
  s.addDefinitions(c);
  c.addDefinitions(s);
  const e1 = new mx.Expression('sin(5)-s(5)', s);
  const e2 = new mx.Expression('cos(5)-c(5)', c);
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
  } finally {
    s.removeDefinitions(c);
    c.removeDefinitions(s);
    e2.delete(); e1.delete(); c.delete(); s.delete(); a.delete();
  }
}
```

The differences are approximation errors, not exact zeroes. The original
formulas, threshold and evaluation order remain unchanged. Removing the
mutual definitions happens only after both computations.

Deleting an Embind handle releases that handle's shared ownership. Other
native owners may still keep the object alive. The two removal calls above
break the application-created cycle; the subsequent `.delete()` calls release
the JS handles. Ordinary expression dependencies, engine-created self
references and observers do not require this disconnection. Deleting handles
alone cannot guarantee reclamation of an unbroken mutual owning cycle.

<!-- c2-chapter: C2-chapter-023 -->
## 23. Prime numbers

The native engine supplies primality tests, prime counting, a reusable primes
cache and factorization functions. Their mathematical expression syntax is
unchanged in JavaScript.

### Case 1: Test primality

<!-- mx-example {"id":"C2-example-106","chapter":"C2-chapter-023","case":"C2-case-100","nativeReference":true} -->
```javascript
const previousPrimesCache = mx.mXparser.primesCache;
{
  const e1 = new mx.Expression('ispr(5)');
  const e2 = new mx.Expression('ispr(9)');
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
  } finally { e2.delete(); e1.delete(); }
}
```

Five is prime, so `ispr(5)` returns 1. Nine is composite, so `ispr(9)` returns
0. These are numeric results from the mathematical expression engine.

### Case 2: Count primes

`Pi(n)` counts primes up to the given bound. Its capitalized name distinguishes
it from the constant `pi`. This example retains the original ten-million bound.

<!-- mx-example {"id":"C2-example-107","chapter":"C2-chapter-023","case":"C2-case-101","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('Pi(10000000)');
  try {
    console.log(e.getExpressionString(), e.calculate());
    const seconds = e.getComputingTime();
    if (!Number.isFinite(seconds) || seconds < 0) throw new Error('Invalid elapsed time');
    console.log('Time: ' + seconds + ' s.');
  } finally { e.delete(); }
}
```

The count is 664579. The elapsed time belongs to this execution and machine;
the old article's printed duration is not a performance guarantee.

### Case 3: Initialize a primes cache

Build a cache for the same upper bound before counting again. Initialization
has its own cost; its benefit depends on the subsequent workload. The cache
is original module-global native state, not a JavaScript lookup table.

<!-- mx-example {"id":"C2-example-108","chapter":"C2-chapter-023","case":"C2-case-102","nativeReference":true} -->
```javascript
{
  mx.mXparser.initPrimesCache(10000000);
  const cache = mx.mXparser.primesCache;
  const e = new mx.Expression('Pi(10000000)');
  try {
    if (cache === null || !cache.isInitSuccessful()) throw new Error('Primes cache initialization failed');
    console.log('Primes cache init time: ' + cache.getComputingTime() + ' s.');
    console.log(e.getExpressionString(), e.calculate());
    console.log('Time: ' + e.getComputingTime() + ' s.');
  } finally { e.delete(); cache?.delete(); }
}
```

The count remains 664579. Releasing the local cache handle does not clear the
module's cache: the engine still owns its shared reference.

### Case 4: Compare the count with the offset logarithmic integral

Continue with the cache initialized above. `Li(x)` is the offset logarithmic
integral used here to estimate the count; it is not the prime-counting function.

<!-- mx-example {"id":"C2-example-109","chapter":"C2-chapter-023","case":"C2-case-103","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('Pi(10000000) / Li(10000000)');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

The ratio is close to 1 for this bound. The example illustrates an
approximation, not an equality or a general error bound.

### Case 5: Reconstruct a number from its prime factorization

`nfact(x)` gives the number of distinct prime factors; `factval(x,i)` and
`factexp(x,i)` provide each factor and its exponent. Multiplying those powers
and applying the original sign reconstructs the input in this example.

<!-- mx-example {"id":"C2-example-110","chapter":"C2-chapter-023","case":"C2-case-104","nativeReference":true} -->
```javascript
{
  const x = new mx.Argument('x = 12345');
  const e = new mx.Expression('sgn(x) * prod(i, 1, nfact(x), factval(x, i)^factexp(x, i) )', x);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally {
    e.delete(); x.delete();
    mx.mXparser.primesCache = previousPrimesCache;
    previousPrimesCache?.delete();
  }
}
```

The result is 12345. The final cleanup restores the native cache that existed
before this chapter and releases its saved JS handle, if any. It does not
modify the mathematics or require manual teardown of ordinary dependencies.

<!-- c2-chapter: C2-chapter-024 -->
## 24. Random numbers

Random functions draw from the original native module's generator. Repeated
calls on one expression draw again; they do not cache the previous random
result. The following examples retain the article's distributions, expressions
and sample sizes. For reproducible tutorial validation, each example supplies
a native generator seeded with 1729 and restores the previous generator after
its computations. Remove this explicit seeding when repeatability is unwanted.

Matching seeds are tested within the same runtime and native standard library.
Different C++ standard libraries can map the generator's output to distribution
values differently; a seed does not promise identical sequences across every
native compiler. These examples use the actual engine, not Math.random().

### Case 1: Draw from a continuous uniform distribution

`rUni(1,2)` draws a real value from the native uniform distribution on the given interval.

<!-- mx-example {"id":"C2-example-111","chapter":"C2-chapter-024","case":"C2-case-105","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e = new mx.Expression("rUni(1,2)");
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

### Case 2: Draw from a discrete uniform distribution

`rUnid(1,10)` draws an integer from 1 through 10, including both endpoints.

<!-- mx-example {"id":"C2-example-112","chapter":"C2-chapter-024","case":"C2-case-106","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e = new mx.Expression("rUnid(1,10)");
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

### Case 3: Draw from a normal distribution

`rNor(0,1)` draws from a normal distribution with mean 0 and standard deviation 1. A single value is not restricted to a fixed finite interval.

<!-- mx-example {"id":"C2-example-113","chapter":"C2-chapter-024","case":"C2-case-107","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e = new mx.Expression("rNor(0,1)");
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

### Case 4: Draw from a supplied list

`rList(0,3,6,9,12)` chooses from the supplied values. Its result must be a member of that list.

<!-- mx-example {"id":"C2-example-114","chapter":"C2-chapter-024","case":"C2-case-108","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e = new mx.Expression("rList(0,3,6,9,12)");
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

### Case 5: Estimate the mean of a normal distribution

The original iterated `avg` expressions estimate the mean of N(2, 4) using 10, 100 and 1000 samples. Here the second normal parameter is the standard deviation, so the theoretical mean is 2 and variance is 16.

<!-- mx-example {"id":"C2-example-115","chapter":"C2-chapter-024","case":"C2-case-109","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e10 = new mx.Expression("avg(i, 1,   10, rNor(2,4) )");
  const e100 = new mx.Expression("avg(i, 1,  100, rNor(2,4) )");
  const e1000 = new mx.Expression("avg(i, 1, 1000, rNor(2,4) )");
  try {
    console.log(e10.getExpressionString(), e10.calculate());
    console.log(e100.getExpressionString(), e100.calculate());
    console.log(e1000.getExpressionString(), e1000.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e1000.delete();
    e100.delete();
    e10.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

These estimates fluctuate. Increasing the sample size improves statistical
precision in distribution; it does not guarantee that every successive printed
estimate moves closer to the theoretical value. The tutorial tests native
execution and reproducibility, not a confidence claim from one sample.

### Case 6: Estimate the standard deviation

The `stdi` iterated operator estimates standard deviation from the same three sample sizes. The theoretical standard deviation is 4.

<!-- mx-example {"id":"C2-example-116","chapter":"C2-chapter-024","case":"C2-case-110","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e10 = new mx.Expression("stdi(i, 1,   10, rNor(2,4) )");
  const e100 = new mx.Expression("stdi(i, 1,  100, rNor(2,4) )");
  const e1000 = new mx.Expression("stdi(i, 1, 1000, rNor(2,4) )");
  try {
    console.log(e10.getExpressionString(), e10.calculate());
    console.log(e100.getExpressionString(), e100.calculate());
    console.log(e1000.getExpressionString(), e1000.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e1000.delete();
    e100.delete();
    e10.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

These estimates fluctuate. Increasing the sample size improves statistical
precision in distribution; it does not guarantee that every successive printed
estimate moves closer to the theoretical value. The tutorial tests native
execution and reproducibility, not a confidence claim from one sample.

### Case 7: Estimate the variance

The `vari` iterated operator estimates variance. The theoretical variance is 4²=16.

<!-- mx-example {"id":"C2-example-117","chapter":"C2-chapter-024","case":"C2-case-111","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e10 = new mx.Expression("vari(i, 1,   10, rNor(2,4) )");
  const e100 = new mx.Expression("vari(i, 1,  100, rNor(2,4) )");
  const e1000 = new mx.Expression("vari(i, 1, 1000, rNor(2,4) )");
  try {
    console.log(e10.getExpressionString(), e10.calculate());
    console.log(e100.getExpressionString(), e100.calculate());
    console.log(e1000.getExpressionString(), e1000.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e1000.delete();
    e100.delete();
    e10.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

These estimates fluctuate. Increasing the sample size improves statistical
precision in distribution; it does not guarantee that every successive printed
estimate moves closer to the theoretical value. The tutorial tests native
execution and reproducibility, not a confidence claim from one sample.

The generator object is held by native shared ownership while installed.
Restoring the earlier generator and deleting the temporary handles releases
this example's owners. It does not clear unrelated expression graphs or
replace the engine's global-state semantics. Standard deviation and variance
estimates are nonnegative; the individual normal samples need not be.

<!-- c2-chapter: C2-chapter-025 -->
## 25. Probability density, cumulative probability and quantiles

These functions evaluate a distribution at a supplied point rather than draw a
random sample. In the normal distribution examples, the two parameters are the
mean and standard deviation.

### Case 1: Estimate an expected value using the density

The expectation is the integral of `x` times the probability density. The
article uses N(2, 4) and integrates from −18 to 22, five standard deviations on
either side of the mean. This finite interval omits tails of the full real line.

<!-- mx-example {"id":"C2-example-118","chapter":"C2-chapter-025","case":"C2-case-112","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("int( x * pNor(x, 2, 4), x, -18, 22)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

The result is close to 2. Tail truncation and the native numerical integration
contribute error; this finite numerical integral is not an exact identity.

### Case 2: Use a CDF to calculate the three-sigma probability

Subtract the cumulative probabilities at −3 and 3 for a standard normal
variable. The result is approximately 0.9973, the probability within three
standard deviations of its mean.

<!-- mx-example {"id":"C2-example-119","chapter":"C2-chapter-025","case":"C2-case-113","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("cNor(3,0,1) - cNor(-3,0,1)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 3: Calculate a quantile

The article models a height variable with N(170,15). Its 90th percentile is
`qNor(0.9,170,15)`, approximately 189.22 in the same units as the mean and
standard deviation. This is a mathematical example under an assumed model,
not an empirical fit to a population.

<!-- mx-example {"id":"C2-example-120","chapter":"C2-chapter-025","case":"C2-case-114","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("qNor(0.9, 170, 15)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

<!-- c2-chapter: C2-chapter-026 -->
## 26. Built-in random variables

Bracketed random-variable keywords generate a fresh value when evaluated.
Their names are case-sensitive. The examples again use a temporary native
generator seeded with 1729 and restore the prior generator after each case.
The historical C++ display casts integral results to `int`; the values here
are already exact integer-valued JavaScript numbers within the native range.
No JavaScript bitwise coercion is needed.

### Case 1: Random integer

`[Int]` generates an integer in the engine's native signed 32-bit range.

<!-- mx-example {"id":"C2-example-121","chapter":"C2-chapter-026","case":"C2-case-115","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e;
  try {
    e = new mx.Expression("[Int]");
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

### Case 2: Random integers with decimal bounds

`[Int2]` uses bounds −100 and 100; `[Int5]` uses −100000 and 100000. The same keyword family supports the documented decimal exponents.

<!-- mx-example {"id":"C2-example-122","chapter":"C2-chapter-026","case":"C2-case-116","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e2, e5;
  try {
    e2 = new mx.Expression("[Int2]");
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    e5 = new mx.Expression("[Int5]");
    console.log(e5.getExpressionString(), e5.calculate());
    console.log(e5.getExpressionString(), e5.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e5?.delete();
    e2?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

### Case 3: Random natural numbers

`[nat]` includes zero; `[Nat]` starts at 1. Both use the native integer range.

<!-- mx-example {"id":"C2-example-123","chapter":"C2-chapter-026","case":"C2-case-117","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e1, e2;
  try {
    e1 = new mx.Expression("[nat]");
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e1.getExpressionString(), e1.calculate());
    e2 = new mx.Expression("[Nat]");
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e2?.delete();
    e1?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

### Case 4: Natural numbers with decimal bounds

`[nat1]` includes zero and has upper bound 10. `[Nat3]` starts at 1 and has upper bound 1000. Case changes the lower-bound convention.

<!-- mx-example {"id":"C2-example-124","chapter":"C2-chapter-026","case":"C2-case-118","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e1, e2;
  try {
    e1 = new mx.Expression("[nat1]");
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e1.getExpressionString(), e1.calculate());
    e2 = new mx.Expression("[Nat3]");
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e2?.delete();
    e1?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

### Case 5: Uniform continuous variable

`[Uni]` draws a uniform value in the native unit interval.

<!-- mx-example {"id":"C2-example-125","chapter":"C2-chapter-026","case":"C2-case-119","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e;
  try {
    e = new mx.Expression("[Uni]");
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

### Case 6: Standard normal variable

`[Nor]` draws a standard normal value with mean 0 and standard deviation 1.

<!-- mx-example {"id":"C2-example-126","chapter":"C2-chapter-026","case":"C2-case-120","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e;
  try {
    e = new mx.Expression("[Nor]");
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-027 -->
## 27. User-defined random variables

Use existing dependent arguments and user-defined functions to compose random
expressions. All draws, dependencies and iterated operations remain in C++.

### Case 1: A dependent argument as a random variable

The dependent argument `X` evaluates `5*[Uni]+1` whenever it is needed. Each calculation below obtains a new draw rather than treating X as a fixed stored argument value.

<!-- mx-example {"id":"C2-example-127","chapter":"C2-chapter-027","case":"C2-case-121","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let X, e;
  try {
    X = new mx.Argument("X", "5*[Uni]+1");
    e = new mx.Expression("X", X);
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e?.delete();
    X?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

### Case 2: A function defining a random walk

Each step is −1 or 1, and the native iterated sum combines 20 steps. The resulting position lies between −20 and 20 and has even parity.

<!-- mx-example {"id":"C2-example-128","chapter":"C2-chapter-027","case":"C2-case-122","nativeReference":true,"randomSeed":1729} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let rWalk, e;
  try {
    rWalk = new mx.Function("rWalk(n) = sum( i, 1, n, rList(-1,1) )");
    e = new mx.Expression("rWalk(20)", rWalk);
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e?.delete();
    rWalk?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

The two calls in each example illustrate separate realizations. Their printed
values are not distribution parameters or repeatable constants unless the
same native generator configuration is supplied. A single random walk or
normal draw does not establish a statistical property of a simulation.

<!-- c2-chapter: C2-chapter-028 -->
## 28. Unicode mathematics

Unicode mathematical keywords and permitted Greek names are part of the
original expression language. Use ordinary JavaScript strings containing
those characters; the binding transports them to the native parser. Interface
localization does not replace decimal separators, operator precedence or
mathematical spelling. These examples assume the default enabled Unicode
built-in-keyword mode.

### Case 1: Square root

`√2` is the native square-root expression.

<!-- mx-example {"id":"C2-example-129","chapter":"C2-chapter-028","case":"C2-case-123","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("√2");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 2: Nested square roots

The left unary operators nest: `√√16` takes two square roots and gives 2.

<!-- mx-example {"id":"C2-example-130","chapter":"C2-chapter-028","case":"C2-case-124","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("√√16");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 3: Parenthesized roots

Parentheses select the operand of the nested roots; the result is again 2.

<!-- mx-example {"id":"C2-example-131","chapter":"C2-chapter-028","case":"C2-case-125","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("√√(8+8)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 4: Roots of different orders

Fourth, cube and square roots contribute 2, 3 and 4 respectively, totaling 9.

<!-- mx-example {"id":"C2-example-132","chapter":"C2-chapter-028","case":"C2-case-126","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("∜16 + ∛27 + √16");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 5: Summation with sigma

The Unicode summation alias evaluates the same native iterated operation as `sum`. The squares from 1 through 5 total 55.

<!-- mx-example {"id":"C2-example-133","chapter":"C2-chapter-028","case":"C2-case-127","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("∑(i, 1, 5, i^2)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 6: Greek argument names

Greek letters can name user arguments. Here α is 2π and β is π/2; the expression uses native trigonometric functions and special-value handling.

<!-- mx-example {"id":"C2-example-134","chapter":"C2-chapter-028","case":"C2-case-128","nativeReference":true} -->
```javascript
{
  const a = new mx.Argument("α = 2π");
  const b = new mx.Argument("β = π/2");
  const e = new mx.Expression("sin(α) + cos(β)", a, b);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); b.delete(); a.delete(); }
}
```

### Case 7: Discover Unicode built-in keywords

Query the original help table for its current Unicode vocabulary. It includes
root operators, arithmetic and logical aliases, relations, calculus aliases
and constants. Accepted expression characters and built-in keywords are related
but distinct: a permitted name character need not name a built-in function.

<!-- mx-example {"id":"C2-example-135","chapter":"C2-chapter-028","case":"C2-case-129","nativeConsole":true,"nativeContains":["unicode","\u221a","\u2211","\u03c0"]} -->
```javascript
mx.mXparser.consolePrintHelp('unicode');
```

### Case 8: Disable and restore Unicode built-in keywords

Disabling this mode removes Unicode built-in aliases from the help result.
It does not change the module's string representation or discard Unicode
descriptions. Restore the prior setting when this local demonstration finishes.

<!-- mx-example {"id":"C2-example-136","chapter":"C2-chapter-028","case":"C2-case-130","nativeConsole":true,"nativeContains":["unicode"]} -->
```javascript
{
  const enabled = mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode();
  try {
    mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
    mx.mXparser.consolePrintHelp('unicode');
  } finally {
    if (enabled) mx.mXparser.enableUnicodeBuiltinKeyWordsMode();
    else mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
  }
}
```

The historical grammar catalogue groups the following symbols. Consult the
current help output and syntax diagnostics for reserved-name collisions:

| Group | Characters and roles |
| --- | --- |
| Lowercase Greek names | α β γ δ ε ζ η θ ι κ λ μ ν ξ ο ρ ς σ τ υ φ χ ψ ω; π is a built-in pi alias |
| Uppercase Greek names | Α Β Γ Ε Ζ Η Θ Ι Κ Λ Μ Ν Ξ Ο Ρ Τ Υ Φ Χ Ψ Ω; Δ, Π and Σ have mathematical aliases |
| Additional name character | ℇ |
| Pi and Euler constants | π ℼ; ℯ ⅇ |
| Multiplication/division | × ⨉ ∙; ÷ |
| Root operators | √ ∛ ∜ |
| Sum/product | ∑ Σ; ∏ ℿ Π |
| Calculus | ∆ Δ ∇ ∫ ∂, including left/right derivative spellings |
| Logic | ∧ ⊼ ∨ ⊽ ⊻ ¬ ⇔ ⇍ ⇏ ⇐ ⇒, plus the documented composed aliases |
| Relations | ≠ ≤ ⋜ ≥ ⋝ |

Transporting an arbitrary character successfully does not guarantee that the
parser permits it in an identifier. In particular, a non-BMP symbol in a
description is a string roundtrip case, not proof of a valid variable name.

<!-- c2-chapter: C2-chapter-029 -->
## 29. Fractions

Inside an mXparser expression string, underscores separate a fraction's
components. This is different from JavaScript numeric separators. A two-part
literal denotes numerator/denominator; three parts combine a whole part with
a fraction. Evaluation still returns a native floating-point value exposed as
a JavaScript number, not a new rational-number object.

### Case 1: A proper fraction

`1_2` denotes 1/2 and evaluates to 0.5.

<!-- mx-example {"id":"C2-example-137","chapter":"C2-chapter-029","case":"C2-case-131","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("1_2");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 2: An improper fraction

`-6_5` evaluates to −1.2.

<!-- mx-example {"id":"C2-example-138","chapter":"C2-chapter-029","case":"C2-case-132","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("-6_5");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 3: A mixed number

`2_3_5` denotes 2+3/5 and evaluates to 2.6.

<!-- mx-example {"id":"C2-example-139","chapter":"C2-chapter-029","case":"C2-case-133","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("2_3_5");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 4: A mixed number with an improper fractional part

`2_12_5` denotes 2+12/5 and evaluates to 4.4. The fractional component need not be proper.

<!-- mx-example {"id":"C2-example-140","chapter":"C2-chapter-029","case":"C2-case-134","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("2_12_5");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 5: Arithmetic with fraction literals

The original expression combines fraction literals with the native arithmetic precedence rules. It returns approximately −0.2090909090909091.

<!-- mx-example {"id":"C2-example-141","chapter":"C2-chapter-029","case":"C2-case-135","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("1_2-6_5*2_3_5/2_12_5");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 6: Format the floating result as a fraction

Use the original native `toFractionString()` conversion when a fractional
display is useful. It converts the calculated floating value; it does not
retroactively make all previous calculations exact rational arithmetic.

<!-- mx-example {"id":"C2-example-142","chapter":"C2-chapter-029","case":"C2-case-136","nativeText":true,"nativeTextExpression":true} -->
```javascript
{
  const e = new mx.Expression('1_2-6_5*2_3_5/2_12_5');
  try {
    const resultAsDouble = e.calculate();
    const resultAsFraction = mx.mXparser.toFractionString(resultAsDouble);
    console.log(e.getExpressionString(), resultAsFraction);
  } finally { e.delete(); }
}
```

The native fraction string for this example is `-23/110`. The public return
type remains nullable to preserve the actual C++ conversion contract.

<!-- c2-chapter: C2-chapter-030 -->
## 30. Numeral systems

Numeric literals inside expression strings belong to mXparser's grammar.
JavaScript passes their text unchanged; it does not parse those literals first.
The engine supports base-specific prefixes and a `base()` function whose
digits are supplied as numeric parameters.

### Case 1: Binary literals

`b.` and `B.` introduce binary literals. Two representations of 21 add to 42.

<!-- mx-example {"id":"C2-example-143","chapter":"C2-chapter-030","case":"C2-case-137","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("b.10101 + B.10101");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 2: Octal literals

`o.` and `O.` introduce octal literals. Each 120 in base 8 represents 80.

<!-- mx-example {"id":"C2-example-144","chapter":"C2-chapter-030","case":"C2-case-138","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("o.120 + O.120");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 3: Hexadecimal literals

`h.` and `H.` introduce hexadecimal literals; the shown mixed-case digits represent the same value.

<!-- mx-example {"id":"C2-example-145","chapter":"C2-chapter-030","case":"C2-case-139","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("h.2FE + H.2fE");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 4: Unary literals

In base 1, the number of 1 digits gives the value. Two three-digit unary literals total 6.

<!-- mx-example {"id":"C2-example-146","chapter":"C2-chapter-030","case":"C2-case-140","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("b1.111 + B1.111");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 5: Unary zero

The empty unary digit sequence denotes zero in this syntax, so `b1. + 2` gives 2.

<!-- mx-example {"id":"C2-example-147","chapter":"C2-chapter-030","case":"C2-case-141","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("b1. + 2");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 6: Literal bases 1 through 36

The `bN.`/`BN.` literal notation supports the documented bases 1 through 36, with alphabetic digits for larger digit values. The original mixed-base sum below gives 261308.

<!-- mx-example {"id":"C2-example-148","chapter":"C2-chapter-030","case":"C2-case-142","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("b1.1 + b2.101 + b3.102 + b8.71 + b10.12340 + b11.12340A + b16.FF + b25.fgh + b36.xYZ");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

### Case 7: The base function

`base(radix,digit,...)` represents digits numerically and therefore also expresses bases beyond the alphabetic literal notation. The original sum below includes base 50 and gives 131477.

<!-- mx-example {"id":"C2-example-149","chapter":"C2-chapter-030","case":"C2-case-143","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression("base(1, 1, 1, 1) + base(2, 1, 0, 1) + base(10, 1, 2, 3, 9) + base(16, 0, 1, 15) + base(50, 1, 2, 3, 49)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}
```

These examples use small exactly representable integer values. Base notation
does not make arbitrarily large results exact: mathematical calculations still
use the native floating-point contract exposed as JavaScript numbers.

<!-- c2-chapter: C2-chapter-031 -->
## 31. Working with NaN

The engine uses NaN for undefined calculations. Test a JavaScript result with
`Number.isNaN(value)` rather than equality with NaN. Within an expression,
use the native `isNaN()` function or the `[NaN]` symbol.

### Case 1: Test a possibly undefined value in a condition

The native expression `2/x` is undefined at zero. This differs from the
JavaScript arithmetic expression `2/0`, which produces Infinity. Keep the
intended mathematical operation inside the engine expression.

<!-- mx-example {"id":"C2-example-150","chapter":"C2-chapter-031","case":"C2-case-144","nativeReference":true,"argumentValues":[1,0]} -->
```javascript
{
  const x = new mx.Argument('x = 1');
  const e = new mx.Expression("if( isNaN( 2 / x ), 1, -1 )", x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(0);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}
```

### Case 2: Return the NaN symbol

The conditional returns 1 when x is at least 1, otherwise `[NaN]`. The JavaScript
result is an actual numeric NaN, not a string containing that word.

<!-- mx-example {"id":"C2-example-151","chapter":"C2-chapter-031","case":"C2-case-145","nativeReference":true,"argumentValues":[1,0]} -->
```javascript
{
  const x = new mx.Argument('x = 1');
  const e = new mx.Expression("if( x >= 1, 1, [NaN] )", x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(0);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}
```

### Case 3: Select the first non-NaN value

`coalesce()` skips undefined candidates. With x=1 it selects x; after setting
x to NaN, it proceeds to the final value 3.

<!-- mx-example {"id":"C2-example-152","chapter":"C2-chapter-031","case":"C2-case-146","nativeReference":true,"argumentValues":[1,"NaN"]} -->
```javascript
{
  const x = new mx.Argument('x = 1');
  const e = new mx.Expression("coalesce( 2/0 , x , 3)", x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(NaN);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}
```

<!-- c2-chapter: C2-chapter-032 -->
## 32. Radians and degrees

Radians are the default trigonometric mode. Changing the module's native
global mode affects ordinary and inverse trigonometric functions, including
already-created expressions. These examples retain the article's transitions
from radians to degrees and back. The settings are restored in cleanup.

### Case 1: Evaluate sine in both modes

In radians mode, sin(π) is zero, while 180 is interpreted as radians. In degrees
mode, sin(180) is zero, while π is interpreted as a number of degrees. The
constant π itself does not change value when the mode changes.

<!-- mx-example {"id":"C2-example-153","chapter":"C2-chapter-032","case":"C2-case-147","nativeReference":true} -->
```javascript
{
  const previouslyRadians = mx.mXparser.checkIfRadiansMode();
  const eRad = new mx.Expression("sin(π)");
  const eDeg = new mx.Expression("sin(180)");
  const showMode = expectedRadians => {
    const radians = mx.mXparser.checkIfRadiansMode();
    const degrees = mx.mXparser.checkIfDegreesMode();
    if (radians !== expectedRadians || degrees !== !expectedRadians) throw new Error('Unexpected angle mode');
    console.log(radians, degrees);
  };
  try {
    showMode(true);
    console.log(eRad.getExpressionString(), eRad.calculate());
    console.log(eDeg.getExpressionString(), eDeg.calculate());
    mx.mXparser.setDegreesMode();
    showMode(false);
    console.log(eRad.getExpressionString(), eRad.calculate());
    console.log(eDeg.getExpressionString(), eDeg.calculate());
    mx.mXparser.setRadiansMode();
    showMode(true);
    console.log(eRad.getExpressionString(), eRad.calculate());
    console.log(eDeg.getExpressionString(), eDeg.calculate());
  } finally {
    eDeg.delete();
    eRad.delete();
    if (previouslyRadians) mx.mXparser.setRadiansMode();
    else mx.mXparser.setDegreesMode();
  }
}
```

### Case 2: Evaluate an inverse trigonometric function

`acos(-1)` returns π in radians mode and 180 in degrees mode. Its output unit
follows the same global configuration.

<!-- mx-example {"id":"C2-example-154","chapter":"C2-chapter-032","case":"C2-case-148","nativeReference":true} -->
```javascript
{
  const previouslyRadians = mx.mXparser.checkIfRadiansMode();
  const e = new mx.Expression("acos(-1)");
  const showMode = expectedRadians => {
    const radians = mx.mXparser.checkIfRadiansMode();
    const degrees = mx.mXparser.checkIfDegreesMode();
    if (radians !== expectedRadians || degrees !== !expectedRadians) throw new Error('Unexpected angle mode');
    console.log(radians, degrees);
  };
  try {
    showMode(true);
    console.log(e.getExpressionString(), e.calculate());
    mx.mXparser.setDegreesMode();
    showMode(false);
    console.log(e.getExpressionString(), e.calculate());
    mx.mXparser.setRadiansMode();
    showMode(true);
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    e.delete();
    if (previouslyRadians) mx.mXparser.setRadiansMode();
    else mx.mXparser.setDegreesMode();
  }
}
```

### Case 3: Express angle units explicitly while in radians mode

The unit keywords are native numeric conversion factors. `[rad]` keeps a
radian value, and `[deg]` converts degrees to the corresponding radians. Use
these factors with the mode for which the expression is written; they are not
a separate dimensional type system that overrides a global degree setting.

<!-- mx-example {"id":"C2-example-155","chapter":"C2-chapter-032","case":"C2-case-149","nativeReference":true} -->
```javascript
{
  if (!mx.mXparser.checkIfRadiansMode() || mx.mXparser.checkIfDegreesMode()) throw new Error('This example requires radians mode');
  const e1 = new mx.Expression("sin(π)");
  const e2 = new mx.Expression("sin(π[rad])");
  const e3 = new mx.Expression("sin(180)");
  const e4 = new mx.Expression("sin(180[deg])");
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
    console.log(e4.getExpressionString(), e4.calculate());
  } finally { e4.delete(); e3.delete(); e2.delete(); e1.delete(); }
}
```

The π, π[rad] and 180[deg] inputs represent the same half-turn in radians mode.
The plain 180 input does not. All four calculations use the original native
trigonometric and special-value paths; the binding does not convert angles.

<!-- c2-chapter: C2-chapter-033 -->
## 33. Register calculation steps

Pass a `CalcStepsRegister` to a calculation to collect the original native
reduction steps, including dependent arguments and function calls. Its
`calcStepRecords` property is a shared native collection. Each record obtained
from that collection is an owned JS handle and must be released after reading.

The helper below displays the register metadata and each record as a plain
JavaScript object. Those objects contain copied values, so they remain usable
after the record handles are deleted. The helper does not calculate or infer
steps: all fields come directly from `CalcStepsRegister` and `CalcStepRecord`.
The optional indented line follows the article's group/type/content display.

### Case 1: A simple expression

<!-- mx-example {"id":"C2-example-156","chapter":"C2-chapter-033","case":"C2-case-150","nativeReference":true,"nativeSteps":true} -->
```javascript
function printCalculationSteps(register, detailed = false) {
  console.log('register', {
    argumentNameStart: register.argumentNameStart,
    functionNameStart: register.functionNameStart,
    expressionStringStart: register.expressionStringStart,
    errorMessage: register.errorMessage,
    result: register.result,
    computingTime: register.computingTime
  });
  const records = register.calcStepRecords;
  try {
    for (const step of records) {
      try {
        const typeText = (Object.keys(mx.StepType).find(name => mx.StepType[name] === step.type) ?? 'Unknown');
        console.log('step', {
          numberGroup: step.numberGroup,
          numberGroupWithin: step.numberGroupWithin,
          type: step.type,
          typeText,
          description: step.description,
          content: step.content,
          firstInGroup: step.firstInGroup,
          lastInGroup: step.lastInGroup
        });
        if (detailed) {
          const indent = '   '.repeat(step.numberGroup - 1);
          console.log('trace', step.numberGroup + '.' + step.numberGroupWithin + ' ' + indent + typeText + ' ' + step.content);
        }
      } finally { step.delete(); }
    }
  } finally { records.delete(); }
}
{
  const e = new mx.Expression('2*(3+4)+5');
  const register = new mx.CalcStepsRegister();
  try {
    console.log(e.getExpressionString(), e.calculate(register));
    printCalculationSteps(register);
  } finally { register.delete(); e.delete(); }
}
```

The result is 19. The native records show the reductions of the parenthesized
sum, multiplication and final addition. A record's text is diagnostic output
from the engine, not a new expression for JavaScript to evaluate.

### Case 2: Start from a dependent argument

`getArgumentValue(register)` records the argument's internal expression. The
register identifies its root argument and expression as well as its result.

<!-- mx-example {"id":"C2-example-157","chapter":"C2-chapter-033","case":"C2-case-151","nativeReference":true,"nativeSteps":true} -->
```javascript
{
  const x = new mx.Argument('x', '2*(3+4)+5');
  const register = new mx.CalcStepsRegister();
  try {
    console.log(x.getArgumentName(), x.getArgumentValue(register));
    printCalculationSteps(register);
  } finally { register.delete(); x.delete(); }
}
```

The root name is `x`, its expression is `2*(3+4)+5`, and its result is 19.
`computingTime` records this execution's duration in seconds; it is not a
fixed expected number from the old printed output.

### Case 3: Start from a user-defined function

Set the native function parameter value before calling its register overload.
The records identify their type through the original enum and type formatter.

<!-- mx-example {"id":"C2-example-158","chapter":"C2-chapter-033","case":"C2-case-152","nativeReference":true,"nativeSteps":true} -->
```javascript
{
  const f = new mx.Function('f(x) = x*(2*(3+4)+5)');
  const register = new mx.CalcStepsRegister();
  try {
    f.setArgumentValue(0, 2);
    console.log(f.getFunctionName(), f.calculate(register));
    printCalculationSteps(register);
  } finally { register.delete(); f.delete(); }
}
```

The result is 38. The stored parameter uses the API's zero-based index 0; this
is distinct from the one-based `par(i)` expression function discussed earlier.

### Case 4: Follow dependencies and user-function calls

This original example deliberately defines x using a random list. Each
dependent evaluation may draw again, so y and z need not share one sampled x
value throughout the whole calculation. The records reveal those evaluations
and their nesting. For repeatable tutorial validation, use the same temporary
native seed policy as the random-number chapters.

<!-- mx-example {"id":"C2-example-159","chapter":"C2-chapter-033","case":"C2-case-153","nativeReference":true,"nativeSteps":true,"randomSeed":1729,"nativeStepsConsole":true} -->
```javascript
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const x = new mx.Argument('x', '2rList(2,1,3,5,4)');
  const y = new mx.Argument('y = 2*x', x);
  const z = new mx.Argument('z = 3*y/x', x, y);
  const f = new mx.Function('f(a,b) = a*b');
  const register = new mx.CalcStepsRegister();
  const e = new mx.Expression('f(x,y)+z+(x*y)/z', x, y, z, f);
  try {
    console.log(e.getExpressionString(), e.calculate(register));
    printCalculationSteps(register, true);
    register.consolePrint();
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e.delete(); register.delete(); f.delete(); z.delete(); y.delete(); x.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}
```

`numberGroup` describes nesting and `numberGroupWithin` locates a record within
that group. The first/last flags and descriptions provide further context.
The register's own `consolePrint()` supplies the native formatted view. Its
elapsed time varies between runs, and its sampled values need not match the
historical article or a different native standard library.

Releasing a collection handle does not erase the register's native records.
The helper releases each acquired handle, then the collection handle; the
outer cleanup releases the register and the ordinary dependency graph. These
dependencies need no manual definition disconnection.

<!-- c2-chapter: C2-chapter-034 -->
## 34. Inspect the calculation process

The native engine exposes verbose evaluation, syntax diagnostics, lexical
checking, elapsed time and expression-string correction. These are distinct
tools. An expression that has valid lexical form may still reference an
undefined argument or function.

### Case 1: Enable verbose evaluation

Set a description to identify the expression's trace, then enable its verbose
mode. The native output includes reductions and the nested user-function call.
The final mathematical result remains 29.

<!-- mx-example {"id":"C2-example-160","chapter":"C2-chapter-034","case":"C2-case-154","nativeReference":true,"nativeVerbose":true} -->
```javascript
{
  const f = new mx.Function('f(x) = x^2');
  const e = new mx.Expression('f(2)+(2+3)^2', f);
  try {
    e.setDescription('Example - verbose mode');
    e.setVerboseMode();
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); f.delete(); }
}
```

Verbose output is generated by C++ and forwarded through the module's print
hooks. It is diagnostic text, not a JS-side evaluator or a replacement for
`CalcStepsRegister` when structured records are needed.

### Case 2: Check syntax before and after adding a missing definition

The first check fails because x has no definition. Add the existing native
argument and check again. Both calls below print the actual complete native
diagnostic; the function's previously verified syntax can be reused by the
engine while the surrounding expression is rechecked.

<!-- mx-example {"id":"C2-example-161","chapter":"C2-chapter-034","case":"C2-case-155","nativeSyntax":true} -->
```javascript
{
  const fib = new mx.Function('fib(n) = if( n>1, fib(n-1)+fib(n-2), if(n > 0, 1, 0) )');
  const e = new mx.Expression('fib(10) + 20/sin(x)', fib);
  let x;
  try {
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    x = new mx.Argument('x = 2');
    e.addDefinitions(x);
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
  } finally { e.delete(); x?.delete(); fib.delete(); }
}
```

### Case 3: Distinguish lexical checking from complete syntax validation

`fun(1,2)+3` has valid lexical/grammatical form but does not define fun. The
complete syntax check therefore fails, while `checkLexSyntax()` succeeds.
Print the complete-check diagnostic before the lexical check, as in the
original sequence, because diagnostic state belongs to the native object.

<!-- mx-example {"id":"C2-example-162","chapter":"C2-chapter-034","case":"C2-case-156","nativeSyntax":true} -->
```javascript
{
  const e = new mx.Expression('fun(1,2)+3');
  try {
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    console.log(e.checkLexSyntax());
  } finally { e.delete(); }
}
```

### Case 4: Read the calculation time

The original example really sums one million terms. The result is 1000000;
`getComputingTime()` reports elapsed seconds for this calculation. A duration
from another computer or an old tutorial run is not an expected constant.

<!-- mx-example {"id":"C2-example-163","chapter":"C2-chapter-034","case":"C2-case-157","nativeReference":true} -->
```javascript
{
  const e = new mx.Expression('sum(i, 1, 1000000, 1)');
  try {
    console.log(e.getExpressionString(), e.calculate());
    const seconds = e.getComputingTime();
    if (!Number.isFinite(seconds) || seconds < 0) throw new Error('Invalid elapsed time');
    console.log('Computing time = ' + seconds + ' s.');
  } finally { e.delete(); }
}
```

### Case 5: Inspect expression-string correction

The default correction mode attempts to simplify some repeated or trailing
signs. Compare the original source, its canonical form and syntax status.
Then disable the mode on the same seven expressions and inspect them again.
The final expression illustrates disabling the default globally before
constructing a new object. Cleanup restores that global setting.

<!-- mx-example {"id":"C2-example-164","chapter":"C2-chapter-034","case":"C2-case-158","nativeCanonicalSyntax":true} -->
```javascript
{
  const previous = mx.mXparser.checkIfAttemptToFixExpStrMode();
  const expressions = ['2++3', '2+-3', '2-+3', '2--3', '2-3+', '+2-3', '+2--3-']
    .map(source => new mx.Expression(source));
  let createdAfterGlobalChange;
  const show = e => console.log(e.getExpressionString(), e.getCanonicalExpressionString(), e.checkSyntax());
  try {
    for (const e of expressions) show(e);
    for (const e of expressions) e.disableAttemptToFixExpStrMode();
    for (const e of expressions) show(e);
    mx.mXparser.disableAttemptToFixExpStrMode();
    createdAfterGlobalChange = new mx.Expression('+3+-2-');
    show(createdAfterGlobalChange);
  } finally {
    createdAfterGlobalChange?.delete();
    for (const e of expressions) e.delete();
    if (previous) mx.mXparser.enableAttemptToFixExpStrMode();
    else mx.mXparser.disableAttemptToFixExpStrMode();
  }
}
```

Correction is an engine feature with a specific syntax contract, not a promise
to repair arbitrary invalid input. A valid unary leading plus may remain valid
when correction is disabled; inspect the returned diagnostics rather than
assuming every unchanged source must fail. The complete original fifteen
observations are preserved in this example.

<!-- c2-chapter: C2-chapter-035 -->
## 35. Inspect expression tokens

`getCopyOfInitialTokens()` exposes a copy of the native engine's initial
evaluation tokens. These are different from the JavaCC lexical checker's
grammar tokens. JavaScript reads their supplied fields; it does not tokenize
the expression itself.

The copy is a JavaScript array of owned `Token` handles. Release each element
after use. The array itself is an ordinary value collection and has no
`.delete()` method. This differs from the shared live `calcStepRecords`
collection in the previous chapter.

### Case 1: Print the original token table

<!-- mx-example {"id":"C2-example-165","chapter":"C2-chapter-035","case":"C2-case-159","nativeConsole":true} -->
```javascript
{
  const e = new mx.Expression('1+2^3-sin(10+cos(20-1))+30');
  const tokens = e.getCopyOfInitialTokens();
  try { mx.mXparser.consolePrintTokens(tokens); }
  finally {
    for (const token of tokens ?? []) token?.delete();
    e.delete();
  }
}
```

The native table includes token position, spelling, keyword, token/type IDs,
nesting level, numeric value and contextual “looks like” information. A
non-numeric token can have a NaN numeric field without being an invalid token.

### Case 2: Display token nesting levels

The article's display places a token on the row matching its native level and
uses spaces on other rows. This is a presentation of existing fields, not a
parser or a second expression tree. The example contains only ASCII token
spellings, so their JS string lengths also equal the native character counts.

<!-- mx-example {"id":"C2-example-166","chapter":"C2-chapter-035","case":"C2-case-160","nativeConsole":true} -->
```javascript
{
  const e = new mx.Expression('1+2^3-sin(10+cos(20-1))+30');
  const tokens = e.getCopyOfInitialTokens();
  try {
    if (tokens === null) throw new Error('Expected initial token copy');
    let maximumLevel = 0;
    for (const token of tokens) {
      if (token === null) throw new Error('Unexpected null token');
      if (token.tokenLevel > maximumLevel) maximumLevel = token.tokenLevel;
    }
    mx.mXparser.consolePrintln(e.getExpressionString());
    mx.mXparser.consolePrintln('--------------------------');
    for (let level = 0; level <= maximumLevel; level++) {
      for (const token of tokens) {
        const displayed = token.tokenLevel === level
          ? token.tokenStr
          : ' '.repeat(token.tokenStr.length);
        mx.mXparser.consolePrint(displayed);
      }
      mx.mXparser.consolePrintln();
    }
  } finally {
    for (const token of tokens ?? []) token?.delete();
    e.delete();
  }
}
```

The historical printed first line has an extra leading 4 even though its source
expression begins with 1. This example prints the actual unchanged expression
source. For arbitrary non-BMP text, native wchar counts and JavaScript UTF-16
length can differ; the ASCII layout here does not promise a universal text
column-width algorithm.

### Case 3: Inspect unresolved names

The native tokenizer can identify a name as looking like an argument or a
function before its definition is supplied. Inspect those hints in the table;
they do not establish that the expression is ready to calculate.

<!-- mx-example {"id":"C2-example-167","chapter":"C2-chapter-035","case":"C2-case-161","nativeConsole":true} -->
```javascript
{
  const e = new mx.Expression('pi+var1-fun1(var1)+fun2(var2)-1pi');
  const tokens = e.getCopyOfInitialTokens();
  try { mx.mXparser.consolePrintTokens(tokens); }
  finally {
    for (const token of tokens ?? []) token?.delete();
    e.delete();
  }
}
```

The implied product in `1pi` is also visible in the token copy. Use complete
syntax checking and the native missing-definition APIs when deciding which
definitions to add; do not reconstruct those rules from the printed table.

<!-- c2-chapter: C2-chapter-036 -->
## 36. Change built-in keyword availability

The original engine can remove selected built-ins, rename them and allow
user-defined items to override built-in names. These are native module-global
settings. They affect the keyword vocabulary used by syntax checking; they
are not a JavaScript preprocessing pass over expression text.

Each demonstration temporarily clears the removal/rename lists and override
option to reproduce the article's starting state, then restores the previous
contents and modes through existing native APIs. This restores configuration
contents, not the engine's internal options-change counter. The returned
lists/tables are ordinary value arrays; they need no handle deletion.

### Case 1: Remove and restore built-ins

Check the expression before removal, remove sin and cos, then inspect the
removal list. Restoring only cos leaves sin unresolved; restoring all removed
tokens makes the expression valid again. The same expression is rechecked
after the original native setting changes.

<!-- mx-example {"id":"C2-example-168","chapter":"C2-chapter-036","case":"C2-case-162","nativeBuiltin":true} -->
```javascript
{
  const savedRemoved = mx.mXparser.getBuiltinTokensToRemove() ?? [];
  const savedModified = mx.mXparser.getBuiltinTokensToModify() ?? [];
  const savedImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  const savedOverride = mx.mXparser.checkIfsetToOverrideBuiltinTokens();
  mx.mXparser.unremoveAllBuiltinTokens();
  mx.mXparser.unmodifyAllBuiltinTokens();
  mx.mXparser.setNotToOverrideBuiltinTokens();
  let e;
  try {
    e = new mx.Expression('sin(pi)+cos(pi)');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.removeBuiltinTokens('sin', 'cos');
    e.delete();
    e = new mx.Expression('sin(pi)+cos(pi)');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    console.log('removed', mx.mXparser.getBuiltinTokensToRemove());
    mx.mXparser.unremoveBuiltinTokens('cos');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.unremoveAllBuiltinTokens();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
  } finally {
    e?.delete();
    mx.mXparser.unremoveAllBuiltinTokens();
    mx.mXparser.unmodifyAllBuiltinTokens();
    for (const [original, replacement, description] of savedModified)
      mx.mXparser.modifyBuiltinToken(original, replacement, description);
    for (const name of savedRemoved) mx.mXparser.removeBuiltinTokens(name);
    if (savedImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
    if (savedOverride) mx.mXparser.setToOverrideBuiltinTokens();
    else mx.mXparser.setNotToOverrideBuiltinTokens();
  }
}
```

Releasing the old JS expression handle before replacing it mirrors C++
shared_ptr assignment releasing its old owner. It does not disconnect any
ordinary dependency definitions.

### Case 2: Rename built-ins and change a description

Disable implied multiplication as in the original example. The initially
undefined names sine and cosine become available after renaming sin and cos.
The second rename also supplies a new help description.

The C++ article calls help with `My new_cosine`, while its description and
Java example use spaces. The first help call below preserves that actual C++
query. The second explicitly shows the intended spaced query. Their complete
native responses are captured separately; the engine search rules are unchanged.

<!-- mx-example {"id":"C2-example-169","chapter":"C2-chapter-036","case":"C2-case-163","nativeBuiltin":true} -->
```javascript
{
  const savedRemoved = mx.mXparser.getBuiltinTokensToRemove() ?? [];
  const savedModified = mx.mXparser.getBuiltinTokensToModify() ?? [];
  const savedImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  const savedOverride = mx.mXparser.checkIfsetToOverrideBuiltinTokens();
  mx.mXparser.unremoveAllBuiltinTokens();
  mx.mXparser.unmodifyAllBuiltinTokens();
  mx.mXparser.setNotToOverrideBuiltinTokens();
  let e;
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    e = new mx.Expression('sine(pi)+cosine(pi)');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.modifyBuiltinToken('sin', 'sine');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.modifyBuiltinToken('cos', 'cosine', 'My new cosine token');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.resetConsoleOutput();
    mx.mXparser.consolePrintHelp('My new_cosine');
    console.log('help', mx.mXparser.getConsoleOutput());
    mx.mXparser.resetConsoleOutput();
    mx.mXparser.consolePrintHelp('My new cosine');
    console.log('help', mx.mXparser.getConsoleOutput());
    console.log('modified', mx.mXparser.getBuiltinTokensToModify());
    e.delete();
    e = new mx.Expression('sine(pi)+cosine(pi)');
    mx.mXparser.unmodifyBuiltinTokens('sin');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.unmodifyAllBuiltinTokens();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
  } finally {
    e?.delete();
    mx.mXparser.unremoveAllBuiltinTokens();
    mx.mXparser.unmodifyAllBuiltinTokens();
    for (const [original, replacement, description] of savedModified)
      mx.mXparser.modifyBuiltinToken(original, replacement, description);
    for (const name of savedRemoved) mx.mXparser.removeBuiltinTokens(name);
    if (savedImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
    if (savedOverride) mx.mXparser.setToOverrideBuiltinTokens();
    else mx.mXparser.setNotToOverrideBuiltinTokens();
  }
}
```

Each modification row contains the original spelling, replacement spelling and
nullable replacement description. Preserve null as an absent description rather
than inventing a string value. The final two checks show unmodifying one name
and then all modified names.

The old C++ loop uses a matrix's total-cell `length` as a row limit. In the
current C++ Array contract, a two-row, three-column table has length 6 and rows 2;
row iteration must use `rows`. The JS API returns actual row arrays, so the
example iterates those rows. This corrects the historical sample's indexing
without changing the engine or omitting any modification.

### Case 3: Allow user definitions to override built-in names

Define a user function named sin and a constant named pi. The default conflict
check rejects their collision with built-ins. Enabling the override option
allows those user definitions, so this sin(pi) evaluates to 2 rather than the
built-in sine of the mathematical constant. Disabling override restores the
original conflict behavior.

<!-- mx-example {"id":"C2-example-170","chapter":"C2-chapter-036","case":"C2-case-164","nativeBuiltin":true,"nativeReference":true} -->
```javascript
{
  const savedRemoved = mx.mXparser.getBuiltinTokensToRemove() ?? [];
  const savedModified = mx.mXparser.getBuiltinTokensToModify() ?? [];
  const savedImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  const savedOverride = mx.mXparser.checkIfsetToOverrideBuiltinTokens();
  mx.mXparser.unremoveAllBuiltinTokens();
  mx.mXparser.unmodifyAllBuiltinTokens();
  mx.mXparser.setNotToOverrideBuiltinTokens();
  let e;
  let sin, pi;
  try {
    sin = new mx.Function('sin(x) = 2*x');
    pi = new mx.Constant('pi = 1');
    e = new mx.Expression('sin(pi)', sin, pi);
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.setToOverrideBuiltinTokens();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    console.log(e.getExpressionString(), e.calculate());
    console.log('override', mx.mXparser.checkIfsetToOverrideBuiltinTokens());
    e.delete();
    e = new mx.Expression('sin(pi)', sin, pi);
    mx.mXparser.setNotToOverrideBuiltinTokens();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
  } finally {
    e?.delete(); sin?.delete(); pi?.delete();
    mx.mXparser.unremoveAllBuiltinTokens();
    mx.mXparser.unmodifyAllBuiltinTokens();
    for (const [original, replacement, description] of savedModified)
      mx.mXparser.modifyBuiltinToken(original, replacement, description);
    for (const name of savedRemoved) mx.mXparser.removeBuiltinTokens(name);
    if (savedImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
    if (savedOverride) mx.mXparser.setToOverrideBuiltinTokens();
    else mx.mXparser.setNotToOverrideBuiltinTokens();
  }
}
```

The override option is explicit native configuration; supplying a conflicting
definition alone does not silently change the language. The original method
name `checkIfsetToOverrideBuiltinTokens()` is retained exactly, including its
capitalization. These examples change keyword availability intentionally;
localizing help text is a separate feature and does not rename syntax by itself.

<!-- c2-chapter: C2-chapter-037 -->
## 37. Smart rounding settings

Binary floating-point numbers cannot represent every finite decimal fraction
exactly. The familiar 0.1 example also occurs with ordinary JavaScript numbers.
This first snippet demonstrates the language's arithmetic, not an mXparser
expression or a replacement evaluator.

<!-- mx-example {"id":"C2-example-171","chapter":"C2-chapter-037","case":null,"nativeReference":true} -->
```javascript
{
  const a = 0.1, b = 0.1, c = 0.1;
  const d = a + b + c;
  console.log('d-0.3', d - 0.3);
}
```

The small nonzero residual reflects binary representation and rounding.
Double precision offers a broad range and scientific-library support, but
does not make decimal arithmetic exact or guarantee identical transcendental
results on every native standard library.

The engine provides three native options:

- Almost-integer rounding moves sufficiently near-integer values to an integer;
  this can also remove small nonzero values near zero.
- ULP rounding uses the native unit-in-the-last-place procedure. It can improve
  some results without resolving every decimal-representation artifact.
- Canonical rounding uses the existing C++ arithmetic wrapper and string
  conversions. In the current C++ implementation, BigDecimal stores long double;
  this interface does not supply a new arbitrary-precision JavaScript type.

These options have numerical and performance consequences. Choose them for
the calculation's requirements rather than assuming one option fixes every
floating-point issue. The examples below retain every original expression
and use native setters/getters only. Cleanup restores the preceding settings.

### Case 1: Inspect the current settings

<!-- mx-example {"id":"C2-example-172","chapter":"C2-chapter-037","case":"C2-case-165","nativeRounding":true} -->
```javascript
console.log(mx.mXparser.checkIfAlmostIntRounding());
console.log(mx.mXparser.checkIfUlpRounding());
console.log(mx.mXparser.checkIfCanonicalRounding());
```

### Case 2: Canonical rounding only

Compare the five native results with the same expressions in the following modes. Canonical rounding is an engine behavior, not a formatting-only operation on JS output.

<!-- mx-example {"id":"C2-example-173","chapter":"C2-chapter-037","case":"C2-case-166","nativeReference":true,"nativeRounding":true} -->
```javascript
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const expressions = [];
  try {
    mx.mXparser.disableAlmostIntRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.enableCanonicalRounding();
    console.log(mx.mXparser.checkIfAlmostIntRounding());
    console.log(mx.mXparser.checkIfUlpRounding());
    console.log(mx.mXparser.checkIfCanonicalRounding());
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("2.5 - 2.2"));
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("5.55 / 5"));
    expressions.push(new mx.Expression("(1/6.2)^(-3)"));
    for (const e of expressions) console.log(e.getExpressionString(), e.calculate());
  } finally {
    for (const e of expressions) e.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}
```

### Case 3: ULP rounding only

ULP rounding can clean up some results while leaving other decimal artifacts. It is not equivalent to rounding every result to a fixed number of decimal places.

<!-- mx-example {"id":"C2-example-174","chapter":"C2-chapter-037","case":"C2-case-167","nativeReference":true,"nativeRounding":true} -->
```javascript
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const expressions = [];
  try {
    mx.mXparser.disableAlmostIntRounding();
    mx.mXparser.enableUlpRounding();
    mx.mXparser.disableCanonicalRounding();
    console.log(mx.mXparser.checkIfAlmostIntRounding());
    console.log(mx.mXparser.checkIfUlpRounding());
    console.log(mx.mXparser.checkIfCanonicalRounding());
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("2.5 - 2.2"));
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("5.55 / 5"));
    expressions.push(new mx.Expression("(1/6.2)^(-3)"));
    for (const e of expressions) console.log(e.getExpressionString(), e.calculate());
  } finally {
    for (const e of expressions) e.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}
```

### Case 4: Almost-integer rounding only

Near-integer cleanup can make the ten-term sum integral while leaving nonintegral results close to their ordinary binary values.

<!-- mx-example {"id":"C2-example-175","chapter":"C2-chapter-037","case":"C2-case-168","nativeReference":true,"nativeRounding":true} -->
```javascript
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const expressions = [];
  try {
    mx.mXparser.enableAlmostIntRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.disableCanonicalRounding();
    console.log(mx.mXparser.checkIfAlmostIntRounding());
    console.log(mx.mXparser.checkIfUlpRounding());
    console.log(mx.mXparser.checkIfCanonicalRounding());
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("2.5 - 2.2"));
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("5.55 / 5"));
    expressions.push(new mx.Expression("(1/6.2)^(-3)"));
    for (const e of expressions) console.log(e.getExpressionString(), e.calculate());
  } finally {
    for (const e of expressions) e.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}
```

### Case 5: No automatic rounding options

Disabling all three options exposes the engine's results without those automatic procedures. Native parsing, arithmetic operation order and mathematical functions still apply.

<!-- mx-example {"id":"C2-example-176","chapter":"C2-chapter-037","case":"C2-case-169","nativeReference":true,"nativeRounding":true} -->
```javascript
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const expressions = [];
  try {
    mx.mXparser.disableAlmostIntRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.disableCanonicalRounding();
    console.log(mx.mXparser.checkIfAlmostIntRounding());
    console.log(mx.mXparser.checkIfUlpRounding());
    console.log(mx.mXparser.checkIfCanonicalRounding());
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("2.5 - 2.2"));
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("5.55 / 5"));
    expressions.push(new mx.Expression("(1/6.2)^(-3)"));
    for (const e of expressions) console.log(e.getExpressionString(), e.calculate());
  } finally {
    for (const e of expressions) e.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}
```

The mode queries are printed in the same almost-integer, ULP, canonical order
in each case. The library performs the calculations before returning their
numbers; JS does not recompute, round or parse the printed results. Small
native backend differences are documented separately and are not hidden by
a widened test tolerance or by replacing the current engine's output with an
old article's printed digits.

<!-- c2-chapter: C2-chapter-038 -->
## 38. Efficient calculations in loops

Create the expression and its dependencies before entering the loop. Changing
an argument's value lets the original C++ engine reuse its existing expression
and compilation state. Building a new expression string for every input would
add construction and parsing costs.

### Case 1: Evaluate one expression at eleven argument values

This loop includes both endpoints, so it evaluates eleven times. The first
output contains the current input; the second contains the expression and
its native result.

<!-- mx-example {"id":"C2-example-177","chapter":"C2-chapter-038","case":"C2-case-170","nativeReference":true,"nativeLoop":true} -->
```javascript
{
  const x = new mx.Argument('x');
  const e = new mx.Expression('2sin(x)', x);
  try {
    for (let i = 0; i <= 10; i++) {
      x.setArgumentValue(i / 10.0);
      console.log({ input: x.getArgumentValue() });
      console.log(e.getExpressionString(), e.calculate());
    }
  } finally { e.delete(); x.delete(); }
}
```

### Case 2: Pass the changing value directly to a user function

Here the division by ten belongs to the function's mathematical definition.
The argument sent by JS is the integer loop index. The synchronous native
`calculate(i)` overload performs each calculation.

<!-- mx-example {"id":"C2-example-178","chapter":"C2-chapter-038","case":"C2-case-171","nativeReference":true,"nativeLoop":true} -->
```javascript
{
  const f = new mx.Function('f(i) = 2sin(i/10)');
  try {
    for (let i = 0; i <= 10; i++) {
      console.log({ input: i });
      console.log('f(i)', f.calculate(i));
    }
  } finally { f.delete(); }
}
```

### Case 3: Recalculate a dependent argument

The dependent argument y retains its native reference to x. Updating x changes
the next value returned by y. Releasing the two JS handles after the loop does
not require manually disconnecting this ordinary dependency graph.

<!-- mx-example {"id":"C2-example-179","chapter":"C2-chapter-038","case":"C2-case-172","nativeReference":true,"nativeLoop":true} -->
```javascript
{
  const x = new mx.Argument('x');
  const y = new mx.Argument('y = 2sin(x)', x);
  try {
    for (let i = 0; i <= 10; i++) {
      x.setArgumentValue(i / 10.0);
      console.log({ input: x.getArgumentValue() });
      console.log('y', y.getArgumentValue());
    }
  } finally { y.delete(); x.delete(); }
}
```

The remaining four examples are deliberate benchmarks. Each retains the
original upper bound of 10,000,000 and the inclusive loop condition, so the
actual number of evaluations is 10,000,001. Running this chapter takes time
and blocks the current JS thread. No printing occurs inside those timed loops.

Measurements depend on hardware, runtime, build options and rounding modes.
The historical article's timings are not promises for WASM. JS call and
argument-conversion costs are included here; a native C++ loop has a different
boundary cost. The last result is printed as a correctness check after timing.

### Case 4: Time repeated expression calculations with the current settings

The current three rounding settings are preserved for this measurement.

<!-- mx-example {"id":"C2-example-180","chapter":"C2-chapter-038","case":"C2-case-173","nativeReference":true,"nativeLoop":true} -->
```javascript
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const x = new mx.Argument('x');
  const e = new mx.Expression('2sin(x)', x);
  try {
    const numOfIter = 10000000;
    let result, evaluations = 0;
    const start = performance.now();
    for (let xv = 0; xv <= numOfIter; xv++) {
      x.setArgumentValue(xv);
      result = e.calculate();
      evaluations++;
    }
    const computingTimeSec = (performance.now() - start) / 1000;
    if (evaluations !== numOfIter + 1 || !Number.isFinite(computingTimeSec) || computingTimeSec < 0)
      throw new Error('Invalid benchmark count or elapsed time');
    console.log("2sin(x)", result);
    console.log('evaluations', evaluations);
    console.log({ benchmark: true, numOfIter, evaluations, computingTimeSec,
      iterationsPerSecond: computingTimeSec > 0 ? numOfIter / computingTimeSec : null,
      almost: mx.mXparser.checkIfAlmostIntRounding(),
      ulp: mx.mXparser.checkIfUlpRounding(),
      canonical: mx.mXparser.checkIfCanonicalRounding() });
  } finally {
    e.delete(); x.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}
```

### Case 5: Repeat the expression benchmark with smart rounding disabled

This case disables all three rounding procedures during the measurement, then restores their preceding values. A faster result is useful only when these numerical semantics fit the application.

<!-- mx-example {"id":"C2-example-181","chapter":"C2-chapter-038","case":"C2-case-174","nativeReference":true,"nativeLoop":true} -->
```javascript
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const x = new mx.Argument('x');
  const e = new mx.Expression('2sin(x)', x);
  try {
    mx.mXparser.disableCanonicalRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.disableAlmostIntRounding();
    const numOfIter = 10000000;
    let result, evaluations = 0;
    const start = performance.now();
    for (let xv = 0; xv <= numOfIter; xv++) {
      x.setArgumentValue(xv);
      result = e.calculate();
      evaluations++;
    }
    const computingTimeSec = (performance.now() - start) / 1000;
    if (evaluations !== numOfIter + 1 || !Number.isFinite(computingTimeSec) || computingTimeSec < 0)
      throw new Error('Invalid benchmark count or elapsed time');
    console.log("2sin(x)", result);
    console.log('evaluations', evaluations);
    console.log({ benchmark: true, numOfIter, evaluations, computingTimeSec,
      iterationsPerSecond: computingTimeSec > 0 ? numOfIter / computingTimeSec : null,
      almost: mx.mXparser.checkIfAlmostIntRounding(),
      ulp: mx.mXparser.checkIfUlpRounding(),
      canonical: mx.mXparser.checkIfCanonicalRounding() });
  } finally {
    e.delete(); x.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}
```

### Case 6: Time repeated user-function calculations

This case disables all three rounding procedures during the measurement, then restores their preceding values. A faster result is useful only when these numerical semantics fit the application.

<!-- mx-example {"id":"C2-example-182","chapter":"C2-chapter-038","case":"C2-case-175","nativeReference":true,"nativeLoop":true} -->
```javascript
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const f = new mx.Function('f(x) = 2sin(x)');
  try {
    mx.mXparser.disableCanonicalRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.disableAlmostIntRounding();
    const numOfIter = 10000000;
    let result, evaluations = 0;
    const start = performance.now();
    for (let xv = 0; xv <= numOfIter; xv++) {
      result = f.calculate(xv);
      evaluations++;
    }
    const computingTimeSec = (performance.now() - start) / 1000;
    if (evaluations !== numOfIter + 1 || !Number.isFinite(computingTimeSec) || computingTimeSec < 0)
      throw new Error('Invalid benchmark count or elapsed time');
    console.log("f(x)", result);
    console.log('evaluations', evaluations);
    console.log({ benchmark: true, numOfIter, evaluations, computingTimeSec,
      iterationsPerSecond: computingTimeSec > 0 ? numOfIter / computingTimeSec : null,
      almost: mx.mXparser.checkIfAlmostIntRounding(),
      ulp: mx.mXparser.checkIfUlpRounding(),
      canonical: mx.mXparser.checkIfCanonicalRounding() });
  } finally {
    f.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}
```

### Case 7: Time repeated dependent-argument calculations

This case disables all three rounding procedures during the measurement, then restores their preceding values. A faster result is useful only when these numerical semantics fit the application.

<!-- mx-example {"id":"C2-example-183","chapter":"C2-chapter-038","case":"C2-case-176","nativeReference":true,"nativeLoop":true} -->
```javascript
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const x = new mx.Argument('x');
  const y = new mx.Argument('y = 2sin(x)', x);
  try {
    mx.mXparser.disableCanonicalRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.disableAlmostIntRounding();
    const numOfIter = 10000000;
    let result, evaluations = 0;
    const start = performance.now();
    for (let xv = 0; xv <= numOfIter; xv++) {
      x.setArgumentValue(xv);
      result = y.getArgumentValue();
      evaluations++;
    }
    const computingTimeSec = (performance.now() - start) / 1000;
    if (evaluations !== numOfIter + 1 || !Number.isFinite(computingTimeSec) || computingTimeSec < 0)
      throw new Error('Invalid benchmark count or elapsed time');
    console.log("y", result);
    console.log('evaluations', evaluations);
    console.log({ benchmark: true, numOfIter, evaluations, computingTimeSec,
      iterationsPerSecond: computingTimeSec > 0 ? numOfIter / computingTimeSec : null,
      almost: mx.mXparser.checkIfAlmostIntRounding(),
      ulp: mx.mXparser.checkIfUlpRounding(),
      canonical: mx.mXparser.checkIfCanonicalRounding() });
  } finally {
    y.delete(); x.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}
```

The throughput field keeps the article's nominal `numOfIter / seconds`
convention; the separately reported evaluation count exposes the inclusive
endpoint. `null` means the timer could not resolve a positive duration; it
does not mean infinite performance. Timings are observations, not assertions
that one construction is universally faster. Neither the benchmark nor the
binding replaces native mathematics with JS calculations.

<!-- c2-chapter: C2-chapter-039 -->
## 39. Settings reference with executable checks

The historical chapter lists declarations for 21 configuration groups. The
examples below exercise those methods through the public JS API. They use a
small assertion helper so a failed state check stops execution. Settings and
mathematical behavior remain implemented in C++.

Most examples save and restore the preceding public setting. Console examples
intentionally print/reset the buffer and restore default prefixes. The final
example deliberately calls `setDefaultOptions()`; read its exact scope below.

<!-- mx-example {"id":"JS-settings-check-001","chapter":"C2-chapter-039"} -->
```javascript
let checkedSettings = 0;
function requireSetting(condition) {
  if (!condition) throw new Error('Native setting check failed');
  checkedSettings++;
}
```

### 1. Degrees and radians

The mode changes the native interpretation of trigonometric arguments. Save and restore the preceding mode.

<!-- mx-example {"id":"C2-example-184","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-001","settingAssertions":2} -->
```javascript
{
  const radians = mx.mXparser.checkIfRadiansMode();
  try {
    mx.mXparser.setDegreesMode();
    requireSetting(mx.mXparser.checkIfDegreesMode() && !mx.mXparser.checkIfRadiansMode());
    mx.mXparser.setRadiansMode();
    requireSetting(mx.mXparser.checkIfRadiansMode() && !mx.mXparser.checkIfDegreesMode());
  } finally { if (radians) mx.mXparser.setRadiansMode(); else mx.mXparser.setDegreesMode(); }
}
```

### 2. Expression-string correction

The global option supplies the initial mode of newly created expressions. An existing expression also has its own setters.

<!-- mx-example {"id":"C2-example-185","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-002","settingAssertions":4} -->
```javascript
{
  const previous = mx.mXparser.checkIfAttemptToFixExpStrMode();
  let e;
  try {
    mx.mXparser.disableAttemptToFixExpStrMode();
    e = new mx.Expression('2--3');
    requireSetting(!mx.mXparser.checkIfAttemptToFixExpStrMode() && !e.checkIfAttemptToFixExpStrMode());
    e.enableAttemptToFixExpStrMode();
    requireSetting(e.checkIfAttemptToFixExpStrMode());
    e.disableAttemptToFixExpStrMode();
    requireSetting(!e.checkIfAttemptToFixExpStrMode());
    mx.mXparser.enableAttemptToFixExpStrMode();
    requireSetting(mx.mXparser.checkIfAttemptToFixExpStrMode());
  } finally {
    e?.delete();
    if (previous) mx.mXparser.enableAttemptToFixExpStrMode(); else mx.mXparser.disableAttemptToFixExpStrMode();
  }
}
```

### 3. Prime-number cache

All three native initialization overloads are available. Installing a supplied cache retains it through native shared ownership. The prior cache handle is restored and released.

<!-- mx-example {"id":"C2-example-186","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-003","settingAssertions":4} -->
```javascript
{
  const previous = mx.mXparser.primesCache;
  let supplied;
  try {
    mx.mXparser.initPrimesCache();
    requireSetting(mx.mXparser.isInitPrimesCacheSuccessful() && mx.mXparser.getMaxNumInPrimesCache() > 0);
    mx.mXparser.initPrimesCache(1000);
    requireSetting(mx.mXparser.isInitPrimesCacheSuccessful() && mx.mXparser.getMaxNumInPrimesCache() === 1000);
    supplied = new mx.PrimesCache(2000);
    mx.mXparser.initPrimesCache(supplied);
    supplied.delete();
    requireSetting(mx.mXparser.getMaxNumInPrimesCache() === 2000);
    mx.mXparser.setNoPrimesCache();
    requireSetting(!mx.mXparser.isInitPrimesCacheSuccessful());
  } finally {
    mx.mXparser.primesCache = previous;
    if (supplied && !supplied.isDeleted()) supplied.delete();
    previous?.delete();
  }
}
```

### 4. Epsilon and exact comparison

Epsilon is engine comparison configuration. It does not alter the JavaScript equality operators.

<!-- mx-example {"id":"C2-example-187","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-004","settingAssertions":3} -->
```javascript
{
  const epsilon = mx.mXparser.getEpsilon();
  const exact = mx.mXparser.checkIfExactMode();
  try {
    mx.mXparser.setEpsilonComparison();
    mx.mXparser.setEpsilon(1e-9);
    requireSetting(mx.mXparser.checkIfEpsilonMode() && mx.mXparser.getEpsilon() === 1e-9);
    mx.mXparser.setDefaultEpsilon();
    requireSetting(mx.mXparser.getEpsilon() === mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON);
    mx.mXparser.setExactComparison();
    requireSetting(mx.mXparser.checkIfExactMode() && !mx.mXparser.checkIfEpsilonMode());
  } finally {
    mx.mXparser.setEpsilon(epsilon);
    if (exact) mx.mXparser.setExactComparison(); else mx.mXparser.setEpsilonComparison();
  }
}
```

### 5. Canonical rounding

The enable, disable and boolean setter forms all operate on the same native option. See the preceding smart-rounding chapter for numerical examples.

<!-- mx-example {"id":"C2-example-188","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-005","settingAssertions":4} -->
```javascript
{
  const previous = mx.mXparser.checkIfCanonicalRounding();
  try {
    mx.mXparser.disableCanonicalRounding(); requireSetting(!mx.mXparser.checkIfCanonicalRounding());
    mx.mXparser.enableCanonicalRounding(); requireSetting(mx.mXparser.checkIfCanonicalRounding());
    mx.mXparser.setCanonicalRounding(false); requireSetting(!mx.mXparser.checkIfCanonicalRounding());
    mx.mXparser.setCanonicalRounding(true); requireSetting(mx.mXparser.checkIfCanonicalRounding());
  } finally { mx.mXparser.setCanonicalRounding(previous); }
}
```

### 6. ULP rounding

The enable, disable and boolean setter forms all operate on the same native option. See the preceding smart-rounding chapter for numerical examples.

<!-- mx-example {"id":"C2-example-189","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-006","settingAssertions":4} -->
```javascript
{
  const previous = mx.mXparser.checkIfUlpRounding();
  try {
    mx.mXparser.disableUlpRounding(); requireSetting(!mx.mXparser.checkIfUlpRounding());
    mx.mXparser.enableUlpRounding(); requireSetting(mx.mXparser.checkIfUlpRounding());
    mx.mXparser.setUlpRounding(false); requireSetting(!mx.mXparser.checkIfUlpRounding());
    mx.mXparser.setUlpRounding(true); requireSetting(mx.mXparser.checkIfUlpRounding());
  } finally { mx.mXparser.setUlpRounding(previous); }
}
```

### 7. Almost-integer rounding

The enable, disable and boolean setter forms all operate on the same native option. See the preceding smart-rounding chapter for numerical examples.

<!-- mx-example {"id":"C2-example-190","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-007","settingAssertions":4} -->
```javascript
{
  const previous = mx.mXparser.checkIfAlmostIntRounding();
  try {
    mx.mXparser.disableAlmostIntRounding(); requireSetting(!mx.mXparser.checkIfAlmostIntRounding());
    mx.mXparser.enableAlmostIntRounding(); requireSetting(mx.mXparser.checkIfAlmostIntRounding());
    mx.mXparser.setAlmostIntRounding(false); requireSetting(!mx.mXparser.checkIfAlmostIntRounding());
    mx.mXparser.setAlmostIntRounding(true); requireSetting(mx.mXparser.checkIfAlmostIntRounding());
  } finally { mx.mXparser.setAlmostIntRounding(previous); }
}
```

### 8. Implied multiplication

Global changes determine the initial mode of a newly constructed expression. Local changes act on that expression; they do not translate its mathematical syntax.

<!-- mx-example {"id":"C2-example-191","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-008","settingAssertions":4} -->
```javascript
{
  const previous = mx.mXparser.checkIfImpliedMultiplicationMode();
  let e;
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    e = new mx.Expression("2pi");
    requireSetting(!mx.mXparser.checkIfImpliedMultiplicationMode() && !e.checkIfImpliedMultiplicationMode());
    e.enableImpliedMultiplicationMode(); requireSetting(e.checkIfImpliedMultiplicationMode());
    e.disableImpliedMultiplicationMode(); requireSetting(!e.checkIfImpliedMultiplicationMode());
    mx.mXparser.enableImpliedMultiplicationMode(); requireSetting(mx.mXparser.checkIfImpliedMultiplicationMode());
  } finally {
    e?.delete();
    if (previous) mx.mXparser.enableImpliedMultiplicationMode(); else mx.mXparser.disableImpliedMultiplicationMode();
  }
}
```

### 9. Unicode built-in keywords

Global changes determine the initial mode of a newly constructed expression. Local changes act on that expression; they do not translate its mathematical syntax.

<!-- mx-example {"id":"C2-example-192","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-009","settingAssertions":4} -->
```javascript
{
  const previous = mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode();
  let e;
  try {
    mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
    e = new mx.Expression("2π");
    requireSetting(!mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode() && !e.checkIfUnicodeBuiltinKeyWordsMode());
    e.enableUnicodeBuiltinKeyWordsMode(); requireSetting(e.checkIfUnicodeBuiltinKeyWordsMode());
    e.disableUnicodeBuiltinKeyWordsMode(); requireSetting(!e.checkIfUnicodeBuiltinKeyWordsMode());
    mx.mXparser.enableUnicodeBuiltinKeyWordsMode(); requireSetting(mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode());
  } finally {
    e?.delete();
    if (previous) mx.mXparser.enableUnicodeBuiltinKeyWordsMode(); else mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
  }
}
```

### 10. Verbose and silent expression modes

Verbose output comes from the C++ evaluator. Return the expression to silent mode before releasing its handle.

<!-- mx-example {"id":"C2-example-193","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-010","settingAssertions":3} -->
```javascript
{
  const e = new mx.Expression('2+3');
  try {
    e.setVerboseMode(); requireSetting(e.getVerboseMode());
    requireSetting(e.calculate() === 5);
    e.setSilentMode(); requireSetting(!e.getVerboseMode());
  } finally { e.delete(); }
}
```

### 11. Override built-in tokens

This option permits user definitions to override built-in tokens. The earlier token-manipulation chapter demonstrates its effect on calculations.

<!-- mx-example {"id":"C2-example-194","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-011","settingAssertions":2} -->
```javascript
{
  const previous = mx.mXparser.checkIfsetToOverrideBuiltinTokens();
  try {
    mx.mXparser.setToOverrideBuiltinTokens(); requireSetting(mx.mXparser.checkIfsetToOverrideBuiltinTokens());
    mx.mXparser.setNotToOverrideBuiltinTokens(); requireSetting(!mx.mXparser.checkIfsetToOverrideBuiltinTokens());
  } finally {
    if (previous) mx.mXparser.setToOverrideBuiltinTokens(); else mx.mXparser.setNotToOverrideBuiltinTokens();
  }
}
```

### 12. Modify built-in tokens

Each value-array row contains the original token, replacement token and nullable description. Arrays contain copied values and have no Embind handle to delete.

<!-- mx-example {"id":"C2-example-195","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-012","settingAssertions":3} -->
```javascript
{
  const previous = mx.mXparser.getBuiltinTokensToModify();
  try {
    mx.mXparser.unmodifyAllBuiltinTokens();
    mx.mXparser.modifyBuiltinToken('sin', 'sineAlias');
    mx.mXparser.modifyBuiltinToken('cos', 'cosineAlias', 'Custom cosine description');
    const rows = mx.mXparser.getBuiltinTokensToModify();
    requireSetting(rows.length === 2 && rows[0][0] === 'sin' && rows[0][1] === 'sineAlias');
    requireSetting(rows[1][0] === 'cos' && rows[1][1] === 'cosineAlias' && rows[1][2] === 'Custom cosine description');
    mx.mXparser.unmodifyBuiltinTokens('sin', 'cosineAlias');
    requireSetting(mx.mXparser.getBuiltinTokensToModify().length === 0);
  } finally {
    mx.mXparser.unmodifyAllBuiltinTokens();
    for (const [original, replacement, description] of previous) mx.mXparser.modifyBuiltinToken(original, replacement, description);
  }
}
```

### 13. Remove built-in tokens

Removal and restoration use the existing variadic native APIs. Preserve earlier application configuration when demonstrating temporary removal.

<!-- mx-example {"id":"C2-example-196","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-013","settingAssertions":2} -->
```javascript
{
  const previous = mx.mXparser.getBuiltinTokensToRemove();
  try {
    mx.mXparser.unremoveAllBuiltinTokens();
    mx.mXparser.removeBuiltinTokens('sin', 'cos');
    const removed = mx.mXparser.getBuiltinTokensToRemove();
    requireSetting(removed.length === 2 && removed[0] === 'sin' && removed[1] === 'cos');
    mx.mXparser.unremoveBuiltinTokens('sin', 'cos');
    requireSetting(mx.mXparser.getBuiltinTokensToRemove().length === 0);
  } finally {
    mx.mXparser.unremoveAllBuiltinTokens();
    mx.mXparser.removeBuiltinTokens(previous);
  }
}
```

### 14. Calculation cancellation

The cancellation flag belongs to the native module. This example exercises its synchronous state transitions; interrupting an already running synchronous JS call requires a separately tested concurrent environment.

<!-- mx-example {"id":"C2-example-197","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-014","settingAssertions":2} -->
```javascript
{
  const previous = mx.mXparser.isCurrentCalculationCancelled();
  try {
    mx.mXparser.cancelCurrentCalculation(); requireSetting(mx.mXparser.isCurrentCalculationCancelled());
    mx.mXparser.resetCancelCurrentCalculationFlag(); requireSetting(!mx.mXparser.isCurrentCalculationCancelled());
  } finally {
    if (previous) mx.mXparser.cancelCurrentCalculation(); else mx.mXparser.resetCancelCurrentCalculationFlag();
  }
}
```

### 15. Console prefix

The console prefix applies to native printed output. It is separate from the prefix stored in the accumulated output string. This demonstration restores the documented default prefix.

<!-- mx-example {"id":"C2-example-198","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-015","nativeContains":["[tutorial] ","Native console prefix example"],"settingAssertions":0} -->
```javascript
{
  try {
    mx.mXparser.resetConsoleOutput();
    mx.mXparser.setConsolePrefix('[tutorial] ');
    mx.mXparser.consolePrintln(['Native console prefix example']);
  } finally { mx.mXparser.setDefaultConsolePrefix(); }
}
```

### 16. Accumulated console output

Resetting output intentionally clears the native buffer. The example checks the custom output prefix and restores the default prefix afterward.

<!-- mx-example {"id":"C2-example-199","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-016","settingAssertions":2} -->
```javascript
{
  try {
    mx.mXparser.resetConsoleOutput();
    mx.mXparser.setConsoleOutputPrefix('[captured] ');
    mx.mXparser.consolePrintln(['Captured native output']);
    const captured = mx.mXparser.getConsoleOutput();
    requireSetting(captured.includes('[captured] ') && captured.includes('Captured native output'));
    mx.mXparser.resetConsoleOutput();
    requireSetting(mx.mXparser.getConsoleOutput() === '');
  } finally { mx.mXparser.setDefaultConsoleOutputPrefix(); }
}
```

### 17. Maximum recursion depth

The native limit protects recursive evaluation. Changing it does not create JS recursion or configure the browser stack.

<!-- mx-example {"id":"C2-example-200","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-017","settingAssertions":1} -->
```javascript
{
  const previous = mx.mXparser.getMaxAllowedRecursionDepth();
  try {
    mx.mXparser.setMaxAllowedRecursionDepth(64);
    requireSetting(mx.mXparser.getMaxAllowedRecursionDepth() === 64);
  } finally { mx.mXparser.setMaxAllowedRecursionDepth(previous); }
}
```

### 18. Fraction conversion

The search-size parameter is a native 64-bit integer and uses bigint. Returned fraction arrays contain numeric values: sign/numerator/denominator, or sign/whole/numerator/denominator.

<!-- mx-example {"id":"C2-example-201","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-018","settingAssertions":5} -->
```javascript
{
  const previous = mx.mXparser.getToFractionInitSearchSize();
  try {
    mx.mXparser.setToFractionInitSearchSize(1000n);
    requireSetting(mx.mXparser.getToFractionInitSearchSize() === 1000n);
    const fraction = mx.mXparser.toFraction(-2.5);
    const mixed = mx.mXparser.toMixedFraction(-2.5);
    requireSetting(fraction.length === 3 && fraction[0] === -1 && fraction[1] === 5 && fraction[2] === 2);
    requireSetting(mixed.length === 4 && mixed[0] === -1 && mixed[1] === 2 && mixed[2] === 1 && mixed[3] === 2);
    requireSetting(mx.mXparser.toFractionString(-2.5) === '-5/2');
    requireSetting(mx.mXparser.toMixedFractionString(-2.5) === '-2-1/2');
  } finally { mx.mXparser.setToFractionInitSearchSize(previous); }
}
```

### 19. Choose the native random generator

Installing a generator keeps native shared ownership. Restoring the previous generator and releasing both temporary handles avoids retaining the example generator. Identical seeds are not a cross-standard-library sequence guarantee.

<!-- mx-example {"id":"C2-example-202","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-019","settingAssertions":2} -->
```javascript
{
  const previous = mx.ProbabilityDistributions.randomGenerator;
  const selected = new mx.Random(1729);
  try {
    mx.mXparser.setRandomGenerator(selected);
    const installed = mx.ProbabilityDistributions.randomGenerator;
    try {
      requireSetting(installed.isAliasOf(selected));
      const value = installed.nextDouble();
      requireSetting(Number.isFinite(value) && value >= 0 && value < 1);
    } finally { installed.delete(); }
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previous;
    selected.delete(); previous?.delete();
  }
}
```

### 20. Maximum thread count

This is the native setting, not a promise that arbitrary JS callbacks can move between Workers. The default uses native hardware_concurrency, so its exact value is environment dependent.

<!-- mx-example {"id":"C2-example-203","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-020","settingAssertions":2} -->
```javascript
{
  const previous = mx.mXparser.getThreadsNumber();
  try {
    mx.mXparser.setThreadsNumber(2);
    requireSetting(mx.mXparser.getThreadsNumber() === 2);
    mx.mXparser.setDefaultThreadsNumber();
    const detected = mx.mXparser.getThreadsNumber();
    requireSetting(Number.isInteger(detected) && detected >= 0);
  } finally {
    if (previous > 0) mx.mXparser.setThreadsNumber(previous);
  }
}
```

### 21. Default options

This operation intentionally resets the specific options implemented by current C++. It is not a universal reset: current source does not reset canonical rounding, removed tokens, console prefixes, random generator, prime cache or thread count. It enables ULP rounding, although fresh-module startup has ULP rounding disabled. Existing expressions retain their own local modes.

<!-- mx-example {"id":"C2-example-204","chapter":"C2-chapter-039","case":null,"setting":"C2-setting-021","settingAssertions":4} -->
```javascript
{
  mx.mXparser.disableUlpRounding();
  mx.mXparser.setDegreesMode();
  mx.mXparser.setExactComparison();
  mx.mXparser.disableImpliedMultiplicationMode();
  mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
  mx.mXparser.disableAttemptToFixExpStrMode();
  mx.mXparser.setDefaultOptions();
  requireSetting(mx.mXparser.checkIfUlpRounding() && mx.mXparser.checkIfAlmostIntRounding());
  requireSetting(mx.mXparser.checkIfRadiansMode() && mx.mXparser.checkIfEpsilonMode());
  requireSetting(mx.mXparser.checkIfImpliedMultiplicationMode() && mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode());
  requireSetting(mx.mXparser.checkIfAttemptToFixExpStrMode() && !mx.mXparser.isCurrentCalculationCancelled());
}
```

<!-- c2-chapter: C2-chapter-040 -->
## 40. Serialization and deserialization

`SerializationUtils` preserves native expression graphs and their state for
later reuse. It uses the original C++ binary serializer. Neither JSON nor JS
object cloning replaces that format.

### Security and explicit enabling

Binary serialization is disabled initially. Enable it only after considering
the risks of deserializing data. Untrusted or tampered data can expose an
application to security vulnerabilities and denial of service. mXparser does
not authenticate archives or protect them against modification. Authenticate
and validate the source of data before deserializing it; do not treat the
enabling method as a guarantee that arbitrary archives are safe.

### Case 1: Enable and disable binary serialization

The method's full name records the explicit acknowledgement required by the
native API. Both status and diagnostic message come from the original engine.
Disabling serialization afterward does not prevent evaluating objects that
have already been restored. This chapter explicitly selects English diagnostic
resources with the native language API, so the examples are independent of the
OS locale selected by the preceding default-options example.

<!-- mx-example {"id":"C2-example-205","chapter":"C2-chapter-040","case":"C2-case-177","nativeSerialization":true} -->
```javascript
{
  mx.mXparser.changeLanguageTo('en');
  try {
    mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
    console.log('Was the last operation successful = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('The last operation message = ', mx.SerializationUtils.getLastOperationMessage());
    console.log('-----------------------------------');
    mx.SerializationUtils.disableBinarySerialization();
    console.log('Was the last operation successful = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('The last operation message = ', mx.SerializationUtils.getLastOperationMessage());
  } finally { mx.SerializationUtils.disableBinarySerialization(); }
}
```

### Case 2: Round-trip an expression through bytes

`serializeToBytes()` returns an owned `Uint8Array` value. Supply `mx.Expression` when reading it: this is the JS equivalent of the native `<Expression>` template argument. The bytes do not have an Embind handle to delete.

<!-- mx-example {"id":"C2-example-206","chapter":"C2-chapter-040","case":"C2-case-178","nativeSerialization":true} -->
```javascript
{
  const e = new mx.Expression('2+3/sin(pi/2)');
  let copy;
  try {
    mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
    console.log('This is where the entire object is serialized');
    const data = mx.SerializationUtils.serializeToBytes(e);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    console.log('This is where the entire object is deserialized');
    copy = mx.SerializationUtils.deserializeFromBytes(data, mx.Expression);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    mx.SerializationUtils.disableBinarySerialization();
    console.log('And here we check if the copy of the Expression works');
    if (copy === null) throw new Error('Native deserialization failed');
    console.log('eCopy.calculate() = ', copy.calculate());
  } finally {
    mx.SerializationUtils.disableBinarySerialization();
    copy?.delete(); e.delete();
  }
}
```

### Case 3: Round-trip an expression through a binary string

The returned JS string transports the native narrow binary string byte for byte; it is not readable mathematical text, Unicode text serialization, JSON or an implicit Base64 encoding. Prefer the byte API for binary storage and transfer.

<!-- mx-example {"id":"C2-example-207","chapter":"C2-chapter-040","case":"C2-case-179","nativeSerialization":true} -->
```javascript
{
  const e = new mx.Expression('2+3/sin(pi/2)');
  let copy;
  try {
    mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
    console.log('This is where the entire object is serialized');
    const data = mx.SerializationUtils.serializeToString(e);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    console.log('This is where the entire object is deserialized');
    copy = mx.SerializationUtils.deserializeFromString(data, mx.Expression);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    mx.SerializationUtils.disableBinarySerialization();
    console.log('And here we check if the copy of the Expression works');
    if (copy === null) throw new Error('Native deserialization failed');
    console.log('eCopy.calculate() = ', copy.calculate());
  } finally {
    mx.SerializationUtils.disableBinarySerialization();
    copy?.delete(); e.delete();
  }
}
```

### Case 4: Round-trip an expression through a virtual file

The file belongs to this module's Emscripten virtual filesystem in both Node and the browser. It is not automatically written to the Node host filesystem or downloaded by a browser. This example uses a relative virtual filename instead of the article's workstation-specific Windows path. `mx.FS.readFile()` can retrieve its bytes for an application-managed save operation.

<!-- mx-example {"id":"C2-example-208","chapter":"C2-chapter-040","case":"C2-case-180","nativeSerialization":true} -->
```javascript
{
  const e = new mx.Expression('2+3/sin(pi/2)');
  let copy;
  const path = 'tutorial-expression.ser';
  let written = false;
  try {
    mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
    console.log('This is where the entire object is serialized');
    written = mx.SerializationUtils.serializeToFile(e, path);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    console.log('This is where the entire object is deserialized');
    copy = mx.SerializationUtils.deserializeFromFile(path, mx.Expression);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    mx.SerializationUtils.disableBinarySerialization();
    console.log('And here we check if the copy of the Expression works');
    if (copy === null) throw new Error('Native deserialization failed');
    console.log('eCopy.calculate() = ', copy.calculate());
  } finally {
    mx.SerializationUtils.disableBinarySerialization();
    copy?.delete(); e.delete();
    if (written) mx.FS.unlink(path);
  }
}
```

### Case 5: Preserve a compiled dependency graph

The original graph contains two user functions and two arguments. Inspect
syntax status and diagnostics before calculating, after calculating and after
restoring the graph. Obtain dependencies from the restored expression and
change those native copies: the new values 5 and 12 change the result from
5 to 13. The original graph remains independent.

<!-- mx-example {"id":"C2-example-209","chapter":"C2-chapter-040","case":"C2-case-181","nativeSerialization":true} -->
```javascript
{
  const f = new mx.Function('f(x) = x^2');
  const g = new mx.Function('g(x,y) = sqrt(f(x) + f(y))', f);
  const a = new mx.Argument('a = 3');
  const b = new mx.Argument('b = 4');
  const e = new mx.Expression('g(a,b)', g, a, b);
  let copy, aCopy, bCopy, gCopy, fCopy;
  try {
    console.log('Syntax status before pre-compilation: ', e.getSyntaxStatus());
    console.log('Message before pre-compilation: ', e.getErrorMessage());
    console.log('----------------------------------');
    console.log('Calculated value = ', e.calculate());
    console.log('Syntax status before serialization: ', e.getSyntaxStatus());
    console.log('Message after before serialization: ', e.getErrorMessage());
    console.log('----------------------------------');
    mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
    const data = mx.SerializationUtils.serializeToBytes(e);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    copy = mx.SerializationUtils.deserializeFromBytes(data, mx.Expression);
    mx.SerializationUtils.disableBinarySerialization();
    if (copy === null) throw new Error('Native deserialization failed');
    console.log('----------------------------------');
    console.log('Syntax status after deserialization: ', copy.getSyntaxStatus());
    console.log('Message after deserialization: ', copy.getErrorMessage());
    console.log('Calculated value after deserialization = ', copy.calculate());
    console.log('----------------------------------');
    aCopy = copy.getArgument('a'); bCopy = copy.getArgument('b');
    gCopy = copy.getFunction('g'); fCopy = gCopy.getFunction('f');
    aCopy.setArgumentValue(5); bCopy.setArgumentValue(12);
    console.log('Calculated value after arguments values modification = ', copy.calculate());
    if (aCopy.isAliasOf(a) || bCopy.isAliasOf(b) || gCopy.isAliasOf(g) || fCopy.isAliasOf(f))
      throw new Error('Restored dependencies unexpectedly alias the original graph');
    if (e.calculate() !== 5) throw new Error('Restored graph mutation changed the original');
  } finally {
    mx.SerializationUtils.disableBinarySerialization();
    for (const handle of [fCopy, gCopy, bCopy, aCopy, copy, e, b, a, g, f]) handle?.delete();
  }
}
```

Only JS handles are released by the cleanup. Native ownership preserves
dependencies until their final owner disappears. These ordinary acyclic
graphs need no manual removal of definitions.

The examples establish round trips within the tested WASM engine and native
reference runtime. They do not promise archive interchange between every
native architecture: native representation, including wchar_t width, matters.
Arbitrary JS closures are not registered native serialization types. An
extension callback that evaluates successfully is not automatically serializable.

<!-- c2-chapter: C2-chapter-041 -->
## 41. Clone complete native dependency graphs

User objects can share arguments, constants, functions and internal expressions.
`cloneForThreadSafe()` creates a native copy of the relevant graph while
preserving sharing within that copy. Changes to copied dependencies do not
change the original graph. This is different from `cloneHandle()`, which only
creates another owned JS handle to the same native object.

The method's name does not make a shared mutable graph safe for arbitrary
concurrent access. Nor does it transport JS callback closures or Embind handles
between Workers. The examples below verify native graph-copy behavior in the
current module. A separate Worker/thread deployment must respect its tested
runtime and initialization boundaries.

### The five native object families

The historical declaration list covers Constant, Argument, RecursiveArgument,
Function and Expression. Here each is instantiated and its clone is actually
used. RecursiveArgument inherits the native Argument return signature; runtime
subtype checking narrows the cloned handle before its indexed-value overload.

<!-- mx-example {"id":"C2-example-210","chapter":"C2-chapter-041","case":null,"nativeClone":true} -->
```javascript
{
  const constant = new mx.Constant('k = 7');
  const argument = new mx.Argument('x = 2');
  const recursive = new mx.RecursiveArgument('r(n) = r(n-1)+r(n-2)');
  const fn = new mx.Function('f(t) = t^2');
  const expression = new mx.Expression('2+3');
  const copies = [];
  try {
    recursive.addBaseCase(0, 0); recursive.addBaseCase(1, 1);
    const c = constant.cloneForThreadSafe(); copies.push(c);
    const a = argument.cloneForThreadSafe(); copies.push(a);
    const r = recursive.cloneForThreadSafe(); copies.push(r);
    const f = fn.cloneForThreadSafe(); copies.push(f);
    const e = expression.cloneForThreadSafe(); copies.push(e);
    if (!(r instanceof mx.RecursiveArgument)) throw new Error('Recursive clone lost its native subtype');
    console.log([constant.getConstantValue(), c.getConstantValue(), c.isAliasOf(constant)]);
    console.log([argument.getArgumentValue(), a.getArgumentValue(), a.isAliasOf(argument)]);
    console.log([recursive.getArgumentValue(8), r.getArgumentValue(8), r.isAliasOf(recursive)]);
    console.log([fn.calculate(3), f.calculate(3), f.isAliasOf(fn)]);
    console.log([expression.calculate(), e.calculate(), e.isAliasOf(expression)]);
  } finally {
    for (const copy of copies.reverse()) copy.delete();
    expression.delete(); fn.delete(); recursive.delete(); argument.delete(); constant.delete();
  }
}
```

Each pair has equal calculated values and distinct native identity. Ordinary
self-recursive functions/arguments do not require manual removal of their own
definitions when their final owners are released.

### Case 1: Clone a dependent argument

The copy yc owns its own copy of x. Updating the original x changes y from 4
to 8 while yc stays 4. Deleting the handles after use releases this ordinary graph.

<!-- mx-example {"id":"C2-example-211","chapter":"C2-chapter-041","case":"C2-case-182","nativeClone":true} -->
```javascript
{
  const x = new mx.Argument('x = 2');
  const y = new mx.Argument('y = 2x', x);
  let yc;
  try {
    yc = y.cloneForThreadSafe();
    console.log([x.getArgumentValue(), y.getArgumentValue(), yc.getArgumentValue()]);
    x.setArgumentValue(4);
    console.log([x.getArgumentValue(), y.getArgumentValue(), yc.getArgumentValue()]);
  } finally { yc?.delete(); y.delete(); x.delete(); }
}
```

### Case 2: Retrieve and modify a dependency inside the copy

`yc.getArgument('x')` returns a handle to the copied dependency. The first
mutation affects the original graph; the second affects only the copied graph.

<!-- mx-example {"id":"C2-example-212","chapter":"C2-chapter-041","case":"C2-case-183","nativeClone":true} -->
```javascript
{
  const x = new mx.Argument('x = 2');
  const y = new mx.Argument('y = 2x', x);
  let yc, xc;
  try {
    yc = y.cloneForThreadSafe(); xc = yc.getArgument('x');
    console.log([x.getArgumentValue(), y.getArgumentValue(), xc.getArgumentValue(), yc.getArgumentValue()]);
    x.setArgumentValue(4);
    console.log([x.getArgumentValue(), y.getArgumentValue(), xc.getArgumentValue(), yc.getArgumentValue()]);
    xc.setArgumentValue(5);
    console.log([x.getArgumentValue(), y.getArgumentValue(), xc.getArgumentValue(), yc.getArgumentValue()]);
  } finally { xc?.delete(); yc?.delete(); y.delete(); x.delete(); }
}
```

### Case 3: Preserve shared identity within the copied graph

Both paths through the cloned graph reach the same copied constant a.
That constant is distinct from the original a. In JS use `isAliasOf()` for this
native identity comparison: independently returned handles need not satisfy
`===`. Named intermediate handles below are released explicitly.

<!-- mx-example {"id":"C2-example-213","chapter":"C2-chapter-041","case":"C2-case-184","nativeClone":true} -->
```javascript
{
  const a = new mx.Constant('a = 2');
  const x = new mx.Argument('x = 2a', a);
  const y = new mx.Argument('y = 2x', x);
  const f = new mx.Function('f(u,v) = u^2 + v^2 + a', a);
  const e = new mx.Expression('f(1,2) + y', f, y);
  let ec, fc, yc, xc, ac1, ac2;
  try {
    ec = e.cloneForThreadSafe();
    console.log([e.calculate(), ec.calculate()]);
    fc = ec.getFunction('f'); ac1 = fc.getConstant('a');
    yc = ec.getArgument('y'); xc = yc.getArgument('x'); ac2 = xc.getConstant('a');
    console.log([ac1.isAliasOf(ac2), a.isAliasOf(ac1), a.isAliasOf(ac2)]);
  } finally {
    for (const handle of [ac2, ac1, xc, yc, fc, ec, e, f, y, x, a]) handle?.delete();
  }
}
```

### Case 4: Clone mutually recursive user functions

This example intentionally establishes ownership in both directions with
`addDefinitions()`. Each independent expression clone has its own copied
mutual graph. The original and cloned results must agree within the runtime;
the approximation is not an assertion that these short recursive formulas
equal the built-in sine/cosine exactly.

These are deliberately created mutual owning cycles. After the calculations,
remove both directions in the original graph and in each independently cloned
graph using the existing definition-removal API. Releasing only their Embind
handles would leave those strong native cycles allocated. Ordinary expressions,
acyclic dependencies and intrinsic self references do not require this teardown.

<!-- mx-example {"id":"C2-example-214","chapter":"C2-chapter-041","case":"C2-case-185","nativeClone":true} -->
```javascript
{
  let a, s, c, e1, e2, e1c, e2c, sc1, cc1, sc2, cc2;
  try {
    a = new mx.Constant('a = 0.001');
    s = new mx.Function('s(x) = if( abs(x) < a, x, 2*s(x/2)*c(x/2) )', a);
    c = new mx.Function('c(x) = if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )', a);
    s.addDefinitions(c); c.addDefinitions(s);
    e1 = new mx.Expression('sin(5)-s(5)', s);
    e2 = new mx.Expression('cos(5)-c(5)', c);
    e1c = e1.cloneForThreadSafe();
    sc1 = e1c.getFunction('s'); cc1 = sc1.getFunction('c');
    e2c = e2.cloneForThreadSafe();
    cc2 = e2c.getFunction('c'); sc2 = cc2.getFunction('s');
    console.log([e1.calculate(), e1c.calculate()]);
    console.log([e2.calculate(), e2c.calculate()]);
    if (s.isAliasOf(sc1) || s.isAliasOf(sc2) || sc1.isAliasOf(sc2) ||
        c.isAliasOf(cc1) || c.isAliasOf(cc2) || cc1.isAliasOf(cc2))
      throw new Error('Independent expression clones unexpectedly share function nodes');
  } finally {
    for (const [left, right] of [[s, c], [sc1, cc1], [sc2, cc2]]) {
      if (left && right) { left.removeDefinitions(right); right.removeDefinitions(left); }
    }
    for (const handle of [sc2, cc2, cc1, sc1, e2c, e1c, e2, e1, c, s, a]) handle?.delete();
  }
}
```

The shared native control blocks, cloned dependency identities, recursion and
definition removal are all provided by the original C++ engine. No JS graph
copy, handle registry, identity cache or `structuredClone()` participates.

<!-- c2-chapter: C2-chapter-042 -->
## 42. Export help as plain text

Plain-text help can include a column header and a standard or supplied caption.
The following catalogue exercises both static and expression-level overloads.
It prints the UTF-8 byte counts of the returned strings to keep an unrestricted
help dump out of the introductory example. The specific cases then print the
complete filtered native output.

Use one plain search word, such as `sine`, or one advanced tag:
`key=sin`, `desc=trigonometric`, `syn=sin`, `type=unit`, `since=4.1`,
`typeid=3` or `keyid=1004`. Only one tag is interpreted per search.
The query filters native keyword metadata; it does not parse a new mathematical
expression or change the expression language.

<!-- mx-example {"id":"C2-example-215","chapter":"C2-chapter-042","case":null,"nativeHelpCounts":true} -->
```javascript
{
  const e = new mx.Expression('');
  try {
    const texts = [
      mx.mXparser.getHelp(),
      mx.mXparser.getHelp("sin"),
      mx.mXparser.getHelp(true, true, "Help reference"),
      mx.mXparser.getHelp("type=Bitwise operator", true, true, "Help reference"),
      e.getHelp(),
      e.getHelp("sin"),
      e.getHelp(true, true, "Help reference"),
      e.getHelp("type=Bitwise operator", true, true, "Help reference"),
    ];
    const counts = [];
    for (const value of texts) {
      if (typeof value !== 'string') throw new Error('Expected native help text');
      counts.push(new TextEncoder().encode(value).length);
    }
    console.log(counts);
  } finally { e.delete(); }
}
```

### Case 1: Include the header and standard caption

<!-- mx-example {"id":"C2-example-216","chapter":"C2-chapter-042","case":"C2-case-186","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelp("type=Bitwise operator", true, true, "");
  console.log(help);
}
```

### Case 2: Supply a caption

<!-- mx-example {"id":"C2-example-217","chapter":"C2-chapter-042","case":"C2-case-187","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelp("type=Bitwise operator", true, true, "This is a caption");
  console.log(help);
}
```

### Case 3: Omit the header and caption

The historical C++ box contains only an include. This executable call follows
the complete Java/C# example in the same source article using the current C++
overload; the supplied caption is ignored because captions are disabled.

<!-- mx-example {"id":"C2-example-218","chapter":"C2-chapter-042","case":"C2-case-188","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelp("type=Bitwise operator", false, false, "This is a caption");
  console.log(help);
}
```

<!-- c2-chapter: C2-chapter-043 -->
## 43. Export help as CSV

Choose the quote string, delimiter and header option explicitly when writing
a CSV-oriented integration. The engine produces and escapes the text. These
examples do not split or reconstruct rows in JS.

Use one plain search word, such as `sine`, or one advanced tag:
`key=sin`, `desc=trigonometric`, `syn=sin`, `type=unit`, `since=4.1`,
`typeid=3` or `keyid=1004`. Only one tag is interpreted per search.
The query filters native keyword metadata; it does not parse a new mathematical
expression or change the expression language.

<!-- mx-example {"id":"C2-example-219","chapter":"C2-chapter-043","case":null,"nativeHelpCounts":true} -->
```javascript
{
  const e = new mx.Expression('');
  try {
    const texts = [
      mx.mXparser.getHelpAsCsv(),
      mx.mXparser.getHelpAsCsv("sin"),
      mx.mXparser.getHelpAsCsv("\"", ";", true),
      mx.mXparser.getHelpAsCsv("type=Bitwise operator", "\"", ";", true),
      e.getHelpAsCsv(),
      e.getHelpAsCsv("sin"),
      e.getHelpAsCsv("\"", ";", true),
      e.getHelpAsCsv("type=Bitwise operator", "\"", ";", true),
    ];
    const counts = [];
    for (const value of texts) {
      if (typeof value !== 'string') throw new Error('Expected native help text');
      counts.push(new TextEncoder().encode(value).length);
    }
    console.log(counts);
  } finally { e.delete(); }
}
```

### Case 1: Use double quotes and semicolons

<!-- mx-example {"id":"C2-example-220","chapter":"C2-chapter-043","case":"C2-case-189","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsCsv("type=Bitwise operator", "\"", ";", true);
  console.log(help);
}
```

### Case 2: Use single quotes and commas

<!-- mx-example {"id":"C2-example-221","chapter":"C2-chapter-043","case":"C2-case-190","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsCsv("type=Bitwise operator", "'", ",", true);
  console.log(help);
}
```

### Case 3: Use semicolons without text quotation

<!-- mx-example {"id":"C2-example-222","chapter":"C2-chapter-043","case":"C2-case-191","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsCsv("type=Bitwise operator", "", ";", true);
  console.log(help);
}
```

### Case 4: Omit the header

<!-- mx-example {"id":"C2-example-223","chapter":"C2-chapter-043","case":"C2-case-192","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsCsv("type=Bitwise operator", "\"", ";", false);
  console.log(help);
}
```

<!-- c2-chapter: C2-chapter-044 -->
## 44. Export help as an HTML table

Header, caption, figure wrapper and CSS-class options are native formatter
parameters. With a figure wrapper the caption uses figcaption; without it the
table can use caption. The method returns text for the application to render or
save; calling it does not alter a page's DOM.

Use one plain search word, such as `sine`, or one advanced tag:
`key=sin`, `desc=trigonometric`, `syn=sin`, `type=unit`, `since=4.1`,
`typeid=3` or `keyid=1004`. Only one tag is interpreted per search.
The query filters native keyword metadata; it does not parse a new mathematical
expression or change the expression language.

<!-- mx-example {"id":"C2-example-224","chapter":"C2-chapter-044","case":null,"nativeHelpCounts":true} -->
```javascript
{
  const e = new mx.Expression('');
  try {
    const texts = [
      mx.mXparser.getHelpAsHtmlTable(),
      mx.mXparser.getHelpAsHtmlTable("sin"),
      mx.mXparser.getHelpAsHtmlTable(true, true, false, "Help reference", "mx-help"),
      mx.mXparser.getHelpAsHtmlTable("type=Bitwise operator", true, true, true, "", "wp-block-table"),
      e.getHelpAsHtmlTable(),
      e.getHelpAsHtmlTable("sin"),
      e.getHelpAsHtmlTable(true, true, false, "Help reference", "mx-help"),
      e.getHelpAsHtmlTable("type=Bitwise operator", true, true, true, "", "wp-block-table"),
    ];
    const counts = [];
    for (const value of texts) {
      if (typeof value !== 'string') throw new Error('Expected native help text');
      counts.push(new TextEncoder().encode(value).length);
    }
    console.log(counts);
  } finally { e.delete(); }
}
```

### Case 1: Use a figure, standard caption and CSS class

<!-- mx-example {"id":"C2-example-225","chapter":"C2-chapter-044","case":"C2-case-193","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsHtmlTable("type=Bitwise operator", true, true, true, "", "wp-block-table");
  console.log(help);
}
```

### Case 2: Use a table caption without a figure

<!-- mx-example {"id":"C2-example-226","chapter":"C2-chapter-044","case":"C2-case-194","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsHtmlTable("type=Bitwise operator", true, true, false, "", "wp-block-table");
  console.log(help);
}
```

### Case 3: Supply a table caption

<!-- mx-example {"id":"C2-example-227","chapter":"C2-chapter-044","case":"C2-case-195","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsHtmlTable("type=Bitwise operator", true, true, false, "This is a caption", "wp-block-table");
  console.log(help);
}
```

### Case 4: Omit names, caption and CSS class

<!-- mx-example {"id":"C2-example-228","chapter":"C2-chapter-044","case":"C2-case-196","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsHtmlTable("type=Bitwise operator", false, false, false, "", "");
  console.log(help);
}
```

<!-- c2-chapter: C2-chapter-045 -->
## 45. Export help as a Markdown table

The native formatter escapes syntax such as the bitwise pipe operator for
Markdown table cells. It can include a heading caption and column names.
Disabling names still leaves the table structure required by the formatter.

Use one plain search word, such as `sine`, or one advanced tag:
`key=sin`, `desc=trigonometric`, `syn=sin`, `type=unit`, `since=4.1`,
`typeid=3` or `keyid=1004`. Only one tag is interpreted per search.
The query filters native keyword metadata; it does not parse a new mathematical
expression or change the expression language.

<!-- mx-example {"id":"C2-example-229","chapter":"C2-chapter-045","case":null,"nativeHelpCounts":true} -->
```javascript
{
  const e = new mx.Expression('');
  try {
    const texts = [
      mx.mXparser.getHelpAsMarkdownTable(),
      mx.mXparser.getHelpAsMarkdownTable("sin"),
      mx.mXparser.getHelpAsMarkdownTable(true, true, "Help reference"),
      mx.mXparser.getHelpAsMarkdownTable("type=Bitwise operator", true, true, ""),
      e.getHelpAsMarkdownTable(),
      e.getHelpAsMarkdownTable("sin"),
      e.getHelpAsMarkdownTable(true, true, "Help reference"),
      e.getHelpAsMarkdownTable("type=Bitwise operator", true, true, ""),
    ];
    const counts = [];
    for (const value of texts) {
      if (typeof value !== 'string') throw new Error('Expected native help text');
      counts.push(new TextEncoder().encode(value).length);
    }
    console.log(counts);
  } finally { e.delete(); }
}
```

### Case 1: Use a standard caption

<!-- mx-example {"id":"C2-example-230","chapter":"C2-chapter-045","case":"C2-case-197","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsMarkdownTable("type=Bitwise operator", true, true, "");
  console.log(help);
}
```

### Case 2: Supply a caption

<!-- mx-example {"id":"C2-example-231","chapter":"C2-chapter-045","case":"C2-case-198","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsMarkdownTable("type=Bitwise operator", true, true, "This is a caption");
  console.log(help);
}
```

### Case 3: Omit the caption

<!-- mx-example {"id":"C2-example-232","chapter":"C2-chapter-045","case":"C2-case-199","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsMarkdownTable("type=Bitwise operator", true, false, "This is a caption");
  console.log(help);
}
```

### Case 4: Omit column names and caption

<!-- mx-example {"id":"C2-example-233","chapter":"C2-chapter-045","case":"C2-case-200","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsMarkdownTable("type=Bitwise operator", false, false, "");
  console.log(help);
}
```

<!-- c2-chapter: C2-chapter-046 -->
## 46. Export help as JSON text

getHelpAsJson returns a string. It does not implicitly return a parsed JS
object. Applications can explicitly call JSON.parse when they need structured
data. The catalogue below does that only to check the returned JSON syntax;
the method and the subsequent printed examples still return/use native text.
The optional caption is represented by a caption object in the output array.

Use one plain search word, such as `sine`, or one advanced tag:
`key=sin`, `desc=trigonometric`, `syn=sin`, `type=unit`, `since=4.1`,
`typeid=3` or `keyid=1004`. Only one tag is interpreted per search.
The query filters native keyword metadata; it does not parse a new mathematical
expression or change the expression language.

<!-- mx-example {"id":"C2-example-234","chapter":"C2-chapter-046","case":null,"nativeHelpCounts":true} -->
```javascript
{
  const e = new mx.Expression('');
  try {
    const texts = [
      mx.mXparser.getHelpAsJson(),
      mx.mXparser.getHelpAsJson("sin"),
      mx.mXparser.getHelpAsJson(true, "Help reference"),
      mx.mXparser.getHelpAsJson("type=Bitwise operator", true, ""),
      e.getHelpAsJson(),
      e.getHelpAsJson("sin"),
      e.getHelpAsJson(true, "Help reference"),
      e.getHelpAsJson("type=Bitwise operator", true, ""),
    ];
    const counts = [];
    for (const value of texts) {
      if (typeof value !== 'string') throw new Error('Expected native help text');
      if (!Array.isArray(JSON.parse(value))) throw new Error('Expected the native help JSON array');
      counts.push(new TextEncoder().encode(value).length);
    }
    console.log(counts);
  } finally { e.delete(); }
}
```

### Case 1: Use a standard caption

The historical C++ print statement is truncated. The complete assigned native
JSON result is printed here, matching the surrounding article's intended use.

<!-- mx-example {"id":"C2-example-235","chapter":"C2-chapter-046","case":"C2-case-201","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsJson("type=Bitwise operator", true, "");
  console.log(help);
}
```

### Case 2: Supply a caption

<!-- mx-example {"id":"C2-example-236","chapter":"C2-chapter-046","case":"C2-case-202","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsJson("type=Bitwise operator", true, "This is a caption");
  console.log(help);
}
```

### Case 3: Omit the caption

<!-- mx-example {"id":"C2-example-237","chapter":"C2-chapter-046","case":"C2-case-203","nativeHelpText":true} -->
```javascript
{
  const help = mx.mXparser.getHelpAsJson("type=Bitwise operator", false, "");
  console.log(help);
}
```

<!-- c2-chapter: C2-chapter-047 -->
## 47. Access help programmatically

getKeyWords returns a JS array of native KeyWord handles. The container is a
value snapshot of the native result list; the elements retain their native
objects. The array itself has no `.delete()`. Delete every element handle,
including when only inspecting the array's length. The current C++ implementation
builds a new result list while sharing its KeyWord objects.

Use one plain search word, such as `sine`, or one advanced tag:
`key=sin`, `desc=trigonometric`, `syn=sin`, `type=unit`, `since=4.1`,
`typeid=3` or `keyid=1004`. Only one tag is interpreted per search.
The query filters native keyword metadata; it does not parse a new mathematical
expression or change the expression language.

<!-- mx-example {"id":"C2-example-238","chapter":"C2-chapter-047","case":null,"nativeHelpCounts":true} -->
```javascript
{
  const lists = [];
  try {
    lists.push(mx.mXparser.getKeyWords());
    lists.push(mx.mXparser.getKeyWords('type=Bitwise operator'));
    const counts = [];
    for (const words of lists) {
      if (words === null) throw new Error('Expected keyword arrays');
      counts.push(words.length);
    }
    console.log(counts);
  } finally {
    for (const words of lists) for (const word of words ?? []) word?.delete();
  }
}
```

<!-- mx-example {"id":"C2-example-239","chapter":"C2-chapter-047","case":null,"nativeHelpCounts":true} -->
```javascript
{
  const e = new mx.Expression('');
  const lists = [];
  try {
    lists.push(e.getKeyWords());
    lists.push(e.getKeyWords('type=Bitwise operator'));
    const counts = [];
    for (const words of lists) {
      if (words === null) throw new Error('Expected keyword arrays');
      counts.push(words.length);
    }
    console.log(counts);
  } finally {
    for (const words of lists) for (const word of words ?? []) word?.delete();
    e.delete();
  }
}
```

### Case 1: Count all known keywords

The count comes from the current engine. The old article's count of 522 is a
historical result.

<!-- mx-example {"id":"C2-example-240","chapter":"C2-chapter-047","case":"C2-case-204","nativeHelpCounts":true} -->
```javascript
{
  const words = mx.mXparser.getKeyWords();
  try {
    if (words === null) throw new Error('Expected keyword array');
    console.log([words.length]);
  } finally { for (const word of words ?? []) word?.delete(); }
}
```

### Case 2: Count an advanced-search result


<!-- mx-example {"id":"C2-example-241","chapter":"C2-chapter-047","case":"C2-case-205","nativeHelpCounts":true} -->
```javascript
{
  const words = mx.mXparser.getKeyWords("type=Bitwise operator");
  try {
    if (words === null) throw new Error('Expected keyword array');
    console.log([words.length]);
  } finally { for (const word of words ?? []) word?.delete(); }
}
```

### Case 3: Read keyword fields and type descriptions

StringResources supplies the interface labels. Each KeyWord provides its own
word, description, syntax, version and numeric identities. Token's native
type-description method resolves the type ID. These are values from the
engine, not a separate JS keyword catalogue.

<!-- mx-example {"id":"C2-example-242","chapter":"C2-chapter-047","case":"C2-case-206","nativeHelpKeywords":true} -->
```javascript
{
  const words = mx.mXparser.getKeyWords('type=Bitwise operator');
  const resources = mx.StringModel.getStringResources();
  try {
    if (words === null || resources === null) throw new Error('Missing native help data');
    console.log([words.length]);
    for (const word of words) {
      if (word === null) throw new Error('Missing native keyword');
      console.log({ labels: [resources.KEYWORD, resources.DESCRIPTION, resources.SYNTAX, resources.SINCE, resources.TYPE],
        keyword: word.wordString, description: word.description, syntax: word.syntax, since: word.since,
        type: mx.Token.getTokenTypeDescription(word.wordTypeId), typeId: word.wordTypeId, id: word.wordId });
    }
  } finally {
    resources?.delete();
    for (const word of words ?? []) word?.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-048 -->
## 48. Use mXparser in French

Select `fr` to use the built-in French resources. Language selection
changes native diagnostics, descriptions and help labels. It leaves mathematical
keywords, operators and numeric literal syntax unchanged. Decimal literals still
use a dot, and a comma still separates function arguments.

### Case 1: Change the diagnostic language

Disable implied multiplication before constructing the expression. Consequently
`2pi+3` fails in both languages: the same missing multiplication remains an error.
The output shows its expression text, NaN result and complete diagnostic first
in English and then in French. Two additional checks retain decimal and function
argument syntax. The finally blocks restore the previous resource object and
global mode, and release the example's handles.

<!-- mx-example {"id":"C2-example-243","chapter":"C2-chapter-048","case":"C2-case-207","nativeLocale":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("fr");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}
```

### Case 2: Obtain the complete French help table

The native HTML formatter supplies the complete current catalogue, with translated
headings and descriptions and the original mathematical syntax. The returned
string can be saved or rendered by the application. This example prints the
entire table; its test compares the complete original C++/WASM text.

<!-- mx-example {"id":"C2-example-244","chapter":"C2-chapter-048","case":"C2-case-208","nativeHelpText":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("fr");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-049 -->
## 49. Use mXparser in German

Select `de` to use the built-in German resources. Language selection
changes native diagnostics, descriptions and help labels. It leaves mathematical
keywords, operators and numeric literal syntax unchanged. Decimal literals still
use a dot, and a comma still separates function arguments.

### Case 1: Change the diagnostic language

Disable implied multiplication before constructing the expression. Consequently
`2pi+3` fails in both languages: the same missing multiplication remains an error.
The output shows its expression text, NaN result and complete diagnostic first
in English and then in German. Two additional checks retain decimal and function
argument syntax. The finally blocks restore the previous resource object and
global mode, and release the example's handles.

<!-- mx-example {"id":"C2-example-245","chapter":"C2-chapter-049","case":"C2-case-209","nativeLocale":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("de");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}
```

### Case 2: Obtain the complete German help table

The native HTML formatter supplies the complete current catalogue, with translated
headings and descriptions and the original mathematical syntax. The returned
string can be saved or rendered by the application. This example prints the
entire table; its test compares the complete original C++/WASM text.

<!-- mx-example {"id":"C2-example-246","chapter":"C2-chapter-049","case":"C2-case-210","nativeHelpText":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("de");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-050 -->
## 50. Use mXparser in Italian

Select `it` to use the built-in Italian resources. Language selection
changes native diagnostics, descriptions and help labels. It leaves mathematical
keywords, operators and numeric literal syntax unchanged. Decimal literals still
use a dot, and a comma still separates function arguments.

### Case 1: Change the diagnostic language

Disable implied multiplication before constructing the expression. Consequently
`2pi+3` fails in both languages: the same missing multiplication remains an error.
The output shows its expression text, NaN result and complete diagnostic first
in English and then in Italian. Two additional checks retain decimal and function
argument syntax. The finally blocks restore the previous resource object and
global mode, and release the example's handles.

<!-- mx-example {"id":"C2-example-247","chapter":"C2-chapter-050","case":"C2-case-211","nativeLocale":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("it");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}
```

### Case 2: Obtain the complete Italian help table

The native HTML formatter supplies the complete current catalogue, with translated
headings and descriptions and the original mathematical syntax. The returned
string can be saved or rendered by the application. This example prints the
entire table; its test compares the complete original C++/WASM text.

<!-- mx-example {"id":"C2-example-248","chapter":"C2-chapter-050","case":"C2-case-212","nativeHelpText":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("it");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-051 -->
## 51. Use mXparser in Polish

Select `pl` to use the built-in Polish resources. Language selection
changes native diagnostics, descriptions and help labels. It leaves mathematical
keywords, operators and numeric literal syntax unchanged. Decimal literals still
use a dot, and a comma still separates function arguments.

### Case 1: Change the diagnostic language

Disable implied multiplication before constructing the expression. Consequently
`2pi+3` fails in both languages: the same missing multiplication remains an error.
The output shows its expression text, NaN result and complete diagnostic first
in English and then in Polish. Two additional checks retain decimal and function
argument syntax. The finally blocks restore the previous resource object and
global mode, and release the example's handles.

<!-- mx-example {"id":"C2-example-249","chapter":"C2-chapter-051","case":"C2-case-213","nativeLocale":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("pl");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}
```

### Case 2: Obtain the complete Polish help table

The native HTML formatter supplies the complete current catalogue, with translated
headings and descriptions and the original mathematical syntax. The returned
string can be saved or rendered by the application. This example prints the
entire table; its test compares the complete original C++/WASM text.

<!-- mx-example {"id":"C2-example-250","chapter":"C2-chapter-051","case":"C2-case-214","nativeHelpText":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("pl");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-052 -->
## 52. Use mXparser in Portuguese

Select `pt` to use the built-in Portuguese resources. Language selection
changes native diagnostics, descriptions and help labels. It leaves mathematical
keywords, operators and numeric literal syntax unchanged. Decimal literals still
use a dot, and a comma still separates function arguments.

### Case 1: Change the diagnostic language

Disable implied multiplication before constructing the expression. Consequently
`2pi+3` fails in both languages: the same missing multiplication remains an error.
The output shows its expression text, NaN result and complete diagnostic first
in English and then in Portuguese. Two additional checks retain decimal and function
argument syntax. The finally blocks restore the previous resource object and
global mode, and release the example's handles.

<!-- mx-example {"id":"C2-example-251","chapter":"C2-chapter-052","case":"C2-case-215","nativeLocale":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("pt");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}
```

### Case 2: Obtain the complete Portuguese help table

The native HTML formatter supplies the complete current catalogue, with translated
headings and descriptions and the original mathematical syntax. The returned
string can be saved or rendered by the application. This example prints the
entire table; its test compares the complete original C++/WASM text.

<!-- mx-example {"id":"C2-example-252","chapter":"C2-chapter-052","case":"C2-case-216","nativeHelpText":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("pt");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-053 -->
## 53. Use mXparser in Spanish

Select `es` to use the built-in Spanish resources. Language selection
changes native diagnostics, descriptions and help labels. It leaves mathematical
keywords, operators and numeric literal syntax unchanged. Decimal literals still
use a dot, and a comma still separates function arguments.

### Case 1: Change the diagnostic language

Disable implied multiplication before constructing the expression. Consequently
`2pi+3` fails in both languages: the same missing multiplication remains an error.
The output shows its expression text, NaN result and complete diagnostic first
in English and then in Spanish. Two additional checks retain decimal and function
argument syntax. The finally blocks restore the previous resource object and
global mode, and release the example's handles.

<!-- mx-example {"id":"C2-example-253","chapter":"C2-chapter-053","case":"C2-case-217","nativeLocale":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("es");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}
```

### Case 2: Obtain the complete Spanish help table

The native HTML formatter supplies the complete current catalogue, with translated
headings and descriptions and the original mathematical syntax. The returned
string can be saved or rendered by the application. This example prints the
entire table; its test compares the complete original C++/WASM text.

The historical Spanish article contains damaged UTF-8 in its rendered output.
This example obtains fresh text from the current native Spanish resources; it
does not copy those damaged characters into the mathematical vocabulary.

<!-- mx-example {"id":"C2-example-254","chapter":"C2-chapter-053","case":"C2-case-218","nativeHelpText":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("es");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-054 -->
## 54. Use mXparser in Chinese

Select `zh` to use the built-in Chinese resources. Language selection
changes native diagnostics, descriptions and help labels. It leaves mathematical
keywords, operators and numeric literal syntax unchanged. Decimal literals still
use a dot, and a comma still separates function arguments.

### Case 1: Change the diagnostic language

Disable implied multiplication before constructing the expression. Consequently
`2pi+3` fails in both languages: the same missing multiplication remains an error.
The output shows its expression text, NaN result and complete diagnostic first
in English and then in Chinese. Two additional checks retain decimal and function
argument syntax. The finally blocks restore the previous resource object and
global mode, and release the example's handles.

<!-- mx-example {"id":"C2-example-255","chapter":"C2-chapter-054","case":"C2-case-219","nativeLocale":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("zh");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}
```

### Case 2: Obtain the complete Chinese help table

The native HTML formatter supplies the complete current catalogue, with translated
headings and descriptions and the original mathematical syntax. The returned
string can be saved or rendered by the application. This example prints the
entire table; its test compares the complete original C++/WASM text.

<!-- mx-example {"id":"C2-example-256","chapter":"C2-chapter-054","case":"C2-case-220","nativeHelpText":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("zh");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-055 -->
## 55. Configure your own translation

StringResources holds the native text fields. A new instance starts with English
defaults; assign only the fields you want to replace, then install it through
StringModel.setStringResources. The engine rebuilds descriptions from those
resources. The example's C++ subclass serves only to initialise these fields;
JavaScript can initialise the same native resource object directly.

The following catalogue executes the current resource/model methods. print and
printDescriptions show native resource values and derived descriptions.
printInitSrc prints the C++ engine's initialiser notation, including S(...);
it is a translation checklist, not executable JavaScript source. Set the
corresponding JS properties when preparing a translation.

For reproducible English fallback, these examples temporarily disable automatic
OS-language selection. Thus setDefaultStringResources selects English here.
Outside this setup it follows the original selection mode and native default
resources. Each example restores the exact prior object and selection mode.

<!-- mx-example {"id":"C2-example-257","chapter":"C2-chapter-055","case":null,"nativeConsole":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousSelection = mx.mXparser.checkIfSelectBestMatchingLanguage();
  try {
    mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setDefaultEnglishStringResources();
    const resources = mx.StringModel.getStringResources();
    if (resources === null) throw new Error('Expected native text resources');
    try {
      mx.StringModel.setStringResources(resources);
      mx.StringModel.setDefaultStringResources();
      mx.StringModel.print();
      mx.StringModel.printDescriptions();
      resources.print();
      resources.printInitSrc();
    } finally { resources.delete(); }
  } finally {
    if (previousSelection) mx.mXparser.enableSelectBestMatchingLanguage();
    else mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}
```

### Case 1: Supply a partial translation

Only ten fields are changed. The remaining resource values retain their English
defaults, so the help output deliberately mixes translated headings with default
descriptions. Search filters use the active translated type description:
`type=Liczba` finds the number type after installing this translation.

<!-- mx-example {"id":"C2-example-258","chapter":"C2-chapter-055","case":"C2-case-221","nativeConsole":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousSelection = mx.mXparser.checkIfSelectBestMatchingLanguage();
  const custom = new mx.StringResources();
  try {
    mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setDefaultEnglishStringResources();
    custom.USER_LANGUAGE = 'Polish';
    custom.NUMBER_LITERAL = 'Literał liczbowy';
    custom.NUMBER = 'Liczba';
    custom.ALL_HELP_CONTENT = 'Pomoc';
    custom.KEYWORD = 'Słowo kluczowe';
    custom.TYPE = 'Typ';
    custom.SYNTAX = 'Składnia';
    custom.SINCE = 'Od';
    custom.DESCRIPTION = 'Opis';
    custom.HELP_CONTENT_LIMITED_TO_QUERY = 'Zawartość pomocy została ograniczona do kwerendy';
    mx.mXparser.consolePrintln('Before change');
    mx.mXparser.consolePrintHelp('type=Number');
    mx.StringModel.setStringResources(custom);
    mx.mXparser.consolePrintln('After change');
    mx.mXparser.consolePrintHelp('type=Liczba');
    mx.StringModel.setDefaultStringResources();
    mx.mXparser.consolePrintln('Return to default');
    mx.mXparser.consolePrintHelp('type=Number');
  } finally {
    if (previousSelection) mx.mXparser.enableSelectBestMatchingLanguage();
    else mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setStringResources(previousResources);
    custom.delete();
    previousResources?.delete();
  }
}
```

### Case 2: Obtain the complete list of translatable fields

The generated native initialiser output lists the fields available in this engine
version. Use it when extending a partial translation to the complete resource
set; the historical printed field count is not the current API's field count.

<!-- mx-example {"id":"C2-example-259","chapter":"C2-chapter-055","case":"C2-case-222","nativeConsole":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousSelection = mx.mXparser.checkIfSelectBestMatchingLanguage();
  try {
    mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setDefaultEnglishStringResources();
    const resources = mx.StringModel.getStringResources();
    if (resources === null) throw new Error('Expected native text resources');
    try {
      mx.mXparser.consolePrintln('Printing the list of variables that can be translated:');
      resources.printInitSrc();
    } finally { resources.delete(); }
  } finally {
    if (previousSelection) mx.mXparser.enableSelectBestMatchingLanguage();
    else mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-056 -->
## 56. Validate the string model

### Case 1: Inspect the generated descriptions

StringModel.printDescriptions reports the descriptions that the C++ engine built
from the active resource fields. It prints native C++ symbol notation. This is
a diagnostic view; it does not change token names, syntax or the evaluation rules.

<!-- mx-example {"id":"C2-example-260","chapter":"C2-chapter-056","case":"C2-case-223","nativeConsole":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousSelection = mx.mXparser.checkIfSelectBestMatchingLanguage();
  try {
    mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setDefaultEnglishStringResources();
    mx.StringModel.printDescriptions();
  } finally {
    if (previousSelection) mx.mXparser.enableSelectBestMatchingLanguage();
    else mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}
```

### Case 2: Compare current resources with defaults

The native print method labels a changed value with [VAL] and its default with
[DEF]. If the current value equals the default, only [DEF] is printed. The
partial translation below changes the same ten fields as the previous chapter,
making the translated and fallback values visible in one complete report.

<!-- mx-example {"id":"C2-example-261","chapter":"C2-chapter-056","case":"C2-case-224","nativeConsole":true} -->
```javascript
{
  const previousResources = mx.StringModel.getStringResources();
  const previousSelection = mx.mXparser.checkIfSelectBestMatchingLanguage();
  const custom = new mx.StringResources();
  try {
    mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setDefaultEnglishStringResources();
    custom.USER_LANGUAGE = 'Polish';
    custom.NUMBER_LITERAL = 'Literał liczbowy';
    custom.NUMBER = 'Liczba';
    custom.ALL_HELP_CONTENT = 'Pomoc';
    custom.KEYWORD = 'Słowo kluczowe';
    custom.TYPE = 'Typ';
    custom.SYNTAX = 'Składnia';
    custom.SINCE = 'Od';
    custom.DESCRIPTION = 'Opis';
    custom.HELP_CONTENT_LIMITED_TO_QUERY = 'Zawartość pomocy została ograniczona do kwerendy';
    mx.StringModel.setStringResources(custom);
    const current = mx.StringModel.getStringResources();
    if (current === null) throw new Error('Expected installed native text resources');
    try { current.print(); } finally { current.delete(); }
  } finally {
    if (previousSelection) mx.mXparser.enableSelectBestMatchingLanguage();
    else mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setStringResources(previousResources);
    custom.delete();
    previousResources?.delete();
  }
}
```

<!-- c2-chapter: C2-chapter-057 -->
## 57. Print the license

The package retains the existing mXparser license. This call prints the complete
terms embedded in the current C++ engine. Read those terms when deciding how
to use or redistribute mXparser. Initialisation does not choose or confirm a
use type for you; printing the license also makes no such confirmation.

<!-- mx-example {"id":"C2-example-262","chapter":"C2-chapter-057","case":null,"nativeConsole":true} -->
```javascript
{
  mx.License.consolePrintLicense();
}
```

<!-- c2-chapter: C2-chapter-058 -->
## 58. Confirm the selected type of use

Use the existing License API to record the type of use that you have determined
applies under the license. Initialising the package does not call either
confirmation method. A successful call records a declaration; it does not
purchase a license or establish entitlement to commercial or non-commercial use.
The method is internal to the engine and does not send the signature to a service.

These four cases are alternatives. The native contract allows only one
confirmation attempt in a module, including an unsuccessful attempt with an
invalid signature. A signed confirmation cannot be changed by another call.
Use a signature meeting the native requirements: your name, email or company
name, whose trimmed value contains at least five characters.

The historical signature `John Doe` is fictional demonstration data. Replace it
with your own signature only when intentionally making the applicable
declaration. The examples use separate fresh modules so that each alternative
can be tested independently; applications ordinarily confirm once on their
existing initialised module. Automated tests use the same fictional data in
isolated module instances and original native processes, and make no declaration
about the maintainer's or another user's rights.

### Case 1: Confirm non-commercial use

The displayed boolean is the actual native method return value.

<!-- mx-example {"id":"C2-example-263","chapter":"C2-chapter-058","case":"C2-case-225","nativeLicense":true} -->
```javascript
{
  const example = await initMxParser();
  console.log(example.License.iConfirmNonCommercialUse('John Doe'));
}
```

### Case 2: Verify the non-commercial confirmation

Inspect both the call result and recorded state, and retain the original native
confirmation message. These methods remain synchronous after initialisation.

<!-- mx-example {"id":"C2-example-264","chapter":"C2-chapter-058","case":"C2-case-226","nativeLicense":true} -->
```javascript
{
  const example = await initMxParser();
  const isCallSuccessful = example.License.iConfirmNonCommercialUse('John Doe');
  const isConfirmed = example.License.checkIfUseTypeConfirmed();
  const message = example.License.getUseTypeConfirmationMessage();
  console.log('isCallSuccessful =', isCallSuccessful);
  console.log('isConfirmed =', isConfirmed);
  console.log('message =', message);
}
```

### Case 3: Confirm commercial use

The displayed boolean is the actual native method return value.

<!-- mx-example {"id":"C2-example-265","chapter":"C2-chapter-058","case":"C2-case-227","nativeLicense":true} -->
```javascript
{
  const example = await initMxParser();
  console.log(example.License.iConfirmCommercialUse('John Doe'));
}
```

### Case 4: Verify the commercial confirmation

Inspect both the call result and recorded state, and retain the original native
confirmation message. These methods remain synchronous after initialisation.

<!-- mx-example {"id":"C2-example-266","chapter":"C2-chapter-058","case":"C2-case-228","nativeLicense":true} -->
```javascript
{
  const example = await initMxParser();
  const isCallSuccessful = example.License.iConfirmCommercialUse('John Doe');
  const isConfirmed = example.License.checkIfUseTypeConfirmed();
  const message = example.License.getUseTypeConfirmationMessage();
  console.log('isCallSuccessful =', isCallSuccessful);
  console.log('isConfirmed =', isConfirmed);
  console.log('message =', message);
}
```
