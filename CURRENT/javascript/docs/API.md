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
- Synchronous calculations block their JavaScript execution thread. Browser
  pthread support requires a secure context and COOP/COEP isolation.

These adaptations do not replace native mathematics, parsing, dependency
invalidation, cloning or serialization with JavaScript implementations.
