/*
 * @(#)cancellation-behavior.mjs        6.2.0    2026-11-13
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

// Shared public API scenarios for Node and browsers; all calculations stay native.
export function runCancellationBehavior(mx) {
    let checks = 0;
    const scenarios = [], owned = [], domains = [];
    const keep = value => { if (value) owned.push(value); return value; };
    const eq = (actual, expected) => {
        checks++;
        if (!Object.is(actual, expected)) throw new Error(`Cancellation: expected ${expected}, received ${actual}`);
    };
    const nan = value => eq(Number.isNaN(value), true);
    const throws = (fn, type = Error) => {
        checks++;
        try { fn(); } catch (error) {
            if (error instanceof type) return error;
            throw error;
        }
        throw new Error('Cancellation: expected an exception');
    };
    const scenario = (nativeId, description, run) => {
        mx.mXparser.resetCancelCurrentCalculationFlag();
        for (const id of domains) mx.mXparser.resetCalculationCancellation(id);
        run();
        scenarios.push({nativeId, description, status: 'PASS'});
    };
    const m = mx.mXparser;
    try {
        const id = m.acquireCancellationTokenId(), other = m.acquireCancellationTokenId();
        domains.push(id, other);
        const steps = keep(new mx.CalcStepsRegister());
        scenario('testApi0427', 'allocation, boundary IDs and sticky independent domains', () => {
            eq(m.MAX_CANCELLATION_TOKEN_ID, 32767);
            eq(id > 0 && id !== other, true);
            eq(m.isCalculationCancelled(id), false);
            m.cancelCalculation(id);
            eq(m.isCalculationCancelled(id), true);
            eq(m.isCalculationCancelled(other), false);
            eq(m.isCurrentCalculationCancelled(), false);
            eq(m.reserveCancellationTokenId(id), false);
            eq(m.isCalculationCancelled(id), true);
            m.resetCalculationCancellation(id);
            eq(m.isCalculationCancelled(id), false);
        });
        scenario('testApi0424', 'invalid IDs rejected before callbacks or native integer conversion', () => {
            let calls = 0;
            const a = keep(new mx.Argument('guarded', {getArgumentValue() { calls++; return 1; }, clone() { return this; }}));
            for (const bad of [NaN, Infinity, -Infinity, 2.5, '2', 2n, null, undefined, {}, -1, 32768, 2 ** 32]) {
                throws(() => a.getArgumentValueWithCancel(bad));
                throws(() => m.cancelCalculation(bad));
                throws(() => m.isCalculationCancelled(bad));
            }
            eq(calls, 0);
            for (const operation of ['reserveCancellationTokenId', 'releaseCancellationTokenId']) throws(() => m[operation](0), RangeError);
            m.cancelCurrentCalculation();
            throws(() => m.isCalculationCancelled(-1), RangeError);
        });
        scenario('testApi0425', 'ID0 and old global entry points share one signal', () => {
            const e = keep(new mx.Expression('2+3'));
            m.cancelCalculation(0);
            eq(m.isCurrentCalculationCancelled(), true);
            eq(m.isCalculationCancelled(other), true);
            nan(e.calculate()); nan(e.calculateWithCancel(0)); nan(e.calculateWithCancel(other));
            m.resetCalculationCancellation(0);
            eq(e.calculate(), 5); eq(e.calculateWithCancel(0), 5);
            m.cancelCurrentCalculation(); eq(m.isCalculationCancelled(0), true);
            m.resetCancelCurrentCalculationFlag(); eq(m.isCalculationCancelled(0), false);
        });
        scenario('testApi0425', 'global reset leaves domain signal and reservation intact', () => {
            m.cancelCalculation(id); m.cancelCurrentCalculation(); m.setDefaultOptions();
            eq(m.isCurrentCalculationCancelled(), false); eq(m.isCalculationCancelled(id), true);
            eq(m.reserveCancellationTokenId(id), false);
        });
        scenario('testApi0429', 'failed release keeps signal; successful reserve resets old signal', () => {
            const manual = 32767;
            m.cancelCalculation(manual);
            throws(() => m.releaseCancellationTokenId(manual));
            eq(m.isCalculationCancelled(manual), true);
            eq(m.reserveCancellationTokenId(manual), true);
            try { eq(m.isCalculationCancelled(manual), false); }
            finally { m.releaseCancellationTokenId(manual); }
            eq(m.isCalculationCancelled(manual), false);
        });
        const e = keep(new mx.Expression('sum(i,1,100,i)'));
        scenario('testApi0436', 'first compilation and replay observe cancellation and recover', () => {
            eq(e.calculateWithCancel(id), 5050);
            m.cancelCalculation(id); nan(e.calculateWithCancel(id)); nan(e.calculateWithCancel(id));
            eq(m.isCalculationCancelled(id), true);
            m.resetCalculationCancellation(id); eq(e.calculateWithCancel(id), 5050);
            m.cancelCalculation(id); nan(keep(new mx.Expression('2+3')).calculateWithCancel(id));
        });
        scenario('testApi0430', 'reentrant controller cancels its native calculation at the next check', () => {
            let calls = 0;
            const signal = keep(new mx.Argument('signal', {getArgumentValue() { calls++; m.cancelCalculation(id); return 1; }, clone() { return this; }}));
            const expr = keep(new mx.Expression('sum(i,1,100,signal+i)', signal));
            nan(expr.calculateWithCancel(id)); eq(calls > 0, true);
            eq(m.isCalculationCancelled(id), true); eq(m.isCalculationCancelled(other), false);
            eq(e.calculateWithCancel(other), 5050);
        });
        scenario('testApi0438', 'nested different domain restores outer operation context', () => {
            let calls = 0;
            const nested = keep(new mx.Expression('2+3'));
            const callback = keep(new mx.Argument('nested', {getArgumentValue() {
                calls++;
                eq(nested.calculateWithCancel(other), 5);
                m.cancelCalculation(id);
                return 2;
            }, clone() { return this; }}));
            nan(keep(new mx.Expression('sum(i,1,10,nested+i)', callback)).calculateWithCancel(id));
            eq(calls > 0, true); eq(nested.calculateWithCancel(other), 5);
            eq(e.calculate(), 5050);
        });
        scenario('testApi0433', 'one sticky domain deliberately controls two expression graphs', () => {
            const first = keep(new mx.Expression('2+3')), second = keep(new mx.Expression('3+4'));
            m.cancelCalculation(id);
            nan(first.calculateWithCancel(id)); nan(second.calculateWithCancel(id));
            eq(m.isCalculationCancelled(other), false);
            m.resetCalculationCancellation(id);
            eq(first.calculateWithCancel(id), 5); eq(second.calculateWithCancel(id), 7);
        });
        scenario('testApi0435', 'literal, free Argument and recursive base cache can return despite a signal', () => {
            const literal = keep(new mx.Expression('7')), free = keep(new mx.Argument('free', 7));
            const recursive = keep(new mx.RecursiveArgument('r(n)=n'));
            recursive.addBaseCase(2, 7);
            eq(literal.calculateWithCancel(id), 7); eq(literal.calculateWithCancel(id), 7);
            m.cancelCalculation(id);
            eq(literal.calculateWithCancel(id), 7); eq(free.getArgumentValueWithCancel(id), 7);
            eq(recursive.getArgumentValueWithCancel(2, id), 7);
            eq(m.isCalculationCancelled(id), true);
        });
        scenario('testApi0437', 'callback exception and a cancelled call leave later domains usable', () => {
            let fail = true;
            const value = keep(new mx.Argument('value', {getArgumentValue() {
                if (fail) { fail = false; throw new Error('planned cancellation callback failure'); }
                return 2;
            }, clone() { return this; }}));
            const expr = keep(new mx.Expression('value+1', value));
            nan(expr.calculateWithCancel(id));
            eq(expr.getErrorMessage().includes('planned cancellation callback failure'), true);
            m.cancelCalculation(id);
            eq(expr.calculateWithCancel(other), 3); eq(expr.calculate(), 3);
            nan(expr.calculateWithCancel(id));
            m.resetCalculationCancellation(id); eq(expr.calculateWithCancel(id), 3);
        });
        scenario('testApi0440', 'dependent Argument and Function propagate explicit domain', () => {
            const n = keep(new mx.Argument('n', 10));
            const a = keep(new mx.Argument('a=sum(i,1,n,i)', n));
            const f = keep(new mx.Function('f(x)=x+sum(i,1,10,i)'));
            eq(a.getArgumentValueWithCancel(id), 55);
            eq(a.getArgumentValueWithCancel(steps, id), 55);
            eq(f.calculateWithCancel([1], id), 56);
            m.cancelCalculation(id);
            nan(a.getArgumentValueWithCancel(null, id)); nan(f.calculateWithCancel([1], id));
        });
        scenario('testApi0441', 'fixed parameter arrays, tracing and legacy mathematical arguments', () => {
            const f = keep(new mx.Function('f(x)=x*x')), a = keep(new mx.Argument('x', 3));
            eq(f.calculate(3), 9); eq(f.calculateWithCancel([3], id), 9);
            eq(f.calculateWithCancel([a], id), 9);
            eq(f.calculateWithCancel(id), 9); eq(f.calculateWithCancel(steps, id), 9);
            eq(f.calculateWithCancel(null, id), 9);
            throws(() => f.calculateWithCancel(3, id), TypeError);
            throws(() => f.calculateWithCancel([1, a], id), TypeError);
            nan(f.calculateWithCancel([], id));
        });
        scenario('testApi0442', 'recursive and cached values retain native cooperative limits', () => {
            const r = keep(new mx.RecursiveArgument('r(n)=if(n>0,n+r(n-1),0)'));
            r.addBaseCase(0, 0);
            eq(r.getArgumentValueWithCancel(10, id), 55);
            m.cancelCalculation(id);
            eq(r.getArgumentValueWithCancel(10, id), 55);
            nan(r.getArgumentValueWithCancel(11, id));
        });
        scenario('testApi0443', 'lazy branches preserve native evaluation', () => {
            let forbidden = 0;
            const bad = keep(new mx.Argument('bad', {getArgumentValue() { forbidden++; return 9; }, clone() { return this; }}));
            eq(keep(new mx.Expression('if(1,sum(i,1,10,i),bad)', bad)).calculateWithCancel(id), 55);
            eq(forbidden, 0);
        });
        scenario('testApi0444', 'iterative expression operators propagate domain', () => {
            for (const text of ['sum(i,1,10,i)', 'prod(i,1,5,i)', 'avg(i,1,5,i)', 'var(i,1,5,i)', 'std(i,1,5,i)']) {
                const x = keep(new mx.Expression(text));
                eq(x.calculateWithCancel(id), x.calculate());
                m.cancelCalculation(id); nan(x.calculateWithCancel(id)); m.resetCalculationCancellation(id);
            }
        });
        scenario('testApi0445', 'calculus cancellation retains solver bound behavior', () => {
            const x = keep(new mx.Argument('x', 0)), f = keep(new mx.Expression('x^2-0.25', x));
            eq(Math.abs(mx.Calculus.integralTrapezoidWithCancel(f, x, 0, 1, 1e-6, 15, id) - 1 / 12) < 1e-5, true);
            m.cancelCalculation(id);
            nan(mx.Calculus.derivativeWithCancel(f, x, .5, mx.Calculus.GENERAL_DERIVATIVE, 1e-8, 20, id));
            eq(mx.Calculus.solveBrentWithCancel(f, x, 0, 1, 1e-8, 20, id), 1);
        });
        scenario('testApi0447', 'sampling keeps its native shape and NaN elements', () => {
            const x = keep(new mx.Argument('x', 0)), f = keep(new mx.Expression('x+1', x));
            eq(JSON.stringify(mx.MathFunctions.getFunctionValuesWithCancel(f, x, 0, 2, 1, id)), '[1,2,3]');
            m.cancelCalculation(id);
            const samples = mx.MathFunctions.getFunctionValuesWithCancel(f, x, 0, 2, 1, id);
            eq(samples.length, 3); samples.forEach(nan);
        });
        scenario('testApi0448', 'NumberTheory mutation, typed arrays and native result types', () => {
            const values = new Float64Array([3, 1, 2]);
            eq(JSON.stringify(mx.NumberTheory.sortAscWithCancel(values, id)), '[1,2,0]');
            eq(JSON.stringify([...values]), '[1,2,3]');
            eq(mx.NumberTheory.sumWithCancel([1, 2, 3], id), 6);
            eq(mx.NumberTheory.convOthBase2DecimalWithCancel('101', 2, id), 5);
            eq(JSON.stringify(mx.NumberTheory.primeFactorsWithCancel(12, id)), '[2,2,3]');
            eq(mx.NumberTheory.primeFactorsWithCancel(12n, id)[0], 2n);
            m.cancelCalculation(id); nan(mx.NumberTheory.sumWithCancel([1, 2, 3], id));
            eq(mx.NumberTheory.primeFactorsWithCancel(12n, id).length, 0);
        });
        scenario('testApi0449', 'integral sentinels, native exception mapping and recovery', () => {
            eq(mx.NumberTheory.gcdWithCancel(12n, 18n, id), 6n);
            eq(mx.NumberTheory.lcmWithCancel(12n, 18n, id), 36n);
            m.cancelCalculation(id);
            eq(mx.NumberTheory.gcdWithCancel(12n, 18n, id), 0n);
            eq(mx.NumberTheory.primeCountWithCancel(10n, id), 0n);
            eq(mx.NumberTheory.numberOfDigitsWithCancel(123n, 2n, id), 0n);
            eq(mx.NumberTheory.digitAtPositionWithCancel(123n, 2, 10, id), 0);
            const error = throws(() => mx.NumberTheory.lcmWithCancel(12n, 18n, id));
            eq(error.name.includes('invalid_argument'), true);
            nan(mx.MathFunctions.factorialWithCancel(10, id));
            m.resetCalculationCancellation(id); eq(mx.MathFunctions.factorialWithCancel(10, id), 3628800);
        });
        scenario('testApi0439', 'cloning and native serialization do not persist active IDs', () => {
            const clone = keep(e.cloneForThreadSafe());
            m.cancelCalculation(id); eq(clone.calculate(), 5050); nan(clone.calculateWithCancel(id));
            mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            try {
                const restored = keep(mx.SerializationUtils.deserializeFromBytes(mx.SerializationUtils.serializeToBytes(e), mx.Expression));
                eq(restored.calculate(), 5050); nan(restored.calculateWithCancel(id));
            } finally { mx.SerializationUtils.disableBinarySerialization(); }
        });
        scenario('testApi0450', 'random generator identity and deterministic draw order stay native', () => {
            const random = keep(mx.ProbabilityDistributions.randomGenerator);
            const alias = keep(mx.ProbabilityDistributions.randomGenerator);
            eq(random.isAliasOf(alias), true);
            random.setSeed(123);
            const expected = mx.ProbabilityDistributions.rndNormal(0, 1, random);
            random.setSeed(123);
            eq(mx.ProbabilityDistributions.rndNormalWithCancel(0, 1, random, id), expected);
            eq(random.isAliasOf(alias), true);
        });
        scenario('testApi0451', 'syntax errors and corrected definitions recover normally', () => {
            m.disableAttemptToFixExpStrMode();
            const bad = keep(new mx.Expression('1+'));
            nan(bad.calculateWithCancel(id)); bad.setExpressionString('2+3'); eq(bad.calculateWithCancel(id), 5);
            const a = keep(new mx.Argument('a=1+')), x = keep(new mx.Expression('a', a));
            nan(x.calculateWithCancel(id)); a.setArgumentExpressionString('2+2'); eq(x.calculateWithCancel(id), 4);
            m.enableAttemptToFixExpStrMode();
        });
        scenario('testApi0453', 'all three RecursiveArgument shapes and strict integer ID guard', () => {
            const n = keep(new mx.Argument('n', 2)), r = keep(new mx.RecursiveArgument('r', 'n+100', n));
            r.addBaseCase(2, 999);
            eq(r.getArgumentValueWithCancel(id), 102);
            eq(r.getArgumentValueWithCancel(2, id), 999);
            n.setArgumentValue(8);
            eq(r.getArgumentValueWithCancel(id), 108);
            eq(r.getArgumentValueWithCancel(null, id), 108);
            eq(r.getArgumentValueWithCancel(steps, id), 108);
            eq(r.getArgumentValueWithCancel(0, id), 100);
            throws(() => r.getArgumentValueWithCancel(2.5), TypeError);
            throws(() => r.getArgumentValueWithCancel(0, 2.5), TypeError);
            throws(() => r.getArgumentValueWithCancel(Infinity, id), TypeError);
            for (const name of ['getArgumentValueCoreWithCancel', 'checkSyntaxWithCancel', 'activeCancelId']) eq(r[name], undefined);
            eq(e.calculateCoreWithCancel, undefined); eq(mx.CancellationRegistry, undefined);
            throws(() => mx.MathFunctions.eulerNumberWithCancel(3, 2, 0, id), TypeError);
        });
        scenario('testApi0454', 'sequential release/acquire clears prior signal', () => {
            for (let round = 0; round < 8; round++) {
                const token = m.acquireCancellationTokenId();
                try {
                    eq(m.isCalculationCancelled(token), false);
                    m.cancelCalculation(token); nan(e.calculateWithCancel(token));
                    m.resetCalculationCancellation(token); eq(e.calculateWithCancel(token), 5050);
                } finally { m.releaseCancellationTokenId(token); }
            }
        });
        return {checks, scenarios};
    } finally {
        m.resetCancelCurrentCalculationFlag();
        for (const id of domains.reverse()) m.releaseCancellationTokenId(id);
        for (const value of owned.reverse()) if (!value.isDeleted()) value.delete();
    }
}
