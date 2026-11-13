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

declare class NativeHandleBase {
    protected constructor();

    private readonly __nativeHandleBrand: never;
    readonly [nativeHandleMarker]: true;

    delete(): void;

    isDeleted(): boolean;

    cloneHandle(): NativeHandleBase;

    isAliasOf(other: NativeHandleBase): boolean;
}

export type NativeHandle = NativeHandleBase;
declare const processorInputMarker: unique symbol;
declare const nativeArrayPointerKindMarker: unique symbol;

export interface ReadonlyNativeArrayPointer<T, Kind extends string = string> extends NativeHandle {
    readonly [nativeArrayPointerKindMarker]: Kind;
    readonly isConst: boolean;

    get(): T;

    advance(difference: number): void;

    equals(other: ReadonlyNativeArrayPointer<T, Kind>): boolean;

    copy(): ReadonlyNativeArrayPointer<T, Kind>;

    cloneHandle(): ReadonlyNativeArrayPointer<T, Kind>;
}

export interface NativeArrayPointer<T, Kind extends string = string> extends ReadonlyNativeArrayPointer<T, Kind> {
    set(value: T): void;

    copy(): NativeArrayPointer<T, Kind>;

    cloneHandle(): NativeArrayPointer<T, Kind>;
}

declare const nativeArrayKindMarker: unique symbol;
declare const nativeArrayDataKindMarker: unique symbol;

export interface NativeArrayData<T, Kind extends string = string> extends NativeHandle {
    readonly [nativeArrayDataKindMarker]: Kind;
    readonly size: number;

    get(index: number): T;

    set(index: number, value: T): void;

    cloneHandle(): NativeArrayData<T, Kind>;
}

export interface NativeArray<T, Kind extends string = string> extends NativeHandle {
    readonly [nativeArrayKindMarker]: Kind;
    rows: number;
    columns: number;
    length: number;
    sizet: number;
    data: NativeArrayData<T, Kind> | null;

    get(row: number): T;

    get(row: number, column: number): T;

    set(row: number, value: T): void;

    set(row: number, column: number, value: T): void;

    begin(): NativeArrayPointer<T, Kind> | null;

    end(): NativeArrayPointer<T, Kind> | null;

    begin(readOnly: false): NativeArrayPointer<T, Kind> | null;

    end(readOnly: false): NativeArrayPointer<T, Kind> | null;

    begin(readOnly: true): ReadonlyNativeArrayPointer<T, Kind> | null;

    end(readOnly: true): ReadonlyNativeArrayPointer<T, Kind> | null;

    begin(readOnly: boolean): ReadonlyNativeArrayPointer<T, Kind> | null;

    end(readOnly: boolean): ReadonlyNativeArrayPointer<T, Kind> | null;

    [Symbol.iterator](): IterableIterator<T>;

    cloneHandle(): NativeArray<T, Kind>;
}

declare const elementAtEndKindMarker: unique symbol;

export interface IRandomImplementation {
    readonly [nativeHandleMarker]?: never;

    nextInt(bound: bigint): bigint;

    nextDouble(): number;

    setSeed(seed: number): void;
}

export interface NativeFixedArray<T> extends NativeHandle, Iterable<T> {
    readonly length: number;

    get(index: number): T;

    set(index: number, element: T): void;

    cloneHandle(): NativeFixedArray<T>;

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

export interface NativeList<T, Kind extends string = string> extends NativeHandle, Iterable<T> {
    readonly [nativeListElementKind]: Kind;

    cloneHandle(): NativeList<T, Kind>;

    readonly length: number;

    size(): number;

    isEmpty(): boolean;

    get(index: number): T;

    getRef(index: number): T;

    top(): T;

    topRef(): T;

    add(element: T): void;

    add(index: number, element: T): void;

    push(element: T): void;

    addAll(elements: NativeList<T, Kind> | readonly T[]): void;

    set(index: number, element: T): void;

    contains(element: T): boolean;

    getAt(index: number): T;

    setAt(index: number, element: T): void;

    containsByPtrDeref(this: Kind extends NativeListPointerComparableKind ? NativeList<T, Kind> : never, element: T): boolean;

    removeByPtrDeref(this: Kind extends NativeListPointerComparableKind ? NativeList<T, Kind> : never, element: T): void;

    remove(index: number): void;

    remove(element: T): void;

    removeValue(element: T): void;

    pop(): void;

    clearSubList(startInclusive: number, endExclusive: number): void;

    clear(): void;

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

declare abstract class ArgumentExtensionBase {
    readonly [nativeHandleMarker]?: never;
    static readonly NULL: NullExtension<"ArgumentExtension">;

    abstract getArgumentValue(): number;

    abstract clone(): ArgumentExtensionBase;
}

declare abstract class FunctionExtensionBase {
    readonly [nativeHandleMarker]?: never;
    static readonly NULL: NullExtension<"FunctionExtension">;

    abstract getParametersNumber(): number;

    abstract setParameterValue(index: number, value: number): void;

    abstract getParameterName(index: number): string | null;

    abstract calculate(): number;

    abstract clone(): FunctionExtensionBase;
}

declare abstract class FunctionExtensionVariadicBase {
    readonly [nativeHandleMarker]?: never;
    static readonly NULL: NullExtension<"FunctionExtensionVariadic">;

    /** parameters is borrowed for this synchronous call; cloneHandle() retains an owned alias. */
    abstract calculate(parameters: NativeList<number, "double"> | null): number;

    abstract clone(): FunctionExtensionVariadicBase;
}

export type ArgumentExtension = ArgumentExtensionBase;
export type FunctionExtension = FunctionExtensionBase;
export type FunctionExtensionVariadic = FunctionExtensionVariadicBase;
declare const nativeVectorKind: unique symbol;

export interface NativeVector<T, Kind extends string = string> extends NativeHandle, Iterable<T> {
    readonly [nativeVectorKind]: Kind;
    readonly kind: Kind;
    readonly length: number;

    cloneHandle(): NativeVector<T, Kind>;

    size(): number;

    empty(): boolean;

    at(index: number): T;

    get(index: number): T;

    set(index: number, value: T): void;

    push_back(value: T): void;

    push(value: T): void;

    pop_back(): void;

    pop(): void;

    front(): T;

    back(): T;

    resize(size: number): void;

    clear(): void;

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

    new<K extends keyof NativeVectorTypes>(kind: K, size?: number): NativeVector<NativeVectorTypes[K], K>;

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

    get(index: number): NativeFixedArray<number> | null;

    set(index: number, row: NativeFixedArray<number> | ReadonlyArray<number> | null): void;

    cloneHandle(): NativeTokenSequences;
}

export type NativeStdioStream = "stdin" | "stdout" | "stderr";

export interface PrimitiveElement extends NativeHandleBase {
    cloneHandle(): PrimitiveElement;

