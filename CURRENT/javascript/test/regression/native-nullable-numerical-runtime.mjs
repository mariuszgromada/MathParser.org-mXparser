/*
 * @(#)native-nullable-numerical-runtime.mjs        6.2.0    2026-11-04
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

// Generated explicit public tests; expectations are independent canonical/source controls.
export function testNullableNumericalRuntime(mx,equal,keep){
 let checks=0;const check=value=>{equal(value,true);checks++;};
 const reject=(message,action)=>{let caught=false;try{action();}catch(error){caught=error instanceof Error&&error.name==='std::invalid_argument'&&error.message===message;}check(caught);};
 const range=action=>{let caught=false;try{action();}catch(error){caught=error instanceof RangeError&&error.message==='Native Random bound must be nonzero and have a representable signed 64-bit absolute value';}check(caught);};
 const c=mx.Calculus,m=mx.MathFunctions,s=mx.Statistics,p=mx.ProbabilityDistributions;
 const x=keep(new mx.Argument('x',3)),f=keep(new mx.Expression('x^2',x));
 const random=keep(new mx.Random(123)),twin=keep(new mx.Random(123));
 const customState={last:42n,nextInt(bound){this.last=bound;return 0n;},nextDouble(){return .5;},setSeed(){}};
 const custom=keep(mx.IRandom.implement(customState));
 class Counter extends mx.ArgumentExtension{constructor(){super();this.calls=0;}getArgumentValue(){this.calls++;return NaN;}clone(){return new Counter();}}
 const counter=new Counter(),counterArgument=keep(new mx.Argument('counter',counter)),original=keep(p.randomGenerator);
 mx.mXparser.resetCancelCurrentCalculationFlag();
 try{
  // integral/null-expression
  {reject("MathFunctions.getFunctionValue requires a non-null expression",()=>(c.integralTrapezoid(null,x,0,1,1e-5,4)));}
  // derivative/null-index
  {reject("MathFunctions.getFunctionValue requires a non-null argument",()=>(c.derivative(f,null,2,3,1e-5,4)));}
  // nth/null-expression
  {reject("MathFunctions.getFunctionValue requires a non-null expression",()=>(c.derivativeNth(null,2,x,2,2,1e-5,4)));}
  // solver/null-expression
  {reject("MathFunctions.getFunctionValue requires a non-null expression",()=>(c.solveBrent(null,x,0,1,1e-5,4)));}
  // forwardDifference/explicit-point/null-index
  {reject("Calculus difference requires a non-null argument",()=>(c.forwardDifference(null,null,2)));}
  // forwardDifference/implicit-point/null-index
  {reject("Calculus difference requires a non-null argument",()=>(c.forwardDifference(null,null)));}
  // forwardDifference/h-explicit-point/null-index
  {reject("Calculus difference requires a non-null argument",()=>(c.forwardDifference(null,.25,null,2)));}
  // forwardDifference/h-implicit-point/null-index
  {reject("Calculus difference requires a non-null argument",()=>(c.forwardDifference(null,.25,null)));}
  // forwardDifference/implicit/null-expression
  {reject("Calculus difference requires a non-null expression",()=>(c.forwardDifference(null,x)));}
  // forwardDifference/h-implicit/null-expression
  {reject("Calculus difference requires a non-null expression",()=>(c.forwardDifference(null,.25,x)));}
  // forwardDifference/defined-NaN-point
  {check(Number.isNaN(c.forwardDifference(null,null,NaN)));}
  // forwardDifference/defined-h-NaN-point
  {check(Number.isNaN(c.forwardDifference(null,.25,null,NaN)));}
  // backwardDifference/explicit-point/null-index
  {reject("Calculus difference requires a non-null argument",()=>(c.backwardDifference(null,null,2)));}
  // backwardDifference/implicit-point/null-index
  {reject("Calculus difference requires a non-null argument",()=>(c.backwardDifference(null,null)));}
  // backwardDifference/h-explicit-point/null-index
  {reject("Calculus difference requires a non-null argument",()=>(c.backwardDifference(null,.25,null,2)));}
  // backwardDifference/h-implicit-point/null-index
  {reject("Calculus difference requires a non-null argument",()=>(c.backwardDifference(null,.25,null)));}
  // backwardDifference/implicit/null-expression
  {reject("Calculus difference requires a non-null expression",()=>(c.backwardDifference(null,x)));}
  // backwardDifference/h-implicit/null-expression
  {reject("Calculus difference requires a non-null expression",()=>(c.backwardDifference(null,.25,x)));}
  // backwardDifference/defined-NaN-point
  {check(Number.isNaN(c.backwardDifference(null,null,NaN)));}
  // backwardDifference/defined-h-NaN-point
  {check(Number.isNaN(c.backwardDifference(null,.25,null,NaN)));}
  // ordinary-expression/recovers-after-errors
  {x.setArgumentValue(3);check(f.calculate()===9);}
  // values/null-expression
  {reject("MathFunctions.getFunctionValue requires a non-null expression",()=>(m.getFunctionValues(null,x,0,1,1)));}
  // mx-values/null-expression
  {reject("MathFunctions.getFunctionValue requires a non-null expression",()=>(mx.mXparser.getFunctionValues(null,x,0,1,1)));}
  // values/null-index
  {reject("MathFunctions.getFunctionValue requires a non-null argument",()=>(m.getFunctionValues(f,null,0,1,1)));}
  // values/reversed-null-index
  {reject("MathFunctions.getFunctionValue requires a non-null argument",()=>(m.getFunctionValues(f,null,1,0,-1)));}
  // values/defined-null/direction
  {check((m.getFunctionValues(null,null,1,0,1))===(null));}
  // values/defined-null/NaN-range
  {check((m.getFunctionValues(null,null,NaN,1,1))===(null));}
  // values/defined-null/zero-step
  {check((m.getFunctionValues(null,null,0,1,0))===(null));}
  // statistics/avg/null-expression
  {reject("MathFunctions.getFunctionValue requires a non-null expression",()=>(s.avg(null,x,0,1,1)));}
  // statistics/avg/single-point-null-index
  {reject("MathFunctions.getFunctionValue requires a non-null argument",()=>(s.avg(null,null,1,1,1)));}
  // statistics/avg/wrong-direction
  {check(Number.isNaN(s.avg(null,null,1,0,1)));}
  // statistics/avg/defined-zero-step
  {check(Number.isNaN(s.avg(null,null,0,1,0)));}
  // statistics/var/null-expression
  {reject("MathFunctions.getFunctionValue requires a non-null expression",()=>(s.var(null,x,0,1,1)));}
  // statistics/var/single-point-null-index
  {reject("MathFunctions.getFunctionValue requires a non-null argument",()=>(s.var(null,null,1,1,1)));}
  // statistics/var/wrong-direction
  {check(Number.isNaN(s.var(null,null,1,0,1)));}
  // statistics/var/defined-zero-step
  {check(Number.isNaN(s.var(null,null,0,1,0)));}
  // statistics/std/null-expression
  {reject("MathFunctions.getFunctionValue requires a non-null expression",()=>(s.std(null,x,0,1,1)));}
  // statistics/std/single-point-null-index
  {reject("MathFunctions.getFunctionValue requires a non-null argument",()=>(s.std(null,null,1,1,1)));}
  // statistics/std/wrong-direction
  {check(Number.isNaN(s.std(null,null,1,0,1)));}
  // statistics/std/defined-zero-step
  {check(Number.isNaN(s.std(null,null,0,1,0)));}
  // random/null-generator/uniform-positive
  {reject("ProbabilityDistributions.rndUniformContinuous requires a non-null random generator",()=>(p.rndUniformContinuous(0,1,null)));}
  // random/null-generator/uniform-unit
  {reject("ProbabilityDistributions.rndUniformContinuous requires a non-null random generator",()=>(p.rndUniformContinuous(null)));}
  // random/null-generator/integer-positive
  {reject("ProbabilityDistributions.rndInteger requires a non-null random generator",()=>(p.rndInteger(0,1,null)));}
  // random/null-generator/integer-unit
  {reject("ProbabilityDistributions.rndInteger requires a non-null random generator",()=>(p.rndInteger(null)));}
  // random/null-generator/index-positive
  {reject("ProbabilityDistributions.rndIndex requires a non-null random generator",()=>(p.rndIndex(1,null)));}
  // uniform/defined-equal-limits
  {check((p.rndUniformContinuous(2,2,null))===(2));}
  // uniform/defined-reversed-limits
  {check(Number.isNaN(p.rndUniformContinuous(1,0,null)));}
  // uniform/defined-NaN
  {check(Number.isNaN(p.rndUniformContinuous(NaN,1,null)));}
  // integer/defined-equal-limits
  {check((p.rndInteger(2,2,null))===(2));}
  // integer/defined-reversed-limits
  {check(Number.isNaN(p.rndInteger(1,0,null)));}
  // integer/defined-NaN
  {check(Number.isNaN(p.rndInteger(NaN,1,null)));}
  // index/defined-negative-bound
  {check((p.rndIndex(-1,null))===(-1));}
  // normal/defined-null-generator
  {check(Number.isNaN(p.rndNormal(2,0,null)));}
  // concrete/index-zero-rejected
  {reject("Random.nextInt requires a nonzero bound with a representable signed64 absolute value",()=>(p.rndIndex(0,random)));}
  // concrete/direct-zero-rejected
  {range(()=>random.nextInt(0n));}
  // concrete/direct-minimum-rejected
  {range(()=>random.nextInt(-(1n<<63n)));}
  // concrete/rejection-consumes-no-rng-state
  {check(p.rndIndex(5,random)===p.rndIndex(5,twin));}
  // custom/full-signed64-forwarding
  {check((custom.nextInt(-(1n<<63n)))===(0n));}
  // custom/full-signed64-observed
  {check((customState.last)===(-(1n<<63n)));}
  // custom/zero-index-forwarding
  {check((p.rndIndex(0,custom))===(0));}
  // custom/zero-index-observed
  {check((customState.last)===(0n));}
  // global/null-generator-setup
  {p.randomGenerator=null;}
  // global/null-generator/uniform
  {reject("ProbabilityDistributions.rndUniformContinuous requires a non-null random generator",()=>(p.randomUniformContinuous()));}
  // global/null-generator/integer
  {reject("ProbabilityDistributions.rndInteger requires a non-null random generator",()=>(p.rndInteger()));}
  // global/null-generator/index
  {reject("ProbabilityDistributions.rndIndex requires a non-null random generator",()=>(p.rndIndex(1)));}
  // global/null-generator/student
  {reject("ProbabilityDistributions.rndStudentT requires a non-null random generator",()=>(p.rndStudentT(2)));}
  // global/null-generator/chi
  {reject("ProbabilityDistributions.rndChiSquared requires a non-null random generator",()=>(p.rndChiSquared(2)));}
  // global/null-generator/f
  {reject("ProbabilityDistributions.rndSnedecordF requires a non-null random generator",()=>(p.rndSnedecordF(1,2)));}
  // global/defined-null/student
  {check(Number.isNaN(p.rndStudentT(0)));}
  // global/defined-null/chi
  {check(Number.isNaN(p.rndChiSquared(0)));}
  // global/defined-null/f
  {check(Number.isNaN(p.rndSnedecordF(0,1)));}
  // global/defined-null/normal
  {check(Number.isNaN(p.rndNormal(0,1)));}
  // global/defined-null/equal-uniform
  {check((p.rndUniformContinuous(2,2))===(2));}
  // global/defined-null/negative-index
  {check((p.rndIndex(-1))===(-1));}
  // global/restore
  {p.randomGenerator=original;}
  // nth/defined-negative-order
  {check((c.derivativeNth(null,-1,null,2,2,1e-5,12))===(0));}
  // nth/defined-existing-NaN-order
  {check(Number.isNaN(c.derivativeNth(null,NaN,null,2,2,1e-5,12)));}
  // callback/defined-NaN/0
  {check(Number.isNaN(c.forwardDifference(null,counterArgument)));}
  // callback/exactly-once/0
  {check((counter.calls)===(1));}
  // callback/defined-NaN/1
  {check(Number.isNaN(c.backwardDifference(null,counterArgument)));}
  // callback/exactly-once/1
  {check((counter.calls)===(2));}
  // callback/defined-NaN/2
  {check(Number.isNaN(c.forwardDifference(null,.25,counterArgument)));}
  // callback/exactly-once/2
  {check((counter.calls)===(3));}
  // callback/defined-NaN/3
  {check(Number.isNaN(c.backwardDifference(null,.25,counterArgument)));}
  // callback/exactly-once/3
  {check((counter.calls)===(4));}
 }finally{p.randomGenerator=original;}
 return {publicAssertions:checks,definedCallbackReads:counter.calls,scope:'Native nullable numerical preconditions; defined early returns and custom IRandom forwarding retained'};
}
