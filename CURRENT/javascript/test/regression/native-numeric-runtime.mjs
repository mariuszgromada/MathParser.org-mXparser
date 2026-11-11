/*
 * @(#)native-numeric-runtime.mjs        6.2.0    2026-11-04
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

import {testNullableNumericalRuntime} from './native-nullable-numerical-runtime.mjs';
// Source counterpart: testNativeNumericRuntimeConversions. Actual public API only.
// Golden raw-double bits are from the retained, executed canonical Java oracle.
export function testNativeNumericRuntime(mx,equal,keep) {
 let checks=0;
 const check=value=>{equal(value,true);checks++;};
 const invalid=action=>{let caught=false;try{action();}catch(error){if(!(error instanceof Error))throw error;caught=true;}check(caught);};
 const n=mx.NumberTheory,p=mx.ProbabilityDistributions,s=mx.SpecialFunctions;
 mx.mXparser.resetCancelCurrentCalculationFlag();mx.mXparser.setDefaultOptions();
 const random=keep(new mx.Random(123));
 for(const bad of [Infinity,-Infinity,1e40]) {
  invalid(()=>n.primeTest(bad));invalid(()=>n.primeCount(bad));
  invalid(()=>p.rndInteger(bad,2,random));invalid(()=>p.rndInteger(2,bad,random));
 }
 check(n.primeCount(NaN)===0);check(Number.isNaN(n.primeTest(NaN)));
 check(Number.isNaN(p.rndInteger(NaN,2,random)));
 invalid(()=>s.gamma(1e40));invalid(()=>s.logGamma(1e40));invalid(()=>s.logGamma(-1e40));
 invalid(()=>s.sgnGamma(-1e40));invalid(()=>s.incompleteBeta(1e40,2,.5));invalid(()=>s.incompleteBeta(2,1e40,.5));
 invalid(()=>n.numberOfDigits(1e40,1));invalid(()=>n.convDecimal2OthBase(1e40,1));
 invalid(()=>n.convDecimal2OthBase(Infinity,16));invalid(()=>n.convDecimal2OthBase(-Infinity,16));
 invalid(()=>n.convOthBase2Decimal(1e40,[1]));invalid(()=>n.convOthBase2Decimal(2,[1e40]));
 check(n.primeTest(13.9)===1);check(n.primeCount(10.9)===4);
 check(p.rndInteger(-2147483648.75,-2147483648.75,random)===-2147483648);
 check(p.rndInteger(2147483647.75,2147483647.75,random)===2147483647);
 check(s.gamma(5)===24);check(n.numberOfDigits(12.75,1)===12);
 check(n.convDecimal2OthBase(3,1)==='111');
 check(mx.StringUtils.numberToHexString(NaN)==='0');
 check(mx.StringUtils.numberToHexString(Infinity)==='7fffffffffffffff');
 check(mx.StringUtils.numberToHexString(-Infinity)==='8000000000000000');
 const bits=[
    ["@~x",NaN,0xbff0000000000000n],
    ["x@&1",NaN,0x0n],
    ["x@|1",NaN,0x3ff0000000000000n],
    ["x@^1",NaN,0x3ff0000000000000n],
    ["x@~&1",NaN,0xbff0000000000000n],
    ["x@~|1",NaN,0xc000000000000000n],
    ["x@~^1",NaN,0xc000000000000000n],
    ["@~x",Infinity,0xc3e0000000000000n],
    ["x@&1",Infinity,0x3ff0000000000000n],
    ["x@|1",Infinity,0x43e0000000000000n],
    ["x@^1",Infinity,0x43e0000000000000n],
    ["x@~&1",Infinity,0xc000000000000000n],
    ["x@~|1",Infinity,0xc3e0000000000000n],
    ["x@~^1",Infinity,0xc3e0000000000000n],
    ["@~x",-Infinity,0x43e0000000000000n],
    ["x@&1",-Infinity,0x0n],
    ["x@|1",-Infinity,0xc3e0000000000000n],
    ["x@^1",-Infinity,0xc3e0000000000000n],
    ["x@~&1",-Infinity,0xbff0000000000000n],
    ["x@~|1",-Infinity,0x43e0000000000000n],
    ["x@~^1",-Infinity,0x43e0000000000000n],
    ["@~x",1e40,0xc3e0000000000000n],
    ["x@&1",1e40,0x3ff0000000000000n],
    ["x@|1",1e40,0x43e0000000000000n],
    ["x@^1",1e40,0x43e0000000000000n],
    ["x@~&1",1e40,0xc000000000000000n],
    ["x@~|1",1e40,0xc3e0000000000000n],
    ["x@~^1",1e40,0xc3e0000000000000n],
    ["1@<<64",0,0x3ff0000000000000n],
    ["1@<<(-1)",0,0xc3e0000000000000n],
    ["(-1)@<<1",0,0xc000000000000000n],
    ["1@>>64",0,0x3ff0000000000000n],
    ["1@>>(-1)",0,0x0n],
 ];
 const view=new DataView(new ArrayBuffer(8));
 for(const [text,value,expected] of bits) {
  const x=keep(new mx.Argument('x',value)),e=keep(new mx.Expression(text,x));
  check(e.checkSyntax());
  for(let i=0;i<2;i++){view.setFloat64(0,e.calculate(),false);check(view.getBigUint64(0,false)===expected);}
 }
 const round=keep(new mx.Expression('round(1.25,1e40)'));
 check(round.checkSyntax());check(round.calculate()===1.25);check(round.calculate()===1.25);
 const f=keep(new mx.Function('castProbe(...)=par(1e40)'));
 check(f.checkSyntax());check(Number.isNaN(f.calculate(1,2)));
 const negative=keep(new mx.Function('negativeProbe(...)=par(-2147483648)'));
 check(negative.checkSyntax());check(Number.isNaN(negative.calculate(1,2)));
 const recursive=keep(new mx.RecursiveArgument('r(n)=n'));recursive.addBaseCase(0,42);
 for(const bad of [NaN,Infinity,-Infinity,1e40]) {invalid(()=>recursive.getArgumentValue(bad));check(recursive.getArgumentValue(0)===42);}
 mx.mXparser.cancelCurrentCalculation();
 try {
  check(n.gcd(12n,8n)===0n);check(n.gcd([12n,8n,6n])===0n);check(n.lcm([12n,8n,6n])===0n);
  check(n.primeCount(3n)===0n);check(n.numberOfDigits(12n,2n)===0n);check(n.digitAtPosition(12n,1,10)===0);
 } finally {mx.mXparser.resetCancelCurrentCalculationFlag();}
 check(n.gcd(12n,8n)===4n);mx.mXparser.setDefaultOptions();
 const minimum=-(1n<<63n),maximum=(1n<<63n)-1n;
 const nativeInvalid=(method,action)=>{let caught=false;try{action();}catch(error){caught=error instanceof Error&&error.name==='std::invalid_argument'&&error.message.startsWith('NumberTheory.'+method+' requires ');}check(caught);};
 nativeInvalid('gcd',()=>n.gcd(minimum,1n));nativeInvalid('gcd',()=>n.gcd(1n,minimum));
 nativeInvalid('lcm',()=>n.lcm(minimum,1n));nativeInvalid('lcm',()=>n.lcm(1n,minimum));
 nativeInvalid('gcd',()=>n.gcd([minimum]));nativeInvalid('lcm',()=>n.lcm([minimum]));
 nativeInvalid('numberOfDigits',()=>n.numberOfDigits(minimum));nativeInvalid('numberOfDigits',()=>n.numberOfDigits(minimum,2n));
 nativeInvalid('digitAtPosition',()=>n.digitAtPosition(minimum,1,10));nativeInvalid('primeFactors',()=>n.primeFactors(minimum));
 nativeInvalid('lcm',()=>n.lcm(maximum,maximum));nativeInvalid('lcm',()=>n.lcm(maximum,2n));
 mx.mXparser.cancelCurrentCalculation();
 try{nativeInvalid('lcm',()=>n.lcm(12n,8n));}finally{mx.mXparser.resetCancelCurrentCalculationFlag();}
 check(n.lcm(maximum/2n,2n)===maximum-1n);check(n.gcd(maximum,maximum-1n)===1n);
 for(const position of [0,1]){check(n.digitAtPosition(0n,position,10)===0);check(Object.is(n.digitAtPosition(0,position,10),0));}
 const outside=action=>{let caught=false;try{action();}catch(error){caught=error instanceof Error&&error.name==='std::out_of_range'&&error.message==='NumberTheory.digitAtPosition digit index outside the native array';}check(caught);};
 for(const magnitude of [10000000000n,1000000000000n,maximum])for(const value of [magnitude,-magnitude]){
  outside(()=>n.digitAtPosition(value,1,10));check(n.digitAtPosition(12345n,1,10)===1);
  outside(()=>n.digitAtPosition(value,1));check(n.digitAtPosition(12345n,1)===1);
 }
 check(n.digitAtPosition(2147483648n,1,1)===-1);
 const nullable=testNullableNumericalRuntime(mx,(actual,expected)=>check(Object.is(actual,expected)),keep);
 return {cppId:'testNativeNumericRuntimeConversions',publicAssertions:checks,canonicalBitRows:bits.length,nullable};
}
