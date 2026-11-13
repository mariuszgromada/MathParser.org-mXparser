# Per-calculation cancellation (6.2.0, unreleased)

JavaScript and TypeScript use the existing C++ cancellation implementation in
WASM. The new public API follows Java/C#: calculation names end in `WithCancel`
and the final argument is `cancelId`. Private calculation cores, expression
operation state and C++ implementation overloads are not public JS APIs.

```js
import {initMxParser} from '@mathparser.org/mxparser';

const mx = await initMxParser();
const id = mx.mXparser.acquireCancellationTokenId();
const expression = new mx.Expression('sum(i,1,100,i)');
try {
    console.log(expression.calculateWithCancel(id)); // 5050
    mx.mXparser.cancelCalculation(id);
    console.log(expression.calculateWithCancel(id)); // NaN: an existing check observes it
    mx.mXparser.resetCalculationCancellation(id);
    console.log(expression.calculateWithCancel(id)); // 5050
} finally {
    expression.delete();
    mx.mXparser.releaseCancellationTokenId(id);
}
```

## Entry points and overloads

| Receiver | Public forms |
| --- | --- |
| Expression | `calculateWithCancel(id)`, `calculateWithCancel(stepsOrNull, id)` |
| Argument | `getArgumentValueWithCancel(id)`, `getArgumentValueWithCancel(stepsOrNull, id)` |
| Function | `calculateWithCancel(id)`, `calculateWithCancel(stepsOrNull, id)`, `calculateWithCancel(numberArray, id)`, `calculateWithCancel(argumentArray, id)` |
| RecursiveArgument | Inherited no-index `(id)` and `(stepsOrNull, id)` getters; indexed `getArgumentValueWithCancel(index, id)` |
| Math collection | The corresponding public Java/C# `…WithCancel(mathematicalArguments, id)` methods on `BooleanAlgebra`, `Calculus`, `MathFunctions`, `NumberTheory`, `ProbabilityDistributions`, `SpecialFunctions` and `Statistics` |

All 142 canonical calculation signatures and six control methods are represented.
The runtime catalog and TypeScript declarations describe their exact overloads.
Math collection namespaces are also available under `mx.mathcollection`.
The established numeric conventions remain: Java `long` values use JS `bigint`,
and `mx.int32(value)` selects an `int` mathematical overload when necessary.
The final ID itself is always a plain JS number. Existing native in/out array
semantics are preserved, including sorting and reduction updates.
Null pointers that the current native implementation dereferences remain rejected
at the established JS boundary; cancellation does not make them safe inputs.

Parameter collections precede the ID as one fixed array, not trailing varargs:
`f.calculateWithCancel([2, 3], id)`. Mixed number/Argument packs are rejected.
The original `f.calculate(123)` still passes the mathematical parameter 123.
For the new Function family, `(null, id)` means a null tracing register, equivalent
to the no-parameter form `(id)`; use `[]` for an empty parameter array.

For RecursiveArgument, `r.getArgumentValueWithCancel(5)` is the inherited getter
using domain 5, **not index 5**. Indexed migration requires both arguments:
`r.getArgumentValueWithCancel(5, id)`. `(0, id)` is index zero, while `(null, id)`
is the tracing/no-index overload. A real steps register also selects tracing.
Fractional indices retain native rounding, provided they round to int32;
fractional IDs such as the sole argument `2.5` throw before native conversion.

## IDs, signals and ownership

IDs must be finite integer numbers in `0..32767`, before any native conversion,
callback, mathematical work or early return. Fractions, NaN, Infinity, strings,
bigints, null and missing IDs throw `TypeError`; integers outside the permitted
range throw `RangeError`. `MAX_CANCELLATION_TOKEN_ID` is readonly and equals 32767.
Reservation/release accept only positive IDs. An ID identifies a calculation
domain or a deliberate group of calculations, not a thread or an object.

