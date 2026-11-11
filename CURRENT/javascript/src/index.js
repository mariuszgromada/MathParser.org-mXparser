/*
 * @(#)index.js        6.2.0    2026-11-04
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2026 Mariusz Gromada - All rights reserved
 * PUBLISHER: INFIMA - https://payhip.com/infima
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 * PRODUCT: MathParser.org-mXparser SOFTWARE
 * LICENSE: DUAL LICENSE AGREEMENT
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * The AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
 * model designed to meet the needs of both non-commercial use and commercial
 * use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. Examples of NON-COMMERCIAL USE
 * include:
 *
 * 1. Non-commercial open-source software.
 * 2. Non-commercial mobile applications.
 * 3. Non-commercial desktop software.
 * 4. Non-commercial web applications/solutions.
 * 5. Non-commercial use in research, scholarly and educational context.
 *
 * The above list is non-exhaustive and illustrative only.
 *
 * COMMERCIAL USE means any use or activity where a fee is charged or the
 * purpose is the sale of a good or service, or the use or activity is
 * intended to produce a profit. COMMERCIAL USE examples:
 *
 * 1. OEMs (Original Equipment Manufacturers).
 * 2. ISVs (Independent Software Vendors).
 * 3. VARs (Value Added Resellers).
 * 4. Other distributors that combine and distribute commercially licensed
 *    software.
 *
 * The above list is non-exhaustive and illustrative only.
 *
 * IN CASE YOU WANT TO USE THE PRODUCT COMMERCIALLY, YOU MUST PURCHASE THE
 * APPROPRIATE LICENSE FROM "INFIMA" ONLINE STORE, STORE ADDRESS:
 *
 * 1. https://mathparser.org/order-commercial-license
 * 2. https://payhip.com/infima
 *
 * NON-COMMERCIAL LICENSE
 *
 * Redistribution and use of the PRODUCT in source and/or binary forms,
 * with or without modification, are permitted provided that the following
 * conditions are met:
 *
 * 1. Redistributions of source code must retain the unmodified content of
 *    the entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
 *    the definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE,
 *    the NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
 *    and/or other materials provided with the distribution, including the
 *    definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE, the
 *    NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 3. Any form of redistribution requires confirmation and signature of
 *    the NON-COMMERCIAL USE by successfully calling the method:
 *       License.iConfirmNonCommercialUse(...)
 *    The method call is used only internally for logging purposes, and
 *    there is no connection with other external services, and no data is
 *    sent or collected. The lack of a method call (or its successful call)
 *    does not affect the operation of the PRODUCT in any way. Please see
 *    the API documentation.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, the AUTHOR & PUBLISHER allow
 *     you to download, install, and use up to three copies of the PRODUCT to
 *     perform integration tests, confirm the quality of the PRODUCT, and
 *     its suitability. The testing period should be limited to fourteen
 *     days. Tests should be performed under the test environments conditions
 *     and not for profit generation.
 *  2. Provided that you purchased a license from "INFIMA" online store
 *     (store address: https://mathparser.org/order-commercial-license or
 *     https://payhip.com/infima), and you comply with all terms and
 *     conditions below, and you have acknowledged and understood the
 *     following DISCLAIMER, the AUTHOR & PUBLISHER grant you a nonexclusive
 *     license with the following rights:
 *  3. The license is granted only to you, the person or entity that made
 *     the purchase, identified and confirmed by the data provided during
 *     the purchase.
 *  4. If you purchased a license in the "ONE-TIME PURCHASE" model, the
 *     license is granted only for the PRODUCT version specified in the
 *     purchase. The upgrade policy gives you additional rights, described
 *     in the dedicated section below.
 *  5. If you purchased a license in the "SUBSCRIPTION" model, you may
 *     install and use any version of the PRODUCT during the subscription
 *     validity period.
 *  6. If you purchased a "SINGLE LICENSE" you may install and use the
 *     PRODUCT on/from one workstation that is located/accessible at/from
 *     any of your premises.
 *  7. Additional copies of the PRODUCT may be installed and used on/from
 *     more than one workstation, limited to the number of workstations
 *     purchased per order.
 *  8. If you purchased a "SITE LICENSE", the PRODUCT may be installed
 *     and used on/from all workstations located/accessible at/from any
 *     of your premises.
 *  9. You may incorporate the unmodified PRODUCT into your own products
 *     and software.
 * 10. If you purchased a license with the "SOURCE CODE" option, you may
 *     modify the PRODUCT's source code and incorporate the modified source
 *     code into your own products and/or software.
 * 11. Provided that the license validity period has not expired, you may
 *     distribute your product and/or software with the incorporated
 *     PRODUCT royalty-free.
 * 12. You may make copies of the PRODUCT for backup and archival purposes.
 * 13. Any form of redistribution requires confirmation and signature of
 *     the COMMERCIAL USE by successfully calling the method:
 *        License.iConfirmCommercialUse(...)
 *     The method call is used only internally for logging purposes, and
 *     there is no connection with other external services, and no data is
 *     sent or collected. The lack of a method call (or its successful call)
 *     does not affect the operation of the PRODUCT in any way. Please see
 *     the API documentation.
 * 14. The AUTHOR & PUBLISHER reserve all rights not expressly granted to
 *     you in this agreement.
 *
 * ADDITIONAL CLARIFICATION ON WORKSTATION
 *
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned
 * tasks. For example, the number of workstations may refer to the number
 * of software developers, engineers, architects, scientists, and other
 * professionals who use the PRODUCT on your behalf. The number of
 * workstations is not the number of copies of your end-product that you
 * distribute to your end-users.
 *
 * By purchasing the COMMERCIAL LICENSE, you only pay for the number of
 * workstations, while the number of copies/users of your final product
 * (delivered to your end-users) is not limited.
 *
 * Below are some examples to help you select the right license size:
 *
 * Example 1: Single Workstation License
 * Only one developer works on the development of your application. You do
 * not use separate environments for testing, meaning you design, create,
 * test, and compile your final application on one environment. In this
 * case, you need a license for a single workstation.
 *
 * Example 2: Up to 5 Workstations License
 * Two developers are working on the development of your application.
 * Additionally, one tester conducts tests in a separate environment.
 * You use three workstations in total, so you need a license for up to
 * five workstations.
 *
 * Example 3: Up to 20 Workstations License
 * Ten developers are working on the development of your application.
 * Additionally, five testers conduct tests in separate environments.
 * You use fifteen workstations in total, so you need a license for
 * up to twenty workstations.
 *
 * Example 4: Site License
 * Several dozen developers and testers work on the development of your
 * application using multiple environments. You have a large,
 * multi-disciplinary team involved in creating your solution. As your team
 * is growing and you want to avoid licensing limitations, the best choice
 * would be a site license.
 *
 * UPGRADE POLICY
 *
 * The PRODUCT is versioned according to the following convention:
 *
 *    [MAJOR].[MINOR].[PATCH]
 *
 * 1. COMMERCIAL LICENSE holders can install and use the updated version
 *    for bug fixes free of charge, i.e. if you have purchased a license
 *    for the [MAJOR].[MINOR] version (e.g., 5.0), you can freely install
 *    all releases specified in the [PATCH] version (e.g., 5.0.2).
 *    The license terms remain unchanged after the update.
 * 2. COMMERCIAL LICENSE holders for the [MAJOR].[MINOR] version (e.g., 5.0)
 *    can install and use the updated version [MAJOR].[MINOR + 1] free of
 *    charge, i.e., plus one release in the [MINOR] range (e.g., 5.1). The
 *    license terms remain unchanged after the update.
 * 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
 *    not eligible for the free upgrade, can claim a discount when
 *    purchasing the upgrade. For this purpose, please contact us via e-mail.
 *
 * DISCLAIMER
 *
 * THIS PRODUCT IS PROVIDED BY THE AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL AUTHOR OR PUBLISHER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS PRODUCT, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VIEWS AND CONCLUSIONS CONTAINED IN THE PRODUCT AND DOCUMENTATION ARE
 * THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING
 * OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF THE AUTHOR OR PUBLISHER.
 *
 * CONTACT
 *
 * - e-mail: info@mathparser.org
 * - website: https://mathparser.org
 * - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
 * - online store: https://mathparser.org/order-commercial-license
 * - online store: https://payhip.com/infima
 */

// D1/D2 interoperability. No identity cache, dependency graph or reference counts.
import catalog from './api.json' with {type: 'json'};
import initialize from './mxparser-native.mjs';

const nullNativeListToken = Symbol('typed native null list');

class NullNativeListValue {
    constructor(token, kind) {
        if (token !== nullNativeListToken) throw new TypeError('Use nullList(kind)');
        this.kind = kind;
        Object.freeze(this);
    }
}

const nullExtensionKind = Symbol('typed null extension');
const nativeHandleBrand = Symbol('mXparser native handle');
const longDoubleToken = Symbol('native long-double value');
const int32Token = Symbol('int32 overload selection');
const cstringToken = Symbol('native C-string value');

class CStringValue {
    #value;

    constructor(token, kind, value) {
        if (token !== cstringToken) throw new TypeError('Use cstr or wcstr');
        this.#value = value instanceof Uint8Array ? new Uint8Array(value) : value;
        Object.defineProperty(this, 'kind', {value: kind, enumerable: true});
        Object.freeze(this);
    }

    get value() {
        return this.#value instanceof Uint8Array ? new Uint8Array(this.#value) : this.#value;
    }
}

class Int32Value {
    #value;

    constructor(token, value) {
        if (token !== int32Token) throw new TypeError('Use int32(number) to select a native int overload');
        this.#value = value;
        Object.freeze(this);
    }

    get value() {
        return this.#value;
    }
}

class LongDoubleValue {
    #bits;

    constructor(token, bits) {
        if (token !== longDoubleToken || typeof bits !== 'bigint' || bits < 0n || bits >= (1n << 128n))
            throw new TypeError('LongDouble.fromBits requires an unsigned 128-bit bigint payload');
        this.#bits = bits;
        Object.freeze(this);
    }

    get bits() {
        return this.#bits;
    }

    [Symbol.toPrimitive]() {
        throw new TypeError('Use native Double.toString() or Double.toDouble() for LongDouble conversion');
    }
}

function longDoubleBytes(value) {
    const bits = value.bits, bytes = new Uint8Array(16), view = new DataView(bytes.buffer);
    view.setBigUint64(0, bits & ((1n << 64n) - 1n), true);
    view.setBigUint64(8, bits >> 64n, true);
    return bytes;
}

function longDoubleValue(bytes) {
    const view = new DataView(bytes.buffer, bytes.byteOffset, 16);
    return new LongDoubleValue(longDoubleToken, view.getBigUint64(0, true) | (view.getBigUint64(8, true) << 64n));
}

const extensionInterfaceMethods = {
    ArgumentExtension: ['getArgumentValue', 'clone'],
    FunctionExtension: ['getParametersNumber', 'setParameterValue', 'getParameterName', 'calculate', 'clone'],
    FunctionExtensionVariadic: ['calculate', 'clone']
};

// D1 standard JS value containers retain the original native Array element type.
function typedNativeArray(value, type) {
    if (type.native_container !== 'Array') return false;
    const element = type.element;
    return (element.kind === 'number' && value instanceof Float64Array)
        || (element.kind === 'int' && element.native === 'int' && value instanceof Int32Array)
        || (element.kind === 'bigint' && element.native === 'Long' && value instanceof BigInt64Array);
}

