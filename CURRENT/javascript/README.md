# mXparser for JavaScript and TypeScript

`@mathparser.org/mxparser` version **6.2.0**.

JavaScript bindings for the public Java/C# API of MathParser.org mXparser,
running the original C++17 engine in WebAssembly. Only initialization is
asynchronous; calculations are synchronous.

The package is ESM-only. After the maintainer publishes it, install it with:

```sh
npm install @mathparser.org/mxparser
```

Until that separate publication, use the locally prepared
`mathparser.org-mxparser-6.2.0.tgz` archive. `private: true` remains intentional.
For untrusted expressions, read [limits and isolation](docs/LIMITS.md) before
calling the synchronous API. A runnable disposable Worker example is included.

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
`--build-dir` and `--dist-dir` select isolated build/output directories.
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
npm run check:bindings
npm run test:regression
npm run test:tutorial
npm run example
npm pack
```

Build before testing or packing. The tests cover the compiled public API boundary,
managed overloads, native aliases, syntax objects, callbacks, cloning, binary
serialization and positive/negative TypeScript usage. Registration checks,
behavior assertions and serialization corruption prefixes are reported separately.
The regression and tutorial commands use the small, versioned validation fixtures
in this project; no archived project or local evidence directory is required.

The complete [tutorial](TUTORIAL.md) includes all 58 historical chapters and 266
examples. Its [runnable teaching script](examples/tutorial.mjs) is generated from
the same code fences that the strict tutorial tests execute. Regenerate it after
editing the document with `python scripts/tutorial.py --write`.

For the full local validation, run `python scripts/validate.py` after building.
It checks runtime, regression, tutorial, types, npm packing and a separate installed
consumer. Repeat `--node /path/to/node` or `--browser /path/to/chromium` for a matrix;
add `--asan-module /path/to/asan/dist/index.js` to test the instrumented profile.
In a source checkout, see `docs/VALIDATION.md` and `docs/MAINTENANCE.md` for the
validation scope and maintenance procedure. These development records are not
included in the consumer npm package.

For a browser, run `npm run test:browser` and open the printed local address.
The public build is single-threaded and does not require COOP/COEP headers or
SharedArrayBuffer. Set `MXPARSER_ISOLATED=1` to also test an isolated page.
For an automated Chromium smoke test, use
`npm run test:browser:headless -- /path/to/chrome-or-edge`.
Deployments must serve the `.wasm` asset with `application/wasm`.
See [API notes](docs/API.md) for ownership and platform
differences. The runnable example is [examples/basic.mjs](examples/basic.mjs).

## LaTeX export and experimental parsing

`expression.getExpressionAsLaTeX()` returns the native engine's mathematical
LaTeX fragment, without `$` delimiters and without calculating the expression.
For example, `sin(x)^2+cos(x)^2` exports as `\sin^{2}x+\cos^{2}x`.
The full accepted rule dictionary runs in C++, not in JavaScript.

`mx.LaTeXParser.parse(text)` exposes the **experimental arithmetic subset parser**,
with immutable `mx.LaTeXParser.Node` handles, `Kind` and `SymbolStyle`.
It is preparation for future import work, not a complete LaTeX-to-mXparser importer.
See [LaTeX API and ownership](docs/API.md#latex-export-and-experimental-parser).

## Project layout

| Directory | Contents |
| --- | --- |
| `src/` | JavaScript API, public types and runtime metadata |
| `src/bindings/` | C++/Embind adapters and public native registrations |
| `scripts/` | Build, validation, binding checks, tutorial generation and browser server |
| `test/` | Public-product runtime, interoperability, browser and type tests |
| `examples/` | Runnable JavaScript examples |
| `docs/` | User-facing API notes and dependency licenses |
| `build/`, `dist/`, `node_modules/` | Generated files, excluded from Git |

The package remains `private: true`; publication requires the maintainer's
separate decision. The original [dual license](LICENSE.txt) applies, including
its use-confirmation requirements. No use confirmation is made on a consumer's
behalf. Third-party notices are in [docs/THIRD_PARTY_LICENSES.md](docs/THIRD_PARTY_LICENSES.md).
