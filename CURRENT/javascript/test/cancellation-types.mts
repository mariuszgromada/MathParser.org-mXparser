/*
 * @(#)cancellation-types.mts        6.2.0    2026-11-13
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

import {initMxParser, type MxParser} from '@mathparser.org/mxparser';

// Compile all canonical fixed-array shapes without executing numerical workloads.
function check(mx: MxParser) {
    const id: number = mx.mXparser.acquireCancellationTokenId();
    const x = new mx.Argument('x', 1), e = new mx.Expression('x+1', x);
    const a = new mx.Argument('a=2+3'), f = new mx.Function('f(x)=x*x');
    const r = new mx.RecursiveArgument('r(n)=n+100'), steps = new mx.CalcStepsRegister();
    const random = new mx.Random();
    a.getArgumentValueWithCancel(steps, id);
    a.getArgumentValueWithCancel(id);
    e.calculateWithCancel(steps, id);
    e.calculateWithCancel(id);
    f.calculateWithCancel(steps, id);
    f.calculateWithCancel([1,2,3], id);
    f.calculateWithCancel([x], id);
    f.calculateWithCancel(id);
    r.getArgumentValueWithCancel(3, id);
    mx.mathcollection.BooleanAlgebra.andVariadicWithCancel([1,2,3], id);
    mx.mathcollection.BooleanAlgebra.orVariadicWithCancel([1,2,3], id);
    mx.mathcollection.BooleanAlgebra.xorVariadicWithCancel([1,2,3], id);
    mx.mathcollection.Calculus.integralTrapezoidWithCancel(e, x, 3, 3, 3, mx.int32(3), id);
    mx.mathcollection.Calculus.derivativeWithCancel(e, x, 3, mx.int32(3), 3, mx.int32(3), id);
    mx.mathcollection.Calculus.derivativeNthWithCancel(e, 3, x, 3, mx.int32(3), 3, mx.int32(3), id);
    mx.mathcollection.Calculus.forwardDifferenceWithCancel(e, 3, x, id);
    mx.mathcollection.Calculus.backwardDifferenceWithCancel(e, 3, x, id);
    mx.mathcollection.Calculus.solveBrentWithCancel(e, x, 3, 3, 3, 3, id);
    mx.mathcollection.MathFunctions.bellNumberWithCancel(mx.int32(3), id);
    mx.mathcollection.MathFunctions.bellNumberWithCancel(3, id);
    mx.mathcollection.MathFunctions.eulerNumberWithCancel(mx.int32(3), mx.int32(3), id);
    mx.mathcollection.MathFunctions.eulerNumberWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.factorialWithCancel(mx.int32(3), id);
    mx.mathcollection.MathFunctions.factorialWithCancel(3, id);
    mx.mathcollection.MathFunctions.factorialFallingWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.factorialRisingWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.binomCoeffWithCancel(3, 3n, id);
    mx.mathcollection.MathFunctions.binomCoeffWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.numberOfPermutationsWithCancel(3, 3n, id);
    mx.mathcollection.MathFunctions.numberOfPermutationsWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.bernoulliNumberWithCancel(mx.int32(3), mx.int32(3), id);
    mx.mathcollection.MathFunctions.bernoulliNumberWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.Stirling1NumberWithCancel(mx.int32(3), mx.int32(3), id);
    mx.mathcollection.MathFunctions.Stirling1NumberWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.Stirling2NumberWithCancel(mx.int32(3), mx.int32(3), id);
    mx.mathcollection.MathFunctions.Stirling2NumberWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.worpitzkyNumberWithCancel(mx.int32(3), mx.int32(3), id);
    mx.mathcollection.MathFunctions.worpitzkyNumberWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.ordinaryHarmonicNumberWithCancel(mx.int32(3), id);
    mx.mathcollection.MathFunctions.ordinaryHarmonicNumberWithCancel(3, id);
    mx.mathcollection.MathFunctions.generalizedHarmonicNumberWithCancel(3, mx.int32(3), id);
    mx.mathcollection.MathFunctions.generalizedHarmonicNumberWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.fibonacciNumberWithCancel(mx.int32(3), id);
    mx.mathcollection.MathFunctions.fibonacciNumberWithCancel(3, id);
    mx.mathcollection.MathFunctions.lucasNumberWithCancel(mx.int32(3), id);
    mx.mathcollection.MathFunctions.lucasNumberWithCancel(3, id);
    mx.mathcollection.MathFunctions.continuedFractionWithCancel([1,2,3], id);
    mx.mathcollection.MathFunctions.continuedPolynomialWithCancel([1,2,3], id);
    mx.mathcollection.MathFunctions.eulerPolynomialWithCancel(mx.int32(3), 3, id);
    mx.mathcollection.MathFunctions.eulerPolynomialWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.tetrationWithCancel(3, 3, id);
    mx.mathcollection.MathFunctions.roundWithCancel(3, mx.int32(3), id);
    mx.mathcollection.MathFunctions.roundHalfUpWithCancel(3, mx.int32(3), id);
    mx.mathcollection.MathFunctions.roundDownWithCancel(3, mx.int32(3), id);
    mx.mathcollection.MathFunctions.lengthRoundWithCancel(3, id);
    mx.mathcollection.MathFunctions.coalesceWithCancel([1,2,3], id);
    mx.mathcollection.MathFunctions.getFunctionValueWithCancel(e, x, 3, id);
    mx.mathcollection.MathFunctions.getFunctionValuesWithCancel(e, x, 3, 3, 3, id);
    mx.mathcollection.NumberTheory.minWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.argminWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.maxWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.argmaxWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.sortAscWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.getDistValuesWithCancel([1,2,3], true, id);
    mx.mathcollection.NumberTheory.numberOfDistValuesWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.gcdWithCancel(3n, 3n, id);
    mx.mathcollection.NumberTheory.gcdWithCancel(3, 3, id);
    mx.mathcollection.NumberTheory.gcdWithCancel([1n,2n,3n], id);
    mx.mathcollection.NumberTheory.gcdWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.lcmWithCancel(3n, 3n, id);
    mx.mathcollection.NumberTheory.lcmWithCancel(3, 3, id);
    mx.mathcollection.NumberTheory.lcmWithCancel([1n,2n,3n], id);
    mx.mathcollection.NumberTheory.lcmWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.sumWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.prodWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.primeTestWithCancel(3n, id);
    mx.mathcollection.NumberTheory.primeTestWithCancel(3, id);
    mx.mathcollection.NumberTheory.primeCountWithCancel(3n, id);
    mx.mathcollection.NumberTheory.primeCountWithCancel(3, id);
    mx.mathcollection.NumberTheory.sigmaSummationWithCancel(e, x, 3, 3, 3, id);
    mx.mathcollection.NumberTheory.piProductWithCancel(e, x, 3, 3, 3, id);
    mx.mathcollection.NumberTheory.minWithCancel(e, x, 3, 3, 3, id);
    mx.mathcollection.NumberTheory.maxWithCancel(e, x, 3, 3, 3, id);
    mx.mathcollection.NumberTheory.convOthBase2DecimalWithCancel('101', mx.int32(3), id);
    mx.mathcollection.NumberTheory.convOthBase2DecimalWithCancel(mx.int32(3), [1,2,3], id);
    mx.mathcollection.NumberTheory.convOthBase2DecimalWithCancel(3, [1,2,3], id);
    mx.mathcollection.NumberTheory.convOthBase2DecimalWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.convOthBase2DecimalWithCancel([1,2,3], id);
    mx.mathcollection.NumberTheory.formatNumberInBaseWithCancel(3, mx.int32(3), id);
    mx.mathcollection.NumberTheory.numberOfDigitsWithCancel(3n, 3n, id);
    mx.mathcollection.NumberTheory.numberOfDigitsWithCancel(3, 3, id);
    mx.mathcollection.NumberTheory.digitAtPositionWithCancel(3n, mx.int32(3), mx.int32(3), id);
    mx.mathcollection.NumberTheory.digitAtPositionWithCancel(3, 3, 3, id);
    mx.mathcollection.NumberTheory.decimalDigitAtPositionWithCancel(3, 3, id);
    mx.mathcollection.NumberTheory.primeFactorsWithCancel(3n, id);
    mx.mathcollection.NumberTheory.primeFactorsWithCancel(3, id);
    mx.mathcollection.NumberTheory.numberOfPrimeFactorsWithCancel(3, id);
    mx.mathcollection.NumberTheory.primeFactorValueWithCancel(3, 3, id);
    mx.mathcollection.NumberTheory.primeFactorExponentWithCancel(3, 3, id);
    mx.mathcollection.NumberTheory.toFractionWithCancel(3, id);
    mx.mathcollection.ProbabilityDistributions.rndNormalWithCancel(3, 3, random, id);
    mx.mathcollection.ProbabilityDistributions.pdfStudentTWithCancel(3, 3, id);
    mx.mathcollection.ProbabilityDistributions.cdfStudentTWithCancel(3, 3, id);
    mx.mathcollection.ProbabilityDistributions.qntStudentTWithCancel(3, 3, id);
    mx.mathcollection.ProbabilityDistributions.rndStudentTWithCancel(3, id);
    mx.mathcollection.ProbabilityDistributions.pdfChiSquaredWithCancel(3, 3, id);
    mx.mathcollection.ProbabilityDistributions.cdfChiSquaredWithCancel(3, 3, id);
    mx.mathcollection.ProbabilityDistributions.qntChiSquaredWithCancel(3, 3, id);
    mx.mathcollection.ProbabilityDistributions.rndChiSquaredWithCancel(3, id);
    mx.mathcollection.ProbabilityDistributions.pdfSnedecordFWithCancel(3, 3, 3, id);
    mx.mathcollection.ProbabilityDistributions.cdfSnedecordFWithCancel(3, 3, 3, id);
    mx.mathcollection.ProbabilityDistributions.qntSnedecordFWithCancel(3, 3, 3, id);
    mx.mathcollection.ProbabilityDistributions.rndSnedecordFWithCancel(3, 3, id);
    mx.mathcollection.ProbabilityDistributions.getRandomVariableValueWithCancel(mx.int32(3), id);
    mx.mathcollection.SpecialFunctions.exponentialIntegralEiWithCancel(3, id);
    mx.mathcollection.SpecialFunctions.logarithmicIntegralLiWithCancel(3, id);
    mx.mathcollection.SpecialFunctions.offsetLogarithmicIntegralLiWithCancel(3, id);
    mx.mathcollection.SpecialFunctions.gammaWithCancel(3, id);
    mx.mathcollection.SpecialFunctions.lanchosGammaWithCancel(3, id);
    mx.mathcollection.SpecialFunctions.logGammaWithCancel(3, id);
    mx.mathcollection.SpecialFunctions.sgnGammaWithCancel(3, id);
    mx.mathcollection.SpecialFunctions.regularizedGammaLowerPWithCancel(3, 3, id);
    mx.mathcollection.SpecialFunctions.inverseRegularizedGammaLowerPWithCancel(3, 3, id);
    mx.mathcollection.SpecialFunctions.incompleteGammaLowerWithCancel(3, 3, id);
    mx.mathcollection.SpecialFunctions.regularizedGammaUpperQWithCancel(3, 3, id);
    mx.mathcollection.SpecialFunctions.incompleteGammaUpperWithCancel(3, 3, id);
    mx.mathcollection.SpecialFunctions.diGammaWithCancel(3, id);
    mx.mathcollection.SpecialFunctions.logBetaWithCancel(3, 3, id);
    mx.mathcollection.SpecialFunctions.betaWithCancel(3, 3, id);
    mx.mathcollection.SpecialFunctions.incompleteBetaWithCancel(3, 3, 3, id);
    mx.mathcollection.SpecialFunctions.regularizedBetaWithCancel(3, 3, 3, id);
    mx.mathcollection.SpecialFunctions.inverseRegularizedBetaWithCancel(3, 3, 3, id);
    mx.mathcollection.SpecialFunctions.lambertWWithCancel(3, 3, id);
    mx.mathcollection.SpecialFunctions.hypergeometricFWithCancel(3, 3, 3, 3, 3, 3, id);
    mx.mathcollection.Statistics.avgWithCancel(e, x, 3, 3, 3, id);
    mx.mathcollection.Statistics.varWithCancel(e, x, 3, 3, 3, id);
    mx.mathcollection.Statistics.stdWithCancel(e, x, 3, 3, 3, id);
    mx.mathcollection.Statistics.avgWithCancel([1,2,3], id);
    mx.mathcollection.Statistics.varWithCancel([1,2,3], id);
    mx.mathcollection.Statistics.stdWithCancel([1,2,3], id);
    mx.mathcollection.Statistics.medianWithCancel([1,2,3], id);
    mx.mathcollection.Statistics.modeWithCancel([1,2,3], id);
    r.getArgumentValueWithCancel(id);
    r.getArgumentValueWithCancel(null, id);
    r.getArgumentValueWithCancel(0, id);
    const maximum: number = mx.mXparser.MAX_CANCELLATION_TOKEN_ID;
    const cancelled: boolean = mx.mXparser.isCalculationCancelled(id);
    const reserved: boolean = mx.mXparser.reserveCancellationTokenId(id);
    mx.mXparser.cancelCalculation(id);
    mx.mXparser.resetCalculationCancellation(id);
    mx.mXparser.releaseCancellationTokenId(id);
    void maximum; void cancelled; void reserved;
    // @ts-expect-error IDs use number, not bigint.
    e.calculateWithCancel(1n);
    // @ts-expect-error ID is required.
    e.calculateWithCancel();
    // @ts-expect-error No new index-only getter accepting a tracing register.
    r.getArgumentValueWithCancel(steps);
    // @ts-expect-error Private Java cores are not public JS.
    e.calculateCoreWithCancel(null, id);
    // @ts-expect-error No public syntax-with-ID helper.
    e.checkSyntaxWithCancel('', false, id);
    // @ts-expect-error Expression operation state stays private.
    e.activeCancelId;
    // @ts-expect-error Registry is not public API.
    mx.CancellationRegistry;
    // @ts-expect-error Private Java recursion counter overload stays private.
    mx.MathFunctions.eulerNumberWithCancel(3, 2, 0, id);
    // @ts-expect-error Canonical WithCancel accepts a fixed parameter array.
    f.calculateWithCancel(3, id);
    // @ts-expect-error Heterogeneous parameter packs are not canonical WithCancel.
    f.calculateWithCancel([1, x], id);
    // @ts-expect-error ID is final, not the first argument.
    mx.NumberTheory.sumWithCancel(id, [1, 2, 3]);
    // @ts-expect-error New functions do not introduce a cancellation overload on calculate.
    e.calculate(steps, id);
    // @ts-expect-error The maximum ID is readonly.
    mx.mXparser.MAX_CANCELLATION_TOKEN_ID = 1;
    // @ts-expect-error int selectors are not supported inside array elements.
    mx.NumberTheory.convOthBase2DecimalWithCancel([mx.int32(2), 1], id);
    for (const value of [random, steps, r, f, a, e, x]) value.delete();
}
void check; void initMxParser;
