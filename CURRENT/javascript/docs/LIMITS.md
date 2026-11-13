# Limits, failures and untrusted expressions

The synchronous API runs native C++ in the calling JavaScript thread. Successful
regression tests do not establish a resource bound for arbitrary input. The stock
binding deliberately preserves the native expression language and algorithms.

## Untrusted input

Validate input types and apply an application-specific length limit before native
construction. Length alone is insufficient: long, unrecognized identifiers with
implied multiplication can take disproportionately long to tokenize. Inputs such
as repeated `ab` are an observed example. The same complexity issue exists in the
canonical engine. Disable implied multiplication if your application requires
explicit multiplication operators. This can reduce tokenization work. In the
current WASM build, syntax checking with implied multiplication disabled can
raise `std::regex_error` for some long, unrecognized identifiers. A similar
exception can occur when constructing a definition with a long identifier.
The disposable Worker example reports the exception as `MXPARSER_INPUT_REJECTED`
and preserves the engine's error name and message. Keep the input limit and
deadline for either multiplication mode.

For untrusted input, run an instance in a disposable Worker with a deadline.
The runnable `examples/worker-client.mjs` example enforces a configurable UTF-16
code-unit limit (default 4096), an initialization deadline and a calculation
budget (default 1000 ms). It terminates its Worker on success, failure or timeout.
All actual parsing/calculation remains native; only plain results cross threads.
`examples/untrusted-input.mjs` demonstrates the Node client. Deploy the Worker,
client and relative `dist/` assets together for browser use.

A same-thread timer or `cancelCurrentCalculation()` cannot interrupt a synchronous
call while the event loop is blocked. Native cancellation remains useful where
native code/callbacks can set the flag; reset its sticky flag before later work.
Workers do not turn the ordinary `calculate()` method into an asynchronous API.

A Worker is not a complete security sandbox. Node worker `resourceLimits` concern
the JS engine and exclude external buffers; process-wide OOM remains possible.
Use a separately limited process/container when hard memory or service isolation
is required. The example is application policy, not a universal safe-input limit.

## Stack overflow, traps and aborts

Deep syntax nesting can overflow the host JavaScript/WebAssembly call stack.
The configured user-function recursion limit does not bound every grammar stack.
The threshold varies by runtime, Worker stack budget and input; no fixed number
of parentheses is guaranteed safe.

A foreign stack exception may leave native allocations/state unrecoverable.
Restoring a stack pointer does not prove successful C++ destruction. After a
native stack overflow, WebAssembly trap or abort, this binding marks that module
unusable. The original stack/trap error is retained and, where extensible, carries
`code: "MXPARSER_MODULE_UNUSABLE"`. Further native calls fail with
`MxParserModuleUnavailableError` and the same code before entering native code.
A callback that catches a nested fatal failure cannot make the outer call healthy.

Terminate that Worker or discard the entire instance. Create a fresh module and
reconstruct trusted definitions. Do not reuse its objects, clone its handles or
attempt native cleanup after the fatal event. Ordinary validation/syntax errors,
C++ exceptions and handled callback errors remain recoverable. Independent module
instances have independent failure states. This is containment, not recovery of
allocations lost during the first failure. A canonical nesting/complexity fix
requires the Java -> C# -> C++ development sequence and is separate engine work.

The current WASM32 build can grow linear memory up to 2 GiB. OOM/traps can render
an instance permanently unusable. `.delete()` releases healthy native handles;
it does not shrink the WASM buffer. Reusable free space and retained high-water
buffer size are different from live allocations. GC/finalizers have no deadline.

## Ownership and explicit cycles

JavaScript handles share ownership of objects in the WASM engine. Release each
handle with `.delete()` when finished. Ordinary dependencies and recursion
created by the engine follow the usual ownership rules. If your application adds
definitions that retain each other in a cycle, remove those definitions from both
objects before releasing their handles.

One specific case observed in the WASM build is a free argument explicitly added
to its own definitions via `x.addArguments(x)`. An internal reference can survive
`x.removeArguments(x)`. Avoid this pattern in a reusable module. If the pattern
is needed, use a disposable Worker whose termination releases the module.

## Serialization capability

`SerializationUtils` uses the engine's binary format for supported native objects
after explicit opt-in. JavaScript implementations of `ArgumentExtension`,
`FunctionExtension` and `FunctionExtensionVariadic` support evaluation and
cloning through their callback contracts. If a definition uses one of these
JavaScript callbacks, persist the application data needed to recreate the
definition and its callback in JavaScript.

For such definitions, `serializeToBytes` and `serializeToString` return `null`.
Check the operation status and `getLastOperationMessage()` for details. For
supported archives, pass the native target type to deserialization and use
archives from trusted sources.

## Diagnostics and runtime

The native automatic language selection can use `navigator.language` in browsers.
For stable English diagnostics, call `mXparser.disableSelectBestMatchingLanguage()`
and `StringModel.setDefaultEnglishStringResources()` in that instance. UI language
does not alter the expression language or numeric grammar.

The package uses ESM. Use the named `initMxParser` import or dynamic `import()`.
The declared Node range remains >=24.19.0 <25. Other Node majors, Firefox, Safari
and bundler configurations require their own validation; no support expansion
is implied by the tests on Node 24, Chrome and Edge.

For functions, prefer an explicit definition such as `f(x,y)=x+y`. The two-string
constructor `new Function('f', 'x+y')` follows a native overload and can produce a
zero-parameter function; Java would reject an ambiguous overload at compile time.
Advanced public JavaCC productions remain exposed for compatibility; they are
subject to the same native failure/lifetime rules and are not a safer input API.

## Per-calculation domains

The [cancellation API](CANCELLATION.md) preserves cooperative native checkpoints.
An ID does not add shared memory between module/Worker instances. Timers, messages
and AbortSignal handlers on a blocked execution thread cannot interrupt the
synchronous call. A synchronous callback can set a native signal; results and
latency remain those of existing checks, including cached values and solver bounds.
