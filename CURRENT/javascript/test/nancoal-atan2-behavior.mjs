/*
 * @(#)nancoal-atan2-behavior.mjs        6.2.0    2026-11-14
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

// Scenarios correspond to native testSyn0421–0422, testExpr1447–1452,
// testApi0455–0457; additional checks cover the JS binding and handle lifetime.
export function runNaNAtan2Behavior(mx) {
    let checks = 0;
    const owned = [], scenarios = [];
    const keep = value => { if (value) owned.push(value); return value; };
    const eq = (actual, expected, context = '') => {
        checks++;
        if (!Object.is(actual, expected)) throw new Error(`${context}: expected ${expected}, received ${actual}`);
    };
    const near = (actual, expected, context = '') => {
        checks++;
        if (Number.isNaN(expected) ? !Number.isNaN(actual)
            : !Number.isFinite(actual) || Math.abs(actual - expected) > 2e-14 * Math.max(1, Math.abs(expected)))
            throw new Error(`${context}: expected ${expected}, received ${actual}`);
    };
    const throws = fn => {
        checks++;
        try { fn(); } catch (error) { if (error instanceof TypeError) return; throw error; }
        throw new Error('Expected TypeError');
    };
    const release = () => { for (const value of owned.splice(0).reverse()) if (!value.isDeleted()) value.delete(); };
    const calculate = (input, ...definitions) => {
        const expression = new mx.Expression(input, ...definitions);
        try { return expression.calculate(); } finally { expression.delete(); }
    };
    const syntax = input => {
        const expression = new mx.Expression(input);
        try { return expression.checkSyntax(); } finally { expression.delete(); }
    };
    const scenario = (nativeId, fn) => { fn(); scenarios.push({nativeId, status: 'PASS'}); };
    const m = mx.mXparser, math = mx.mathcollection.MathFunctions;
    m.setDefaultOptions();
    try {
        scenario('testSyn0421', () => {
            m.disableAttemptToFixExpStrMode();
            for (const input of ['1??2','[NaN]??2','(1??2)+3','min(1??2,3)','1??2??3','π??2']) eq(syntax(input), true, input);
            for (const input of ['1??','??2','1???2','1??unknown','1??sin(1,2)']) eq(syntax(input), false, input);
        });
        scenario('testSyn0422', () => {
            for (const input of ['atan2(1,2)','atan2(1;2)','atan2(sin(1),2)','atan2(1??2,3)']) eq(syntax(input), true, input);
            for (const input of ['atan2()','atan2(1)','atan2(1,2,3)','atan2(1,unknown)','atan2(,2)']) eq(syntax(input), false, input);
        });
        scenario('testExpr1447', () => {
            const inputs = ['1??2','[NaN]??2','0??9','-3??9','[NaN]??[NaN]','0/0??7',
                '1+2??9','[NaN]??2+3*4','1??2+3','(1??2)+3','[NaN]??[NaN]??5','2^3??9',
                '1<2??9','0|1??9','2@|1??9','min(9,[NaN]??3)','atan2(1??2,1)','2(1??9)',
                'sum(i,1,3,i??9)','if(0,1??2,7)','iff(0,1??2,1,8)','(0/0??2)*(3??4)',
                '1??sum(i,1,3,i)','[NaN]??if(1,8,9)','[NaN]??2;3'];
            const expected = [1,2,0,-3,NaN,7,3,14,1,4,5,8,1,1,3,3,Math.PI/4,2,6,7,8,6,1,8,NaN];
            inputs.forEach((input, i) => near(calculate(input), expected[i], input));
        });
        scenario('testExpr1448', () => {
            const state = {calls: 0};
            class Tick extends mx.FunctionExtension {
                value = 0;
                getParametersNumber() { return 1; }
                setParameterValue(index, value) { this.value = value; }
                getParameterName() { return 'x'; }
                calculate() { state.calls++; return this.value; }
                clone() { return new Tick(); }
            }
            const tick = keep(new mx.Function('tick', new Tick()));
            const d = keep(new mx.Argument('d=tick(3)', tick));
            const inputs = ['tick(1)??tick(2)','1??(tick(2)+tick(3))','1??sum(i,1,3,tick(i))',
                '1??if(tick(1),tick(2),tick(3))','1??([NaN]??tick(2))','1??d','if(0,tick(1)??tick(2),1)'];
            const expectedCalls = [2,2,3,2,1,1,0];
            inputs.forEach((input, i) => {
                const expression = keep(new mx.Expression(input, tick, d));
                for (let repeat = 0; repeat < 2; repeat++) {
                    state.calls = 0;
                    eq(expression.calculate(),1,input);
                    eq(state.calls,expectedCalls[i],input);
                }
            });
            const chain = keep(new mx.Expression('tick([NaN])??tick(2)??tick(3)',tick));
            for (let repeat = 0; repeat < 2; repeat++) {
                state.calls = 0;
                eq(chain.calculate(),2);
                eq(state.calls,3);
            }
            release();
        });
        scenario('testExpr1449', () => {
            const x=keep(new mx.Argument('x',NaN)), y=keep(new mx.Argument('y',4));
            const e=keep(new mx.Expression('x??y+1',x,y));
            for(let i=0;i<16;i++) {
                x.setArgumentValue(i%2===0 ? NaN : i);y.setArgumentValue(i+10);
                const expected=i%2===0 ? i+11 : i;eq(e.calculate(),expected);eq(e.calculate(),expected);
            }
            const clone=keep(e.cloneForThreadSafe()), cx=keep(clone.getArgument('x')), cy=keep(clone.getArgument('y'));
            cx.setArgumentValue(NaN);cy.setArgumentValue(50);eq(clone.calculate(),51);eq(e.calculate(),15);
            e.setExpressionString('(x??y)+2');eq(e.calculate(),17);
            release();
        });
        scenario('testExpr1450', () => {
            const inputs=['atan2(1,1)','atan2(1,-1)','atan2(-1,-1)','atan2(-1,1)','atan2(1,0)','atan2(-1,0)',
                'atan2(0,-1)','atan2(0,1)','atan2([NaN],1)','atan2(1,[NaN])','atan2(1+1,2)','2atan2(1,1)','atan2(1,1)??9'];
            const p=Math.PI, expected=[p/4,3*p/4,-3*p/4,-p/4,p/2,-p/2,p,0,NaN,NaN,p/4,p/2,p/4];
            inputs.forEach((input,i)=>near(calculate(input),expected[i],input));
        });
        scenario('testExpr1451', () => {
            const y=keep(new mx.Argument('y',1)),x=keep(new mx.Argument('x',1)),e=keep(new mx.Expression('atan2(y,x)',y,x));
            const ys=[1,1,-1,-1,1,-1,0,0],xs=[1,-1,-1,1,0,0,-1,1],expected=[45,135,-135,-45,90,-90,180,0];
            m.setDegreesMode();
            ys.forEach((v,i)=>{y.setArgumentValue(v);x.setArgumentValue(xs[i]);eq(e.calculate(),expected[i]);eq(e.calculate(),expected[i]);});
            m.setRadiansMode();y.setArgumentValue(1);x.setArgumentValue(1);near(e.calculate(),Math.PI/4);
            release();
        });
        scenario('testExpr1452', () => {
            const left = 'floor((0.7+0.1)*10)';
            const coalesced = keep(new mx.Expression(left+'??0'));
            eq(coalesced.calculate(),8);
            eq(calculate(left),8);
            eq(calculate('if(1,'+left+',0)'),8);
            const canonical=m.checkIfCanonicalRounding(),ulp=m.checkIfUlpRounding(),almostInt=m.checkIfAlmostIntRounding();
            const ordinary=keep(new mx.Expression(left));
            const fallback=keep(new mx.Expression('[NaN]??'+left));
            const sum=keep(new mx.Expression('sum(i,1,2,'+left+')'));
            const sumCoalesced=keep(new mx.Expression('sum(i,1,2,('+left+')??0)'));
            const small=keep(new mx.Expression('(1e-16+0)/1e-16'));
            const smallCoalesced=keep(new mx.Expression('((1e-16+0)??0)/1e-16'));
            const smallChain=keep(new mx.Expression('(([NaN]??(1e-16+0))??0)/1e-16'));
            for(let mode=0;mode<8;mode++) {
                m.setCanonicalRounding((mode&1)!==0);
                m.setUlpRounding((mode&2)!==0);
                m.setAlmostIntRounding((mode&4)!==0);
                const expected=ordinary.calculate();
                eq(coalesced.calculate(),expected);eq(coalesced.calculate(),expected);eq(fallback.calculate(),expected);
                const expectedSum=sum.calculate();
                eq(sumCoalesced.calculate(),expectedSum);eq(sumCoalesced.calculate(),expectedSum);
                const expectedSmall=small.calculate();
                eq(expectedSmall,1);eq(smallCoalesced.calculate(),expectedSmall);
                eq(smallCoalesced.calculate(),expectedSmall);eq(smallChain.calculate(),expectedSmall);
            }
            // Selecting an existing operand must not apply additional ULP rounding.
            m.setCanonicalRounding(false);m.setAlmostIntRounding(false);
            const selected=keep(new mx.Argument('selected',0.1+0.2));
            const selections=['selected??0','[NaN]??selected','[NaN]??selected??0',
                '(selected??0)??0','coalesce(selected,0)','coalesce([NaN],selected)',
                'min(selected,selected)','max(selected,selected)'];
            const supplied=[0.1+0.2,-(0.1+0.2),2.5-2.2,-(2.5-2.2)];
            for(const selection of selections) {
                const selectionExp=keep(new mx.Expression(selection,selected));
                for(let mode=0;mode<2;mode++) {
                    m.setUlpRounding(mode!==0);
                    for(const suppliedValue of supplied) {
                        selected.setArgumentValue(suppliedValue);
                        for(let repeat=0;repeat<2;repeat++) {
                            eq(selectionExp.calculate(),suppliedValue,selection);
                        }
                    }
                }
            }
            m.setCanonicalRounding(canonical);m.setUlpRounding(ulp);m.setAlmostIntRounding(almostInt);
            eq(coalesced.calculate(),8);
            release();
        });
        scenario('testApi0455', () => {
            const fields=['NAN_COALESCE_ID','NAN_COALESCE_STR','NAN_COALESCE_SYN','NAN_COALESCE_DESC','NAN_COALESCE_SINCE'];
            fields.forEach(name=>eq(name in mx.Operator,true,name));
            ['ID','STR','SYN','DESC','SINCE'].forEach(s=>eq('ATAN2_'+s in mx.Function2Arg,true));
            eq(mx.Operator.NAN_COALESCE_ID,14);eq(mx.Function2Arg.ATAN2_ID,35);eq(m.NAMEv62,'6.2');
            eq(mx.Operator.NAN_COALESCE_STR,'??');eq(mx.Function2Arg.ATAN2_STR,'atan2');
            for(const locale of ['English','Chinese','French','German','Italian','Polish','Portuguese','Spanish']) {
                const resources=keep(mx.StringResources['language'+locale]());mx.StringModel.setStringResources(resources);
                const words=m.getKeyWords();let found=0;
                for(const kw of words) {
                    if(kw.wordString==='??') {
                        found++;eq(kw.wordId,14);eq(kw.wordTypeId,mx.Operator.TYPE_ID);eq(kw.syntax,'a ?? b');eq(kw.since,'6.2');
                        eq(kw.description,resources.OPERATOR_NAN_COALESCE+' - '+resources.OPERATOR);
                    }
                    if(kw.wordString==='atan2') {
                        found++;eq(kw.wordId,35);eq(kw.wordTypeId,mx.Function2Arg.TYPE_ID);eq(kw.syntax,'atan2(y, x)');eq(kw.since,'6.2');
                        eq(kw.description.startsWith(resources.FUNCTION_2_ARG_ATAN2),true);
                    }
                    kw.delete();
                }
                eq(found,2,locale);eq(resources.OPERATOR_NAN_COALESCE.length>0,true);eq(resources.FUNCTION_2_ARG_ATAN2.length>0,true);
                eq(m.getHelpAsCsv().includes(resources.OPERATOR_NAN_COALESCE),true);
                eq(m.getHelpAsHtmlTable().includes(resources.FUNCTION_2_ARG_ATAN2),true);
                eq(m.getHelpAsJson().includes('atan2'),true);eq(m.getHelpAsMarkdownTable().includes('??'),true);
            }
            mx.StringModel.setDefaultStringResources();release();
        });
        scenario('testApi0456', () => {
            const values=[0,-0,1,-1,Infinity,-Infinity,NaN,Number.MIN_VALUE,-Number.MIN_VALUE,Number.MAX_VALUE,-Number.MAX_VALUE];
            for(const y of values) for(const x of values) {
                const expected=Math.atan2(y,x),actual=math.atan2(y,x);
                // Java/IEEE preserves the ordinate's sign for zero angles,
                // including underflow; some browser Math.atan2 implementations
                // lose it for (-MIN_VALUE, MAX_VALUE), so use the exact contract.
                if(expected===0) eq(actual,y<0||Object.is(y,-0)?-0:0,`atan2(${y},${x}) signed zero`);
                else near(actual,expected,`atan2(${y},${x})`);
            }
            m.setDegreesMode();eq(math.atan2(-0,1),-0);eq(math.atan2(1,-1),135);eq(math.atan2(-1,-1),-135);m.setRadiansMode();
        });
        scenario('testApi0457', () => {
            for(const [input,expected] of [['atan2(y,x)','\\operatorname{atan2}(y,x)'],['a??b+c','\\operatorname{first}_{\\ne\\mathrm{NaN}}(a,b+c)']]) {
                const e=keep(new mx.Expression(input));eq(e.getExpressionAsLaTeX(),expected);
            }
            release();
        });
        scenario('binding-contract', () => {
            throws(()=>math.atan2(1));throws(()=>math.atan2(1,2,3));throws(()=>math.atan2('1',2));
            throws(()=>{mx.Function2Arg.ATAN2_ID=99;});
            const r=keep(mx.StringResources.languageEnglish());r.OPERATOR_NAN_COALESCE='custom NaN operator';r.FUNCTION_2_ARG_ATAN2='custom atan2';
            mx.StringModel.setStringResources(r);eq(m.getHelpAsCsv().includes('custom NaN operator'),true);eq(m.getHelpAsCsv().includes('custom atan2'),true);
            mx.StringModel.setDefaultStringResources();release();
            // Native removal policy covers functions/constants/units/random variables;
            // operators remain reserved. Verify both policies and cache invalidation.
            const e=keep(new mx.Expression('1??2'));eq(e.calculate(),1);m.removeBuiltinTokens('??');eq(e.checkSyntax(),true);eq(e.calculate(),1);
            const angle=keep(new mx.Expression('atan2(1,1)'));near(angle.calculate(),Math.PI/4);
            m.removeBuiltinTokens('atan2');eq(angle.checkSyntax(),false);m.unremoveAllBuiltinTokens();near(angle.calculate(),Math.PI/4);
            const steps=keep(new mx.CalcStepsRegister()), x=keep(new mx.Argument('x',NaN)), trace=keep(new mx.Expression('x??2+3',x));
            eq(trace.calculate(steps),5);eq(steps.result,5);x.setArgumentValue(7);eq(trace.calculate(),7);
            release();
            const s=mx.SerializationUtils;
            s.enableBinarySerializationIamAwareOfSecurityRisks();
            try {
                for(const initial of [NaN,7]) {
                    const a=keep(new mx.Argument('a',initial));
                    const original=keep(new mx.Expression('a??atan2(1,1)',a));
                    near(original.calculate(),Number.isNaN(initial)?Math.PI/4:initial);
                    const bytes=s.serializeToBytes(original);eq(bytes instanceof Uint8Array,true);
                    const restored=keep(s.deserializeFromBytes(bytes,mx.Expression));
                    const restoredArgument=keep(restored.getArgument('a'));
                    near(restored.calculate(),Number.isNaN(initial)?Math.PI/4:initial);
                    restoredArgument.setArgumentValue(Number.isNaN(initial)?9:NaN);
                    near(restored.calculate(),Number.isNaN(initial)?9:Math.PI/4);
                    release();
                }
            } finally { s.disableBinarySerialization(); }
        });
        return {status:'PASS',checks,scenarios};
    } finally {
        mx.StringModel.setDefaultStringResources();m.setDefaultOptions();release();
    }
}