| `mx.mXparser` method | Contract |
| --- | --- |
| `acquireCancellationTokenId()` | Reserves a free positive ID and clears its old signal before returning; throws on exhaustion. |
| `reserveCancellationTokenId(id)` | Reserves a chosen positive ID and clears its signal on success; returns false without changing the signal if already reserved. |
| `cancelCalculation(id)` | Sets the sticky domain signal; ID 0 sets the existing global flag. |
| `isCalculationCancelled(id)` | Reads global OR the positive domain signal; ID 0 reads the global flag only. |
| `resetCalculationCancellation(id)` | Clears only that signal; retains the reservation. |
| `releaseCancellationTokenId(id)` | Clears the signal then frees a reserved positive ID; an unreserved ID throws before changing its signal. |

The existing `cancelCurrentCalculation`, `resetCancelCurrentCalculationFlag` and
`isCurrentCalculationCancelled` operate on the original global flag. Global reset
and `setDefaultOptions()` leave individual signals and reservations intact.
Old calculation methods use ID 0; a positive signal does not affect old methods
or a different positive domain. Global cancellation affects all domains.

Calculations never reset signals automatically. Finish **all** workers using
the ID and **all** controllers, timers and callbacks that could still signal it
before resetting or releasing it. Reserve manually selected IDs if they coexist
with the allocator; a failed reservation does not grant ownership. There is no
generation counter or authenticated owner handle: a delayed old controller can
affect a later user of the same numeric ID (ABA). Separate IDs do not make a
mutable expression/dependency graph safe to share between native threads; reuse
the native `cloneForThreadSafe()` where independent graphs are required.

## Synchronous WASM and delivery limits

This package's ordinary WASM profile uses no pthreads, shared WASM memory,
Asyncify or JSPI. `calculateWithCancel` is synchronous, like `calculate`.
While it runs, that JS thread cannot execute a timer, a message handler or an
AbortSignal callback. Scheduling `setTimeout(() => cancelCalculation(id), 0)`
immediately before calculation does **not** interrupt it: the timer runs later.
Posting a cancellation message to the busy calculation Worker also runs its
handler only after the synchronous call returns.

A reentrant synchronous extension callback can signal the native domain during
evaluation; the engine reacts at its next existing cancellation check. Such a
callback must not return a promise. Domain IDs do not automatically propagate
into calculations initiated by arbitrary user callbacks: pass the ID explicitly.

```js
const signal = new mx.Argument('signal', {
    getArgumentValue() {
        mx.mXparser.cancelCalculation(id); // Actual native signal, synchronous reentry
        return 1;
    },
    clone() { return this; }
});
const e = new mx.Expression('sum(i,1,100,signal+i)', signal);
try {
    console.log(e.calculateWithCancel(id)); // NaN after an existing check
} finally {
    e.delete();
    signal.delete();
}
```

Use a still-reserved ID with a cleared signal for that second example, and
release it only after callback controllers have finished. Separate `initMxParser`
instances, including instances in different Workers, have separate native
registries/global flags. Passing the same number to another module does not
share cancellation state. Cross-worker cooperative cancellation would require
a separately implemented and verified shared-memory/controller design.
The disposable Worker deadline example in this package remains available for
untrusted work. Terminating a Worker is a different mechanism from cooperative
token cancellation; no graceful cancellation result or cleanup is implied.

## Results and latency

The engine polls only at its existing native checkpoints. No entry/exit,
parser, allocation or callback polling was added. There is no maximum response
latency or forced interruption. A cached recursive value, free Argument or
already compiled literal may return a normal value while a signal is set.

There is no universal cancellation sentinel. Individual paths retain NaN,
false, integer zero, empty arrays, strings, partial arrays or loop-break results.
For example, cancelled `NumberTheory.gcdWithCancel(12n, 18n, id)` returns `0n`;
direct binary `lcmWithCancel` can throw native `std::invalid_argument` when that
divisor is zero. The existing boundary maps native exceptions to JS `Error`
with the native type name; caught ordinary exceptions leave the module usable.
Expression evaluation retains its native exception-to-NaN boundary.
A cancelled solver can return the interval bound `1`, despite the set signal.
Sampling can retain its array shape with NaN elements. These are existing
cooperative outcomes, not newly normalized success/cancellation statuses.

`isCalculationCancelled(id)` reports a current signal. It does not prove that a
particular call observed cancellation, stopped, or returned NaN for that reason.
Cloning and binary serialization do not persist a calculation's active ID.
Explicit Embind handle cleanup and existing native ownership rules still apply.
