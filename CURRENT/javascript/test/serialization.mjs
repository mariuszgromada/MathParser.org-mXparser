/*
 * @(#)serialization.mjs        6.2.0    2026-11-04
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

import assert from 'node:assert/strict';

export function testSerialization(mx, {equal, throws, keep, prefixStart = 0, prefixEnd = null}) {
    const serial = mx.SerializationUtils;
    const source = keep(new mx.Expression('2+2'));
    const unicode = 'Zażółć — λ 🧮 \ud800 \u0000';
    source.setDescription(unicode);
    equal(source.calculate(), 4);
    serial.disableBinarySerialization();
    equal(serial.serializeToBytes(source), null);
    equal(serial.checkLastOperationWasSuccessful(), false);
    equal(serial.deserializeFromBytes(new Uint8Array([1, 2, 3]), mx.Expression), null);
    equal(serial.isBinarySerializationEnabled(), false);
    serial.enableBinarySerializationIamAwareOfSecurityRisks();
    try {
        equal(serial.serializeToBytes(null), null);
        equal(serial.checkLastOperationWasSuccessful(), false);
        equal(serial.deserializeFromBytes(null, mx.Expression), null);
        equal(serial.checkLastOperationWasSuccessful(), false);
        const argument = keep(new mx.Argument('serialArg', 3)), constant = keep(new mx.Constant('serialConst', 7));
        const fn = keep(new mx.Function('serialFn(t)=t^2+serialConst', constant));
        const recursive = keep(new mx.RecursiveArgument('serialFib(n)=serialFib(n-1)+serialFib(n-2)'));
        recursive.addBaseCase(0, 0);
        recursive.addBaseCase(1, 1);
        const trace = keep(new mx.CalcStepsRegister());
        source.calculate(trace);
        const record = keep(new mx.CalcStepRecord());
        record.content = unicode;
        const token = keep(new mx.Token());
        token.tokenStr = unicode;
        token.tokenValue = -0;
        equal(Object.is(token.tokenValue, -0), true);
        const keyword = keep(new mx.KeyWord('serialWord', unicode, 123, 'serialWord(x)', '6.1.2', 77));
        const roots = [
            [mx.Expression, source, copy => {
                equal(copy.calculate(), 4);
                equal(copy.getDescription(), unicode);
            }],
            [mx.Argument, argument, copy => equal(copy.getArgumentValue(), 3)],
            [mx.Constant, constant, copy => equal(copy.getConstantValue(), 7)],
            [mx.Function, fn, copy => equal(copy.calculate(3), 16)],
            [mx.RecursiveArgument, recursive, copy => equal(copy.getArgumentValue(12), 144)],
            [mx.CalcStepsRegister, trace, copy => {
                equal(copy.result, 4);
                const records = keep(copy.calcStepRecords);
                equal(records.length > 0, true);
            }],
            [mx.CalcStepRecord, record, copy => equal(copy.content, unicode)],
            [mx.Token, token, copy => {
                equal(copy.tokenStr, unicode);
                equal(Object.is(copy.tokenValue, -0), true);
            }],
            [mx.KeyWord, keyword, copy => {
                equal(copy.wordString, 'serialWord');
                equal(copy.description, unicode);
                equal(copy.wordId, 123);
            }]
        ];
        if (!Number.isInteger(prefixStart) || prefixStart < 0 || prefixEnd !== null && (!Number.isInteger(prefixEnd) || prefixEnd < prefixStart)) throw new RangeError('Invalid serialization prefix range');
        let prefixes = 0, prefixCursor = 0;
        for (let index = 0; index < roots.length; index++) {
            const [type, object, validate] = roots[index];
            const bytes = serial.serializeToBytes(object);
            equal(bytes instanceof Uint8Array, true);
            equal(bytes.length > 0, true);
            equal(bytes.buffer instanceof ArrayBuffer, true);
            equal(bytes.buffer.byteLength, bytes.length);
            equal(serial.checkLastOperationWasSuccessful(), true);
            const binary = serial.serializeToString(object);
            equal(typeof binary, 'string');
            equal(binary.length, bytes.length);
            assert.deepEqual(Uint8Array.from(binary, character => character.charCodeAt(0)), bytes);
            const fromBytes = keep(serial.deserializeFromBytes(bytes, type));
            equal(fromBytes instanceof type, true);
            validate(fromBytes);
            const fromString = keep(serial.deserializeFromString(binary, type));
            equal(fromString instanceof type, true);
            validate(fromString);
            const path = `/tmp/mxparser-λ-🧮-${index}.bin`;
            equal(serial.serializeToFile(object, path), true);
            equal(serial.checkLastOperationWasSuccessful(), true);
            const fromFile = keep(serial.deserializeFromFile(path, type));
            equal(fromFile instanceof type, true);
            validate(fromFile);
            // Every incomplete prefix of each trusted native root archive is exercised.
            const begin = Math.max(0, prefixStart - prefixCursor),
                end = prefixEnd === null ? bytes.length : Math.min(bytes.length, prefixEnd - prefixCursor);
            for (let size = begin; size < end; size++) {
                equal(serial.deserializeFromBytes(bytes.subarray(0, size), type), null);
                equal(serial.checkLastOperationWasSuccessful(), false);
                prefixes++;
            }
            prefixCursor += bytes.length;
            validate(object);
        }
        const fa = keep(new mx.Function('sa(t)=t+1')), fb = keep(new mx.Function('sb(t)=t+2'));
        fa.addFunctions(fb);
        fb.addFunctions(fa);
        try {
            const bytes = serial.serializeToBytes(fa);
            const copy = keep(serial.deserializeFromBytes(bytes, mx.Function));
            const peer = keep(copy.getFunction('sb')), back = keep(peer.getFunction('sa'));
            equal(back.isAliasOf(copy), true);
            equal(peer.calculate(3), 5);
            copy.removeFunctions(peer);
            copy.delete();
            equal(back.calculate(3), 4);
            back.delete();
            peer.delete();
        } finally {
            fa.removeFunctions(fb);
        }
        const extended = keep(new mx.Argument('serialExtension', {
            getArgumentValue() {
                return 8;
            }, clone() {
                return this;
            }
        }));
        equal(serial.serializeToBytes(extended), null);
        equal(serial.checkLastOperationWasSuccessful(), false);
        assert.match(serial.getLastOperationMessage(), /unregistered|polymorphic/);
        equal(extended.getArgumentValue(), 8);
        throws(() => serial.serializeToBytes(source, 123), /requires 1/);
        throws(() => serial.deserializeFromBytes([], mx.Expression), /Uint8Array/);
        throws(() => serial.deserializeFromString('α', mx.Expression), /0\.\.255/);
        throws(() => serial.deserializeFromBytes(new Uint8Array(), mx.PrimesCache), /serializable constructor/);
        equal(serial.deserializeFromFile('/tmp/mxparser-no-such-file', mx.Expression), null);
        equal(serial.serializeToFile(source, '/no-such-directory/mxp.bin'), false);
        if (prefixStart > prefixCursor || prefixEnd !== null && prefixEnd > prefixCursor) throw new RangeError('Serialization prefix range exceeds generated data');
        return {
            roots: roots.length,
            prefixes,
            totalPrefixes: prefixCursor,
            range: [prefixStart, prefixEnd ?? prefixCursor],
            formats: ['bytes', 'binary-string', 'virtual-file'],
            jsExtensions: 'native rejection preserved'
        };
    } finally {
        serial.disableBinarySerialization();
    }
}