export async function initMxParser(options = {}) {
    if (options === null || typeof options !== 'object' || Array.isArray(options)) throw new TypeError('Initialization options must be an object');
    // Emscripten mutates its Module object with exports. A fresh configuration
    // prevents it from modifying/reusing caller state across module instances.
    const configuration = {...options};
    for (const key of ['locateFile', 'wasmBinary', 'print', 'printErr'])
        if (!Object.hasOwn(configuration, key) && key in options) configuration[key] = options[key];
    let nativeFailure;
    const onAbort = configuration.onAbort;
    configuration.onAbort = function (reason) {
        nativeFailure ??= new Error(String(reason));
        onAbort?.call(this, reason);
    };
    const native = await initialize(configuration);
    const handle = Symbol('native Embind handle'), constructing = Symbol('internal constructor'),
        elementDescriptor = Symbol('native list element type'), vectorKind = Symbol('native vector kind');
    const classes = {}, mx = {},
        owners = {...(catalog.objects.ErrorMessage ? {syntaxchecker: Object.create(null)} : {}), '': mx};
    // Immutable value construction, not a native object/handle/ownership system.
    mx.LongDouble = Object.freeze({
        fromBits(bits) {
            return new LongDoubleValue(longDoubleToken, bits);
        }
    });
    mx.nullList = function (...args) {
        if (args.length !== 1 || typeof args[0] !== 'string' || !Object.hasOwn(catalog.lists, args[0])) throw new TypeError('nullList requires one supported native list kind');
        return new NullNativeListValue(nullNativeListToken, args[0]);
    };
    // Primitive type intent only: no native object, allocation, registry or math.
    Object.defineProperty(mx, 'int32', {
        enumerable: true, value: function (...args) {
            if (args.length !== 1 || typeof args[0] !== 'number') throw new TypeError('int32 requires exactly one number');
            const value = args[0];
            if (!Number.isInteger(value) || value < -2147483648 || value > 2147483647)
                throw new RangeError('int32 requires a signed 32-bit integer');
            return new Int32Value(int32Token, value === 0 ? 0 : value);
        }
    });

    // Explicit C++ text-pointer intent. These are immutable value selectors,
    // without native handles or a separate ownership/identity system.
    for (const [name, kind] of [['cstr', 'char'], ['wcstr', 'Char']]) Object.defineProperty(mx, name, {
        enumerable: true, value: function (...args) {
            if (args.length !== 1 || (args[0] !== null && typeof args[0] !== 'string' && !(kind === 'char' && args[0] instanceof Uint8Array)))
                throw new TypeError(`${name} requires exactly one ${kind === 'char' ? 'string, Uint8Array or null' : 'string or null'}`);
            return new CStringValue(cstringToken, kind, args[0]);
        }
    });

    // Narrow transport to the SDK's existing module-local virtual filesystem.
    // Native fstreams and these methods use the same filesystem; no host mount.
    function filePath(value) {
        if (typeof value !== 'string' || value.includes('\0')) throw new TypeError('A filesystem path must be a string without NUL');
        return value;
    }

    function fileSystemCall(method, args) {
        try {
            return call(() => native.FS[method](...args));
        } catch (error) {
            if (error?.name === 'ErrnoError' && Number.isInteger(error.errno)) {
                const converted = new Error(error.message ?? `Virtual filesystem ${method} failed (errno ${error.errno})`, {cause: error});
                converted.name = 'ErrnoError';
                Object.defineProperty(converted, 'errno', {value: error.errno});
                throw converted;
            }
            throw error;
        }
    }

    mx.FS = Object.freeze({
        readFile(path) {
            return fileSystemCall('readFile', [filePath(path), {encoding: 'binary'}]);
        },
        writeFile(path, bytes) {
            const name = filePath(path);
            if (!(bytes instanceof Uint8Array)) throw new TypeError('File data must be Uint8Array');
            fileSystemCall('writeFile', [name, bytes]);
        },
        unlink(path) {
            fileSystemCall('unlink', [filePath(path)]);
        },
        mkdir(path) {
            fileSystemCall('mkdir', [filePath(path)]);
        },
        rmdir(path) {
            fileSystemCall('rmdir', [filePath(path)]);
        }
    });
    // Immutable type metadata, never a cache of native objects or JS handles.
    const nativeObjectTypes = [...new Set(['RecursiveArgument', 'Argument', 'Function', 'Constant', 'Expression', 'Random', ...Object.keys(catalog.parents), ...Object.keys(catalog.objects)])].map(name => [name, native['Native' + name]]);
    // Immutable SDK type metadata. Alias identity stays a native address comparison;
    // this avoids SDK6.0.13 isAliasOf assigning the readonly $$ of cloned handles.
    const derivedTypes = new Set(['Argument', 'Expression', 'Constant', 'Function', 'RecursiveArgument', ...Object.keys(catalog.parents)]);
    const aliasFamilies = [...Object.keys(catalog.objects).filter(name => !derivedTypes.has(name)).map(name => native['Native' + name]),
        ...Object.values(catalog.lists).map(item => native[item.native]),
        ...Object.values(catalog.vectors ?? {}).map(item => native[item.native]),
        ...Object.values(catalog.arrays ?? {}).flatMap(item => [native[item.native], native[item.data_native], native[item.pointer_native]]),
        ...Object.values(catalog.element_at_the_end ?? {}).map(item => native[item.native]),
        ...Object.values(catalog.ptrs_maps ?? {}).map(item => native[item.native]),
        ...Object.values(catalog.ptrs_sets ?? {}).map(item => native[item.native]),
        ...Object.values(catalog.native_unordered_maps ?? {}).map(item => native[item.native]),
        ...Object.values(catalog.native_unordered_sets ?? {}).map(item => native[item.native]),
        ...(catalog.lexer_rounds_array ? [native[catalog.lexer_rounds_array.native]] : []),
        ...(catalog.parse_exception_arrays ? [native.NativeParseIntArray, native.NativeParseSequenceArray, native.NativeParseImageArray] : []),
        ...new Set(catalog.emitted.filter(item => item.result?.kind === 'fixed_array').map(item => native['Native' + item.result.element.name + 'Array']))];

    function call(operation) {
        assertUsable();
        const stack = native.stackSave();
        try {
            const result = operation();
            // A callback can catch a nested native failure. The outer call must
            // still fail closed instead of returning a result from that module.
            assertUsable();
            return result;
        } catch (error) {
            if (error instanceof WebAssembly.RuntimeError ||
                (error instanceof RangeError || error?.name === 'InternalError') &&
                /call stack|stack overflow|too much recursion|out of memory|allocation failed|memory size exceeded/i.test(error.message)) {
                nativeFailure ??= error;
                if (Object.isExtensible(error) && !Object.hasOwn(error, 'code'))
                    Object.defineProperty(error, 'code', {value: 'MXPARSER_MODULE_UNUSABLE'});
            }
            try {
                if (typeof WebAssembly.Exception === 'function' && error instanceof WebAssembly.Exception) {
                    let details;
                    try {
                        details = native.getExceptionMessage(error);
                    } finally {
                        native.decrementExceptionRefcount(error);
                    }
                    const converted = new Error(details[1]);
                    converted.name = details[0];
                    throw converted;
                }
                throw error;
            } finally {
                if (!nativeFailure) native.stackRestore(stack);
            }
        }
    }

    function assertUsable() {
        if (!nativeFailure) return;
        const error = new Error('This mXparser module is unusable after a native stack overflow, WebAssembly trap or abort. Terminate its Worker or discard this module and initialize a new one; do not reuse its handles.', {cause: nativeFailure});
        error.name = 'MxParserModuleUnavailableError';
        Object.defineProperty(error, 'code', {value: 'MXPARSER_MODULE_UNUSABLE'});
        throw error;
    }

    function validateBorrowedLexerHandlerHandle(self) {
        if (catalog.borrowed_parser_tokens?.validate && self instanceof classes.JavaCCToken) call(() => native[catalog.borrowed_parser_tokens.validate](self[handle]));
        if (catalog.borrowed_lexer_handler?.get && self instanceof classes.TokenManagerErrorHandler) call(() => native[catalog.borrowed_lexer_handler.validate](self[handle]));
    }

    class NativeHandle {
        get [handle]() {
            throw new TypeError('Invalid native handle receiver: use a constructor or factory from this mXparser module');
        }

        constructor(token, value) {
            if (token !== constructing) throw new TypeError('Native handles require a concrete factory');
            Object.defineProperty(this, handle, {value});
            Object.defineProperty(this, nativeHandleBrand, {value: true});
        }

        delete() {
            return call(() => this[handle].delete());
        }

        isDeleted() {
            return this[handle].isDeleted();
        }

        cloneHandle() {
            if (this.isDeleted()) throw new TypeError('Cannot copy a deleted native handle');
            validateBorrowedLexerHandlerHandle(this);
            return wrap(call(() => this[handle].clone()), {kind: 'handle', name: 'PrimitiveElement'});
        }

        isAliasOf(other) {
            if (!(other instanceof NativeHandle)) return false;
            if (this.isDeleted() || other.isDeleted()) throw new TypeError('Cannot compare deleted native handles');
            validateBorrowedLexerHandlerHandle(this);
            validateBorrowedLexerHandlerHandle(other);
            const family = aliasFamilies.find(constructor => this[handle] instanceof constructor);
            if (!family || !(other[handle] instanceof family)) return false;
            return call(() => this[handle].nativeAliasOf(other[handle]));
        }
    }

    function selectedNullList(value, type) {
        if (!(value instanceof NullNativeListValue) || !type.nullable || !(type.kind === 'list' || type.kind === 'array' && type.native_container === 'List')) return false;
        const expected = type.element, actual = catalog.lists[value.kind]?.element;
        return actual?.kind === expected.kind && actual.name === expected.name && actual.native === expected.native;
    }

    function unwrap(value, type) {
        if (selectedNullList(value, type)) return null;
        if (value === null && type.nullable) return null;
        switch (type.kind) {
            case 'parse_row':
            case 'parse_table':
            case 'parse_images': {
                const name = {
                    parse_row: 'NativeParseIntArray',
                    parse_table: 'NativeParseSequenceArray',
                    parse_images: 'NativeParseImageArray'
                }[type.kind];
                if (value instanceof NativeFixedArrayHandle && value[handle] instanceof native[name]) {
                    if (value.isDeleted()) throw new TypeError('Cannot use a deleted native ParseException array');
                    return value[handle];
                }
                const element = type.kind === 'parse_table' ? {
                    kind: 'parse_row',
                    nullable: true
                } : type.kind === 'parse_row' ? {kind: 'int', native: 'int'} : {kind: 'string'};
                if (Array.isArray(value) && value.length <= 2147483647) return Array.from(value, item => unwrap(item, element));
                break;
            }
            case 'any':
                return value;
            case 'extension':
                if (value?.[nullExtensionKind] === type.name) return null;
                if (interfaceMatches(value, extensionInterfaceMethods[type.name])) return value;
                break;
            case 'number':
                if (typeof value === 'number') {
                    if (type.finite_max !== undefined && Number.isFinite(value) && (value < -type.finite_max || value > type.finite_max))
                        throw new RangeError('Number exceeds the finite range of the native floating type');
                    return value;
                }
                break;
            case 'long_double':
                if (value instanceof LongDoubleValue) return longDoubleBytes(value);
                break;
            case 'cstring':
                if (value instanceof CStringValue && value.kind === type.native) {
                    const input = value.value;
                    if (input === null || typeof input === 'string' || (type.native === 'char' && input instanceof Uint8Array)) return input;
                }
                break;
            case 'int': {
                const unsigned = type.native === 'size_t' || type.native?.startsWith('unsigned');
                const bits = type.bits ?? (type.native?.includes('short') ? 16 : 32);
                const min = unsigned ? 0 : -(2 ** (bits - 1)), max = unsigned ? 2 ** bits - 1 : 2 ** (bits - 1) - 1;
                if (Number.isInteger(value) && value >= min && value <= max) return value;
                break;
            }
            case 'enum':
                if (Number.isInteger(value) && value >= -2147483648 && value <= 2147483647) return value;
                break;
            case 'bigint': {
                const unsigned = type.native?.startsWith('unsigned');
                if (typeof value === 'bigint' && value >= (unsigned ? 0n : -(1n << 63n)) && value <= (unsigned ? (1n << 64n) - 1n : (1n << 63n) - 1n)) return value;
                break;
            }
            case 'boolean':
                if (typeof value === 'boolean') return value;
                break;
            case 'char':
                if (typeof value === 'string' && Array.from(value).length === 1) return value;
                break;
            case 'string':
                if (typeof value === 'string') {
                    if (type.encoding === 'utf8' && !value.isWellFormed()) throw new TypeError('Native UTF-8 metadata requires well-formed Unicode');
                    return value;
                }
                break;
            case 'bytes':
                if (value instanceof Uint8Array && value.length <= 2147483647) return value;
                break;
            case 'handle':
                if (value instanceof classes[type.name]) {
                    if (value.isDeleted()) throw new TypeError(`Cannot use a deleted ${type.name} handle`);
                    return value[handle];
                }
                break;
            case 'vector':
                if (value instanceof NativeVectorHandle && value[vectorKind] === type.tag) {
                    if (value.isDeleted()) throw new TypeError('Cannot use a deleted native vector');
                    return value[handle];
                }
                break;
            case 'list':
                if (value instanceof NativeListHandle && value[elementDescriptor].kind === type.element.kind && value[elementDescriptor].name === type.element.name) {
                    if (value.isDeleted()) throw new TypeError('Cannot use a deleted native list');
                    return value[handle];
                }
                if (!type.native_only && Array.isArray(value) && value.length <= 2147483647) return Array.from(value, item => unwrap(item, type.element));
                break;
            case 'array':
                if (typedNativeArray(value, type) && value.length <= 2147483647) return Array.from(value, item => unwrap(item, type.element));
                if (type.native_container === 'List' && value instanceof NativeListHandle) return unwrap(value, {
                    kind: 'list',
                    element: type.element
                });
                if (Array.isArray(value) && value.length <= 2147483647) return Array.from(value, item => unwrap(item, type.element));
                break;
        }
        throw new TypeError(`Expected ${type.kind}${type.name ? ' ' + type.name : ''}${type.nullable ? ' or null' : ''}`);
    }

    // Reject obviously different JS primitive/container kinds before attempting
    // full conversion. unwrap still owns all range, lifetime and element checks.
    function couldMatch(value, type) {
        if (value instanceof NullNativeListValue) return selectedNullList(value, type);
        if (type.kind === 'any') return true;
        if (value === null) return Boolean(type.nullable);
        switch (type.kind) {
            case 'number':
            case 'int':
            case 'enum':
                return typeof value === 'number';
            case 'long_double':
                return value instanceof LongDoubleValue;
            case 'cstring':
                return value instanceof CStringValue && value.kind === type.native;
            case 'bigint':
                return typeof value === 'bigint';
            case 'boolean':
                return typeof value === 'boolean';
            case 'string':
            case 'char':
                return typeof value === 'string';
            case 'bytes':
                return value instanceof Uint8Array;
            case 'extension':
                return typeof value === 'object' && value !== null && value[nativeHandleBrand] !== true;
            case 'handle':
                return value instanceof classes[type.name];
            case 'vector':
                return value instanceof NativeVectorHandle && value[vectorKind] === type.tag;
            case 'list':
                return Array.isArray(value) || value instanceof NativeListHandle;
            case 'array':
                return Array.isArray(value) || typedNativeArray(value, type) || (type.native_container === 'List' && value instanceof NativeListHandle);
            default:
                return true;
        }
    }

    function wrap(value, type) {
        if (value === null) return null;
        if (type.kind === 'long_double') return longDoubleValue(value);
        if (type.kind === 'array') {
            const snapshot = value.map(item => wrap(item, type.element));
            return type.readonly ? Object.freeze(snapshot) : snapshot;
        }
        if (type.kind === 'vector') return new NativeVectorHandle(constructing, value, type.element, type.tag);
        if (type.kind === 'list') return new NativeListHandle(constructing, value, type.element);
        if (['parse_row', 'parse_table', 'parse_images'].includes(type.kind)) {
            const element = type.kind === 'parse_table' ? {
                kind: 'parse_row',
                nullable: true
            } : type.kind === 'parse_row' ? {kind: 'int', native: 'int'} : {kind: 'string'};
            return new NativeFixedArrayHandle(constructing, value, element);
        }
        if (type.kind === 'fixed_array') return new NativeFixedArrayHandle(constructing, value, type.element);
        if (type.kind === 'handle') {
            let name = type.name;
            for (const [candidate, constructor] of nativeObjectTypes) {
                if (value instanceof constructor) {
                    name = candidate;
                    break;
                }
            }
            return new classes[name](constructing, value);
        }
        return value;
    }

    // D1 template selection only; storage, identity and mutation remain native.
    const ptrsDescriptor = Symbol('native pointer container element types');
    const requirePtrsLive = self => {
        if (self.isDeleted()) throw new TypeError('Cannot use a deleted native pointer container');
    };

    class NativePtrsMap extends NativeHandle {
        constructor(keyKind, valueKind, descriptor) {
            const internal = keyKind === constructing;
            const tag = typeof keyKind === 'string' && typeof valueKind === 'string' ? keyKind + '|' + valueKind : '';
            const entry = internal ? descriptor : Object.hasOwn(catalog.ptrs_maps ?? {}, tag) ? catalog.ptrs_maps[tag] : undefined;
            if (!entry || (!internal && arguments.length !== 2)) throw new TypeError('PtrsMap requires supported key and value pointer kinds');
            super(constructing, internal ? valueKind : call(() => native[entry.export]()));
            Object.defineProperty(this, ptrsDescriptor, {value: entry});
        }

        cloneHandle() {
            requirePtrsLive(this);
            return new NativePtrsMap(constructing, call(() => this[handle].clone()), this[ptrsDescriptor]);
        }

        put(...args) {
            requirePtrsLive(this);
            if (args.length !== 2) throw new TypeError('PtrsMap.put requires a key and value');
            const e = this[ptrsDescriptor], key = unwrap(args[0], e.key), value = unwrap(args[1], e.value);
            return call(() => this[handle].put(key, value));
        }

        get(...args) {
            requirePtrsLive(this);
            if (args.length !== 1) throw new TypeError('PtrsMap.get requires one key');
            const e = this[ptrsDescriptor], key = unwrap(args[0], e.key);
            return wrap(call(() => this[handle].get(key)), e.value);
        }

        clear(...args) {
            requirePtrsLive(this);
            if (args.length) throw new TypeError('PtrsMap.clear takes no arguments');
            return call(() => this[handle].clear());
        }
    }

    class NativePtrsSet extends NativeHandle {
        constructor(kind, value, descriptor) {
            const internal = kind === constructing,
                entry = internal ? descriptor : typeof kind === 'string' && Object.hasOwn(catalog.ptrs_sets ?? {}, kind) ? catalog.ptrs_sets[kind] : undefined;
            if (!entry || (!internal && arguments.length !== 1)) throw new TypeError('PtrsSet requires one supported pointer kind');
            super(constructing, internal ? value : call(() => native[entry.export]()));
            Object.defineProperty(this, ptrsDescriptor, {value: entry});
        }

        cloneHandle() {
            requirePtrsLive(this);
            return new NativePtrsSet(constructing, call(() => this[handle].clone()), this[ptrsDescriptor]);
        }

        add(...args) {
            requirePtrsLive(this);
            if (args.length !== 1) throw new TypeError('PtrsSet.add requires one value');
            const value = unwrap(args[0], this[ptrsDescriptor].element);
            return call(() => this[handle].add(value));
        }

        contains(...args) {
            requirePtrsLive(this);
            if (args.length !== 1) throw new TypeError('PtrsSet.contains requires one value');
            const value = unwrap(args[0], this[ptrsDescriptor].element);
            return call(() => this[handle].contains(value));
        }

        containsByPtrDeref(...args) {
            requirePtrsLive(this);
            if (args.length !== 1) throw new TypeError('PtrsSet.containsByPtrDeref requires one value');
            const value = unwrap(args[0], this[ptrsDescriptor].element);
            return call(() => this[handle].containsByPtrDeref(value));
        }

        remove(...args) {
            requirePtrsLive(this);
            if (args.length !== 1) throw new TypeError('PtrsSet.remove requires one value');
            const value = unwrap(args[0], this[ptrsDescriptor].element);
            return call(() => this[handle].remove(value));
        }

        clear(...args) {
            requirePtrsLive(this);
            if (args.length) throw new TypeError('PtrsSet.clear takes no arguments');
            return call(() => this[handle].clear());
        }
    }

    mx.new_PtrsMap = function (...args) {
        if (args.length !== 2) throw new TypeError('new_PtrsMap requires key and value pointer kinds');
        return new NativePtrsMap(...args);
    };
    mx.new_PtrsSet = function (...args) {
        if (args.length !== 1) throw new TypeError('new_PtrsSet requires one pointer kind');
        return new NativePtrsSet(...args);
    };

    class NativeUnorderedMap extends NativeHandle {
        constructor(keyKind, valueKind, descriptor) {
            const internal = keyKind === constructing,
                tag = typeof keyKind === 'string' && typeof valueKind === 'string' ? keyKind + '|' + valueKind : '';
            const entry = internal ? descriptor : Object.hasOwn(catalog.native_unordered_maps ?? {}, tag) ? catalog.native_unordered_maps[tag] : undefined;
            if (!entry || (!internal && arguments.length !== 2)) throw new TypeError('new_UnorderedMap requires supported key and value pointer kinds');
            super(constructing, internal ? valueKind : call(() => native[entry.export]()));
            Object.defineProperty(this, ptrsDescriptor, {value: entry});
        }

        cloneHandle() {
            requirePtrsLive(this);
            return new NativeUnorderedMap(constructing, call(() => this[handle].clone()), this[ptrsDescriptor]);
        }

        size(...args) {
            requirePtrsLive(this);
            if (args.length) throw new TypeError('size takes no arguments');
            return call(() => this[handle].size());
        }

        empty(...args) {
            requirePtrsLive(this);
            if (args.length) throw new TypeError('empty takes no arguments');
            return call(() => this[handle].empty());
        }

        insert(...args) {
            requirePtrsLive(this);
            if (args.length !== 2) throw new TypeError('insert requires key and value');
            const e = this[ptrsDescriptor], key = unwrap(args[0], e.key), value = unwrap(args[1], e.value);
            return call(() => this[handle].insert(key, value));
        }

        at(...args) {
            requirePtrsLive(this);
            if (args.length !== 1) throw new TypeError('at requires one key');
            const e = this[ptrsDescriptor], key = unwrap(args[0], e.key);
            return wrap(call(() => this[handle].at(key)), e.value);
        }

        count(...args) {
            requirePtrsLive(this);
            if (args.length !== 1) throw new TypeError('count requires one key');
            const key = unwrap(args[0], this[ptrsDescriptor].key);
            return call(() => this[handle].count(key));
        }

        erase(...args) {
            requirePtrsLive(this);
            if (args.length !== 1) throw new TypeError('erase requires one key');
            const key = unwrap(args[0], this[ptrsDescriptor].key);
            return call(() => this[handle].erase(key));
        }

        clear(...args) {
            requirePtrsLive(this);
            if (args.length) throw new TypeError('clear takes no arguments');
            return call(() => this[handle].clear());
        }
    }

    class NativeUnorderedSet extends NativeHandle {
        constructor(kind, value, descriptor) {
            const internal = kind === constructing,
                entry = internal ? descriptor : typeof kind === 'string' && Object.hasOwn(catalog.native_unordered_sets ?? {}, kind) ? catalog.native_unordered_sets[kind] : undefined;
            if (!entry || (!internal && arguments.length !== 1)) throw new TypeError('new_UnorderedSet requires one supported pointer kind');
            super(constructing, internal ? value : call(() => native[entry.export]()));
            Object.defineProperty(this, ptrsDescriptor, {value: entry});
        }

        cloneHandle() {
            requirePtrsLive(this);
            return new NativeUnorderedSet(constructing, call(() => this[handle].clone()), this[ptrsDescriptor]);
        }

        size(...args) {
            requirePtrsLive(this);
            if (args.length) throw new TypeError('size takes no arguments');
            return call(() => this[handle].size());
        }

        empty(...args) {
            requirePtrsLive(this);
            if (args.length) throw new TypeError('empty takes no arguments');
            return call(() => this[handle].empty());
        }

        insert(...args) {
            requirePtrsLive(this);
            if (args.length !== 1) throw new TypeError('insert requires one value');
            const value = unwrap(args[0], this[ptrsDescriptor].element);
            return call(() => this[handle].insert(value));
        }

        count(...args) {
            requirePtrsLive(this);
            if (args.length !== 1) throw new TypeError('count requires one value');
            const value = unwrap(args[0], this[ptrsDescriptor].element);
            return call(() => this[handle].count(value));
        }

        erase(...args) {
            requirePtrsLive(this);
            if (args.length !== 1) throw new TypeError('erase requires one value');
            const value = unwrap(args[0], this[ptrsDescriptor].element);
            return call(() => this[handle].erase(value));
        }

        clear(...args) {
            requirePtrsLive(this);
            if (args.length) throw new TypeError('clear takes no arguments');
            return call(() => this[handle].clear());
        }
    }

    mx.new_UnorderedMap = function (...args) {
        if (args.length !== 2) throw new TypeError('new_UnorderedMap requires key and value pointer kinds');
        return new NativeUnorderedMap(...args);
    };
    mx.new_UnorderedSet = function (...args) {
        if (args.length !== 1) throw new TypeError('new_UnorderedSet requires one pointer kind');
        return new NativeUnorderedSet(...args);
    };
    if (catalog.ptr_casts) mx.PtrCast = function (...args) {
        if (args.length !== 2 || typeof args[0] !== 'string' || !Object.hasOwn(catalog.ptr_casts, args[0])) throw new TypeError('PtrCast requires a supported target pointer kind and native source');
        const entry = catalog.ptr_casts[args[0]],
            source = unwrap(args[1], {kind: 'handle', name: 'PrimitiveElement', nullable: true});
        return wrap(call(() => native[entry.export](source)), entry.result);
    };

    class NativeFixedArrayHandle extends NativeHandle {
        constructor(token, value, element) {
            super(token, value);
            Object.defineProperty(this, elementDescriptor, {value: element});
            Object.preventExtensions(this);
        }

        cloneHandle() {
            if (this.isDeleted()) throw new TypeError('Cannot copy a deleted native array view');
            return new NativeFixedArrayHandle(constructing, call(() => this[handle].clone()), this[elementDescriptor]);
        }

        get length() {
            return call(() => this[handle].size());
        }

        get(index) {
            const position = unwrap(index, {kind: 'int'});
            return wrap(call(() => this[handle].get(position)), this[elementDescriptor]);
        }

        set(index, element) {
            const position = unwrap(index, {kind: 'int'}), value = unwrap(element, this[elementDescriptor]);
            return call(() => this[handle].set(position, value));
        }

        * [Symbol.iterator]() {
            for (let index = 0; index < this.length; index++) yield this.get(index);
        }
    }

    class NativeVectorHandle extends NativeHandle {
        constructor(...args) {
            if (args[0] !== constructing) return makeNativeVector(args);
            super(constructing, args[1]);
            Object.defineProperty(this, elementDescriptor, {value: args[2]});
            Object.defineProperty(this, vectorKind, {value: args[3]});
            Object.preventExtensions(this);
        }

        #live() {
            if (this.isDeleted()) throw new TypeError('Cannot use a deleted native vector');
        }

        #args(args, count) {
            this.#live();
            if (args.length !== count) throw new TypeError(`Vector method requires ${count} parameters`);
        }

        cloneHandle() {
            this.#live();
            return new NativeVectorHandle(constructing, call(() => this[handle].clone()), this[elementDescriptor], this[vectorKind]);
        }

        get kind() {
            return this[vectorKind];
        }

        get length() {
            return this.size();
        }

        size(...args) {
            this.#args(args, 0);
            return call(() => this[handle].size());
        }

        empty(...args) {
            this.#args(args, 0);
            return call(() => this[handle].empty());
        }

        at(...args) {
            this.#args(args, 1);
            const i = unwrap(args[0], {kind: 'int'});
            return wrap(call(() => this[handle].at(i)), this[elementDescriptor]);
        }

        get(...args) {
            return this.at(...args);
        }

        set(...args) {
            this.#args(args, 2);
            const i = unwrap(args[0], {kind: 'int'}), value = unwrap(args[1], this[elementDescriptor]);
            return call(() => this[handle].setAt(i, value));
        }

        push_back(...args) {
            this.#args(args, 1);
            const value = unwrap(args[0], this[elementDescriptor]);
            return call(() => this[handle].push_back(value));
        }

        push(...args) {
            return this.push_back(...args);
        }

        pop_back(...args) {
            this.#args(args, 0);
            return call(() => this[handle].pop_back());
        }

        pop(...args) {
            return this.pop_back(...args);
        }

        front(...args) {
            this.#args(args, 0);
            return wrap(call(() => this[handle].front()), this[elementDescriptor]);
        }

        back(...args) {
            this.#args(args, 0);
            return wrap(call(() => this[handle].back()), this[elementDescriptor]);
        }

        resize(...args) {
            this.#args(args, 1);
            const n = unwrap(args[0], {kind: 'int'});
            return call(() => this[handle].resize(n));
        }

        clear(...args) {
            this.#args(args, 0);
            return call(() => this[handle].clear());
        }

        toBytes(...args) {
            this.#args(args, 0);
            if (this[vectorKind] !== 'char') throw new TypeError('Only a native char vector has byte transport');
            return call(() => this[handle].toBytes());
        }

        * [Symbol.iterator]() {
            for (let i = 0; i < this.size(); i++) yield this.at(i);
        }

        static fromBytes(...args) {
            if (args.length !== 1 || !(args[0] instanceof Uint8Array) || args[0].length > 2147483647) throw new TypeError('Vector.fromBytes requires a Uint8Array');
            return new NativeVectorHandle(constructing, call(() => native.factory_Vector_bytes(args[0])), catalog.vectors.char.element, 'char');
        }
    }

    function makeNativeVector(args) {
        if (args.length < 1 || args.length > 2 || typeof args[0] !== 'string' || !Object.hasOwn(catalog.vectors ?? {}, args[0])) throw new TypeError('Vector requires a supported native element kind and optional int size');
        const tag = args[0], descriptor = catalog.vectors[tag],
            values = args.length === 2 ? [unwrap(args[1], {kind: 'int'})] : [];
        return new NativeVectorHandle(constructing, call(() => native[descriptor.export](values)), descriptor.element, tag);
    }

    if (catalog.vectors) {
        mx.Vector = NativeVectorHandle;
        mx.new_Vector = (...args) => makeNativeVector(args);
    }

    class NativeListHandle extends NativeHandle {
        constructor(token, value, element) {
            super(token, value);
            Object.defineProperty(this, elementDescriptor, {value: element});
        }

        cloneHandle() {
            if (this.isDeleted()) throw new TypeError('Cannot copy a deleted native list handle');
            return new NativeListHandle(constructing, call(() => this[handle].clone()), this[elementDescriptor]);
        }

        get length() {
            return this.size();
        }

        size() {
            return call(() => this[handle].size());
        }

        isEmpty() {
            return call(() => this[handle].isEmpty());
        }

        #index(value, allowEnd = false) {
            if (!Number.isInteger(value) || value < 0 || value >= this.size() + (allowEnd ? 1 : 0)) throw new RangeError('Native list index out of range');
            return value;
        }

        get(index) {
            return wrap(call(() => this[handle].get(this.#index(index))), this[elementDescriptor]);
        }

        getRef(index) {
            return wrap(call(() => this[handle].getRef(this.#index(index))), this[elementDescriptor]);
        }

        top() {
            this.#index(this.size() - 1);
            return wrap(call(() => this[handle].top()), this[elementDescriptor]);
        }

        topRef() {
            this.#index(this.size() - 1);
            return wrap(call(() => this[handle].topRef()), this[elementDescriptor]);
        }

        pop() {
            this.#index(this.size() - 1);
            return call(() => this[handle].pop());
        }

        add(...args) {
            if (args.length === 1) {
                const element = unwrap(args[0], this[elementDescriptor]);
                return call(() => this[handle].addValue(element));
            }
            if (args.length === 2) {
                const index = this.#index(args[0], true), element = unwrap(args[1], this[elementDescriptor]);
                return call(() => this[handle].addAt(index, element));
            }
            throw new TypeError('List.add expects an element or an index and element');
        }

        push(element) {
            const value = unwrap(element, this[elementDescriptor]);
            return call(() => this[handle].push(value));
        }

        getAt(...args) {
            if (args.length !== 1) throw new TypeError('List.getAt requires one index');
            const index = this.#index(args[0]);
            return wrap(call(() => this[handle].getAt(index)), this[elementDescriptor]);
        }

        setAt(...args) {
            if (args.length !== 2) throw new TypeError('List.setAt requires an index and value');
            const index = this.#index(args[0]), value = unwrap(args[1], this[elementDescriptor]);
            return call(() => this[handle].setAt(index, value));
        }

        containsByPtrDeref(...args) {
            if (args.length !== 1) throw new TypeError('List.containsByPtrDeref requires one value');
            if (this.isDeleted() || typeof this[handle].containsByPtrDeref !== 'function') throw new TypeError('Native pointer-dereference comparison is unavailable for this list');
            const value = unwrap(args[0], this[elementDescriptor]);
            return call(() => this[handle].containsByPtrDeref(value));
        }

        removeByPtrDeref(...args) {
            if (args.length !== 1) throw new TypeError('List.removeByPtrDeref requires one value');
            if (this.isDeleted() || typeof this[handle].removeByPtrDeref !== 'function') throw new TypeError('Native pointer-dereference comparison is unavailable for this list');
            const value = unwrap(args[0], this[elementDescriptor]);
            return call(() => this[handle].removeByPtrDeref(value));
        }

        set(index, element) {
            const position = this.#index(index), value = unwrap(element, this[elementDescriptor]);
            return call(() => this[handle].set(position, value));
        }

        contains(element) {
            const value = unwrap(element, this[elementDescriptor]);
            return call(() => this[handle].contains(value));
        }

        remove(elementOrIndex) {
            if (typeof elementOrIndex === 'number') {
                const index = this.#index(elementOrIndex);
                return call(() => this[handle].removeIndex(index));
            }
            const value = unwrap(elementOrIndex, this[elementDescriptor]);
            return call(() => this[handle].removeValue(value));
        }

        removeValue(element) {
            const value = unwrap(element, this[elementDescriptor]);
            return call(() => this[handle].removeValue(value));
        }

        addAll(elements) {
            const value = unwrap(elements, {kind: 'list', element: this[elementDescriptor]});
            if (value === null) throw new TypeError('List.addAll requires a collection');
            return call(() => this[handle].addAll(value));
        }

        clearSubList(start, end) {
            this.#index(start, true);
            this.#index(end, true);
            if (start > end) throw new RangeError('Invalid native list range');
            return call(() => this[handle].clearSubList(start, end));
        }

        clear() {
            return call(() => this[handle].clear());
        }

        * [Symbol.iterator]() {
            for (let index = 0; index < this.size(); index++) yield this.get(index);
        }
    }

    mx.new_List = function (type, ...args) {
        const descriptor = Object.hasOwn(catalog.lists, type) ? catalog.lists[type] : null;
        if (!descriptor || args.length > 1) throw new TypeError('new_List requires a supported element type and optional capacity');
        if (args.length) {
            unwrap(args[0], {kind: 'int'});
            if (args[0] < 0) throw new RangeError('Native list capacity must be nonnegative');
        }
        return new NativeListHandle(constructing, call(() => native[descriptor.export](args)), descriptor.element);
    };
    mx.new_Stack = function (kind) {
        if (arguments.length !== 1 || typeof kind !== 'string' || !Object.hasOwn(catalog.lists, kind)) throw new TypeError('new_Stack requires one supported element kind');
        const descriptor = catalog.lists[kind];
        return new NativeListHandle(constructing, call(() => native[descriptor.stack_export]()), descriptor.element);
    };
    mx.new_ListInt = function () {
        if (arguments.length) throw new TypeError('new_ListInt takes no arguments');
        return new NativeListHandle(constructing, call(() => native.factory_ListInt()), catalog.lists.int.element);
    };
    // Original Array<T>/shared_ptr<T[]> values; no JS data or identity cache.
    const nativeArrayKind = Symbol('native Array element kind');

    function arrayDescriptor(kind) {
        if (typeof kind !== 'string' || !Object.hasOwn(catalog.arrays, kind)) throw new TypeError('Select a supported native Array element kind');
        return catalog.arrays[kind];
    }

    const arrayIndex = value => unwrap(value, {kind: 'int', native: 'size_t'});

    class NativeArrayPointer extends NativeHandle {
        constructor(token, value, kind) {
            if (token !== constructing) throw new TypeError('Native array pointers come from begin/end');
            super(constructing, value);
            Object.defineProperty(this, nativeArrayKind, {value: kind});
        }

        cloneHandle() {
            if (this.isDeleted()) throw new TypeError('Cannot copy a deleted native array pointer handle');
            return new NativeArrayPointer(constructing, call(() => this[handle].clone()), this[nativeArrayKind]);
        }

        get isConst() {
            return call(() => this[handle].isConst());
        }

        get(...args) {
            if (args.length) throw new TypeError('A native array pointer get takes no arguments');
            return wrap(call(() => this[handle].get()), arrayDescriptor(this[nativeArrayKind]).element);
        }

        set(...args) {
            if (args.length !== 1) throw new TypeError('A native array pointer set requires one value');
            if (this.isConst) throw new TypeError('Cannot write through a const native array pointer');
            const value = unwrap(args[0], arrayDescriptor(this[nativeArrayKind]).element);
            return call(() => this[handle].set(value));
        }

        advance(...args) {
            if (args.length !== 1) throw new TypeError('A native array pointer advance requires one signed offset');
            const value = unwrap(args[0], {kind: 'int', native: 'int'});
            return call(() => this[handle].advance(value));
        }

        equals(other) {
            if (arguments.length !== 1 || !(other instanceof NativeArrayPointer) || other[nativeArrayKind] !== this[nativeArrayKind] || other.isDeleted()) throw new TypeError('Compare live native pointers of the same element kind');
            return call(() => this[handle].equals(other[handle]));
        }

        copy() {
            if (arguments.length) throw new TypeError('A native pointer copy takes no arguments');
            return new NativeArrayPointer(constructing, call(() => this[handle].copy()), this[nativeArrayKind]);
        }
    }

    class NativeArrayData extends NativeHandle {
        constructor(token, value, kind) {
            if (token !== constructing) throw new TypeError('Native array data comes from an Array data field');
            super(constructing, value);
            Object.defineProperty(this, nativeArrayKind, {value: kind});
        }

        cloneHandle() {
            if (this.isDeleted()) throw new TypeError('Cannot copy deleted native array data');
            return new NativeArrayData(constructing, call(() => this[handle].clone()), this[nativeArrayKind]);
        }

        get size() {
            return call(() => this[handle].size());
        }

        get(...args) {
            if (args.length !== 1) throw new TypeError('Native array data get requires one index');
            const index = arrayIndex(args[0]), type = arrayDescriptor(this[nativeArrayKind]).element;
            return wrap(call(() => this[handle].get(index)), type);
        }

        set(...args) {
            if (args.length !== 2) throw new TypeError('Native array data set requires an index and value');
            const index = arrayIndex(args[0]), value = unwrap(args[1], arrayDescriptor(this[nativeArrayKind]).element);
            return call(() => this[handle].set(index, value));
        }
    }

    class NativeArray extends NativeHandle {
        constructor(kind, ...args) {
            let value;
            if (kind === constructing) {
                value = args[0];
                kind = args[1];
            } else {
                const descriptor = arrayDescriptor(kind);
                let values;
                if (!args.length) values = [0];
                else if (args.length === 1 && (Array.isArray(args[0]) || typedNativeArray(args[0], {
                    native_container: 'Array',
                    element: descriptor.element
                }))) {
                    const source = Array.isArray(args[0]) ? args[0] : Array.from(args[0]);
                    values = [3, unwrap(source, {kind: 'list', element: descriptor.element})];
                } else if (args.length === 1) values = [1, arrayIndex(args[0])];
                else if (args.length === 2) values = [2, arrayIndex(args[0]), arrayIndex(args[1])];
                else throw new TypeError('Array requires an element kind, optional size/dimensions or initializer values');
                value = call(() => native[descriptor.export](values));
            }
            super(constructing, value);
            Object.defineProperty(this, nativeArrayKind, {value: kind});
        }

        cloneHandle() {
            if (this.isDeleted()) throw new TypeError('Cannot copy a deleted native Array');
            return new NativeArray(constructing, call(() => this[handle].clone()), this[nativeArrayKind]);
        }

        get rows() {
            return call(() => this[handle].metadata()).rows;
        }

        set rows(value) {
            const v = unwrap(value, {kind: 'int', native: 'int'});
            call(() => this[handle].rows(v));
        }

        get columns() {
            return call(() => this[handle].metadata()).columns;
        }

        set columns(value) {
            const v = unwrap(value, {kind: 'int', native: 'int'});
            call(() => this[handle].columns(v));
        }

        get length() {
            return call(() => this[handle].metadata()).length;
        }

        set length(value) {
            const v = unwrap(value, {kind: 'int', native: 'int'});
            call(() => this[handle].length(v));
        }

        get sizet() {
            return call(() => this[handle].metadata()).sizet;
        }

        set sizet(value) {
            const v = arrayIndex(value);
            call(() => this[handle].sizet(v));
        }

        get data() {
            const value = call(() => this[handle].data());
            return value === null ? null : new NativeArrayData(constructing, value, this[nativeArrayKind]);
        }

        set data(value) {
            if (value === null) {
                call(() => this[handle].setData(null));
                return;
            }
            if (!(value instanceof NativeArrayData) || value[nativeArrayKind] !== this[nativeArrayKind] || value.isDeleted()) throw new TypeError('Native Array data requires live storage of the same element kind or null');
            call(() => this[handle].setData(value[handle]));
        }

        get(...args) {
            if (args.length !== 1 && args.length !== 2) throw new TypeError('Array get requires one row or a row and column');
            const row = arrayIndex(args[0]), column = args.length === 2 ? arrayIndex(args[1]) : 0;
            const value = call(() => args.length === 1 ? this[handle].getRow(row) : this[handle].get(row, column));
            return wrap(value, arrayDescriptor(this[nativeArrayKind]).element);
        }

        set(...args) {
            if (args.length !== 2 && args.length !== 3) throw new TypeError('Array set requires row/value or row/column/value');
            const row = arrayIndex(args[0]), column = args.length === 3 ? arrayIndex(args[1]) : 0;
            const value = unwrap(args.at(-1), arrayDescriptor(this[nativeArrayKind]).element);
            return call(() => args.length === 2 ? this[handle].setRow(row, value) : this[handle].set(row, column, value));
        }

        begin(...args) {
            if (args.length > 1) throw new TypeError('Array.begin accepts only an optional const-pointer selector');
            const readOnly = args.length ? unwrap(args[0], {kind: 'boolean'}) : false;
            const value = call(() => this[handle].pointer(false, readOnly));
            return value === null ? null : new NativeArrayPointer(constructing, value, this[nativeArrayKind]);
        }

        end(...args) {
            if (args.length > 1) throw new TypeError('Array.end accepts only an optional const-pointer selector');
            const readOnly = args.length ? unwrap(args[0], {kind: 'boolean'}) : false;
            const value = call(() => this[handle].pointer(true, readOnly));
            return value === null ? null : new NativeArrayPointer(constructing, value, this[nativeArrayKind]);
        }

        * [Symbol.iterator]() {
            let first, last;
            try {
                first = this.begin();
                last = this.end();
                if (first === null || last === null) return;
                while (!first.equals(last)) {
                    yield first.get();
                    first.advance(1);
                }
            } finally {
                first?.delete();
                last?.delete();
            }
        }

        static toArray(kind, values) {
            if (arguments.length !== 2 || values === null) throw new TypeError('Array.toArray requires an element kind and nonnull list');
            const descriptor = arrayDescriptor(kind),
                value = unwrap(values, {kind: 'list', element: descriptor.element});
            return new NativeArray(constructing, call(() => native[descriptor.to_array_export](value)), kind);
        }
    }

    mx.Array = NativeArray;
    mx.new_Array = function (kind, ...sizes) {
        arrayDescriptor(kind);
        if (sizes.length !== 1 && sizes.length !== 2) throw new TypeError('new_Array requires an element kind and one or two dimensions');
        const dimensions = sizes.map(arrayIndex);
        return new NativeArray(kind, ...dimensions);
    };
    for (const [name, item] of Object.entries(catalog.array_aliases)) mx[name] = function (...sizes) {
        if (sizes.length !== 1 && sizes.length !== 2) throw new TypeError(`${name} requires one or two dimensions`);
        const dimensions = sizes.map(arrayIndex),
            value = call(() => native[item['export' + sizes.length]](...dimensions));
        return new NativeArray(constructing, value, item.kind);
    };

    const elementAtEndKind = Symbol('native ElementAtTheEnd pointer type');

    class ElementAtTheEnd extends NativeHandle {
        constructor(...args) {
            let kind, value;
            if (args[0] === constructing) {
                value = args[1];
                kind = args[2];
            } else {
                if (args.length === 3 && args[0] instanceof NativeListHandle) {
                    const descriptor = args[0][elementDescriptor];
                    const inferred = Object.entries(catalog.element_at_the_end).find(([, item]) => item.element.kind === descriptor.kind && item.element.name === descriptor.name)?.[0];
                    args = [inferred, ...args];
                }
                if (args.length !== 4 || typeof args[0] !== 'string' || !Object.hasOwn(catalog.element_at_the_end, args[0])) throw new TypeError('ElementAtTheEnd requires a supported pointer kind, target list, element and int index');
                kind = args[0];
                const descriptor = catalog.element_at_the_end[kind];
                const values = [unwrap(args[1], {
                    kind: 'list',
                    element: descriptor.element,
                    nullable: true
                }), unwrap(args[2], descriptor.element), unwrap(args[3], {kind: 'int', native: 'int'})];
                value = call(() => native[descriptor.export](values));
            }
            super(constructing, value);
            Object.defineProperty(this, elementAtEndKind, {value: kind});
        }

        cloneHandle() {
            if (this.isDeleted()) throw new TypeError('Cannot copy a deleted ElementAtTheEnd handle');
            return new ElementAtTheEnd(constructing, call(() => this[handle].clone()), this[elementAtEndKind]);
        }
    }

    mx.ElementAtTheEnd = ElementAtTheEnd;
    mx.new_ElementAtTheEnd = function (kind, target, element, index) {
        if (arguments.length !== 4) throw new TypeError('new_ElementAtTheEnd requires four parameters');
        return new ElementAtTheEnd(kind, target, element, index);
    };

    function interfaceMatches(value, methods) {
        return value !== null && typeof value === 'object' && value[nativeHandleBrand] !== true && methods.every(name => typeof value[name] === 'function');
    }

    function invoke(object, name, args, expected) {
        const borrowed = [];
        try {
            if (expected === 'variadic-number') {
                expected = 'number';
                args = Array.from(args);
                if (args[0] !== null) {
                    args[0] = new NativeListHandle(constructing, args[0], double);
                    borrowed.push(args[0]);
                }
            }
            const value = Reflect.apply(object[name], object, args);
            const methods = extensionInterfaceMethods[expected];
            if (methods && (!interfaceMatches(value, methods) || typeof value.then === 'function')) throw new TypeError(`${name} must return a synchronous implementation object for ${expected}`);
            if (expected === 'number' && typeof value !== 'number') throw new TypeError(`${name} must return a number`);
            if (expected === 'bigint' && (typeof value !== 'bigint' || value < -(1n << 63n) || value > (1n << 63n) - 1n)) throw new TypeError(`${name} must return a signed 64-bit bigint`);
            if (expected === 'int' && (!Number.isInteger(value) || value < 0 || value > 2147483647)) throw new TypeError(`${name} must return a nonnegative int32`);
            if (expected === 'string' && value !== null && typeof value !== 'string') throw new TypeError(`${name} must return a string or null`);
            if (expected === 'object' && (value === null || typeof value !== 'object' || typeof value.then === 'function')) throw new TypeError(`${name} must return a synchronous implementation object`);
            if (expected === 'void' && value != null && typeof value.then === 'function') throw new TypeError(`${name} must complete synchronously`);
            return {ok: true, value};
        } catch (error) {
            let message;
            try {
                message = String(error);
            } catch {
                message = 'Callback threw an unprintable value';
            }
            return {ok: false, message};
        } finally {
            for (const value of borrowed) if (!value.isDeleted()) value.delete();
        }
    }

    const string = {kind: 'string', nullable: true},
        definition = {kind: 'handle', name: 'PrimitiveElement', nullable: true};
    const double = {kind: 'number'};

    function definitionList(value) {
        return value instanceof NativeListHandle && value[elementDescriptor].kind === 'handle' && ['PrimitiveElement', 'Argument', 'RecursiveArgument', 'Constant', 'Function'].includes(value[elementDescriptor].name);
    }

    function defs(values) {
        return values.map(value => {
            if (definitionList(value)) return unwrap(value, {kind: 'list', element: value[elementDescriptor]});
            if (value !== null && !(value instanceof classes.Argument || value instanceof classes.Constant || value instanceof classes.Function)) throw new TypeError('Definitions require Argument, Constant or Function handles');
            return unwrap(value, definition);
        });
    }

    function flat(values) {
        return values.flatMap(value => Array.isArray(value) ? value : [value]);
    }

    // Declaration-derived shape checks only;all calculations/state stay native.
    const managedProfile = catalog.public_profile;

    function managedValueMatches(value, type) {
        if (value === null) return !['number', 'int', 'bigint', 'boolean', 'char'].includes(type.kind);
        switch (type.kind) {
            case 'number':
                return typeof value === 'number';
            case 'int':
                return typeof value === 'number' && Number.isInteger(value) || value instanceof Int32Value;
            case 'bigint':
                return typeof value === 'bigint';
            case 'boolean':
                return typeof value === 'boolean';
            case 'string':
            case 'char':
                return typeof value === 'string';
            case 'any':
                return typeof value !== 'function';
            case 'stdio':
                return ['stdin', 'stdout', 'stderr'].includes(value);
            case 'array': {
                if (value instanceof NullNativeListValue)
                    return managedDescriptorMatches(catalog.lists[value.kind].element, type.element);
                if (value instanceof NativeListHandle) return managedDescriptorMatches(value[elementDescriptor], type.element);
                if (value instanceof NativeFixedArrayHandle) return managedDescriptorMatches(value[elementDescriptor], type.element);
                if (Array.isArray(value) || ArrayBuffer.isView(value)) return Array.from(value).every(v => managedValueMatches(v, type.element));
                return false;
            }
            case 'handle': {
                if (type.name === 'ReaderStream' && typeof value === 'string') return true; // Existing native text/reader naturalization.
                if (type.name === 'ArgumentExtension') return interfaceMatches(value, ['getArgumentValue', 'clone']) || value?.[nullExtensionKind] === 'ArgumentExtension';
                if (type.name === 'FunctionExtension') return interfaceMatches(value, extensionInterfaceMethods.FunctionExtension) || value?.[nullExtensionKind] === 'FunctionExtension';
                if (type.name === 'FunctionExtensionVariadic') return interfaceMatches(value, extensionInterfaceMethods.FunctionExtensionVariadic) || value?.[nullExtensionKind] === 'FunctionExtensionVariadic';
                return typeof classes[type.name] === 'function' && value instanceof classes[type.name];
            }
            default:
                return false;
        }
    }

    function managedDescriptorMatches(nativeType, publicType) {
        if (nativeType.kind === 'parse_row' && publicType.kind === 'array') return publicType.element.kind === 'int';
        if (nativeType.kind === publicType.kind) return nativeType.kind === 'handle' ? nativeType.name === publicType.name : nativeType.kind === 'array' ? managedDescriptorMatches(nativeType.element, publicType.element) : true;
        if (['array', 'list', 'fixed_array'].includes(nativeType.kind) && publicType.kind === 'array') return managedDescriptorMatches(nativeType.element, publicType.element);
        return nativeType.kind === 'handle' && publicType.kind === 'handle' && typeof classes[publicType.name] === 'function' && typeof classes[nativeType.name] === 'function' && classes[nativeType.name].prototype instanceof classes[publicType.name];
    }

    function managedSignatureMatches(args, signature) {
        const types = signature.parameters;
        if (!signature.variadic) return args.length === types.length && args.every((v, i) => managedValueMatches(v, types[i]));
        const fixed = types.length - 1;
        if (args.length < fixed || !args.slice(0, fixed).every((v, i) => managedValueMatches(v, types[i]))) return false;
        const element = types.at(-1).element;
        return args.slice(fixed).every(v => managedValueMatches(v, element) || managedValueMatches(v, types.at(-1)));
    }

    function managedGuard(owner, name, isStatic, args) {
        const key = owner + '|' + name + '|' + (isStatic ? 'static' : 'instance'),
            families = managedProfile.signatures[key];
        if (families && !families.some(s => managedSignatureMatches(args, s))) throw overloadError(owner, name, args);
    }

    function overloadError(owner, name, args) {
        return new TypeError(`No matching overload of ${owner}.${name} for ${args.length} parameters (public Java/C# API)`);
    }

    function managedConstructorGuard(name, args) {
        if (managedProfile.transport_classes.includes(name)) return;
        if (!managedProfile.public_classes.includes(name)) throw new TypeError('This native implementation class has no public Java/C# constructor');
        if (name === 'CharStream') return; // Existing exact native reader/text constructors.
        const families = managedProfile.constructors[name] ?? [];
        if (!families.some(s => managedSignatureMatches(args, s))) throw new TypeError('Arguments do not match a public Java/C# constructor of ' + name);
    }

    function construct(name, values) {
        managedConstructorGuard(name, values);
        let args = [...values], mode = 0;
        if ((name === 'Argument' || name === 'Constant') && args[0] instanceof Uint8Array) {
            const isInt = args[1] instanceof Int32Value, numeric = isInt ? args[1].value : args[1];
            const values = args.map((value, index) => index === 1 ? numeric : value);
            const selected = catalog.emitted.find(item => item.owner === name && item.native_narrow_constructor && item.parameters[1].kind === (isInt ? 'int' : 'number') && item.parameters.length === values.length && item.parameters.every((type, index) => couldMatch(values[index], type)));
            if (!selected) throw new TypeError(`${name} native string constructor requires byte text and its original numeric value`);
            return call(() => native[selected.export](selected.parameters.map((type, index) => unwrap(values[index], type))));
        }
        const pointerConstructors = catalog.cstring_constructors?.[name];
        if (pointerConstructors && args[0] instanceof CStringValue) {
            const isInt = args[1] instanceof Int32Value, numeric = isInt ? args[1].value : args[1];
            const values = args.map((value, index) => index === 1 ? numeric : value);
            const selected = pointerConstructors.find(item => item.value_kind === (isInt ? 'int' : 'double') && item.parameters.length === values.length && item.parameters.every((type, index) => couldMatch(values[index], type)));
            if (!selected) throw new TypeError(`${name} C-string constructor requires its original numeric value and same-width text parameters`);
            const converted = selected.parameters.map((type, index) => unwrap(values[index], type));
            return call(() => native[selected.export](converted));
        }
        const helper = catalog.helper_constructors?.[name];
        if (helper) {
            if (helper.overloads) {
                const values = args.map(value => value instanceof Int32Value ? value.value : value);
                const parameters = helper.overloads.find(types => types.length === values.length && types.every((type, index) => couldMatch(values[index], type)));
                if (!parameters) throw new TypeError(`${name} requires one of its original constructor signatures`);
                const result = call(() => native['ctor_' + name](values.map((value, index) => unwrap(value, parameters[index]))));
                if (helper.native_pointer_exception) {
                    throwLexerStateFailure(result.error);
                    return result.object;
                }
                return result;
            }
            if (args.length !== helper.parameters.length) throw new TypeError(`${name} requires ${helper.parameters.length} parameters`);
            args = args.map((value, index) => unwrap(value, helper.parameters[index]));
            return call(() => native['ctor_' + name](args));
        }
        if (name === 'StdLocale' && catalog.native_locale) {
            if (args.length > 1) throw new TypeError('StdLocale takes zero or one native name/source');
            if (args.length) args[0] = typeof args[0] === 'string' ? unwrap(args[0], {
                kind: 'string',
                nullable: false
            }) : unwrap(args[0], {kind: 'handle', name: 'StdLocale', nullable: false});
            return call(() => native.ctor_StdLocale(args));
        }
        if (name === 'StdStringStream' && catalog.native_string_stream) {
            if (args.length) throw new TypeError('new_StringStream requires zero arguments');
            return call(() => native.ctor_StdStringStream([]));
        }
        if (name === 'License' && catalog.native_license_constructor) {
            if (args.length) throw new TypeError('License default constructor takes zero arguments');
            return call(() => native.ctor_License([]));
        }
        switch (name) {
            case 'Expression':
                if (catalog.clone_constructors && args[0] instanceof classes.Expression) {
                    if (args.length !== 3 || typeof args[1] !== 'boolean') throw new TypeError('Expression clone constructor requires (source, boolean, CloneCache|null)');
                    if (args[1] && args[2] === null) throw new TypeError('A native deep-clone constructor requires non-null CloneCache');
                    args = [unwrap(args[0], {
                        kind: 'handle',
                        name: 'Expression',
                        nullable: false
                    }), args[1], unwrap(args[2], {kind: 'handle', name: 'CloneCache', nullable: true})];
                    return call(() => native.ctor_Expression(args));
                }
                if (catalog.expression_internal_constructors?.[args.length] && typeof args[args.length - 3] === 'boolean' && typeof args[args.length - 2] === 'boolean') {
                    const types = catalog.expression_internal_constructors[args.length].parameters.map(item => item.type);
                    return call(() => native.ctor_Expression(args.map((value, index) => unwrap(value, types[index]))));
                }
                if (!args.length) return call(() => native.ctor_Expression([]));
                if (args[0] === null || typeof args[0] === 'string') {
                    const first = unwrap(args[0], string);
                    if (args.length === 2 && typeof args[1] === 'boolean') args = [first, args[1]];
                    else args = [first, ...defs(flat(args.slice(1)))];
                } else return call(() => native.ctor_ExpressionDefinitions(defs(flat(args))));
                break;
            case 'Argument':
                if (!args.length) throw new TypeError('Argument requires a definition or name');
                if (args[0] instanceof classes.Argument) {
                    if (args.length !== 3 || typeof args[1] !== 'boolean') throw new TypeError('Argument clone constructor requires (source, boolean, CloneCache|null)');
                    if (args[1] && args[2] === null) throw new TypeError('A native deep-clone constructor requires non-null CloneCache');
                    args[0] = unwrap(args[0], {kind: 'handle', name: 'Argument', nullable: false});
                    args[2] = unwrap(args[2], {kind: 'handle', name: 'CloneCache', nullable: true});
                    return call(() => native.ctor_Argument(args, invoke, 7));
                }
                args[0] = unwrap(args[0], string);
                if (args.length === 2 && args[1]?.[nullExtensionKind] === 'ArgumentExtension') {
                    mode = 4;
                    args[1] = null;
                } else if (args.length === 2 && interfaceMatches(args[1], ['getArgumentValue', 'clone'])) mode = 1;
                else if (args.length >= 2 && (Array.isArray(args[1]) || definitionList(args[1]))) {
                    mode = 3;
                    args = [args[0], ...defs(flat(args.slice(1)))];
                } else if (args.length >= 2 && args[1] instanceof Int32Value) {
                    if (args.length !== 2) throw new TypeError('Argument(name, int32(value)) takes two parameters');
                    args[1] = unwrap(args[1].value, {kind: 'int', native: 'int'});
                    mode = 10;
                } else if (args.length >= 2 && typeof args[1] === 'number') {
                    if (args.length !== 2) throw new TypeError('Argument(name, value) takes two parameters');
                } else if (args.length >= 2 && typeof args[1] === 'boolean') {
                    if (args.length > 2) mode = 8;
                    args = [args[0], args[1], ...defs(flat(args.slice(2)))];
                } else if (args.length >= 2 && (args[1] === null || typeof args[1] === 'string')) {
                    if (args.length > 2) mode = 9;
                    args = [args[0], unwrap(args[1], string), ...defs(flat(args.slice(2)))];
                } else args = [args[0], ...defs(flat(args.slice(1)))];
                return call(() => native.ctor_Argument(args, invoke, mode));
            case 'StringBuilder':
                if (args.length > 1) throw new TypeError('StringBuilder takes zero or one string');
                if (args.length) args[0] = unwrap(args[0], {kind: 'string', nullable: false});
                return call(() => native.ctor_StringBuilder(args));
            case 'BigDecimal':
                if (args.length > 1) throw new TypeError('BigDecimal takes zero or one number, LongDouble, string or BigDecimal');
                if (args.length) {
                    const value = args[0];
                    if (value instanceof classes.BigDecimal) args[0] = unwrap(value, {
                        kind: 'handle',
                        name: 'BigDecimal',
                        nullable: false
                    });
                    else if (value instanceof LongDoubleValue) args[0] = unwrap(value, {kind: 'long_double'});
                    else if (typeof value !== 'number' && typeof value !== 'string') throw new TypeError('Expected number, LongDouble, string or BigDecimal');
                }
                return call(() => native.ctor_BigDecimal(args));
            case 'Random':
                if (args.length > 1) throw new TypeError('Random takes zero or one seed');
                if (args.length) args[0] = unwrap(args[0], {kind: 'int', native: 'unsigned int'});
                return call(() => native.ctor_Random(args));
            case 'Constant':
                if (args.length === 1 && args[0] instanceof classes.Constant) args = [unwrap(args[0], {
                    kind: 'handle',
                    name: 'Constant'
                })];
                else {
                    if (!args.length) throw new TypeError('Constant requires a definition or name');
                    args[0] = unwrap(args[0], string);
                    if (args.length >= 2 && args[1] instanceof Int32Value) {
                        if (args.length > 3) throw new TypeError('Constant(name, int32(value), description) takes at most three parameters');
                        args[1] = unwrap(args[1].value, {kind: 'int', native: 'int'});
                        mode = 10;
                        if (args.length === 3) args[2] = unwrap(args[2], string);
                    } else if (args.length >= 2 && typeof args[1] === 'number') {

                        if (args.length > 3) throw new TypeError('Constant(name, value, description) takes at most three parameters');
                        if (args.length === 3) args[2] = unwrap(args[2], string);
                    } else {
                        if (args.length > 1) mode = 3;
                        args = [args[0], ...defs(flat(args.slice(1)))];
                    }
                }
                return call(() => native.ctor_Constant(args, mode));
            case 'Function':
                if (!args.length) throw new TypeError('Function requires a definition or name');
                if (args[0] instanceof classes.Function) {
                    if (args.length !== 3 || typeof args[1] !== 'boolean') throw new TypeError('Function clone constructor requires (source, boolean, CloneCache|null)');
                    if (args[1] && args[2] === null) throw new TypeError('A native deep-clone constructor requires non-null CloneCache');
                    args[0] = unwrap(args[0], {kind: 'handle', name: 'Function', nullable: false});
                    args[2] = unwrap(args[2], {kind: 'handle', name: 'CloneCache', nullable: true});
                    return call(() => native.ctor_Function(args, invoke, 7));
                }
                args[0] = unwrap(args[0], string);
                if (args.length >= 3 && (args[1] === null || typeof args[1] === 'string') && (args[2] === null || (args[2] instanceof NativeListHandle && !definitionList(args[2])))) {
                    mode = 6;
                    args = [args[0], unwrap(args[1], string), unwrap(args[2], {
                        kind: 'list',
                        element: {kind: 'string', nullable: true},
                        nullable: true
                    }), ...defs(flat(args.slice(3)))];
                } else if (args.length === 2 && args[1]?.[nullExtensionKind] === 'FunctionExtension') {
                    mode = 4;
                    args[1] = null;
                } else if (args.length === 2 && args[1]?.[nullExtensionKind] === 'FunctionExtensionVariadic') {
                    mode = 5;
                    args[1] = null;
                } else if (args.length === 2 && interfaceMatches(args[1], ['getParametersNumber', 'setParameterValue', 'getParameterName', 'calculate', 'clone'])) mode = 1;
                else if (args.length === 2 && interfaceMatches(args[1], ['calculate', 'clone'])) mode = 2;
                else if (args.length >= 2 && (Array.isArray(args[1]) || definitionList(args[1]))) {
                    mode = 3;
                    args = [args[0], ...defs(flat(args.slice(1)))];
                } else if (args.length >= 2 && (args[1] === null || typeof args[1] === 'string')) {
                    if (args.length > 2) mode = 8;
                    args = [args[0], unwrap(args[1], string), ...flat(args.slice(2)).map(value => typeof value === 'string' ? value : defs([value])[0])];
                } else args = [args[0], ...defs(flat(args.slice(1)))];
                return call(() => native.ctor_Function(args, invoke, mode));
            case 'RecursiveArgument':
                if (catalog.clone_constructors && args[0] instanceof classes.RecursiveArgument) {
                    if (args.length !== 2) throw new TypeError('RecursiveArgument clone constructor requires (source, CloneCache)');
                    args = [unwrap(args[0], {
                        kind: 'handle',
                        name: 'RecursiveArgument',
                        nullable: false
                    }), unwrap(args[1], {kind: 'handle', name: 'CloneCache', nullable: false})];
                    return call(() => native.ctor_RecursiveArgument(args, 7));
                }
                if (!args.length) throw new TypeError('RecursiveArgument requires a definition or name');
                args[0] = unwrap(args[0], string);
                if (args.length >= 3 && (args[1] === null || typeof args[1] === 'string')) {
                    args[1] = unwrap(args[1], string);
                    if (args[2] === null || typeof args[2] === 'string') {
                        if (args.length !== 3) throw new TypeError('An index name form takes exactly three parameters');
                        args[2] = unwrap(args[2], string);
                    } else {
                        if (args.length > 3) mode = 3;
                        args = [args[0], args[1], unwrap(args[2], {
                            kind: 'handle',
                            name: 'Argument'
                        }), ...defs(flat(args.slice(3)))];
                    }
                } else args = [args[0], ...defs(flat(args.slice(1)))];
                return call(() => native.ctor_RecursiveArgument(args, mode));
            case 'KeyWord':
                if (args.length !== 0 && args.length !== 6) throw new TypeError('KeyWord takes zero or six parameters');
                if (args.length) args = args.map((value, i) => unwrap(value, i === 2 || i === 5 ? {kind: 'int'} : string));
                break;
            case 'Token':
                if (args.length > 1) throw new TypeError('Token takes at most one source token');
                if (args.length) args = [unwrap(args[0], {kind: 'handle', name: 'Token'})];
                break;
            case 'PrimesCache':
                if (args.length > 1) throw new TypeError('PrimesCache takes at most one limit');
                if (args.length) args = [unwrap(args[0], {kind: 'int'})];
                break;
            case 'SpecialValue':
            case 'SpecialValueTrigonometric':
                if (name === 'SpecialValue' ? ![2, 3].includes(args.length) : args.length !== 7) throw new TypeError(`${name} requires its original numeric factory parameters`);
                args = args.map(value => unwrap(value, double));
                break;
            case 'CalcStepRecord':
            case 'CalcStepsRegister':
            case 'StringResources':
                if (args.length) throw new TypeError(`${name} takes no parameters`);
                return call(() => native['ctor_' + name]());
            default:
                if (catalog.parents[name] === 'StringResources') {
                    if (args.length) throw new TypeError(`${name} takes no parameters`);
                    return call(() => native['ctor_' + name]());
                }
                throw new TypeError(`${name} has no public factory constructor in this proposal`);
        }
        return call(() => native['ctor_' + name](args));
    }

    function concrete(name, parent) {
        const result = class extends parent {
            constructor(...args) {
                if (args[0] === constructing) super(constructing, args[1]);
                else super(constructing, construct(name, args));
            }
        };
        Object.defineProperty(result, 'name', {value: name});
        return result;
    }

    classes.PrimitiveElement = class PrimitiveElement extends NativeHandle {
    };
    for (const name of ['Argument', 'Expression', 'Constant', 'Function']) classes[name] = concrete(name, classes.PrimitiveElement);
    classes.RecursiveArgument = concrete('RecursiveArgument', classes.Argument);
    for (const name of ['CalcStepRecord', 'CalcStepsRegister', 'StringResources', 'Token', 'KeyWord', 'PrimesCache', 'SpecialValue', 'SpecialValueTrigonometric', 'StringBuilder', 'BigDecimal']) classes[name] = concrete(name, NativeHandle);

    if (catalog.native_string_stream) classes.StdStringStream = concrete('StdStringStream', NativeHandle);
    if (catalog.native_license_constructor) classes.License = concrete('License', NativeHandle);
    if (catalog.native_locale) classes.StdLocale = concrete('StdLocale', NativeHandle);
    // JS has no overloadable ==; equals calls the original native operator.
    for (const owner of Object.keys(catalog.native_equality ?? {})) Object.defineProperty(classes[owner].prototype, 'equals', {
        value: function (other) {
            if (arguments.length !== 1 || this.isDeleted()) throw new TypeError('Native equals requires one live counterpart');
            const value = unwrap(other, {kind: 'handle', name: owner, nullable: false});
            return call(() => this[handle].equals(value));
        }
    });

    for (const name of Object.keys(catalog.helper_constructors ?? {})) classes[name] = concrete(name, classes[catalog.parents[name]] ?? NativeHandle);
    for (const [name, parent] of Object.entries(catalog.parents)) {
        if (parent !== 'StringResources') continue;
        const Type = classes[name] = concrete(name, classes.StringResources);
        // Its original C++ factory returns a base pointer. Keep that owning native
        // view and preserve only the concrete JS constructor type of handle copies.
        Object.defineProperty(Type.prototype, 'cloneHandle', {
            value() {
                if (this.isDeleted()) throw new TypeError('Cannot copy a deleted native handle');
                return new Type(constructing, call(() => this[handle].clone()));
            }
        });
    }
    for (const [name, parent] of Object.entries(catalog.parents)) if (parent === 'VariadicProcessor') {
        const Type = classes[name];
        Object.defineProperty(Type.prototype, 'cloneHandle', {
            value() {
                if (this.isDeleted()) throw new TypeError('Cannot copy a deleted native handle');
                return new Type(constructing, call(() => this[handle].clone()));
            }
        });
    }
    classes.IRandom = class IRandom extends NativeHandle {
        constructor(token, value) {
            if (token !== constructing) throw new TypeError('IRandom is abstract; use IRandom.implement');
            super(token, value);
        }
    };
    classes.Random = concrete('Random', classes.IRandom);
    Object.defineProperty(classes.IRandom, 'implement', {
        value(implementation) {
            if (!interfaceMatches(implementation, ['nextInt', 'nextDouble', 'setSeed'])) throw new TypeError('Expected an IRandom implementation object');
            return wrap(call(() => native.ctor_IRandom(implementation, invoke)), {kind: 'handle', name: 'IRandom'});
        }
    });
    for (const [name, owner] of Object.entries(catalog.objects)) owners[owner] = classes[name];

    function expose(owner, value) {
        const parts = owner.split('::');
        let scope = mx;
        for (const part of parts.slice(0, -1)) scope = scope[part] ??= Object.create(null);
        scope[parts.at(-1)] = value;
        mx[parts.at(-1)] ??= value;
    }

    const methods = new Map();
    // These original native variadic templates collect one homogeneous List and
    // delegate to its existing overload. Normalize only their argument container.
    const listPacks = new Map([['addDefinitions', 0], ['removeDefinitions', 0], ['addArguments', 0],
        ['addConstants', 0], ['addFunctions', 0], ['defineArguments', 0], ['defineFunction', 2]]);
    if (catalog.lexer_rounds_array) Object.defineProperty(classes.SyntaxCheckerTokenManager.prototype, 'jjrounds', {
        enumerable: true, get() {
            if (!(this instanceof classes.SyntaxCheckerTokenManager) || this.isDeleted()) throw new TypeError('Native lexer rounds require a live manager');
            return new NativeFixedArrayHandle(constructing, call(() => native.native_lexer_rounds_view(this[handle])), {kind: 'int'});
        }
    });
    if (catalog.borrowed_lexer_handler?.get) Object.defineProperty(classes.SyntaxCheckerTokenManager.prototype, 'errorHandler', {
        enumerable: true, get() {
            if (!(this instanceof classes.SyntaxCheckerTokenManager) || this.isDeleted()) throw new TypeError('Native lexer handler requires a live manager');
            return wrap(call(() => native[catalog.borrowed_lexer_handler.get](this[handle])), {
                kind: 'handle',
                name: 'TokenManagerErrorHandler',
                nullable: true
            });
        }
    });
    for (const field of catalog.syntax_dependency_fields ?? []) Object.defineProperty(classes[field.owner].prototype, field.name, {
        enumerable: true, get() {
            if (!(this instanceof classes[field.owner]) || this.isDeleted()) throw new TypeError('Native dependency field requires a live ' + field.owner);
            return wrap(call(() => native[field.get](this[handle])), field.result);
        }
    });
    for (const field of catalog.borrowed_parser_tokens?.fields ?? []) Object.defineProperty(classes[field.owner].prototype, field.name, {
        enumerable: true, get() {
            if (!(this instanceof classes[field.owner]) || this.isDeleted()) throw new TypeError('Native borrowed field requires a live ' + field.owner);
            return wrap(call(() => native[field.get](this[handle])), field.result);
        }
    });
    for (const item of catalog.emitted) {
        if (item.managed_adapter) continue;
        const owner = owners[item.owner] ??= Object.create(null);
        if (item.kind === 'field') {
            const target = item.static ? owner : owner.prototype;
            const property = {
                enumerable: true, get() {
                    return wrap(call(() => item.static ? native[item.export + '_get']() : native[item.export + '_get'](this[handle])), item.result);
                }
            };
            if (!item.readonly) property.set = function (value) {
                const converted = unwrap(value, item.result);
                call(() => item.static ? native[item.export + '_set'](converted) : native[item.export + '_set'](this[handle], converted));
            };
            Object.defineProperty(target, item.name, property);
        } else {
            const key = JSON.stringify([item.owner, item.static, item.name]);
            if (!methods.has(key)) methods.set(key, []);
            methods.get(key).push(item);
        }
    }
    for (const group of methods.values()) {
        const first = group[0], owner = owners[first.owner], target = first.static ? owner : owner.prototype;
        const inherited = Object.getPrototypeOf(target)?.[first.name];
        Object.defineProperty(target, first.name, {
            configurable: true, value: function (...args) {
                managedGuard(first.owner, first.name, first.static, args);
                // Managed numeric varargs whose native counterpart accepts a single
                // array/list. Only normalize the container; calculation stays native.
                const numericPrefix = first.static && first.name === 'convOthBase2Decimal'
                    && ['mXparser', 'mathcollection::NumberTheory'].includes(first.owner) ? 1
                    : first.static && first.owner === 'mathcollection::MathFunctions'
                    && ['continuedFraction', 'continuedPolynomial'].includes(first.name) ? 0 : null;
                if (numericPrefix !== null && args.length >= numericPrefix
                    && (numericPrefix === 0 || typeof args[0] === 'number' || args[0] instanceof Int32Value)
                    && args.slice(numericPrefix).every(value => typeof value === 'number'))
                    args = [...args.slice(0, numericPrefix), args.slice(numericPrefix)];
                if (first.static && first.owner === 'mathcollection::NumberTheory'
                    && ['gcd', 'lcm'].includes(first.name) && args.length !== 2 && args.length > 0
                    && args.every(value => typeof value === 'bigint')) args = [args];
                let processorOverload;
                if (first.owner === 'wrapper::VariadicProcessor' && first.name === 'ifElementTypeIs') {
                    if (args.length === 2) {
                        processorOverload = args[1];
                        args = [args[0]];
                        if (typeof processorOverload !== 'string' || !group.some(item => item.native_overload === processorOverload)) throw new TypeError('Unknown native processor overload');
                    } else if (args.length === 1 && args[0] === null) throw new TypeError('Null processor input requires its native overload name');
                }
                // These dedicated static overloads carry an opaque host value. Avoid
                // integer-selector instanceof checks or inspecting the supplied value.
                if (first.static && group.length === 1 && first.parameters.length === 1 && first.parameters[0].kind === 'any') {
                    if (args.length !== 1) throw new TypeError(`${first.name} requires one opaque value`);
                    return wrap(call(() => native[first.export](args)), first.result);
                }
                let selectedInt32;
                if (args.some(value => value instanceof Int32Value)) {
                    selectedInt32 = args.map(value => value instanceof Int32Value);
                    // Existing native precondition checks below must see the raw value too.
                    args = args.map(value => value instanceof Int32Value ? value.value : value);
                }

                if (first.owner === 'expressionutils::ExpressionUtils' && args.length === 1) {
                    const label = {
                        getMissingUserDefinedArguments: 'argument',
                        getMissingUserDefinedUnits: 'unit/const',
                        getMissingUserDefinedFunctions: 'function'
                    }[first.name];
                    if (label) {
                        const tokens = args[0];
                        if (tokens === null) throw new TypeError('Native token analysis requires a non-null token collection');
                        if (Array.isArray(tokens)) {
                            let matching = 0, nullName = false;
                            for (const token of tokens) {
                                if (!(token instanceof classes.Token) || token.isDeleted() || token.looksLike === null)
                                    throw new TypeError('Native token analysis requires live non-null tokens with non-null looksLike metadata');
                                if (token.looksLike === label) {
                                    matching++;
                                    nullName ||= token.tokenStr === null;
                                }
                            }
                            if (matching > 1 && nullName)
                                throw new TypeError('Native token analysis compares names by dereference; multiple matching tokens require non-null names');
                        } else if (tokens instanceof NativeListHandle) {
                            if (tokens.isDeleted()) throw new TypeError('Cannot use a deleted native Token list');
                            const descriptor = tokens[elementDescriptor];
                            if (descriptor.kind !== 'handle' || descriptor.name !== 'Token') throw new TypeError('Native token analysis requires a Token list');
                            let matching = 0, nullName = false;
                            for (let index = 0; index < tokens.size(); index++) {
                                const token = tokens.get(index);
                                try {
                                    if (!(token instanceof classes.Token) || token.looksLike === null)
                                        throw new TypeError('Native token analysis requires live non-null tokens with non-null looksLike metadata');
                                    if (token.looksLike === label) {
                                        matching++;
                                        nullName ||= token.tokenStr === null;
                                    }
                                } finally {
                                    if (token instanceof classes.Token) token.delete();
                                }
                            }
                            if (matching > 1 && nullName)
                                throw new TypeError('Native token analysis compares names by dereference; multiple matching tokens require non-null names');
                        }
                    }
                }
                if (first.name === 'nextInt' && this instanceof classes.Random && args.length === 1 && (args[0] === 0n || args[0] === -(1n << 63n)))
                    throw new RangeError('Native Random bound must be nonzero and have a representable signed 64-bit absolute value');
                if (first.owner === 'stringutils::StringUtils' && first.name === 'repeatString' && args[0] === null && typeof args[1] === 'number' && args[1] > 0)
                    throw new TypeError('repeatString requires a non-null string for a positive repetition count');
                if (first.owner === 'parsertokens::Token' && first.name === 'isSpecialTokenName' && args.length === 1 && args[0] instanceof classes.Token && args[0].tokenStr === null)
                    throw new TypeError('isSpecialTokenName requires a Token with non-null tokenStr');
                const matched = [];
                for (const item of group) {
                    if (item.numeric_base_pack) continue;
                    if (item.native_static_prefix_pack) continue;
                    if (item.native_member_prefix_pack) continue;
                    if (item.native_factory_pack) continue;
                    if (item.numeric_pack) continue;
                    if (item.native_member_pack || item.native_static_pack) continue;
                    if (item.parameters.length !== args.length) continue;
                    if (first.owner === 'wrapper::VariadicProcessor' && first.name === 'ifElementTypeIs') {
                        if (processorOverload && item.native_overload !== processorOverload) continue;
                        if (!processorOverload && typeof args[0] === 'string' && item.native_overload !== 'StringPtr') continue;
                    }

                    if (selectedInt32 && !item.parameters.every((type, index) => !selectedInt32[index] ||
                        (type.kind === 'int' && type.native === 'int'))) continue;

                    if (!item.parameters.every((type, index) => couldMatch(args[index], type))) continue;
                    try {
                        const values = args.map((value, i) => unwrap(value, item.parameters[i]));
                        const score = item.parameters.reduce((sum, type, index) => sum + (type.kind === 'number' ? 2 : type.kind === 'int' ? 1 : 0)
                                + (Array.isArray(args[index]) ? (type.native_container === 'Array' ? 4 : 0) + (type.element?.kind === 'number' ? 2 : 0) : 0)
                                - (args[index] === null && ['array', 'list'].includes(type.kind) ? 1 : 0), 0)
                            + (item.owner === 'wrapper::VariadicProcessor' && item.parameters[0]?.kind === 'handle' ? (item.parameters[0].name === 'RecursiveArgument' ? 2 : item.parameters[0].name === 'PrimitiveElement' ? 0 : 1) : 0)
                            + (item.owner === 'wrapper::BigDecimal' && item.name === 'pow' && item.parameters[0].kind === 'int' ? 4 : 0);
                        matched.push({item, values, score});
                    } catch (error) {
                        if (!(error instanceof TypeError)) throw error;
                    }
                }
                matched.sort((a, b) => b.score - a.score);
                const nativePack = (!first.static && ['Expression', 'Argument', 'Function'].includes(first.owner) && listPacks.has(first.name))
                    || (first.static && first.owner === 'mXparser' && ['removeBuiltinTokens', 'unremoveBuiltinTokens', 'unmodifyBuiltinTokens'].includes(first.name));
                if (!matched.length && nativePack) {
                    const prefix = first.static ? 0 : listPacks.get(first.name), packed = flat(args.slice(prefix));
                    for (const item of group) {
                        if (item.parameters.length !== prefix + 1 || item.parameters[prefix].kind !== 'array' || args.length < prefix) continue;
                        try {
                            matched.push({
                                item,
                                values: [...args.slice(0, prefix).map((value, i) => unwrap(value, item.parameters[i])), unwrap(packed, item.parameters[prefix])],
                                score: 0
                            });
                            break;
                        } catch (error) {
                            if (!(error instanceof TypeError)) throw error;
                        }
                    }
                }
                if (!matched.length) {
                    const basePack = group.find(item => item.numeric_base_pack && (!item.mxparser_digit_pack || item.mxparser_digit_pack === (selectedInt32?.[0] ? 'int' : 'double')));
                    if (basePack && args.length) {
                        const retained = [];
                        const retain = value => {
                            const alias = value.cloneHandle();
                            retained.push(alias);
                            return alias;
                        };
                        try {
                            let values;
                            try {
                                values = [unwrap(args[0], basePack.mxparser_digit_pack === 'int' ? {
                                    kind: 'int',
                                    native: 'int'
                                } : {kind: 'number'}), args.slice(1).map((value, index) => selectedInt32?.[index + 1]
                                    ? ['int', unwrap(value, {
                                        kind: 'int',
                                        native: 'int'
                                    })] : processorTransport(value, retain))];
                            } catch (error) {
                                if (!(error instanceof TypeError)) throw error;
                            }
                            if (values) return call(() => native[basePack.export](values));
                        } finally {
                            for (const alias of retained.reverse()) alias.delete();
                        }
                    }
                    const staticPrefixPacks = group.filter(item => item.native_static_prefix_pack
                        && args.length >= item.parameters.length
                        && item.parameters.every((type, index) => couldMatch(args[index], type)))
                        .sort((a, b) => b.parameters.length - a.parameters.length);
                    if (staticPrefixPacks.length) {
                        const staticPrefixPack = staticPrefixPacks[0];
                        const retained = [];
                        const retain = value => {
                            const alias = value.cloneHandle();
                            retained.push(alias);
                            return alias;
                        };
                        try {
                            const prefix = staticPrefixPack.parameters.map((parameter, i) => unwrap(args[i], parameter));
                            const elements = args.slice(prefix.length).map((value, index) => selectedInt32?.[index + prefix.length]
                                ? ['int', unwrap(value, {
                                    kind: 'int',
                                    native: 'int'
                                })] : processorTransport(value, retain));
                            return wrap(call(() => native[staticPrefixPack.export]([...prefix, elements])), staticPrefixPack.result);
                        } finally {
                            for (const alias of retained.reverse()) alias.delete();
                        }
                    }
                    const memberPrefixPack = group.find(item => item.native_member_prefix_pack);
                    if (memberPrefixPack && args.length >= memberPrefixPack.parameters.length) {
                        if (!(this instanceof classes[memberPrefixPack.owner]) || this.isDeleted()) throw new TypeError('Native variadic call requires a live ' + memberPrefixPack.owner);
                        const retained = [];
                        const retain = value => {
                            const alias = value.cloneHandle();
                            retained.push(alias);
                            return alias;
                        };
                        try {
                            const prefix = memberPrefixPack.parameters.map((parameter, i) => unwrap(args[i], parameter));
                            const elements = args.slice(prefix.length).map((value, index) => selectedInt32?.[index + prefix.length]
                                ? ['int', unwrap(value, {
                                    kind: 'int',
                                    native: 'int'
                                })] : processorTransport(value, retain));
                            return call(() => native[memberPrefixPack.export](this[handle], [...prefix, elements]));
                        } finally {
                            for (const alias of retained.reverse()) alias.delete();
                        }
                    }
                    const factoryPack = group.find(item => item.native_factory_pack);
                    if (factoryPack && args.length) {
                        const retained = [];
                        const retain = value => {
                            const alias = value.cloneHandle();
                            retained.push(alias);
                            return alias;
                        };
                        try {
                            const prefix = factoryPack.parameters.map((parameter, i) => unwrap(args[i], parameter));
                            const elements = args.slice(prefix.length).map((value, index) => selectedInt32?.[index + prefix.length]
                                ? ['int', unwrap(value, {
                                    kind: 'int',
                                    native: 'int'
                                })] : processorTransport(value, retain));
                            return wrap(call(() => native[factoryPack.export]([...prefix, elements])), factoryPack.result);
                        } finally {
                            for (const alias of retained.reverse()) alias.delete();
                        }
                    }
                    const pack = group.find(item => item.numeric_pack || item.native_member_pack || item.native_static_pack);
                    if (pack) {
                        // Match the original native argument tuple's shared ownership for
                        // the whole call, including synchronous host diagnostic reentry.
                        const retained = [];
                        const retain = value => {
                            const alias = value.cloneHandle();
                            retained.push(alias);
                            return alias;
                        };
                        try {
                            let elements;
                            try {
                                elements = args.map((value, index) => selectedInt32?.[index]
                                    ? ['int', unwrap(value, {
                                        kind: 'int',
                                        native: 'int'
                                    })] : processorTransport(value, retain));
                            } catch (error) {
                                if (!(error instanceof TypeError)) throw error;
                            }
                            if (elements) {
                                if (pack.native_member_pack) {
                                    if (!(this instanceof classes[pack.owner]) || this.isDeleted()) throw new TypeError('Native variadic call requires a live ' + pack.owner);
                                    return call(() => native[pack.export](this[handle], [elements]));
                                }
                                return call(() => native[pack.export]([elements]));
                            }
                        } finally {
                            for (const alias of retained.reverse()) alias.delete();
                        }
                    }
                    if (typeof inherited === 'function' && inherited !== Object.prototype[first.name] && inherited !== Function.prototype[first.name]) return inherited.apply(this, args);
                    throw overloadError(first.owner, first.name, args);
                }
                const {item, values} = matched[0];
                if (item.owner === 'mathcollection::Evaluate' && item.name !== 'polynomial') {
                    const needed = Math.max(1, values[2] + (item.name === 'polevl' ? 1 : 0));
                    if (values[1].length < needed)
                        throw new RangeError(`Native Evaluate.${item.name} requires enough coefficients for its original unchecked indexes`);
                }

                // Native RecursiveArgument rounds this double before static_cast<int>.
                // Validate that conversion domain without changing native index rounding.
                if (item.owner === 'RecursiveArgument' && item.name === 'getArgumentValue' &&
                    (!Number.isFinite(values[0]) || values[0] <= -2147483648.5 || values[0] >= 2147483647.5))
                    throw new TypeError('RecursiveArgument index must round to a representable native int32');
                if (item.owner === 'wrapper::Math' && item.name === 'abs' && item.parameters[0].kind === 'int' && values[0] === -2147483648)
                    throw new RangeError('Native Math.abs cannot represent the signed 32-bit minimum absolute value');
                if (item.owner === 'wrapper::Math' && item.name === 'abs' && typeof values[0] === 'bigint' && values[0] === -(1n << 63n))
                    throw new RangeError('Native Math.abs cannot represent the signed 64-bit minimum absolute value');
                for (const index of item.inout ?? []) {
                    if (args[index] !== null) {
                        const descriptors = Object.getOwnPropertyDescriptors(args[index]);
                        if (Object.isFrozen(args[index]) || Object.entries(descriptors).some(([key, d]) => key !== 'length' && (!('value' in d) || !d.writable)))
                            throw new TypeError('Native in/out arrays require writable data elements');
                    }
                }
                const response = call(() => item.static ? (item.extension_factory ? native[item.export](values, invoke) : native[item.export](values)) : native[item.export](this[handle], values));
                if (item.inout) {
                    for (const index of item.inout) if (args[index] !== null) {
                        const updated = response.arguments[index];
                        for (let position = 0; position < updated.length; position++) args[index][position] = updated[position];
                    }
                    return wrap(response.result, item.result);
                }
                return wrap(response, item.result);
            }
        });
    }
    for (const name of ['Expression', 'Argument', 'Function']) {
        for (const [method, element] of [['removeArguments', 'Argument'], ['removeConstants', 'Constant'], ['removeFunctions', 'Function']]) {
            const original = classes[name].prototype[method];
            Object.defineProperty(classes[name].prototype, method, {
                configurable: true, value: function (...args) {
                    if (this.isDeleted()) throw new TypeError(`Cannot use a deleted ${name} handle`);
                    if (!args.length) return;
                    // A scalar text name uses the original scalar native overload.
                    if (args.length === 1) {
                        try {
                            return original.apply(this, args);
                        } catch (error) {
                            // Typed pointer/null and scalar-name overloads remain direct.
                            // Name arrays and mixed packs retain the native variadic contract.
                            if (!(error instanceof TypeError) || !Array.isArray(args[0])) throw error;
                        }
                    }
                    const values = flat(args).map(value => typeof value === 'string' ? unwrap(value, string) : unwrap(value, {
                        kind: 'handle',
                        name: element,
                        nullable: true
                    }));
                    return call(() => native[`pack_${name}_${method}`](this[handle], values));
                }
            });
        }
    }
    const processorInputToken = Symbol('native processor input');

    class ProcessorInput {
        constructor(token, kind, value) {
            if (token !== processorInputToken) throw new TypeError('Use processorInput');
            this.kind = kind;
            this.value = value;
            Object.freeze(this);
        }
    }

    mx.processorInput = function (kind, value) {
        const descriptor = catalog.processor_inputs[kind];
        if (!Object.hasOwn(catalog.processor_inputs, kind)) throw new TypeError('Unknown native processor input type');
        unwrap(value, descriptor);
        return new ProcessorInput(processorInputToken, kind, value);
    };

    function processorTransport(value, retain) {
        let kind;
        if (value instanceof ProcessorInput) {
            kind = value.kind;
            value = value.value;
        } else if (value instanceof Int32Value) {
            kind = 'int';
            value = value.value;
        } else if (typeof value === 'number') kind = 'double';
        else if (typeof value === 'string') kind = 'StringPtr';
        else if (value instanceof NativeListHandle) {
            const descriptor = value[elementDescriptor];
            const tag = descriptor.kind === 'handle' ? descriptor.name + 'Ptr' : descriptor.kind === 'string' ? 'StringPtr' : descriptor.kind === 'int' ? 'int' : descriptor.kind === 'number' ? 'double' : null;
            if (tag) kind = 'List<' + tag + '>';
        } else for (const name of ['RecursiveArgument', 'Argument', 'Function', 'Constant', 'Expression', 'PrimitiveElement']) if (value instanceof classes[name]) {
            kind = name + 'Ptr';
            break;
        }
        if (!kind || !Object.hasOwn(catalog.processor_inputs, kind)) throw new TypeError('Ambiguous or unsupported native processor input; use processorInput');
        // Array.map's numeric index is deliberately ignored by ordinary processor
        // calls. Only the numeric-pack bridge supplies this per-call alias holder.
        if (typeof retain === 'function') {
            if (value instanceof NativeHandle) value = retain(value);
            else if (Array.isArray(value)) value = value.map(item => item instanceof NativeHandle ? retain(item) : item);
        }
        return [kind, unwrap(value, catalog.processor_inputs[kind])];
    }

    for (const [name, cleanup] of [['processArgs', true], ['processTuple', false]]) Object.defineProperty(classes.VariadicProcessor.prototype, name, {
        value: function (...values) {
            if (this.isDeleted()) throw new TypeError('Cannot use a deleted processor');
            if (name === 'processTuple') {
                if (values.length !== 1 || !Array.isArray(values[0])) throw new TypeError('processTuple requires one argument tuple array');
                values = values[0];
            }
            return call(() => native.processor_pack(this[handle], values.map(processorTransport), cleanup));
        }
    });
    Object.defineProperty(classes.VariadicProcessor.prototype, 'processElement', {
        value: function (value) {
            if (this.isDeleted()) throw new TypeError('Cannot use a deleted processor');
            return call(() => native.processor_element(this[handle], processorTransport(value)));
        }
    });
    if (catalog.native_locale) Object.defineProperty(classes.StdLocale.prototype, 'name', {
        value: function (...args) {
            if (args.length || this.isDeleted()) throw new TypeError('StdLocale.name requires a live native locale and no arguments');
            return call(() => native.native_stdLocale_name(this[handle]));
        }
    });
    if (catalog.std_string_factories) mx.new_StdString = function (...args) {
        if (!args.length) return call(() => native.factory_StdString(0, []));
        if (args.length !== 1) throw new TypeError('new_StdString takes zero or one native byte value/C-string');
        const value = args[0];
        if (value instanceof Uint8Array) return call(() => native.factory_StdString(1, [binaryBytes(value)]));
        if (typeof value === 'string') return call(() => native.factory_StdString(2, [value]));
        if (value instanceof CStringValue && value.kind === 'char') {
            const pointer = unwrap(value, {kind: 'cstring', native: 'char'});
            if (pointer === null) throw new TypeError('Native std::string C-pointer construction requires non-null data');
            return call(() => native.factory_StdString(2, [pointer]));
        }
        throw new TypeError('Expected Uint8Array, native narrow C-string, or string literal');
    };
    if (catalog.native_string_stream) {
        mx.new_StringStream = function (...args) {
            if (args.length) throw new TypeError('new_StringStream requires zero arguments');
            return new classes.StdStringStream();
        };
        Object.defineProperty(classes.StdStringStream.prototype, 'str', {
            value: function (...args) {
                if (this.isDeleted() || args.length > 1) throw new TypeError('Native string stream str requires a live stream and zero or one byte value');
                if (args.length) args = [binaryBytes(args[0])];
                return call(() => native.native_stringStream_str(this[handle], args));
            }
        });
    }
    const calculate = classes.Function.prototype.calculate;
    // JS null cannot carry the C++ overload's pointer type. Null denotes the
    // parameter-list overload; omitting the argument denotes the null steps
    // register, which the original no-argument C++ overload already forwards.
    const nullParameters = catalog.emitted.find(item => item.owner === 'Function' && item.name === 'calculate'
        && item.parameters.length === 1 && item.parameters[0].kind === 'array' && item.parameters[0].element.kind === 'number');
    Object.defineProperty(classes.Function.prototype, 'calculate', {
        value: function (...args) {
            managedGuard('Function', 'calculate', false, args);
            if (args.length === 1 && args[0] === null) {
                if (this.isDeleted()) throw new TypeError('Cannot use a deleted Function handle');
                return call(() => native[nullParameters.export](this[handle], [null]));
            }
            if (!args.length || (args.length === 1 && (args[0] === null || args[0] instanceof classes.CalcStepsRegister || (args[0] instanceof NativeListHandle && args[0][elementDescriptor].kind === 'number')))) return calculate.apply(this, args);
            const values = flat(args).map(value => {
                if (value instanceof NativeListHandle) {
                    const type = value[elementDescriptor];
                    if (!['number', 'int'].includes(type.kind) && !(type.kind === 'handle' && ['PrimitiveElement', 'Argument', 'RecursiveArgument', 'Constant', 'Function', 'Expression'].includes(type.name))) throw new TypeError('Unsupported calculation collection');
                    return unwrap(value, {kind: 'list', element: type});
                }
                return typeof value === 'number' ? unwrap(value, double) : unwrap(value, definition);
            });
            return call(() => native.function_calculateParameters(this[handle], values));
        }
    });
    for (const [owner, value] of Object.entries(owners)) if (owner) expose(owner, value);
    expose('wrapper::Array', NativeArray);
    expose('wrapper::PtrsMap', NativePtrsMap);
    expose('wrapper::PtrsSet', NativePtrsSet);
    mx.wrapper.new_PtrsMap = mx.new_PtrsMap;
    mx.wrapper.new_PtrsSet = mx.new_PtrsSet;
    mx.wrapper.new_Array = mx.new_Array;
    mx.wrapper.new_Stack = mx.new_Stack;
    mx.wrapper.new_ListInt = mx.new_ListInt;
    for (const name of Object.keys(catalog.array_aliases)) mx.wrapper[name] = mx[name];
    expose('miscellaneous::ElementAtTheEnd', ElementAtTheEnd);
    mx.miscellaneous.new_ElementAtTheEnd = mx.new_ElementAtTheEnd;
    const serializationRoots = catalog.serialization_roots;

    function internalRootType(value) {
        if (value === null) return 0;
        if (value instanceof NativeVectorHandle) {
            const result = serializationRoots.findIndex(item => item.descriptor.kind === 'vector' && item.descriptor.tag === value[vectorKind]);
            if (result >= 0) return result;
        }
        if (value instanceof NativeListHandle) {
            const descriptor = value[elementDescriptor];
            const result = serializationRoots.findIndex(item => item.descriptor.kind === 'list' && item.descriptor.element.kind === descriptor.kind && item.descriptor.element.name === descriptor.name);
            if (result >= 0) return result;
        }
        for (const name of ['RecursiveArgument', ...serializationRoots.filter(item => item.descriptor.kind === 'handle' && item.name !== 'RecursiveArgument' && item.name !== 'PrimitiveElement').map(item => item.name), 'PrimitiveElement']) {
            if (value instanceof classes[name]) return serializationRoots.findIndex(item => item.name === name);
        }
        throw new TypeError('This object has no native serializable root type');
    }

    function internalSelectedType(selector) {
        const result = serializationRoots.findIndex(item => (item.descriptor.kind === 'list' || item.descriptor.kind === 'vector') ? selector === item.name : selector === classes[item.name]);
        if (result < 0) throw new TypeError('Select a serializable constructor from this initialized module or a supported List<T> type');
        return result;
    }

    function checkedPublicRoot(index) {
        if (!managedProfile.allowed_serialization_roots.includes(serializationRoots[index].name)) throw new TypeError('Root type is outside the public Java/C# package profile');
        return index;
    }

    function rootType(value) {
        return checkedPublicRoot(internalRootType(value));
    }

    function selectedType(selector) {
        return checkedPublicRoot(internalSelectedType(selector));
    }

    function binaryBytes(data) {
        if (data === null) return null;
        if (data instanceof NativeVectorHandle && data[vectorKind] === 'char') {
            if (data.isDeleted()) throw new TypeError('Cannot use a deleted native byte vector');
            return data[handle];
        }
        if (!(data instanceof Uint8Array) || data.length > 2147483647) throw new TypeError('Binary data must be a Uint8Array or null');
        return new Uint8Array(data);
    }

    function stringBytes(data) {
        if (catalog.std_string_factories && data instanceof Uint8Array) return binaryBytes(data);
        if (data === null) return null;
        if (typeof data !== 'string') throw new TypeError('Binary string data must be a string or null');
        const bytes = new Uint8Array(data.length);
        for (let index = 0; index < data.length; index++) {
            const code = data.charCodeAt(index);
            if (code > 255) throw new TypeError('A native binary string contains only code units 0..255');
            bytes[index] = code;
        }
        return bytes;
    }

    function binaryString(bytes) {
        if (bytes === null) return null;
        let value = '';
        for (let offset = 0; offset < bytes.length; offset += 8192) value += String.fromCharCode(...bytes.subarray(offset, offset + 8192));
        return value;
    }

    function nativePath(value) {
        return catalog.std_string_factories && value instanceof Uint8Array ? binaryBytes(value) : unwrap(value, string);
    }

    function serializeObject(object, format, path = null, selector = undefined) {
        const type = selector === undefined ? rootType(object) : selectedType(selector),
            descriptor = serializationRoots[type].descriptor;
        // A root is a native shared object, never an implicitly copied JS array.
        if (descriptor.kind === 'list' && object !== null && !(object instanceof NativeListHandle)) throw new TypeError('A serializable List<T> root requires a native list');
        if (descriptor.kind === 'vector' && object !== null && !(object instanceof NativeVectorHandle)) throw new TypeError('A serializable Vector<T> root requires a native vector');
        const value = unwrap(object, descriptor);
        const output = call(() => native.serialize_root(type, format, value, nativePath(path)));
        return format === 1 ? binaryString(output) : output;
    }

    function deserializeObject(data, selector, format) {
        const type = selectedType(selector);
        const source = format === 2 ? nativePath(data) : format === 1 ? stringBytes(data) : binaryBytes(data);
        return wrap(call(() => native.deserialize_root(type, format, source)), serializationRoots[type].descriptor);
    }

    function serializationMethod(min, max, operation) {
        return (...args) => {
            if (args.length < min || args.length > max) throw new TypeError(`Serialization method requires ${min}${min === max ? '' : ` to ${max}`} parameters`);
            if (args.length > min && !serializationRoots.some(item => (item.descriptor.kind === 'list' || item.descriptor.kind === 'vector') ? args.at(-1) === item.name : args.at(-1) === classes[item.name])) throw new TypeError(`Serialization method requires ${min} parameters or a supported native root type selector`);
            return operation(...args);
        };
    }

    Object.assign(mx.SerializationUtils, {
        serializeToBytes: serializationMethod(1, 2, (object, type) => serializeObject(object, 0, null, type)),
        serializeToString: serializationMethod(1, 2, (object, type) => serializeObject(object, 1, null, type)),
        serializeToFile: serializationMethod(2, 3, (object, path, type) => serializeObject(object, 2, path, type)),
        deserializeFromBytes: serializationMethod(2, 2, (data, type) => deserializeObject(data, type, 0)),
        deserializeFromString: serializationMethod(2, 2, (data, type) => deserializeObject(data, type, 1)),
        deserializeFromFile: serializationMethod(2, 2, (path, type) => deserializeObject(path, type, 2))
    });
    mx.ArgumentExtension = class ArgumentExtension {
        constructor() {
            if (new.target === mx.ArgumentExtension) throw new TypeError('ArgumentExtension is abstract');
        }

        getArgumentValue() {
            throw new TypeError('Implement getArgumentValue()');
        }

        clone() {
            throw new TypeError('Implement clone()');
        }
    };
    mx.FunctionExtension = class FunctionExtension {
        constructor() {
            if (new.target === mx.FunctionExtension) throw new TypeError('FunctionExtension is abstract');
        }

        getParametersNumber() {
            throw new TypeError('Implement getParametersNumber()');
        }

        setParameterValue() {
            throw new TypeError('Implement setParameterValue()');
        }

        getParameterName() {
            throw new TypeError('Implement getParameterName()');
        }

        calculate() {
            throw new TypeError('Implement calculate()');
        }

        clone() {
            throw new TypeError('Implement clone()');
        }
    };
    mx.FunctionExtensionVariadic = class FunctionExtensionVariadic {
        constructor() {
            if (new.target === mx.FunctionExtensionVariadic) throw new TypeError('FunctionExtensionVariadic is abstract');
        }

        calculate() {
            throw new TypeError('Implement calculate(parameters)');
        }

        clone() {
            throw new TypeError('Implement clone()');
        }
    };
    for (const name of ['ArgumentExtension', 'FunctionExtension', 'FunctionExtensionVariadic'])
        Object.defineProperty(mx[name], 'NULL', {value: Object.freeze({[nullExtensionKind]: name})});
    for (const item of catalog.enums ?? []) Object.freeze(owners[item.owner]);
    for (const owner of Object.keys(catalog.native_copy_move ?? {})) {
        const type = {kind: 'handle', name: owner, nullable: false};
        for (const operation of ['copyConstruct', 'moveConstruct']) Object.defineProperty(classes[owner], operation, {
            value: function (...args) {
                if (args.length !== 1) throw new TypeError(`${owner}.${operation} requires one native source`);
                const source = unwrap(args[0], type);
                return wrap(call(() => native['native_' + owner + '_' + operation]([source])), type);
            }
        });
        for (const operation of ['copyAssign', 'moveAssign']) Object.defineProperty(classes[owner].prototype, operation, {
            value: function (...args) {
                if (args.length !== 1) throw new TypeError(`${owner}.${operation} requires one native source`);
                const target = unwrap(this, type), source = unwrap(args[0], type);
                call(() => native['native_' + owner + '_' + operation](target, [source]));
                return this;
            }
        });
    }
    if (catalog.reader_buffer_read) Object.defineProperty(classes.ReaderStream.prototype, 'read', {
        value: function (...args) {
            if (args.length !== 3) throw new TypeError('ReaderStream.read requires buffer, offset and length');
            const self = unwrap(this, {kind: 'handle', name: 'ReaderStream', nullable: false}), buffer = args[0];
            if (buffer !== null && !(buffer instanceof Uint32Array)) throw new TypeError('Native ReaderStream buffer must be Uint32Array or null');
            const offset = unwrap(args[1] instanceof Int32Value ? args[1].value : args[1], {
                kind: 'int',
                native: 'int'
            }), length = unwrap(args[2], {kind: 'int', native: 'size_t'});
            return call(() => native.native_ReaderStream_read(self, buffer, offset, length));
        }
    });

    function throwLexerStateFailure(failure) {
        if (failure === null) return;
        const error = new Error(failure.message);
        error.name = 'TokenMgrError';
        error.errorCode = failure.errorCode;
        error.nativeMessageCodeUnits = Object.freeze(failure.messageCodeUnits);
        throw error;
    }

    if (catalog.syntax_lexer_state) Object.defineProperty(classes.SyntaxCheckerTokenManager.prototype, 'SwitchTo', {
        value: function (...args) {
            if (args.length !== 1) throw new TypeError('SyntaxCheckerTokenManager.SwitchTo requires one lexical state');
            const self = unwrap(this, {kind: 'handle', name: 'SyntaxCheckerTokenManager', nullable: false}),
                state = unwrap(args[0] instanceof Int32Value ? args[0].value : args[0], {kind: 'int', native: 'int'});
            throwLexerStateFailure(call(() => native.native_SyntaxCheckerTokenManager_SwitchTo(self, state)));
        }
    });
    for (const [owner, item] of Object.entries(catalog.syntax_reinit ?? {})) Object.defineProperty(classes[owner].prototype, 'ReInit', {
        value: function (...args) {
            const manager = owner === 'SyntaxCheckerTokenManager';
            if (args.length < 1 || args.length > (manager ? 2 : 1)) throw new TypeError(`${owner}.ReInit requires ${manager ? 'one or two' : 'one'} parameters`);
            const self = unwrap(this, {kind: 'handle', name: owner, nullable: false}),
                dependency = unwrap(args[0], {kind: 'handle', name: item.dependency, nullable: true});
            if (!manager) {
                call(() => native.native_SyntaxChecker_ReInit(self, dependency));
                return;
            }
            const state = args.length === 2 ? unwrap(args[1], {kind: 'int', native: 'int'}) : 0;
            const failure = call(() => native.native_SyntaxCheckerTokenManager_ReInit(self, dependency, state));
            if (failure !== null) {
                const error = new Error(failure.message);
                error.name = 'TokenMgrError';
                error.errorCode = failure.errorCode;
                error.nativeMessageCodeUnits = Object.freeze(failure.messageCodeUnits);
                throw error;
            }
        }
    });
    Object.defineProperty(classes["Token"].prototype, "isUnaryLeftOperator", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_05858"]([unwrap(this, {
                kind: 'handle',
                name: "Token",
                nullable: false
            })])), {"kind": "boolean"});
        }
    });
    Object.defineProperty(classes["Token"].prototype, "isUnaryRightOperator", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_05859"]([unwrap(this, {
                kind: 'handle',
                name: "Token",
                nullable: false
            })])), {"kind": "boolean"});
        }
    });
    Object.defineProperty(classes["Token"].prototype, "isLeftParenthesis", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_05860"]([unwrap(this, {
                kind: 'handle',
                name: "Token",
                nullable: false
            })])), {"kind": "boolean"});
        }
    });
    Object.defineProperty(classes["Token"].prototype, "isRightParenthesis", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_05861"]([unwrap(this, {
                kind: 'handle',
                name: "Token",
                nullable: false
            })])), {"kind": "boolean"});
        }
    });
    Object.defineProperty(classes["Token"].prototype, "isIdentifier", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_05862"]([unwrap(this, {
                kind: 'handle',
                name: "Token",
                nullable: false
            })])), {"kind": "boolean"});
        }
    });
    Object.defineProperty(classes["Token"].prototype, "isBinaryOperator", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_05863"]([unwrap(this, {
                kind: 'handle',
                name: "Token",
                nullable: false
            })])), {"kind": "boolean"});
        }
    });
    Object.defineProperty(classes["Token"].prototype, "isParameterSeparator", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_05864"]([unwrap(this, {
                kind: 'handle',
                name: "Token",
                nullable: false
            })])), {"kind": "boolean"});
        }
    });
    Object.defineProperty(classes["Token"].prototype, "isNumber", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_05865"]([unwrap(this, {
                kind: 'handle',
                name: "Token",
                nullable: false
            })])), {"kind": "boolean"});
        }
    });
    Object.defineProperty(classes["Token"].prototype, "isSpecialTokenName", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_05866"]([unwrap(this, {
                kind: 'handle',
                name: "Token",
                nullable: false
            })])), {"kind": "boolean"});
        }
    });
    Object.defineProperty(classes["Token"].prototype, "isUnicodeRootOperator", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_05867"]([unwrap(this, {
                kind: 'handle',
                name: "Token",
                nullable: false
            })])), {"kind": "boolean"});
        }
    });
    Object.defineProperty(classes["Token"].prototype, "clone", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_05868"]([unwrap(this, {
                kind: 'handle',
                name: "Token",
                nullable: false
            })])), {"kind": "handle", "name": "Token", "nullable": true});
        }
    });
    Object.defineProperty(classes["JavaCCToken"].prototype, "getValue", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => (unwrap(this, {
                kind: 'handle',
                name: "JavaCCToken",
                nullable: false
            }), native["api_C1_06494"]([]))), {"kind": "null_pointer"});
        }
    });
    Object.defineProperty(classes["CharStream"].prototype, "getTabSize", {
        value: function (...args) {
            if (args.length) throw new TypeError("Managed instance accessor takes no arguments");
            return wrap(call(() => native["api_C1_06389"](unwrap(this, {
                kind: 'handle',
                name: "CharStream",
                nullable: false
            }), [0])), {"kind": "int", "native": "int"});
        }
    });
    const publicPaths = new Set(managedProfile.infrastructure_roots);
    for (const owner of managedProfile.visible_owners) {
        const parts = owner.split('::');
        for (let i = 1; i <= parts.length; i++) publicPaths.add(parts.slice(0, i).join('::'));
        publicPaths.add(parts.at(-1));
    }
    for (const item of catalog.emitted) if (item.static) {
        publicPaths.add(item.owner + '::' + item.name);
        publicPaths.add(item.owner.split('::').at(-1) + '::' + item.name);
    }
    for (const key of Object.keys(managedProfile.signatures)) {
        const [owner, name] = key.split('|');
        if (managedProfile.visible_owners.includes(owner)) {
            publicPaths.add(owner + '::' + name);
            publicPaths.add(owner.split('::').at(-1) + '::' + name);
        }
    }

    function restrictPublicNamespace(scope, prefix) {
        for (const key of Object.keys(scope)) {
            const path = prefix + '::' + key;
            if (!publicPaths.has(path)) {
                delete scope[key];
                continue;
            }
            // Inspect namespaces without invoking native accessors or creating handles.
            const descriptor = Object.getOwnPropertyDescriptor(scope, key), value = descriptor.value;
            if (value && typeof value === 'object' && !Array.isArray(value)) restrictPublicNamespace(value, path);
        }
    }

    const publicMx = Object.create(null);
    for (const key of Object.keys(mx)) if (publicPaths.has(key)) {
        const descriptor = Object.getOwnPropertyDescriptor(mx, key), value = descriptor.value;
        if (value && typeof value === 'object' && !Array.isArray(value) && key !== 'FS' && key !== 'LongDouble') restrictPublicNamespace(value, key);
        Object.defineProperty(publicMx, key, descriptor);
    }
    return publicMx;
}
