/*
 * @(#)native-api-cases.mjs        6.2.0    2026-11-04
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

// Manually reviewed COMPLETE native API test scenarios. Original diagnostic
// printing is omitted. Constructor/mutation/read order and final conjunctions
// match the source bodies pinned in native-manual.json.
function argumentsDescending(mx,keep,count=5){
  const result={};
  for(let value=count;value>=1;value--)result[`a${value}`]=keep(new mx.Argument(`a${value}`,value));
  return result;
}
function functionsDescending(mx,keep){
  const result={};
  for(let value=4;value>=1;value--)result[`f${value}`]=keep(new mx.Function(`f${value}`,String(value),'x'));
  return result;
}
function constantsDescending(mx,keep){
  const result={};
  for(const value of [5,2,1])result[`c${value}`]=keep(new mx.Constant(`c${value}`,value));
  return result;
}
function fullExpression(mx,keep){
  const {a5,a4,a3,a2,a1}=argumentsDescending(mx,keep);
  const {f4,f3,f2,f1}=functionsDescending(mx,keep);
  const {c5,c2,c1}=constantsDescending(mx,keep);
  return keep(new mx.Expression('a1+c2',a1,a2,c1,c2,a3,a4,c5,a5,f1,f2,f3,f4));
}
function sevenArguments(mx,keep){
  const args=argumentsDescending(mx,keep);args.a7=keep(new mx.Argument('a7',7));args.a6=keep(new mx.Argument('a6',6));
  return {args,e:keep(new mx.Expression('1+2'))};
}
function populateArguments(e,{a1,a2,a3,a4,a5,a6,a7}){
  e.addDefinitions(a6,a7);e.addDefinitions(a1,a2,a3,a4,a5);e.defineArguments('x1','x2','x3');e.defineArgument('x',1);
}
export const nativeApiCases={
  testApi0000(mx,keep){
    const e=keep(new mx.Expression());
    return e.getExpressionString()===''&&e.getArgumentsNumber()===0&&e.getConstantsNumber()===0&&e.getFunctionsNumber()===0;
  },
  testApi0001(mx,keep){
    const {a5,a4,a3,a2,a1}=argumentsDescending(mx,keep);
    const e=keep(new mx.Expression('a1+c2',a1,a2,a3,a4,a5));
    return e.getExpressionString()==='a1+c2'&&e.getArgumentsNumber()===5&&e.getConstantsNumber()===0&&e.getFunctionsNumber()===0;
  },
  testApi0002(mx,keep){
    const {a5,a4,a3,a2,a1}=argumentsDescending(mx,keep);
    const {f4,f3,f2,f1}=functionsDescending(mx,keep);
    const e=keep(new mx.Expression('a1+c2',a1,f1,a2,f2,a3,a4,f3,a5,f4));
    return e.getExpressionString()==='a1+c2'&&e.getArgumentsNumber()===5&&e.getConstantsNumber()===0&&e.getFunctionsNumber()===4;
  },
  testApi0003(mx,keep){
    const {a5,a4,a3,a2,a1}=argumentsDescending(mx,keep);
    const {f4,f3,f2,f1}=functionsDescending(mx,keep);
    const {c5,c2,c1}=constantsDescending(mx,keep);
    const e=keep(new mx.Expression('a1+c2',a1,a2,c1,c2,a3,a4,c5,a5,f1,f2,f3,f4));
    return e.getExpressionString()==='a1+c2'&&e.getArgumentsNumber()===5&&e.getConstantsNumber()===3&&e.getFunctionsNumber()===4;
  },
  testApi0004(mx,keep){
    const e=fullExpression(mx,keep);
    const syn1=e.checkSyntax();e.setExpressionString('c2+a1');
    const syn2=e.getSyntaxStatus(),syn3=e.checkSyntax(),s1=e.getExpressionString();
    const syn4=e.getSyntaxStatus(),syn5=e.checkSyntax();e.clearExpressionString();
    const syn6=e.getSyntaxStatus(),syn7=e.checkSyntax(),s2=e.getExpressionString(),syn8=e.getSyntaxStatus();
    return s1==='c2+a1'&&s2===''&&syn1===mx.Expression.NO_SYNTAX_ERRORS&&syn2===mx.Expression.SYNTAX_ERROR
      &&syn3===mx.Expression.NO_SYNTAX_ERRORS&&syn4===mx.Expression.NO_SYNTAX_ERRORS&&syn5===mx.Expression.NO_SYNTAX_ERRORS
      &&syn6===mx.Expression.SYNTAX_ERROR&&syn7===mx.Expression.SYNTAX_ERROR&&syn8===mx.Expression.SYNTAX_ERROR;
  },
  testApi0005(mx,keep){
    const e=fullExpression(mx,keep);e.setExpressionString('c1+a2');const syn1=e.checkSyntax();
    e.setDescription('opis');const s1=e.getDescription();e.clearDescription();const s2=e.getDescription(),syn2=e.getSyntaxStatus();
    return s1==='opis'&&s2===''&&syn1===mx.Expression.NO_SYNTAX_ERRORS&&syn2===mx.Expression.NO_SYNTAX_ERRORS;
  },
  testApi0006(mx,keep){
    const e=fullExpression(mx,keep);e.setExpressionString('c1+a2');const syn1=e.checkSyntax(),b1=e.getVerboseMode();
    e.setVerboseMode();const b2=e.getVerboseMode();e.setSilentMode();const b3=e.getVerboseMode(),syn2=e.getSyntaxStatus();
    return b1===false&&b2===true&&b3===false&&syn1===mx.Expression.NO_SYNTAX_ERRORS&&syn2===mx.Expression.NO_SYNTAX_ERRORS;
  },
  testApi0007(mx,keep){
    const fa=keep(new mx.Function('f(x,y)=sin(x)+cos(y)')),fb=keep(new mx.Function('f(x,y)=sin(x)+cos(y)+f(1,2)'));
    const syn1=fa.checkSyntax(),syn2=fb.checkSyntax(),b1=fa.getRecursiveMode(),b2=fb.getRecursiveMode();
    return b1===false&&b2===true&&syn1===mx.Expression.NO_SYNTAX_ERRORS&&syn2===mx.Expression.NO_SYNTAX_ERRORS;
  },
  testApi0008(mx,keep){
    const e=keep(new mx.Expression('1+2'));
    return e.getExpressionString()==='1+2'&&e.getArgumentsNumber()===0&&e.getConstantsNumber()===0&&e.getFunctionsNumber()===0;
  },
  testApi0009(mx,keep){
    const {a3,a2,a1}=argumentsDescending(mx,keep,3),e=keep(new mx.Expression('1+2',a1,a2,a3));
    return e.getExpressionString()==='1+2'&&e.getArgumentsNumber()===3&&e.getConstantsNumber()===0&&e.getFunctionsNumber()===0;
  },
  testApi0010(mx,keep){
    const {e,args:{a1,a2,a3,a4,a5,a6,a7}}=sevenArguments(mx,keep);
    const syn1=e.checkSyntax();e.addDefinitions(a6,a7);const syn2=e.getSyntaxStatus(),syn3=e.checkSyntax();
    e.addDefinitions(a1,a2,a3,a4,a5);const syn4=e.getSyntaxStatus(),syn5=e.checkSyntax();
    e.defineArguments('x1','x2','x3');const syn6=e.getSyntaxStatus(),syn7=e.checkSyntax();e.defineArgument('x',1);const syn8=e.getSyntaxStatus();
    return e.getExpressionString()==='1+2'&&e.getArgumentsNumber()===11&&e.getConstantsNumber()===0&&e.getFunctionsNumber()===0
      &&syn1===mx.Expression.NO_SYNTAX_ERRORS&&syn2===mx.Expression.SYNTAX_ERROR&&syn3===mx.Expression.NO_SYNTAX_ERRORS
      &&syn4===mx.Expression.SYNTAX_ERROR&&syn5===mx.Expression.NO_SYNTAX_ERRORS&&syn6===mx.Expression.SYNTAX_ERROR
      &&syn7===mx.Expression.NO_SYNTAX_ERRORS&&syn8===mx.Expression.SYNTAX_ERROR;
  },
  testApi0011(mx,keep){
    const {e,args}=sevenArguments(mx,keep);populateArguments(e,args);
    const syn1=e.checkSyntax(),i1=e.getArgumentIndex('asdsa'),i2=e.getArgumentIndex('x1');
    const A1=e.getArgument('asasas'),A2=keep(e.getArgument('a2')),A3=e.getArgument(-1),A4=e.getArgument(23),A5=keep(e.getArgument(1));
    const n1=e.getArgumentsNumber(),syn2=e.getSyntaxStatus();
    return i1===-1&&i2===7&&A1===null&&A2.isAliasOf(args.a2)&&A3===null&&A4===null&&A5.isAliasOf(args.a7)
      &&n1===11&&syn1===mx.Expression.NO_SYNTAX_ERRORS&&syn2===mx.Expression.NO_SYNTAX_ERRORS;
  },
  testApi0012(mx,keep){
    const {e,args}=sevenArguments(mx,keep);populateArguments(e,args);
    const syn1=e.checkSyntax(),d1=e.getArgumentValue('a1'),syn2=e.getSyntaxStatus();e.setArgumentValue('asds',1);
    const syn3=e.getSyntaxStatus();let syn4=e.checkSyntax();e.setArgumentValue('a1',10);syn4=e.getSyntaxStatus();
    const d2=e.getArgumentValue('asdfasdf'),d3=e.getArgumentValue('a1'),syn5=e.getSyntaxStatus();
    return d1===1&&Number.isNaN(d2)&&d3===10&&syn1===mx.Expression.NO_SYNTAX_ERRORS&&syn2===mx.Expression.NO_SYNTAX_ERRORS
      &&syn3===mx.Expression.NO_SYNTAX_ERRORS&&syn4===mx.Expression.NO_SYNTAX_ERRORS&&syn5===mx.Expression.NO_SYNTAX_ERRORS;
  },
  testApi0013(mx,keep){
    const {e,args}=sevenArguments(mx,keep);populateArguments(e,args);e.setExpressionString('1+2');
    const syn1=e.checkSyntax(),n1=e.getArgumentsNumber();e.removeArguments(['asfdf']);const syn2=e.getSyntaxStatus(),n2=e.getArgumentsNumber();
    e.removeArguments('x1','x2');const n3=e.getArgumentsNumber(),syn3=e.checkSyntax();e.removeArguments(args.a3);const n4=e.getArgumentsNumber();
    e.removeArguments(args.a1,args.a2);const syn4=e.getSyntaxStatus(),n5=e.getArgumentsNumber(),syn5=e.checkSyntax();
    e.removeAllArguments();const n6=e.getArgumentsNumber(),syn6=e.getSyntaxStatus();
    return n2===n1&&n2-n3===2&&n3-n4===1&&n4-n5===2&&n6===0&&syn1===mx.Expression.NO_SYNTAX_ERRORS
      &&syn2===mx.Expression.SYNTAX_ERROR&&syn3===mx.Expression.NO_SYNTAX_ERRORS&&syn4===mx.Expression.SYNTAX_ERROR
      &&syn5===mx.Expression.NO_SYNTAX_ERRORS&&syn6===mx.Expression.SYNTAX_ERROR;
  }
};
