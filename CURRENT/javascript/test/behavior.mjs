/*
 * @(#)behavior.mjs        6.2.0    2026-11-04
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

// Shared browser/Node public behavior tests; calculations always use the native API.
import {testCallbackRecovery} from './callback-recovery.mjs';
import {testCloneContract} from './clone-contract.mjs';
export function runPublicBehavior(mx, {onScenario = () => {}} = {}) {
    let checks=0; const scenarios=[];
    const equal=(actual,expected)=>{checks++;if(!Object.is(actual,expected))throw Error(`Expected ${String(expected)}, received ${String(actual)}`);};
    const throws=(operation,expected)=>{checks++;try{operation();}catch(error){if(typeof expected==='function'&&!(error instanceof expected))throw error;if(expected instanceof RegExp&&!expected.test(String(error)))throw error;return;}throw Error('Expected an exception');};
    function scenario(name,operation){const owned=[],before=checks,keep=x=>{if(x)owned.push(x);return x;};mx.mXparser.setDefaultOptions();onScenario(name, 'START');try{operation(keep);}catch(error){throw new Error(name+': '+error.message,{cause:error});}finally{for(const x of owned.reverse())if(!x.isDeleted())x.delete();mx.mXparser.setDefaultOptions();}scenarios.push({name,assertions:checks-before});onScenario(name, 'PASS');}
    scenario('dependencies aliases release and clone',keep=>{
        const x=keep(new mx.Argument('x',1)),y=keep(new mx.Argument('y=x^2',x)),e=keep(new mx.Expression('x*y',x,y));
        equal(e.calculate(),1);x.setArgumentValue(3);equal(e.calculate(),27);
        const alias=keep(e.getArgument('x'));equal(alias===x,false);equal(alias.isAliasOf(x),true);
        x.delete();y.delete();alias.setArgumentValue(4);equal(e.calculate(),64);throws(()=>x.getArgumentValue(),/deleted object/);
        const copy=keep(e.cloneForThreadSafe()),independent=keep(copy.getArgument('x'));equal(independent.isAliasOf(alias),false);
        independent.setArgumentValue(5);equal(copy.calculate(),125);equal(e.calculate(),64);
    });
    scenario('Unicode grammar and text',keep=>{
        for(const[text,value]of[['√4',2],['π',Math.PI],['2π',2*Math.PI]]){const e=keep(new mx.Expression(text));equal(e.checkSyntax(),true);equal(Math.abs(e.calculate()-value)<1e-13,true);}
        const e=keep(new mx.Expression('2+3'));for(const text of['Zażółć gęślą jaźń','λ ∑ π','中文','🧮 𝛑 𐍈','line\nnext\tend']){e.setDescription(text);equal(e.getDescription(),text);equal(e.calculate(),5);}
    });
    scenario('syntax recovery and cache invalidation',keep=>{
        const e=keep(new mx.Expression('sin(0)+cos(0)'));equal(e.calculate(),1);equal(e.calculate(),1);mx.mXparser.removeBuiltinTokens('sin');equal(Number.isNaN(e.calculate()),true);mx.mXparser.unremoveBuiltinTokens('sin');equal(e.calculate(),1);
        e.setExpressionString('1+(');equal(e.checkSyntax(),false);equal(Number.isNaN(e.calculate()),true);e.setExpressionString('2*(3+4)');equal(e.checkSyntax(),true);equal(e.calculate(),14);
    });
    scenario('recursion calculus and settings',keep=>{
        const f=keep(new mx.Function('fact(n)=if(n>0,n*fact(n-1),1)'));equal(f.checkSyntax(),true);equal(f.calculate(6),720);
        for(const[text,value]of[['sum(i,1,10,i)',55],['der(x^2,x,3)',6],['int(x,x,0,1)',.5]]){const e=keep(new mx.Expression(text));equal(e.checkSyntax(),true);equal(Math.abs(e.calculate()-value)<1e-7,true);}
        const e=keep(new mx.Expression('sin(90)'));mx.mXparser.setDegreesMode();equal(e.calculate(),1);mx.mXparser.setRadiansMode();equal(Math.abs(e.calculate()-Math.sin(90))<1e-13,true);
    });
    scenario('help localization and null recovery',keep=>{
        const resources=keep(mx.StringResources.languageEnglish());mx.StringModel.setStringResources(resources);const e=keep(new mx.Expression('2+2'));
        const text=e.getHelpAsJson('sin',true,'Selected sine help');equal(typeof text,'string');equal(Array.isArray(JSON.parse(text)),true);equal(text.includes('sin'),true);
        const label=resources.KEYWORD;try{resources.KEYWORD=null;throws(()=>e.getHelpAsJson('sin',true,'Selected sine help'),/non-null|label|String/i);}finally{resources.KEYWORD=label;}equal(e.getHelpAsJson('sin',true,'Selected sine help'),text);
        const polish=keep(mx.StringResources.languagePolish());mx.StringModel.setStringResources(polish);e.setExpressionString('(');equal(e.checkSyntax(),false);equal(e.getErrorMessage().length>0,true);mx.StringModel.setStringResources(resources);
    });
    scenario('numeric varargs',()=>{
        for(const owner of[mx.mXparser,mx.NumberTheory]){equal(owner.convOthBase2Decimal(2,1,0,1),5);equal(owner.convOthBase2Decimal(2,[1,0,1]),5);equal(owner.convOthBase2Decimal('101',2),5);throws(()=>owner.convOthBase2Decimal(2,'1'),TypeError);}
        equal(mx.MathFunctions.continuedFraction(1,2,3),10/7);equal(mx.MathFunctions.continuedPolynomial(1,2,3),10);equal(Number.isNaN(mx.MathFunctions.continuedFraction()),true);equal(Number.isNaN(mx.MathFunctions.continuedPolynomial(null)),true);
    });
    scenario('callback failures cloning and reentry',keep=>{testCallbackRecovery(mx,equal,keep);testCloneContract(mx,equal,throws,keep);});
    scenario('mutual-cycle disconnection',keep=>{
        for(let i=0;i<100;i++){const f=keep(new mx.Function('first(t)=t+1')),g=keep(new mx.Function('second(t)=t+2'));try{f.addFunctions(g);g.addFunctions(f);equal(f.calculate(2),3);equal(g.calculate(2),4);}finally{f.removeFunctions(g);g.removeFunctions(f);g.delete();f.delete();}}
        // The manually self-linked free Argument has an inherited native pending
        // reference leak, even after removeArguments. Its observable behavior is
        // tested in a disposable resilience Worker, not claimed leak-free here.
        const fn=keep(new mx.Function('selfFunction(t)=t+1'));equal(fn.calculate(2),3);fn.addFunctions(fn);
        const fnAlias=keep(fn.getFunction('selfFunction'));equal(fnAlias.isAliasOf(fn),true);
        fn.removeFunctions(fn);equal(fn.calculate(2),3);
    });
    scenario('serialization opt-in and Unicode',keep=>{
        const serial=mx.SerializationUtils,e=keep(new mx.Expression('2+3'));serial.disableBinarySerialization();equal(serial.serializeToBytes(e),null);serial.enableBinarySerializationIamAwareOfSecurityRisks();
        try{e.setDescription('Zażółć λ 中文 🧮');const bytes=serial.serializeToBytes(e);equal(bytes instanceof Uint8Array,true);const copy=keep(serial.deserializeFromBytes(bytes,mx.Expression));equal(copy.calculate(),5);equal(copy.getDescription(),e.getDescription());equal(serial.deserializeFromBytes(new Uint8Array([1,2,3]),mx.Expression),null);equal(serial.deserializeFromBytes(bytes.subarray(0,bytes.length-1),mx.Expression),null);}finally{serial.disableBinarySerialization();}equal(e.calculate(),5);
    });
    scenario('GHSA-7fcj-crmh-pvhp numeric literals',keep=>{
        const zeros='0'.repeat(40000);
        for(const[text,value,count]of[[zeros+'1',1,1],['0.'+zeros+'1',0,1],['1e-'+zeros+'2',.01,1],[zeros+'1pi',Math.PI,3],[zeros+'1e',Math.E,3]]){const e=keep(new mx.Expression(text));equal(e.checkSyntax(),true);equal(Math.abs(e.calculate()-value)<=1e-14,true);const tokens=e.getCopyOfInitialTokens();try{equal(tokens.length,count);}finally{for(const token of tokens)token.delete();}}
        mx.mXparser.disableAttemptToFixExpStrMode();const e=keep(new mx.Expression(zeros+'1e+'));equal(e.checkSyntax(),false);equal(Number.isNaN(e.calculate()),true);const tokens=e.getCopyOfInitialTokens();try{equal(tokens.length,4);}finally{for(const token of tokens)token.delete();}
    });
    return {checks,scenarios};
}
