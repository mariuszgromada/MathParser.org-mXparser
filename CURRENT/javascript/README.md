# mXparser for JavaScript and TypeScript

`@mathparser.org/mxparser` version **6.2.0**.

JavaScript bindings for the public Java/C# API of MathParser.org mXparser,
running the original C++17 engine in WebAssembly. Only initialization is
asynchronous; calculations are synchronous.

This directory contains the public product only. The complete development port
is preserved separately in `CURRENT/port2javascript`; it is not a build dependency.

```javascript
import {initMxParser} from '@mathparser.org/mxparser';

const {Argument, Expression, mXparser} = await initMxParser();
const x = new Argument('x');
const y = new Argument('y = x^2', x);
let e;

try {
    x.setArgumentValue(1);
    mXparser.consolePrintln('Res 1: ' + y.getArgumentName() + ' = ' + y.getArgumentValue());

    x.setArgumentValue(2);
    mXparser.consolePrintln('Res 2: ' + y.getArgumentName() + ' = ' + y.getArgumentValue());

    x.setArgumentValue(3);
    mXparser.consolePrintln('Res 3: ' + y.getArgumentName() + ' = ' + y.getArgumentValue());

    e = new Expression('x*y', x, y);
    mXparser.consolePrintln('Res 4: ' + e.getExpressionString() + ' = ' + e.calculate());
} finally {
    e?.delete();
    y.delete();
    x.delete();
}
```

Expected results (each line also receives the native mXparser console prefix):

```text
Res 1: y = 1
Res 2: y = 4
Res 3: y = 9
Res 4: x*y = 27
```

## Build

Requirements: the sibling `../cpp` source tree, Python 3.9+, Emscripten 6.0.13,
CMake 3.22+ and Ninja. The first build fetches cereal 1.3.2. This project does not
build Catch2 or run the native C++ regression suite.

With the Emscripten environment activated:

```sh
python scripts/build.py
```

Alternatively, supply the SDK path without changing the shell environment:

```sh
python scripts/build.py --emsdk /path/to/emsdk
```

`--cmake`, `--ninja` and `--jobs` select explicit tool paths and parallelism.
The output is `dist/`: the ESM loader, WASM binary, JavaScript API, TypeScript
declarations and runtime API metadata. `src/api.json` is required runtime data,
not a validation report.

Optional `--asan` builds an instrumented module under `build/asan/dist`.
The runtime tests accept `MXPARSER_MODULE` with its module file URL. Serialization
prefix ranges can be selected with `MXPARSER_SERIALIZATION_PREFIX_START` and
`MXPARSER_SERIALIZATION_PREFIX_END` for bounded diagnostic runs. Ordinary
`npm test` exercises all prefixes.

## Test and package locally

Node 24.19/24.20 and TypeScript 7.0.2 are the validated development versions.

```sh
npm ci
npm test
npm run test:types
npm run example
npm pack
```

Build before testing or packing. The tests cover the compiled public API boundary,
managed overloads, native aliases, syntax objects, callbacks, cloning, binary
serialization and positive/negative TypeScript usage. They generate their data
in memory; historical comparison datasets are not required.

For a browser, run `npm run test:browser` and open the printed local address.
The server supplies the COOP/COEP headers needed by Emscripten shared memory.
For an automated Chromium smoke test, use
`npm run test:browser:headless -- /path/to/chrome-or-edge`.
Deployments must serve the `.wasm` asset with `application/wasm` and provide
cross-origin isolation. See [API notes](docs/API.md) for ownership and platform
differences. The runnable example is [examples/basic.mjs](examples/basic.mjs).

## Layout

| Directory | Contents |
| --- | --- |
| `src/` | JavaScript API, public types and runtime metadata |
| `src/bindings/` | C++/Embind adapters and public native registrations |
| `scripts/` | Build and local browser server |
| `test/` | Public-product runtime, interoperability, browser and type tests |
| `examples/` | Runnable JavaScript examples |
| `docs/` | User-facing API notes and dependency licenses |
| `build/`, `dist/`, `node_modules/` | Generated files, excluded from Git |

The package remains `private: true`; publication requires the maintainer's
separate decision. The original [dual license](LICENSE.txt) applies, including
its use-confirmation requirements. No use confirmation is made on a consumer's
behalf. Third-party notices are in [docs/THIRD_PARTY_LICENSES.md](docs/THIRD_PARTY_LICENSES.md).
