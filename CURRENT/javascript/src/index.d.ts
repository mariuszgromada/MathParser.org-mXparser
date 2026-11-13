/*
 * @(#)index.d.ts        6.2.0    2026-11-13
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

// Maintained public-profile declarations; see docs/MAINTENANCE.md and runtime tests.
declare const cstringValueMarker: unique symbol;
declare const int32ValueMarker: unique symbol;

/**
 * Immutable selector for a signed 32-bit native overload; created by mx.int32().
 */
export interface Int32Value {
    readonly [int32ValueMarker]: true;
    readonly value: number;
}

declare const nativeLongDoubleMarker: unique symbol;

/** Immutable binary128 value. bits is its unsigned raw representation, not a numeric integer value. */
export interface LongDouble {
    readonly [nativeLongDoubleMarker]: true;
    readonly bits: bigint;
}

declare const nativeHandleMarker: unique symbol;

/**
 * Owning Embind handle to a native C++ object. Release each handle with delete(); cloneHandle() retains an
 * alias, while native clone methods copy objects.
 * @version 6.2.0
 */
declare class NativeHandleBase {
    protected constructor();

    private readonly __nativeHandleBrand: never;
    readonly [nativeHandleMarker]: true;

    /**
     * Releases this handle's native ownership. Other owners may keep the object alive.
     */
    delete(): void;

    /**
     * Checks whether this handle has been released.
     * @returns Whether this handle has been deleted.
     */
    isDeleted(): boolean;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): NativeHandleBase;

    /**
     * Compares native object identity rather than JavaScript wrapper identity.
     * @param other - Handle to compare.
     * @returns Whether both handles refer to the same native object.
     * @throws {TypeError} If either handle has been deleted.
     */
    isAliasOf(other: NativeHandleBase): boolean;
}

export type NativeHandle = NativeHandleBase;
declare const processorInputMarker: unique symbol;
declare const nativeArrayPointerKindMarker: unique symbol;

export interface ReadonlyNativeArrayPointer<T, Kind extends string = string> extends NativeHandle {
    readonly [nativeArrayPointerKindMarker]: Kind;
    readonly isConst: boolean;

    /**
     * Reads the element at the current native pointer position.
     * @returns The current element.
     */
    get(): T;

    /**
     * Moves this native pointer by a signed element offset.
     * @param difference - Signed number of elements to advance.
     */
    advance(difference: number): void;

    /**
     * Compares positions in the same native array storage.
     * @param other - Handle to compare.
     * @returns Whether the pointer positions are equal.
     */
    equals(other: ReadonlyNativeArrayPointer<T, Kind>): boolean;

    /**
     * Copies the native pointer position into an independent pointer handle.
     * @returns A new pointer handle. Release it with delete().
     */
    copy(): ReadonlyNativeArrayPointer<T, Kind>;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): ReadonlyNativeArrayPointer<T, Kind>;
}

export interface NativeArrayPointer<T, Kind extends string = string> extends ReadonlyNativeArrayPointer<T, Kind> {
    /**
     * Writes the element at the current native pointer position.
     * @param value - Value to store.
     */
    set(value: T): void;

    /**
     * Copies the native pointer position into an independent pointer handle.
     * @returns A new pointer handle. Release it with delete().
     */
    copy(): NativeArrayPointer<T, Kind>;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): NativeArrayPointer<T, Kind>;
}

declare const nativeArrayKindMarker: unique symbol;
declare const nativeArrayDataKindMarker: unique symbol;

export interface NativeArrayData<T, Kind extends string = string> extends NativeHandle {
    readonly [nativeArrayDataKindMarker]: Kind;
    readonly size: number;

    /**
     * Reads an element from the native array storage.
     * @param index - Zero-based element index.
     * @returns The element at the requested position.
     */
    get(index: number): T;

    /**
     * Replaces an element in the native array storage.
     * @param index - Zero-based element index.
     * @param value - Value to store.
     */
    set(index: number, value: T): void;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): NativeArrayData<T, Kind>;
}

/**
 * Native C++ array storage and metadata. Handles returned for storage, pointers and object elements require
 * delete().
 */
export interface NativeArray<T, Kind extends string = string> extends NativeHandle {
    readonly [nativeArrayKindMarker]: Kind;
    rows: number;
    columns: number;
    length: number;
    sizet: number;
    data: NativeArrayData<T, Kind> | null;

    /**
     * Reads an element from the native array.
     * @param row - Zero-based row index.
     * @returns The element at the requested position.
     */
    get(row: number): T;

    /**
     * Reads an element from the native array.
     * @param row - Zero-based row index.
     * @param column - Zero-based column index.
     * @returns The element at the requested position.
     */
    get(row: number, column: number): T;

    /**
     * Replaces an element in the native array.
     * @param row - Zero-based row index.
     * @param value - Value to store.
     */
    set(row: number, value: T): void;

    /**
     * Replaces an element in the native array.
     * @param row - Zero-based row index.
     * @param column - Zero-based column index.
     * @param value - Value to store.
     */
    set(row: number, column: number, value: T): void;

    /**
     * Returns a native pointer to the first element.
     * @returns An owning pointer handle, or null for null storage. Release the handle with delete().
     */
    begin(): NativeArrayPointer<T, Kind> | null;

    /**
     * Returns a native pointer one past the final element; do not dereference it.
     * @returns An owning pointer handle, or null for null storage. Release the handle with delete().
     */
    end(): NativeArrayPointer<T, Kind> | null;

    /**
     * Returns a native pointer to the first element.
     * @param readOnly - Whether to return a read-only native pointer.
     * @returns An owning pointer handle, or null for null storage. Release the handle with delete().
     */
    begin(readOnly: false): NativeArrayPointer<T, Kind> | null;

    /**
     * Returns a native pointer one past the final element; do not dereference it.
     * @param readOnly - Whether to return a read-only native pointer.
     * @returns An owning pointer handle, or null for null storage. Release the handle with delete().
     */
    end(readOnly: false): NativeArrayPointer<T, Kind> | null;

    /**
     * Returns a native pointer to the first element.
     * @param readOnly - Whether to return a read-only native pointer.
     * @returns An owning pointer handle, or null for null storage. Release the handle with delete().
     */
    begin(readOnly: true): ReadonlyNativeArrayPointer<T, Kind> | null;

    /**
     * Returns a native pointer one past the final element; do not dereference it.
     * @param readOnly - Whether to return a read-only native pointer.
     * @returns An owning pointer handle, or null for null storage. Release the handle with delete().
     */
    end(readOnly: true): ReadonlyNativeArrayPointer<T, Kind> | null;

    /**
     * Returns a native pointer to the first element.
     * @param readOnly - Whether to return a read-only native pointer.
     * @returns An owning pointer handle, or null for null storage. Release the handle with delete().
     */
    begin(readOnly: boolean): ReadonlyNativeArrayPointer<T, Kind> | null;

    /**
     * Returns a native pointer one past the final element; do not dereference it.
     * @param readOnly - Whether to return a read-only native pointer.
     * @returns An owning pointer handle, or null for null storage. Release the handle with delete().
     */
    end(readOnly: boolean): ReadonlyNativeArrayPointer<T, Kind> | null;

    /**
     * Iterates over the native elements.
     * @returns An iterator; release each yielded native handle when finished.
     */
    [Symbol.iterator](): IterableIterator<T>;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): NativeArray<T, Kind>;
}

declare const elementAtEndKindMarker: unique symbol;

export interface IRandomImplementation {
    readonly [nativeHandleMarker]?: never;

    /**
     * Generates a native integer in [0, abs(bound)).
     * @param bound - Nonzero signed 64-bit bound whose absolute value is representable.
     * @returns The generated integer as bigint.
     */
    nextInt(bound: bigint): bigint;

    /**
     * Generates a random number in [0, 1).
     * @returns The generated number.
     */
    nextDouble(): number;

    /**
     * Sets the native random generator seed.
     * @param seed - Unsigned 32-bit seed.
     */
    setSeed(seed: number): void;
}

export interface NativeFixedArray<T> extends NativeHandle, Iterable<T> {
    readonly length: number;

    /**
     * Reads an element from the native array.
     * @param index - Zero-based element index.
     * @returns The element at the requested position.
     */
    get(index: number): T;

    /**
     * Replaces an element in the native array.
     * @param index - Zero-based element index.
     * @param element - Element to store or compare.
     */
    set(index: number, element: T): void;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): NativeFixedArray<T>;

    /**
     * Iterates over the native elements.
     * @returns An iterator; release each yielded native handle when finished.
     */
    [Symbol.iterator](): IterableIterator<T>;
}

declare const nativeListElementKind: unique symbol;
export type NativeListPointerComparableKind =
    "ArgumentPtr"
    | "CalcStepRecordPtr"
    | "ConstantPtr"
    | "ExpressionPtr"
    | "FunctionPtr"
    | "PrimitiveElementPtr"
    | "RecursiveArgumentPtr"
    | "StringPtr";

/**
 * Native C++ list. Object elements returned by accessors or iteration are separate handles and require
 * delete().
 */
export interface NativeList<T, Kind extends string = string> extends NativeHandle, Iterable<T> {
    readonly [nativeListElementKind]: Kind;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): NativeList<T, Kind>;

    readonly length: number;

    /**
     * Returns the number of native list elements.
     * @returns The element count.
     */
    size(): number;

    /**
     * Checks whether the native list has no elements.
     * @returns Whether the list is empty.
     */
    isEmpty(): boolean;

    /**
     * Reads an element from the native list.
     * @param index - Zero-based element index.
     * @returns The element at index.
     * @throws {RangeError} If the index or range is outside the native list.
     */
    get(index: number): T;

    /**
     * Reads an element through the native list reference accessor.
     * @param index - Zero-based element index.
     * @returns The element at index.
     * @throws {RangeError} If the index or range is outside the native list.
     */
    getRef(index: number): T;

    /**
     * Reads the last native list element without removing it.
     * @returns The last element.
     * @throws {RangeError} If the index or range is outside the native list.
     */
    top(): T;

    /**
     * Reads the last element through the native reference accessor.
     * @returns The last element.
     * @throws {RangeError} If the index or range is outside the native list.
     */
    topRef(): T;

    /**
     * Appends an element to the native list.
     * @param element - Element to store or compare.
     */
    add(element: T): void;

    /**
     * Inserts an element at index.
     * @param index - Zero-based element index.
     * @param element - Element to store or compare.
     * @throws {RangeError} If the index or range is outside the native list.
     */
    add(index: number, element: T): void;

    /**
     * Appends an element to the native list.
     * @param element - Element to store or compare.
     */
    push(element: T): void;

    /**
     * Appends all supplied elements to the native list.
     * @param elements - Elements to append.
     */
    addAll(elements: NativeList<T, Kind> | readonly T[]): void;

    /**
     * Replaces the element at index.
     * @param index - Zero-based element index.
     * @param element - Element to store or compare.
     * @throws {RangeError} If the index or range is outside the native list.
     */
    set(index: number, element: T): void;

    /**
     * Checks for an element using native equality.
     * @param element - Element to store or compare.
     * @returns Whether the native list contains the element.
     */
    contains(element: T): boolean;

    /**
     * Reads an element through the native subscript accessor.
     * @param index - Zero-based element index.
     * @returns The element at index.
     * @throws {RangeError} If the index or range is outside the native list.
     */
    getAt(index: number): T;

    /**
     * Replaces the element through the native subscript accessor.
     * @param index - Zero-based element index.
     * @param element - Element to store or compare.
     * @throws {RangeError} If the index or range is outside the native list.
     */
    setAt(index: number, element: T): void;

    /**
     * Checks for an element using native pointer-dereference equality.
     * @param element - Element to store or compare.
     * @returns Whether a pointed-to value compares equal.
     */
    containsByPtrDeref(this: Kind extends NativeListPointerComparableKind ? NativeList<T, Kind> : never, element: T): boolean;

    /**
     * Removes the first matching element using native pointer-dereference equality.
     * @param element - Element to store or compare.
     */
    removeByPtrDeref(this: Kind extends NativeListPointerComparableKind ? NativeList<T, Kind> : never, element: T): void;

    /**
     * Removes the element at index. A numeric argument always selects index removal.
     * @param index - Zero-based element index.
     * @throws {RangeError} If the index or range is outside the native list.
     */
    remove(index: number): void;

    /**
     * Removes the first matching element by native value. Use removeValue() for numeric values.
     * @param element - Element to store or compare.
     */
    remove(element: T): void;

    /**
     * Removes the first matching element by native value, including numeric values.
     * @param element - Element to store or compare.
     */
    removeValue(element: T): void;

    /**
     * Removes the last element without returning it.
     * @throws {RangeError} If the index or range is outside the native list.
     */
    pop(): void;

    /**
     * Removes the half-open range [startInclusive, endExclusive).
     * @param startInclusive - First index to remove, inclusive.
     * @param endExclusive - First index to retain after the removed range.
     * @throws {RangeError} If the index or range is outside the native list.
     */
    clearSubList(startInclusive: number, endExclusive: number): void;

    /**
     * Removes all elements from the native list.
     */
    clear(): void;

    /**
     * Iterates over native list elements.
     * @returns An iterator; release each yielded native handle when finished.
     */
    [Symbol.iterator](): IterableIterator<T>;
}

export type Definition = Argument | Constant | Function;
export type DefinitionCollection =
    NativeList<PrimitiveElement | null, "PrimitiveElementPtr">
    | NativeList<Argument | null, "ArgumentPtr">
    | NativeList<RecursiveArgument | null, "RecursiveArgumentPtr">
    | NativeList<Constant | null, "ConstantPtr">
    | NativeList<Function | null, "FunctionPtr">;
export type DefinitionInput =
    Definition
    | null
    | DefinitionCollection
    | readonly (Definition | null | DefinitionCollection)[];
export type SerializableObject =
    Expression
    | Argument
    | Constant
    | Function
    | RecursiveArgument
    | CalcStepsRegister
    | CalcStepRecord
    | Token
    | KeyWord
    | PrimitiveElement;

export interface SerializableListTypes {
    "List<double>": NativeList<number, "double">;
    "List<int>": NativeList<number, "int">;
    "List<Long>": NativeList<bigint, "Long">;
    "List<StringPtr>": NativeList<string | null, "StringPtr">;
    "List<ArgumentPtr>": NativeList<Argument | null, "ArgumentPtr">;
    "List<ConstantPtr>": NativeList<Constant | null, "ConstantPtr">;
    "List<FunctionPtr>": NativeList<Function | null, "FunctionPtr">;
    "List<ExpressionPtr>": NativeList<Expression | null, "ExpressionPtr">;
    "List<PrimitiveElementPtr>": NativeList<PrimitiveElement | null, "PrimitiveElementPtr">;
    "List<CalcStepRecordPtr>": NativeList<CalcStepRecord | null, "CalcStepRecordPtr">;
    "List<TokenPtr>": NativeList<Token | null, "TokenPtr">;
    "List<KeyWordPtr>": NativeList<KeyWord | null, "KeyWordPtr">;
    "List<RecursiveArgumentPtr>": NativeList<RecursiveArgument | null, "RecursiveArgumentPtr">;
}

export type Serializable =
    SerializableObject
    | SerializableListTypes[keyof SerializableListTypes]
    | SerializableVectorTypes[keyof SerializableVectorTypes];
export type SerializationType<T extends Serializable> =
    (ExpressionConstructor | ArgumentConstructor | ConstantConstructor | FunctionConstructor | RecursiveArgumentConstructor | CalcStepsRegisterConstructor | CalcStepRecordConstructor | TokenConstructor | KeyWordConstructor | PrimitiveElementConstructor)
    & {
    readonly prototype: T;
};
declare const nullExtensionType: unique symbol;

export interface NullExtension<Kind extends string> {
    readonly [nullExtensionType]: Kind;
}

/**
 * Base for synchronous user-defined argument callbacks. Implement getArgumentValue() and clone().
 * @version 6.2.0
 */
declare abstract class ArgumentExtensionBase {
    readonly [nativeHandleMarker]?: never;
    static readonly NULL: NullExtension<"ArgumentExtension">;

    /**
     * Actual algorithm implementation.
     * @returns Argument Extension value.
     */
    abstract getArgumentValue(): number;

    /**
     * Cloning in case of usage in Expression with recursive statements.
     *
     * Return a synchronous implementation of the same extension interface.
     * @returns Returns ArgumentExtension object that was cloned.
     * @see {@link Expression.getRecursiveMode}
     */
    abstract clone(): ArgumentExtensionBase;
}

/**
 * Base for synchronous fixed-arity function callbacks. Implement the native parameter, calculation and clone
 * methods.
 * @version 6.2.0
 */
declare abstract class FunctionExtensionBase {
    readonly [nativeHandleMarker]?: never;
    static readonly NULL: NullExtension<"FunctionExtension">;

    /**
     * Gets parameters number.
     * @returns Returns parameters number.
     */
    abstract getParametersNumber(): number;

    /**
     * Sets value of function parameter
     * @param index - - parameter index (from 0 to n-1)
     * @param value - - parameter value
     */
    abstract setParameterValue(index: number, value: number): void;

    /**
     * Gets parameter name
     * @param index - - parameter index (from 0 to n-1)
     * @returns Returns parameter name
     */
    abstract getParameterName(index: number): string | null;

    /**
     * Actual algorithm implementation.
     * @returns Function Extension value.
     */
    abstract calculate(): number;

    /**
     * Cloning in case of usage in Expression with recursive statements.
     *
     * Return a synchronous implementation of the same extension interface.
     * @returns Returns FunctionExtension object that was cloned.
     * @see {@link Expression.getRecursiveMode}
     */
    abstract clone(): FunctionExtensionBase;
}

/**
 * Base for synchronous variadic function callbacks. The parameter list is borrowed during calculate().
 * @version 6.2.0
 */
declare abstract class FunctionExtensionVariadicBase {
    readonly [nativeHandleMarker]?: never;
    static readonly NULL: NullExtension<"FunctionExtensionVariadic">;

    /**
     * Actual algorithm implementation.
     *
     * The parameter list is borrowed for this synchronous callback. Use cloneHandle() to retain an owned alias
     * beyond the callback; callbacks must not return promises.
     * @param parameters - Variadic list of parameters
     * @returns Function Extension value.
     */
    abstract calculate(parameters: NativeList<number, "double"> | null): number;

    /**
     * Cloning in case of usage in Expression with recursive statements.
     * @returns Returns FunctionExtension object that was cloned.
     * @see {@link Expression.getRecursiveMode}
     */
    abstract clone(): FunctionExtensionVariadicBase;
}

export type ArgumentExtension = ArgumentExtensionBase;
export type FunctionExtension = FunctionExtensionBase;
export type FunctionExtensionVariadic = FunctionExtensionVariadicBase;
declare const nativeVectorKind: unique symbol;

/**
 * Native C++ vector. Object elements returned by accessors or iteration are separate handles and require
 * delete().
 */
export interface NativeVector<T, Kind extends string = string> extends NativeHandle, Iterable<T> {
    readonly [nativeVectorKind]: Kind;
    readonly kind: Kind;
    readonly length: number;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): NativeVector<T, Kind>;

    /**
     * Returns the native vector element count.
     * @returns The number of elements.
     */
    size(): number;

    /**
     * Checks whether the native vector has no elements.
     * @returns Whether the vector is empty.
     */
    empty(): boolean;

    /**
     * Reads the native vector element at index.
     * @param index - Zero-based element index.
     * @returns The selected element.
     */
    at(index: number): T;

    /**
     * Reads the native vector element at index.
     * @param index - Zero-based element index.
     * @returns The selected element.
     */
    get(index: number): T;

    /**
     * Replaces the native vector element at index.
     * @param index - Zero-based element index.
     * @param value - Value to store.
     */
    set(index: number, value: T): void;

    /**
     * Appends an element to the native vector.
     * @param value - Value to store.
     */
    push_back(value: T): void;

    /**
     * Appends an element to the native vector.
     * @param value - Value to store.
     */
    push(value: T): void;

    /**
     * Removes the last native vector element.
     */
    pop_back(): void;

    /**
     * Removes the last native vector element.
     */
    pop(): void;

    /**
     * Reads the first native vector element.
     * @returns The first element.
     */
    front(): T;

    /**
     * Reads the last native vector element.
     * @returns The last element.
     */
    back(): T;

    /**
     * Changes the native vector size, retaining the common prefix.
     * @param size - Initial number of elements.
     */
    resize(size: number): void;

    /**
     * Removes all native vector elements.
     */
    clear(): void;

    /**
     * Copies the native char vector to JavaScript byte storage.
     * @returns A new Uint8Array containing the bytes.
     */
    toBytes(this: NativeVector<number, "char">): Uint8Array;
}

export interface NativeVectorTypes {
    "PrimitiveElementPtr": PrimitiveElement | null;
    "CalcStepRecordPtr": CalcStepRecord | null;
    "double": number;
    "int": number;
    "Long": bigint;
    "StringPtr": string | null;
    "ArgumentPtr": Argument | null;
    "ConstantPtr": Constant | null;
    "FunctionPtr": Function | null;
    "SpecialValuePtr": SpecialValue | null;
    "ExpressionPtr": Expression | null;
    "TokenPtr": Token | null;
    "KeyWordPtr": KeyWord | null;
    "RecursiveArgumentPtr": RecursiveArgument | null;
    "char": number;
    "Char": string;
}

export interface NativeVectorConstructor {
    readonly prototype: NativeVector<unknown>;

    /**
     * Creates a native vector.
     * @param kind - Native element kind.
     * @param size - Initial number of elements.
     * @returns A new owning native handle. Release it with delete().
     */
    new<K extends keyof NativeVectorTypes>(kind: K, size?: number): NativeVector<NativeVectorTypes[K], K>;

    /**
     * Copies byte data into a native char vector.
     * @param bytes - Byte data to copy.
     * @returns A new owning native vector handle. Release it with delete().
     */
    fromBytes(bytes: Uint8Array): NativeVector<number, "char">;
}

export interface SerializableVectorTypes {
    "Vector<PrimitiveElementPtr>": NativeVector<PrimitiveElement | null, "PrimitiveElementPtr">;
    "Vector<CalcStepRecordPtr>": NativeVector<CalcStepRecord | null, "CalcStepRecordPtr">;
    "Vector<double>": NativeVector<number, "double">;
    "Vector<int>": NativeVector<number, "int">;
    "Vector<Long>": NativeVector<bigint, "Long">;
    "Vector<StringPtr>": NativeVector<string | null, "StringPtr">;
    "Vector<ArgumentPtr>": NativeVector<Argument | null, "ArgumentPtr">;
    "Vector<ConstantPtr>": NativeVector<Constant | null, "ConstantPtr">;
    "Vector<FunctionPtr>": NativeVector<Function | null, "FunctionPtr">;
    "Vector<ExpressionPtr>": NativeVector<Expression | null, "ExpressionPtr">;
    "Vector<TokenPtr>": NativeVector<Token | null, "TokenPtr">;
    "Vector<KeyWordPtr>": NativeVector<KeyWord | null, "KeyWordPtr">;
    "Vector<RecursiveArgumentPtr>": NativeVector<RecursiveArgument | null, "RecursiveArgumentPtr">;
    "Vector<char>": NativeVector<number, "char">;
    "Vector<Char>": NativeVector<string, "Char">;
}

declare const nullNativeListType: unique symbol;
export type NullNativeListKind =
    "PrimitiveElementPtr"
    | "CalcStepRecordPtr"
    | "double"
    | "int"
    | "Long"
    | "StringPtr"
    | "ArgumentPtr"
    | "ConstantPtr"
    | "FunctionPtr"
    | "SpecialValuePtr"
    | "ExpressionPtr"
    | "TokenPtr"
    | "KeyWordPtr"
    | "RecursiveArgumentPtr";

export interface NullNativeList<Kind extends NullNativeListKind> {
    readonly [nullNativeListType]: Kind;
    readonly kind: Kind;
}

declare const stdLocaleTypeMarker: unique symbol;
declare const stdStringStreamTypeMarker: unique symbol;
declare const licenseInstanceTypeMarker: unique symbol;
declare const cloneCacheTypeMarker: unique symbol;

export interface NativeTokenSequences extends NativeHandle, Iterable<NativeFixedArray<number> | null> {
    readonly length: number;

    /**
     * Reads an element from the native array.
     * @param index - Zero-based element index.
     * @returns The element at the requested position, or null for a null row.
     */
    get(index: number): NativeFixedArray<number> | null;

    /**
     * Replaces an element in the native array.
     * @param index - Zero-based element index.
     * @param row - Row value or native row handle to store, or null.
     */
    set(index: number, row: NativeFixedArray<number> | ReadonlyArray<number> | null): void;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): NativeTokenSequences;
}

export type NativeStdioStream = "stdin" | "stdout" | "stderr";

export interface PrimitiveElement extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): PrimitiveElement;

    /**
     * Returns element type id
     * @returns Element type id as int Function.TYPE_ID, Argument.TYPE_ID, Function.TYPE_ID
     * @see {@link ArgumentConstructor.TYPE_ID}
     * @see {@link ConstantConstructor.TYPE_ID}
     * @see {@link FunctionConstructor.TYPE_ID}
     */
    "getMyTypeId"(): number;
}

export interface PrimitiveElementConstructor {
    readonly prototype: PrimitiveElement;
}

export interface Argument extends PrimitiveElement {

    /**
     * Gets argument value and registers all the calculation steps
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param calcStepsRegister - A collection to store list of calculation steps, steps registered as strings.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns direct argument value for free argument, otherwise returns calculated argument value based on
     *   the argument expression.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link Argument.getArgumentValue}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "getArgumentValueWithCancel"(calcStepsRegister: CalcStepsRegister | null, cancelId: number): number;

    /**
     * Gets argument value and registers all the calculation steps
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns direct argument value for free argument, otherwise returns calculated argument value based on
     *   the argument expression.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link Argument.getArgumentValue}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "getArgumentValueWithCancel"(cancelId: number): number;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): Argument;

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions) to the argument expressions.
     * @param p0 - Elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @see {@link PrimitiveElement}
     */
    "addDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions) to the argument expressions.
     * @param elements - Elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @see {@link PrimitiveElement}
     */
    "addDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions) to the argument expressions.
     * @param p0 - Elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @see {@link PrimitiveElement}
     */
    "addDefinitions"(p0: PrimitiveElement | null): void;

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions) from the argument expressions.
     * @param p0 - Elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @see {@link PrimitiveElement}
     */
    "removeDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions) from the argument expressions.
     * @param elements - Elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @see {@link PrimitiveElement}
     */
    "removeDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions) from the argument expressions.
     * @param p0 - Elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @see {@link PrimitiveElement}
     */
    "removeDefinitions"(p0: PrimitiveElement | null): void;

    /**
     * Adds arguments (variadic) to the argument expression definition.
     * @param p0 - the arguments list (comma separated list)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "addArguments"(p0: Array<Argument | null> | NativeList<Argument | null, "ArgumentPtr"> | NullNativeList<"ArgumentPtr"> | null): void;

    /**
     * Adds arguments (variadic) to the argument expression definition.
     * @param elements - the arguments list (comma separated list)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "addArguments"(...elements: (Argument | null | readonly (Argument | null)[])[]): void;

    /**
     * Adds arguments (variadic) to the argument expression definition.
     * @param p0 - the arguments list (comma separated list)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "addArguments"(p0: Argument | null): void;

    /**
     * Enables to define the arguments (associated with the argument expression) based on the given arguments
     * names.
     * @param p0 - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    /**
     * Enables to define the arguments (associated with the argument expression) based on the given arguments
     * names.
     * @param elements - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(...elements: (string | null | readonly (string | null)[])[]): void;

    /**
     * Enables to define the arguments (associated with the argument expression) based on the given arguments
     * names.
     * @param p0 - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(p0: string | null): void;

    /**
     * Enables to define the arguments (associated with the argument expression) based on the given arguments
     * names.
     * @param p0 - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(p0: string): void;

    /**
     * Gets number of arguments associated with the argument expression.
     * @returns The number of arguments (int >= 0)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgumentsNumber"(): number;

    /**
     * Gets argument index from the argument expression.
     * @param p0 - the argument name
     * @returns The argument index if the argument name was found, otherwise returns Argument.NOT_FOUND
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgumentIndex"(p0: string | null): number;

    /**
     * Gets argument index from the argument expression.
     * @param p0 - the argument name
     * @returns The argument index if the argument name was found, otherwise returns Argument.NOT_FOUND
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgumentIndex"(p0: string): number;

    /**
     * Gets argument from the argument expression.
     * @param p0 - the argument index
     * @returns Argument if the argument index is between 0 and the last available argument index
     *   (getArgumentsNumber()-1), otherwise returns null. Release the returned native handle with delete()
     *   when non-null.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgument"(p0: number | Int32Value): Argument | null;

    /**
     * Gets argument from the argument expression.
     * @param p0 - the argument name
     * @returns The argument if the argument name was found, otherwise returns null. Release the returned
     *   native handle with delete() when non-null.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgument"(p0: string | null): Argument | null;

    /**
     * Gets argument from the argument expression.
     * @param p0 - the argument name
     * @returns The argument if the argument name was found, otherwise returns null. Release the returned
     *   native handle with delete() when non-null.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgument"(p0: string): Argument | null;

    /**
     * Removes first occurrences of the arguments associated with the argument expression.
     * @param p0 - the arguments names (variadic parameters) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "removeArguments"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    /**
     * Removes first occurrences of the arguments associated with the argument expression.
     * @param p0 - the arguments (variadic parameters) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "removeArguments"(...p0: (Argument | readonly (Argument)[] | NativeList<Argument, "ArgumentPtr"> | null)[]): void;

    /**
     * Removes all arguments associated with the argument expression.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "removeAllArguments"(): void;

    /**
     * Adds constants (variadic parameters) to the argument expression definition.
     * @param p0 - the constants (comma separated list)
     * @see {@link Constant}
     */
    "addConstants"(p0: Array<Constant | null> | NativeList<Constant | null, "ConstantPtr"> | NullNativeList<"ConstantPtr"> | null): void;

    /**
     * Adds constants (variadic parameters) to the argument expression definition.
     * @param elements - the constants (comma separated list)
     * @see {@link Constant}
     */
    "addConstants"(...elements: (Constant | null | readonly (Constant | null)[])[]): void;

    /**
     * Adds constants (variadic parameters) to the argument expression definition.
     * @param p0 - the constants (comma separated list)
     * @see {@link Constant}
     */
    "addConstants"(p0: Constant | null): void;

    /**
     * Enables to define the constant (associated with the argument expression) based on the constant name and
     * constant value.
     * @param p0 - the constant name
     * @param p1 - the constant value
     * @see {@link Constant}
     */
    "defineConstant"(p0: string | null, p1: number): void;

    /**
     * Enables to define the constant (associated with the argument expression) based on the constant name and
     * constant value.
     * @param p0 - the constant name
     * @param p1 - the constant value
     * @see {@link Constant}
     */
    "defineConstant"(p0: string, p1: number): void;

    /**
     * Gets number of constants associated with the argument expression.
     * @returns number of constants (int >= 0)
     * @see {@link Constant}
     */
    "getConstantsNumber"(): number;

    /**
     * Gets constant index associated with the argument expression.
     * @param p0 - the constant name
     * @returns Constant index if constant name was found, otherwise return Constant.NOT_FOUND.
     * @see {@link Constant}
     */
    "getConstantIndex"(p0: string | null): number;

    /**
     * Gets constant index associated with the argument expression.
     * @param p0 - the constant name
     * @returns Constant index if constant name was found, otherwise return Constant.NOT_FOUND.
     * @see {@link Constant}
     */
    "getConstantIndex"(p0: string): number;

    /**
     * Gets constant associated with the argument expression.
     * @param p0 - the constant index
     * @returns Constant if the constantIndex is between 0 and the last available constant index
     *   (getConstantsNumber() - 1), otherwise it returns null. Release the returned native handle with
     *   delete() when non-null.
     * @see {@link Constant}
     */
    "getConstant"(p0: number | Int32Value): Constant | null;

    /**
     * Gets constant associated with the argument expression.
     * @param p0 - the constant name
     * @returns Constant if constant name was found, otherwise return null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Constant}
     */
    "getConstant"(p0: string | null): Constant | null;

    /**
     * Gets constant associated with the argument expression.
     * @param p0 - the constant name
     * @returns Constant if constant name was found, otherwise return null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Constant}
     */
    "getConstant"(p0: string): Constant | null;

    /**
     * Removes first occurrences of the constants associated with the argument expression.
     * @param p0 - the constants names (variadic parameters) comma separated list
     * @see {@link Constant}
     */
    "removeConstants"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    /**
     * Removes first occurrences of the constants associated with the argument expression
     * @param p0 - the constants (variadic parameters) comma separated list
     * @see {@link Constant}
     */
    "removeConstants"(...p0: (Constant | readonly (Constant)[] | NativeList<Constant, "ConstantPtr"> | null)[]): void;

    /**
     * Removes all constants associated with the argument expression
     * @see {@link Constant}
     */
    "removeAllConstants"(): void;

    /**
     * Adds functions (variadic parameters) to the argument expression definition.
     * @param p0 - the functions (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "addFunctions"(p0: Array<Function | null> | NativeList<Function | null, "FunctionPtr"> | NullNativeList<"FunctionPtr"> | null): void;

    /**
     * Adds functions (variadic parameters) to the argument expression definition.
     * @param elements - the functions (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "addFunctions"(...elements: (Function | null | readonly (Function | null)[])[]): void;

    /**
     * Adds functions (variadic parameters) to the argument expression definition.
     * @param p0 - the functions (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "addFunctions"(p0: Function | null): void;

    /**
     * Enables to define the function (associated with the argument expression) based on the function name,
     * function expression string and arguments names (variadic parameters).
     * @param p0 - the function name
     * @param p1 - the expression string
     * @param p2 - the function arguments names (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "defineFunction"(p0: string | null, p1: string | null, p2: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    /**
     * Gets number of functions associated with the argument expression.
     * @returns number of functions (int >= 0)
     * @see {@link Function}
     */
    "getFunctionsNumber"(): number;

    /**
     * Gets index of function associated with the argument expression.
     * @param p0 - the function name
     * @returns Function index if function name was found, otherwise returns Function.NOT_FOUND
     * @see {@link Function}
     */
    "getFunctionIndex"(p0: string | null): number;

    /**
     * Gets index of function associated with the argument expression.
     * @param p0 - the function name
     * @returns Function index if function name was found, otherwise returns Function.NOT_FOUND
     * @see {@link Function}
     */
    "getFunctionIndex"(p0: string): number;

    /**
     * Gets function associated with the argument expression.
     * @param p0 - the function index
     * @returns Function if function index is between 0 and the last available function index
     *   (getFunctionsNumber()-1), otherwise returns null. Release the returned native handle with delete()
     *   when non-null.
     * @see {@link Function}
     */
    "getFunction"(p0: number | Int32Value): Function | null;

    /**
     * Gets function associated with the argument expression.
     * @param p0 - the function name
     * @returns Function if function name was found, otherwise returns null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Function}
     */
    "getFunction"(p0: string | null): Function | null;

    /**
     * Gets function associated with the argument expression.
     * @param p0 - the function name
     * @returns Function if function name was found, otherwise returns null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Function}
     */
    "getFunction"(p0: string): Function | null;

    /**
     * Removes first occurrences of the functions associated with the argument expression.
     * @param p0 - the functions names (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "removeFunctions"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    /**
     * Removes first occurrences of the functions associated with the argument expression.
     * @param p0 - the functions (variadic parameters) comma separated list.
     * @see {@link Function}
     */
    "removeFunctions"(...p0: (Function | readonly (Function)[] | NativeList<Function, "FunctionPtr"> | null)[]): void;

    /**
     * Removes all functions associated with the argument expression.
     * @see {@link Function}
     */
    "removeAllFunctions"(): void;

    /**
     * Enables to define the argument (associated with the argument expression) based on the argument name and
     * the argument value.
     * @param p0 - the argument name
     * @param p1 - the argument value
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArgument"(p0: string | null, p1: number): void;

    /**
     * Enables to define the argument (associated with the argument expression) based on the argument name and
     * the argument value.
     * @param p0 - the argument name
     * @param p1 - the argument value
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArgument"(p0: string, p1: number): void;

    /**
     * Sets argument description.
     * @param p0 - the argument description.
     */
    "setDescription"(p0: string | null): void;

    /**
     * Sets argument description.
     * @param p0 - the argument description.
     */
    "setDescription"(p0: string): void;

    /**
     * Gets argument description.
     * @returns The argument description string.
     */
    "getDescription"(): string | null;

    /**
     * Sets (modifies) argument name. Each expression / function / dependent argument associated with this
     * argument will be marked as modified (requires new syntax checking).
     * @param p0 - the argument name
     */
    "setArgumentName"(p0: string | null): void;

    /**
     * Sets (modifies) argument name. Each expression / function / dependent argument associated with this
     * argument will be marked as modified (requires new syntax checking).
     * @param p0 - the argument name
     */
    "setArgumentName"(p0: string): void;

    /**
     * Gets argument name
     * @returns the argument name as string
     */
    "getArgumentName"(): string | null;

    /**
     * Sets argument expression string. Each expression / function / dependent argument associated with this
     * argument will be marked as modified (requires new syntax checking). If BODY_EXTENDED argument then
     * BODY_RUNTIME is set.
     * @param p0 - the argument expression string
     * @see {@link Expression}
     */
    "setArgumentExpressionString"(p0: string | null): void;

    /**
     * Sets argument expression string. Each expression / function / dependent argument associated with this
     * argument will be marked as modified (requires new syntax checking). If BODY_EXTENDED argument then
     * BODY_RUNTIME is set.
     * @param p0 - the argument expression string
     * @see {@link Expression}
     */
    "setArgumentExpressionString"(p0: string): void;

    /**
     * Gets argument expression string
     * @returns the argument expression string
     */
    "getArgumentExpressionString"(): string | null;

    /**
     * Checks argument syntax
     * @returns syntax status: Argument.NO_SYNTAX_ERRORS, Argument.SYNTAX_ERROR
     */
    "checkSyntax"(): boolean;

    /**
     * Returns error message after checking the syntax
     * @returns Error message as string.
     */
    "getErrorMessage"(): string | null;

    /**
     * Sets argument value, if DEPENDENT_ARGUMENT then argument type is set to FREE_ARGUMENT. If BODY_EXTENDED
     * argument the BODY_RUNTIME argument is set.
     * @param p0 - the value of argument
     */
    "setArgumentValue"(p0: number): void;

    /**
     * Gets argument value.
     * @returns direct argument value for free argument, otherwise returns calculated argument value based on
     *   the argument expression.
     */
    "getArgumentValue"(): number;

    /**
     * Gets argument value and registers all the calculation steps
     * @param p0 - A collection to store list of calculation steps, steps registered as strings.
     * @returns direct argument value for free argument, otherwise returns calculated argument value based on
     *   the argument expression.
     */
    "getArgumentValue"(p0: CalcStepsRegister | null): number;

    /**
     * Gets computing time
     * @returns Computing time in seconds.
     */
    "getComputingTime"(): number;

    /**
     * Enables argument verbose mode
     */
    "setVerboseMode"(): void;

    /**
     * Disables argument verbose mode (sets default silent mode)
     */
    "setSilentMode"(): void;

    /**
     * Returns verbose mode status
     * @returns true if verbose mode is on, otherwise returns false.
     */
    "getVerboseMode"(): boolean;

    /**
     * Gets recursive mode status
     * @returns true if recursive mode is enabled (RecursiveArgument), otherwise returns false
     * @see {@link RecursiveArgument}
     */
    "getRecursiveMode"(): boolean;

    /**
     * Gets argument type
     * @returns Argument type: Argument.FREE_ARGUMENT, Argument.DEPENDENT_ARGUMENT, Argument.RECURSIVE_ARGUMENT
     */
    "getArgumentType"(): number;

    /**
     * Returns argument body type: {@link ArgumentConstructor.BODY_RUNTIME} {@link ArgumentConstructor.BODY_EXTENDED}
     * @returns Returns argument body type: {@link ArgumentConstructor.BODY_RUNTIME} {@link ArgumentConstructor.BODY_EXTENDED}
     */
    "getArgumentBodyType"(): number;

    /**
     * Creates cloned object of this argument.
     * @returns clone of the argument. Release the returned native handle with delete() when non-null.
     */
    "clone"(): Argument | null;

    /**
     * Creates a completely independent 1-1 clone that can be safely used by a separate thread. If the cloned
     * element contains references to other elements (e.g. arguments, functions, constants), then they will
     * also be cloned and the newly created element will contain references to the corresponding clones.
     * Important - the API allows you to extract all these clones.
     * @returns Cloned object. Release the returned native handle with delete() when non-null.
     */
    "cloneForThreadSafe"(): Argument | null;

    /**
     * Enables to define the function (associated with the argument expression) based on the function name,
     * function expression string and arguments names (variadic parameters).
     * @param name - the function name
     * @param expression - the expression string
     * @param parameters - the function arguments names (variadic parameters) comma separated list
     * @see {@link Function}
     */
    defineFunction(name: string | null, expression: string | null, ...parameters: (string | null | readonly (string | null)[])[]): void;
}

export interface ArgumentConstructor extends Omit<PrimitiveElementConstructor, 'prototype'> {
    readonly prototype: Argument;

    /**
     * Default constructor - creates argument based on the argument definition string.
     * @param p0 - Argument definition string, i.e.: - 'x' - only argument name - 'x=5' - argument name and
     *   argument value - 'x=2*5' - argument name and argument value given as simple expression - 'x=2*y' -
     *   argument name and argument expression (dependent argument 'x' on argument 'y')
     * @param p1 - Optional parameters (comma separated) such as Arguments, Constants, Functions
     * @returns A new owning native handle. Release it with delete().
     */
    new(p0: string | null, ...p1: DefinitionInput[]): Argument;

    /**
     * Default constructor - creates argument based on the argument definition string.
     * @param p0 - Argument definition string, i.e.: - 'x' - only argument name - 'x=5' - argument name and
     *   argument value - 'x=2*5' - argument name and argument value given as simple expression - 'x=2*y' -
     *   argument name and argument expression (dependent argument 'x' on argument 'y')
     * @param p1 - If true parser will try to create dependent argument
     * @param p2 - Optional parameters (comma separated) such as Arguments, Constants, Functions
     * @returns A new owning native handle. Release it with delete().
     */
    new(p0: string | null, p1: boolean, ...p2: DefinitionInput[]): Argument;

    /**
     * Constructor - creates free argument.
     * @param p0 - the argument name
     * @param p1 - the argument value
     * @returns A new owning native handle. Release it with delete().
     */
    new(p0: string | null, p1: number): Argument;

    /**
     * Constructor for argument definition based on your own source code - this is via implementation of
     * ArgumentExtension interface.
     * @param p0 - Argument name
     * @param p1 - Your own source code
     * @returns A new owning native handle. Release it with delete().
     */
    new(p0: string | null, p1: ArgumentExtension | NullExtension<"ArgumentExtension">): Argument;

    /**
     * Constructor - creates dependent argument(with hidden argument expression).
     * @param p0 - the argument name
     * @param p1 - the argument expression string
     * @param p2 - Optional parameters (comma separated) such as Arguments, Constants, Functions
     * @returns A new owning native handle. Release it with delete().
     * @see {@link Expression}
     * @see {@link PrimitiveElement}
     */
    new(p0: string | null, p1: string | null, ...p2: DefinitionInput[]): Argument;

    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "FREE_ARGUMENT": number;
    readonly "DEPENDENT_ARGUMENT": number;
    readonly "RECURSIVE_ARGUMENT": number;
    readonly "BODY_RUNTIME": number;
    readonly "BODY_EXTENDED": number;
    readonly "NO_SYNTAX_ERRORS": boolean;
    readonly "SYNTAX_ERROR": boolean;
    readonly "SYNTAX_ERROR_OR_STATUS_UNKNOWN": boolean;
    readonly "ARGUMENT_INITIAL_VALUE": number;
    readonly "NOT_FOUND": number;
}

export interface Expression extends PrimitiveElement {

    /**
     * Calculates the expression value
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param calcStepsRegister - A collection to store list of calculation steps, steps registered as strings.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns The expression value if syntax was ok, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link Expression.calculate}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "calculateWithCancel"(calcStepsRegister: CalcStepsRegister | null, cancelId: number): number;

    /**
     * Calculates the expression value
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns The expression value if syntax was ok, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link Expression.calculate}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "calculateWithCancel"(cancelId: number): number;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): Expression;

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions) to the expressions.
     * @param p0 - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "addDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions) to the expressions.
     * @param elements - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "addDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions) to the expressions.
     * @param p0 - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "addDefinitions"(p0: PrimitiveElement | null): void;

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions) to the expressions.
     * @param p0 - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "removeDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions) to the expressions.
     * @param elements - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "removeDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions) to the expressions.
     * @param p0 - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "removeDefinitions"(p0: PrimitiveElement | null): void;

    /**
     * Adds arguments (variadic) to the expression definition.
     * @param p0 - the arguments list (comma separated list)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "addArguments"(p0: Array<Argument | null> | NativeList<Argument | null, "ArgumentPtr"> | NullNativeList<"ArgumentPtr"> | null): void;

    /**
     * Adds arguments (variadic) to the expression definition.
     * @param elements - the arguments list (comma separated list)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "addArguments"(...elements: (Argument | null | readonly (Argument | null)[])[]): void;

    /**
     * Adds arguments (variadic) to the expression definition.
     * @param p0 - the arguments list (comma separated list)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "addArguments"(p0: Argument | null): void;

    /**
     * Enables to define the arguments (associated with the expression) based on the given arguments names.
     * @param p0 - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    /**
     * Enables to define the arguments (associated with the expression) based on the given arguments names.
     * @param elements - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(...elements: (string | null | readonly (string | null)[])[]): void;

    /**
     * Enables to define the arguments (associated with the expression) based on the given arguments names.
     * @param p0 - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(p0: string | null): void;

    /**
     * Enables to define the arguments (associated with the expression) based on the given arguments names.
     * @param p0 - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(p0: string): void;

    /**
     * Removes first occurrences of the arguments associated with the expression.
     * @param p0 - the arguments names (variadic parameters) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "removeArguments"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    /**
     * Removes first occurrences of the arguments associated with the expression.
     * @param p0 - the arguments (variadic parameters) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "removeArguments"(...p0: (Argument | readonly (Argument)[] | NativeList<Argument, "ArgumentPtr"> | null)[]): void;

    /**
     * Removes all arguments associated with the expression.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "removeAllArguments"(): void;

    /**
     * Adds constants (variadic parameters) to the expression definition.
     * @param p0 - the constants (comma separated list)
     * @see {@link Constant}
     */
    "addConstants"(p0: Array<Constant | null> | NativeList<Constant | null, "ConstantPtr"> | NullNativeList<"ConstantPtr"> | null): void;

    /**
     * Adds constants (variadic parameters) to the expression definition.
     * @param elements - the constants (comma separated list)
     * @see {@link Constant}
     */
    "addConstants"(...elements: (Constant | null | readonly (Constant | null)[])[]): void;

    /**
     * Adds constants (variadic parameters) to the expression definition.
     * @param p0 - the constants (comma separated list)
     * @see {@link Constant}
     */
    "addConstants"(p0: Constant | null): void;

    /**
     * Removes first occurrences of the constants associated with the expression.
     * @param p0 - the constants names (variadic parameters) comma separated list
     * @see {@link Constant}
     */
    "removeConstants"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    /**
     * Removes first occurrences of the constants associated with the expression
     * @param p0 - the constants (variadic parameters) comma separated list
     * @see {@link Constant}
     */
    "removeConstants"(...p0: (Constant | readonly (Constant)[] | NativeList<Constant, "ConstantPtr"> | null)[]): void;

    /**
     * Removes all constants associated with the expression
     * @see {@link Constant}
     */
    "removeAllConstants"(): void;

    /**
     * Adds functions (variadic parameters) to the expression definition.
     * @param p0 - the functions (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "addFunctions"(p0: Array<Function | null> | NativeList<Function | null, "FunctionPtr"> | NullNativeList<"FunctionPtr"> | null): void;

    /**
     * Adds functions (variadic parameters) to the expression definition.
     * @param elements - the functions (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "addFunctions"(...elements: (Function | null | readonly (Function | null)[])[]): void;

    /**
     * Adds functions (variadic parameters) to the expression definition.
     * @param p0 - the functions (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "addFunctions"(p0: Function | null): void;

    /**
     * Enables to define the function (associated with the expression) based on the function name, function
     * expression string and arguments names (variadic parameters).
     * @param p0 - the function name
     * @param p1 - the expression string
     * @param p2 - the function arguments names (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "defineFunction"(p0: string | null, p1: string | null, p2: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    /**
     * Removes first occurrences of the functions associated with the expression.
     * @param p0 - the functions names (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "removeFunctions"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    /**
     * Removes first occurrences of the functions associated with the expression.
     * @param p0 - the functions (variadic parameters) comma separated list.
     * @see {@link Function}
     */
    "removeFunctions"(...p0: (Function | readonly (Function)[] | NativeList<Function, "FunctionPtr"> | null)[]): void;

    /**
     * Removes all functions associated with the expression.
     * @see {@link Function}
     */
    "removeAllFunctions"(): void;

    /**
     * Method return error message after calling checkSyntax() method or calculate().
     * @returns Error message as string.
     */
    "getErrorMessage"(): string | null;

    /**
     * Gets syntax status of the expression.
     * @returns true if there are no syntax errors, false when syntax error was found or syntax status is
     *   unknown
     */
    "getSyntaxStatus"(): boolean;

    /**
     * Sets (modifies expression) expression string.
     * @param p0 - the expression string
     */
    "setExpressionString"(p0: string | null): void;

    /**
     * Sets (modifies expression) expression string.
     * @param p0 - the expression string
     */
    "setExpressionString"(p0: string): void;

    /**
     * Returns expression string
     * @returns Expression string definition.
     */
    "getExpressionString"(): string | null;

    /**
     * Returns expression string
     * @returns Expression string definition.
     */
    "getCanonicalExpressionString"(): string | null;

    /**
     * Returns this expression in classical mathematical LaTeX notation, without math-mode delimiters. Values,
     * user function bodies and numerical algorithm settings are not evaluated. Undefined symbols with
     * unambiguous structure are supported. This method uses {@link Expression.getCopyOfInitialTokens} and has the same tokenization/cache
     * and extension-metadata behavior as that method. The returned notation describes the formula, not
     * numerical implementation details such as rounding, angular mode or special values at singularities.
     * @returns A mathematical LaTeX fragment, or an empty string for empty input.
     * @throws {Error} Named `std::logic_error`: If the token structure, builtin arity or an identifier is invalid, or
     *   a rendering resource budget is exceeded.
     * @since 6.2.0
     * @throws {Error} Named `std::invalid_argument` for a null stored expression.
     */
    "getExpressionAsLaTeX"(): string;

    /**
     * Clears expression string
     */
    "clearExpressionString"(): void;

    /**
     * Sets expression description.
     * @param p0 - the description string
     */
    "setDescription"(p0: string | null): void;

    /**
     * Sets expression description.
     * @param p0 - the description string
     */
    "setDescription"(p0: string): void;

    /**
     * Gets expression description.
     * @returns String description.
     */
    "getDescription"(): string | null;

    /**
     * Clears expression description
     */
    "clearDescription"(): void;

    /**
     * Enables verbose mode.
     */
    "setVerboseMode"(): void;

    /**
     * Disables verbose mode (default silent mode).
     */
    "setSilentMode"(): void;

    /**
     * Returns verbose mode status.
     * @returns true if verbose mode is on, otherwise returns false.
     */
    "getVerboseMode"(): boolean;

    /**
     * Sets implied multiplication
     */
    "enableImpliedMultiplicationMode"(): void;

    /**
     * Disables implied multiplication
     */
    "disableImpliedMultiplicationMode"(): void;

    /**
     * Gets implied multiplication status
     * @returns true if implied multiplication is enabled, otherwise returns false.
     */
    "checkIfImpliedMultiplicationMode"(): boolean;

    /**
     * Enables unicode built-in parser keywords, this flag informs the parser that built-in unicode keywords
     * are supported and will be recognized as functions or operators.
     */
    "enableUnicodeBuiltinKeyWordsMode"(): void;

    /**
     * Disables unicode built-in parser keywords, this flag informs the parser that built-in unicode keywords
     * are not supported and will not be recognized as functions or operators.
     */
    "disableUnicodeBuiltinKeyWordsMode"(): void;

    /**
     * Gets unicode built-in parser keywords mode
     * @returns true if unicode built-in parser keywords is enabled, otherwise returns false.
     */
    "checkIfUnicodeBuiltinKeyWordsMode"(): boolean;

    /**
     * Enables attempt to fix the expression String. For example, situations such as: "++" change to "+", "+-"
     * changed to "-" "-+" changed to "-" "--" changed to "+"
     */
    "enableAttemptToFixExpStrMode"(): void;

    /**
     * Disables attempt to fix the expression String. For example, situations such as: "++" change to "+", "+-"
     * changed to "-" "-+" changed to "-" "--" changed ro "+"
     */
    "disableAttemptToFixExpStrMode"(): void;

    /**
     * Gets attempt to fix expression string mode
     * @returns true attempt to fix expression string mode is enabled, otherwise returns false.
     */
    "checkIfAttemptToFixExpStrMode"(): boolean;

    /**
     * Gets recursive mode status
     * @returns true if recursive mode is enabled, otherwise returns false.
     */
    "getRecursiveMode"(): boolean;

    /**
     * Gets computing time.
     * @returns computing time in seconds.
     */
    "getComputingTime"(): number;

    /**
     * Enables to define the argument (associated with the expression) based on the argument name and the
     * argument value.
     * @param p0 - the argument name
     * @param p1 - the argument value
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArgument"(p0: string | null, p1: number): void;

    /**
     * Enables to define the argument (associated with the expression) based on the argument name and the
     * argument value.
     * @param p0 - the argument name
     * @param p1 - the argument value
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArgument"(p0: string, p1: number): void;

    /**
     * Gets argument index from the expression.
     * @param p0 - the argument name
     * @returns The argument index if the argument name was found, otherwise returns Argument.NOT_FOUND
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgumentIndex"(p0: string | null): number;

    /**
     * Gets argument index from the expression.
     * @param p0 - the argument name
     * @returns The argument index if the argument name was found, otherwise returns Argument.NOT_FOUND
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgumentIndex"(p0: string): number;

    /**
     * Gets number of arguments associated with the expression.
     * @returns The number of arguments (int >= 0)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgumentsNumber"(): number;

    /**
     * Gets argument from the expression.
     * @param p0 - the argument name
     * @returns The argument if the argument name was found, otherwise returns null. Release the returned
     *   native handle with delete() when non-null.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgument"(p0: string | null): Argument | null;

    /**
     * Gets argument from the expression.
     * @param p0 - the argument name
     * @returns The argument if the argument name was found, otherwise returns null. Release the returned
     *   native handle with delete() when non-null.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgument"(p0: string): Argument | null;

    /**
     * Gets argument from the expression.
     * @param p0 - the argument index
     * @returns Argument if the argument index is between 0 and the last available argument index
     *   (getArgumentsNumber()-1), otherwise returns null. Release the returned native handle with delete()
     *   when non-null.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgument"(p0: number | Int32Value): Argument | null;

    /**
     * Sets argument value.
     * @param p0 - the argument name
     * @param p1 - the argument value
     */
    "setArgumentValue"(p0: string | null, p1: number): void;

    /**
     * Sets argument value.
     * @param p0 - the argument name
     * @param p1 - the argument value
     */
    "setArgumentValue"(p0: string, p1: number): void;

    /**
     * Gets argument vale.
     * @param p0 - the argument name
     * @returns Argument value if argument name was found, otherwise return NaN.
     */
    "getArgumentValue"(p0: string | null): number;

    /**
     * Gets argument vale.
     * @param p0 - the argument name
     * @returns Argument value if argument name was found, otherwise return NaN.
     */
    "getArgumentValue"(p0: string): number;

    /**
     * Enables to define the constant (associated with the expression) based on the constant name and constant
     * value.
     * @param p0 - the constant name
     * @param p1 - the constant value
     * @see {@link Constant}
     */
    "defineConstant"(p0: string | null, p1: number): void;

    /**
     * Enables to define the constant (associated with the expression) based on the constant name and constant
     * value.
     * @param p0 - the constant name
     * @param p1 - the constant value
     * @see {@link Constant}
     */
    "defineConstant"(p0: string, p1: number): void;

    /**
     * Gets constant index associated with the expression.
     * @param p0 - the constant name
     * @returns Constant index if constant name was found, otherwise return Constant.NOT_FOUND.
     * @see {@link Constant}
     */
    "getConstantIndex"(p0: string | null): number;

    /**
     * Gets constant index associated with the expression.
     * @param p0 - the constant name
     * @returns Constant index if constant name was found, otherwise return Constant.NOT_FOUND.
     * @see {@link Constant}
     */
    "getConstantIndex"(p0: string): number;

    /**
     * Gets number of constants associated with the expression.
     * @returns number of constants (int >= 0)
     * @see {@link Constant}
     */
    "getConstantsNumber"(): number;

    /**
     * Gets constant associated with the expression.
     * @param p0 - the constant name
     * @returns Constant if constant name was found, otherwise return null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Constant}
     */
    "getConstant"(p0: string | null): Constant | null;

    /**
     * Gets constant associated with the expression.
     * @param p0 - the constant name
     * @returns Constant if constant name was found, otherwise return null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Constant}
     */
    "getConstant"(p0: string): Constant | null;

    /**
     * Gets constant associated with the expression.
     * @param p0 - the constant index
     * @returns Constant if the constantIndex is between 0 and the last available constant index
     *   (getConstantsNumber() - 1), otherwise it returns null. Release the returned native handle with
     *   delete() when non-null.
     * @see {@link Constant}
     */
    "getConstant"(p0: number | Int32Value): Constant | null;

    /**
     * Gets index of function associated with the expression.
     * @param p0 - the function name
     * @returns Function index if function name was found, otherwise returns Function.NOT_FOUND
     * @see {@link Function}
     */
    "getFunctionIndex"(p0: string | null): number;

    /**
     * Gets index of function associated with the expression.
     * @param p0 - the function name
     * @returns Function index if function name was found, otherwise returns Function.NOT_FOUND
     * @see {@link Function}
     */
    "getFunctionIndex"(p0: string): number;

    /**
     * Gets number of functions associated with the expression.
     * @returns number of functions (int >= 0)
     * @see {@link Function}
     */
    "getFunctionsNumber"(): number;

    /**
     * Gets function associated with the expression.
     * @param p0 - the function name
     * @returns Function if function name was found, otherwise returns null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Function}
     */
    "getFunction"(p0: string | null): Function | null;

    /**
     * Gets function associated with the expression.
     * @param p0 - the function name
     * @returns Function if function name was found, otherwise returns null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Function}
     */
    "getFunction"(p0: string): Function | null;

    /**
     * Gets function associated with the expression.
     * @param p0 - the function index
     * @returns Function if function index is between 0 and the last available function index
     *   (getFunctionsNumber()-1), otherwise returns null. Release the returned native handle with delete()
     *   when non-null.
     * @see {@link Function}
     */
    "getFunction"(p0: number | Int32Value): Function | null;

    /**
     * Checks syntax of the expression string.
     * @returns true if syntax is ok
     */
    "checkLexSyntax"(): boolean;

    /**
     * Checks syntax of the expression string.
     * @returns true if syntax is ok
     */
    "checkSyntax"(): boolean;

    /**
     * Calculates the expression value and registers all the calculation steps
     * @returns The expression value if syntax was ok, otherwise returns NaN.
     */
    "calculate"(): number;

    /**
     * Calculates the expression value
     * @param p0 - A collection to store list of calculation steps, steps registered as strings.
     * @returns The expression value if syntax was ok, otherwise returns NaN.
     */
    "calculate"(p0: CalcStepsRegister | null): number;

    /**
     * Tokenizes expression string and returns tokens list, including: string, type, level.
     * @returns Copy of initial tokens. Release each returned native handle with delete() when non-null.
     * @see {@link Token}
     * @see {@link mXparserStatics.consolePrintTokens}
     */
    "getCopyOfInitialTokens"(): Array<Token | null> | null;

    /**
     * Returns missing user defined arguments names, i.e. sin(x) + cos(y) where x and y are not defined
     * function will return x and y.
     * @returns Array of missing user defined arguments names - distinct strings.
     */
    "getMissingUserDefinedArguments"(): Array<string | null> | null;

    /**
     * Returns missing user defined units names, i.e. 2*[w] + [q] where [w] and [q] are not defined function
     * will return [w] and [q].
     * @returns Array of missing user defined units names - distinct strings.
     */
    "getMissingUserDefinedUnits"(): Array<string | null> | null;

    /**
     * Returns missing user defined functions names, i.e. sin(x) + fun(x,y) where fun is not defined function
     * will return fun.
     * @returns Array of missing user defined functions names - distinct strings.
     */
    "getMissingUserDefinedFunctions"(): Array<string | null> | null;

    /**
     * Prints to the console copy of initial tokens. Presents how expression string is interpreted by the
     * parser.
     * @see {@link Expression.getCopyOfInitialTokens}
     */
    "consolePrintCopyOfInitialTokens"(): void;

    /**
     * Returns detailed user help on the syntax of mathematical expressions.
     * @returns One string value containing all the help.
     */
    "getHelp"(): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: string | null): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: string): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, any string other than "" will replace the standard
     *   caption with the one specified by the user.
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: boolean, p1: boolean, p2: string | null): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, any string other than "" will replace the standard
     *   caption with the one specified by the user.
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: boolean, p1: boolean, p2: string): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - If a non-standard caption is to be added, any string other than ""
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: string | null, p1: boolean, p2: boolean, p3: string | null): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - If a non-standard caption is to be added, any string other than ""
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: string, p1: boolean, p2: boolean, p3: string): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string | null): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Text qualifier.
     * @param p1 - Delimiter.
     * @param p2 - Indicator whether to add a header.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string | null, p1: string | null, p2: boolean): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Text qualifier.
     * @param p1 - Delimiter.
     * @param p2 - Indicator whether to add a header.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string, p1: string, p2: boolean): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Text qualifier.
     * @param p2 - Delimiter.
     * @param p3 - Indicator whether to add a header.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string | null, p1: string | null, p2: string | null, p3: boolean): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Text qualifier.
     * @param p2 - Delimiter.
     * @param p3 - Indicator whether to add a header.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string, p1: string, p2: string, p3: boolean): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: string | null): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: string): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - Indicator whether to add a FIGURE tag.
     * @param p3 - If a non-standard caption is to be added, use any string other than "".
     * @param p4 - If CSS class is to be added, use any string other than "".
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: boolean, p1: boolean, p2: boolean, p3: string | null, p4: string | null): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - Indicator whether to add a FIGURE tag.
     * @param p3 - If a non-standard caption is to be added, use any string other than "".
     * @param p4 - If CSS class is to be added, use any string other than "".
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: boolean, p1: boolean, p2: boolean, p3: string, p4: string): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - Indicator whether to add a FIGURE tag.
     * @param p4 - If a non-standard caption is to be added, use any string other than "".
     * @param p5 - If CSS class is to be added, use any string other than "".
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: string | null, p1: boolean, p2: boolean, p3: boolean, p4: string | null, p5: string | null): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - Indicator whether to add a FIGURE tag.
     * @param p4 - If a non-standard caption is to be added, use any string other than "".
     * @param p5 - If CSS class is to be added, use any string other than "".
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: string, p1: boolean, p2: boolean, p3: boolean, p4: string, p5: string): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions. Allows simple
     * and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: string | null): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions. Allows simple
     * and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: string): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: boolean, p1: boolean, p2: string | null): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: boolean, p1: boolean, p2: string): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions. Allows simple
     * and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: string | null, p1: boolean, p2: boolean, p3: string | null): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions. Allows simple
     * and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: string, p1: boolean, p2: boolean, p3: string): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions.
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: string | null): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: string): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add caption.
     * @param p1 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: boolean, p1: string | null): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add caption.
     * @param p1 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: boolean, p1: string): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: string | null, p1: boolean, p2: string | null): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: string, p1: boolean, p2: string): string | null;

    /**
     * Returns list of keywords known to the parser
     * @returns List of keywords known to the parser. Release each returned native handle with delete() when
     *   non-null.
     * @see {@link KeyWord}
     * @see {@link KeyWord.wordTypeId}
     * @see {@link Expression.getHelp}
     */
    "getKeyWords"(): Array<KeyWord | null> | null;

    /**
     * Returns list of keywords known to the parser. Allows simple and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns List of keywords known to the parser filter against query string. Release each returned native
     *   handle with delete() when non-null.
     * @see {@link KeyWord}
     * @see {@link KeyWord.wordTypeId}
     * @see {@link Expression.getHelp}
     */
    "getKeyWords"(p0: string | null): Array<KeyWord | null> | null;

    /**
     * Returns list of keywords known to the parser. Allows simple and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns List of keywords known to the parser filter against query string. Release each returned native
     *   handle with delete() when non-null.
     * @see {@link KeyWord}
     * @see {@link KeyWord.wordTypeId}
     * @see {@link Expression.getHelp}
     */
    "getKeyWords"(p0: string): Array<KeyWord | null> | null;

    /**
     * Creates a completely independent 1-1 clone that can be safely used by a separate thread. If the cloned
     * element contains references to other elements (e.g. arguments, functions, constants), then they will
     * also be cloned and the newly created element will contain references to the corresponding clones.
     * Important - the API allows you to extract all these clones.
     * @returns Cloned object. Release the returned native handle with delete() when non-null.
     */
    "cloneForThreadSafe"(): Expression | null;

    /**
     * Enables to define the function (associated with the expression) based on the function name, function
     * expression string and arguments names (variadic parameters).
     * @param name - the function name
     * @param expression - the expression string
     * @param parameters - the function arguments names (variadic parameters) comma separated list
     * @see {@link Function}
     */
    defineFunction(name: string | null, expression: string | null, ...parameters: (string | null | readonly (string | null)[])[]): void;
}

export interface ExpressionConstructor extends Omit<PrimitiveElementConstructor, 'prototype'> {
    readonly prototype: Expression;

    /**
     * Default constructor - empty expression
     * @param p0 - Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @returns A new owning native handle. Release it with delete().
     * @see {@link PrimitiveElement}
     */
    new(...p0: DefinitionInput[]): Expression;

    /**
     * Constructor - creates new expression from expression string.
     * @param p0 - definition of the expression
     * @param p1 - Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @returns A new owning native handle. Release it with delete().
     * @see {@link PrimitiveElement}
     */
    new(p0: string | null, ...p1: DefinitionInput[]): Expression;

    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "NO_SYNTAX_ERRORS": boolean;
    readonly "SYNTAX_ERROR": boolean;
    readonly "SYNTAX_ERROR_OR_STATUS_UNKNOWN": boolean;
}

export interface Constant extends PrimitiveElement {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): Constant;

    /**
     * Gets constant name
     * @returns the constant name as string.
     */
    "getConstantName"(): string | null;

    /**
     * Sets constant name. If constant is associated with any expression then this operation will set modified
     * flag to each related expression.
     * @param p0 - the constant name
     */
    "setConstantName"(p0: string | null): void;

    /**
     * Sets constant name. If constant is associated with any expression then this operation will set modified
     * flag to each related expression.
     * @param p0 - the constant name
     */
    "setConstantName"(p0: string): void;

    /**
     * Sets constant value
     * @param p0 - constant value
     */
    "setConstantValue"(p0: number): void;

    /**
     * Gets constant value.
     * @returns constant value as a number
     */
    "getConstantValue"(): number;

    /**
     * Gets constant description.
     * @returns constant description as string.
     */
    "getDescription"(): string | null;

    /**
     * Sets constant description.
     * @param p0 - the constant description
     */
    "setDescription"(p0: string | null): void;

    /**
     * Sets constant description.
     * @param p0 - the constant description
     */
    "setDescription"(p0: string): void;

    /**
     * Returns the diagnostic message for this constant's definition.
     * @returns The definition validation message.
     */
    "getErrorMessage"(): string | null;

    /**
     * Returns the syntax status of the constant definition.
     * @returns true if the definition has no syntax errors; false otherwise.
     */
    "getSyntaxStatus"(): boolean;

    /**
     * Creates a completely independent 1-1 clone that can be safely used by a separate thread. If the cloned
     * element contains references to other elements (e.g. arguments, functions, constants), then they will
     * also be cloned and the newly created element will contain references to the corresponding clones.
     * Important - the API allows you to extract all these clones.
     * @returns Cloned object. Release the returned native handle with delete() when non-null.
     */
    "cloneForThreadSafe"(): Constant | null;
}

export interface ConstantConstructor extends Omit<PrimitiveElementConstructor, 'prototype'> {
    readonly prototype: Constant;

    /**
     * Constructor - creates constant with a given name and given value
     * @param p0 - the constant name
     * @param p1 - the constant value
     * @returns A new owning native handle. Release it with delete().
     */
    new(p0: string | null, p1: number): Constant;

    /**
     * Constructor - creates constant with a given name and given value. Additionally, description is being
     * set.
     * @param p0 - the constant name
     * @param p1 - the constant value
     * @param p2 - the constant description
     * @returns A new owning native handle. Release it with delete().
     */
    new(p0: string | null, p1: number, p2: string | null): Constant;

    /**
     * Constructs a constant by evaluating a definition such as `c = 2*sin(pi/3)`.
     * @param p0 - The constant name and expression, separated by `=`.
     * @param p1 - Definitions available while evaluating the expression.
     * @returns A new owning native handle. Release it with delete().
     */
    new(p0: string | null, ...p1: DefinitionInput[]): Constant;

    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "NOT_FOUND": number;
    readonly "NO_SYNTAX_ERRORS": boolean;
    readonly "SYNTAX_ERROR": boolean;
    readonly "SYNTAX_ERROR_OR_STATUS_UNKNOWN": boolean;
}

export interface Function extends PrimitiveElement {

    /**
     * Calculates function value and registers all the calculation steps
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param calcStepsRegister - A collection to store list of calculation steps, steps registered as strings.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Function value as a number.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link Function.calculate}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "calculateWithCancel"(calcStepsRegister: CalcStepsRegister | null, cancelId: number): number;

    /**
     * Calculates function value
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param parameters - the function parameters values (as numbers)
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns function value as a number.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link Function.calculate}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "calculateWithCancel"(parameters: ReadonlyArray<number> | Float64Array | null, cancelId: number): number;

    /**
     * Calculates function value
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param arguments - function parameters (as Arguments)
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns function value as a number
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link Function.calculate}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "calculateWithCancel"(arguments: ReadonlyArray<Argument | null> | null, cancelId: number): number;

    /**
     * Calculates function value and registers all the calculation steps
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Function value as a number.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link Function.calculate}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "calculateWithCancel"(cancelId: number): number;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): Function;

    /**
     * Constructor for function definition in natural math language, for instance providing on string "f(x,y) =
     * sin(x) + cos(x)" is enough to define function "f" with parameters "x and y" and function body "sin(x) +
     * cos(x)".
     * @param p0 - Function definition in the form of one String, ie "f(x,y) = sin(x) + cos(x)"
     * @param p1 - Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @see {@link PrimitiveElement}
     * @deprecated Planned to be removed, use {@link Function.addFunctions}, {@link Function.addDefinitions} instead
     */
    "setFunction"(p0: string | null, ...p1: DefinitionInput[]): void;

    /**
     * Calculates function value
     * @returns Function value as a number.
     */
    "calculate"(): number;

    /**
     * Calculates function value and registers all the calculation steps
     * @param p0 - A collection to store list of calculation steps, steps registered as strings.
     * @returns Function value as a number.
     */
    "calculate"(p0: CalcStepsRegister): number;

    /**
     * Calculates function value
     * @param p0 - the function parameters values (as numbers)
     * @returns function value as a number.
     */
    "calculate"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Calculates function value
     * @param p0 - function parameters (as Arguments)
     * @returns function value as a number
     */
    "calculate"(...p0: (Argument | readonly (Argument)[] | NativeList<Argument, "ArgumentPtr"> | null)[]): number;

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions) to the function expressions.
     * @param p0 - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "addDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions) to the function expressions.
     * @param elements - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "addDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions) to the function expressions.
     * @param p0 - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "addDefinitions"(p0: PrimitiveElement | null): void;

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions) from the function expressions.
     * @param p0 - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "removeDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions) from the function expressions.
     * @param elements - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "removeDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions) from the function expressions.
     * @param p0 - Elements list (variadic), where Argument, Constant, Function extend the same class
     *   PrimitiveElement
     * @see {@link PrimitiveElement}
     */
    "removeDefinitions"(p0: PrimitiveElement | null): void;

    /**
     * Adds arguments (variadic) to the function expression definition.
     * @param p0 - the arguments list (comma separated list)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "addArguments"(p0: Array<Argument | null> | NativeList<Argument | null, "ArgumentPtr"> | NullNativeList<"ArgumentPtr"> | null): void;

    /**
     * Adds arguments (variadic) to the function expression definition.
     * @param elements - the arguments list (comma separated list)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "addArguments"(...elements: (Argument | null | readonly (Argument | null)[])[]): void;

    /**
     * Adds arguments (variadic) to the function expression definition.
     * @param p0 - the arguments list (comma separated list)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "addArguments"(p0: Argument | null): void;

    /**
     * Enables to define the arguments (associated with the function expression) based on the given arguments
     * names.
     * @param p0 - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    /**
     * Enables to define the arguments (associated with the function expression) based on the given arguments
     * names.
     * @param elements - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(...elements: (string | null | readonly (string | null)[])[]): void;

    /**
     * Enables to define the arguments (associated with the function expression) based on the given arguments
     * names.
     * @param p0 - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(p0: string | null): void;

    /**
     * Enables to define the arguments (associated with the function expression) based on the given arguments
     * names.
     * @param p0 - the arguments names (variadic) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArguments"(p0: string): void;

    /**
     * Removes first occurrences of the arguments associated with the function expression.
     * @param p0 - the arguments names (variadic parameters) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "removeArguments"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    /**
     * Removes first occurrences of the arguments associated with the function expression.
     * @param p0 - the arguments (variadic parameters) comma separated list
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "removeArguments"(...p0: (Argument | readonly (Argument)[] | NativeList<Argument, "ArgumentPtr"> | null)[]): void;

    /**
     * Removes all arguments associated with the function expression.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "removeAllArguments"(): void;

    /**
     * Adds constants (variadic parameters) to the function expression definition.
     * @param p0 - the constants (comma separated list)
     * @see {@link Constant}
     */
    "addConstants"(p0: Array<Constant | null> | NativeList<Constant | null, "ConstantPtr"> | NullNativeList<"ConstantPtr"> | null): void;

    /**
     * Adds constants (variadic parameters) to the function expression definition.
     * @param elements - the constants (comma separated list)
     * @see {@link Constant}
     */
    "addConstants"(...elements: (Constant | null | readonly (Constant | null)[])[]): void;

    /**
     * Adds constants (variadic parameters) to the function expression definition.
     * @param p0 - the constants (comma separated list)
     * @see {@link Constant}
     */
    "addConstants"(p0: Constant | null): void;

    /**
     * Removes first occurrences of the constants associated with the function expression.
     * @param p0 - the constants names (variadic parameters) comma separated list
     * @see {@link Constant}
     */
    "removeConstants"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    /**
     * Removes first occurrences of the constants associated with the function expression
     * @param p0 - the constants (variadic parameters) comma separated list
     * @see {@link Constant}
     */
    "removeConstants"(...p0: (Constant | readonly (Constant)[] | NativeList<Constant, "ConstantPtr"> | null)[]): void;

    /**
     * Removes all constants associated with the function expression
     * @see {@link Constant}
     */
    "removeAllConstants"(): void;

    /**
     * Adds functions (variadic parameters) to the function expression definition.
     * @param p0 - the functions (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "addFunctions"(p0: Array<Function | null> | NativeList<Function | null, "FunctionPtr"> | NullNativeList<"FunctionPtr"> | null): void;

    /**
     * Adds functions (variadic parameters) to the function expression definition.
     * @param elements - the functions (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "addFunctions"(...elements: (Function | null | readonly (Function | null)[])[]): void;

    /**
     * Adds functions (variadic parameters) to the function expression definition.
     * @param p0 - the functions (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "addFunctions"(p0: Function | null): void;

    /**
     * Enables to define the function (associated with the function expression) based on the function name,
     * function expression string and arguments names (variadic parameters).
     * @param p0 - the function name
     * @param p1 - the expression string
     * @param p2 - the function arguments names (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "defineFunction"(p0: string | null, p1: string | null, p2: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    /**
     * Removes first occurrences of the functions associated with the function expression.
     * @param p0 - the functions names (variadic parameters) comma separated list
     * @see {@link Function}
     */
    "removeFunctions"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    /**
     * Removes first occurrences of the functions associated with the function expression.
     * @param p0 - the functions (variadic parameters) comma separated list.
     * @see {@link Function}
     */
    "removeFunctions"(...p0: (Function | readonly (Function)[] | NativeList<Function, "FunctionPtr"> | null)[]): void;

    /**
     * Removes all functions associated with the function expression.
     * @see {@link Function}
     */
    "removeAllFunctions"(): void;

    /**
     * Sets function description.
     * @param p0 - the function description
     */
    "setDescription"(p0: string | null): void;

    /**
     * Sets function description.
     * @param p0 - the function description
     */
    "setDescription"(p0: string): void;

    /**
     * Gets function description
     * @returns Function description as string
     */
    "getDescription"(): string | null;

    /**
     * Sets function name.
     * @param p0 - the function name
     */
    "setFunctionName"(p0: string | null): void;

    /**
     * Sets function name.
     * @param p0 - the function name
     */
    "setFunctionName"(p0: string): void;

    /**
     * Gets function name.
     * @returns Function name as string.
     */
    "getFunctionName"(): string | null;

    /**
     * Gets function expression string
     * @returns Function expression as string.
     */
    "getFunctionExpressionString"(): string | null;

    /**
     * Sets value of function argument (function parameter).
     * @param p0 - the argument index (in accordance to arguments declaration sequence)
     * @param p1 - the argument value
     */
    "setArgumentValue"(p0: number | Int32Value, p1: number): void;

    /**
     * Returns function body type: {@link FunctionConstructor.BODY_RUNTIME} {@link FunctionConstructor.BODY_EXTENDED}
     * @returns Returns function body type: {@link FunctionConstructor.BODY_RUNTIME} {@link FunctionConstructor.BODY_EXTENDED}
     */
    "getFunctionBodyType"(): number;

    /**
     * Checks function syntax
     * @returns syntax status: Function.NO_SYNTAX_ERRORS, Function.SYNTAX_ERROR
     */
    "checkSyntax"(): boolean;

    /**
     * Returns error message after checking the syntax.
     * @returns Error message as string.
     */
    "getErrorMessage"(): string | null;

    /**
     * Enables to define the argument (associated with the function expression) based on the argument name and
     * the argument value.
     * @param p0 - the argument name
     * @param p1 - the argument value
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "defineArgument"(p0: string | null, p1: number): void;

    /**
     * Gets argument index from the function expression.
     * @param p0 - the argument name
     * @returns The argument index if the argument name was found, otherwise returns Argument.NOT_FOUND
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgumentIndex"(p0: string | null): number;

    /**
     * Gets argument index from the function expression.
     * @param p0 - the argument name
     * @returns The argument index if the argument name was found, otherwise returns Argument.NOT_FOUND
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgumentIndex"(p0: string): number;

    /**
     * Gets argument from the function expression.
     * @param p0 - the argument name
     * @returns The argument if the argument name was found, otherwise returns null. Release the returned
     *   native handle with delete() when non-null.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgument"(p0: string | null): Argument | null;

    /**
     * Gets argument from the function expression.
     * @param p0 - the argument name
     * @returns The argument if the argument name was found, otherwise returns null. Release the returned
     *   native handle with delete() when non-null.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgument"(p0: string): Argument | null;

    /**
     * Gets argument from the function expression.
     * @param p0 - the argument index
     * @returns Argument if the argument index is between 0 and the last available argument index
     *   (getArgumentsNumber()-1), otherwise returns null. Release the returned native handle with delete()
     *   when non-null.
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgument"(p0: number | Int32Value): Argument | null;

    /**
     * Gets number of parameters associated with the function expression.
     * @returns The number of function parameters (int >= 0)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getParametersNumber"(): number;

    /**
     * Set parameters number.
     * @param p0 - the number of function parameters (default = number of arguments (lower number might be
     *   specified).
     */
    "setParametersNumber"(p0: number | Int32Value): void;

    /**
     * Gets user defined function parameter name
     * @param p0 - Parameter index between 0 and n-1
     * @returns If parameter exists returns parameters name, otherwise empty string is returned.
     */
    "getParameterName"(p0: number | Int32Value): string | null;

    /**
     * Gets number of arguments associated with the function expression.
     * @returns The number of arguments (int >= 0)
     * @see {@link Argument}
     * @see {@link RecursiveArgument}
     */
    "getArgumentsNumber"(): number;

    /**
     * Enables to define the constant (associated with the function expression) based on the constant name and
     * constant value.
     * @param p0 - the constant name
     * @param p1 - the constant value
     * @see {@link Constant}
     */
    "defineConstant"(p0: string | null, p1: number): void;

    /**
     * Gets constant index associated with the function expression.
     * @param p0 - the constant name
     * @returns Constant index if constant name was found, otherwise return Constant.NOT_FOUND.
     * @see {@link Constant}
     */
    "getConstantIndex"(p0: string | null): number;

    /**
     * Gets constant index associated with the function expression.
     * @param p0 - the constant name
     * @returns Constant index if constant name was found, otherwise return Constant.NOT_FOUND.
     * @see {@link Constant}
     */
    "getConstantIndex"(p0: string): number;

    /**
     * Gets constant associated with the function expression.
     * @param p0 - the constant name
     * @returns Constant if constant name was found, otherwise return null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Constant}
     */
    "getConstant"(p0: string | null): Constant | null;

    /**
     * Gets constant associated with the function expression.
     * @param p0 - the constant name
     * @returns Constant if constant name was found, otherwise return null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Constant}
     */
    "getConstant"(p0: string): Constant | null;

    /**
     * Gets constant associated with the function expression.
     * @param p0 - the constant index
     * @returns Constant if the constantIndex is between 0 and the last available constant index
     *   (getConstantsNumber() - 1), otherwise it returns null. Release the returned native handle with
     *   delete() when non-null.
     * @see {@link Constant}
     */
    "getConstant"(p0: number | Int32Value): Constant | null;

    /**
     * Gets number of constants associated with the function expression.
     * @returns number of constants (int >= 0)
     * @see {@link Constant}
     */
    "getConstantsNumber"(): number;

    /**
     * Gets index of function associated with the function expression.
     * @param p0 - the function name
     * @returns Function index if function name was found, otherwise returns Function.NOT_FOUND
     * @see {@link Function}
     */
    "getFunctionIndex"(p0: string | null): number;

    /**
     * Gets index of function associated with the function expression.
     * @param p0 - the function name
     * @returns Function index if function name was found, otherwise returns Function.NOT_FOUND
     * @see {@link Function}
     */
    "getFunctionIndex"(p0: string): number;

    /**
     * Gets number of functions associated with the function expression.
     * @returns number of functions (int >= 0)
     * @see {@link Function}
     */
    "getFunctionsNumber"(): number;

    /**
     * Gets function associated with the function expression.
     * @param p0 - the function name
     * @returns Function if function name was found, otherwise returns null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Function}
     */
    "getFunction"(p0: string | null): Function | null;

    /**
     * Gets function associated with the function expression.
     * @param p0 - the function name
     * @returns Function if function name was found, otherwise returns null. Release the returned native handle
     *   with delete() when non-null.
     * @see {@link Function}
     */
    "getFunction"(p0: string): Function | null;

    /**
     * Gets function associated with the function expression.
     * @param p0 - the function index
     * @returns Function if function index is between 0 and the last available function index
     *   (getFunctionsNumber()-1), otherwise returns null. Release the returned native handle with delete()
     *   when non-null.
     * @see {@link Function}
     */
    "getFunction"(p0: number | Int32Value): Function | null;

    /**
     * Enables verbose function mode
     */
    "setVerboseMode"(): void;

    /**
     * Disables function verbose mode (sets default silent mode)
     */
    "setSilentMode"(): void;

    /**
     * Returns verbose mode status
     * @returns true if verbose mode is on, otherwise returns false
     */
    "getVerboseMode"(): boolean;

    /**
     * Gets recursive mode status
     * @returns true if recursive mode is enabled, otherwise returns false
     */
    "getRecursiveMode"(): boolean;

    /**
     * Gets computing time
     * @returns computing time in seconds.
     */
    "getComputingTime"(): number;

    /**
     * Creates a completely independent 1-1 clone that can be safely used by a separate thread. If the cloned
     * element contains references to other elements (e.g. arguments, functions, constants), then they will
     * also be cloned and the newly created element will contain references to the corresponding clones.
     * Important - the API allows you to extract all these clones.
     * @returns Cloned object. Release the returned native handle with delete() when non-null.
     */
    "cloneForThreadSafe"(): Function | null;

    /**
     * Enables to define the function (associated with the function expression) based on the function name,
     * function expression string and arguments names (variadic parameters).
     * @param name - the function name
     * @param expression - the expression string
     * @param parameters - the function arguments names (variadic parameters) comma separated list
     * @see {@link Function}
     */
    defineFunction(name: string | null, expression: string | null, ...parameters: (string | null | readonly (string | null)[])[]): void;
}

export interface FunctionConstructor extends Omit<PrimitiveElementConstructor, 'prototype'> {
    readonly prototype: Function;

    /**
     * Constructor - creates function from function name and function expression string.
     * @param p0 - the function name
     * @param p1 - the function expression string
     * @param p2 - Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @returns A new owning native handle. Release it with delete().
     * @see {@link PrimitiveElement}
     * @see {@link Expression}
     */
    new(p0: string | null, p1: string | null, ...p2: DefinitionInput[]): Function;

    /**
     * Constructor - creates function from function name, function expression string and argument names.
     * @param p0 - the function name
     * @param p1 - the function expression string
     * @param p2 - the arguments names (variadic parameters) comma separated list
     * @returns A new owning native handle. Release it with delete().
     * @see {@link Expression}
     */
    new(p0: string | null, p1: string | null, ...p2: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): Function;

    /**
     * Constructor for function definition in natural math language, for instance providing on string "f(x,y) =
     * sin(x) + cos(x)" is enough to define function "f" with parameters "x and y" and function body "sin(x) +
     * cos(x)".
     * @param p0 - Function definition in the form of one String, ie "f(x,y) = sin(x) + cos(x)"
     * @param p1 - Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @returns A new owning native handle. Release it with delete().
     * @see {@link PrimitiveElement}
     */
    new(p0: string | null, ...p1: DefinitionInput[]): Function;

    /**
     * Constructor for function definition based on your own source code - this is via implementation of
     * FunctionExtension interface.
     * @param p0 - Function name
     * @param p1 - Your own source code
     * @returns A new owning native handle. Release it with delete().
     */
    new(p0: string | null, p1: FunctionExtension | NullExtension<"FunctionExtension">): Function;

    /**
     * Constructor for function definition based on your own source code - this is via implementation of
     * FunctionExtensionVariadic interface.
     * @param p0 - Function name
     * @param p1 - Your own source code
     * @returns A new owning native handle. Release it with delete().
     */
    new(p0: string | null, p1: FunctionExtensionVariadic | NullExtension<"FunctionExtensionVariadic">): Function;

    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "NO_SYNTAX_ERRORS": boolean;
    readonly "SYNTAX_ERROR": boolean;
    readonly "SYNTAX_ERROR_OR_STATUS_UNKNOWN": boolean;
    readonly "NOT_FOUND": number;
    readonly "BODY_RUNTIME": number;
    readonly "BODY_EXTENDED": number;
}

export interface RecursiveArgument extends Argument {

    /**
     * Gets argument value and registers all the calculation steps
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     *
     * The sole argument is the cancellation ID; it is not a recursive argument index.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns direct argument value for free argument, otherwise returns calculated argument value based on
     *   the argument expression.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link RecursiveArgument.getArgumentValue}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "getArgumentValueWithCancel"(cancelId: number): number;

    /**
     * Gets argument value and registers all the calculation steps
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     *
     * This tracing overload has no index; null is a register, distinct from numeric index zero.
     * @param steps - A collection to store list of calculation steps, steps registered as strings.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns direct argument value for free argument, otherwise returns calculated argument value based on
     *   the argument expression.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link RecursiveArgument.getArgumentValue}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "getArgumentValueWithCancel"(steps: CalcStepsRegister | null, cancelId: number): number;

    /**
     * Gets recursive argument value
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param index - the index
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns value as a number
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link RecursiveArgument.getArgumentValue}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "getArgumentValueWithCancel"(index: number, cancelId: number): number;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): RecursiveArgument;

    /**
     * Adds base case
     * @param p0 - the base case index
     * @param p1 - the base case value
     */
    "addBaseCase"(p0: number | Int32Value, p1: number): void;

    /**
     * Clears all based cases and stored calculated values
     */
    "resetAllCases"(): void;

    /**
     * Gets recursive argument value
     * @param p0 - the index
     * @returns value as a number
     */
    "getArgumentValue"(p0: number): number;

    /**
     * Creates a completely independent 1-1 clone that can be safely used by a separate thread. If the cloned
     * element contains references to other elements (e.g. arguments, functions, constants), then they will
     * also be cloned and the newly created element will contain references to the corresponding clones.
     * Important - the API allows you to extract all these clones.
     * @returns Cloned object. Release the returned native handle with delete() when non-null.
     */
    "cloneForThreadSafe"(): Argument | null;

    /**
     * Gets argument value.
     * @returns direct argument value for free argument, otherwise returns calculated argument value based on
     *   the argument expression.
     */
    "getArgumentValue"(): number;

    /**
     * Gets argument value and registers all the calculation steps
     * @param p0 - A collection to store list of calculation steps, steps registered as strings.
     * @returns direct argument value for free argument, otherwise returns calculated argument value based on
     *   the argument expression.
     */
    "getArgumentValue"(p0: CalcStepsRegister | null): number;
}

export interface RecursiveArgumentConstructor extends Omit<ArgumentConstructor, 'prototype'> {
    readonly prototype: RecursiveArgument;

    /**
     * Constructor - creates recursive argument.
     * @param p0 - the argument name
     * @param p1 - the recursive expression string
     * @param p2 - index argument name
     * @returns A new owning native handle. Release it with delete().
     */
    new(p0: string | null, p1: string | null, p2: string | null): RecursiveArgument;

    /**
     * Constructor - creates recursive argument.
     * @param p0 - the argument name
     * @param p1 - the recursive expression string
     * @param p2 - the index argument
     * @param p3 - Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @returns A new owning native handle. Release it with delete().
     * @see {@link PrimitiveElement}
     * @see {@link Argument}
     */
    new(p0: string | null, p1: string | null, p2: Argument, ...p3: DefinitionInput[]): RecursiveArgument;

    /**
     * Constructor - creates argument based on the argument definition string.
     * @param p0 - Argument definition string, i.e.: - 'x' - only argument name - 'x=5' - argument name and
     *   argument value - 'x=2*5' - argument name and argument value given as simple expression - 'x=2*y' -
     *   argument name and argument expression (dependent argument 'x' on argument 'y') - 'x(n)=x(n-1)+x(n-2)'
     *   - for recursive arguments)
     * @param p1 - Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
     * @returns A new owning native handle. Release it with delete().
     * @see {@link PrimitiveElement}
     * @see {@link Argument}
     */
    new(p0: string | null, ...p1: DefinitionInput[]): RecursiveArgument;

    readonly "TYPE_ID_RECURSIVE": number;
    "TYPE_DESC_RECURSIVE": string | null;
}

export interface CalcStepsRegister extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): CalcStepsRegister;

    /**
     * Returns the native calculation-step records.
     * @returns The native collection handle, or null. Release each returned handle with delete().
     */
    get calcStepRecords(): NativeList<CalcStepRecord | null, "CalcStepRecordPtr"> | null;

    /**
     * Replaces the native calculation-step records.
     * @param value - Native collection, copied JavaScript values, or null.
     */
    set calcStepRecords(value: NativeList<CalcStepRecord | null, "CalcStepRecordPtr"> | null | readonly (CalcStepRecord | null)[]);

    "argumentNameStart": string | null;
    "functionNameStart": string | null;
    "expressionStringStart": string | null;
    "result": number;
    "computingTime": number;
    "errorMessage": string | null;

    /**
     * Prints this step register to the console.
     */
    "consolePrint"(): void;

    /**
     * Returns a localized text report of the recorded calculation steps.
     * @returns The report, or a localized message if the register is empty.
     */
    "toString"(): string | null;
}

export interface CalcStepsRegisterConstructor {
    readonly prototype: CalcStepsRegister;

    /**
     * Creates a native CalcStepsRegister.
     * @returns A new owning native handle. Release it with delete().
     */
    new(): CalcStepsRegister;
}

export interface CalcStepRecord extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): CalcStepRecord;

    "numberGroup": number;
    "numberGroupWithin": number;
    "type": number;
    "description": string | null;
    "content": string | null;
    "firstInGroup": boolean;
    "lastInGroup": boolean;
}

export interface CalcStepRecordConstructor {
    readonly prototype: CalcStepRecord;

    /**
     * Creates a native CalcStepRecord.
     * @returns A new owning native handle. Release it with delete().
     */
    new(): CalcStepRecord;
}

export interface StringResources extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): StringResources;

    "USER_LANGUAGE": string | null;
    "STARTING_SYNTAX_CHECK": string | null;
    "NO_ERRORS_DETECTED": string | null;
    "NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION": string | null;
    "NO_ERRORS_DETECTED_IN_RECURSIVE_ARGUMENT_DEFINITION": string | null;
    "NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION": string | null;
    "NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION": string | null;
    "LEXICAL_ERROR_HAS_BEEN_FOUND": string | null;
    "ERRORS_HAVE_BEEN_FOUND": string | null;
    "ALREADY_CHECKED_NO_ERRORS": string | null;
    "SYNTAX_STATUS_UNKNOWN": string | null;
    "PROBLEM_WITH_EXPRESSION_SYNTAX": string | null;
    "ENCOUNTERED": string | null;
    "AT_INDEX": string | null;
    "WAS_EXPECTING": string | null;
    "WAS_EXPECTING_ONE_OF": string | null;
    "UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED": string | null;
    "UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED": string | null;
    "EXPRESSION_STRING_IS_EMPTY": string | null;
    "EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS": string | null;
    "DUPLICATED_KEYWORD": string | null;
    "ELEMENT": string | null;
    "ERROR": string | null;
    "EXCEPTION": string | null;
    "TOKEN": string | null;
    "INDEX": string | null;
    "INVALID_TOKEN": string | null;
    "INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR": string | null;
    "EXPRESSION_TOKENS": string | null;
    "NULL_TOKENS_LIST": string | null;
    "FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS": string | null;
    "ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS": string | null;
    "PROVIDED_EXTENSION_IS_NULL": string | null;
    "PROVIDED_STRING_IS_NULL": string | null;
    "PROVIDED_ELEMENTS_ARE_NULL": string | null;
    "MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE": string | null;
    "STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT": string | null;
    "STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT": string | null;
    "STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION": string | null;
    "STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION": string | null;
    "ARGUMENT_WAS_EXPECTED": string | null;
    "RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER": string | null;
    "INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION": string | null;
    "INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS": string | null;
    "EXPECTED": string | null;
    "PROVIDED": string | null;
    "USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT": string | null;
    "EXPECTED_EVEN_NUMBER_OF_ARGUMENTS": string | null;
    "INVALID_FUNCTION_NAME": string | null;
    "INVALID_ARGUMENT_NAME": string | null;
    "INVALID_CONSTANT_NAME": string | null;
    "INVALID_FUNCTION_DEFINITION": string | null;
    "INVALID_ARGUMENT_DEFINITION": string | null;
    "INVALID_CONSTANT_DEFINITION": string | null;
    "PATTERN_DOES_NOT_MATCH": string | null;
    "PATTERN_EXAMPLES": string | null;
    "CONSTANT_WAS_EXPECTED": string | null;
    "USER_CONSTANT_WAS_EXPECTED": string | null;
    "UNARY_FUNCTION_EXPECTS_1_PARAMETER": string | null;
    "BINARY_FUNCTION_EXPECTS_2_PARAMETERS": string | null;
    "TERNARY_FUNCTION_EXPECTS_3_PARAMETERS": string | null;
    "DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS": string | null;
    "ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION": string | null;
    "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION": string | null;
    "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION": string | null;
    "NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS": string | null;
    "INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS": string | null;
    "ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS": string | null;
    "FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS": string | null;
    "FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED": string | null;
    "AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED": string | null;
    "ERROR_WHILE_EXECUTING_THE_CALCULATE": string | null;
    "RECURSION_CALLS_COUNTER_EXCEEDED": string | null;
    "RECURSION_CALLS_COUNTER": string | null;
    "STARTING_CALCULATION_LOOP": string | null;
    "CANCEL_REQUEST_FINISHING": string | null;
    "INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING": string | null;
    "FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN": string | null;
    "MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED": string | null;
    "STARTING": string | null;
    "PARSING": string | null;
    "FULLY_COMPILED": string | null;
    "CALCULATED_VALUE": string | null;
    "EXITING": string | null;
    "DONE": string | null;
    "KEYWORD": string | null;
    "SYNTAX": string | null;
    "NUMBER": string | null;
    "NUMBER_LITERAL": string | null;
    "TYPE": string | null;
    "SINCE": string | null;
    "DESCRIPTION": string | null;
    "CALC_STEPS_REGISTER_IS_EMPTY": string | null;
    "CALC_STEPS_REGISTER_FOR": string | null;
    "ARGUMENT": string | null;
    "FUNCTION": string | null;
    "EXPRESSION": string | null;
    "RESULT": string | null;
    "COMPUTING_TIME": string | null;
    "GROUP_SHORT": string | null;
    "NUMBER_SHORT": string | null;
    "FIRST": string | null;
    "LAST": string | null;
    "DESCRIPTION_SHORT": string | null;
    "STEP": string | null;
    "SERIALIZATION_PERFORMED": string | null;
    "DESERIALIZATION_PERFORMED": string | null;
    "NULL_OBJECT_PROVIDED": string | null;
    "NULL_FILE_PATH_PROVIDED": string | null;
    "FILE_PATH_ZERO_LENGTH_PROVIDED": string | null;
    "FILE_PATH_IS_NOT_A_FILE": string | null;
    "FILE_PATH_NOT_EXISTS": string | null;
    "NULL_DATA_PROVIDED": string | null;
    "BINARY_SERIALIZATION_ENABLED": string | null;
    "BINARY_SERIALIZATION_DISABLED": string | null;
    "USER_DEFINED_EXPRESSION": string | null;
    "USER_DEFINED_ARGUMENT": string | null;
    "USER_DEFINED_CONSTANT": string | null;
    "USER_DEFINED_FUNCTION": string | null;
    "USER_DEFINED_RECURSIVE_ARGUMENT": string | null;
    "HELP_CONTENT_LIMITED_TO_QUERY": string | null;
    "ALL_HELP_CONTENT": string | null;
    "CAPTION": string | null;
    "WARNING_BINARY_SERIALIZATION_SECURITY_RISKS": string | null;
    "BINARY_RELATION": string | null;
    "BITWISE_OPERATOR": string | null;
    "BOOLEAN_OPERATOR": string | null;
    "CALCULUS_OPERATOR": string | null;
    "CONSTANT_VALUE": string | null;
    "FUNCTION_1_ARG": string | null;
    "FUNCTION_2_ARG": string | null;
    "FUNCTION_3_ARG": string | null;
    "FUNCTION_VARIADIC": string | null;
    "OPERATOR": string | null;
    "PARSER_SYMBOL": string | null;
    "RANDOM_VARIABLE": string | null;
    "UNIT": string | null;
    "DIMENSIONLESS_UNIT": string | null;
    "ITERATED_OPERATOR": string | null;
    "RATIO_FRACTION": string | null;
    "METRIC_PREFIX": string | null;
    "UNIT_OF_LENGTH": string | null;
    "UNIT_OF_AREA": string | null;
    "UNIT_OF_VOLUME": string | null;
    "UNIT_OF_TIME": string | null;
    "UNIT_OF_MASS": string | null;
    "UNIT_OF_INFORMATION": string | null;
    "UNIT_OF_ENERGY": string | null;
    "UNIT_OF_SPEED": string | null;
    "UNIT_OF_ACCELERATION": string | null;
    "UNIT_OF_ANGLE": string | null;
    "PHYSICAL_CONSTANT": string | null;
    "ASTRONOMICAL_CONSTANT": string | null;
    "MATHEMATICAL_CONSTANT": string | null;
    "PROBABILITY_DISTRIBUTION_FUNCTION": string | null;
    "CUMULATIVE_DISTRIBUTION_FUNCTION": string | null;
    "QUANTILE_FUNCTION": string | null;
    "STUDENTS_T_DISTRIBUTION": string | null;
    "CHI_SQUARED_DISTRIBUTION": string | null;
    "SNEDECORS_F_DISTRIBUTION": string | null;
    "UNIFORM_CONTINUOUS_DISTRIBUTION": string | null;
    "UNIFORM_DISCRETE_DISTRIBUTION": string | null;
    "NORMAL_DISTRIBUTION": string | null;
    "RANDOM_INTEGER": string | null;
    "RANDOM_NATURAL_NUMBER": string | null;
    "RANDOM_NATURAL_NUMBER_INCLUDING_0": string | null;
    "SPECIAL_FUNCTION": string | null;
    "SEMI_MAJOR_AXIS": string | null;
    "BINARY_RELATION_EQ": string | null;
    "BINARY_RELATION_NEQ": string | null;
    "BINARY_RELATION_LT": string | null;
    "BINARY_RELATION_GT": string | null;
    "BINARY_RELATION_LEQ": string | null;
    "BINARY_RELATION_GEQ": string | null;
    "BITWISE_OPERATOR_COMPL": string | null;
    "BITWISE_OPERATOR_AND": string | null;
    "BITWISE_OPERATOR_XOR": string | null;
    "BITWISE_OPERATOR_OR": string | null;
    "BITWISE_OPERATOR_LEFT_SHIFT": string | null;
    "BITWISE_OPERATOR_RIGHT_SHIFT": string | null;
    "BITWISE_OPERATOR_NAND": string | null;
    "BITWISE_OPERATOR_NOR": string | null;
    "BITWISE_OPERATOR_XNOR": string | null;
    "BOOLEAN_OPERATOR_AND": string | null;
    "BOOLEAN_OPERATOR_OR": string | null;
    "BOOLEAN_OPERATOR_NEG": string | null;
    "BOOLEAN_OPERATOR_NAND": string | null;
    "BOOLEAN_OPERATOR_NOR": string | null;
    "BOOLEAN_OPERATOR_XOR": string | null;
    "BOOLEAN_OPERATOR_IMP": string | null;
    "BOOLEAN_OPERATOR_CIMP": string | null;
    "BOOLEAN_OPERATOR_NIMP": string | null;
    "BOOLEAN_OPERATOR_CNIMP": string | null;
    "BOOLEAN_OPERATOR_EQV": string | null;
    "CALCULUS_OPERATOR_SUM": string | null;
    "CALCULUS_OPERATOR_PROD": string | null;
    "CALCULUS_OPERATOR_INT": string | null;
    "CALCULUS_OPERATOR_DER": string | null;
    "CALCULUS_OPERATOR_DER_LEFT": string | null;
    "CALCULUS_OPERATOR_DER_RIGHT": string | null;
    "CALCULUS_OPERATOR_DERN": string | null;
    "CALCULUS_OPERATOR_FORW_DIFF": string | null;
    "CALCULUS_OPERATOR_BACKW_DIFF": string | null;
    "CALCULUS_OPERATOR_AVG": string | null;
    "CALCULUS_OPERATOR_VAR": string | null;
    "CALCULUS_OPERATOR_STD": string | null;
    "CALCULUS_OPERATOR_MIN": string | null;
    "CALCULUS_OPERATOR_MAX": string | null;
    "CALCULUS_OPERATOR_SOLVE": string | null;
    "CONSTANT_VALUE_PI": string | null;
    "CONSTANT_VALUE_EULER": string | null;
    "CONSTANT_VALUE_EULER_MASCHERONI": string | null;
    "CONSTANT_VALUE_GOLDEN_RATIO": string | null;
    "CONSTANT_VALUE_PLASTIC": string | null;
    "CONSTANT_VALUE_EMBREE_TREFETHEN": string | null;
    "CONSTANT_VALUE_FEIGENBAUM_DELTA": string | null;
    "CONSTANT_VALUE_FEIGENBAUM_ALPHA": string | null;
    "CONSTANT_VALUE_TWIN_PRIME": string | null;
    "CONSTANT_VALUE_MEISSEL_MERTEENS": string | null;
    "CONSTANT_VALUE_BRAUN_TWIN_PRIME": string | null;
    "CONSTANT_VALUE_BRAUN_PRIME_QUADR": string | null;
    "CONSTANT_VALUE_BRUIJN_NEWMAN": string | null;
    "CONSTANT_VALUE_CATALAN": string | null;
    "CONSTANT_VALUE_LANDAU_RAMANUJAN": string | null;
    "CONSTANT_VALUE_VISWANATH": string | null;
    "CONSTANT_VALUE_LEGENDRE": string | null;
    "CONSTANT_VALUE_RAMANUJAN_SOLDNER": string | null;
    "CONSTANT_VALUE_ERDOS_BORWEIN": string | null;
    "CONSTANT_VALUE_BERNSTEIN": string | null;
    "CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING": string | null;
    "CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY": string | null;
    "CONSTANT_VALUE_GOLOMB_DICKMAN": string | null;
    "CONSTANT_VALUE_CAHEN": string | null;
    "CONSTANT_VALUE_LAPLACE_LIMIT": string | null;
    "CONSTANT_VALUE_ALLADI_GRINSTEAD": string | null;
    "CONSTANT_VALUE_LENGYEL": string | null;
    "CONSTANT_VALUE_LEVY": string | null;
    "CONSTANT_VALUE_APERY": string | null;
    "CONSTANT_VALUE_MILLS": string | null;
    "CONSTANT_VALUE_BACKHOUSE": string | null;
    "CONSTANT_VALUE_PORTER": string | null;
    "CONSTANT_VALUE_LIEB_QUARE_ICE": string | null;
    "CONSTANT_VALUE_NIVEN": string | null;
    "CONSTANT_VALUE_SIERPINSKI": string | null;
    "CONSTANT_VALUE_KHINCHIN": string | null;
    "CONSTANT_VALUE_FRANSEN_ROBINSON": string | null;
    "CONSTANT_VALUE_LANDAU": string | null;
    "CONSTANT_VALUE_PARABOLIC": string | null;
    "CONSTANT_VALUE_OMEGA": string | null;
    "CONSTANT_VALUE_MRB": string | null;
    "CONSTANT_VALUE_LI2": string | null;
    "CONSTANT_VALUE_GOMPERTZ": string | null;
    "CONSTANT_VALUE_LIGHT_SPEED": string | null;
    "CONSTANT_VALUE_GRAVITATIONAL_CONSTANT": string | null;
    "CONSTANT_VALUE_GRAVIT_ACC_EARTH": string | null;
    "CONSTANT_VALUE_PLANCK_CONSTANT": string | null;
    "CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED": string | null;
    "CONSTANT_VALUE_PLANCK_LENGTH": string | null;
    "CONSTANT_VALUE_PLANCK_MASS": string | null;
    "CONSTANT_VALUE_PLANCK_TIME": string | null;
    "CONSTANT_VALUE_LIGHT_YEAR": string | null;
    "CONSTANT_VALUE_ASTRONOMICAL_UNIT": string | null;
    "CONSTANT_VALUE_PARSEC": string | null;
    "CONSTANT_VALUE_KILOPARSEC": string | null;
    "CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL": string | null;
    "CONSTANT_VALUE_EARTH_RADIUS_POLAR": string | null;
    "CONSTANT_VALUE_EARTH_RADIUS_MEAN": string | null;
    "CONSTANT_VALUE_EARTH_MASS": string | null;
    "CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS": string | null;
    "CONSTANT_VALUE_MOON_RADIUS_MEAN": string | null;
    "CONSTANT_VALUE_MOON_MASS": string | null;
    "CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS": string | null;
    "CONSTANT_VALUE_SOLAR_RADIUS": string | null;
    "CONSTANT_VALUE_SOLAR_MASS": string | null;
    "CONSTANT_VALUE_MERCURY_RADIUS_MEAN": string | null;
    "CONSTANT_VALUE_MERCURY_MASS": string | null;
    "CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS": string | null;
    "CONSTANT_VALUE_VENUS_RADIUS_MEAN": string | null;
    "CONSTANT_VALUE_VENUS_MASS": string | null;
    "CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS": string | null;
    "CONSTANT_VALUE_MARS_RADIUS_MEAN": string | null;
    "CONSTANT_VALUE_MARS_MASS": string | null;
    "CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS": string | null;
    "CONSTANT_VALUE_JUPITER_RADIUS_MEAN": string | null;
    "CONSTANT_VALUE_JUPITER_MASS": string | null;
    "CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS": string | null;
    "CONSTANT_VALUE_SATURN_RADIUS_MEAN": string | null;
    "CONSTANT_VALUE_SATURN_MASS": string | null;
    "CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS": string | null;
    "CONSTANT_VALUE_URANUS_RADIUS_MEAN": string | null;
    "CONSTANT_VALUE_URANUS_MASS": string | null;
    "CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS": string | null;
    "CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN": string | null;
    "CONSTANT_VALUE_NEPTUNE_MASS": string | null;
    "CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS": string | null;
    "CONSTANT_VALUE_TRUE": string | null;
    "CONSTANT_VALUE_FALSE": string | null;
    "CONSTANT_VALUE_NPAR": string | null;
    "CONSTANT_VALUE_NAN": string | null;
    "FUNCTION_1_ARG_SIN": string | null;
    "FUNCTION_1_ARG_COS": string | null;
    "FUNCTION_1_ARG_TAN": string | null;
    "FUNCTION_1_ARG_CTAN": string | null;
    "FUNCTION_1_ARG_SEC": string | null;
    "FUNCTION_1_ARG_COSEC": string | null;
    "FUNCTION_1_ARG_ASIN": string | null;
    "FUNCTION_1_ARG_ACOS": string | null;
    "FUNCTION_1_ARG_ATAN": string | null;
    "FUNCTION_1_ARG_ACTAN": string | null;
    "FUNCTION_1_ARG_LN": string | null;
    "FUNCTION_1_ARG_LOG2": string | null;
    "FUNCTION_1_ARG_LOG10": string | null;
    "FUNCTION_1_ARG_RAD": string | null;
    "FUNCTION_1_ARG_EXP": string | null;
    "FUNCTION_1_ARG_SQRT": string | null;
    "FUNCTION_1_ARG_SINH": string | null;
    "FUNCTION_1_ARG_COSH": string | null;
    "FUNCTION_1_ARG_TANH": string | null;
    "FUNCTION_1_ARG_COTH": string | null;
    "FUNCTION_1_ARG_SECH": string | null;
    "FUNCTION_1_ARG_CSCH": string | null;
    "FUNCTION_1_ARG_DEG": string | null;
    "FUNCTION_1_ARG_ABS": string | null;
    "FUNCTION_1_ARG_SGN": string | null;
    "FUNCTION_1_ARG_FLOOR": string | null;
    "FUNCTION_1_ARG_CEIL": string | null;
    "FUNCTION_1_ARG_NOT": string | null;
    "FUNCTION_1_ARG_ARSINH": string | null;
    "FUNCTION_1_ARG_ARCOSH": string | null;
    "FUNCTION_1_ARG_ARTANH": string | null;
    "FUNCTION_1_ARG_ARCOTH": string | null;
    "FUNCTION_1_ARG_ARSECH": string | null;
    "FUNCTION_1_ARG_ARCSCH": string | null;
    "FUNCTION_1_ARG_SA": string | null;
    "FUNCTION_1_ARG_SINC": string | null;
    "FUNCTION_1_ARG_BELL_NUMBER": string | null;
    "FUNCTION_1_ARG_LUCAS_NUMBER": string | null;
    "FUNCTION_1_ARG_FIBONACCI_NUMBER": string | null;
    "FUNCTION_1_ARG_HARMONIC_NUMBER": string | null;
    "FUNCTION_1_ARG_IS_PRIME": string | null;
    "FUNCTION_1_ARG_PRIME_COUNT": string | null;
    "FUNCTION_1_ARG_EXP_INT": string | null;
    "FUNCTION_1_ARG_LOG_INT": string | null;
    "FUNCTION_1_ARG_OFF_LOG_INT": string | null;
    "FUNCTION_1_ARG_GAUSS_ERF": string | null;
    "FUNCTION_1_ARG_GAUSS_ERFC": string | null;
    "FUNCTION_1_ARG_GAUSS_ERF_INV": string | null;
    "FUNCTION_1_ARG_GAUSS_ERFC_INV": string | null;
    "FUNCTION_1_ARG_ULP": string | null;
    "FUNCTION_1_ARG_ISNAN": string | null;
    "FUNCTION_1_ARG_NDIG10": string | null;
    "FUNCTION_1_ARG_NFACT": string | null;
    "FUNCTION_1_ARG_ARCSEC": string | null;
    "FUNCTION_1_ARG_ARCCSC": string | null;
    "FUNCTION_1_ARG_GAMMA": string | null;
    "FUNCTION_1_ARG_LAMBERT_W0": string | null;
    "FUNCTION_1_ARG_LAMBERT_W1": string | null;
    "FUNCTION_1_ARG_SGN_GAMMA": string | null;
    "FUNCTION_1_ARG_LOG_GAMMA": string | null;
    "FUNCTION_1_ARG_DI_GAMMA": string | null;
    "FUNCTION_1_ARG_PARAM": string | null;
    "FUNCTION_2_ARG_LOG": string | null;
    "FUNCTION_2_ARG_MOD": string | null;
    "FUNCTION_2_ARG_BINOM_COEFF": string | null;
    "FUNCTION_2_ARG_BERNOULLI_NUMBER": string | null;
    "FUNCTION_2_ARG_STIRLING1_NUMBER": string | null;
    "FUNCTION_2_ARG_STIRLING2_NUMBER": string | null;
    "FUNCTION_2_ARG_WORPITZKY_NUMBER": string | null;
    "FUNCTION_2_ARG_EULER_NUMBER": string | null;
    "FUNCTION_2_ARG_KRONECKER_DELTA": string | null;
    "FUNCTION_2_ARG_EULER_POLYNOMIAL": string | null;
    "FUNCTION_2_ARG_HARMONIC_NUMBER": string | null;
    "FUNCTION_2_ARG_ROUND": string | null;
    "FUNCTION_2_ARG_NDIG": string | null;
    "FUNCTION_2_ARG_DIGIT10": string | null;
    "FUNCTION_2_ARG_FACTVAL": string | null;
    "FUNCTION_2_ARG_FACTEXP": string | null;
    "FUNCTION_2_ARG_ROOT": string | null;
    "FUNCTION_2_ARG_INC_GAMMA_LOWER": string | null;
    "FUNCTION_2_ARG_INC_GAMMA_UPPER": string | null;
    "FUNCTION_2_ARG_REG_GAMMA_LOWER": string | null;
    "FUNCTION_2_ARG_REG_GAMMA_UPPER": string | null;
    "FUNCTION_2_ARG_PERMUTATIONS": string | null;
    "FUNCTION_2_ARG_BETA": string | null;
    "FUNCTION_2_ARG_LOG_BETA": string | null;
    "FUNCTION_3_ARG_IF": string | null;
    "FUNCTION_3_ARG_CHI": string | null;
    "FUNCTION_3_ARG_CHI_LR": string | null;
    "FUNCTION_3_ARG_CHI_L": string | null;
    "FUNCTION_3_ARG_CHI_R": string | null;
    "FUNCTION_3_ARG_DIGIT": string | null;
    "FUNCTION_3_ARG_INC_BETA": string | null;
    "FUNCTION_3_ARG_REG_BETA": string | null;
    "FUNCTION_VARIADIC_IFF": string | null;
    "FUNCTION_VARIADIC_MIN": string | null;
    "FUNCTION_VARIADIC_MAX": string | null;
    "FUNCTION_VARIADIC_CONT_FRAC": string | null;
    "FUNCTION_VARIADIC_CONT_POL": string | null;
    "FUNCTION_VARIADIC_GCD": string | null;
    "FUNCTION_VARIADIC_LCM": string | null;
    "FUNCTION_VARIADIC_SUM": string | null;
    "FUNCTION_VARIADIC_PROD": string | null;
    "FUNCTION_VARIADIC_AVG": string | null;
    "FUNCTION_VARIADIC_VAR": string | null;
    "FUNCTION_VARIADIC_STD": string | null;
    "FUNCTION_VARIADIC_RND_LIST": string | null;
    "FUNCTION_VARIADIC_COALESCE": string | null;
    "FUNCTION_VARIADIC_OR": string | null;
    "FUNCTION_VARIADIC_AND": string | null;
    "FUNCTION_VARIADIC_XOR": string | null;
    "FUNCTION_VARIADIC_ARGMIN": string | null;
    "FUNCTION_VARIADIC_ARGMAX": string | null;
    "FUNCTION_VARIADIC_MEDIAN": string | null;
    "FUNCTION_VARIADIC_MODE": string | null;
    "FUNCTION_VARIADIC_BASE": string | null;
    "FUNCTION_VARIADIC_NDIST": string | null;
    "OPERATOR_PLUS": string | null;
    "OPERATOR_MINUS": string | null;
    "OPERATOR_MULTIPLY": string | null;
    "OPERATOR_DIVIDE": string | null;
    "OPERATOR_DIVIDE_QUOTIENT": string | null;
    "OPERATOR_POWER": string | null;
    "OPERATOR_FACT": string | null;
    "OPERATOR_MOD": string | null;
    "OPERATOR_PERC": string | null;
    "OPERATOR_TETRATION": string | null;
    "OPERATOR_SQUARE_ROOT": string | null;
    "OPERATOR_CUBE_ROOT": string | null;
    "OPERATOR_FOURTH_ROOT": string | null;
    "PARSER_SYMBOL_LEFT_PARENTHESES": string | null;
    "PARSER_SYMBOL_RIGHT_PARENTHESES": string | null;
    "PARSER_SYMBOL_COMMA": string | null;
    "PARSER_SYMBOL_SEMI": string | null;
    "PARSER_SYMBOL_BLANK": string | null;
    "PARSER_SYMBOL_NUMBER_INTEGER": string | null;
    "PARSER_SYMBOL_NUMBER_DECIMAL": string | null;
    "PARSER_SYMBOL_NUMBER_LEADING_ZERO": string | null;
    "PARSER_SYMBOL_NUMBER_SCI_NOTATION": string | null;
    "PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO": string | null;
    "PARSER_SYMBOL_NUMBER_FRACTIONS": string | null;
    "PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS": string | null;
    "PARSER_SYMBOL_UNICODE_MATH": string | null;
    "DIMENSIONLESS_UNIT_PERC": string | null;
    "DIMENSIONLESS_UNIT_PERM": string | null;
    "DIMENSIONLESS_UNIT_YOTTA": string | null;
    "DIMENSIONLESS_UNIT_ZETTA": string | null;
    "DIMENSIONLESS_UNIT_EXA": string | null;
    "DIMENSIONLESS_UNIT_PETA": string | null;
    "DIMENSIONLESS_UNIT_TERA": string | null;
    "DIMENSIONLESS_UNIT_GIGA": string | null;
    "DIMENSIONLESS_UNIT_MEGA": string | null;
    "DIMENSIONLESS_UNIT_KILO": string | null;
    "DIMENSIONLESS_UNIT_HECTO": string | null;
    "DIMENSIONLESS_UNIT_DECA": string | null;
    "DIMENSIONLESS_UNIT_DECI": string | null;
    "DIMENSIONLESS_UNIT_CENTI": string | null;
    "DIMENSIONLESS_UNIT_MILLI": string | null;
    "DIMENSIONLESS_UNIT_MICRO": string | null;
    "DIMENSIONLESS_UNIT_NANO": string | null;
    "DIMENSIONLESS_UNIT_PICO": string | null;
    "DIMENSIONLESS_UNIT_FEMTO": string | null;
    "DIMENSIONLESS_UNIT_ATTO": string | null;
    "DIMENSIONLESS_UNIT_ZEPTO": string | null;
    "DIMENSIONLESS_UNIT_YOCTO": string | null;
    "UNIT_METRE": string | null;
    "UNIT_KILOMETRE": string | null;
    "UNIT_CENTIMETRE": string | null;
    "UNIT_MILLIMETRE": string | null;
    "UNIT_INCH": string | null;
    "UNIT_YARD": string | null;
    "UNIT_FEET": string | null;
    "UNIT_MILE": string | null;
    "UNIT_NAUTICAL_MILE": string | null;
    "UNIT_METRE2": string | null;
    "UNIT_CENTIMETRE2": string | null;
    "UNIT_MILLIMETRE2": string | null;
    "UNIT_ARE": string | null;
    "UNIT_HECTARE": string | null;
    "UNIT_ACRE": string | null;
    "UNIT_KILOMETRE2": string | null;
    "UNIT_MILLIMETRE3": string | null;
    "UNIT_CENTIMETRE3": string | null;
    "UNIT_METRE3": string | null;
    "UNIT_KILOMETRE3": string | null;
    "UNIT_MILLILITRE": string | null;
    "UNIT_LITRE": string | null;
    "UNIT_GALLON": string | null;
    "UNIT_PINT": string | null;
    "UNIT_SECOND": string | null;
    "UNIT_MILLISECOND": string | null;
    "UNIT_MINUTE": string | null;
    "UNIT_HOUR": string | null;
    "UNIT_DAY": string | null;
    "UNIT_WEEK": string | null;
    "UNIT_JULIAN_YEAR": string | null;
    "UNIT_KILOGRAM": string | null;
    "UNIT_GRAM": string | null;
    "UNIT_MILLIGRAM": string | null;
    "UNIT_DECAGRAM": string | null;
    "UNIT_TONNE": string | null;
    "UNIT_OUNCE": string | null;
    "UNIT_POUND": string | null;
    "UNIT_BIT": string | null;
    "UNIT_KILOBIT": string | null;
    "UNIT_MEGABIT": string | null;
    "UNIT_GIGABIT": string | null;
    "UNIT_TERABIT": string | null;
    "UNIT_PETABIT": string | null;
    "UNIT_EXABIT": string | null;
    "UNIT_ZETTABIT": string | null;
    "UNIT_YOTTABIT": string | null;
    "UNIT_BYTE": string | null;
    "UNIT_KILOBYTE": string | null;
    "UNIT_MEGABYTE": string | null;
    "UNIT_GIGABYTE": string | null;
    "UNIT_TERABYTE": string | null;
    "UNIT_PETABYTE": string | null;
    "UNIT_EXABYTE": string | null;
    "UNIT_ZETTABYTE": string | null;
    "UNIT_YOTTABYTE": string | null;
    "UNIT_JOULE": string | null;
    "UNIT_ELECTRONO_VOLT": string | null;
    "UNIT_KILO_ELECTRONO_VOLT": string | null;
    "UNIT_MEGA_ELECTRONO_VOLT": string | null;
    "UNIT_GIGA_ELECTRONO_VOLT": string | null;
    "UNIT_TERA_ELECTRONO_VOLT": string | null;
    "UNIT_METRE_PER_SECOND": string | null;
    "UNIT_KILOMETRE_PER_HOUR": string | null;
    "UNIT_MILE_PER_HOUR": string | null;
    "UNIT_KNOT": string | null;
    "UNIT_METRE_PER_SECOND2": string | null;
    "UNIT_KILOMETRE_PER_HOUR2": string | null;
    "UNIT_MILE_PER_HOUR2": string | null;
    "UNIT_RADIAN_ARC": string | null;
    "UNIT_DEGREE_ARC": string | null;
    "UNIT_MINUTE_ARC": string | null;
    "UNIT_SECOND_ARC": string | null;

    /**
     * Displays user-defined text resources in the console. The default value is shown and, if the current
     * value is different from the default value, the current value is also shown. The method can be very
     * useful when analyzing the correctness and completeness of defined resources, especially when translating
     * into other languages.
     */
    "print"(): void;

    /**
     * Displays the initial text resource definitions as source code. The method can be very useful when
     * creating your own text resources, as it can be used as a basis for translation.
     */
    "printInitSrc"(): void;
}

export interface StringResourcesConstructor {
    readonly prototype: StringResources;

    /**
     * Creates a native StringResources.
     * @returns A new owning native handle. Release it with delete().
     */
    new(): StringResources;

    /**
     * Default translations, currently English
     * @returns Returns a new instance of StringResources object containing Default translations, currently
     *   English. Release the returned native handle with delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "languageDefault"(): StringResources | null;

    /**
     * Simplified Chinese translations
     * @returns Returns a new instance of StringResources object containing English translations. Release the
     *   returned native handle with delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "languageChinese"(): StringResources | null;

    /**
     * English translations
     * @returns Returns a new instance of StringResources object containing English translations. Release the
     *   returned native handle with delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "languageEnglish"(): StringResources | null;

    /**
     * French translations
     * @returns Returns a new instance of StringResources object containing French translations. Release the
     *   returned native handle with delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "languageFrench"(): StringResources | null;

    /**
     * German translations
     * @returns Returns a new instance of StringResources object containing German translations. Release the
     *   returned native handle with delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "languageGerman"(): StringResources | null;

    /**
     * Italian translations
     * @returns Returns a new instance of StringResources object containing Italian translations. Release the
     *   returned native handle with delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "languageItalian"(): StringResources | null;

    /**
     * Polish translations
     * @returns Returns a new instance of StringResources object containing Polish translations. Release the
     *   returned native handle with delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "languagePolish"(): StringResources | null;

    /**
     * Portuguese translations
     * @returns Returns a new instance of StringResources object containing Portuguese translations. Release
     *   the returned native handle with delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "languagePortuguese"(): StringResources | null;

    /**
     * Spanish translations
     * @returns Returns a new instance of StringResources object containing Spanish translations. Release the
     *   returned native handle with delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "languageSpanish"(): StringResources | null;

    /**
     * Returns translation that best matches to provided language code. Supported languages: English, French,
     * German, Italian, Polish, Portuguese, Spanish, Simplified Chinese.
     * @param p0 - Supported language codes: en, fr, de, it, pl, pt, es, zh.
     * @returns Returns translation that matches the language code. If language code does not belong to the
     *   supported language codes English translation is returned. Release the returned native handle with
     *   delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "bestMatchingLanguage"(p0: string | null): StringResources | null;

    /**
     * Returns translation that best matches to provided language code. Supported languages: English, French,
     * German, Italian, Polish, Portuguese, Spanish, Simplified Chinese.
     * @param p0 - Supported language codes: en, fr, de, it, pl, pt, es, zh.
     * @returns Returns translation that matches the language code. If language code does not belong to the
     *   supported language codes English translation is returned. Release the returned native handle with
     *   delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "bestMatchingLanguage"(p0: string): StringResources | null;

    /**
     * Returns translation that best matches to the current system locale. Supported languages: English,
     * French, German, Italian, Polish, Portuguese, Spanish, Simplified Chinese.
     * @returns Returns translation that matches the language code in locale. If language code does not belong
     *   to the supported languages English translation is returned. Release the returned native handle with
     *   delete() when non-null.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringModelStatics.setDefaultStringResources}
     */
    "bestMatchingLanguage"(): StringResources | null;
}

export interface Token extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): Token;

    "tokenStr": string | null;
    "keyWord": string | null;
    "tokenId": number;
    "tokenTypeId": number;
    "tokenLevel": number;
    "tokenValue": number;
    "looksLike": string | null;

    /**
     * Tests whether this token is a prefix unary operator.
     * @returns true for a prefix unary operator; false otherwise.
     */
    "isUnaryLeftOperator"(): boolean;

    /**
     * Tests whether this token is a postfix unary operator.
     * @returns true for a postfix unary operator; false otherwise.
     */
    "isUnaryRightOperator"(): boolean;

    /**
     * Tests whether this token is a left parenthesis.
     * @returns true for a left parenthesis; false otherwise.
     */
    "isLeftParenthesis"(): boolean;

    /**
     * Tests whether this token is a right parenthesis.
     * @returns true for a right parenthesis; false otherwise.
     */
    "isRightParenthesis"(): boolean;

    /**
     * Tests whether this token represents an argument, constant or unit.
     * @returns true for an argument, constant or unit; false otherwise.
     */
    "isIdentifier"(): boolean;

    /**
     * Tests whether this token is a binary operator.
     * @returns true for a binary operator; false otherwise.
     */
    "isBinaryOperator"(): boolean;

    /**
     * Tests whether this token separates parameters.
     * @returns true for a comma token; false otherwise.
     */
    "isParameterSeparator"(): boolean;

    /**
     * Tests whether this token represents a number.
     * @returns true for a number token; false otherwise.
     */
    "isNumber"(): boolean;

    /**
     * Tests whether this token text starts with `[`.
     * @returns true if the text starts with a left square bracket; false otherwise.
     */
    "isSpecialTokenName"(): boolean;

    /**
     * Tests whether this token is a Unicode square, cube or fourth root operator.
     * @returns true for a supported Unicode root operator; false otherwise.
     */
    "isUnicodeRootOperator"(): boolean;

    /**
     * Returns a copy of this token.
     * @returns A new token with the same field values. Release the returned native handle with delete() when
     *   non-null.
     */
    "clone"(): Token | null;
}

export interface TokenConstructor {
    readonly prototype: Token;

    /**
     * Default constructor
     * @returns A new owning native handle. Release it with delete().
     */
    new(): Token;

    /**
     * Copies the native token.
     * @param source - Native token to copy.
     * @returns A new owning native handle. Release it with delete().
     */
    new(source: Token): Token;

    readonly "NOT_MATCHED": number;

    /**
     * Creates token representing multiplication operator.
     * @returns token representing multiplication operator. Release the returned native handle with delete()
     *   when non-null.
     */
    "makeMultiplyToken"(): Token | null;

    /**
     * Creates token representing number.
     * @returns token representing number. Release the returned native handle with delete() when non-null.
     */
    "makeNumberToken"(): Token | null;

    /**
     * Creates a number token with the specified value and nesting level.
     * @param p0 - The numeric value.
     * @param p1 - The token nesting level.
     * @returns The new number token. Release the returned native handle with delete() when non-null.
     */
    "makeNumberToken"(p0: number, p1: number | Int32Value): Token | null;

    /**
     * Creates token representing comma parser symbol.
     * @returns token representing comma parser symbol. Release the returned native handle with delete() when
     *   non-null.
     */
    "makeCommaToken"(): Token | null;

    /**
     * Creates token representing comma parser symbol.
     * @param p0 - Level of token in the token lists.
     * @returns token representing comma parser symbol. Release the returned native handle with delete() when
     *   non-null.
     */
    "makeCommaToken"(p0: number | Int32Value): Token | null;

    /**
     * Creates token representing left parenthesis parser symbol.
     * @returns token representing left parenthesis parser symbol. Release the returned native handle with
     *   delete() when non-null.
     */
    "makeLeftParenthesisToken"(): Token | null;

    /**
     * Creates token representing left parenthesis parser symbol.
     * @param p0 - Level of token in the token lists.
     * @returns token representing left parenthesis parser symbol. Release the returned native handle with
     *   delete() when non-null.
     */
    "makeLeftParenthesisToken"(p0: number | Int32Value): Token | null;

    /**
     * Creates token representing right parenthesis parser symbol.
     * @returns token representing right parenthesis parser symbol. Release the returned native handle with
     *   delete() when non-null.
     */
    "makeRightParenthesisToken"(): Token | null;

    /**
     * Creates token representing right parenthesis parser symbol.
     * @param p0 - Level of token in the token lists.
     * @returns token representing right parenthesis parser symbol. Release the returned native handle with
     *   delete() when non-null.
     */
    "makeRightParenthesisToken"(p0: number | Int32Value): Token | null;

    /**
     * Creates token representing derivative calculus operator.
     * @returns token representing derivative calculus operator. Release the returned native handle with
     *   delete() when non-null.
     */
    "makeDerToken"(): Token | null;

    /**
     * Creates token representing derivative calculus operator.
     * @param p0 - Level of token in the token lists.
     * @returns token representing derivative calculus operator. Release the returned native handle with
     *   delete() when non-null.
     */
    "makeDerToken"(p0: number | Int32Value): Token | null;

    /**
     * Creates a token for an argument at the specified nesting level.
     * @param p0 - The argument name.
     * @param p1 - The argument index in the expression.
     * @param p2 - The token nesting level.
     * @param p3 - The initial numeric value.
     * @returns The new argument token. Release the returned native handle with delete() when non-null.
     */
    "makeArgumentToken"(p0: string | null, p1: number | Int32Value, p2: number | Int32Value, p3: number): Token | null;

    /**
     * Returns token type description.
     * @param p0 - Token type id
     * @returns String representing token type description.
     */
    "getTokenTypeDescription"(p0: number | Int32Value): string | null;
}

export interface KeyWord extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): KeyWord;

    "wordString": string | null;
    "wordId": number;
    "wordTypeId": number;
    "description": string | null;
    "syntax": string | null;
    "since": string | null;
}

export interface KeyWordConstructor {
    readonly prototype: KeyWord;

    /**
     * Creates an empty keyword with no assigned token or token type.
     * @returns A new owning native handle. Release it with delete().
     */
    new(): KeyWord;

    /**
     * Constructor - creates key words form wordString wordId wordTypId syntax since
     * @param word - the word string (refers to below interfaces)
     * @param description - the word description
     * @param id - the word identifier (refers to below interfaces)
     * @param syntax - the word syntax
     * @param since - the word version since
     * @param typeId - the word type (refers to below interfaces)
     * @returns A new owning native handle. Release it with delete().
     */
    new(word: string | null, description: string | null, id: number, syntax: string | null, since: string | null, typeId: number): KeyWord;

    readonly "NO_DEFINITION": number;

    /**
     * Checks whether the specified keyword is in the form of a function.
     * @param p0 - Provided key word.
     * @returns True in case kw is Function1Arg, Function2Arg, Function3Arg, FunctionVariadic, Function,
     *   RecursiveArgument otherwise returns false.
     * @see {@link parsertokens_Function1ArgStatics}
     * @see {@link parsertokens_Function2ArgStatics}
     * @see {@link parsertokens_Function3ArgStatics}
     * @see {@link parsertokens_FunctionVariadicStatics}
     * @see {@link Function}
     * @see {@link RecursiveArgument}
     */
    "isFunctionForm"(p0: KeyWord | null): boolean;
}

export interface PrimesCache extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): PrimesCache;

    /**
     * Returns computing time of Eratosthenes Sieve
     * @returns Computing time in seconds
     */
    "getComputingTime"(): number;

    /**
     * Returns cache status
     * @returns PrimesCache.CACHE_EMPTY or PrimesCache.CACHING_FINISHED;
     */
    "getCacheStatus"(): boolean;

    /**
     * Returns number of found primes.
     * @returns Number of found primes.
     */
    "getNumberOfPrimes"(): number;

    /**
     * Returns cache range.
     * @returns Maximum integera number in cache/
     */
    "getMaxNumInCache"(): number;

    /**
     * Check whether given number is prime
     * @param p0 - Given integer number.
     * @returns PrimesCache.IS_PRIME or PrimesCache.IS_NOT_PRIME or PrimesCache.NOT_IN_CACHE
     */
    "primeTest"(p0: number | Int32Value): number;

    /**
     * Returns true in case when primes cache initialization was successful, otherwise returns false.
     * @returns Returns true in case when primes cache initialization was successful, otherwise returns false.
     */
    "isInitSuccessful"(): boolean;
}

export interface PrimesCacheConstructor {
    readonly prototype: PrimesCache;

    /**
     * Default constructor - setting prime cache for a default range if integers
     * @returns A new owning native handle. Release it with delete().
     */
    new(): PrimesCache;

    /**
     * Constructor - setting prime cache for a given range if integers
     * @param limit - Range of integers to be stored in prime cache
     * @returns A new owning native handle. Release it with delete().
     */
    new(limit: number): PrimesCache;

    readonly "DEFAULT_MAX_NUM_IN_CACHE": number;
    readonly "CACHE_EMPTY": boolean;
    readonly "CACHING_FINISHED": boolean;
    readonly "IS_PRIME": number;
    readonly "IS_NOT_PRIME": number;
    readonly "NOT_IN_CACHE": number;
}

export interface SpecialValue extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): SpecialValue;

    "x": number;
    "xFrom": number;
    "xTo": number;
    "fv": number;
    "fvdeg": number;
}

export interface SpecialValueConstructor {
    readonly prototype: SpecialValue;

    /**
     * Main constructor - functions only with main unit
     * @param x - The value of x from f(x)
     * @param value - The value of f(x) for a given x
     * @returns A new owning native handle. Release it with delete().
     */
    new(x: number, value: number): SpecialValue;

    /**
     * Constructor - functions only with values in radians and degrees
     * @param x - The value of x from f(x)
     * @param value - The value of f(x) in radians for a given x
     * @param degrees - The value of f(x) in degrees for a given x
     * @returns A new owning native handle. Release it with delete().
     */
    new(x: number, value: number, degrees: number): SpecialValue;

    "specialCasesDisabled": boolean;
    readonly "EPSILON": number;
}

export interface SpecialValueTrigonometric extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): SpecialValueTrigonometric;

    "factor": number;
    "xrad": number;
    "xdeg": number;
    "xradFrom": number;
    "xradTo": number;
    "sin": number;
    "cos": number;
    "tan": number;
    "ctan": number;
    "sec": number;
    "csc": number;
}

export interface SpecialValueTrigonometricConstructor {
    readonly prototype: SpecialValueTrigonometric;

    /**
     * Main constructor
     * @param factor - The angle provided as a factor of PI
     * @param sin - The sine function value
     * @param cos - The cosine function value
     * @param tan - The tangent function value
     * @param ctan - The cotangent function value
     * @param sec - The secant function value
     * @param csc - The cosecant function value
     * @returns A new owning native handle. Release it with delete().
     */
    new(factor: number, sin: number, cos: number, tan: number, ctan: number, sec: number, csc: number): SpecialValueTrigonometric;

    readonly "EPSILON": number;
    readonly "SIN_0": number;
    readonly "COS_0": number;
    readonly "TAN_0": number;
    readonly "CTAN_0": number;
    readonly "SEC_0": number;
    readonly "CSC_0": number;
    readonly "SIN_30": number;
    readonly "COS_30": number;
    readonly "TAN_30": number;
    readonly "CTAN_30": number;
    readonly "SEC_30": number;
    readonly "CSC_30": number;
    readonly "SIN_45": number;
    readonly "COS_45": number;
    readonly "TAN_45": number;
    readonly "CTAN_45": number;
    readonly "SEC_45": number;
    readonly "CSC_45": number;
    readonly "SIN_60": number;
    readonly "COS_60": number;
    readonly "TAN_60": number;
    readonly "CTAN_60": number;
    readonly "SEC_60": number;
    readonly "CSC_60": number;
    readonly "SIN_90": number;
    readonly "COS_90": number;
    readonly "TAN_90": number;
    readonly "CTAN_90": number;
    readonly "SEC_90": number;
    readonly "CSC_90": number;
    readonly "SIN_120": number;
    readonly "COS_120": number;
    readonly "TAN_120": number;
    readonly "CTAN_120": number;
    readonly "SEC_120": number;
    readonly "CSC_120": number;
    readonly "SIN_135": number;
    readonly "COS_135": number;
    readonly "TAN_135": number;
    readonly "CTAN_135": number;
    readonly "SEC_135": number;
    readonly "CSC_135": number;
    readonly "SIN_150": number;
    readonly "COS_150": number;
    readonly "TAN_150": number;
    readonly "CTAN_150": number;
    readonly "SEC_150": number;
    readonly "CSC_150": number;
    readonly "SIN_180": number;
    readonly "COS_180": number;
    readonly "TAN_180": number;
    readonly "CTAN_180": number;
    readonly "SEC_180": number;
    readonly "CSC_180": number;
    readonly "SIN_210": number;
    readonly "COS_210": number;
    readonly "TAN_210": number;
    readonly "CTAN_210": number;
    readonly "SEC_210": number;
    readonly "CSC_210": number;
    readonly "SIN_225": number;
    readonly "COS_225": number;
    readonly "TAN_225": number;
    readonly "CTAN_225": number;
    readonly "SEC_225": number;
    readonly "CSC_225": number;
    readonly "SIN_240": number;
    readonly "COS_240": number;
    readonly "TAN_240": number;
    readonly "CTAN_240": number;
    readonly "SEC_240": number;
    readonly "CSC_240": number;
    readonly "SIN_270": number;
    readonly "COS_270": number;
    readonly "TAN_270": number;
    readonly "CTAN_270": number;
    readonly "SEC_270": number;
    readonly "CSC_270": number;
    readonly "SIN_300": number;
    readonly "COS_300": number;
    readonly "TAN_300": number;
    readonly "CTAN_300": number;
    readonly "SEC_300": number;
    readonly "CSC_300": number;
    readonly "SIN_315": number;
    readonly "COS_315": number;
    readonly "TAN_315": number;
    readonly "CTAN_315": number;
    readonly "SEC_315": number;
    readonly "CSC_315": number;
    readonly "SIN_330": number;
    readonly "COS_330": number;
    readonly "TAN_330": number;
    readonly "CTAN_330": number;
    readonly "SEC_330": number;
    readonly "CSC_330": number;
    readonly "SIN_360": number;
    readonly "COS_360": number;
    readonly "TAN_360": number;
    readonly "CTAN_360": number;
    readonly "SEC_360": number;
    readonly "CSC_360": number;
    readonly "valuesListTrig": NativeFixedArray<SpecialValueTrigonometric | null>;

    /**
     * Returns the native valuesListAsin special-value list.
     * @returns The native collection handle, or null. Release each returned handle with delete().
     */
    get valuesListAsin(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    /**
     * Replaces the native valuesListAsin special-value list.
     * @param value - Native collection, copied JavaScript values, or null.
     */
    set valuesListAsin(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    /**
     * Returns the native valuesListAcos special-value list.
     * @returns The native collection handle, or null. Release each returned handle with delete().
     */
    get valuesListAcos(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    /**
     * Replaces the native valuesListAcos special-value list.
     * @param value - Native collection, copied JavaScript values, or null.
     */
    set valuesListAcos(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    /**
     * Returns the native valuesListAtan special-value list.
     * @returns The native collection handle, or null. Release each returned handle with delete().
     */
    get valuesListAtan(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    /**
     * Replaces the native valuesListAtan special-value list.
     * @param value - Native collection, copied JavaScript values, or null.
     */
    set valuesListAtan(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    /**
     * Returns the native valuesListActan special-value list.
     * @returns The native collection handle, or null. Release each returned handle with delete().
     */
    get valuesListActan(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    /**
     * Replaces the native valuesListActan special-value list.
     * @param value - Native collection, copied JavaScript values, or null.
     */
    set valuesListActan(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    /**
     * Returns the native valuesListAsec special-value list.
     * @returns The native collection handle, or null. Release each returned handle with delete().
     */
    get valuesListAsec(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    /**
     * Replaces the native valuesListAsec special-value list.
     * @param value - Native collection, copied JavaScript values, or null.
     */
    set valuesListAsec(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    /**
     * Returns the native valuesListAcsc special-value list.
     * @returns The native collection handle, or null. Release each returned handle with delete().
     */
    get valuesListAcsc(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    /**
     * Replaces the native valuesListAcsc special-value list.
     * @param value - Native collection, copied JavaScript values, or null.
     */
    set valuesListAcsc(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    /**
     * Returns special values of trigonometric functions
     * @param p0 - The angle provided in radians
     * @returns Returns special values of trigonometric functions object if the special value was found for a
     *   given x otherwise returns null Release the returned native handle with delete() when non-null.
     */
    "getSpecialValueTrigonometric"(p0: number): SpecialValueTrigonometric | null;

    /**
     * Returns special value of inverse trigonometric sine function
     * @param p0 - The sine value
     * @returns Returns special value object if special value was found, otherwise returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    "getSpecialValueAsin"(p0: number): SpecialValue | null;

    /**
     * Returns special value of inverse trigonometric cosine function
     * @param p0 - The cosine value
     * @returns Returns special value object if special value was found, otherwise returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    "getSpecialValueAcos"(p0: number): SpecialValue | null;

    /**
     * Returns special value of inverse trigonometric tangent function
     * @param p0 - The tangent value
     * @returns Returns special value object if special value was found, otherwise returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    "getSpecialValueAtan"(p0: number): SpecialValue | null;

    /**
     * Returns special value of inverse trigonometric cotangent function
     * @param p0 - The cotangent value
     * @returns Returns special value object if special value was found, otherwise returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    "getSpecialValueActan"(p0: number): SpecialValue | null;

    /**
     * Returns special value of inverse trigonometric secant function
     * @param p0 - The secant value
     * @returns Returns special value object if special value was found, otherwise returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    "getSpecialValueAsec"(p0: number): SpecialValue | null;

    /**
     * Returns special value of inverse trigonometric cosecant function
     * @param p0 - The cosecant value
     * @returns Returns special value object if special value was found, otherwise returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    "getSpecialValueAcsc"(p0: number): SpecialValue | null;
}

export interface IRandom extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): IRandom;

    /**
     * Generates a native integer in [0, abs(bound)).
     * @param p0 - Nonzero signed 64-bit bound whose absolute value is representable.
     * @returns The generated integer as bigint.
     */
    "nextInt"(p0: bigint): bigint;

    /**
     * Generates an integer using the native default bound.
     * @returns The generated integer as bigint.
     */
    "nextInt"(): bigint;

    /**
     * Generates a random number in [0, 1).
     * @returns The generated number.
     */
    "nextDouble"(): number;

    /**
     * Sets the native random generator seed.
     * @param p0 - Unsigned 32-bit seed.
     */
    "setSeed"(p0: number): void;
}

export interface IRandomConstructor {
    readonly prototype: IRandom;
    /**
     * Creates a native random-generator adapter for synchronous JavaScript callbacks.
     * @param implementation - Implementation of nextInt, nextDouble and setSeed.
     * @returns An owning native handle. Release it with delete().
     */
    readonly implement: (implementation: IRandomImplementation) => IRandom;
}

export interface Random extends IRandom {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): Random;
}

export interface RandomConstructor extends Omit<IRandomConstructor, 'prototype'> {
    readonly prototype: Random;

    /**
     * Creates a native random generator with a random seed.
     * @returns A new owning native handle. Release it with delete().
     */
    new(): Random;

    /**
     * Creates a native random generator with the supplied seed.
     * @param seed - Unsigned 32-bit seed.
     * @returns A new owning native handle. Release it with delete().
     */
    new(seed: number): Random;
}

export interface JavaCCToken extends NativeHandleBase {
    readonly next: JavaCCToken | null;
    readonly specialToken: JavaCCToken | null;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): JavaCCToken;

    "kind": number;
    "beginLine": number;
    "beginColumn": number;
    "endLine": number;
    "endColumn": number;
    "image": string;

    /**
     * An optional attribute value of the Token. Tokens which are not used as syntactic sugar will often
     * contain meaningful values that will be used later on by the compiler or interpreter. This attribute
     * value is often different from the image. Any subclass of Token that actually wants to return a non-null
     * value can override this method as appropriate.
     * @returns null; native token object values are not exposed by this binding.
     */
    "getValue"(): null;

    /**
     * Returns the image.
     * @returns The native token image.
     */
    "toString"(): string;
}

export interface JavaCCTokenConstructor {
    readonly prototype: JavaCCToken;

    /**
     * No-argument constructor
     * @returns A new owning native handle. Release it with delete().
     */
    new(): JavaCCToken;

    /**
     * Constructs a new token for the specified Image.
     * @param kind - Native token kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: number | Int32Value): JavaCCToken;

    /**
     * Constructs a new token for the specified Image and Kind.
     * @param kind - Native token kind.
     * @param image - Token image.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: number | Int32Value, image: string): JavaCCToken;

    /**
     * Creates a native lexer token for the specified kind and optional image.
     * @param p0 - Native token kind.
     * @param p1 - Token image.
     * @returns A new owning token handle. Release it with delete().
     */
    "newToken"(p0: number | Int32Value, p1: string): JavaCCToken;

    /**
     * Creates a native lexer token for the specified kind and optional image.
     * @param p0 - Native token kind.
     * @returns A new owning token handle. Release it with delete().
     */
    "newToken"(p0: number | Int32Value): JavaCCToken;
}

export interface TokenMgrError extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): TokenMgrError;

    /**
     * You can also modify the body of this method to customize your error messages. For example, cases like
     * LOOP_DETECTED and INVALID_LEXICAL_STATE are not of end-users concern, so you can return something like :
     *
     * "Internal Error : Please file a bug report .... "
     *
     * from this method for such cases in the release version of your parser.
     * @returns The native lexer error message.
     */
    "getMessage"(): string;
}

export interface TokenMgrErrorConstructor {
    readonly prototype: TokenMgrError;

    /**
     * No arg constructor.
     * @returns A new owning native handle. Release it with delete().
     */
    new(): TokenMgrError;

    /**
     * Constructor with message and reason.
     * @param message - Native error message.
     * @param reason - Native lexer error reason code.
     * @returns A new owning native handle. Release it with delete().
     */
    new(message: string, reason: number | Int32Value): TokenMgrError;

    /**
     * Full Constructor.
     * @param EOFSeen - Whether the lexer reached end of input.
     * @param lexState - Native lexical state.
     * @param line - Error line number.
     * @param column - Error column number.
     * @param errorAfter - Text preceding the invalid character.
     * @param curChar - Invalid native character.
     * @param reason - Native lexer error reason code.
     * @returns A new owning native handle. Release it with delete().
     */
    new(EOFSeen: boolean, lexState: number | Int32Value, line: number | Int32Value, column: number | Int32Value, errorAfter: string, curChar: string, reason: number | Int32Value): TokenMgrError;

    readonly "LEXICAL_ERROR": number;
    readonly "STATIC_LEXER_ERROR": number;
    readonly "INVALID_LEXICAL_STATE": number;
    readonly "LOOP_DETECTED": number;
}

export interface ParseException extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): ParseException;

    "currentToken": JavaCCToken;

    /**
     * Returns the native expected token sequences.
     * @returns The native collection handle, or null. Release each returned handle with delete().
     */
    get expectedTokenSequences(): NativeTokenSequences | null;

    /**
     * Replaces the native expected token sequences.
     * @param value - Native collection, copied JavaScript values, or null.
     */
    set expectedTokenSequences(value: NativeTokenSequences | ReadonlyArray<NativeFixedArray<number> | ReadonlyArray<number> | null> | null);

    /**
     * Returns the native token image table.
     * @returns The native collection handle, or null. Release each returned handle with delete().
     */
    get tokenImage(): NativeFixedArray<string> | null;

    /**
     * Replaces the native token image table.
     * @param value - Native collection, copied JavaScript values, or null.
     */
    set tokenImage(value: NativeFixedArray<string> | ReadonlyArray<string> | null);
}

export interface ParseExceptionConstructor {
    readonly prototype: ParseException;

    /**
     * The following constructors are for use by you for whatever purpose you can think of. Constructing the
     * exception in this manner makes the exception behave in the normal way - i.e., as documented in the class
     * "Throwable". The fields "errorToken", "expectedTokenSequences", and "tokenImage" do not contain relevant
     * information. The JavaCC generated code does not use these constructors.
     * @returns A new owning native handle. Release it with delete().
     */
    new(): ParseException;

    /**
     * Constructor with message.
     * @param message - Native error message.
     * @returns A new owning native handle. Release it with delete().
     */
    new(message: string): ParseException;

    /**
     * This constructor is used by the method "generateParseException" in the generated parser. Calling this
     * constructor generates a new object of this type with the fields "currentToken",
     * "expectedTokenSequences", and "tokenImage" set.
     * @param currentToken - Last successfully consumed native token.
     * @param expectedTokenSequences - Native expected-token rows, copied JavaScript rows, or null.
     * @param tokenImage - Native token image table, copied JavaScript values, or null.
     * @returns A new owning native handle. Release it with delete().
     */
    new(currentToken: JavaCCToken, expectedTokenSequences: NativeTokenSequences | ReadonlyArray<NativeFixedArray<number> | ReadonlyArray<number> | null> | null, tokenImage: NativeFixedArray<string> | ReadonlyArray<string> | null): ParseException;
}

export interface ReaderStream extends NativeHandleBase {
    /**
     * Reads native character code units into a JavaScript buffer.
     * @param buffer - Destination buffer of native character code units, or null.
     * @param offset - First destination position.
     * @param length - Maximum number of native character code units to read.
     * @returns The native read count, or the native end-of-stream result.
     */
    read(buffer: Uint32Array | null, offset: number | Int32Value, length: number): number;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): ReaderStream;
}

export interface ReaderStreamConstructor {
    readonly prototype: ReaderStream;

    /**
     * Creates a native ReaderStream.
     * @returns A new owning native handle. Release it with delete().
     */
    new(): ReaderStream;
}

export interface CharStream extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): CharStream;

    /**
     * Sets the native character stream tab size.
     * @param p0 - Token offset relative to the current parser position.
     */
    "setTabSize"(p0: number | Int32Value): void;

    /**
     * Returns the native character stream tab size.
     * @returns The native tab size; initially 1 in C++/WASM.
     */
    "getTabSize"(): number;

    /**
     * Returns the column at the current token end.
     * @returns The token-end column.
     * @deprecated Use the corresponding end-position accessor.
     * @see {@link CharStream.getEndColumn}
     */
    "getColumn"(): number;

    /**
     * Returns the line at the current token end.
     * @returns The token-end line.
     * @deprecated Use the corresponding end-position accessor.
     * @see {@link CharStream.getEndLine}
     */
    "getLine"(): number;

    /**
     * Get token end column number.
     * @returns The token-end column.
     */
    "getEndColumn"(): number;

    /**
     * Get token end line number.
     * @returns The token-end line.
     */
    "getEndLine"(): number;

    /**
     * Get token beginning column number.
     * @returns The token-start column.
     */
    "getBeginColumn"(): number;

    /**
     * Get token beginning line number.
     * @returns The token-start line.
     */
    "getBeginLine"(): number;

    /**
     * Backup a number of characters.
     * @param p0 - Number of characters to put back.
     */
    "backup"(p0: number | Int32Value): void;

    /**
     * Start.
     * @returns The first character of the token.
     */
    "BeginToken"(): string;

    /**
     * Read a character.
     * @returns The next native character.
     */
    "readChar"(): string;

    /**
     * Get token literal value.
     * @returns The current token image.
     */
    "GetImage"(): string;

    /**
     * Get the suffix.
     * @param p0 - Number of suffix characters.
     * @returns The requested token suffix.
     */
    "GetSuffix"(p0: number | Int32Value): string;

    /**
     * Reinitialise.
     * @param p0 - Native stdio selector, or null.
     * @param p1 - Starting line number.
     * @param p2 - Starting column number.
     * @param p3 - Native character buffer size.
     */
    "ReInit"(p0: string, p1: number | Int32Value, p2: number | Int32Value, p3: number | Int32Value): void;

    /**
     * Reinitialise.
     * @param p0 - Native stdio selector, or null.
     * @param p1 - Starting line number.
     * @param p2 - Starting column number.
     */
    "ReInit"(p0: string, p1: number | Int32Value, p2: number | Int32Value): void;

    /**
     * Reset buffer when finished.
     */
    "Done"(): void;

    /**
     * Reinitialise.
     * @param p0 - Native stdio selector, or null.
     * @param p1 - Starting line number.
     * @param p2 - Starting column number.
     * @param p3 - Native character buffer size.
     */
    "ReInit"(p0: ReaderStream | null, p1: number | Int32Value, p2: number | Int32Value, p3: number | Int32Value): void;

    /**
     * Reinitialise.
     * @param p0 - Native stdio selector, or null.
     * @param p1 - Starting line number.
     * @param p2 - Starting column number.
     */
    "ReInit"(p0: ReaderStream | null, p1: number | Int32Value, p2: number | Int32Value): void;

    /**
     * Reinitialise.
     * @param p0 - Native stdio selector, or null.
     */
    "ReInit"(p0: ReaderStream | null): void;

    /**
     * Method to adjust line and column numbers for the start of a token.
     * @param p0 - New token-start line number.
     * @param p1 - New token-start column number.
     */
    "adjustBeginLineColumn"(p0: number | Int32Value, p1: number | Int32Value): void;
}

export interface CharStreamConstructor {
    readonly prototype: CharStream;

    /**
     * Constructor.
     * @param text - Input text.
     * @param line - Starting line number.
     * @param column - Starting column number.
     * @returns A new owning native handle. Release it with delete().
     */
    new(text: string, line: number | Int32Value, column: number | Int32Value): CharStream;

    /**
     * Constructor.
     * @param text - Input text.
     * @param line - Starting line number.
     * @param column - Starting column number.
     * @param bufferSize - Native character buffer size.
     * @returns A new owning native handle. Release it with delete().
     */
    new(text: string, line: number | Int32Value, column: number | Int32Value, bufferSize: number | Int32Value): CharStream;

    /**
     * Constructor.
     * @param reader - Native input reader, or null where accepted by the native API.
     * @returns A new owning native handle. Release it with delete().
     */
    new(reader: ReaderStream | null): CharStream;

    /**
     * Constructor.
     * @param reader - Native input reader, or null where accepted by the native API.
     * @param line - Starting line number.
     * @param column - Starting column number.
     * @returns A new owning native handle. Release it with delete().
     */
    new(reader: ReaderStream | null, line: number | Int32Value, column: number | Int32Value): CharStream;

    /**
     * Constructor.
     * @param reader - Native input reader, or null where accepted by the native API.
     * @param line - Starting line number.
     * @param column - Starting column number.
     * @param bufferSize - Native character buffer size.
     * @returns A new owning native handle. Release it with delete().
     */
    new(reader: ReaderStream | null, line: number | Int32Value, column: number | Int32Value, bufferSize: number | Int32Value): CharStream;
}

export interface TokenManager extends NativeHandleBase {
    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): TokenManager;

    /**
     * Reads the next native lexer token.
     * @returns The token handle; obey its native borrowed-view lifetime.
     */
    "getNextToken"(): JavaCCToken;
}

export interface TokenManagerConstructor {
    readonly prototype: TokenManager;
}

export interface SyntaxCheckerTokenManager extends TokenManager {
    /**
     * Switch to specified lex state.
     * @param lexState - Native lexical state.
     */
    SwitchTo(lexState: number | Int32Value): void;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): SyntaxCheckerTokenManager;

    /**
     * Reinitialise parser.
     * @param dependency - Native input dependency.
     * @param lexState - Native lexical state.
     */
    ReInit(dependency: CharStream | null, lexState?: number): void;

    /**
     * Get the next Token.
     * @returns The next native token; obey its borrowed-view lifetime. Release the returned native handle with
     *   delete() when non-null.
     */
    "getNextToken"(): JavaCCToken;

    "debugStream": NativeStdioStream | null;

    /**
     * Set debug output.
     * @param p0 - Native stdio selector, or null.
     */
    "setDebugStream"(p0: NativeStdioStream | null): void;
}

export interface SyntaxCheckerTokenManagerConstructor extends Omit<TokenManagerConstructor, 'prototype'> {
    readonly prototype: SyntaxCheckerTokenManager;

    /**
     * Constructor.
     * @param source - Native input dependency.
     * @returns A new owning native handle. Release it with delete().
     */
    new(source: CharStream | null): SyntaxCheckerTokenManager;

    /**
     * Constructor.
     * @param source - Native input dependency.
     * @param lexState - Native lexical state.
     * @returns A new owning native handle. Release it with delete().
     */
    new(source: CharStream | null, lexState: number | Int32Value): SyntaxCheckerTokenManager;
}

export interface SyntaxChecker extends NativeHandleBase {
    readonly token_source: SyntaxCheckerTokenManager | null;
    readonly token: JavaCCToken;
    readonly jj_nt: JavaCCToken | null;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): SyntaxChecker;

    /**
     * Reinitialise.
     * @param dependency - Native token manager dependency.
     */
    ReInit(dependency: SyntaxCheckerTokenManager | null): void;

    /**
     * Trace enabled.
     * @returns Whether native parser tracing is enabled.
     */
    "trace_enabled"(): boolean;

    /**
     * Enable tracing.
     */
    "enable_tracing"(): void;

    /**
     * Disable tracing.
     */
    "disable_tracing"(): void;

    /**
     * Checks native grammar syntax and records the native parser diagnostics.
     * @returns Whether the native syntax check succeeded.
     */
    "checkSyntax"(): boolean;

    /**
     * Parses the native start grammar production.
     */
    "start"(): void;

    /**
     * Parses the native expression grammar production.
     */
    "expression"(): void;

    /**
     * Parses the native binary expression grammar production.
     */
    "binaryExpression"(): void;

    /**
     * Parses the native unary right expression grammar production.
     */
    "unaryRigthExpression"(): void;

    /**
     * Parses the native unary left expression grammar production.
     */
    "unaryLeftExpression"(): void;

    /**
     * Parses the native binary operator grammar production.
     */
    "binaryOperator"(): void;

    /**
     * Parses the native unary right operator grammar production.
     */
    "unaryRigthOperator"(): void;

    /**
     * Parses the native unary left operator grammar production.
     */
    "unaryLeftOperator"(): void;

    /**
     * Parses the native item expression grammar production.
     */
    "itemExpression"(): void;

    /**
     * Parses the native bracketed expression optional implied multiplication grammar production.
     */
    "bracketedExpressionOptionalImpliedMultiplication"(): void;

    /**
     * Parses the native bracketed expression grammar production.
     */
    "bracketedExpression"(): void;

    /**
     * Parses the native item or function optional implied multiplication grammar production.
     */
    "itemOrFunctionOptionalImpliedMultiplication"(): void;

    /**
     * Parses the native item or function implied multiplication grammar production.
     */
    "itemOrFunctionImpliedMultiplication"(): void;

    /**
     * Parses the native item or function grammar production.
     */
    "itemOrFunction"(): void;

    /**
     * Parses the native other base number grammar production.
     */
    "otherBaseNumber"(): void;

    /**
     * Parses the native item name grammar production.
     */
    "itemName"(): void;

    /**
     * Parses the native unit or special constant grammar production.
     */
    "unitOrSpecialConstant"(): void;

    /**
     * Parses the native argument list grammar production.
     */
    "argumentList"(): void;

    /**
     * Get the next Token.
     * @returns The next native token; obey its borrowed-view lifetime. Release the returned native handle with
     *   delete() when non-null.
     */
    "getNextToken"(): JavaCCToken;

    /**
     * Get the specific Token.
     * @param p0 - Token offset relative to the current parser position.
     * @returns The native token at the requested offset; obey its borrowed-view lifetime. Release the returned
     *   native handle with delete() when non-null.
     */
    "getToken"(p0: number | Int32Value): JavaCCToken;
}

export interface SyntaxCheckerConstructor {
    readonly prototype: SyntaxChecker;

    /**
     * Constructor with generated Token Manager.
     * @param source - Native token manager dependency.
     * @returns A new owning native handle. Release it with delete().
     */
    new(source: SyntaxCheckerTokenManager | null): SyntaxChecker;
}

export interface License extends NativeHandleBase {
    readonly [licenseInstanceTypeMarker]: true;

    /**
     * Creates another owning handle to the same native object; it does not clone the object.
     * @returns An alias handle. Release it separately with delete().
     * @throws {TypeError} If this handle has been deleted.
     */
    cloneHandle(): License;
}

export interface LicenseConstructor {
    readonly prototype: License;

    /**
     * Creates a native License.
     * @returns A new owning native handle. Release it with delete().
     */
    new(): License;

    /**
     * By successfully calling this method, you confirm and sign that you use MathParser.org-mXparser
     * commercially according to the License.geTermsOfAgreement(). The confirmation can only be called once.
     * The method call takes place only internally for logging purposes and there is no connection with other
     * external services and no data is sent or collected. The lack of a method call (or its successful call)
     * does not affect the operation of the PRODUCT in any way.
     * @param p0 - Your first and last name or your e-mail address or your company name. At least 5 non-blank
     *   characters.
     * @returns Logs commercial use and returns true if this was the first attempt to register a use type and
     *   the signature met the conditions specified for it. Otherwise, returns false and does not log use type.
     * @see {@link LicenseConstructor.iConfirmNonCommercialUse}
     * @see {@link LicenseConstructor.getUseTypeConfirmationMessage}
     * @see {@link LicenseConstructor.checkIfUseTypeConfirmed}
     * @see {@link LicenseConstructor.geTermsOfAgreement}
     */
    "iConfirmCommercialUse"(p0: string | null): boolean;

    /**
     * By successfully calling this method, you confirm and sign that you use MathParser.org-mXparser
     * commercially according to the License.geTermsOfAgreement(). The confirmation can only be called once.
     * The method call takes place only internally for logging purposes and there is no connection with other
     * external services and no data is sent or collected. The lack of a method call (or its successful call)
     * does not affect the operation of the PRODUCT in any way.
     * @param p0 - Your first and last name or your e-mail address or your company name. At least 5 non-blank
     *   characters.
     * @returns Logs commercial use and returns true if this was the first attempt to register a use type and
     *   the signature met the conditions specified for it. Otherwise, returns false and does not log use type.
     * @see {@link LicenseConstructor.iConfirmNonCommercialUse}
     * @see {@link LicenseConstructor.getUseTypeConfirmationMessage}
     * @see {@link LicenseConstructor.checkIfUseTypeConfirmed}
     * @see {@link LicenseConstructor.geTermsOfAgreement}
     */
    "iConfirmCommercialUse"(p0: string): boolean;

    /**
     * By successfully calling this method, you confirm and sign that you use MathParser.org-mXparser
     * non-commercially according to the License.geTermsOfAgreement(). The confirmation can only be called
     * once. The method call takes place only internally for logging purposes and there is no connection with
     * other external services and no data is sent or collected. The lack of a method call (or its successful
     * call) does not affect the operation of the PRODUCT in any way.
     * @param p0 - Your first and last name or your e-mail address or your company name. At least 5 non-blank
     *   characters.
     * @returns Logs non-commercial use and returns true if this was the first attempt to register a use type
     *   and the signature met the conditions specified for it. Otherwise, returns false and does not log use
     *   type.
     * @see {@link LicenseConstructor.iConfirmNonCommercialUse}
     * @see {@link LicenseConstructor.getUseTypeConfirmationMessage}
     * @see {@link LicenseConstructor.checkIfUseTypeConfirmed}
     * @see {@link LicenseConstructor.geTermsOfAgreement}
     */
    "iConfirmNonCommercialUse"(p0: string | null): boolean;

    /**
     * By successfully calling this method, you confirm and sign that you use MathParser.org-mXparser
     * non-commercially according to the License.geTermsOfAgreement(). The confirmation can only be called
     * once. The method call takes place only internally for logging purposes and there is no connection with
     * other external services and no data is sent or collected. The lack of a method call (or its successful
     * call) does not affect the operation of the PRODUCT in any way.
     * @param p0 - Your first and last name or your e-mail address or your company name. At least 5 non-blank
     *   characters.
     * @returns Logs non-commercial use and returns true if this was the first attempt to register a use type
     *   and the signature met the conditions specified for it. Otherwise, returns false and does not log use
     *   type.
     * @see {@link LicenseConstructor.iConfirmNonCommercialUse}
     * @see {@link LicenseConstructor.getUseTypeConfirmationMessage}
     * @see {@link LicenseConstructor.checkIfUseTypeConfirmed}
     * @see {@link LicenseConstructor.geTermsOfAgreement}
     */
    "iConfirmNonCommercialUse"(p0: string): boolean;

    /**
     * Verifies whether the use type has been successfully confirmed and signed.
     * @returns True in case commercial or non-commercial user type has been confirmed and signed. Otherwise,
     *   returns false.
     */
    "checkIfUseTypeConfirmed"(): boolean;

    /**
     * Verifies whether the use type has been successfully confirmed and signed.
     * @returns Confirmation message in case commercial or non-commercial user type has been confirmed and
     *   signed. Otherwise, returns error / warning message.
     * @see {@link LicenseConstructor.iConfirmNonCommercialUse}
     * @see {@link LicenseConstructor.iConfirmNonCommercialUse}
     */
    "getUseTypeConfirmationMessage"(): string | null;

    /**
     * Information about the problem encountered when calling methods: License.iConfirmNonCommercialUse(...),
     * License.iConfirmCommercialUse(...)
     * @returns Error message if an error occurred, empty string if no error.
     * @see {@link LicenseConstructor.iConfirmNonCommercialUse}
     * @see {@link LicenseConstructor.iConfirmNonCommercialUse}
     */
    "getErrorMessage"(): string | null;

    /**
     * Return the terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT.
     * @returns The terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT as string.
     */
    "geTermsOfAgreement"(): string | null;

    /**
     * Prints to the console the terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT
     */
    "consolePrintLicense"(): void;

    readonly "MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT": string | null;
}

export interface CalcStepRecord_StepTypeStatics {
    readonly "Expression": number;
    readonly "Argument": number;
    readonly "Function": number;
    readonly "Unknown": number;
}

export interface SerializationUtilsStatics {
    /**
     * Enables binary serialization done by the SerializationUtils.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     */
    "enableBinarySerializationIamAwareOfSecurityRisks"(): void;

    /**
     * Disables binary serialization done by the SerializationUtils.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     */
    "disableBinarySerialization"(): void;

    /**
     * Returns whether binary serialization done by SerializationUtils is enabled by.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @returns True if enabled, false if disabled.
     */
    "isBinarySerializationEnabled"(): boolean;

    /**
     * Information whether the last ordered operation under any serialization or deserialization method was
     * correctly performed.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @returns true if the operation was performed correctly, otherwise false.
     */
    "checkLastOperationWasSuccessful"(): boolean;

    /**
     * Text information about the last operation performed by any serialization or deserialization method.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @returns The content of the error in case of failure, information about the operation performed in case
     *   of success.
     */
    "getLastOperationMessage"(): string | null;

    /**
     * Serialization of an object to byte data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param object - The object for which serialization is possible.
     * @returns The data object if the operation was successful, otherwise it returns null.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToBytes(object: Serializable | null): Uint8Array | null;

    /**
     * Serialization of an object to byte data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param object - The object for which serialization is possible.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The data object if the operation was successful, otherwise it returns null.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToBytes<K extends keyof SerializableListTypes>(object: SerializableListTypes[K] | null, type: K): Uint8Array | null;

    /**
     * Serialization of an object to byte data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param object - The object for which serialization is possible.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The data object if the operation was successful, otherwise it returns null.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToBytes<K extends keyof SerializableVectorTypes>(object: SerializableVectorTypes[K] | null, type: K): Uint8Array | null;

    /**
     * Serialization of an object to byte data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param object - The object for which serialization is possible.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The data object if the operation was successful, otherwise it returns null.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToBytes<T extends Serializable>(object: T | null, type: SerializationType<T>): Uint8Array | null;

    /**
     * Serialization of an object to String data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param object - The object for which serialization is possible.
     * @returns The data string if the operation was successful, otherwise it returns null.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToString(object: Serializable | null): string | null;

    /**
     * Serialization of an object to String data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param object - The object for which serialization is possible.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The data string if the operation was successful, otherwise it returns null.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToString<K extends keyof SerializableListTypes>(object: SerializableListTypes[K] | null, type: K): string | null;

    /**
     * Serialization of an object to String data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param object - The object for which serialization is possible.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The data string if the operation was successful, otherwise it returns null.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToString<K extends keyof SerializableVectorTypes>(object: SerializableVectorTypes[K] | null, type: K): string | null;

    /**
     * Serialization of an object to String data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param object - The object for which serialization is possible.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The data string if the operation was successful, otherwise it returns null.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToString<T extends Serializable>(object: T | null, type: SerializationType<T>): string | null;

    /**
     * Serialization of an object to a file.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     *
     * File paths address this module's virtual filesystem.
     * @param object - The object for which serialization is possible.
     * @param path - Path in this module's virtual filesystem.
     * @returns true if the operation was successful, otherwise it returns false.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToFile(object: Serializable | null, path: string | Uint8Array | null): boolean;

    /**
     * Serialization of an object to a file.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     *
     * File paths address this module's virtual filesystem.
     * @param object - The object for which serialization is possible.
     * @param path - Path in this module's virtual filesystem.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns true if the operation was successful, otherwise it returns false.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToFile<K extends keyof SerializableListTypes>(object: SerializableListTypes[K] | null, path: string | Uint8Array | null, type: K): boolean;

    /**
     * Serialization of an object to a file.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     *
     * File paths address this module's virtual filesystem.
     * @param object - The object for which serialization is possible.
     * @param path - Path in this module's virtual filesystem.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns true if the operation was successful, otherwise it returns false.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToFile<K extends keyof SerializableVectorTypes>(object: SerializableVectorTypes[K] | null, path: string | Uint8Array | null, type: K): boolean;

    /**
     * Serialization of an object to a file.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     *
     * File paths address this module's virtual filesystem.
     * @param object - The object for which serialization is possible.
     * @param path - Path in this module's virtual filesystem.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns true if the operation was successful, otherwise it returns false.
     * @see {@link SerializationUtilsStatics.getLastOperationMessage}
     * @see {@link SerializationUtilsStatics.checkLastOperationWasSuccessful}
     */
    serializeToFile<T extends Serializable>(object: T | null, path: string | Uint8Array | null, type: SerializationType<T>): boolean;

    /**
     * Deserializes an object from byte data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param data - Data object.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The deserialized object if operation was successful, otherwise it returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    deserializeFromBytes<K extends keyof SerializableListTypes>(data: Uint8Array | NativeVector<number, "char"> | null, type: K): SerializableListTypes[K] | null;

    /**
     * Deserializes an object from byte data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param data - Data object.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The deserialized object if operation was successful, otherwise it returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    deserializeFromBytes<K extends keyof SerializableVectorTypes>(data: Uint8Array | NativeVector<number, "char"> | null, type: K): SerializableVectorTypes[K] | null;

    /**
     * Deserializes an object from byte data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param data - Data object.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The deserialized object if operation was successful, otherwise it returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    deserializeFromBytes<T extends Serializable>(data: Uint8Array | NativeVector<number, "char"> | null, type: SerializationType<T>): T | null;

    /**
     * Deserializes an object from string data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param data - Data object.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The deserialized object if operation was successful, otherwise it returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    deserializeFromString<K extends keyof SerializableListTypes>(data: string | Uint8Array | null, type: K): SerializableListTypes[K] | null;

    /**
     * Deserializes an object from string data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param data - Data object.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The deserialized object if operation was successful, otherwise it returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    deserializeFromString<K extends keyof SerializableVectorTypes>(data: string | Uint8Array | null, type: K): SerializableVectorTypes[K] | null;

    /**
     * Deserializes an object from string data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     * @param data - Data object.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The deserialized object if operation was successful, otherwise it returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    deserializeFromString<T extends Serializable>(data: string | Uint8Array | null, type: SerializationType<T>): T | null;

    /**
     * Deserializes an object from byte data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     *
     * File paths address this module's virtual filesystem.
     * @param path - Path in this module's virtual filesystem.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The deserialized object if operation was successful, otherwise it returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    deserializeFromFile<K extends keyof SerializableListTypes>(path: string | Uint8Array | null, type: K): SerializableListTypes[K] | null;

    /**
     * Deserializes an object from byte data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     *
     * File paths address this module's virtual filesystem.
     * @param path - Path in this module's virtual filesystem.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The deserialized object if operation was successful, otherwise it returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    deserializeFromFile<K extends keyof SerializableVectorTypes>(path: string | Uint8Array | null, type: K): SerializableVectorTypes[K] | null;

    /**
     * Deserializes an object from byte data.
     *
     * Important - using binary serialization you confirm that you understand the security risks.
     *
     * WARNING: Deserializing data from an untrusted source can introduce security vulnerabilities to your
     * application. Depending on the settings used during deserialization, untrusted data may be able to
     * execute arbitrary code or cause a denial of service attack. Untrusted data can come from over the
     * network from an untrusted source (e.g. any network client), or it can be manipulated/tampered by an
     * intermediary while in transit over an unauthenticated connection, or from local storage where it may
     * have been compromised/tampered, or from many other sources. MathParser.org-mXparser does not provide any
     * means to authenticate data or secure it from tampering. Use an appropriate data authentication method
     * before deserializing. Be very mindful of these attack scenarios; many projects and companies and users
     * of serialization libraries in general have been bitten by untrusted deserialization of user data in the
     * past.
     *
     * File paths address this module's virtual filesystem.
     * @param path - Path in this module's virtual filesystem.
     * @param type - Native type or constructor selecting the serialization format.
     * @returns The deserialized object if operation was successful, otherwise it returns null. Release the
     *   returned native handle with delete() when non-null.
     */
    deserializeFromFile<T extends Serializable>(path: string | Uint8Array | null, type: SerializationType<T>): T | null;
}

export interface StringModelStatics {
    /**
     * Sets a user-specific text resource object. Using this object, you can provide your own text model or
     * your own translations. If the provided string resources object is null, no change will be done and the
     * current object will still be used.
     * @param p0 - A user-specific text resource object
     * @see {@link StringResources}
     */
    "setStringResources"(p0: StringResources | null): void;

    /**
     * Sets default string resources.
     * @see {@link StringResources}
     */
    "setDefaultStringResources"(): void;

    /**
     * Sets default english string resources.
     * @see {@link StringResources}
     */
    "setDefaultEnglishStringResources"(): void;

    /**
     * Gets currently used user-specific text resource object.
     * @returns Currently used StringResources Release the returned native handle with delete() when non-null.
     */
    "getStringResources"(): StringResources | null;

    /**
     * Displays the user-defined text resources used and the effect of their use to generate descriptions of
     * the parser elements on the console.
     * @see {@link StringResources}
     * @see {@link StringResources.print}
     * @see {@link StringModelStatics.printDescriptions}
     */
    "print"(): void;

    /**
     * Prints to the console the result of applying user-specific text resources to generate parser description
     * and objects. The method can help with debugging when creating your own translations.
     * @see {@link StringResources}
     * @see {@link StringModelStatics.setStringResources}
     */
    "printDescriptions"(): void;
}

export interface mXparserStatics {
    /** Maximum cancellation domain ID; ID 0 is the global domain. @since 6.2.0 */
    readonly "MAX_CANCELLATION_TOKEN_ID": number;

    /**
     * Reads the current global signal OR the specified domain signal, not an operation completion status.
     *
     * An ID denotes an operation domain, not a thread. Multiple independent graphs may share an ID
     * deliberately. Signals remain set until reset or release; calculation never resets them. Cached values
     * and paths without an existing check can complete normally despite a signal. A query does not prove that
     * a particular invocation stopped or establish the cause of its result.
     *
     * Reset or release only after all workers and controllers (including timers and callbacks) have finished.
     * Raw IDs have no ABA or owner authentication protection: a delayed old controller can affect a later user
     * of the number. Registry atomics do not make a shared mutable expression graph thread-safe. Separate WASM
     * modules have separate registries; synchronous single-thread WASM cannot run a timer controller during
     * calculation. Cross-worker signalling requires a separately verified shared-memory runtime.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param cancelId - domain in 0..MAX_CANCELLATION_TOKEN_ID; 0 means global cancellation
     * @returns true if global cancellation or the specified domain signal is set; false otherwise
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mXparserStatics.MAX_CANCELLATION_TOKEN_ID}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "isCalculationCancelled"(cancelId: number): boolean;

    /**
     * Atomically sets the sticky signal for this domain; ID 0 sets the global signal. A controller thread may
     * call this while another thread calculates. The worker reacts only at an existing cancellation check.
     *
     * An ID denotes an operation domain, not a thread. Multiple independent graphs may share an ID
     * deliberately. Signals remain set until reset or release; calculation never resets them. Cached values
     * and paths without an existing check can complete normally despite a signal. A query does not prove that
     * a particular invocation stopped or establish the cause of its result.
     *
     * Reset or release only after all workers and controllers (including timers and callbacks) have finished.
     * Raw IDs have no ABA or owner authentication protection: a delayed old controller can affect a later user
     * of the number. Registry atomics do not make a shared mutable expression graph thread-safe. Separate WASM
     * modules have separate registries; synchronous single-thread WASM cannot run a timer controller during
     * calculation. Cross-worker signalling requires a separately verified shared-memory runtime.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param cancelId - domain in 0..MAX_CANCELLATION_TOKEN_ID; 0 means global cancellation
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mXparserStatics.MAX_CANCELLATION_TOKEN_ID}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "cancelCalculation"(cancelId: number): void;

    /**
     * Atomically clears only the specified signal. ID 0 clears only global cancellation, retaining all
     * individual signals and reservations.
     *
     * An ID denotes an operation domain, not a thread. Multiple independent graphs may share an ID
     * deliberately. Signals remain set until reset or release; calculation never resets them. Cached values
     * and paths without an existing check can complete normally despite a signal. A query does not prove that
     * a particular invocation stopped or establish the cause of its result.
     *
     * Reset or release only after all workers and controllers (including timers and callbacks) have finished.
     * Raw IDs have no ABA or owner authentication protection: a delayed old controller can affect a later user
     * of the number. Registry atomics do not make a shared mutable expression graph thread-safe. Separate WASM
     * modules have separate registries; synchronous single-thread WASM cannot run a timer controller during
     * calculation. Cross-worker signalling requires a separately verified shared-memory runtime.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param cancelId - domain in 0..MAX_CANCELLATION_TOKEN_ID; 0 means global cancellation
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mXparserStatics.MAX_CANCELLATION_TOKEN_ID}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "resetCalculationCancellation"(cancelId: number): void;

    /**
     * Atomically reserves a positive free ID, clears its previous signal, then publishes that ID. Never
     * returns 0.
     *
     * An ID denotes an operation domain, not a thread. Multiple independent graphs may share an ID
     * deliberately. Signals remain set until reset or release; calculation never resets them. Cached values
     * and paths without an existing check can complete normally despite a signal. A query does not prove that
     * a particular invocation stopped or establish the cause of its result.
     *
     * Reset or release only after all workers and controllers (including timers and callbacks) have finished.
     * Raw IDs have no ABA or owner authentication protection: a delayed old controller can affect a later user
     * of the number. Registry atomics do not make a shared mutable expression graph thread-safe. Separate WASM
     * modules have separate registries; synchronous single-thread WASM cannot run a timer controller during
     * calculation. Cross-worker signalling requires a separately verified shared-memory runtime.
     * @returns a reserved, initially clear ID in 1..MAX_CANCELLATION_TOKEN_ID
     * @throws {Error} Named `std::logic_error`: if all positive IDs are reserved
     * @since 6.2.0
     * @see {@link mXparserStatics.MAX_CANCELLATION_TOKEN_ID}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "acquireCancellationTokenId"(): number;

    /**
     * Atomically reserves a manually selected positive ID. Success clears its previous signal before
     * publishing success; failure leaves the owner signal unchanged. Reserve manual IDs before using them
     * alongside acquire.
     *
     * An ID denotes an operation domain, not a thread. Multiple independent graphs may share an ID
     * deliberately. Signals remain set until reset or release; calculation never resets them. Cached values
     * and paths without an existing check can complete normally despite a signal. A query does not prove that
     * a particular invocation stopped or establish the cause of its result.
     *
     * Reset or release only after all workers and controllers (including timers and callbacks) have finished.
     * Raw IDs have no ABA or owner authentication protection: a delayed old controller can affect a later user
     * of the number. Registry atomics do not make a shared mutable expression graph thread-safe. Separate WASM
     * modules have separate registries; synchronous single-thread WASM cannot run a timer controller during
     * calculation. Cross-worker signalling requires a separately verified shared-memory runtime.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param cancelId - domain in 1..MAX_CANCELLATION_TOKEN_ID; 0 is not reservable
     * @returns true if the ID was reserved by this call; false if already reserved
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mXparserStatics.MAX_CANCELLATION_TOKEN_ID}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "reserveCancellationTokenId"(cancelId: number): boolean;

    /**
     * Clears the signal before returning a reserved positive ID to the allocator. An unreserved ID is rejected
     * before clearing its signal; use reset for an unreserved manual domain.
     *
     * An ID denotes an operation domain, not a thread. Multiple independent graphs may share an ID
     * deliberately. Signals remain set until reset or release; calculation never resets them. Cached values
     * and paths without an existing check can complete normally despite a signal. A query does not prove that
     * a particular invocation stopped or establish the cause of its result.
     *
     * Reset or release only after all workers and controllers (including timers and callbacks) have finished.
     * Raw IDs have no ABA or owner authentication protection: a delayed old controller can affect a later user
     * of the number. Registry atomics do not make a shared mutable expression graph thread-safe. Separate WASM
     * modules have separate registries; synchronous single-thread WASM cannot run a timer controller during
     * calculation. Cross-worker signalling requires a separately verified shared-memory runtime.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param cancelId - domain in 1..MAX_CANCELLATION_TOKEN_ID; 0 is not reservable
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @throws {Error} Named `std::logic_error`: if cancelId is not reserved
     * @since 6.2.0
     * @see {@link mXparserStatics.MAX_CANCELLATION_TOKEN_ID}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     */
    "releaseCancellationTokenId"(cancelId: number): void;

    readonly "VERSION_MAJOR": number;
    readonly "VERSION_MINOR": number;
    readonly "VERSION_PATCH": number;
    readonly "VERSION": string | null;
    readonly "VERSION_CODE_NAME": string | null;
    readonly "VERSION_NAME": string | null;
    readonly "BUIT_FOR": string | null;

    /**
     * Checks whether the library has already been warmed up before concurrent use
     * @returns True if the warm-up was completed successfully, false otherwise.
     * @see {@link mXparserStatics.warmUpBeforeConcurrentUse}
     */
    "checkIfWarmedUpBeforeConcurrentUse"(): boolean;

    /**
     * Performs a deterministic, single-threaded warm-up of the core mXparser classes before concurrent use.
     * @returns True if the warm-up was completed successfully, false otherwise.
     */
    "warmUpBeforeConcurrentUse"(): boolean;

    "primesCache": PrimesCache | null;
    readonly "PRIMES_CACHE_NOT_INITIALIZED": number;

    /**
     * Initialization of prime numbers cache. Cache size according to {@link PrimesCacheConstructor.DEFAULT_MAX_NUM_IN_CACHE}
     * @see {@link PrimesCache}
     */
    "initPrimesCache"(): void;

    /**
     * Initialization of prime numbers cache.
     * @param p0 - The maximum integer number that will be stored in cache.
     * @see {@link PrimesCache}
     */
    "initPrimesCache"(p0: number | Int32Value): void;

    /**
     * Initialization of prime numbers cache.
     * @param p0 - The primes cache object
     * @see {@link PrimesCache}
     */
    "initPrimesCache"(p0: PrimesCache | null): void;

    /**
     * Returns true in case when primes cache initialization was successful, otherwise returns false.
     * @returns Returns true in case when primes cache initialization was successful, otherwise returns false.
     */
    "isInitPrimesCacheSuccessful"(): boolean;

    /**
     * Sets {@link mXparserStatics.primesCache} to null
     */
    "setNoPrimesCache"(): void;

    /**
     * Returns maximum integer number in primes cache
     * @returns If primes cache was initialized then maximum number in primes cache, otherwise {@link mXparserStatics.PRIMES_CACHE_NOT_INITIALIZED}
     */
    "getMaxNumInPrimesCache"(): number;

    /**
     * Gets maximum threads number
     * @returns Threads number.
     */
    "getThreadsNumber"(): number;

    /**
     * Sets default threads number
     */
    "setDefaultThreadsNumber"(): void;

    /**
     * Sets threads number
     * @param p0 - Thread number.
     */
    "setThreadsNumber"(p0: number | Int32Value): void;

    /**
     * Calculates function f(x0) (given as expression) assigning Argument x = x0;
     * @param p0 - the expression
     * @param p1 - the argument
     * @param p2 - the argument value
     * @returns f.calculate()
     * @see {@link Expression}
     * @deprecated Planned to be removed, use {@link mathcollection_MathFunctionsStatics.getFunctionValue} instead
     */
    "getFunctionValue"(p0: Expression, p1: Argument, p2: number): number;

    /**
     * Returns array of double values of the function f(i) calculated on the range: i = from to i = to by step
     * = delta
     * @param p0 - Function expression
     * @param p1 - Index argument
     * @param p2 - 'from' value
     * @param p3 - 'to' value
     * @param p4 - 'delta' step definition
     * @returns Array of function values
     * @deprecated Planned to be removed, use {@link mathcollection_MathFunctionsStatics.getFunctionValues} instead
     */
    "getFunctionValues"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number): Array<number> | null;

    /**
     * Converts List of double to double[]
     * @param p0 - the numbers list
     * @returns numbers array
     */
    "arrayList2double"(p0: Array<number> | NativeList<number, "double"> | NullNativeList<"double"> | null): Array<number> | null;

    /**
     * Modifies random generator used by the ProbabilityDistributions class.
     * @param p0 - Random generator.
     * @see {@link mathcollection_ProbabilityDistributionsStatics}
     * @see {@link mathcollection_ProbabilityDistributionsStatics.randomGenerator}
     */
    "setRandomGenerator"(p0: IRandom | null): void;

    /**
     * Sets comparison mode to EXACT.
     * @see {@link mathcollection_BinaryRelationsStatics}
     */
    "setExactComparison"(): void;

    /**
     * Sets comparison mode to EPSILON.
     * @see {@link mathcollection_BinaryRelationsStatics}
     * @see {@link mXparserStatics.setEpsilon}
     */
    "setEpsilonComparison"(): void;

    /**
     * Sets epsilon value used in the EPSILON comparison mode and the almost integer rounding mode.
     * @param p0 - Epsilon value (grater than 0).
     * @see {@link mXparserStatics.setEpsilonComparison}
     * @see {@link mXparserStatics.enableAlmostIntRounding}
     * @see {@link mathcollection_BinaryRelationsStatics}
     */
    "setEpsilon"(p0: number): void;

    /**
     * Sets default epsilon value.
     * @see {@link mXparserStatics.setEpsilonComparison}
     * @see {@link mXparserStatics.enableAlmostIntRounding}
     * @see {@link mathcollection_BinaryRelationsStatics.DEFAULT_COMPARISON_EPSILON}
     * @see {@link mathcollection_BinaryRelationsStatics}
     */
    "setDefaultEpsilon"(): void;

    /**
     * Returns current epsilon value.
     * @returns Returns current epsilon value.
     * @see {@link mXparserStatics.setEpsilonComparison}
     * @see {@link mXparserStatics.enableAlmostIntRounding}
     * @see {@link mathcollection_BinaryRelationsStatics}
     */
    "getEpsilon"(): number;

    /**
     * Checks if epsilon comparison mode is active;
     * @returns True if epsilon mode is active, otherwise returns false.
     * @see {@link mXparserStatics.setEpsilonComparison}
     * @see {@link mXparserStatics.setExactComparison}
     * @see {@link mXparserStatics.enableAlmostIntRounding}
     * @see {@link mathcollection_BinaryRelationsStatics}
     */
    "checkIfEpsilonMode"(): boolean;

    /**
     * Checks if exact comparison mode is active;
     * @returns True if exact mode is active, otherwise returns false.
     * @see {@link mXparserStatics.setEpsilonComparison}
     * @see {@link mXparserStatics.setExactComparison}
     * @see {@link mathcollection_BinaryRelationsStatics}
     */
    "checkIfExactMode"(): boolean;

    /**
     * Enables ULP rounding. Double floating-point precision arithmetic causes rounding problems, i.e. 0.1 +
     * 0.1 + 0.1 is slightly different from 0.3, additionally doubles are having a lot of advantages providing
     * flexible number representation regardless of number size. mXparser is fully based on double numbers and
     * that is why is providing intelligent ULP rounding to minimize misleading results. By default, this
     * option is enabled resulting in automatic rounding only in some cases. Using this mode 0.1 + 0.1 + 0.1 =
     * 0.3
     */
    "enableUlpRounding"(): void;

    /**
     * Disables ULP rounding. Double floating-point precision arithmetic causes rounding problems, i.e. 0.1 +
     * 0.1 + 0.1 is slightly different from 0.3, additionally doubles are having a lot of advantages providing
     * flexible number representation regardless of number size. mXparser is fully based on double numbers and
     * that is why is providing intelligent ULP rounding to minimize misleading results. By default this option
     * is enabled resulting in automatic rounding only in some cases. Disabling this mode 0.1 + 0.1 + 0.1 will
     * be slightly different from 0.3.
     */
    "disableUlpRounding"(): void;

    /**
     * Enables / disables ULP rounding. Double floating-point precision arithmetic causes rounding problems,
     * i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3, additionally doubles are having a lot of advantages
     * providing flexible number representation regardless of number size. mXparser is fully based on double
     * numbers and that is why is providing intelligent ULP rounding to minimize misleading results. By default
     * this option is enabled resulting in automatic rounding only in some cases. Disabling this mode 0.1 + 0.1
     * + 0.1 will be slightly different from 0.3.
     * @param p0 - True to enable, false to disable
     */
    "setUlpRounding"(p0: boolean): void;

    /**
     * Double floating-point precision arithmetic causes rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly
     * different from 0.3, additionally doubles are having a lot of advantages providing flexible number
     * representation regardless of number size. mXparser is fully based on double numbers and that is why is
     * providing intelligent ULP rounding to minimize misleading results. By default this option is enabled
     * resulting in automatic rounding only in some cases. Using this mode 0.1 + 0.1 + 0.1 = 0.3
     * @returns True if ULP rounding is enabled, otherwise false.
     */
    "checkIfUlpRounding"(): boolean;

    /**
     * Enables canonical rounding. Double floating-point precision arithmetic causes rounding problems, i.e.
     * 0.1 + 0.1 + 0.1 is slightly different from 0.3, additionally doubles are having a lot of advantages
     * providing flexible number representation regardless of number size. mXparser is fully based on double
     * numbers and that is why is providing intelligent canonical rounding to minimize misleading results. By
     * default, this option is enabled resulting in automatic rounding only in some cases. Using this mode 2.5
     * - 2.2 = 0.3
     */
    "enableCanonicalRounding"(): void;

    /**
     * Disables canonical rounding. Double floating-point precision arithmetic causes rounding problems, i.e.
     * 0.1 + 0.1 + 0.1 is slightly different from 0.3, additionally doubles are having a lot of advantages
     * providing flexible number representation regardless of number size. mXparser is fully based on double
     * numbers and that is why is providing intelligent canonical rounding to minimize misleading results. By
     * default, this option is enabled resulting in automatic rounding only in some cases. Using this mode 2.5
     * - 2.2 = 0.3
     */
    "disableCanonicalRounding"(): void;

    /**
     * Enables / disables canonical rounding. Double floating-point precision arithmetic causes rounding
     * problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3, additionally doubles are having a lot of
     * advantages providing flexible number representation regardless of number size. mXparser is fully based
     * on double numbers and that is why is providing intelligent ULP rounding to minimize misleading results.
     * By default, this option is enabled resulting in automatic rounding only in some cases. Disabling this
     * mode 0.1 + 0.1 + 0.1 will be slightly different from 0.3.
     * @param p0 - True to enable, false to disable
     */
    "setCanonicalRounding"(p0: boolean): void;

    /**
     * Double floating-point precision arithmetic causes rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly
     * different from 0.3, additionally doubles are having a lot of advantages providing flexible number
     * representation regardless of number size. mXparser is fully based on double numbers and that is why is
     * providing intelligent canonical rounding to minimize misleading results. By default, this option is
     * enabled resulting in automatic rounding only in some cases. Using this mode 2.5 - 2.2 = 0.3
     * @returns True if Canonical rounding is enabled, otherwise false.
     */
    "checkIfCanonicalRounding"(): boolean;

    /**
     * Enables almost integer rounding option causing rounding final calculation result to precise integer if
     * and only if result is very close to integer. Very close condition depends on epsilon.
     * @see {@link mXparserStatics.setEpsilon}
     * @see {@link mXparserStatics.getEpsilon}
     * @see {@link Expression.calculate}
     */
    "enableAlmostIntRounding"(): void;

    /**
     * Disables almost integer rounding option causing rounding final calculation result to precise integer if
     * and only if result is very close to integer. Very close condition depends on epsilon.
     * @see {@link mXparserStatics.setEpsilon}
     * @see {@link mXparserStatics.getEpsilon}
     * @see {@link Expression.calculate}
     */
    "disableAlmostIntRounding"(): void;

    /**
     * Enables / disables almost integer rounding option causing rounding final calculation result to precise
     * integer if and only if result is very close to integer. Very close condition depends on epsilon.
     * @param p0 - True to enable, false to disable
     */
    "setAlmostIntRounding"(p0: boolean): void;

    /**
     * Returns state of almost integer rounding option causing rounding final calculation result to precise
     * integer if and only if result is very close to integer. Very close condition depends on epsilon.
     * @returns true if option enabled, false otherwise
     * @see {@link mXparserStatics.setEpsilon}
     * @see {@link mXparserStatics.getEpsilon}
     * @see {@link Expression.calculate}
     */
    "checkIfAlmostIntRounding"(): boolean;

    /**
     * Enables special case recognition options, e.g. tan(pi/2) = NaN. Default behaviour is
     * 'enableSpecialCases'.
     */
    "enableSpecialCases"(): void;

    /**
     * Disables special case recognition options, e.g. tan(pi/2) will return value according to the standard
     * math library implementation. Default behaviour is 'enableSpecialCases'.
     */
    "disableSpecialCases"(): void;

    /**
     * Enables special case recognition options, e.g. tan(pi/2) = NaN or disables special case recognition
     * options, e.g. tan(pi/2) will return value according to the standard math library implementation. Default
     * behaviour is 'enableSpecialCases'.
     * @param p0 - true to enable, false to disable.
     */
    "setSpecialCases"(p0: boolean): void;

    /**
     * Checks if special case recognition is enabled.
     * @returns true in case if special case recognition is enabled, otherwise false.
     */
    "checkIfSpecialCases"(): boolean;

    /**
     * Internal limit to avoid infinite loops while calculating expression defined in the way shown by below
     * examples.
     *
     * Argument x = new Argument("x = 2*y"); Argument y = new Argument("y = 2*x"); x.addDefinitions(y);
     * y.addDefinitions(x);
     *
     * Function f = new Function("f(x) = 2*g(x)"); Function g = new Function("g(x) = 2*f(x)");
     * f.addDefinitions(g); g.addDefinitions(f);
     * @param p0 - Maximum number of allowed recursion calls
     */
    "setMaxAllowedRecursionDepth"(p0: number | Int32Value): void;

    /**
     * Internal default limit to avoid infinite loops while calculating expression defined in the way shown by
     * below examples.
     *
     * Argument x = new Argument("x = 2*y"); Argument y = new Argument("y = 2*x"); x.addDefinitions(y);
     * y.addDefinitions(x);
     *
     * Function f = new Function("f(x) = 2*g(x)"); Function g = new Function("g(x) = 2*f(x)");
     * f.addDefinitions(g); g.addDefinitions(f);
     */
    "setDefaultMaxAllowedRecursionDepth"(): void;

    /**
     * Internal limit to avoid infinite loops while calculating expression defined in the way shown by below
     * examples.
     *
     * Argument x = new Argument("x = 2*y"); Argument y = new Argument("y = 2*x"); x.addDefinitions(y);
     * y.addDefinitions(x);
     *
     * Function f = new Function("f(x) = 2*g(x)"); Function g = new Function("g(x) = 2*f(x)");
     * f.addDefinitions(g); g.addDefinitions(f);
     *
     * Currently, does not affect properly defined recursive mode.
     * @returns Max allowed recursion calls
     */
    "getMaxAllowedRecursionDepth"(): number;

    /**
     * Set mXparser to operate in radians mode for trigonometric functions
     */
    "setRadiansMode"(): void;

    /**
     * Set mXparser to operate in degrees mode for trigonometric functions
     */
    "setDegreesMode"(): void;

    /**
     * Checks whether mXparser operates in radians mode for trigonometric functions.
     * @returns true - if radians mode, false - otherwise
     */
    "checkIfRadiansMode"(): boolean;

    /**
     * Checks whether mXparser operates in degrees mode for trigonometric functions.
     * @returns true - if degrees mode, false - otherwise
     */
    "checkIfDegreesMode"(): boolean;

    /**
     * Sets implied multiplication
     */
    "enableImpliedMultiplicationMode"(): void;

    /**
     * Disables implied multiplication
     */
    "disableImpliedMultiplicationMode"(): void;

    /**
     * Gets implied multiplication status
     * @returns true if implied multiplication is enabled, otherwise returns false.
     */
    "checkIfImpliedMultiplicationMode"(): boolean;

    /**
     * Enables unicode built-in parser keywords, this flag informs the parser that built-in unicode keywords
     * are supported and will be recognized as functions or operators.
     */
    "enableUnicodeBuiltinKeyWordsMode"(): void;

    /**
     * Disables unicode built-in parser keywords, this flag informs the parser that built-in unicode keywords
     * are not supported and will not be recognized as functions or operators.
     */
    "disableUnicodeBuiltinKeyWordsMode"(): void;

    /**
     * Gets unicode built-in parser keywords mode
     * @returns true if unicode built-in parser keywords is enabled, otherwise returns false.
     */
    "checkIfUnicodeBuiltinKeyWordsMode"(): boolean;

    /**
     * Enables attempt to fix the expression String. For example, situations such as: "++" change to "+", "+-"
     * changed to "-" "-+" changed to "-" "--" changed to "+"
     */
    "enableAttemptToFixExpStrMode"(): void;

    /**
     * Disables attempt to fix the expression String. For example, situations such as: "++" change to "+", "+-"
     * changed to "-" "-+" changed to "-" "--" changed to "+"
     */
    "disableAttemptToFixExpStrMode"(): void;

    /**
     * Gets attempt to fix expression string mode
     * @returns true attempt to fix expression string mode is enabled, otherwise returns false.
     */
    "checkIfAttemptToFixExpStrMode"(): boolean;

    /**
     * Option that enables selection of best matching language based on the current OS locale. Supported
     * languages: English, French, German, Italian, Polish, Portuguese, Spanish. If OS language is not
     * supported, then English is selected.
     * @see {@link StringModelStatics}
     * @see {@link StringResources}
     * @see {@link StringResourcesConstructor.bestMatchingLanguage}
     */
    "enableSelectBestMatchingLanguage"(): void;

    /**
     * Disables mode of selection of best matching language based on the current OS locale. Returns to the
     * English language.
     * @see {@link StringModelStatics}
     * @see {@link StringResources}
     * @see {@link StringResourcesConstructor.bestMatchingLanguage}
     */
    "disableSelectBestMatchingLanguage"(): void;

    /**
     * Checks if mode of selection of best matching language based on the current OS locale is enabled.
     * @returns True if mode of selection of best matching language is enabled, otherwise false.
     * @see {@link StringModelStatics}
     * @see {@link StringResources}
     * @see {@link StringResourcesConstructor.bestMatchingLanguage}
     */
    "checkIfSelectBestMatchingLanguage"(): boolean;

    /**
     * Changes language to the one that best matches provided language code. Supported languages: English,
     * French, German, Italian, Polish, Portuguese, Spanish. If language code does not belong to the supported
     * language codes English language is selected.
     * @param p0 - Supported language codes: en, fr, de, it, pl, pt, es.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringResources}
     * @see {@link StringResourcesConstructor.bestMatchingLanguage}
     */
    "changeLanguageTo"(p0: string | null): void;

    /**
     * Changes language to the one that best matches provided language code. Supported languages: English,
     * French, German, Italian, Polish, Portuguese, Spanish. If language code does not belong to the supported
     * language codes English language is selected.
     * @param p0 - Supported language codes: en, fr, de, it, pl, pt, es.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringResources}
     * @see {@link StringResourcesConstructor.bestMatchingLanguage}
     */
    "changeLanguageTo"(p0: string): void;

    /**
     * Changes language to the one that best matches current OS locale. Supported languages: English, French,
     * German, Italian, Polish, Portuguese, Spanish. If OS language is not supported, then English is selected.
     * @see {@link StringModelStatics}
     * @see {@link StringModelStatics.setStringResources}
     * @see {@link StringResources}
     * @see {@link StringResourcesConstructor.bestMatchingLanguage}
     */
    "changeLanguageToBestMatching"(): void;

    /**
     * Sets initial search size for the toFraction method
     * @param p0 - initial search size, has to be non-zero positive.
     * @see {@link mathcollection_NumberTheoryStatics.toFraction}
     */
    "setToFractionInitSearchSize"(p0: bigint): void;

    /**
     * Gets initial search size used by the toFraction method
     * @returns initial search size used by the toFraction method
     * @see {@link mathcollection_NumberTheoryStatics.toFraction}
     */
    "getToFractionInitSearchSize"(): bigint;

    /**
     * Removes built-in tokens form the list of tokens recognized by the parsers. Procedure affects only tokens
     * classified to built-in functions, built-in constants, built-in units, built-in random variables.
     * @param p0 - List of tokens to remove.
     */
    "removeBuiltinTokens"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    /**
     * Removes built-in tokens form the list of tokens recognized by the parsers. Procedure affects only tokens
     * classified to built-in functions, built-in constants, built-in units, built-in random variables.
     * @param tokens - List of tokens to remove.
     */
    "removeBuiltinTokens"(...tokens: (string | null | readonly (string | null)[])[]): void;

    /**
     * Un-marks tokens previously marked to be removed.
     * @param p0 - List of tokens to un-mark.
     */
    "unremoveBuiltinTokens"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    /**
     * Un-marks tokens previously marked to be removed.
     * @param tokens - List of tokens to un-mark.
     */
    "unremoveBuiltinTokens"(...tokens: (string | null | readonly (string | null)[])[]): void;

    /**
     * Un-marks all tokens previously marked to be removed.
     */
    "unremoveAllBuiltinTokens"(): void;

    /**
     * Returns current list of tokens marked to be removed.
     * @returns Current list of tokens marked to be removed
     */
    "getBuiltinTokensToRemove"(): Array<string | null> | null;

    /**
     * Method to change definition of built-in token - more precisely using this method allows to modify token
     * string recognized by the parser (i.e. sin(x) to sinus(x)). Procedure affects only tokens classified to
     * built-in functions, built-in constants, built-in units, built-in random variables.
     * @param p0 - Current token name
     * @param p1 - New token name
     */
    "modifyBuiltinToken"(p0: string | null, p1: string | null): void;

    /**
     * Method to change definition of built-in token - more precisely using this method allows to modify token
     * string recognized by the parser (i.e. sin(x) to sinus(x)). Procedure affects only tokens classified to
     * built-in functions, built-in constants, built-in units, built-in random variables.
     * @param p0 - Current token name
     * @param p1 - New token name
     */
    "modifyBuiltinToken"(p0: string, p1: string): void;

    /**
     * Method to change definition of built-in token - more precisely using this method allows to modify token
     * string recognized by the parser (i.e. sin(x) to sinus(x)). Procedure affects only tokens classified to
     * built-in functions, built-in constants, built-in units, built-in random variables.
     * @param p0 - Current token name
     * @param p1 - New token name
     * @param p2 - New token description (if null the previous one will be used)
     */
    "modifyBuiltinToken"(p0: string | null, p1: string | null, p2: string | null): void;

    /**
     * Method to change definition of built-in token - more precisely using this method allows to modify token
     * string recognized by the parser (i.e. sin(x) to sinus(x)). Procedure affects only tokens classified to
     * built-in functions, built-in constants, built-in units, built-in random variables.
     * @param p0 - Current token name
     * @param p1 - New token name
     * @param p2 - New token description (if null the previous one will be used)
     */
    "modifyBuiltinToken"(p0: string, p1: string, p2: string): void;

    /**
     * Un-marks tokens previously marked to be modified.
     * @param p0 - List of tokens to be un-marked (current or modified).
     */
    "unmodifyBuiltinTokens"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    /**
     * Un-marks tokens previously marked to be modified.
     * @param tokens - List of tokens to be un-marked (current or modified).
     */
    "unmodifyBuiltinTokens"(...tokens: (string | null | readonly (string | null)[])[]): void;

    /**
     * Un-marks all tokens previously marked to be modified.
     */
    "unmodifyAllBuiltinTokens"(): void;

    /**
     * Return details on tokens marked to be modified.
     * @returns String[i][0] - current token, String[i][1] - new token, String[i][2] - new token description.
     */
    "getBuiltinTokensToModify"(): Array<Array<string | null>> | null;

    /**
     * Sets mXparser to override built-in tokens by user defined tokens.
     */
    "setToOverrideBuiltinTokens"(): void;

    /**
     * Sets mXparser not to override built-in tokens by user defined tokens.
     */
    "setNotToOverrideBuiltinTokens"(): void;

    /**
     * Checks whether mXparser is set to override built-in tokens.
     * @returns True if mXparser is set to override built-in tokens by user defined tokens, otherwise false.
     */
    "checkIfsetToOverrideBuiltinTokens"(): boolean;

    /**
     * Sets default mXparser options
     */
    "setDefaultOptions"(): void;

    /**
     * Returns token type description.
     * @param p0 - Token type id
     * @returns String representing token type description.
     * @deprecated Planned to be removed, use {@link TokenConstructor.getTokenTypeDescription} instead
     */
    "getTokenTypeDescription"(p0: number | Int32Value): string | null;

    /**
     * Converts integer number to hex string (plain text)
     * @param p0 - Integer number
     * @returns Hex string (i.e. FF23)
     * @deprecated Planned to be removed, use {@link stringutils_StringUtilsStatics.numberToHexString} instead
     */
    "numberToHexString"(p0: number | Int32Value): string | null;

    /**
     * Converts long number to hex string (plain text)
     * @param p0 - Long number
     * @returns Hex string (i.e. FF23)
     * @deprecated Planned to be removed, use {@link stringutils_StringUtilsStatics.numberToHexString} instead
     */
    "numberToHexString"(p0: bigint): string | null;

    /**
     * Converts (long)double number to hex string (plain text)
     * @param p0 - Double number
     * @returns Hex string (i.e. FF23)
     * @deprecated Planned to be removed, use {@link stringutils_StringUtilsStatics.numberToHexString} instead
     */
    "numberToHexString"(p0: number): string | null;

    /**
     * Converts hex string into ASCII string, where each letter is represented by two hex digits (byte) from
     * the hex string.
     * @param p0 - Hex string (i.e. 48656C6C6F)
     * @returns ASCII string (i.e. '48656C6C6F' = 'Hello')
     * @deprecated Planned to be removed, use {@link stringutils_StringUtilsStatics.hexString2AsciiString} instead
     */
    "hexString2AsciiString"(p0: string | null): string | null;

    /**
     * Converts number into ASCII string, where each letter is represented by two hex digits (byte) from the
     * hex representation of the original number
     * @param p0 - Integer number (i.e. 310939249775 = '48656C6C6F')
     * @returns ASCII string (i.e. '48656C6C6F' = 'Hello')
     * @deprecated Planned to be removed, use {@link stringutils_StringUtilsStatics.numberToAsciiString} instead
     */
    "numberToAsciiString"(p0: number | Int32Value): string | null;

    /**
     * Converts number into ASCII string, where each letter is represented by two hex digits (byte) from the
     * hex representation of the original number
     * @param p0 - Long number (i.e. 310939249775 = '48656C6C6F')
     * @returns ASCII string (i.e. '48656C6C6F' = 'Hello')
     * @deprecated Planned to be removed, use {@link stringutils_StringUtilsStatics.numberToAsciiString} instead
     */
    "numberToAsciiString"(p0: bigint): string | null;

    /**
     * Converts (long)double number into ASCII string, where each letter is represented by two hex digits
     * (byte) from the hex representation of the original number cast to long type.
     * @param p0 - Double number (i.e. 310939249775 = '48656C6C6F')
     * @returns ASCII string (i.e. '48656C6C6F' = 'Hello')
     * @deprecated Planned to be removed, use {@link stringutils_StringUtilsStatics.numberToAsciiString} instead
     */
    "numberToAsciiString"(p0: number): string | null;

    /**
     * Other base to decimal conversion.
     * @param numeralSystemBase - Numeral system base has to be above 0.
     * @param digits - List of digits
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     */
    "convOthBase2Decimal"(numeralSystemBase: number, ...digits: number[]): number;

    /**
     * Other base (base between 1 and 36) number literal conversion to decimal number.
     * @param p0 - Number literal in given numeral system with base between 1 and 36. Digits: 0:0, 1:1, 2:2,
     *   3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K,
     *   21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
     * @param p1 - Numeral system base, between 1 and 36
     * @returns Decimal number after conversion. If conversion was not possible the NaN is returned.
     */
    "convOthBase2Decimal"(p0: string | null, p1: number | Int32Value): number;

    /**
     * Other base (base between 1 and 36) number literal conversion to decimal number. Base specification
     * included in number literal.
     *
     * Examples: 2 for b2.1001 or b.1001, 1 for b1.111, 23 for b23.123afg 16 for b16.123acdf or h.123acdf.
     * @param p0 - Number literal string. Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
     *   b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26. b27. b28. b29. b30. b31. b32.
     *   b33. b34. b35. b36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D,
     *   14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U,
     *   31:V, 32:W, 33:X, 34:Y, 35:Z
     * @returns Decimal number after conversion. If conversion was not possible the NaN is returned.
     */
    "convOthBase2Decimal"(p0: string | null): number;

    /**
     * Other base to decimal conversion.
     * @param p0 - Numeral system base has to be above 0.
     * @param p1 - List of digits
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     */
    "convOthBase2Decimal"(p0: number | Int32Value, p1: Array<number> | NativeList<number, "int"> | NullNativeList<"int"> | null): number;

    /**
     * Other base to decimal conversion.
     * @param p0 - Numeral system base has to be above 0.
     * @param p1 - List of digits
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     */
    "convOthBase2Decimal"(p0: number, p1: Array<number> | NativeList<number, "double"> | NullNativeList<"double"> | null): number;

    /**
     * Decimal number to other numeral system conversion with base between 1 and 36.
     * @param p0 - Decimal number
     * @param p1 - Numeral system base between 1 and 36
     * @returns Number literal representing decimal number in given numeral system. Digits 0:0, 1:1, 2:2, 3:3,
     *   4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L,
     *   22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z. If conversion was
     *   not possible the "NaN" string is returned.
     */
    "convDecimal2OthBase"(p0: number, p1: number | Int32Value): string | null;

    /**
     * Decimal number to other numeral system conversion with base between 1 and 36.
     * @param p0 - Decimal number
     * @param p1 - Numeral system base between 1 and 36
     * @param p2 - If 1 then always bxx. is used, i.e. b1. or b16. If 2 then for binary b. is used, for octal
     *   o. is used, for hexadecimal h. is used, otherwise bxx. is used where xx is the numeral system base
     *   specification.
     * @returns Number literal representing decimal number in given numeral system. Base format: b1. b2. b. b3.
     *   b4. b5. b6. b7. b8. o. b9. b10. b11. b12. b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23.
     *   b24. b25. b26. b27. b28. b29. b30. b31. b32. b33. b34. b35. b36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5,
     *   6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M,
     *   23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z If conversion was not
     *   possible the "NaN" string is returned.
     */
    "convDecimal2OthBase"(p0: number, p1: number | Int32Value, p2: number | Int32Value): string | null;

    /**
     * Converts double value to its fraction representation.
     * @param p0 - Value to be converted
     * @returns Array representing fraction. Sign at index 0, numerator at index 1, denominator at index 2. If
     *   conversion is not possible then NaN is assigned to all the fields.
     */
    "toFraction"(p0: number): Array<number> | null;

    /**
     * Converts double value to its mixed fraction representation.
     * @param p0 - Value to be converted
     * @returns Array representing fraction. Sign at index 0, whole number at index 1, numerator at index 2,
     *   denominator at index 3. If conversion is not possible then NaN is assigned to both numerator and
     *   denominator.
     */
    "toMixedFraction"(p0: number): Array<number> | null;

    /**
     * Converts array representing fraction to fraction string representation.
     * @param p0 - Array representing fraction (including mix fractions)
     * @returns String representation of fraction.
     * @see {@link mathcollection_NumberTheoryStatics.toFraction}
     * @see {@link mathcollection_NumberTheoryStatics.toMixedFraction}
     */
    "fractionToString"(p0: Array<number> | Float64Array): string | null;

    /**
     * Converts number to its fraction string representation.
     * @param p0 - Given number
     * @returns String representation of fraction.
     * @see {@link mathcollection_NumberTheoryStatics.toFraction}
     * @see {@link mathcollection_NumberTheoryStatics.fractionToString}
     */
    "toFractionString"(p0: number): string | null;

    /**
     * Converts number to its mixed fraction string representation.
     * @param p0 - Given number
     * @returns String representation of fraction.
     * @see {@link mathcollection_NumberTheoryStatics.toMixedFraction}
     * @see {@link mathcollection_NumberTheoryStatics.fractionToString}
     */
    "toMixedFractionString"(p0: number): string | null;

    /**
     * Prints object.toString to the Console
     * @param p0 - Object to print
     */
    "consolePrint"(p0: bigint): void;

    /**
     * Prints object.toString to the Console
     * @param p0 - Object to print
     */
    "consolePrint"(p0: string): void;

    /**
     * Prints object.toString to the Console
     * @param p0 - Object to print
     */
    "consolePrint"(p0: boolean): void;

    /**
     * Prints object.toString to the Console
     * @param p0 - Object to print
     */
    "consolePrint"(p0: number): void;

    /**
     * Prints object.toString to the Console + new line
     * @param p0 - Object to print
     */
    "consolePrintln"(p0: bigint): void;

    /**
     * Prints array of strings
     * @param p0 - array of strinfs
     */
    "consolePrintln"(p0: string): void;

    /**
     * Prints object.toString to the Console + new line
     * @param p0 - Object to print
     */
    "consolePrintln"(p0: boolean): void;

    /**
     * Prints object.toString to the Console + new line
     * @param p0 - Object to print
     */
    "consolePrintln"(p0: number): void;

    /**
     * Prints new line to the Console, no new line
     */
    "consolePrintln"(): void;

    /**
     * Prints array of strings
     * @param p0 - array of strinfs
     */
    "consolePrintln"(p0: Array<string | null> | null): void;

    /**
     * Prints array of strings
     * @param p0 - array of strinfs
     */
    "consolePrintln"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    /**
     * Prints the current parser settings and Java version to the mXparser console.
     * @param p0 - Text prepended to each settings line.
     */
    "consolePrintSettings"(p0: string | null): void;

    /**
     * Prints the current parser settings and Java version to the mXparser console.
     * @param p0 - Text prepended to each settings line.
     */
    "consolePrintSettings"(p0: string): void;

    /**
     * Prints the current parser settings and Java version without an additional prefix.
     */
    "consolePrintSettings"(): void;

    /**
     * Resets console output string, console output string is being built by consolePrintln(), consolePrint().
     * @see {@link mXparserStatics.consolePrint}
     * @see {@link mXparserStatics.consolePrintln}
     * @see {@link mXparserStatics.consolePrintln}
     * @see {@link mXparserStatics.resetConsoleOutput}
     */
    "resetConsoleOutput"(): void;

    /**
     * Sets default console prefix.
     */
    "setDefaultConsolePrefix"(): void;

    /**
     * Sets default console output string prefix.
     */
    "setDefaultConsoleOutputPrefix"(): void;

    /**
     * Sets console prefix.
     * @param p0 - String containing console prefix definition.
     */
    "setConsolePrefix"(p0: string | null): void;

    /**
     * Sets console prefix.
     * @param p0 - String containing console prefix definition.
     */
    "setConsolePrefix"(p0: string): void;

    /**
     * Sets console output string prefix.
     * @param p0 - String containing console output prefix definition.
     */
    "setConsoleOutputPrefix"(p0: string | null): void;

    /**
     * Sets console output string prefix.
     * @param p0 - String containing console output prefix definition.
     */
    "setConsoleOutputPrefix"(p0: string): void;

    /**
     * Returns console output string, console output string is being built by consolePrintln(), consolePrint().
     * @returns Console output string
     * @see {@link mXparserStatics.consolePrint}
     * @see {@link mXparserStatics.consolePrintln}
     * @see {@link mXparserStatics.consolePrintln}
     * @see {@link mXparserStatics.resetConsoleOutput}
     */
    "getConsoleOutput"(): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions.
     * @returns One string value containing all the help.
     */
    "getHelp"(): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: string | null): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: string): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, any string other than "" will replace the standard
     *   caption with the one specified by the user.
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: boolean, p1: boolean, p2: string | null): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, any string other than "" will replace the standard
     *   caption with the one specified by the user.
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: boolean, p1: boolean, p2: string): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - If a non-standard caption is to be added, any string other than ""
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: string | null, p1: boolean, p2: boolean, p3: string | null): string | null;

    /**
     * Returns detailed user help on the syntax of mathematical expressions. Allows simple and advanced
     * searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - If a non-standard caption is to be added, any string other than ""
     * @returns One string value containing all the help.
     */
    "getHelp"(p0: string, p1: boolean, p2: boolean, p3: string): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string | null): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Text qualifier.
     * @param p1 - Delimiter.
     * @param p2 - Indicator whether to add a header.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string | null, p1: string | null, p2: boolean): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Text qualifier.
     * @param p1 - Delimiter.
     * @param p2 - Indicator whether to add a header.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string, p1: string, p2: boolean): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Text qualifier.
     * @param p2 - Delimiter.
     * @param p3 - Indicator whether to add a header.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string | null, p1: string | null, p2: string | null, p3: boolean): string | null;

    /**
     * Returns (as CSV) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Text qualifier.
     * @param p2 - Delimiter.
     * @param p3 - Indicator whether to add a header.
     * @returns One string value in CSV format containing all the help.
     */
    "getHelpAsCsv"(p0: string, p1: string, p2: string, p3: boolean): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: string | null): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: string): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - Indicator whether to add a FIGURE tag.
     * @param p3 - If a non-standard caption is to be added, use any string other than "".
     * @param p4 - If CSS class is to be added, use any string other than "".
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: boolean, p1: boolean, p2: boolean, p3: string | null, p4: string | null): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - Indicator whether to add a FIGURE tag.
     * @param p3 - If a non-standard caption is to be added, use any string other than "".
     * @param p4 - If CSS class is to be added, use any string other than "".
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: boolean, p1: boolean, p2: boolean, p3: string, p4: string): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - Indicator whether to add a FIGURE tag.
     * @param p4 - If a non-standard caption is to be added, use any string other than "".
     * @param p5 - If CSS class is to be added, use any string other than "".
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: string | null, p1: boolean, p2: boolean, p3: boolean, p4: string | null, p5: string | null): string | null;

    /**
     * Returns (as HTML table) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - Indicator whether to add a FIGURE tag.
     * @param p4 - If a non-standard caption is to be added, use any string other than "".
     * @param p5 - If CSS class is to be added, use any string other than "".
     * @returns One string value containing all the help. String in HTML table format.
     */
    "getHelpAsHtmlTable"(p0: string, p1: boolean, p2: boolean, p3: boolean, p4: string, p5: string): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions. Allows simple
     * and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: string | null): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions. Allows simple
     * and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: string): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: boolean, p1: boolean, p2: string | null): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add a header.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: boolean, p1: boolean, p2: string): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions. Allows simple
     * and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: string | null, p1: boolean, p2: boolean, p3: string | null): string | null;

    /**
     * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions. Allows simple
     * and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add a header.
     * @param p2 - Indicator whether to add caption.
     * @param p3 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Markdown table format.
     */
    "getHelpAsMarkdownTable"(p0: string, p1: boolean, p2: boolean, p3: string): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions.
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: string | null): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: string): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add caption.
     * @param p1 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: boolean, p1: string | null): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions.
     * @param p0 - Indicator whether to add caption.
     * @param p1 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: boolean, p1: string): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: string | null, p1: boolean, p2: string | null): string | null;

    /**
     * Returns (as Json) detailed user help on the syntax of mathematical expressions. Allows simple and
     * advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @param p1 - Indicator whether to add caption.
     * @param p2 - If a non-standard caption is to be added, use any string other than "".
     * @returns One string value containing all the help. String in Json format.
     */
    "getHelpAsJson"(p0: string, p1: boolean, p2: string): string | null;

    /**
     * Prints all help content.
     */
    "consolePrintHelp"(): void;

    /**
     * Prints filtered help content. Allows simple and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     */
    "consolePrintHelp"(p0: string | null): void;

    /**
     * Prints filtered help content. Allows simple and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     */
    "consolePrintHelp"(p0: string): void;

    /**
     * Returns list of keywords known to the parser
     * @returns List of keywords known to the parser. Release each returned native handle with delete() when
     *   non-null.
     * @see {@link KeyWord}
     * @see {@link KeyWord.wordTypeId}
     * @see {@link mXparserStatics.getHelp}
     */
    "getKeyWords"(): Array<KeyWord | null> | null;

    /**
     * Returns list of keywords known to the parser. Allows simple and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns List of keywords known to the parser filter against query string. Release each returned native
     *   handle with delete() when non-null.
     * @see {@link KeyWord}
     * @see {@link KeyWord.wordTypeId}
     * @see {@link mXparserStatics.getHelp}
     */
    "getKeyWords"(p0: string | null): Array<KeyWord | null> | null;

    /**
     * Returns list of keywords known to the parser. Allows simple and advanced searches.
     * @param p0 - For a simple search, simply enter a word (e.g.: "sine"). Advanced search is also possible,
     *   please use one of the tags below: "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.:
     *   "desc=trigonometric"), "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"), "since="
     *   - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens (e.g.: "typeid=3"), "keyid=" -
     *   please refer to parser tokens (e.g.: "keyid=1004"). Only one tag can be used per search.
     * @returns List of keywords known to the parser filter against query string. Release each returned native
     *   handle with delete() when non-null.
     * @see {@link KeyWord}
     * @see {@link KeyWord.wordTypeId}
     * @see {@link mXparserStatics.getHelp}
     */
    "getKeyWords"(p0: string): Array<KeyWord | null> | null;

    /**
     * Function used to introduce some compatibility between JAVA and C# while regexp matching.
     * @param p0 - String
     * @param p1 - Pattern (regexp)
     * @returns True if pattern matches entirely, False otherwise
     * @deprecated Planned to be removed, use {@link stringutils_StringUtilsStatics.regexMatch} instead
     */
    "regexMatch"(p0: string | null, p1: string | null): boolean;

    /**
     * Function used to introduce some compatibility between JAVA and C# while regexp matching.
     * @param p0 - String
     * @param p1 - Pattern (regexp)
     * @returns True if pattern matches entirely, False otherwise
     * @deprecated Planned to be removed, use {@link stringutils_StringUtilsStatics.regexMatch} instead
     */
    "regexMatch"(p0: string, p1: string): boolean;

    /**
     * Prints tokens to the console.
     * @param p0 - Tokens list.
     * @see {@link Expression.getCopyOfInitialTokens}
     * @see {@link Token}
     */
    "consolePrintTokens"(p0: Array<Token | null> | NativeList<Token | null, "TokenPtr"> | NullNativeList<"TokenPtr"> | null): void;

    /**
     * Prints tokens to the console.
     * @param p0 - Tokens list.
     * @see {@link Expression.getCopyOfInitialTokens}
     * @see {@link Token}
     */
    "consolePrint"(p0: Array<Token | null> | NativeList<Token | null, "TokenPtr"> | NullNativeList<"TokenPtr"> | null): void;

    /**
     * Prints tokens to the console.
     * @param p0 - Tokens list.
     * @see {@link Expression.getCopyOfInitialTokens}
     * @see {@link Token}
     */
    "consolePrintln"(p0: Array<Token | null> | NativeList<Token | null, "TokenPtr"> | NullNativeList<"TokenPtr"> | null): void;

    readonly "LICENSE": string | null;

    /**
     * Prints to the console the terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT
     */
    "consolePrintLicense"(): void;

    /**
     * Gets license info
     * @returns license info as string
     */
    "getLicense"(): string | null;

    /**
     * Waits given number of milliseconds
     * @param p0 - Number of milliseconds
     */
    "wait"(p0: number | Int32Value): void;

    /**
     * Method give a signal to other methods to cancel current calculation. This is a flag, remember to reset
     * this flag after process is cancelled and you are going to start new calculation process.
     *
     * Sets only the volatile global flag (domain 0); individual domains also observe this global signal.
     */
    "cancelCurrentCalculation"(): void;

    /**
     * Resets a flag giving signal to the engine to cancel current calculation.
     *
     * {@link mXparserStatics.cancelCurrentCalculation}
     *
     * Clears only the volatile global flag (domain 0); individual signals and reservations remain unchanged.
     */
    "resetCancelCurrentCalculationFlag"(): void;

    /**
     * Check whether a flag to cancel current calculation process is set.
     *
     * {@link mXparserStatics.cancelCurrentCalculation} {@link mXparserStatics.resetCancelCurrentCalculationFlag}
     * @returns true in case cancel calculation flag is active, otherwise false Reads only the volatile global
     *   flag (domain 0); does not read an individual domain or confirm that an operation stopped.
     */
    "isCurrentCalculationCancelled"(): boolean;

    readonly "NAMEv10": string | null;
    readonly "NAMEv20": string | null;
    readonly "NAMEv23": string | null;
    readonly "NAMEv24": string | null;
    readonly "NAMEv30": string | null;
    readonly "NAMEv40": string | null;
    readonly "NAMEv41": string | null;
    readonly "NAMEv42": string | null;
    readonly "NAMEv43": string | null;
    readonly "NAMEv44": string | null;
    readonly "NAMEv50": string | null;
    readonly "NAMEv51": string | null;
    readonly "NAMEv52": string | null;
    readonly "NAMEv60": string | null;
    readonly "NAMEv61": string | null;
}

export interface mathcollection_AstronomicalConstantsStatics {
    readonly "LIGHT_YEAR": number;
    readonly "ASTRONOMICAL_UNIT": number;
    readonly "PARSEC": number;
    readonly "KILOPARSEC": number;
    readonly "EARTH_RADIUS_EQUATORIAL": number;
    readonly "EARTH_RADIUS_POLAR": number;
    readonly "EARTH_RADIUS_MEAN": number;
    readonly "EARTH_MASS": number;
    readonly "EARTH_SEMI_MAJOR_AXIS": number;
    readonly "MOON_RADIUS_MEAN": number;
    readonly "MOON_MASS": number;
    readonly "MOON_SEMI_MAJOR_AXIS": number;
    readonly "SOLAR_RADIUS": number;
    readonly "SOLAR_MASS": number;
    readonly "MERCURY_RADIUS_MEAN": number;
    readonly "MERCURY_MASS": number;
    readonly "MERCURY_SEMI_MAJOR_AXIS": number;
    readonly "VENUS_RADIUS_MEAN": number;
    readonly "VENUS_MASS": number;
    readonly "VENUS_SEMI_MAJOR_AXIS": number;
    readonly "MARS_RADIUS_MEAN": number;
    readonly "MARS_MASS": number;
    readonly "MARS_SEMI_MAJOR_AXIS": number;
    readonly "JUPITER_RADIUS_MEAN": number;
    readonly "JUPITER_MASS": number;
    readonly "JUPITER_SEMI_MAJOR_AXIS": number;
    readonly "SATURN_RADIUS_MEAN": number;
    readonly "SATURN_MASS": number;
    readonly "SATURN_SEMI_MAJOR_AXIS": number;
    readonly "URANUS_RADIUS_MEAN": number;
    readonly "URANUS_MASS": number;
    readonly "URANUS_SEMI_MAJOR_AXIS": number;
    readonly "NEPTUNE_RADIUS_MEAN": number;
    readonly "NEPTUNE_MASS": number;
    readonly "NEPTUNE_SEMI_MAJOR_AXIS": number;
}

export interface mathcollection_BinaryRelationsStatics {
    readonly "DEFAULT_COMPARISON_EPSILON": number;

    /**
     * Sets comparison mode to EXACT.
     */
    "setExactComparison"(): void;

    /**
     * Sets comparison mode to EPSILON.
     */
    "setEpsilonComparison"(): void;

    /**
     * Sets epsilon value.
     * @param p0 - Epsilon value (grater than 0).
     * @see {@link mathcollection_BinaryRelationsStatics.setEpsilonComparison}
     */
    "setEpsilon"(p0: number): void;

    /**
     * Sets default epsilon value.
     * @see {@link mathcollection_BinaryRelationsStatics.setEpsilonComparison}
     * @see {@link mathcollection_BinaryRelationsStatics.DEFAULT_COMPARISON_EPSILON}
     */
    "setDefaultEpsilon"(): void;

    /**
     * Returns current epsilon value.
     * @returns Returns current epsilon value.
     * @see {@link mathcollection_BinaryRelationsStatics.setEpsilonComparison}
     */
    "getEpsilon"(): number;

    /**
     * Checks if epsilon comparison mode is active;
     * @returns True if epsilon mode is active, otherwise returns false.
     * @see {@link mathcollection_BinaryRelationsStatics.setEpsilonComparison}
     * @see {@link mathcollection_BinaryRelationsStatics.setExactComparison}
     */
    "checkIfEpsilonMode"(): boolean;

    /**
     * Checks if exact comparison mode is active;
     * @returns True if exact mode is active, otherwise returns false.
     * @see {@link mathcollection_BinaryRelationsStatics.setEpsilonComparison}
     * @see {@link mathcollection_BinaryRelationsStatics.setExactComparison}
     */
    "checkIfExactMode"(): boolean;

    /**
     * Equality relation.
     * @param p0 - the a number (a = b)
     * @param p1 - the b number (a = b)
     * @returns if a = NaN or b = NaN return NaN, else if a = b return 1, otherwise return 0.
     */
    "eq"(p0: number, p1: number): number;

    /**
     * Test for equality or almost equality.
     * @param p0 - First number
     * @param p1 - Second number
     * @returns Returns true if both number are equal or are almost equal.
     * @see {@link mathcollection_BinaryRelationsStatics.DEFAULT_COMPARISON_EPSILON}
     */
    "isEqualOrAlmost"(p0: number, p1: number): boolean;

    /**
     * Inequality relation.
     * @param p0 - the a number (a <> b)
     * @param p1 - the b number (a <> b)
     * @returns if a = NaN or b = NaN return NaN, else if a <> b return 1, otherwise return 0.
     */
    "neq"(p0: number, p1: number): number;

    /**
     * Lower than relation.
     * @param p0 - the a number (a < b)
     * @param p1 - the b number (a < b)
     * @returns if a = NaN or b = NaN return NaN, else if a < b return 1, otherwise return 0.
     */
    "lt"(p0: number, p1: number): number;

    /**
     * Greater than relation.
     * @param p0 - the a number (a > b)
     * @param p1 - the b number (a > b)
     * @returns if a = NaN or b = NaN return NaN, else if a > b return 1, otherwise return 0.
     */
    "gt"(p0: number, p1: number): number;

    /**
     * Lower or equal relation.
     * @param p0 - the a number (a <= b)
     * @param p1 - the b number (a <= b)
     * @returns if a = NaN or b = NaN return NaN, else if a <= b return 1, otherwise return 0.
     */
    "leq"(p0: number, p1: number): number;

    /**
     * Greater or equal relation.
     * @param p0 - the a number (a >= b)
     * @param p1 - the b number (a >= b)
     * @returns if a = NaN or b = NaN return NaN, else if a >= b return 1, otherwise return 0.
     */
    "geq"(p0: number, p1: number): number;
}

export interface mathcollection_BooleanAlgebraStatics {

    /**
     * Boolean AND variadic
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param values - List of values
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns BooleanAlgebra.TRUE if all values on the list are BooleanAlgebra.TURE, otherwise
     *   returns BooleanAlgebra.FALSE
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_BooleanAlgebraStatics.andVariadic}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "andVariadicWithCancel"(values: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Boolean OR variadic
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param values - List of values
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns BooleanAlgebra.TRUE if at least one value on the list is BooleanAlgebra.TURE, otherwise
     *   returns BooleanAlgebra.FALSE
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_BooleanAlgebraStatics.orVariadic}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "orVariadicWithCancel"(values: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Boolean XOR variadic
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param values - List of values
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns BooleanAlgebra.TRUE if exactly one value on the list is BooleanAlgebra.TURE, otherwise
     *   returns BooleanAlgebra.FALSE
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_BooleanAlgebraStatics.xorVariadic}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "xorVariadicWithCancel"(values: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    readonly "FALSE": number;
    readonly "TRUE": number;
    readonly "NULL": number;
    readonly "F": number;
    readonly "T": number;
    readonly "N": number;

    /**
     * Double to integer boolean translation
     * @param p0 - the double number
     * @returns If a = NaN return NULL, else if a <> 0 return TRUE, else return FALSE.
     */
    "double2IntBoolean"(p0: number): number;

    /**
     * Boolean AND
     * @param p0 - the a number (a AND b)
     * @param p1 - the b number (a AND b)
     * @returns Truth table element AND[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    "and"(p0: number, p1: number): number;

    /**
     * Boolean OR
     * @param p0 - the a number (a OR b)
     * @param p1 - the b number (a OR b)
     * @returns Truth table element OR[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    "or"(p0: number, p1: number): number;

    /**
     * Boolean XOR
     * @param p0 - the a number (a XOR b)
     * @param p1 - the b number (a XOR b)
     * @returns Truth table element XOR[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    "xor"(p0: number, p1: number): number;

    /**
     * Boolean NAND
     * @param p0 - the a number (a NAND b)
     * @param p1 - the b number (a NAND b)
     * @returns Truth table element NAND[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    "nand"(p0: number, p1: number): number;

    /**
     * Boolean NOR
     * @param p0 - the a number (a NOR b)
     * @param p1 - the b number (a NOR b)
     * @returns Truth table element NOR[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    "nor"(p0: number, p1: number): number;

    /**
     * Boolean XNOR
     * @param p0 - the a number (a XNOR b)
     * @param p1 - the b number (a XNOR b)
     * @returns Truth table element XNOR[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    "xnor"(p0: number, p1: number): number;

    /**
     * Boolean IMP
     * @param p0 - the a number (a IMP b)
     * @param p1 - the b number (a IMP b)
     * @returns Truth table element IMP[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    "imp"(p0: number, p1: number): number;

    /**
     * Boolean EQV
     * @param p0 - the a number (a EQV b)
     * @param p1 - the b number (a EQV b)
     * @returns Truth table element EQV[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    "eqv"(p0: number, p1: number): number;

    /**
     * Boolean NOT
     * @param p0 - the a number (NOT a)
     * @returns Truth table element NOT[A] where A = double2IntBoolean(a)
     */
    "not"(p0: number): number;

    /**
     * Boolean CIMP
     * @param p0 - the a number (a CIMP b)
     * @param p1 - the b number (a CIMP b)
     * @returns Truth table element CIMP[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    "cimp"(p0: number, p1: number): number;

    /**
     * Boolean NIMP
     * @param p0 - the a number (a NIMP b)
     * @param p1 - the b number (a NIMP b)
     * @returns Truth table element NIMP[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    "nimp"(p0: number, p1: number): number;

    /**
     * Boolean CNIMP
     * @param p0 - the a number (a CNIMP b)
     * @param p1 - the b number (a CNIMP b)
     * @returns Truth table element CNIMP[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    "cnimp"(p0: number, p1: number): number;

    /**
     * Boolean AND variadic
     * @param p0 - List of values
     * @returns Returns BooleanAlgebra.TRUE if all values on the list are BooleanAlgebra.TURE, otherwise
     *   returns BooleanAlgebra.FALSE
     */
    "andVariadic"(p0: Array<number> | Float64Array): number;

    /**
     * Boolean OR variadic
     * @param p0 - List of values
     * @returns Returns BooleanAlgebra.TRUE if at least one value on the list is BooleanAlgebra.TURE, otherwise
     *   returns BooleanAlgebra.FALSE
     */
    "orVariadic"(p0: Array<number> | Float64Array): number;

    /**
     * Boolean XOR variadic
     * @param p0 - List of values
     * @returns Returns BooleanAlgebra.TRUE if exactly one value on the list is BooleanAlgebra.TURE, otherwise
     *   returns BooleanAlgebra.FALSE
     */
    "xorVariadic"(p0: Array<number> | Float64Array): number;

    readonly "AND_TRUTH_TABLE": ReadonlyArray<ReadonlyArray<number>>;
    readonly "NAND_TRUTH_TABLE": ReadonlyArray<ReadonlyArray<number>>;
    readonly "OR_TRUTH_TABLE": ReadonlyArray<ReadonlyArray<number>>;
    readonly "NOR_TRUTH_TABLE": ReadonlyArray<ReadonlyArray<number>>;
    readonly "XOR_TRUTH_TABLE": ReadonlyArray<ReadonlyArray<number>>;
    readonly "XNOR_TRUTH_TABLE": ReadonlyArray<ReadonlyArray<number>>;
    readonly "IMP_TRUTH_TABLE": ReadonlyArray<ReadonlyArray<number>>;
    readonly "CIMP_TRUTH_TABLE": ReadonlyArray<ReadonlyArray<number>>;
    readonly "EQV_TRUTH_TABLE": ReadonlyArray<ReadonlyArray<number>>;
    readonly "NIMP_TRUTH_TABLE": ReadonlyArray<ReadonlyArray<number>>;
    readonly "CNIMP_TRUTH_TABLE": ReadonlyArray<ReadonlyArray<number>>;
    readonly "NOT_TRUTH_TABLE": ReadonlyArray<number>;
}

export interface mathcollection_CalculusStatics {

    /**
     * Trapezoid numerical integration
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param x - the argument
     * @param a - form a ...
     * @param b - ... to b
     * @param eps - the epsilon (error)
     * @param maxSteps - the maximum number of steps
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Integral value as a number.
     * @see {@link Expression}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_CalculusStatics.integralTrapezoid}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "integralTrapezoidWithCancel"(f: Expression | null, x: Argument | null, a: number, b: number, eps: number, maxSteps: number | Int32Value, cancelId: number): number;

    /**
     * Numerical derivative at x = x0
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param x - the argument
     * @param x0 - at point x = x0
     * @param derType - derivative type (LEFT_DERIVATIVE, RIGHT_DERIVATIVE, GENERAL_DERIVATIVE
     * @param eps - the epsilon (error)
     * @param maxSteps - the maximum number of steps
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Derivative value as a number.
     * @see {@link Expression}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_CalculusStatics.derivative}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "derivativeWithCancel"(f: Expression | null, x: Argument | null, x0: number, derType: number | Int32Value, eps: number, maxSteps: number | Int32Value, cancelId: number): number;

    /**
     * Numerical n-th derivative at x = x0 (you should avoid calculation of derivatives with order higher than
     * 2).
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param n - the deriviative order
     * @param x - the argument
     * @param x0 - at point x = x0
     * @param derType - derivative type (LEFT_DERIVATIVE, RIGHT_DERIVATIVE, GENERAL_DERIVATIVE
     * @param eps - the epsilon (error)
     * @param maxSteps - the maximum number of steps
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Derivative value as a number.
     * @see {@link Expression}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_CalculusStatics.derivativeNth}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "derivativeNthWithCancel"(f: Expression | null, n: number, x: Argument | null, x0: number, derType: number | Int32Value, eps: number, maxSteps: number | Int32Value, cancelId: number): number;

    /**
     * Forward difference(h) operator (at the current value of the argument x)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param h - the difference
     * @param x - the argument name
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Forward difference(h) value calculated at the current value of the argument x.
     * @see {@link Expression}
     * @see {@link Argument}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_CalculusStatics.forwardDifference}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "forwardDifferenceWithCancel"(f: Expression | null, h: number, x: Argument | null, cancelId: number): number;

    /**
     * Backward difference(h) operator (at the current value of the argument x)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param h - the difference
     * @param x - the argument name
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Backward difference(h) value calculated at the current value of the argument x.
     * @see {@link Expression}
     * @see {@link Argument}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_CalculusStatics.backwardDifference}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "backwardDifferenceWithCancel"(f: Expression | null, h: number, x: Argument | null, cancelId: number): number;

    /**
     * Brent solver (Brent root finder)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - Function given in the Expression form
     * @param x - Argument
     * @param a - Left limit
     * @param b - Right limit
     * @param eps - Epsilon value (accuracy)
     * @param maxSteps - Maximum number of iterations
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Function root - if found, otherwise NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_CalculusStatics.solveBrent}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "solveBrentWithCancel"(f: Expression | null, x: Argument | null, a: number, b: number, eps: number, maxSteps: number, cancelId: number): number;

    readonly "LEFT_DERIVATIVE": number;
    readonly "RIGHT_DERIVATIVE": number;
    readonly "GENERAL_DERIVATIVE": number;

    /**
     * Trapezoid numerical integration
     * @param p0 - the expression
     * @param p1 - the argument
     * @param p2 - form a ...
     * @param p3 - ... to b
     * @param p4 - the epsilon (error)
     * @param p5 - the maximum number of steps
     * @returns Integral value as a number.
     * @see {@link Expression}
     */
    "integralTrapezoid"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number, p5: number | Int32Value): number;

    /**
     * Numerical derivative at x = x0
     * @param p0 - the expression
     * @param p1 - the argument
     * @param p2 - at point x = x0
     * @param p3 - derivative type (LEFT_DERIVATIVE, RIGHT_DERIVATIVE, GENERAL_DERIVATIVE
     * @param p4 - the epsilon (error)
     * @param p5 - the maximum number of steps
     * @returns Derivative value as a number.
     * @see {@link Expression}
     */
    "derivative"(p0: Expression | null, p1: Argument | null, p2: number, p3: number | Int32Value, p4: number, p5: number | Int32Value): number;

    /**
     * Numerical n-th derivative at x = x0 (you should avoid calculation of derivatives with order higher than
     * 2).
     * @param p0 - the expression
     * @param p1 - the deriviative order
     * @param p2 - the argument
     * @param p3 - at point x = x0
     * @param p4 - derivative type (LEFT_DERIVATIVE, RIGHT_DERIVATIVE, GENERAL_DERIVATIVE
     * @param p5 - the epsilon (error)
     * @param p6 - the maximum number of steps
     * @returns Derivative value as a number.
     * @see {@link Expression}
     */
    "derivativeNth"(p0: Expression | null, p1: number, p2: Argument | null, p3: number, p4: number | Int32Value, p5: number, p6: number | Int32Value): number;

    /**
     * Forward difference(1) operator (at x = x0)
     * @param p0 - the expression
     * @param p1 - the argument name
     * @param p2 - x = x0
     * @returns Forward difference(1) value calculated at x0.
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "forwardDifference"(p0: Expression | null, p1: Argument | null, p2: number): number;

    /**
     * Forward difference(1) operator (at current value of argument x)
     * @param p0 - the expression
     * @param p1 - the argument name
     * @returns Forward difference(1) value calculated at the current value of argument x.
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "forwardDifference"(p0: Expression | null, p1: Argument | null): number;

    /**
     * Backward difference(1) operator (at x = x0).
     * @param p0 - the expression
     * @param p1 - the argument name
     * @param p2 - x = x0
     * @returns Backward difference value calculated at x0.
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "backwardDifference"(p0: Expression | null, p1: Argument | null, p2: number): number;

    /**
     * Backward difference(1) operator (at current value of argument x)
     * @param p0 - the expression
     * @param p1 - the argument name
     * @returns Backward difference(1) value calculated at the current value of argument x.
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "backwardDifference"(p0: Expression | null, p1: Argument | null): number;

    /**
     * Forward difference(h) operator (at x = x0)
     * @param p0 - the expression
     * @param p1 - the difference
     * @param p2 - the argument name
     * @param p3 - x = x0
     * @returns Forward difference(h) value calculated at x0.
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "forwardDifference"(p0: Expression | null, p1: number, p2: Argument | null, p3: number): number;

    /**
     * Forward difference(h) operator (at the current value of the argument x)
     * @param p0 - the expression
     * @param p1 - the difference
     * @param p2 - the argument name
     * @returns Forward difference(h) value calculated at the current value of the argument x.
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "forwardDifference"(p0: Expression | null, p1: number, p2: Argument | null): number;

    /**
     * Backward difference(h) operator (at x = x0)
     * @param p0 - the expression
     * @param p1 - the difference
     * @param p2 - the argument name
     * @param p3 - x = x0
     * @returns Backward difference(h) value calculated at x0.
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "backwardDifference"(p0: Expression | null, p1: number, p2: Argument | null, p3: number): number;

    /**
     * Backward difference(h) operator (at the current value of the argument x)
     * @param p0 - the expression
     * @param p1 - the difference
     * @param p2 - the argument name
     * @returns Backward difference(h) value calculated at the current value of the argument x.
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "backwardDifference"(p0: Expression | null, p1: number, p2: Argument | null): number;

    /**
     * Brent solver (Brent root finder)
     * @param p0 - Function given in the Expression form
     * @param p1 - Argument
     * @param p2 - Left limit
     * @param p3 - Right limit
     * @param p4 - Epsilon value (accuracy)
     * @param p5 - Maximum number of iterations
     * @returns Function root - if found, otherwise NaN.
     */
    "solveBrent"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number, p5: number): number;
}

export interface mathcollection_EvaluateStatics {
    /**
     * Polynomial evaluation based on provided coefficients.
     * @param p0 - Point at which polynomial will be evaluated
     * @param p1 - Polynomial coefficients
     * @returns Polynomial value
     */
    "polynomial"(p0: number, p1: Array<number> | Float64Array): number;

    /**
     * Polynomial evaluation for the {@link mathcollection_SpecialFunctionsStatics.logGamma}
     * @param p0 - Argument value
     * @param p1 - List of polynomial coefficients
     * @param p2 - Polynomial degree
     * @returns Polynomial value
     */
    "p1evl"(p0: number, p1: Array<number> | Float64Array, p2: number | Int32Value): number;

    /**
     * Polynomial evaluation for the {@link mathcollection_SpecialFunctionsStatics.logGamma}
     * @param p0 - Argument value
     * @param p1 - List of polynomial coefficients
     * @param p2 - Polynomial degree
     * @returns Polynomial value
     */
    "polevl"(p0: number, p1: Array<number> | Float64Array, p2: number | Int32Value): number;
}

export interface mathcollection_MathConstantsStatics {
    readonly "PI": number;
    readonly "PIBY2": number;
    readonly "PIINV": number;
    readonly "E": number;
    readonly "EULER_MASCHERONI": number;
    readonly "GOLDEN_RATIO": number;
    readonly "PLASTIC": number;
    readonly "EMBREE_TREFETHEN": number;
    readonly "FEIGENBAUM_DELTA": number;
    readonly "FEIGENBAUM_ALFA": number;
    readonly "TWIN_PRIME": number;
    readonly "MEISSEL_MERTEENS": number;
    readonly "BRAUN_TWIN_PRIME": number;
    readonly "BRAUN_PRIME_QUADR": number;
    readonly "BRUIJN_NEWMAN": number;
    readonly "CATALAN": number;
    readonly "LANDAU_RAMANUJAN": number;
    readonly "VISWANATH": number;
    readonly "LEGENDRE": number;
    readonly "RAMANUJAN_SOLDNER": number;
    readonly "ERDOS_BORWEIN": number;
    readonly "BERNSTEIN": number;
    readonly "GAUSS_KUZMIN_WIRSING": number;
    readonly "HAFNER_SARNAK_MCCURLEY": number;
    readonly "GOLOMB_DICKMAN": number;
    readonly "CAHEN": number;
    readonly "LAPLACE_LIMIT": number;
    readonly "ALLADI_GRINSTEAD": number;
    readonly "LENGYEL": number;
    readonly "LEVY": number;
    readonly "APERY": number;
    readonly "MILLS": number;
    readonly "BACKHOUSE": number;
    readonly "PORTER": number;
    readonly "LIEB_QUARE_ICE": number;
    readonly "NIVEN": number;
    readonly "SIERPINSKI": number;
    readonly "KHINCHIN": number;
    readonly "FRANSEN_ROBINSON": number;
    readonly "LANDAU": number;
    readonly "PARABOLIC": number;
    readonly "OMEGA": number;
    readonly "MRB": number;
    readonly "LI2": number;
    readonly "GOMPERTZ": number;
    readonly "SQRT2": number;
    readonly "SQRTPi": number;
    readonly "SQRT2Pi": number;
    readonly "LNPI": number;
    readonly "EXP_MINUS_E": number;
    readonly "EXP_1_OVER_E": number;
    readonly "EXP_MINUS_1": number;
    readonly "LN_SQRT2": number;
    readonly "SQRT2BY2": number;
    readonly "SQRT3": number;
    readonly "SQRT3BY2": number;
    readonly "D2BYSQRT3": number;
    readonly "SQRT3BY3": number;
    readonly "SQRT5": number;
    readonly "NOT_A_NUMBER": number;

    /**
     * Returns constant value, where constant is represented by the token id in the ConstantValue class
     * @param p0 - Please refer to the ConstantValue class.
     * @returns Returns constant value if id is known, otherwise NaN is returned.
     * @see {@link parsertokens_ConstantValueStatics}
     */
    "getConstantValue"(p0: number | Int32Value): number;
}

export interface mathcollection_MathFunctionsStatics {

    /**
     * Bell Numbers
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n >= 0 returns Bell numbers, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.bellNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "bellNumberWithCancel"(n: number | Int32Value, cancelId: number): number;

    /**
     * Bell number
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n is within the int range return bellNumber( (int)Math.round(n) ), otherwise return NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.bellNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "bellNumberWithCancel"(n: number, cancelId: number): number;

    /**
     * Euler numbers
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function param
     * @param k - the k function param
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n >=0 returns Euler number, otherwise return NaN. Returns also NaN when MAX RECURSION CALLS
     *   is exceeded.
     * @see {@link mXparserStatics.getMaxAllowedRecursionDepth}
     * @see {@link mXparserStatics.setMaxAllowedRecursionDepth}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.eulerNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "eulerNumberWithCancel"(n: number | Int32Value, k: number | Int32Value, cancelId: number): number;

    /**
     * Euler numbers
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function param
     * @param k - the k function param
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n, k <> NaN returns eulerNumber( (int)Math.round(n), (int)Math.round(k) ), otherwise return
     *   NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.eulerNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "eulerNumberWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Factorial
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Factorial if n >=0, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.factorial}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "factorialWithCancel"(n: number | Int32Value, cancelId: number): number;

    /**
     * Factorial
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n <> NaN return factorial( (int)Math.round(n) ), otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.factorial}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "factorialWithCancel"(n: number, cancelId: number): number;

    /**
     * Falling factorial polynomial
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Argument
     * @param n - Polynomial degree
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Falling factorial polynomial of degree n at point x
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.factorialFalling}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "factorialFallingWithCancel"(x: number, n: number, cancelId: number): number;

    /**
     * Rising factorial polynomial
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Argument
     * @param n - Polynomial degree
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Rising factorial polynomial of degree n at point x
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.factorialRising}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "factorialRisingWithCancel"(x: number, n: number, cancelId: number): number;

    /**
     * Generalized binomial coefficient
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param k - k the k function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Generalized binomial coefficient, if n = NaN or k < 0 returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.binomCoeff}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "binomCoeffWithCancel"(n: number, k: bigint, cancelId: number): number;

    /**
     * Generalized binomial coefficient
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param k - the k function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n, k <> NaN returns binomCoeff(n, (int)Math.round(k) ), otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.binomCoeff}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "binomCoeffWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Generalized coefficient returning number of k permutations that can be drawn for n elements set.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param k - the k function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns For k greater than 0 return number of permutations, otherwise returns NaN
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.numberOfPermutations}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "numberOfPermutationsWithCancel"(n: number, k: bigint, cancelId: number): number;

    /**
     * Generalized coefficient returning number of k permutations that can be drawn for n elements set.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param k - the k function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns For k greater than 0 return number of permutations, otherwise returns NaN
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.numberOfPermutations}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "numberOfPermutationsWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Bernoulli numbers
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param m - the m function parameter
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n, m >= 0 returns Bernoulli number, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.bernoulliNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "bernoulliNumberWithCancel"(m: number | Int32Value, n: number | Int32Value, cancelId: number): number;

    /**
     * Bernoulli numbers
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param m - the m function parameter
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n, m <> NaN returns bernoulliNumber( (int)Math.round(m), (int)Math.round(n) ), otherwise
     *   returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.bernoulliNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "bernoulliNumberWithCancel"(m: number, n: number, cancelId: number): number;

    /**
     * Stirling numbers of the first kind
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param k - the k function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Stirling numbers of the first kind Returns also NaN when MAX RECURSION CALLS is exceeded.
     * @see {@link mXparserStatics.getMaxAllowedRecursionDepth}
     * @see {@link mXparserStatics.setMaxAllowedRecursionDepth}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.Stirling1Number}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "Stirling1NumberWithCancel"(n: number | Int32Value, k: number | Int32Value, cancelId: number): number;

    /**
     * Stirling numbers of the first kind
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param k - the k function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n, k <> Doube.NaN returns Stirling1Number( (int)Math.round(n), (int)Math.round(k) ),
     *   otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.Stirling1Number}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "Stirling1NumberWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Stirling numbers of the second kind
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param k - the k function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Stirling numbers of the second kind Returns also NaN when MAX RECURSION CALLS is exceeded.
     * @see {@link mXparserStatics.getMaxAllowedRecursionDepth}
     * @see {@link mXparserStatics.setMaxAllowedRecursionDepth}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.Stirling2Number}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "Stirling2NumberWithCancel"(n: number | Int32Value, k: number | Int32Value, cancelId: number): number;

    /**
     * Stirling numbers of the second kind
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param k - the k function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n, k <> Doube.NaN returns Stirling2Number( (int)Math.round(n), (int)Math.round(k) ),
     *   otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.Stirling2Number}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "Stirling2NumberWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Worpitzky numbers
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param k - the k function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n,k >= 0 and k <= n return Worpitzky number, otherwise return NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.worpitzkyNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "worpitzkyNumberWithCancel"(n: number | Int32Value, k: number | Int32Value, cancelId: number): number;

    /**
     * Worpitzky numbers
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param k - the k function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n,k <> NaN returns worpitzkyNumber( (int)Math.round(n), (int)Math.round(k) ), otherwise
     *   return NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.worpitzkyNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "worpitzkyNumberWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Harmonic numer
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n > 0 returns harmonic number, otherwise returns 0 (empty summation operator)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.harmonicNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "ordinaryHarmonicNumberWithCancel"(n: number | Int32Value, cancelId: number): number;

    /**
     * Harmonic number
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n <> NaN returns harmonicNumber( (int)Math.round(n) ), otherwise returns NaN
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.harmonicNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "ordinaryHarmonicNumberWithCancel"(n: number, cancelId: number): number;

    /**
     * Harmonic number 1/1 + 1/2^x + ... + 1/n^x
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - the x function parameter
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if x <> NaN and x >= 0 Harmonic number, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.harmonicNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "generalizedHarmonicNumberWithCancel"(x: number, n: number | Int32Value, cancelId: number): number;

    /**
     * Harmonic number 1/1 + 1/2^x + ... + 1/n^x
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - the x function parameter
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if x,n <> NaN returns harmonicNumber( x, (int)Math.round(n) ), otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.harmonicNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "generalizedHarmonicNumberWithCancel"(x: number, n: number, cancelId: number): number;

    /**
     * Fibonacci numbers
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n >= 0 returns fibonacci numbers, otherwise returns NaN. Returns also NaN when MAX RECURSION
     *   CALLS is exceeded.
     * @see {@link mXparserStatics.getMaxAllowedRecursionDepth}
     * @see {@link mXparserStatics.setMaxAllowedRecursionDepth}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.fibonacciNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "fibonacciNumberWithCancel"(n: number | Int32Value, cancelId: number): number;

    /**
     * Fibonacci numbers
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n <> NaN returns fibonacciNumber( (int)Math.round(n) ), otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.fibonacciNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "fibonacciNumberWithCancel"(n: number, cancelId: number): number;

    /**
     * Lucas numebrs
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n >= 0 returns Lucas numbers, otherwise returns NaN. Returns also NaN when MAX RECURSION
     *   CALLS is exceeded.
     * @see {@link mXparserStatics.getMaxAllowedRecursionDepth}
     * @see {@link mXparserStatics.setMaxAllowedRecursionDepth}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.lucasNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "lucasNumberWithCancel"(n: number | Int32Value, cancelId: number): number;

    /**
     * Lucas numebrs
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - the n function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if n <> NaN returns lucasNumber( (int)Math.round(n) ), otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.lucasNumber}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "lucasNumberWithCancel"(n: number, cancelId: number): number;

    /**
     * Continued fraction
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param sequence - the numbers
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if each number form the sequence <> NaN and there is no division by 0 while computing returns
     *   continued fraction value, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.continuedFraction}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "continuedFractionWithCancel"(sequence: ReadonlyArray<number> | Float64Array | null, cancelId: number): number;

    /**
     * Continued polynomial
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - the x values
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if each number for x is different the NaN returns continued polynomial, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.continuedPolynomial}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "continuedPolynomialWithCancel"(x: ReadonlyArray<number> | Float64Array | null, cancelId: number): number;

    /**
     * Euler polynomial
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param m - the m parameter
     * @param x - the x parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if x <> NaN and m >= 0 returns polynomial value, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.eulerPolynomial}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "eulerPolynomialWithCancel"(m: number | Int32Value, x: number, cancelId: number): number;

    /**
     * Euler polynomial
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param m - the m parameter
     * @param x - the x parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if x,m <> NaN returns eulerPolynomial( (int)Math.round(m), (int)Math.round(x) ), otherwise
     *   returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.eulerPolynomial}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "eulerPolynomialWithCancel"(m: number, x: number, cancelId: number): number;

    /**
     * Tetration, exponential power, power series
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param a - base
     * @param n - exponent
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Tetration result.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.tetration}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "tetrationWithCancel"(a: number, n: number, cancelId: number): number;

    /**
     * Double rounding
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param value - double value to be rounded
     * @param places - decimal places
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Rounded value
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.round}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "roundWithCancel"(value: number, places: number | Int32Value, cancelId: number): number;

    /**
     * Double half up rounding
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param value - double value to be rounded
     * @param places - decimal places
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Rounded value
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.roundHalfUp}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "roundHalfUpWithCancel"(value: number, places: number | Int32Value, cancelId: number): number;

    /**
     * Double down rounding
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param value - double value to be rounded
     * @param places - decimal places
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Rounded value
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.roundDown}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "roundDownWithCancel"(value: number, places: number | Int32Value, cancelId: number): number;

    /**
     * Intelligent rounding of a number within the decimal position of the ULP (Unit in the Last Place),
     * provided that the result is significantly shortened in the standard decimal notation. Examples:
     * 30.499999999999992 is rounded to 30.5, but 30.499999999999122 will not be rounded. Rounding is made to
     * the decimal position of the ULP minus 2 on condition that the resulted number is shortened by at least 9
     * places.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param value - A given number
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns an intelligently rounded number when the decimal position of ULP is a minimum of 11 and
     *   when rounded to the position of ULP - 2, shortens the number by a minimum of 9 places. Otherwise,
     *   returns original number.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.lengthRound}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "lengthRoundWithCancel"(value: number, cancelId: number): number;

    /**
     * Returns the first non-NaN value
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param values - List of values
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the first non-NaN value, if list is null then returns NaN, if list contains no elements
     *   then returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.coalesce}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "coalesceWithCancel"(values: ReadonlyArray<number> | Float64Array | null, cancelId: number): number;

    /**
     * Calculates function f(x0) (given as expression) assigning Argument x = x0;
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param x - the argument
     * @param x0 - the argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns the result of f.calculateWithCancel(cancelId) after setting x to x0
     * @see {@link Expression}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.getFunctionValue}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "getFunctionValueWithCancel"(f: Expression | null, x: Argument | null, x0: number, cancelId: number): number;

    /**
     * Returns array of double values of the function f(i) calculated on the range: i = from to i = to by step
     * = delta
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - Function expression
     * @param index - Index argument
     * @param from - 'from' value
     * @param to - 'to' value
     * @param delta - 'delta' step definition
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Array of function values
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_MathFunctionsStatics.getFunctionValues}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "getFunctionValuesWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): Array<number> | null;

    /**
     * Addition a + b applying canonical rounding if canonical rounding is enabled
     * @param p0 - The a parameter
     * @param p1 - The b parameter
     * @returns The result of addition
     */
    "plus"(p0: number, p1: number): number;

    /**
     * Subtraction a - b applying canonical rounding if canonical rounding is enabled
     * @param p0 - The a parameter
     * @param p1 - The b parameter
     * @returns The result of subtraction
     */
    "minus"(p0: number, p1: number): number;

    /**
     * Multiplication a * b applying canonical rounding if canonical rounding is enabled
     * @param p0 - The a parameter
     * @param p1 - The b parameter
     * @returns The result of multiplication
     */
    "multiply"(p0: number, p1: number): number;

    /**
     * Division a / b applying canonical rounding if canonical rounding is enabled
     * @param p0 - The a parameter
     * @param p1 - The b parameter
     * @returns The result of division
     */
    "div"(p0: number, p1: number): number;

    /**
     * Integer division (also called quotient) a / b applying canonical rounding if canonical rounding is
     * enabled
     * @param p0 - The a parameter
     * @param p1 - The b parameter
     * @returns The result of integer division
     */
    "divQuotient"(p0: number, p1: number): number;

    /**
     * Bell Numbers
     * @param p0 - the n
     * @returns if n >= 0 returns Bell numbers, otherwise returns NaN.
     */
    "bellNumber"(p0: number | Int32Value): number;

    /**
     * Bell number
     * @param p0 - the n
     * @returns if n is within the int range return bellNumber( (int)Math.round(n) ), otherwise return NaN.
     */
    "bellNumber"(p0: number): number;

    /**
     * Euler numbers
     * @param p0 - the n function param
     * @param p1 - the k function param
     * @returns if n >=0 returns Euler number, otherwise return NaN. Returns also NaN when MAX RECURSION CALLS
     *   is exceeded.
     * @see {@link mXparserStatics.getMaxAllowedRecursionDepth}
     * @see {@link mXparserStatics.setMaxAllowedRecursionDepth}
     */
    "eulerNumber"(p0: number | Int32Value, p1: number | Int32Value): number;

    /**
     * Euler numbers
     * @param p0 - the n function param
     * @param p1 - the k function param
     * @returns if n, k <> NaN returns eulerNumber( (int)Math.round(n), (int)Math.round(k) ), otherwise return
     *   NaN.
     */
    "eulerNumber"(p0: number, p1: number): number;

    /**
     * Factorial
     * @param p0 - the n function parameter
     * @returns Factorial if n >=0, otherwise returns NaN.
     */
    "factorial"(p0: number | Int32Value): number;

    /**
     * Factorial
     * @param p0 - the n function parameter
     * @returns if n <> NaN return factorial( (int)Math.round(n) ), otherwise returns NaN.
     */
    "factorial"(p0: number): number;

    /**
     * Falling factorial polynomial
     * @param p0 - Argument
     * @param p1 - Polynomial degree
     * @returns Falling factorial polynomial of degree n at point x
     */
    "factorialFalling"(p0: number, p1: number): number;

    /**
     * Rising factorial polynomial
     * @param p0 - Argument
     * @param p1 - Polynomial degree
     * @returns Rising factorial polynomial of degree n at point x
     */
    "factorialRising"(p0: number, p1: number): number;

    /**
     * Generalized binomial coefficient
     * @param p0 - the n function parameter
     * @param p1 - k the k function parameter
     * @returns Generalized binomial coefficient, if n = NaN or k < 0 returns NaN.
     */
    "binomCoeff"(p0: number, p1: bigint): number;

    /**
     * Generalized binomial coefficient
     * @param p0 - the n function parameter
     * @param p1 - the k function parameter
     * @returns if n, k <> NaN returns binomCoeff(n, (int)Math.round(k) ), otherwise returns NaN.
     */
    "binomCoeff"(p0: number, p1: number): number;

    /**
     * Generalized coefficient returning number of k permutations that can be drawn for n elements set.
     * @param p0 - the n function parameter
     * @param p1 - the k function parameter
     * @returns For k greater than 0 return number of permutations, otherwise returns NaN
     */
    "numberOfPermutations"(p0: number, p1: bigint): number;

    /**
     * Generalized coefficient returning number of k permutations that can be drawn for n elements set.
     * @param p0 - the n function parameter
     * @param p1 - the k function parameter
     * @returns For k greater than 0 return number of permutations, otherwise returns NaN
     */
    "numberOfPermutations"(p0: number, p1: number): number;

    /**
     * Bernoulli numbers
     * @param p0 - the m function parameter
     * @param p1 - the n function parameter
     * @returns if n, m >= 0 returns Bernoulli number, otherwise returns NaN.
     */
    "bernoulliNumber"(p0: number | Int32Value, p1: number | Int32Value): number;

    /**
     * Bernoulli numbers
     * @param p0 - the m function parameter
     * @param p1 - the n function parameter
     * @returns if n, m <> NaN returns bernoulliNumber( (int)Math.round(m), (int)Math.round(n) ), otherwise
     *   returns NaN.
     */
    "bernoulliNumber"(p0: number, p1: number): number;

    /**
     * Stirling numbers of the first kind
     * @param p0 - the n function parameter
     * @param p1 - the k function parameter
     * @returns Stirling numbers of the first kind Returns also NaN when MAX RECURSION CALLS is exceeded.
     * @see {@link mXparserStatics.getMaxAllowedRecursionDepth}
     * @see {@link mXparserStatics.setMaxAllowedRecursionDepth}
     */
    "Stirling1Number"(p0: number | Int32Value, p1: number | Int32Value): number;

    /**
     * Stirling numbers of the first kind
     * @param p0 - the n function parameter
     * @param p1 - the k function parameter
     * @returns if n, k <> Doube.NaN returns Stirling1Number( (int)Math.round(n), (int)Math.round(k) ),
     *   otherwise returns NaN.
     */
    "Stirling1Number"(p0: number, p1: number): number;

    /**
     * Stirling numbers of the second kind
     * @param p0 - the n function parameter
     * @param p1 - the k function parameter
     * @returns Stirling numbers of the second kind Returns also NaN when MAX RECURSION CALLS is exceeded.
     * @see {@link mXparserStatics.getMaxAllowedRecursionDepth}
     * @see {@link mXparserStatics.setMaxAllowedRecursionDepth}
     */
    "Stirling2Number"(p0: number | Int32Value, p1: number | Int32Value): number;

    /**
     * Stirling numbers of the second kind
     * @param p0 - the n function parameter
     * @param p1 - the k function parameter
     * @returns if n, k <> Doube.NaN returns Stirling2Number( (int)Math.round(n), (int)Math.round(k) ),
     *   otherwise returns NaN.
     */
    "Stirling2Number"(p0: number, p1: number): number;

    /**
     * Worpitzky numbers
     * @param p0 - the n function parameter
     * @param p1 - the k function parameter
     * @returns if n,k >= 0 and k <= n return Worpitzky number, otherwise return NaN.
     */
    "worpitzkyNumber"(p0: number | Int32Value, p1: number | Int32Value): number;

    /**
     * Worpitzky numbers
     * @param p0 - the n function parameter
     * @param p1 - the k function parameter
     * @returns if n,k <> NaN returns worpitzkyNumber( (int)Math.round(n), (int)Math.round(k) ), otherwise
     *   return NaN.
     */
    "worpitzkyNumber"(p0: number, p1: number): number;

    /**
     * Harmonic numer
     * @param p0 - the n function parameter
     * @returns if n > 0 returns harmonic number, otherwise returns 0 (empty summation operator)
     */
    "harmonicNumber"(p0: number | Int32Value): number;

    /**
     * Harmonic number
     * @param p0 - the n function parameter
     * @returns if n <> NaN returns harmonicNumber( (int)Math.round(n) ), otherwise returns NaN
     */
    "harmonicNumber"(p0: number): number;

    /**
     * Harmonic number 1/1 + 1/2^x + ... + 1/n^x
     * @param p0 - the x function parameter
     * @param p1 - the n function parameter
     * @returns if x <> NaN and x >= 0 Harmonic number, otherwise returns NaN.
     */
    "harmonicNumber"(p0: number, p1: number | Int32Value): number;

    /**
     * Harmonic number 1/1 + 1/2^x + ... + 1/n^x
     * @param p0 - the x function parameter
     * @param p1 - the n function parameter
     * @returns if x,n <> NaN returns harmonicNumber( x, (int)Math.round(n) ), otherwise returns NaN.
     */
    "harmonicNumber"(p0: number, p1: number): number;

    /**
     * Catalan numbers
     * @param p0 - the n function parameter
     * @returns Catalan numbers
     */
    "catalanNumber"(p0: number | Int32Value): number;

    /**
     * Catalan numbers
     * @param p0 - the n function parameter
     * @returns if n <> NaN returns catalanNumber( (int)Math.round(n) ), otherwise returns NaN.
     */
    "catalanNumber"(p0: number): number;

    /**
     * Fibonacci numbers
     * @param p0 - the n function parameter
     * @returns if n >= 0 returns fibonacci numbers, otherwise returns NaN. Returns also NaN when MAX RECURSION
     *   CALLS is exceeded.
     * @see {@link mXparserStatics.getMaxAllowedRecursionDepth}
     * @see {@link mXparserStatics.setMaxAllowedRecursionDepth}
     */
    "fibonacciNumber"(p0: number | Int32Value): number;

    /**
     * Fibonacci numbers
     * @param p0 - the n function parameter
     * @returns if n <> NaN returns fibonacciNumber( (int)Math.round(n) ), otherwise returns NaN.
     */
    "fibonacciNumber"(p0: number): number;

    /**
     * Lucas numebrs
     * @param p0 - the n function parameter
     * @returns if n >= 0 returns Lucas numbers, otherwise returns NaN. Returns also NaN when MAX RECURSION
     *   CALLS is exceeded.
     * @see {@link mXparserStatics.getMaxAllowedRecursionDepth}
     * @see {@link mXparserStatics.setMaxAllowedRecursionDepth}
     */
    "lucasNumber"(p0: number | Int32Value): number;

    /**
     * Lucas numebrs
     * @param p0 - the n function parameter
     * @returns if n <> NaN returns lucasNumber( (int)Math.round(n) ), otherwise returns NaN.
     */
    "lucasNumber"(p0: number): number;

    /**
     * Kronecker delta
     * @param p0 - the i function parameter
     * @param p1 - the j function parameter
     * @returns if i,j <> NaN returns Kronecker delta, otherwise returns NaN.
     */
    "kroneckerDelta"(p0: number, p1: number): number;

    /**
     * Kronecker delta
     * @param p0 - the i function parameter
     * @param p1 - the j function parameter
     * @returns Kronecker delta
     */
    "kroneckerDelta"(p0: number | Int32Value, p1: number | Int32Value): number;

    /**
     * Continued fraction
     * @param sequence - the numbers
     * @returns if each number form the sequence <> NaN and there is no division by 0 while computing returns
     *   continued fraction value, otherwise returns NaN.
     */
    "continuedFraction"(...sequence: number[]): number;

    /**
     * Continued fraction
     * @param p0 - the numbers
     * @returns if each number form the sequence <> NaN and there is no division by 0 while computing returns
     *   continued fraction value, otherwise returns NaN.
     */
    "continuedFraction"(p0: Array<number> | Float64Array | null): number;

    /**
     * Continued polynomial
     * @param sequence - the x values
     * @returns if each number for x is different the NaN returns continued polynomial, otherwise returns NaN.
     */
    "continuedPolynomial"(...sequence: number[]): number;

    /**
     * Continued polynomial
     * @param p0 - the x values
     * @returns if each number for x is different the NaN returns continued polynomial, otherwise returns NaN.
     */
    "continuedPolynomial"(p0: Array<number> | Float64Array | null): number;

    /**
     * Euler polynomial
     * @param p0 - the m parameter
     * @param p1 - the x parameter
     * @returns if x <> NaN and m >= 0 returns polynomial value, otherwise returns NaN.
     */
    "eulerPolynomial"(p0: number | Int32Value, p1: number): number;

    /**
     * Euler polynomial
     * @param p0 - the m parameter
     * @param p1 - the x parameter
     * @returns if x,m <> NaN returns eulerPolynomial( (int)Math.round(m), (int)Math.round(x) ), otherwise
     *   returns NaN.
     */
    "eulerPolynomial"(p0: number, p1: number): number;

    /**
     * Characteristic function x in (a,b)
     * @param p0 - the x value
     * @param p1 - the left (lower) limit
     * @param p2 - the right (upper) limit
     * @returns if x, a, b <> NaN returns characteristic function value on the (a,b) range.
     */
    "chi"(p0: number, p1: number, p2: number): number;

    /**
     * Characteristic function x in [a,b]
     * @param p0 - the x value
     * @param p1 - the left (lower) limit
     * @param p2 - the right (upper) limit
     * @returns if x, a, b <> NaN returns characteristic function value on the [a,b] range.
     */
    "chi_LR"(p0: number, p1: number, p2: number): number;

    /**
     * Characteristic function x in [a,b)
     * @param p0 - the x value
     * @param p1 - the left (lower) limit
     * @param p2 - the right (upper) limit
     * @returns if x, a, b <> NaN returns characteristic function value on the [a,b) range.
     */
    "chi_L"(p0: number, p1: number, p2: number): number;

    /**
     * Characteristic function x in (a,b]
     * @param p0 - the x value
     * @param p1 - the left (lower) limit
     * @param p2 - the right (upper) limit
     * @returns if x, a, b <> NaN returns characteristic function value on the (a,b] range.
     */
    "chi_R"(p0: number, p1: number, p2: number): number;

    /**
     * Verifies whether provided number is almost integer
     * @param p0 - The number to be verified
     * @returns True if the number is almost integer according to the default epsilon, otherwise returns false.
     * @see {@link mathcollection_BinaryRelationsStatics.DEFAULT_COMPARISON_EPSILON}
     */
    "isAlmostInt"(p0: number): boolean;

    /**
     * Power function a^b
     * @param p0 - the a function parameter
     * @param p1 - the b function parameter
     * @returns if a,b <> NaN returns Math.pow(a, b), otherwise returns NaN.
     */
    "power"(p0: number, p1: number): number;

    /**
     * Nth order root of a number
     * @param p0 - Root order
     * @param p1 - Number
     * @returns Returns root of a number. If calculation is not possible NaN is returned.
     */
    "root"(p0: number, p1: number): number;

    /**
     * Tetration, exponential power, power series
     * @param p0 - base
     * @param p1 - exponent
     * @returns Tetration result.
     */
    "tetration"(p0: number, p1: number): number;

    /**
     * Modulo operator a % b
     * @param p0 - the a function parameter
     * @param p1 - the b function parameter
     * @returns if a,b <> NaN returns a % b.
     */
    "mod"(p0: number, p1: number): number;

    /**
     * Sine trigonometric function
     * @param p0 - the a function parameter
     * @returns if a <> NaN return Math.sin(a), otherwise return NaN.
     */
    "sin"(p0: number): number;

    /**
     * Cosine trigonometric function
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.cos(a), otherwise returns NaN.
     */
    "cos"(p0: number): number;

    /**
     * Tangent trigonometric function
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.tan(a), otherwise returns NaN.
     */
    "tan"(p0: number): number;

    /**
     * Cotangent trigonometric function
     * @param p0 - the a function parameter
     * @returns if a <> NaN and tan(a) <> 0 returns 1 / Math.tan(a), otherwise returns NaN.
     */
    "ctan"(p0: number): number;

    /**
     * Secant trigonometric function
     * @param p0 - the a function parameter
     * @returns if a <> NaN and cos(a) <> 0 returns 1 / Math.cos(a), otherwise returns NaN.
     */
    "sec"(p0: number): number;

    /**
     * Cosecant trigonometric function
     * @param p0 - the a function parameter
     * @returns if a <> NaN and sin(a) <> 0 returns 1 / Math.sin(a), otherwise returns NaN.
     */
    "cosec"(p0: number): number;

    /**
     * Arcus sine - inverse trigonometric sine function
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.asin(a), otherwise returns NaN.
     */
    "asin"(p0: number): number;

    /**
     * Arcus cosine - inverse trigonometric cosine function
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.acos(a), otherwise returns NaN.
     */
    "acos"(p0: number): number;

    /**
     * Arcus tangent - inverse trigonometric tangent function
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.atan(a), otherwise returns NaN.
     */
    "atan"(p0: number): number;

    /**
     * Arcus cotangent - inverse trigonometric cotangent function
     * @param p0 - the a function parameter
     * @returns if a <> NaN and a <> 0 returns Math.atan(1/a), otherwise returns NaN.
     */
    "actan"(p0: number): number;

    /**
     * Arcus secant - inverse trigonometric secant function
     * @param p0 - the a function parameter
     * @returns Inverse trigonometric secant function
     */
    "asec"(p0: number): number;

    /**
     * Arcus cosecant - inverse trigonometric cosecant function
     * @param p0 - the a function parameter
     * @returns Inverse trigonometric cosecant function
     */
    "acosec"(p0: number): number;

    /**
     * Natural logarithm
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.log(1/a), otherwise returns NaN.
     */
    "ln"(p0: number): number;

    /**
     * Binary logarithm
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.log(a)/Math.log(2.0), otherwise returns NaN.
     */
    "log2"(p0: number): number;

    /**
     * Common logarithm
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.log10(a), otherwise returns NaN.
     */
    "log10"(p0: number): number;

    /**
     * Degrees to radius translation.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.toRadians(a), otherwise returns NaN.
     */
    "rad"(p0: number): number;

    /**
     * Exponential function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.exp(a), otherwise returns NaN.
     */
    "exp"(p0: number): number;

    /**
     * Square root.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.sqrt(a), otherwise returns NaN.
     */
    "sqrt"(p0: number): number;

    /**
     * Hyperbolic sine function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.sinh(a), otherwise returns NaN.
     */
    "sinh"(p0: number): number;

    /**
     * Hyperbolic cosine function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.cosh(a), otherwise returns NaN.
     */
    "cosh"(p0: number): number;

    /**
     * Hyperbolic tangent function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.tanh(a), otherwise returns NaN.
     */
    "tanh"(p0: number): number;

    /**
     * Hyperbolic cotangent function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN and tanh(a) <> 0 returns 1 / Math.tanh(a), otherwise returns NaN.
     */
    "coth"(p0: number): number;

    /**
     * Hyperbolic secant function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN and cosh(a) <> 0 returns 1 / Math.cosh(a), otherwise returns NaN.
     */
    "sech"(p0: number): number;

    /**
     * Hyperbolic cosecant function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN and sinh(a) <> 0 returns 1 / Math.sinh(a), otherwise returns NaN.
     */
    "csch"(p0: number): number;

    /**
     * Radius to degrees translation.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.toDegrees(a), otherwise returns NaN.
     */
    "deg"(p0: number): number;

    /**
     * Absolute value.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.abs(a), otherwise returns NaN.
     */
    "abs"(p0: number): number;

    /**
     * Signum function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.signum(a), otherwise returns NaN.
     */
    "sgn"(p0: number): number;

    /**
     * Floor function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.floor(a), otherwise returns NaN.
     */
    "floor"(p0: number): number;

    /**
     * Ceiling function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.ceil(a), otherwise returns NaN.
     */
    "ceil"(p0: number): number;

    /**
     * Arcus hyperbolic sine - inverse hyperbolic sine function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.log(a + Math.sqrt(a*a+1)), otherwise returns NaN.
     */
    "arsinh"(p0: number): number;

    /**
     * Arcus hyperbolic cosine - inverse hyperbolic cosine function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN returns Math.log(a + Math.sqrt(a*a-1)), otherwise returns NaN.
     */
    "arcosh"(p0: number): number;

    /**
     * Arcus hyperbolic tangent - inverse hyperbolic tangent function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN and 1-a <> 0 returns 0.5*Math.log( (1+a)/(1-a) ), otherwise returns NaN.
     */
    "artanh"(p0: number): number;

    /**
     * Arcus hyperbolic tangent - inverse hyperbolic tangent function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN and a-1 <> 0 returns 0.5*Math.log( (a+1)/(a-1) );, otherwise returns NaN.
     */
    "arcoth"(p0: number): number;

    /**
     * Arcus hyperbolic secant - inverse hyperbolic secant function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN and a <> 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);, otherwise returns NaN.
     */
    "arsech"(p0: number): number;

    /**
     * Arcus hyperbolic cosecant - inverse hyperbolic cosecant function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN and a <> 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);, otherwise returns NaN.
     */
    "arcsch"(p0: number): number;

    /**
     * Normalized sinc function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN and a <> 0 returns Math.sin(PI*a) / (PI*a);, otherwise returns NaN.
     */
    "sa"(p0: number): number;

    /**
     * Sinc function.
     * @param p0 - the a function parameter
     * @returns if a <> NaN and a <> 0 returns Math.sin(a) / (a), otherwise returns NaN.
     */
    "sinc"(p0: number): number;

    /**
     * General logarithm.
     * @param p0 - the a function parameter (base)
     * @param p1 - the b function parameter (number)
     * @returns if a,b <> NaN and log(b) <> 0 returns Math.log(a) / Math.log(b), otherwise returns NaN.
     */
    "log"(p0: number, p1: number): number;

    /**
     * Double rounding
     * @param p0 - double value to be rounded
     * @param p1 - decimal places
     * @returns Rounded value
     */
    "round"(p0: number, p1: number | Int32Value): number;

    /**
     * Double half up rounding
     * @param p0 - double value to be rounded
     * @param p1 - decimal places
     * @returns Rounded value
     */
    "roundHalfUp"(p0: number, p1: number | Int32Value): number;

    /**
     * Double down rounding
     * @param p0 - double value to be rounded
     * @param p1 - decimal places
     * @returns Rounded value
     */
    "roundDown"(p0: number, p1: number | Int32Value): number;

    /**
     * Unit in the last place rounding, see 0.1 + 0.1 + 0.1 vs roundUlp(0.1 + 0.1 + 0.1)
     * @param p0 - Double number that is to be rounded
     * @returns Double number with rounded ulp
     * @see {@link mathcollection_MathFunctionsStatics.decimalDigitsBefore}
     * @see {@link mathcollection_MathFunctionsStatics.ulp}
     */
    "roundUlp"(p0: number): number;

    /**
     * Returns integer part of a double value.
     * @param p0 - Number
     * @returns For non-negative x returns Math.floor(x), otherwise returns -Math.floor(-x)
     */
    "integerPart"(p0: number): number;

    /**
     * For very small number returns the position of first significant digit, ie 0.1 = 1, 0.01 = 2
     * @param p0 - Double value, small one.
     * @returns Number of digits, number of places.
     */
    "decimalDigitsBefore"(p0: number): number;

    /**
     * Unit in the last place(ULP) for double
     * @param p0 - Double number
     * @returns ULP for a given double.
     */
    "ulp"(p0: number): number;

    /**
     * Unit in The Last Place - number of decimal digits before
     * @param p0 - Double number
     * @returns Positive number of digits N for ulp = 1e-{N+1}, if ulp is > 1 then -1 is returned. Returned
     *   proper value is always between -1 and +322. If value is NaN then -2 is returned.
     */
    "ulpDecimalDigitsBefore"(p0: number): number;

    /**
     * Length of a number represented in a standard decimal format
     * @param p0 - A given number
     * @returns Length of a number represented in a standard decimal format including decimal separator,
     *   excluding leading zeros (integer part), excluding trailing zeros (fractional part)
     */
    "decimalNumberLength"(p0: number): number;

    /**
     * Fractional part length of a number represented in a standard decimal format
     * @param p0 - A given number
     * @returns Fractional part length of a number represented in a standard decimal format excluding decimal
     *   separator, excluding trailing zeros (fractional part)
     */
    "fractionalPartLength"(p0: number): number;

    /**
     * Intelligent rounding of a number within the decimal position of the ULP (Unit in the Last Place),
     * provided that the result is significantly shortened in the standard decimal notation. Examples:
     * 30.499999999999992 is rounded to 30.5, but 30.499999999999122 will not be rounded. Rounding is made to
     * the decimal position of the ULP minus 2 on condition that the resulted number is shortened by at least 9
     * places.
     * @param p0 - A given number
     * @returns Returns an intelligently rounded number when the decimal position of ULP is a minimum of 11 and
     *   when rounded to the position of ULP - 2, shortens the number by a minimum of 9 places. Otherwise,
     *   returns original number.
     */
    "lengthRound"(p0: number): number;

    /**
     * Returns the first non-NaN value
     * @param p0 - List of values
     * @returns Returns the first non-NaN value, if list is null then returns NaN, if list contains no elements
     *   then returns NaN.
     */
    "coalesce"(p0: Array<number> | Float64Array | null): number;

    /**
     * Check whether double value is almost integer.
     * @param p0 - Number
     * @returns True if double value is almost integer, otherwise false. {@link mathcollection_BinaryRelationsStatics.DEFAULT_COMPARISON_EPSILON}
     * @see {@link mathcollection_BinaryRelationsStatics.DEFAULT_COMPARISON_EPSILON}
     */
    "isInteger"(p0: number): boolean;

    /**
     * Check whether two double values are almost equal.
     * @param p0 - First number
     * @param p1 - Second number
     * @returns True if double values are almost equal, otherwise false. {@link mathcollection_BinaryRelationsStatics.DEFAULT_COMPARISON_EPSILON}
     * @see {@link mathcollection_BinaryRelationsStatics.DEFAULT_COMPARISON_EPSILON}
     */
    "almostEqual"(p0: number, p1: number): boolean;

    /**
     * Calculates function f(x0) (given as expression) assigning Argument x = x0;
     * @param p0 - the expression
     * @param p1 - the argument
     * @param p2 - the argument value
     * @returns f.calculate()
     * @see {@link Expression}
     */
    "getFunctionValue"(p0: Expression, p1: Argument, p2: number): number;

    /**
     * Returns array of double values of the function f(i) calculated on the range: i = from to i = to by step
     * = delta
     * @param p0 - Function expression
     * @param p1 - Index argument
     * @param p2 - 'from' value
     * @param p3 - 'to' value
     * @param p4 - 'delta' step definition
     * @returns Array of function values
     */
    "getFunctionValues"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number): Array<number> | null;
}

export interface mathcollection_NumberTheoryStatics {

    /**
     * Minimum function.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the a function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if each number form numbers <> NaN returns the smallest number, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.min}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "minWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Arg-Min function.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the a function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the index of the first smallest number, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.argmin}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "argminWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Maximum function.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the a function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if each number form numbers <> NaN returns the highest number, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.max}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "maxWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Arg-Max function.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the a function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the index of the first biggest number, otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.argmax}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "argmaxWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Array sort - ascending - quick sort algorithm.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns the partially
     * initialized ordering array.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param array - Array to be sorted
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Sorts array and additionally returns initial ordering swapped according to sort order.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.sortAsc}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "sortAscWithCancel"(array: Array<number> | Float64Array | null, cancelId: number): Array<number> | null;

    /**
     * Returns list of distinct values found in a given array.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it breaks the current loop and
     * continues the existing method flow.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param array - The array
     * @param returnOrderByDescFreqAndAscOrigPos - Indicator whether to apply final ordering based on
     *   descending value frequency and ascending initial position.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns List of values in the form of: first index - value index, second index: 0 - value, 1 - value
     *   count, 2 - minimal value position in original array
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.getDistValues}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "getDistValuesWithCancel"(array: Array<number> | Float64Array | null, returnOrderByDescFreqAndAscOrigPos: boolean, cancelId: number): Array<Array<number>> | null;

    /**
     * Returns number of unique values found the list of numbers
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - The list of numbers
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Number of unique values. If list is null or any NaN is found then NaN is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.numberOfDistValues}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "numberOfDistValuesWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Greatest common divisor (GCD)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns 0n (the canonical integral cancellation sentinel).
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param a - the a function parameter
     * @param b - the b function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns GCD(a,b)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.gcd}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "gcdWithCancel"(a: bigint, b: bigint, cancelId: number): bigint;

    /**
     * Greatest common divisor (GCD)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param a - the a function parameter
     * @param b - the b function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if a, b <> NaN returns gcd( (int)Math.round(a),(int)Math.round(b) ), otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.gcd}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "gcdWithCancel"(a: number, b: number, cancelId: number): number;

    /**
     * Greatest common divisor (GCD)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns 0n (the canonical integral
     * cancellation sentinel).
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the numbers
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns GCD(a_1,...,a_n) a_1,...,a_n in numbers
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.gcd}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "gcdWithCancel"(numbers: Array<bigint> | BigInt64Array, cancelId: number): bigint;

    /**
     * Greatest common divisor (GCD)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the numbers
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if each number form numbers <> NaN returns GCD(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.gcd}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "gcdWithCancel"(numbers: Array<number> | Float64Array, cancelId: number): number;

    /**
     * Latest common multiply (LCM)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param a - the a function parameter
     * @param b - the b function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns LCM(a,b)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @throws {Error} Named `ArithmeticException`: if a cancelled gcd supplies a zero divisor
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.lcm}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "lcmWithCancel"(a: bigint, b: bigint, cancelId: number): bigint;

    /**
     * Latest common multiply (LCM)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param a - the a function parameter
     * @param b - the b function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if a, b <> NaN returns lcm( (int)Math.round(a), (int)Math.round(b) ), otherwise returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.lcm}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "lcmWithCancel"(a: number, b: number, cancelId: number): number;

    /**
     * Latest common multiply (LCM)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns 0n (the canonical integral
     * cancellation sentinel).
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the numbers
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns LCM(a_1,...,a_n) a_1,...,a_n in numbers
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @throws {Error} Named `ArithmeticException`: if a cancelled gcd supplies a zero divisor
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.lcm}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "lcmWithCancel"(numbers: Array<bigint> | BigInt64Array, cancelId: number): bigint;

    /**
     * Latest common multiply (LCM)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the numbers
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if each number form numbers <> NaN returns LCM(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.lcm}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "lcmWithCancel"(numbers: Array<number> | Float64Array, cancelId: number): number;

    /**
     * Adding numbers.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the numbers
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if each number from numbers <> NaN returns sum(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.sum}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "sumWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Numbers multiplication.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the numbers
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if each number from numbers <> NaN returns prod(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.prod}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "prodWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Prime test
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns false.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - The number to be tested.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns true if number is prime, otherwise false
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.primeTest}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "primeTestWithCancel"(n: bigint, cancelId: number): boolean;

    /**
     * Prime test
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - The number to be tested.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns true if number is prime, otherwise false
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.primeTest}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "primeTestWithCancel"(n: number, cancelId: number): number;

    /**
     * Prime counting function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns 0n (the canonical integral cancellation sentinel).
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - number
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Number of primes below or equal x
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.primeCount}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "primeCountWithCancel"(n: bigint, cancelId: number): bigint;

    /**
     * Prime counting function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param n - number
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Number of primes below or equal x
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.primeCount}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "primeCountWithCancel"(n: number, cancelId: number): number;

    /**
     * Summation operator (SIGMA FROM i = a, to b, f(i) by delta
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param index - the name of index argument
     * @param from - FROM index = form
     * @param to - TO index = to
     * @param delta - BY delta
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns summation operation (for empty summation operations returns 0).
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.sigmaSummation}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "sigmaSummationWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Product operator
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param index - the name of index argument
     * @param from - FROM index = form
     * @param to - TO index = to
     * @param delta - BY delta
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns product operation (for empty product operations returns 1).
     * @see {@link Expression}
     * @see {@link Argument}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.piProduct}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "piProductWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Minimum value - iterative operator.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param index - the name of index argument
     * @param from - FROM index = form
     * @param to - TO index = to
     * @param delta - BY delta
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns the minimum sampled value, positive infinity if no comparable sample is retained, or the
     *   existing NaN error/cancellation result
     * @see {@link Expression}
     * @see {@link Argument}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.min}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "minWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Maximum value - iterative operator.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param index - the name of index argument
     * @param from - FROM index = form
     * @param to - TO index = to
     * @param delta - BY delta
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns the maximum sampled value, negative infinity if no comparable sample is retained, or the
     *   existing NaN error/cancellation result
     * @see {@link Expression}
     * @see {@link Argument}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.max}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "maxWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Other base (base between 1 and 36) number literal conversion to decimal number.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numberLiteral - Number literal in given numeral system with base between 1 and 36. Digits: 0:0,
     *   1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H, 18:I,
     *   19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
     * @param numeralSystemBase - Numeral system base, between 1 and 36
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Decimal number after conversion. If conversion was not possible the NaN is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.convOthBase2Decimal}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "convOthBase2DecimalWithCancel"(numberLiteral: string | null, numeralSystemBase: number | Int32Value, cancelId: number): number;

    /**
     * Other base to decimal conversion.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numeralSystemBase - Numeral system base has to be above 0.
     * @param digits - List of digits
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.convOthBase2Decimal}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "convOthBase2DecimalWithCancel"(numeralSystemBase: number | Int32Value, digits: ReadonlyArray<number> | Int32Array, cancelId: number): number;

    /**
     * Other base to decimal conversion.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numeralSystemBase - Numeral system base has to be above 0.
     * @param digits - List of digits
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.convOthBase2Decimal}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "convOthBase2DecimalWithCancel"(numeralSystemBase: number, digits: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Other base to decimal conversion.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param baseAndDigits - Numeral system base and digits specification. Numeral system base is placed at
     *   index 0, rest of array is interpreted as digits. Numeral system base has to be above 0.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.convOthBase2Decimal}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "convOthBase2DecimalWithCancel"(baseAndDigits: ReadonlyArray<number> | Int32Array | null, cancelId: number): number;

    /**
     * Other base to decimal conversion.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param baseAndDigits - Numeral system base and digits specification. Numeral system base is placed at
     *   index 0, rest of array is interpreted as digits. Numeral system base has to be above 0.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.convOthBase2Decimal}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "convOthBase2DecimalWithCancel"(baseAndDigits: ReadonlyArray<number> | Float64Array | null, cancelId: number): number;

    /**
     * Decimal number to other numeral system conversion with base between 1 and 36.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns the string "NaN".
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param decimalNumber - Decimal number
     * @param numeralSystemBase - Numeral system base between 1 and 36
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Number literal representing decimal number in given numeral system. Digits 0:0, 1:1, 2:2, 3:3,
     *   4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L,
     *   22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z. If conversion was
     *   not possible the "NaN" string is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.convDecimal2OthBase}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "formatNumberInBaseWithCancel"(decimalNumber: number, numeralSystemBase: number | Int32Value, cancelId: number): string | null;

    /**
     * Number of digits needed to represent given number in numeral system with given base.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns 0n (the canonical integral cancellation sentinel).
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param number - The number
     * @param numeralSystemBase - Numeral system base above 0
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns number of digits. In case when numeralSystemBase is lower than 1 then -1 is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.numberOfDigits}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "numberOfDigitsWithCancel"(number: bigint, numeralSystemBase: bigint, cancelId: number): bigint;

    /**
     * Number of digits needed to represent given number (its integer part) in numeral system with given base.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param number - The number
     * @param numeralSystemBase - Numeral system base above 0
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns number of digits. In case when numeralSystemBase is lower than 1 then NaN is returned.
     *   If number or numeralSystemBase is NaN then NaN is returned. If numeralSystemBase is infinite then NaN
     *   is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.numberOfDigits}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "numberOfDigitsWithCancel"(number: number, numeralSystemBase: number, cancelId: number): number;

    /**
     * Digit at position - numeral system with given base
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns 0 (the canonical integral cancellation sentinel).
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param number - The number
     * @param position - Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
     * @param numeralSystemBase - Base of numeral system - above 0
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Return digit at given position. If digit finding was not possible then -1 is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.digitAtPosition}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "digitAtPositionWithCancel"(number: bigint, position: number | Int32Value, numeralSystemBase: number | Int32Value, cancelId: number): number;

    /**
     * Digit at position - numeral system with given base
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param number - The number
     * @param position - Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
     * @param numeralSystemBase - Base of numeral system - above 0
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Return digit at given position. If digit finding was not possible then NaN is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.digitAtPosition}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "digitAtPositionWithCancel"(number: number, position: number, numeralSystemBase: number, cancelId: number): number;

    /**
     * Digit at position - numeral system with base 10
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param number - The number
     * @param position - Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Return digit at given position. If digit finding was not possible then NaN is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.digitAtPosition}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "decimalDigitAtPositionWithCancel"(number: number, position: number, cancelId: number): number;

    /**
     * Prime decomposition (prime factorization)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns an empty long array.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param number - Number to be decomposed
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns List of prime factors (non-distinct)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.primeFactors}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "primeFactorsWithCancel"(number: bigint, cancelId: number): Array<bigint> | null;

    /**
     * Prime decomposition (prime factorization)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns an empty double array.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param number - Number to be decomposed
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns List of prime factors (non-distinct)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.primeFactors}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "primeFactorsWithCancel"(number: number, cancelId: number): Array<number> | null;

    /**
     * Prime decomposition (prime factorization) - returns number of distinct prime factors
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param number - Number to be decomposed
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Number of distinct prime factors
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.numberOfPrimeFactors}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "numberOfPrimeFactorsWithCancel"(number: number, cancelId: number): number;

    /**
     * Prime decomposition (prime factorization) - returns prime factor value
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param number - Number to be decomposed
     * @param id - Factor id
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Factor value if factor id between 1 and numberOfPrimeFactors, otherwise 1 is returned. For NaN
     *   of infinite parameters Double NaN is returned. For number eq 0 NaN is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.primeFactorValue}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "primeFactorValueWithCancel"(number: number, id: number, cancelId: number): number;

    /**
     * Prime decomposition (prime factorization) - returns prime factor exponent
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param number - Number to be decomposed
     * @param id - Factor id
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Factor exponent if factor id between 1 and numberOfPrimeFactors, otherwise 0 is returned. For
     *   NaN of infinite parameters Double NaN is returned. For number eq 0 NaN is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.primeFactorExponent}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "primeFactorExponentWithCancel"(number: number, id: number, cancelId: number): number;

    /**
     * Converts double value to its fraction representation.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it breaks the current loop and
     * continues the existing method flow.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param value - Value to be converted
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Array representing fraction. Sign at index 0, numerator at index 1, denominator at index 2. If
     *   conversion is not possible then NaN is assigned to all the fields.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_NumberTheoryStatics.toFraction}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "toFractionWithCancel"(value: number, cancelId: number): Array<number> | null;

    readonly "DEFAULT_TO_FRACTION_INIT_SEARCH_SIZE": bigint;

    /**
     * Sets initial search size for the toFraction method
     * @param p0 - initial search size, has to be non-zero positive.
     * @see {@link mathcollection_NumberTheoryStatics.toFraction}
     */
    "setToFractionInitSearchSize"(p0: bigint): void;

    /**
     * Gets initial search size used by the toFraction method
     * @returns initial search size used by the toFraction method
     * @see {@link mathcollection_NumberTheoryStatics.toFraction}
     */
    "getToFractionInitSearchSize"(): bigint;

    /**
     * Minimum function.
     * @param p0 - the a function parameter
     * @param p1 - the b function parameter
     * @returns if a,b <> NaN returns Math.min(a, b), otherwise returns NaN.
     */
    "min"(p0: number, p1: number): number;

    /**
     * Minimum function.
     * @param p0 - the a function parameter
     * @returns if each number form numbers <> NaN returns the smallest number, otherwise returns NaN.
     */
    "min"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Minimum value - iterative operator.
     * @param p0 - the expression
     * @param p1 - the name of index argument
     * @param p2 - FROM index = form
     * @param p3 - TO index = to
     * @param p4 - BY delta
     * @returns product operation (for empty product operations returns 1).
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "min"(p0: Expression, p1: Argument, p2: number, p3: number, p4: number): number;

    /**
     * Arg-Min function.
     * @param p0 - the a function parameter
     * @returns Returns the index of the first smallest number, otherwise returns NaN.
     */
    "argmin"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Maximum function.
     * @param p0 - the a function parameter
     * @param p1 - the b function parameter
     * @returns if a,b <> NaN returns Math.max(a, b), otherwise returns NaN.
     */
    "max"(p0: number, p1: number): number;

    /**
     * Maximum function.
     * @param p0 - the a function parameter
     * @returns if each number form numbers <> NaN returns the highest number, otherwise returns NaN.
     */
    "max"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Maximum value - iterative operator.
     * @param p0 - the expression
     * @param p1 - the name of index argument
     * @param p2 - FROM index = form
     * @param p3 - TO index = to
     * @param p4 - BY delta
     * @returns product operation (for empty product operations returns 1).
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "max"(p0: Expression, p1: Argument, p2: number, p3: number, p4: number): number;

    /**
     * Arg-Max function.
     * @param p0 - the a function parameter
     * @returns Returns the index of the first biggest number, otherwise returns NaN.
     */
    "argmax"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Array sort - ascending - quick sort algorithm.
     * @param p0 - Array to be sorted
     * @returns Sorts array and additionally returns initial ordering swapped according to sort order.
     */
    "sortAsc"(p0: Array<number> | Float64Array | null): Array<number> | null;

    /**
     * Returns list of distinct values found in a given array.
     * @param p0 - The array
     * @param p1 - Indicator whether to apply final ordering based on descending value frequency and ascending
     *   initial position.
     * @returns List of values in the form of: first index - value index, second index: 0 - value, 1 - value
     *   count, 2 - minimal value position in original array
     */
    "getDistValues"(p0: Array<number> | Float64Array | null, p1: boolean): Array<Array<number>> | null;

    /**
     * Returns number of unique values found the list of numbers
     * @param p0 - The list of numbers
     * @returns Number of unique values. If list is null or any NaN is found then NaN is returned.
     */
    "numberOfDistValues"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Computes the greatest common divisor of an empty parameter collection.
     * @returns NaN, matching the native empty double collection.
     */
    "gcd"(): number;

    /**
     * Greatest common divisor (GCD)
     * @param a - the a function parameter
     * @param b - the b function parameter
     * @returns GCD(a,b)
     */
    "gcd"(a: bigint, b: bigint): bigint;

    /**
     * Greatest common divisor (GCD)
     * @param first - the a function parameter
     * @param rest - the b function parameter
     * @returns GCD(a,b)
     */
    "gcd"(first: bigint, ...rest: bigint[]): bigint;

    /**
     * Greatest common divisor (GCD)
     * @param a - the a function parameter
     * @param b - the b function parameter
     * @returns if a, b <> NaN returns gcd( (int)Math.round(a),(int)Math.round(b) ), otherwise returns NaN.
     */
    "gcd"(a: number, b: number): number;

    /**
     * Greatest common divisor (GCD)
     * @param numbers - the numbers
     * @returns if each number form numbers <> NaN returns GCD(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     */
    "gcd"(numbers: readonly []): number;

    /**
     * Greatest common divisor (GCD)
     * @param numbers - the numbers
     * @returns GCD(a_1,...,a_n) a_1,...,a_n in numbers
     */
    "gcd"(numbers: readonly [bigint, ...bigint[]]): bigint;

    /**
     * Greatest common divisor (GCD)
     * @param numbers - the numbers
     * @returns GCD(a_1,...,a_n) a_1,...,a_n in numbers
     */
    "gcd"(numbers: readonly bigint[]): number | bigint;

    /**
     * Greatest common divisor (GCD)
     * @param numbers - the numbers
     * @returns if each number form numbers <> NaN returns GCD(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     */
    "gcd"(...numbers: number[]): number;

    /**
     * Greatest common divisor (GCD)
     * @param numbers - the numbers
     * @returns if each number form numbers <> NaN returns GCD(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     */
    "gcd"(numbers: readonly number[] | NativeList<number, "double"> | Float64Array): number;

    /**
     * Computes the least common multiple of an empty parameter collection.
     * @returns NaN, matching the native empty double collection.
     */
    "lcm"(): number;

    /**
     * Latest common multiply (LCM)
     * @param a - the a function parameter
     * @param b - the b function parameter
     * @returns LCM(a,b)
     */
    "lcm"(a: bigint, b: bigint): bigint;

    /**
     * Latest common multiply (LCM)
     * @param first - the a function parameter
     * @param rest - the b function parameter
     * @returns LCM(a,b)
     */
    "lcm"(first: bigint, ...rest: bigint[]): bigint;

    /**
     * Latest common multiply (LCM)
     * @param a - the a function parameter
     * @param b - the b function parameter
     * @returns if a, b <> NaN returns lcm( (int)Math.round(a), (int)Math.round(b) ), otherwise returns NaN.
     */
    "lcm"(a: number, b: number): number;

    /**
     * Latest common multiply (LCM)
     * @param numbers - the numbers
     * @returns if each number form numbers <> NaN returns LCM(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     */
    "lcm"(numbers: readonly []): number;

    /**
     * Latest common multiply (LCM)
     * @param numbers - the numbers
     * @returns LCM(a_1,...,a_n) a_1,...,a_n in numbers
     */
    "lcm"(numbers: readonly [bigint, ...bigint[]]): bigint;

    /**
     * Latest common multiply (LCM)
     * @param numbers - the numbers
     * @returns LCM(a_1,...,a_n) a_1,...,a_n in numbers
     */
    "lcm"(numbers: readonly bigint[]): number | bigint;

    /**
     * Latest common multiply (LCM)
     * @param numbers - the numbers
     * @returns if each number form numbers <> NaN returns LCM(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     */
    "lcm"(...numbers: number[]): number;

    /**
     * Latest common multiply (LCM)
     * @param numbers - the numbers
     * @returns if each number form numbers <> NaN returns LCM(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     */
    "lcm"(numbers: readonly number[] | NativeList<number, "double"> | Float64Array): number;

    /**
     * Adding numbers.
     * @param p0 - the numbers
     * @returns if each number from numbers <> NaN returns sum(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     */
    "sum"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Numbers multiplication.
     * @param p0 - the numbers
     * @returns if each number from numbers <> NaN returns prod(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     */
    "prod"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Prime test
     * @param p0 - The number to be tested.
     * @returns true if number is prime, otherwise false
     */
    "primeTest"(p0: bigint): boolean;

    /**
     * Prime test
     * @param p0 - The number to be tested.
     * @returns true if number is prime, otherwise false
     */
    "primeTest"(p0: number): number;

    /**
     * Prime counting function
     * @param p0 - number
     * @returns Number of primes below or equal x
     */
    "primeCount"(p0: bigint): bigint;

    /**
     * Prime counting function
     * @param p0 - number
     * @returns Number of primes below or equal x
     */
    "primeCount"(p0: number): number;

    /**
     * Summation operator (SIGMA FROM i = a, to b, f(i) by delta
     * @param p0 - the expression
     * @param p1 - the name of index argument
     * @param p2 - FROM index = form
     * @param p3 - TO index = to
     * @param p4 - BY delta
     * @returns summation operation (for empty summation operations returns 0).
     */
    "sigmaSummation"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number): number;

    /**
     * Product operator
     * @param p0 - the expression
     * @param p1 - the name of index argument
     * @param p2 - FROM index = form
     * @param p3 - TO index = to
     * @param p4 - BY delta
     * @returns product operation (for empty product operations returns 1).
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "piProduct"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number): number;

    /**
     * Digit index based on digit character for numeral systems with base between 1 and 36.
     * @param p0 - Digit character (lower or upper case) representing digit in numeral systems with base
     *   between 1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D,
     *   14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U,
     *   31:V, 32:W, 33:X, 34:Y, 35:Z
     * @returns Returns digit index if digit char was recognized, otherwise returns -1.
     */
    "digitIndex"(p0: string): number;

    /**
     * Character representing digit for numeral systems with base between 1 and 36.
     * @param p0 - Digit index between 0 and 35
     * @returns Digit character representing digit for numeral systems with base between 1 and 36. Digits: 0:0,
     *   1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H, 18:I,
     *   19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z.
     *   If digit index is put of range '?' is returned.
     */
    "digitChar"(p0: number | Int32Value): string;

    /**
     * Recognition of numeral system base in which number literal represents number. Examples: 2 for b2.1001 or
     * b.1001, 1 for b1.111, 23 for b23.123afg 16 for b16.123acdf or h.123acdf.
     * @param p0 - Number literal string. Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
     *   b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26. b27. b28. b29. b30. b31. b32.
     *   b33. b34. b35. b36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D,
     *   14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U,
     *   31:V, 32:W, 33:X, 34:Y, 35:Z
     * @returns If number literal fits numeral system definition then numeral system base is returned (base
     *   between 1 and 36), otherwise -1 is returned.
     */
    "getNumeralSystemBase"(p0: string | null): number;

    /**
     * Recognition of numeral system base in which number literal represents number. Examples: 2 for b2.1001 or
     * b.1001, 1 for b1.111, 23 for b23.123afg 16 for b16.123acdf or h.123acdf.
     * @param p0 - Number literal string. Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
     *   b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26. b27. b28. b29. b30. b31. b32.
     *   b33. b34. b35. b36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D,
     *   14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U,
     *   31:V, 32:W, 33:X, 34:Y, 35:Z
     * @returns If number literal fits numeral system definition then numeral system base is returned (base
     *   between 1 and 36), otherwise -1 is returned.
     */
    "getNumeralSystemBase"(p0: string): number;

    /**
     * Other base to decimal conversion.
     * @param numeralSystemBase - Numeral system base has to be above 0.
     * @param digits - List of digits
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     */
    "convOthBase2Decimal"(numeralSystemBase: number, ...digits: number[]): number;

    /**
     * Other base (base between 1 and 36) number literal conversion to decimal number.
     * @param p0 - Number literal in given numeral system with base between 1 and 36. Digits: 0:0, 1:1, 2:2,
     *   3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K,
     *   21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
     * @param p1 - Numeral system base, between 1 and 36
     * @returns Decimal number after conversion. If conversion was not possible the NaN is returned.
     */
    "convOthBase2Decimal"(p0: string | null, p1: number | Int32Value): number;

    /**
     * Other base (base between 1 and 36) number literal conversion to decimal number.
     * @param p0 - Number literal in given numeral system with base between 1 and 36. Digits: 0:0, 1:1, 2:2,
     *   3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K,
     *   21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
     * @param p1 - Numeral system base, between 1 and 36
     * @returns Decimal number after conversion. If conversion was not possible the NaN is returned.
     */
    "convOthBase2Decimal"(p0: string, p1: number | Int32Value): number;

    /**
     * Other base (base between 1 and 36) number literal conversion to decimal number. Base specification
     * included in number literal.
     *
     * Examples: 2 for b2.1001 or b.1001, 1 for b1.111, 23 for b23.123afg 16 for b16.123acdf or h.123acdf.
     * @param p0 - Number literal string. Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
     *   b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26. b27. b28. b29. b30. b31. b32.
     *   b33. b34. b35. b36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D,
     *   14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U,
     *   31:V, 32:W, 33:X, 34:Y, 35:Z
     * @returns Decimal number after conversion. If conversion was not possible the NaN is returned.
     */
    "convOthBase2Decimal"(p0: string | null): number;

    /**
     * Other base (base between 1 and 36) number literal conversion to decimal number. Base specification
     * included in number literal.
     *
     * Examples: 2 for b2.1001 or b.1001, 1 for b1.111, 23 for b23.123afg 16 for b16.123acdf or h.123acdf.
     * @param p0 - Number literal string. Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
     *   b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26. b27. b28. b29. b30. b31. b32.
     *   b33. b34. b35. b36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D,
     *   14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U,
     *   31:V, 32:W, 33:X, 34:Y, 35:Z
     * @returns Decimal number after conversion. If conversion was not possible the NaN is returned.
     */
    "convOthBase2Decimal"(p0: string): number;

    /**
     * Other base to decimal conversion.
     * @param p0 - Numeral system base has to be above 0.
     * @param p1 - List of digits
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     */
    "convOthBase2Decimal"(p0: number | Int32Value, p1: Array<number> | NativeList<number, "int">): number;

    /**
     * Other base to decimal conversion.
     * @param p0 - Numeral system base has to be above 0.
     * @param p1 - List of digits
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     */
    "convOthBase2Decimal"(p0: number | Int32Value, p1: Array<number> | Int32Array | null): number;

    /**
     * Other base to decimal conversion.
     * @param p0 - Numeral system base has to be above 0.
     * @param p1 - List of digits
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     */
    "convOthBase2Decimal"(p0: number, p1: Array<number> | NativeList<number, "double">): number;

    /**
     * Other base to decimal conversion.
     * @param p0 - Numeral system base has to be above 0.
     * @param p1 - List of digits
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     */
    "convOthBase2Decimal"(p0: number, p1: Array<number> | Float64Array | null): number;

    /**
     * Other base to decimal conversion.
     * @param p0 - Numeral system base and digits specification. Numeral system base is placed at index 0, rest
     *   of array is interpreted as digits. Numeral system base has to be above 0.
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     */
    "convOthBase2Decimal"(p0: Array<number> | Int32Array | null): number;

    /**
     * Other base to decimal conversion.
     * @param p0 - Numeral system base and digits specification. Numeral system base is placed at index 0, rest
     *   of array is interpreted as digits. Numeral system base has to be above 0.
     * @returns Number after conversion. If conversion is not possible then NaN is returned.
     */
    "convOthBase2Decimal"(p0: Array<number> | Float64Array | null): number;

    /**
     * Decimal number to other numeral system conversion with base between 1 and 36.
     * @param p0 - Decimal number
     * @param p1 - Numeral system base between 1 and 36
     * @returns Number literal representing decimal number in given numeral system. Digits 0:0, 1:1, 2:2, 3:3,
     *   4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L,
     *   22:M, 23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z. If conversion was
     *   not possible the "NaN" string is returned.
     */
    "convDecimal2OthBase"(p0: number, p1: number | Int32Value): string | null;

    /**
     * Decimal number to other numeral system conversion with base between 1 and 36.
     * @param p0 - Decimal number
     * @param p1 - Numeral system base between 1 and 36
     * @param p2 - If 1 then always bxx. is used, i.e. b1. or b16. If 2 then for binary b. is used, for octal
     *   o. is used, for hexadecimal h. is used, otherwise bxx. is used where xx is the numeral system base
     *   specification.
     * @returns Number literal representing decimal number in given numeral system. Base format: b1. b2. b. b3.
     *   b4. b5. b6. b7. b8. o. b9. b10. b11. b12. b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23.
     *   b24. b25. b26. b27. b28. b29. b30. b31. b32. b33. b34. b35. b36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5,
     *   6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M,
     *   23:N, 24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z If conversion was not
     *   possible the "NaN" string is returned.
     */
    "convDecimal2OthBase"(p0: number, p1: number | Int32Value, p2: number | Int32Value): string | null;

    /**
     * Number of digits needed to represent given number in base 10 numeral system.
     * @param p0 - The number
     * @returns Number of digits needed to represent given number in base 10 numeral system.
     */
    "numberOfDigits"(p0: bigint): number;

    /**
     * Number of digits needed to represent given number in base 10 numeral system.
     * @param p0 - The number
     * @returns Number of digits needed to represent given number in base 10 numeral system. If number is NaN
     *   the NaN is returned. If number is infinite then Infinity is returned.
     */
    "numberOfDigits"(p0: number): number;

    /**
     * Number of digits needed to represent given number in numeral system with given base.
     * @param p0 - The number
     * @param p1 - Numeral system base above 0
     * @returns Returns number of digits. In case when numeralSystemBase is lower than 1 then -1 is returned.
     */
    "numberOfDigits"(p0: bigint, p1: bigint): bigint;

    /**
     * Number of digits needed to represent given number (its integer part) in numeral system with given base.
     * @param p0 - The number
     * @param p1 - Numeral system base above 0
     * @returns Returns number of digits. In case when numeralSystemBase is lower than 1 then NaN is returned.
     *   If number or numeralSystemBase is NaN then NaN is returned. If numeralSystemBase is infinite then NaN
     *   is returned.
     */
    "numberOfDigits"(p0: number, p1: number): number;

    /**
     * Digit at position - numeral system with given base
     * @param p0 - The number
     * @param p1 - Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
     * @param p2 - Base of numeral system - above 0
     * @returns Return digit at given position. If digit finding was not possible then -1 is returned.
     */
    "digitAtPosition"(p0: bigint, p1: number | Int32Value, p2: number | Int32Value): number;

    /**
     * Digit at position - numeral system with base 10
     * @param p0 - The number
     * @param p1 - Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
     * @returns Return digit at given position. If digit finding was not possible then -1 is returned.
     */
    "digitAtPosition"(p0: bigint, p1: number | Int32Value): number;

    /**
     * Digit at position - numeral system with given base
     * @param p0 - The number
     * @param p1 - Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
     * @param p2 - Base of numeral system - above 0
     * @returns Return digit at given position. If digit finding was not possible then NaN is returned.
     */
    "digitAtPosition"(p0: number, p1: number, p2: number): number;

    /**
     * Digit at position - numeral system with base 10
     * @param p0 - The number
     * @param p1 - Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
     * @returns Return digit at given position. If digit finding was not possible then NaN is returned.
     */
    "digitAtPosition"(p0: number, p1: number): number;

    /**
     * Prime decomposition (prime factorization)
     * @param p0 - Number to be decomposed
     * @returns List of prime factors (non-distinct)
     */
    "primeFactors"(p0: bigint): Array<bigint> | null;

    /**
     * Prime decomposition (prime factorization)
     * @param p0 - Number to be decomposed
     * @returns List of prime factors (non-distinct)
     */
    "primeFactors"(p0: number): Array<number> | null;

    /**
     * Prime decomposition (prime factorization) - returns number of distinct prime factors
     * @param p0 - Number to be decomposed
     * @returns Number of distinct prime factors
     */
    "numberOfPrimeFactors"(p0: number): number;

    /**
     * Prime decomposition (prime factorization) - returns prime factor value
     * @param p0 - Number to be decomposed
     * @param p1 - Factor id
     * @returns Factor value if factor id between 1 and numberOfPrimeFactors, otherwise 1 is returned. For NaN
     *   of infinite parameters Double NaN is returned. For number eq 0 NaN is returned.
     */
    "primeFactorValue"(p0: number, p1: number): number;

    /**
     * Prime decomposition (prime factorization) - returns prime factor exponent
     * @param p0 - Number to be decomposed
     * @param p1 - Factor id
     * @returns Factor exponent if factor id between 1 and numberOfPrimeFactors, otherwise 0 is returned. For
     *   NaN of infinite parameters Double NaN is returned. For number eq 0 NaN is returned.
     */
    "primeFactorExponent"(p0: number, p1: number): number;

    /**
     * Converts double value to its fraction representation.
     * @param p0 - Value to be converted
     * @returns Array representing fraction. Sign at index 0, numerator at index 1, denominator at index 2. If
     *   conversion is not possible then NaN is assigned to all the fields.
     */
    "toFraction"(p0: number): Array<number> | null;

    /**
     * Converts double value to its mixed fraction representation.
     * @param p0 - Value to be converted
     * @returns Array representing fraction. Sign at index 0, whole number at index 1, numerator at index 2,
     *   denominator at index 3. If conversion is not possible then NaN is assigned to both numerator and
     *   denominator.
     */
    "toMixedFraction"(p0: number): Array<number> | null;

    /**
     * Converts array representing fraction to fraction string representation.
     * @param p0 - Array representing fraction (including mix fractions)
     * @returns String representation of fraction.
     * @see {@link mathcollection_NumberTheoryStatics.toFraction}
     * @see {@link mathcollection_NumberTheoryStatics.toMixedFraction}
     */
    "fractionToString"(p0: Array<number> | Float64Array): string | null;

    /**
     * Converts number to its fraction string representation.
     * @param p0 - Given number
     * @returns String representation of fraction.
     * @see {@link mathcollection_NumberTheoryStatics.toFraction}
     * @see {@link mathcollection_NumberTheoryStatics.fractionToString}
     */
    "toFractionString"(p0: number): string | null;

    /**
     * Converts number to its mixed fraction string representation.
     * @param p0 - Given number
     * @returns String representation of fraction.
     * @see {@link mathcollection_NumberTheoryStatics.toMixedFraction}
     * @see {@link mathcollection_NumberTheoryStatics.fractionToString}
     */
    "toMixedFractionString"(p0: number): string | null;
}

export interface mathcollection_PhysicalConstantsStatics {
    readonly "LIGHT_SPEED": number;
    readonly "GRAVITATIONAL_CONSTANT": number;
    readonly "GRAVIT_ACC_EARTH": number;
    readonly "PLANCK_CONSTANT": number;
    readonly "PLANCK_CONSTANT_REDUCED": number;
    readonly "PLANCK_LENGTH": number;
    readonly "PLANCK_MASS": number;
    readonly "PLANCK_TIME": number;
    readonly "N_A": number;
    readonly "R": number;
    readonly "BOLTZMANN_CONSTANT": number;
    readonly "NEUTRON_REST_MASS": number;
    readonly "NEUTRON_EQUIVALENT_REST_MASS": number;
    readonly "PROTON_REST_MASS": number;
    readonly "PROTON_EQUIVALENT_REST_MASS": number;
    readonly "ELEMENTARY_CHARGE": number;
    readonly "ELECTRON_REST_MASS": number;
    readonly "ELECTRON_EQUIVALENT_REST_MASS": number;
    readonly "VACUUM_PERMITTIVITY": number;
    readonly "VACUUM_PERMEABILITY": number;
}

export interface mathcollection_ProbabilityDistributionsStatics {

    /**
     * Random number from normal distribution N(mean, stddev).
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param mean - Mean value.
     * @param stddev - Standard deviation.
     * @param rnd - Random number generator.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns NaN if mean or stddev or rnd is null or stddev is lower than 0 - otherwise random number.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.rndNormal}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "rndNormalWithCancel"(mean: number, stddev: number, rnd: IRandom | null, cancelId: number): number;

    /**
     * Probability distribution function - Student's t-distribution
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Given point.
     * @param v - Number of degrees of freedom.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the PDF of Student's t-distribution.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.pdfStudentT}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "pdfStudentTWithCancel"(x: number, v: number, cancelId: number): number;

    /**
     * Cumulative distribution function - Student's t-distribution
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Given point.
     * @param v - Number of degrees of freedom.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the CDF of Student's t-distribution.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.cdfStudentT}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "cdfStudentTWithCancel"(x: number, v: number, cancelId: number): number;

    /**
     * Quantile function (Inverse cumulative distribution function) - Student's t-distribution
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param p - Probability
     * @param v - Number of degrees of freedom.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the quantile of Student's t-distribution
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.qntStudentT}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "qntStudentTWithCancel"(p: number, v: number, cancelId: number): number;

    /**
     * Pseudo-random number from Student's t-distribution
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param v - Number of degrees of freedom.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns returns Pseudo-random number from Student's t-distribution
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.rndStudentT}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "rndStudentTWithCancel"(v: number, cancelId: number): number;

    /**
     * Probability distribution function - Chi-Squared distribution
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Given point.
     * @param k - Number of degrees of freedom.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the PDF of Chi-Squared t-distribution.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.pdfChiSquared}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "pdfChiSquaredWithCancel"(x: number, k: number, cancelId: number): number;

    /**
     * Cumulative distribution function - Chi-Squared distribution
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Given point.
     * @param k - Number of degrees of freedom.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the CDF of Chi-Squared distribution.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.cdfChiSquared}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "cdfChiSquaredWithCancel"(x: number, k: number, cancelId: number): number;

    /**
     * Quantile function (Inverse cumulative distribution function) - Chi-Squared distribution
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param p - Probability
     * @param k - Number of degrees of freedom.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the quantile of Chi-Squared distribution
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.qntChiSquared}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "qntChiSquaredWithCancel"(p: number, k: number, cancelId: number): number;

    /**
     * Pseudo-random number from Chi-Squared distribution
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param k - Number of degrees of freedom.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns returns Pseudo-random number from Chi-Squared distribution
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.rndChiSquared}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "rndChiSquaredWithCancel"(k: number, cancelId: number): number;

    /**
     * Probability distribution function - Snedecor's F distribution (F-distribution or F-ratio, also known as
     * Fisher–Snedecor distribution)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Real value
     * @param d1 - Number of degrees of freedom - 1
     * @param d2 - Number of degrees of freedom - 2
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the PDF of Snedecor's F distribution (F-distribution or F-ratio, also known as
     *   Fisher–Snedecor distribution)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.pdfSnedecordF}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "pdfSnedecordFWithCancel"(x: number, d1: number, d2: number, cancelId: number): number;

    /**
     * Cumulative distribution function - Snedecor's F distribution (F-distribution or F-ratio, also known as
     * Fisher–Snedecor distribution)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Real value
     * @param d1 - Number of degrees of freedom - 1
     * @param d2 - Number of degrees of freedom - 2
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the CDF of Snedecor's F distribution (F-distribution or F-ratio, also known as
     *   Fisher–Snedecor distribution)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.cdfSnedecordF}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "cdfSnedecordFWithCancel"(x: number, d1: number, d2: number, cancelId: number): number;

    /**
     * Quantile function (Inverse cumulative distribution function) - Snedecor's F distribution (F-distribution
     * or F-ratio, also known as Fisher–Snedecor distribution)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param p - Probability
     * @param d1 - Number of degrees of freedom - 1
     * @param d2 - Number of degrees of freedom - 2
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns the quantile of Snedecor's F distribution (F-distribution or F-ratio, also known as
     *   Fisher–Snedecor distribution)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.qntSnedecordF}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "qntSnedecordFWithCancel"(p: number, d1: number, d2: number, cancelId: number): number;

    /**
     * Pseudo-random number from Snedecor's F distribution (F-distribution or F-ratio, also known as
     * Fisher–Snedecor distribution)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param d1 - Number of degrees of freedom - 1
     * @param d2 - Number of degrees of freedom - 2
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns Pseudo-random number from Snedecor's F distribution (F-distribution or F-ratio, also
     *   known as Fisher–Snedecor distribution)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.rndSnedecordF}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "rndSnedecordFWithCancel"(d1: number, d2: number, cancelId: number): number;

    /**
     * Returns random variable value, where random variable is represented by the token id in the
     * RandomVariable class
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param randomVariableId - Please refer to RandomVariable class.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns random variable value if id is known, otherwise NaN is returned.
     * @see {@link parsertokens_RandomVariableStatics}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_ProbabilityDistributionsStatics.getRandomVariableValue}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "getRandomVariableValueWithCancel"(randomVariableId: number | Int32Value, cancelId: number): number;

    "randomGenerator": IRandom | null;

    /**
     * Random number from Uniform Continuous distribution over interval [a, b).
     * @param p0 - Interval limit - left / lower.
     * @param p1 - Interval limit - right / upper.
     * @param p2 - Random number generator.
     * @returns NaN if a or b is null, or b is lower than a - otherwise returns random number.
     */
    "rndUniformContinuous"(p0: number, p1: number, p2: IRandom | null): number;

    /**
     * Random number from dUniform Continuous distribution over interval [a, b).
     * @param p0 - Interval limit - left / lower.
     * @param p1 - Interval limit - right / upper.
     * @returns NaN if a or b is null, or b is lower than a - otherwise returns random number.
     */
    "rndUniformContinuous"(p0: number, p1: number): number;

    /**
     * Random number from Uniform Continuous distribution over interval [0, 1).
     * @param p0 - Random number generator.
     * @returns Random number.
     */
    "rndUniformContinuous"(p0: IRandom | null): number;

    /**
     * Random number from Uniform Continuous distribution over interval [0, 1).
     * @returns Random number.
     */
    "randomUniformContinuous"(): number;

    /**
     * PDF - Probability Distribution Function - Uniform Continuous distribution over interval [a, b).
     * @param p0 - Point to evaluate pdf function.
     * @param p1 - Interval limit - left / lower.
     * @param p2 - Interval limit - right / upper.
     * @returns NaN if a or b is null, or b is lower than a - otherwise function value.
     */
    "pdfUniformContinuous"(p0: number, p1: number, p2: number): number;

    /**
     * CDF - Cumulative Distribution Function - Uniform Continuous distribution over interval [a, b).
     * @param p0 - Point to evaluate cdf function.
     * @param p1 - Interval limit - left / lower.
     * @param p2 - Interval limit - right / upper.
     * @returns NaN if a or b is null, or b is lower than a - otherwise function value.
     */
    "cdfUniformContinuous"(p0: number, p1: number, p2: number): number;

    /**
     * QNT - Quantile Function - Uniform Continuous distribution over interval [a, b). (Inverse of Cumulative
     * Distribution Function).
     * @param p0 - Quantile.
     * @param p1 - Interval limit - left / lower.
     * @param p2 - Interval limit - right / upper.
     * @returns NaN if a or b is null, or b is lower than a or q is lower than 0 or q is greater than 1 -
     *   otherwise function value.
     */
    "qntUniformContinuous"(p0: number, p1: number, p2: number): number;

    /**
     * Random number from Uniform Discrete distribution. over set interval (a, a+1, ..., b-1, b).
     * @param p0 - Interval limit - left / lower.
     * @param p1 - Interval limit - right / upper.
     * @param p2 - Random number generator.
     * @returns NaN if a or b is null, or b is lower than a - otherwise returns random number.
     */
    "rndInteger"(p0: number | Int32Value, p1: number | Int32Value, p2: IRandom | null): number;

    /**
     * Random number from Uniform Discrete distribution. over set interval (a, a+1, ..., b-1, b).
     * @param p0 - Interval limit - left / lower.
     * @param p1 - Interval limit - right / upper.
     * @param p2 - Random number generator.
     * @returns NaN if a or b is null, or b is lower than a - otherwise returns random number.
     */
    "rndInteger"(p0: number, p1: number, p2: IRandom | null): number;

    /**
     * Random number from Uniform Discrete distribution. over set interval (a, a+1, ..., b-1, b).
     * @param p0 - Interval limit - left / lower.
     * @param p1 - Interval limit - right / upper.
     * @returns NaN if a or b is null, or b is lower than a - otherwise returns random number.
     */
    "rndInteger"(p0: number | Int32Value, p1: number | Int32Value): number;

    /**
     * Random integer.
     * @param p0 - Random number generator.
     * @returns Returns random number.
     */
    "rndInteger"(p0: IRandom | null): number;

    /**
     * Random index from 0 to n-1,
     * @param p0 - Bound.
     * @param p1 - Random number generator.
     * @returns if n < 0 returns -1, otherwise random index.
     */
    "rndIndex"(p0: number | Int32Value, p1: IRandom | null): number;

    /**
     * Random index from 0 to n-1,
     * @param p0 - Bound.
     * @returns if n < 0 returns -1, otherwise random index.
     */
    "rndIndex"(p0: number | Int32Value): number;

    /**
     * Random integer.
     * @returns NaN if a or b is null, or b is lower than a - otherwise returns random number.
     */
    "rndInteger"(): number;

    /**
     * Random number from normal distribution N(mean, stddev).
     * @param p0 - Mean value.
     * @param p1 - Standard deviation.
     * @param p2 - Random number generator.
     * @returns NaN if mean or stddev or rnd is null or stddev is lower than 0 - otherwise random number.
     */
    "rndNormal"(p0: number, p1: number, p2: IRandom | null): number;

    /**
     * Random number from normal distribution N(mean, stddev).
     * @param p0 - Mean value.
     * @param p1 - Standard deviation.
     * @returns NaN if mean or stddev is null or stddev is lower than 0 - otherwise random number.
     */
    "rndNormal"(p0: number, p1: number): number;

    /**
     * PDF - Probability Distribution Function - Normal distribution N(mean, stddev).
     * @param p0 - Point to evaluate pdf function.
     * @param p1 - Mean value.
     * @param p2 - Standard deviation.
     * @returns NaN if mean or stddev is null or stddev is lower than 0 - otherwise function value.
     */
    "pdfNormal"(p0: number, p1: number, p2: number): number;

    /**
     * CDF - Cumulative Distribution Function - Normal distribution N(mean, stddev).
     * @param p0 - Point to evaluate pdf function.
     * @param p1 - Mean value.
     * @param p2 - Standard deviation.
     * @returns NaN if mean or stddev is null or stddev is lower than 0 - otherwise function value.
     */
    "cdfNormal"(p0: number, p1: number, p2: number): number;

    /**
     * QNT - Quantile Function - Normal distribution N(mean, stddev). (Inverse of Cumulative Distribution
     * Function).
     * @param p0 - Quantile.
     * @param p1 - Mean value.
     * @param p2 - Standard deviation.
     * @returns NaN if mean or stddev is null or stddev is lower than 0 or q is lower than 0 or q is greater
     *   than 1 - otherwise function value.
     */
    "qntNormal"(p0: number, p1: number, p2: number): number;

    /**
     * Probability distribution function - Student's t-distribution
     * @param p0 - Given point.
     * @param p1 - Number of degrees of freedom.
     * @returns Returns the PDF of Student's t-distribution.
     */
    "pdfStudentT"(p0: number, p1: number): number;

    /**
     * Cumulative distribution function - Student's t-distribution
     * @param p0 - Given point.
     * @param p1 - Number of degrees of freedom.
     * @returns Returns the CDF of Student's t-distribution.
     */
    "cdfStudentT"(p0: number, p1: number): number;

    /**
     * Quantile function (Inverse cumulative distribution function) - Student's t-distribution
     * @param p0 - Probability
     * @param p1 - Number of degrees of freedom.
     * @returns Returns the quantile of Student's t-distribution
     */
    "qntStudentT"(p0: number, p1: number): number;

    /**
     * Pseudo-random number from Student's t-distribution
     * @param p0 - Number of degrees of freedom.
     * @returns returns Pseudo-random number from Student's t-distribution
     */
    "rndStudentT"(p0: number): number;

    /**
     * Probability distribution function - Chi-Squared distribution
     * @param p0 - Given point.
     * @param p1 - Number of degrees of freedom.
     * @returns Returns the PDF of Chi-Squared t-distribution.
     */
    "pdfChiSquared"(p0: number, p1: number): number;

    /**
     * Cumulative distribution function - Chi-Squared distribution
     * @param p0 - Given point.
     * @param p1 - Number of degrees of freedom.
     * @returns Returns the CDF of Chi-Squared distribution.
     */
    "cdfChiSquared"(p0: number, p1: number): number;

    /**
     * Quantile function (Inverse cumulative distribution function) - Chi-Squared distribution
     * @param p0 - Probability
     * @param p1 - Number of degrees of freedom.
     * @returns Returns the quantile of Chi-Squared distribution
     */
    "qntChiSquared"(p0: number, p1: number): number;

    /**
     * Pseudo-random number from Chi-Squared distribution
     * @param p0 - Number of degrees of freedom.
     * @returns returns Pseudo-random number from Chi-Squared distribution
     */
    "rndChiSquared"(p0: number): number;

    /**
     * Probability distribution function - Snedecor's F distribution (F-distribution or F-ratio, also known as
     * Fisher–Snedecor distribution)
     * @param p0 - Real value
     * @param p1 - Number of degrees of freedom - 1
     * @param p2 - Number of degrees of freedom - 2
     * @returns Returns the PDF of Snedecor's F distribution (F-distribution or F-ratio, also known as
     *   Fisher–Snedecor distribution)
     */
    "pdfSnedecordF"(p0: number, p1: number, p2: number): number;

    /**
     * Cumulative distribution function - Snedecor's F distribution (F-distribution or F-ratio, also known as
     * Fisher–Snedecor distribution)
     * @param p0 - Real value
     * @param p1 - Number of degrees of freedom - 1
     * @param p2 - Number of degrees of freedom - 2
     * @returns Returns the CDF of Snedecor's F distribution (F-distribution or F-ratio, also known as
     *   Fisher–Snedecor distribution)
     */
    "cdfSnedecordF"(p0: number, p1: number, p2: number): number;

    /**
     * Quantile function (Inverse cumulative distribution function) - Snedecor's F distribution (F-distribution
     * or F-ratio, also known as Fisher–Snedecor distribution)
     * @param p0 - Probability
     * @param p1 - Number of degrees of freedom - 1
     * @param p2 - Number of degrees of freedom - 2
     * @returns Returns the quantile of Snedecor's F distribution (F-distribution or F-ratio, also known as
     *   Fisher–Snedecor distribution)
     */
    "qntSnedecordF"(p0: number, p1: number, p2: number): number;

    /**
     * Pseudo-random number from Snedecor's F distribution (F-distribution or F-ratio, also known as
     * Fisher–Snedecor distribution)
     * @param p0 - Number of degrees of freedom - 1
     * @param p1 - Number of degrees of freedom - 2
     * @returns Returns Pseudo-random number from Snedecor's F distribution (F-distribution or F-ratio, also
     *   known as Fisher–Snedecor distribution)
     */
    "rndSnedecordF"(p0: number, p1: number): number;

    /**
     * Returns random variable value, where random variable is represented by the token id in the
     * RandomVariable class
     * @param p0 - Please refer to RandomVariable class.
     * @returns Returns random variable value if id is known, otherwise NaN is returned.
     * @see {@link parsertokens_RandomVariableStatics}
     */
    "getRandomVariableValue"(p0: number | Int32Value): number;
}

export interface mathcollection_SpecialFunctionsStatics {

    /**
     * Exponential integral function Ei(x)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Point at which function will be evaluated.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Exponential integral function Ei(x)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.exponentialIntegralEi}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "exponentialIntegralEiWithCancel"(x: number, cancelId: number): number;

    /**
     * Logarithmic integral function li(x)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Point at which function will be evaluated.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Logarithmic integral function li(x)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.logarithmicIntegralLi}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "logarithmicIntegralLiWithCancel"(x: number, cancelId: number): number;

    /**
     * Offset logarithmic integral function Li(x)
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Point at which function will be evaluated.
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Offset logarithmic integral function Li(x)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.offsetLogarithmicIntegralLi}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "offsetLogarithmicIntegralLiWithCancel"(x: number, cancelId: number): number;

    /**
     * Real valued Gamma function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns gamma function value.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.gamma}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "gammaWithCancel"(x: number, cancelId: number): number;

    /**
     * Gamma function implementation based on Lanchos approximation algorithm
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Function parameter
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Gamma function value (Lanchos approx).
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.lanchosGamma}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "lanchosGammaWithCancel"(x: number, cancelId: number): number;

    /**
     * Real valued log gamma function.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns log value from gamma function.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.logGamma}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "logGammaWithCancel"(x: number, cancelId: number): number;

    /**
     * Signum from the real valued gamma function.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns signum of the gamma(x)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.sgnGamma}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "sgnGammaWithCancel"(x: number, cancelId: number): number;

    /**
     * Regularized lower gamma function 'P'
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param s - Argument value
     * @param x - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Value of the regularized lower gamma function 'P'.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.regularizedGammaLowerP}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "regularizedGammaLowerPWithCancel"(s: number, x: number, cancelId: number): number;

    /**
     * Inverse of regularized lower gamma function 'P'
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param a - Argument value
     * @param p - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Value of the inverse regularized lower gamma function 'P'.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.inverseRegularizedGammaLowerP}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "inverseRegularizedGammaLowerPWithCancel"(a: number, p: number, cancelId: number): number;

    /**
     * Incomplete lower gamma function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param s - Argument value
     * @param x - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Value of the incomplete lower gamma function.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.incompleteGammaLower}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "incompleteGammaLowerWithCancel"(s: number, x: number, cancelId: number): number;

    /**
     * Regularized upper gamma function 'Q'
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param s - Argument value
     * @param x - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Value of the regularized upper gamma function 'Q'.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.regularizedGammaUpperQ}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "regularizedGammaUpperQWithCancel"(s: number, x: number, cancelId: number): number;

    /**
     * Incomplete upper gamma function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param s - Argument value
     * @param x - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Value of the incomplete upper gamma function.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.incompleteGammaUpper}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "incompleteGammaUpperWithCancel"(s: number, x: number, cancelId: number): number;

    /**
     * Digamma function as the logarithmic derivative of the Gamma special function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Approximated value of the digamma function.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.diGamma}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "diGammaWithCancel"(x: number, cancelId: number): number;

    /**
     * Log Beta special function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Argument value
     * @param y - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Return logBeta special function (for positive x and positive y)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.logBeta}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "logBetaWithCancel"(x: number, y: number, cancelId: number): number;

    /**
     * Beta special function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Argument value
     * @param y - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Return Beta special function (for positive x and positive y)
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.beta}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "betaWithCancel"(x: number, y: number, cancelId: number): number;

    /**
     * Log Incomplete Beta special function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param a - Argument value
     * @param b - Argument value
     * @param x - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Return incomplete Beta special function for positive a and positive b and x between 0 and 1
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.incompleteBeta}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "incompleteBetaWithCancel"(a: number, b: number, x: number, cancelId: number): number;

    /**
     * Regularized incomplete Beta special function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param a - Argument value
     * @param b - Argument value
     * @param x - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Return incomplete Beta special function for positive a and positive b and x between 0 and 1
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.regularizedBeta}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "regularizedBetaWithCancel"(a: number, b: number, x: number, cancelId: number): number;

    /**
     * Inerse regularized incomplete Beta special function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param a - Argument value
     * @param b - Argument value
     * @param p - Argument value
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Return inverse incomplete Beta special function for positive a and positive b and x between 0
     *   and 1
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.inverseRegularizedBeta}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "inverseRegularizedBetaWithCancel"(a: number, b: number, p: number, cancelId: number): number;

    /**
     * Real-valued Lambert-W function approximation.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param x - Point at which function will be approximated
     * @param branch - Branch id, 0 for principal branch, -1 for the other branch
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Principal branch for x greater or equal than -1/e, otherwise NaN. Minus 1 branch for x greater
     *   or equal than -1/e and lower than 0, otherwise NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.lambertW}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "lambertWWithCancel"(x: number, branch: number, cancelId: number): number;

    /**
     * The Gaussian or ordinary hypergeometric special function
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param a - Argument value
     * @param b - Argument value
     * @param c - Argument value
     * @param z - Argument value
     * @param maxIterations - Stop condition
     * @param precision - Stop condition
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Returns hypergeometric special function approximation
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_SpecialFunctionsStatics.hypergeometricF}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "hypergeometricFWithCancel"(a: number, b: number, c: number, z: number, maxIterations: number, precision: number, cancelId: number): number;

    /**
     * Exponential integral function Ei(x)
     * @param p0 - Point at which function will be evaluated.
     * @returns Exponential integral function Ei(x)
     */
    "exponentialIntegralEi"(p0: number): number;

    /**
     * Logarithmic integral function li(x)
     * @param p0 - Point at which function will be evaluated.
     * @returns Logarithmic integral function li(x)
     */
    "logarithmicIntegralLi"(p0: number): number;

    /**
     * Offset logarithmic integral function Li(x)
     * @param p0 - Point at which function will be evaluated.
     * @returns Offset logarithmic integral function Li(x)
     */
    "offsetLogarithmicIntegralLi"(p0: number): number;

    /**
     * Calculates the error function
     * @param p0 - Point at which function will be evaluated.
     * @returns Error function erf(x)
     */
    "erf"(p0: number): number;

    /**
     * Calculates the complementary error function.
     * @param p0 - Point at which function will be evaluated.
     * @returns Complementary error function erfc(x)
     */
    "erfc"(p0: number): number;

    /**
     * Calculates the inverse error function evaluated at x.
     * @param p0 - Point at which function will be evaluated.
     * @returns Inverse error function erfInv(x)
     */
    "erfInv"(p0: number): number;

    /**
     * Calculates the complementary inverse error function evaluated at x.
     * @param p0 - Point at which function will be evaluated.
     * @returns Inverse of complementary inverse error function erfcInv(x)
     */
    "erfcInv"(p0: number): number;

    /**
     * Real valued Gamma function
     * @param p0 - Argument value
     * @returns Returns gamma function value.
     */
    "gamma"(p0: number): number;

    /**
     * Gamma function implementation based on Lanchos approximation algorithm
     * @param p0 - Function parameter
     * @returns Gamma function value (Lanchos approx).
     */
    "lanchosGamma"(p0: number): number;

    /**
     * Real valued log gamma function.
     * @param p0 - Argument value
     * @returns Returns log value from gamma function.
     */
    "logGamma"(p0: number): number;

    /**
     * Signum from the real valued gamma function.
     * @param p0 - Argument value
     * @returns Returns signum of the gamma(x)
     */
    "sgnGamma"(p0: number): number;

    /**
     * Regularized lower gamma function 'P'
     * @param p0 - Argument value
     * @param p1 - Argument value
     * @returns Value of the regularized lower gamma function 'P'.
     */
    "regularizedGammaLowerP"(p0: number, p1: number): number;

    /**
     * Inverse of regularized lower gamma function 'P'
     * @param p0 - Argument value
     * @param p1 - Argument value
     * @returns Value of the inverse regularized lower gamma function 'P'.
     */
    "inverseRegularizedGammaLowerP"(p0: number, p1: number): number;

    /**
     * Incomplete lower gamma function
     * @param p0 - Argument value
     * @param p1 - Argument value
     * @returns Value of the incomplete lower gamma function.
     */
    "incompleteGammaLower"(p0: number, p1: number): number;

    /**
     * Regularized upper gamma function 'Q'
     * @param p0 - Argument value
     * @param p1 - Argument value
     * @returns Value of the regularized upper gamma function 'Q'.
     */
    "regularizedGammaUpperQ"(p0: number, p1: number): number;

    /**
     * Incomplete upper gamma function
     * @param p0 - Argument value
     * @param p1 - Argument value
     * @returns Value of the incomplete upper gamma function.
     */
    "incompleteGammaUpper"(p0: number, p1: number): number;

    /**
     * Digamma function as the logarithmic derivative of the Gamma special function
     * @param p0 - Argument value
     * @returns Approximated value of the digamma function.
     */
    "diGamma"(p0: number): number;

    /**
     * Log Beta special function
     * @param p0 - Argument value
     * @param p1 - Argument value
     * @returns Return logBeta special function (for positive x and positive y)
     */
    "logBeta"(p0: number, p1: number): number;

    /**
     * Beta special function
     * @param p0 - Argument value
     * @param p1 - Argument value
     * @returns Return Beta special function (for positive x and positive y)
     */
    "beta"(p0: number, p1: number): number;

    /**
     * Log Incomplete Beta special function
     * @param p0 - Argument value
     * @param p1 - Argument value
     * @param p2 - Argument value
     * @returns Return incomplete Beta special function for positive a and positive b and x between 0 and 1
     */
    "incompleteBeta"(p0: number, p1: number, p2: number): number;

    /**
     * Regularized incomplete Beta special function
     * @param p0 - Argument value
     * @param p1 - Argument value
     * @param p2 - Argument value
     * @returns Return incomplete Beta special function for positive a and positive b and x between 0 and 1
     */
    "regularizedBeta"(p0: number, p1: number, p2: number): number;

    /**
     * Inerse regularized incomplete Beta special function
     * @param p0 - Argument value
     * @param p1 - Argument value
     * @param p2 - Argument value
     * @returns Return inverse incomplete Beta special function for positive a and positive b and x between 0
     *   and 1
     */
    "inverseRegularizedBeta"(p0: number, p1: number, p2: number): number;

    /**
     * Real-valued Lambert-W function approximation.
     * @param p0 - Point at which function will be approximated
     * @param p1 - Branch id, 0 for principal branch, -1 for the other branch
     * @returns Principal branch for x greater or equal than -1/e, otherwise NaN. Minus 1 branch for x greater
     *   or equal than -1/e and lower than 0, otherwise NaN.
     */
    "lambertW"(p0: number, p1: number): number;

    /**
     * The Gaussian or ordinary hypergeometric special function
     * @param p0 - Argument value
     * @param p1 - Argument value
     * @param p2 - Argument value
     * @param p3 - Argument value
     * @param p4 - Stop condition
     * @param p5 - Stop condition
     * @returns Returns hypergeometric special function approximation
     */
    "hypergeometricF"(p0: number, p1: number, p2: number, p3: number, p4: number, p5: number): number;
}

export interface mathcollection_StatisticsStatics {

    /**
     * Average from sample function values - iterative operator.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. At this method's existing cancellation
     * checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param index - the name of index argument
     * @param from - FROM index = form
     * @param to - TO index = to
     * @param delta - BY delta
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns the arithmetic mean of the sampled values, or NaN for an invalid or empty sample or observed
     *   cancellation
     * @see {@link Expression}
     * @see {@link Argument}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_StatisticsStatics.avg}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "avgWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Bias-corrected variance from sample function values - iterative operator.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param index - the name of index argument
     * @param from - FROM index = form
     * @param to - TO index = to
     * @param delta - BY delta
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns the sample variance of the sampled values using the existing sample-size convention, or NaN on
     *   an invalid sample or observed cancellation
     * @see {@link Expression}
     * @see {@link Argument}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_StatisticsStatics.var}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "varWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Bias-corrected standard deviation from sample function values - iterative operator.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param f - the expression
     * @param index - the name of index argument
     * @param from - FROM index = form
     * @param to - TO index = to
     * @param delta - BY delta
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns the square root of the sample variance, or NaN on an invalid sample or observed cancellation
     * @see {@link Expression}
     * @see {@link Argument}
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_StatisticsStatics.std}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "stdWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Sample average.
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the numbers
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if each number from numbers <> NaN returns avg(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_StatisticsStatics.avg}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "avgWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Sample variance (biased-corrected).
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the numbers
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if each number from numbers <> NaN returns Var(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_StatisticsStatics.var}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "varWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Sample standard deviation (biased-corrected).
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - the numbers
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns if each number from numbers <> NaN returns Std(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_StatisticsStatics.std}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "stdWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Sample median
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - List of number
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns Sample median, if table was empty or null then NaN is returned.
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_StatisticsStatics.median}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "medianWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Sample mode
     *
     * Cancellation is cooperative at the existing checks only. ID 0 uses global cancellation; positive IDs
     * combine the global signal with the domain signal. This method does not clear either signal. Cached
     * values and fast returns may complete normally despite a pending signal. Separate IDs do not make a
     * shared mutable expression graph safe for concurrent calculations. Array parameters are fixed arrays, not
     * token-bearing varargs. At this method's existing cancellation checks it returns NaN.
     *
     * There is no uniform cancellation result across the WithCancel family. The existing returns of this
     * method remain in effect; a caller using a sentinel may throw an exception. Querying the signal does not
     * establish whether this particular call observed cancellation.
     *
     * Synchronous WASM blocks timers and message handlers during calculation.
     * @param numbers - List of number
     * @param cancelId - cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
     * @returns the sample mode (ties use the existing frequency/original-position ordering), or NaN for null,
     *   empty or NaN-containing input or observed cancellation
     * @throws {TypeError} If cancelId is not a finite integer number.
     * @throws {RangeError} If cancelId is outside the supported range.
     * @since 6.2.0
     * @see {@link mathcollection_StatisticsStatics.mode}
     * @see {@link mXparserStatics.cancelCalculation}
     * @see {@link mXparserStatics.resetCalculationCancellation}
     * @see {@link mXparserStatics.acquireCancellationTokenId}
     * @see {@link mXparserStatics.reserveCancellationTokenId}
     * @see {@link mXparserStatics.releaseCancellationTokenId}
     */
    "modeWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Average from sample function values - iterative operator.
     * @param p0 - the expression
     * @param p1 - the name of index argument
     * @param p2 - FROM index = form
     * @param p3 - TO index = to
     * @param p4 - BY delta
     * @returns product operation (for empty product operations returns 1).
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "avg"(p0: Expression, p1: Argument, p2: number, p3: number, p4: number): number;

    /**
     * Sample average.
     * @param p0 - the numbers
     * @returns if each number from numbers <> NaN returns avg(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     */
    "avg"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Bias-corrected variance from sample function values - iterative operator.
     * @param p0 - the expression
     * @param p1 - the name of index argument
     * @param p2 - FROM index = form
     * @param p3 - TO index = to
     * @param p4 - BY delta
     * @returns product operation (for empty product operations returns 1).
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "var"(p0: Expression, p1: Argument, p2: number, p3: number, p4: number): number;

    /**
     * Sample variance (biased-corrected).
     * @param p0 - the numbers
     * @returns if each number from numbers <> NaN returns Var(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     */
    "var"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Bias-corrected standard deviation from sample function values - iterative operator.
     * @param p0 - the expression
     * @param p1 - the name of index argument
     * @param p2 - FROM index = form
     * @param p3 - TO index = to
     * @param p4 - BY delta
     * @returns product operation (for empty product operations returns 1).
     * @see {@link Expression}
     * @see {@link Argument}
     */
    "std"(p0: Expression, p1: Argument, p2: number, p3: number, p4: number): number;

    /**
     * Sample standard deviation (biased-corrected).
     * @param p0 - the numbers
     * @returns if each number from numbers <> NaN returns Std(a_1,...,a_n) a_1,...,a_n in numbers, otherwise
     *   returns NaN.
     */
    "std"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Sample median
     * @param p0 - List of number
     * @returns Sample median, if table was empty or null then NaN is returned.
     */
    "median"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /**
     * Sample mode
     * @param p0 - List of number
     * @returns Sample median, if table was empty or null then NaN is returned.
     */
    "mode"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;
}

export interface mathcollection_UnitsStatics {
    readonly "PERC": number;
    readonly "PROMIL": number;
    readonly "YOTTA": number;
    readonly "ZETTA": number;
    readonly "EXA": number;
    readonly "PETA": number;
    readonly "TERA": number;
    readonly "GIGA": number;
    readonly "MEGA": number;
    readonly "KILO": number;
    readonly "HECTO": number;
    readonly "DECA": number;
    readonly "DECI": number;
    readonly "CENTI": number;
    readonly "MILLI": number;
    readonly "MICRO": number;
    readonly "NANO": number;
    readonly "PICO": number;
    readonly "FEMTO": number;
    readonly "ATTO": number;
    readonly "ZEPTO": number;
    readonly "YOCTO": number;
    readonly "METRE": number;
    readonly "KILOMETRE": number;
    readonly "CENTIMETRE": number;
    readonly "MILLIMETRE": number;
    readonly "INCH": number;
    readonly "YARD": number;
    readonly "FEET": number;
    readonly "MILE": number;
    readonly "NAUTICAL_MILE": number;
    readonly "METRE2": number;
    readonly "CENTIMETRE2": number;
    readonly "MILLIMETRE2": number;
    readonly "ARE": number;
    readonly "HECTARE": number;
    readonly "KILOMETRE2": number;
    readonly "ACRE": number;
    readonly "MILLIMETRE3": number;
    readonly "CENTIMETRE3": number;
    readonly "METRE3": number;
    readonly "KILOMETRE3": number;
    readonly "MILLILITRE": number;
    readonly "LITRE": number;
    readonly "GALLON": number;
    readonly "PINT": number;
    readonly "SECOND": number;
    readonly "MILLISECOND": number;
    readonly "MINUTE": number;
    readonly "HOUR": number;
    readonly "DAY": number;
    readonly "WEEK": number;
    readonly "JULIAN_YEAR": number;
    readonly "KILOGRAM": number;
    readonly "GRAM": number;
    readonly "MILLIGRAM": number;
    readonly "DECAGRAM": number;
    readonly "TONNE": number;
    readonly "OUNCE": number;
    readonly "POUND": number;
    readonly "MOLE": number;
    readonly "COULOMB": number;
    readonly "AMPERE": number;
    readonly "KELVIN": number;
    readonly "CELCIUS": number;
    readonly "FARENHEIGHT": number;
    readonly "BIT": number;
    readonly "KILOBIT": number;
    readonly "MEGABIT": number;
    readonly "GIGABIT": number;
    readonly "TERABIT": number;
    readonly "PETABIT": number;
    readonly "EXABIT": number;
    readonly "ZETTABIT": number;
    readonly "YOTTABIT": number;
    readonly "BYTE": number;
    readonly "KILOBYTE": number;
    readonly "MEGABYTE": number;
    readonly "GIGABYTE": number;
    readonly "TERABYTE": number;
    readonly "PETABYTE": number;
    readonly "EXABYTE": number;
    readonly "ZETTABYTE": number;
    readonly "YOTTABYTE": number;
    readonly "JOULE": number;
    readonly "ELECTRONO_VOLT": number;
    readonly "KILO_ELECTRONO_VOLT": number;
    readonly "MEGA_ELECTRONO_VOLT": number;
    readonly "GIGA_ELECTRONO_VOLT": number;
    readonly "TERA_ELECTRONO_VOLT": number;
    readonly "METRE_PER_SECOND": number;
    readonly "KILOMETRE_PER_HOUR": number;
    readonly "MILE_PER_HOUR": number;
    readonly "KNOT": number;
    readonly "METRE_PER_SECOND2": number;
    readonly "KILOMETRE_PER_HOUR2": number;
    readonly "MILE_PER_HOUR2": number;
    readonly "RADIAN_ARC": number;
    readonly "DEGREE_ARC": number;
    readonly "MINUTE_ARC": number;
    readonly "SECOND_ARC": number;

    /**
     * Returns the numeric value of a built-in unit or prefix.
     * @param p0 - The token identifier defined by {@link parsertokens_UnitStatics}.
     * @returns The unit or prefix value, or `NaN` if the identifier is unknown.
     */
    "getUnitValue"(p0: number | Int32Value): number;
}

export interface parsertokens_BinaryRelationStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "EQ_ID": number;
    readonly "NEQ_ID": number;
    readonly "LT_ID": number;
    readonly "GT_ID": number;
    readonly "LEQ_ID": number;
    readonly "GEQ_ID": number;
    readonly "EQ_STR": string | null;
    readonly "EQ1_STR": string | null;
    readonly "NEQ_STR": string | null;
    readonly "NEQ_STR_UNI_1": string | null;
    readonly "NEQ1_STR": string | null;
    readonly "NEQ2_STR": string | null;
    readonly "LT_STR": string | null;
    readonly "GT_STR": string | null;
    readonly "LEQ_STR": string | null;
    readonly "LEQ_STR_UNI_1": string | null;
    readonly "LEQ_STR_UNI_2": string | null;
    readonly "GEQ_STR": string | null;
    readonly "GEQ_STR_UNI_1": string | null;
    readonly "GEQ_STR_UNI_2": string | null;
    readonly "EQ_SYN": string | null;
    readonly "EQ1_SYN": string | null;
    readonly "NEQ_SYN": string | null;
    readonly "NEQ_SYN_UNI_1": string | null;
    readonly "NEQ1_SYN": string | null;
    readonly "NEQ2_SYN": string | null;
    readonly "LT_SYN": string | null;
    readonly "GT_SYN": string | null;
    readonly "LEQ_SYN": string | null;
    readonly "LEQ_SYN_UNI_1": string | null;
    readonly "LEQ_SYN_UNI_2": string | null;
    readonly "GEQ_SYN": string | null;
    readonly "GEQ_SYN_UNI_1": string | null;
    readonly "GEQ_SYN_UNI_2": string | null;
    "EQ_DESC": string | null;
    "NEQ_DESC": string | null;
    "LT_DESC": string | null;
    "GT_DESC": string | null;
    "LEQ_DESC": string | null;
    "GEQ_DESC": string | null;
    readonly "EQ_SINCE": string | null;
    readonly "NEQ_SINCE": string | null;
    readonly "NEQ_SINCE_UNI_1": string | null;
    readonly "LT_SINCE": string | null;
    readonly "GT_SINCE": string | null;
    readonly "LEQ_SINCE": string | null;
    readonly "LEQ_SINCE_UNI_1": string | null;
    readonly "LEQ_SINCE_UNI_2": string | null;
    readonly "GEQ_SINCE": string | null;
    readonly "GEQ_SINCE_UNI_1": string | null;
    readonly "GEQ_SINCE_UNI_2": string | null;
}

export interface parsertokens_BitwiseOperatorStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "COMPL_ID": number;
    readonly "AND_ID": number;
    readonly "XOR_ID": number;
    readonly "OR_ID": number;
    readonly "LEFT_SHIFT_ID": number;
    readonly "RIGHT_SHIFT_ID": number;
    readonly "NAND_ID": number;
    readonly "NOR_ID": number;
    readonly "XNOR_ID": number;
    readonly "COMPL_STR": string | null;
    readonly "AND_STR": string | null;
    readonly "XOR_STR": string | null;
    readonly "OR_STR": string | null;
    readonly "LEFT_SHIFT_STR": string | null;
    readonly "RIGHT_SHIFT_STR": string | null;
    readonly "NAND_STR": string | null;
    readonly "NOR_STR": string | null;
    readonly "XNOR_STR": string | null;
    readonly "COMPL_SYN": string | null;
    readonly "AND_SYN": string | null;
    readonly "XOR_SYN": string | null;
    readonly "OR_SYN": string | null;
    readonly "LEFT_SHIFT_SYN": string | null;
    readonly "RIGHT_SHIFT_SYN": string | null;
    readonly "NAND_SYN": string | null;
    readonly "NOR_SYN": string | null;
    readonly "XNOR_SYN": string | null;
    "COMPL_DESC": string | null;
    "AND_DESC": string | null;
    "XOR_DESC": string | null;
    "OR_DESC": string | null;
    "LEFT_SHIFT_DESC": string | null;
    "RIGHT_SHIFT_DESC": string | null;
    "NAND_DESC": string | null;
    "NOR_DESC": string | null;
    "XNOR_DESC": string | null;
    readonly "COMPL_SINCE": string | null;
    readonly "AND_SINCE": string | null;
    readonly "XOR_SINCE": string | null;
    readonly "OR_SINCE": string | null;
    readonly "LEFT_SHIFT_SINCE": string | null;
    readonly "RIGHT_SHIFT_SINCE": string | null;
    readonly "NAND_SINCE": string | null;
    readonly "NOR_SINCE": string | null;
    readonly "XNOR_SINCE": string | null;
}

export interface parsertokens_BooleanOperatorStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "AND_ID": number;
    readonly "NAND_ID": number;
    readonly "OR_ID": number;
    readonly "NOR_ID": number;
    readonly "XOR_ID": number;
    readonly "IMP_ID": number;
    readonly "CIMP_ID": number;
    readonly "NIMP_ID": number;
    readonly "CNIMP_ID": number;
    readonly "EQV_ID": number;
    readonly "NEG_ID": number;
    readonly "NEG_STR": string | null;
    readonly "NEG_STR_UNI_1": string | null;
    readonly "AND_STR": string | null;
    readonly "AND_STR_UNI_1": string | null;
    readonly "AND1_STR": string | null;
    readonly "AND2_STR": string | null;
    readonly "NAND_STR": string | null;
    readonly "NAND1_STR": string | null;
    readonly "NAND2_STR": string | null;
    readonly "NAND_STR_UNI_1": string | null;
    readonly "NAND_STR_UNI_2": string | null;
    readonly "NAND_STR_UNI_3": string | null;
    readonly "NAND_STR_UNI_4": string | null;
    readonly "NAND_STR_UNI_5": string | null;
    readonly "NAND_STR_UNI_6": string | null;
    readonly "OR_STR": string | null;
    readonly "OR_STR_UNI_1": string | null;
    readonly "OR1_STR": string | null;
    readonly "OR2_STR": string | null;
    readonly "NOR_STR": string | null;
    readonly "NOR1_STR": string | null;
    readonly "NOR2_STR": string | null;
    readonly "NOR_STR_UNI_1": string | null;
    readonly "NOR_STR_UNI_2": string | null;
    readonly "NOR_STR_UNI_3": string | null;
    readonly "NOR_STR_UNI_4": string | null;
    readonly "NOR_STR_UNI_5": string | null;
    readonly "NOR_STR_UNI_6": string | null;
    readonly "XOR_STR": string | null;
    readonly "XOR_STR_UNI_1": string | null;
    readonly "IMP_STR": string | null;
    readonly "IMP_STR_UNI_1": string | null;
    readonly "CIMP_STR": string | null;
    readonly "CIMP_STR_UNI_1": string | null;
    readonly "NIMP_STR": string | null;
    readonly "NIMP_STR_UNI_1": string | null;
    readonly "CNIMP_STR": string | null;
    readonly "CNIMP_STR_UNI_1": string | null;
    readonly "EQV_STR": string | null;
    readonly "EQV_STR_UNI_1": string | null;
    readonly "NEG_SYN": string | null;
    readonly "NEG_SYN_UNI_1": string | null;
    readonly "AND_SYN": string | null;
    readonly "AND1_SYN": string | null;
    readonly "AND2_SYN": string | null;
    readonly "AND_SYN_UNI_1": string | null;
    readonly "NAND_SYN": string | null;
    readonly "NAND1_SYN": string | null;
    readonly "NAND2_SYN": string | null;
    readonly "NAND_SYN_UNI_1": string | null;
    readonly "NAND_SYN_UNI_2": string | null;
    readonly "NAND_SYN_UNI_3": string | null;
    readonly "NAND_SYN_UNI_4": string | null;
    readonly "NAND_SYN_UNI_5": string | null;
    readonly "NAND_SYN_UNI_6": string | null;
    readonly "OR_SYN": string | null;
    readonly "OR1_SYN": string | null;
    readonly "OR2_SYN": string | null;
    readonly "OR_SYN_UNI_1": string | null;
    readonly "NOR_SYN": string | null;
    readonly "NOR1_SYN": string | null;
    readonly "NOR2_SYN": string | null;
    readonly "NOR_SYN_UNI_1": string | null;
    readonly "NOR_SYN_UNI_2": string | null;
    readonly "NOR_SYN_UNI_3": string | null;
    readonly "NOR_SYN_UNI_4": string | null;
    readonly "NOR_SYN_UNI_5": string | null;
    readonly "NOR_SYN_UNI_6": string | null;
    readonly "XOR_SYN": string | null;
    readonly "XOR_SYN_UNI_1": string | null;
    readonly "IMP_SYN": string | null;
    readonly "IMP_SYN_UNI_1": string | null;
    readonly "CIMP_SYN": string | null;
    readonly "CIMP_SYN_UNI_1": string | null;
    readonly "NIMP_SYN": string | null;
    readonly "NIMP_SYN_UNI_1": string | null;
    readonly "CNIMP_SYN": string | null;
    readonly "CNIMP_SYN_UNI_1": string | null;
    readonly "EQV_SYN": string | null;
    readonly "EQV_SYN_UNI_1": string | null;
    "AND_DESC": string | null;
    "OR_DESC": string | null;
    "NEG_DESC": string | null;
    "NAND_DESC": string | null;
    "NOR_DESC": string | null;
    "XOR_DESC": string | null;
    "IMP_DESC": string | null;
    "CIMP_DESC": string | null;
    "NIMP_DESC": string | null;
    "CNIMP_DESC": string | null;
    "EQV_DESC": string | null;
    readonly "AND_SINCE": string | null;
    readonly "AND_SINCE_UNI_1": string | null;
    readonly "OR_SINCE": string | null;
    readonly "OR_SINCE_UNI_1": string | null;
    readonly "NEG_SINCE": string | null;
    readonly "NEG_SINCE_UNI_1": string | null;
    readonly "NAND_SINCE": string | null;
    readonly "NAND_SINCE_UNI_1": string | null;
    readonly "NAND_SINCE_UNI_2": string | null;
    readonly "NAND_SINCE_UNI_3": string | null;
    readonly "NAND_SINCE_UNI_4": string | null;
    readonly "NAND_SINCE_UNI_5": string | null;
    readonly "NAND_SINCE_UNI_6": string | null;
    readonly "NOR_SINCE": string | null;
    readonly "NOR_SINCE_UNI_1": string | null;
    readonly "NOR_SINCE_UNI_2": string | null;
    readonly "NOR_SINCE_UNI_3": string | null;
    readonly "NOR_SINCE_UNI_4": string | null;
    readonly "NOR_SINCE_UNI_5": string | null;
    readonly "NOR_SINCE_UNI_6": string | null;
    readonly "XOR_SINCE": string | null;
    readonly "XOR_SINCE_UNI_1": string | null;
    readonly "IMP_SINCE": string | null;
    readonly "IMP_SINCE_UNI_1": string | null;
    readonly "CIMP_SINCE": string | null;
    readonly "CIMP_SINCE_UNI_1": string | null;
    readonly "NIMP_SINCE": string | null;
    readonly "NIMP_SINCE_UNI_1": string | null;
    readonly "CNIMP_SINCE": string | null;
    readonly "CNIMP_SINCE_UNI_1": string | null;
    readonly "EQV_SINCE": string | null;
    readonly "EQV_SINCE_UNI_1": string | null;
}

export interface parsertokens_CalculusOperatorStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "SUM_ID": number;
    readonly "PROD_ID": number;
    readonly "INT_ID": number;
    readonly "DER_ID": number;
    readonly "DER_LEFT_ID": number;
    readonly "DER_RIGHT_ID": number;
    readonly "DERN_ID": number;
    readonly "FORW_DIFF_ID": number;
    readonly "BACKW_DIFF_ID": number;
    readonly "AVG_ID": number;
    readonly "VAR_ID": number;
    readonly "STD_ID": number;
    readonly "MIN_ID": number;
    readonly "MAX_ID": number;
    readonly "SOLVE_ID": number;
    readonly "SUM_STR": string | null;
    readonly "SUM_STR_UNI_1": string | null;
    readonly "SUM_STR_UNI_2": string | null;
    readonly "PROD_STR": string | null;
    readonly "PROD_STR_UNI_1": string | null;
    readonly "PROD_STR_UNI_2": string | null;
    readonly "PROD_STR_UNI_3": string | null;
    readonly "INT_STR": string | null;
    readonly "INT_STR_UNI_1": string | null;
    readonly "DER_STR": string | null;
    readonly "DER_STR_UNI_1": string | null;
    readonly "DER_LEFT_STR": string | null;
    readonly "DER_LEFT_STR_UNI_1": string | null;
    readonly "DER_RIGHT_STR": string | null;
    readonly "DER_RIGHT_STR_UNI_1": string | null;
    readonly "DERN_STR": string | null;
    readonly "FORW_DIFF_STR": string | null;
    readonly "FORW_DIFF_STR_UNI_1": string | null;
    readonly "FORW_DIFF_STR_UNI_2": string | null;
    readonly "BACKW_DIFF_STR": string | null;
    readonly "BACKW_DIFF_STR_UNI_1": string | null;
    readonly "AVG_STR": string | null;
    readonly "VAR_STR": string | null;
    readonly "STD_STR": string | null;
    readonly "MIN_STR": string | null;
    readonly "MAX_STR": string | null;
    readonly "SOLVE_STR": string | null;
    readonly "SUM_SYN": string | null;
    readonly "SUM_SYN_UNI_1": string | null;
    readonly "SUM_SYN_UNI_2": string | null;
    readonly "PROD_SYN": string | null;
    readonly "PROD_SYN_UNI_1": string | null;
    readonly "PROD_SYN_UNI_2": string | null;
    readonly "PROD_SYN_UNI_3": string | null;
    readonly "INT_SYN": string | null;
    readonly "INT_SYN_UNI_1": string | null;
    readonly "DER_SYN": string | null;
    readonly "DER_SYN_UNI_1": string | null;
    readonly "DER_LEFT_SYN": string | null;
    readonly "DER_LEFT_SYN_UNI_1": string | null;
    readonly "DER_RIGHT_SYN": string | null;
    readonly "DER_RIGHT_SYN_UNI_1": string | null;
    readonly "DERN_SYN": string | null;
    readonly "FORW_DIFF_SYN": string | null;
    readonly "FORW_DIFF_SYN_UNI_1": string | null;
    readonly "FORW_DIFF_SYN_UNI_2": string | null;
    readonly "BACKW_DIFF_SYN": string | null;
    readonly "BACKW_DIFF_SYN_UNI_1": string | null;
    readonly "AVG_SYN": string | null;
    readonly "VAR_SYN": string | null;
    readonly "STD_SYN": string | null;
    readonly "MIN_SYN": string | null;
    readonly "MAX_SYN": string | null;
    readonly "SOLVE_SYN": string | null;
    "SUM_DESC": string | null;
    "PROD_DESC": string | null;
    "INT_DESC": string | null;
    "DER_DESC": string | null;
    "DER_LEFT_DESC": string | null;
    "DER_RIGHT_DESC": string | null;
    "DERN_DESC": string | null;
    "FORW_DIFF_DESC": string | null;
    "BACKW_DIFF_DESC": string | null;
    "AVG_DESC": string | null;
    "VAR_DESC": string | null;
    "STD_DESC": string | null;
    "MIN_DESC": string | null;
    "MAX_DESC": string | null;
    "SOLVE_DESC": string | null;
    readonly "SUM_SINCE": string | null;
    readonly "SUM_SINCE_UNI_1": string | null;
    readonly "SUM_SINCE_UNI_2": string | null;
    readonly "PROD_SINCE": string | null;
    readonly "PROD_SINCE_UNI_1": string | null;
    readonly "PROD_SINCE_UNI_2": string | null;
    readonly "PROD_SINCE_UNI_3": string | null;
    readonly "INT_SINCE": string | null;
    readonly "INT_SINCE_UNI_1": string | null;
    readonly "DER_SINCE": string | null;
    readonly "DER_SINCE_UNI_1": string | null;
    readonly "DER_LEFT_SINCE": string | null;
    readonly "DER_LEFT_SINCE_UNI_1": string | null;
    readonly "DER_RIGHT_SINCE": string | null;
    readonly "DER_RIGHT_SINCE_UNI_1": string | null;
    readonly "DERN_SINCE": string | null;
    readonly "FORW_DIFF_SINCE": string | null;
    readonly "FORW_DIFF_SINCE_UNI_1": string | null;
    readonly "FORW_DIFF_SINCE_UNI_2": string | null;
    readonly "BACKW_DIFF_SINCE": string | null;
    readonly "BACKW_DIFF_SINCE_UNI_1": string | null;
    readonly "AVG_SINCE": string | null;
    readonly "VAR_SINCE": string | null;
    readonly "STD_SINCE": string | null;
    readonly "MIN_SINCE": string | null;
    readonly "MAX_SINCE": string | null;
    readonly "SOLVE_SINCE": string | null;
}

export interface parsertokens_ConstantValueStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "PI_ID": number;
    readonly "EULER_ID": number;
    readonly "EULER_MASCHERONI_ID": number;
    readonly "GOLDEN_RATIO_ID": number;
    readonly "PLASTIC_ID": number;
    readonly "EMBREE_TREFETHEN_ID": number;
    readonly "FEIGENBAUM_DELTA_ID": number;
    readonly "FEIGENBAUM_ALPHA_ID": number;
    readonly "TWIN_PRIME_ID": number;
    readonly "MEISSEL_MERTEENS_ID": number;
    readonly "BRAUN_TWIN_PRIME_ID": number;
    readonly "BRAUN_PRIME_QUADR_ID": number;
    readonly "BRUIJN_NEWMAN_ID": number;
    readonly "CATALAN_ID": number;
    readonly "LANDAU_RAMANUJAN_ID": number;
    readonly "VISWANATH_ID": number;
    readonly "LEGENDRE_ID": number;
    readonly "RAMANUJAN_SOLDNER_ID": number;
    readonly "ERDOS_BORWEIN_ID": number;
    readonly "BERNSTEIN_ID": number;
    readonly "GAUSS_KUZMIN_WIRSING_ID": number;
    readonly "HAFNER_SARNAK_MCCURLEY_ID": number;
    readonly "GOLOMB_DICKMAN_ID": number;
    readonly "CAHEN_ID": number;
    readonly "LAPLACE_LIMIT_ID": number;
    readonly "ALLADI_GRINSTEAD_ID": number;
    readonly "LENGYEL_ID": number;
    readonly "LEVY_ID": number;
    readonly "APERY_ID": number;
    readonly "MILLS_ID": number;
    readonly "BACKHOUSE_ID": number;
    readonly "PORTER_ID": number;
    readonly "LIEB_QUARE_ICE_ID": number;
    readonly "NIVEN_ID": number;
    readonly "SIERPINSKI_ID": number;
    readonly "KHINCHIN_ID": number;
    readonly "FRANSEN_ROBINSON_ID": number;
    readonly "LANDAU_ID": number;
    readonly "PARABOLIC_ID": number;
    readonly "OMEGA_ID": number;
    readonly "MRB_ID": number;
    readonly "LI2_ID": number;
    readonly "GOMPERTZ_ID": number;
    readonly "LIGHT_SPEED_ID": number;
    readonly "GRAVITATIONAL_CONSTANT_ID": number;
    readonly "GRAVIT_ACC_EARTH_ID": number;
    readonly "PLANCK_CONSTANT_ID": number;
    readonly "PLANCK_CONSTANT_REDUCED_ID": number;
    readonly "PLANCK_LENGTH_ID": number;
    readonly "PLANCK_MASS_ID": number;
    readonly "PLANCK_TIME_ID": number;
    readonly "LIGHT_YEAR_ID": number;
    readonly "ASTRONOMICAL_UNIT_ID": number;
    readonly "PARSEC_ID": number;
    readonly "KILOPARSEC_ID": number;
    readonly "EARTH_RADIUS_EQUATORIAL_ID": number;
    readonly "EARTH_RADIUS_POLAR_ID": number;
    readonly "EARTH_RADIUS_MEAN_ID": number;
    readonly "EARTH_MASS_ID": number;
    readonly "EARTH_SEMI_MAJOR_AXIS_ID": number;
    readonly "MOON_RADIUS_MEAN_ID": number;
    readonly "MOON_MASS_ID": number;
    readonly "MONN_SEMI_MAJOR_AXIS_ID": number;
    readonly "SOLAR_RADIUS_ID": number;
    readonly "SOLAR_MASS_ID": number;
    readonly "MERCURY_RADIUS_MEAN_ID": number;
    readonly "MERCURY_MASS_ID": number;
    readonly "MERCURY_SEMI_MAJOR_AXIS_ID": number;
    readonly "VENUS_RADIUS_MEAN_ID": number;
    readonly "VENUS_MASS_ID": number;
    readonly "VENUS_SEMI_MAJOR_AXIS_ID": number;
    readonly "MARS_RADIUS_MEAN_ID": number;
    readonly "MARS_MASS_ID": number;
    readonly "MARS_SEMI_MAJOR_AXIS_ID": number;
    readonly "JUPITER_RADIUS_MEAN_ID": number;
    readonly "JUPITER_MASS_ID": number;
    readonly "JUPITER_SEMI_MAJOR_AXIS_ID": number;
    readonly "SATURN_RADIUS_MEAN_ID": number;
    readonly "SATURN_MASS_ID": number;
    readonly "SATURN_SEMI_MAJOR_AXIS_ID": number;
    readonly "URANUS_RADIUS_MEAN_ID": number;
    readonly "URANUS_MASS_ID": number;
    readonly "URANUS_SEMI_MAJOR_AXIS_ID": number;
    readonly "NEPTUNE_RADIUS_MEAN_ID": number;
    readonly "NEPTUNE_MASS_ID": number;
    readonly "NEPTUNE_SEMI_MAJOR_AXIS_ID": number;
    readonly "TRUE_ID": number;
    readonly "FALSE_ID": number;
    readonly "NPAR_ID": number;
    readonly "NAN_ID": number;
    readonly "NaN": number;
    readonly "PI_STR": string | null;
    readonly "PI_STR_UNI_1": string | null;
    readonly "PI_STR_UNI_2": string | null;
    readonly "EULER_STR": string | null;
    readonly "EULER_STR_UNI_1": string | null;
    readonly "EULER_STR_UNI_2": string | null;
    readonly "EULER_MASCHERONI_STR": string | null;
    readonly "GOLDEN_RATIO_STR": string | null;
    readonly "PLASTIC_STR": string | null;
    readonly "EMBREE_TREFETHEN_STR": string | null;
    readonly "FEIGENBAUM_DELTA_STR": string | null;
    readonly "FEIGENBAUM_ALPHA_STR": string | null;
    readonly "TWIN_PRIME_STR": string | null;
    readonly "MEISSEL_MERTEENS_STR": string | null;
    readonly "BRAUN_TWIN_PRIME_STR": string | null;
    readonly "BRAUN_PRIME_QUADR_STR": string | null;
    readonly "BRUIJN_NEWMAN_STR": string | null;
    readonly "CATALAN_STR": string | null;
    readonly "LANDAU_RAMANUJAN_STR": string | null;
    readonly "VISWANATH_STR": string | null;
    readonly "LEGENDRE_STR": string | null;
    readonly "RAMANUJAN_SOLDNER_STR": string | null;
    readonly "ERDOS_BORWEIN_STR": string | null;
    readonly "BERNSTEIN_STR": string | null;
    readonly "GAUSS_KUZMIN_WIRSING_STR": string | null;
    readonly "HAFNER_SARNAK_MCCURLEY_STR": string | null;
    readonly "GOLOMB_DICKMAN_STR": string | null;
    readonly "CAHEN_STR": string | null;
    readonly "LAPLACE_LIMIT_STR": string | null;
    readonly "ALLADI_GRINSTEAD_STR": string | null;
    readonly "LENGYEL_STR": string | null;
    readonly "LEVY_STR": string | null;
    readonly "APERY_STR": string | null;
    readonly "MILLS_STR": string | null;
    readonly "BACKHOUSE_STR": string | null;
    readonly "PORTER_STR": string | null;
    readonly "LIEB_QUARE_ICE_STR": string | null;
    readonly "NIVEN_STR": string | null;
    readonly "SIERPINSKI_STR": string | null;
    readonly "KHINCHIN_STR": string | null;
    readonly "FRANSEN_ROBINSON_STR": string | null;
    readonly "LANDAU_STR": string | null;
    readonly "PARABOLIC_STR": string | null;
    readonly "OMEGA_STR": string | null;
    readonly "MRB_STR": string | null;
    readonly "LI2_STR": string | null;
    readonly "GOMPERTZ_STR": string | null;
    readonly "LIGHT_SPEED_STR": string | null;
    readonly "GRAVITATIONAL_CONSTANT_STR": string | null;
    readonly "GRAVIT_ACC_EARTH_STR": string | null;
    readonly "PLANCK_CONSTANT_STR": string | null;
    readonly "PLANCK_CONSTANT_REDUCED_STR": string | null;
    readonly "PLANCK_LENGTH_STR": string | null;
    readonly "PLANCK_MASS_STR": string | null;
    readonly "PLANCK_TIME_STR": string | null;
    readonly "LIGHT_YEAR_STR": string | null;
    readonly "ASTRONOMICAL_UNIT_STR": string | null;
    readonly "PARSEC_STR": string | null;
    readonly "KILOPARSEC_STR": string | null;
    readonly "EARTH_RADIUS_EQUATORIAL_STR": string | null;
    readonly "EARTH_RADIUS_POLAR_STR": string | null;
    readonly "EARTH_RADIUS_MEAN_STR": string | null;
    readonly "EARTH_MASS_STR": string | null;
    readonly "EARTH_SEMI_MAJOR_AXIS_STR": string | null;
    readonly "MOON_RADIUS_MEAN_STR": string | null;
    readonly "MOON_MASS_STR": string | null;
    readonly "MONN_SEMI_MAJOR_AXIS_STR": string | null;
    readonly "SOLAR_RADIUS_STR": string | null;
    readonly "SOLAR_MASS_STR": string | null;
    readonly "MERCURY_RADIUS_MEAN_STR": string | null;
    readonly "MERCURY_MASS_STR": string | null;
    readonly "MERCURY_SEMI_MAJOR_AXIS_STR": string | null;
    readonly "VENUS_RADIUS_MEAN_STR": string | null;
    readonly "VENUS_MASS_STR": string | null;
    readonly "VENUS_SEMI_MAJOR_AXIS_STR": string | null;
    readonly "MARS_RADIUS_MEAN_STR": string | null;
    readonly "MARS_MASS_STR": string | null;
    readonly "MARS_SEMI_MAJOR_AXIS_STR": string | null;
    readonly "JUPITER_RADIUS_MEAN_STR": string | null;
    readonly "JUPITER_MASS_STR": string | null;
    readonly "JUPITER_SEMI_MAJOR_AXIS_STR": string | null;
    readonly "SATURN_RADIUS_MEAN_STR": string | null;
    readonly "SATURN_MASS_STR": string | null;
    readonly "SATURN_SEMI_MAJOR_AXIS_STR": string | null;
    readonly "URANUS_RADIUS_MEAN_STR": string | null;
    readonly "URANUS_MASS_STR": string | null;
    readonly "URANUS_SEMI_MAJOR_AXIS_STR": string | null;
    readonly "NEPTUNE_RADIUS_MEAN_STR": string | null;
    readonly "NEPTUNE_MASS_STR": string | null;
    readonly "NEPTUNE_SEMI_MAJOR_AXIS_STR": string | null;
    readonly "TRUE_STR": string | null;
    readonly "FALSE_STR": string | null;
    readonly "NPAR_STR": string | null;
    readonly "NAN_STR": string | null;
    readonly "PI_SYN": string | null;
    readonly "PI_SYN_UNI_1": string | null;
    readonly "PI_SYN_UNI_2": string | null;
    readonly "EULER_SYN": string | null;
    readonly "EULER_SYN_UNI_1": string | null;
    readonly "EULER_SYN_UNI_2": string | null;
    readonly "EULER_MASCHERONI_SYN": string | null;
    readonly "GOLDEN_RATIO_SYN": string | null;
    readonly "PLASTIC_SYN": string | null;
    readonly "EMBREE_TREFETHEN_SYN": string | null;
    readonly "FEIGENBAUM_DELTA_SYN": string | null;
    readonly "FEIGENBAUM_ALPHA_SYN": string | null;
    readonly "TWIN_PRIME_SYN": string | null;
    readonly "MEISSEL_MERTEENS_SYN": string | null;
    readonly "BRAUN_TWIN_PRIME_SYN": string | null;
    readonly "BRAUN_PRIME_QUADR_SYN": string | null;
    readonly "BRUIJN_NEWMAN_SYN": string | null;
    readonly "CATALAN_SYN": string | null;
    readonly "LANDAU_RAMANUJAN_SYN": string | null;
    readonly "VISWANATH_SYN": string | null;
    readonly "LEGENDRE_SYN": string | null;
    readonly "RAMANUJAN_SOLDNER_SYN": string | null;
    readonly "ERDOS_BORWEIN_SYN": string | null;
    readonly "BERNSTEIN_SYN": string | null;
    readonly "GAUSS_KUZMIN_WIRSING_SYN": string | null;
    readonly "HAFNER_SARNAK_MCCURLEY_SYN": string | null;
    readonly "GOLOMB_DICKMAN_SYN": string | null;
    readonly "CAHEN_SYN": string | null;
    readonly "LAPLACE_LIMIT_SYN": string | null;
    readonly "ALLADI_GRINSTEAD_SYN": string | null;
    readonly "LENGYEL_SYN": string | null;
    readonly "LEVY_SYN": string | null;
    readonly "APERY_SYN": string | null;
    readonly "MILLS_SYN": string | null;
    readonly "BACKHOUSE_SYN": string | null;
    readonly "PORTER_SYN": string | null;
    readonly "LIEB_QUARE_ICE_SYN": string | null;
    readonly "NIVEN_SYN": string | null;
    readonly "SIERPINSKI_SYN": string | null;
    readonly "KHINCHIN_SYN": string | null;
    readonly "FRANSEN_ROBINSON_SYN": string | null;
    readonly "LANDAU_SYN": string | null;
    readonly "PARABOLIC_SYN": string | null;
    readonly "OMEGA_SYN": string | null;
    readonly "MRB_SYN": string | null;
    readonly "LI2_SYN": string | null;
    readonly "GOMPERTZ_SYN": string | null;
    readonly "LIGHT_SPEED_SYN": string | null;
    readonly "GRAVITATIONAL_CONSTANT_SYN": string | null;
    readonly "GRAVIT_ACC_EARTH_SYN": string | null;
    readonly "PLANCK_CONSTANT_SYN": string | null;
    readonly "PLANCK_CONSTANT_REDUCED_SYN": string | null;
    readonly "PLANCK_LENGTH_SYN": string | null;
    readonly "PLANCK_MASS_SYN": string | null;
    readonly "PLANCK_TIME_SYN": string | null;
    readonly "LIGHT_YEAR_SYN": string | null;
    readonly "ASTRONOMICAL_UNIT_SYN": string | null;
    readonly "PARSEC_SYN": string | null;
    readonly "KILOPARSEC_SYN": string | null;
    readonly "EARTH_RADIUS_EQUATORIAL_SYN": string | null;
    readonly "EARTH_RADIUS_POLAR_SYN": string | null;
    readonly "EARTH_RADIUS_MEAN_SYN": string | null;
    readonly "EARTH_MASS_SYN": string | null;
    readonly "EARTH_SEMI_MAJOR_AXIS_SYN": string | null;
    readonly "MOON_RADIUS_MEAN_SYN": string | null;
    readonly "MOON_MASS_SYN": string | null;
    readonly "MONN_SEMI_MAJOR_AXIS_SYN": string | null;
    readonly "SOLAR_RADIUS_SYN": string | null;
    readonly "SOLAR_MASS_SYN": string | null;
    readonly "MERCURY_RADIUS_MEAN_SYN": string | null;
    readonly "MERCURY_MASS_SYN": string | null;
    readonly "MERCURY_SEMI_MAJOR_AXIS_SYN": string | null;
    readonly "VENUS_RADIUS_MEAN_SYN": string | null;
    readonly "VENUS_MASS_SYN": string | null;
    readonly "VENUS_SEMI_MAJOR_AXIS_SYN": string | null;
    readonly "MARS_RADIUS_MEAN_SYN": string | null;
    readonly "MARS_MASS_SYN": string | null;
    readonly "MARS_SEMI_MAJOR_AXIS_SYN": string | null;
    readonly "JUPITER_RADIUS_MEAN_SYN": string | null;
    readonly "JUPITER_MASS_SYN": string | null;
    readonly "JUPITER_SEMI_MAJOR_AXIS_SYN": string | null;
    readonly "SATURN_RADIUS_MEAN_SYN": string | null;
    readonly "SATURN_MASS_SYN": string | null;
    readonly "SATURN_SEMI_MAJOR_AXIS_SYN": string | null;
    readonly "URANUS_RADIUS_MEAN_SYN": string | null;
    readonly "URANUS_MASS_SYN": string | null;
    readonly "URANUS_SEMI_MAJOR_AXIS_SYN": string | null;
    readonly "NEPTUNE_RADIUS_MEAN_SYN": string | null;
    readonly "NEPTUNE_MASS_SYN": string | null;
    readonly "NEPTUNE_SEMI_MAJOR_AXIS_SYN": string | null;
    readonly "TRUE_SYN": string | null;
    readonly "FALSE_SYN": string | null;
    readonly "NPAR_SYN": string | null;
    readonly "NAN_SYN": string | null;
    "PI_DESC": string | null;
    "EULER_DESC": string | null;
    "EULER_MASCHERONI_DESC": string | null;
    "GOLDEN_RATIO_DESC": string | null;
    "PLASTIC_DESC": string | null;
    "EMBREE_TREFETHEN_DESC": string | null;
    "FEIGENBAUM_DELTA_DESC": string | null;
    "FEIGENBAUM_ALPHA_DESC": string | null;
    "TWIN_PRIME_DESC": string | null;
    "MEISSEL_MERTEENS_DESC": string | null;
    "BRAUN_TWIN_PRIME_DESC": string | null;
    "BRAUN_PRIME_QUADR_DESC": string | null;
    "BRUIJN_NEWMAN_DESC": string | null;
    "CATALAN_DESC": string | null;
    "LANDAU_RAMANUJAN_DESC": string | null;
    "VISWANATH_DESC": string | null;
    "LEGENDRE_DESC": string | null;
    "RAMANUJAN_SOLDNER_DESC": string | null;
    "ERDOS_BORWEIN_DESC": string | null;
    "BERNSTEIN_DESC": string | null;
    "GAUSS_KUZMIN_WIRSING_DESC": string | null;
    "HAFNER_SARNAK_MCCURLEY_DESC": string | null;
    "GOLOMB_DICKMAN_DESC": string | null;
    "CAHEN_DESC": string | null;
    "LAPLACE_LIMIT_DESC": string | null;
    "ALLADI_GRINSTEAD_DESC": string | null;
    "LENGYEL_DESC": string | null;
    "LEVY_DESC": string | null;
    "APERY_DESC": string | null;
    "MILLS_DESC": string | null;
    "BACKHOUSE_DESC": string | null;
    "PORTER_DESC": string | null;
    "LIEB_QUARE_ICE_DESC": string | null;
    "NIVEN_DESC": string | null;
    "SIERPINSKI_DESC": string | null;
    "KHINCHIN_DESC": string | null;
    "FRANSEN_ROBINSON_DESC": string | null;
    "LANDAU_DESC": string | null;
    "PARABOLIC_DESC": string | null;
    "OMEGA_DESC": string | null;
    "MRB_DESC": string | null;
    "LI2_DESC": string | null;
    "GOMPERTZ_DESC": string | null;
    "LIGHT_SPEED_DESC": string | null;
    "GRAVITATIONAL_CONSTANT_DESC": string | null;
    "GRAVIT_ACC_EARTH_DESC": string | null;
    "PLANCK_CONSTANT_DESC": string | null;
    "PLANCK_CONSTANT_REDUCED_DESC": string | null;
    "PLANCK_LENGTH_DESC": string | null;
    "PLANCK_MASS_DESC": string | null;
    "PLANCK_TIME_DESC": string | null;
    "LIGHT_YEAR_DESC": string | null;
    "ASTRONOMICAL_UNIT_DESC": string | null;
    "PARSEC_DESC": string | null;
    "KILOPARSEC_DESC": string | null;
    "EARTH_RADIUS_EQUATORIAL_DESC": string | null;
    "EARTH_RADIUS_POLAR_DESC": string | null;
    "EARTH_RADIUS_MEAN_DESC": string | null;
    "EARTH_MASS_DESC": string | null;
    "EARTH_SEMI_MAJOR_AXIS_DESC": string | null;
    "MOON_RADIUS_MEAN_DESC": string | null;
    "MOON_MASS_DESC": string | null;
    "MOON_SEMI_MAJOR_AXIS_DESC": string | null;
    "SOLAR_RADIUS_DESC": string | null;
    "SOLAR_MASS_DESC": string | null;
    "MERCURY_RADIUS_MEAN_DESC": string | null;
    "MERCURY_MASS_DESC": string | null;
    "MERCURY_SEMI_MAJOR_AXIS_DESC": string | null;
    "VENUS_RADIUS_MEAN_DESC": string | null;
    "VENUS_MASS_DESC": string | null;
    "VENUS_SEMI_MAJOR_AXIS_DESC": string | null;
    "MARS_RADIUS_MEAN_DESC": string | null;
    "MARS_MASS_DESC": string | null;
    "MARS_SEMI_MAJOR_AXIS_DESC": string | null;
    "JUPITER_RADIUS_MEAN_DESC": string | null;
    "JUPITER_MASS_DESC": string | null;
    "JUPITER_SEMI_MAJOR_AXIS_DESC": string | null;
    "SATURN_RADIUS_MEAN_DESC": string | null;
    "SATURN_MASS_DESC": string | null;
    "SATURN_SEMI_MAJOR_AXIS_DESC": string | null;
    "URANUS_RADIUS_MEAN_DESC": string | null;
    "URANUS_MASS_DESC": string | null;
    "URANUS_SEMI_MAJOR_AXIS_DESC": string | null;
    "NEPTUNE_RADIUS_MEAN_DESC": string | null;
    "NEPTUNE_MASS_DESC": string | null;
    "NEPTUNE_SEMI_MAJOR_AXIS_DESC": string | null;
    "TRUE_DESC": string | null;
    "FALSE_DESC": string | null;
    "NPAR_DESC": string | null;
    "NAN_DESC": string | null;
    readonly "PI_SINCE": string | null;
    readonly "PI_SINCE_UNI_1": string | null;
    readonly "PI_SINCE_UNI_2": string | null;
    readonly "EULER_SINCE": string | null;
    readonly "EULER_SINCE_UNI_1": string | null;
    readonly "EULER_SINCE_UNI_2": string | null;
    readonly "EULER_MASCHERONI_SINCE": string | null;
    readonly "GOLDEN_RATIO_SINCE": string | null;
    readonly "PLASTIC_SINCE": string | null;
    readonly "EMBREE_TREFETHEN_SINCE": string | null;
    readonly "FEIGENBAUM_DELTA_SINCE": string | null;
    readonly "FEIGENBAUM_ALPHA_SINCE": string | null;
    readonly "TWIN_PRIME_SINCE": string | null;
    readonly "MEISSEL_MERTEENS_SINCE": string | null;
    readonly "BRAUN_TWIN_PRIME_SINCE": string | null;
    readonly "BRAUN_PRIME_QUADR_SINCE": string | null;
    readonly "BRUIJN_NEWMAN_SINCE": string | null;
    readonly "CATALAN_SINCE": string | null;
    readonly "LANDAU_RAMANUJAN_SINCE": string | null;
    readonly "VISWANATH_SINCE": string | null;
    readonly "LEGENDRE_SINCE": string | null;
    readonly "RAMANUJAN_SOLDNER_SINCE": string | null;
    readonly "ERDOS_BORWEIN_SINCE": string | null;
    readonly "BERNSTEIN_SINCE": string | null;
    readonly "GAUSS_KUZMIN_WIRSING_SINCE": string | null;
    readonly "HAFNER_SARNAK_MCCURLEY_SINCE": string | null;
    readonly "GOLOMB_DICKMAN_SINCE": string | null;
    readonly "CAHEN_SINCE": string | null;
    readonly "LAPLACE_LIMIT_SINCE": string | null;
    readonly "ALLADI_GRINSTEAD_SINCE": string | null;
    readonly "LENGYEL_SINCE": string | null;
    readonly "LEVY_SINCE": string | null;
    readonly "APERY_SINCE": string | null;
    readonly "MILLS_SINCE": string | null;
    readonly "BACKHOUSE_SINCE": string | null;
    readonly "PORTER_SINCE": string | null;
    readonly "LIEB_QUARE_ICE_SINCE": string | null;
    readonly "NIVEN_SINCE": string | null;
    readonly "SIERPINSKI_SINCE": string | null;
    readonly "KHINCHIN_SINCE": string | null;
    readonly "FRANSEN_ROBINSON_SINCE": string | null;
    readonly "LANDAU_SINCE": string | null;
    readonly "PARABOLIC_SINCE": string | null;
    readonly "OMEGA_SINCE": string | null;
    readonly "MRB_SINCE": string | null;
    readonly "LI2_SINCE": string | null;
    readonly "GOMPERTZ_SINCE": string | null;
    readonly "LIGHT_SPEED_SINCE": string | null;
    readonly "GRAVITATIONAL_CONSTANT_SINCE": string | null;
    readonly "GRAVIT_ACC_EARTH_SINCE": string | null;
    readonly "PLANCK_CONSTANT_SINCE": string | null;
    readonly "PLANCK_CONSTANT_REDUCED_SINCE": string | null;
    readonly "PLANCK_LENGTH_SINCE": string | null;
    readonly "PLANCK_MASS_SINCE": string | null;
    readonly "PLANCK_TIME_SINCE": string | null;
    readonly "LIGHT_YEAR_SINCE": string | null;
    readonly "ASTRONOMICAL_UNIT_SINCE": string | null;
    readonly "PARSEC_SINCE": string | null;
    readonly "KILOPARSEC_SINCE": string | null;
    readonly "EARTH_RADIUS_EQUATORIAL_SINCE": string | null;
    readonly "EARTH_RADIUS_POLAR_SINCE": string | null;
    readonly "EARTH_RADIUS_MEAN_SINCE": string | null;
    readonly "EARTH_MASS_SINCE": string | null;
    readonly "EARTH_SEMI_MAJOR_AXIS_SINCE": string | null;
    readonly "MOON_RADIUS_MEAN_SINCE": string | null;
    readonly "MOON_MASS_SINCE": string | null;
    readonly "MONN_SEMI_MAJOR_AXIS_SINCE": string | null;
    readonly "SOLAR_RADIUS_SINCE": string | null;
    readonly "SOLAR_MASS_SINCE": string | null;
    readonly "MERCURY_RADIUS_MEAN_SINCE": string | null;
    readonly "MERCURY_MASS_SINCE": string | null;
    readonly "MERCURY_SEMI_MAJOR_AXIS_SINCE": string | null;
    readonly "VENUS_RADIUS_MEAN_SINCE": string | null;
    readonly "VENUS_MASS_SINCE": string | null;
    readonly "VENUS_SEMI_MAJOR_AXIS_SINCE": string | null;
    readonly "MARS_RADIUS_MEAN_SINCE": string | null;
    readonly "MARS_MASS_SINCE": string | null;
    readonly "MARS_SEMI_MAJOR_AXIS_SINCE": string | null;
    readonly "JUPITER_RADIUS_MEAN_SINCE": string | null;
    readonly "JUPITER_MASS_SINCE": string | null;
    readonly "JUPITER_SEMI_MAJOR_AXIS_SINCE": string | null;
    readonly "SATURN_RADIUS_MEAN_SINCE": string | null;
    readonly "SATURN_MASS_SINCE": string | null;
    readonly "SATURN_SEMI_MAJOR_AXIS_SINCE": string | null;
    readonly "URANUS_RADIUS_MEAN_SINCE": string | null;
    readonly "URANUS_MASS_SINCE": string | null;
    readonly "URANUS_SEMI_MAJOR_AXIS_SINCE": string | null;
    readonly "NEPTUNE_RADIUS_MEAN_SINCE": string | null;
    readonly "NEPTUNE_MASS_SINCE": string | null;
    readonly "NEPTUNE_SEMI_MAJOR_AXIS_SINCE": string | null;
    readonly "TRUE_SINCE": string | null;
    readonly "FALSE_SINCE": string | null;
    readonly "NPAR_SINCE": string | null;
    readonly "NAN_SINCE": string | null;
}

export interface parsertokens_Function1ArgStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "SIN_ID": number;
    readonly "COS_ID": number;
    readonly "TAN_ID": number;
    readonly "CTAN_ID": number;
    readonly "SEC_ID": number;
    readonly "COSEC_ID": number;
    readonly "ASIN_ID": number;
    readonly "ACOS_ID": number;
    readonly "ATAN_ID": number;
    readonly "ACTAN_ID": number;
    readonly "LN_ID": number;
    readonly "LOG2_ID": number;
    readonly "LOG10_ID": number;
    readonly "RAD_ID": number;
    readonly "EXP_ID": number;
    readonly "SQRT_ID": number;
    readonly "SINH_ID": number;
    readonly "COSH_ID": number;
    readonly "TANH_ID": number;
    readonly "COTH_ID": number;
    readonly "SECH_ID": number;
    readonly "CSCH_ID": number;
    readonly "DEG_ID": number;
    readonly "ABS_ID": number;
    readonly "SGN_ID": number;
    readonly "FLOOR_ID": number;
    readonly "CEIL_ID": number;
    readonly "NOT_ID": number;
    readonly "ARSINH_ID": number;
    readonly "ARCOSH_ID": number;
    readonly "ARTANH_ID": number;
    readonly "ARCOTH_ID": number;
    readonly "ARSECH_ID": number;
    readonly "ARCSCH_ID": number;
    readonly "SA_ID": number;
    readonly "SINC_ID": number;
    readonly "BELL_NUMBER_ID": number;
    readonly "LUCAS_NUMBER_ID": number;
    readonly "FIBONACCI_NUMBER_ID": number;
    readonly "HARMONIC_NUMBER_ID": number;
    readonly "IS_PRIME_ID": number;
    readonly "PRIME_COUNT_ID": number;
    readonly "EXP_INT_ID": number;
    readonly "LOG_INT_ID": number;
    readonly "OFF_LOG_INT_ID": number;
    readonly "GAUSS_ERF_ID": number;
    readonly "GAUSS_ERFC_ID": number;
    readonly "GAUSS_ERF_INV_ID": number;
    readonly "GAUSS_ERFC_INV_ID": number;
    readonly "ULP_ID": number;
    readonly "ISNAN_ID": number;
    readonly "NDIG10_ID": number;
    readonly "NFACT_ID": number;
    readonly "ARCSEC_ID": number;
    readonly "ARCCSC_ID": number;
    readonly "GAMMA_ID": number;
    readonly "LAMBERT_W0_ID": number;
    readonly "LAMBERT_W1_ID": number;
    readonly "SGN_GAMMA_ID": number;
    readonly "LOG_GAMMA_ID": number;
    readonly "DI_GAMMA_ID": number;
    readonly "PARAM_ID": number;
    readonly "RND_STUDENT_T_ID": number;
    readonly "RND_CHI2_ID": number;
    readonly "SIN_STR": string | null;
    readonly "COS_STR": string | null;
    readonly "TAN_STR": string | null;
    readonly "TG_STR": string | null;
    readonly "CTAN_STR": string | null;
    readonly "CTG_STR": string | null;
    readonly "COT_STR": string | null;
    readonly "SEC_STR": string | null;
    readonly "COSEC_STR": string | null;
    readonly "CSC_STR": string | null;
    readonly "ASIN_STR": string | null;
    readonly "ARSIN_STR": string | null;
    readonly "ARCSIN_STR": string | null;
    readonly "ACOS_STR": string | null;
    readonly "ARCOS_STR": string | null;
    readonly "ARCCOS_STR": string | null;
    readonly "ATAN_STR": string | null;
    readonly "ARCTAN_STR": string | null;
    readonly "ATG_STR": string | null;
    readonly "ARCTG_STR": string | null;
    readonly "ACTAN_STR": string | null;
    readonly "ARCCTAN_STR": string | null;
    readonly "ACTG_STR": string | null;
    readonly "ARCCTG_STR": string | null;
    readonly "ACOT_STR": string | null;
    readonly "ARCCOT_STR": string | null;
    readonly "LN_STR": string | null;
    readonly "LOG2_STR": string | null;
    readonly "LOG10_STR": string | null;
    readonly "LOG10_STR_LG": string | null;
    readonly "RAD_STR": string | null;
    readonly "EXP_STR": string | null;
    readonly "SQRT_STR": string | null;
    readonly "SINH_STR": string | null;
    readonly "COSH_STR": string | null;
    readonly "TANH_STR": string | null;
    readonly "TGH_STR": string | null;
    readonly "CTANH_STR": string | null;
    readonly "COTH_STR": string | null;
    readonly "CTGH_STR": string | null;
    readonly "SECH_STR": string | null;
    readonly "CSCH_STR": string | null;
    readonly "COSECH_STR": string | null;
    readonly "DEG_STR": string | null;
    readonly "ABS_STR": string | null;
    readonly "SGN_STR": string | null;
    readonly "FLOOR_STR": string | null;
    readonly "CEIL_STR": string | null;
    readonly "NOT_STR": string | null;
    readonly "ASINH_STR": string | null;
    readonly "ARSINH_STR": string | null;
    readonly "ARCSINH_STR": string | null;
    readonly "ACOSH_STR": string | null;
    readonly "ARCOSH_STR": string | null;
    readonly "ARCCOSH_STR": string | null;
    readonly "ATANH_STR": string | null;
    readonly "ARCTANH_STR": string | null;
    readonly "ATGH_STR": string | null;
    readonly "ARCTGH_STR": string | null;
    readonly "ACTANH_STR": string | null;
    readonly "ARCCTANH_STR": string | null;
    readonly "ACOTH_STR": string | null;
    readonly "ARCOTH_STR": string | null;
    readonly "ARCCOTH_STR": string | null;
    readonly "ACTGH_STR": string | null;
    readonly "ARCCTGH_STR": string | null;
    readonly "ASECH_STR": string | null;
    readonly "ARSECH_STR": string | null;
    readonly "ARCSECH_STR": string | null;
    readonly "ACSCH_STR": string | null;
    readonly "ARCSCH_STR": string | null;
    readonly "ARCCSCH_STR": string | null;
    readonly "ACOSECH_STR": string | null;
    readonly "ARCOSECH_STR": string | null;
    readonly "ARCCOSECH_STR": string | null;
    readonly "SA_STR": string | null;
    readonly "SA1_STR": string | null;
    readonly "SINC_STR": string | null;
    readonly "BELL_NUMBER_STR": string | null;
    readonly "LUCAS_NUMBER_STR": string | null;
    readonly "FIBONACCI_NUMBER_STR": string | null;
    readonly "HARMONIC_NUMBER_STR": string | null;
    readonly "IS_PRIME_STR": string | null;
    readonly "PRIME_COUNT_STR": string | null;
    readonly "EXP_INT_STR": string | null;
    readonly "LOG_INT_STR": string | null;
    readonly "OFF_LOG_INT_STR": string | null;
    readonly "GAUSS_ERF_STR": string | null;
    readonly "GAUSS_ERFC_STR": string | null;
    readonly "GAUSS_ERF_INV_STR": string | null;
    readonly "GAUSS_ERFC_INV_STR": string | null;
    readonly "ULP_STR": string | null;
    readonly "ISNAN_STR": string | null;
    readonly "NDIG10_STR": string | null;
    readonly "NFACT_STR": string | null;
    readonly "ARCSEC_STR": string | null;
    readonly "ARCCSC_STR": string | null;
    readonly "GAMMA_STR": string | null;
    readonly "LAMBERT_W0_STR": string | null;
    readonly "LAMBERT_W1_STR": string | null;
    readonly "SGN_GAMMA_STR": string | null;
    readonly "LOG_GAMMA_STR": string | null;
    readonly "DI_GAMMA_STR": string | null;
    readonly "PARAM_STR": string | null;
    readonly "RND_STUDENT_T_STR": string | null;
    readonly "RND_CHI2_STR": string | null;
    readonly "SIN_SYN": string | null;
    readonly "COS_SYN": string | null;
    readonly "TAN_SYN": string | null;
    readonly "TG_SYN": string | null;
    readonly "CTAN_SYN": string | null;
    readonly "CTG_SYN": string | null;
    readonly "COT_SYN": string | null;
    readonly "SEC_SYN": string | null;
    readonly "COSEC_SYN": string | null;
    readonly "CSC_SYN": string | null;
    readonly "ASIN_SYN": string | null;
    readonly "ARSIN_SYN": string | null;
    readonly "ARCSIN_SYN": string | null;
    readonly "ACOS_SYN": string | null;
    readonly "ARCOS_SYN": string | null;
    readonly "ARCCOS_SYN": string | null;
    readonly "ATAN_SYN": string | null;
    readonly "ARCTAN_SYN": string | null;
    readonly "ATG_SYN": string | null;
    readonly "ARCTG_SYN": string | null;
    readonly "ACTAN_SYN": string | null;
    readonly "ARCCTAN_SYN": string | null;
    readonly "ACTG_SYN": string | null;
    readonly "ARCCTG_SYN": string | null;
    readonly "ACOT_SYN": string | null;
    readonly "ARCCOT_SYN": string | null;
    readonly "LN_SYN": string | null;
    readonly "LOG2_SYN": string | null;
    readonly "LOG10_SYN": string | null;
    readonly "LOG10_SYN_LG": string | null;
    readonly "RAD_SYN": string | null;
    readonly "EXP_SYN": string | null;
    readonly "SQRT_SYN": string | null;
    readonly "SINH_SYN": string | null;
    readonly "COSH_SYN": string | null;
    readonly "TANH_SYN": string | null;
    readonly "TGH_SYN": string | null;
    readonly "CTANH_SYN": string | null;
    readonly "COTH_SYN": string | null;
    readonly "CTGH_SYN": string | null;
    readonly "SECH_SYN": string | null;
    readonly "CSCH_SYN": string | null;
    readonly "COSECH_SYN": string | null;
    readonly "DEG_SYN": string | null;
    readonly "ABS_SYN": string | null;
    readonly "SGN_SYN": string | null;
    readonly "FLOOR_SYN": string | null;
    readonly "CEIL_SYN": string | null;
    readonly "NOT_SYN": string | null;
    readonly "ASINH_SYN": string | null;
    readonly "ARSINH_SYN": string | null;
    readonly "ARCSINH_SYN": string | null;
    readonly "ACOSH_SYN": string | null;
    readonly "ARCOSH_SYN": string | null;
    readonly "ARCCOSH_SYN": string | null;
    readonly "ATANH_SYN": string | null;
    readonly "ARCTANH_SYN": string | null;
    readonly "ATGH_SYN": string | null;
    readonly "ARCTGH_SYN": string | null;
    readonly "ACTANH_SYN": string | null;
    readonly "ARCCTANH_SYN": string | null;
    readonly "ACOTH_SYN": string | null;
    readonly "ARCOTH_SYN": string | null;
    readonly "ARCCOTH_SYN": string | null;
    readonly "ACTGH_SYN": string | null;
    readonly "ARCCTGH_SYN": string | null;
    readonly "ASECH_SYN": string | null;
    readonly "ARSECH_SYN": string | null;
    readonly "ARCSECH_SYN": string | null;
    readonly "ACSCH_SYN": string | null;
    readonly "ARCSCH_SYN": string | null;
    readonly "ARCCSCH_SYN": string | null;
    readonly "ACOSECH_SYN": string | null;
    readonly "ARCOSECH_SYN": string | null;
    readonly "ARCCOSECH_SYN": string | null;
    readonly "SA_SYN": string | null;
    readonly "SA1_SYN": string | null;
    readonly "SINC_SYN": string | null;
    readonly "BELL_NUMBER_SYN": string | null;
    readonly "LUCAS_NUMBER_SYN": string | null;
    readonly "FIBONACCI_NUMBER_SYN": string | null;
    readonly "HARMONIC_NUMBER_SYN": string | null;
    readonly "IS_PRIME_SYN": string | null;
    readonly "PRIME_COUNT_SYN": string | null;
    readonly "EXP_INT_SYN": string | null;
    readonly "LOG_INT_SYN": string | null;
    readonly "OFF_LOG_INT_SYN": string | null;
    readonly "GAUSS_ERF_SYN": string | null;
    readonly "GAUSS_ERFC_SYN": string | null;
    readonly "GAUSS_ERF_INV_SYN": string | null;
    readonly "GAUSS_ERFC_INV_SYN": string | null;
    readonly "ULP_SYN": string | null;
    readonly "ISNAN_SYN": string | null;
    readonly "NDIG10_SYN": string | null;
    readonly "NFACT_SYN": string | null;
    readonly "ARCSEC_SYN": string | null;
    readonly "ARCCSC_SYN": string | null;
    readonly "GAMMA_SYN": string | null;
    readonly "LAMBERT_W0_SYN": string | null;
    readonly "LAMBERT_W1_SYN": string | null;
    readonly "SGN_GAMMA_SYN": string | null;
    readonly "LOG_GAMMA_SYN": string | null;
    readonly "DI_GAMMA_SYN": string | null;
    readonly "PARAM_SYN": string | null;
    readonly "RND_STUDENT_T_SYN": string | null;
    readonly "RND_CHI2_SYN": string | null;
    "SIN_DESC": string | null;
    "COS_DESC": string | null;
    "TAN_DESC": string | null;
    "CTAN_DESC": string | null;
    "SEC_DESC": string | null;
    "COSEC_DESC": string | null;
    "ASIN_DESC": string | null;
    "ACOS_DESC": string | null;
    "ATAN_DESC": string | null;
    "ACTAN_DESC": string | null;
    "LN_DESC": string | null;
    "LOG2_DESC": string | null;
    "LOG10_DESC": string | null;
    "RAD_DESC": string | null;
    "EXP_DESC": string | null;
    "SQRT_DESC": string | null;
    "SINH_DESC": string | null;
    "COSH_DESC": string | null;
    "TANH_DESC": string | null;
    "COTH_DESC": string | null;
    "SECH_DESC": string | null;
    "CSCH_DESC": string | null;
    "DEG_DESC": string | null;
    "ABS_DESC": string | null;
    "SGN_DESC": string | null;
    "FLOOR_DESC": string | null;
    "CEIL_DESC": string | null;
    "NOT_DESC": string | null;
    "ARSINH_DESC": string | null;
    "ARCOSH_DESC": string | null;
    "ARTANH_DESC": string | null;
    "ARCOTH_DESC": string | null;
    "ARSECH_DESC": string | null;
    "ARCSCH_DESC": string | null;
    "SA_DESC": string | null;
    "SINC_DESC": string | null;
    "BELL_NUMBER_DESC": string | null;
    "LUCAS_NUMBER_DESC": string | null;
    "FIBONACCI_NUMBER_DESC": string | null;
    "HARMONIC_NUMBER_DESC": string | null;
    "IS_PRIME_DESC": string | null;
    "PRIME_COUNT_DESC": string | null;
    "EXP_INT_DESC": string | null;
    "LOG_INT_DESC": string | null;
    "OFF_LOG_INT_DESC": string | null;
    "GAUSS_ERF_DESC": string | null;
    "GAUSS_ERFC_DESC": string | null;
    "GAUSS_ERF_INV_DESC": string | null;
    "GAUSS_ERFC_INV_DESC": string | null;
    "ULP_DESC": string | null;
    "ISNAN_DESC": string | null;
    "NDIG10_DESC": string | null;
    "NFACT_DESC": string | null;
    "ARCSEC_DESC": string | null;
    "ARCCSC_DESC": string | null;
    "GAMMA_DESC": string | null;
    "LAMBERT_W0_DESC": string | null;
    "LAMBERT_W1_DESC": string | null;
    "SGN_GAMMA_DESC": string | null;
    "LOG_GAMMA_DESC": string | null;
    "DI_GAMMA_DESC": string | null;
    "PARAM_DESC": string | null;
    "RND_STUDENT_T_DESC": string | null;
    "RND_CHI2_DESC": string | null;
    readonly "SIN_SINCE": string | null;
    readonly "COS_SINCE": string | null;
    readonly "TAN_SINCE": string | null;
    readonly "CTAN_SINCE": string | null;
    readonly "SEC_SINCE": string | null;
    readonly "COSEC_SINCE": string | null;
    readonly "ASIN_SINCE": string | null;
    readonly "ACOS_SINCE": string | null;
    readonly "ATAN_SINCE": string | null;
    readonly "ACTAN_SINCE": string | null;
    readonly "LN_SINCE": string | null;
    readonly "LOG2_SINCE": string | null;
    readonly "LOG10_SINCE": string | null;
    readonly "LOG10_SINCE_LG": string | null;
    readonly "RAD_SINCE": string | null;
    readonly "EXP_SINCE": string | null;
    readonly "SQRT_SINCE": string | null;
    readonly "SINH_SINCE": string | null;
    readonly "COSH_SINCE": string | null;
    readonly "TANH_SINCE": string | null;
    readonly "COTH_SINCE": string | null;
    readonly "SECH_SINCE": string | null;
    readonly "CSCH_SINCE": string | null;
    readonly "DEG_SINCE": string | null;
    readonly "ABS_SINCE": string | null;
    readonly "SGN_SINCE": string | null;
    readonly "FLOOR_SINCE": string | null;
    readonly "CEIL_SINCE": string | null;
    readonly "NOT_SINCE": string | null;
    readonly "ARSINH_SINCE": string | null;
    readonly "ARCOSH_SINCE": string | null;
    readonly "ARTANH_SINCE": string | null;
    readonly "ARCOTH_SINCE": string | null;
    readonly "ARSECH_SINCE": string | null;
    readonly "ARCSCH_SINCE": string | null;
    readonly "SA_SINCE": string | null;
    readonly "SINC_SINCE": string | null;
    readonly "BELL_NUMBER_SINCE": string | null;
    readonly "LUCAS_NUMBER_SINCE": string | null;
    readonly "FIBONACCI_NUMBER_SINCE": string | null;
    readonly "HARMONIC_NUMBER_SINCE": string | null;
    readonly "IS_PRIME_SINCE": string | null;
    readonly "PRIME_COUNT_SINCE": string | null;
    readonly "EXP_INT_SINCE": string | null;
    readonly "LOG_INT_SINCE": string | null;
    readonly "OFF_LOG_INT_SINCE": string | null;
    readonly "GAUSS_ERF_SINCE": string | null;
    readonly "GAUSS_ERFC_SINCE": string | null;
    readonly "GAUSS_ERF_INV_SINCE": string | null;
    readonly "GAUSS_ERFC_INV_SINCE": string | null;
    readonly "ULP_SINCE": string | null;
    readonly "ISNAN_SINCE": string | null;
    readonly "NDIG10_SINCE": string | null;
    readonly "NFACT_SINCE": string | null;
    readonly "ARCSEC_SINCE": string | null;
    readonly "ARCCSC_SINCE": string | null;
    readonly "GAMMA_SINCE": string | null;
    readonly "LAMBERT_W0_SINCE": string | null;
    readonly "LAMBERT_W1_SINCE": string | null;
    readonly "SGN_GAMMA_SINCE": string | null;
    readonly "LOG_GAMMA_SINCE": string | null;
    readonly "DI_GAMMA_SINCE": string | null;
    readonly "PARAM_SINCE": string | null;
    readonly "RND_STUDENT_T_SINCE": string | null;
    readonly "RND_CHI2_SINCE": string | null;
}

export interface parsertokens_Function2ArgStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "LOG_ID": number;
    readonly "MOD_ID": number;
    readonly "BINOM_COEFF_ID": number;
    readonly "BERNOULLI_NUMBER_ID": number;
    readonly "STIRLING1_NUMBER_ID": number;
    readonly "STIRLING2_NUMBER_ID": number;
    readonly "WORPITZKY_NUMBER_ID": number;
    readonly "EULER_NUMBER_ID": number;
    readonly "KRONECKER_DELTA_ID": number;
    readonly "EULER_POLYNOMIAL_ID": number;
    readonly "HARMONIC_NUMBER_ID": number;
    readonly "RND_UNIFORM_CONT_ID": number;
    readonly "RND_UNIFORM_DISCR_ID": number;
    readonly "ROUND_ID": number;
    readonly "RND_NORMAL_ID": number;
    readonly "NDIG_ID": number;
    readonly "DIGIT10_ID": number;
    readonly "FACTVAL_ID": number;
    readonly "FACTEXP_ID": number;
    readonly "ROOT_ID": number;
    readonly "INC_GAMMA_LOWER_ID": number;
    readonly "INC_GAMMA_UPPER_ID": number;
    readonly "REG_GAMMA_LOWER_ID": number;
    readonly "REG_GAMMA_UPPER_ID": number;
    readonly "PERMUTATIONS_ID": number;
    readonly "BETA_ID": number;
    readonly "LOG_BETA_ID": number;
    readonly "PDF_STUDENT_T_ID": number;
    readonly "CDF_STUDENT_T_ID": number;
    readonly "QNT_STUDENT_T_ID": number;
    readonly "PDF_CHI2_ID": number;
    readonly "CDF_CHI2_ID": number;
    readonly "QNT_CHI2_ID": number;
    readonly "RND_F_SNEDECOR_ID": number;
    readonly "LOG_STR": string | null;
    readonly "MOD_STR": string | null;
    readonly "BINOM_COEFF_STR": string | null;
    readonly "BINOM_COEFF_NCK_STR": string | null;
    readonly "BERNOULLI_NUMBER_STR": string | null;
    readonly "STIRLING1_NUMBER_STR": string | null;
    readonly "STIRLING2_NUMBER_STR": string | null;
    readonly "WORPITZKY_NUMBER_STR": string | null;
    readonly "EULER_NUMBER_STR": string | null;
    readonly "KRONECKER_DELTA_STR": string | null;
    readonly "EULER_POLYNOMIAL_STR": string | null;
    readonly "HARMONIC_NUMBER_STR": string | null;
    readonly "RND_UNIFORM_CONT_STR": string | null;
    readonly "RND_UNIFORM_DISCR_STR": string | null;
    readonly "ROUND_STR": string | null;
    readonly "RND_NORMAL_STR": string | null;
    readonly "NDIG_STR": string | null;
    readonly "DIGIT10_STR": string | null;
    readonly "FACTVAL_STR": string | null;
    readonly "FACTEXP_STR": string | null;
    readonly "ROOT_STR": string | null;
    readonly "INC_GAMMA_LOWER_STR": string | null;
    readonly "INC_GAMMA_UPPER_STR": string | null;
    readonly "REG_GAMMA_LOWER_STR": string | null;
    readonly "REG_GAMMA_UPPER_STR": string | null;
    readonly "REG_GAMMA_LOWER_P_STR": string | null;
    readonly "REG_GAMMA_UPPER_Q_STR": string | null;
    readonly "PERMUTATIONS_STR": string | null;
    readonly "BETA_STR": string | null;
    readonly "LOG_BETA_STR": string | null;
    readonly "PDF_STUDENT_T_STR": string | null;
    readonly "CDF_STUDENT_T_STR": string | null;
    readonly "QNT_STUDENT_T_STR": string | null;
    readonly "PDF_CHI2_STR": string | null;
    readonly "CDF_CHI2_STR": string | null;
    readonly "QNT_CHI2_STR": string | null;
    readonly "RND_F_SNEDECOR_STR": string | null;
    readonly "LOG_SYN": string | null;
    readonly "MOD_SYN": string | null;
    readonly "BINOM_COEFF_SYN": string | null;
    readonly "BERNOULLI_NUMBER_SYN": string | null;
    readonly "STIRLING1_NUMBER_SYN": string | null;
    readonly "STIRLING2_NUMBER_SYN": string | null;
    readonly "WORPITZKY_NUMBER_SYN": string | null;
    readonly "EULER_NUMBER_SYN": string | null;
    readonly "KRONECKER_DELTA_SYN": string | null;
    readonly "EULER_POLYNOMIAL_SYN": string | null;
    readonly "HARMONIC_NUMBER_SYN": string | null;
    readonly "RND_UNIFORM_CONT_SYN": string | null;
    readonly "RND_UNIFORM_DISCR_SYN": string | null;
    readonly "ROUND_SYN": string | null;
    readonly "RND_NORMAL_SYN": string | null;
    readonly "NDIG_SYN": string | null;
    readonly "DIGIT10_SYN": string | null;
    readonly "FACTVAL_SYN": string | null;
    readonly "FACTEXP_SYN": string | null;
    readonly "ROOT_SYN": string | null;
    readonly "INC_GAMMA_LOWER_SYN": string | null;
    readonly "INC_GAMMA_UPPER_SYN": string | null;
    readonly "REG_GAMMA_LOWER_SYN": string | null;
    readonly "REG_GAMMA_UPPER_SYN": string | null;
    readonly "REG_GAMMA_LOWER_P_SYN": string | null;
    readonly "REG_GAMMA_UPPER_Q_SYN": string | null;
    readonly "BINOM_COEFF_NCK_SYN": string | null;
    readonly "PERMUTATIONS_SYN": string | null;
    readonly "BETA_SYN": string | null;
    readonly "LOG_BETA_SYN": string | null;
    readonly "PDF_STUDENT_T_SYN": string | null;
    readonly "CDF_STUDENT_T_SYN": string | null;
    readonly "QNT_STUDENT_T_SYN": string | null;
    readonly "PDF_CHI2_SYN": string | null;
    readonly "CDF_CHI2_SYN": string | null;
    readonly "QNT_CHI2_SYN": string | null;
    readonly "RND_F_SNEDECOR_SYN": string | null;
    "LOG_DESC": string | null;
    "MOD_DESC": string | null;
    "BINOM_COEFF_DESC": string | null;
    "BERNOULLI_NUMBER_DESC": string | null;
    "STIRLING1_NUMBER_DESC": string | null;
    "STIRLING2_NUMBER_DESC": string | null;
    "WORPITZKY_NUMBER_DESC": string | null;
    "EULER_NUMBER_DESC": string | null;
    "KRONECKER_DELTA_DESC": string | null;
    "EULER_POLYNOMIAL_DESC": string | null;
    "HARMONIC_NUMBER_DESC": string | null;
    "RND_UNIFORM_CONT_DESC": string | null;
    "RND_UNIFORM_DISCR_DESC": string | null;
    "ROUND_DESC": string | null;
    "RND_NORMAL_DESC": string | null;
    "NDIG_DESC": string | null;
    "DIGIT10_DESC": string | null;
    "FACTVAL_DESC": string | null;
    "FACTEXP_DESC": string | null;
    "ROOT_DESC": string | null;
    "INC_GAMMA_LOWER_DESC": string | null;
    "INC_GAMMA_UPPER_DESC": string | null;
    "REG_GAMMA_LOWER_DESC": string | null;
    "REG_GAMMA_UPPER_DESC": string | null;
    "PERMUTATIONS_DESC": string | null;
    "BETA_DESC": string | null;
    "LOG_BETA_DESC": string | null;
    "PDF_STUDENT_T_DESC": string | null;
    "CDF_STUDENT_T_DESC": string | null;
    "QNT_STUDENT_T_DESC": string | null;
    "PDF_CHI2_DESC": string | null;
    "CDF_CHI2_DESC": string | null;
    "QNT_CHI2_DESC": string | null;
    "RND_F_SNEDECOR_DESC": string | null;
    readonly "LOG_SINCE": string | null;
    readonly "MOD_SINCE": string | null;
    readonly "BINOM_COEFF_SINCE": string | null;
    readonly "BINOM_COEFF_NCK_SINCE": string | null;
    readonly "BERNOULLI_NUMBER_SINCE": string | null;
    readonly "STIRLING1_NUMBER_SINCE": string | null;
    readonly "STIRLING2_NUMBER_SINCE": string | null;
    readonly "WORPITZKY_NUMBER_SINCE": string | null;
    readonly "EULER_NUMBER_SINCE": string | null;
    readonly "KRONECKER_DELTA_SINCE": string | null;
    readonly "EULER_POLYNOMIAL_SINCE": string | null;
    readonly "HARMONIC_NUMBER_SINCE": string | null;
    readonly "RND_UNIFORM_CONT_SINCE": string | null;
    readonly "RND_UNIFORM_DISCR_SINCE": string | null;
    readonly "ROUND_SINCE": string | null;
    readonly "RND_NORMAL_SINCE": string | null;
    readonly "NDIG_SINCE": string | null;
    readonly "DIGIT10_SINCE": string | null;
    readonly "FACTVAL_SINCE": string | null;
    readonly "FACTEXP_SINCE": string | null;
    readonly "ROOT_SINCE": string | null;
    readonly "INC_GAMMA_LOWER_SINCE": string | null;
    readonly "INC_GAMMA_UPPER_SINCE": string | null;
    readonly "REG_GAMMA_LOWER_SINCE": string | null;
    readonly "REG_GAMMA_UPPER_SINCE": string | null;
    readonly "PERMUTATIONS_SINCE": string | null;
    readonly "BETA_SINCE": string | null;
    readonly "LOG_BETA_SINCE": string | null;
    readonly "PDF_STUDENT_T_SINCE": string | null;
    readonly "CDF_STUDENT_T_SINCE": string | null;
    readonly "QNT_STUDENT_T_SINCE": string | null;
    readonly "PDF_CHI2_SINCE": string | null;
    readonly "CDF_CHI2_SINCE": string | null;
    readonly "QNT_CHI2_SINCE": string | null;
    readonly "RND_F_SNEDECOR_SINCE": string | null;
}

export interface parsertokens_Function3ArgStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "IF_CONDITION_ID": number;
    readonly "IF_ID": number;
    readonly "CHI_ID": number;
    readonly "CHI_LR_ID": number;
    readonly "CHI_L_ID": number;
    readonly "CHI_R_ID": number;
    readonly "PDF_UNIFORM_CONT_ID": number;
    readonly "CDF_UNIFORM_CONT_ID": number;
    readonly "QNT_UNIFORM_CONT_ID": number;
    readonly "PDF_NORMAL_ID": number;
    readonly "CDF_NORMAL_ID": number;
    readonly "QNT_NORMAL_ID": number;
    readonly "DIGIT_ID": number;
    readonly "INC_BETA_ID": number;
    readonly "REG_BETA_ID": number;
    readonly "PDF_F_SNEDECOR_ID": number;
    readonly "CDF_F_SNEDECOR_ID": number;
    readonly "QNT_F_SNEDECOR_ID": number;
    readonly "IF_STR": string | null;
    readonly "CHI_STR": string | null;
    readonly "CHI_LR_STR": string | null;
    readonly "CHI_L_STR": string | null;
    readonly "CHI_R_STR": string | null;
    readonly "PDF_UNIFORM_CONT_STR": string | null;
    readonly "CDF_UNIFORM_CONT_STR": string | null;
    readonly "QNT_UNIFORM_CONT_STR": string | null;
    readonly "PDF_NORMAL_STR": string | null;
    readonly "CDF_NORMAL_STR": string | null;
    readonly "QNT_NORMAL_STR": string | null;
    readonly "DIGIT_STR": string | null;
    readonly "INC_BETA_STR": string | null;
    readonly "REG_BETA_STR": string | null;
    readonly "REG_BETA_I_STR": string | null;
    readonly "PDF_F_SNEDECOR_STR": string | null;
    readonly "CDF_F_SNEDECOR_STR": string | null;
    readonly "QNT_F_SNEDECOR_STR": string | null;
    readonly "IF_SYN": string | null;
    readonly "CHI_SYN": string | null;
    readonly "CHI_LR_SYN": string | null;
    readonly "CHI_L_SYN": string | null;
    readonly "CHI_R_SYN": string | null;
    readonly "PDF_UNIFORM_CONT_SYN": string | null;
    readonly "CDF_UNIFORM_CONT_SYN": string | null;
    readonly "QNT_UNIFORM_CONT_SYN": string | null;
    readonly "PDF_NORMAL_SYN": string | null;
    readonly "CDF_NORMAL_SYN": string | null;
    readonly "QNT_NORMAL_SYN": string | null;
    readonly "DIGIT_SYN": string | null;
    readonly "INC_BETA_SYN": string | null;
    readonly "REG_BETA_SYN": string | null;
    readonly "REG_BETA_I_SYN": string | null;
    readonly "PDF_F_SNEDECOR_SYN": string | null;
    readonly "CDF_F_SNEDECOR_SYN": string | null;
    readonly "QNT_F_SNEDECOR_SYN": string | null;
    "IF_DESC": string | null;
    "CHI_DESC": string | null;
    "CHI_LR_DESC": string | null;
    "CHI_L_DESC": string | null;
    "CHI_R_DESC": string | null;
    "PDF_UNIFORM_CONT_DESC": string | null;
    "CDF_UNIFORM_CONT_DESC": string | null;
    "QNT_UNIFORM_CONT_DESC": string | null;
    "PDF_NORMAL_DESC": string | null;
    "CDF_NORMAL_DESC": string | null;
    "QNT_NORMAL_DESC": string | null;
    "DIGIT_DESC": string | null;
    "INC_BETA_DESC": string | null;
    "REG_BETA_DESC": string | null;
    "PDF_F_SNEDECOR_DESC": string | null;
    "CDF_F_SNEDECOR_DESC": string | null;
    "QNT_F_SNEDECOR_DESC": string | null;
    readonly "IF_SINCE": string | null;
    readonly "CHI_SINCE": string | null;
    readonly "CHI_LR_SINCE": string | null;
    readonly "CHI_L_SINCE": string | null;
    readonly "CHI_R_SINCE": string | null;
    readonly "PDF_UNIFORM_CONT_SINCE": string | null;
    readonly "CDF_UNIFORM_CONT_SINCE": string | null;
    readonly "QNT_UNIFORM_CONT_SINCE": string | null;
    readonly "PDF_NORMAL_SINCE": string | null;
    readonly "CDF_NORMAL_SINCE": string | null;
    readonly "QNT_NORMAL_SINCE": string | null;
    readonly "DIGIT_SINCE": string | null;
    readonly "INC_BETA_SINCE": string | null;
    readonly "REG_BETA_SINCE": string | null;
    readonly "REG_BETA_I_SINCE": string | null;
    readonly "PDF_F_SNEDECOR_SINCE": string | null;
    readonly "CDF_F_SNEDECOR_SINCE": string | null;
    readonly "QNT_F_SNEDECOR_SINCE": string | null;
}

export interface parsertokens_FunctionVariadicStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "IFF_ID": number;
    readonly "MIN_ID": number;
    readonly "MAX_ID": number;
    readonly "CONT_FRAC_ID": number;
    readonly "CONT_POL_ID": number;
    readonly "GCD_ID": number;
    readonly "LCM_ID": number;
    readonly "SUM_ID": number;
    readonly "PROD_ID": number;
    readonly "AVG_ID": number;
    readonly "VAR_ID": number;
    readonly "STD_ID": number;
    readonly "RND_LIST_ID": number;
    readonly "COALESCE_ID": number;
    readonly "OR_ID": number;
    readonly "AND_ID": number;
    readonly "XOR_ID": number;
    readonly "ARGMIN_ID": number;
    readonly "ARGMAX_ID": number;
    readonly "MEDIAN_ID": number;
    readonly "MODE_ID": number;
    readonly "BASE_ID": number;
    readonly "NDIST_ID": number;
    readonly "IFF_STR": string | null;
    readonly "MIN_STR": string | null;
    readonly "MAX_STR": string | null;
    readonly "CONT_FRAC_STR": string | null;
    readonly "CONT_POL_STR": string | null;
    readonly "GCD_STR": string | null;
    readonly "LCM_STR": string | null;
    readonly "SUM_STR": string | null;
    readonly "PROD_STR": string | null;
    readonly "AVG_STR": string | null;
    readonly "VAR_STR": string | null;
    readonly "STD_STR": string | null;
    readonly "RND_LIST_STR": string | null;
    readonly "COALESCE_STR": string | null;
    readonly "OR_STR": string | null;
    readonly "AND_STR": string | null;
    readonly "XOR_STR": string | null;
    readonly "ARGMIN_STR": string | null;
    readonly "ARGMAX_STR": string | null;
    readonly "MEDIAN_STR": string | null;
    readonly "MODE_STR": string | null;
    readonly "BASE_STR": string | null;
    readonly "NDIST_STR": string | null;
    readonly "IFF_SYN": string | null;
    readonly "MIN_SYN": string | null;
    readonly "MAX_SYN": string | null;
    readonly "CONT_FRAC_SYN": string | null;
    readonly "CONT_POL_SYN": string | null;
    readonly "GCD_SYN": string | null;
    readonly "LCM_SYN": string | null;
    readonly "SUM_SYN": string | null;
    readonly "PROD_SYN": string | null;
    readonly "AVG_SYN": string | null;
    readonly "VAR_SYN": string | null;
    readonly "STD_SYN": string | null;
    readonly "RND_LIST_SYN": string | null;
    readonly "COALESCE_SYN": string | null;
    readonly "OR_SYN": string | null;
    readonly "AND_SYN": string | null;
    readonly "XOR_SYN": string | null;
    readonly "ARGMIN_SYN": string | null;
    readonly "ARGMAX_SYN": string | null;
    readonly "MEDIAN_SYN": string | null;
    readonly "MODE_SYN": string | null;
    readonly "BASE_SYN": string | null;
    readonly "NDIST_SYN": string | null;
    "IFF_DESC": string | null;
    "MIN_DESC": string | null;
    "MAX_DESC": string | null;
    "CONT_FRAC_DESC": string | null;
    "CONT_POL_DESC": string | null;
    "GCD_DESC": string | null;
    "LCM_DESC": string | null;
    "SUM_DESC": string | null;
    "PROD_DESC": string | null;
    "AVG_DESC": string | null;
    "VAR_DESC": string | null;
    "STD_DESC": string | null;
    "RND_LIST_DESC": string | null;
    "COALESCE_DESC": string | null;
    "OR_DESC": string | null;
    "AND_DESC": string | null;
    "XOR_DESC": string | null;
    "ARGMIN_DESC": string | null;
    "ARGMAX_DESC": string | null;
    "MEDIAN_DESC": string | null;
    "MODE_DESC": string | null;
    "BASE_DESC": string | null;
    "NDIST_DESC": string | null;
    readonly "IFF_SINCE": string | null;
    readonly "MIN_SINCE": string | null;
    readonly "MAX_SINCE": string | null;
    readonly "CONT_FRAC_SINCE": string | null;
    readonly "CONT_POL_SINCE": string | null;
    readonly "GCD_SINCE": string | null;
    readonly "LCM_SINCE": string | null;
    readonly "SUM_SINCE": string | null;
    readonly "PROD_SINCE": string | null;
    readonly "AVG_SINCE": string | null;
    readonly "VAR_SINCE": string | null;
    readonly "STD_SINCE": string | null;
    readonly "RND_LIST_SINCE": string | null;
    readonly "COALESCE_SINCE": string | null;
    readonly "OR_SINCE": string | null;
    readonly "AND_SINCE": string | null;
    readonly "XOR_SINCE": string | null;
    readonly "ARGMIN_SINCE": string | null;
    readonly "ARGMAX_SINCE": string | null;
    readonly "MEDIAN_SINCE": string | null;
    readonly "MODE_SINCE": string | null;
    readonly "BASE_SINCE": string | null;
    readonly "NDIST_SINCE": string | null;
}

export interface parsertokens_OperatorStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "PLUS_ID": number;
    readonly "MINUS_ID": number;
    readonly "MULTIPLY_ID": number;
    readonly "DIVIDE_ID": number;
    readonly "POWER_ID": number;
    readonly "FACT_ID": number;
    readonly "MOD_ID": number;
    readonly "PERC_ID": number;
    readonly "TETRATION_ID": number;
    readonly "SQUARE_ROOT_ID": number;
    readonly "CUBE_ROOT_ID": number;
    readonly "FOURTH_ROOT_ID": number;
    readonly "DIVIDE_QUOTIENT_ID": number;
    readonly "PLUS_STR": string | null;
    readonly "MINUS_STR": string | null;
    readonly "MULTIPLY_STR": string | null;
    readonly "MULTIPLY_STR_UNI_1": string | null;
    readonly "MULTIPLY_STR_UNI_2": string | null;
    readonly "MULTIPLY_STR_UNI_3": string | null;
    readonly "DIVIDE_STR": string | null;
    readonly "DIVIDE_EUROPE_STR": string | null;
    readonly "DIVIDE_STR_UNI_1": string | null;
    readonly "POWER_STR": string | null;
    readonly "FACT_STR": string | null;
    readonly "MOD_STR": string | null;
    readonly "PERC_STR": string | null;
    readonly "TETRATION_STR": string | null;
    readonly "SQUARE_ROOT_STR": string | null;
    readonly "CUBE_ROOT_STR": string | null;
    readonly "FOURTH_ROOT_STR": string | null;
    readonly "DIVIDE_QUOTIENT_STR": string | null;
    readonly "PLUS_SYN": string | null;
    readonly "MINUS_SYN": string | null;
    readonly "MULTIPLY_SYN": string | null;
    readonly "MULTIPLY_SYN_UNI_1": string | null;
    readonly "MULTIPLY_SYN_UNI_2": string | null;
    readonly "MULTIPLY_SYN_UNI_3": string | null;
    readonly "DIVIDE_SYN": string | null;
    readonly "DIVIDE_EUROPE_SYN": string | null;
    readonly "DIVIDE_SYN_UNI_1": string | null;
    readonly "POWER_SYN": string | null;
    readonly "FACT_SYN": string | null;
    readonly "MOD_SYN": string | null;
    readonly "PERC_SYN": string | null;
    readonly "TETRATION_SYN": string | null;
    readonly "SQUARE_ROOT_SYN": string | null;
    readonly "CUBE_ROOT_SYN": string | null;
    readonly "FOURTH_ROOT_SYN": string | null;
    readonly "DIVIDE_QUOTIENT_SYN": string | null;
    "PLUS_DESC": string | null;
    "MINUS_DESC": string | null;
    "MULTIPLY_DESC": string | null;
    "DIVIDE_DESC": string | null;
    "POWER_DESC": string | null;
    "FACT_DESC": string | null;
    "MOD_DESC": string | null;
    "PERC_DESC": string | null;
    "TETRATION_DESC": string | null;
    "SQUARE_ROOT_DESC": string | null;
    "CUBE_ROOT_DESC": string | null;
    "FOURTH_ROOT_DESC": string | null;
    "DIVIDE_QUOTIENT_DESC": string | null;
    readonly "PLUS_SINCE": string | null;
    readonly "MINUS_SINCE": string | null;
    readonly "MULTIPLY_SINCE": string | null;
    readonly "MULTIPLY_SINCE_UNI_1": string | null;
    readonly "MULTIPLY_SINCE_UNI_2": string | null;
    readonly "MULTIPLY_SINCE_UNI_3": string | null;
    readonly "DIVIDE_SINCE": string | null;
    readonly "DIVIDE_SINCE_EUROPE": string | null;
    readonly "DIVIDE_SINCE_UNI_1": string | null;
    readonly "POWER_SINCE": string | null;
    readonly "FACT_SINCE": string | null;
    readonly "MOD_SINCE": string | null;
    readonly "PERC_SINCE": string | null;
    readonly "TETRATION_SINCE": string | null;
    readonly "SQUARE_ROOT_SINCE": string | null;
    readonly "CUBE_ROOT_SINCE": string | null;
    readonly "FOURTH_ROOT_SINCE": string | null;
    readonly "DIVIDE_QUOTIENT_SINCE": string | null;
}

export interface parsertokens_ParserSymbolStatics {
    readonly "NA": string | null;
    readonly "EMPTY": string | null;
    readonly "DIGIT": string | null;
    readonly "DIGIT_B1": string | null;
    readonly "DIGIT_B2": string | null;
    readonly "DIGIT_B3": string | null;
    readonly "DIGIT_B4": string | null;
    readonly "DIGIT_B5": string | null;
    readonly "DIGIT_B6": string | null;
    readonly "DIGIT_B7": string | null;
    readonly "DIGIT_B8": string | null;
    readonly "DIGIT_B9": string | null;
    readonly "DIGIT_B10": string | null;
    readonly "DIGIT_B11": string | null;
    readonly "DIGIT_B12": string | null;
    readonly "DIGIT_B13": string | null;
    readonly "DIGIT_B14": string | null;
    readonly "DIGIT_B15": string | null;
    readonly "DIGIT_B16": string | null;
    readonly "DIGIT_B17": string | null;
    readonly "DIGIT_B18": string | null;
    readonly "DIGIT_B19": string | null;
    readonly "DIGIT_B20": string | null;
    readonly "DIGIT_B21": string | null;
    readonly "DIGIT_B22": string | null;
    readonly "DIGIT_B23": string | null;
    readonly "DIGIT_B24": string | null;
    readonly "DIGIT_B25": string | null;
    readonly "DIGIT_B26": string | null;
    readonly "DIGIT_B27": string | null;
    readonly "DIGIT_B28": string | null;
    readonly "DIGIT_B29": string | null;
    readonly "DIGIT_B30": string | null;
    readonly "DIGIT_B31": string | null;
    readonly "DIGIT_B32": string | null;
    readonly "DIGIT_B33": string | null;
    readonly "DIGIT_B34": string | null;
    readonly "DIGIT_B35": string | null;
    readonly "DIGIT_B36": string | null;
    readonly "INTEGER": string | null;
    readonly "DEC_FRACT": string | null;
    readonly "DEC_FRACT_OR_INT": string | null;
    readonly "DECIMAL_REG_EXP": string | null;
    readonly "BASE1_REG_EXP": string | null;
    readonly "BASE2_REG_EXP": string | null;
    readonly "BASE3_REG_EXP": string | null;
    readonly "BASE4_REG_EXP": string | null;
    readonly "BASE5_REG_EXP": string | null;
    readonly "BASE6_REG_EXP": string | null;
    readonly "BASE7_REG_EXP": string | null;
    readonly "BASE8_REG_EXP": string | null;
    readonly "BASE9_REG_EXP": string | null;
    readonly "BASE10_REG_EXP": string | null;
    readonly "BASE11_REG_EXP": string | null;
    readonly "BASE12_REG_EXP": string | null;
    readonly "BASE13_REG_EXP": string | null;
    readonly "BASE14_REG_EXP": string | null;
    readonly "BASE15_REG_EXP": string | null;
    readonly "BASE16_REG_EXP": string | null;
    readonly "BASE17_REG_EXP": string | null;
    readonly "BASE18_REG_EXP": string | null;
    readonly "BASE19_REG_EXP": string | null;
    readonly "BASE20_REG_EXP": string | null;
    readonly "BASE21_REG_EXP": string | null;
    readonly "BASE22_REG_EXP": string | null;
    readonly "BASE23_REG_EXP": string | null;
    readonly "BASE24_REG_EXP": string | null;
    readonly "BASE25_REG_EXP": string | null;
    readonly "BASE26_REG_EXP": string | null;
    readonly "BASE27_REG_EXP": string | null;
    readonly "BASE28_REG_EXP": string | null;
    readonly "BASE29_REG_EXP": string | null;
    readonly "BASE30_REG_EXP": string | null;
    readonly "BASE31_REG_EXP": string | null;
    readonly "BASE32_REG_EXP": string | null;
    readonly "BASE33_REG_EXP": string | null;
    readonly "BASE34_REG_EXP": string | null;
    readonly "BASE35_REG_EXP": string | null;
    readonly "BASE36_REG_EXP": string | null;
    readonly "BASE_OTHER_REG_EXP": string | null;
    readonly "UNICODE_NAME_REG_EXP": string | null;
    readonly "FRACTION": string | null;
    readonly "nameOnlyTokenRegExp": string | null;
    readonly "unitOnlyTokenRegExp": string | null;
    readonly "nameOnlyTokenOptBracketsRegExp": string | null;
    readonly "nameTokenRegExp": string | null;
    readonly "nameTokenOptBracketsRegExp": string | null;
    readonly "paramsTokenRegeExp": string | null;
    readonly "constArgDefStrRegExp": string | null;
    readonly "constUnitgDefStrRegExp": string | null;
    readonly "functionDefStrRegExp": string | null;
    readonly "function1ArgDefStrRegExp": string | null;
    readonly "functionVariadicDefStrRegExp": string | null;
    readonly "ANY_NUMBER_LITERAL_REG_EXP": string | null;
    readonly "NUMBER_NAME_IMPL_MULTI_REG_EXP": string | null;
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "LEFT_PARENTHESES_ID": number;
    readonly "RIGHT_PARENTHESES_ID": number;
    readonly "COMMA_ID": number;
    readonly "BLANK_ID": number;
    readonly "NUMBER_ID": number;
    readonly "NUMBER_TYPE_ID": number;
    readonly "LEFT_PARENTHESES_STR": string | null;
    readonly "RIGHT_PARENTHESES_STR": string | null;
    readonly "COMMA_STR": string | null;
    readonly "SEMI_STR": string | null;
    readonly "BLANK_STR": string | null;
    readonly "NUMBER_STR": string | null;
    readonly "LEFT_PARENTHESES_SYN": string | null;
    readonly "RIGHT_PARENTHESES_SYN": string | null;
    readonly "COMMA_SYN": string | null;
    readonly "SEMI_SYN": string | null;
    readonly "BLANK_SYN": string | null;
    readonly "NUMBER_SYN": string | null;
    "LEFT_PARENTHESES_DESC": string | null;
    "RIGHT_PARENTHESES_DESC": string | null;
    "COMMA_DESC": string | null;
    "SEMI_DESC": string | null;
    "BLANK_DESC": string | null;
    "UNICODE_MATH_DESC": string | null;
    "NUMBER_LITERAL_STR": string | null;
    "NUMBER_LITERAL_DESC": string | null;
    readonly "LEFT_PARENTHESES_SINCE": string | null;
    readonly "RIGHT_PARENTHESES_SINCE": string | null;
    readonly "COMMA_SINCE": string | null;
    readonly "BLANK_SINCE": string | null;
    readonly "NUMBER_SINCE": string | null;
}

export interface parsertokens_RandomVariableStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "UNIFORM_ID": number;
    readonly "INT_ID": number;
    readonly "INT1_ID": number;
    readonly "INT2_ID": number;
    readonly "INT3_ID": number;
    readonly "INT4_ID": number;
    readonly "INT5_ID": number;
    readonly "INT6_ID": number;
    readonly "INT7_ID": number;
    readonly "INT8_ID": number;
    readonly "INT9_ID": number;
    readonly "NAT0_ID": number;
    readonly "NAT0_1_ID": number;
    readonly "NAT0_2_ID": number;
    readonly "NAT0_3_ID": number;
    readonly "NAT0_4_ID": number;
    readonly "NAT0_5_ID": number;
    readonly "NAT0_6_ID": number;
    readonly "NAT0_7_ID": number;
    readonly "NAT0_8_ID": number;
    readonly "NAT0_9_ID": number;
    readonly "NAT1_ID": number;
    readonly "NAT1_1_ID": number;
    readonly "NAT1_2_ID": number;
    readonly "NAT1_3_ID": number;
    readonly "NAT1_4_ID": number;
    readonly "NAT1_5_ID": number;
    readonly "NAT1_6_ID": number;
    readonly "NAT1_7_ID": number;
    readonly "NAT1_8_ID": number;
    readonly "NAT1_9_ID": number;
    readonly "NOR_ID": number;
    readonly "UNIFORM_STR": string | null;
    readonly "INT_STR": string | null;
    readonly "INT1_STR": string | null;
    readonly "INT2_STR": string | null;
    readonly "INT3_STR": string | null;
    readonly "INT4_STR": string | null;
    readonly "INT5_STR": string | null;
    readonly "INT6_STR": string | null;
    readonly "INT7_STR": string | null;
    readonly "INT8_STR": string | null;
    readonly "INT9_STR": string | null;
    readonly "NAT0_STR": string | null;
    readonly "NAT0_1_STR": string | null;
    readonly "NAT0_2_STR": string | null;
    readonly "NAT0_3_STR": string | null;
    readonly "NAT0_4_STR": string | null;
    readonly "NAT0_5_STR": string | null;
    readonly "NAT0_6_STR": string | null;
    readonly "NAT0_7_STR": string | null;
    readonly "NAT0_8_STR": string | null;
    readonly "NAT0_9_STR": string | null;
    readonly "NAT1_STR": string | null;
    readonly "NAT1_1_STR": string | null;
    readonly "NAT1_2_STR": string | null;
    readonly "NAT1_3_STR": string | null;
    readonly "NAT1_4_STR": string | null;
    readonly "NAT1_5_STR": string | null;
    readonly "NAT1_6_STR": string | null;
    readonly "NAT1_7_STR": string | null;
    readonly "NAT1_8_STR": string | null;
    readonly "NAT1_9_STR": string | null;
    readonly "NOR_STR": string | null;
    readonly "UNIFORM_SYN": string | null;
    readonly "INT_SYN": string | null;
    readonly "INT1_SYN": string | null;
    readonly "INT2_SYN": string | null;
    readonly "INT3_SYN": string | null;
    readonly "INT4_SYN": string | null;
    readonly "INT5_SYN": string | null;
    readonly "INT6_SYN": string | null;
    readonly "INT7_SYN": string | null;
    readonly "INT8_SYN": string | null;
    readonly "INT9_SYN": string | null;
    readonly "NAT0_SYN": string | null;
    readonly "NAT0_1_SYN": string | null;
    readonly "NAT0_2_SYN": string | null;
    readonly "NAT0_3_SYN": string | null;
    readonly "NAT0_4_SYN": string | null;
    readonly "NAT0_5_SYN": string | null;
    readonly "NAT0_6_SYN": string | null;
    readonly "NAT0_7_SYN": string | null;
    readonly "NAT0_8_SYN": string | null;
    readonly "NAT0_9_SYN": string | null;
    readonly "NAT1_SYN": string | null;
    readonly "NAT1_1_SYN": string | null;
    readonly "NAT1_2_SYN": string | null;
    readonly "NAT1_3_SYN": string | null;
    readonly "NAT1_4_SYN": string | null;
    readonly "NAT1_5_SYN": string | null;
    readonly "NAT1_6_SYN": string | null;
    readonly "NAT1_7_SYN": string | null;
    readonly "NAT1_8_SYN": string | null;
    readonly "NAT1_9_SYN": string | null;
    readonly "NOR_SYN": string | null;
    "UNIFORM_DESC": string | null;
    "INT_DESC": string | null;
    "INT1_DESC": string | null;
    "INT2_DESC": string | null;
    "INT3_DESC": string | null;
    "INT4_DESC": string | null;
    "INT5_DESC": string | null;
    "INT6_DESC": string | null;
    "INT7_DESC": string | null;
    "INT8_DESC": string | null;
    "INT9_DESC": string | null;
    "NAT0_DESC": string | null;
    "NAT0_1_DESC": string | null;
    "NAT0_2_DESC": string | null;
    "NAT0_3_DESC": string | null;
    "NAT0_4_DESC": string | null;
    "NAT0_5_DESC": string | null;
    "NAT0_6_DESC": string | null;
    "NAT0_7_DESC": string | null;
    "NAT0_8_DESC": string | null;
    "NAT0_9_DESC": string | null;
    "NAT1_DESC": string | null;
    "NAT1_1_DESC": string | null;
    "NAT1_2_DESC": string | null;
    "NAT1_3_DESC": string | null;
    "NAT1_4_DESC": string | null;
    "NAT1_5_DESC": string | null;
    "NAT1_6_DESC": string | null;
    "NAT1_7_DESC": string | null;
    "NAT1_8_DESC": string | null;
    "NAT1_9_DESC": string | null;
    "NOR_DESC": string | null;
    readonly "UNIFORM_SINCE": string | null;
    readonly "INT_SINCE": string | null;
    readonly "INT1_SINCE": string | null;
    readonly "INT2_SINCE": string | null;
    readonly "INT3_SINCE": string | null;
    readonly "INT4_SINCE": string | null;
    readonly "INT5_SINCE": string | null;
    readonly "INT6_SINCE": string | null;
    readonly "INT7_SINCE": string | null;
    readonly "INT8_SINCE": string | null;
    readonly "INT9_SINCE": string | null;
    readonly "NAT0_SINCE": string | null;
    readonly "NAT0_1_SINCE": string | null;
    readonly "NAT0_2_SINCE": string | null;
    readonly "NAT0_3_SINCE": string | null;
    readonly "NAT0_4_SINCE": string | null;
    readonly "NAT0_5_SINCE": string | null;
    readonly "NAT0_6_SINCE": string | null;
    readonly "NAT0_7_SINCE": string | null;
    readonly "NAT0_8_SINCE": string | null;
    readonly "NAT0_9_SINCE": string | null;
    readonly "NAT1_SINCE": string | null;
    readonly "NAT1_1_SINCE": string | null;
    readonly "NAT1_2_SINCE": string | null;
    readonly "NAT1_3_SINCE": string | null;
    readonly "NAT1_4_SINCE": string | null;
    readonly "NAT1_5_SINCE": string | null;
    readonly "NAT1_6_SINCE": string | null;
    readonly "NAT1_7_SINCE": string | null;
    readonly "NAT1_8_SINCE": string | null;
    readonly "NAT1_9_SINCE": string | null;
    readonly "NOR_SINCE": string | null;
}

export interface parsertokens_UnitStatics {
    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "PERC_ID": number;
    readonly "PERM_ID": number;
    readonly "YOTTA_ID": number;
    readonly "ZETTA_ID": number;
    readonly "EXA_ID": number;
    readonly "PETA_ID": number;
    readonly "TERA_ID": number;
    readonly "GIGA_ID": number;
    readonly "MEGA_ID": number;
    readonly "KILO_ID": number;
    readonly "HECTO_ID": number;
    readonly "DECA_ID": number;
    readonly "DECI_ID": number;
    readonly "CENTI_ID": number;
    readonly "MILLI_ID": number;
    readonly "MICRO_ID": number;
    readonly "NANO_ID": number;
    readonly "PICO_ID": number;
    readonly "FEMTO_ID": number;
    readonly "ATTO_ID": number;
    readonly "ZEPTO_ID": number;
    readonly "YOCTO_ID": number;
    readonly "METRE_ID": number;
    readonly "KILOMETRE_ID": number;
    readonly "CENTIMETRE_ID": number;
    readonly "MILLIMETRE_ID": number;
    readonly "INCH_ID": number;
    readonly "YARD_ID": number;
    readonly "FEET_ID": number;
    readonly "MILE_ID": number;
    readonly "NAUTICAL_MILE_ID": number;
    readonly "METRE2_ID": number;
    readonly "CENTIMETRE2_ID": number;
    readonly "MILLIMETRE2_ID": number;
    readonly "ARE_ID": number;
    readonly "HECTARE_ID": number;
    readonly "ACRE_ID": number;
    readonly "KILOMETRE2_ID": number;
    readonly "MILLIMETRE3_ID": number;
    readonly "CENTIMETRE3_ID": number;
    readonly "METRE3_ID": number;
    readonly "KILOMETRE3_ID": number;
    readonly "MILLILITRE_ID": number;
    readonly "LITRE_ID": number;
    readonly "GALLON_ID": number;
    readonly "PINT_ID": number;
    readonly "SECOND_ID": number;
    readonly "MILLISECOND_ID": number;
    readonly "MINUTE_ID": number;
    readonly "HOUR_ID": number;
    readonly "DAY_ID": number;
    readonly "WEEK_ID": number;
    readonly "JULIAN_YEAR_ID": number;
    readonly "KILOGRAM_ID": number;
    readonly "GRAM_ID": number;
    readonly "MILLIGRAM_ID": number;
    readonly "DECAGRAM_ID": number;
    readonly "TONNE_ID": number;
    readonly "OUNCE_ID": number;
    readonly "POUND_ID": number;
    readonly "BIT_ID": number;
    readonly "KILOBIT_ID": number;
    readonly "MEGABIT_ID": number;
    readonly "GIGABIT_ID": number;
    readonly "TERABIT_ID": number;
    readonly "PETABIT_ID": number;
    readonly "EXABIT_ID": number;
    readonly "ZETTABIT_ID": number;
    readonly "YOTTABIT_ID": number;
    readonly "BYTE_ID": number;
    readonly "KILOBYTE_ID": number;
    readonly "MEGABYTE_ID": number;
    readonly "GIGABYTE_ID": number;
    readonly "TERABYTE_ID": number;
    readonly "PETABYTE_ID": number;
    readonly "EXABYTE_ID": number;
    readonly "ZETTABYTE_ID": number;
    readonly "YOTTABYTE_ID": number;
    readonly "JOULE_ID": number;
    readonly "ELECTRONO_VOLT_ID": number;
    readonly "KILO_ELECTRONO_VOLT_ID": number;
    readonly "MEGA_ELECTRONO_VOLT_ID": number;
    readonly "GIGA_ELECTRONO_VOLT_ID": number;
    readonly "TERA_ELECTRONO_VOLT_ID": number;
    readonly "METRE_PER_SECOND_ID": number;
    readonly "KILOMETRE_PER_HOUR_ID": number;
    readonly "MILE_PER_HOUR_ID": number;
    readonly "KNOT_ID": number;
    readonly "METRE_PER_SECOND2_ID": number;
    readonly "KILOMETRE_PER_HOUR2_ID": number;
    readonly "MILE_PER_HOUR2_ID": number;
    readonly "RADIAN_ARC_ID": number;
    readonly "DEGREE_ARC_ID": number;
    readonly "MINUTE_ARC_ID": number;
    readonly "SECOND_ARC_ID": number;
    readonly "PERC_STR": string | null;
    readonly "PERM_STR": string | null;
    readonly "YOTTA_STR": string | null;
    readonly "YOTTA_SEPT_STR": string | null;
    readonly "ZETTA_STR": string | null;
    readonly "ZETTA_SEXT_STR": string | null;
    readonly "EXA_STR": string | null;
    readonly "EXA_QUINT_STR": string | null;
    readonly "PETA_STR": string | null;
    readonly "PETA_QUAD_STR": string | null;
    readonly "TERA_STR": string | null;
    readonly "TERA_TRIL_STR": string | null;
    readonly "GIGA_STR": string | null;
    readonly "GIGA_BIL_STR": string | null;
    readonly "MEGA_STR": string | null;
    readonly "MEGA_MIL_STR": string | null;
    readonly "KILO_STR": string | null;
    readonly "KILO_TH_STR": string | null;
    readonly "HECTO_STR": string | null;
    readonly "HECTO_HUND_STR": string | null;
    readonly "DECA_STR": string | null;
    readonly "DECA_TEN_STR": string | null;
    readonly "DECI_STR": string | null;
    readonly "CENTI_STR": string | null;
    readonly "MILLI_STR": string | null;
    readonly "MICRO_STR": string | null;
    readonly "NANO_STR": string | null;
    readonly "PICO_STR": string | null;
    readonly "FEMTO_STR": string | null;
    readonly "ATTO_STR": string | null;
    readonly "ZEPTO_STR": string | null;
    readonly "YOCTO_STR": string | null;
    readonly "METRE_STR": string | null;
    readonly "KILOMETRE_STR": string | null;
    readonly "CENTIMETRE_STR": string | null;
    readonly "MILLIMETRE_STR": string | null;
    readonly "INCH_STR": string | null;
    readonly "YARD_STR": string | null;
    readonly "FEET_STR": string | null;
    readonly "MILE_STR": string | null;
    readonly "NAUTICAL_MILE_STR": string | null;
    readonly "METRE2_STR": string | null;
    readonly "CENTIMETRE2_STR": string | null;
    readonly "MILLIMETRE2_STR": string | null;
    readonly "ARE_STR": string | null;
    readonly "HECTARE_STR": string | null;
    readonly "ACRE_STR": string | null;
    readonly "KILOMETRE2_STR": string | null;
    readonly "MILLIMETRE3_STR": string | null;
    readonly "CENTIMETRE3_STR": string | null;
    readonly "METRE3_STR": string | null;
    readonly "KILOMETRE3_STR": string | null;
    readonly "MILLILITRE_STR": string | null;
    readonly "LITRE_STR": string | null;
    readonly "GALLON_STR": string | null;
    readonly "PINT_STR": string | null;
    readonly "SECOND_STR": string | null;
    readonly "MILLISECOND_STR": string | null;
    readonly "MINUTE_STR": string | null;
    readonly "HOUR_STR": string | null;
    readonly "DAY_STR": string | null;
    readonly "WEEK_STR": string | null;
    readonly "JULIAN_YEAR_STR": string | null;
    readonly "KILOGRAM_STR": string | null;
    readonly "GRAM_STR": string | null;
    readonly "MILLIGRAM_STR": string | null;
    readonly "DECAGRAM_STR": string | null;
    readonly "TONNE_STR": string | null;
    readonly "OUNCE_STR": string | null;
    readonly "POUND_STR": string | null;
    readonly "BIT_STR": string | null;
    readonly "KILOBIT_STR": string | null;
    readonly "MEGABIT_STR": string | null;
    readonly "GIGABIT_STR": string | null;
    readonly "TERABIT_STR": string | null;
    readonly "PETABIT_STR": string | null;
    readonly "EXABIT_STR": string | null;
    readonly "ZETTABIT_STR": string | null;
    readonly "YOTTABIT_STR": string | null;
    readonly "BYTE_STR": string | null;
    readonly "KILOBYTE_STR": string | null;
    readonly "MEGABYTE_STR": string | null;
    readonly "GIGABYTE_STR": string | null;
    readonly "TERABYTE_STR": string | null;
    readonly "PETABYTE_STR": string | null;
    readonly "EXABYTE_STR": string | null;
    readonly "ZETTABYTE_STR": string | null;
    readonly "YOTTABYTE_STR": string | null;
    readonly "JOULE_STR": string | null;
    readonly "ELECTRONO_VOLT_STR": string | null;
    readonly "KILO_ELECTRONO_VOLT_STR": string | null;
    readonly "MEGA_ELECTRONO_VOLT_STR": string | null;
    readonly "GIGA_ELECTRONO_VOLT_STR": string | null;
    readonly "TERA_ELECTRONO_VOLT_STR": string | null;
    readonly "METRE_PER_SECOND_STR": string | null;
    readonly "KILOMETRE_PER_HOUR_STR": string | null;
    readonly "MILE_PER_HOUR_STR": string | null;
    readonly "KNOT_STR": string | null;
    readonly "METRE_PER_SECOND2_STR": string | null;
    readonly "KILOMETRE_PER_HOUR2_STR": string | null;
    readonly "MILE_PER_HOUR2_STR": string | null;
    readonly "RADIAN_ARC_STR": string | null;
    readonly "DEGREE_ARC_STR": string | null;
    readonly "MINUTE_ARC_STR": string | null;
    readonly "SECOND_ARC_STR": string | null;
    readonly "PERC_SYN": string | null;
    readonly "PERM_SYN": string | null;
    readonly "YOTTA_SYN": string | null;
    readonly "YOTTA_SEPT_SYN": string | null;
    readonly "ZETTA_SYN": string | null;
    readonly "ZETTA_SEXT_SYN": string | null;
    readonly "EXA_SYN": string | null;
    readonly "EXA_QUINT_SYN": string | null;
    readonly "PETA_SYN": string | null;
    readonly "PETA_QUAD_SYN": string | null;
    readonly "TERA_SYN": string | null;
    readonly "TERA_TRIL_SYN": string | null;
    readonly "GIGA_SYN": string | null;
    readonly "GIGA_BIL_SYN": string | null;
    readonly "MEGA_SYN": string | null;
    readonly "MEGA_MIL_SYN": string | null;
    readonly "KILO_SYN": string | null;
    readonly "KILO_TH_SYN": string | null;
    readonly "HECTO_SYN": string | null;
    readonly "HECTO_HUND_SYN": string | null;
    readonly "DECA_SYN": string | null;
    readonly "DECA_TEN_SYN": string | null;
    readonly "DECI_SYN": string | null;
    readonly "CENTI_SYN": string | null;
    readonly "MILLI_SYN": string | null;
    readonly "MICRO_SYN": string | null;
    readonly "NANO_SYN": string | null;
    readonly "PICO_SYN": string | null;
    readonly "FEMTO_SYN": string | null;
    readonly "ATTO_SYN": string | null;
    readonly "ZEPTO_SYN": string | null;
    readonly "YOCTO_SYN": string | null;
    readonly "METRE_SYN": string | null;
    readonly "KILOMETRE_SYN": string | null;
    readonly "CENTIMETRE_SYN": string | null;
    readonly "MILLIMETRE_SYN": string | null;
    readonly "INCH_SYN": string | null;
    readonly "YARD_SYN": string | null;
    readonly "FEET_SYN": string | null;
    readonly "MILE_SYN": string | null;
    readonly "NAUTICAL_MILE_SYN": string | null;
    readonly "METRE2_SYN": string | null;
    readonly "CENTIMETRE2_SYN": string | null;
    readonly "MILLIMETRE2_SYN": string | null;
    readonly "ARE_SYN": string | null;
    readonly "HECTARE_SYN": string | null;
    readonly "ACRE_SYN": string | null;
    readonly "KILOMETRE2_SYN": string | null;
    readonly "MILLIMETRE3_SYN": string | null;
    readonly "CENTIMETRE3_SYN": string | null;
    readonly "METRE3_SYN": string | null;
    readonly "KILOMETRE3_SYN": string | null;
    readonly "MILLILITRE_SYN": string | null;
    readonly "LITRE_SYN": string | null;
    readonly "GALLON_SYN": string | null;
    readonly "PINT_SYN": string | null;
    readonly "SECOND_SYN": string | null;
    readonly "MILLISECOND_SYN": string | null;
    readonly "MINUTE_SYN": string | null;
    readonly "HOUR_SYN": string | null;
    readonly "DAY_SYN": string | null;
    readonly "WEEK_SYN": string | null;
    readonly "JULIAN_YEAR_SYN": string | null;
    readonly "KILOGRAM_SYN": string | null;
    readonly "GRAM_SYN": string | null;
    readonly "MILLIGRAM_SYN": string | null;
    readonly "DECAGRAM_SYN": string | null;
    readonly "TONNE_SYN": string | null;
    readonly "OUNCE_SYN": string | null;
    readonly "POUND_SYN": string | null;
    readonly "BIT_SYN": string | null;
    readonly "KILOBIT_SYN": string | null;
    readonly "MEGABIT_SYN": string | null;
    readonly "GIGABIT_SYN": string | null;
    readonly "TERABIT_SYN": string | null;
    readonly "PETABIT_SYN": string | null;
    readonly "EXABIT_SYN": string | null;
    readonly "ZETTABIT_SYN": string | null;
    readonly "YOTTABIT_SYN": string | null;
    readonly "BYTE_SYN": string | null;
    readonly "KILOBYTE_SYN": string | null;
    readonly "MEGABYTE_SYN": string | null;
    readonly "GIGABYTE_SYN": string | null;
    readonly "TERABYTE_SYN": string | null;
    readonly "PETABYTE_SYN": string | null;
    readonly "EXABYTE_SYN": string | null;
    readonly "ZETTABYTE_SYN": string | null;
    readonly "YOTTABYTE_SYN": string | null;
    readonly "JOULE_SYN": string | null;
    readonly "ELECTRONO_VOLT_SYN": string | null;
    readonly "KILO_ELECTRONO_VOLT_SYN": string | null;
    readonly "MEGA_ELECTRONO_VOLT_SYN": string | null;
    readonly "GIGA_ELECTRONO_VOLT_SYN": string | null;
    readonly "TERA_ELECTRONO_VOLT_SYN": string | null;
    readonly "METRE_PER_SECOND_SYN": string | null;
    readonly "KILOMETRE_PER_HOUR_SYN": string | null;
    readonly "MILE_PER_HOUR_SYN": string | null;
    readonly "KNOT_SYN": string | null;
    readonly "METRE_PER_SECOND2_SYN": string | null;
    readonly "KILOMETRE_PER_HOUR2_SYN": string | null;
    readonly "MILE_PER_HOUR2_SYN": string | null;
    readonly "RADIAN_ARC_SYN": string | null;
    readonly "DEGREE_ARC_SYN": string | null;
    readonly "MINUTE_ARC_SYN": string | null;
    readonly "SECOND_ARC_SYN": string | null;
    "PERC_DESC": string | null;
    "PERM_DESC": string | null;
    "YOTTA_DESC": string | null;
    "ZETTA_DESC": string | null;
    "EXA_DESC": string | null;
    "PETA_DESC": string | null;
    "TERA_DESC": string | null;
    "GIGA_DESC": string | null;
    "MEGA_DESC": string | null;
    "KILO_DESC": string | null;
    "HECTO_DESC": string | null;
    "DECA_DESC": string | null;
    "DECI_DESC": string | null;
    "CENTI_DESC": string | null;
    "MILLI_DESC": string | null;
    "MICRO_DESC": string | null;
    "NANO_DESC": string | null;
    "PICO_DESC": string | null;
    "FEMTO_DESC": string | null;
    "ATTO_DESC": string | null;
    "ZEPTO_DESC": string | null;
    "YOCTO_DESC": string | null;
    "METRE_DESC": string | null;
    "KILOMETRE_DESC": string | null;
    "CENTIMETRE_DESC": string | null;
    "MILLIMETRE_DESC": string | null;
    "INCH_DESC": string | null;
    "YARD_DESC": string | null;
    "FEET_DESC": string | null;
    "MILE_DESC": string | null;
    "NAUTICAL_MILE_DESC": string | null;
    "METRE2_DESC": string | null;
    "CENTIMETRE2_DESC": string | null;
    "MILLIMETRE2_DESC": string | null;
    "ARE_DESC": string | null;
    "HECTARE_DESC": string | null;
    "ACRE_DESC": string | null;
    "KILOMETRE2_DESC": string | null;
    "MILLIMETRE3_DESC": string | null;
    "CENTIMETRE3_DESC": string | null;
    "METRE3_DESC": string | null;
    "KILOMETRE3_DESC": string | null;
    "MILLILITRE_DESC": string | null;
    "LITRE_DESC": string | null;
    "GALLON_DESC": string | null;
    "PINT_DESC": string | null;
    "SECOND_DESC": string | null;
    "MILLISECOND_DESC": string | null;
    "MINUTE_DESC": string | null;
    "HOUR_DESC": string | null;
    "DAY_DESC": string | null;
    "WEEK_DESC": string | null;
    "JULIAN_YEAR_DESC": string | null;
    "KILOGRAM_DESC": string | null;
    "GRAM_DESC": string | null;
    "MILLIGRAM_DESC": string | null;
    "DECAGRAM_DESC": string | null;
    "TONNE_DESC": string | null;
    "OUNCE_DESC": string | null;
    "POUND_DESC": string | null;
    "BIT_DESC": string | null;
    "KILOBIT_DESC": string | null;
    "MEGABIT_DESC": string | null;
    "GIGABIT_DESC": string | null;
    "TERABIT_DESC": string | null;
    "PETABIT_DESC": string | null;
    "EXABIT_DESC": string | null;
    "ZETTABIT_DESC": string | null;
    "YOTTABIT_DESC": string | null;
    "BYTE_DESC": string | null;
    "KILOBYTE_DESC": string | null;
    "MEGABYTE_DESC": string | null;
    "GIGABYTE_DESC": string | null;
    "TERABYTE_DESC": string | null;
    "PETABYTE_DESC": string | null;
    "EXABYTE_DESC": string | null;
    "ZETTABYTE_DESC": string | null;
    "YOTTABYTE_DESC": string | null;
    "JOULE_DESC": string | null;
    "ELECTRONO_VOLT_DESC": string | null;
    "KILO_ELECTRONO_VOLT_DESC": string | null;
    "MEGA_ELECTRONO_VOLT_DESC": string | null;
    "GIGA_ELECTRONO_VOLT_DESC": string | null;
    "TERA_ELECTRONO_VOLT_DESC": string | null;
    "METRE_PER_SECOND_DESC": string | null;
    "KILOMETRE_PER_HOUR_DESC": string | null;
    "MILE_PER_HOUR_DESC": string | null;
    "KNOT_DESC": string | null;
    "METRE_PER_SECOND2_DESC": string | null;
    "KILOMETRE_PER_HOUR2_DESC": string | null;
    "MILE_PER_HOUR2_DESC": string | null;
    "RADIAN_ARC_DESC": string | null;
    "DEGREE_ARC_DESC": string | null;
    "MINUTE_ARC_DESC": string | null;
    "SECOND_ARC_DESC": string | null;
    readonly "PERC_SINCE": string | null;
    readonly "PERM_SINCE": string | null;
    readonly "YOTTA_SINCE": string | null;
    readonly "ZETTA_SINCE": string | null;
    readonly "EXA_SINCE": string | null;
    readonly "PETA_SINCE": string | null;
    readonly "TERA_SINCE": string | null;
    readonly "GIGA_SINCE": string | null;
    readonly "MEGA_SINCE": string | null;
    readonly "KILO_SINCE": string | null;
    readonly "HECTO_SINCE": string | null;
    readonly "DECA_SINCE": string | null;
    readonly "DECI_SINCE": string | null;
    readonly "CENTI_SINCE": string | null;
    readonly "MILLI_SINCE": string | null;
    readonly "MICRO_SINCE": string | null;
    readonly "NANO_SINCE": string | null;
    readonly "PICO_SINCE": string | null;
    readonly "FEMTO_SINCE": string | null;
    readonly "ATTO_SINCE": string | null;
    readonly "ZEPTO_SINCE": string | null;
    readonly "YOCTO_SINCE": string | null;
    readonly "METRE_SINCE": string | null;
    readonly "KILOMETRE_SINCE": string | null;
    readonly "CENTIMETRE_SINCE": string | null;
    readonly "MILLIMETRE_SINCE": string | null;
    readonly "INCH_SINCE": string | null;
    readonly "YARD_SINCE": string | null;
    readonly "FEET_SINCE": string | null;
    readonly "MILE_SINCE": string | null;
    readonly "NAUTICAL_MILE_SINCE": string | null;
    readonly "METRE2_SINCE": string | null;
    readonly "CENTIMETRE2_SINCE": string | null;
    readonly "MILLIMETRE2_SINCE": string | null;
    readonly "ARE_SINCE": string | null;
    readonly "HECTARE_SINCE": string | null;
    readonly "ACRE_SINCE": string | null;
    readonly "KILOMETRE2_SINCE": string | null;
    readonly "MILLIMETRE3_SINCE": string | null;
    readonly "CENTIMETRE3_SINCE": string | null;
    readonly "METRE3_SINCE": string | null;
    readonly "KILOMETRE3_SINCE": string | null;
    readonly "MILLILITRE_SINCE": string | null;
    readonly "LITRE_SINCE": string | null;
    readonly "GALLON_SINCE": string | null;
    readonly "PINT_SINCE": string | null;
    readonly "SECOND_SINCE": string | null;
    readonly "MILLISECOND_SINCE": string | null;
    readonly "MINUTE_SINCE": string | null;
    readonly "HOUR_SINCE": string | null;
    readonly "DAY_SINCE": string | null;
    readonly "WEEK_SINCE": string | null;
    readonly "JULIAN_YEAR_SINCE": string | null;
    readonly "KILOGRAM_SINCE": string | null;
    readonly "GRAM_SINCE": string | null;
    readonly "MILLIGRAM_SINCE": string | null;
    readonly "DECAGRAM_SINCE": string | null;
    readonly "TONNE_SINCE": string | null;
    readonly "OUNCE_SINCE": string | null;
    readonly "POUND_SINCE": string | null;
    readonly "BIT_SINCE": string | null;
    readonly "KILOBIT_SINCE": string | null;
    readonly "MEGABIT_SINCE": string | null;
    readonly "GIGABIT_SINCE": string | null;
    readonly "TERABIT_SINCE": string | null;
    readonly "PETABIT_SINCE": string | null;
    readonly "EXABIT_SINCE": string | null;
    readonly "ZETTABIT_SINCE": string | null;
    readonly "YOTTABIT_SINCE": string | null;
    readonly "BYTE_SINCE": string | null;
    readonly "KILOBYTE_SINCE": string | null;
    readonly "MEGABYTE_SINCE": string | null;
    readonly "GIGABYTE_SINCE": string | null;
    readonly "TERABYTE_SINCE": string | null;
    readonly "PETABYTE_SINCE": string | null;
    readonly "EXABYTE_SINCE": string | null;
    readonly "ZETTABYTE_SINCE": string | null;
    readonly "YOTTABYTE_SINCE": string | null;
    readonly "JOULE_SINCE": string | null;
    readonly "ELECTRONO_VOLT_SINCE": string | null;
    readonly "KILO_ELECTRONO_VOLT_SINCE": string | null;
    readonly "MEGA_ELECTRONO_VOLT_SINCE": string | null;
    readonly "GIGA_ELECTRONO_VOLT_SINCE": string | null;
    readonly "TERA_ELECTRONO_VOLT_SINCE": string | null;
    readonly "METRE_PER_SECOND_SINCE": string | null;
    readonly "KILOMETRE_PER_HOUR_SINCE": string | null;
    readonly "MILE_PER_HOUR_SINCE": string | null;
    readonly "KNOT_SINCE": string | null;
    readonly "METRE_PER_SECOND2_SINCE": string | null;
    readonly "KILOMETRE_PER_HOUR2_SINCE": string | null;
    readonly "MILE_PER_HOUR2_SINCE": string | null;
    readonly "RADIAN_ARC_SINCE": string | null;
    readonly "DEGREE_ARC_SINCE": string | null;
    readonly "MINUTE_ARC_SINCE": string | null;
    readonly "SECOND_ARC_SINCE": string | null;
}

export interface stringutils_StringUtilsStatics {
    /**
     * Converts integer number to hex string (plain text)
     * @param p0 - Integer number
     * @returns Hex string (i.e. FF23)
     */
    "numberToHexString"(p0: number | Int32Value): string | null;

    /**
     * Converts long number to hex string (plain text)
     * @param p0 - Long number
     * @returns Hex string (i.e. FF23)
     */
    "numberToHexString"(p0: bigint): string | null;

    /**
     * Converts (long)double number to hex string (plain text)
     * @param p0 - Double number
     * @returns Hex string (i.e. FF23)
     */
    "numberToHexString"(p0: number): string | null;

    /**
     * Converts hex string into ASCII string, where each letter is represented by two hex digits (byte) from
     * the hex string.
     * @param p0 - Hex string (i.e. 48656C6C6F)
     * @returns ASCII string (i.e. '48656C6C6F' = 'Hello')
     */
    "hexString2AsciiString"(p0: string): string | null;

    /**
     * Converts number into ASCII string, where each letter is represented by two hex digits (byte) from the
     * hex representation of the original number
     * @param p0 - Integer number (i.e. 310939249775 = '48656C6C6F')
     * @returns ASCII string (i.e. '48656C6C6F' = 'Hello')
     */
    "numberToAsciiString"(p0: number | Int32Value): string | null;

    /**
     * Converts number into ASCII string, where each letter is represented by two hex digits (byte) from the
     * hex representation of the original number
     * @param p0 - Long number (i.e. 310939249775 = '48656C6C6F')
     * @returns ASCII string (i.e. '48656C6C6F' = 'Hello')
     */
    "numberToAsciiString"(p0: bigint): string | null;

    /**
     * Converts (long)double number into ASCII string, where each letter is represented by two hex digits
     * (byte) from the hex representation of the original number cast to long type.
     * @param p0 - Double number (i.e. 310939249775 = '48656C6C6F')
     * @returns ASCII string (i.e. '48656C6C6F' = 'Hello')
     */
    "numberToAsciiString"(p0: number): string | null;

    /**
     * Counts non-overlapping, case-sensitive occurrences of a substring.
     * @param p0 - The text to search.
     * @param p1 - The literal substring to count.
     * @returns The count; -1 if either input is null, or 0 for an empty input or substring.
     */
    "countOccurrences"(p0: string | null, p1: string | null): number;

    /**
     * Counts non-overlapping, case-sensitive occurrences of a substring.
     * @param p0 - The text to search.
     * @param p1 - The literal substring to count.
     * @returns The count; -1 if either input is null, or 0 for an empty input or substring.
     */
    "countOccurrences"(p0: string, p1: string): number;

    /**
     * Counts non-overlapping, case-sensitive occurrences of a substring.
     * @param p0 - The text to search.
     * @param p1 - The literal substring to count.
     * @returns The count; -1 if either input is null, or 0 for an empty input or substring.
     */
    "countOccurrences"(p0: string, p1: string): number;

    /**
     * Counts lines separated by a newline character, including an empty trailing line.
     * @param p0 - The text to inspect.
     * @returns The line count; 0 for empty text, or -1 for null.
     */
    "countLines"(p0: string | null): number;

    /**
     * Function used to introduce some compatibility between JAVA and C# while regexp matching.
     * @param p0 - String
     * @param p1 - Pattern (regexp)
     * @returns True if pattern matches entirely, False otherwise
     */
    "regexMatch"(p0: string, p1: string): boolean;
}

export interface syntaxcheckerStatics {
    readonly "EOF": number;
    readonly "WHITESPACE": number;
    readonly "LETTER": number;
    readonly "DIGIT": number;
    readonly "DIGIT_B1": number;
    readonly "DIGIT_B2": number;
    readonly "DIGIT_B3": number;
    readonly "DIGIT_B4": number;
    readonly "DIGIT_B5": number;
    readonly "DIGIT_B6": number;
    readonly "DIGIT_B7": number;
    readonly "DIGIT_B8": number;
    readonly "DIGIT_B9": number;
    readonly "DIGIT_B10": number;
    readonly "DIGIT_B11": number;
    readonly "DIGIT_B12": number;
    readonly "DIGIT_B13": number;
    readonly "DIGIT_B14": number;
    readonly "DIGIT_B15": number;
    readonly "DIGIT_B16": number;
    readonly "DIGIT_B17": number;
    readonly "DIGIT_B18": number;
    readonly "DIGIT_B19": number;
    readonly "DIGIT_B20": number;
    readonly "DIGIT_B21": number;
    readonly "DIGIT_B22": number;
    readonly "DIGIT_B23": number;
    readonly "DIGIT_B24": number;
    readonly "DIGIT_B25": number;
    readonly "DIGIT_B26": number;
    readonly "DIGIT_B27": number;
    readonly "DIGIT_B28": number;
    readonly "DIGIT_B29": number;
    readonly "DIGIT_B30": number;
    readonly "DIGIT_B31": number;
    readonly "DIGIT_B32": number;
    readonly "DIGIT_B33": number;
    readonly "DIGIT_B34": number;
    readonly "DIGIT_B35": number;
    readonly "DIGIT_B36": number;
    readonly "LETTERS": number;
    readonly "INTEGER": number;
    readonly "DEC_FRACT": number;
    readonly "DEC_FRACT_OR_INT": number;
    readonly "DECIMAL": number;
    readonly "BASE1": number;
    readonly "BASE2": number;
    readonly "BASE3": number;
    readonly "BASE4": number;
    readonly "BASE5": number;
    readonly "BASE6": number;
    readonly "BASE7": number;
    readonly "BASE8": number;
    readonly "BASE9": number;
    readonly "BASE10": number;
    readonly "BASE11": number;
    readonly "BASE12": number;
    readonly "BASE13": number;
    readonly "BASE14": number;
    readonly "BASE15": number;
    readonly "BASE16": number;
    readonly "BASE17": number;
    readonly "BASE18": number;
    readonly "BASE19": number;
    readonly "BASE20": number;
    readonly "BASE21": number;
    readonly "BASE22": number;
    readonly "BASE23": number;
    readonly "BASE24": number;
    readonly "BASE25": number;
    readonly "BASE26": number;
    readonly "BASE27": number;
    readonly "BASE28": number;
    readonly "BASE29": number;
    readonly "BASE30": number;
    readonly "BASE31": number;
    readonly "BASE32": number;
    readonly "BASE33": number;
    readonly "BASE34": number;
    readonly "BASE35": number;
    readonly "BASE36": number;
    readonly "BINARY": number;
    readonly "OCTAL": number;
    readonly "HEXADECIMAL": number;
    readonly "FRACTION": number;
    readonly "LEFT_PAR": number;
    readonly "RIGHT_PAR": number;
    readonly "COMMA": number;
    readonly "SEMICOLON": number;
    readonly "PLUS": number;
    readonly "MINUS": number;
    readonly "MULTIPLY": number;
    readonly "DIV": number;
    readonly "POWER": number;
    readonly "TETRATION": number;
    readonly "MODULO": number;
    readonly "FACTORIAL": number;
    readonly "PERCENTAGE": number;
    readonly "EQ": number;
    readonly "NEQ": number;
    readonly "LT": number;
    readonly "LEQ": number;
    readonly "GT": number;
    readonly "GEQ": number;
    readonly "OR": number;
    readonly "AND": number;
    readonly "NOT": number;
    readonly "UNICODE_ROOT": number;
    readonly "BITNOT": number;
    readonly "IMP": number;
    readonly "CIMP": number;
    readonly "NIMP": number;
    readonly "CNIMP": number;
    readonly "NAND": number;
    readonly "EQV": number;
    readonly "NOR": number;
    readonly "BITWISE": number;
    readonly "XOR": number;
    readonly "IDENTIFIER": number;
    readonly "LEFT_OR_RIGHT_DER": number;
    readonly "UNICODE_NAME": number;
    readonly "OTHER_CHAR": number;
    readonly "INVALID_TOKEN": number;
    readonly "UNEXPECTED_CHAR": number;
    readonly "DEFAULT": number;
    readonly "tokenImage": ReadonlyArray<string | null>;
}

export interface NativeArrayConstructor {
    readonly prototype: NativeArray<unknown>;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "PrimitiveElementPtr"): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "PrimitiveElementPtr", rows: number): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "PrimitiveElementPtr", rows: number, columns: number): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "PrimitiveElementPtr", values: readonly (PrimitiveElement | null)[]): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "PrimitiveElementPtr", values: NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | readonly (PrimitiveElement | null)[]): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "CalcStepRecordPtr"): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "CalcStepRecordPtr", rows: number): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "CalcStepRecordPtr", rows: number, columns: number): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "CalcStepRecordPtr", values: readonly (CalcStepRecord | null)[]): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "CalcStepRecordPtr", values: NativeList<CalcStepRecord | null, "CalcStepRecordPtr"> | readonly (CalcStepRecord | null)[]): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "double"): NativeArray<number, "double">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "double", rows: number): NativeArray<number, "double">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "double", rows: number, columns: number): NativeArray<number, "double">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "double", values: readonly (number)[] | Float64Array): NativeArray<number, "double">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "double", values: NativeList<number, "double"> | readonly (number)[]): NativeArray<number, "double">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "int"): NativeArray<number, "int">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "int", rows: number): NativeArray<number, "int">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "int", rows: number, columns: number): NativeArray<number, "int">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "int", values: readonly (number)[] | Int32Array): NativeArray<number, "int">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "int", values: NativeList<number, "int"> | readonly (number)[]): NativeArray<number, "int">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "Long"): NativeArray<bigint, "Long">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "Long", rows: number): NativeArray<bigint, "Long">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "Long", rows: number, columns: number): NativeArray<bigint, "Long">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "Long", values: readonly (bigint)[] | BigInt64Array): NativeArray<bigint, "Long">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "Long", values: NativeList<bigint, "Long"> | readonly (bigint)[]): NativeArray<bigint, "Long">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "StringPtr"): NativeArray<string | null, "StringPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "StringPtr", rows: number): NativeArray<string | null, "StringPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "StringPtr", rows: number, columns: number): NativeArray<string | null, "StringPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "StringPtr", values: readonly (string | null)[]): NativeArray<string | null, "StringPtr">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "StringPtr", values: NativeList<string | null, "StringPtr"> | readonly (string | null)[]): NativeArray<string | null, "StringPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ArgumentPtr"): NativeArray<Argument | null, "ArgumentPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ArgumentPtr", rows: number): NativeArray<Argument | null, "ArgumentPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ArgumentPtr", rows: number, columns: number): NativeArray<Argument | null, "ArgumentPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ArgumentPtr", values: readonly (Argument | null)[]): NativeArray<Argument | null, "ArgumentPtr">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "ArgumentPtr", values: NativeList<Argument | null, "ArgumentPtr"> | readonly (Argument | null)[]): NativeArray<Argument | null, "ArgumentPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ConstantPtr"): NativeArray<Constant | null, "ConstantPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ConstantPtr", rows: number): NativeArray<Constant | null, "ConstantPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ConstantPtr", rows: number, columns: number): NativeArray<Constant | null, "ConstantPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ConstantPtr", values: readonly (Constant | null)[]): NativeArray<Constant | null, "ConstantPtr">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "ConstantPtr", values: NativeList<Constant | null, "ConstantPtr"> | readonly (Constant | null)[]): NativeArray<Constant | null, "ConstantPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "FunctionPtr"): NativeArray<Function | null, "FunctionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "FunctionPtr", rows: number): NativeArray<Function | null, "FunctionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "FunctionPtr", rows: number, columns: number): NativeArray<Function | null, "FunctionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "FunctionPtr", values: readonly (Function | null)[]): NativeArray<Function | null, "FunctionPtr">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "FunctionPtr", values: NativeList<Function | null, "FunctionPtr"> | readonly (Function | null)[]): NativeArray<Function | null, "FunctionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "SpecialValuePtr"): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "SpecialValuePtr", rows: number): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "SpecialValuePtr", rows: number, columns: number): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "SpecialValuePtr", values: readonly (SpecialValue | null)[]): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "SpecialValuePtr", values: NativeList<SpecialValue | null, "SpecialValuePtr"> | readonly (SpecialValue | null)[]): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ExpressionPtr"): NativeArray<Expression | null, "ExpressionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ExpressionPtr", rows: number): NativeArray<Expression | null, "ExpressionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ExpressionPtr", rows: number, columns: number): NativeArray<Expression | null, "ExpressionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "ExpressionPtr", values: readonly (Expression | null)[]): NativeArray<Expression | null, "ExpressionPtr">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "ExpressionPtr", values: NativeList<Expression | null, "ExpressionPtr"> | readonly (Expression | null)[]): NativeArray<Expression | null, "ExpressionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "TokenPtr"): NativeArray<Token | null, "TokenPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "TokenPtr", rows: number): NativeArray<Token | null, "TokenPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "TokenPtr", rows: number, columns: number): NativeArray<Token | null, "TokenPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "TokenPtr", values: readonly (Token | null)[]): NativeArray<Token | null, "TokenPtr">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "TokenPtr", values: NativeList<Token | null, "TokenPtr"> | readonly (Token | null)[]): NativeArray<Token | null, "TokenPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "KeyWordPtr"): NativeArray<KeyWord | null, "KeyWordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "KeyWordPtr", rows: number): NativeArray<KeyWord | null, "KeyWordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "KeyWordPtr", rows: number, columns: number): NativeArray<KeyWord | null, "KeyWordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "KeyWordPtr", values: readonly (KeyWord | null)[]): NativeArray<KeyWord | null, "KeyWordPtr">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "KeyWordPtr", values: NativeList<KeyWord | null, "KeyWordPtr"> | readonly (KeyWord | null)[]): NativeArray<KeyWord | null, "KeyWordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "RecursiveArgumentPtr"): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "RecursiveArgumentPtr", rows: number): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "RecursiveArgumentPtr", rows: number, columns: number): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native handle. Release it with delete().
     */
    new(kind: "RecursiveArgumentPtr", values: readonly (RecursiveArgument | null)[]): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    /**
     * Copies values into a native array.
     * @param kind - Native element kind.
     * @param values - Initial element values.
     * @returns A new owning native array handle. Release it with delete().
     */
    toArray(kind: "RecursiveArgumentPtr", values: NativeList<RecursiveArgument | null, "RecursiveArgumentPtr"> | readonly (RecursiveArgument | null)[]): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;
}

/**
 * Options forwarded to the asynchronous Emscripten module initializer.
 */
export interface InitOptions {
    /**
     * Resolves the WASM asset location.
     * @param path - Requested asset name.
     * @param prefix - Emscripten asset prefix.
     * @returns The asset URL or path.
     */
    locateFile?: (path: string, prefix: string) => string;
    /**
     * Optional preloaded WASM bytes.
     */
    wasmBinary?: Uint8Array;
    /**
     * Receives native standard-output text.
     * @param text - Text emitted by the native module.
     */
    print?: (text: string) => void;
    /**
     * Receives native standard-error text.
     * @param text - Text emitted by the native module.
     */
    printErr?: (text: string) => void;
}

export interface VirtualFileSystem {
    /**
     * Reads bytes from this module's virtual filesystem.
     * @param path - Path in this module's virtual filesystem.
     * @returns The file bytes as Uint8Array.
     * @throws {TypeError} If a path contains NUL or a supplied byte buffer is not Uint8Array.
     * @throws {Error} Named ErrnoError, with numeric errno, on a filesystem failure.
     */
    readFile(path: string): Uint8Array;

    /**
     * Writes bytes to this module's virtual filesystem.
     * @param path - Path in this module's virtual filesystem.
     * @param bytes - Byte data to copy.
     * @throws {TypeError} If a path contains NUL or a supplied byte buffer is not Uint8Array.
     * @throws {Error} Named ErrnoError, with numeric errno, on a filesystem failure.
     */
    writeFile(path: string, bytes: Uint8Array): void;

    /**
     * Removes a file from this module's virtual filesystem.
     * @param path - Path in this module's virtual filesystem.
     * @throws {TypeError} If a path contains NUL or a supplied byte buffer is not Uint8Array.
     * @throws {Error} Named ErrnoError, with numeric errno, on a filesystem failure.
     */
    unlink(path: string): void;

    /**
     * Creates a directory in this module's virtual filesystem.
     * @param path - Path in this module's virtual filesystem.
     * @throws {TypeError} If a path contains NUL or a supplied byte buffer is not Uint8Array.
     * @throws {Error} Named ErrnoError, with numeric errno, on a filesystem failure.
     */
    mkdir(path: string): void;

    /**
     * Removes an empty directory from this module's virtual filesystem.
     * @param path - Path in this module's virtual filesystem.
     * @throws {TypeError} If a path contains NUL or a supplied byte buffer is not Uint8Array.
     * @throws {Error} Named ErrnoError, with numeric errno, on a filesystem failure.
     */
    rmdir(path: string): void;
}

/** Experimental arithmetic LaTeX subset; not a full TeX importer.
 * API/subset/metadata may evolve. Offsets count UTF-16 code units.
 * @version        6.2.0
 */
export namespace LaTeXParser {
    /** Experimental immutable parser node.
     * @version        6.2.0
     */
    interface Node extends NativeHandle {
        /**
         * Creates another owning handle to the same native object; it does not clone the object.
         * @returns An alias handle. Release it separately with delete().
         * @throws {TypeError} If this handle has been deleted.
         */
        cloneHandle(): Node;
        /**
         * Returns the mathematical operation represented by this node.
         * @returns The operation kind; no numerical value is computed.
         */
        "getKind"(): Kind;
        /**
         * Returns the number spelling or decoded symbol name.
         * @returns The original number spelling, decoded symbol name, or an empty string for an operation.
         */
        "getText"(): string;
        /**
         * Returns the source typography of a symbol.
         * @returns The typography for a SYMBOL node, or DEFAULT for other kinds; no constant or unit meaning
         *   is inferred.
         */
        "getSymbolStyle"(): SymbolStyle;
        /**
         * Returns the operands in mathematical order.
         * @returns A frozen JavaScript array of owning child handles in mathematical order. Release every
         *   returned handle with delete().
         */
        "getChildren"(): readonly Node[];
        /**
         * Returns the inclusive start of this node in the source.
         * @returns The zero-based UTF-16 start offset.
         */
        "getStartOffset"(): number;
        /**
         * Returns the exclusive end of this node in the source.
         * @returns The zero-based UTF-16 end offset.
         */
        "getEndOffset"(): number;
        /**
         * Returns the exact source text covered by this node.
         * @returns The original source spelling, including any enclosing grouping.
         */
        "getSourceText"(): string;
    }
    type Kind = 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12;
    interface KindStatics {
        readonly NUMBER: 0;
        readonly SYMBOL: 1;
        readonly POSITIVE: 2;
        readonly NEGATIVE: 3;
        readonly ADD: 4;
        readonly SUBTRACT: 5;
        readonly MULTIPLY: 6;
        readonly DIVIDE: 7;
        readonly POWER: 8;
        readonly FACTORIAL: 9;
        readonly PERCENT: 10;
        readonly FLOOR: 11;
        readonly REMAINDER: 12;
    }
    type SymbolStyle = 0 | 1 | 2;
    interface SymbolStyleStatics {
        readonly DEFAULT: 0;
        readonly ITALIC: 1;
        readonly UPRIGHT: 2;
    }
}
/** Experimental parser; unsupported input throws a native invalid_argument Error.
 * @version        6.2.0
 */
export interface LaTeXParserStatics {
    /**
     * Parses one nonempty mathematical fragment into an immutable structure. Delimiters such as $...$ and full
     * documents are outside this subset.
     * @param latex - Mathematical LaTeX fragment.
     * @returns The symbolic structure, without calculation or simplification. Release the returned node handle
     *   with delete().
     * @throws {Error} Named `std::invalid_argument`: For null/empty input, unsupported syntax, malformed input or a
     *   resource limit; message includes a UTF-16 offset.
     * @throws {TypeError} If the input is neither a string nor null.
     */
    "parse"(latex: string | null): LaTeXParser.Node;
    readonly Node: { readonly prototype: LaTeXParser.Node };
    readonly Kind: LaTeXParser.KindStatics;
    readonly SymbolStyle: LaTeXParser.SymbolStyleStatics;
}

/**
 * Public API of one initialized C++/WASM module. Constructors and returned handles belong to this module.
 * @version 6.2.0
 */
export interface MxParser {
    readonly LaTeXParser: LaTeXParserStatics;
    /**
     * Module-local virtual filesystem shared with native file operations; paths do not address host files.
     */
    readonly FS: Readonly<VirtualFileSystem>;
    /**
     * Native binary128 value selector namespace. Runtime fromBits(bits) accepts an unsigned 128-bit bigint
     * payload, not a numeric integer value.
     */
    readonly LongDouble: {};
    /**
     * Selects a native int overload without allocating a native handle.
     * @param value - Signed 32-bit integer; negative zero becomes zero.
     * @returns An immutable overload selector.
     * @throws {TypeError} If the value is not a number.
     * @throws {RangeError} If the value is not a signed 32-bit integer.
     */
    readonly int32: (value: number) => Int32Value;

    /**
     * Selects a typed null native list without allocating a native handle.
     * @param kind - Native element kind.
     * @returns An immutable null-list selector.
     */
    nullList<K extends NullNativeListKind>(kind: K): NullNativeList<K>;

    readonly Vector: NativeVectorConstructor;

    /**
     * Creates a native vector.
     * @param kind - Native element kind.
     * @param size - Initial number of elements.
     * @returns A new owning native vector handle. Release it with delete().
     */
    new_Vector<K extends keyof NativeVectorTypes>(kind: K, size?: number): NativeVector<NativeVectorTypes[K], K>;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "PrimitiveElementPtr"): NativeList<PrimitiveElement | null, "PrimitiveElementPtr">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "CalcStepRecordPtr"): NativeList<CalcStepRecord | null, "CalcStepRecordPtr">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "double"): NativeList<number, "double">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "int"): NativeList<number, "int">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "Long"): NativeList<bigint, "Long">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "StringPtr"): NativeList<string | null, "StringPtr">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "ArgumentPtr"): NativeList<Argument | null, "ArgumentPtr">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "ConstantPtr"): NativeList<Constant | null, "ConstantPtr">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "FunctionPtr"): NativeList<Function | null, "FunctionPtr">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "SpecialValuePtr"): NativeList<SpecialValue | null, "SpecialValuePtr">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "ExpressionPtr"): NativeList<Expression | null, "ExpressionPtr">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "TokenPtr"): NativeList<Token | null, "TokenPtr">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "KeyWordPtr"): NativeList<KeyWord | null, "KeyWordPtr">;

    /**
     * Creates a native stack.
     * @param kind - Native element kind.
     * @returns A new owning native stack handle. Release it with delete().
     */
    new_Stack(kind: "RecursiveArgumentPtr"): NativeList<RecursiveArgument | null, "RecursiveArgumentPtr">;

    /**
     * Creates a native list.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_ListInt(): NativeList<number, "int">;

    readonly Array: NativeArrayConstructor;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "PrimitiveElementPtr", rows: number): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "PrimitiveElementPtr", rows: number, columns: number): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "CalcStepRecordPtr", rows: number): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "CalcStepRecordPtr", rows: number, columns: number): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "double", rows: number): NativeArray<number, "double">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "double", rows: number, columns: number): NativeArray<number, "double">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "int", rows: number): NativeArray<number, "int">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "int", rows: number, columns: number): NativeArray<number, "int">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "Long", rows: number): NativeArray<bigint, "Long">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "Long", rows: number, columns: number): NativeArray<bigint, "Long">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "StringPtr", rows: number): NativeArray<string | null, "StringPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "StringPtr", rows: number, columns: number): NativeArray<string | null, "StringPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "ArgumentPtr", rows: number): NativeArray<Argument | null, "ArgumentPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "ArgumentPtr", rows: number, columns: number): NativeArray<Argument | null, "ArgumentPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "ConstantPtr", rows: number): NativeArray<Constant | null, "ConstantPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "ConstantPtr", rows: number, columns: number): NativeArray<Constant | null, "ConstantPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "FunctionPtr", rows: number): NativeArray<Function | null, "FunctionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "FunctionPtr", rows: number, columns: number): NativeArray<Function | null, "FunctionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "SpecialValuePtr", rows: number): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "SpecialValuePtr", rows: number, columns: number): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "ExpressionPtr", rows: number): NativeArray<Expression | null, "ExpressionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "ExpressionPtr", rows: number, columns: number): NativeArray<Expression | null, "ExpressionPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "TokenPtr", rows: number): NativeArray<Token | null, "TokenPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "TokenPtr", rows: number, columns: number): NativeArray<Token | null, "TokenPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "KeyWordPtr", rows: number): NativeArray<KeyWord | null, "KeyWordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "KeyWordPtr", rows: number, columns: number): NativeArray<KeyWord | null, "KeyWordPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "RecursiveArgumentPtr", rows: number): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    /**
     * Creates a native array.
     * @param kind - Native element kind.
     * @param rows - Number of rows.
     * @param columns - Number of columns.
     * @returns A new owning native array handle. Release it with delete().
     */
    new_Array(kind: "RecursiveArgumentPtr", rows: number, columns: number): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "PrimitiveElementPtr"): NativeList<PrimitiveElement | null, "PrimitiveElementPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "PrimitiveElementPtr", capacity: number): NativeList<PrimitiveElement | null, "PrimitiveElementPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "CalcStepRecordPtr"): NativeList<CalcStepRecord | null, "CalcStepRecordPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "CalcStepRecordPtr", capacity: number): NativeList<CalcStepRecord | null, "CalcStepRecordPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "double"): NativeList<number, "double">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "double", capacity: number): NativeList<number, "double">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "int"): NativeList<number, "int">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "int", capacity: number): NativeList<number, "int">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "Long"): NativeList<bigint, "Long">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "Long", capacity: number): NativeList<bigint, "Long">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "StringPtr"): NativeList<string | null, "StringPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "StringPtr", capacity: number): NativeList<string | null, "StringPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "ArgumentPtr"): NativeList<Argument | null, "ArgumentPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "ArgumentPtr", capacity: number): NativeList<Argument | null, "ArgumentPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "ConstantPtr"): NativeList<Constant | null, "ConstantPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "ConstantPtr", capacity: number): NativeList<Constant | null, "ConstantPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "FunctionPtr"): NativeList<Function | null, "FunctionPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "FunctionPtr", capacity: number): NativeList<Function | null, "FunctionPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "SpecialValuePtr"): NativeList<SpecialValue | null, "SpecialValuePtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "SpecialValuePtr", capacity: number): NativeList<SpecialValue | null, "SpecialValuePtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "ExpressionPtr"): NativeList<Expression | null, "ExpressionPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "ExpressionPtr", capacity: number): NativeList<Expression | null, "ExpressionPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "TokenPtr"): NativeList<Token | null, "TokenPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "TokenPtr", capacity: number): NativeList<Token | null, "TokenPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "KeyWordPtr"): NativeList<KeyWord | null, "KeyWordPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "KeyWordPtr", capacity: number): NativeList<KeyWord | null, "KeyWordPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "RecursiveArgumentPtr"): NativeList<RecursiveArgument | null, "RecursiveArgumentPtr">;

    /**
     * Creates a native list.
     * @param type - Native element kind.
     * @param capacity - Initial reserved capacity; does not add elements.
     * @returns A new owning native list handle. Release it with delete().
     */
    new_List(type: "RecursiveArgumentPtr", capacity: number): NativeList<RecursiveArgument | null, "RecursiveArgumentPtr">;

    readonly Argument: ArgumentConstructor;
    readonly AstronomicalConstants: mathcollection_AstronomicalConstantsStatics;
    readonly BinaryRelation: parsertokens_BinaryRelationStatics;
    readonly BinaryRelations: mathcollection_BinaryRelationsStatics;
    readonly BitwiseOperator: parsertokens_BitwiseOperatorStatics;
    readonly BooleanAlgebra: mathcollection_BooleanAlgebraStatics;
    readonly BooleanOperator: parsertokens_BooleanOperatorStatics;
    readonly CalcStepRecord: CalcStepRecordConstructor & {
        readonly StepType: CalcStepRecord_StepTypeStatics;
    };
    readonly CalcStepsRegister: CalcStepsRegisterConstructor;
    readonly Calculus: mathcollection_CalculusStatics;
    readonly CalculusOperator: parsertokens_CalculusOperatorStatics;
    readonly CharStream: CharStreamConstructor;
    readonly Constant: ConstantConstructor;
    readonly ConstantValue: parsertokens_ConstantValueStatics;
    readonly Evaluate: mathcollection_EvaluateStatics;
    readonly Expression: ExpressionConstructor;
    readonly Function: FunctionConstructor;
    readonly Function1Arg: parsertokens_Function1ArgStatics;
    readonly Function2Arg: parsertokens_Function2ArgStatics;
    readonly Function3Arg: parsertokens_Function3ArgStatics;
    readonly FunctionVariadic: parsertokens_FunctionVariadicStatics;
    readonly IRandom: IRandomConstructor;
    readonly JavaCCToken: JavaCCTokenConstructor;
    readonly KeyWord: KeyWordConstructor;
    readonly License: LicenseConstructor;
    readonly MathConstants: mathcollection_MathConstantsStatics;
    readonly MathFunctions: mathcollection_MathFunctionsStatics;
    readonly NumberTheory: mathcollection_NumberTheoryStatics;
    readonly Operator: parsertokens_OperatorStatics;
    readonly ParseException: ParseExceptionConstructor;
    readonly ParserSymbol: parsertokens_ParserSymbolStatics;
    readonly PhysicalConstants: mathcollection_PhysicalConstantsStatics;
    readonly PrimesCache: PrimesCacheConstructor;
    readonly PrimitiveElement: PrimitiveElementConstructor;
    readonly ProbabilityDistributions: mathcollection_ProbabilityDistributionsStatics;
    readonly Random: RandomConstructor;
    readonly RandomVariable: parsertokens_RandomVariableStatics;
    readonly ReaderStream: ReaderStreamConstructor;
    readonly RecursiveArgument: RecursiveArgumentConstructor;
    readonly SerializationUtils: SerializationUtilsStatics;
    readonly SpecialFunctions: mathcollection_SpecialFunctionsStatics;
    readonly SpecialValue: SpecialValueConstructor;
    readonly SpecialValueTrigonometric: SpecialValueTrigonometricConstructor;
    readonly Statistics: mathcollection_StatisticsStatics;
    readonly StepType: CalcStepRecord_StepTypeStatics;
    readonly StringModel: StringModelStatics;
    readonly StringResources: StringResourcesConstructor;
    readonly StringUtils: stringutils_StringUtilsStatics;
    readonly SyntaxChecker: SyntaxCheckerConstructor;
    readonly SyntaxCheckerTokenManager: SyntaxCheckerTokenManagerConstructor;
    readonly Token: TokenConstructor;
    readonly TokenMgrError: TokenMgrErrorConstructor;
    readonly Unit: parsertokens_UnitStatics;
    readonly Units: mathcollection_UnitsStatics;
    readonly mXparser: mXparserStatics;
    readonly mathcollection: {
        readonly AstronomicalConstants: mathcollection_AstronomicalConstantsStatics;
        readonly BinaryRelations: mathcollection_BinaryRelationsStatics;
        readonly BooleanAlgebra: mathcollection_BooleanAlgebraStatics;
        readonly Calculus: mathcollection_CalculusStatics;
        readonly Evaluate: mathcollection_EvaluateStatics;
        readonly IRandom: IRandomConstructor;
        readonly MathConstants: mathcollection_MathConstantsStatics;
        readonly MathFunctions: mathcollection_MathFunctionsStatics;
        readonly NumberTheory: mathcollection_NumberTheoryStatics;
        readonly PhysicalConstants: mathcollection_PhysicalConstantsStatics;
        readonly PrimesCache: PrimesCacheConstructor;
        readonly ProbabilityDistributions: mathcollection_ProbabilityDistributionsStatics;
        readonly SpecialFunctions: mathcollection_SpecialFunctionsStatics;
        readonly SpecialValue: SpecialValueConstructor;
        readonly SpecialValueTrigonometric: SpecialValueTrigonometricConstructor;
        readonly Statistics: mathcollection_StatisticsStatics;
        readonly Units: mathcollection_UnitsStatics;
    };
    readonly parsertokens: {
        readonly BinaryRelation: parsertokens_BinaryRelationStatics;
        readonly BitwiseOperator: parsertokens_BitwiseOperatorStatics;
        readonly BooleanOperator: parsertokens_BooleanOperatorStatics;
        readonly CalculusOperator: parsertokens_CalculusOperatorStatics;
        readonly ConstantValue: parsertokens_ConstantValueStatics;
        readonly Function1Arg: parsertokens_Function1ArgStatics;
        readonly Function2Arg: parsertokens_Function2ArgStatics;
        readonly Function3Arg: parsertokens_Function3ArgStatics;
        readonly FunctionVariadic: parsertokens_FunctionVariadicStatics;
        readonly KeyWord: KeyWordConstructor;
        readonly Operator: parsertokens_OperatorStatics;
        readonly ParserSymbol: parsertokens_ParserSymbolStatics;
        readonly RandomVariable: parsertokens_RandomVariableStatics;
        readonly Token: TokenConstructor;
        readonly Unit: parsertokens_UnitStatics;
    };
    readonly stringutils: {
        readonly StringUtils: stringutils_StringUtilsStatics;
    };
    readonly syntaxchecker: syntaxcheckerStatics & {
        readonly CharStream: CharStreamConstructor;
        readonly JavaCCToken: JavaCCTokenConstructor;
        readonly ParseException: ParseExceptionConstructor;
        readonly ReaderStream: ReaderStreamConstructor;
        readonly SyntaxChecker: SyntaxCheckerConstructor;
        readonly SyntaxCheckerTokenManager: SyntaxCheckerTokenManagerConstructor;
        readonly TokenMgrError: TokenMgrErrorConstructor;
    };
    readonly wrapper: {
        readonly Random: RandomConstructor;
    };
    readonly ArgumentExtension: typeof ArgumentExtensionBase;
    readonly FunctionExtension: typeof FunctionExtensionBase;
    readonly FunctionExtensionVariadic: typeof FunctionExtensionVariadicBase;
}

/**
 * Initializes an independent instance of the existing C++ engine in WebAssembly.
 *
 * Calculations on the returned API are synchronous. Native handles, including handles returned by methods,
 * must be released with delete() when finished.
 * @param options - Emscripten initialization options; the caller's object is not modified.
 * @returns A promise resolving to this module instance's public API.
 * @throws {TypeError} If options is not an object. Initialization failures reject the promise.
 */
export function initMxParser(options?: InitOptions): Promise<MxParser>;