    "getMyTypeId"(): number;
}

export interface PrimitiveElementConstructor {
    readonly prototype: PrimitiveElement;
}

export interface Argument extends PrimitiveElement {

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "getArgumentValueWithCancel"(calcStepsRegister: CalcStepsRegister | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "getArgumentValueWithCancel"(cancelId: number): number;

    cloneHandle(): Argument;

    "addDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    "addDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    "addDefinitions"(p0: PrimitiveElement | null): void;

    "removeDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    "removeDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    "removeDefinitions"(p0: PrimitiveElement | null): void;

    "addArguments"(p0: Array<Argument | null> | NativeList<Argument | null, "ArgumentPtr"> | NullNativeList<"ArgumentPtr"> | null): void;

    "addArguments"(...elements: (Argument | null | readonly (Argument | null)[])[]): void;

    "addArguments"(p0: Argument | null): void;

    "defineArguments"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    "defineArguments"(...elements: (string | null | readonly (string | null)[])[]): void;

    "defineArguments"(p0: string | null): void;

    "defineArguments"(p0: string): void;

    "getArgumentsNumber"(): number;

    "getArgumentIndex"(p0: string | null): number;

    "getArgumentIndex"(p0: string): number;

    "getArgument"(p0: number | Int32Value): Argument | null;

    "getArgument"(p0: string | null): Argument | null;

    "getArgument"(p0: string): Argument | null;

    "removeArguments"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    "removeArguments"(...p0: (Argument | readonly (Argument)[] | NativeList<Argument, "ArgumentPtr"> | null)[]): void;

    "removeAllArguments"(): void;

    "addConstants"(p0: Array<Constant | null> | NativeList<Constant | null, "ConstantPtr"> | NullNativeList<"ConstantPtr"> | null): void;

    "addConstants"(...elements: (Constant | null | readonly (Constant | null)[])[]): void;

    "addConstants"(p0: Constant | null): void;

    "defineConstant"(p0: string | null, p1: number): void;

    "defineConstant"(p0: string, p1: number): void;

    "getConstantsNumber"(): number;

    "getConstantIndex"(p0: string | null): number;

    "getConstantIndex"(p0: string): number;

    "getConstant"(p0: number | Int32Value): Constant | null;

    "getConstant"(p0: string | null): Constant | null;

    "getConstant"(p0: string): Constant | null;

    "removeConstants"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    "removeConstants"(...p0: (Constant | readonly (Constant)[] | NativeList<Constant, "ConstantPtr"> | null)[]): void;

    "removeAllConstants"(): void;

    "addFunctions"(p0: Array<Function | null> | NativeList<Function | null, "FunctionPtr"> | NullNativeList<"FunctionPtr"> | null): void;

    "addFunctions"(...elements: (Function | null | readonly (Function | null)[])[]): void;

    "addFunctions"(p0: Function | null): void;

    "defineFunction"(p0: string | null, p1: string | null, p2: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    "getFunctionsNumber"(): number;

    "getFunctionIndex"(p0: string | null): number;

    "getFunctionIndex"(p0: string): number;

    "getFunction"(p0: number | Int32Value): Function | null;

    "getFunction"(p0: string | null): Function | null;

    "getFunction"(p0: string): Function | null;

    "removeFunctions"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    "removeFunctions"(...p0: (Function | readonly (Function)[] | NativeList<Function, "FunctionPtr"> | null)[]): void;

    "removeAllFunctions"(): void;

    "defineArgument"(p0: string | null, p1: number): void;

    "defineArgument"(p0: string, p1: number): void;

    "setDescription"(p0: string | null): void;

    "setDescription"(p0: string): void;

    "getDescription"(): string | null;

    "setArgumentName"(p0: string | null): void;

    "setArgumentName"(p0: string): void;

    "getArgumentName"(): string | null;

    "setArgumentExpressionString"(p0: string | null): void;

    "setArgumentExpressionString"(p0: string): void;

    "getArgumentExpressionString"(): string | null;

    "checkSyntax"(): boolean;

    "getErrorMessage"(): string | null;

    "setArgumentValue"(p0: number): void;

    "getArgumentValue"(): number;

    "getArgumentValue"(p0: CalcStepsRegister | null): number;

    "getComputingTime"(): number;

    "setVerboseMode"(): void;

    "setSilentMode"(): void;

    "getVerboseMode"(): boolean;

    "getRecursiveMode"(): boolean;

    "getArgumentType"(): number;

    "getArgumentBodyType"(): number;

    "clone"(): Argument | null;

    "cloneForThreadSafe"(): Argument | null;

    defineFunction(name: string | null, expression: string | null, ...parameters: (string | null | readonly (string | null)[])[]): void;
}

export interface ArgumentConstructor extends Omit<PrimitiveElementConstructor, 'prototype'> {
    readonly prototype: Argument;

    new(p0: string | null, ...p1: DefinitionInput[]): Argument;

    new(p0: string | null, p1: boolean, ...p2: DefinitionInput[]): Argument;

    new(p0: string | null, p1: number): Argument;

    new(p0: string | null, p1: ArgumentExtension | NullExtension<"ArgumentExtension">): Argument;

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
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "calculateWithCancel"(calcStepsRegister: CalcStepsRegister | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "calculateWithCancel"(cancelId: number): number;

    cloneHandle(): Expression;

    "addDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    "addDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    "addDefinitions"(p0: PrimitiveElement | null): void;

    "removeDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    "removeDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    "removeDefinitions"(p0: PrimitiveElement | null): void;

    "addArguments"(p0: Array<Argument | null> | NativeList<Argument | null, "ArgumentPtr"> | NullNativeList<"ArgumentPtr"> | null): void;

    "addArguments"(...elements: (Argument | null | readonly (Argument | null)[])[]): void;

    "addArguments"(p0: Argument | null): void;

    "defineArguments"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    "defineArguments"(...elements: (string | null | readonly (string | null)[])[]): void;

    "defineArguments"(p0: string | null): void;

    "defineArguments"(p0: string): void;

    "removeArguments"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    "removeArguments"(...p0: (Argument | readonly (Argument)[] | NativeList<Argument, "ArgumentPtr"> | null)[]): void;

    "removeAllArguments"(): void;

    "addConstants"(p0: Array<Constant | null> | NativeList<Constant | null, "ConstantPtr"> | NullNativeList<"ConstantPtr"> | null): void;

    "addConstants"(...elements: (Constant | null | readonly (Constant | null)[])[]): void;

    "addConstants"(p0: Constant | null): void;

    "removeConstants"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    "removeConstants"(...p0: (Constant | readonly (Constant)[] | NativeList<Constant, "ConstantPtr"> | null)[]): void;

    "removeAllConstants"(): void;

    "addFunctions"(p0: Array<Function | null> | NativeList<Function | null, "FunctionPtr"> | NullNativeList<"FunctionPtr"> | null): void;

    "addFunctions"(...elements: (Function | null | readonly (Function | null)[])[]): void;

    "addFunctions"(p0: Function | null): void;

    "defineFunction"(p0: string | null, p1: string | null, p2: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    "removeFunctions"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    "removeFunctions"(...p0: (Function | readonly (Function)[] | NativeList<Function, "FunctionPtr"> | null)[]): void;

    "removeAllFunctions"(): void;

    "getErrorMessage"(): string | null;

    "getSyntaxStatus"(): boolean;

    "setExpressionString"(p0: string | null): void;

    "setExpressionString"(p0: string): void;

    "getExpressionString"(): string | null;

    "getCanonicalExpressionString"(): string | null;

    /** Export a mathematical LaTeX fragment, without delimiters or evaluation. */
    "getExpressionAsLaTeX"(): string;

    "clearExpressionString"(): void;

    "setDescription"(p0: string | null): void;

    "setDescription"(p0: string): void;

    "getDescription"(): string | null;

    "clearDescription"(): void;

    "setVerboseMode"(): void;

    "setSilentMode"(): void;

    "getVerboseMode"(): boolean;

    "enableImpliedMultiplicationMode"(): void;

    "disableImpliedMultiplicationMode"(): void;

    "checkIfImpliedMultiplicationMode"(): boolean;

    "enableUnicodeBuiltinKeyWordsMode"(): void;

    "disableUnicodeBuiltinKeyWordsMode"(): void;

    "checkIfUnicodeBuiltinKeyWordsMode"(): boolean;

    "enableAttemptToFixExpStrMode"(): void;

    "disableAttemptToFixExpStrMode"(): void;

    "checkIfAttemptToFixExpStrMode"(): boolean;

    "getRecursiveMode"(): boolean;

    "getComputingTime"(): number;

    "defineArgument"(p0: string | null, p1: number): void;

    "defineArgument"(p0: string, p1: number): void;

    "getArgumentIndex"(p0: string | null): number;

    "getArgumentIndex"(p0: string): number;

    "getArgumentsNumber"(): number;

    "getArgument"(p0: string | null): Argument | null;

    "getArgument"(p0: string): Argument | null;

    "getArgument"(p0: number | Int32Value): Argument | null;

    "setArgumentValue"(p0: string | null, p1: number): void;

    "setArgumentValue"(p0: string, p1: number): void;

    "getArgumentValue"(p0: string | null): number;

    "getArgumentValue"(p0: string): number;

    "defineConstant"(p0: string | null, p1: number): void;

    "defineConstant"(p0: string, p1: number): void;

    "getConstantIndex"(p0: string | null): number;

    "getConstantIndex"(p0: string): number;

    "getConstantsNumber"(): number;

    "getConstant"(p0: string | null): Constant | null;

    "getConstant"(p0: string): Constant | null;

    "getConstant"(p0: number | Int32Value): Constant | null;

    "getFunctionIndex"(p0: string | null): number;

    "getFunctionIndex"(p0: string): number;

    "getFunctionsNumber"(): number;

    "getFunction"(p0: string | null): Function | null;

    "getFunction"(p0: string): Function | null;

    "getFunction"(p0: number | Int32Value): Function | null;

    "checkLexSyntax"(): boolean;

    "checkSyntax"(): boolean;

    "calculate"(): number;

    "calculate"(p0: CalcStepsRegister | null): number;

    "getCopyOfInitialTokens"(): Array<Token | null> | null;

    "getMissingUserDefinedArguments"(): Array<string | null> | null;

    "getMissingUserDefinedUnits"(): Array<string | null> | null;

    "getMissingUserDefinedFunctions"(): Array<string | null> | null;

    "consolePrintCopyOfInitialTokens"(): void;

    "getHelp"(): string | null;

    "getHelp"(p0: string | null): string | null;

    "getHelp"(p0: string): string | null;

    "getHelp"(p0: boolean, p1: boolean, p2: string | null): string | null;

    "getHelp"(p0: boolean, p1: boolean, p2: string): string | null;

    "getHelp"(p0: string | null, p1: boolean, p2: boolean, p3: string | null): string | null;

    "getHelp"(p0: string, p1: boolean, p2: boolean, p3: string): string | null;

    "getHelpAsCsv"(): string | null;

    "getHelpAsCsv"(p0: string | null): string | null;

    "getHelpAsCsv"(p0: string): string | null;

    "getHelpAsCsv"(p0: string | null, p1: string | null, p2: boolean): string | null;

    "getHelpAsCsv"(p0: string, p1: string, p2: boolean): string | null;

    "getHelpAsCsv"(p0: string | null, p1: string | null, p2: string | null, p3: boolean): string | null;

    "getHelpAsCsv"(p0: string, p1: string, p2: string, p3: boolean): string | null;

    "getHelpAsHtmlTable"(): string | null;

    "getHelpAsHtmlTable"(p0: string | null): string | null;

    "getHelpAsHtmlTable"(p0: string): string | null;

    "getHelpAsHtmlTable"(p0: boolean, p1: boolean, p2: boolean, p3: string | null, p4: string | null): string | null;

    "getHelpAsHtmlTable"(p0: boolean, p1: boolean, p2: boolean, p3: string, p4: string): string | null;

    "getHelpAsHtmlTable"(p0: string | null, p1: boolean, p2: boolean, p3: boolean, p4: string | null, p5: string | null): string | null;

    "getHelpAsHtmlTable"(p0: string, p1: boolean, p2: boolean, p3: boolean, p4: string, p5: string): string | null;

    "getHelpAsMarkdownTable"(): string | null;

    "getHelpAsMarkdownTable"(p0: string | null): string | null;

    "getHelpAsMarkdownTable"(p0: string): string | null;

    "getHelpAsMarkdownTable"(p0: boolean, p1: boolean, p2: string | null): string | null;

    "getHelpAsMarkdownTable"(p0: boolean, p1: boolean, p2: string): string | null;

    "getHelpAsMarkdownTable"(p0: string | null, p1: boolean, p2: boolean, p3: string | null): string | null;

    "getHelpAsMarkdownTable"(p0: string, p1: boolean, p2: boolean, p3: string): string | null;

    "getHelpAsJson"(): string | null;

    "getHelpAsJson"(p0: string | null): string | null;

    "getHelpAsJson"(p0: string): string | null;

    "getHelpAsJson"(p0: boolean, p1: string | null): string | null;

    "getHelpAsJson"(p0: boolean, p1: string): string | null;

    "getHelpAsJson"(p0: string | null, p1: boolean, p2: string | null): string | null;

    "getHelpAsJson"(p0: string, p1: boolean, p2: string): string | null;

    "getKeyWords"(): Array<KeyWord | null> | null;

    "getKeyWords"(p0: string | null): Array<KeyWord | null> | null;

    "getKeyWords"(p0: string): Array<KeyWord | null> | null;

    "cloneForThreadSafe"(): Expression | null;

    defineFunction(name: string | null, expression: string | null, ...parameters: (string | null | readonly (string | null)[])[]): void;
}

export interface ExpressionConstructor extends Omit<PrimitiveElementConstructor, 'prototype'> {
    readonly prototype: Expression;

    new(...p0: DefinitionInput[]): Expression;

    new(p0: string | null, ...p1: DefinitionInput[]): Expression;

    readonly "TYPE_ID": number;
    "TYPE_DESC": string | null;
    readonly "NO_SYNTAX_ERRORS": boolean;
    readonly "SYNTAX_ERROR": boolean;
    readonly "SYNTAX_ERROR_OR_STATUS_UNKNOWN": boolean;
}

export interface Constant extends PrimitiveElement {
    cloneHandle(): Constant;

    "getConstantName"(): string | null;

    "setConstantName"(p0: string | null): void;

    "setConstantName"(p0: string): void;

    "setConstantValue"(p0: number): void;

    "getConstantValue"(): number;

    "getDescription"(): string | null;

    "setDescription"(p0: string | null): void;

    "setDescription"(p0: string): void;

    "getErrorMessage"(): string | null;

    "getSyntaxStatus"(): boolean;

    "cloneForThreadSafe"(): Constant | null;
}

export interface ConstantConstructor extends Omit<PrimitiveElementConstructor, 'prototype'> {
    readonly prototype: Constant;

    new(p0: string | null, p1: number): Constant;

    new(p0: string | null, p1: number, p2: string | null): Constant;

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
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "calculateWithCancel"(calcStepsRegister: CalcStepsRegister | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "calculateWithCancel"(parameters: ReadonlyArray<number> | Float64Array | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "calculateWithCancel"(arguments: ReadonlyArray<Argument | null> | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "calculateWithCancel"(cancelId: number): number;

    cloneHandle(): Function;

    "setFunction"(p0: string | null, ...p1: DefinitionInput[]): void;

    "calculate"(): number;

    "calculate"(p0: CalcStepsRegister): number;

    "calculate"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    "calculate"(...p0: (Argument | readonly (Argument)[] | NativeList<Argument, "ArgumentPtr"> | null)[]): number;

    "addDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    "addDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    "addDefinitions"(p0: PrimitiveElement | null): void;

    "removeDefinitions"(p0: Array<PrimitiveElement | null> | NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | NullNativeList<"PrimitiveElementPtr"> | null): void;

    "removeDefinitions"(...elements: (PrimitiveElement | null | readonly (PrimitiveElement | null)[])[]): void;

    "removeDefinitions"(p0: PrimitiveElement | null): void;

    "addArguments"(p0: Array<Argument | null> | NativeList<Argument | null, "ArgumentPtr"> | NullNativeList<"ArgumentPtr"> | null): void;

    "addArguments"(...elements: (Argument | null | readonly (Argument | null)[])[]): void;

    "addArguments"(p0: Argument | null): void;

    "defineArguments"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    "defineArguments"(...elements: (string | null | readonly (string | null)[])[]): void;

    "defineArguments"(p0: string | null): void;

    "defineArguments"(p0: string): void;

    "removeArguments"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    "removeArguments"(...p0: (Argument | readonly (Argument)[] | NativeList<Argument, "ArgumentPtr"> | null)[]): void;

    "removeAllArguments"(): void;

    "addConstants"(p0: Array<Constant | null> | NativeList<Constant | null, "ConstantPtr"> | NullNativeList<"ConstantPtr"> | null): void;

    "addConstants"(...elements: (Constant | null | readonly (Constant | null)[])[]): void;

    "addConstants"(p0: Constant | null): void;

    "removeConstants"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    "removeConstants"(...p0: (Constant | readonly (Constant)[] | NativeList<Constant, "ConstantPtr"> | null)[]): void;

    "removeAllConstants"(): void;

    "addFunctions"(p0: Array<Function | null> | NativeList<Function | null, "FunctionPtr"> | NullNativeList<"FunctionPtr"> | null): void;

    "addFunctions"(...elements: (Function | null | readonly (Function | null)[])[]): void;

    "addFunctions"(p0: Function | null): void;

    "defineFunction"(p0: string | null, p1: string | null, p2: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    "removeFunctions"(...p0: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): void;

    "removeFunctions"(...p0: (Function | readonly (Function)[] | NativeList<Function, "FunctionPtr"> | null)[]): void;

    "removeAllFunctions"(): void;

    "setDescription"(p0: string | null): void;

    "setDescription"(p0: string): void;

    "getDescription"(): string | null;

    "setFunctionName"(p0: string | null): void;

    "setFunctionName"(p0: string): void;

    "getFunctionName"(): string | null;

    "getFunctionExpressionString"(): string | null;

    "setArgumentValue"(p0: number | Int32Value, p1: number): void;

    "getFunctionBodyType"(): number;

    "checkSyntax"(): boolean;

    "getErrorMessage"(): string | null;

    "defineArgument"(p0: string | null, p1: number): void;

    "getArgumentIndex"(p0: string | null): number;

    "getArgumentIndex"(p0: string): number;

    "getArgument"(p0: string | null): Argument | null;

    "getArgument"(p0: string): Argument | null;

    "getArgument"(p0: number | Int32Value): Argument | null;

    "getParametersNumber"(): number;

    "setParametersNumber"(p0: number | Int32Value): void;

    "getParameterName"(p0: number | Int32Value): string | null;

    "getArgumentsNumber"(): number;

    "defineConstant"(p0: string | null, p1: number): void;

    "getConstantIndex"(p0: string | null): number;

    "getConstantIndex"(p0: string): number;

    "getConstant"(p0: string | null): Constant | null;

    "getConstant"(p0: string): Constant | null;

    "getConstant"(p0: number | Int32Value): Constant | null;

    "getConstantsNumber"(): number;

    "getFunctionIndex"(p0: string | null): number;

    "getFunctionIndex"(p0: string): number;

    "getFunctionsNumber"(): number;

    "getFunction"(p0: string | null): Function | null;

    "getFunction"(p0: string): Function | null;

    "getFunction"(p0: number | Int32Value): Function | null;

    "setVerboseMode"(): void;

    "setSilentMode"(): void;

    "getVerboseMode"(): boolean;

    "getRecursiveMode"(): boolean;

    "getComputingTime"(): number;

    "cloneForThreadSafe"(): Function | null;

    defineFunction(name: string | null, expression: string | null, ...parameters: (string | null | readonly (string | null)[])[]): void;
}

export interface FunctionConstructor extends Omit<PrimitiveElementConstructor, 'prototype'> {
    readonly prototype: Function;

    new(p0: string | null, p1: string | null, ...p2: DefinitionInput[]): Function;

    new(p0: string | null, p1: string | null, ...p2: (string | null | readonly (string | null)[] | NativeList<string | null, "StringPtr"> | null)[]): Function;

    new(p0: string | null, ...p1: DefinitionInput[]): Function;

    new(p0: string | null, p1: FunctionExtension | NullExtension<"FunctionExtension">): Function;

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

    /** No index: the sole argument is the cancellation ID. */
    "getArgumentValueWithCancel"(cancelId: number): number;

    /** Tracing/no index; null is a register, distinct from numeric index 0. */
    "getArgumentValueWithCancel"(steps: CalcStepsRegister | null, cancelId: number): number;

    /**
     * Indexed access requires both index and ID; the inherited one-argument getter takes an ID.
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "getArgumentValueWithCancel"(index: number, cancelId: number): number;

    cloneHandle(): RecursiveArgument;

    "addBaseCase"(p0: number | Int32Value, p1: number): void;

    "resetAllCases"(): void;

    "getArgumentValue"(p0: number): number;

    "cloneForThreadSafe"(): Argument | null;

    "getArgumentValue"(): number;

    "getArgumentValue"(p0: CalcStepsRegister | null): number;
}

export interface RecursiveArgumentConstructor extends Omit<ArgumentConstructor, 'prototype'> {
    readonly prototype: RecursiveArgument;

    new(p0: string | null, p1: string | null, p2: string | null): RecursiveArgument;

    new(p0: string | null, p1: string | null, p2: Argument, ...p3: DefinitionInput[]): RecursiveArgument;

    new(p0: string | null, ...p1: DefinitionInput[]): RecursiveArgument;

    readonly "TYPE_ID_RECURSIVE": number;
    "TYPE_DESC_RECURSIVE": string | null;
}

export interface CalcStepsRegister extends NativeHandleBase {
    cloneHandle(): CalcStepsRegister;

    get calcStepRecords(): NativeList<CalcStepRecord | null, "CalcStepRecordPtr"> | null;

    set calcStepRecords(value: NativeList<CalcStepRecord | null, "CalcStepRecordPtr"> | null | readonly (CalcStepRecord | null)[]);

    "argumentNameStart": string | null;
    "functionNameStart": string | null;
    "expressionStringStart": string | null;
    "result": number;
    "computingTime": number;
    "errorMessage": string | null;

    "consolePrint"(): void;

    "toString"(): string | null;
}

export interface CalcStepsRegisterConstructor {
    readonly prototype: CalcStepsRegister;

    new(): CalcStepsRegister;
}

export interface CalcStepRecord extends NativeHandleBase {
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

    new(): CalcStepRecord;
}

export interface StringResources extends NativeHandleBase {
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

    "print"(): void;

    "printInitSrc"(): void;
}

export interface StringResourcesConstructor {
    readonly prototype: StringResources;

    new(): StringResources;

    "languageDefault"(): StringResources | null;

    "languageChinese"(): StringResources | null;

    "languageEnglish"(): StringResources | null;

    "languageFrench"(): StringResources | null;

    "languageGerman"(): StringResources | null;

    "languageItalian"(): StringResources | null;

    "languagePolish"(): StringResources | null;

    "languagePortuguese"(): StringResources | null;

    "languageSpanish"(): StringResources | null;

    "bestMatchingLanguage"(p0: string | null): StringResources | null;

    "bestMatchingLanguage"(p0: string): StringResources | null;

    "bestMatchingLanguage"(): StringResources | null;
}

export interface Token extends NativeHandleBase {
    cloneHandle(): Token;

    "tokenStr": string | null;
    "keyWord": string | null;
    "tokenId": number;
    "tokenTypeId": number;
    "tokenLevel": number;
    "tokenValue": number;
    "looksLike": string | null;

    "isUnaryLeftOperator"(): boolean;

    "isUnaryRightOperator"(): boolean;

    "isLeftParenthesis"(): boolean;

    "isRightParenthesis"(): boolean;

    "isIdentifier"(): boolean;

    "isBinaryOperator"(): boolean;

    "isParameterSeparator"(): boolean;

    "isNumber"(): boolean;

    "isSpecialTokenName"(): boolean;

    "isUnicodeRootOperator"(): boolean;

    "clone"(): Token | null;
}

export interface TokenConstructor {
    readonly prototype: Token;

    new(): Token;

    new(source: Token): Token;

    readonly "NOT_MATCHED": number;

    "makeMultiplyToken"(): Token | null;

    "makeNumberToken"(): Token | null;

    "makeNumberToken"(p0: number, p1: number | Int32Value): Token | null;

    "makeCommaToken"(): Token | null;

    "makeCommaToken"(p0: number | Int32Value): Token | null;

    "makeLeftParenthesisToken"(): Token | null;

    "makeLeftParenthesisToken"(p0: number | Int32Value): Token | null;

    "makeRightParenthesisToken"(): Token | null;

    "makeRightParenthesisToken"(p0: number | Int32Value): Token | null;

    "makeDerToken"(): Token | null;

    "makeDerToken"(p0: number | Int32Value): Token | null;

    "makeArgumentToken"(p0: string | null, p1: number | Int32Value, p2: number | Int32Value, p3: number): Token | null;

    "getTokenTypeDescription"(p0: number | Int32Value): string | null;
}

export interface KeyWord extends NativeHandleBase {
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

    new(): KeyWord;

    new(word: string | null, description: string | null, id: number, syntax: string | null, since: string | null, typeId: number): KeyWord;

    readonly "NO_DEFINITION": number;

    "isFunctionForm"(p0: KeyWord | null): boolean;
}

export interface PrimesCache extends NativeHandleBase {
    cloneHandle(): PrimesCache;

    "getComputingTime"(): number;

    "getCacheStatus"(): boolean;

    "getNumberOfPrimes"(): number;

    "getMaxNumInCache"(): number;

    "primeTest"(p0: number | Int32Value): number;

    "isInitSuccessful"(): boolean;
}

export interface PrimesCacheConstructor {
    readonly prototype: PrimesCache;

    new(): PrimesCache;

    new(limit: number): PrimesCache;

    readonly "DEFAULT_MAX_NUM_IN_CACHE": number;
    readonly "CACHE_EMPTY": boolean;
    readonly "CACHING_FINISHED": boolean;
    readonly "IS_PRIME": number;
    readonly "IS_NOT_PRIME": number;
    readonly "NOT_IN_CACHE": number;
}

export interface SpecialValue extends NativeHandleBase {
    cloneHandle(): SpecialValue;

    "x": number;
    "xFrom": number;
    "xTo": number;
    "fv": number;
    "fvdeg": number;
}

export interface SpecialValueConstructor {
    readonly prototype: SpecialValue;

    new(x: number, value: number): SpecialValue;

    new(x: number, value: number, degrees: number): SpecialValue;

    "specialCasesDisabled": boolean;
    readonly "EPSILON": number;
}

export interface SpecialValueTrigonometric extends NativeHandleBase {
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

    get valuesListAsin(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    set valuesListAsin(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    get valuesListAcos(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    set valuesListAcos(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    get valuesListAtan(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    set valuesListAtan(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    get valuesListActan(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    set valuesListActan(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    get valuesListAsec(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    set valuesListAsec(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    get valuesListAcsc(): NativeList<SpecialValue | null, "SpecialValuePtr"> | null;

    set valuesListAcsc(value: NativeList<SpecialValue | null, "SpecialValuePtr"> | null | readonly (SpecialValue | null)[]);

    "getSpecialValueTrigonometric"(p0: number): SpecialValueTrigonometric | null;

    "getSpecialValueAsin"(p0: number): SpecialValue | null;

    "getSpecialValueAcos"(p0: number): SpecialValue | null;

    "getSpecialValueAtan"(p0: number): SpecialValue | null;

    "getSpecialValueActan"(p0: number): SpecialValue | null;

    "getSpecialValueAsec"(p0: number): SpecialValue | null;

    "getSpecialValueAcsc"(p0: number): SpecialValue | null;
}

export interface IRandom extends NativeHandleBase {
    cloneHandle(): IRandom;

    "nextInt"(p0: bigint): bigint;

    "nextInt"(): bigint;

    "nextDouble"(): number;

    "setSeed"(p0: number): void;
}

export interface IRandomConstructor {
    readonly prototype: IRandom;
    readonly implement: (implementation: IRandomImplementation) => IRandom;
}

export interface Random extends IRandom {
    cloneHandle(): Random;
}

export interface RandomConstructor extends Omit<IRandomConstructor, 'prototype'> {
    readonly prototype: Random;

    new(): Random;

    new(seed: number): Random;
}

export interface JavaCCToken extends NativeHandleBase {
    readonly next: JavaCCToken | null;
    readonly specialToken: JavaCCToken | null;

    cloneHandle(): JavaCCToken;

    "kind": number;
    "beginLine": number;
    "beginColumn": number;
    "endLine": number;
    "endColumn": number;
    "image": string;

    "getValue"(): null;

    "toString"(): string;
}

export interface JavaCCTokenConstructor {
    readonly prototype: JavaCCToken;

    new(): JavaCCToken;

    new(kind: number | Int32Value): JavaCCToken;

    new(kind: number | Int32Value, image: string): JavaCCToken;

    "newToken"(p0: number | Int32Value, p1: string): JavaCCToken;

    "newToken"(p0: number | Int32Value): JavaCCToken;
}

export interface TokenMgrError extends NativeHandleBase {
    cloneHandle(): TokenMgrError;

    "getMessage"(): string;
}

export interface TokenMgrErrorConstructor {
    readonly prototype: TokenMgrError;

    new(): TokenMgrError;

    new(message: string, reason: number | Int32Value): TokenMgrError;

    new(EOFSeen: boolean, lexState: number | Int32Value, line: number | Int32Value, column: number | Int32Value, errorAfter: string, curChar: string, reason: number | Int32Value): TokenMgrError;

    readonly "LEXICAL_ERROR": number;
    readonly "STATIC_LEXER_ERROR": number;
    readonly "INVALID_LEXICAL_STATE": number;
    readonly "LOOP_DETECTED": number;
}

export interface ParseException extends NativeHandleBase {
    cloneHandle(): ParseException;

    "currentToken": JavaCCToken;

    get expectedTokenSequences(): NativeTokenSequences | null;

    set expectedTokenSequences(value: NativeTokenSequences | ReadonlyArray<NativeFixedArray<number> | ReadonlyArray<number> | null> | null);

    get tokenImage(): NativeFixedArray<string> | null;

    set tokenImage(value: NativeFixedArray<string> | ReadonlyArray<string> | null);
}

export interface ParseExceptionConstructor {
    readonly prototype: ParseException;

    new(): ParseException;

    new(message: string): ParseException;

    new(currentToken: JavaCCToken, expectedTokenSequences: NativeTokenSequences | ReadonlyArray<NativeFixedArray<number> | ReadonlyArray<number> | null> | null, tokenImage: NativeFixedArray<string> | ReadonlyArray<string> | null): ParseException;
}

export interface ReaderStream extends NativeHandleBase {
    read(buffer: Uint32Array | null, offset: number | Int32Value, length: number): number;

    cloneHandle(): ReaderStream;
}

export interface ReaderStreamConstructor {
    readonly prototype: ReaderStream;

    new(): ReaderStream;
}

export interface CharStream extends NativeHandleBase {
    cloneHandle(): CharStream;

    "setTabSize"(p0: number | Int32Value): void;

    "getTabSize"(): number;

    "getColumn"(): number;

    "getLine"(): number;

    "getEndColumn"(): number;

    "getEndLine"(): number;

    "getBeginColumn"(): number;

    "getBeginLine"(): number;

    "backup"(p0: number | Int32Value): void;

    "BeginToken"(): string;

    "readChar"(): string;

    "GetImage"(): string;

    "GetSuffix"(p0: number | Int32Value): string;

    "ReInit"(p0: string, p1: number | Int32Value, p2: number | Int32Value, p3: number | Int32Value): void;

    "ReInit"(p0: string, p1: number | Int32Value, p2: number | Int32Value): void;

    "Done"(): void;

    "ReInit"(p0: ReaderStream | null, p1: number | Int32Value, p2: number | Int32Value, p3: number | Int32Value): void;

    "ReInit"(p0: ReaderStream | null, p1: number | Int32Value, p2: number | Int32Value): void;

    "ReInit"(p0: ReaderStream | null): void;

    "adjustBeginLineColumn"(p0: number | Int32Value, p1: number | Int32Value): void;
}

export interface CharStreamConstructor {
    readonly prototype: CharStream;

    new(text: string, line: number | Int32Value, column: number | Int32Value): CharStream;

    new(text: string, line: number | Int32Value, column: number | Int32Value, bufferSize: number | Int32Value): CharStream;

    new(reader: ReaderStream | null): CharStream;

    new(reader: ReaderStream | null, line: number | Int32Value, column: number | Int32Value): CharStream;

    new(reader: ReaderStream | null, line: number | Int32Value, column: number | Int32Value, bufferSize: number | Int32Value): CharStream;
}

export interface TokenManager extends NativeHandleBase {
    cloneHandle(): TokenManager;

    "getNextToken"(): JavaCCToken;
}

export interface TokenManagerConstructor {
    readonly prototype: TokenManager;
}

export interface SyntaxCheckerTokenManager extends TokenManager {
    SwitchTo(lexState: number | Int32Value): void;

    cloneHandle(): SyntaxCheckerTokenManager;

    ReInit(dependency: CharStream | null, lexState?: number): void;

    "getNextToken"(): JavaCCToken;

    "debugStream": NativeStdioStream | null;

    "setDebugStream"(p0: NativeStdioStream | null): void;
}

export interface SyntaxCheckerTokenManagerConstructor extends Omit<TokenManagerConstructor, 'prototype'> {
    readonly prototype: SyntaxCheckerTokenManager;

    new(source: CharStream | null): SyntaxCheckerTokenManager;

    new(source: CharStream | null, lexState: number | Int32Value): SyntaxCheckerTokenManager;
}

export interface SyntaxChecker extends NativeHandleBase {
    readonly token_source: SyntaxCheckerTokenManager | null;
    readonly token: JavaCCToken;
    readonly jj_nt: JavaCCToken | null;

    cloneHandle(): SyntaxChecker;

    ReInit(dependency: SyntaxCheckerTokenManager | null): void;

    "trace_enabled"(): boolean;

    "enable_tracing"(): void;

    "disable_tracing"(): void;

    "checkSyntax"(): boolean;

    "start"(): void;

    "expression"(): void;

    "binaryExpression"(): void;

    "unaryRigthExpression"(): void;

    "unaryLeftExpression"(): void;

    "binaryOperator"(): void;

    "unaryRigthOperator"(): void;

    "unaryLeftOperator"(): void;

    "itemExpression"(): void;

    "bracketedExpressionOptionalImpliedMultiplication"(): void;

    "bracketedExpression"(): void;

    "itemOrFunctionOptionalImpliedMultiplication"(): void;

    "itemOrFunctionImpliedMultiplication"(): void;

    "itemOrFunction"(): void;

    "otherBaseNumber"(): void;

    "itemName"(): void;

    "unitOrSpecialConstant"(): void;

    "argumentList"(): void;

    "getNextToken"(): JavaCCToken;

    "getToken"(p0: number | Int32Value): JavaCCToken;
}

export interface SyntaxCheckerConstructor {
    readonly prototype: SyntaxChecker;

    new(source: SyntaxCheckerTokenManager | null): SyntaxChecker;
}

export interface License extends NativeHandleBase {
    readonly [licenseInstanceTypeMarker]: true;

    cloneHandle(): License;
}

export interface LicenseConstructor {
    readonly prototype: License;

    new(): License;

    "iConfirmCommercialUse"(p0: string | null): boolean;

    "iConfirmCommercialUse"(p0: string): boolean;

    "iConfirmNonCommercialUse"(p0: string | null): boolean;

    "iConfirmNonCommercialUse"(p0: string): boolean;

    "checkIfUseTypeConfirmed"(): boolean;

    "getUseTypeConfirmationMessage"(): string | null;

    "getErrorMessage"(): string | null;

    "geTermsOfAgreement"(): string | null;

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
    "enableBinarySerializationIamAwareOfSecurityRisks"(): void;

    "disableBinarySerialization"(): void;

    "isBinarySerializationEnabled"(): boolean;

    "checkLastOperationWasSuccessful"(): boolean;

    "getLastOperationMessage"(): string | null;

    serializeToBytes(object: Serializable | null): Uint8Array | null;

    serializeToBytes<K extends keyof SerializableListTypes>(object: SerializableListTypes[K] | null, type: K): Uint8Array | null;

    serializeToBytes<K extends keyof SerializableVectorTypes>(object: SerializableVectorTypes[K] | null, type: K): Uint8Array | null;

    serializeToBytes<T extends Serializable>(object: T | null, type: SerializationType<T>): Uint8Array | null;

    serializeToString(object: Serializable | null): string | null;

    serializeToString<K extends keyof SerializableListTypes>(object: SerializableListTypes[K] | null, type: K): string | null;

    serializeToString<K extends keyof SerializableVectorTypes>(object: SerializableVectorTypes[K] | null, type: K): string | null;

    serializeToString<T extends Serializable>(object: T | null, type: SerializationType<T>): string | null;

    serializeToFile(object: Serializable | null, path: string | Uint8Array | null): boolean;

    serializeToFile<K extends keyof SerializableListTypes>(object: SerializableListTypes[K] | null, path: string | Uint8Array | null, type: K): boolean;

    serializeToFile<K extends keyof SerializableVectorTypes>(object: SerializableVectorTypes[K] | null, path: string | Uint8Array | null, type: K): boolean;

    serializeToFile<T extends Serializable>(object: T | null, path: string | Uint8Array | null, type: SerializationType<T>): boolean;

    deserializeFromBytes<K extends keyof SerializableListTypes>(data: Uint8Array | NativeVector<number, "char"> | null, type: K): SerializableListTypes[K] | null;

    deserializeFromBytes<K extends keyof SerializableVectorTypes>(data: Uint8Array | NativeVector<number, "char"> | null, type: K): SerializableVectorTypes[K] | null;

    deserializeFromBytes<T extends Serializable>(data: Uint8Array | NativeVector<number, "char"> | null, type: SerializationType<T>): T | null;

    deserializeFromString<K extends keyof SerializableListTypes>(data: string | Uint8Array | null, type: K): SerializableListTypes[K] | null;

    deserializeFromString<K extends keyof SerializableVectorTypes>(data: string | Uint8Array | null, type: K): SerializableVectorTypes[K] | null;

    deserializeFromString<T extends Serializable>(data: string | Uint8Array | null, type: SerializationType<T>): T | null;

    deserializeFromFile<K extends keyof SerializableListTypes>(path: string | Uint8Array | null, type: K): SerializableListTypes[K] | null;

    deserializeFromFile<K extends keyof SerializableVectorTypes>(path: string | Uint8Array | null, type: K): SerializableVectorTypes[K] | null;

    deserializeFromFile<T extends Serializable>(path: string | Uint8Array | null, type: SerializationType<T>): T | null;
}

export interface StringModelStatics {
    "setStringResources"(p0: StringResources | null): void;

    "setDefaultStringResources"(): void;

    "setDefaultEnglishStringResources"(): void;

    "getStringResources"(): StringResources | null;

    "print"(): void;

    "printDescriptions"(): void;
}

export interface mXparserStatics {
    /** Maximum cancellation domain ID; ID 0 is the global domain. @since 6.2.0 */
    readonly "MAX_CANCELLATION_TOKEN_ID": number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "isCalculationCancelled"(cancelId: number): boolean;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "cancelCalculation"(cancelId: number): void;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "resetCalculationCancellation"(cancelId: number): void;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * Reserves a positive ID and resets its signal before returning. Throws on exhaustion.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "acquireCancellationTokenId"(): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 1..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "reserveCancellationTokenId"(cancelId: number): boolean;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 1..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "releaseCancellationTokenId"(cancelId: number): void;

    readonly "VERSION_MAJOR": number;
    readonly "VERSION_MINOR": number;
    readonly "VERSION_PATCH": number;
    readonly "VERSION": string | null;
    readonly "VERSION_CODE_NAME": string | null;
    readonly "VERSION_NAME": string | null;
    readonly "BUIT_FOR": string | null;

    "checkIfWarmedUpBeforeConcurrentUse"(): boolean;

    "warmUpBeforeConcurrentUse"(): boolean;

    "primesCache": PrimesCache | null;
    readonly "PRIMES_CACHE_NOT_INITIALIZED": number;

    "initPrimesCache"(): void;

    "initPrimesCache"(p0: number | Int32Value): void;

    "initPrimesCache"(p0: PrimesCache | null): void;

    "isInitPrimesCacheSuccessful"(): boolean;

    "setNoPrimesCache"(): void;

    "getMaxNumInPrimesCache"(): number;

    "getThreadsNumber"(): number;

    "setDefaultThreadsNumber"(): void;

    "setThreadsNumber"(p0: number | Int32Value): void;

    "getFunctionValue"(p0: Expression, p1: Argument, p2: number): number;

    "getFunctionValues"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number): Array<number> | null;

    "arrayList2double"(p0: Array<number> | NativeList<number, "double"> | NullNativeList<"double"> | null): Array<number> | null;

    "setRandomGenerator"(p0: IRandom | null): void;

    "setExactComparison"(): void;

    "setEpsilonComparison"(): void;

    "setEpsilon"(p0: number): void;

    "setDefaultEpsilon"(): void;

    "getEpsilon"(): number;

    "checkIfEpsilonMode"(): boolean;

    "checkIfExactMode"(): boolean;

    "enableUlpRounding"(): void;

    "disableUlpRounding"(): void;

    "setUlpRounding"(p0: boolean): void;

    "checkIfUlpRounding"(): boolean;

    "enableCanonicalRounding"(): void;

    "disableCanonicalRounding"(): void;

    "setCanonicalRounding"(p0: boolean): void;

    "checkIfCanonicalRounding"(): boolean;

    "enableAlmostIntRounding"(): void;

    "disableAlmostIntRounding"(): void;

    "setAlmostIntRounding"(p0: boolean): void;

    "checkIfAlmostIntRounding"(): boolean;

    "enableSpecialCases"(): void;

    "disableSpecialCases"(): void;

    "setSpecialCases"(p0: boolean): void;

    "checkIfSpecialCases"(): boolean;

    "setMaxAllowedRecursionDepth"(p0: number | Int32Value): void;

    "setDefaultMaxAllowedRecursionDepth"(): void;

    "getMaxAllowedRecursionDepth"(): number;

    "setRadiansMode"(): void;

    "setDegreesMode"(): void;

    "checkIfRadiansMode"(): boolean;

    "checkIfDegreesMode"(): boolean;

    "enableImpliedMultiplicationMode"(): void;

    "disableImpliedMultiplicationMode"(): void;

    "checkIfImpliedMultiplicationMode"(): boolean;

    "enableUnicodeBuiltinKeyWordsMode"(): void;

    "disableUnicodeBuiltinKeyWordsMode"(): void;

    "checkIfUnicodeBuiltinKeyWordsMode"(): boolean;

    "enableAttemptToFixExpStrMode"(): void;

    "disableAttemptToFixExpStrMode"(): void;

    "checkIfAttemptToFixExpStrMode"(): boolean;

    "enableSelectBestMatchingLanguage"(): void;

    "disableSelectBestMatchingLanguage"(): void;

    "checkIfSelectBestMatchingLanguage"(): boolean;

    "changeLanguageTo"(p0: string | null): void;

    "changeLanguageTo"(p0: string): void;

    "changeLanguageToBestMatching"(): void;

    "setToFractionInitSearchSize"(p0: bigint): void;

    "getToFractionInitSearchSize"(): bigint;

    "removeBuiltinTokens"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    "removeBuiltinTokens"(...tokens: (string | null | readonly (string | null)[])[]): void;

    "unremoveBuiltinTokens"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    "unremoveBuiltinTokens"(...tokens: (string | null | readonly (string | null)[])[]): void;

    "unremoveAllBuiltinTokens"(): void;

    "getBuiltinTokensToRemove"(): Array<string | null> | null;

    "modifyBuiltinToken"(p0: string | null, p1: string | null): void;

    "modifyBuiltinToken"(p0: string, p1: string): void;

    "modifyBuiltinToken"(p0: string | null, p1: string | null, p2: string | null): void;

    "modifyBuiltinToken"(p0: string, p1: string, p2: string): void;

    "unmodifyBuiltinTokens"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    "unmodifyBuiltinTokens"(...tokens: (string | null | readonly (string | null)[])[]): void;

    "unmodifyAllBuiltinTokens"(): void;

    "getBuiltinTokensToModify"(): Array<Array<string | null>> | null;

    "setToOverrideBuiltinTokens"(): void;

    "setNotToOverrideBuiltinTokens"(): void;

    "checkIfsetToOverrideBuiltinTokens"(): boolean;

    "setDefaultOptions"(): void;

    "getTokenTypeDescription"(p0: number | Int32Value): string | null;

    "numberToHexString"(p0: number | Int32Value): string | null;

    "numberToHexString"(p0: bigint): string | null;

    "numberToHexString"(p0: number): string | null;

    "hexString2AsciiString"(p0: string | null): string | null;

    "numberToAsciiString"(p0: number | Int32Value): string | null;

    "numberToAsciiString"(p0: bigint): string | null;

    "numberToAsciiString"(p0: number): string | null;

    /** Digits are forwarded to the native conversion, without JS numerical conversion. */
    "convOthBase2Decimal"(numeralSystemBase: number, ...digits: number[]): number;

    "convOthBase2Decimal"(p0: string | null, p1: number | Int32Value): number;

    "convOthBase2Decimal"(p0: string | null): number;

    "convOthBase2Decimal"(p0: number | Int32Value, p1: Array<number> | NativeList<number, "int"> | NullNativeList<"int"> | null): number;

    "convOthBase2Decimal"(p0: number, p1: Array<number> | NativeList<number, "double"> | NullNativeList<"double"> | null): number;

    "convDecimal2OthBase"(p0: number, p1: number | Int32Value): string | null;

    "convDecimal2OthBase"(p0: number, p1: number | Int32Value, p2: number | Int32Value): string | null;

    "toFraction"(p0: number): Array<number> | null;

    "toMixedFraction"(p0: number): Array<number> | null;

    "fractionToString"(p0: Array<number> | Float64Array): string | null;

    "toFractionString"(p0: number): string | null;

    "toMixedFractionString"(p0: number): string | null;

    "consolePrint"(p0: bigint): void;

    "consolePrint"(p0: string): void;

    "consolePrint"(p0: boolean): void;

    "consolePrint"(p0: number): void;

    "consolePrintln"(p0: bigint): void;

    "consolePrintln"(p0: string): void;

    "consolePrintln"(p0: boolean): void;

    "consolePrintln"(p0: number): void;

    "consolePrintln"(): void;

    "consolePrintln"(p0: Array<string | null> | null): void;

    "consolePrintln"(p0: Array<string | null> | NativeList<string | null, "StringPtr"> | NullNativeList<"StringPtr"> | null): void;

    "consolePrintSettings"(p0: string | null): void;

    "consolePrintSettings"(p0: string): void;

    "consolePrintSettings"(): void;

    "resetConsoleOutput"(): void;

    "setDefaultConsolePrefix"(): void;

    "setDefaultConsoleOutputPrefix"(): void;

    "setConsolePrefix"(p0: string | null): void;

    "setConsolePrefix"(p0: string): void;

    "setConsoleOutputPrefix"(p0: string | null): void;

    "setConsoleOutputPrefix"(p0: string): void;

    "getConsoleOutput"(): string | null;

    "getHelp"(): string | null;

    "getHelp"(p0: string | null): string | null;

    "getHelp"(p0: string): string | null;

    "getHelp"(p0: boolean, p1: boolean, p2: string | null): string | null;

    "getHelp"(p0: boolean, p1: boolean, p2: string): string | null;

    "getHelp"(p0: string | null, p1: boolean, p2: boolean, p3: string | null): string | null;

    "getHelp"(p0: string, p1: boolean, p2: boolean, p3: string): string | null;

    "getHelpAsCsv"(): string | null;

    "getHelpAsCsv"(p0: string | null): string | null;

    "getHelpAsCsv"(p0: string): string | null;

    "getHelpAsCsv"(p0: string | null, p1: string | null, p2: boolean): string | null;

    "getHelpAsCsv"(p0: string, p1: string, p2: boolean): string | null;

    "getHelpAsCsv"(p0: string | null, p1: string | null, p2: string | null, p3: boolean): string | null;

    "getHelpAsCsv"(p0: string, p1: string, p2: string, p3: boolean): string | null;

    "getHelpAsHtmlTable"(): string | null;

    "getHelpAsHtmlTable"(p0: string | null): string | null;

    "getHelpAsHtmlTable"(p0: string): string | null;

    "getHelpAsHtmlTable"(p0: boolean, p1: boolean, p2: boolean, p3: string | null, p4: string | null): string | null;

    "getHelpAsHtmlTable"(p0: boolean, p1: boolean, p2: boolean, p3: string, p4: string): string | null;

    "getHelpAsHtmlTable"(p0: string | null, p1: boolean, p2: boolean, p3: boolean, p4: string | null, p5: string | null): string | null;

    "getHelpAsHtmlTable"(p0: string, p1: boolean, p2: boolean, p3: boolean, p4: string, p5: string): string | null;

    "getHelpAsMarkdownTable"(): string | null;

    "getHelpAsMarkdownTable"(p0: string | null): string | null;

    "getHelpAsMarkdownTable"(p0: string): string | null;

    "getHelpAsMarkdownTable"(p0: boolean, p1: boolean, p2: string | null): string | null;

    "getHelpAsMarkdownTable"(p0: boolean, p1: boolean, p2: string): string | null;

    "getHelpAsMarkdownTable"(p0: string | null, p1: boolean, p2: boolean, p3: string | null): string | null;

    "getHelpAsMarkdownTable"(p0: string, p1: boolean, p2: boolean, p3: string): string | null;

    "getHelpAsJson"(): string | null;

    "getHelpAsJson"(p0: string | null): string | null;

    "getHelpAsJson"(p0: string): string | null;

    "getHelpAsJson"(p0: boolean, p1: string | null): string | null;

    "getHelpAsJson"(p0: boolean, p1: string): string | null;

    "getHelpAsJson"(p0: string | null, p1: boolean, p2: string | null): string | null;

    "getHelpAsJson"(p0: string, p1: boolean, p2: string): string | null;

    "consolePrintHelp"(): void;

    "consolePrintHelp"(p0: string | null): void;

    "consolePrintHelp"(p0: string): void;

    "getKeyWords"(): Array<KeyWord | null> | null;

    "getKeyWords"(p0: string | null): Array<KeyWord | null> | null;

    "getKeyWords"(p0: string): Array<KeyWord | null> | null;

    "regexMatch"(p0: string | null, p1: string | null): boolean;

    "regexMatch"(p0: string, p1: string): boolean;

    "consolePrintTokens"(p0: Array<Token | null> | NativeList<Token | null, "TokenPtr"> | NullNativeList<"TokenPtr"> | null): void;

    "consolePrint"(p0: Array<Token | null> | NativeList<Token | null, "TokenPtr"> | NullNativeList<"TokenPtr"> | null): void;

    "consolePrintln"(p0: Array<Token | null> | NativeList<Token | null, "TokenPtr"> | NullNativeList<"TokenPtr"> | null): void;

    readonly "LICENSE": string | null;

    "consolePrintLicense"(): void;

    "getLicense"(): string | null;

    "wait"(p0: number | Int32Value): void;

    "cancelCurrentCalculation"(): void;

    "resetCancelCurrentCalculationFlag"(): void;

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

    "setExactComparison"(): void;

    "setEpsilonComparison"(): void;

    "setEpsilon"(p0: number): void;

    "setDefaultEpsilon"(): void;

    "getEpsilon"(): number;

    "checkIfEpsilonMode"(): boolean;

    "checkIfExactMode"(): boolean;

    "eq"(p0: number, p1: number): number;

    "isEqualOrAlmost"(p0: number, p1: number): boolean;

    "neq"(p0: number, p1: number): number;

    "lt"(p0: number, p1: number): number;

    "gt"(p0: number, p1: number): number;

    "leq"(p0: number, p1: number): number;

    "geq"(p0: number, p1: number): number;
}

export interface mathcollection_BooleanAlgebraStatics {

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "andVariadicWithCancel"(values: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "orVariadicWithCancel"(values: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "xorVariadicWithCancel"(values: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    readonly "FALSE": number;
    readonly "TRUE": number;
    readonly "NULL": number;
    readonly "F": number;
    readonly "T": number;
    readonly "N": number;

    "double2IntBoolean"(p0: number): number;

    "and"(p0: number, p1: number): number;

    "or"(p0: number, p1: number): number;

    "xor"(p0: number, p1: number): number;

    "nand"(p0: number, p1: number): number;

    "nor"(p0: number, p1: number): number;

    "xnor"(p0: number, p1: number): number;

    "imp"(p0: number, p1: number): number;

    "eqv"(p0: number, p1: number): number;

    "not"(p0: number): number;

    "cimp"(p0: number, p1: number): number;

    "nimp"(p0: number, p1: number): number;

    "cnimp"(p0: number, p1: number): number;

    "andVariadic"(p0: Array<number> | Float64Array): number;

    "orVariadic"(p0: Array<number> | Float64Array): number;

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
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "integralTrapezoidWithCancel"(f: Expression | null, x: Argument | null, a: number, b: number, eps: number, maxSteps: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "derivativeWithCancel"(f: Expression | null, x: Argument | null, x0: number, derType: number | Int32Value, eps: number, maxSteps: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "derivativeNthWithCancel"(f: Expression | null, n: number, x: Argument | null, x0: number, derType: number | Int32Value, eps: number, maxSteps: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "forwardDifferenceWithCancel"(f: Expression | null, h: number, x: Argument | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "backwardDifferenceWithCancel"(f: Expression | null, h: number, x: Argument | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "solveBrentWithCancel"(f: Expression | null, x: Argument | null, a: number, b: number, eps: number, maxSteps: number, cancelId: number): number;

    readonly "LEFT_DERIVATIVE": number;
    readonly "RIGHT_DERIVATIVE": number;
    readonly "GENERAL_DERIVATIVE": number;

    "integralTrapezoid"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number, p5: number | Int32Value): number;

    "derivative"(p0: Expression | null, p1: Argument | null, p2: number, p3: number | Int32Value, p4: number, p5: number | Int32Value): number;

    "derivativeNth"(p0: Expression | null, p1: number, p2: Argument | null, p3: number, p4: number | Int32Value, p5: number, p6: number | Int32Value): number;

    "forwardDifference"(p0: Expression | null, p1: Argument | null, p2: number): number;

    "forwardDifference"(p0: Expression | null, p1: Argument | null): number;

    "backwardDifference"(p0: Expression | null, p1: Argument | null, p2: number): number;

    "backwardDifference"(p0: Expression | null, p1: Argument | null): number;

    "forwardDifference"(p0: Expression | null, p1: number, p2: Argument | null, p3: number): number;

    "forwardDifference"(p0: Expression | null, p1: number, p2: Argument | null): number;

    "backwardDifference"(p0: Expression | null, p1: number, p2: Argument | null, p3: number): number;

    "backwardDifference"(p0: Expression | null, p1: number, p2: Argument | null): number;

    "solveBrent"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number, p5: number): number;
}

export interface mathcollection_EvaluateStatics {
    "polynomial"(p0: number, p1: Array<number> | Float64Array): number;

    "p1evl"(p0: number, p1: Array<number> | Float64Array, p2: number | Int32Value): number;

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

    "getConstantValue"(p0: number | Int32Value): number;
}

export interface mathcollection_MathFunctionsStatics {

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "bellNumberWithCancel"(n: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "bellNumberWithCancel"(n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "eulerNumberWithCancel"(n: number | Int32Value, k: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "eulerNumberWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "factorialWithCancel"(n: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "factorialWithCancel"(n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "factorialFallingWithCancel"(x: number, n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "factorialRisingWithCancel"(x: number, n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "binomCoeffWithCancel"(n: number, k: bigint, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "binomCoeffWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "numberOfPermutationsWithCancel"(n: number, k: bigint, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "numberOfPermutationsWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "bernoulliNumberWithCancel"(m: number | Int32Value, n: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "bernoulliNumberWithCancel"(m: number, n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "Stirling1NumberWithCancel"(n: number | Int32Value, k: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "Stirling1NumberWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "Stirling2NumberWithCancel"(n: number | Int32Value, k: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "Stirling2NumberWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "worpitzkyNumberWithCancel"(n: number | Int32Value, k: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "worpitzkyNumberWithCancel"(n: number, k: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "ordinaryHarmonicNumberWithCancel"(n: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "ordinaryHarmonicNumberWithCancel"(n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "generalizedHarmonicNumberWithCancel"(x: number, n: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "generalizedHarmonicNumberWithCancel"(x: number, n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "fibonacciNumberWithCancel"(n: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "fibonacciNumberWithCancel"(n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "lucasNumberWithCancel"(n: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "lucasNumberWithCancel"(n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "continuedFractionWithCancel"(sequence: ReadonlyArray<number> | Float64Array | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "continuedPolynomialWithCancel"(x: ReadonlyArray<number> | Float64Array | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "eulerPolynomialWithCancel"(m: number | Int32Value, x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "eulerPolynomialWithCancel"(m: number, x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "tetrationWithCancel"(a: number, n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "roundWithCancel"(value: number, places: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "roundHalfUpWithCancel"(value: number, places: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "roundDownWithCancel"(value: number, places: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "lengthRoundWithCancel"(value: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "coalesceWithCancel"(values: ReadonlyArray<number> | Float64Array | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "getFunctionValueWithCancel"(f: Expression | null, x: Argument | null, x0: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "getFunctionValuesWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): Array<number> | null;

    "plus"(p0: number, p1: number): number;

    "minus"(p0: number, p1: number): number;

    "multiply"(p0: number, p1: number): number;

    "div"(p0: number, p1: number): number;

    "divQuotient"(p0: number, p1: number): number;

    "bellNumber"(p0: number | Int32Value): number;

    "bellNumber"(p0: number): number;

    "eulerNumber"(p0: number | Int32Value, p1: number | Int32Value): number;

    "eulerNumber"(p0: number, p1: number): number;

    "factorial"(p0: number | Int32Value): number;

    "factorial"(p0: number): number;

    "factorialFalling"(p0: number, p1: number): number;

    "factorialRising"(p0: number, p1: number): number;

    "binomCoeff"(p0: number, p1: bigint): number;

    "binomCoeff"(p0: number, p1: number): number;

    "numberOfPermutations"(p0: number, p1: bigint): number;

    "numberOfPermutations"(p0: number, p1: number): number;

    "bernoulliNumber"(p0: number | Int32Value, p1: number | Int32Value): number;

    "bernoulliNumber"(p0: number, p1: number): number;

    "Stirling1Number"(p0: number | Int32Value, p1: number | Int32Value): number;

    "Stirling1Number"(p0: number, p1: number): number;

    "Stirling2Number"(p0: number | Int32Value, p1: number | Int32Value): number;

    "Stirling2Number"(p0: number, p1: number): number;

    "worpitzkyNumber"(p0: number | Int32Value, p1: number | Int32Value): number;

    "worpitzkyNumber"(p0: number, p1: number): number;

    "harmonicNumber"(p0: number | Int32Value): number;

    "harmonicNumber"(p0: number): number;

    "harmonicNumber"(p0: number, p1: number | Int32Value): number;

    "harmonicNumber"(p0: number, p1: number): number;

    "catalanNumber"(p0: number | Int32Value): number;

    "catalanNumber"(p0: number): number;

    "fibonacciNumber"(p0: number | Int32Value): number;

    "fibonacciNumber"(p0: number): number;

    "lucasNumber"(p0: number | Int32Value): number;

    "lucasNumber"(p0: number): number;

    "kroneckerDelta"(p0: number, p1: number): number;

    "kroneckerDelta"(p0: number | Int32Value, p1: number | Int32Value): number;

    /** Native continued fraction; the rest form packs numbers into its native array. */
    "continuedFraction"(...sequence: number[]): number;

    "continuedFraction"(p0: Array<number> | Float64Array | null): number;

    /** Native continued polynomial; accepts a JS array or spread numbers. */
    "continuedPolynomial"(...sequence: number[]): number;

    "continuedPolynomial"(p0: Array<number> | Float64Array | null): number;

    "eulerPolynomial"(p0: number | Int32Value, p1: number): number;

    "eulerPolynomial"(p0: number, p1: number): number;

    "chi"(p0: number, p1: number, p2: number): number;

    "chi_LR"(p0: number, p1: number, p2: number): number;

    "chi_L"(p0: number, p1: number, p2: number): number;

    "chi_R"(p0: number, p1: number, p2: number): number;

    "isAlmostInt"(p0: number): boolean;

    "power"(p0: number, p1: number): number;

    "root"(p0: number, p1: number): number;

    "tetration"(p0: number, p1: number): number;

    "mod"(p0: number, p1: number): number;

    "sin"(p0: number): number;

    "cos"(p0: number): number;

    "tan"(p0: number): number;

    "ctan"(p0: number): number;

    "sec"(p0: number): number;

    "cosec"(p0: number): number;

    "asin"(p0: number): number;

    "acos"(p0: number): number;

    "atan"(p0: number): number;

    "actan"(p0: number): number;

    "asec"(p0: number): number;

    "acosec"(p0: number): number;

    "ln"(p0: number): number;

    "log2"(p0: number): number;

    "log10"(p0: number): number;

    "rad"(p0: number): number;

    "exp"(p0: number): number;

    "sqrt"(p0: number): number;

    "sinh"(p0: number): number;

    "cosh"(p0: number): number;

    "tanh"(p0: number): number;

    "coth"(p0: number): number;

    "sech"(p0: number): number;

    "csch"(p0: number): number;

    "deg"(p0: number): number;

    "abs"(p0: number): number;

    "sgn"(p0: number): number;

    "floor"(p0: number): number;

    "ceil"(p0: number): number;

    "arsinh"(p0: number): number;

    "arcosh"(p0: number): number;

    "artanh"(p0: number): number;

    "arcoth"(p0: number): number;

    "arsech"(p0: number): number;

    "arcsch"(p0: number): number;

    "sa"(p0: number): number;

    "sinc"(p0: number): number;

    "log"(p0: number, p1: number): number;

    "round"(p0: number, p1: number | Int32Value): number;

    "roundHalfUp"(p0: number, p1: number | Int32Value): number;

    "roundDown"(p0: number, p1: number | Int32Value): number;

    "roundUlp"(p0: number): number;

    "integerPart"(p0: number): number;

    "decimalDigitsBefore"(p0: number): number;

    "ulp"(p0: number): number;

    "ulpDecimalDigitsBefore"(p0: number): number;

    "decimalNumberLength"(p0: number): number;

    "fractionalPartLength"(p0: number): number;

    "lengthRound"(p0: number): number;

    "coalesce"(p0: Array<number> | Float64Array | null): number;

    "isInteger"(p0: number): boolean;

    "almostEqual"(p0: number, p1: number): boolean;

    "getFunctionValue"(p0: Expression, p1: Argument, p2: number): number;

    "getFunctionValues"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number): Array<number> | null;
}

export interface mathcollection_NumberTheoryStatics {

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "minWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "argminWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "maxWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "argmaxWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "sortAscWithCancel"(array: Array<number> | Float64Array | null, cancelId: number): Array<number> | null;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "getDistValuesWithCancel"(array: Array<number> | Float64Array | null, returnOrderByDescFreqAndAscOrigPos: boolean, cancelId: number): Array<Array<number>> | null;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "numberOfDistValuesWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "gcdWithCancel"(a: bigint, b: bigint, cancelId: number): bigint;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "gcdWithCancel"(a: number, b: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "gcdWithCancel"(numbers: Array<bigint> | BigInt64Array, cancelId: number): bigint;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "gcdWithCancel"(numbers: Array<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "lcmWithCancel"(a: bigint, b: bigint, cancelId: number): bigint;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "lcmWithCancel"(a: number, b: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "lcmWithCancel"(numbers: Array<bigint> | BigInt64Array, cancelId: number): bigint;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "lcmWithCancel"(numbers: Array<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "sumWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "prodWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "primeTestWithCancel"(n: bigint, cancelId: number): boolean;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "primeTestWithCancel"(n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "primeCountWithCancel"(n: bigint, cancelId: number): bigint;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "primeCountWithCancel"(n: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "sigmaSummationWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "piProductWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "minWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "maxWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "convOthBase2DecimalWithCancel"(numberLiteral: string | null, numeralSystemBase: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "convOthBase2DecimalWithCancel"(numeralSystemBase: number | Int32Value, digits: ReadonlyArray<number> | Int32Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "convOthBase2DecimalWithCancel"(numeralSystemBase: number, digits: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "convOthBase2DecimalWithCancel"(baseAndDigits: ReadonlyArray<number> | Int32Array | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "convOthBase2DecimalWithCancel"(baseAndDigits: ReadonlyArray<number> | Float64Array | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "formatNumberInBaseWithCancel"(decimalNumber: number, numeralSystemBase: number | Int32Value, cancelId: number): string | null;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "numberOfDigitsWithCancel"(number: bigint, numeralSystemBase: bigint, cancelId: number): bigint;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "numberOfDigitsWithCancel"(number: number, numeralSystemBase: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "digitAtPositionWithCancel"(number: bigint, position: number | Int32Value, numeralSystemBase: number | Int32Value, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "digitAtPositionWithCancel"(number: number, position: number, numeralSystemBase: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "decimalDigitAtPositionWithCancel"(number: number, position: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "primeFactorsWithCancel"(number: bigint, cancelId: number): Array<bigint> | null;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "primeFactorsWithCancel"(number: number, cancelId: number): Array<number> | null;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "numberOfPrimeFactorsWithCancel"(number: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "primeFactorValueWithCancel"(number: number, id: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "primeFactorExponentWithCancel"(number: number, id: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "toFractionWithCancel"(value: number, cancelId: number): Array<number> | null;

    readonly "DEFAULT_TO_FRACTION_INIT_SEARCH_SIZE": bigint;

    "setToFractionInitSearchSize"(p0: bigint): void;

    "getToFractionInitSearchSize"(): bigint;

    "min"(p0: number, p1: number): number;

    "min"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    "min"(p0: Expression, p1: Argument, p2: number, p3: number, p4: number): number;

    "argmin"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    "max"(p0: number, p1: number): number;

    "max"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    "max"(p0: Expression, p1: Argument, p2: number, p3: number, p4: number): number;

    "argmax"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    "sortAsc"(p0: Array<number> | Float64Array | null): Array<number> | null;

    "getDistValues"(p0: Array<number> | Float64Array | null, p1: boolean): Array<Array<number>> | null;

    "numberOfDistValues"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    /** Scalar numbers use the native double overload; int64 bigint pairs retain bigint. */
    "gcd"(): number;

    "gcd"(a: bigint, b: bigint): bigint;

    "gcd"(first: bigint, ...rest: bigint[]): bigint;

    "gcd"(a: number, b: number): number;

    "gcd"(numbers: readonly []): number;

    "gcd"(numbers: readonly [bigint, ...bigint[]]): bigint;

    /** An empty untyped JS array selects double; a nonempty bigint array selects int64. */
    "gcd"(numbers: readonly bigint[]): number | bigint;

    "gcd"(...numbers: number[]): number;

    "gcd"(numbers: readonly number[] | NativeList<number, "double"> | Float64Array): number;

    /** Scalar numbers use the native double overload; int64 bigint pairs retain bigint. */
    "lcm"(): number;

    "lcm"(a: bigint, b: bigint): bigint;

    "lcm"(first: bigint, ...rest: bigint[]): bigint;

    "lcm"(a: number, b: number): number;

    "lcm"(numbers: readonly []): number;

    "lcm"(numbers: readonly [bigint, ...bigint[]]): bigint;

    /** An empty untyped JS array selects double; a nonempty bigint array selects int64. */
    "lcm"(numbers: readonly bigint[]): number | bigint;

    "lcm"(...numbers: number[]): number;

    "lcm"(numbers: readonly number[] | NativeList<number, "double"> | Float64Array): number;

    "sum"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    "prod"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    "primeTest"(p0: bigint): boolean;

    "primeTest"(p0: number): number;

    "primeCount"(p0: bigint): bigint;

    "primeCount"(p0: number): number;

    "sigmaSummation"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number): number;

    "piProduct"(p0: Expression | null, p1: Argument | null, p2: number, p3: number, p4: number): number;

    "digitIndex"(p0: string): number;

    "digitChar"(p0: number | Int32Value): string;

    "getNumeralSystemBase"(p0: string | null): number;

    "getNumeralSystemBase"(p0: string): number;

    /** Digits are forwarded to the native conversion, without JS numerical conversion. */
    "convOthBase2Decimal"(numeralSystemBase: number, ...digits: number[]): number;

    "convOthBase2Decimal"(p0: string | null, p1: number | Int32Value): number;

    "convOthBase2Decimal"(p0: string, p1: number | Int32Value): number;

    "convOthBase2Decimal"(p0: string | null): number;

    "convOthBase2Decimal"(p0: string): number;

    "convOthBase2Decimal"(p0: number | Int32Value, p1: Array<number> | NativeList<number, "int">): number;

    "convOthBase2Decimal"(p0: number | Int32Value, p1: Array<number> | Int32Array | null): number;

    "convOthBase2Decimal"(p0: number, p1: Array<number> | NativeList<number, "double">): number;

    "convOthBase2Decimal"(p0: number, p1: Array<number> | Float64Array | null): number;

    "convOthBase2Decimal"(p0: Array<number> | Int32Array | null): number;

    "convOthBase2Decimal"(p0: Array<number> | Float64Array | null): number;

    "convDecimal2OthBase"(p0: number, p1: number | Int32Value): string | null;

    "convDecimal2OthBase"(p0: number, p1: number | Int32Value, p2: number | Int32Value): string | null;

    "numberOfDigits"(p0: bigint): number;

    "numberOfDigits"(p0: number): number;

    "numberOfDigits"(p0: bigint, p1: bigint): bigint;

    "numberOfDigits"(p0: number, p1: number): number;

    "digitAtPosition"(p0: bigint, p1: number | Int32Value, p2: number | Int32Value): number;

    "digitAtPosition"(p0: bigint, p1: number | Int32Value): number;

    "digitAtPosition"(p0: number, p1: number, p2: number): number;

    "digitAtPosition"(p0: number, p1: number): number;

    "primeFactors"(p0: bigint): Array<bigint> | null;

    "primeFactors"(p0: number): Array<number> | null;

    "numberOfPrimeFactors"(p0: number): number;

    "primeFactorValue"(p0: number, p1: number): number;

    "primeFactorExponent"(p0: number, p1: number): number;

    "toFraction"(p0: number): Array<number> | null;

    "toMixedFraction"(p0: number): Array<number> | null;

    "fractionToString"(p0: Array<number> | Float64Array): string | null;

    "toFractionString"(p0: number): string | null;

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
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "rndNormalWithCancel"(mean: number, stddev: number, rnd: IRandom | null, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "pdfStudentTWithCancel"(x: number, v: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "cdfStudentTWithCancel"(x: number, v: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "qntStudentTWithCancel"(p: number, v: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "rndStudentTWithCancel"(v: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "pdfChiSquaredWithCancel"(x: number, k: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "cdfChiSquaredWithCancel"(x: number, k: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "qntChiSquaredWithCancel"(p: number, k: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "rndChiSquaredWithCancel"(k: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "pdfSnedecordFWithCancel"(x: number, d1: number, d2: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "cdfSnedecordFWithCancel"(x: number, d1: number, d2: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "qntSnedecordFWithCancel"(p: number, d1: number, d2: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "rndSnedecordFWithCancel"(d1: number, d2: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "getRandomVariableValueWithCancel"(randomVariableId: number | Int32Value, cancelId: number): number;

    "randomGenerator": IRandom | null;

    "rndUniformContinuous"(p0: number, p1: number, p2: IRandom | null): number;

    "rndUniformContinuous"(p0: number, p1: number): number;

    "rndUniformContinuous"(p0: IRandom | null): number;

    "randomUniformContinuous"(): number;

    "pdfUniformContinuous"(p0: number, p1: number, p2: number): number;

    "cdfUniformContinuous"(p0: number, p1: number, p2: number): number;

    "qntUniformContinuous"(p0: number, p1: number, p2: number): number;

    "rndInteger"(p0: number | Int32Value, p1: number | Int32Value, p2: IRandom | null): number;

    "rndInteger"(p0: number, p1: number, p2: IRandom | null): number;

    "rndInteger"(p0: number | Int32Value, p1: number | Int32Value): number;

    "rndInteger"(p0: IRandom | null): number;

    "rndIndex"(p0: number | Int32Value, p1: IRandom | null): number;

    "rndIndex"(p0: number | Int32Value): number;

    "rndInteger"(): number;

    "rndNormal"(p0: number, p1: number, p2: IRandom | null): number;

    "rndNormal"(p0: number, p1: number): number;

    "pdfNormal"(p0: number, p1: number, p2: number): number;

    "cdfNormal"(p0: number, p1: number, p2: number): number;

    "qntNormal"(p0: number, p1: number, p2: number): number;

    "pdfStudentT"(p0: number, p1: number): number;

    "cdfStudentT"(p0: number, p1: number): number;

    "qntStudentT"(p0: number, p1: number): number;

    "rndStudentT"(p0: number): number;

    "pdfChiSquared"(p0: number, p1: number): number;

    "cdfChiSquared"(p0: number, p1: number): number;

    "qntChiSquared"(p0: number, p1: number): number;

    "rndChiSquared"(p0: number): number;

    "pdfSnedecordF"(p0: number, p1: number, p2: number): number;

    "cdfSnedecordF"(p0: number, p1: number, p2: number): number;

    "qntSnedecordF"(p0: number, p1: number, p2: number): number;

    "rndSnedecordF"(p0: number, p1: number): number;

    "getRandomVariableValue"(p0: number | Int32Value): number;
}

export interface mathcollection_SpecialFunctionsStatics {

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "exponentialIntegralEiWithCancel"(x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "logarithmicIntegralLiWithCancel"(x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "offsetLogarithmicIntegralLiWithCancel"(x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "gammaWithCancel"(x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "lanchosGammaWithCancel"(x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "logGammaWithCancel"(x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "sgnGammaWithCancel"(x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "regularizedGammaLowerPWithCancel"(s: number, x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "inverseRegularizedGammaLowerPWithCancel"(a: number, p: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "incompleteGammaLowerWithCancel"(s: number, x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "regularizedGammaUpperQWithCancel"(s: number, x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "incompleteGammaUpperWithCancel"(s: number, x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "diGammaWithCancel"(x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "logBetaWithCancel"(x: number, y: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "betaWithCancel"(x: number, y: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "incompleteBetaWithCancel"(a: number, b: number, x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "regularizedBetaWithCancel"(a: number, b: number, x: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "inverseRegularizedBetaWithCancel"(a: number, b: number, p: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "lambertWWithCancel"(x: number, branch: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "hypergeometricFWithCancel"(a: number, b: number, c: number, z: number, maxIterations: number, precision: number, cancelId: number): number;

    "exponentialIntegralEi"(p0: number): number;

    "logarithmicIntegralLi"(p0: number): number;

    "offsetLogarithmicIntegralLi"(p0: number): number;

    "erf"(p0: number): number;

    "erfc"(p0: number): number;

    "erfInv"(p0: number): number;

    "erfcInv"(p0: number): number;

    "gamma"(p0: number): number;

    "lanchosGamma"(p0: number): number;

    "logGamma"(p0: number): number;

    "sgnGamma"(p0: number): number;

    "regularizedGammaLowerP"(p0: number, p1: number): number;

    "inverseRegularizedGammaLowerP"(p0: number, p1: number): number;

    "incompleteGammaLower"(p0: number, p1: number): number;

    "regularizedGammaUpperQ"(p0: number, p1: number): number;

    "incompleteGammaUpper"(p0: number, p1: number): number;

    "diGamma"(p0: number): number;

    "logBeta"(p0: number, p1: number): number;

    "beta"(p0: number, p1: number): number;

    "incompleteBeta"(p0: number, p1: number, p2: number): number;

    "regularizedBeta"(p0: number, p1: number, p2: number): number;

    "inverseRegularizedBeta"(p0: number, p1: number, p2: number): number;

    "lambertW"(p0: number, p1: number): number;

    "hypergeometricF"(p0: number, p1: number, p2: number, p3: number, p4: number, p5: number): number;
}

export interface mathcollection_StatisticsStatics {

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "avgWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "varWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "stdWithCancel"(f: Expression | null, index: Argument | null, from: number, to: number, delta: number, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "avgWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "varWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "stdWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "medianWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    /**
     * Native cooperative cancellation; ID 0 uses the global flag, positive IDs also observe their domain.
     * cancelId must be an integer in 0..32767. Signals remain set until reset/release.
     * Existing checks determine the result; a set signal does not prove this call stopped.
     * Synchronous WASM blocks timers/messages; see docs/CANCELLATION.md for delivery and lifecycle limits.
     * @since 6.2.0
     */
    "modeWithCancel"(numbers: ReadonlyArray<number> | Float64Array, cancelId: number): number;

    "avg"(p0: Expression, p1: Argument, p2: number, p3: number, p4: number): number;

    "avg"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    "var"(p0: Expression, p1: Argument, p2: number, p3: number, p4: number): number;

    "var"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    "std"(p0: Expression, p1: Argument, p2: number, p3: number, p4: number): number;

    "std"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

    "median"(...p0: (number | readonly (number)[] | NativeList<number, "double"> | Float64Array | null)[]): number;

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
    "numberToHexString"(p0: number | Int32Value): string | null;

    "numberToHexString"(p0: bigint): string | null;

    "numberToHexString"(p0: number): string | null;

    "hexString2AsciiString"(p0: string): string | null;

    "numberToAsciiString"(p0: number | Int32Value): string | null;

    "numberToAsciiString"(p0: bigint): string | null;

    "numberToAsciiString"(p0: number): string | null;

    "countOccurrences"(p0: string | null, p1: string | null): number;

    "countOccurrences"(p0: string, p1: string): number;

    "countOccurrences"(p0: string, p1: string): number;

    "countLines"(p0: string | null): number;

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

    new(kind: "PrimitiveElementPtr"): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    new(kind: "PrimitiveElementPtr", rows: number): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    new(kind: "PrimitiveElementPtr", rows: number, columns: number): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    new(kind: "PrimitiveElementPtr", values: readonly (PrimitiveElement | null)[]): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    toArray(kind: "PrimitiveElementPtr", values: NativeList<PrimitiveElement | null, "PrimitiveElementPtr"> | readonly (PrimitiveElement | null)[]): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    new(kind: "CalcStepRecordPtr"): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    new(kind: "CalcStepRecordPtr", rows: number): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    new(kind: "CalcStepRecordPtr", rows: number, columns: number): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    new(kind: "CalcStepRecordPtr", values: readonly (CalcStepRecord | null)[]): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    toArray(kind: "CalcStepRecordPtr", values: NativeList<CalcStepRecord | null, "CalcStepRecordPtr"> | readonly (CalcStepRecord | null)[]): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    new(kind: "double"): NativeArray<number, "double">;

    new(kind: "double", rows: number): NativeArray<number, "double">;

    new(kind: "double", rows: number, columns: number): NativeArray<number, "double">;

    new(kind: "double", values: readonly (number)[] | Float64Array): NativeArray<number, "double">;

    toArray(kind: "double", values: NativeList<number, "double"> | readonly (number)[]): NativeArray<number, "double">;

    new(kind: "int"): NativeArray<number, "int">;

    new(kind: "int", rows: number): NativeArray<number, "int">;

    new(kind: "int", rows: number, columns: number): NativeArray<number, "int">;

    new(kind: "int", values: readonly (number)[] | Int32Array): NativeArray<number, "int">;

    toArray(kind: "int", values: NativeList<number, "int"> | readonly (number)[]): NativeArray<number, "int">;

    new(kind: "Long"): NativeArray<bigint, "Long">;

    new(kind: "Long", rows: number): NativeArray<bigint, "Long">;

    new(kind: "Long", rows: number, columns: number): NativeArray<bigint, "Long">;

    new(kind: "Long", values: readonly (bigint)[] | BigInt64Array): NativeArray<bigint, "Long">;

    toArray(kind: "Long", values: NativeList<bigint, "Long"> | readonly (bigint)[]): NativeArray<bigint, "Long">;

    new(kind: "StringPtr"): NativeArray<string | null, "StringPtr">;

    new(kind: "StringPtr", rows: number): NativeArray<string | null, "StringPtr">;

    new(kind: "StringPtr", rows: number, columns: number): NativeArray<string | null, "StringPtr">;

    new(kind: "StringPtr", values: readonly (string | null)[]): NativeArray<string | null, "StringPtr">;

    toArray(kind: "StringPtr", values: NativeList<string | null, "StringPtr"> | readonly (string | null)[]): NativeArray<string | null, "StringPtr">;

    new(kind: "ArgumentPtr"): NativeArray<Argument | null, "ArgumentPtr">;

    new(kind: "ArgumentPtr", rows: number): NativeArray<Argument | null, "ArgumentPtr">;

    new(kind: "ArgumentPtr", rows: number, columns: number): NativeArray<Argument | null, "ArgumentPtr">;

    new(kind: "ArgumentPtr", values: readonly (Argument | null)[]): NativeArray<Argument | null, "ArgumentPtr">;

    toArray(kind: "ArgumentPtr", values: NativeList<Argument | null, "ArgumentPtr"> | readonly (Argument | null)[]): NativeArray<Argument | null, "ArgumentPtr">;

    new(kind: "ConstantPtr"): NativeArray<Constant | null, "ConstantPtr">;

    new(kind: "ConstantPtr", rows: number): NativeArray<Constant | null, "ConstantPtr">;

    new(kind: "ConstantPtr", rows: number, columns: number): NativeArray<Constant | null, "ConstantPtr">;

    new(kind: "ConstantPtr", values: readonly (Constant | null)[]): NativeArray<Constant | null, "ConstantPtr">;

    toArray(kind: "ConstantPtr", values: NativeList<Constant | null, "ConstantPtr"> | readonly (Constant | null)[]): NativeArray<Constant | null, "ConstantPtr">;

    new(kind: "FunctionPtr"): NativeArray<Function | null, "FunctionPtr">;

    new(kind: "FunctionPtr", rows: number): NativeArray<Function | null, "FunctionPtr">;

    new(kind: "FunctionPtr", rows: number, columns: number): NativeArray<Function | null, "FunctionPtr">;

    new(kind: "FunctionPtr", values: readonly (Function | null)[]): NativeArray<Function | null, "FunctionPtr">;

    toArray(kind: "FunctionPtr", values: NativeList<Function | null, "FunctionPtr"> | readonly (Function | null)[]): NativeArray<Function | null, "FunctionPtr">;

    new(kind: "SpecialValuePtr"): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    new(kind: "SpecialValuePtr", rows: number): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    new(kind: "SpecialValuePtr", rows: number, columns: number): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    new(kind: "SpecialValuePtr", values: readonly (SpecialValue | null)[]): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    toArray(kind: "SpecialValuePtr", values: NativeList<SpecialValue | null, "SpecialValuePtr"> | readonly (SpecialValue | null)[]): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    new(kind: "ExpressionPtr"): NativeArray<Expression | null, "ExpressionPtr">;

    new(kind: "ExpressionPtr", rows: number): NativeArray<Expression | null, "ExpressionPtr">;

    new(kind: "ExpressionPtr", rows: number, columns: number): NativeArray<Expression | null, "ExpressionPtr">;

    new(kind: "ExpressionPtr", values: readonly (Expression | null)[]): NativeArray<Expression | null, "ExpressionPtr">;

    toArray(kind: "ExpressionPtr", values: NativeList<Expression | null, "ExpressionPtr"> | readonly (Expression | null)[]): NativeArray<Expression | null, "ExpressionPtr">;

    new(kind: "TokenPtr"): NativeArray<Token | null, "TokenPtr">;

    new(kind: "TokenPtr", rows: number): NativeArray<Token | null, "TokenPtr">;

    new(kind: "TokenPtr", rows: number, columns: number): NativeArray<Token | null, "TokenPtr">;

    new(kind: "TokenPtr", values: readonly (Token | null)[]): NativeArray<Token | null, "TokenPtr">;

    toArray(kind: "TokenPtr", values: NativeList<Token | null, "TokenPtr"> | readonly (Token | null)[]): NativeArray<Token | null, "TokenPtr">;

    new(kind: "KeyWordPtr"): NativeArray<KeyWord | null, "KeyWordPtr">;

    new(kind: "KeyWordPtr", rows: number): NativeArray<KeyWord | null, "KeyWordPtr">;

    new(kind: "KeyWordPtr", rows: number, columns: number): NativeArray<KeyWord | null, "KeyWordPtr">;

    new(kind: "KeyWordPtr", values: readonly (KeyWord | null)[]): NativeArray<KeyWord | null, "KeyWordPtr">;

    toArray(kind: "KeyWordPtr", values: NativeList<KeyWord | null, "KeyWordPtr"> | readonly (KeyWord | null)[]): NativeArray<KeyWord | null, "KeyWordPtr">;

    new(kind: "RecursiveArgumentPtr"): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    new(kind: "RecursiveArgumentPtr", rows: number): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    new(kind: "RecursiveArgumentPtr", rows: number, columns: number): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    new(kind: "RecursiveArgumentPtr", values: readonly (RecursiveArgument | null)[]): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    toArray(kind: "RecursiveArgumentPtr", values: NativeList<RecursiveArgument | null, "RecursiveArgumentPtr"> | readonly (RecursiveArgument | null)[]): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;
}

export interface InitOptions {
    locateFile?: (path: string, prefix: string) => string;
    wasmBinary?: Uint8Array;
    print?: (text: string) => void;
    printErr?: (text: string) => void;
}

export interface VirtualFileSystem {
    readFile(path: string): Uint8Array;

    writeFile(path: string, bytes: Uint8Array): void;

    unlink(path: string): void;

    mkdir(path: string): void;

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
        cloneHandle(): Node;
        "getKind"(): Kind;
        "getText"(): string;
        "getSymbolStyle"(): SymbolStyle;
        /** Frozen snapshot of owning handles. Release each returned handle. */
        "getChildren"(): readonly Node[];
        "getStartOffset"(): number;
        "getEndOffset"(): number;
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
    "parse"(latex: string | null): LaTeXParser.Node;
    readonly Node: { readonly prototype: LaTeXParser.Node };
    readonly Kind: LaTeXParser.KindStatics;
    readonly SymbolStyle: LaTeXParser.SymbolStyleStatics;
}

export interface MxParser {
    readonly LaTeXParser: LaTeXParserStatics;
    readonly FS: Readonly<VirtualFileSystem>;
    readonly LongDouble: {};
    readonly int32: (value: number) => Int32Value;

    nullList<K extends NullNativeListKind>(kind: K): NullNativeList<K>;

    readonly Vector: NativeVectorConstructor;

    new_Vector<K extends keyof NativeVectorTypes>(kind: K, size?: number): NativeVector<NativeVectorTypes[K], K>;

    new_Stack(kind: "PrimitiveElementPtr"): NativeList<PrimitiveElement | null, "PrimitiveElementPtr">;

    new_Stack(kind: "CalcStepRecordPtr"): NativeList<CalcStepRecord | null, "CalcStepRecordPtr">;

    new_Stack(kind: "double"): NativeList<number, "double">;

    new_Stack(kind: "int"): NativeList<number, "int">;

    new_Stack(kind: "Long"): NativeList<bigint, "Long">;

    new_Stack(kind: "StringPtr"): NativeList<string | null, "StringPtr">;

    new_Stack(kind: "ArgumentPtr"): NativeList<Argument | null, "ArgumentPtr">;

    new_Stack(kind: "ConstantPtr"): NativeList<Constant | null, "ConstantPtr">;

    new_Stack(kind: "FunctionPtr"): NativeList<Function | null, "FunctionPtr">;

    new_Stack(kind: "SpecialValuePtr"): NativeList<SpecialValue | null, "SpecialValuePtr">;

    new_Stack(kind: "ExpressionPtr"): NativeList<Expression | null, "ExpressionPtr">;

    new_Stack(kind: "TokenPtr"): NativeList<Token | null, "TokenPtr">;

    new_Stack(kind: "KeyWordPtr"): NativeList<KeyWord | null, "KeyWordPtr">;

    new_Stack(kind: "RecursiveArgumentPtr"): NativeList<RecursiveArgument | null, "RecursiveArgumentPtr">;

    new_ListInt(): NativeList<number, "int">;

    readonly Array: NativeArrayConstructor;

    new_Array(kind: "PrimitiveElementPtr", rows: number): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    new_Array(kind: "PrimitiveElementPtr", rows: number, columns: number): NativeArray<PrimitiveElement | null, "PrimitiveElementPtr">;

    new_Array(kind: "CalcStepRecordPtr", rows: number): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    new_Array(kind: "CalcStepRecordPtr", rows: number, columns: number): NativeArray<CalcStepRecord | null, "CalcStepRecordPtr">;

    new_Array(kind: "double", rows: number): NativeArray<number, "double">;

    new_Array(kind: "double", rows: number, columns: number): NativeArray<number, "double">;

    new_Array(kind: "int", rows: number): NativeArray<number, "int">;

    new_Array(kind: "int", rows: number, columns: number): NativeArray<number, "int">;

    new_Array(kind: "Long", rows: number): NativeArray<bigint, "Long">;

    new_Array(kind: "Long", rows: number, columns: number): NativeArray<bigint, "Long">;

    new_Array(kind: "StringPtr", rows: number): NativeArray<string | null, "StringPtr">;

    new_Array(kind: "StringPtr", rows: number, columns: number): NativeArray<string | null, "StringPtr">;

    new_Array(kind: "ArgumentPtr", rows: number): NativeArray<Argument | null, "ArgumentPtr">;

    new_Array(kind: "ArgumentPtr", rows: number, columns: number): NativeArray<Argument | null, "ArgumentPtr">;

    new_Array(kind: "ConstantPtr", rows: number): NativeArray<Constant | null, "ConstantPtr">;

    new_Array(kind: "ConstantPtr", rows: number, columns: number): NativeArray<Constant | null, "ConstantPtr">;

    new_Array(kind: "FunctionPtr", rows: number): NativeArray<Function | null, "FunctionPtr">;

    new_Array(kind: "FunctionPtr", rows: number, columns: number): NativeArray<Function | null, "FunctionPtr">;

    new_Array(kind: "SpecialValuePtr", rows: number): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    new_Array(kind: "SpecialValuePtr", rows: number, columns: number): NativeArray<SpecialValue | null, "SpecialValuePtr">;

    new_Array(kind: "ExpressionPtr", rows: number): NativeArray<Expression | null, "ExpressionPtr">;

    new_Array(kind: "ExpressionPtr", rows: number, columns: number): NativeArray<Expression | null, "ExpressionPtr">;

    new_Array(kind: "TokenPtr", rows: number): NativeArray<Token | null, "TokenPtr">;

    new_Array(kind: "TokenPtr", rows: number, columns: number): NativeArray<Token | null, "TokenPtr">;

    new_Array(kind: "KeyWordPtr", rows: number): NativeArray<KeyWord | null, "KeyWordPtr">;

    new_Array(kind: "KeyWordPtr", rows: number, columns: number): NativeArray<KeyWord | null, "KeyWordPtr">;

    new_Array(kind: "RecursiveArgumentPtr", rows: number): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    new_Array(kind: "RecursiveArgumentPtr", rows: number, columns: number): NativeArray<RecursiveArgument | null, "RecursiveArgumentPtr">;

    new_List(type: "PrimitiveElementPtr"): NativeList<PrimitiveElement | null, "PrimitiveElementPtr">;

    new_List(type: "PrimitiveElementPtr", capacity: number): NativeList<PrimitiveElement | null, "PrimitiveElementPtr">;

    new_List(type: "CalcStepRecordPtr"): NativeList<CalcStepRecord | null, "CalcStepRecordPtr">;

    new_List(type: "CalcStepRecordPtr", capacity: number): NativeList<CalcStepRecord | null, "CalcStepRecordPtr">;

    new_List(type: "double"): NativeList<number, "double">;

    new_List(type: "double", capacity: number): NativeList<number, "double">;

    new_List(type: "int"): NativeList<number, "int">;

    new_List(type: "int", capacity: number): NativeList<number, "int">;

    new_List(type: "Long"): NativeList<bigint, "Long">;

    new_List(type: "Long", capacity: number): NativeList<bigint, "Long">;

    new_List(type: "StringPtr"): NativeList<string | null, "StringPtr">;

    new_List(type: "StringPtr", capacity: number): NativeList<string | null, "StringPtr">;

    new_List(type: "ArgumentPtr"): NativeList<Argument | null, "ArgumentPtr">;

    new_List(type: "ArgumentPtr", capacity: number): NativeList<Argument | null, "ArgumentPtr">;

    new_List(type: "ConstantPtr"): NativeList<Constant | null, "ConstantPtr">;

    new_List(type: "ConstantPtr", capacity: number): NativeList<Constant | null, "ConstantPtr">;

    new_List(type: "FunctionPtr"): NativeList<Function | null, "FunctionPtr">;

    new_List(type: "FunctionPtr", capacity: number): NativeList<Function | null, "FunctionPtr">;

    new_List(type: "SpecialValuePtr"): NativeList<SpecialValue | null, "SpecialValuePtr">;

    new_List(type: "SpecialValuePtr", capacity: number): NativeList<SpecialValue | null, "SpecialValuePtr">;

    new_List(type: "ExpressionPtr"): NativeList<Expression | null, "ExpressionPtr">;

    new_List(type: "ExpressionPtr", capacity: number): NativeList<Expression | null, "ExpressionPtr">;

    new_List(type: "TokenPtr"): NativeList<Token | null, "TokenPtr">;

    new_List(type: "TokenPtr", capacity: number): NativeList<Token | null, "TokenPtr">;

    new_List(type: "KeyWordPtr"): NativeList<KeyWord | null, "KeyWordPtr">;

    new_List(type: "KeyWordPtr", capacity: number): NativeList<KeyWord | null, "KeyWordPtr">;

    new_List(type: "RecursiveArgumentPtr"): NativeList<RecursiveArgument | null, "RecursiveArgumentPtr">;

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

export function initMxParser(options?: InitOptions): Promise<MxParser>;
