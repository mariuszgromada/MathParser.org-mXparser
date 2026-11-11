/*
 * @(#)native-typed-cases.mjs        6.2.0    2026-11-04
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

import {textContains, textStartsWith, textEndsWith, textReplace, textLower, textTrim} from './text-assertions.mjs';
// Faithful USER extension test fixtures from CURRENT/cpp/tests/Miscellaneous.hpp.
// This is test code, never a second implementation of the parser or mathematics.
export function extensionFixture(mx,name,...args){
  if(name==='PiMultArgExt')return new class extends mx.ArgumentExtension{
    multiple=0;
    getArgumentValue(){this.multiple++;return Math.PI*this.multiple;}
    clone(){return extensionFixture(mx,name);}
  }();
  if(name==='LongComputingArgExt')return new class extends mx.ArgumentExtension{
    getArgumentValue(){let j=0;for(let i=0;i<1000000;i++)j+=1;return j;}
    clone(){return extensionFixture(mx,name);}
  }();
  if(name==='FunExt')return new class extends mx.FunctionExtension{
    x=args.length?args[0]:NaN;y=args.length?args[1]:NaN;
    getParametersNumber(){return 2;}
    setParameterValue(index,value){if(index===0)this.x=value;if(index===1)this.y=value;}
    getParameterName(index){if(index===0)return 'x';if(index===1)return 'y';return '';}
    calculate(){return this.x*this.y;}
    clone(){return extensionFixture(mx,name);}
  }();
  if(name==='LongComputingFunExt')return new class extends mx.FunctionExtension{
    n=args.length?args[0]:NaN;
    getParametersNumber(){return 1;}
    setParameterValue(index,value){if(index===0)this.n=value;}
    getParameterName(index){if(index===0)return 'n';return '';}
    calculate(){let sum=0;for(let i=1;i<=this.n;i++)sum+=i;return sum;}
    clone(){return extensionFixture(mx,name);}
  }();
  if(name==='FunExtVar')return new class extends mx.FunctionExtensionVariadic{
    calculate(parameters){if(parameters===null)return NaN;if(parameters.length===0)return NaN;let result=0;for(const x of parameters)result+=x;return result;}
    clone(){return extensionFixture(mx,name);}
  }();
  if(name==='LongComputingFunExtVar')return new class extends mx.FunctionExtensionVariadic{
    calculate(parameters){if(parameters===null)return NaN;if(parameters.length===0)return NaN;let result=0;for(let i=1;i<=parameters.get(0);i++)result+=i;return result;}
    clone(){return extensionFixture(mx,name);}
  }();
  throw new TypeError('Unreviewed native extension test fixture '+name);
}

// C++ test-scaffolding conversions for the compiler-recorded wasm32 data model.
// No expression parsing or production mathematical implementation lives here.
export function cppNumericCast(value,type,sourceFloating=false){
  if(type==='double')return Number(value);
  if(type==='bool')return typeof value==='bigint'?value!==0n:value!==0;
  if(typeof value==='boolean')value=Number(value);
  const descriptor={int:[32,false],long:[32,false],'unsigned int':[32,true],'unsigned long':[32,true],size_t:[32,true],Long:[64,false],'long long':[64,false],'unsigned long long':[64,true]}[type];
  if(!descriptor)throw new TypeError('Unreviewed C++ numeric type '+type);
  const [bits,unsigned]=descriptor;
  let integer;
  if(typeof value==='bigint')integer=value;
  else{
    if(!Number.isFinite(value))throw new RangeError('Undefined C++ floating-to-integer conversion');
    const truncated=Math.trunc(value);
    const minimum=unsigned?0:-(2**(bits-1)),exclusiveMaximum=unsigned?2**bits:2**(bits-1);
    if((sourceFloating||!Number.isInteger(value))&&(truncated<minimum||truncated>=exclusiveMaximum))throw new RangeError('Undefined C++ floating-to-integer range');
    integer=BigInt(truncated);
  }
  const result=unsigned?BigInt.asUintN(bits,integer):BigInt.asIntN(bits,integer);
  return bits===64?result:Number(result);
}
export function cppIntegerDivision(left,right,type){
  if(right===0||right===0n)throw new RangeError('Undefined C++ integer division by zero');
  const minimum=type==='Long'||type==='long long'?-(1n<<63n):type==='int'||type==='long'?-2147483648:null;
  if(minimum!==null&&left===minimum&&(right===-1||right===-1n))throw new RangeError('Undefined C++ signed division overflow');
  if(typeof left==='bigint')return cppNumericCast(left/right,type);
  const result=Math.trunc(left/right);return cppNumericCast(result===0?0:result,type);
}

// Proposed typed-AST scenarios; no runtime support claim.
function nullableExtension(mx,type,value){return value===null?mx[type].NULL:value;}
function calculateWithSteps(function_,steps){return steps===null?function_.calculate():function_.calculate(steps);}
function cleanMarkdown(mx,text){return textReplace(textReplace(text,'\\\\',''),'\\|','');}
function stringSize(value,wide){return wide?Array.from(value).length:new TextEncoder().encode(value).length;}
function listRead(value,method,args){if(!Array.isArray(value))return value[method](...args);if(method==="size")return value.length;return value[args[0]];}
function characterCodepoint(value){if(typeof value!=="string"||Array.from(value).length!==1)throw new TypeError("Expected reviewed native character");return value.codePointAt(0);}
function nativeCast(value,type){if(value!==null&&!(value instanceof type))throw new TypeError("Native static cast precondition failed");return value;}
function resourcesFixture(mx){const value=new mx.StringResources();Object.assign(value,{USER_LANGUAGE:"Polish",NUMBER_LITERAL:"Literał liczbowy",NUMBER:"Liczba",ALL_HELP_CONTENT:"Pomoc",KEYWORD:"Słowo kluczowe",TYPE:"Typ",SYNTAX:"Składnia",SINCE:"Od",DESCRIPTION:"Opis",OPERATOR_MULTIPLY:"Mnożenie"});return value;}
function arrayField(value,name){if(!Array.isArray(value))throw new TypeError("Expected native Array snapshot");return name==="rows"?value.length:value.reduce((count,row)=>count+(Array.isArray(row)?row.length:1),0);}
function arrayRead(value,indices){if(!Array.isArray(value)||!indices.every(Number.isInteger)||indices.length<1||indices.length>2)throw new TypeError("Unreviewed array index");const row=value[indices[0]];return indices.length===1?(Array.isArray(row)?row[0]:row):Array.isArray(row)?row[indices[1]]:indices[1]===0?row:undefined;}
function canonical(mx,keep,source,expected,...names){
 const expression=keep(new mx.Expression(source));
 for(const name of names){const argument=new mx.Argument(name,0);try{expression.addArguments(argument);}finally{argument.delete();}}
 return expression.getCanonicalExpressionString()===expected;
}
export const typedCases={
testApi0014(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="addConstants(Constant::.. constants), addConstants( ListPtr<ConstantPtr> constantsList), defineConstant(string constantName, double constantValue)";
void 0 /* console diagnostics */;
let c3=keep(new mx.Constant("c3",3));
let c2=keep(new mx.Constant("c2",2));
let c1=keep(new mx.Constant("c1",1));
let c6=keep(new mx.Constant("c6",6));
let c5=keep(new mx.Constant("c5",5));
let e=keep(new mx.Expression("1+2",keep(new mx.Constant("a=5"))));
let syn1=e.checkSyntax();
e.addDefinitions(c5,c6);
let syn2=e.getSyntaxStatus();
let syn3=e.checkSyntax();
e.addDefinitions(c1,c2,c3,c5,c6);
let syn4=e.getSyntaxStatus();
let syn5=e.checkSyntax();
e.defineConstant("cx1",cppNumericCast(1,"double"));
e.removeDefinitions(c5,c6);
let syn6=e.checkSyntax();
e.removeDefinitions(c5,c6);
if(((((((((((e.getExpressionString()==="1+2")&&(e.getArgumentsNumber()===0))&&(e.getConstantsNumber()===5))&&(e.getFunctionsNumber()===0))&&(cppNumericCast(syn1,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn2,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))&&(cppNumericCast(syn3,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn4,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))&&(cppNumericCast(syn5,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))&&(cppNumericCast(syn6,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0015(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="getConstantIndex(string constantName), getConstant(string constantName), getConstant(int constantIndex), getConstantsNumber()";
void 0 /* console diagnostics */;
let c3=keep(new mx.Constant("c3",3));
let c2=keep(new mx.Constant("c2",2));
let c1=keep(new mx.Constant("c1",1));
let e=keep(new mx.Expression("1+2",keep(new mx.Constant("a=5"))));
e.addDefinitions(c1,c2,c3);
e.defineConstant("cx1",cppNumericCast(1,"double"));
let syn1=e.checkSyntax();
let i1=e.getConstantIndex("asdsa");
let i2=e.getConstantIndex("c6");
let C1=keep(e.getConstant("asasas"));
let C2=keep(e.getConstant("c1"));
let C3=keep(e.getConstant((-1)));
let C4=keep(e.getConstant(23));
let C5=keep(e.getConstant(1));
let n1=e.getConstantsNumber();
let syn2=e.getSyntaxStatus();
if(((((((((((i1===(-1))&&(i2===(-1)))&&alias(C1,null))&&alias(C2,c1))&&alias(C3,null))&&alias(C4,null))&&alias(C5,c1))&&(n1===5))&&(cppNumericCast(syn1,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn2,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0016(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="removeConstants(String... constantsNames), removeConstants(Constant::.. constants), removeAllConstants()";
void 0 /* console diagnostics */;
let c3=keep(new mx.Constant("c3",3));
let c2=keep(new mx.Constant("c2",2));
let c1=keep(new mx.Constant("c1",1));
let e=keep(new mx.Expression("1+2",keep(new mx.Constant("a=5"))));
e.addDefinitions(c1,c2,c3);
e.defineConstant("cx1",cppNumericCast(1,"double"));
e.defineConstant("cx2",cppNumericCast(1,"double"));
e.setExpressionString("1+2");
let syn1=e.checkSyntax();
let n1=e.getConstantsNumber();
e.removeConstants(["asfdf"]);
let syn2=e.getSyntaxStatus();
let n2=e.getConstantsNumber();
e.removeConstants("cx1","cx2");
let n3=e.getConstantsNumber();
let syn3=e.checkSyntax();
e.removeConstants(c1);
let n4=e.getConstantsNumber();
e.removeConstants(c2,c3);
let syn4=e.getSyntaxStatus();
let n5=e.getConstantsNumber();
let syn5=e.checkSyntax();
e.removeAllConstants();
let n6=e.getConstantsNumber();
let syn6=e.getSyntaxStatus();
if((((((((((((n2===n1)&&((n2-n3)===2))&&((n3-n4)===1))&&((n4-n5)===2))&&(n6===0))&&(cppNumericCast(syn1,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn2,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))&&(cppNumericCast(syn3,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn4,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))&&(cppNumericCast(syn5,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn6,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0017(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="addFunctions(Function::.. functions), addFunctions( ListPtr<Function> functionsList), defineFunction(string functionName, string  functionExpressionString,...";
void 0 /* console diagnostics */;
let f4=keep(new mx.Function("f4","4","x"));
let f3=keep(new mx.Function("f3","3","x"));
let f2=keep(new mx.Function("f2","2","x"));
let f1=keep(new mx.Function("f1","1","x"));
let f7=keep(new mx.Function("f7","7","x"));
let f6=keep(new mx.Function("f6","6","x"));
let e=keep(new mx.Expression("1+2"));
let syn1=e.checkSyntax();
e.addDefinitions(f6,f7);
let syn2=e.getSyntaxStatus();
let syn3=e.checkSyntax();
e.addDefinitions(f1,f2,f3,f4,f6);
let syn4=e.getSyntaxStatus();
e.removeDefinitions(f6);
let syn5=e.checkSyntax();
e.defineFunction("ff1","1","x");
let syn6=e.getSyntaxStatus();
if(((((((((((e.getExpressionString()==="1+2")&&(e.getArgumentsNumber()===0))&&(e.getConstantsNumber()===0))&&(e.getFunctionsNumber()===7))&&(cppNumericCast(syn1,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn2,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))&&(cppNumericCast(syn3,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn4,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))&&(cppNumericCast(syn5,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn6,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0018(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="getFunctionIndex(string functionName), getFunction(string functionName), getFunction(int functionIndex), getFunctionsNumber()";
void 0 /* console diagnostics */;
let f4=keep(new mx.Function("f4","4","x"));
let f3=keep(new mx.Function("f3","3","x"));
let f2=keep(new mx.Function("f2","2","x"));
let f1=keep(new mx.Function("f1","1","x"));
let f7=keep(new mx.Function("f7","7","x"));
let f6=keep(new mx.Function("f6","6","x"));
let e=keep(new mx.Expression("1+2"));
e.addDefinitions(f6,f7);
e.addDefinitions(f1,f2,f3,f4,f6);
e.removeDefinitions(f6);
e.defineFunction("ff1","1","x");
let syn1=e.checkSyntax();
let i1=e.getFunctionIndex("asdsa");
let i2=e.getFunctionIndex("f7");
let F1=keep(e.getFunction("asasas"));
let F2=keep(e.getFunction("f1"));
let F3=keep(e.getFunction((-1)));
let F4=keep(e.getFunction(23));
let F5=keep(e.getFunction(0));
let n1=e.getFunctionsNumber();
let syn2=e.getSyntaxStatus();
if(((((((((((i1===(-1))&&(i2===0))&&alias(F1,null))&&alias(F2,f1))&&alias(F3,null))&&alias(F4,null))&&alias(F5,f7))&&(n1===7))&&(cppNumericCast(syn1,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn2,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0019(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="removeFunctions(String... functionsNames), removeFunctions(Function::.. functions), removeAllFunctions()";
void 0 /* console diagnostics */;
let f4=keep(new mx.Function("f4","4","x"));
let f3=keep(new mx.Function("f3","3","x"));
let f2=keep(new mx.Function("f2","2","x"));
let f1=keep(new mx.Function("f1","1","x"));
let f7=keep(new mx.Function("f7","7","x"));
let f6=keep(new mx.Function("f6","6","x"));
let e=keep(new mx.Expression("1+2"));
e.addDefinitions(f6,f7);
e.addDefinitions(f1,f2,f3,f4,f6);
e.removeDefinitions(f6);
e.defineFunction("ff1","1","x");
e.setExpressionString("1+2");
let syn1=e.checkSyntax();
let n1=e.getFunctionsNumber();
e.removeFunctions(["asfdf"]);
let syn2=e.getSyntaxStatus();
let n2=e.getFunctionsNumber();
e.removeFunctions("f1","f2");
let n3=e.getFunctionsNumber();
let syn3=e.checkSyntax();
e.removeFunctions(f3);
let n4=e.getFunctionsNumber();
e.removeFunctions(f6,f7);
let syn4=e.getSyntaxStatus();
let n5=e.getFunctionsNumber();
let syn5=e.checkSyntax();
e.removeAllFunctions();
let n6=e.getFunctionsNumber();
let syn6=e.getSyntaxStatus();
if((((((((((((n2===n1)&&((n2-n3)===2))&&((n3-n4)===1))&&((n4-n5)===2))&&(n6===0))&&(cppNumericCast(syn1,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn2,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))&&(cppNumericCast(syn3,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn4,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))&&(cppNumericCast(syn5,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(cppNumericCast(syn6,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0020(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="double calculate(), getHelp(), getHelp(string word), getLicense()";
void 0 /* console diagnostics */;
let f4=keep(new mx.Function("f4","4","x"));
let f3=keep(new mx.Function("f3","3","x"));
let f2=keep(new mx.Function("f2","2","x"));
let f1=keep(new mx.Function("f1","1","x"));
let f7=keep(new mx.Function("f7","7","x"));
let f6=keep(new mx.Function("f6","6","x"));
let e=keep(new mx.Expression("1+2"));
e.addDefinitions(f6,f7);
e.addDefinitions(f1,f2,f3,f4,f6);
e.removeDefinitions(f6);
e.defineFunction("ff1","1","x");
e.setExpressionString("1+2");
e.removeFunctions(["asfdf"]);
e.removeFunctions("f1","f2");
e.removeFunctions(f3);
e.removeFunctions(f6,f7);
e.removeAllFunctions();
let syn1=e.checkSyntax();
let d1=e.calculate();
let syn2=e.getSyntaxStatus();
if((((cppNumericCast(syn1,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int"))&&(cppNumericCast(syn2,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))&&(d1===cppNumericCast(3,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0021(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="getCopyOfInitialTokens()";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("1+(2+3)-sin(10)"));
let tokens=keep(e.getCopyOfInitialTokens());
mx.mXparser.consolePrintTokens(tokens);
if(((((((((((((((((((((((((((((((((((((keep(listRead(tokens,"get",[0])).tokenStr==="1")&&(keep(listRead(tokens,"get",[1])).tokenStr==="+"))&&(keep(listRead(tokens,"get",[2])).tokenStr==="("))&&(keep(listRead(tokens,"get",[3])).tokenStr==="2"))&&(keep(listRead(tokens,"get",[4])).tokenStr==="+"))&&(keep(listRead(tokens,"get",[5])).tokenStr==="3"))&&(keep(listRead(tokens,"get",[6])).tokenStr===")"))&&(keep(listRead(tokens,"get",[7])).tokenStr==="-"))&&(keep(listRead(tokens,"get",[8])).tokenStr==="sin"))&&(keep(listRead(tokens,"get",[9])).tokenStr==="("))&&(keep(listRead(tokens,"get",[10])).tokenStr==="10"))&&(keep(listRead(tokens,"get",[11])).tokenStr===")"))&&(keep(listRead(tokens,"get",[0])).tokenTypeId===mx.ParserSymbol.NUMBER_TYPE_ID))&&(keep(listRead(tokens,"get",[1])).tokenTypeId===mx.Operator.TYPE_ID))&&(keep(listRead(tokens,"get",[2])).tokenTypeId===mx.ParserSymbol.TYPE_ID))&&(keep(listRead(tokens,"get",[3])).tokenTypeId===mx.ParserSymbol.NUMBER_TYPE_ID))&&(keep(listRead(tokens,"get",[4])).tokenTypeId===mx.Operator.TYPE_ID))&&(keep(listRead(tokens,"get",[5])).tokenTypeId===mx.ParserSymbol.NUMBER_TYPE_ID))&&(keep(listRead(tokens,"get",[6])).tokenTypeId===mx.ParserSymbol.TYPE_ID))&&(keep(listRead(tokens,"get",[7])).tokenTypeId===mx.Operator.TYPE_ID))&&(keep(listRead(tokens,"get",[8])).tokenTypeId===mx.Function1Arg.TYPE_ID))&&(keep(listRead(tokens,"get",[9])).tokenTypeId===mx.ParserSymbol.TYPE_ID))&&(keep(listRead(tokens,"get",[10])).tokenTypeId===mx.ParserSymbol.NUMBER_TYPE_ID))&&(keep(listRead(tokens,"get",[11])).tokenTypeId===mx.ParserSymbol.TYPE_ID))&&(keep(listRead(tokens,"get",[0])).tokenLevel===0))&&(keep(listRead(tokens,"get",[1])).tokenLevel===0))&&(keep(listRead(tokens,"get",[2])).tokenLevel===1))&&(keep(listRead(tokens,"get",[3])).tokenLevel===1))&&(keep(listRead(tokens,"get",[4])).tokenLevel===1))&&(keep(listRead(tokens,"get",[5])).tokenLevel===1))&&(keep(listRead(tokens,"get",[6])).tokenLevel===1))&&(keep(listRead(tokens,"get",[7])).tokenLevel===0))&&(keep(listRead(tokens,"get",[8])).tokenLevel===1))&&(keep(listRead(tokens,"get",[9])).tokenLevel===2))&&(keep(listRead(tokens,"get",[10])).tokenLevel===2))&&(keep(listRead(tokens,"get",[11])).tokenLevel===2))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0022(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Invalid tokens, getCopyOfInitialTokens()";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("token1+toke2n*sin(token3-t3^t5)^t45+pi-pie+e"));
e.disableImpliedMultiplicationMode();
let tokens=keep(e.getCopyOfInitialTokens());
mx.mXparser.consolePrintTokens(tokens);
if(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((keep(listRead(tokens,"get",[0])).tokenStr==="token1")&&(keep(listRead(tokens,"get",[1])).tokenStr==="+"))&&(keep(listRead(tokens,"get",[2])).tokenStr==="toke2n"))&&(keep(listRead(tokens,"get",[3])).tokenStr==="*"))&&(keep(listRead(tokens,"get",[4])).tokenStr==="sin"))&&(keep(listRead(tokens,"get",[5])).tokenStr==="("))&&(keep(listRead(tokens,"get",[6])).tokenStr==="token3"))&&(keep(listRead(tokens,"get",[7])).tokenStr==="-"))&&(keep(listRead(tokens,"get",[8])).tokenStr==="t3"))&&(keep(listRead(tokens,"get",[9])).tokenStr==="^"))&&(keep(listRead(tokens,"get",[10])).tokenStr==="t5"))&&(keep(listRead(tokens,"get",[11])).tokenStr===")"))&&(keep(listRead(tokens,"get",[12])).tokenStr==="^"))&&(keep(listRead(tokens,"get",[13])).tokenStr==="t45"))&&(keep(listRead(tokens,"get",[14])).tokenStr==="+"))&&(keep(listRead(tokens,"get",[15])).tokenStr==="pi"))&&(keep(listRead(tokens,"get",[16])).tokenStr==="-"))&&(keep(listRead(tokens,"get",[17])).tokenStr==="pie"))&&(keep(listRead(tokens,"get",[18])).tokenStr==="+"))&&(keep(listRead(tokens,"get",[19])).tokenStr==="e"))&&(keep(listRead(tokens,"get",[0])).tokenTypeId===mx.Token.NOT_MATCHED))&&(keep(listRead(tokens,"get",[1])).tokenTypeId===mx.Operator.TYPE_ID))&&(keep(listRead(tokens,"get",[2])).tokenTypeId===mx.Token.NOT_MATCHED))&&(keep(listRead(tokens,"get",[3])).tokenTypeId===mx.Operator.TYPE_ID))&&(keep(listRead(tokens,"get",[4])).tokenTypeId===mx.Function1Arg.TYPE_ID))&&(keep(listRead(tokens,"get",[5])).tokenTypeId===mx.ParserSymbol.TYPE_ID))&&(keep(listRead(tokens,"get",[6])).tokenTypeId===mx.Token.NOT_MATCHED))&&(keep(listRead(tokens,"get",[7])).tokenTypeId===mx.Operator.TYPE_ID))&&(keep(listRead(tokens,"get",[8])).tokenTypeId===mx.Token.NOT_MATCHED))&&(keep(listRead(tokens,"get",[9])).tokenTypeId===mx.Operator.TYPE_ID))&&(keep(listRead(tokens,"get",[10])).tokenTypeId===mx.Token.NOT_MATCHED))&&(keep(listRead(tokens,"get",[11])).tokenTypeId===mx.ParserSymbol.TYPE_ID))&&(keep(listRead(tokens,"get",[12])).tokenTypeId===mx.Operator.TYPE_ID))&&(keep(listRead(tokens,"get",[13])).tokenTypeId===mx.Token.NOT_MATCHED))&&(keep(listRead(tokens,"get",[14])).tokenTypeId===mx.Operator.TYPE_ID))&&(keep(listRead(tokens,"get",[15])).tokenTypeId===mx.ConstantValue.TYPE_ID))&&(keep(listRead(tokens,"get",[16])).tokenTypeId===mx.Operator.TYPE_ID))&&(keep(listRead(tokens,"get",[17])).tokenTypeId===mx.Token.NOT_MATCHED))&&(keep(listRead(tokens,"get",[18])).tokenTypeId===mx.Operator.TYPE_ID))&&(keep(listRead(tokens,"get",[19])).tokenTypeId===mx.ConstantValue.TYPE_ID))&&(keep(listRead(tokens,"get",[0])).tokenLevel===0))&&(keep(listRead(tokens,"get",[1])).tokenLevel===0))&&(keep(listRead(tokens,"get",[2])).tokenLevel===0))&&(keep(listRead(tokens,"get",[3])).tokenLevel===0))&&(keep(listRead(tokens,"get",[4])).tokenLevel===1))&&(keep(listRead(tokens,"get",[5])).tokenLevel===2))&&(keep(listRead(tokens,"get",[6])).tokenLevel===2))&&(keep(listRead(tokens,"get",[7])).tokenLevel===2))&&(keep(listRead(tokens,"get",[8])).tokenLevel===2))&&(keep(listRead(tokens,"get",[9])).tokenLevel===2))&&(keep(listRead(tokens,"get",[10])).tokenLevel===2))&&(keep(listRead(tokens,"get",[11])).tokenLevel===2))&&(keep(listRead(tokens,"get",[12])).tokenLevel===0))&&(keep(listRead(tokens,"get",[13])).tokenLevel===0))&&(keep(listRead(tokens,"get",[14])).tokenLevel===0))&&(keep(listRead(tokens,"get",[15])).tokenLevel===0))&&(keep(listRead(tokens,"get",[16])).tokenLevel===0))&&(keep(listRead(tokens,"get",[17])).tokenLevel===0))&&(keep(listRead(tokens,"get",[18])).tokenLevel===0))&&(keep(listRead(tokens,"get",[19])).tokenLevel===0))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0023(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function Extension - calculate()";
void 0 /* console diagnostics */;
let funExt=extensionFixture(mx,"FunExt");
let ff=keep(new mx.Function("ff",nullableExtension(mx,"FunctionExtension",funExt)));
if((ff.calculate(2,3)===cppNumericCast(6,"double"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0024(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="FunctionExtension - setArgumentValue - calculate";
void 0 /* console diagnostics */;
let funExt=extensionFixture(mx,"FunExt");
let ff=keep(new mx.Function("ff",nullableExtension(mx,"FunctionExtension",funExt)));
ff.setArgumentValue(0,cppNumericCast(3,"double"));
ff.setArgumentValue(1,cppNumericCast(4,"double"));
if((ff.calculate()===cppNumericCast(12,"double"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0025(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="FunctionExtension - parameters";
void 0 /* console diagnostics */;
let funExt=extensionFixture(mx,"FunExt");
let ff=keep(new mx.Function("ff",nullableExtension(mx,"FunctionExtension",funExt)));
if((((ff.getParametersNumber()===2)&&(ff.getFunctionBodyType()===mx.Function.BODY_EXTENDED))&&(cppNumericCast(ff.checkSyntax(),"int")===cppNumericCast(mx.Function.NO_SYNTAX_ERRORS,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0026(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="FunctionExtension - calculate";
void 0 /* console diagnostics */;
let funExt=extensionFixture(mx,"FunExt");
let ff=keep(new mx.Function("ff",nullableExtension(mx,"FunctionExtension",funExt)));
let x=keep(new mx.Argument("x = 5"));
let y=keep(new mx.Argument("y = 6"));
if((ff.calculate(x,y)===cppNumericCast(30,"double"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0027(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Invalid tokens looks like, getCopyOfInitialTokens()";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("1pi+2pi3+((_d1(a)+(_d^_g)))))"));
let tokens=keep(e.getCopyOfInitialTokens());
mx.mXparser.consolePrintTokens(tokens);
if(((((((((((((((((((((((((((((keep(listRead(tokens,"get",[0])).tokenStr==="1")&&(keep(listRead(tokens,"get",[1])).tokenStr==="*"))&&(keep(listRead(tokens,"get",[2])).tokenStr==="pi"))&&(keep(listRead(tokens,"get",[3])).tokenStr==="+"))&&(keep(listRead(tokens,"get",[4])).tokenStr==="2"))&&(keep(listRead(tokens,"get",[5])).tokenStr==="*"))&&(keep(listRead(tokens,"get",[6])).tokenStr==="pi3"))&&(keep(listRead(tokens,"get",[7])).tokenStr==="+"))&&(keep(listRead(tokens,"get",[8])).tokenStr==="("))&&(keep(listRead(tokens,"get",[9])).tokenStr==="("))&&(keep(listRead(tokens,"get",[10])).tokenStr==="_d1"))&&(keep(listRead(tokens,"get",[11])).tokenStr==="("))&&(keep(listRead(tokens,"get",[12])).tokenStr==="a"))&&(keep(listRead(tokens,"get",[13])).tokenStr===")"))&&(keep(listRead(tokens,"get",[14])).tokenStr==="+"))&&(keep(listRead(tokens,"get",[15])).tokenStr==="("))&&(keep(listRead(tokens,"get",[16])).tokenStr==="_d"))&&(keep(listRead(tokens,"get",[17])).tokenStr==="^"))&&(keep(listRead(tokens,"get",[18])).tokenStr==="_g"))&&(keep(listRead(tokens,"get",[19])).tokenStr===")"))&&(keep(listRead(tokens,"get",[20])).tokenStr===")"))&&(keep(listRead(tokens,"get",[21])).tokenStr===")"))&&(keep(listRead(tokens,"get",[22])).tokenStr===")"))&&(keep(listRead(tokens,"get",[23])).tokenStr===")"))&&(keep(listRead(tokens,"get",[10])).looksLike==="function"))&&(keep(listRead(tokens,"get",[12])).looksLike==="argument"))&&(keep(listRead(tokens,"get",[16])).looksLike==="argument"))&&(keep(listRead(tokens,"get",[18])).looksLike==="argument"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0028(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="checkSyntax()";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("1+2+3+(4+5)+a+b"));
if(((cppNumericCast(e.checkSyntax(),"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int"))&&(cppNumericCast(e.checkLexSyntax(),"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0029(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="checkSyntax()";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("1+2+3+(4+5)+a)+b"));
if(((cppNumericCast(e.checkSyntax(),"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int"))&&(cppNumericCast(e.checkLexSyntax(),"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0030(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Tokens to remove, removeBuiltinTokens(), unremoveBuiltinTokens(), getBuiltinTokensToRemove(),";
void 0 /* console diagnostics */;
let t=null;
mx.mXparser.removeBuiltinTokens("sin");
mx.mXparser.removeBuiltinTokens("sin");
mx.mXparser.removeBuiltinTokens("cos");
mx.mXparser.removeBuiltinTokens("sin");
mx.mXparser.removeBuiltinTokens("sin","cos",t,"","tg");
mx.mXparser.removeBuiltinTokens(t);
mx.mXparser.unremoveBuiltinTokens(t);
mx.mXparser.unremoveBuiltinTokens(t,"");
mx.mXparser.unremoveBuiltinTokens("sin","tg");
let tokensToRemove1=mx.mXparser.getBuiltinTokensToRemove();
mx.mXparser.unremoveAllBuiltinTokens();
let tokensToRemove2=mx.mXparser.getBuiltinTokensToRemove();
if((((arrayField(tokensToRemove1,"length")===1)&&(arrayRead(tokensToRemove1,[cppNumericCast(0,"unsigned long")])==="cos"))&&(arrayField(tokensToRemove2,"length")===0))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0031(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Tokens to modify, modifyBuiltinToken(), getBuiltinTokensToModify(), getHelp()";
void 0 /* console diagnostics */;
let u=null;
mx.mXparser.modifyBuiltinToken("sin","SIN");
mx.mXparser.modifyBuiltinToken("cos","");
mx.mXparser.modifyBuiltinToken("tan",u);
mx.mXparser.modifyBuiltinToken(u,u);
mx.mXparser.modifyBuiltinToken(u,"TAN");
mx.mXparser.modifyBuiltinToken("tg","TG","NEW TG");
mx.mXparser.modifyBuiltinToken("","TG","NEW TG");
mx.mXparser.modifyBuiltinToken(u,"TG","NEW TG");
mx.mXparser.modifyBuiltinToken("sin","TG","NEW TG");
mx.mXparser.modifyBuiltinToken("cos","COS","NEW COS");
mx.mXparser.modifyBuiltinToken("cos","COS1","NEW COS1");
let help=mx.mXparser.getHelp("COS");
let tokensToModify1=mx.mXparser.getBuiltinTokensToModify();
mx.mXparser.unmodifyBuiltinTokens("",u,"SIN","tg");
let tokensToModify2=mx.mXparser.getBuiltinTokensToModify();
mx.mXparser.unmodifyAllBuiltinTokens();
let tokensToModify3=mx.mXparser.getBuiltinTokensToModify();
if(((((((((((((((((arrayField(tokensToModify1,"rows")===3)&&(arrayField(tokensToModify2,"rows")===1))&&(arrayField(tokensToModify3,"rows")===0))&&(arrayRead(tokensToModify1,[cppNumericCast(0,"unsigned long"),cppNumericCast(0,"unsigned long")])==="sin"))&&(arrayRead(tokensToModify1,[cppNumericCast(0,"unsigned long"),cppNumericCast(1,"unsigned long")])==="SIN"))&&(arrayRead(tokensToModify1,[cppNumericCast(0,"unsigned long"),cppNumericCast(2,"unsigned long")])===null))&&(arrayRead(tokensToModify1,[cppNumericCast(1,"unsigned long"),cppNumericCast(0,"unsigned long")])==="tg"))&&(arrayRead(tokensToModify1,[cppNumericCast(1,"unsigned long"),cppNumericCast(1,"unsigned long")])==="TG"))&&(arrayRead(tokensToModify1,[cppNumericCast(1,"unsigned long"),cppNumericCast(2,"unsigned long")])==="NEW TG"))&&(arrayRead(tokensToModify1,[cppNumericCast(2,"unsigned long"),cppNumericCast(0,"unsigned long")])==="cos"))&&(arrayRead(tokensToModify1,[cppNumericCast(2,"unsigned long"),cppNumericCast(1,"unsigned long")])==="COS"))&&(arrayRead(tokensToModify1,[cppNumericCast(2,"unsigned long"),cppNumericCast(2,"unsigned long")])==="NEW COS"))&&(arrayRead(tokensToModify2,[cppNumericCast(0,"unsigned long"),cppNumericCast(0,"unsigned long")])==="cos"))&&(arrayRead(tokensToModify2,[cppNumericCast(0,"unsigned long"),cppNumericCast(1,"unsigned long")])==="COS"))&&(arrayRead(tokensToModify2,[cppNumericCast(0,"unsigned long"),cppNumericCast(2,"unsigned long")])==="NEW COS"))&&textContains(help,"COS(x)"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0032(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Recursion counter, setMaxAllowedRecursionDepth(), getMaxAllowedRecursionDepth()";
void 0 /* console diagnostics */;
mx.mXparser.setMaxAllowedRecursionDepth(100);
let rc100=mx.mXparser.getMaxAllowedRecursionDepth();
mx.mXparser.setMaxAllowedRecursionDepth(200);
let rc200=mx.mXparser.getMaxAllowedRecursionDepth();
if(((rc100===100)&&(rc200===200))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0033(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Override built-in tokens, setToOverrideBuiltinTokens(), setNotToOverrideBuiltinTokens(), checkIfsetToOverrideBuiltinTokens()";
void 0 /* console diagnostics */;
mx.mXparser.setToOverrideBuiltinTokens();
let over1=mx.mXparser.checkIfsetToOverrideBuiltinTokens();
mx.mXparser.setNotToOverrideBuiltinTokens();
let over2=mx.mXparser.checkIfsetToOverrideBuiltinTokens();
mx.mXparser.setToOverrideBuiltinTokens();
let over3=mx.mXparser.checkIfsetToOverrideBuiltinTokens();
mx.mXparser.setNotToOverrideBuiltinTokens();
let over4=mx.mXparser.checkIfsetToOverrideBuiltinTokens();
if(((((cppNumericCast(over1,"int")===cppNumericCast(true,"int"))&&(cppNumericCast(over2,"int")===cppNumericCast(false,"int")))&&(cppNumericCast(over3,"int")===cppNumericCast(true,"int")))&&(cppNumericCast(over4,"int")===cppNumericCast(false,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0034(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="getKeyWords()";
void 0 /* console diagnostics */;
let keyWords=keep(mx.mXparser.getKeyWords("sin "));
if((((((listRead(keyWords,"size",[])===4)&&(keep(listRead(keyWords,"get",[0])).wordString==="sin"))&&(keep(listRead(keyWords,"get",[1])).wordString==="asin"))&&(keep(listRead(keyWords,"get",[2])).wordString==="arsin"))&&(keep(listRead(keyWords,"get",[3])).wordString==="arcsin"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0035(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="getTokenTypeDescription()";
void 0 /* console diagnostics */;
if((((((((((((((((((mx.Token.getTokenTypeDescription(mx.BinaryRelation.TYPE_ID)===mx.BinaryRelation.TYPE_DESC)&&(mx.Token.getTokenTypeDescription(mx.BitwiseOperator.TYPE_ID)===mx.BitwiseOperator.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.BooleanOperator.TYPE_ID)===mx.BooleanOperator.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.CalculusOperator.TYPE_ID)===mx.CalculusOperator.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.ConstantValue.TYPE_ID)===mx.ConstantValue.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.Function1Arg.TYPE_ID)===mx.Function1Arg.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.Function2Arg.TYPE_ID)===mx.Function2Arg.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.Function3Arg.TYPE_ID)===mx.Function3Arg.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.FunctionVariadic.TYPE_ID)===mx.FunctionVariadic.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.Operator.TYPE_ID)===mx.Operator.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.ParserSymbol.TYPE_ID)===mx.ParserSymbol.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.RandomVariable.TYPE_ID)===mx.RandomVariable.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.Unit.TYPE_ID)===mx.Unit.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.Argument.TYPE_ID)===mx.Argument.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.Constant.TYPE_ID)===mx.Constant.TYPE_DESC))&&(mx.Token.getTokenTypeDescription(mx.RecursiveArgument.TYPE_ID_RECURSIVE)===mx.RecursiveArgument.TYPE_DESC_RECURSIVE))&&(mx.Token.getTokenTypeDescription(mx.Function.TYPE_ID)===mx.Function.TYPE_DESC))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0036(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convOthBase2Decimal()";
void 0 /* console diagnostics */;
if((((((((((((((((((((((((((((((((((((((((mx.NumberTheory.convOthBase2Decimal("11",2)===3)&&(mx.NumberTheory.convOthBase2Decimal("011",2)===3))&&(mx.NumberTheory.convOthBase2Decimal("000011",2)===3))&&(mx.NumberTheory.convOthBase2Decimal("12",3)===5))&&(mx.NumberTheory.convOthBase2Decimal("012",3)===5))&&(mx.NumberTheory.convOthBase2Decimal("0012",3)===5))&&(mx.NumberTheory.convOthBase2Decimal("123",4)===27))&&(mx.NumberTheory.convOthBase2Decimal("0123",4)===27))&&(mx.NumberTheory.convOthBase2Decimal("00123",4)===27))&&(mx.NumberTheory.convOthBase2Decimal("1234",5)===194))&&(mx.NumberTheory.convOthBase2Decimal("01234",5)===194))&&(mx.NumberTheory.convOthBase2Decimal("001234",5)===194))&&(mx.NumberTheory.convOthBase2Decimal("12345",6)===1865))&&(mx.NumberTheory.convOthBase2Decimal("012345",6)===1865))&&(mx.NumberTheory.convOthBase2Decimal("0012345",6)===1865))&&(mx.NumberTheory.convOthBase2Decimal("123456",7)===22875))&&(mx.NumberTheory.convOthBase2Decimal("0123456",7)===22875))&&(mx.NumberTheory.convOthBase2Decimal("00123456",7)===22875))&&(mx.NumberTheory.convOthBase2Decimal("1234567",8)===342391))&&(mx.NumberTheory.convOthBase2Decimal("01234567",8)===342391))&&(mx.NumberTheory.convOthBase2Decimal("01234567",8)===342391))&&(mx.NumberTheory.convOthBase2Decimal("12345678",9)===6053444))&&(mx.NumberTheory.convOthBase2Decimal("012345678",9)===6053444))&&(mx.NumberTheory.convOthBase2Decimal("0012345678",9)===6053444))&&(mx.NumberTheory.convOthBase2Decimal("123456789",10)===123456789))&&(mx.NumberTheory.convOthBase2Decimal("0123456789",10)===123456789))&&(mx.NumberTheory.convOthBase2Decimal("00123456789",10)===123456789))&&(mx.NumberTheory.convOthBase2Decimal("123456789A",11)===2853116705))&&(mx.NumberTheory.convOthBase2Decimal("0123456789A",11)===2853116705))&&(mx.NumberTheory.convOthBase2Decimal("00123456789A",11)===2853116705))&&(mx.NumberTheory.convOthBase2Decimal("123456789Ab",12)===73686780563))&&(mx.NumberTheory.convOthBase2Decimal("0123456789Ab",12)===73686780563))&&(mx.NumberTheory.convOthBase2Decimal("00123456789Ab",12)===73686780563))&&(mx.NumberTheory.convOthBase2Decimal("123456789AbC",13)===2103299351334))&&(mx.NumberTheory.convOthBase2Decimal("0123456789AbC",13)===2103299351334))&&(mx.NumberTheory.convOthBase2Decimal("00123456789AbC",13)===2103299351334))&&(mx.NumberTheory.convOthBase2Decimal("123456789AbCd",14)===65751519677857))&&(mx.NumberTheory.convOthBase2Decimal("0123456789AbCd",14)===65751519677857))&&(mx.NumberTheory.convOthBase2Decimal("00123456789AbCd",14)===65751519677857))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0037(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convOthBase2Decimal() - loop";
void 0 /* console diagnostics */;
(testResult=true);
for(let decimalNumber=(-1000);(decimalNumber<1000);(decimalNumber++)){for(let numeralSystemBase=1;(numeralSystemBase<=36);(numeralSystemBase++)){{
if((mx.NumberTheory.convOthBase2Decimal(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(decimalNumber,"double"),numeralSystemBase),numeralSystemBase)!==cppNumericCast(decimalNumber,"double"))){{
(testResult=false);
break;
}}
}}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0038(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convert2Decimal() and other - special cases";
void 0 /* console diagnostics */;
let dc_1=mx.NumberTheory.digitChar((-1));
let dc37=mx.NumberTheory.digitChar(37);
let di=mx.NumberTheory.digitIndex(" ");
let dec1=mx.NumberTheory.convOthBase2Decimal("",1);
let decNaN1=mx.NumberTheory.convOthBase2Decimal("1101",0);
let decNaN2=mx.NumberTheory.convOthBase2Decimal("1101",37);
let decNaN3=mx.NumberTheory.convOthBase2Decimal(null,3);
let decNaN4=mx.NumberTheory.convOthBase2Decimal("",3);
let decNaN5=mx.NumberTheory.convOthBase2Decimal("1234",4);
let strNaN1=mx.NumberTheory.convDecimal2OthBase(NaN,2);
let strNaN2=mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2,"double"),0);
let strNaN3=mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2,"double"),37);
if(((((((((((((cppNumericCast(characterCodepoint(dc_1),"int")===cppNumericCast(characterCodepoint("?"),"int"))&&(cppNumericCast(characterCodepoint(dc37),"int")===cppNumericCast(characterCodepoint("?"),"int")))&&(di===(-1)))&&(dec1===cppNumericCast(0,"double")))&&Number.isNaN(decNaN1))&&Number.isNaN(decNaN2))&&Number.isNaN(decNaN3))&&Number.isNaN(decNaN4))&&Number.isNaN(decNaN5))&&(strNaN1==="NaN"))&&(strNaN2==="NaN"))&&(strNaN3==="NaN"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0039(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convert2Decimal() - loop";
void 0 /* console diagnostics */;
(testResult=true);
for(let decimalNumber=(-100);(decimalNumber<100);(decimalNumber++)){for(let numeralSystemBase=1;(numeralSystemBase<=36);(numeralSystemBase++)){{
if((mx.NumberTheory.convOthBase2Decimal(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(decimalNumber,"double"),numeralSystemBase,1))!==cppNumericCast(decimalNumber,"double"))){{
(testResult=false);
break;
}}
}}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0040(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convert2Decimal() - loop";
void 0 /* console diagnostics */;
(testResult=true);
for(let decimalNumber=(-100);(decimalNumber<100);(decimalNumber++)){for(let numeralSystemBase=1;(numeralSystemBase<=36);(numeralSystemBase++)){{
if((mx.NumberTheory.convOthBase2Decimal(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(decimalNumber,"double"),numeralSystemBase,2))!==cppNumericCast(decimalNumber,"double"))){{
(testResult=false);
break;
}}
}}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0041(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convert2Decimal() - loop";
void 0 /* console diagnostics */;
(testResult=true);
for(let decimalNumber=(-1000);(decimalNumber<1000);(decimalNumber++)){for(let numeralSystemBase=1;(numeralSystemBase<=36);(numeralSystemBase++)){{
if((mx.NumberTheory.convOthBase2Decimal(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(decimalNumber,"double"),numeralSystemBase,0),numeralSystemBase)!==cppNumericCast(decimalNumber,"double"))){{
(testResult=false);
break;
}}
}}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0042(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="getNumeralSystemBase()";
void 0 /* console diagnostics */;
if(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((mx.NumberTheory.getNumeralSystemBase("h.1234567890aBcDeF")===16)&&(mx.NumberTheory.getNumeralSystemBase("o.12345670")===8))&&(mx.NumberTheory.getNumeralSystemBase("b.101010")===2))&&(mx.NumberTheory.getNumeralSystemBase("b1.")===1))&&(mx.NumberTheory.getNumeralSystemBase("b2.01")===2))&&(mx.NumberTheory.getNumeralSystemBase("b3.012")===3))&&(mx.NumberTheory.getNumeralSystemBase("b4.0123")===4))&&(mx.NumberTheory.getNumeralSystemBase("b5.01234")===5))&&(mx.NumberTheory.getNumeralSystemBase("b6.012345")===6))&&(mx.NumberTheory.getNumeralSystemBase("b7.0123456")===7))&&(mx.NumberTheory.getNumeralSystemBase("b8.01234567")===8))&&(mx.NumberTheory.getNumeralSystemBase("b9.012345678")===9))&&(mx.NumberTheory.getNumeralSystemBase("b10.0123456789")===10))&&(mx.NumberTheory.getNumeralSystemBase("b11.0123456789a")===11))&&(mx.NumberTheory.getNumeralSystemBase("b12.0123456789ab")===12))&&(mx.NumberTheory.getNumeralSystemBase("b13.0123456789abc")===13))&&(mx.NumberTheory.getNumeralSystemBase("b14.0123456789abcd")===14))&&(mx.NumberTheory.getNumeralSystemBase("b15.0123456789abcde")===15))&&(mx.NumberTheory.getNumeralSystemBase("b16.0123456789abcdef")===16))&&(mx.NumberTheory.getNumeralSystemBase("b16.0123456789abcdef")===16))&&(mx.NumberTheory.getNumeralSystemBase("b17.0123456789abcdefg")===17))&&(mx.NumberTheory.getNumeralSystemBase("b18.0123456789abcdefgh")===18))&&(mx.NumberTheory.getNumeralSystemBase("b19.0123456789abcdefghi")===19))&&(mx.NumberTheory.getNumeralSystemBase("b20.0123456789abcdefghij")===20))&&(mx.NumberTheory.getNumeralSystemBase("b21.0123456789abcdefghijk")===21))&&(mx.NumberTheory.getNumeralSystemBase("b22.0123456789abcdefghijkl")===22))&&(mx.NumberTheory.getNumeralSystemBase("b23.0123456789abcdefghijklm")===23))&&(mx.NumberTheory.getNumeralSystemBase("b24.0123456789abcdefghijklmn")===24))&&(mx.NumberTheory.getNumeralSystemBase("b25.0123456789abcdefghijklmno")===25))&&(mx.NumberTheory.getNumeralSystemBase("b26.0123456789abcdefghijklmnop")===26))&&(mx.NumberTheory.getNumeralSystemBase("b27.0123456789abcdefghijklmnopq")===27))&&(mx.NumberTheory.getNumeralSystemBase("b28.0123456789abcdefghijklmnopqr")===28))&&(mx.NumberTheory.getNumeralSystemBase("b29.0123456789abcdefghijklmnopqrs")===29))&&(mx.NumberTheory.getNumeralSystemBase("b30.0123456789abcdefghijklmnopqrst")===30))&&(mx.NumberTheory.getNumeralSystemBase("b31.0123456789abcdefghijklmnopqrstu")===31))&&(mx.NumberTheory.getNumeralSystemBase("b32.0123456789abcdefghijklmnopqrstuv")===32))&&(mx.NumberTheory.getNumeralSystemBase("b33.0123456789abcdefghijklmnopqrstuvw")===33))&&(mx.NumberTheory.getNumeralSystemBase("b34.0123456789abcdefghijklmnopqrstuvwx")===34))&&(mx.NumberTheory.getNumeralSystemBase("b35.0123456789abcdefghijklmnopqrstuvwxy")===35))&&(mx.NumberTheory.getNumeralSystemBase("b36.0123456789abcdefghijklmnopqrstuvwxyz")===36))&&(mx.NumberTheory.getNumeralSystemBase("H.001234567890aBcDeF")===16))&&(mx.NumberTheory.getNumeralSystemBase("O.0012345670")===8))&&(mx.NumberTheory.getNumeralSystemBase("B.000101010")===2))&&(mx.NumberTheory.getNumeralSystemBase("B1.111")===1))&&(mx.NumberTheory.getNumeralSystemBase("B2.0101")===2))&&(mx.NumberTheory.getNumeralSystemBase("B3.0012")===3))&&(mx.NumberTheory.getNumeralSystemBase("B4.00123")===4))&&(mx.NumberTheory.getNumeralSystemBase("B5.001234")===5))&&(mx.NumberTheory.getNumeralSystemBase("B6.0012345")===6))&&(mx.NumberTheory.getNumeralSystemBase("B7.00123456")===7))&&(mx.NumberTheory.getNumeralSystemBase("B8.001234567")===8))&&(mx.NumberTheory.getNumeralSystemBase("B9.0012345678")===9))&&(mx.NumberTheory.getNumeralSystemBase("B10.00123456789")===10))&&(mx.NumberTheory.getNumeralSystemBase("B11.00123456789A")===11))&&(mx.NumberTheory.getNumeralSystemBase("B12.00123456789AB")===12))&&(mx.NumberTheory.getNumeralSystemBase("B13.00123456789ABC")===13))&&(mx.NumberTheory.getNumeralSystemBase("B14.00123456789ABCD")===14))&&(mx.NumberTheory.getNumeralSystemBase("B15.00123456789ABCDE")===15))&&(mx.NumberTheory.getNumeralSystemBase("B16.00123456789ABCDEF")===16))&&(mx.NumberTheory.getNumeralSystemBase("B16.00123456789ABCDEF")===16))&&(mx.NumberTheory.getNumeralSystemBase("B17.00123456789ABCDEFG")===17))&&(mx.NumberTheory.getNumeralSystemBase("B18.00123456789ABCDEFGH")===18))&&(mx.NumberTheory.getNumeralSystemBase("B19.00123456789ABCDEFGI")===19))&&(mx.NumberTheory.getNumeralSystemBase("B20.00123456789ABCDEFGIJ")===20))&&(mx.NumberTheory.getNumeralSystemBase("B21.00123456789ABCDEFGIJK")===21))&&(mx.NumberTheory.getNumeralSystemBase("B22.00123456789ABCDEFGIJKL")===22))&&(mx.NumberTheory.getNumeralSystemBase("B23.00123456789ABCDEFGIJKLM")===23))&&(mx.NumberTheory.getNumeralSystemBase("B24.00123456789ABCDEFGIJKLMN")===24))&&(mx.NumberTheory.getNumeralSystemBase("B25.00123456789ABCDEFGIJKLMNO")===25))&&(mx.NumberTheory.getNumeralSystemBase("B26.00123456789ABCDEFGIJKLMNOP")===26))&&(mx.NumberTheory.getNumeralSystemBase("B27.00123456789ABCDEFGIJKLMNOPQ")===27))&&(mx.NumberTheory.getNumeralSystemBase("B28.00123456789ABCDEFGIJKLMNOPQR")===28))&&(mx.NumberTheory.getNumeralSystemBase("B29.00123456789ABCDEFGIJKLMNOPQRS")===29))&&(mx.NumberTheory.getNumeralSystemBase("B30.00123456789ABCDEFGIJKLMNOPQRST")===30))&&(mx.NumberTheory.getNumeralSystemBase("B31.00123456789ABCDEFGIJKLMNOPQRSTU")===31))&&(mx.NumberTheory.getNumeralSystemBase("B32.00123456789ABCDEFGIJKLMNOPQRSTUV")===32))&&(mx.NumberTheory.getNumeralSystemBase("B33.00123456789ABCDEFGIJKLMNOPQRSTUVW")===33))&&(mx.NumberTheory.getNumeralSystemBase("B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX")===34))&&(mx.NumberTheory.getNumeralSystemBase("B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY")===35))&&(mx.NumberTheory.getNumeralSystemBase("B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ")===36))&&(mx.NumberTheory.getNumeralSystemBase("-h.1234567890aBcDeF")===16))&&(mx.NumberTheory.getNumeralSystemBase("-o.12345670")===8))&&(mx.NumberTheory.getNumeralSystemBase("-b.101010")===2))&&(mx.NumberTheory.getNumeralSystemBase("-b1.")===1))&&(mx.NumberTheory.getNumeralSystemBase("-b2.01")===2))&&(mx.NumberTheory.getNumeralSystemBase("-b3.012")===3))&&(mx.NumberTheory.getNumeralSystemBase("-b4.0123")===4))&&(mx.NumberTheory.getNumeralSystemBase("-b5.01234")===5))&&(mx.NumberTheory.getNumeralSystemBase("-b6.012345")===6))&&(mx.NumberTheory.getNumeralSystemBase("-b7.0123456")===7))&&(mx.NumberTheory.getNumeralSystemBase("-b8.01234567")===8))&&(mx.NumberTheory.getNumeralSystemBase("-b9.012345678")===9))&&(mx.NumberTheory.getNumeralSystemBase("-b10.0123456789")===10))&&(mx.NumberTheory.getNumeralSystemBase("-b11.0123456789a")===11))&&(mx.NumberTheory.getNumeralSystemBase("-b12.0123456789ab")===12))&&(mx.NumberTheory.getNumeralSystemBase("-b13.0123456789abc")===13))&&(mx.NumberTheory.getNumeralSystemBase("-b14.0123456789abcd")===14))&&(mx.NumberTheory.getNumeralSystemBase("-b15.0123456789abcde")===15))&&(mx.NumberTheory.getNumeralSystemBase("-b16.0123456789abcdef")===16))&&(mx.NumberTheory.getNumeralSystemBase("-b16.0123456789abcdef")===16))&&(mx.NumberTheory.getNumeralSystemBase("-b17.0123456789abcdefg")===17))&&(mx.NumberTheory.getNumeralSystemBase("-b18.0123456789abcdefgh")===18))&&(mx.NumberTheory.getNumeralSystemBase("-b19.0123456789abcdefghi")===19))&&(mx.NumberTheory.getNumeralSystemBase("-b20.0123456789abcdefghij")===20))&&(mx.NumberTheory.getNumeralSystemBase("-b21.0123456789abcdefghijk")===21))&&(mx.NumberTheory.getNumeralSystemBase("-b22.0123456789abcdefghijkl")===22))&&(mx.NumberTheory.getNumeralSystemBase("-b23.0123456789abcdefghijklm")===23))&&(mx.NumberTheory.getNumeralSystemBase("-b24.0123456789abcdefghijklmn")===24))&&(mx.NumberTheory.getNumeralSystemBase("-b25.0123456789abcdefghijklmno")===25))&&(mx.NumberTheory.getNumeralSystemBase("-b26.0123456789abcdefghijklmnop")===26))&&(mx.NumberTheory.getNumeralSystemBase("-b27.0123456789abcdefghijklmnopq")===27))&&(mx.NumberTheory.getNumeralSystemBase("-b28.0123456789abcdefghijklmnopqr")===28))&&(mx.NumberTheory.getNumeralSystemBase("-b29.0123456789abcdefghijklmnopqrs")===29))&&(mx.NumberTheory.getNumeralSystemBase("-b30.0123456789abcdefghijklmnopqrst")===30))&&(mx.NumberTheory.getNumeralSystemBase("-b31.0123456789abcdefghijklmnopqrstu")===31))&&(mx.NumberTheory.getNumeralSystemBase("-b32.0123456789abcdefghijklmnopqrstuv")===32))&&(mx.NumberTheory.getNumeralSystemBase("-b33.0123456789abcdefghijklmnopqrstuvw")===33))&&(mx.NumberTheory.getNumeralSystemBase("-b34.0123456789abcdefghijklmnopqrstuvwx")===34))&&(mx.NumberTheory.getNumeralSystemBase("-b35.0123456789abcdefghijklmnopqrstuvwxy")===35))&&(mx.NumberTheory.getNumeralSystemBase("-b36.0123456789abcdefghijklmnopqrstuvwxyz")===36))&&(mx.NumberTheory.getNumeralSystemBase("-H.001234567890aBcDeF")===16))&&(mx.NumberTheory.getNumeralSystemBase("-O.0012345670")===8))&&(mx.NumberTheory.getNumeralSystemBase("-B.000101010")===2))&&(mx.NumberTheory.getNumeralSystemBase("-B1.111")===1))&&(mx.NumberTheory.getNumeralSystemBase("-B2.0101")===2))&&(mx.NumberTheory.getNumeralSystemBase("-B3.0012")===3))&&(mx.NumberTheory.getNumeralSystemBase("-B4.00123")===4))&&(mx.NumberTheory.getNumeralSystemBase("-B5.001234")===5))&&(mx.NumberTheory.getNumeralSystemBase("-B6.0012345")===6))&&(mx.NumberTheory.getNumeralSystemBase("-B7.00123456")===7))&&(mx.NumberTheory.getNumeralSystemBase("-B8.001234567")===8))&&(mx.NumberTheory.getNumeralSystemBase("-B9.0012345678")===9))&&(mx.NumberTheory.getNumeralSystemBase("-B10.00123456789")===10))&&(mx.NumberTheory.getNumeralSystemBase("-B11.00123456789A")===11))&&(mx.NumberTheory.getNumeralSystemBase("-B12.00123456789AB")===12))&&(mx.NumberTheory.getNumeralSystemBase("-B13.00123456789ABC")===13))&&(mx.NumberTheory.getNumeralSystemBase("-B14.00123456789ABCD")===14))&&(mx.NumberTheory.getNumeralSystemBase("-B15.00123456789ABCDE")===15))&&(mx.NumberTheory.getNumeralSystemBase("-B16.00123456789ABCDEF")===16))&&(mx.NumberTheory.getNumeralSystemBase("-B16.00123456789ABCDEF")===16))&&(mx.NumberTheory.getNumeralSystemBase("-B17.00123456789ABCDEFG")===17))&&(mx.NumberTheory.getNumeralSystemBase("-B18.00123456789ABCDEFGH")===18))&&(mx.NumberTheory.getNumeralSystemBase("-B19.00123456789ABCDEFGI")===19))&&(mx.NumberTheory.getNumeralSystemBase("-B20.00123456789ABCDEFGIJ")===20))&&(mx.NumberTheory.getNumeralSystemBase("-B21.00123456789ABCDEFGIJK")===21))&&(mx.NumberTheory.getNumeralSystemBase("-B22.00123456789ABCDEFGIJKL")===22))&&(mx.NumberTheory.getNumeralSystemBase("-B23.00123456789ABCDEFGIJKLM")===23))&&(mx.NumberTheory.getNumeralSystemBase("-B24.00123456789ABCDEFGIJKLMN")===24))&&(mx.NumberTheory.getNumeralSystemBase("-B25.00123456789ABCDEFGIJKLMNO")===25))&&(mx.NumberTheory.getNumeralSystemBase("-B26.00123456789ABCDEFGIJKLMNOP")===26))&&(mx.NumberTheory.getNumeralSystemBase("-B27.00123456789ABCDEFGIJKLMNOPQ")===27))&&(mx.NumberTheory.getNumeralSystemBase("-B28.00123456789ABCDEFGIJKLMNOPQR")===28))&&(mx.NumberTheory.getNumeralSystemBase("-B29.00123456789ABCDEFGIJKLMNOPQRS")===29))&&(mx.NumberTheory.getNumeralSystemBase("-B30.00123456789ABCDEFGIJKLMNOPQRST")===30))&&(mx.NumberTheory.getNumeralSystemBase("-B31.00123456789ABCDEFGIJKLMNOPQRSTU")===31))&&(mx.NumberTheory.getNumeralSystemBase("-B32.00123456789ABCDEFGIJKLMNOPQRSTUV")===32))&&(mx.NumberTheory.getNumeralSystemBase("-B33.00123456789ABCDEFGIJKLMNOPQRSTUVW")===33))&&(mx.NumberTheory.getNumeralSystemBase("-B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX")===34))&&(mx.NumberTheory.getNumeralSystemBase("-B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY")===35))&&(mx.NumberTheory.getNumeralSystemBase("-B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ")===36))&&(mx.NumberTheory.getNumeralSystemBase("+h.1234567890aBcDeF")===16))&&(mx.NumberTheory.getNumeralSystemBase("+o.12345670")===8))&&(mx.NumberTheory.getNumeralSystemBase("+b.101010")===2))&&(mx.NumberTheory.getNumeralSystemBase("+b1.")===1))&&(mx.NumberTheory.getNumeralSystemBase("+b2.01")===2))&&(mx.NumberTheory.getNumeralSystemBase("+b3.012")===3))&&(mx.NumberTheory.getNumeralSystemBase("+b4.0123")===4))&&(mx.NumberTheory.getNumeralSystemBase("+b5.01234")===5))&&(mx.NumberTheory.getNumeralSystemBase("+b6.012345")===6))&&(mx.NumberTheory.getNumeralSystemBase("+b7.0123456")===7))&&(mx.NumberTheory.getNumeralSystemBase("+b8.01234567")===8))&&(mx.NumberTheory.getNumeralSystemBase("+b9.012345678")===9))&&(mx.NumberTheory.getNumeralSystemBase("+b10.0123456789")===10))&&(mx.NumberTheory.getNumeralSystemBase("+b11.0123456789a")===11))&&(mx.NumberTheory.getNumeralSystemBase("+b12.0123456789ab")===12))&&(mx.NumberTheory.getNumeralSystemBase("+b13.0123456789abc")===13))&&(mx.NumberTheory.getNumeralSystemBase("+b14.0123456789abcd")===14))&&(mx.NumberTheory.getNumeralSystemBase("+b15.0123456789abcde")===15))&&(mx.NumberTheory.getNumeralSystemBase("+b16.0123456789abcdef")===16))&&(mx.NumberTheory.getNumeralSystemBase("+b16.0123456789abcdef")===16))&&(mx.NumberTheory.getNumeralSystemBase("+b17.0123456789abcdefg")===17))&&(mx.NumberTheory.getNumeralSystemBase("+b18.0123456789abcdefgh")===18))&&(mx.NumberTheory.getNumeralSystemBase("+b19.0123456789abcdefghi")===19))&&(mx.NumberTheory.getNumeralSystemBase("+b20.0123456789abcdefghij")===20))&&(mx.NumberTheory.getNumeralSystemBase("+b21.0123456789abcdefghijk")===21))&&(mx.NumberTheory.getNumeralSystemBase("+b22.0123456789abcdefghijkl")===22))&&(mx.NumberTheory.getNumeralSystemBase("+b23.0123456789abcdefghijklm")===23))&&(mx.NumberTheory.getNumeralSystemBase("+b24.0123456789abcdefghijklmn")===24))&&(mx.NumberTheory.getNumeralSystemBase("+b25.0123456789abcdefghijklmno")===25))&&(mx.NumberTheory.getNumeralSystemBase("+b26.0123456789abcdefghijklmnop")===26))&&(mx.NumberTheory.getNumeralSystemBase("+b27.0123456789abcdefghijklmnopq")===27))&&(mx.NumberTheory.getNumeralSystemBase("+b28.0123456789abcdefghijklmnopqr")===28))&&(mx.NumberTheory.getNumeralSystemBase("+b29.0123456789abcdefghijklmnopqrs")===29))&&(mx.NumberTheory.getNumeralSystemBase("+b30.0123456789abcdefghijklmnopqrst")===30))&&(mx.NumberTheory.getNumeralSystemBase("+b31.0123456789abcdefghijklmnopqrstu")===31))&&(mx.NumberTheory.getNumeralSystemBase("+b32.0123456789abcdefghijklmnopqrstuv")===32))&&(mx.NumberTheory.getNumeralSystemBase("+b33.0123456789abcdefghijklmnopqrstuvw")===33))&&(mx.NumberTheory.getNumeralSystemBase("+b34.0123456789abcdefghijklmnopqrstuvwx")===34))&&(mx.NumberTheory.getNumeralSystemBase("+b35.0123456789abcdefghijklmnopqrstuvwxy")===35))&&(mx.NumberTheory.getNumeralSystemBase("+b36.0123456789abcdefghijklmnopqrstuvwxyz")===36))&&(mx.NumberTheory.getNumeralSystemBase("+H.001234567890aBcDeF")===16))&&(mx.NumberTheory.getNumeralSystemBase("+O.0012345670")===8))&&(mx.NumberTheory.getNumeralSystemBase("+B.000101010")===2))&&(mx.NumberTheory.getNumeralSystemBase("+B1.111")===1))&&(mx.NumberTheory.getNumeralSystemBase("+B2.0101")===2))&&(mx.NumberTheory.getNumeralSystemBase("+B3.0012")===3))&&(mx.NumberTheory.getNumeralSystemBase("+B4.00123")===4))&&(mx.NumberTheory.getNumeralSystemBase("+B5.001234")===5))&&(mx.NumberTheory.getNumeralSystemBase("+B6.0012345")===6))&&(mx.NumberTheory.getNumeralSystemBase("+B7.00123456")===7))&&(mx.NumberTheory.getNumeralSystemBase("+B8.001234567")===8))&&(mx.NumberTheory.getNumeralSystemBase("+B9.0012345678")===9))&&(mx.NumberTheory.getNumeralSystemBase("+B10.00123456789")===10))&&(mx.NumberTheory.getNumeralSystemBase("+B11.00123456789A")===11))&&(mx.NumberTheory.getNumeralSystemBase("+B12.00123456789AB")===12))&&(mx.NumberTheory.getNumeralSystemBase("+B13.00123456789ABC")===13))&&(mx.NumberTheory.getNumeralSystemBase("+B14.00123456789ABCD")===14))&&(mx.NumberTheory.getNumeralSystemBase("+B15.00123456789ABCDE")===15))&&(mx.NumberTheory.getNumeralSystemBase("+B16.00123456789ABCDEF")===16))&&(mx.NumberTheory.getNumeralSystemBase("+B16.00123456789ABCDEF")===16))&&(mx.NumberTheory.getNumeralSystemBase("+B17.00123456789ABCDEFG")===17))&&(mx.NumberTheory.getNumeralSystemBase("+B18.00123456789ABCDEFGH")===18))&&(mx.NumberTheory.getNumeralSystemBase("+B19.00123456789ABCDEFGI")===19))&&(mx.NumberTheory.getNumeralSystemBase("+B20.00123456789ABCDEFGIJ")===20))&&(mx.NumberTheory.getNumeralSystemBase("+B21.00123456789ABCDEFGIJK")===21))&&(mx.NumberTheory.getNumeralSystemBase("+B22.00123456789ABCDEFGIJKL")===22))&&(mx.NumberTheory.getNumeralSystemBase("+B23.00123456789ABCDEFGIJKLM")===23))&&(mx.NumberTheory.getNumeralSystemBase("+B24.00123456789ABCDEFGIJKLMN")===24))&&(mx.NumberTheory.getNumeralSystemBase("+B25.00123456789ABCDEFGIJKLMNO")===25))&&(mx.NumberTheory.getNumeralSystemBase("+B26.00123456789ABCDEFGIJKLMNOP")===26))&&(mx.NumberTheory.getNumeralSystemBase("+B27.00123456789ABCDEFGIJKLMNOPQ")===27))&&(mx.NumberTheory.getNumeralSystemBase("+B28.00123456789ABCDEFGIJKLMNOPQR")===28))&&(mx.NumberTheory.getNumeralSystemBase("+B29.00123456789ABCDEFGIJKLMNOPQRS")===29))&&(mx.NumberTheory.getNumeralSystemBase("+B30.00123456789ABCDEFGIJKLMNOPQRST")===30))&&(mx.NumberTheory.getNumeralSystemBase("+B31.00123456789ABCDEFGIJKLMNOPQRSTU")===31))&&(mx.NumberTheory.getNumeralSystemBase("+B32.00123456789ABCDEFGIJKLMNOPQRSTUV")===32))&&(mx.NumberTheory.getNumeralSystemBase("+B33.00123456789ABCDEFGIJKLMNOPQRSTUVW")===33))&&(mx.NumberTheory.getNumeralSystemBase("+B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX")===34))&&(mx.NumberTheory.getNumeralSystemBase("+B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY")===35))&&(mx.NumberTheory.getNumeralSystemBase("+B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ")===36))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0043(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convOthBase2Decimal()";
void 0 /* console diagnostics */;
if(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((mx.NumberTheory.convOthBase2Decimal("b1.")===cppNumericCast(0,"double"))&&(mx.NumberTheory.convOthBase2Decimal("b1.111")===cppNumericCast(3,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b2.101")===cppNumericCast(5,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b3.121")===cppNumericCast(16,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b4.123")===cppNumericCast(27,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b5.341")===cppNumericCast(96,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b6.352")===cppNumericCast(140,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b7.256")===cppNumericCast(139,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b8.376")===cppNumericCast(254,"double")))&&(mx.NumberTheory.convOthBase2Decimal("o.376")===cppNumericCast(254,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b.101")===cppNumericCast(5,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b9.821")===cppNumericCast(667,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b10.394")===cppNumericCast(394,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b11.3A7")===cppNumericCast(480,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b12.A5B")===cppNumericCast(1511,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b13.ACB")===cppNumericCast(1857,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b14.2AD")===cppNumericCast(545,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b15.BE4")===cppNumericCast(2689,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b16.FA2")===cppNumericCast(4002,"double")))&&(mx.NumberTheory.convOthBase2Decimal("h.FA2")===cppNumericCast(4002,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b17.AG6")===cppNumericCast(3168,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b18.FGH")===cppNumericCast(5165,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b19.2I3")===cppNumericCast(1067,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b20.9CJ")===cppNumericCast(3859,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b21.K5F")===cppNumericCast(8940,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b22.FL5")===cppNumericCast(7727,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b23.1AM")===cppNumericCast(781,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b24.5ND")===cppNumericCast(3445,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b25.5ND5C")===cppNumericCast(2320762,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b26.3KPB5")===cppNumericCast(1739639,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b27.IQH67")===cppNumericCast(10090258,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b28.RKHB2")===cppNumericCast(17048390,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b29.8BIFS")===cppNumericCast(5942128,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b30.2TGJB")===cppNumericCast(2417981,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b31.6PUC0")===cppNumericCast(6315103,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b32.C0PV0")===cppNumericCast(12609504,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b33.V000W")===cppNumericCast(36763583,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b34.NP2XW")===cppNumericCast(31721794,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b35.120Y0")===cppNumericCast(1587565,"double")))&&(mx.NumberTheory.convOthBase2Decimal("b36.ZZZZZ")===cppNumericCast(60466175,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B1.")===cppNumericCast(0,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B1.111")===cppNumericCast(3,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B2.00101")===cppNumericCast(5,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B3.00121")===cppNumericCast(16,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B4.00123")===cppNumericCast(27,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B5.00341")===cppNumericCast(96,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B6.00352")===cppNumericCast(140,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B7.00256")===cppNumericCast(139,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B8.00376")===cppNumericCast(254,"double")))&&(mx.NumberTheory.convOthBase2Decimal("O.00376")===cppNumericCast(254,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B.00101")===cppNumericCast(5,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B9.00821")===cppNumericCast(667,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B10.00394")===cppNumericCast(394,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B11.003a7")===cppNumericCast(480,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B12.00a5b")===cppNumericCast(1511,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B13.00acb")===cppNumericCast(1857,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B14.002ad")===cppNumericCast(545,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B15.00be4")===cppNumericCast(2689,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B16.00fa2")===cppNumericCast(4002,"double")))&&(mx.NumberTheory.convOthBase2Decimal("H.00fa2")===cppNumericCast(4002,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B17.00ag6")===cppNumericCast(3168,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B18.00fgh")===cppNumericCast(5165,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B19.002i3")===cppNumericCast(1067,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B20.009cj")===cppNumericCast(3859,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B21.00k5f")===cppNumericCast(8940,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B22.00fl5")===cppNumericCast(7727,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B23.001am")===cppNumericCast(781,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B24.005nd")===cppNumericCast(3445,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B25.005nd5c")===cppNumericCast(2320762,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B26.003kpb5")===cppNumericCast(1739639,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B27.00iqh67")===cppNumericCast(10090258,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B28.00rkhb2")===cppNumericCast(17048390,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B29.008bifs")===cppNumericCast(5942128,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B30.002tgjb")===cppNumericCast(2417981,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B31.006puc0")===cppNumericCast(6315103,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B32.00c0pv0")===cppNumericCast(12609504,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B33.00v000w")===cppNumericCast(36763583,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B34.00np2xw")===cppNumericCast(31721794,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B35.00120y0")===cppNumericCast(1587565,"double")))&&(mx.NumberTheory.convOthBase2Decimal("B36.00zzzzz")===cppNumericCast(60466175,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b1.")===cppNumericCast(0,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b1.111")===cppNumericCast(3,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b2.101")===cppNumericCast(5,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b3.121")===cppNumericCast(16,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b4.123")===cppNumericCast(27,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b5.341")===cppNumericCast(96,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b6.352")===cppNumericCast(140,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b7.256")===cppNumericCast(139,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b8.376")===cppNumericCast(254,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+o.376")===cppNumericCast(254,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b.101")===cppNumericCast(5,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b9.821")===cppNumericCast(667,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b10.394")===cppNumericCast(394,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b11.3A7")===cppNumericCast(480,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b12.A5B")===cppNumericCast(1511,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b13.ACB")===cppNumericCast(1857,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b14.2AD")===cppNumericCast(545,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b15.BE4")===cppNumericCast(2689,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b16.FA2")===cppNumericCast(4002,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+h.FA2")===cppNumericCast(4002,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b17.AG6")===cppNumericCast(3168,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b18.FGH")===cppNumericCast(5165,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b19.2I3")===cppNumericCast(1067,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b20.9CJ")===cppNumericCast(3859,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b21.K5F")===cppNumericCast(8940,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b22.FL5")===cppNumericCast(7727,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b23.1AM")===cppNumericCast(781,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b24.5ND")===cppNumericCast(3445,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b25.5ND5C")===cppNumericCast(2320762,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b26.3KPB5")===cppNumericCast(1739639,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b27.IQH67")===cppNumericCast(10090258,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b28.RKHB2")===cppNumericCast(17048390,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b29.8BIFS")===cppNumericCast(5942128,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b30.2TGJB")===cppNumericCast(2417981,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b31.6PUC0")===cppNumericCast(6315103,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b32.C0PV0")===cppNumericCast(12609504,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b33.V000W")===cppNumericCast(36763583,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b34.NP2XW")===cppNumericCast(31721794,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b35.120Y0")===cppNumericCast(1587565,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+b36.ZZZZZ")===cppNumericCast(60466175,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B1.")===cppNumericCast(0,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B1.111")===cppNumericCast(3,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B2.00101")===cppNumericCast(5,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B3.00121")===cppNumericCast(16,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B4.00123")===cppNumericCast(27,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B5.00341")===cppNumericCast(96,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B6.00352")===cppNumericCast(140,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B7.00256")===cppNumericCast(139,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B8.00376")===cppNumericCast(254,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+O.00376")===cppNumericCast(254,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B.00101")===cppNumericCast(5,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B9.00821")===cppNumericCast(667,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B10.00394")===cppNumericCast(394,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B11.003a7")===cppNumericCast(480,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B12.00a5b")===cppNumericCast(1511,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B13.00acb")===cppNumericCast(1857,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B14.002ad")===cppNumericCast(545,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B15.00be4")===cppNumericCast(2689,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B16.00fa2")===cppNumericCast(4002,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+H.00fa2")===cppNumericCast(4002,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B17.00ag6")===cppNumericCast(3168,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B18.00fgh")===cppNumericCast(5165,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B19.002i3")===cppNumericCast(1067,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B20.009cj")===cppNumericCast(3859,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B21.00k5f")===cppNumericCast(8940,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B22.00fl5")===cppNumericCast(7727,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B23.001am")===cppNumericCast(781,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B24.005nd")===cppNumericCast(3445,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B25.005nd5c")===cppNumericCast(2320762,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B26.003kpb5")===cppNumericCast(1739639,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B27.00iqh67")===cppNumericCast(10090258,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B28.00rkhb2")===cppNumericCast(17048390,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B29.008bifs")===cppNumericCast(5942128,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B30.002tgjb")===cppNumericCast(2417981,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B31.006puc0")===cppNumericCast(6315103,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B32.00c0pv0")===cppNumericCast(12609504,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B33.00v000w")===cppNumericCast(36763583,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B34.00np2xw")===cppNumericCast(31721794,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B35.00120y0")===cppNumericCast(1587565,"double")))&&(mx.NumberTheory.convOthBase2Decimal("+B36.00zzzzz")===cppNumericCast(60466175,"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b1.")===cppNumericCast((-0),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b1.111")===cppNumericCast((-3),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b2.101")===cppNumericCast((-5),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b3.121")===cppNumericCast((-16),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b4.123")===cppNumericCast((-27),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b5.341")===cppNumericCast((-96),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b6.352")===cppNumericCast((-140),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b7.256")===cppNumericCast((-139),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b8.376")===cppNumericCast((-254),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-o.376")===cppNumericCast((-254),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b.101")===cppNumericCast((-5),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b9.821")===cppNumericCast((-667),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b10.394")===cppNumericCast((-394),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b11.3A7")===cppNumericCast((-480),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b12.A5B")===cppNumericCast((-1511),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b13.ACB")===cppNumericCast((-1857),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b14.2AD")===cppNumericCast((-545),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b15.BE4")===cppNumericCast((-2689),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b16.FA2")===cppNumericCast((-4002),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-h.FA2")===cppNumericCast((-4002),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b17.AG6")===cppNumericCast((-3168),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b18.FGH")===cppNumericCast((-5165),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b19.2I3")===cppNumericCast((-1067),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b20.9CJ")===cppNumericCast((-3859),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b21.K5F")===cppNumericCast((-8940),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b22.FL5")===cppNumericCast((-7727),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b23.1AM")===cppNumericCast((-781),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b24.5ND")===cppNumericCast((-3445),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b25.5ND5C")===cppNumericCast((-2320762),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b26.3KPB5")===cppNumericCast((-1739639),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b27.IQH67")===cppNumericCast((-10090258),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b28.RKHB2")===cppNumericCast((-17048390),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b29.8BIFS")===cppNumericCast((-5942128),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b30.2TGJB")===cppNumericCast((-2417981),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b31.6PUC0")===cppNumericCast((-6315103),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b32.C0PV0")===cppNumericCast((-12609504),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b33.V000W")===cppNumericCast((-36763583),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b34.NP2XW")===cppNumericCast((-31721794),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b35.120Y0")===cppNumericCast((-1587565),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-b36.ZZZZZ")===cppNumericCast((-60466175),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B1.")===cppNumericCast((-0),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B1.111")===cppNumericCast((-3),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B2.00101")===cppNumericCast((-5),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B3.00121")===cppNumericCast((-16),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B4.00123")===cppNumericCast((-27),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B5.00341")===cppNumericCast((-96),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B6.00352")===cppNumericCast((-140),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B7.00256")===cppNumericCast((-139),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B8.00376")===cppNumericCast((-254),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-O.00376")===cppNumericCast((-254),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B.00101")===cppNumericCast((-5),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B9.00821")===cppNumericCast((-667),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B10.00394")===cppNumericCast((-394),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B11.003a7")===cppNumericCast((-480),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B12.00a5b")===cppNumericCast((-1511),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B13.00acb")===cppNumericCast((-1857),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B14.002ad")===cppNumericCast((-545),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B15.00be4")===cppNumericCast((-2689),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B16.00fa2")===cppNumericCast((-4002),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-H.00fa2")===cppNumericCast((-4002),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B17.00ag6")===cppNumericCast((-3168),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B18.00fgh")===cppNumericCast((-5165),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B19.002i3")===cppNumericCast((-1067),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B20.009cj")===cppNumericCast((-3859),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B21.00k5f")===cppNumericCast((-8940),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B22.00fl5")===cppNumericCast((-7727),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B23.001am")===cppNumericCast((-781),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B24.005nd")===cppNumericCast((-3445),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B25.005nd5c")===cppNumericCast((-2320762),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B26.003kpb5")===cppNumericCast((-1739639),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B27.00iqh67")===cppNumericCast((-10090258),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B28.00rkhb2")===cppNumericCast((-17048390),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B29.008bifs")===cppNumericCast((-5942128),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B30.002tgjb")===cppNumericCast((-2417981),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B31.006puc0")===cppNumericCast((-6315103),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B32.00c0pv0")===cppNumericCast((-12609504),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B33.00v000w")===cppNumericCast((-36763583),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B34.00np2xw")===cppNumericCast((-31721794),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B35.00120y0")===cppNumericCast((-1587565),"double")))&&(mx.NumberTheory.convOthBase2Decimal("-B36.00zzzzz")===cppNumericCast((-60466175),"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0044(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convDecimal2OthBase()";
void 0 /* console diagnostics */;
if(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((mx.NumberTheory.convDecimal2OthBase(cppNumericCast(0,"double"),1)==="")&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3,"double"),1)==="111"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5,"double"),2)==="101"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(16,"double"),3)==="121"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(27,"double"),4)==="123"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(96,"double"),5)==="341"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(140,"double"),6)==="352"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(139,"double"),7)==="256"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(254,"double"),8)==="376"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(667,"double"),9)==="821"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(394,"double"),10)==="394"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(480,"double"),11)==="3A7"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1511,"double"),12)==="A5B"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1857,"double"),13)==="ACB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(545,"double"),14)==="2AD"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2689,"double"),15)==="BE4"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(4002,"double"),16)==="FA2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3168,"double"),17)==="AG6"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5165,"double"),18)==="FGH"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1067,"double"),19)==="2I3"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3859,"double"),20)==="9CJ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(8940,"double"),21)==="K5F"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(7727,"double"),22)==="FL5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(781,"double"),23)==="1AM"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3445,"double"),24)==="5ND"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2320762,"double"),25)==="5ND5C"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1739639,"double"),26)==="3KPB5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(10090258,"double"),27)==="IQH67"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(17048390,"double"),28)==="RKHB2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5942128,"double"),29)==="8BIFS"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2417981,"double"),30)==="2TGJB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(6315103,"double"),31)==="6PUC0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(12609504,"double"),32)==="C0PV0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(36763583,"double"),33)==="V000W"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(31721794,"double"),34)==="NP2XW"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1587565,"double"),35)==="120Y0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(60466175,"double"),36)==="ZZZZZ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-0),"double"),1)===""))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3),"double"),1)==="-111"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5),"double"),2)==="-101"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-16),"double"),3)==="-121"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-27),"double"),4)==="-123"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-96),"double"),5)==="-341"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-140),"double"),6)==="-352"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-139),"double"),7)==="-256"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-254),"double"),8)==="-376"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-667),"double"),9)==="-821"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-394),"double"),10)==="-394"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-480),"double"),11)==="-3A7"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1511),"double"),12)==="-A5B"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1857),"double"),13)==="-ACB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-545),"double"),14)==="-2AD"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2689),"double"),15)==="-BE4"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-4002),"double"),16)==="-FA2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3168),"double"),17)==="-AG6"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5165),"double"),18)==="-FGH"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1067),"double"),19)==="-2I3"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3859),"double"),20)==="-9CJ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-8940),"double"),21)==="-K5F"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-7727),"double"),22)==="-FL5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-781),"double"),23)==="-1AM"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3445),"double"),24)==="-5ND"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2320762),"double"),25)==="-5ND5C"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1739639),"double"),26)==="-3KPB5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-10090258),"double"),27)==="-IQH67"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-17048390),"double"),28)==="-RKHB2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5942128),"double"),29)==="-8BIFS"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2417981),"double"),30)==="-2TGJB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-6315103),"double"),31)==="-6PUC0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-12609504),"double"),32)==="-C0PV0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-36763583),"double"),33)==="-V000W"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-31721794),"double"),34)==="-NP2XW"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1587565),"double"),35)==="-120Y0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-60466175),"double"),36)==="-ZZZZZ"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0045(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convDecimal2OthBase() - format 0";
void 0 /* console diagnostics */;
if(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((mx.NumberTheory.convDecimal2OthBase(cppNumericCast(0,"double"),1,0)==="")&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3,"double"),1,0)==="111"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5,"double"),2,0)==="101"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(16,"double"),3,0)==="121"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(27,"double"),4,0)==="123"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(96,"double"),5,0)==="341"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(140,"double"),6,0)==="352"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(139,"double"),7,0)==="256"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(254,"double"),8,0)==="376"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(667,"double"),9,0)==="821"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(394,"double"),10,0)==="394"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(480,"double"),11,0)==="3A7"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1511,"double"),12,0)==="A5B"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1857,"double"),13,0)==="ACB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(545,"double"),14,0)==="2AD"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2689,"double"),15,0)==="BE4"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(4002,"double"),16,0)==="FA2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3168,"double"),17,0)==="AG6"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5165,"double"),18,0)==="FGH"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1067,"double"),19,0)==="2I3"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3859,"double"),20,0)==="9CJ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(8940,"double"),21,0)==="K5F"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(7727,"double"),22,0)==="FL5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(781,"double"),23,0)==="1AM"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3445,"double"),24,0)==="5ND"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2320762,"double"),25,0)==="5ND5C"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1739639,"double"),26,0)==="3KPB5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(10090258,"double"),27,0)==="IQH67"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(17048390,"double"),28,0)==="RKHB2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5942128,"double"),29,0)==="8BIFS"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2417981,"double"),30,0)==="2TGJB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(6315103,"double"),31,0)==="6PUC0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(12609504,"double"),32,0)==="C0PV0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(36763583,"double"),33,0)==="V000W"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(31721794,"double"),34,0)==="NP2XW"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1587565,"double"),35,0)==="120Y0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(60466175,"double"),36,0)==="ZZZZZ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-0),"double"),1,0)===""))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3),"double"),1,0)==="-111"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5),"double"),2,0)==="-101"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-16),"double"),3,0)==="-121"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-27),"double"),4,0)==="-123"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-96),"double"),5,0)==="-341"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-140),"double"),6,0)==="-352"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-139),"double"),7,0)==="-256"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-254),"double"),8,0)==="-376"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-667),"double"),9,0)==="-821"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-394),"double"),10,0)==="-394"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-480),"double"),11,0)==="-3A7"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1511),"double"),12,0)==="-A5B"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1857),"double"),13,0)==="-ACB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-545),"double"),14,0)==="-2AD"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2689),"double"),15,0)==="-BE4"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-4002),"double"),16,0)==="-FA2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3168),"double"),17,0)==="-AG6"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5165),"double"),18,0)==="-FGH"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1067),"double"),19,0)==="-2I3"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3859),"double"),20,0)==="-9CJ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-8940),"double"),21,0)==="-K5F"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-7727),"double"),22,0)==="-FL5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-781),"double"),23,0)==="-1AM"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3445),"double"),24,0)==="-5ND"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2320762),"double"),25,0)==="-5ND5C"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1739639),"double"),26,0)==="-3KPB5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-10090258),"double"),27,0)==="-IQH67"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-17048390),"double"),28,0)==="-RKHB2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5942128),"double"),29,0)==="-8BIFS"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2417981),"double"),30,0)==="-2TGJB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-6315103),"double"),31,0)==="-6PUC0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-12609504),"double"),32,0)==="-C0PV0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-36763583),"double"),33,0)==="-V000W"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-31721794),"double"),34,0)==="-NP2XW"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1587565),"double"),35,0)==="-120Y0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-60466175),"double"),36,0)==="-ZZZZZ"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0046(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convDecimal2OthBase() - format 1";
void 0 /* console diagnostics */;
if(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((mx.NumberTheory.convDecimal2OthBase(cppNumericCast(0,"double"),1,1)==="b1.")&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3,"double"),1,1)==="b1.111"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5,"double"),2,1)==="b2.101"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(16,"double"),3,1)==="b3.121"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(27,"double"),4,1)==="b4.123"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(96,"double"),5,1)==="b5.341"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(140,"double"),6,1)==="b6.352"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(139,"double"),7,1)==="b7.256"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(254,"double"),8,1)==="b8.376"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(667,"double"),9,1)==="b9.821"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(394,"double"),10,1)==="b10.394"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(480,"double"),11,1)==="b11.3A7"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1511,"double"),12,1)==="b12.A5B"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1857,"double"),13,1)==="b13.ACB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(545,"double"),14,1)==="b14.2AD"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2689,"double"),15,1)==="b15.BE4"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(4002,"double"),16,1)==="b16.FA2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3168,"double"),17,1)==="b17.AG6"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5165,"double"),18,1)==="b18.FGH"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1067,"double"),19,1)==="b19.2I3"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3859,"double"),20,1)==="b20.9CJ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(8940,"double"),21,1)==="b21.K5F"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(7727,"double"),22,1)==="b22.FL5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(781,"double"),23,1)==="b23.1AM"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3445,"double"),24,1)==="b24.5ND"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2320762,"double"),25,1)==="b25.5ND5C"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1739639,"double"),26,1)==="b26.3KPB5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(10090258,"double"),27,1)==="b27.IQH67"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(17048390,"double"),28,1)==="b28.RKHB2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5942128,"double"),29,1)==="b29.8BIFS"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2417981,"double"),30,1)==="b30.2TGJB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(6315103,"double"),31,1)==="b31.6PUC0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(12609504,"double"),32,1)==="b32.C0PV0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(36763583,"double"),33,1)==="b33.V000W"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(31721794,"double"),34,1)==="b34.NP2XW"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1587565,"double"),35,1)==="b35.120Y0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(60466175,"double"),36,1)==="b36.ZZZZZ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-0),"double"),1,1)==="b1."))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3),"double"),1,1)==="-b1.111"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5),"double"),2,1)==="-b2.101"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-16),"double"),3,1)==="-b3.121"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-27),"double"),4,1)==="-b4.123"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-96),"double"),5,1)==="-b5.341"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-140),"double"),6,1)==="-b6.352"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-139),"double"),7,1)==="-b7.256"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-254),"double"),8,1)==="-b8.376"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-667),"double"),9,1)==="-b9.821"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-394),"double"),10,1)==="-b10.394"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-480),"double"),11,1)==="-b11.3A7"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1511),"double"),12,1)==="-b12.A5B"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1857),"double"),13,1)==="-b13.ACB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-545),"double"),14,1)==="-b14.2AD"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2689),"double"),15,1)==="-b15.BE4"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-4002),"double"),16,1)==="-b16.FA2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3168),"double"),17,1)==="-b17.AG6"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5165),"double"),18,1)==="-b18.FGH"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1067),"double"),19,1)==="-b19.2I3"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3859),"double"),20,1)==="-b20.9CJ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-8940),"double"),21,1)==="-b21.K5F"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-7727),"double"),22,1)==="-b22.FL5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-781),"double"),23,1)==="-b23.1AM"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3445),"double"),24,1)==="-b24.5ND"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2320762),"double"),25,1)==="-b25.5ND5C"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1739639),"double"),26,1)==="-b26.3KPB5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-10090258),"double"),27,1)==="-b27.IQH67"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-17048390),"double"),28,1)==="-b28.RKHB2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5942128),"double"),29,1)==="-b29.8BIFS"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2417981),"double"),30,1)==="-b30.2TGJB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-6315103),"double"),31,1)==="-b31.6PUC0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-12609504),"double"),32,1)==="-b32.C0PV0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-36763583),"double"),33,1)==="-b33.V000W"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-31721794),"double"),34,1)==="-b34.NP2XW"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1587565),"double"),35,1)==="-b35.120Y0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-60466175),"double"),36,1)==="-b36.ZZZZZ"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0047(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convDecimal2OthBase() - format 2";
void 0 /* console diagnostics */;
if(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((mx.NumberTheory.convDecimal2OthBase(cppNumericCast(0,"double"),1,2)==="b1.")&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3,"double"),1,2)==="b1.111"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5,"double"),2,2)==="b.101"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(16,"double"),3,2)==="b3.121"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(27,"double"),4,2)==="b4.123"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(96,"double"),5,2)==="b5.341"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(140,"double"),6,2)==="b6.352"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(139,"double"),7,2)==="b7.256"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(254,"double"),8,2)==="o.376"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(667,"double"),9,2)==="b9.821"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(394,"double"),10,2)==="b10.394"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(480,"double"),11,2)==="b11.3A7"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1511,"double"),12,2)==="b12.A5B"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1857,"double"),13,2)==="b13.ACB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(545,"double"),14,2)==="b14.2AD"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2689,"double"),15,2)==="b15.BE4"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(4002,"double"),16,2)==="h.FA2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3168,"double"),17,2)==="b17.AG6"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5165,"double"),18,2)==="b18.FGH"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1067,"double"),19,2)==="b19.2I3"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3859,"double"),20,2)==="b20.9CJ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(8940,"double"),21,2)==="b21.K5F"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(7727,"double"),22,2)==="b22.FL5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(781,"double"),23,2)==="b23.1AM"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(3445,"double"),24,2)==="b24.5ND"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2320762,"double"),25,2)==="b25.5ND5C"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1739639,"double"),26,2)==="b26.3KPB5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(10090258,"double"),27,2)==="b27.IQH67"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(17048390,"double"),28,2)==="b28.RKHB2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(5942128,"double"),29,2)==="b29.8BIFS"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(2417981,"double"),30,2)==="b30.2TGJB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(6315103,"double"),31,2)==="b31.6PUC0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(12609504,"double"),32,2)==="b32.C0PV0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(36763583,"double"),33,2)==="b33.V000W"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(31721794,"double"),34,2)==="b34.NP2XW"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(1587565,"double"),35,2)==="b35.120Y0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast(60466175,"double"),36,2)==="b36.ZZZZZ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-0),"double"),1,2)==="b1."))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3),"double"),1,2)==="-b1.111"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5),"double"),2,2)==="-b.101"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-16),"double"),3,2)==="-b3.121"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-27),"double"),4,2)==="-b4.123"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-96),"double"),5,2)==="-b5.341"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-140),"double"),6,2)==="-b6.352"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-139),"double"),7,2)==="-b7.256"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-254),"double"),8,2)==="-o.376"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-667),"double"),9,2)==="-b9.821"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-394),"double"),10,2)==="-b10.394"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-480),"double"),11,2)==="-b11.3A7"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1511),"double"),12,2)==="-b12.A5B"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1857),"double"),13,2)==="-b13.ACB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-545),"double"),14,2)==="-b14.2AD"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2689),"double"),15,2)==="-b15.BE4"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-4002),"double"),16,2)==="-h.FA2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3168),"double"),17,2)==="-b17.AG6"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5165),"double"),18,2)==="-b18.FGH"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1067),"double"),19,2)==="-b19.2I3"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3859),"double"),20,2)==="-b20.9CJ"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-8940),"double"),21,2)==="-b21.K5F"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-7727),"double"),22,2)==="-b22.FL5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-781),"double"),23,2)==="-b23.1AM"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-3445),"double"),24,2)==="-b24.5ND"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2320762),"double"),25,2)==="-b25.5ND5C"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1739639),"double"),26,2)==="-b26.3KPB5"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-10090258),"double"),27,2)==="-b27.IQH67"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-17048390),"double"),28,2)==="-b28.RKHB2"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-5942128),"double"),29,2)==="-b29.8BIFS"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-2417981),"double"),30,2)==="-b30.2TGJB"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-6315103),"double"),31,2)==="-b31.6PUC0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-12609504),"double"),32,2)==="-b32.C0PV0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-36763583),"double"),33,2)==="-b33.V000W"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-31721794),"double"),34,2)==="-b34.NP2XW"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-1587565),"double"),35,2)==="-b35.120Y0"))&&(mx.NumberTheory.convDecimal2OthBase(cppNumericCast((-60466175),"double"),36,2)==="-b36.ZZZZZ"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0048(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="convOthBase2Decimal() - special cases";
void 0 /* console diagnostics */;
let potNaN1=mx.NumberTheory.convOthBase2Decimal(null);
let potNaN2=mx.NumberTheory.convOthBase2Decimal("1");
let potNaN3=mx.NumberTheory.convOthBase2Decimal("12");
let potNaN4=mx.NumberTheory.convOthBase2Decimal("b1.123");
let potNaN5=mx.NumberTheory.convOthBase2Decimal("b37.123");
if(((((Number.isNaN(potNaN1)&&Number.isNaN(potNaN2))&&Number.isNaN(potNaN3))&&Number.isNaN(potNaN4))&&Number.isNaN(potNaN5))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0049(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="getMissingUserDefinedArguments()";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("sin(x) + cos(x) + f(x,y) + x + y / z + 2*pi"));
let misArgs=e.getMissingUserDefinedArguments();
if(((((arrayRead(misArgs,[cppNumericCast(0,"unsigned long")])==="x")&&(arrayRead(misArgs,[cppNumericCast(1,"unsigned long")])==="y"))&&(arrayRead(misArgs,[cppNumericCast(2,"unsigned long")])==="z"))&&(arrayField(misArgs,"length")===3))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0050(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="getMissingUserDefinedFunctions()";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("sin(x) + cos(x) + f(x,y) + x + y / z + 2*pi"));
let misFun=e.getMissingUserDefinedFunctions();
if(((arrayRead(misFun,[cppNumericCast(0,"unsigned long")])==="f")&&(arrayField(misFun,"length")===1))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0051(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Default radian / degrees mode";
void 0 /* console diagnostics */;
if(((cppNumericCast(mx.mXparser.checkIfRadiansMode(),"int")===cppNumericCast(true,"int"))&&(cppNumericCast(mx.mXparser.checkIfDegreesMode(),"int")===cppNumericCast(false,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0052(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Set to degrees mode";
void 0 /* console diagnostics */;
mx.mXparser.setDegreesMode();
if(((cppNumericCast(mx.mXparser.checkIfRadiansMode(),"int")===cppNumericCast(false,"int"))&&(cppNumericCast(mx.mXparser.checkIfDegreesMode(),"int")===cppNumericCast(true,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0053(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Set to degrees mode";
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
if(((cppNumericCast(mx.mXparser.checkIfRadiansMode(),"int")===cppNumericCast(true,"int"))&&(cppNumericCast(mx.mXparser.checkIfDegreesMode(),"int")===cppNumericCast(false,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0054(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="roundHalfUp";
void 0 /* console diagnostics */;
if(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((mx.MathFunctions.roundHalfUp(0,0)===0)&&(mx.MathFunctions.roundHalfUp(0,1)===0))&&(mx.MathFunctions.roundHalfUp(0,2)===0))&&(mx.MathFunctions.roundHalfUp(0,100)===0))&&Number.isNaN(mx.MathFunctions.roundHalfUp(0,(-1))))&&(mx.MathFunctions.roundHalfUp(1,0)===1))&&(mx.MathFunctions.roundHalfUp(1,1)===1))&&(mx.MathFunctions.roundHalfUp(1,2)===1))&&(mx.MathFunctions.roundHalfUp(1,100)===1))&&Number.isNaN(mx.MathFunctions.roundHalfUp(1,(-1))))&&(mx.MathFunctions.roundHalfUp(9856,0)===9856))&&(mx.MathFunctions.roundHalfUp(9856,1)===9856))&&(mx.MathFunctions.roundHalfUp(9856,2)===9856))&&(mx.MathFunctions.roundHalfUp(9856,100)===9856))&&Number.isNaN(mx.MathFunctions.roundHalfUp(9856,(-1))))&&(mx.MathFunctions.roundHalfUp(9.8559999999999997E+303,0)===9.8559999999999997E+303))&&(mx.MathFunctions.roundHalfUp(9.8559999999999997E+303,1)===9.8559999999999997E+303))&&(mx.MathFunctions.roundHalfUp(9.8559999999999997E+303,2)===9.8559999999999997E+303))&&(mx.MathFunctions.roundHalfUp(9.8559999999999997E+303,100)===9.8559999999999997E+303))&&Number.isNaN(mx.MathFunctions.roundHalfUp(9.8559999999999997E+303,(-1))))&&(mx.MathFunctions.roundHalfUp((-1),0)===(-1)))&&(mx.MathFunctions.roundHalfUp((-1),1)===(-1)))&&(mx.MathFunctions.roundHalfUp((-1),2)===(-1)))&&(mx.MathFunctions.roundHalfUp((-1),100)===(-1)))&&Number.isNaN(mx.MathFunctions.roundHalfUp((-1),(-1))))&&(mx.MathFunctions.roundHalfUp((-9856),0)===(-9856)))&&(mx.MathFunctions.roundHalfUp((-9856),1)===(-9856)))&&(mx.MathFunctions.roundHalfUp((-9856),2)===(-9856)))&&(mx.MathFunctions.roundHalfUp((-9856),100)===(-9856)))&&Number.isNaN(mx.MathFunctions.roundHalfUp((-9856),(-1))))&&(mx.MathFunctions.roundHalfUp((-9.8559999999999997E+303),0)===(-9.8559999999999997E+303)))&&(mx.MathFunctions.roundHalfUp((-9.8559999999999997E+303),1)===(-9.8559999999999997E+303)))&&(mx.MathFunctions.roundHalfUp((-9.8559999999999997E+303),2)===(-9.8559999999999997E+303)))&&(mx.MathFunctions.roundHalfUp((-9.8559999999999997E+303),100)===(-9.8559999999999997E+303)))&&Number.isNaN(mx.MathFunctions.roundHalfUp((-9.8559999999999997E+303),(-1))))&&(mx.MathFunctions.roundHalfUp(1.0000000000000001E-5,5)===1.0000000000000001E-5))&&(mx.MathFunctions.roundHalfUp(1.0000000000000001E-5,6)===1.0000000000000001E-5))&&(mx.MathFunctions.roundHalfUp(1.0000000000000001E-5,100)===1.0000000000000001E-5))&&(mx.MathFunctions.roundHalfUp(1.0000000000000001E-5,500)===1.0000000000000001E-5))&&(mx.MathFunctions.roundHalfUp(1.0000000000000001E-5,4)===0))&&(mx.MathFunctions.roundHalfUp(1.0000000000000001E-5,3)===0))&&(mx.MathFunctions.roundHalfUp(1.0000000000000001E-5,2)===0))&&(mx.MathFunctions.roundHalfUp(1.0000000000000001E-5,1)===0))&&(mx.MathFunctions.roundHalfUp(1.0000000000000001E-5,0)===0))&&(mx.MathFunctions.roundHalfUp((-1.0000000000000001E-5),5)===(-1.0000000000000001E-5)))&&(mx.MathFunctions.roundHalfUp((-1.0000000000000001E-5),6)===(-1.0000000000000001E-5)))&&(mx.MathFunctions.roundHalfUp((-1.0000000000000001E-5),100)===(-1.0000000000000001E-5)))&&(mx.MathFunctions.roundHalfUp((-1.0000000000000001E-5),500)===(-1.0000000000000001E-5)))&&(mx.MathFunctions.roundHalfUp((-1.0000000000000001E-5),4)===(-0)))&&(mx.MathFunctions.roundHalfUp((-1.0000000000000001E-5),3)===(-0)))&&(mx.MathFunctions.roundHalfUp((-1.0000000000000001E-5),2)===(-0)))&&(mx.MathFunctions.roundHalfUp((-1.0000000000000001E-5),1)===(-0)))&&(mx.MathFunctions.roundHalfUp((-1.0000000000000001E-5),0)===(-0)))&&(mx.MathFunctions.roundHalfUp(10.000000000123,14)===10.000000000123))&&(mx.MathFunctions.roundHalfUp(10.000000000123,13)===10.000000000123))&&(mx.MathFunctions.roundHalfUp(10.000000000123,12)===10.000000000123))&&(mx.MathFunctions.roundHalfUp(10.000000000123,11)===10.00000000012))&&(mx.MathFunctions.roundHalfUp(10.000000000123,10)===10.0000000001))&&(mx.MathFunctions.roundHalfUp(10.000000000123,9)===10))&&(mx.MathFunctions.roundHalfUp(10.000000000123,3)===10))&&(mx.MathFunctions.roundHalfUp(10.000000000123,0)===10))&&(mx.MathFunctions.roundHalfUp((-10.000000000123),14)===(-10.000000000123)))&&(mx.MathFunctions.roundHalfUp((-10.000000000123),13)===(-10.000000000123)))&&(mx.MathFunctions.roundHalfUp((-10.000000000123),12)===(-10.000000000123)))&&(mx.MathFunctions.roundHalfUp((-10.000000000123),11)===(-10.00000000012)))&&(mx.MathFunctions.roundHalfUp((-10.000000000123),10)===(-10.0000000001)))&&(mx.MathFunctions.roundHalfUp((-10.000000000123),9)===(-10)))&&(mx.MathFunctions.roundHalfUp((-10.000000000123),3)===(-10)))&&(mx.MathFunctions.roundHalfUp((-10.000000000123),0)===(-10)))&&(mx.MathFunctions.roundHalfUp(100.444444444445,200)===100.444444444445))&&(mx.MathFunctions.roundHalfUp(100.444444444445,14)===100.444444444445))&&(mx.MathFunctions.roundHalfUp(100.444444444445,13)===100.444444444445))&&(mx.MathFunctions.roundHalfUp(100.444444444445,12)===100.444444444445))&&(mx.MathFunctions.roundHalfUp(100.444444444445,11)===100.44444444445))&&(mx.MathFunctions.roundHalfUp(100.444444444445,10)===100.44444444440001))&&(mx.MathFunctions.roundHalfUp(100.444444444445,9)===100.444444444))&&(mx.MathFunctions.roundHalfUp(100.444444444445,8)===100.44444444))&&(mx.MathFunctions.roundHalfUp(100.444444444445,7)===100.44444439999999))&&(mx.MathFunctions.roundHalfUp(100.444444444445,6)===100.444444))&&(mx.MathFunctions.roundHalfUp(100.444444444445,5)===100.44444))&&(mx.MathFunctions.roundHalfUp(100.444444444445,4)===100.4444))&&(mx.MathFunctions.roundHalfUp(100.444444444445,3)===100.444))&&(mx.MathFunctions.roundHalfUp(100.444444444445,2)===100.44))&&(mx.MathFunctions.roundHalfUp(100.444444444445,1)===100.40000000000001))&&(mx.MathFunctions.roundHalfUp(100.444444444445,0)===100))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),200)===(-100.444444444445)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),14)===(-100.444444444445)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),13)===(-100.444444444445)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),12)===(-100.444444444445)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),11)===(-100.44444444445)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),10)===(-100.44444444440001)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),9)===(-100.444444444)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),8)===(-100.44444444)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),7)===(-100.44444439999999)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),6)===(-100.444444)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),5)===(-100.44444)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),4)===(-100.4444)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),3)===(-100.444)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),2)===(-100.44)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),1)===(-100.40000000000001)))&&(mx.MathFunctions.roundHalfUp((-100.444444444445),0)===(-100)))&&(mx.MathFunctions.roundHalfUp(1234567890.7654321,100)===1234567890.7654321))&&(mx.MathFunctions.roundHalfUp(1234567890.7654321,8)===1234567890.7654321))&&(mx.MathFunctions.roundHalfUp(1234567890.7654321,7)===1234567890.7654321))&&(mx.MathFunctions.roundHalfUp(1234567890.7654321,6)===1234567890.7654319))&&(mx.MathFunctions.roundHalfUp(1234567890.7654321,5)===1234567890.76543))&&(mx.MathFunctions.roundHalfUp(1234567890.7654321,4)===1234567890.7653999))&&(mx.MathFunctions.roundHalfUp(1234567890.7654321,3)===1234567890.7650001))&&(mx.MathFunctions.roundHalfUp(1234567890.7654321,2)===1234567890.77))&&(mx.MathFunctions.roundHalfUp(1234567890.7654321,1)===1234567890.8))&&(mx.MathFunctions.roundHalfUp(1234567890.7654321,0)===1234567891))&&(mx.MathFunctions.roundHalfUp((-1234567890.7654321),100)===(-1234567890.7654321)))&&(mx.MathFunctions.roundHalfUp((-1234567890.7654321),8)===(-1234567890.7654321)))&&(mx.MathFunctions.roundHalfUp((-1234567890.7654321),7)===(-1234567890.7654321)))&&(mx.MathFunctions.roundHalfUp((-1234567890.7654321),6)===(-1234567890.7654319)))&&(mx.MathFunctions.roundHalfUp((-1234567890.7654321),5)===(-1234567890.76543)))&&(mx.MathFunctions.roundHalfUp((-1234567890.7654321),4)===(-1234567890.7653999)))&&(mx.MathFunctions.roundHalfUp((-1234567890.7654321),3)===(-1234567890.7650001)))&&(mx.MathFunctions.roundHalfUp((-1234567890.7654321),2)===(-1234567890.77)))&&(mx.MathFunctions.roundHalfUp((-1234567890.7654321),1)===(-1234567890.8)))&&(mx.MathFunctions.roundHalfUp((-1234567890.7654321),0)===(-1234567891)))&&(mx.MathFunctions.roundHalfUp(5.9999999999,11)===5.9999999999))&&(mx.MathFunctions.roundHalfUp(5.9999999999,10)===5.9999999999))&&(mx.MathFunctions.roundHalfUp(5.9999999999,9)===6))&&(mx.MathFunctions.roundHalfUp(5.9999999999,3)===6))&&(mx.MathFunctions.roundHalfUp(5.9999999999,0)===6))&&(mx.MathFunctions.roundHalfUp((-5.9999999999),11)===(-5.9999999999)))&&(mx.MathFunctions.roundHalfUp((-5.9999999999),10)===(-5.9999999999)))&&(mx.MathFunctions.roundHalfUp((-5.9999999999),9)===(-6)))&&(mx.MathFunctions.roundHalfUp((-5.9999999999),3)===(-6)))&&(mx.MathFunctions.roundHalfUp((-5.9999999999),0)===(-6)))&&(mx.MathFunctions.roundHalfUp(1.2300000000000001E+305,307)===1.2300000000000001E+305))&&(mx.MathFunctions.roundHalfUp(1.2300000000000001E+305,10)===1.2300000000000001E+305))&&(mx.MathFunctions.roundHalfUp(1.2300000000000001E+305,1)===1.2300000000000001E+305))&&(mx.MathFunctions.roundHalfUp(1.2300000000000001E+305,0)===1.2300000000000001E+305))&&(mx.MathFunctions.roundHalfUp((-1.2300000000000001E+305),307)===(-1.2300000000000001E+305)))&&(mx.MathFunctions.roundHalfUp((-1.2300000000000001E+305),10)===(-1.2300000000000001E+305)))&&(mx.MathFunctions.roundHalfUp((-1.2300000000000001E+305),1)===(-1.2300000000000001E+305)))&&(mx.MathFunctions.roundHalfUp((-1.2300000000000001E+305),0)===(-1.2300000000000001E+305)))&&Number.isNaN(mx.MathFunctions.roundHalfUp(NaN,0)))&&(mx.MathFunctions.roundHalfUp(Number.POSITIVE_INFINITY,100)===Number.POSITIVE_INFINITY))&&(mx.MathFunctions.roundHalfUp(Number.NEGATIVE_INFINITY,100)===Number.NEGATIVE_INFINITY))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0055(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="To Mixed fraction";
void 0 /* console diagnostics */;
if((((((((((((((((((((((((((((((((((((((mx.NumberTheory.toMixedFractionString(0)==="0")&&(mx.NumberTheory.toMixedFractionString(1)==="1"))&&(mx.NumberTheory.toMixedFractionString(2)==="2"))&&(mx.NumberTheory.toMixedFractionString(1234567890)==="1234567890"))&&(mx.NumberTheory.toMixedFractionString((-1))==="-1"))&&(mx.NumberTheory.toMixedFractionString((-2))==="-2"))&&(mx.NumberTheory.toMixedFractionString((-1234567890))==="-1234567890"))&&(mx.NumberTheory.toMixedFractionString((1/2))==="1/2"))&&(mx.NumberTheory.toMixedFractionString(((-1)/2))==="-1/2"))&&(mx.NumberTheory.toMixedFractionString((2/3))==="2/3"))&&(mx.NumberTheory.toMixedFractionString(((-2)/3))==="-2/3"))&&(mx.NumberTheory.toMixedFractionString((263/326))==="263/326"))&&(mx.NumberTheory.toMixedFractionString(((-263)/326))==="-263/326"))&&(mx.NumberTheory.toMixedFractionString((2+(5/6)))==="2+5/6"))&&(mx.NumberTheory.toMixedFractionString(((-2)-(5/6)))==="-2-5/6"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast(2,"double")+(263/326)))==="2+263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast((-2),"double")-(263/326)))==="-2-263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast(20,"double")+(263/326)))==="20+263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast((-20),"double")-(263/326)))==="-20-263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast(200,"double")+(263/326)))==="200+263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast((-200),"double")-(263/326)))==="-200-263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast(2000,"double")+(263/326)))==="2000+263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast((-2000),"double")-(263/326)))==="-2000-263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast(20000,"double")+(263/326)))==="20000+263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast((-20000),"double")-(263/326)))==="-20000-263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast(200000,"double")+(263/326)))==="200000+263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast((-200000),"double")-(263/326)))==="-200000-263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast(2000000,"double")+(263/326)))==="2000000+263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast((-2000000),"double")-(263/326)))==="-2000000-263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast(20000000,"double")+(263/326)))==="20000000+263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast((-20000000),"double")-(263/326)))==="-20000000-263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast(200000000,"double")+(263/326)))==="200000000+263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast((-200000000),"double")-(263/326)))==="-200000000-263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast(2000000000,"double")+(263/326)))==="2000000000+263/326"))&&(mx.NumberTheory.toMixedFractionString((cppNumericCast((-2000000000),"double")-(263/326)))==="-2000000000-263/326"))&&(mx.NumberTheory.toMixedFractionString((2.0E+10+(263/326)))==="20000000000+263/326"))&&(mx.NumberTheory.toMixedFractionString(((-2.0E+10)-(263/326)))==="-20000000000-263/326"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0056(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="To fraction";
void 0 /* console diagnostics */;
if((((((((((((((((((((((((((((((((((((((mx.NumberTheory.toFractionString(0)==="0")&&(mx.NumberTheory.toFractionString(1)==="1"))&&(mx.NumberTheory.toFractionString(2)==="2"))&&(mx.NumberTheory.toFractionString(1234567890)==="1234567890"))&&(mx.NumberTheory.toFractionString((-1))==="-1"))&&(mx.NumberTheory.toFractionString((-2))==="-2"))&&(mx.NumberTheory.toFractionString((-1234567890))==="-1234567890"))&&(mx.NumberTheory.toFractionString((1/2))==="1/2"))&&(mx.NumberTheory.toFractionString(((-1)/2))==="-1/2"))&&(mx.NumberTheory.toFractionString((2/3))==="2/3"))&&(mx.NumberTheory.toFractionString(((-2)/3))==="-2/3"))&&(mx.NumberTheory.toFractionString((263/326))==="263/326"))&&(mx.NumberTheory.toFractionString(((-263)/326))==="-263/326"))&&(mx.NumberTheory.toFractionString((17/6))==="17/6"))&&(mx.NumberTheory.toFractionString(((-17)/6))==="-17/6"))&&(mx.NumberTheory.toFractionString((915/326))==="915/326"))&&(mx.NumberTheory.toFractionString(((-915)/326))==="-915/326"))&&(mx.NumberTheory.toFractionString((6783/326))==="6783/326"))&&(mx.NumberTheory.toFractionString(((-6783)/326))==="-6783/326"))&&(mx.NumberTheory.toFractionString((65463/326))==="65463/326"))&&(mx.NumberTheory.toFractionString(((-65463)/326))==="-65463/326"))&&(mx.NumberTheory.toFractionString((652263/326))==="652263/326"))&&(mx.NumberTheory.toFractionString(((-652263)/326))==="-652263/326"))&&(mx.NumberTheory.toFractionString((6520263/326))==="6520263/326"))&&(mx.NumberTheory.toFractionString(((-6520263)/326))==="-6520263/326"))&&(mx.NumberTheory.toFractionString((65200263/326))==="65200263/326"))&&(mx.NumberTheory.toFractionString(((-65200263)/326))==="-65200263/326"))&&(mx.NumberTheory.toFractionString((652000263/326))==="652000263/326"))&&(mx.NumberTheory.toFractionString(((-652000263)/326))==="-652000263/326"))&&(mx.NumberTheory.toFractionString((6520000263/326))==="6520000263/326"))&&(mx.NumberTheory.toFractionString(((-6520000263)/326))==="-6520000263/326"))&&(mx.NumberTheory.toFractionString((65200000263/326))==="65200000263/326"))&&(mx.NumberTheory.toFractionString(((-65200000263)/326))==="-65200000263/326"))&&(mx.NumberTheory.toFractionString((652000000263/326))==="652000000263/326"))&&(mx.NumberTheory.toFractionString(((-652000000263)/326))==="-652000000263/326"))&&(mx.NumberTheory.toFractionString((6520000000263/326))==="6520000000263/326"))&&(mx.NumberTheory.toFractionString(((-6520000000263)/326))==="-6520000000263/326"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0057(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Variadic user function";
void 0 /* console diagnostics */;
let f=keep(new mx.Function("f(...) = sum( i, 1, [npar], par(i) )"));
if((((((f.calculate(1)===cppNumericCast(1,"double"))&&(f.calculate(1,2)===cppNumericCast(3,"double")))&&(f.calculate(1,2,3)===cppNumericCast(6,"double")))&&(f.calculate(1,2,3,4)===cppNumericCast(10,"double")))&&(f.calculate(1,2,3,4,5)===cppNumericCast(15,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0058(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Variadic user function with extension";
void 0 /* console diagnostics */;
let gx=extensionFixture(mx,"FunExtVar");
let g=keep(new mx.Function("g",nullableExtension(mx,"FunctionExtensionVariadic",gx)));
if((((((g.calculate(1)===cppNumericCast(1,"double"))&&(g.calculate(1,2)===cppNumericCast(3,"double")))&&(g.calculate(1,2,3)===cppNumericCast(6,"double")))&&(g.calculate(1,2,3,4)===cppNumericCast(10,"double")))&&(g.calculate(1,2,3,4,5)===cppNumericCast(15,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0059(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Almost int rounding disable / enable";
void 0 /* console diagnostics */;
let u1=mx.mXparser.checkIfAlmostIntRounding();
mx.mXparser.disableAlmostIntRounding();
let u2=mx.mXparser.checkIfAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
let u3=mx.mXparser.checkIfAlmostIntRounding();
if((((cppNumericCast(u1,"int")===cppNumericCast(true,"int"))&&(cppNumericCast(u2,"int")===cppNumericCast(false,"int")))&&(cppNumericCast(u3,"int")===cppNumericCast(true,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0060(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringIndexOutOfBoundsException asking for tokens of empty expression #135";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(""));
let tokens=keep(e.getCopyOfInitialTokens());
if((listRead(tokens,"size",[])===0)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0061(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument check syntax #145";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("AAAAA",730000000));
if((cppNumericCast(x.checkSyntax(),"int")===cppNumericCast(mx.Argument.NO_SYNTAX_ERRORS,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0062(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument check syntax #145";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("AAAAA = 730000000"));
if((cppNumericCast(x.checkSyntax(),"int")===cppNumericCast(mx.Argument.NO_SYNTAX_ERRORS,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0063(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument check syntax #145";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("AAAAA = y*730000000"));
if((cppNumericCast(x.checkSyntax(),"int")===cppNumericCast(mx.Argument.SYNTAX_ERROR,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0064(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument check syntax #145";
void 0 /* console diagnostics */;
let y=keep(new mx.Argument("y",2));
let x=keep(new mx.Argument("AAAAA = y*730000000",[y]));
if((cppNumericCast(x.checkSyntax(),"int")===cppNumericCast(mx.Argument.NO_SYNTAX_ERRORS,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0065(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument check syntax #145";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("f(2)-2 * [ww]+a+[qq1]"));
let units=e.getMissingUserDefinedUnits();
let args=e.getMissingUserDefinedArguments();
let fun=e.getMissingUserDefinedFunctions();
if((((arrayField(units,"length")===2)&&(arrayField(args,"length")===1))&&(arrayField(fun,"length")===1))){if(((arrayRead(units,[cppNumericCast(0,"unsigned long")])==="[ww]")&&(arrayRead(units,[cppNumericCast(1,"unsigned long")])==="[qq1]"))){if(((arrayRead(args,[cppNumericCast(0,"unsigned long")])==="a")&&(arrayRead(fun,[cppNumericCast(0,"unsigned long")])==="f"))){(testResult=true);}}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0066(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Trigonometric functions special values - compared to Math";
void 0 /* console diagnostics */;
(testResult=true);
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListTrig)){keep(sv);{
if((Math.abs((sv.sin-Math.sin(sv.xrad)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
if((Math.abs((sv.cos-Math.cos(sv.xrad)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
if((!Number.isNaN(sv.tan))){if((Math.abs((sv.tan-Math.tan(sv.xrad)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
if((!Number.isNaN(sv.ctan))){if((Math.abs((sv.ctan-(1/Math.tan(sv.xrad))))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
if((!Number.isNaN(sv.sec))){if((Math.abs((sv.sec-(1/Math.cos(sv.xrad))))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
if((!Number.isNaN(sv.csc))){if((Math.abs((sv.csc-(1/Math.sin(sv.xrad))))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0067(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Inverse trigonometric functions special values - compared to Math";
void 0 /* console diagnostics */;
(testResult=true);
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListAsin)){keep(sv);{
if((!Number.isNaN(sv.fv))){if((Math.abs((sv.fv-Math.asin(sv.x)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
}}
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListAcos)){keep(sv);{
if((!Number.isNaN(sv.fv))){if((Math.abs((sv.fv-Math.acos(sv.x)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
}}
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListAtan)){keep(sv);{
if((!Number.isNaN(sv.fv))){if((Math.abs((sv.fv-Math.atan(sv.x)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
}}
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListActan)){keep(sv);{
if((!Number.isNaN(sv.fv))){{
let actan=NaN;
if((sv.x>cppNumericCast(0,"double"))){(actan=Math.atan((1/sv.x)));}else{if((sv.x<cppNumericCast(0,"double"))){(actan=(Math.atan((1/sv.x))+mx.MathConstants.PI));}}
if((Math.abs((sv.fv-actan))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
}}
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListAsec)){keep(sv);{
if((!Number.isNaN(sv.fv))){{
let asec=Math.acos((1/sv.x));
if((Math.abs((sv.fv-asec))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
}}
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListAcsc)){keep(sv);{
if((!Number.isNaN(sv.fv))){{
let acsc=Math.asin((1/sv.x));
if((Math.abs((sv.fv-acsc))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0068(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Trigonometric functions special values - compared to MathFunctions";
void 0 /* console diagnostics */;
(testResult=true);
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListTrig)){keep(sv);{
if((Math.abs((sv.sin-mx.MathFunctions.sin(sv.xrad)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
if((Math.abs((sv.cos-mx.MathFunctions.cos(sv.xrad)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
if((!Number.isNaN(sv.tan))){if((Math.abs((sv.tan-mx.MathFunctions.tan(sv.xrad)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
if((!Number.isNaN(sv.ctan))){if((Math.abs((sv.ctan-mx.MathFunctions.ctan(sv.xrad)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
if((!Number.isNaN(sv.sec))){if((Math.abs((sv.sec-mx.MathFunctions.sec(sv.xrad)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
if((!Number.isNaN(sv.csc))){if((Math.abs((sv.csc-mx.MathFunctions.cosec(sv.xrad)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0069(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Inverse trigonometric functions special values - compared to MathFunctions";
void 0 /* console diagnostics */;
(testResult=true);
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListAsin)){keep(sv);{
if((!Number.isNaN(sv.fv))){if((Math.abs((sv.fv-mx.MathFunctions.asin(sv.x)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
}}
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListAcos)){keep(sv);{
if((!Number.isNaN(sv.fv))){if((Math.abs((sv.fv-mx.MathFunctions.acos(sv.x)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
}}
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListAtan)){keep(sv);{
if((!Number.isNaN(sv.fv))){if((Math.abs((sv.fv-mx.MathFunctions.atan(sv.x)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}}
}}
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListActan)){keep(sv);{
if((!Number.isNaN(sv.fv))){{
let actan=NaN;
(actan=mx.MathFunctions.actan(sv.x));
if((Math.abs((sv.fv-actan))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
}}
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListAsec)){keep(sv);{
if((!Number.isNaN(sv.fv))){{
let asec=mx.MathFunctions.asec(sv.x);
if((Math.abs((sv.fv-asec))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
}}
for(const sv of keep(mx.SpecialValueTrigonometric.valuesListAcsc)){keep(sv);{
if((!Number.isNaN(sv.fv))){{
let acsc=mx.MathFunctions.acosec(sv.x);
if((Math.abs((sv.fv-acsc))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0070(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Sine test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=cppNumericCast((-6),"double");(a<=cppNumericCast(6,"double"));(a+=0.10000000000000001)){{
if((Math.abs((Math.sin(a)-mx.MathFunctions.sin(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0071(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Cosine test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=cppNumericCast((-6),"double");(a<=cppNumericCast(6,"double"));(a+=0.10000000000000001)){{
if((Math.abs((Math.cos(a)-mx.MathFunctions.cos(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0072(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Tangent test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=cppNumericCast((-6),"double");(a<=cppNumericCast(6,"double"));(a+=0.10000000000000001)){{
if((Math.abs((Math.tan(a)-mx.MathFunctions.tan(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0073(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Cotangent test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=cppNumericCast((-6),"double");(a<=cppNumericCast(6,"double"));(a+=0.10000000000000001)){{
if((Math.abs(((1/Math.tan(a))-mx.MathFunctions.ctan(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0074(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Secant test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=cppNumericCast((-6),"double");(a<=cppNumericCast(6,"double"));(a+=0.10000000000000001)){{
if((Math.abs(((1/Math.cos(a))-mx.MathFunctions.sec(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0075(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Cosecant test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=cppNumericCast((-6),"double");(a<=cppNumericCast(6,"double"));(a+=0.10000000000000001)){{
if((Math.abs(((1/Math.sin(a))-mx.MathFunctions.cosec(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0076(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Inverse sine test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=(-0.90000000000000002);(a<=0.90000000000000002);(a+=0.10000000000000001)){{
if((Math.abs((Math.asin(a)-mx.MathFunctions.asin(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0077(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Inverse cosine test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=(-0.90000000000000002);(a<=0.90000000000000002);(a+=0.10000000000000001)){{
if((Math.abs((Math.acos(a)-mx.MathFunctions.acos(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0078(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Inverse tangent test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=cppNumericCast((-5),"double");(a<=cppNumericCast(5,"double"));(a+=0.10000000000000001)){{
if((Math.abs((Math.atan(a)-mx.MathFunctions.atan(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0079(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Inverse ctangent test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=cppNumericCast((-5),"double");(a<=cppNumericCast(5,"double"));(a+=0.10000000000000001)){{
let atan=NaN;
if((a>cppNumericCast(0,"double"))){(atan=Math.atan((cppNumericCast(1,"double")/a)));}else{if((a<cppNumericCast(0,"double"))){(atan=(Math.atan((cppNumericCast(1,"double")/a))+mx.MathConstants.PI));}}
if((Math.abs((atan-mx.MathFunctions.actan(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0080(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Inverse secant test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=(-5.0499999999999998);(a<=5.0499999999999998);(a+=0.10000000000000001)){{
if((Math.abs((Math.acos((cppNumericCast(1,"double")/a))-mx.MathFunctions.asec(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0081(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Inverse cosecant test";
void 0 /* console diagnostics */;
(testResult=true);
for(let a=(-5.0499999999999998);(a<=5.0499999999999998);(a+=0.10000000000000001)){{
if((Math.abs((Math.asin((cppNumericCast(1,"double")/a))-mx.MathFunctions.acosec(a)))>mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON)){(testResult=false);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0082(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument extension test";
void 0 /* console diagnostics */;
(testResult=true);
let piMultArgExt=extensionFixture(mx,"PiMultArgExt");
let pim=keep(new mx.Argument("pim",nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
if((pim.getArgumentBodyType()!==mx.Argument.BODY_EXTENDED)){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0083(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument extension test";
void 0 /* console diagnostics */;
(testResult=true);
let piMultArgExt=extensionFixture(mx,"PiMultArgExt");
let pim=keep(new mx.Argument("pim",nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
if((pim.getArgumentBodyType()!==mx.Argument.BODY_EXTENDED)){(testResult=false);}
pim.setArgumentValue(3);
if((pim.getArgumentBodyType()!==mx.Argument.BODY_RUNTIME)){(testResult=false);}
if((pim.getArgumentValue()!==3)){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0084(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument extension test";
void 0 /* console diagnostics */;
(testResult=true);
let piMultArgExt=extensionFixture(mx,"PiMultArgExt");
let pim=keep(new mx.Argument("pim",nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
if((pim.getArgumentBodyType()!==mx.Argument.BODY_EXTENDED)){(testResult=false);}
pim.setArgumentExpressionString("2+3");
if((pim.getArgumentBodyType()!==mx.Argument.BODY_RUNTIME)){(testResult=false);}
if((pim.getArgumentValue()!==5)){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0085(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=true);
let e=keep(new mx.Expression("2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi"));
if(!((e.getCanonicalExpressionString()==="2.1e2*(.3+0.4)*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi"))){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0086(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=true);
let e=keep(new mx.Expression("2.1a2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi\n"));
if(!((e.getCanonicalExpressionString()==="2.1*a*2.1e2*(.3+0.4)*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi"))){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0087(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2x","2*x"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0088(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xy","2*xy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0089(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xy","2*x*y","x"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0090(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xyzsin(x)cos(x)2(3+4)6","2*x*yz*sin(x)*cos(x)*2*(3+4)*6","x"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0091(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xyz2","2*x*y*z2","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0092(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xyz2","2*x*y*z2","x","y","z"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0093(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xyz2.1","2*x*y*z*2.1","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0094(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xyz2.1e","2*x*y*z*2.1*e","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0095(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xyz2.1e3","2*x*y*z*2.1e3","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0096(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xyzh.1234","2*x*y*z*h.1234","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0097(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2.1xyzh.1234","2.1*x*y*z*h.1234","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0098(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"-2.1xyzh.1234","-2.1*x*y*z*h.1234","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0099(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"1_2_3-2.1xyzh.1234","1_2_3-2.1*x*y*z*h.1234","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0100(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"1_2_3xyzh.1234","1_2_3*x*y*z*h.1234","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0101(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2_3xyzh.1234","2_3*x*y*z*h.1234","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0102(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"b4.0123xyzh.1234","b4.0123*x*y*z*h.1234","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0103(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2.1apipi[h-]2.1e2pi(.3+0.4)[h-]pi.01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi","2.1*a*pi*pi*[h-]*2.1e2*pi*(.3+0.4)*[h-]*pi*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0104(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"xy1_2_3zh.1234","x*y*1_2_3*z*h.1234","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0105(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"xyh.1234z1_2_3","x*y*h.1234*z*1_2_3","x","y"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0106(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"xyh.1234z1_2_3","xy*h.1234*z*1_2_3"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0107(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xx","2*xx"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0108(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xxyy","2*xxyy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0109(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xxyy","2*xx*yy","xx"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0110(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xxyyzsin(xx)cos(xx)2(3+4)6","2*xx*yyz*sin(xx)*cos(xx)*2*(3+4)*6","xx"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0111(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xxyyz2","2*xx*yy*z2","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0112(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xxyyz2","2*xx*yy*z2","xx","yy","z"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0113(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xxyyz2.1","2*xx*yy*z*2.1","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0114(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xxyyz2.1e","2*xx*yy*z*2.1*e","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0115(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xxyyz2.1e3","2*xx*yy*z*2.1e3","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0116(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2xxyyzh.1234","2*xx*yy*z*h.1234","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0117(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2.1xxyyzh.1234","2.1*xx*yy*z*h.1234","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0118(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"-2.1xxyyzh.1234","-2.1*xx*yy*z*h.1234","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0119(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"1_2_3-2.1xxyyzh.1234","1_2_3-2.1*xx*yy*z*h.1234","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0120(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"1_2_3xxyyzh.1234","1_2_3*xx*yy*z*h.1234","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0121(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2_3xxyyzh.1234","2_3*xx*yy*z*h.1234","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0122(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"b4.0123xxyyzh.1234","b4.0123*xx*yy*z*h.1234","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0123(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2.1apipi[h-]2.1e2pi(.3+0.4)[h-]pi.01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi","2.1*a*pi*pi*[h-]*2.1e2*pi*(.3+0.4)*[h-]*pi*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0124(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"xxyy1_2_3zh.1234","xx*yy*1_2_3*z*h.1234","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0125(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"xxyyh.1234z1_2_3","xx*yy*h.1234*z*1_2_3","xx","yy"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0126(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"xxyyh.1234z1_2_3","xxyy*h.1234*z*1_2_3"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0127(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2pi2√√pi","2*pi2*√√pi"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0128(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2pi2√√2pi","2*pi2*√√2*pi"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0129(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication on/off API - global and local";
void 0 /* console diagnostics */;
mx.mXparser.enableImpliedMultiplicationMode();
let e1=keep(new mx.Expression("2pi"));
let global1=mx.mXparser.checkIfImpliedMultiplicationMode();
let local1=e1.checkIfImpliedMultiplicationMode();
mx.mXparser.disableImpliedMultiplicationMode();
let e2=keep(new mx.Expression("2pi"));
let global2=mx.mXparser.checkIfImpliedMultiplicationMode();
let local2=e2.checkIfImpliedMultiplicationMode();
if((((global1&&local1)&&(!global2))&&(!local2))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0130(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Unicode Parser Keywords on/off API - global and local";
void 0 /* console diagnostics */;
mx.mXparser.enableUnicodeBuiltinKeyWordsMode();
let e1=keep(new mx.Expression("2pi"));
let global1=mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode();
let local1=e1.checkIfUnicodeBuiltinKeyWordsMode();
mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
let e2=keep(new mx.Expression("2pi"));
let global2=mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode();
let local2=e2.checkIfUnicodeBuiltinKeyWordsMode();
if((((global1&&local1)&&(!global2))&&(!local2))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0131(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication on/off API - global - check syntax impact";
void 0 /* console diagnostics */;
mx.mXparser.enableImpliedMultiplicationMode();
let e1=keep(new mx.Expression("2pi"));
let syn1=e1.checkSyntax();
mx.mXparser.disableImpliedMultiplicationMode();
let e2=keep(new mx.Expression("2pi"));
let syn2=e2.checkSyntax();
if((syn1&&(!syn2))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0132(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication on/off API - local - check syntax impact";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("2pi"));
e.enableImpliedMultiplicationMode();
let syn1=e.checkSyntax();
e.disableImpliedMultiplicationMode();
let syn2=e.checkSyntax();
if((syn1&&(!syn2))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0133(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Unicode Parser Keywords on/off API - global - check syntax impact";
void 0 /* console diagnostics */;
mx.mXparser.enableUnicodeBuiltinKeyWordsMode();
let e1=keep(new mx.Expression("√π"));
let syn1=e1.checkSyntax();
mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
let e2=keep(new mx.Expression("√π"));
let syn2=e2.checkSyntax();
if((syn1&&(!syn2))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0134(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Unicode Parser Keywords on/off API - local - check syntax impact";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("√π"));
e.enableUnicodeBuiltinKeyWordsMode();
let syn1=e.checkSyntax();
e.disableUnicodeBuiltinKeyWordsMode();
let syn2=e.checkSyntax();
if((syn1&&(!syn2))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0135(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Unicode Parser Keywords on/off API - global - syntax help";
void 0 /* console diagnostics */;
mx.mXparser.enableUnicodeBuiltinKeyWordsMode();
let n1=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
let n2=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
if((n1===(n2+49))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0136(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Unicode Parser Keywords on/off API - local - syntax help";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("2pi"));
e.enableUnicodeBuiltinKeyWordsMode();
let n1=listRead(keep(e.getKeyWords()),"size",[]);
e.disableUnicodeBuiltinKeyWordsMode();
let n2=listRead(keep(e.getKeyWords()),"size",[]);
if((n1===(n2+49))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0137(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Attempt to fix expression string on/off API - global and local";
void 0 /* console diagnostics */;
mx.mXparser.enableAttemptToFixExpStrMode();
let e1=keep(new mx.Expression("-+2++3--3+-4-+5-->6<--7<->8++"));
let global1=mx.mXparser.checkIfAttemptToFixExpStrMode();
let local1=e1.checkIfAttemptToFixExpStrMode();
mx.mXparser.disableAttemptToFixExpStrMode();
let e2=keep(new mx.Expression("-+2++3--3+-4-+5-->6<--7<->8++"));
let global2=mx.mXparser.checkIfAttemptToFixExpStrMode();
let local2=e2.checkIfAttemptToFixExpStrMode();
if((((global1&&local1)&&(!global2))&&(!local2))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0138(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Attempt to fix expression string on/off API - global - check syntax impact";
void 0 /* console diagnostics */;
mx.mXparser.enableAttemptToFixExpStrMode();
let e1=keep(new mx.Expression("-+2++3--3+-4-+5-->6<--7<->8++"));
let syn1=e1.checkSyntax();
mx.mXparser.disableAttemptToFixExpStrMode();
let e2=keep(new mx.Expression("-+2++3--3+-4-+5-->6<--7<->8++"));
let syn2=e2.checkSyntax();
if((syn1&&(!syn2))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0139(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Attempt to fix expression string on/off API - local - check syntax impact";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("-+2++3--3+-4-+5-->6<--7<->8++"));
e.enableAttemptToFixExpStrMode();
let syn1=e.checkSyntax();
e.disableAttemptToFixExpStrMode();
let syn2=e.checkSyntax();
if((syn1&&(!syn2))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0140(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2--3","2+3"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0141(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2++3","2+3"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0142(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2+-3","2-3"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0143(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2-+3","2-3"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0144(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2--3<--4","2+3<--4"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0145(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2--3-->4","2+3-->4"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0146(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"+2--3-->4-","2+3-->4"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0147(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"-2--3-->4+","-2+3-->4"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0148(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="Calc Steps Register - Expression 2*(3+4)+5";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression("2*(3+4)+5"));
let calcStepsRegister=keep(new mx.CalcStepsRegister());
let result=e.calculate(calcStepsRegister);
if((result!==calcStepsRegister.result)){(testResult=false);}
if(!((e.getExpressionString()===calcStepsRegister.expressionStringStart))){(testResult=false);}
if((stringSize(calcStepsRegister.argumentNameStart,true)>cppNumericCast(0,"unsigned long"))){(testResult=false);}
if((stringSize(calcStepsRegister.functionNameStart,true)>cppNumericCast(0,"unsigned long"))){(testResult=false);}
if((listRead(calcStepsRegister.calcStepRecords,"size",[])!==4)){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0149(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="Calc Steps Register - Argument x = 2*(3+4)+5";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x","2*(3+4)+5"));
let calcStepsRegister=keep(new mx.CalcStepsRegister());
let result=x.getArgumentValue(calcStepsRegister);
if((result!==calcStepsRegister.result)){(testResult=false);}
if(!((x.getArgumentName()===calcStepsRegister.argumentNameStart))){(testResult=false);}
if(!((x.getArgumentExpressionString()===calcStepsRegister.expressionStringStart))){(testResult=false);}
if((stringSize(calcStepsRegister.functionNameStart,true)>cppNumericCast(0,"unsigned long"))){(testResult=false);}
if((listRead(calcStepsRegister.calcStepRecords,"size",[])!==4)){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0150(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="Calc Steps Register - Function f(x) = 2*(3+4)+5";
void 0 /* console diagnostics */;
let f=keep(new mx.Function("f(x) = 2*(3+4)+5"));
let calcStepsRegister=keep(new mx.CalcStepsRegister());
let result=calculateWithSteps(f,calcStepsRegister);
if(!((f.getFunctionName()===calcStepsRegister.functionNameStart))){(testResult=false);}
if(!((textTrim(f.getFunctionExpressionString())===calcStepsRegister.expressionStringStart))){(testResult=false);}
if((stringSize(calcStepsRegister.argumentNameStart,true)>cppNumericCast(0,"unsigned long"))){(testResult=false);}
if((listRead(calcStepsRegister.calcStepRecords,"size",[])!==4)){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0151(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="Calc Steps Register - Expression f(x,y)+z+(x*y)/z";
void 0 /* console diagnostics */;
let calcStepsRegister=keep(new mx.CalcStepsRegister());
let x=keep(new mx.Argument("x","2*rList(2,1,3,5,4)"));
let y=keep(new mx.Argument("y = 2*x",[x]));
let z=keep(new mx.Argument("z = 3*y/x",[x,y]));
let f=keep(new mx.Function("f(a,b) = a*b"));
let e=keep(new mx.Expression("f(x,y)+z+(x*y)/z",x,y,z,f));
let result=e.calculate(calcStepsRegister);
if((result!==calcStepsRegister.result)){(testResult=false);}
if(!((e.getExpressionString()===calcStepsRegister.expressionStringStart))){(testResult=false);}
if((stringSize(calcStepsRegister.argumentNameStart,true)>cppNumericCast(0,"unsigned long"))){(testResult=false);}
if((stringSize(calcStepsRegister.functionNameStart,true)>cppNumericCast(0,"unsigned long"))){(testResult=false);}
if((listRead(calcStepsRegister.calcStepRecords,"size",[])!==60)){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0152(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"sum(i, 1, 10, 2*xi)","sum(i,1,10,2*x*i)"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0153(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"sum(i, 1, 10, xi*2)","sum(i,1,10,x*i*2)"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0154(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"sum(i, 1, 10, 2*ix)","sum(i,1,10,2*i*x)"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0155(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"sum(i, 1, 10, ix*2)","sum(i,1,10,i*x*2)"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0156(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"sum(i, 1, 10, 2*xpi)","sum(i,1,10,2*x*pi)"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0157(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"sum(i, 1, 10, xpi*2)","sum(i,1,10,x*pi*2)"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0158(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"sum(i, 1, 10, 2*pix)","sum(i,1,10,2*pi*x)"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0159(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"sum(i, 1, 10, pix*2)","sum(i,1,10,pi*x*2)"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0160(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"300+Caster_Attack*3","300+Cast*e*r_Attack*3"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0161(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"300+Caster_Attack(2)*3","300+Cast*e*r_Attack(2)*3"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0162(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"300+Caster_AttackC(2)*3","300+Cast*e*r_Attack*C(2)*3"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0163(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
mx.mXparser.disableImpliedMultiplicationMode();
(testResult=canonical(mx,keep,"300+Caster_AttackC(2)*3","300+Caster_AttackC(2)*3"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0164(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Serialization / Deserialization: Argument x Bytes";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 3"));
let y=keep(new mx.Argument("y = 2*x",[x]));
mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
let data=mx.SerializationUtils.serializeToBytes(y);
mx.mXparser.consolePrintln();
mx.mXparser.consolePrintln(mx.SerializationUtils.getLastOperationMessage());
let ys=keep(mx.SerializationUtils.deserializeFromBytes(data,mx.Argument));
mx.mXparser.consolePrintln(mx.SerializationUtils.getLastOperationMessage());
mx.SerializationUtils.disableBinarySerialization();
if(!(alias(ys,null))){if(((y.getArgumentName()===ys.getArgumentName())&&(y.getArgumentValue()===ys.getArgumentValue()))){(testResult=true);}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0165(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Serialization / Deserialization: Function x String";
void 0 /* console diagnostics */;
let c=keep(new mx.Constant("c = 3"));
let g=keep(new mx.Function("g(x) = 2*x + c",[c]));
let f=keep(new mx.Function("f(x,y) = g(x)*g(y)",[g]));
mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
let data=mx.SerializationUtils.serializeToString(f);
mx.mXparser.consolePrintln();
mx.mXparser.consolePrintln(mx.SerializationUtils.getLastOperationMessage());
let fs=keep(mx.SerializationUtils.deserializeFromString(data,mx.Function));
mx.mXparser.consolePrintln(mx.SerializationUtils.getLastOperationMessage());
mx.SerializationUtils.disableBinarySerialization();
if(!(alias(fs,null))){if(((f.getFunctionName()===fs.getFunctionName())&&(f.calculate(2,3)===fs.calculate(2,3)))){(testResult=true);}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0166(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Serialization / Deserialization: RecursiveArgument x Bytes";
void 0 /* console diagnostics */;
let fib=keep(new mx.RecursiveArgument("fib(n)= fib(n-1)+fib(n-2)"));
mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
let data=mx.SerializationUtils.serializeToBytes(fib);
mx.mXparser.consolePrintln();
mx.mXparser.consolePrintln(mx.SerializationUtils.getLastOperationMessage());
let fibs=keep(mx.SerializationUtils.deserializeFromBytes(data,mx.RecursiveArgument));
mx.mXparser.consolePrintln(mx.SerializationUtils.getLastOperationMessage());
mx.SerializationUtils.disableBinarySerialization();
fib.addBaseCase(0,cppNumericCast(0,"double"));
fib.addBaseCase(1,cppNumericCast(1,"double"));
if(!(alias(fibs,null))){{
fibs.addBaseCase(0,cppNumericCast(0,"double"));
fibs.addBaseCase(1,cppNumericCast(1,"double"));
if(((fib.getArgumentName()===fibs.getArgumentName())&&(fib.getArgumentValue(cppNumericCast(10,"double"))===fibs.getArgumentValue(cppNumericCast(10,"double"))))){(testResult=true);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0170(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Serialization / Deserialization: Constant x Bytes";
void 0 /* console diagnostics */;
let b=keep(new mx.Constant("b = 5"));
let a=keep(new mx.Constant("a = 2*b",b));
mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
let data=mx.SerializationUtils.serializeToBytes(a);
mx.mXparser.consolePrintln();
mx.mXparser.consolePrintln(mx.SerializationUtils.getLastOperationMessage());
let as=keep(mx.SerializationUtils.deserializeFromBytes(data,mx.Constant));
mx.mXparser.consolePrintln(mx.SerializationUtils.getLastOperationMessage());
mx.SerializationUtils.disableBinarySerialization();
if(!(alias(as,null))){{
if(((a.getConstantName()===as.getConstantName())&&(a.getConstantValue()===as.getConstantValue()))){(testResult=true);}
}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0173(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Disabled serialization: serializeToBytes";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 5"));
mx.SerializationUtils.disableBinarySerialization();
let data=mx.SerializationUtils.serializeToBytes(x);
if((alias(data,null)&&(!mx.SerializationUtils.checkLastOperationWasSuccessful()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0174(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Disabled serialization: serializeToString";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 5"));
mx.SerializationUtils.disableBinarySerialization();
let data=mx.SerializationUtils.serializeToString(x);
if(((data===null)&&(!mx.SerializationUtils.checkLastOperationWasSuccessful()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0176(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Disabled serialization: deserializeFromBytes";
void 0 /* console diagnostics */;
mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
let x=keep(new mx.Argument("x = 5"));
let data=mx.SerializationUtils.serializeToBytes(x);
mx.SerializationUtils.disableBinarySerialization();
let xs=keep(mx.SerializationUtils.deserializeFromBytes(data,mx.Argument));
if(((!(alias(data,null))&&alias(xs,null))&&(!mx.SerializationUtils.checkLastOperationWasSuccessful()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0177(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Disabled serialization: deserializeFromString";
void 0 /* console diagnostics */;
mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
let x=keep(new mx.Argument("x = 5"));
let data=mx.SerializationUtils.serializeToString(x);
mx.SerializationUtils.disableBinarySerialization();
let xs=keep(mx.SerializationUtils.deserializeFromString(data,mx.Argument));
if((((data!==null)&&alias(xs,null))&&(!mx.SerializationUtils.checkLastOperationWasSuccessful()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0179(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="Check all descriptions of keywords - lengths";
void 0 /* console diagnostics */;
let keywords=keep(mx.mXparser.getKeyWords());
for(const kw of keywords){keep(kw);if((stringSize(kw.description,true)<=cppNumericCast(5,"unsigned long"))){{
(testResult=false);
break;
}}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0180(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="Check all descriptions of keywords - type description";
void 0 /* console diagnostics */;
let keywords=keep(mx.mXparser.getKeyWords());
for(const kw of keywords){keep(kw);if((!textContains(textLower(kw.description),textLower(mx.Token.getTokenTypeDescription(kw.wordTypeId))))){{
mx.mXparser.consolePrintln(mx.Token.getTokenTypeDescription(kw.wordTypeId));
mx.mXparser.consolePrintHelp(kw.description);
(testResult=false);
break;
}}}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0181(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Check all parser token types - descriptions";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((mx.BinaryRelation.TYPE_DESC===stringResources.BINARY_RELATION)&&(mx.BitwiseOperator.TYPE_DESC===stringResources.BITWISE_OPERATOR))&&(mx.BooleanOperator.TYPE_DESC===stringResources.BOOLEAN_OPERATOR))&&(mx.CalculusOperator.TYPE_DESC===stringResources.CALCULUS_OPERATOR))&&(mx.ConstantValue.TYPE_DESC===stringResources.CONSTANT_VALUE))&&(mx.Function1Arg.TYPE_DESC===stringResources.FUNCTION_1_ARG))&&(mx.Function2Arg.TYPE_DESC===stringResources.FUNCTION_2_ARG))&&(mx.Function3Arg.TYPE_DESC===stringResources.FUNCTION_3_ARG))&&(mx.FunctionVariadic.TYPE_DESC===stringResources.FUNCTION_VARIADIC))&&(mx.Operator.TYPE_DESC===stringResources.OPERATOR))&&(mx.ParserSymbol.TYPE_DESC===stringResources.PARSER_SYMBOL))&&(mx.RandomVariable.TYPE_DESC===stringResources.RANDOM_VARIABLE))&&(mx.Unit.TYPE_DESC===stringResources.UNIT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0182(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Check all user defined token types - descriptions";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
if((((((mx.Argument.TYPE_DESC===stringResources.USER_DEFINED_ARGUMENT)&&(mx.Constant.TYPE_DESC===stringResources.USER_DEFINED_CONSTANT))&&(mx.Expression.TYPE_DESC===stringResources.USER_DEFINED_EXPRESSION))&&(mx.Function.TYPE_DESC===stringResources.USER_DEFINED_FUNCTION))&&(mx.RecursiveArgument.TYPE_DESC_RECURSIVE===stringResources.USER_DEFINED_RECURSIVE_ARGUMENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0183(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Check all user defined token types - descriptions";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
if((((((mx.Argument.TYPE_DESC===stringResources.USER_DEFINED_ARGUMENT)&&(mx.Constant.TYPE_DESC===stringResources.USER_DEFINED_CONSTANT))&&(mx.Expression.TYPE_DESC===stringResources.USER_DEFINED_EXPRESSION))&&(mx.Function.TYPE_DESC===stringResources.USER_DEFINED_FUNCTION))&&(mx.RecursiveArgument.TYPE_DESC_RECURSIVE===stringResources.USER_DEFINED_RECURSIVE_ARGUMENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0184(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentDefinitionString, PrimitiveElement...elements) - argumentDefinitionstring == nullptr, elements == nullptr";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument(null));
let x=null;
let b=keep(new mx.Argument("b",[x]));
if(((((!a.checkSyntax())&&textContains(a.getErrorMessage(),stringResources.PROVIDED_STRING_IS_NULL))&&(!b.checkSyntax()))&&textContains(b.getErrorMessage(),stringResources.PROVIDED_ELEMENTS_ARE_NULL))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0185(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentDefinitionString, PrimitiveElement...elements) - nameOnlyTokenRegExp";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument("a"));
let b=keep(new mx.Argument("   b   "));
if(((((((((a.getArgumentName()==="a")&&a.checkSyntax())&&(a.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&textContains(a.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&(b.getArgumentName()==="b"))&&b.checkSyntax())&&(b.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&textContains(b.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0186(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentDefinitionString, PrimitiveElement...elements) - constArgDefStrRegExp";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument("a = 2*4"));
let b=keep(new mx.Argument("   b    = 2*a   "));
let c=keep(new mx.Argument("   c    = 2*a   "));
c.addArguments(a);
if((((((((((((((((a.getArgumentName()==="a")&&a.checkSyntax())&&(a.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(a.getArgumentValue()===cppNumericCast(8,"double")))&&textContains(a.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&(b.getArgumentName()==="b"))&&(b.getArgumentExpressionString()==="2*a"))&&textContains(b.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&(b.getArgumentType()===mx.Argument.DEPENDENT_ARGUMENT))&&(!b.checkSyntax()))&&textContains(b.getErrorMessage(),stringResources.INVALID_TOKEN))&&(!textContains(b.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)))&&(c.getArgumentName()==="c"))&&c.checkSyntax())&&textContains(c.getErrorMessage(),stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0187(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentDefinitionString, PrimitiveElement...elements) - incorrect definition string";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument("a+2"));
let b=keep(new mx.Argument("b( = 2   "));
let c=keep(new mx.Argument("   c(x) = 2*x   "));
if(((((((((((((!a.checkSyntax())&&textContains(a.getErrorMessage(),stringResources.INVALID_ARGUMENT_DEFINITION))&&textContains(a.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(a.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!b.checkSyntax()))&&textContains(b.getErrorMessage(),stringResources.INVALID_ARGUMENT_DEFINITION))&&textContains(b.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(b.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!c.checkSyntax()))&&textContains(c.getErrorMessage(),stringResources.INVALID_ARGUMENT_DEFINITION))&&textContains(c.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(c.getErrorMessage(),stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0188(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentDefinitionString, bool forceDependent, PrimitiveElement...elements) - argumentDefinitionstring == nullptr, elements == nullptr";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument(null,true));
let x=null;
let b=keep(new mx.Argument("b",true,x));
if(((((!a.checkSyntax())&&textContains(a.getErrorMessage(),stringResources.PROVIDED_STRING_IS_NULL))&&(!b.checkSyntax()))&&textContains(b.getErrorMessage(),stringResources.PROVIDED_ELEMENTS_ARE_NULL))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0189(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentDefinitionString, bool forceDependent, PrimitiveElement...elements) - nameOnlyTokenRegExp";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument("a",true));
let b=keep(new mx.Argument("   b   ",true));
if(((((((((a.getArgumentName()==="a")&&a.checkSyntax())&&(a.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&textContains(a.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&(b.getArgumentName()==="b"))&&b.checkSyntax())&&(b.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&textContains(b.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0190(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentDefinitionString, bool forceDependent, PrimitiveElement...elements)";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument("a = 2",false));
let b=keep(new mx.Argument("b = 2",true));
if(((((((((a.getArgumentName()==="a")&&textContains(a.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&a.checkSyntax())&&(a.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&textContains(b.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&(b.getArgumentName()==="b"))&&b.checkSyntax())&&(b.getArgumentType()===mx.Argument.DEPENDENT_ARGUMENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0191(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentName, double argumentValue) - argumentName = null";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument(null,2));
if(((((textContains(a.getErrorMessage(),stringResources.PROVIDED_STRING_IS_NULL)&&(!a.checkSyntax()))&&(stringSize(a.getArgumentName(),true)===cppNumericCast(0,"unsigned long")))&&Number.isNaN(a.getArgumentValue()))&&(a.getArgumentType()===mx.Argument.FREE_ARGUMENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0192(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentName, double argumentValue) - invalid argumentName";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument("1",2));
let b=keep(new mx.Argument("x()",2));
let c=keep(new mx.Argument("x(1)",2));
let d=keep(new mx.Argument("x = ",2));
let e=keep(new mx.Argument("1+x",2));
let f=keep(new mx.Argument("1x",2));
if((((((((((((((((((((((((textContains(a.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME)&&textContains(a.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(a.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!a.checkSyntax()))&&textContains(b.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(b.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(b.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!b.checkSyntax()))&&textContains(c.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(c.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(c.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!c.checkSyntax()))&&textContains(d.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(d.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(d.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!d.checkSyntax()))&&textContains(e.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(e.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(e.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!e.checkSyntax()))&&textContains(f.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(f.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(f.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!f.checkSyntax()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0193(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentName, double argumentValue)";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument("a",1));
let a1=keep(new mx.Argument("a1",2));
let a1b=keep(new mx.Argument("a1b",3));
let x=keep(new mx.Argument("   x ",4));
if((((((((((((((((((((((((textContains(a.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)&&a.checkSyntax())&&(a.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(a.getArgumentBodyType()===mx.Argument.BODY_RUNTIME))&&(a.getArgumentName()==="a"))&&(a.getArgumentValue()===cppNumericCast(1,"double")))&&textContains(a1.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&a1.checkSyntax())&&(a1.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(a1.getArgumentBodyType()===mx.Argument.BODY_RUNTIME))&&(a1.getArgumentName()==="a1"))&&(a1.getArgumentValue()===cppNumericCast(2,"double")))&&textContains(a1b.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&a1b.checkSyntax())&&(a1b.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(a1b.getArgumentBodyType()===mx.Argument.BODY_RUNTIME))&&(a1b.getArgumentName()==="a1b"))&&(a1b.getArgumentValue()===cppNumericCast(3,"double")))&&textContains(x.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&x.checkSyntax())&&(x.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(x.getArgumentBodyType()===mx.Argument.BODY_RUNTIME))&&(x.getArgumentName()==="x"))&&(x.getArgumentValue()===cppNumericCast(4,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0194(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentName, ArgumentExtension argumentExtension) - argumentName = null, argumentExtension = null";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let piMultArgExt=extensionFixture(mx,"PiMultArgExt");
let a=keep(new mx.Argument(null,nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
let nullExtension=null;
let b=keep(new mx.Argument("b",nullableExtension(mx,"ArgumentExtension",nullExtension)));
if((((((((((((textContains(a.getErrorMessage(),stringResources.PROVIDED_STRING_IS_NULL)&&(!a.checkSyntax()))&&(stringSize(a.getArgumentName(),true)===cppNumericCast(0,"unsigned long")))&&(a.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(a.getArgumentBodyType()===mx.Argument.BODY_RUNTIME))&&Number.isNaN(a.getArgumentValue()))&&textContains(b.getErrorMessage(),stringResources.PROVIDED_EXTENSION_IS_NULL))&&(!b.checkSyntax()))&&(stringSize(b.getArgumentName(),true)===cppNumericCast(0,"unsigned long")))&&(b.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(b.getArgumentBodyType()===mx.Argument.BODY_RUNTIME))&&Number.isNaN(b.getArgumentValue()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0195(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentName, ArgumentExtension argumentExtension) - invalid argumentName";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let piMultArgExt=extensionFixture(mx,"PiMultArgExt");
let a=keep(new mx.Argument("1",nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
let b=keep(new mx.Argument("x()",nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
let c=keep(new mx.Argument("x(1)",nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
let d=keep(new mx.Argument("x = ",nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
let e=keep(new mx.Argument("1+x",nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
let f=keep(new mx.Argument("1x",nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
if((((((((((((((((((((((((textContains(a.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME)&&textContains(a.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(a.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!a.checkSyntax()))&&textContains(b.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(b.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(b.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!b.checkSyntax()))&&textContains(c.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(c.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(c.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!c.checkSyntax()))&&textContains(d.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(d.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(d.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!d.checkSyntax()))&&textContains(e.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(e.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(e.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!e.checkSyntax()))&&textContains(f.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(f.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(f.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!f.checkSyntax()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0196(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentName, ArgumentExtension argumentExtension)";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let piMultArgExta=extensionFixture(mx,"PiMultArgExt");
let piMultArgExtb=extensionFixture(mx,"PiMultArgExt");
let a=keep(new mx.Argument("a",nullableExtension(mx,"ArgumentExtension",piMultArgExta)));
let b=keep(new mx.Argument("  b ",nullableExtension(mx,"ArgumentExtension",piMultArgExtb)));
if((((((((((textContains(a.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)&&a.checkSyntax())&&(a.getArgumentName()==="a"))&&(a.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(a.getArgumentBodyType()===mx.Argument.BODY_EXTENDED))&&textContains(b.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&b.checkSyntax())&&(b.getArgumentName()==="b"))&&(b.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(b.getArgumentBodyType()===mx.Argument.BODY_EXTENDED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0197(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentName, string argumentExpressionString, PrimitiveElement... elements) - argumentName = null, argumentExpressionstring = null, elements = null";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let nullString=null;
let bStr="b";
let plus23="2+3";
let nullElements=null;
let a=keep(new mx.Argument(nullString,plus23));
let b=keep(new mx.Argument(bStr,nullString));
let c=keep(new mx.Argument(bStr,plus23,nullElements));
if((((((((((((((((((textContains(a.getErrorMessage(),stringResources.PROVIDED_STRING_IS_NULL)&&(!a.checkSyntax()))&&(stringSize(a.getArgumentName(),true)===cppNumericCast(0,"unsigned long")))&&(a.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(a.getArgumentBodyType()===mx.Argument.BODY_RUNTIME))&&Number.isNaN(a.getArgumentValue()))&&textContains(b.getErrorMessage(),stringResources.PROVIDED_STRING_IS_NULL))&&(!b.checkSyntax()))&&(stringSize(b.getArgumentName(),true)===cppNumericCast(0,"unsigned long")))&&(b.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(b.getArgumentBodyType()===mx.Argument.BODY_RUNTIME))&&Number.isNaN(b.getArgumentValue()))&&textContains(c.getErrorMessage(),stringResources.PROVIDED_ELEMENTS_ARE_NULL))&&(!c.checkSyntax()))&&(stringSize(c.getArgumentName(),true)===cppNumericCast(0,"unsigned long")))&&(c.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(c.getArgumentBodyType()===mx.Argument.BODY_RUNTIME))&&Number.isNaN(c.getArgumentValue()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0198(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentName, string argumentExpressionString, PrimitiveElement... elements) - invalid argumentName";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument("1","2+3"));
let b=keep(new mx.Argument("x()","2+3"));
let c=keep(new mx.Argument("x(1)","2+3"));
let d=keep(new mx.Argument("x = ","2+3"));
let e=keep(new mx.Argument("1+x","2+3"));
let f=keep(new mx.Argument("1x","2+3"));
if((((((((((((((((((((((((textContains(a.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME)&&textContains(a.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(a.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!a.checkSyntax()))&&textContains(b.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(b.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(b.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!b.checkSyntax()))&&textContains(c.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(c.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(c.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!c.checkSyntax()))&&textContains(d.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(d.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(d.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!d.checkSyntax()))&&textContains(e.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(e.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(e.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!e.checkSyntax()))&&textContains(f.getErrorMessage(),stringResources.INVALID_ARGUMENT_NAME))&&textContains(f.getErrorMessage(),stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(f.getErrorMessage(),stringResources.PATTERN_EXAMPLES))&&(!f.checkSyntax()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0199(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument(string argumentName, ArgumentExtension argumentExtension)";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let a=keep(new mx.Argument("a","2+3"));
let b=keep(new mx.Argument("  b ","2*3"));
if((((((((((((textContains(a.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)&&a.checkSyntax())&&(a.getArgumentName()==="a"))&&(a.getArgumentType()===mx.Argument.DEPENDENT_ARGUMENT))&&(a.getArgumentBodyType()===mx.Argument.BODY_RUNTIME))&&(a.getArgumentValue()===cppNumericCast(5,"double")))&&textContains(b.getErrorMessage(),stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&b.checkSyntax())&&(b.getArgumentName()==="b"))&&(b.getArgumentType()===mx.Argument.DEPENDENT_ARGUMENT))&&(b.getArgumentBodyType()===mx.Argument.BODY_RUNTIME))&&(b.getArgumentValue()===cppNumericCast(6,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0200(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - setDescription, getDescription";
void 0 /* console diagnostics */;
let a=keep(new mx.Argument("a = 2"));
a.setDescription("b");
if((a.getDescription()==="b")){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0201(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - setVerboseMode, setSilentMode, getVerboseMode";
void 0 /* console diagnostics */;
let a=keep(new mx.Argument("a","2+3"));
a.setVerboseMode();
let v1=a.getVerboseMode();
a.setSilentMode();
let v2=a.getVerboseMode();
if(cppNumericCast(cppNumericCast((cppNumericCast(v1,"int")&cppNumericCast((!v2),"int")),"int"),"bool")){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0202(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Expression API - error while calculate - behaviour test";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = if(isNaN(x) || x> 3, 100, x/2)"));
x.addArguments(x);
let e1=x.getErrorMessage();
let syn=x.checkSyntax();
let e2=x.getErrorMessage();
let v=x.getArgumentValue();
let e3=x.getErrorMessage();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((textContains(e1,stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)&&syn)&&textContains(e2,stringResources.NO_ERRORS_DETECTED))&&Number.isNaN(v))&&textContains(e3,stringResources.RECURSION_CALLS_COUNTER_EXCEEDED))&&textContains(e3,stringResources.ERROR_WHILE_EXECUTING_THE_CALCULATE))&&textContains(e3,stringResources.EXCEPTION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0203(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public getComputingTime()";
void 0 /* console diagnostics */;
let a=keep(new mx.Argument("a",2));
let b=keep(new mx.Argument("b","sum(i, 1, 200000, i)"));
a.getArgumentValue();
b.getArgumentValue();
if(((a.getComputingTime()===cppNumericCast(0,"double"))&&(b.getComputingTime()>cppNumericCast(0,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0204(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public void setArgumentName(string argumentName)";
void 0 /* console diagnostics */;
let a=keep(new mx.Argument("a",2));
a.setArgumentName(null);
let b=keep(new mx.Argument("1a2",2));
b.setArgumentName(null);
let c=keep(new mx.Argument("1a2",2));
c.setArgumentName("c");
c.setArgumentValue(cppNumericCast(2,"double"));
let d=keep(new mx.Argument("d",2));
d.setArgumentName("1a2");
if(((((((a.getArgumentName()==="a")&&a.checkSyntax())&&(stringSize(b.getArgumentName(),true)===cppNumericCast(0,"unsigned long")))&&(c.getArgumentName()==="c"))&&(c.getArgumentValue()===cppNumericCast(2,"double")))&&(d.getArgumentName()==="d"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0205(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public void setArgumentExpressionString(string argumentExpressionString)";
void 0 /* console diagnostics */;
let a=keep(new mx.Argument("a = 2"));
a.setArgumentExpressionString("2+3");
let b=keep(new mx.Argument("b = 2"));
b.setArgumentExpressionString(null);
if(((((((a.getArgumentType()===mx.Argument.DEPENDENT_ARGUMENT)&&(a.getArgumentValue()===cppNumericCast(5,"double")))&&(a.getArgumentExpressionString()==="2+3"))&&(b.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(b.getArgumentValue()===cppNumericCast(2,"double")))&&(b.getArgumentExpressionString()===""))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0206(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public void addDefinitions(PrimitiveElement... elements), public void addArguments(Argument::.. arguments)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = a + b + f(4)"));
let a=keep(new mx.Argument("a = 2"));
let b=keep(new mx.Constant("b = 3"));
let f=keep(new mx.Function("f(x) = x"));
let nullElements=null;
let v1=x.getArgumentValue();
let msg1=x.getErrorMessage();
x.addDefinitions(nullElements);
x.addDefinitions(a,b,f);
let v2=x.getArgumentValue();
let msg2=x.getErrorMessage();
x.removeDefinitions(a,b,f);
x.removeDefinitions(nullElements);
let v3=x.getArgumentValue();
let msg3=x.getErrorMessage();
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((Number.isNaN(v1)&&textContains(msg1,stringResources.INVALID_TOKEN))&&textContains(msg1,stringResources.ERRORS_HAVE_BEEN_FOUND))&&textContains(msg1,"'a'"))&&textContains(msg1,"'b'"))&&textContains(msg1,"'f'"))&&(!textContains(msg1,"[f]")))&&(v2===cppNumericCast(9,"double")))&&textContains(msg2,stringResources.NO_ERRORS_DETECTED))&&(!textContains(msg2,"'a'")))&&(!textContains(msg2,"'b'")))&&textContains(msg2,"'f'"))&&textContains(msg2,"[f]"))&&Number.isNaN(v3))&&textContains(msg3,stringResources.INVALID_TOKEN))&&textContains(msg3,stringResources.ERRORS_HAVE_BEEN_FOUND))&&textContains(msg3,"'a'"))&&textContains(msg3,"'b'"))&&textContains(msg3,"'f'"))&&(!textContains(msg3,"[f]")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0207(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - add/remove Arguments, add/remove Constants, add/remove Functions - objects";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = a + b + f(4)"));
let a=keep(new mx.Argument("a = 2"));
let b=keep(new mx.Constant("b = 3"));
let f=keep(new mx.Function("f(x) = x"));
let nullArg=null;
let nullConst=null;
let nullFun=null;
let v1=x.getArgumentValue();
let msg1=x.getErrorMessage();
x.addArguments(a);
x.addArguments(nullArg);
x.addConstants(b);
x.addConstants(nullConst);
x.addFunctions(f);
x.addFunctions(nullFun);
let v2=x.getArgumentValue();
let msg2=x.getErrorMessage();
x.removeArguments(a);
x.removeArguments(nullArg);
x.removeConstants(b);
x.removeConstants(nullConst);
x.removeFunctions(f);
x.removeFunctions(nullFun);
let v3=x.getArgumentValue();
let msg3=x.getErrorMessage();
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((Number.isNaN(v1)&&textContains(msg1,stringResources.INVALID_TOKEN))&&textContains(msg1,stringResources.ERRORS_HAVE_BEEN_FOUND))&&textContains(msg1,"'a'"))&&textContains(msg1,"'b'"))&&textContains(msg1,"'f'"))&&(!textContains(msg1,"[f]")))&&(v2===cppNumericCast(9,"double")))&&textContains(msg2,stringResources.NO_ERRORS_DETECTED))&&(!textContains(msg2,"'a'")))&&(!textContains(msg2,"'b'")))&&textContains(msg2,"'f'"))&&textContains(msg2,"[f]"))&&Number.isNaN(v3))&&textContains(msg3,stringResources.INVALID_TOKEN))&&textContains(msg3,stringResources.ERRORS_HAVE_BEEN_FOUND))&&textContains(msg3,"'a'"))&&textContains(msg3,"'b'"))&&textContains(msg3,"'f'"))&&(!textContains(msg3,"[f]")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0208(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - addConstants(ListPtr<ConstantPtr> constantsList) / getConstantIndex / getConstant / getConstantsNumber / removeAllConstants";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = a + b + c + d"));
let a=keep(new mx.Constant("a = 1"));
let b=keep(new mx.Constant("b = 2"));
let c=keep(new mx.Constant("c = 3"));
let d=keep(new mx.Constant("d = 4"));
let constList=keep(mx.new_List("ConstantPtr"));
constList.add(a);
constList.add(b);
constList.add(c);
constList.add(d);
let syn1=x.checkSyntax();
let msg1=x.getErrorMessage();
let nconst1=x.getConstantsNumber();
let apos0=x.getConstantIndex(null);
let apos1=x.getConstantIndex("a");
let afound1=keep(x.getConstant(apos1));
let afound11=keep(x.getConstant(null));
x.addConstants(constList);
let syn2=x.checkSyntax();
let msg2=x.getErrorMessage();
let nconst2=x.getConstantsNumber();
let apos2=x.getConstantIndex("a");
let afound2=keep(x.getConstant(apos2));
let afound21=keep(x.getConstant("a"));
x.removeAllConstants();
let syn3=x.checkSyntax();
let msg3=x.getErrorMessage();
let nconst3=x.getConstantsNumber();
let apos3=x.getConstantIndex("a");
let afound3=keep(x.getConstant(apos3));
let afound31=keep(x.getConstant("a"));
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((((((!syn1)&&textContains(msg1,stringResources.INVALID_TOKEN))&&textContains(msg1,"'a'"))&&textContains(msg1,"'b'"))&&textContains(msg1,"'c'"))&&textContains(msg1,"'d'"))&&(nconst1===0))&&(apos0===(-1)))&&cppNumericCast(cppNumericCast((cppNumericCast(alias(afound1,null),"int")&cppNumericCast(alias(afound11,null),"int")),"int"),"bool"))&&syn2)&&textContains(msg2,stringResources.NO_ERRORS_DETECTED))&&(!textContains(msg2,"'a'")))&&(!textContains(msg2,"'b'")))&&(!textContains(msg2,"'c'")))&&(!textContains(msg2,"'d'")))&&(nconst2===4))&&(apos2===0))&&alias(afound2,afound21))&&(afound2.getConstantName()==="a"))&&(!syn3))&&textContains(msg3,stringResources.INVALID_TOKEN))&&textContains(msg3,"'a'"))&&textContains(msg3,"'b'"))&&textContains(msg3,"'c'"))&&textContains(msg3,"'d'"))&&(nconst3===0))&&(apos3===(-1)))&&cppNumericCast(cppNumericCast((cppNumericCast(alias(afound3,null),"int")&cppNumericCast(alias(afound31,null),"int")),"int"),"bool"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0209(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - defineArguments(String... argumentsNames / getArgumentIndex(string argumentName) / getArgument(string argumentName) / getArgument(int argumentIndex) / getArgumentsNumber() / removeAllArguments()";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = a+b+c+d+e+f"));
let nullStr=null;
x.defineArguments(nullStr);
let syn1=x.checkSyntax();
let msg1=x.getErrorMessage();
let narg1=x.getArgumentsNumber();
let apos0=x.getArgumentIndex(null);
let apos1=x.getArgumentIndex("a");
let afound1=keep(x.getArgument(apos1));
let afound11=keep(x.getArgument("a"));
x.defineArguments("c","a","b");
let syn2=x.checkSyntax();
let msg2=x.getErrorMessage();
let narg2=x.getArgumentsNumber();
let apos2=x.getArgumentIndex("a");
let afound2=keep(x.getArgument(apos2));
let afound21=keep(x.getArgument("a"));
x.defineArguments(nullStr);
x.defineArguments("d","f");
let syn3=x.checkSyntax();
let msg3=x.getErrorMessage();
let narg3=x.getArgumentsNumber();
let apos3=x.getArgumentIndex("a");
let afound3=keep(x.getArgument(apos3));
let afound31=keep(x.getArgument("a"));
x.removeAllArguments();
x.defineArguments(nullStr);
let syn4=x.checkSyntax();
let msg4=x.getErrorMessage();
let narg4=x.getArgumentsNumber();
let apos4=x.getArgumentIndex("a");
let afound4=keep(x.getArgument(apos4));
let afound41=keep(x.getArgument("a"));
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((((((((((((((((((((!syn1)&&textContains(msg1,stringResources.INVALID_TOKEN))&&textContains(msg1,"'a'"))&&textContains(msg1,"'b'"))&&textContains(msg1,"'c'"))&&textContains(msg1,"'d'"))&&textContains(msg1,"'f'"))&&(narg1===0))&&(apos0===(-1)))&&(apos1===(-1)))&&alias(afound1,null))&&alias(afound11,null))&&(!syn2))&&textContains(msg2,stringResources.INVALID_TOKEN))&&textContains(msg2,"'d'"))&&textContains(msg2,"'f'"))&&(narg2===3))&&(apos2===1))&&alias(afound2,afound21))&&(afound2.getArgumentName()==="a"))&&syn3)&&textContains(msg3,stringResources.NO_ERRORS_DETECTED))&&(!textContains(msg3,"'a'")))&&(!textContains(msg3,"'b'")))&&(!textContains(msg3,"'c'")))&&(!textContains(msg3,"'d'")))&&(!textContains(msg3,"'f'")))&&(narg3===5))&&(apos3===1))&&alias(afound3,afound31))&&(afound3.getArgumentName()==="a"))&&(!syn4))&&textContains(msg4,stringResources.INVALID_TOKEN))&&textContains(msg4,"'a'"))&&textContains(msg4,"'b'"))&&textContains(msg4,"'c'"))&&textContains(msg4,"'d'"))&&textContains(msg4,"'f'"))&&(narg4===0))&&(apos4===(-1)))&&alias(afound4,null))&&alias(afound41,null))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0210(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - defineArguments(String... getFunctionIndex / getFunction / getFunctionsNumber / removeAllFunctions";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = a(1)+b(2)+c(3)+d(4)"));
let a=keep(new mx.Function("a(x) = x"));
let b=keep(new mx.Function("b(x) = x"));
let c=keep(new mx.Function("c(x) = x"));
let d=keep(new mx.Function("d(x) = x"));
let nfun0=x.getFunctionsNumber();
x.addFunctions(a,b,c,d);
let syn1=x.checkSyntax();
let msg1=x.getErrorMessage();
let nfun1=x.getFunctionsNumber();
let n1=keep(x.getFunction(null));
let n2=keep(x.getFunction((-1)));
let f=keep(x.getFunction("f"));
let bpos=x.getFunctionIndex("b");
let b1=keep(x.getFunction(bpos));
x.removeAllFunctions();
let nfun2=x.getFunctionsNumber();
let syn2=x.checkSyntax();
let msg2=x.getErrorMessage();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((nfun0===0)&&syn1)&&textContains(msg1,stringResources.NO_ERRORS_DETECTED))&&(nfun1===4))&&alias(n1,null))&&alias(n2,null))&&alias(f,null))&&(bpos===1))&&alias(b1,b))&&(nfun2===0))&&(!syn2))&&textContains(msg2,stringResources.INVALID_TOKEN))&&textContains(msg2,"'a'"))&&textContains(msg2,"'b'"))&&textContains(msg2,"'c'"))&&textContains(msg2,"'d'"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0211(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - public Argument clone()";
void 0 /* console diagnostics */;
let xx=keep(new mx.Argument("x = a(1)+b(2)+c(3)+d(4)"));
let a=keep(new mx.Function("a(x) = x"));
let b=keep(new mx.Function("b(x) = x"));
let c=keep(new mx.Function("c(x) = x"));
let d=keep(new mx.Function("d(x) = x"));
let xc=keep(xx.clone());
if((((((xx.getArgumentName()===xc.getArgumentName())&&(xx.getArgumentExpressionString()===xc.getArgumentExpressionString()))&&(xx.getDescription()===xc.getDescription()))&&(xx.getArgumentType()===xc.getArgumentType()))&&(xx.getArgumentBodyType()===xc.getArgumentBodyType()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0212(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - public Function(string functionName, string functionExpressionString, PrimitiveElement... elements)";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let nullStr=null;
let nullElements=null;
let plus23Str="2+3";
let fStr="f";
let c=keep(new mx.Constant("c = 1"));
let f1=keep(new mx.Function(nullStr,plus23Str,[nullElements]));
let f2=keep(new mx.Function(fStr,nullStr,[nullElements]));
let f3=keep(new mx.Function("f","2+3",[nullElements]));
let f4=keep(new mx.Function("1f","2+3",[c]));
let f5=keep(new mx.Function("f1(","2+3",[c]));
let f6=keep(new mx.Function("  f   ","  2+3 ",[c]));
let syn1=f1.checkSyntax();
let msg1=f1.getErrorMessage();
let syn2=f2.checkSyntax();
let msg2=f2.getErrorMessage();
let syn3=f3.checkSyntax();
let msg3=f3.getErrorMessage();
let msg4=f4.getErrorMessage();
let syn4=f4.checkSyntax();
let msg5=f5.getErrorMessage();
let syn5=f5.checkSyntax();
let msg6=f6.getErrorMessage();
let syn6=f6.checkSyntax();
if(((((((((((((((((((!syn1)&&textContains(msg1,stringResources.PROVIDED_STRING_IS_NULL))&&(!syn2))&&textContains(msg2,stringResources.PROVIDED_STRING_IS_NULL))&&(!syn3))&&textContains(msg3,stringResources.PROVIDED_ELEMENTS_ARE_NULL))&&(!syn4))&&textContains(msg4,stringResources.INVALID_FUNCTION_NAME))&&textContains(msg4,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg4,stringResources.PATTERN_EXAMPLES))&&(!syn5))&&textContains(msg5,stringResources.INVALID_FUNCTION_NAME))&&textContains(msg5,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg5,stringResources.PATTERN_EXAMPLES))&&syn6)&&textContains(msg6,stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION))&&(f6.getFunctionName()==="f"))&&(f6.getFunctionExpressionString()==="2+3"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0213(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - Function(string functionName, string  functionExpressionString, String... argumentsNames)";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let nullStr=null;
let fStr="f";
let nullElements=null;
let f1=keep(new mx.Function(nullStr,"2+3",[nullElements]));
let f2=keep(new mx.Function(fStr,nullStr,[nullElements]));
let f3=keep(new mx.Function("f","2+3",[nullElements]));
let f4=keep(new mx.Function("1f","2+3*x","x"));
let f5=keep(new mx.Function("f1( ","2+3*x","x"));
let f6=keep(new mx.Function("  f   ","  2+3*x  ","x"));
let syn1=f1.checkSyntax();
let msg1=f1.getErrorMessage();
let syn2=f2.checkSyntax();
let msg2=f2.getErrorMessage();
let syn3=f3.checkSyntax();
let msg3=f3.getErrorMessage();
let msg4=f4.getErrorMessage();
let syn4=f4.checkSyntax();
let msg5=f5.getErrorMessage();
let syn5=f5.checkSyntax();
let msg6=f6.getErrorMessage();
let syn6=f6.checkSyntax();
if(((((((((((((((((((!syn1)&&textContains(msg1,stringResources.PROVIDED_STRING_IS_NULL))&&(!syn2))&&textContains(msg2,stringResources.PROVIDED_STRING_IS_NULL))&&(!syn3))&&textContains(msg3,stringResources.PROVIDED_ELEMENTS_ARE_NULL))&&(!syn4))&&textContains(msg4,stringResources.INVALID_FUNCTION_NAME))&&textContains(msg4,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg4,stringResources.PATTERN_EXAMPLES))&&(!syn5))&&textContains(msg5,stringResources.INVALID_FUNCTION_NAME))&&textContains(msg5,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg5,stringResources.PATTERN_EXAMPLES))&&syn6)&&textContains(msg6,stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION))&&(f6.getFunctionName()==="f"))&&(f6.getFunctionExpressionString()==="2+3*x"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0214(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - public Function(string functionDefinitionString, PrimitiveElement... elements)";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let nullStr=null;
let nullElements=null;
let c=keep(new mx.Constant("c = 1"));
let f1=keep(new mx.Function(nullStr,[c]));
let f2=keep(new mx.Function("f(x) = 2",[nullElements]));
let f3=keep(new mx.Function(nullStr,[nullElements]));
let f4=keep(new mx.Function("f = 2+3*x",[c]));
let f5=keep(new mx.Function(" 2+3*x",[c]));
let f6=keep(new mx.Function("  f(x)   =   2+3*x   ",[c]));
let f7=keep(new mx.Function("  f(...)   =   [npar]   ",[c]));
let syn1=f1.checkSyntax();
let msg1=f1.getErrorMessage();
let syn2=f2.checkSyntax();
let msg2=f2.getErrorMessage();
let syn3=f3.checkSyntax();
let msg3=f3.getErrorMessage();
let msg4=f4.getErrorMessage();
let syn4=f4.checkSyntax();
let msg5=f5.getErrorMessage();
let syn5=f5.checkSyntax();
let msg6=f6.getErrorMessage();
let syn6=f6.checkSyntax();
let msg7=f7.getErrorMessage();
let syn7=f7.checkSyntax();
if(((((((((((((((((((((((!syn1)&&textContains(msg1,stringResources.PROVIDED_STRING_IS_NULL))&&(!syn2))&&textContains(msg2,stringResources.PROVIDED_ELEMENTS_ARE_NULL))&&(!syn3))&&textContains(msg3,stringResources.PROVIDED_STRING_IS_NULL))&&(!syn4))&&textContains(msg4,stringResources.INVALID_FUNCTION_DEFINITION))&&textContains(msg4,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg4,stringResources.PATTERN_EXAMPLES))&&(!syn5))&&textContains(msg5,stringResources.INVALID_FUNCTION_DEFINITION))&&textContains(msg5,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg5,stringResources.PATTERN_EXAMPLES))&&syn6)&&textContains(msg6,stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION))&&(f6.getFunctionName()==="f"))&&(f6.getFunctionExpressionString()==="2+3*x"))&&syn7)&&textContains(msg7,stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION))&&(f7.getFunctionName()==="f"))&&(f7.getFunctionExpressionString()==="[npar]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0215(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - public Function(string functionName, FunctionExtension functionExtension)";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let nullStr=null;
let funExtNull=null;
let funExt=extensionFixture(mx,"FunExt");
let f1=keep(new mx.Function(nullStr,nullableExtension(mx,"FunctionExtension",funExt)));
let f2=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtension",funExtNull)));
let f3=keep(new mx.Function(nullStr,nullableExtension(mx,"FunctionExtension",funExtNull)));
let f4=keep(new mx.Function("1f",nullableExtension(mx,"FunctionExtension",funExt)));
let f5=keep(new mx.Function("f1(",nullableExtension(mx,"FunctionExtension",funExt)));
let f6=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtension",funExt)));
let syn1=f1.checkSyntax();
let msg1=f1.getErrorMessage();
let syn2=f2.checkSyntax();
let msg2=f2.getErrorMessage();
let syn3=f3.checkSyntax();
let msg3=f3.getErrorMessage();
let msg4=f4.getErrorMessage();
let syn4=f4.checkSyntax();
let msg5=f5.getErrorMessage();
let syn5=f5.checkSyntax();
let msg6=f6.getErrorMessage();
let syn6=f6.checkSyntax();
if(((((((((((((((((((!syn1)&&textContains(msg1,stringResources.PROVIDED_STRING_IS_NULL))&&(!syn2))&&textContains(msg2,stringResources.PROVIDED_EXTENSION_IS_NULL))&&(!syn3))&&textContains(msg3,stringResources.PROVIDED_STRING_IS_NULL))&&(!syn4))&&textContains(msg4,stringResources.INVALID_FUNCTION_NAME))&&textContains(msg4,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg4,stringResources.PATTERN_EXAMPLES))&&(!syn5))&&textContains(msg5,stringResources.INVALID_FUNCTION_NAME))&&textContains(msg5,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg5,stringResources.PATTERN_EXAMPLES))&&syn6)&&textContains(msg6,stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION))&&(f6.getFunctionName()==="f"))&&(f6.getFunctionBodyType()===mx.Function.BODY_EXTENDED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0216(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - public Function(string functionName, FunctionExtensionVariadic functionExtensionVariadic) + checkSyntax + getErrorMessage";
void 0 /* console diagnostics */;
let stringResources=keep(mx.StringModel.getStringResources());
let nullStr=null;
let funExtNull=null;
let funExt=extensionFixture(mx,"FunExtVar");
let f1=keep(new mx.Function(nullStr,nullableExtension(mx,"FunctionExtensionVariadic",funExt)));
let f2=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtensionVariadic",funExtNull)));
let f3=keep(new mx.Function(nullStr,nullableExtension(mx,"FunctionExtensionVariadic",funExtNull)));
let f4=keep(new mx.Function("1f",nullableExtension(mx,"FunctionExtensionVariadic",funExt)));
let f5=keep(new mx.Function("f1(",nullableExtension(mx,"FunctionExtensionVariadic",funExt)));
let f6=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtensionVariadic",funExt)));
let syn1=f1.checkSyntax();
let msg1=f1.getErrorMessage();
let syn2=f2.checkSyntax();
let msg2=f2.getErrorMessage();
let syn3=f3.checkSyntax();
let msg3=f3.getErrorMessage();
let msg4=f4.getErrorMessage();
let syn4=f4.checkSyntax();
let msg5=f5.getErrorMessage();
let syn5=f5.checkSyntax();
let msg6=f6.getErrorMessage();
let syn6=f6.checkSyntax();
if(((((((((((((((((((!syn1)&&textContains(msg1,stringResources.PROVIDED_STRING_IS_NULL))&&(!syn2))&&textContains(msg2,stringResources.PROVIDED_EXTENSION_IS_NULL))&&(!syn3))&&textContains(msg3,stringResources.PROVIDED_STRING_IS_NULL))&&(!syn4))&&textContains(msg4,stringResources.INVALID_FUNCTION_NAME))&&textContains(msg4,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg4,stringResources.PATTERN_EXAMPLES))&&(!syn5))&&textContains(msg5,stringResources.INVALID_FUNCTION_NAME))&&textContains(msg5,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg5,stringResources.PATTERN_EXAMPLES))&&syn6)&&textContains(msg6,stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION))&&(f6.getFunctionName()==="f"))&&(f6.getFunctionBodyType()===mx.Function.BODY_EXTENDED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0217(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - setDescription /  setFunctionName / getDescription / getFunctionName / getFunctionExpressionstring / getFunctionBodyType";
void 0 /* console diagnostics */;
let f=keep(new mx.Function("f(x,y) = 2*x+3*y"));
f.setDescription("This is a new description");
f.setFunctionName("g");
f.setFunctionName("1g");
f.setFunctionName(null);
f.setDescription(null);
if(((((f.getDescription()==="This is a new description")&&(f.getFunctionName()==="g"))&&(f.getFunctionExpressionString()==="2*x+3*y"))&&(f.getFunctionBodyType()===mx.Function.BODY_RUNTIME))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0218(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - public double calculate(double... parameters) + getComputingTime";
void 0 /* console diagnostics */;
let fErr=keep(new mx.Function("f = 2+3"));
let f=keep(new mx.Function("f(n) = sum(i, 1, n, i)"));
let fVar=keep(new mx.Function("f(...) = sum(i, 1, par(1), i)"));
let longComputingFunExt=extensionFixture(mx,"LongComputingFunExt");
let longComputingFunExtVar=extensionFixture(mx,"LongComputingFunExtVar");
let fExt=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtension",longComputingFunExt)));
let fExtVar=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtensionVariadic",longComputingFunExtVar)));
let range=cppNumericCast(2000000,"double");
let result=cppNumericCast(0,"double");
for(let i=1;(cppNumericCast(i,"double")<=range);(i++)){(result+=cppNumericCast(i,"double"));}
let nullParams=null;
let zerLengthParams=keep(mx.new_List("double"));
let dErr=fErr.calculate(range);
let tErr=fErr.getComputingTime();
let dNullParams=f.calculate(nullParams);
let tNullParams=f.getComputingTime();
let dZerLengthParams=f.calculate(zerLengthParams);
let tZerLengthParams=f.getComputingTime();
let df=f.calculate(range);
let tf=f.getComputingTime();
let dfVar=fVar.calculate(range);
let tfVar=fVar.getComputingTime();
let dfExt=fExt.calculate(range);
let tfExt=fExt.getComputingTime();
let dfExtVar=fExtVar.calculate(range);
let tfExtVar=fExtVar.getComputingTime();
if((((((((((((((Number.isNaN(dErr)&&(tErr===cppNumericCast(0,"double")))&&Number.isNaN(dNullParams))&&(tNullParams===cppNumericCast(0,"double")))&&Number.isNaN(dZerLengthParams))&&(tZerLengthParams===cppNumericCast(0,"double")))&&(df===result))&&(tf>cppNumericCast(0,"double")))&&(dfVar===result))&&(tfVar>cppNumericCast(0,"double")))&&(dfExt===result))&&(tfExt>cppNumericCast(0,"double")))&&(dfExtVar===result))&&(tfExtVar>cppNumericCast(0,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0219(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - public calculate(Argument::.. arguments) + getComputingTime";
void 0 /* console diagnostics */;
let fErr=keep(new mx.Function("f = 2+3"));
let f=keep(new mx.Function("f(n) = sum(i, 1, n, i)"));
let fVar=keep(new mx.Function("f(...) = sum(i, 1, par(1), i)"));
let longComputingFunExt=extensionFixture(mx,"LongComputingFunExt");
let longComputingFunExtVar=extensionFixture(mx,"LongComputingFunExtVar");
let fExt=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtension",longComputingFunExt)));
let fExtVar=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtensionVariadic",longComputingFunExtVar)));
let range=keep(new mx.Argument("range = 2000000"));
let result=cppNumericCast(0,"double");
let drange=range.getArgumentValue();
for(let i=1;(cppNumericCast(i,"double")<=drange);(i++)){(result+=cppNumericCast(i,"double"));}
let nullParams=null;
let zerLengthParams=keep(mx.new_List("ArgumentPtr"));
let dErr=fErr.calculate(range);
let tErr=fErr.getComputingTime();
let dNullParams=f.calculate(nullParams);
let tNullParams=f.getComputingTime();
let dZerLengthParams=f.calculate(zerLengthParams);
let tZerLengthParams=f.getComputingTime();
let df=f.calculate(range);
let tf=f.getComputingTime();
let dfVar=fVar.calculate(range);
let tfVar=fVar.getComputingTime();
let dfExt=fExt.calculate(range);
let tfExt=fExt.getComputingTime();
let dfExtVar=fExtVar.calculate(range);
let tfExtVar=fExtVar.getComputingTime();
if((((((((((((((Number.isNaN(dErr)&&(tErr===cppNumericCast(0,"double")))&&Number.isNaN(dNullParams))&&(tNullParams===cppNumericCast(0,"double")))&&Number.isNaN(dZerLengthParams))&&(tZerLengthParams===cppNumericCast(0,"double")))&&(df===result))&&(tf>cppNumericCast(0,"double")))&&(dfVar===result))&&(tfVar>cppNumericCast(0,"double")))&&(dfExt===result))&&(tfExt>cppNumericCast(0,"double")))&&(dfExtVar===result))&&(tfExtVar>cppNumericCast(0,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0220(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - calculate(CalcStepsRegisterPtr calcStepsRegister) + getComputingTime";
void 0 /* console diagnostics */;
let longComputingFunExt=extensionFixture(mx,"LongComputingFunExt");
let longComputingFunExtVar=extensionFixture(mx,"LongComputingFunExtVar");
let range=keep(new mx.Argument("range = 2000000"));
let fErr=keep(new mx.Function("f = 2+3"));
let f=keep(new mx.Function("f(n) = sum(i, 1, n, i)"));
let e=keep(new mx.Expression("f(range)",range,f));
let fVar=keep(new mx.Function("f(...) = sum(i, 1, par(1), i)"));
let eVar=keep(new mx.Expression("f(range)",range,fVar));
let fExt=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtension",longComputingFunExt)));
let eExt=keep(new mx.Expression("f(range)",range,fExt));
let fExtVar=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtensionVariadic",longComputingFunExtVar)));
let eExtVar=keep(new mx.Expression("f(range)",range,fExtVar));
let result=cppNumericCast(0,"double");
let drange=range.getArgumentValue();
for(let i=1;(cppNumericCast(i,"double")<=drange);(i++)){(result+=cppNumericCast(i,"double"));}
let calcStepsRegister=null;
let dErr=calculateWithSteps(fErr,calcStepsRegister);
let tErr=fErr.getComputingTime();
let df=e.calculate(calcStepsRegister);
let tf=f.getComputingTime();
let dfVar=eVar.calculate(calcStepsRegister);
let tfVar=fVar.getComputingTime();
let dfExt=eExt.calculate(calcStepsRegister);
let tfExt=fExt.getComputingTime();
let dfExtVar=eExtVar.calculate(calcStepsRegister);
let tfExtVar=fExtVar.getComputingTime();
if((((((((((Number.isNaN(dErr)&&(tErr===cppNumericCast(0,"double")))&&(df===result))&&(tf>cppNumericCast(0,"double")))&&(dfVar===result))&&(tfVar>cppNumericCast(0,"double")))&&(dfExt===result))&&(tfExt>cppNumericCast(0,"double")))&&(dfExtVar===result))&&(tfExtVar>cppNumericCast(0,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0221(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - setArgumentValue";
void 0 /* console diagnostics */;
let fErr=keep(new mx.Function("f = 2+3"));
let f=keep(new mx.Function("f(n) = sum(i, 1, n, i)"));
let fVar=keep(new mx.Function("f(...) = sum(i, 1, par(1), i)"));
let longComputingFunExt=extensionFixture(mx,"LongComputingFunExt");
let longComputingFunExtVar=extensionFixture(mx,"LongComputingFunExtVar");
let fExt=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtension",longComputingFunExt)));
let fExtVar=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtensionVariadic",longComputingFunExtVar)));
let range=cppNumericCast(2000000,"double");
let result=cppNumericCast(0,"double");
for(let i=1;(cppNumericCast(i,"double")<=range);(i++)){(result+=cppNumericCast(i,"double"));}
fErr.setArgumentValue(0,cppNumericCast(1,"double"));
f.setArgumentValue(0,range);
f.setArgumentValue((-1),cppNumericCast((-1),"double"));
f.setArgumentValue(10,cppNumericCast(10,"double"));
fVar.setArgumentValue(0,range);
fVar.setArgumentValue((-1),cppNumericCast((-1),"double"));
fVar.setArgumentValue(10,cppNumericCast(10,"double"));
fExt.setArgumentValue(0,range);
fExt.setArgumentValue((-1),cppNumericCast((-1),"double"));
fExt.setArgumentValue(10,cppNumericCast(10,"double"));
fExtVar.setArgumentValue(0,range);
fExtVar.setArgumentValue((-1),cppNumericCast((-1),"double"));
fExtVar.setArgumentValue(10,cppNumericCast(10,"double"));
let df=f.calculate();
let dfVar=fVar.calculate();
let dfExt=fExt.calculate();
let dfExtVar=fExtVar.calculate(range);
if(((((df===result)&&Number.isNaN(dfVar))&&(dfExt===result))&&(dfExtVar===result))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0222(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - setVerboseMode, setSilentMode, getVerboseMode";
void 0 /* console diagnostics */;
let a=keep(new mx.Function("a","2+3","x"));
a.setVerboseMode();
let v1=a.getVerboseMode();
a.setSilentMode();
let v2=a.getVerboseMode();
if(cppNumericCast(cppNumericCast((cppNumericCast(v1,"int")&cppNumericCast((!v2),"int")),"int"),"bool")){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0223(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - public void addDefinitions(PrimitiveElement... elements), public void addArguments(Argument::.. arguments)";
void 0 /* console diagnostics */;
let x=keep(new mx.Function("x(n) = a + b + f(n)"));
let a=keep(new mx.Argument("a = 2"));
let b=keep(new mx.Constant("b = 3"));
let f=keep(new mx.Function("f(x) = x"));
let nullElements=null;
let v1=x.calculate(4);
let msg1=x.getErrorMessage();
x.addDefinitions(nullElements);
x.addDefinitions(a,b,f);
let v2=x.calculate(4);
let msg2=x.getErrorMessage();
x.removeDefinitions(a,b,f);
x.removeDefinitions(nullElements);
let v3=x.calculate(4);
let msg3=x.getErrorMessage();
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((Number.isNaN(v1)&&textContains(msg1,stringResources.INVALID_TOKEN))&&textContains(msg1,stringResources.ERRORS_HAVE_BEEN_FOUND))&&textContains(msg1,"'a'"))&&textContains(msg1,"'b'"))&&textContains(msg1,"'f'"))&&(!textContains(msg1,"[f]")))&&(v2===cppNumericCast(9,"double")))&&textContains(msg2,stringResources.NO_ERRORS_DETECTED))&&(!textContains(msg2,"'a'")))&&(!textContains(msg2,"'b'")))&&textContains(msg2,"'f'"))&&textContains(msg2,"[f]"))&&Number.isNaN(v3))&&textContains(msg3,stringResources.INVALID_TOKEN))&&textContains(msg3,stringResources.ERRORS_HAVE_BEEN_FOUND))&&textContains(msg3,"'a'"))&&textContains(msg3,"'b'"))&&textContains(msg3,"'f'"))&&(!textContains(msg3,"[f]")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0224(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - add/remove Arguments, add/remove Constants, add/remove Functions - objects";
void 0 /* console diagnostics */;
let x=keep(new mx.Function("x(n) = a + b + f(n)"));
let a=keep(new mx.Argument("a = 2"));
let b=keep(new mx.Constant("b = 3"));
let f=keep(new mx.Function("f(x) = x"));
let nullArg=null;
let nullConst=null;
let nullFun=null;
let v1=x.calculate(4);
let msg1=x.getErrorMessage();
x.addArguments(a);
x.addArguments(nullArg);
x.addConstants(b);
x.addConstants(nullConst);
x.addFunctions(f);
x.addFunctions(nullFun);
let v2=x.calculate(4);
let msg2=x.getErrorMessage();
x.removeArguments(a);
x.removeArguments(nullArg);
x.removeConstants(b);
x.removeConstants(nullConst);
x.removeFunctions(f);
x.removeFunctions(nullFun);
let v3=x.calculate(4);
let msg3=x.getErrorMessage();
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((Number.isNaN(v1)&&textContains(msg1,stringResources.INVALID_TOKEN))&&textContains(msg1,stringResources.ERRORS_HAVE_BEEN_FOUND))&&textContains(msg1,"'a'"))&&textContains(msg1,"'b'"))&&textContains(msg1,"'f'"))&&(!textContains(msg1,"[f]")))&&(v2===cppNumericCast(9,"double")))&&textContains(msg2,stringResources.NO_ERRORS_DETECTED))&&(!textContains(msg2,"'a'")))&&(!textContains(msg2,"'b'")))&&textContains(msg2,"'f'"))&&textContains(msg2,"[f]"))&&Number.isNaN(v3))&&textContains(msg3,stringResources.INVALID_TOKEN))&&textContains(msg3,stringResources.ERRORS_HAVE_BEEN_FOUND))&&textContains(msg3,"'a'"))&&textContains(msg3,"'b'"))&&textContains(msg3,"'f'"))&&(!textContains(msg3,"[f]")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0225(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - addConstants(ListPtr<ConstantPtr> constantsList) / getConstantIndex / getConstant / getConstantsNumber / removeAllConstants";
void 0 /* console diagnostics */;
let x=keep(new mx.Function("x(n) = a + b + c + d"));
let a=keep(new mx.Constant("a = 1"));
let b=keep(new mx.Constant("b = 2"));
let c=keep(new mx.Constant("c = 3"));
let d=keep(new mx.Constant("d = 4"));
let constList=keep(mx.new_List("ConstantPtr"));
constList.add(a);
constList.add(b);
constList.add(c);
constList.add(d);
let syn1=x.checkSyntax();
let msg1=x.getErrorMessage();
let nconst1=x.getConstantsNumber();
let apos0=x.getConstantIndex(null);
let apos1=x.getConstantIndex("a");
let afound1=keep(x.getConstant(apos1));
let afound11=keep(x.getConstant(null));
x.addConstants(constList);
let syn2=x.checkSyntax();
let msg2=x.getErrorMessage();
let nconst2=x.getConstantsNumber();
let apos2=x.getConstantIndex("a");
let afound2=keep(x.getConstant(apos2));
let afound21=keep(x.getConstant("a"));
x.removeAllConstants();
let syn3=x.checkSyntax();
let msg3=x.getErrorMessage();
let nconst3=x.getConstantsNumber();
let apos3=x.getConstantIndex("a");
let afound3=keep(x.getConstant(apos3));
let afound31=keep(x.getConstant("a"));
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((((((!syn1)&&textContains(msg1,stringResources.INVALID_TOKEN))&&textContains(msg1,"'a'"))&&textContains(msg1,"'b'"))&&textContains(msg1,"'c'"))&&textContains(msg1,"'d'"))&&(nconst1===0))&&(apos0===(-1)))&&cppNumericCast(cppNumericCast((cppNumericCast(alias(afound1,null),"int")&cppNumericCast(alias(afound11,null),"int")),"int"),"bool"))&&syn2)&&textContains(msg2,stringResources.NO_ERRORS_DETECTED))&&(!textContains(msg2,"'a'")))&&(!textContains(msg2,"'b'")))&&(!textContains(msg2,"'c'")))&&(!textContains(msg2,"'d'")))&&(nconst2===4))&&(apos2===0))&&alias(afound2,afound21))&&(afound2.getConstantName()==="a"))&&(!syn3))&&textContains(msg3,stringResources.INVALID_TOKEN))&&textContains(msg3,"'a'"))&&textContains(msg3,"'b'"))&&textContains(msg3,"'c'"))&&textContains(msg3,"'d'"))&&(nconst3===0))&&(apos3===(-1)))&&cppNumericCast(cppNumericCast((cppNumericCast(alias(afound3,null),"int")&cppNumericCast(alias(afound31,null),"int")),"int"),"bool"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0226(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - defineArguments(String... argumentsNames) / getArgumentIndex(string argumentName) / getArgument(string argumentName) / getArgument(int argumentIndex) / getArgumentsNumber() / removeAllArguments()";
void 0 /* console diagnostics */;
let x=keep(new mx.Function("x(n) = a+b+c+d+e+f"));
let nullStr=null;
x.defineArguments(nullStr);
let syn1=x.checkSyntax();
let msg1=x.getErrorMessage();
let narg1=x.getArgumentsNumber();
let apos0=x.getArgumentIndex(null);
let apos1=x.getArgumentIndex("a");
let afound1=keep(x.getArgument(apos1));
let afound11=keep(x.getArgument("a"));
x.defineArguments("c","a","b");
let syn2=x.checkSyntax();
let msg2=x.getErrorMessage();
let narg2=x.getArgumentsNumber();
let apos2=x.getArgumentIndex("a");
let afound2=keep(x.getArgument(apos2));
let afound21=keep(x.getArgument("a"));
x.defineArguments(nullStr);
x.defineArguments("d","f");
let syn3=x.checkSyntax();
let msg3=x.getErrorMessage();
let narg3=x.getArgumentsNumber();
let apos3=x.getArgumentIndex("a");
let afound3=keep(x.getArgument(apos3));
let afound31=keep(x.getArgument("a"));
x.removeAllArguments();
x.defineArguments(nullStr);
let syn4=x.checkSyntax();
let msg4=x.getErrorMessage();
let narg4=x.getArgumentsNumber();
let apos4=x.getArgumentIndex("a");
let afound4=keep(x.getArgument(apos4));
let afound41=keep(x.getArgument("a"));
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((((((((((((((((((((!syn1)&&textContains(msg1,stringResources.INVALID_TOKEN))&&textContains(msg1,"'a'"))&&textContains(msg1,"'b'"))&&textContains(msg1,"'c'"))&&textContains(msg1,"'d'"))&&textContains(msg1,"'f'"))&&(narg1===1))&&(apos0===(-1)))&&(apos1===(-1)))&&alias(afound1,null))&&alias(afound11,null))&&(!syn2))&&textContains(msg2,stringResources.INVALID_TOKEN))&&textContains(msg2,"'d'"))&&textContains(msg2,"'f'"))&&(narg2===4))&&(apos2===2))&&alias(afound2,afound21))&&(afound2.getArgumentName()==="a"))&&syn3)&&textContains(msg3,stringResources.NO_ERRORS_DETECTED))&&(!textContains(msg3,"'a'")))&&(!textContains(msg3,"'b'")))&&(!textContains(msg3,"'c'")))&&(!textContains(msg3,"'d'")))&&(!textContains(msg3,"'f'")))&&(narg3===6))&&(apos3===2))&&alias(afound3,afound31))&&(afound3.getArgumentName()==="a"))&&(!syn4))&&textContains(msg4,stringResources.INVALID_TOKEN))&&textContains(msg4,"'a'"))&&textContains(msg4,"'b'"))&&textContains(msg4,"'c'"))&&textContains(msg4,"'d'"))&&textContains(msg4,"'f'"))&&(narg4===0))&&(apos4===(-1)))&&alias(afound4,null))&&alias(afound41,null))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0227(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - defineArguments(String... getFunctionIndex / getFunction / getFunctionsNumber / removeAllFunctions";
void 0 /* console diagnostics */;
let x=keep(new mx.Function("x(n) = a(1)+b(2)+c(3)+d(4)"));
let a=keep(new mx.Function("a(x) = x"));
let b=keep(new mx.Function("b(x) = x"));
let c=keep(new mx.Function("c(x) = x"));
let d=keep(new mx.Function("d(x) = x"));
let nfun0=x.getFunctionsNumber();
x.addFunctions(a,b,c,d);
let syn1=x.checkSyntax();
let msg1=x.getErrorMessage();
let nfun1=x.getFunctionsNumber();
let n1=keep(x.getFunction(null));
let n2=keep(x.getFunction((-1)));
let f=keep(x.getFunction("f"));
let bpos=x.getFunctionIndex("b");
let b1=keep(x.getFunction(bpos));
x.removeAllFunctions();
let nfun2=x.getFunctionsNumber();
let syn2=x.checkSyntax();
let msg2=x.getErrorMessage();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((nfun0===0)&&syn1)&&textContains(msg1,stringResources.NO_ERRORS_DETECTED))&&(nfun1===4))&&alias(n1,null))&&alias(n2,null))&&alias(f,null))&&(bpos===2))&&alias(b1,b))&&(nfun2===0))&&(!syn2))&&textContains(msg2,stringResources.INVALID_TOKEN))&&textContains(msg2,"'a'"))&&textContains(msg2,"'b'"))&&textContains(msg2,"'c'"))&&textContains(msg2,"'d'"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0228(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - getRecursiveMode";
void 0 /* console diagnostics */;
let f1=keep(new mx.Function("f1(n) = if(n > 1; n*f1(n-1); 1)"));
let f2=keep(new mx.Function("f2(n) = if(n > 1; n*sin(n-1); 1)"));
let syn1=f1.checkSyntax();
let syn2=f2.checkSyntax();
if((((syn1&&syn2)&&f1.getRecursiveMode())&&(!f2.getRecursiveMode()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0229(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - getParametersNumber / setParametersNumber / getParameterName";
void 0 /* console diagnostics */;
let f1=keep(new mx.Function("f1(x) = 2*x"));
let f2=keep(new mx.Function("f2(x,y) = x+y"));
let f3=keep(new mx.Function("f3(...) = [npar]"));
let funExt=extensionFixture(mx,"FunExt");
let funExtVar=extensionFixture(mx,"FunExtVar");
let f4=keep(new mx.Function("f4",nullableExtension(mx,"FunctionExtension",funExt)));
let f5=keep(new mx.Function("f4",nullableExtension(mx,"FunctionExtensionVariadic",funExtVar)));
let f6=keep(new mx.Function("f6(x,y) = x+y"));
let n1=f1.getParametersNumber();
f1.calculate(1,2,3,4,5);
let n11=f1.getParametersNumber();
let n2=f2.getParametersNumber();
f2.calculate(1,2,3,4,5);
let n21=f2.getParametersNumber();
let n3=f3.getParametersNumber();
f3.calculate(1,2,3,4,5);
let n31=f3.getParametersNumber();
let n4=f4.getParametersNumber();
f4.calculate(1,2,3,4,5);
let n41=f4.getParametersNumber();
let n5=f5.getParametersNumber();
f5.calculate(1,2,3,4,5);
let n51=f5.getParametersNumber();
let n6=f6.getParametersNumber();
f6.setParametersNumber((-1));
let n61=f6.getParametersNumber();
f6.setParametersNumber(3);
let n62=f6.getParametersNumber();
let x1=f1.getParameterName(0);
let x11=f1.getParameterName((-1));
let x12=f1.getParameterName(10);
let x2=f2.getParameterName(0);
let x21=f2.getParameterName(1);
let x22=f2.getParameterName(10);
let x3=f3.getParameterName(0);
let x31=f3.getParameterName((-1));
let x32=f3.getParameterName(10);
let x4=f4.getParameterName(1);
let x41=f4.getParameterName((-1));
let x42=f4.getParameterName(10);
let x5=f5.getParameterName(1);
let x51=f5.getParameterName((-1));
let x52=f5.getParameterName(10);
if(((((((((((((((((((((((((((((n1===1)&&(n11===1))&&(n2===2))&&(n21===2))&&(n3===(-1)))&&(n31===5))&&(n4===2))&&(n41===2))&&(n5===(-1)))&&(n51===5))&&(n6===2))&&(n61===2))&&(n62===3))&&(x1==="x"))&&(x11===""))&&(x12===""))&&(x2==="x"))&&(x21==="y"))&&(x22===""))&&(x3===""))&&(x31===""))&&(x32===""))&&(x4==="y"))&&(x41===""))&&(x42===""))&&(x5===""))&&(x51===""))&&(x52===""))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0231(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - consolePrintln / consolePrintln / resetConsoleOutput / getConsoleOutput / setConsoleOutputPrefix";
void 0 /* console diagnostics */;
mx.mXparser.resetConsoleOutput();
let cleanA=mx.mXparser.getConsoleOutput();
mx.mXparser.setConsoleOutputPrefix("TEST A: ");
mx.mXparser.consolePrintln("A1");
mx.mXparser.consolePrintln("A2");
let testA=mx.mXparser.getConsoleOutput();
mx.mXparser.setConsoleOutputPrefix("TEST B: ");
mx.mXparser.consolePrint("B1");
mx.mXparser.consolePrintln("B2");
let testB=mx.mXparser.getConsoleOutput();
mx.mXparser.resetConsoleOutput();
let cleanB=mx.mXparser.getConsoleOutput();
mx.mXparser.setDefaultConsoleOutputPrefix();
mx.mXparser.consolePrintln("C1");
mx.mXparser.consolePrintln("C2");
let testC=mx.mXparser.getConsoleOutput();
mx.mXparser.resetConsoleOutput();
let cleanC=mx.mXparser.getConsoleOutput();
let newLine=mx.StringInvariant.NEW_LINE;
let resultA=(((("TEST A: A1"+newLine)+"TEST A: A2")+newLine)+"TEST A: ");
let resultB=(((((("TEST A: A1"+newLine)+"TEST A: A2")+newLine)+"TEST A: B1B2")+newLine)+"TEST B: ");
let defaultPrefix=(("[mXparser-v."+mx.mXparser.VERSION)+"] ");
let resultC=((((((defaultPrefix+"C1")+newLine)+defaultPrefix)+"C2")+newLine)+defaultPrefix);
if(((((((testA===resultA)&&(stringSize(cleanA,true)===cppNumericCast(0,"unsigned long")))&&(testB===resultB))&&(stringSize(cleanB,true)===cppNumericCast(0,"unsigned long")))&&(testC===resultC))&&(stringSize(cleanC,true)===cppNumericCast(0,"unsigned long")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0232(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getLicense";
void 0 /* console diagnostics */;
let license1=mx.License.geTermsOfAgreement();
let license2=mx.License.MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT;
let license3=mx.mXparser.LICENSE;
let license4=mx.mXparser.getLicense();
if((((license1===license2)&&textContains(license3,license1))&&textContains(license4,license1))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0234(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Constant API - public Constant(string constantName, double constantValue)";
void 0 /* console diagnostics */;
mx.mXparser.resetCancelCurrentCalculationFlag();
let nullStr=null;
let c1=keep(new mx.Constant(nullStr,1));
let c2=keep(new mx.Constant("1a",1));
let c3=keep(new mx.Constant("2+3",1));
let c4=keep(new mx.Constant("f(1)",1));
let c5=keep(new mx.Constant("a",1));
let c6=keep(new mx.Constant("a1",2));
let c7=keep(new mx.Constant(" [a1]   ",3));
let msg1=c1.getErrorMessage();
let msg2=c2.getErrorMessage();
let msg3=c3.getErrorMessage();
let msg4=c4.getErrorMessage();
let msg5=c5.getErrorMessage();
let msg6=c6.getErrorMessage();
let msg7=c7.getErrorMessage();
let syn1=c1.getSyntaxStatus();
let syn2=c2.getSyntaxStatus();
let syn3=c3.getSyntaxStatus();
let syn4=c4.getSyntaxStatus();
let syn5=c5.getSyntaxStatus();
let syn6=c6.getSyntaxStatus();
let syn7=c7.getSyntaxStatus();
let n1=c1.getConstantName();
let n2=c2.getConstantName();
let n3=c3.getConstantName();
let n4=c4.getConstantName();
let n5=c5.getConstantName();
let n6=c6.getConstantName();
let n7=c7.getConstantName();
let v1=c1.getConstantValue();
let v2=c2.getConstantValue();
let v3=c3.getConstantValue();
let v4=c4.getConstantValue();
let v5=c5.getConstantValue();
let v6=c6.getConstantValue();
let v7=c7.getConstantValue();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((((((!syn1)&&textContains(msg1,stringResources.PROVIDED_STRING_IS_NULL))&&Number.isNaN(v1))&&(n1===""))&&(!syn2))&&textContains(msg2,stringResources.INVALID_CONSTANT_NAME))&&Number.isNaN(v2))&&(n2===""))&&(!syn3))&&textContains(msg3,stringResources.INVALID_CONSTANT_NAME))&&Number.isNaN(v3))&&(n3===""))&&(!syn4))&&textContains(msg4,stringResources.INVALID_CONSTANT_NAME))&&Number.isNaN(v4))&&(n4===""))&&syn5)&&textContains(msg5,stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION))&&(v5===cppNumericCast(1,"double")))&&(n5==="a"))&&syn6)&&textContains(msg6,stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION))&&(v6===cppNumericCast(2,"double")))&&(n6==="a1"))&&syn7)&&textContains(msg7,stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION))&&(v7===cppNumericCast(3,"double")))&&(n7==="[a1]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0235(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Constant API - public Constant(string constantName, double constantValue, string description)";
void 0 /* console diagnostics */;
mx.mXparser.resetCancelCurrentCalculationFlag();
let nullStr=null;
let aStr="a";
let description="test description";
let descriptionPtr=description;
let c1=keep(new mx.Constant(nullStr,1,descriptionPtr));
let c2=keep(new mx.Constant(aStr,1,nullStr));
let c3=keep(new mx.Constant("2+3",1,description));
let c4=keep(new mx.Constant("f(1)",1,description));
let c5=keep(new mx.Constant("a",1,description));
let c6=keep(new mx.Constant("a1",2,description));
let c7=keep(new mx.Constant(" [a1]   ",3,description));
let msg1=c1.getErrorMessage();
let msg2=c2.getErrorMessage();
let msg3=c3.getErrorMessage();
let msg4=c4.getErrorMessage();
let msg5=c5.getErrorMessage();
let msg6=c6.getErrorMessage();
let msg7=c7.getErrorMessage();
let syn1=c1.getSyntaxStatus();
let syn2=c2.getSyntaxStatus();
let syn3=c3.getSyntaxStatus();
let syn4=c4.getSyntaxStatus();
let syn5=c5.getSyntaxStatus();
let syn6=c6.getSyntaxStatus();
let syn7=c7.getSyntaxStatus();
let n1=c1.getConstantName();
let n2=c2.getConstantName();
let n3=c3.getConstantName();
let n4=c4.getConstantName();
let n5=c5.getConstantName();
let n6=c6.getConstantName();
let n7=c7.getConstantName();
let d1=c1.getDescription();
let d2=c2.getDescription();
let d3=c3.getDescription();
let d4=c4.getDescription();
let d5=c5.getDescription();
let d6=c6.getDescription();
let d7=c7.getDescription();
let v1=c1.getConstantValue();
let v2=c2.getConstantValue();
let v3=c3.getConstantValue();
let v4=c4.getConstantValue();
let v5=c5.getConstantValue();
let v6=c6.getConstantValue();
let v7=c7.getConstantValue();
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((((((((((((((((((!syn1)&&textContains(msg1,stringResources.PROVIDED_STRING_IS_NULL))&&Number.isNaN(v1))&&(n1===""))&&(d1===""))&&(!syn2))&&textContains(msg2,stringResources.PROVIDED_STRING_IS_NULL))&&Number.isNaN(v2))&&(n2===""))&&(d2===""))&&(!syn3))&&textContains(msg3,stringResources.INVALID_CONSTANT_NAME))&&Number.isNaN(v3))&&(n3===""))&&(d3===""))&&(!syn4))&&textContains(msg4,stringResources.INVALID_CONSTANT_NAME))&&Number.isNaN(v4))&&(n4===""))&&(d4===""))&&syn5)&&textContains(msg5,stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION))&&(v5===cppNumericCast(1,"double")))&&(n5==="a"))&&(d5===description))&&syn6)&&textContains(msg6,stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION))&&(v6===cppNumericCast(2,"double")))&&(n6==="a1"))&&(d6===description))&&syn7)&&textContains(msg7,stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION))&&(v7===cppNumericCast(3,"double")))&&(n7==="[a1]"))&&(d7===description))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0236(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Constant API - public Constant(string constantDefinitionString, PrimitiveElement...elements)";
void 0 /* console diagnostics */;
mx.mXparser.resetCancelCurrentCalculationFlag();
let nullStr=null;
let nullParams=null;
let x=keep(new mx.Constant("x",4));
let c1=keep(new mx.Constant(nullStr,x));
let c2=keep(new mx.Constant("a",nullParams));
let c3=keep(new mx.Constant("2+3",x));
let c4=keep(new mx.Constant("f(1)",x));
let c5=keep(new mx.Constant("a = 2*x",x));
let c6=keep(new mx.Constant("a1 = 3*x",x));
let c7=keep(new mx.Constant(" [a1]   =   4*x  ",x));
let msg1=c1.getErrorMessage();
let msg2=c2.getErrorMessage();
let msg3=c3.getErrorMessage();
let msg4=c4.getErrorMessage();
let msg5=c5.getErrorMessage();
let msg6=c6.getErrorMessage();
let msg7=c7.getErrorMessage();
let syn1=c1.getSyntaxStatus();
let syn2=c2.getSyntaxStatus();
let syn3=c3.getSyntaxStatus();
let syn4=c4.getSyntaxStatus();
let syn5=c5.getSyntaxStatus();
let syn6=c6.getSyntaxStatus();
let syn7=c7.getSyntaxStatus();
let n1=c1.getConstantName();
let n2=c2.getConstantName();
let n3=c3.getConstantName();
let n4=c4.getConstantName();
let n5=c5.getConstantName();
let n6=c6.getConstantName();
let n7=c7.getConstantName();
let v1=c1.getConstantValue();
let v2=c2.getConstantValue();
let v3=c3.getConstantValue();
let v4=c4.getConstantValue();
let v5=c5.getConstantValue();
let v6=c6.getConstantValue();
let v7=c7.getConstantValue();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((((((!syn1)&&textContains(msg1,stringResources.PROVIDED_STRING_IS_NULL))&&Number.isNaN(v1))&&(n1===""))&&(!syn2))&&textContains(msg2,stringResources.PROVIDED_ELEMENTS_ARE_NULL))&&Number.isNaN(v2))&&(n2===""))&&(!syn3))&&textContains(msg3,stringResources.INVALID_CONSTANT_DEFINITION))&&Number.isNaN(v3))&&(n3===""))&&(!syn4))&&textContains(msg4,stringResources.INVALID_CONSTANT_DEFINITION))&&Number.isNaN(v4))&&(n4===""))&&syn5)&&textContains(msg5,stringResources.NO_ERRORS_DETECTED))&&(v5===cppNumericCast(8,"double")))&&(n5==="a"))&&syn6)&&textContains(msg6,stringResources.NO_ERRORS_DETECTED))&&(v6===cppNumericCast(12,"double")))&&(n6==="a1"))&&syn7)&&textContains(msg7,stringResources.NO_ERRORS_DETECTED))&&(v7===cppNumericCast(16,"double")))&&(n7==="[a1]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0237(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Constant API - setConstantName / setConstantValue / setDescription";
void 0 /* console diagnostics */;
mx.mXparser.resetCancelCurrentCalculationFlag();
let nullStr=null;
let x=keep(new mx.Constant("x",4));
let c1=keep(new mx.Constant(nullStr,x));
let c2=keep(new mx.Constant("1a",1));
let c3=keep(new mx.Constant("2+3",x));
let c4=keep(new mx.Constant("f(1)",x));
let c5=keep(new mx.Constant("a = 2*x",x));
let c6=keep(new mx.Constant("a1 = 3*x",x));
let c7=keep(new mx.Constant(" [a1]   =   4*x  ",x));
c1.setConstantName("[c1]");
c2.setConstantName("c2");
c3.setConstantName("c3");
c4.setConstantName("c4");
c5.setConstantName(nullStr);
c6.setConstantName("a1");
c7.setConstantName("1a");
c1.setConstantValue(cppNumericCast(1,"double"));
c2.setConstantValue(cppNumericCast(2,"double"));
c3.setConstantValue(cppNumericCast(3,"double"));
c4.setConstantValue(cppNumericCast(4,"double"));
c5.setConstantValue(cppNumericCast(5,"double"));
c6.setConstantValue(cppNumericCast(6,"double"));
c7.setConstantValue(cppNumericCast(7,"double"));
let msg1=c1.getErrorMessage();
let msg2=c2.getErrorMessage();
let msg3=c3.getErrorMessage();
let msg4=c4.getErrorMessage();
let msg5=c5.getErrorMessage();
let msg6=c6.getErrorMessage();
let msg7=c7.getErrorMessage();
let syn1=c1.getSyntaxStatus();
let syn2=c2.getSyntaxStatus();
let syn3=c3.getSyntaxStatus();
let syn4=c4.getSyntaxStatus();
let syn5=c5.getSyntaxStatus();
let syn6=c6.getSyntaxStatus();
let syn7=c7.getSyntaxStatus();
let n1=c1.getConstantName();
let n2=c2.getConstantName();
let n3=c3.getConstantName();
let n4=c4.getConstantName();
let n5=c5.getConstantName();
let n6=c6.getConstantName();
let n7=c7.getConstantName();
let v1=c1.getConstantValue();
let v2=c2.getConstantValue();
let v3=c3.getConstantValue();
let v4=c4.getConstantValue();
let v5=c5.getConstantValue();
let v6=c6.getConstantValue();
let v7=c7.getConstantValue();
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((((((((((syn1&&textContains(msg1,stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION))&&(v1===cppNumericCast(1,"double")))&&(n1==="[c1]"))&&syn2)&&textContains(msg2,stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION))&&(v2===cppNumericCast(2,"double")))&&(n2==="c2"))&&syn3)&&textContains(msg3,stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION))&&(v3===cppNumericCast(3,"double")))&&(n3==="c3"))&&syn4)&&textContains(msg4,stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION))&&(v4===cppNumericCast(4,"double")))&&(n4==="c4"))&&syn5)&&textContains(msg5,stringResources.NO_ERRORS_DETECTED))&&(v5===cppNumericCast(5,"double")))&&(n5==="a"))&&syn6)&&textContains(msg6,stringResources.NO_ERRORS_DETECTED))&&(v6===cppNumericCast(6,"double")))&&(n6==="a1"))&&syn7)&&textContains(msg7,stringResources.NO_ERRORS_DETECTED))&&(v7===cppNumericCast(7,"double")))&&(n7==="[a1]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0239(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringModel / StringResources API";
void 0 /* console diagnostics */;
let testStringResources=keep(resourcesFixture(mx));
let nullStringResources=null;
let stringResources1=keep(mx.StringModel.getStringResources());
mx.StringModel.setStringResources(nullStringResources);
let stringResources2=keep(mx.StringModel.getStringResources());
mx.StringModel.setStringResources(testStringResources);
let stringResources3=keep(mx.StringModel.getStringResources());
mx.mXparser.resetConsoleOutput();
mx.mXparser.consolePrintHelp();
let help1=mx.mXparser.getConsoleOutput();
mx.StringModel.setDefaultStringResources();
let stringResources4=keep(mx.StringModel.getStringResources());
mx.mXparser.resetConsoleOutput();
mx.mXparser.consolePrintHelp();
let help2=mx.mXparser.getConsoleOutput();
if(((((((((((((((((((((((((alias(stringResources1,stringResources2)&&alias(stringResources3,testStringResources))&&!(alias(stringResources4,testStringResources)))&&!((help1===help2)))&&textContains(help1,testStringResources.ALL_HELP_CONTENT))&&(!textContains(help2,testStringResources.ALL_HELP_CONTENT)))&&(!textContains(help1,stringResources4.ALL_HELP_CONTENT)))&&textContains(help2,stringResources4.ALL_HELP_CONTENT))&&textContains(help1,testStringResources.KEYWORD))&&(!textContains(help2,testStringResources.KEYWORD)))&&(!textContains(help1,stringResources4.KEYWORD)))&&textContains(help2,stringResources4.KEYWORD))&&textContains(help1,testStringResources.SYNTAX))&&(!textContains(help2,testStringResources.SYNTAX)))&&(!textContains(help1,stringResources4.SYNTAX)))&&textContains(help2,stringResources4.SYNTAX))&&textContains(help1,testStringResources.NUMBER_LITERAL))&&(!textContains(help2,testStringResources.NUMBER_LITERAL)))&&(!textContains(help1,stringResources4.NUMBER_LITERAL)))&&textContains(help2,stringResources4.NUMBER_LITERAL))&&textContains(help1,testStringResources.DESCRIPTION))&&(!textContains(help2,testStringResources.DESCRIPTION)))&&(!textContains(help1,stringResources4.DESCRIPTION)))&&textContains(help2,stringResources4.DESCRIPTION))&&!((testStringResources.USER_LANGUAGE===stringResources4.USER_LANGUAGE)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0240(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="SerializationUtils API - enable / disable / isEnabled / status / message";
void 0 /* console diagnostics */;
mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
let statusEnabled=mx.SerializationUtils.checkLastOperationWasSuccessful();
let isEnabled=mx.SerializationUtils.isBinarySerializationEnabled();
let msgEnabled=mx.SerializationUtils.getLastOperationMessage();
mx.SerializationUtils.disableBinarySerialization();
let isDisabled=(!mx.SerializationUtils.isBinarySerializationEnabled());
let statusDisabled=mx.SerializationUtils.checkLastOperationWasSuccessful();
let msgDisabled=mx.SerializationUtils.getLastOperationMessage();
let stringResources=keep(mx.StringModel.getStringResources());
if((((((isEnabled&&isDisabled)&&statusEnabled)&&statusDisabled)&&textContains(msgEnabled,stringResources.BINARY_SERIALIZATION_ENABLED))&&textContains(msgDisabled,stringResources.BINARY_SERIALIZATION_DISABLED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0242(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="SerializationUtils API - serializeToBytes / nullObject";
void 0 /* console diagnostics */;
mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
let nullObject=null;
let nullObjectExecuted=mx.SerializationUtils.serializeToBytes(nullObject);
let nullObjectPathMsg=mx.SerializationUtils.getLastOperationMessage();
let nullObjectStatus=mx.SerializationUtils.checkLastOperationWasSuccessful();
mx.SerializationUtils.disableBinarySerialization();
let stringResources=keep(mx.StringModel.getStringResources());
if(((alias(nullObjectExecuted,null)&&(!nullObjectStatus))&&textContains(nullObjectPathMsg,stringResources.NULL_OBJECT_PROVIDED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0243(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="SerializationUtils API - deserializeFromBytes / deserializeFromstring + nullData";
void 0 /* console diagnostics */;
mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
let nullData=null;
let nullStr=null;
let nullDataX=keep(mx.SerializationUtils.deserializeFromBytes(nullData,mx.Argument));
let nullDataMsg=mx.SerializationUtils.getLastOperationMessage();
let nullDataStatus=mx.SerializationUtils.checkLastOperationWasSuccessful();
let nullStrX=keep(mx.SerializationUtils.deserializeFromString(nullStr,mx.Argument));
let nullStrMsg=mx.SerializationUtils.getLastOperationMessage();
let nullStrStatus=mx.SerializationUtils.checkLastOperationWasSuccessful();
mx.SerializationUtils.disableBinarySerialization();
let stringResources=keep(mx.StringModel.getStringResources());
if((((((alias(nullDataX,null)&&(!nullDataStatus))&&textContains(nullDataMsg,stringResources.NULL_DATA_PROVIDED))&&alias(nullStrX,null))&&(!nullStrStatus))&&textContains(nullStrMsg,stringResources.NULL_DATA_PROVIDED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0245(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2 x","2*x"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0246(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"x 2 ","x*2"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0247(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"2 x sin(x) ","2*x*sin(x)"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0248(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"  (  2+3)  n x sin(  x )   ","(2+3)*n*x*sin(x)"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0249(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication & canonical expression string test";
void 0 /* console diagnostics */;
(testResult=canonical(mx,keep,"-  (-2+3)  -n -x sin(  -  x   )   ","-(-2+3)-n-x*sin(-x)"));
void 0 /* console diagnostics */;
check(testResult);
},
testApi0250(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsCsv()";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=mx.mXparser.getHelpAsCsv();
let linesNumber=mx.StringUtils.countLines(help);
let quote="\"";
let dlm=";";
let quoteDlm=((quote+dlm)+quote);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,quoteDlm);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((linesNumber===(elementsNumber+1))&&(elementsNumber>500))&&(dlmOccurrences===(linesNumber*4)))&&textContains(help,((quote+stringResources.KEYWORD)+quote)))&&textContains(help,((quote+stringResources.TYPE)+quote)))&&textContains(help,((quote+stringResources.SYNTAX)+quote)))&&textContains(help,((quote+stringResources.SINCE)+quote)))&&textContains(help,((quote+stringResources.DESCRIPTION)+quote)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0251(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsCsv(query)";
void 0 /* console diagnostics */;
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelpAsCsv(query);
let linesNumber=mx.StringUtils.countLines(help);
let quote="\"";
let dlm=";";
let quoteDlm=((quote+dlm)+quote);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,quoteDlm);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((linesNumber===(elementsNumber+1))&&(elementsNumber>5))&&(elementsNumber<100))&&(dlmOccurrences===(linesNumber*4)))&&textContains(help,((quote+stringResources.KEYWORD)+quote)))&&textContains(help,((quote+stringResources.TYPE)+quote)))&&textContains(help,((quote+stringResources.SYNTAX)+quote)))&&textContains(help,((quote+stringResources.SINCE)+quote)))&&textContains(help,((quote+stringResources.DESCRIPTION)+quote)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0252(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsCsv(asjfdkasjfdhkjhkasfdlkh)";
void 0 /* console diagnostics */;
let query="asjfdkasjfdhkjhkasfdlkh";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelpAsCsv(query);
let linesNumber=mx.StringUtils.countLines(help);
let quote="\"";
let dlm=";";
let quoteDlm=((quote+dlm)+quote);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,quoteDlm);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((linesNumber===(elementsNumber+1))&&(elementsNumber===0))&&(dlmOccurrences===(linesNumber*4)))&&textContains(help,((quote+stringResources.KEYWORD)+quote)))&&textContains(help,((quote+stringResources.TYPE)+quote)))&&textContains(help,((quote+stringResources.SYNTAX)+quote)))&&textContains(help,((quote+stringResources.SINCE)+quote)))&&textContains(help,((quote+stringResources.DESCRIPTION)+quote)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0253(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsCsv(nullptr)";
void 0 /* console diagnostics */;
let query=null;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelpAsCsv(query);
let linesNumber=mx.StringUtils.countLines(help);
let quote="\"";
let dlm=";";
let quoteDlm=((quote+dlm)+quote);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,quoteDlm);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((linesNumber===(elementsNumber+1))&&(elementsNumber>500))&&(dlmOccurrences===(linesNumber*4)))&&textContains(help,((quote+stringResources.KEYWORD)+quote)))&&textContains(help,((quote+stringResources.TYPE)+quote)))&&textContains(help,((quote+stringResources.SYNTAX)+quote)))&&textContains(help,((quote+stringResources.SINCE)+quote)))&&textContains(help,((quote+stringResources.DESCRIPTION)+quote)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0254(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsCsv(quote, delimiter, addHeader)";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let quote="''";
let dlm=";;";
let quoteDlm=((quote+dlm)+quote);
let help=mx.mXparser.getHelpAsCsv(quote,dlm,false);
let linesNumber=mx.StringUtils.countLines(help);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,quoteDlm);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((linesNumber===elementsNumber)&&(elementsNumber>500))&&(dlmOccurrences===(linesNumber*4)))&&(!textContains(help,((quote+stringResources.KEYWORD)+quote))))&&(!textContains(help,((quote+stringResources.TYPE)+quote))))&&(!textContains(help,((quote+stringResources.SYNTAX)+quote))))&&(!textContains(help,((quote+stringResources.SINCE)+quote))))&&(!textContains(help,((quote+stringResources.DESCRIPTION)+quote))))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0255(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsCsv(query, quote, delimiter, addHeader)";
void 0 /* console diagnostics */;
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let quote="''";
let dlm=";;";
let quoteDlm=((quote+dlm)+quote);
let help=mx.mXparser.getHelpAsCsv(query,quote,dlm,true);
let linesNumber=mx.StringUtils.countLines(help);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,quoteDlm);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((linesNumber===(elementsNumber+1))&&(elementsNumber>5))&&(elementsNumber<100))&&(dlmOccurrences===(linesNumber*4)))&&textContains(help,((quote+stringResources.KEYWORD)+quote)))&&textContains(help,((quote+stringResources.TYPE)+quote)))&&textContains(help,((quote+stringResources.SYNTAX)+quote)))&&textContains(help,((quote+stringResources.SINCE)+quote)))&&textContains(help,((quote+stringResources.DESCRIPTION)+quote)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0256(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable()";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=mx.mXparser.getHelpAsHtmlTable();
let linesNumber=mx.StringUtils.countLines(help);
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft="<table>";
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let cssClass="class=\"";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((((((linesNumber===(elementsNumber+6))&&(elementsNumber>500))&&(figureLeftOccurrences===0))&&(figcaptionLeftOccurrences===0))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===1))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===5))&&(tdLeftOccurrences===(elementsNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===0))&&textContains(help,((thLeft+stringResources.KEYWORD)+thRight)))&&textContains(help,((thLeft+stringResources.TYPE)+thRight)))&&textContains(help,((thLeft+stringResources.SYNTAX)+thRight)))&&textContains(help,((thLeft+stringResources.SINCE)+thRight)))&&textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight)))&&textContains(help,stringResources.ALL_HELP_CONTENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0257(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(sine)";
void 0 /* console diagnostics */;
let query="sine";
let elementNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelpAsHtmlTable(query);
let linesNumber=mx.StringUtils.countLines(help);
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft="<table>";
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let cssClass="class=\"";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((linesNumber===(elementNumber+6))&&(elementNumber>5))&&(elementNumber<100))&&(figureLeftOccurrences===0))&&(figcaptionLeftOccurrences===0))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===1))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===5))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===0))&&textContains(help,((thLeft+stringResources.KEYWORD)+thRight)))&&textContains(help,((thLeft+stringResources.TYPE)+thRight)))&&textContains(help,((thLeft+stringResources.SYNTAX)+thRight)))&&textContains(help,((thLeft+stringResources.SINCE)+thRight)))&&textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight)))&&textContains(help,stringResources.HELP_CONTENT_LIMITED_TO_QUERY))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0258(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(asjfdkasjfdhkjhkasfdlkh)";
void 0 /* console diagnostics */;
let query="asjfdkasjfdhkjhkasfdlkh";
let elementNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelpAsHtmlTable(query);
let linesNumber=mx.StringUtils.countLines(help);
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft="<table>";
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let cssClass="class=\"";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((((((linesNumber===(elementNumber+6))&&(elementNumber===0))&&(figureLeftOccurrences===0))&&(figcaptionLeftOccurrences===0))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===1))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===5))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===0))&&textContains(help,((thLeft+stringResources.KEYWORD)+thRight)))&&textContains(help,((thLeft+stringResources.TYPE)+thRight)))&&textContains(help,((thLeft+stringResources.SYNTAX)+thRight)))&&textContains(help,((thLeft+stringResources.SINCE)+thRight)))&&textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight)))&&textContains(help,stringResources.HELP_CONTENT_LIMITED_TO_QUERY))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0259(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(addHeader = true, addCaption = true, addFigure = true, caption = '', cssClass = '')";
void 0 /* console diagnostics */;
let elementNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=mx.mXparser.getHelpAsHtmlTable(true,true,true,"","");
let linesNumber=mx.StringUtils.countLines(help);
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft="<table>";
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let cssClass="class=\"";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((((((linesNumber===(elementNumber+8))&&(elementNumber>500))&&(figureLeftOccurrences===1))&&(figcaptionLeftOccurrences===1))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===0))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===5))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===0))&&textContains(help,((thLeft+stringResources.KEYWORD)+thRight)))&&textContains(help,((thLeft+stringResources.TYPE)+thRight)))&&textContains(help,((thLeft+stringResources.SYNTAX)+thRight)))&&textContains(help,((thLeft+stringResources.SINCE)+thRight)))&&textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight)))&&textContains(help,stringResources.ALL_HELP_CONTENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0260(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(addHeader = true, addCaption = true, addFigure = true, caption = 'This is a caption', cssClass = 'wp-1')";
void 0 /* console diagnostics */;
let elementNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let captionText="This is a caption";
let cssClassText="wp-1";
let help=mx.mXparser.getHelpAsHtmlTable(true,true,true,captionText,cssClassText);
let linesNumber=mx.StringUtils.countLines(help);
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft="<table>";
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let cssClass=(("class=\""+cssClassText)+"\"");
let figureLeft=(("<figure "+cssClass)+">");
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let captionTextOccurrences=mx.StringUtils.countOccurrences(help,captionText);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((linesNumber===(elementNumber+8))&&(elementNumber>500))&&(figureLeftOccurrences===1))&&(figcaptionLeftOccurrences===1))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===0))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===5))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===1))&&(captionTextOccurrences===1))&&textContains(help,((thLeft+stringResources.KEYWORD)+thRight)))&&textContains(help,((thLeft+stringResources.TYPE)+thRight)))&&textContains(help,((thLeft+stringResources.SYNTAX)+thRight)))&&textContains(help,((thLeft+stringResources.SINCE)+thRight)))&&textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight)))&&textContains(help,captionText))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0261(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(addHeader = true, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
void 0 /* console diagnostics */;
let elementNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let captionText="This is a caption";
let cssClassText="wp-1";
let help=mx.mXparser.getHelpAsHtmlTable(true,true,false,captionText,cssClassText);
let linesNumber=mx.StringUtils.countLines(help);
let cssClass=(("class=\""+cssClassText)+"\"");
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft=(("<table "+cssClass)+">");
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let captionTextOccurrences=mx.StringUtils.countOccurrences(help,captionText);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((linesNumber===(elementNumber+6))&&(elementNumber>500))&&(figureLeftOccurrences===0))&&(figcaptionLeftOccurrences===0))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===1))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===5))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===1))&&(captionTextOccurrences===1))&&textContains(help,((thLeft+stringResources.KEYWORD)+thRight)))&&textContains(help,((thLeft+stringResources.TYPE)+thRight)))&&textContains(help,((thLeft+stringResources.SYNTAX)+thRight)))&&textContains(help,((thLeft+stringResources.SINCE)+thRight)))&&textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight)))&&textContains(help,captionText))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0262(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(addHeader = false, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
void 0 /* console diagnostics */;
let elementNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let captionText="This is a caption";
let cssClassText="wp-1";
let help=mx.mXparser.getHelpAsHtmlTable(false,true,false,captionText,cssClassText);
let linesNumber=mx.StringUtils.countLines(help);
let cssClass=(("class=\""+cssClassText)+"\"");
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft=(("<table "+cssClass)+">");
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let captionTextOccurrences=mx.StringUtils.countOccurrences(help,captionText);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((linesNumber===(elementNumber+5))&&(elementNumber>500))&&(figureLeftOccurrences===0))&&(figcaptionLeftOccurrences===0))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===1))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===0))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===1))&&(captionTextOccurrences===1))&&(!textContains(help,((thLeft+stringResources.KEYWORD)+thRight))))&&(!textContains(help,((thLeft+stringResources.TYPE)+thRight))))&&(!textContains(help,((thLeft+stringResources.SYNTAX)+thRight))))&&(!textContains(help,((thLeft+stringResources.SINCE)+thRight))))&&(!textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight))))&&textContains(help,captionText))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0263(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(addHeader = false, addCaption = false, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
void 0 /* console diagnostics */;
let elementNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let captionText="This is a caption";
let cssClassText="wp-1";
let help=mx.mXparser.getHelpAsHtmlTable(false,false,false,captionText,cssClassText);
let linesNumber=mx.StringUtils.countLines(help);
let cssClass=(("class=\""+cssClassText)+"\"");
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft=(("<table "+cssClass)+">");
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let captionTextOccurrences=mx.StringUtils.countOccurrences(help,captionText);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((linesNumber===(elementNumber+4))&&(elementNumber>500))&&(figureLeftOccurrences===0))&&(figcaptionLeftOccurrences===0))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===0))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===0))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===1))&&(captionTextOccurrences===0))&&(!textContains(help,((thLeft+stringResources.KEYWORD)+thRight))))&&(!textContains(help,((thLeft+stringResources.TYPE)+thRight))))&&(!textContains(help,((thLeft+stringResources.SYNTAX)+thRight))))&&(!textContains(help,((thLeft+stringResources.SINCE)+thRight))))&&(!textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight))))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0264(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(addHeader = false, addCaption = false, addFigure = true, caption = 'This is a caption', cssClass = '')";
void 0 /* console diagnostics */;
let elementNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let captionText="This is a caption";
let help=mx.mXparser.getHelpAsHtmlTable(false,false,true,captionText,"");
let linesNumber=mx.StringUtils.countLines(help);
let cssClass="class=\"";
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft="<table>";
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let captionTextOccurrences=mx.StringUtils.countOccurrences(help,captionText);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((linesNumber===(elementNumber+6))&&(elementNumber>500))&&(figureLeftOccurrences===1))&&(figcaptionLeftOccurrences===0))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===0))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===0))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===0))&&(captionTextOccurrences===0))&&(!textContains(help,((thLeft+stringResources.KEYWORD)+thRight))))&&(!textContains(help,((thLeft+stringResources.TYPE)+thRight))))&&(!textContains(help,((thLeft+stringResources.SYNTAX)+thRight))))&&(!textContains(help,((thLeft+stringResources.SINCE)+thRight))))&&(!textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight))))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0265(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(query, addHeader = true, addCaption = true, addFigure = true, caption = '', cssClass = '')";
void 0 /* console diagnostics */;
let query="sine";
let elementNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelpAsHtmlTable(query,true,true,true,"","");
let linesNumber=mx.StringUtils.countLines(help);
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft="<table>";
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let cssClass="class=\"";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((((((((((((((linesNumber===(elementNumber+8))&&(elementNumber>5))&&(elementNumber<100))&&(figureLeftOccurrences===1))&&(figcaptionLeftOccurrences===1))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===0))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===5))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===0))&&textContains(help,((thLeft+stringResources.KEYWORD)+thRight)))&&textContains(help,((thLeft+stringResources.TYPE)+thRight)))&&textContains(help,((thLeft+stringResources.SYNTAX)+thRight)))&&textContains(help,((thLeft+stringResources.SINCE)+thRight)))&&textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight)))&&textContains(help,stringResources.HELP_CONTENT_LIMITED_TO_QUERY))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0266(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(query, addHeader = true, addCaption = true, addFigure = true, caption = 'This is a caption', cssClass = 'wp-1')";
void 0 /* console diagnostics */;
let query="sine";
let elementNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let captionText="This is a caption";
let cssClassText="wp-1";
let help=mx.mXparser.getHelpAsHtmlTable(query,true,true,true,captionText,cssClassText);
let linesNumber=mx.StringUtils.countLines(help);
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft="<table>";
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let cssClass=(("class=\""+cssClassText)+"\"");
let figureLeft=(("<figure "+cssClass)+">");
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let captionTextOccurrences=mx.StringUtils.countOccurrences(help,captionText);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((((((((linesNumber===(elementNumber+8))&&(elementNumber>5))&&(elementNumber<100))&&(figureLeftOccurrences===1))&&(figcaptionLeftOccurrences===1))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===0))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===5))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===1))&&(captionTextOccurrences===1))&&textContains(help,((thLeft+stringResources.KEYWORD)+thRight)))&&textContains(help,((thLeft+stringResources.TYPE)+thRight)))&&textContains(help,((thLeft+stringResources.SYNTAX)+thRight)))&&textContains(help,((thLeft+stringResources.SINCE)+thRight)))&&textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight)))&&textContains(help,captionText))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0267(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(query, addHeader = true, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
void 0 /* console diagnostics */;
let query="sine";
let elementNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let captionText="This is a caption";
let cssClassText="wp-1";
let help=mx.mXparser.getHelpAsHtmlTable(query,true,true,false,captionText,cssClassText);
let linesNumber=mx.StringUtils.countLines(help);
let cssClass=(("class=\""+cssClassText)+"\"");
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft=(("<table "+cssClass)+">");
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let captionTextOccurrences=mx.StringUtils.countOccurrences(help,captionText);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((((((((linesNumber===(elementNumber+6))&&(elementNumber>5))&&(elementNumber<100))&&(figureLeftOccurrences===0))&&(figcaptionLeftOccurrences===0))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===1))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===5))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===1))&&(captionTextOccurrences===1))&&textContains(help,((thLeft+stringResources.KEYWORD)+thRight)))&&textContains(help,((thLeft+stringResources.TYPE)+thRight)))&&textContains(help,((thLeft+stringResources.SYNTAX)+thRight)))&&textContains(help,((thLeft+stringResources.SINCE)+thRight)))&&textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight)))&&textContains(help,captionText))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0268(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(query, addHeader = false, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
void 0 /* console diagnostics */;
let query="sine";
let elementNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let captionText="This is a caption";
let cssClassText="wp-1";
let help=mx.mXparser.getHelpAsHtmlTable(query,false,true,false,captionText,cssClassText);
let linesNumber=mx.StringUtils.countLines(help);
let cssClass=(("class=\""+cssClassText)+"\"");
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft=(("<table "+cssClass)+">");
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let captionTextOccurrences=mx.StringUtils.countOccurrences(help,captionText);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((((((((linesNumber===(elementNumber+5))&&(elementNumber>5))&&(elementNumber<100))&&(figureLeftOccurrences===0))&&(figcaptionLeftOccurrences===0))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===1))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===0))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===1))&&(captionTextOccurrences===1))&&(!textContains(help,((thLeft+stringResources.KEYWORD)+thRight))))&&(!textContains(help,((thLeft+stringResources.TYPE)+thRight))))&&(!textContains(help,((thLeft+stringResources.SYNTAX)+thRight))))&&(!textContains(help,((thLeft+stringResources.SINCE)+thRight))))&&(!textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight))))&&textContains(help,captionText))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0269(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(query, addHeader = false, addCaption = false, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
void 0 /* console diagnostics */;
let query="sine";
let elementNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let captionText="This is a caption";
let cssClassText="wp-1";
let help=mx.mXparser.getHelpAsHtmlTable(query,false,false,false,captionText,cssClassText);
let linesNumber=mx.StringUtils.countLines(help);
let cssClass=(("class=\""+cssClassText)+"\"");
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft=(("<table "+cssClass)+">");
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let captionTextOccurrences=mx.StringUtils.countOccurrences(help,captionText);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((((((((linesNumber===(elementNumber+4))&&(elementNumber>5))&&(elementNumber<100))&&(figureLeftOccurrences===0))&&(figcaptionLeftOccurrences===0))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===0))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===0))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===1))&&(captionTextOccurrences===0))&&(!textContains(help,((thLeft+stringResources.KEYWORD)+thRight))))&&(!textContains(help,((thLeft+stringResources.TYPE)+thRight))))&&(!textContains(help,((thLeft+stringResources.SYNTAX)+thRight))))&&(!textContains(help,((thLeft+stringResources.SINCE)+thRight))))&&(!textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight))))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0270(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable(query, addHeader = false, addCaption = false, addFigure = true, caption = 'This is a caption', cssClass = '')";
void 0 /* console diagnostics */;
let query="sine";
let elementNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let captionText="This is a caption";
let help=mx.mXparser.getHelpAsHtmlTable(query,false,false,true,captionText,"");
let linesNumber=mx.StringUtils.countLines(help);
let cssClass="class=\"";
let tdLeft="<td>";
let tdRight="</td>";
let thLeft="<th>";
let thRight="</th>";
let tableLeft="<table>";
let tableRight="</table>";
let tbodyLeft="<tbody>";
let tbodyRight="</tbody>";
let captionLeft="<caption>";
let captionRight="</caption>";
let figureLeft="<figure>";
let figureRight="</figure>";
let figcaptionLeft="<figcaption>";
let figcaptionRight="</figcaption>";
let tdLeftOccurrences=mx.StringUtils.countOccurrences(help,tdLeft);
let tdRightOccurrences=mx.StringUtils.countOccurrences(help,tdRight);
let thLeftOccurrences=mx.StringUtils.countOccurrences(help,thLeft);
let thRightOccurrences=mx.StringUtils.countOccurrences(help,thRight);
let tableLeftOccurrences=mx.StringUtils.countOccurrences(help,tableLeft);
let tableRightOccurrences=mx.StringUtils.countOccurrences(help,tableRight);
let tbodyLeftOccurrences=mx.StringUtils.countOccurrences(help,tbodyLeft);
let tbodyRightOccurrences=mx.StringUtils.countOccurrences(help,tbodyRight);
let captionLeftOccurrences=mx.StringUtils.countOccurrences(help,captionLeft);
let captionRightOccurrences=mx.StringUtils.countOccurrences(help,captionRight);
let figureLeftOccurrences=mx.StringUtils.countOccurrences(help,figureLeft);
let figureRightOccurrences=mx.StringUtils.countOccurrences(help,figureRight);
let figcaptionLeftOccurrences=mx.StringUtils.countOccurrences(help,figcaptionLeft);
let figcaptionRightOccurrences=mx.StringUtils.countOccurrences(help,figcaptionRight);
let cssClassOccurrences=mx.StringUtils.countOccurrences(help,cssClass);
let captionTextOccurrences=mx.StringUtils.countOccurrences(help,captionText);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((((((((linesNumber===(elementNumber+6))&&(elementNumber>5))&&(elementNumber<100))&&(figureLeftOccurrences===1))&&(figcaptionLeftOccurrences===0))&&(tableLeftOccurrences===1))&&(captionLeftOccurrences===0))&&(tbodyLeftOccurrences===1))&&(thLeftOccurrences===0))&&(tdLeftOccurrences===(elementNumber*5)))&&(tdLeftOccurrences===tdRightOccurrences))&&(thLeftOccurrences===thRightOccurrences))&&(tableLeftOccurrences===tableRightOccurrences))&&(tbodyLeftOccurrences===tbodyRightOccurrences))&&(captionLeftOccurrences===captionRightOccurrences))&&(figureLeftOccurrences===figureRightOccurrences))&&(figcaptionLeftOccurrences===figcaptionRightOccurrences))&&(cssClassOccurrences===0))&&(captionTextOccurrences===0))&&(!textContains(help,((thLeft+stringResources.KEYWORD)+thRight))))&&(!textContains(help,((thLeft+stringResources.TYPE)+thRight))))&&(!textContains(help,((thLeft+stringResources.SYNTAX)+thRight))))&&(!textContains(help,((thLeft+stringResources.SINCE)+thRight))))&&(!textContains(help,((thLeft+stringResources.DESCRIPTION)+thRight))))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0271(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsHtmlTable() - check clean for HTML";
void 0 /* console diagnostics */;
let help=mx.mXparser.getHelpAsHtmlTable();
let ampPure="&";
let ampHtml="&amp;";
let ltPure="<";
let ltHtml="&lt;";
let gtPure=">";
let gtHtml="&gt;";
let ampPureOccurrences=mx.StringUtils.countOccurrences(help,ampPure);
let ampHtmlOccurrences=mx.StringUtils.countOccurrences(help,ampHtml);
let ltPureOccurrences=mx.StringUtils.countOccurrences(help,ltPure);
let ltHtmlOccurrences=mx.StringUtils.countOccurrences(help,ltHtml);
let gtPureOccurrences=mx.StringUtils.countOccurrences(help,gtPure);
let gtHtmlRightOccurrences=mx.StringUtils.countOccurrences(help,gtHtml);
let deltaLtGtureOccurrences=Math.abs((ltPureOccurrences-gtPureOccurrences));
if(((deltaLtGtureOccurrences===0)&&(ampPureOccurrences===((ampHtmlOccurrences+ltHtmlOccurrences)+gtHtmlRightOccurrences)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0272(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable()";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=cleanMarkdown(mx,mx.mXparser.getHelpAsMarkdownTable());
let linesNumber=mx.StringUtils.countLines(help);
let captionStart="### ";
let headLeft="|---";
let headRight="---|";
let dlm="|";
let captionStartOccurrences=mx.StringUtils.countOccurrences(help,captionStart);
let headLeftOccurrences=mx.StringUtils.countOccurrences(help,headLeft);
let headRightOccurrences=mx.StringUtils.countOccurrences(help,headRight);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,dlm);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>500))&&(captionStartOccurrences===1))&&(headLeftOccurrences===5))&&(dlmOccurrences===((elementsNumber+2)*6)))&&(headLeftOccurrences===headRightOccurrences))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,((dlm+stringResources.DESCRIPTION)+dlm)))&&textContains(help,stringResources.ALL_HELP_CONTENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0273(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable(sine)";
void 0 /* console diagnostics */;
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=cleanMarkdown(mx,mx.mXparser.getHelpAsMarkdownTable(query));
let linesNumber=mx.StringUtils.countLines(help);
let captionStart="### ";
let headLeft="|---";
let headRight="---|";
let dlm="|";
let captionStartOccurrences=mx.StringUtils.countOccurrences(help,captionStart);
let headLeftOccurrences=mx.StringUtils.countOccurrences(help,headLeft);
let headRightOccurrences=mx.StringUtils.countOccurrences(help,headRight);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,dlm);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>5))&&(elementsNumber<100))&&(captionStartOccurrences===1))&&(headLeftOccurrences===5))&&(dlmOccurrences===((elementsNumber+2)*6)))&&(headLeftOccurrences===headRightOccurrences))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,((dlm+stringResources.DESCRIPTION)+dlm)))&&textContains(help,stringResources.HELP_CONTENT_LIMITED_TO_QUERY))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0274(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable(asjfdkasjfdhkjhkasfdlkh)";
void 0 /* console diagnostics */;
let query="asjfdkasjfdhkjhkasfdlkh";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=cleanMarkdown(mx,mx.mXparser.getHelpAsMarkdownTable(query));
let linesNumber=mx.StringUtils.countLines(help);
let captionStart="### ";
let headLeft="|---";
let headRight="---|";
let dlm="|";
let captionStartOccurrences=mx.StringUtils.countOccurrences(help,captionStart);
let headLeftOccurrences=mx.StringUtils.countOccurrences(help,headLeft);
let headRightOccurrences=mx.StringUtils.countOccurrences(help,headRight);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,dlm);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((linesNumber===(elementsNumber+3))&&(elementsNumber===0))&&(captionStartOccurrences===1))&&(headLeftOccurrences===5))&&(dlmOccurrences===((elementsNumber+2)*6)))&&(headLeftOccurrences===headRightOccurrences))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,((dlm+stringResources.DESCRIPTION)+dlm)))&&textContains(help,stringResources.HELP_CONTENT_LIMITED_TO_QUERY))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0275(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable(addHeader = true, addCaption = true, caption = '')";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=cleanMarkdown(mx,mx.mXparser.getHelpAsMarkdownTable(true,true,""));
let linesNumber=mx.StringUtils.countLines(help);
let captionStart="### ";
let headLeft="|---";
let headRight="---|";
let dlm="|";
let captionStartOccurrences=mx.StringUtils.countOccurrences(help,captionStart);
let headLeftOccurrences=mx.StringUtils.countOccurrences(help,headLeft);
let headRightOccurrences=mx.StringUtils.countOccurrences(help,headRight);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,dlm);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>500))&&(captionStartOccurrences===1))&&(headLeftOccurrences===5))&&(dlmOccurrences===((elementsNumber+2)*6)))&&(headLeftOccurrences===headRightOccurrences))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,((dlm+stringResources.DESCRIPTION)+dlm)))&&textContains(help,stringResources.ALL_HELP_CONTENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0276(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable(addHeader = true, addCaption = true, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let captionText="This is a caption";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=cleanMarkdown(mx,mx.mXparser.getHelpAsMarkdownTable(true,true,captionText));
let linesNumber=mx.StringUtils.countLines(help);
let captionStart="### ";
let headLeft="|---";
let headRight="---|";
let dlm="|";
let captionStartOccurrences=mx.StringUtils.countOccurrences(help,captionStart);
let headLeftOccurrences=mx.StringUtils.countOccurrences(help,headLeft);
let headRightOccurrences=mx.StringUtils.countOccurrences(help,headRight);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,dlm);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>500))&&(captionStartOccurrences===1))&&(headLeftOccurrences===5))&&(dlmOccurrences===((elementsNumber+2)*6)))&&(headLeftOccurrences===headRightOccurrences))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,((dlm+stringResources.DESCRIPTION)+dlm)))&&textContains(help,captionText))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0277(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable(addHeader = true, addCaption = false, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let captionText="This is a caption";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=cleanMarkdown(mx,mx.mXparser.getHelpAsMarkdownTable(true,false,captionText));
let linesNumber=mx.StringUtils.countLines(help);
let captionStart="### ";
let headLeft="|---";
let headRight="---|";
let dlm="|";
let captionStartOccurrences=mx.StringUtils.countOccurrences(help,captionStart);
let headLeftOccurrences=mx.StringUtils.countOccurrences(help,headLeft);
let headRightOccurrences=mx.StringUtils.countOccurrences(help,headRight);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,dlm);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((linesNumber===(elementsNumber+2))&&(elementsNumber>500))&&(captionStartOccurrences===0))&&(headLeftOccurrences===5))&&(dlmOccurrences===((elementsNumber+2)*6)))&&(headLeftOccurrences===headRightOccurrences))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,((dlm+stringResources.DESCRIPTION)+dlm)))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0278(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable(addHeader = false, addCaption = false, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let captionText="This is a caption";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=cleanMarkdown(mx,mx.mXparser.getHelpAsMarkdownTable(false,false,captionText));
let linesNumber=mx.StringUtils.countLines(help);
let captionStart="### ";
let headLeft="|---";
let headRight="---|";
let dlm="|";
let captionStartOccurrences=mx.StringUtils.countOccurrences(help,captionStart);
let headLeftOccurrences=mx.StringUtils.countOccurrences(help,headLeft);
let headRightOccurrences=mx.StringUtils.countOccurrences(help,headRight);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,dlm);
let stringResources=keep(mx.StringModel.getStringResources());
if(((((((((((((linesNumber===(elementsNumber+2))&&(elementsNumber>500))&&(captionStartOccurrences===0))&&(headLeftOccurrences===5))&&(dlmOccurrences===((elementsNumber+2)*6)))&&(headLeftOccurrences===headRightOccurrences))&&(!textContains(help,((dlm+stringResources.KEYWORD)+dlm))))&&(!textContains(help,((dlm+stringResources.TYPE)+dlm))))&&(!textContains(help,((dlm+stringResources.SYNTAX)+dlm))))&&(!textContains(help,((dlm+stringResources.SINCE)+dlm))))&&(!textContains(help,((dlm+stringResources.DESCRIPTION)+dlm))))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0279(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable(query, addHeader = true, addCaption = true, caption = '')";
void 0 /* console diagnostics */;
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=cleanMarkdown(mx,mx.mXparser.getHelpAsMarkdownTable(query,true,true,""));
let linesNumber=mx.StringUtils.countLines(help);
let captionStart="### ";
let headLeft="|---";
let headRight="---|";
let dlm="|";
let captionStartOccurrences=mx.StringUtils.countOccurrences(help,captionStart);
let headLeftOccurrences=mx.StringUtils.countOccurrences(help,headLeft);
let headRightOccurrences=mx.StringUtils.countOccurrences(help,headRight);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,dlm);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>5))&&(elementsNumber<100))&&(captionStartOccurrences===1))&&(headLeftOccurrences===5))&&(dlmOccurrences===((elementsNumber+2)*6)))&&(headLeftOccurrences===headRightOccurrences))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,((dlm+stringResources.DESCRIPTION)+dlm)))&&textContains(help,stringResources.HELP_CONTENT_LIMITED_TO_QUERY))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0280(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable(query, addHeader = true, addCaption = true, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let captionText="This is a caption";
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=cleanMarkdown(mx,mx.mXparser.getHelpAsMarkdownTable(query,true,true,captionText));
let linesNumber=mx.StringUtils.countLines(help);
let captionStart="### ";
let headLeft="|---";
let headRight="---|";
let dlm="|";
let captionStartOccurrences=mx.StringUtils.countOccurrences(help,captionStart);
let headLeftOccurrences=mx.StringUtils.countOccurrences(help,headLeft);
let headRightOccurrences=mx.StringUtils.countOccurrences(help,headRight);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,dlm);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>5))&&(elementsNumber<100))&&(captionStartOccurrences===1))&&(headLeftOccurrences===5))&&(dlmOccurrences===((elementsNumber+2)*6)))&&(headLeftOccurrences===headRightOccurrences))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,((dlm+stringResources.DESCRIPTION)+dlm)))&&textContains(help,captionText))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0281(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable(query, addHeader = true, addCaption = false, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let captionText="This is a caption";
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=cleanMarkdown(mx,mx.mXparser.getHelpAsMarkdownTable(query,true,false,captionText));
let linesNumber=mx.StringUtils.countLines(help);
let captionStart="### ";
let headLeft="|---";
let headRight="---|";
let dlm="|";
let captionStartOccurrences=mx.StringUtils.countOccurrences(help,captionStart);
let headLeftOccurrences=mx.StringUtils.countOccurrences(help,headLeft);
let headRightOccurrences=mx.StringUtils.countOccurrences(help,headRight);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,dlm);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((linesNumber===(elementsNumber+2))&&(elementsNumber>5))&&(elementsNumber<100))&&(captionStartOccurrences===0))&&(headLeftOccurrences===5))&&(dlmOccurrences===((elementsNumber+2)*6)))&&(headLeftOccurrences===headRightOccurrences))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,((dlm+stringResources.DESCRIPTION)+dlm)))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0282(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable(addHeader = false, addCaption = false, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let captionText="This is a caption";
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=cleanMarkdown(mx,mx.mXparser.getHelpAsMarkdownTable(query,false,false,captionText));
let linesNumber=mx.StringUtils.countLines(help);
let captionStart="### ";
let headLeft="|---";
let headRight="---|";
let dlm="|";
let captionStartOccurrences=mx.StringUtils.countOccurrences(help,captionStart);
let headLeftOccurrences=mx.StringUtils.countOccurrences(help,headLeft);
let headRightOccurrences=mx.StringUtils.countOccurrences(help,headRight);
let dlmOccurrences=mx.StringUtils.countOccurrences(help,dlm);
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((linesNumber===(elementsNumber+2))&&(elementsNumber>5))&&(elementsNumber<100))&&(captionStartOccurrences===0))&&(headLeftOccurrences===5))&&(dlmOccurrences===((elementsNumber+2)*6)))&&(headLeftOccurrences===headRightOccurrences))&&(!textContains(help,((dlm+stringResources.KEYWORD)+dlm))))&&(!textContains(help,((dlm+stringResources.TYPE)+dlm))))&&(!textContains(help,((dlm+stringResources.SYNTAX)+dlm))))&&(!textContains(help,((dlm+stringResources.SINCE)+dlm))))&&(!textContains(help,((dlm+stringResources.DESCRIPTION)+dlm))))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0283(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsMarkdownTable() - check clean for MD";
void 0 /* console diagnostics */;
let help=mx.mXparser.getHelpAsMarkdownTable();
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let pipePure="|";
let pipeMd="\\|";
let backslashMdPipe="\\\\|";
let pipePureOccurrences=mx.StringUtils.countOccurrences(help,pipePure);
let pipeMdOccurrences=mx.StringUtils.countOccurrences(help,pipeMd);
let backslashMdPipeOccurrences=mx.StringUtils.countOccurrences(help,backslashMdPipe);
if((pipePureOccurrences===(((elementsNumber+2)*6)+(pipeMdOccurrences-backslashMdPipeOccurrences)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0284(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelp()";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=mx.mXparser.getHelp();
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let dlm=" ";
if(((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>500))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,(dlm+stringResources.DESCRIPTION)))&&textContains(help,stringResources.ALL_HELP_CONTENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0285(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelp(addHeader = true, addCaption = true, caption = '')";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=mx.mXparser.getHelp(true,true,"");
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let dlm=" ";
if(((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>500))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,(dlm+stringResources.DESCRIPTION)))&&textContains(help,stringResources.ALL_HELP_CONTENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0286(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelp(addHeader = true, addCaption = true, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let captionText="This is a caption";
let help=mx.mXparser.getHelp(true,true,captionText);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let dlm=" ";
if(((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>500))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,(dlm+stringResources.DESCRIPTION)))&&textContains(help,captionText))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0287(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelp(addHeader = true, addCaption = false, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let captionText="This is a caption";
let help=mx.mXparser.getHelp(true,false,captionText);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let dlm=" ";
if(((((((((linesNumber===(elementsNumber+2))&&(elementsNumber>500))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,(dlm+stringResources.DESCRIPTION)))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0288(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelp(addHeader = false, addCaption = false, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let captionText="This is a caption";
let help=mx.mXparser.getHelp(false,false,captionText);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let dlm=" ";
if(((((((((linesNumber===elementsNumber)&&(elementsNumber>500))&&(!textContains(help,((dlm+stringResources.KEYWORD)+dlm))))&&(!textContains(help,((dlm+stringResources.TYPE)+dlm))))&&(!textContains(help,((dlm+stringResources.SYNTAX)+dlm))))&&(!textContains(help,((dlm+stringResources.SINCE)+dlm))))&&(!textContains(help,(dlm+stringResources.DESCRIPTION))))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0289(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelp(query)";
void 0 /* console diagnostics */;
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelp(query);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let dlm=" ";
if((((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>5))&&(elementsNumber<100))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,(dlm+stringResources.DESCRIPTION)))&&textContains(help,stringResources.HELP_CONTENT_LIMITED_TO_QUERY))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0290(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelp(query, addHeader = true, addCaption = true, caption = '')";
void 0 /* console diagnostics */;
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelp(query,true,true,"");
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let dlm=" ";
if((((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>5))&&(elementsNumber<100))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,(dlm+stringResources.DESCRIPTION)))&&textContains(help,stringResources.HELP_CONTENT_LIMITED_TO_QUERY))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0291(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelp(query, addHeader = true, addCaption = true, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let captionText="This is a caption";
let help=mx.mXparser.getHelp(query,true,true,captionText);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let dlm=" ";
if((((((((((linesNumber===(elementsNumber+3))&&(elementsNumber>5))&&(elementsNumber<100))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,(dlm+stringResources.DESCRIPTION)))&&textContains(help,captionText))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0292(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelp(query, addHeader = true, addCaption = false, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let captionText="This is a caption";
let help=mx.mXparser.getHelp(query,true,false,captionText);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let dlm=" ";
if((((((((((linesNumber===(elementsNumber+2))&&(elementsNumber>5))&&(elementsNumber<100))&&textContains(help,((dlm+stringResources.KEYWORD)+dlm)))&&textContains(help,((dlm+stringResources.TYPE)+dlm)))&&textContains(help,((dlm+stringResources.SYNTAX)+dlm)))&&textContains(help,((dlm+stringResources.SINCE)+dlm)))&&textContains(help,(dlm+stringResources.DESCRIPTION)))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0293(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelp(query, addHeader = false, addCaption = false, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let captionText="This is a caption";
let help=mx.mXparser.getHelp(query,false,false,captionText);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let dlm=" ";
if((((((((((linesNumber===elementsNumber)&&(elementsNumber>5))&&(elementsNumber<100))&&(!textContains(help,((dlm+stringResources.KEYWORD)+dlm))))&&(!textContains(help,((dlm+stringResources.TYPE)+dlm))))&&(!textContains(help,((dlm+stringResources.SYNTAX)+dlm))))&&(!textContains(help,((dlm+stringResources.SINCE)+dlm))))&&(!textContains(help,(dlm+stringResources.DESCRIPTION))))&&(!textContains(help,captionText)))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0294(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getKeyWords(query) - advanced search tag: key=";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let tagNumber0=listRead(keep(mx.mXparser.getKeyWords("key=")),"size",[]);
let tagNumber1=listRead(keep(mx.mXparser.getKeyWords("key")),"size",[]);
let tagNumber2=listRead(keep(mx.mXparser.getKeyWords("key=s")),"size",[]);
let tagNumber3=listRead(keep(mx.mXparser.getKeyWords("key=sin")),"size",[]);
let tagNumber2ref=listRead(keep(mx.mXparser.getKeyWords("s")),"size",[]);
let tagNumber3ref=listRead(keep(mx.mXparser.getKeyWords("sin")),"size",[]);
if(((((((((tagNumber0===0)&&(tagNumber1<elementsNumber))&&(tagNumber2>0))&&(tagNumber3>0))&&(tagNumber2>tagNumber3))&&(tagNumber2ref>tagNumber3ref))&&(tagNumber2ref>tagNumber2))&&(tagNumber3ref>tagNumber3))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0295(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getKeyWords(query) - advanced search tag: desc=";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let tagNumber0=listRead(keep(mx.mXparser.getKeyWords("desc=")),"size",[]);
let tagNumber1=listRead(keep(mx.mXparser.getKeyWords("desc")),"size",[]);
let tagNumber2=listRead(keep(mx.mXparser.getKeyWords("desc=s")),"size",[]);
let tagNumber3=listRead(keep(mx.mXparser.getKeyWords("desc=sin")),"size",[]);
let tagNumber2ref=listRead(keep(mx.mXparser.getKeyWords("s")),"size",[]);
let tagNumber3ref=listRead(keep(mx.mXparser.getKeyWords("sin")),"size",[]);
if(((((((((tagNumber0===0)&&(tagNumber1<elementsNumber))&&(tagNumber2>0))&&(tagNumber3>0))&&(tagNumber2>tagNumber3))&&(tagNumber2ref>tagNumber3ref))&&(tagNumber2ref>tagNumber2))&&(tagNumber3ref>tagNumber3))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0296(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getKeyWords(query) - advanced search tag: syn=";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let tagNumber0=listRead(keep(mx.mXparser.getKeyWords("syn=")),"size",[]);
let tagNumber1=listRead(keep(mx.mXparser.getKeyWords("syn")),"size",[]);
let tagNumber2=listRead(keep(mx.mXparser.getKeyWords("syn=s")),"size",[]);
let tagNumber3=listRead(keep(mx.mXparser.getKeyWords("syn=sin")),"size",[]);
let tagNumber2ref=listRead(keep(mx.mXparser.getKeyWords("s")),"size",[]);
let tagNumber3ref=listRead(keep(mx.mXparser.getKeyWords("sin")),"size",[]);
if(((((((((tagNumber0===0)&&(tagNumber1<elementsNumber))&&(tagNumber2>0))&&(tagNumber3>0))&&(tagNumber2>tagNumber3))&&(tagNumber2ref>tagNumber3ref))&&(tagNumber2ref>tagNumber2))&&(tagNumber3ref>tagNumber3))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0297(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getKeyWords(query) - advanced search tag: since=";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let tagNumber0=listRead(keep(mx.mXparser.getKeyWords("since=")),"size",[]);
let tagNumber1=listRead(keep(mx.mXparser.getKeyWords("since")),"size",[]);
let tagNumber2=listRead(keep(mx.mXparser.getKeyWords("since=4")),"size",[]);
let tagNumber3=listRead(keep(mx.mXparser.getKeyWords("since=4.1")),"size",[]);
let tagNumber2ref=listRead(keep(mx.mXparser.getKeyWords("4")),"size",[]);
let tagNumber3ref=listRead(keep(mx.mXparser.getKeyWords("4.1")),"size",[]);
if(((((((((tagNumber0===0)&&(tagNumber1<elementsNumber))&&(tagNumber2>0))&&(tagNumber3>0))&&(tagNumber2>tagNumber3))&&(tagNumber2ref>tagNumber3ref))&&(tagNumber2ref>tagNumber2))&&(tagNumber3ref>tagNumber3))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0298(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getKeyWords(query) - advanced search tag: type=";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let tagNumber0=listRead(keep(mx.mXparser.getKeyWords("type=")),"size",[]);
let tagNumber1=listRead(keep(mx.mXparser.getKeyWords("type")),"size",[]);
let tagNumber2=listRead(keep(mx.mXparser.getKeyWords("type=b")),"size",[]);
let tagNumber3=listRead(keep(mx.mXparser.getKeyWords("type=binary")),"size",[]);
let tagNumber2ref=listRead(keep(mx.mXparser.getKeyWords("b")),"size",[]);
let tagNumber3ref=listRead(keep(mx.mXparser.getKeyWords("binary")),"size",[]);
if(((((((((tagNumber0===0)&&(tagNumber1<elementsNumber))&&(tagNumber2>0))&&(tagNumber3>0))&&(tagNumber2>tagNumber3))&&(tagNumber2ref>tagNumber3ref))&&(tagNumber2ref>tagNumber2))&&(tagNumber3ref>tagNumber3))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0299(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getKeyWords(query) - advanced search tag: type=";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let tagNumber0=listRead(keep(mx.mXparser.getKeyWords("typeid=")),"size",[]);
let tagNumber1=listRead(keep(mx.mXparser.getKeyWords("typeid")),"size",[]);
let tagNumber2=listRead(keep(mx.mXparser.getKeyWords("type=binary relation")),"size",[]);
let tagNumber3=listRead(keep(mx.mXparser.getKeyWords("typeid=3")),"size",[]);
let tagNumber2ref=listRead(keep(mx.mXparser.getKeyWords("b")),"size",[]);
let tagNumber3ref=listRead(keep(mx.mXparser.getKeyWords("binary")),"size",[]);
if(((((((((tagNumber0===0)&&(tagNumber1<elementsNumber))&&(tagNumber2>0))&&(tagNumber3>0))&&(tagNumber2===tagNumber3))&&(tagNumber2ref>tagNumber3ref))&&(tagNumber2ref>tagNumber2))&&(tagNumber3ref>tagNumber3))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0300(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getKeyWords(query) - advanced search tag: keyid=";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let tagNumber0=listRead(keep(mx.mXparser.getKeyWords("keyid=")),"size",[]);
let tagNumber1=listRead(keep(mx.mXparser.getKeyWords("keyid")),"size",[]);
let keyStr=keep(listRead(keep(mx.mXparser.getKeyWords(("keyid="+String(mx.Unit.SECOND_ARC_ID)))),"get",[0])).wordString;
if((((tagNumber0===0)&&(tagNumber1<elementsNumber))&&(keyStr===mx.Unit.SECOND_ARC_STR))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0301(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsJson()";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=mx.mXparser.getHelpAsJson();
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let q="\"";
let qs=(q+":");
let caption=((q+stringResources.CAPTION)+qs);
let keyword=((q+stringResources.KEYWORD)+qs);
let type=((q+stringResources.TYPE)+qs);
let syntax=((q+stringResources.SYNTAX)+qs);
let since=((q+stringResources.SINCE)+qs);
let description=((q+stringResources.DESCRIPTION)+qs);
let recordStart="  {";
let recordEnd1=(q+" },");
let recordEnd2="  }";
let keyColon=(qs+" ");
let partEnd=(q+",");
let partEndCorrection=((((q+": ")+q)+",")+q);
let captionOccurrences=mx.StringUtils.countOccurrences(help,caption);
let keywordOccurrences=mx.StringUtils.countOccurrences(help,keyword);
let typeRightOccurrences=mx.StringUtils.countOccurrences(help,type);
let syntaxOccurrences=mx.StringUtils.countOccurrences(help,syntax);
let sinceOccurrences=mx.StringUtils.countOccurrences(help,since);
let descriptionOccurrences=mx.StringUtils.countOccurrences(help,description);
let recordStartOccurrences=mx.StringUtils.countOccurrences(help,recordStart);
let recordEnd1Occurrences=mx.StringUtils.countOccurrences(help,recordEnd1);
let recordEnd2Occurrences=mx.StringUtils.countOccurrences(help,recordEnd2);
let keyColonOccurrences=mx.StringUtils.countOccurrences(help,keyColon);
let partEndOccurrences=mx.StringUtils.countOccurrences(help,partEnd);
let partEndCorrectionOccurrences=mx.StringUtils.countOccurrences(help,partEndCorrection);
if(((((((((((((((linesNumber===((elementsNumber*7)+3))&&(elementsNumber>500))&&(captionOccurrences===1))&&(keywordOccurrences===elementsNumber))&&(typeRightOccurrences===elementsNumber))&&(syntaxOccurrences===elementsNumber))&&(sinceOccurrences===elementsNumber))&&(descriptionOccurrences===elementsNumber))&&(keyColonOccurrences===((elementsNumber*5)+1)))&&((partEndOccurrences-partEndCorrectionOccurrences)===(elementsNumber*4)))&&(recordStartOccurrences===(recordEnd1Occurrences+recordEnd2Occurrences)))&&textContains(help,stringResources.ALL_HELP_CONTENT))&&textStartsWith(help,"["))&&textEndsWith(help,"]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0302(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsJson(addCaption = true, caption = '')";
void 0 /* console diagnostics */;
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=mx.mXparser.getHelpAsJson(true,"");
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let q="\"";
let qs=(q+":");
let caption=((q+stringResources.CAPTION)+qs);
let keyword=((q+stringResources.KEYWORD)+qs);
let type=((q+stringResources.TYPE)+qs);
let syntax=((q+stringResources.SYNTAX)+qs);
let since=((q+stringResources.SINCE)+qs);
let description=((q+stringResources.DESCRIPTION)+qs);
let recordStart="  {";
let recordEnd1=(q+" },");
let recordEnd2="  }";
let keyColon=(qs+" ");
let partEnd=(q+",");
let partEndCorrection=((((q+": ")+q)+",")+q);
let captionOccurrences=mx.StringUtils.countOccurrences(help,caption);
let keywordOccurrences=mx.StringUtils.countOccurrences(help,keyword);
let typeRightOccurrences=mx.StringUtils.countOccurrences(help,type);
let syntaxOccurrences=mx.StringUtils.countOccurrences(help,syntax);
let sinceOccurrences=mx.StringUtils.countOccurrences(help,since);
let descriptionOccurrences=mx.StringUtils.countOccurrences(help,description);
let recordStartOccurrences=mx.StringUtils.countOccurrences(help,recordStart);
let recordEnd1Occurrences=mx.StringUtils.countOccurrences(help,recordEnd1);
let recordEnd2Occurrences=mx.StringUtils.countOccurrences(help,recordEnd2);
let keyColonOccurrences=mx.StringUtils.countOccurrences(help,keyColon);
let partEndOccurrences=mx.StringUtils.countOccurrences(help,partEnd);
let partEndCorrectionOccurrences=mx.StringUtils.countOccurrences(help,partEndCorrection);
if(((((((((((((((linesNumber===((elementsNumber*7)+3))&&(elementsNumber>500))&&(captionOccurrences===1))&&(keywordOccurrences===elementsNumber))&&(typeRightOccurrences===elementsNumber))&&(syntaxOccurrences===elementsNumber))&&(sinceOccurrences===elementsNumber))&&(descriptionOccurrences===elementsNumber))&&(keyColonOccurrences===((elementsNumber*5)+1)))&&((partEndOccurrences-partEndCorrectionOccurrences)===(elementsNumber*4)))&&(recordStartOccurrences===(recordEnd1Occurrences+recordEnd2Occurrences)))&&textContains(help,stringResources.ALL_HELP_CONTENT))&&textStartsWith(help,"["))&&textEndsWith(help,"]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0303(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsJson(addCaption = true, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let captionText="This is a caption";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=mx.mXparser.getHelpAsJson(true,captionText);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let q="\"";
let qs=(q+":");
let caption=((q+stringResources.CAPTION)+qs);
let keyword=((q+stringResources.KEYWORD)+qs);
let type=((q+stringResources.TYPE)+qs);
let syntax=((q+stringResources.SYNTAX)+qs);
let since=((q+stringResources.SINCE)+qs);
let description=((q+stringResources.DESCRIPTION)+qs);
let recordStart="  {";
let recordEnd1=(q+" },");
let recordEnd2="  }";
let keyColon=(qs+" ");
let partEnd=(q+",");
let partEndCorrection=((((q+": ")+q)+",")+q);
let captionOccurrences=mx.StringUtils.countOccurrences(help,caption);
let keywordOccurrences=mx.StringUtils.countOccurrences(help,keyword);
let typeRightOccurrences=mx.StringUtils.countOccurrences(help,type);
let syntaxOccurrences=mx.StringUtils.countOccurrences(help,syntax);
let sinceOccurrences=mx.StringUtils.countOccurrences(help,since);
let descriptionOccurrences=mx.StringUtils.countOccurrences(help,description);
let recordStartOccurrences=mx.StringUtils.countOccurrences(help,recordStart);
let recordEnd1Occurrences=mx.StringUtils.countOccurrences(help,recordEnd1);
let recordEnd2Occurrences=mx.StringUtils.countOccurrences(help,recordEnd2);
let keyColonOccurrences=mx.StringUtils.countOccurrences(help,keyColon);
let partEndOccurrences=mx.StringUtils.countOccurrences(help,partEnd);
let partEndCorrectionOccurrences=mx.StringUtils.countOccurrences(help,partEndCorrection);
if(((((((((((((((linesNumber===((elementsNumber*7)+3))&&(elementsNumber>500))&&(captionOccurrences===1))&&(keywordOccurrences===elementsNumber))&&(typeRightOccurrences===elementsNumber))&&(syntaxOccurrences===elementsNumber))&&(sinceOccurrences===elementsNumber))&&(descriptionOccurrences===elementsNumber))&&(keyColonOccurrences===((elementsNumber*5)+1)))&&((partEndOccurrences-partEndCorrectionOccurrences)===(elementsNumber*4)))&&(recordStartOccurrences===(recordEnd1Occurrences+recordEnd2Occurrences)))&&textContains(help,captionText))&&textStartsWith(help,"["))&&textEndsWith(help,"]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0304(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsJson(addCaption = false, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let captionText="This is a caption";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords()),"size",[]);
let help=mx.mXparser.getHelpAsJson(false,captionText);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let q="\"";
let qs=(q+":");
let caption=((q+stringResources.CAPTION)+qs);
let keyword=((q+stringResources.KEYWORD)+qs);
let type=((q+stringResources.TYPE)+qs);
let syntax=((q+stringResources.SYNTAX)+qs);
let since=((q+stringResources.SINCE)+qs);
let description=((q+stringResources.DESCRIPTION)+qs);
let recordStart="  {";
let recordEnd1=(q+" },");
let recordEnd2="  }";
let keyColon=(qs+" ");
let partEnd=(q+",");
let partEndCorrection=((((q+": ")+q)+",")+q);
let captionOccurrences=mx.StringUtils.countOccurrences(help,caption);
let keywordOccurrences=mx.StringUtils.countOccurrences(help,keyword);
let typeRightOccurrences=mx.StringUtils.countOccurrences(help,type);
let syntaxOccurrences=mx.StringUtils.countOccurrences(help,syntax);
let sinceOccurrences=mx.StringUtils.countOccurrences(help,since);
let descriptionOccurrences=mx.StringUtils.countOccurrences(help,description);
let recordStartOccurrences=mx.StringUtils.countOccurrences(help,recordStart);
let recordEnd1Occurrences=mx.StringUtils.countOccurrences(help,recordEnd1);
let recordEnd2Occurrences=mx.StringUtils.countOccurrences(help,recordEnd2);
let keyColonOccurrences=mx.StringUtils.countOccurrences(help,keyColon);
let partEndOccurrences=mx.StringUtils.countOccurrences(help,partEnd);
let partEndCorrectionOccurrences=mx.StringUtils.countOccurrences(help,partEndCorrection);
if(((((((((((((((linesNumber===((elementsNumber*7)+2))&&(elementsNumber>500))&&(captionOccurrences===0))&&(keywordOccurrences===elementsNumber))&&(typeRightOccurrences===elementsNumber))&&(syntaxOccurrences===elementsNumber))&&(sinceOccurrences===elementsNumber))&&(descriptionOccurrences===elementsNumber))&&(keyColonOccurrences===(elementsNumber*5)))&&((partEndOccurrences-partEndCorrectionOccurrences)===(elementsNumber*4)))&&(recordStartOccurrences===(recordEnd1Occurrences+recordEnd2Occurrences)))&&(!textContains(help,captionText)))&&textStartsWith(help,"["))&&textEndsWith(help,"]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0305(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsJson(query)";
void 0 /* console diagnostics */;
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelpAsJson(query);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let q="\"";
let qs=(q+":");
let caption=((q+stringResources.CAPTION)+qs);
let keyword=((q+stringResources.KEYWORD)+qs);
let type=((q+stringResources.TYPE)+qs);
let syntax=((q+stringResources.SYNTAX)+qs);
let since=((q+stringResources.SINCE)+qs);
let description=((q+stringResources.DESCRIPTION)+qs);
let recordStart="  {";
let recordEnd1=(q+" },");
let recordEnd2="  }";
let keyColon=(qs+" ");
let partEnd=(q+",");
let partEndCorrection=((((q+": ")+q)+",")+q);
let captionOccurrences=mx.StringUtils.countOccurrences(help,caption);
let keywordOccurrences=mx.StringUtils.countOccurrences(help,keyword);
let typeRightOccurrences=mx.StringUtils.countOccurrences(help,type);
let syntaxOccurrences=mx.StringUtils.countOccurrences(help,syntax);
let sinceOccurrences=mx.StringUtils.countOccurrences(help,since);
let descriptionOccurrences=mx.StringUtils.countOccurrences(help,description);
let recordStartOccurrences=mx.StringUtils.countOccurrences(help,recordStart);
let recordEnd1Occurrences=mx.StringUtils.countOccurrences(help,recordEnd1);
let recordEnd2Occurrences=mx.StringUtils.countOccurrences(help,recordEnd2);
let keyColonOccurrences=mx.StringUtils.countOccurrences(help,keyColon);
let partEndOccurrences=mx.StringUtils.countOccurrences(help,partEnd);
let partEndCorrectionOccurrences=mx.StringUtils.countOccurrences(help,partEndCorrection);
if((((((((((((((((linesNumber===((elementsNumber*7)+3))&&(elementsNumber>5))&&(elementsNumber<100))&&(captionOccurrences===1))&&(keywordOccurrences===elementsNumber))&&(typeRightOccurrences===elementsNumber))&&(syntaxOccurrences===elementsNumber))&&(sinceOccurrences===elementsNumber))&&(descriptionOccurrences===elementsNumber))&&(keyColonOccurrences===((elementsNumber*5)+1)))&&((partEndOccurrences-partEndCorrectionOccurrences)===(elementsNumber*4)))&&(recordStartOccurrences===(recordEnd1Occurrences+recordEnd2Occurrences)))&&textContains(help,stringResources.HELP_CONTENT_LIMITED_TO_QUERY))&&textStartsWith(help,"["))&&textEndsWith(help,"]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0306(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsJson(query, addCaption = true, caption = '')";
void 0 /* console diagnostics */;
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelpAsJson(query,true,"");
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let q="\"";
let qs=(q+":");
let caption=((q+stringResources.CAPTION)+qs);
let keyword=((q+stringResources.KEYWORD)+qs);
let type=((q+stringResources.TYPE)+qs);
let syntax=((q+stringResources.SYNTAX)+qs);
let since=((q+stringResources.SINCE)+qs);
let description=((q+stringResources.DESCRIPTION)+qs);
let recordStart="  {";
let recordEnd1=(q+" },");
let recordEnd2="  }";
let keyColon=(qs+" ");
let partEnd=(q+",");
let partEndCorrection=((((q+": ")+q)+",")+q);
let captionOccurrences=mx.StringUtils.countOccurrences(help,caption);
let keywordOccurrences=mx.StringUtils.countOccurrences(help,keyword);
let typeRightOccurrences=mx.StringUtils.countOccurrences(help,type);
let syntaxOccurrences=mx.StringUtils.countOccurrences(help,syntax);
let sinceOccurrences=mx.StringUtils.countOccurrences(help,since);
let descriptionOccurrences=mx.StringUtils.countOccurrences(help,description);
let recordStartOccurrences=mx.StringUtils.countOccurrences(help,recordStart);
let recordEnd1Occurrences=mx.StringUtils.countOccurrences(help,recordEnd1);
let recordEnd2Occurrences=mx.StringUtils.countOccurrences(help,recordEnd2);
let keyColonOccurrences=mx.StringUtils.countOccurrences(help,keyColon);
let partEndOccurrences=mx.StringUtils.countOccurrences(help,partEnd);
let partEndCorrectionOccurrences=mx.StringUtils.countOccurrences(help,partEndCorrection);
if((((((((((((((((linesNumber===((elementsNumber*7)+3))&&(elementsNumber>5))&&(elementsNumber<100))&&(captionOccurrences===1))&&(keywordOccurrences===elementsNumber))&&(typeRightOccurrences===elementsNumber))&&(syntaxOccurrences===elementsNumber))&&(sinceOccurrences===elementsNumber))&&(descriptionOccurrences===elementsNumber))&&(keyColonOccurrences===((elementsNumber*5)+1)))&&((partEndOccurrences-partEndCorrectionOccurrences)===(elementsNumber*4)))&&(recordStartOccurrences===(recordEnd1Occurrences+recordEnd2Occurrences)))&&textContains(help,stringResources.HELP_CONTENT_LIMITED_TO_QUERY))&&textStartsWith(help,"["))&&textEndsWith(help,"]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0307(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsJson(query, addCaption = true, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let captionText="This is a caption";
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelpAsJson(query,true,captionText);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let q="\"";
let qs=(q+":");
let caption=((q+stringResources.CAPTION)+qs);
let keyword=((q+stringResources.KEYWORD)+qs);
let type=((q+stringResources.TYPE)+qs);
let syntax=((q+stringResources.SYNTAX)+qs);
let since=((q+stringResources.SINCE)+qs);
let description=((q+stringResources.DESCRIPTION)+qs);
let recordStart="  {";
let recordEnd1=(q+" },");
let recordEnd2="  }";
let keyColon=(qs+" ");
let partEnd=(q+",");
let partEndCorrection=((((q+": ")+q)+",")+q);
let captionOccurrences=mx.StringUtils.countOccurrences(help,caption);
let keywordOccurrences=mx.StringUtils.countOccurrences(help,keyword);
let typeRightOccurrences=mx.StringUtils.countOccurrences(help,type);
let syntaxOccurrences=mx.StringUtils.countOccurrences(help,syntax);
let sinceOccurrences=mx.StringUtils.countOccurrences(help,since);
let descriptionOccurrences=mx.StringUtils.countOccurrences(help,description);
let recordStartOccurrences=mx.StringUtils.countOccurrences(help,recordStart);
let recordEnd1Occurrences=mx.StringUtils.countOccurrences(help,recordEnd1);
let recordEnd2Occurrences=mx.StringUtils.countOccurrences(help,recordEnd2);
let keyColonOccurrences=mx.StringUtils.countOccurrences(help,keyColon);
let partEndOccurrences=mx.StringUtils.countOccurrences(help,partEnd);
let partEndCorrectionOccurrences=mx.StringUtils.countOccurrences(help,partEndCorrection);
if((((((((((((((((linesNumber===((elementsNumber*7)+3))&&(elementsNumber>5))&&(elementsNumber<100))&&(captionOccurrences===1))&&(keywordOccurrences===elementsNumber))&&(typeRightOccurrences===elementsNumber))&&(syntaxOccurrences===elementsNumber))&&(sinceOccurrences===elementsNumber))&&(descriptionOccurrences===elementsNumber))&&(keyColonOccurrences===((elementsNumber*5)+1)))&&((partEndOccurrences-partEndCorrectionOccurrences)===(elementsNumber*4)))&&(recordStartOccurrences===(recordEnd1Occurrences+recordEnd2Occurrences)))&&textContains(help,captionText))&&textStartsWith(help,"["))&&textEndsWith(help,"]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0308(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser API - getHelpAsJson(query, addCaption = false, caption = 'This is a caption')";
void 0 /* console diagnostics */;
let captionText="This is a caption";
let query="sine";
let elementsNumber=listRead(keep(mx.mXparser.getKeyWords(query)),"size",[]);
let help=mx.mXparser.getHelpAsJson(query,false,captionText);
let linesNumber=mx.StringUtils.countLines(help);
let stringResources=keep(mx.StringModel.getStringResources());
let q="\"";
let qs=(q+":");
let caption=((q+stringResources.CAPTION)+qs);
let keyword=((q+stringResources.KEYWORD)+qs);
let type=((q+stringResources.TYPE)+qs);
let syntax=((q+stringResources.SYNTAX)+qs);
let since=((q+stringResources.SINCE)+qs);
let description=((q+stringResources.DESCRIPTION)+qs);
let recordStart="  {";
let recordEnd1=(q+" },");
let recordEnd2="  }";
let keyColon=(qs+" ");
let partEnd=(q+",");
let partEndCorrection=((((q+": ")+q)+",")+q);
let captionOccurrences=mx.StringUtils.countOccurrences(help,caption);
let keywordOccurrences=mx.StringUtils.countOccurrences(help,keyword);
let typeRightOccurrences=mx.StringUtils.countOccurrences(help,type);
let syntaxOccurrences=mx.StringUtils.countOccurrences(help,syntax);
let sinceOccurrences=mx.StringUtils.countOccurrences(help,since);
let descriptionOccurrences=mx.StringUtils.countOccurrences(help,description);
let recordStartOccurrences=mx.StringUtils.countOccurrences(help,recordStart);
let recordEnd1Occurrences=mx.StringUtils.countOccurrences(help,recordEnd1);
let recordEnd2Occurrences=mx.StringUtils.countOccurrences(help,recordEnd2);
let keyColonOccurrences=mx.StringUtils.countOccurrences(help,keyColon);
let partEndOccurrences=mx.StringUtils.countOccurrences(help,partEnd);
let partEndCorrectionOccurrences=mx.StringUtils.countOccurrences(help,partEndCorrection);
if((((((((((((((((linesNumber===((elementsNumber*7)+2))&&(elementsNumber>5))&&(elementsNumber<100))&&(captionOccurrences===0))&&(keywordOccurrences===elementsNumber))&&(typeRightOccurrences===elementsNumber))&&(syntaxOccurrences===elementsNumber))&&(sinceOccurrences===elementsNumber))&&(descriptionOccurrences===elementsNumber))&&(keyColonOccurrences===(elementsNumber*5)))&&((partEndOccurrences-partEndCorrectionOccurrences)===(elementsNumber*4)))&&(recordStartOccurrences===(recordEnd1Occurrences+recordEnd2Occurrences)))&&(!textContains(help,captionText)))&&textStartsWith(help,"["))&&textEndsWith(help,"]"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0309(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument API - cloneThreadSafe()";
void 0 /* console diagnostics */;
let f=keep(new mx.Function("f(x) = x^2"));
let c=keep(new mx.Constant("c = 3"));
let a=keep(new mx.Argument("a = 2"));
a.setDescription("Clone");
let b=keep(new mx.Argument("b = 2*a + f(c-c)",[a,f,c]));
let bc=keep(b.cloneForThreadSafe());
let ac=keep(bc.getArgument("a"));
let a_n1=a.getArgumentName();
let b_n1=b.getArgumentName();
let ac_n1=ac.getArgumentName();
let bc_n1=bc.getArgumentName();
let a_v1=a.getArgumentValue();
let b_v1=b.getArgumentValue();
let ac_v1=ac.getArgumentValue();
let bc_v1=bc.getArgumentValue();
a.setArgumentValue(cppNumericCast(3,"double"));
let a_v2=a.getArgumentValue();
let b_v2=b.getArgumentValue();
let ac_v2=ac.getArgumentValue();
let bc_v2=bc.getArgumentValue();
ac.setArgumentValue(cppNumericCast(4,"double"));
let a_v3=a.getArgumentValue();
let b_v3=b.getArgumentValue();
let ac_v3=ac.getArgumentValue();
let bc_v3=bc.getArgumentValue();
a.setArgumentName("b");
let a_n2=a.getArgumentName();
let b_n2=b.getArgumentName();
let ac_n2=ac.getArgumentName();
let bc_n2=bc.getArgumentName();
let a_s1=a.checkSyntax();
let b_s1=b.checkSyntax();
let a_m1=a.getErrorMessage();
let b_m1=b.getErrorMessage();
let ac_s1=ac.checkSyntax();
let bc_s1=bc.checkSyntax();
let ac_m1=ac.getErrorMessage();
let bc_m1=bc.getErrorMessage();
ac.setArgumentName("c");
let a_n3=a.getArgumentName();
let b_n3=b.getArgumentName();
let ac_n3=ac.getArgumentName();
let bc_n3=bc.getArgumentName();
let a_s2=a.checkSyntax();
let b_s2=b.checkSyntax();
let a_m2=a.getErrorMessage();
let b_m2=b.getErrorMessage();
let ac_s2=ac.checkSyntax();
let bc_s2=bc.checkSyntax();
let ac_m2=ac.getErrorMessage();
let bc_m2=bc.getErrorMessage();
let stringResources=keep(mx.StringModel.getStringResources());
if((((((((((((((((((((((((((((((((((((((((((!(alias(a,ac))&&!(alias(b,bc)))&&(a.getDescription()==="Clone"))&&(ac.getDescription()==="Clone"))&&(a.getArgumentType()===ac.getArgumentType()))&&(b.getArgumentType()===bc.getArgumentType()))&&(a.getArgumentBodyType()===ac.getArgumentBodyType()))&&(b.getArgumentBodyType()===bc.getArgumentBodyType()))&&(a_n1===ac_n1))&&(b_n1===bc_n1))&&(a_v1===cppNumericCast(2,"double")))&&(b_v1===cppNumericCast(4,"double")))&&(ac_v1===cppNumericCast(2,"double")))&&(bc_v1===cppNumericCast(4,"double")))&&(a_v2===cppNumericCast(3,"double")))&&(b_v2===cppNumericCast(6,"double")))&&(ac_v2===cppNumericCast(2,"double")))&&(bc_v2===cppNumericCast(4,"double")))&&(a_v3===cppNumericCast(3,"double")))&&(b_v3===cppNumericCast(6,"double")))&&(ac_v3===cppNumericCast(4,"double")))&&(bc_v3===cppNumericCast(8,"double")))&&a_s1)&&(!b_s1))&&textContains(a_m1,stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&textContains(b_m1,stringResources.INVALID_TOKEN))&&ac_s1)&&bc_s1)&&textContains(ac_m1,stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&textContains(bc_m1,stringResources.ALREADY_CHECKED_NO_ERRORS))&&!((a_n2===ac_n2)))&&(b_n2===bc_n2))&&a_s2)&&(!b_s2))&&textContains(a_m2,stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&textContains(b_m2,stringResources.INVALID_TOKEN))&&ac_s2)&&(!bc_s2))&&textContains(ac_m2,stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION))&&textContains(bc_m2,stringResources.INVALID_TOKEN))&&!((a_n3===ac_n3)))&&(b_n3===bc_n3))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0310(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Constant API - cloneThreadSafe()";
void 0 /* console diagnostics */;
let a=keep(new mx.Constant("a = 3"));
a.setDescription("Clone");
let e=keep(new mx.Expression("a*a",a));
let ac=keep(a.cloneForThreadSafe());
let a_n1=a.getConstantName();
let ac_n1=ac.getConstantName();
let a_v1=a.getConstantValue();
let ac_v1=ac.getConstantValue();
a.setConstantName("b");
a.setConstantValue(cppNumericCast(4,"double"));
let a_n2=a.getConstantName();
let ac_n2=ac.getConstantName();
let a_v2=a.getConstantValue();
let ac_v2=ac.getConstantValue();
ac.setConstantName("c");
ac.setConstantValue(cppNumericCast(5,"double"));
let a_n3=a.getConstantName();
let ac_n3=ac.getConstantName();
let a_v3=a.getConstantValue();
let ac_v3=ac.getConstantValue();
if(((((((((((((((!(alias(a,ac))&&(a.getDescription()==="Clone"))&&(ac.getDescription()==="Clone"))&&(a_n1==="a"))&&(ac_n1==="a"))&&(a_v1===cppNumericCast(3,"double")))&&(ac_v1===cppNumericCast(3,"double")))&&(a_n2==="b"))&&(ac_n2==="a"))&&(a_v2===cppNumericCast(4,"double")))&&(ac_v2===cppNumericCast(3,"double")))&&(a_n3==="b"))&&(ac_n3==="c"))&&(a_v3===cppNumericCast(4,"double")))&&(ac_v3===cppNumericCast(5,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0311(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="RecursiveArgument API - cloneThreadSafe()";
void 0 /* console diagnostics */;
let c=keep(new mx.Constant("c = 2"));
let a=keep(new mx.Constant("a = 2"));
let g=keep(new mx.Function("g(x,y) = x - y"));
let f=keep(new mx.RecursiveArgument("fib(n) = fib(n-1)+fib(n-2) + g(c,a)",c,a,g));
f.addBaseCase(0,cppNumericCast(0,"double"));
f.addBaseCase(1,cppNumericCast(1,"double"));
f.setDescription("Clone");
let f_n1=f.getArgumentName();
let f_v1=f.getArgumentValue(cppNumericCast(6,"double"));
let fc=nativeCast(keep(f.cloneForThreadSafe()),mx.RecursiveArgument);
let fc_n1=fc.getArgumentName();
let fc_v1=fc.getArgumentValue(cppNumericCast(6,"double"));
let f_v2=f.getArgumentValue(cppNumericCast(8,"double"));
let fc_v2=fc.getArgumentValue(cppNumericCast(8,"double"));
let f_v3=f.getArgumentValue(cppNumericCast(19,"double"));
let fc_v3=fc.getArgumentValue(cppNumericCast(19,"double"));
if(((((((((((!(alias(f,fc))&&(f.getDescription()==="Clone"))&&(fc.getDescription()==="Clone"))&&(f_n1==="fib"))&&(fc_n1==="fib"))&&(f_v1===cppNumericCast(8,"double")))&&(fc_v1===cppNumericCast(8,"double")))&&(f_v2===cppNumericCast(21,"double")))&&(fc_v2===cppNumericCast(21,"double")))&&(f_v3===cppNumericCast(4181,"double")))&&(fc_v3===cppNumericCast(4181,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0312(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Function API - cloneThreadSafe()";
void 0 /* console diagnostics */;
let a=keep(new mx.Constant("a = 0.001"));
let s=keep(new mx.Function("s(x) = if( abs(x) < a, x, 2*s(x/2)*c(x/2) )",[a]));
let c=keep(new mx.Function("c(x) = if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )",[a]));
s.addDefinitions(c);
c.addDefinitions(s);
s.setDescription("Clone");
c.setDescription("Clone");
a.setDescription("Clone");
let s_v1=s.calculate(mx.MathConstants.PIBY2);
let c_v1=c.calculate(mx.MathConstants.PIBY2);
let sc=keep(s.cloneForThreadSafe());
let cc=keep(c.cloneForThreadSafe());
let sc_v1=sc.calculate(mx.MathConstants.PIBY2);
let cc_v1=cc.calculate(mx.MathConstants.PIBY2);
let s_v2=s.calculate(mx.MathConstants.PI);
let c_v2=c.calculate(mx.MathConstants.PI);
let sc_v2=sc.calculate(mx.MathConstants.PI);
let cc_v2=cc.calculate(mx.MathConstants.PI);
let sc_c=keep(sc.getFunction("c"));
let sc_c_s=keep(sc_c.getFunction("s"));
let sc_a=keep(sc.getConstant("a"));
let sc_c_a=keep(sc_c.getConstant("a"));
let cc_s=keep(cc.getFunction("s"));
let cc_s_c=keep(cc_s.getFunction("c"));
let cc_a=keep(cc.getConstant("a"));
let cc_s_a=keep(cc_s.getConstant("a"));
if((((((((((((((((((((((((!(alias(s,sc))&&!(alias(c,cc)))&&(s_v1===sc_v1))&&(c_v1===cc_v1))&&(s_v2===sc_v2))&&(c_v2===cc_v2))&&alias(sc,sc_c_s))&&alias(cc,cc_s_c))&&alias(sc_a,sc_c_a))&&alias(cc_a,cc_s_a))&&(s.getDescription()==="Clone"))&&(c.getDescription()==="Clone"))&&(a.getDescription()==="Clone"))&&(sc.getDescription()==="Clone"))&&(cc.getDescription()==="Clone"))&&(sc_a.getDescription()==="Clone"))&&(cc_a.getDescription()==="Clone"))&&(s.getFunctionName()==="s"))&&(c.getFunctionName()==="c"))&&(a.getConstantName()==="a"))&&(sc.getFunctionName()==="s"))&&(cc.getFunctionName()==="c"))&&(sc_a.getConstantName()==="a"))&&(cc_a.getConstantName()==="a"))){(testResult=true);}
void 0 /* console diagnostics */;
// Explicitly disconnect the three user-created mutual ownership cycles.
// Keep every original result/alias assertion before teardown; native C++ tests
// are unchanged. delete() alone does not break the accepted shared_ptr cycles.
try {
check(testResult);
} finally {
s.removeFunctions(c);
c.removeFunctions(s);
sc.removeFunctions(sc_c);
sc_c.removeFunctions(sc);
cc.removeFunctions(cc_s);
cc_s.removeFunctions(cc);
}
},
testApi0313(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Expression API - cloneThreadSafe()";
void 0 /* console diagnostics */;
let a=keep(new mx.Constant("a = 3"));
let x=keep(new mx.Argument("x = 2"));
let y=keep(new mx.Argument("y = x^a + a^2",[x,a]));
let f=keep(new mx.Function("f(x) = 2*x + a",[a]));
let g=keep(new mx.Function("g(x,y) = f(x) + f(y)",[f]));
let fib=keep(new mx.RecursiveArgument("fib(n) = fib(n-1)+fib(n-2) + a",a));
fib.addBaseCase(0,cppNumericCast(0,"double"));
fib.addBaseCase(1,cppNumericCast(1,"double"));
let e=keep(new mx.Expression("y+g(2,3) + fib(10) + f(x) + f(a)",g,y,fib,f,x,a));
let e_v1=e.calculate();
let ec=keep(e.cloneForThreadSafe());
let ec_v1=ec.calculate();
let y1=keep(ec.getArgument("y"));
let x1=keep(ec.getArgument("x"));
let fib1=keep(ec.getArgument("fib"));
let g1=keep(ec.getFunction("g"));
let f1=keep(ec.getFunction("f"));
let a1=keep(ec.getConstant("a"));
let f2=keep(g1.getFunction("f"));
let a2=keep(fib1.getConstant("a"));
let a3=keep(f1.getConstant("a"));
let x2=keep(y1.getArgument("x"));
let a4=keep(y1.getConstant("a"));
let s1=ec.getSyntaxStatus();
let p1=e.getSyntaxStatus();
a1.setConstantName("b");
let s2=ec.getSyntaxStatus();
let p2=e.getSyntaxStatus();
a1.setConstantName("c");
let s3=ec.checkSyntax();
let p3=e.checkSyntax();
a1.setConstantName("a");
let s4=ec.checkSyntax();
let p4=e.checkSyntax();
let s5=ec.getSyntaxStatus();
let p5=e.getSyntaxStatus();
x1.setArgumentName("z");
let s6=ec.getSyntaxStatus();
let p6=e.getSyntaxStatus();
let s7=ec.checkSyntax();
let p7=e.checkSyntax();
x1.setArgumentName("x");
let s8=ec.checkSyntax();
let p8=e.checkSyntax();
let s9=ec.getSyntaxStatus();
let p9=e.getSyntaxStatus();
let n1=f1.getFunctionName();
f1.setFunctionName("ff");
let s10=ec.getSyntaxStatus();
let p10=e.getSyntaxStatus();
let s11=ec.checkSyntax();
let p11=e.checkSyntax();
f1.setFunctionName("f");
let n2=f1.getFunctionName();
let s12=ec.checkSyntax();
let p12=e.checkSyntax();
let e_v2=e.calculate();
let ec_v2=ec.calculate();
if(((((((((((((((((((((((((((((((((((((!(alias(e,ec))&&(e_v1===ec_v1))&&!(alias(a,a1)))&&alias(a1,a2))&&alias(a1,a3))&&alias(a1,a4))&&!(alias(x,x1)))&&alias(x1,x2))&&!(alias(f,f1)))&&alias(f1,f2))&&!(alias(y,y1)))&&!(alias(fib,fib1)))&&s1)&&p1)&&(!s2))&&p2)&&(!s3))&&p3)&&s4)&&p4)&&s5)&&p5)&&(!s6))&&p6)&&(!s7))&&p7)&&s8)&&p8)&&s9)&&p9)&&(!s10))&&p10)&&(!s11))&&p11)&&s12)&&p12)&&(e_v2===ec_v2))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0314(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let exprStr="(2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) - (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) + (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) * 345 * ((897 - 323)/ 23)";
let testDescr=("Expression + CalcStepsRegisterPtr + Full Compilation: "+exprStr);
void 0 /* console diagnostics */;
let r1=keep(new mx.CalcStepsRegister());
let r2=keep(new mx.CalcStepsRegister());
let r3=keep(new mx.CalcStepsRegister());
let e=keep(new mx.Expression(exprStr));
let v1=e.calculate(r1);
let v2=e.calculate(r2);
let v3=e.calculate(r3);
if(((((((v1===v2)&&(v1===v3))&&(listRead(keep(r1.calcStepRecords),"size",[])===listRead(keep(r2.calcStepRecords),"size",[])))&&(listRead(keep(r1.calcStepRecords),"size",[])===listRead(keep(r3.calcStepRecords),"size",[])))&&(r1.toString()===r2.toString()))&&(r1.toString()===r3.toString()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0315(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let exprStr="f(x,y)+z+(x*y)/z";
let testDescr=("Expression + CalcStepsRegisterPtr + Full Compilation: "+exprStr);
void 0 /* console diagnostics */;
let r1=keep(new mx.CalcStepsRegister());
let r2=keep(new mx.CalcStepsRegister());
let r3=keep(new mx.CalcStepsRegister());
let x=keep(new mx.Argument("x","2*rList(2,2,2,2,2)"));
let y=keep(new mx.Argument("y = 2*x",[x]));
let z=keep(new mx.Argument("z = 3*y/x",[x,y]));
let f=keep(new mx.Function("f(a,b) = a*b"));
let e=keep(new mx.Expression(exprStr,x,y,z,f));
let v1=e.calculate(r1);
let v2=e.calculate(r2);
let v3=e.calculate(r3);
if(((((((v1===v2)&&(v1===v3))&&(listRead(keep(r1.calcStepRecords),"size",[])===listRead(keep(r2.calcStepRecords),"size",[])))&&(listRead(keep(r1.calcStepRecords),"size",[])===listRead(keep(r3.calcStepRecords),"size",[])))&&(r1.toString()===r2.toString()))&&(r1.toString()===r3.toString()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0316(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let exprStr="f(a,b) = g(a,b) * a*b";
let testDescr=("Expression + CalcStepsRegisterPtr + Full Compilation: "+exprStr);
void 0 /* console diagnostics */;
let r1=keep(new mx.CalcStepsRegister());
let r2=keep(new mx.CalcStepsRegister());
let r3=keep(new mx.CalcStepsRegister());
let g=keep(new mx.Function("g(a,b) = a*b"));
let f=keep(new mx.Function("f(a,b) = g(a,b) * a*b",[g]));
f.setArgumentValue(0,cppNumericCast(1,"double"));
f.setArgumentValue(1,cppNumericCast(1,"double"));
let v1=calculateWithSteps(f,r1);
let v2=calculateWithSteps(f,r2);
let v3=calculateWithSteps(f,r3);
if(((((((v1===v2)&&(v1===v3))&&(listRead(keep(r1.calcStepRecords),"size",[])===listRead(keep(r2.calcStepRecords),"size",[])))&&(listRead(keep(r1.calcStepRecords),"size",[])===listRead(keep(r3.calcStepRecords),"size",[])))&&(r1.toString()===r2.toString()))&&(r1.toString()===r3.toString()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0317(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let exprStr="z = 3*y/x";
let testDescr=("Expression + CalcStepsRegisterPtr + Full Compilation: "+exprStr);
void 0 /* console diagnostics */;
let r1=keep(new mx.CalcStepsRegister());
let r2=keep(new mx.CalcStepsRegister());
let r3=keep(new mx.CalcStepsRegister());
let x=keep(new mx.Argument("x","2*rList(2,2,2,2,2)"));
let y=keep(new mx.Argument("y = 2*x",[x]));
let z=keep(new mx.Argument("z = 3*y/x",[x,y]));
let v1=z.getArgumentValue(r1);
let v2=z.getArgumentValue(r2);
let v3=z.getArgumentValue(r3);
if(((((((v1===v2)&&(v1===v3))&&(listRead(keep(r1.calcStepRecords),"size",[])===listRead(keep(r2.calcStepRecords),"size",[])))&&(listRead(keep(r1.calcStepRecords),"size",[])===listRead(keep(r3.calcStepRecords),"size",[])))&&(r1.toString()===r2.toString()))&&(r1.toString()===r3.toString()))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testApi0318(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - French";
void 0 /* console diagnostics */;
let French=keep(mx.StringResources.languageFrench());
mx.StringModel.setStringResources(French);
let userLanguage=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+userLanguage));
if((userLanguage==="Français")){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0319(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - German";
void 0 /* console diagnostics */;
let German=keep(mx.StringResources.languageGerman());
mx.StringModel.setStringResources(German);
let userLanguage=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+userLanguage));
if((userLanguage==="Deutsch")){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0320(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - Italian";
void 0 /* console diagnostics */;
let Italian=keep(mx.StringResources.languageItalian());
mx.StringModel.setStringResources(Italian);
let userLanguage=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+userLanguage));
if((userLanguage==="Italiano")){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0321(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - Polish";
void 0 /* console diagnostics */;
let Polish=keep(mx.StringResources.languagePolish());
mx.StringModel.setStringResources(Polish);
let userLanguage=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+userLanguage));
if((userLanguage==="Polski")){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0322(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - Portuguese";
void 0 /* console diagnostics */;
let Portuguese=keep(mx.StringResources.languagePortuguese());
mx.StringModel.setStringResources(Portuguese);
let userLanguage=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+userLanguage));
if((userLanguage==="Português")){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0323(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - Spanish";
void 0 /* console diagnostics */;
let Spanish=keep(mx.StringResources.languageSpanish());
mx.StringModel.setStringResources(Spanish);
let userLanguage=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+userLanguage));
if((userLanguage==="Español")){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0324(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - English";
void 0 /* console diagnostics */;
let English=keep(mx.StringResources.languageEnglish());
mx.StringModel.setStringResources(English);
let userLanguage=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+userLanguage));
if((userLanguage==="English")){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0325(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(String) - English";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("en"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageEnglish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0326(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(String) - French";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("fr"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageFrench()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0327(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(String) - German";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("de"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageGerman()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0328(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(String) - Italian";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("it"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageItalian()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0329(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(String) - Polish";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("pl"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languagePolish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0330(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(String) - Portuguese";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("pt"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languagePortuguese()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0331(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(String) - Spanish";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("es"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageSpanish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0332(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(String) - Not supported";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("xyz"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageEnglish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0333(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - UK";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("UK"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageEnglish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0334(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - US";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("US"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageEnglish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0335(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - ENGLISH";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("ENGLISH"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageEnglish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0336(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - CANADA";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("CANADA"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageEnglish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0337(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - FRENCH";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("FRENCH"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageFrench()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0338(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - FRANCE";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("FRANCE"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageFrench()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0339(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - CANADA_FRENCH";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("CANADA_FRENCH"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageFrench()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0340(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - GERMAN";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("GERMAN"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageGerman()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0341(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - GERMANY";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("GERMANY"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageGerman()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0342(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - ITALIAN";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("ITALIAN"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageItalian()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0343(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - ITALY";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("ITALY"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageItalian()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0344(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - pl-PL";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("pl-PL"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languagePolish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0345(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - pt-PT";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("pt_PT"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languagePortuguese()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0346(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - pt-BR";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("pt BR"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languagePortuguese()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0347(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - es-ES";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("esES"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageSpanish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0348(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - es-AR";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("es_AR"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageSpanish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0349(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - no-NO";
let lang=keep(mx.StringResources.bestMatchingLanguage("no-NO"));
void 0 /* console diagnostics */;
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageEnglish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0350(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser - enableSelectBestMatchingLanguage + checkIfSelectBestMatchingLanguage";
void 0 /* console diagnostics */;
mx.mXparser.enableSelectBestMatchingLanguage();
if(mx.mXparser.checkIfSelectBestMatchingLanguage()){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0351(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser - disableSelectBestMatchingLanguage + checkIfSelectBestMatchingLanguage";
void 0 /* console diagnostics */;
mx.mXparser.disableSelectBestMatchingLanguage();
if((!mx.mXparser.checkIfSelectBestMatchingLanguage())){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0352(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser - enableSelectBestMatchingLanguage + disableSelectBestMatchingLanguage + enableSelectBestMatchingLanguage";
void 0 /* console diagnostics */;
mx.mXparser.enableSelectBestMatchingLanguage();
let lang1=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
mx.mXparser.disableSelectBestMatchingLanguage();
mx.mXparser.enableSelectBestMatchingLanguage();
let lang2=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
let lang=keep(mx.StringResources.bestMatchingLanguage("noNO"));
mx.mXparser.consolePrintln(((("USER_LANGUAGE #1 = "+lang1)+", USER_LANGUAGE #2 = ")+lang2));
if((lang1===lang2)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0353(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser - disableSelectBestMatchingLanguage + enableSelectBestMatchingLanguage + disableSelectBestMatchingLanguage";
void 0 /* console diagnostics */;
mx.mXparser.disableSelectBestMatchingLanguage();
let lang1=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
mx.mXparser.enableSelectBestMatchingLanguage();
mx.mXparser.disableSelectBestMatchingLanguage();
let lang2=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
let lang=keep(mx.StringResources.bestMatchingLanguage("no NO"));
mx.mXparser.consolePrintln(((("USER_LANGUAGE #1 = "+lang1)+", USER_LANGUAGE #2 = ")+lang2));
mx.mXparser.consolePrintln();
if(((lang1===lang2)&&(lang1===keep(mx.StringResources.languageEnglish()).USER_LANGUAGE))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0354(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser - changeLanguageTo(String) - pl";
void 0 /* console diagnostics */;
mx.mXparser.changeLanguageTo("pl");
let lang=keep(mx.StringModel.getStringResources());
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languagePolish()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0355(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser - changeLanguageTo(Locale) - pt-PT";
void 0 /* console diagnostics */;
mx.mXparser.changeLanguageTo("pt-PT");
let lang=keep(mx.StringModel.getStringResources());
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languagePortuguese()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0356(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser - disableSelectBestMatchingLanguage + changeLanguageToBestMatching";
void 0 /* console diagnostics */;
let osLang=mx.StringResources.getLanguageIso(mx.SystemUtils.getDefaultOsLanguage());
let isSupportedLanguage=((((((osLang==="fr")||(osLang==="de"))||(osLang==="it"))||(osLang==="pl"))||(osLang==="pt"))||(osLang==="es"));
mx.mXparser.disableSelectBestMatchingLanguage();
mx.mXparser.changeLanguageToBestMatching();
let userLang=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
let englishLang=keep(mx.StringResources.languageEnglish()).USER_LANGUAGE;
mx.mXparser.consolePrintln(("OS_LANGUAGE = "+osLang));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+userLang));
if((isSupportedLanguage&&!((userLang===englishLang)))){(testResult=true);}
if(((!isSupportedLanguage)&&(userLang===englishLang))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0357(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="mXparser - getHelpAsMarkdownTable + case of wrongly escaping pipe in some MD engines |/\\|";
void 0 /* console diagnostics */;
let helpString1=mx.mXparser.getHelpAsMarkdownTable();
let helpString2=mx.mXparser.getHelpAsMarkdownTable("");
let helpString3=mx.mXparser.getHelpAsMarkdownTable(true,true,"caption");
let helpString4=mx.mXparser.getHelpAsMarkdownTable("",true,true,"caption");
if(((!textContains(helpString1,"\\\\ |"))&&textContains(helpString1,"\\\\|"))){(testResult=false);}
if(((!textContains(helpString2,"\\\\ |"))&&textContains(helpString2,"\\\\|"))){(testResult=false);}
if(((!textContains(helpString3,"\\\\ |"))&&textContains(helpString3,"\\\\|"))){(testResult=false);}
if(((!textContains(helpString4,"\\\\ |"))&&textContains(helpString4,"\\\\|"))){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0358(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="Bitwise NAND translations";
void 0 /* console diagnostics */;
let en=keep(mx.StringResources.languageEnglish()).BITWISE_OPERATOR_NAND;
let fr=keep(mx.StringResources.languageFrench()).BITWISE_OPERATOR_NAND;
let de=keep(mx.StringResources.languageGerman()).BITWISE_OPERATOR_NAND;
let it=keep(mx.StringResources.languageItalian()).BITWISE_OPERATOR_NAND;
let pl=keep(mx.StringResources.languagePolish()).BITWISE_OPERATOR_NAND;
let pt=keep(mx.StringResources.languagePortuguese()).BITWISE_OPERATOR_NAND;
let es=keep(mx.StringResources.languageSpanish()).BITWISE_OPERATOR_NAND;
let zh=keep(mx.StringResources.languageChinese()).BITWISE_OPERATOR_NAND;
if((en===fr)){(testResult=false);}
if((en===de)){(testResult=false);}
if((en===it)){(testResult=false);}
if((en===pl)){(testResult=false);}
if((en===pt)){(testResult=false);}
if((en===es)){(testResult=false);}
if((en===zh)){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0359(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="Bitwise NOR translations";
void 0 /* console diagnostics */;
let en=keep(mx.StringResources.languageEnglish()).BITWISE_OPERATOR_NOR;
let fr=keep(mx.StringResources.languageFrench()).BITWISE_OPERATOR_NOR;
let de=keep(mx.StringResources.languageGerman()).BITWISE_OPERATOR_NOR;
let it=keep(mx.StringResources.languageItalian()).BITWISE_OPERATOR_NOR;
let pl=keep(mx.StringResources.languagePolish()).BITWISE_OPERATOR_NOR;
let pt=keep(mx.StringResources.languagePortuguese()).BITWISE_OPERATOR_NOR;
let es=keep(mx.StringResources.languageSpanish()).BITWISE_OPERATOR_NOR;
let zh=keep(mx.StringResources.languageChinese()).BITWISE_OPERATOR_NOR;
if((en===fr)){(testResult=false);}
if((en===de)){(testResult=false);}
if((en===it)){(testResult=false);}
if((en===pl)){(testResult=false);}
if((en===pt)){(testResult=false);}
if((en===es)){(testResult=false);}
if((en===zh)){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0360(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="Bitwise XNOR translations";
void 0 /* console diagnostics */;
let en=keep(mx.StringResources.languageEnglish()).BITWISE_OPERATOR_XNOR;
let fr=keep(mx.StringResources.languageFrench()).BITWISE_OPERATOR_XNOR;
let de=keep(mx.StringResources.languageGerman()).BITWISE_OPERATOR_XNOR;
let it=keep(mx.StringResources.languageItalian()).BITWISE_OPERATOR_XNOR;
let pl=keep(mx.StringResources.languagePolish()).BITWISE_OPERATOR_XNOR;
let pt=keep(mx.StringResources.languagePortuguese()).BITWISE_OPERATOR_XNOR;
let es=keep(mx.StringResources.languageSpanish()).BITWISE_OPERATOR_XNOR;
let zh=keep(mx.StringResources.languageChinese()).BITWISE_OPERATOR_XNOR;
if((en===fr)){(testResult=false);}
if((en===de)){(testResult=false);}
if((en===it)){(testResult=false);}
if((en===pl)){(testResult=false);}
if((en===pt)){(testResult=false);}
if((en===es)){(testResult=false);}
if((en===zh)){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0361(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="Integer division translations";
void 0 /* console diagnostics */;
let en=keep(mx.StringResources.languageEnglish()).OPERATOR_DIVIDE_QUOTIENT;
let fr=keep(mx.StringResources.languageFrench()).OPERATOR_DIVIDE_QUOTIENT;
let de=keep(mx.StringResources.languageGerman()).OPERATOR_DIVIDE_QUOTIENT;
let it=keep(mx.StringResources.languageItalian()).OPERATOR_DIVIDE_QUOTIENT;
let pl=keep(mx.StringResources.languagePolish()).OPERATOR_DIVIDE_QUOTIENT;
let pt=keep(mx.StringResources.languagePortuguese()).OPERATOR_DIVIDE_QUOTIENT;
let es=keep(mx.StringResources.languageSpanish()).OPERATOR_DIVIDE_QUOTIENT;
let zh=keep(mx.StringResources.languageChinese()).OPERATOR_DIVIDE_QUOTIENT;
if((en===fr)){(testResult=false);}
if((en===de)){(testResult=false);}
if((en===it)){(testResult=false);}
if((en===pl)){(testResult=false);}
if((en===pt)){(testResult=false);}
if((en===es)){(testResult=false);}
if((en===zh)){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0362(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="String Resources & Help test: Bitwise NAND";
void 0 /* console diagnostics */;
let helpStr=mx.mXparser.getHelpAsCsv("@~&");
if((!textContains(helpStr,mx.BitwiseOperator.NAND_STR))){(testResult=false);}
if((!textContains(helpStr,mx.BitwiseOperator.NAND_SINCE))){(testResult=false);}
if((!textContains(helpStr,mx.BitwiseOperator.NAND_SYN))){(testResult=false);}
let sr=keep(mx.StringModel.getStringResources());
if((!textContains(helpStr,sr.BITWISE_OPERATOR))){(testResult=false);}
if((!textContains(helpStr,sr.BITWISE_OPERATOR_NAND))){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0363(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="String Resources & Help test: Bitwise NOR";
void 0 /* console diagnostics */;
let helpStr=mx.mXparser.getHelpAsCsv("@~|");
if((!textContains(helpStr,mx.BitwiseOperator.NOR_STR))){(testResult=false);}
if((!textContains(helpStr,mx.BitwiseOperator.NOR_SINCE))){(testResult=false);}
if((!textContains(helpStr,mx.BitwiseOperator.NOR_SYN))){(testResult=false);}
let sr=keep(mx.StringModel.getStringResources());
if((!textContains(helpStr,sr.BITWISE_OPERATOR))){(testResult=false);}
if((!textContains(helpStr,sr.BITWISE_OPERATOR_NOR))){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0364(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="String Resources & Help test: Bitwise XNOR";
void 0 /* console diagnostics */;
let helpStr=mx.mXparser.getHelpAsCsv("@~^");
if((!textContains(helpStr,mx.BitwiseOperator.XNOR_STR))){(testResult=false);}
if((!textContains(helpStr,mx.BitwiseOperator.XNOR_SINCE))){(testResult=false);}
if((!textContains(helpStr,mx.BitwiseOperator.XNOR_SYN))){(testResult=false);}
let sr=keep(mx.StringModel.getStringResources());
if((!textContains(helpStr,sr.BITWISE_OPERATOR))){(testResult=false);}
if((!textContains(helpStr,sr.BITWISE_OPERATOR_XNOR))){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0365(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="String Resources & Help test: Integer division";
void 0 /* console diagnostics */;
let helpStr=mx.mXparser.getHelpAsCsv("\\");
if((!textContains(helpStr,mx.Operator.DIVIDE_QUOTIENT_STR))){(testResult=false);}
if((!textContains(helpStr,mx.Operator.DIVIDE_QUOTIENT_SINCE))){(testResult=false);}
if((!textContains(helpStr,mx.Operator.DIVIDE_QUOTIENT_SYN))){(testResult=false);}
let sr=keep(mx.StringModel.getStringResources());
if((!textContains(helpStr,sr.OPERATOR))){(testResult=false);}
if((!textContains(helpStr,sr.OPERATOR_DIVIDE_QUOTIENT))){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0366(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=true;
let testDescr="String Resources & Help test: division central & east europe";
void 0 /* console diagnostics */;
let helpStr=mx.mXparser.getHelpAsCsv(":");
if((!textContains(helpStr,mx.Operator.DIVIDE_EUROPE_STR))){(testResult=false);}
if((!textContains(helpStr,mx.Operator.DIVIDE_SINCE_EUROPE))){(testResult=false);}
if((!textContains(helpStr,mx.Operator.DIVIDE_EUROPE_SYN))){(testResult=false);}
let sr=keep(mx.StringModel.getStringResources());
if((!textContains(helpStr,sr.OPERATOR))){(testResult=false);}
if((!textContains(helpStr,sr.OPERATOR_DIVIDE))){(testResult=false);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0367(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="disable / enable / check if Special Cases";
void 0 /* console diagnostics */;
let specialCases0=mx.mXparser.checkIfSpecialCases();
mx.mXparser.disableSpecialCases();
let specialCases1=mx.mXparser.checkIfSpecialCases();
mx.mXparser.setSpecialCases(false);
let specialCases2=mx.mXparser.checkIfSpecialCases();
mx.mXparser.enableSpecialCases();
let specialCases3=mx.mXparser.checkIfSpecialCases();
mx.mXparser.setSpecialCases(true);
let specialCases4=mx.mXparser.checkIfSpecialCases();
mx.mXparser.setSpecialCases(false);
let specialCases5=mx.mXparser.checkIfSpecialCases();
if((((((specialCases0&&(!specialCases1))&&(!specialCases2))&&specialCases3)&&specialCases4)&&(!specialCases5))){(testResult=true);}
check(testResult);
},
testApi0368(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - Chinese";
void 0 /* console diagnostics */;
let Chinese=keep(mx.StringResources.languageChinese());
mx.StringModel.setStringResources(Chinese);
let userLanguage=keep(mx.StringModel.getStringResources()).USER_LANGUAGE;
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+userLanguage));
if((userLanguage==="中文")){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0369(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(String) - Chinese";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("zh"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageChinese()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0370(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="StringResources - BestMatchingLanguage(Locale) - zh-CN";
void 0 /* console diagnostics */;
let lang=keep(mx.StringResources.bestMatchingLanguage("zh-CN"));
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageChinese()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0371(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser - changeLanguageTo(String) - zh";
void 0 /* console diagnostics */;
mx.mXparser.changeLanguageTo("zh");
let lang=keep(mx.StringModel.getStringResources());
mx.mXparser.consolePrintln(("USER_LANGUAGE = "+lang.USER_LANGUAGE));
if((lang.USER_LANGUAGE===keep(mx.StringResources.languageChinese()).USER_LANGUAGE)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testApi0372(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="mXparser - warmUpBeforeConcurrentUse()";
void 0 /* console diagnostics */;
let isWarmedUpFalse=mx.mXparser.checkIfWarmedUpBeforeConcurrentUse();
let isWarmedUp=mx.mXparser.warmUpBeforeConcurrentUse();
let isWarmedUpTrue=mx.mXparser.checkIfWarmedUpBeforeConcurrentUse();
if((((!isWarmedUpFalse)&&isWarmedUp)&&isWarmedUpTrue)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
mx.StringModel.setDefaultStringResources();
},
testExpr0072(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="prod(i,1,6,i,0.5)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
for(let ii=cppNumericCast(1,"double");(ii<cppNumericCast(6,"double"));(ii+=0.5)){(reg*=ii);}
(reg*=cppNumericCast(6,"double"));
if((value===reg)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0073(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sum(n,1,5,prod(i,1,n,n*i))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let sum=cppNumericCast(0,"double");
for(let nn=cppNumericCast(1,"double");(nn<=cppNumericCast(5,"double"));(nn++)){{
let reg=cppNumericCast(1,"double");
for(let ii=cppNumericCast(1,"double");(ii<=nn);(ii++)){(reg*=(nn*ii));}
(sum+=reg);
}}
let reg=sum;
if((value===reg)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0111(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("f","sin(x)","x"));
let a=keep(new mx.Argument("a",Math.PI));
let expStr="der( f(x)^a, x) - a*f(x)^(a-1)*der(f(x), x)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,keep(new mx.Argument("x",3)),a));
testExp.addDefinitions(f);
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((value-reg))<=9.9999999999999995E-7)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0113(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let f=keep(new mx.Function("f","sin(x)","x"));
let g=keep(new mx.Function("g","cos(x)","x"));
let h=keep(new mx.Function("h","int(f(t),t,0,x)","x"));
h.addDefinitions(f);
let a=keep(new mx.Argument("a",2));
let b=keep(new mx.Argument("b",4));
let x=keep(new mx.Argument("x",3));
let expStr="int(f(x)*g(x),x,a,b) - ( h(b)*g(b)-h(a)*g(a) - int( h(x)*der(g(x),x), x, a, b) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x,a,b));
testExp.addDefinitions(f,g,h);
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((value-reg))<=9.9999999999999995E-7)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0124(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let m=keep(new mx.Argument("m",4));
let n=keep(new mx.Argument("n","m-1",m));
let x=keep(new mx.Argument("x",3));
let H=keep(new mx.Function("H","if(m>1, 2*x*H(n,x)-2*n*H(n-1,x), if(m>0, 2*x, 1) )",m,x,n));
H.setParametersNumber(2);
let k=keep(new mx.Argument("k",5));
let expStr="der( H(k,x), x) - 2*k*H(k-1,x)";
let testExp=keep(new mx.Expression(expStr,x,k));
testExp.addDefinitions(H);
let syn1=testExp.checkSyntax();
m.setArgumentName("m1");
let syn2=testExp.getSyntaxStatus();
if((syn1&&(!syn2))){(testResult=true);}
let value=cppNumericCast(0,"double");
if(syn2){(value=cppNumericCast(1,"double"));}
let reg=cppNumericCast(0,"double");
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0277(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="n1_geq_2(0)";
let c1=keep(new mx.Constant("c1",(0.25+0.01)));
let z1=keep(new mx.RecursiveArgument("z1","z1(n-1)^2+c1","n"));
z1.addDefinitions(c1);
z1.addBaseCase(0,cppNumericCast(0,"double"));
let n1_geq_2=keep(new mx.Function("n1_geq_2","if( z1(k) > 2, k, n1_geq_2(k+1) )","k"));
n1_geq_2.addDefinitions(z1);
mx.mXparser.consolePrint((((((((((((((c1.getConstantName()+" = ")+String(c1.getConstantValue()))+" ; ")+z1.getArgumentName())+" = ")+z1.getArgumentExpressionString())+" ; ")+n1_geq_2.getFunctionName())+" = ")+n1_geq_2.getFunctionExpressionString())+" ; ")+expStr)+" ...... "));
let testExp=keep(new mx.Expression(expStr));
testExp.addDefinitions(n1_geq_2);
let value=testExp.calculate();
let reg=cppNumericCast(30,"double");
if((mx.MathFunctions.abs((reg-value))<1.0000000000000001E-5)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0278(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="n2_geq_2(0)";
let c2=keep(new mx.Constant("c2",(0.25+0.01)));
let z2=keep(new mx.Function("z2","if( n>0, z2(n-1)^2+c2, 0)","n"));
z2.addDefinitions(c2);
let n2_geq_2=keep(new mx.Function("n2_geq_2","if( z2(k) > 2, k, n2_geq_2(k+1) )","k"));
n2_geq_2.addDefinitions(z2);
mx.mXparser.consolePrint((((((((((((((c2.getConstantName()+" = ")+String(c2.getConstantValue()))+" ; ")+z2.getFunctionName())+" = ")+z2.getFunctionExpressionString())+" ; ")+n2_geq_2.getFunctionName())+" = ")+n2_geq_2.getFunctionExpressionString())+" ; ")+expStr)+" ...... "));
let testExp=keep(new mx.Expression(expStr));
testExp.addDefinitions(n2_geq_2);
let value=testExp.calculate();
let reg=cppNumericCast(30,"double");
if((mx.MathFunctions.abs((reg-value))<1.0000000000000001E-5)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0279(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="n1_geq_2(0) - n2_geq_2(0)";
let c1=keep(new mx.Constant("c1",(0.25+0.01)));
let z1=keep(new mx.RecursiveArgument("z1","z1(n-1)^2+c1","n"));
z1.addDefinitions(c1);
z1.addBaseCase(0,cppNumericCast(0,"double"));
let n1_geq_2=keep(new mx.Function("n1_geq_2","if( z1(k) > 2, k, n1_geq_2(k+1) )","k"));
n1_geq_2.addDefinitions(z1);
let c2=keep(new mx.Constant("c2",(0.25+0.01)));
let z2=keep(new mx.Function("z2","if( n>0, z2(n-1)^2+c2, 0)","n"));
z2.addDefinitions(c2);
let n2_geq_2=keep(new mx.Function("n2_geq_2","if( z2(k) > 2, k, n2_geq_2(k+1) )","k"));
n2_geq_2.addDefinitions(z2);
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
testExp.addDefinitions(n1_geq_2,n2_geq_2);
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<1.0000000000000001E-5)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0281(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="abs( sin(0.5)-s(0.5))+abs( cos(0.7)-c(0.7) )";
let aa=keep(new mx.Constant("a",1.0000000000000001E-5));
let ss=keep(new mx.Function("s","if( abs(x) < a, x, 2*s(x/2)*c(x/2) )","x"));
let cc=keep(new mx.Function("c","if( abs(x) < a, 1, c(x/2)^2 - s(x/2)^2 )","x"));
ss.addDefinitions(aa);
ss.addDefinitions(cc);
cc.addDefinitions(aa);
cc.addDefinitions(ss);
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
testExp.addDefinitions(ss,cc);
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<1.0000000000000001E-5)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setCanonicalRounding(tmp);
// Teardown the explicit user-created s/c ownership cycle after assertions.
try {
check(testResult);
} finally {
ss.removeFunctions(cc);
cc.removeFunctions(ss);
}
},
testExpr0287(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="5^2 * 7^3 * 11^1 * 67^1 * 49201^1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let hello=mx.StringUtils.numberToAsciiString(testExp.calculate());
let regHello="Hello";
if((regHello===hello)){(testResult=true);}
mx.mXparser.consolePrint((((hello+" reg ... ")+regHello)+" --> "));
check(testResult);
},
testExpr0288(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="71^1 * 218549^1 * 6195547^1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let world=mx.StringUtils.numberToAsciiString(testExp.calculate());
let regWorld="World!";
if((regWorld===world)){(testResult=true);}
mx.mXparser.consolePrint((((world+" reg ... ")+regWorld)+" --> "));
check(testResult);
},
testExpr0308(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr=((((((((((((((((((((((((((""+"abs( Ei(-1)  / (0.219383934395520274 * 10^0 ) ) + ")+"abs( Ei(-4)  / (0.377935240984890648 * 10^-2 ) ) + ")+"abs( Ei(-6)  / (0.360082452162658659 * 10^-3 ) ) + ")+"abs( Ei(-8)  / (0.376656228439249018 * 10^-4 ) ) + ")+"abs( Ei(-11) / (0.140030030424744178 * 10^-5 ) ) + ")+"abs( Ei(-16) / (0.664048724944104278 * 10^-8 ) ) + ")+"abs( Ei(-21) / (0.345320126714675627 * 10^-10 ) ) + ")+"abs( Ei(-26) / (0.189468588567497824 * 10^-12 ) ) + ")+"abs( Ei(-31) / (0.107676703861623826 * 10^-14 ) ) + ")+"abs( Ei(-36) / (0.627333900976224159 * 10^-17 ) ) + ")+"abs( Ei(-41) / (0.372316677645997772 * 10^-19 ) ) + ")+"abs( Ei(-46) / (0.224153175974429975 * 10^-21 ) ) + ")+"abs( Ei(-50) / (0.378326402955045902 * 10^-23 ) ) + ")+"abs( Ei(1)  / (0.189511781635593676 * 10^1 ) ) + ")+"abs( Ei(4)  / (0.196308744700562200 * 10^2 ) ) + ")+"abs( Ei(6)  / (0.859897621424392048 * 10^2 ) ) + ")+"abs( Ei(8)  / (0.440379899534838269 * 10^3 ) ) + ")+"abs( Ei(11) / (0.607140637409861151 * 10^4 ) ) + ")+"abs( Ei(16) / (0.595560998670837002 * 10^6 ) ) + ")+"abs( Ei(21) / (0.661271863554849213 * 10^8 ) ) + ")+"abs( Ei(26) / (0.784294099189818637 * 10^10 ) ) + ")+"abs( Ei(31) / (0.969455575968393966 * 10^12 ) ) + ")+"abs( Ei(36) / (0.123285207991209769 * 10^15 ) ) + ")+"abs( Ei(41) / (0.160066491432450411 * 10^17 ) ) + ")+"abs( Ei(46) / (0.211134238864782419 * 10^19 ) ) + ")+"abs( Ei(50) / (0.105856368971316910 * 10^21 ) ) - 26");
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0443(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.setExactComparison();
let expStr="0.1+0.1+0.1 <> 0.3";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=1;
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0444(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.setEpsilonComparison();
;
let expStr="0.1+0.1+0.1 = 0.3";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=1;
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0445(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.enableUlpRounding();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.setExactComparison();
let expStr="0.1+0.1+0.1 = 0.3";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=1;
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0607(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="@~100";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(cppNumericCast((~cppNumericCast(cppNumericCast(100,"long",true),"long")),"long"),"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-9)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0608(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="-100 @^ 2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(cppNumericCast((cppNumericCast(cppNumericCast((-100),"long",true),"long")^cppNumericCast(cppNumericCast(2,"long",true),"long")),"long"),"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-9)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0609(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="-100 @| 2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(cppNumericCast((cppNumericCast(cppNumericCast((-100),"long",true),"long")|cppNumericCast(cppNumericCast(2,"long",true),"long")),"long"),"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-9)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0610(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="-100 @& 2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(cppNumericCast((cppNumericCast(cppNumericCast((-100),"long",true),"long")&cppNumericCast(cppNumericCast(2,"long",true),"long")),"long"),"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-9)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0614(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.setEpsilonComparison();
let expStr="sin(pi+1.23e-10)+e^1.1e1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(mx.MathFunctions.sin((mx.MathConstants.PI+1.2299999999999999E-10))+mx.MathFunctions.power(mx.MathConstants.E,11));
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-9)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0618(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let funExt=extensionFixture(mx,"FunExt");
let ff=keep(new mx.Function("ff",nullableExtension(mx,"FunctionExtension",funExt)));
let expStr="5*6-ff(5,6)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,ff));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-9)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0621(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="solve( sin(x), x, -pi-1, 1 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(-mx.MathConstants.PI);
if(((mx.MathFunctions.abs(((-mx.MathConstants.PI)-value))<=9.9999999999999995E-7)||(mx.MathFunctions.abs((cppNumericCast(0,"double")-value))<=9.9999999999999995E-7))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr0662(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="or( [false] )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(mx.BooleanAlgebra.FALSE,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setNotToOverrideBuiltinTokens();
check(testResult);
},
testExpr0745(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="sum(i, -1000000, 1000000, ndig10(i) - floor( log10( abs(i) ) ) - 1, 3)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0747(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="sum( i, -1000000, 1000000, ndig10(i) - ndig(i, 10) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0780(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setEpsilon(1.0000000000000001E-5);
let expStr="ndist(1, 2, 1.000001, 1.0001, 3) - 4";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0781(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setEpsilon(1.0000000000000001E-5);
let expStr="isNaN( ndist(1,2,3,[NaN]) ) - [true]";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0782(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setEpsilon(1.0000000000000001E-5);
let expStr="( argmin(1) - 1 ) + ( argmin(1,2) - 1 ) + ( argmin(2,1) - 2 ) + ( argmin(2,2,2,1,3,-1) - 6 ) + ( argmin(1,2,3,-6,2,3,2) - 4 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0783(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setEpsilon(1.0000000000000001E-5);
let expStr="( argmax(-1) - 1 ) + ( argmax(1,2) - 2 ) + ( argmax(2,1) - 1 ) + ( argmax(-1,2,3,2,5) - 5 ) + ( argmax(2,4,1,2,3,10,8,1) - 6 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0784(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setEpsilon(1.0000000000000001E-5);
let expStr="argmax(4, 2, 4.000001, 3) - 1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0785(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setEpsilon(1.0000000000000001E-5);
let expStr="argmin(2, 1.000001, 3, 1) - 2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0786(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setEpsilon(1.0000000000000001E-5);
let expStr="isNaN( argmin(1,2,3,[NaN]) ) - [true]";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0787(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setEpsilon(1.0000000000000001E-5);
let expStr="isNaN( argmax(1,2,3,[NaN]) ) - [true]";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0788(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="2^3 - 8";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0789(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="-2^3 + 8";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0790(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="8^(1/3) - 2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0791(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="-8^(1/3) + 2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0792(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="125^(1/3) - 5";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0793(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="-125^(1/3) + 5";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0794(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="128^(1/7) - 2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0795(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="-128^(1/7) + 2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0796(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="128^0 - 1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0797(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="-128^0 - 1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0798(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="(1/125)^(-1/3) - 5";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0799(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="(-1/125)^(-1/3) + 5";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0800(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( nfact(74) - 2 ) + ( factval(74, 1) - 2 ) + ( factval(74, 2) - 37 ) + ( factexp(74, 1) - 1 ) + ( factexp(74, 2) - 1 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0801(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( nfact(5632) - 2 ) + ( factval(5632, 1) - 2 ) + ( factval(5632, 2) - 11 ) + ( factexp(5632, 1) - 9 ) + ( factexp(5632, 2) - 1 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0802(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( factval(123456789, 0) - 1 ) + ( factval(123456789, -1) - 1 ) + ( factval(123456789, 4) - 1 ) + ( factval(123456789, 5) - 1 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0803(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( factexp(123456789, 0) - 0 ) + ( factexp(123456789, -1) - 0 ) + ( factexp(123456789, 4) - 0 ) + ( factexp(123456789, 5) - 0 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0804(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( factval(123456789, 1) - 3 ) + ( factval(123456789, 2) - 3607 ) + ( factval(123456789, 3) - 3803 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0805(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( factexp(123456789, 1) - 2 ) + ( factexp(123456789, 2) - 1 ) + ( factexp(123456789, 3) - 1 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0806(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="nfact(123456789) - 3";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0807(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( nfact(0) - 0 ) + ( isNaN( factval(0,1) ) - [true] ) + ( isNaN( factexp(0,1) ) - [true] )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0808(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( isNaN( nfact([NaN]) ) - [true] ) + ( isNaN( factval([NaN],1) ) - [true] ) + ( isNaN( factexp([NaN],1) ) - [true] )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0809(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( isNaN( factval(10,[NaN]) ) - [true] ) + ( isNaN( factexp(10,[NaN]) ) - [true] )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0810(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="sum(n, -100000, 100000,  sgn(n)*prod( id, -10, nfact(n) + 10, factval(n, id)^factexp(n, id) ) - n , 3 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0811(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( root(7,128) - 2 ) + ( root(7,-128) + 2 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0812(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( root(3,125) - 5 ) + ( root(3,-125) + 5 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0813(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( root(3,8) - 2 ) + ( root(3,-8) + 2 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0814(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( root(1,1) - 1 ) + ( root(1,2) - 2 ) + ( root(1,0) - 0) + ( root(1,-2) +2 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0815(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( root(0,1) - 1 ) + ( root(0,0) - 0 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0816(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( isNaN( root(-2,3) ) - [true]  ) + ( isNaN( root(4,-10) ) - [true]  )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0817(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( isNaN( root([NaN],3) ) - [true]  ) + ( isNaN( root(3,[NaN]) ) - [true]  )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0818(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="der( sin(x), x, 0 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-5)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0819(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="der+( sin(x), x, 0 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-5)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0820(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="der-( sin(x), x, 0 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-5)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0821(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = pi"));
let expStr="der( sin(x), x, x )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast((-1),"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-5)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0822(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = pi"));
let expStr="der( sin(x), x, 2*x )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-5)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0823(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = 2"));
let expStr="pi-arcsec(x)-arcsec(-x)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0824(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = 3"));
let expStr="arccsc(-x)+arccsc(x)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0825(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = 5"));
let expStr="der( arcsec(x), x ) - 1 / ( x^2 * sqrt(1 - 1 / x^2) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0826(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = 6"));
let expStr="der( arcsec(x), x ) - 1 / ( abs(x) * sqrt(x^2 - 1) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0827(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = 7"));
let expStr="der( arccsc(x), x ) + 1 / ( x^2 * sqrt(1 - 1 / x^2) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0828(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = 8"));
let expStr="der( arccsc(x), x ) + 1 / ( abs(x) * sqrt(x^2 - 1) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0829(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let Ackermann=keep(new mx.Function("Ackermann(m,n) = iff( m = 0, n+1; (m>0) & (n=0), Ackermann(m-1,1); (m>0) & (n>0), Ackermann(m-1, Ackermann(m,n-1)) )"));
let expStr="Ackermann(3,4)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,Ackermann));
let value=testExp.calculate();
let reg=cppNumericCast(125,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0830(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let Tetration=keep(new mx.Function("Tetration(x,n) = if(n > 1, x^Tetration(x,n-1), x)"));
let expStr="Tetration(sqrt(2),80)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,Tetration));
let value=testExp.calculate();
let reg=cppNumericCast(2,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0831(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = 3.5"));
let expStr="Gamma(x+1)-x*Gamma(x)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0832(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = -3.5"));
let expStr="Gamma(x+1)-x*Gamma(x)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0833(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = 1.7"));
let expStr="Gamma(x)*Gamma(x+1/2) - ( sqrt(pi) / 2^(2*x-1) ) * Gamma(2*x)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0834(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = 0.7"));
let expStr="Gamma(x)*Gamma(1-x) - pi / sin(pi * x)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0835(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = 0.7"));
let expStr="Gamma(x+1/2)*Gamma(1/2-x) - pi / cos(pi * x)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0836(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = 0.7"));
let expStr="Gamma(x+1/2)*Gamma(1/2-x) - pi / cos(pi * x)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0837(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="Gamma(-3/2) - 4/3 *sqrt(pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0838(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="Gamma(-1/2) + 2 *sqrt(pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0839(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="Gamma(1/2) - sqrt(pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0840(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="Gamma(3/2) - sqrt(pi)/2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0841(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="Gamma(5/2) - 3/4 * sqrt(pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0842(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="Gamma(7/2) - 15/8 * sqrt(pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0843(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(n, 1, 10, Gamma(n) - (n-1)! )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0844(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(n, -100, 0, isNaN( Gamma(n) ) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0845(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.setEpsilonComparison();
let x0=keep(new mx.Argument("x0 = 1.3"));
let expStr="der( Gamma(x), x, x0 ) - ( -[gam] + sum(n, 0, 10000000, 1/(n+1) - 1/(n+x0) ) ) * Gamma(x0)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x0));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0846(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let V=keep(new mx.Function("V(R,n) = if( n > 1, int( V( R/2, n-1 ), x, -R, R ), 1 )"));
let expStr="V(1,1) + V(1,2)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,V));
let value=testExp.calculate();
let reg=cppNumericCast(3,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0847(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let uniSum=keep(new mx.Function("uniSum(n, x) = if( x >= 1, n, uniSum(n+1, x + rUni(0,1) ) )"));
let expStr="avg( i, 1, 100000, uniSum(0,0) ) - e";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,uniSum));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.01)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0848(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let n=keep(new mx.Argument("n = 100000"));
let expStr="sqrt( 6 / (sum( i, 1, n, if( gcd( [Nat], [Nat] ) = 1, 1, 0) ) / n) ) - pi";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,n));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.01)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0849(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="root( 3, 7 + sqrt(50) ) + root( 3, 7 - sqrt(50) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(2,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0850(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="root( 3, 7 + root(2,50) ) + root( 3, 7 - root(2,50) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(2,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0851(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="(7 + sqrt(50))^(1/3) + (7 - sqrt(50))^(1/3)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(2,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0852(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="(7 + 50^(1/2))^(1/3) + (7 - 50^(1/2))^(1/3)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(2,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0853(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let Nrec=keep(new mx.Function("Nrec(a, s, k) = if( s >= a, k, Nrec( a, s + [Uni], k+1 ) )"));
let N1=keep(new mx.Argument("N1 = Nrec(1,0,0)",[Nrec]));
let N2=keep(new mx.Argument("N2 = Nrec(2,0,0)",[Nrec]));
let N3=keep(new mx.Argument("N3 = Nrec(3,0,0)",[Nrec]));
let N4=keep(new mx.Argument("N4 = Nrec(4,0,0)",[Nrec]));
let N5=keep(new mx.Argument("N5 = Nrec(5,0,0)",[Nrec]));
let EN1=keep(new mx.Argument("EN1 = avg( i, 1, 100000, N1 )",[N1]));
let EN2=keep(new mx.Argument("EN2 = avg( i, 1, 100000, N2 )",[N2]));
let EN3=keep(new mx.Argument("EN3 = avg( i, 1, 100000, N3 )",[N3]));
let EN4=keep(new mx.Argument("EN4 = avg( i, 1, 100000, N4 )",[N4]));
let EN5=keep(new mx.Argument("EN5 = avg( i, 1, 100000, N5 )",[N5]));
let expStr="(EN1 - e) + (EN2 - (e^2 - e)) + (EN3 - (e^3 - 2*e^2 + e/2)) + (EN4 - (e^4 - 3*e^3 + 2*e^2 - e/6)) + (EN5 - (e^5 - 4*e^4 + 9/2 * e^3 - 4/3 * e^2 + e/24))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,EN1,EN2,EN3,EN4,EN5));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.10000000000000001)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0854(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="stdi(i, 1, 100000, X)";
let f=keep(new mx.Function("f(x) = pNor(x,2,4)"));
let RejectSampling=keep(new mx.Function("RejectSampling(a,b,M,x) = if( rUni(0,M) <= f(x), x, RejectSampling(a,b,M, rUni(a,b) ) )",[f]));
let X=keep(new mx.Argument("X = RejectSampling( -22, 26, pNor(2,2,4) , rUni(-22, 26) )",[RejectSampling]));
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,X));
let value=testExp.calculate();
let reg=cppNumericCast(4,"double");
if((mx.MathFunctions.abs((reg-value))<=0.050000000000000003)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0855(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, -3, 3, pNor(x, 0, 1) - f(x, 30), 0.1)";
let f=keep(new mx.Function("f(x,n) = if( (x*sqrt(n/12)+n/2) >= 0 , ( 1 / (n-1)! ) * sum(k, 0, floor((x*sqrt(n/12)+n/2)), (-1)^k * C(n,k) * (x*sqrt(n/12)+n/2-k)^(n-1) )*sqrt(n/12) ; 0)"));
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.01)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0856(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="sum(x, -20.05, 20.05, sin(x)/x - prod(k,1, 10000 , 1 - (x/(k*pi))^2 ) , 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.01)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0857(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let f=keep(new mx.Function("f(x,a,n) = (sqrt(pi)/2) * sum(k, 0, n, ( a^(1/2 - k) / ( Gamma(3/2 - k) * k! ) ) * (x-a)^k   )"));
let expStr="sum(x, 1, 3, sqrt(x) - f(x,2,50) , 0.001)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0858(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="sin(90)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0859(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="asin(-1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast((-90),"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0860(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="cos(90)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0861(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="acos(0)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(90,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0862(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="tan(-45)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast((-1),"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0863(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="atan(1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(45,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0864(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="ctan(45)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0865(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="actan(1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(45,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0866(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="sec(60)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(2,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0867(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="arcsec(2)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(60,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0868(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="csc(30)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(2,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0869(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="arccsc(2)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(30,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0870(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
mx.mXparser.setDegreesMode();
let expStr="Sinc(90)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(1/90);
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setRadiansMode();
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0871(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="gcd(3333333333333330.0,10000000000000000.0)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(10,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0872(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="gcd(58333333333333, 100000000000000)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0873(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="2.0+2.0/3.0";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let regExpStr=mx.NumberTheory.toMixedFractionString((2+(2/3)));
let reg=keep(new mx.Expression(regExpStr)).calculate();
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0874(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="-2.0-2.0/3.0";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let regExpStr=mx.NumberTheory.toMixedFractionString(((-2)-(2/3)));
let reg=keep(new mx.Expression(regExpStr)).calculate();
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0875(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="17.0/3.0";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let regExpStr=mx.NumberTheory.toMixedFractionString((17/3));
let reg=keep(new mx.Expression(regExpStr)).calculate();
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0876(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="-17.0/3.0";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let regExpStr=mx.NumberTheory.toMixedFractionString(((-17)/3));
let reg=keep(new mx.Expression(regExpStr)).calculate();
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0877(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="(1_2 - 1/2) + (-1_3 + 1/3)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0878(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="(11_3 - 11/3) + (-11_3 + 11/3)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0879(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="(123121_71 - 123121/71) + (-123121_71 + 123121/71)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0880(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( 1_1_2 - (1+1/2) ) + (-1_1_2 + (1+1/2) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0881(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( 110_5_2 - (110+5/2) ) + (-110_5_2 + (110+5/2) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0882(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( 1234_12345_123456 - (1234+12345/123456) ) + (-1234_12345_123456 + (1234+12345/123456) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0883(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="0_0_1 - 0_0_2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0884(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="0_1 - 0_234";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0885(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="isNaN(0_0_0) - [true]";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0886(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="isNaN(1_2_0) - [true]";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0887(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="isNaN(1_0_0) - [true]";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0888(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="isNaN(0_2_0) - [true]";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0889(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="isNaN(1_0) - [true]";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0890(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="isNaN(0_0) - [true]";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0891(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="isNaN(100_0) - [true]";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0892(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="2^0 - 2^^0";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0893(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="2^1 - 2^^1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0894(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="2^2 - 2^^2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0895(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="2^2^2 - 2^^3";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0896(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="2^2^2^2 - 2^^4";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0897(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="(e^(-e))^^100000000 - 1/e";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-4)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0898(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="(e^(1/e))^^10000000 - e";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-7)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0899(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sqrt(2)^^100 - 2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0900(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( (-1)^^10 + 1 ) + ( (-1)^^0 - 1 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0901(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="0^^1234";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0902(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="(-2)^^(2) - 1_4";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0903(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum( x, e^(-e), e^(1/e), LambW0( -ln(x) ) / (-ln(x) ) - solve(y - x^y, y, 1/e, e) , 0.001 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-5)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0904(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, -1/e + 0.1, 100, der( 0.5 * ( 1 + LambW0(x) )^2 , x, x) - LambW0(x)/x, 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-4)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0905(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, -1/e, 100, e^LambW0(x) - x / LambW0(x), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0906(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, -1/e, -0.01, e^LambW1(x) - x / LambW1(x), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-4)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0907(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="int( LambW0(x), x, 0, e) - e + 1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-7)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0908(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, -0.3, 0.3, LambW0(x) - sum(n, 1, 100, ( ( (-n)^(n-1) ) / n! ) * x^n ) , 0.001)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0909(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, 0, 200, LambW0(x * e^x) - x, 0.001)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0910(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, -1, 0, LambW0(x * e^x) - x, 0.001)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0911(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="avg(x, -10, -1, abs(x - LambW1(x * e^x))/abs(x), 0.001)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.001)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0912(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, 0.01, 200, ln( LambW0(x) ) - ln(x) + LambW0(x), 0.001)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0913(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let n=keep(new mx.Argument("n = 4"));
let expStr="sum(x, 0.01, 200, LambW0( (n*x^n) / LambW0(x)^(n-1) ) - n*LambW0(x), 0.001)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,n));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let eps=9.9999999999999993E-12;
if((mx.MathFunctions.abs((reg-value))<=eps)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0914(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let x=keep(new mx.Argument("x = rUni(0,100)"));
let y=keep(new mx.Argument("y = rUni(0,100)"));
let expStr="LambW0(x) + LambW0(y) - LambW0( x*y*( 1/LambW0(x) + 1/LambW0(y) ) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x,y));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0915(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="int( LambW0(2 * cot(x)^2) * sec(x)^2, x, 0.001182, pi-0.008 ) - 4*sqrt(pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.10000000000000001)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0916(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="int( LambW0( 1/x^2  ), x, 0.0000000804, 300 )/sqrt(2*pi)-1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.01)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0917(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, 1/e, e, LambW0(-ln(x)/x) + ln(x), 0.001)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0918(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( LambW0(-1/e) + 1 ) + ( LambW0(0) - 0 ) + ( LambW0(1) - [Om] ) + ( LambW0(1) + ln( LambW0(1) )  ) + ( LambW0(e) - 1 ) + ( LambW0(-ln(sqrt(2))) + 2*ln(sqrt(2)) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0919(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="LambW1(-1/e) + 1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0920(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="der( LambW0(x), x, 0) - 1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-9)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0921(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="int( LambW0(x)/( x*sqrt(x) ), x, 0.01 , 240000) - 2*sqrt(2*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.01)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0922(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, 0.001, 6, x^x - ( e^LambW0( ln(x^x) ) )^( e^LambW0( ln(x^x) ) ), 0.001)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0923(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( isNaN( LambW0(-10) ) - [true] ) + ( isNaN( LambW1(-10) ) - [true] ) + ( isNaN( LambW1(10) ) - [true] )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0924(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="( isNaN( 2^^[NaN] ) - [true] ) + ( isNaN( [NaN]^^2 ) - [true] ) + ( isNaN( 2^^(-1) ) - [true] ) + ( isNaN( 0^^0 ) - [true] )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0925(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, 1, 10, sgnGamma(x)) + sum(x, 0.5, 9.5, sgnGamma(x)) - 20";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0926(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, -99, 0, isNaN( sgnGamma(x) ) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0927(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, -98.5, -0.5, sgnGamma(x), 2) + 50 + sum(x, -99.5, -1.5, sgnGamma(x), 2) - 50";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0928(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="sum(x, 0.5, 50, logGamma(x) - ( -[gam]*x - ln(x) + sum(k, 1, 10000+x^3, x/k - ln(1 + x/k) ) ), 0.5)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=cppNumericCast(1,"double"))){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0929(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(x, -99, 0, isNaN( logGamma(x) ) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0930(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.setEpsilonComparison();
let expStr="sum(s, -50.5, -50.5, sum(x, 0.5, 50.5, GammaL(s,x) + GammaU(s,x) - Gamma(s) ) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=cppNumericCast(1,"double"))){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setDefaultEpsilon();
check(testResult);
},
testExpr0931(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 1, Gamma(x), 0.001) - 2114.212208108448 ) / 2114.212208108448";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0932(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 1.1, 2, Gamma(x), 0.001) - 826.2989620272716 ) / 826.2989620272716";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0933(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 2.1, 3, Gamma(x), 0.001) - 1284.551346724549 ) / 1284.551346724549";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0934(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 3.1, 4, Gamma(x), 0.001) - 3338.776475304076 ) / 3338.776475304076";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0935(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 4.1, 5, Gamma(x), 0.001) - 12102.99996568467 ) / 12102.99996568467";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0936(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 5.1, 6, Gamma(x), 0.001) - 56192.71972868672 ) / 56192.71972868672";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0937(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 6.1, 7, Gamma(x), 0.001) - 317850.3398689155 ) / 317850.3398689155";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0938(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 7.1, 8, Gamma(x), 0.001) - 2119192.458453365 ) / 2119192.458453365";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0939(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 8.1, 9, Gamma(x), 0.001) - 1.626741828826147E7 ) / 1.626741828826147E7";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0940(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 9.1, 10, Gamma(x), 0.001) - 1.412638999378844E8 ) / 1.412638999378844E8";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0941(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 10.1, 20, Gamma(x), 0.1) - 4.758039372588876E17 ) / 4.758039372588876E17";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0942(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 20.1, 100, Gamma(x), 0.1) - 2.532008062312612E156 ) / 2.532008062312612E156";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0943(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
let expStr="( sum(x, -0.9, -0.1, Gamma(x), 0.001) - (-4033.861662372823) ) / (-4033.861662372823)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0944(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -1.9, -1.1, Gamma(x), 0.001) - 2779.242455572773 ) / 2779.242455572773";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0945(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -2.9, -2.1, Gamma(x), 0.001) - (-1146.484828532192) ) / (-1146.484828532192)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0946(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -3.9, -3.1, Gamma(x), 0.001) - 336.6702016774144 ) / 336.6702016774144";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0947(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -4.9, -4.1, Gamma(x), 0.001) - (-76.66832811614711) ) / (-76.66832811614711)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0948(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -5.9, -5.1, Gamma(x), 0.001) - 14.25043511683485 ) / 14.25043511683485";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0949(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -6.9, -6.1, Gamma(x), 0.001) - (-2.236810549400713) ) / (-2.236810549400713)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0950(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -7.9, -7.1, Gamma(x), 0.001) - 0.3037861166613209 ) / 0.3037861166613209";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0951(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -8.9, -8.1, Gamma(x), 0.001) - (-0.03635359758623678) ) / (-0.03635359758623678)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0952(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -9.9, -9.1, Gamma(x), 0.001) - 0.003887845100640342 ) / 0.003887845100640342";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0953(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
mx.mXparser.disableAlmostIntRounding();
let expStr="( sum(x, -30.95, -10.05, Gamma(x), 0.1) - (-8.376548071082549E-6) ) / (-8.376548071082549E-6)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0954(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, -90.95, 100.05, abs(ln(abs(Gamma(x))) - logGamma(x)), 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0955(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaU(s, x), 0.001), 0.1) - 6870.775811214982 ) / 6870.775811214982";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0956(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaU(s, x), 0.001), 0.1) - 9785.880306439629 ) / 9785.880306439629";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0957(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaU(s, x), 0.001), 0.1) - 21205.70354995280 ) / 21205.70354995280";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0958(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaU(s, x), 0.001), 0.1) - 62496.08447233523 ) / 62496.08447233523";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0959(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaU(s, x), 0.001), 0.1) - 237127.0905587526 ) / 237127.0905587526";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0960(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaU(s, x), 0.1), 0.1) - 12659.04924160019 ) / 12659.04924160019";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0961(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaU(s, x), 0.1), 0.1) - 72192.46327984912 ) / 72192.46327984912";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0962(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaU(s, x), 0.1), 0.1) - 483608.0262675140 ) / 483608.0262675140";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-5)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0963(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaU(s, x), 0.001), 0.1) - 8224.880733100714 ) / 8224.880733100714";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0964(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaU(s, x), 0.001), 0.1) - 23629.12458493255 ) / 23629.12458493255";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0965(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaU(s, x), 0.001), 0.1) - 117364.35585450924 ) / 117364.35585450924";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0966(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaU(s, x), 0.001), 0.1) - 771195.4772567508 ) / 771195.4772567508";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0967(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaU(s, x), 0.001), 0.1) - 5800247.185711337 ) / 5800247.185711337";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0968(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaU(s, x), 0.001), 0.1) - 4.685905102859140E7 ) / 4.685905102859140E7";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0969(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaU(s, x), 0.001), 0.1) - 3.949477860591464E8 ) / 3.949477860591464E8";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0970(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaU(s, x), 0.001), 0.1) - 3.421898375421077E9 ) / 3.421898375421077E9";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0971(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaL(s, x), 0.001), 0.1) - 35413.46835095401 ) / 35413.46835095401";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0972(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaL(s, x), 0.001), 0.1) - 6740.098934105806 ) / 6740.098934105806";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0973(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaL(s, x), 0.001), 0.1) - 4485.323384538212 ) / 4485.323384538212";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0974(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaL(s, x), 0.001), 0.1) - 4279.445033746266 ) / 4279.445033746266";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr0975(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaL(s, x), 0.001), 0.1) - 4932.908754940856 ) / 4932.908754940856";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0976(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaL(s, x), 0.1), 0.1) - 71.00936681198708 ) / 71.00936681198708";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0977(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaL(s, x), 0.1), 0.1) - 99.53718099344381 ) / 99.53718099344381";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0978(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaL(s, x), 0.1), 0.1) - 147.6273237932475 ) / 147.6273237932475";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let eps=9.9999999999999999E-15;
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=eps)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0979(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaL(s, x), 0.001), 0.1) - (-88902.11398055719) ) / (-88902.11398055719)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0980(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaL(s, x), 0.001), 0.1) - 31955.72452652288 ) / 31955.72452652288";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0981(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaL(s, x), 0.001), 0.1) - (-140294.05242515303) ) / (-140294.05242515303)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0982(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaL(s, x), 0.001), 0.1) - (-764462.0732232045) ) / (-764462.0732232045)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0983(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaL(s, x), 0.001), 0.1) - (-5.801780552273669E6) ) / (-5.801780552273669E6)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0984(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaL(s, x), 0.001), 0.1) - (-4.685876601988902E7) ) / (-4.685876601988902E7)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0985(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaL(s, x), 0.001), 0.1) - (-3.949478307953569E8) ) / (-3.949478307953569E8)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0986(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaL(s, x), 0.001), 0.1) - (-3.421898369345358E9) ) / (-3.421898369345358E9)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0987(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, -2.95, 2.95, GammaU(0,x) - ( -Ei(-x) ), 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999997E-17)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0988(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(s, -2.95, 2.95, GammaL(s,0), 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999997E-17)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0989(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(s, -2.95, 2.95, GammaU(s,0) - Gamma(s), 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999997E-17)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0990(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
let expStr="sum(s, 1, 5, sum(x, 0.5, 3.5, GammaU(s, x) - ((s-1)!) * e^(-x) * sum(k, 0, s-1, x^k / k! ) , 0.01) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0991(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, -5, 5, GammaU(1,x) - e^(-x), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0992(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, -5, 5, GammaL(1,x) - ( 1 - e^(-x) ), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0993(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, 0.1, 8, GammaU(0.5, x) - sqrt(pi) * erfc( sqrt(x) ), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0994(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, 0.1, 8, GammaL(0.5, x) - sqrt(pi) * erf( sqrt(x) ), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0995(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaRegU(s, x), 0.001), 0.1) - 4128.619249122392 ) / 4128.619249122392";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0996(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaRegU(s, x), 0.001), 0.1) - 10648.33231753313 ) / 10648.33231753313";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0997(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaRegU(s, x), 0.001), 0.1) - 14732.67120032403 ) / 14732.67120032403";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0998(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaRegU(s, x), 0.001), 0.1) - 16769.95611832584 ) / 16769.95611832584";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr0999(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaRegU(s, x), 0.001), 0.1) - 17609.29585783721 ) / 17609.29585783721";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1000(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaRegU(s, x), 0.1), 0.1) - 198.6732618854221 ) / 198.6732618854221";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1001(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaRegU(s, x), 0.1), 0.1) - 199.6608252491266 ) / 199.6608252491266";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1002(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaRegU(s, x), 0.1), 0.1) - 199.9222940005033 ) / 199.9222940005033";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-7)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1003(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaRegU(s, x), 0.001), 0.1) - (-1776.380588210588) ) / (-1776.380588210588)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1004(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaRegU(s, x), 0.001), 0.1) - 7890.923829786565 ) / 7890.923829786565";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1005(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaRegU(s, x), 0.001), 0.1) - (-102249.9066253191) ) / (-102249.9066253191)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1006(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaRegU(s, x), 0.001), 0.1) - 2.440576583013389E6 ) / 2.440576583013389E6";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1007(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaRegU(s, x), 0.001), 0.1) - (-8.522034351730967E7) ) / (-8.522034351730967E7)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1008(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaRegU(s, x), 0.001), 0.1) - 3.889240488572830E9 ) / 3.889240488572830E9";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1009(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaRegU(s, x), 0.001), 0.1) - (-2.181166295073751E11) ) / (-2.181166295073751E11)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1010(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaRegU(s, x), 0.001), 0.1) - 1.447213822212101E13 ) / 1.447213822212101E13";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1011(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaRegL(s, x), 0.001), 0.1) - 13891.38075087760 ) / 13891.38075087760";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1012(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaRegL(s, x), 0.001), 0.1) - 7371.667682466868 ) / 7371.667682466868";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1013(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaRegL(s, x), 0.001), 0.1) - 3287.328799675970 ) / 3287.328799675970";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1014(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaRegL(s, x), 0.001), 0.1) - 1250.043881674157 ) / 1250.043881674157";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1015(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaRegL(s, x), 0.001), 0.1) - 410.7041421627869 ) / 410.7041421627869";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1016(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaRegL(s, x), 0.1), 0.1) - 1.326738114577891 ) / 1.326738114577891";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1017(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaRegL(s, x), 0.1), 0.1) - 0.3391747508734272 ) / 0.3391747508734272";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1018(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaRegL(s, x), 0.1), 0.1) - 0.07770599949669701 ) / 0.07770599949669701";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1019(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaRegL(s, x), 0.001), 0.1) - 17796.38058821059 ) / 17796.38058821059";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1020(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaRegL(s, x), 0.001), 0.1) - 8129.076170213447 ) / 8129.076170213447";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1021(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaRegL(s, x), 0.001), 0.1) - 118269.9066253191 ) / 118269.9066253191";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1022(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaRegL(s, x), 0.001), 0.1) - (-2.424556583013388E6) ) / (-2.424556583013388E6)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1023(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaRegL(s, x), 0.001), 0.1) - 8.523636351730967E7 ) / 8.523636351730967E7";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1024(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaRegL(s, x), 0.001), 0.1) - (-3.889224468572830E9) ) / (-3.889224468572830E9)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1025(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaRegL(s, x), 0.001), 0.1) - 2.181166455273751E11 ) / 2.181166455273751E11";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1026(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaRegL(s, x), 0.001), 0.1) - (-1.447213820610101E13) ) / (-1.447213820610101E13)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1027(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, -2.95, 2.95, GammaRegU(0,x) - ( -Ei(-x) )/[gam], 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1028(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(s, -2.95, 2.95, GammaRegL(s,0), 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1029(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(s, -2.95, 2.95, GammaRegU(s,0) - 1, 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1030(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
let expStr="sum(s, 1, 5, sum(x, 0.5, 3.5, GammaRegU(s, x) - ((s-1)!) * e^(-x) * sum(k, 0, s-1, x^k / k! ) / Gamma(s) , 0.01) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1031(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, -5, 5, GammaRegU(1,x) - e^(-x), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1032(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, -5, 5, GammaRegL(1,x) - ( 1 - e^(-x) ), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999993E-12)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1033(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, 0.1, 8, GammaRegU(0.5, x) - erfc( sqrt(x) ), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1034(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, 0.1, 8, GammaRegL(0.5, x) - erf( sqrt(x) ), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1035(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.01, 0.5, diGamma(x), 0.001) - (-4079.209360654330) ) / (-4079.209360654330)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1036(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 0.5, 1, diGamma(x), 0.001) - (-573.6355799257133) ) / (-573.6355799257133)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1037(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 1, 2, diGamma(x), 0.001) - (-0.07729899822650133) ) / (-0.07729899822650133)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0000000000000001E-9)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1038(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 2, 3, diGamma(x), 0.001) - 693.8199440617115 ) / 693.8199440617115";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1039(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 3, 4, diGamma(x), 0.001) - 1099.701730410615 ) / 1099.701730410615";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1040(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 4, 5, diGamma(x), 0.001) - 1387.675473579989 ) / 1387.675473579989";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1041(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 5, 6, diGamma(x), 0.001) - 1611.044026769199 ) / 1611.044026769199";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1042(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 6, 7, diGamma(x), 0.001) - 1793.548917915007 ) / 1793.548917915007";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1043(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 7, 8, diGamma(x), 0.001) - 1947.854360261161 ) / 1947.854360261161";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1044(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 8, 9, diGamma(x), 0.001) - 2081.519681855709 ) / 2081.519681855709";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1045(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 9, 10, diGamma(x), 0.001) - 2199.420773340920 ) / 2199.420773340920";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1046(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 10, 100, diGamma(x), 0.01) - 34636.66366690680 ) / 34636.66366690680";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1047(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, 100, 1000, diGamma(x), 0.1) - 55466.61581150640 ) / 55466.61581150640";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1048(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -0.99, -0.01, diGamma(x), 0.001) - 1.422412463589325 ) / 1.422412463589325";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1049(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -1.99, -1.01, diGamma(x), 0.001) - 680.3530867812680 ) / 680.3530867812680";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1050(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -2.99, -2.01, diGamma(x), 0.001) - 1077.907743717255 ) / 1077.907743717255";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1051(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -3.99, -3.01, diGamma(x), 0.001) - 1360.050326061623 ) / 1360.050326061623";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1052(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -4.99, -4.01, diGamma(x), 0.001) - 1578.919885022366 ) / 1578.919885022366";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1053(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -5.99, -5.01, diGamma(x), 0.001) - 1757.758655903731 ) / 1757.758655903731";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1054(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -6.99, -6.01, diGamma(x), 0.001) - 1908.969189637675 ) / 1908.969189637675";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1055(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -7.99, -7.01, diGamma(x), 0.001) - 2039.956153658795 ) / 2039.956153658795";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1056(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -8.99, -8.01, diGamma(x), 0.001) - 2155.496280654945 ) / 2155.496280654945";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1057(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -9.99, -9.01, diGamma(x), 0.001) - 2258.851345832401 ) / 2258.851345832401";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1058(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="( sum(x, -10.99, -10.01, diGamma(x), 0.001) - 2352.347967017835 ) / 2352.347967017835";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-10)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1059(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x0, 0.1, 2, diGamma(x0) - der( Gamma(x), x, x0) / Gamma(x0), 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1060(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="sum(x, 0.01, 0.99, diGamma(1-x)-diGamma(x) - pi * cot(pi*x), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setCanonicalRounding(tmp);
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1061(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(x, 0.01, 0.99, diGamma(x+1)-diGamma(x) - 1/x, 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1062(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="sum(x, 0.01, 0.99, diGamma(x+1) - ( -[gam] + sum(k, 1, 10000, 1/k - 1/(x+k) ) ), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.01)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1063(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
let expStr="sum(x, 0.01, 0.99, sum(N, 1, 10, diGamma(x+N) - diGamma(x) - sum(k, 0, N-1, 1/(x+k)) ), 0.01)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1064(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
let expStr="sum(m, 3, 20, sum(r, 1, m-1, diGamma(r/m) - ( -[gam] - ln(2*m) - (pi/2)*cot( r * pi/m ) + 2 * sum(n, 1, floor( (m-1)/2 ), cos(2*pi*n*r / m) * ln( sin(pi*n / m) ) ) ) ) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1065(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sum(n, 1, 10, 1) - 10";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1066(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sum(n, 10, 1, 1) - 10";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1067(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sum(n, 10, 10, 1) - 1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1068(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="prod(n, 1, 10, 2) - 2^10";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1069(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="prod(n, 10, 1, 2) - 2^10";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1070(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="prod(n, 10, 10, 2) - 2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1071(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="avg(n, 1, 10, n) - 5.5";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1072(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="avg(n, 10, 1, n) - 5.5";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1073(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="avg(n, 10, 10, 1) - 1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1074(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("f(x) = par(0) + par(1) + par(-1) + [npar]"));
let expStr="f(1) - (1 + 1 + 1 + 1) + f(2) - (1 + 2 + 2 + 1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1075(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("f(x, y) = par(0) + par(1) + par(2) + par(-1) + par(-2) + [npar]"));
let expStr="f(1, 2) - (2 + 1 + 2 + 2 + 1 + 2) + f(-2,-1) - (2 + (-2) + (-1) + (-1) + (-2) + 2)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1076(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("f(x1, x2, x3, x4, x5) = prod(i, 1, [npar], par(i) )"));
let expStr="f(1,2,3,4,5) - 5!";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1077(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("f(x1, x2, x3, x4, x5) = prod(i, 1, [npar], par(-i) )"));
let expStr="f(1,2,3,4,5) - 5!";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1078(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("f(x1, x2, x3, x4, x5) = prod(i, -1, -[npar], par(i) )"));
let expStr="f(1,2,3,4,5) - 5!";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1079(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("f(...) = maxi(i, 1, [npar], par(i) )"));
let expStr="( f(1) - 1 ) + ( f(-1) + 1 ) + ( f(1,2,3,4,5) - 5 ) + ( f(1,2,6,10,4,5) - 10 ) + ( f(20, 1,2,3,4,5) - 20 )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1080(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("f(...) = sum(i, 1, par(0), sum(k, 1, [npar], par(i) + par(k)) )"));
let expStr="(f(1)-2)+(f(1,2)-12)+(f(1,2,3)-36)+(f(1,2,3,4)-80)+(f(1,2,3,4,5)-150)+(f(1,2,3,4,5,6)-252)+(f(1,2,3,4,5,6,7)-392)+(f(1,2,3,4,5,6,7,8)-576)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1081(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("f(...) = iff( [npar]>5, f(par(1),par(2),par(3),par(4),par(5)); [npar]=5, par(5)*f(par(1),par(2),par(3),par(4)); [npar]=4, par(4)*f(par(1),par(2),par(3)); [npar]=3, par(3)*f(par(1),par(2)); [npar]=2, par(2)*f(par(1)); [npar]=1, par(1) )"));
let expStr="f(1,2,3,4,5) - 1*2*3*4*5 + f(1,2,3,4,5,6) - 1*2*3*4*5 + f(1,2,3) - 1*2*3 + f(5,4,3,2,1) - 5*4*3*2*1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1082(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("sumv(...) = sum( i, 1, [npar], par(i) )"));
let expStr="( sumv(1) - add(1) ) + ( sumv(1,2) - add(1,2) ) + ( sumv(1,2,3) - add(1,2,3) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1083(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("multiv(...) = prod( i, 1, [npar], par(i) )"));
let expStr="( multiv(1) - multi(1) ) + ( multiv(1,2) - multi(1,2) ) + ( multiv(1,2,3) - multi(1,2,3) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1084(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("meanv(...) = avg( i, 1, [npar], par(i) )"));
let expStr="( meanv(1) - mean(1) ) + ( meanv(1,2) - mean(1,2) ) + ( meanv(1,2,3) - mean(1,2,3) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1085(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("varv(...) = vari( i, 1, [npar], par(i) )"));
let expStr="( varv(1) - var(1) ) + ( varv(1,2) - var(1,2) ) + ( varv(1,2,3) - var(1,2,3) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1086(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("stdv(...) = stdi( i, 1, [npar], par(i) )"));
let expStr="( stdv(1) - std(1) ) + ( stdv(1,2) - std(1,2) ) + ( stdv(1,2,3) - std(1,2,3) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1087(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("minv(...) = mini( i, 1, [npar], par(i) )"));
let expStr="( minv(1) - min(1) ) + ( minv(1,2) - min(1,2) ) + ( minv(1,2,3) - min(1,2,3) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1088(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let f=keep(new mx.Function("maxv(...) = maxi( i, 1, [npar], par(i) )"));
let expStr="( maxv(1) - max(1) ) + ( maxv(1,2) - max(1,2) ) + ( maxv(1,2,3) - max(1,2,3) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1089(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let fx=extensionFixture(mx,"FunExtVar");
let f=keep(new mx.Function("fx",nullableExtension(mx,"FunctionExtensionVariadic",fx)));
let expStr="( fx(1) - add(1) ) + ( fx(1,2) - add(1,2) ) + ( fx(1,2,3) - add(1,2,3) ) + ( fx(1,2,3,4) - add(1,2,3,4) ) +  ( fx(1,2,3,4,5) - add(1,2,3,4,5) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,f));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1090(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="1 + 1e-14";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(cppNumericCast(1,"double")+9.9999999999999999E-15);
if((mx.MathFunctions.abs((reg-value))<=1.0E-50)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1091(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="-1 - 1e-14";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(cppNumericCast((-1),"double")-9.9999999999999999E-15);
if((mx.MathFunctions.abs((reg-value))<=1.0E-50)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1092(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
let expStr="1 + 1e-14";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-50)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1093(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
let expStr="-1 - 1e-14";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast((-1),"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-50)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
check(testResult);
},
testExpr1096(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 0.1, 10, sum(x, 0.1, 1, Beta(x,y), 0.01) , 0.01) - 156045.8382688423 ) / 156045.8382688423";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1097(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 0.1, 10, sum(x, 1, 2, Beta(x,y), 0.01) , 0.01) - 32015.62331640863 ) / 32015.62331640863";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1098(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 0.1, 10, sum(x, 2, 3, Beta(x,y), 0.01) , 0.01) - 20432.57249276379 ) / 20432.57249276379";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1099(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 0.1, 10, sum(x, 3, 4, Beta(x,y), 0.01) , 0.01) - 16648.09228879020 ) / 16648.09228879020";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1100(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 0.1, 10, sum(x, 4, 5, Beta(x,y), 0.01) , 0.01) - 14709.95317941022 ) / 14709.95317941022";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1101(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 0.1, 10, sum(x, 5, 6, Beta(x,y), 0.01) , 0.01) - 13491.02099096915 ) / 13491.02099096915";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1102(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 0.1, 10, sum(x, 6, 7, Beta(x,y), 0.01) , 0.01) - 12632.76303747905 ) / 12632.76303747905";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1103(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 0.1, 10, sum(x, 7, 8, Beta(x,y), 0.01) , 0.01) - 11984.64820297520 ) / 11984.64820297520";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1104(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 0.1, 10, sum(x, 8, 9, Beta(x,y), 0.01) , 0.01) - 11471.56326266911 ) / 11471.56326266911";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1105(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 0.1, 10, sum(x, 9, 10, Beta(x,y), 0.01) , 0.01) - 11051.38593753202 ) / 11051.38593753202";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1106(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 10, 100, sum(x, 10, 100, Beta(x,y), 0.1) , 0.1) - 0.0002504318934669270 ) / 0.0002504318934669270";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1111(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 0.1, 10, sum(x, 0.1, 10, logBeta(x,y), 0.1) , 0.1) - (-52463.38489346371) ) / (-52463.38489346371)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1112(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 10, 30, sum(x, 10, 30, logBeta(x,y), 0.1) , 0.1) - (-1.092606400417545E6) ) / (-1.092606400417545E6)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1113(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 30, 60, sum(x, 30, 60, logBeta(x,y), 0.1) , 0.1) - (-5.631010749308205E6) ) / (-5.631010749308205E6)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1114(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(y, 60, 100, sum(x, 60, 100, logBeta(x,y), 0.1) , 0.1) - (-1.784485348348011E7) ) / (-1.784485348348011E7)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1115(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(b, 0.1, 1, sum(a, 0.1, 1, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 196515.9203818563 ) / 196515.9203818563";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1116(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(b, 1, 2, sum(a, 1, 2, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 24722.41740481695 ) / 24722.41740481695";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1117(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(b, 2, 3, sum(a, 2, 3, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 4464.859252111892 ) / 4464.859252111892";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1118(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(b, 3, 4, sum(a, 3, 4, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 918.5527313884891 ) / 918.5527313884891";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1119(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(b, 4, 5, sum(a, 4, 5, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 199.6846597371872 ) / 199.6846597371872";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1120(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(b, 5, 6, sum(a, 5, 6, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 44.76264323950131 ) / 44.76264323950131";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1121(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(b, 6, 7, sum(a, 6, 7, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 10.23292155881704 ) / 10.23292155881704";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1122(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(b, 7, 8, sum(a, 7, 8, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 2.371353239618641 ) / 2.371353239618641";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1123(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(b, 8, 9, sum(a, 8, 9, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 0.5550610613543622 ) / 0.5550610613543622";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1124(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(b, 9, 10, sum(a, 9, 10, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 0.1309235541230968 ) / 0.1309235541230968";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1125(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( sum(b, 10, 80, sum(a, 10, 80, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.25) , 0.25) - 0.0002449250611436628 ) / 0.0002449250611436628";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1126(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="sum(b, 1, 10, sum(a, 1, 10, sum(x, 0.1, 0.9, der( BetaInc(x, a, b), x, x ) - ( (1-x)^(b-1) ) * ( x^(a-1) ) ,0.1) , 0.1) , 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-4)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1127(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="sum(b, 0.1, 10, sum(a, 0.1, 10, BetaInc(1, a, b) - Beta(a,b) , 0.1) , 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1128(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="sum(b, 0.1, 10, sum(a, 0.1, 10, BetaInc(0, a, b) , 0.1) , 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1129(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( isNaN( BetaInc(-1,1,1) ) - [true] ) + ( isNaN( BetaInc(2,1,1) ) - [true] ) + ( isNaN( BetaInc( [NaN] ,1,1) ) - [true] ) + ( isNaN( BetaInc(0.5, [NaN], 1) ) - [true] ) + ( isNaN( BetaInc(0.5, 1 , [NaN]) ) - [true] )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1130(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( isNaN( BetaInc(0.5,-1,1) ) - [true] ) + ( isNaN( BetaInc(0.5,1,-1) ) - [true] )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1131(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="sum(b, 0.1, 10, sum(a, 0.1, 10, BetaI(1, a, b) - 1 , 0.1) , 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1132(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="sum(b, 0.1, 10, sum(a, 0.1, 10, BetaI(0, a, b) , 0.1) , 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1133(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( isNaN( BetaI(-1,0,1) ) - [true] ) + ( isNaN( BetaI(2,1,0) ) - [true] ) + ( isNaN( BetaI( [NaN] ,1,1) ) - [true] ) + ( isNaN( BetaI(0.5, [NaN], 1) ) - [true] ) + ( isNaN( BetaI(0.5, 1 , [NaN]) ) - [true] )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1134(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let expStr="( isNaN( BetaI(0.5,-1,1) ) - [true] ) + ( isNaN( BetaI(0.5,1,-1) ) - [true] )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1135(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
let expStr="sum(b, 0.1, 80, sum(a, 0.1, 80, sum(x, 0, 1, BetaI(x, a, b) * Beta(a,b) - BetaInc(x,a,b) ,0.1) , 0.25) , 0.25)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1136(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
let tmp=mx.mXparser.checkIfCanonicalRounding();
let expStr="sum(b, 0.1, 80, sum(a, 0.1, 80, sum(x, 0, 1, BetaI(x, a, b) - BetaReg(x,a,b) ,0.1) , 0.25) , 0.25)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableUlpRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1164(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="sin(0) + sin(2*pi) + sin(-2*pi) + sin(4*pi) + sin(-4*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((Math.sin(0)+Math.sin((2*Math.PI)))+Math.sin(((-2)*Math.PI)))+Math.sin((4*Math.PI)))+Math.sin(((-4)*Math.PI)));
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1165(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="cos(0) + cos(2*pi) + cos(-2*pi) + cos(4*pi) + cos(-4*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((Math.cos(0)+Math.cos((2*Math.PI)))+Math.cos(((-2)*Math.PI)))+Math.cos((4*Math.PI)))+Math.cos(((-4)*Math.PI)));
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1166(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="tan(0) + tan(2*pi) + tan(-2*pi) + tan(4*pi) + tan(-4*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((Math.tan(0)+Math.tan((2*Math.PI)))+Math.tan(((-2)*Math.PI)))+Math.tan((4*Math.PI)))+Math.tan(((-4)*Math.PI)));
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1167(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="sec(0) + sec(2*pi) + sec(-2*pi) + sec(4*pi) + sec(-4*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(((((1/Math.cos(0))+(1/Math.cos((2*Math.PI))))+(1/Math.cos(((-2)*Math.PI))))+(1/Math.cos((4*Math.PI))))+(1/Math.cos(((-4)*Math.PI))));
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1168(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="sin(0) + sin(2*pi) + sin(-2*pi) + sin(4*pi) + sin(-4*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.SpecialValueTrigonometric.SIN_0+mx.SpecialValueTrigonometric.SIN_0)+mx.SpecialValueTrigonometric.SIN_0)+mx.SpecialValueTrigonometric.SIN_0)+mx.SpecialValueTrigonometric.SIN_0);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1169(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="cos(0) + cos(2*pi) + cos(-2*pi) + cos(4*pi) + cos(-4*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.SpecialValueTrigonometric.COS_0+mx.SpecialValueTrigonometric.COS_0)+mx.SpecialValueTrigonometric.COS_0)+mx.SpecialValueTrigonometric.COS_0)+mx.SpecialValueTrigonometric.COS_0);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1170(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="tan(0) + tan(2*pi) + tan(-2*pi) + tan(4*pi) + tan(-4*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.SpecialValueTrigonometric.TAN_0+mx.SpecialValueTrigonometric.TAN_0)+mx.SpecialValueTrigonometric.TAN_0)+mx.SpecialValueTrigonometric.TAN_0)+mx.SpecialValueTrigonometric.TAN_0);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1171(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="sec(0) + sec(2*pi) + sec(-2*pi) + sec(4*pi) + sec(-4*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.SpecialValueTrigonometric.SEC_0+mx.SpecialValueTrigonometric.SEC_0)+mx.SpecialValueTrigonometric.SEC_0)+mx.SpecialValueTrigonometric.SEC_0)+mx.SpecialValueTrigonometric.SEC_0);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1172(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="isNaN(ctan(0)) + isNaN(ctan(2*pi)) + isNaN(ctan(-2*pi)) + isNaN(ctan(4*pi)) + isNaN(ctan(-4*pi))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.BooleanAlgebra.T+mx.BooleanAlgebra.T)+mx.BooleanAlgebra.T)+mx.BooleanAlgebra.T)+mx.BooleanAlgebra.T);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1173(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="isNaN(csc(0)) + isNaN(csc(2*pi)) + isNaN(csc(-2*pi)) + isNaN(csc(4*pi)) + isNaN(csc(-4*pi))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.BooleanAlgebra.T+mx.BooleanAlgebra.T)+mx.BooleanAlgebra.T)+mx.BooleanAlgebra.T)+mx.BooleanAlgebra.T);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1174(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="sin((1/6)*pi) + sin((13/6)*pi) + sin((-11/6)*pi) + sin((25/6)*pi) + sin((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((Math.sin(((1/6)*Math.PI))+Math.sin(((13/6)*Math.PI)))+Math.sin((((-11)/6)*Math.PI)))+Math.sin(((25/6)*Math.PI)))+Math.sin((((-23)/cppNumericCast(6,"double"))*Math.PI)));
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1175(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="cos((1/6)*pi) + cos((13/6)*pi) + cos((-11/6)*pi) + cos((25/6)*pi) + cos((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((Math.cos(((1/6)*Math.PI))+Math.cos(((13/6)*Math.PI)))+Math.cos((((-11)/6)*Math.PI)))+Math.cos(((25/6)*Math.PI)))+Math.cos((((-23)/cppNumericCast(6,"double"))*Math.PI)));
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1176(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="tan((1/6)*pi) + tan((13/6)*pi) + tan((-11/6)*pi) + tan((25/6)*pi) + tan((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((Math.tan(((1/6)*Math.PI))+Math.tan(((13/6)*Math.PI)))+Math.tan((((-11)/6)*Math.PI)))+Math.tan(((25/6)*Math.PI)))+Math.tan((((-23)/cppNumericCast(6,"double"))*Math.PI)));
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1177(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="ctan((1/6)*pi) + ctan((13/6)*pi) + ctan((-11/6)*pi) + ctan((25/6)*pi) + ctan((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(((((1/Math.tan(((1/6)*Math.PI)))+(1/Math.tan(((13/6)*Math.PI))))+(1/Math.tan((((-11)/6)*Math.PI))))+(1/Math.tan(((25/6)*Math.PI))))+(1/Math.tan((((-23)/cppNumericCast(6,"double"))*Math.PI))));
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1178(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="sec((1/6)*pi) + sec((13/6)*pi) + sec((-11/6)*pi) + sec((25/6)*pi) + sec((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(((((1/Math.cos(((1/6)*Math.PI)))+(1/Math.cos(((13/6)*Math.PI))))+(1/Math.cos((((-11)/6)*Math.PI))))+(1/Math.cos(((25/6)*Math.PI))))+(1/Math.cos((((-23)/cppNumericCast(6,"double"))*Math.PI))));
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1179(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="csc((1/6)*pi) + csc((13/6)*pi) + csc((-11/6)*pi) + csc((25/6)*pi) + csc((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(((((1/Math.sin(((1/6)*Math.PI)))+(1/Math.sin(((13/6)*Math.PI))))+(1/Math.sin((((-11)/6)*Math.PI))))+(1/Math.sin(((25/6)*Math.PI))))+(1/Math.sin((((-23)/cppNumericCast(6,"double"))*Math.PI))));
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1180(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="sin((1/6)*pi) + sin((13/6)*pi) + sin((-11/6)*pi) + sin((25/6)*pi) + sin((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.SpecialValueTrigonometric.SIN_30+mx.SpecialValueTrigonometric.SIN_30)+mx.SpecialValueTrigonometric.SIN_30)+mx.SpecialValueTrigonometric.SIN_30)+mx.SpecialValueTrigonometric.SIN_30);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1181(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="cos((1/6)*pi) + cos((13/6)*pi) + cos((-11/6)*pi) + cos((25/6)*pi) + cos((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.SpecialValueTrigonometric.COS_30+mx.SpecialValueTrigonometric.COS_30)+mx.SpecialValueTrigonometric.COS_30)+mx.SpecialValueTrigonometric.COS_30)+mx.SpecialValueTrigonometric.COS_30);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1182(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="tan((1/6)*pi) + tan((13/6)*pi) + tan((-11/6)*pi) + tan((25/6)*pi) + tan((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.SpecialValueTrigonometric.TAN_30+mx.SpecialValueTrigonometric.TAN_30)+mx.SpecialValueTrigonometric.TAN_30)+mx.SpecialValueTrigonometric.TAN_30)+mx.SpecialValueTrigonometric.TAN_30);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1183(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="ctan((1/6)*pi) + ctan((13/6)*pi) + ctan((-11/6)*pi) + ctan((25/6)*pi) + ctan((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.SpecialValueTrigonometric.CTAN_30+mx.SpecialValueTrigonometric.CTAN_30)+mx.SpecialValueTrigonometric.CTAN_30)+mx.SpecialValueTrigonometric.CTAN_30)+mx.SpecialValueTrigonometric.CTAN_30);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1184(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="sec((1/6)*pi) + sec((13/6)*pi) + sec((-11/6)*pi) + sec((25/6)*pi) + sec((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.SpecialValueTrigonometric.SEC_30+mx.SpecialValueTrigonometric.SEC_30)+mx.SpecialValueTrigonometric.SEC_30)+mx.SpecialValueTrigonometric.SEC_30)+mx.SpecialValueTrigonometric.SEC_30);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1185(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="csc((1/6)*pi) + csc((13/6)*pi) + csc((-11/6)*pi) + csc((25/6)*pi) + csc((-23/6)*pi)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=((((mx.SpecialValueTrigonometric.CSC_30+mx.SpecialValueTrigonometric.CSC_30)+mx.SpecialValueTrigonometric.CSC_30)+mx.SpecialValueTrigonometric.CSC_30)+mx.SpecialValueTrigonometric.CSC_30);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1186(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="sin(asin(sin(asin(sin(asin(sin((1/6)*pi)))))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=mx.SpecialValueTrigonometric.SIN_30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1187(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="cos(acos(cos(acos(cos(acos(cos((1/6)*pi)))))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=mx.SpecialValueTrigonometric.COS_30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1188(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="tan(atan(tan(atan(tan(atan(tan((1/6)*pi)))))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=mx.SpecialValueTrigonometric.TAN_30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1189(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="ctan(actan(ctan(actan(ctan(actan(ctan((1/6)*pi)))))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=mx.SpecialValueTrigonometric.CTAN_30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1190(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let tmp=mx.mXparser.checkIfCanonicalRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="sec(arcsec(sec(arcsec(sec(arcsec(sec((1/6)*pi)))))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=mx.SpecialValueTrigonometric.SEC_30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setCanonicalRounding(tmp);
check(testResult);
},
testExpr1191(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setRadiansMode();
let expStr="csc(arccsc(csc(arccsc(csc(arccsc(csc((1/6)*pi)))))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=mx.SpecialValueTrigonometric.CSC_30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
check(testResult);
},
testExpr1192(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setDegreesMode();
let expStr="asin(sin(asin(sin(30))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1193(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setDegreesMode();
let expStr="acos(cos(acos(cos(30))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1194(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setDegreesMode();
let expStr="atan(tan(atan(tan(30))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1195(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setDegreesMode();
let expStr="actan(ctan(actan(ctan(30))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1196(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setDegreesMode();
let expStr="arcsec(sec(arcsec(sec(30))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1197(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setDegreesMode();
let expStr="arccsc(csc(arccsc(csc(30))))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1198(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.setDegreesMode();
let expStr="asin(sin(31)) + acos(cos(32)) + atan(tan(33)) + actan(ctan(34)) + arcsec(sec(35)) + arccsc(csc(36))";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(((((31+32)+33)+34)+35)+36);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1199(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="0.1 + 0.1 + 0.1";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=0.29999999999999999;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1200(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="2.5 - 2.3";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=0.20000000000000001;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1201(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="2.53 + 2.0";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=4.5300000000000002;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1202(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="2.53 * 2.675";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=6.7677500000000004;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1203(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="-2.53 * 2.675";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(-6.7677500000000004);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1204(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="5.55 / 5";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=1.1100000000000001;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1205(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="-5.55 / 5";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(-1.1100000000000001);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1206(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="6.2^2";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=38.439999999999998;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1207(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="-6.2^3";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(-238.328);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1208(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="(1/6.2)^(-2)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=38.439999999999998;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1209(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="(1/6.2)^(-3)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=238.328;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1210(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="(-1/6.2)^(-3)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(-238.328);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1211(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="sum(i, 1, 1000, 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(100,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1212(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="sum(i, 1, 1000, -0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast((-100),"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1213(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="sum(i, -1000, -1, 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(100,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1214(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="sum(i, -1000, -1, -0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast((-100),"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1215(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="prod(i, 1, 3, 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=0.001;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1216(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="prod(i, 1, 3, -0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(-0.001);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1217(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="prod(i, -3, -1, 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=0.001;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1218(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="prod(i, -3, -1, -0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(-0.001);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1219(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="prod(i, 1, 2, 6.2)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=38.439999999999998;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1220(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="prod(i, 1, 3, 6.2)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=238.328;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1221(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="add(0.1, 0.1, 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=0.29999999999999999;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1222(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="add(-0.1, -0.1, -0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(-0.29999999999999999);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1223(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="multi(0.1, 0.1, 0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=0.001;
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1224(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.enableCanonicalRounding();
let expStr="multi(-0.1, -0.1, -0.1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=(-0.001);
if((mx.MathFunctions.abs((reg-value))<=1.0E-100)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.enableAlmostIntRounding();
mx.mXparser.setRadiansMode();
check(testResult);
},
testExpr1233(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let piMultArgExt=extensionFixture(mx,"PiMultArgExt");
let x=keep(new mx.Argument("x",nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
let expStr="x + x + x + x";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=(cppNumericCast(10,"double")*mx.MathConstants.PI);
if((mx.MathFunctions.abs((reg-value))<=1.0E-13)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1361(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="0.035%";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=3.5E-4;
if((reg===value)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1362(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="asin(sin(30.5))";
void 0 /* console diagnostics */;
mx.mXparser.setDegreesMode();
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30.5;
if((reg===value)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1363(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="acos(cos(30.5))";
void 0 /* console diagnostics */;
mx.mXparser.setDegreesMode();
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30.5;
if((reg===value)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1364(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="atan(tan(30.5))";
void 0 /* console diagnostics */;
mx.mXparser.setDegreesMode();
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30.5;
if((reg===value)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1365(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="actan(ctan(30.5))";
void 0 /* console diagnostics */;
mx.mXparser.setDegreesMode();
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30.5;
if((reg===value)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1366(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="arcsec(sec(30.5))";
void 0 /* console diagnostics */;
mx.mXparser.setDegreesMode();
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30.5;
if((reg===value)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1367(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="arccsc(csc(30.5))";
void 0 /* console diagnostics */;
mx.mXparser.setDegreesMode();
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=30.5;
if((reg===value)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1369(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let d1=keep(new mx.Constant("d1 = rUnid(3, 100)"));
let d2=keep(new mx.Constant("d2 = rUnid(1, 100)"));
let m=keep(new mx.Constant("m = ( (d1-2)/d1 ) * ( d2 / (d2 + 2) )",d1,d2));
let x0=keep(new mx.Constant("x0 = rUni(0.7*m, 1.3*m)",m));
let expStr="der(cFSned(x, d1, d2), x, x0) - pFSned(x0, d1, d2)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x0,d1,d2));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=1.0E-8)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.consolePrintln(((""+"------ d1 = ")+String(d1.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ d2 = ")+String(d2.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ m = ")+String(m.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ x0 = ")+String(x0.getConstantValue())));
check(testResult);
},
testExpr1371(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let d1=keep(new mx.Constant("d1 = rUnid(3, 100)"));
let d2=keep(new mx.Constant("d2 = rUnid(1, 100)"));
let m=keep(new mx.Constant("m = ( (d1-2)/d1 ) * ( d2 / (d2 + 2) )",d1,d2));
let x0=keep(new mx.Constant("x0 = rUni(0.2*m, 3*m)",m));
let expStr="qFSned( cFSned(x0, d1, d2), d1, d2) - x0";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x0,d1,d2));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.consolePrintln(((""+"------ d1 = ")+String(d1.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ d2 = ")+String(d2.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ m = ")+String(m.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ x0 = ")+String(x0.getConstantValue())));
check(testResult);
},
testExpr1372(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let d1=keep(new mx.Constant("d1 = rUnid(3, 100)"));
let d2=keep(new mx.Constant("d2 = rUnid(1, 100)"));
let p=keep(new mx.Constant("p = rUni(0.02, 0.98)"));
let expStr="cFSned( qFSned(p, d1, d2), d1, d2) - p";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,p,d1,d2));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999998E-13)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.consolePrintln(((""+"------ d1 = ")+String(d1.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ d2 = ")+String(d2.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ p = ")+String(p.getConstantValue())));
check(testResult);
},
testExpr1375(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let d1=keep(new mx.Constant("d1 = rUnid(3, 100)"));
let d2=keep(new mx.Constant("d2 = rUnid(1, 100)"));
let m=keep(new mx.Constant("m = ( (d1-2)/d1 ) * ( d2 / (d2 + 2) )",d1,d2));
let a=keep(new mx.Constant("a = 0.2*m",m));
let b=keep(new mx.Constant("b = 1.9*m",m));
let expStr="int( pFSned(x, d1, d2), x, a, b ) - ( cFSned(b, d1, d2) - cFSned(a, d1, d2) )";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,d1,d2,a,b));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999995E-7)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.consolePrintln(((""+"------ d1 = ")+String(d1.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ d2 = ")+String(d2.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ m = ")+String(m.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ a = ")+String(a.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ b = ")+String(b.getConstantValue())));
check(testResult);
},
testExpr1377(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let d1=keep(new mx.Constant("d1 = rUnid(50, 100)"));
let d2=keep(new mx.Constant("d2 = rUnid(50, 100)"));
let m=keep(new mx.Constant("m = d2 / (d2 - 2)",d1,d2));
let expStr="avg(i, 1, 1000000, rFSned(d1, d2)) - m";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,d1,d2,m));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.01)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.consolePrintln(((""+"------ d1 = ")+String(d1.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ d2 = ")+String(d2.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ m = ")+String(m.getConstantValue())));
check(testResult);
},
testExpr1378(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let d1=keep(new mx.Constant("d1 = rUnid(30, 70)"));
let d2=keep(new mx.Constant("d2 = rUnid(30, 70)"));
let v=keep(new mx.Constant("v = (2 * d2 * d2 * (d1 + d2 -2)) / (d1 * (d2 - 4) * (d2 - 2)^2)",d1,d2));
let expStr="vari(i, 1, 1000000, rFSned(d1, d2)) - v";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,d1,d2,v));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((mx.MathFunctions.abs((reg-value))<=0.01)){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.consolePrintln(((""+"------ d1 = ")+String(d1.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ d2 = ")+String(d2.getConstantValue())));
mx.mXparser.consolePrintln(((""+"------ v = ")+String(v.getConstantValue())));
check(testResult);
},
testExpr1379(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.License.iConfirmNonCommercialUse("INFIMA");
let expStr="dig(314159265, 271828183, 161803399)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(((((1+(1*10))+(mx.mXparser.VERSION_PATCH*100))+(mx.mXparser.VERSION_MINOR*10000))+(mx.mXparser.VERSION_MAJOR*1000000)),"double");
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1380(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2*x"));
x.addArguments(x);
let testExp=keep(new mx.Expression(expStr,x));
mx.mXparser.setMaxAllowedRecursionDepth(15);
let value=testExp.calculate();
let reg=NaN;
let errorMessage=testExp.getErrorMessage();
let stringResources=keep(mx.StringModel.getStringResources());
if((Number.isNaN(value)&&textContains(errorMessage,stringResources.RECURSION_CALLS_COUNTER_EXCEEDED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1381(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = x+x"));
x.addArguments(x);
let testExp=keep(new mx.Expression(expStr,x));
mx.mXparser.setMaxAllowedRecursionDepth(15);
let value=testExp.calculate();
let reg=NaN;
let errorMessage=testExp.getErrorMessage();
let stringResources=keep(mx.StringModel.getStringResources());
if((Number.isNaN(value)&&textContains(errorMessage,stringResources.RECURSION_CALLS_COUNTER_EXCEEDED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1382(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="+(2)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
testExp.disableAttemptToFixExpStrMode();
let value=testExp.calculate();
let reg=cppNumericCast(2,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1383(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="-(2)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
testExp.disableAttemptToFixExpStrMode();
let value=testExp.calculate();
let reg=cppNumericCast((-2),"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1384(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="if( abs( 10*x^9 - der(x^10, x, 0.0000002, 20000) ) < abs( 10*x^9 - der(x^10, x) ) ; 1; 0)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1385(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="if( abs( 10*x^9 - der(x^10, x, 0.1, 2) ) > abs( 10*x^9 - der(x^10, x) ) ; 1; 0)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1386(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="if( abs( 10*2^9 - der(x^10, x, 2, 0.0000002, 20000) ) < abs( 10*2^9 - der(x^10, x, 2) ) ; 1; 0)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1387(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="if( abs( 10*2^9 - der(x^10, x, 2, 0.1, 2) ) > abs( 10*2^9 - der(x^10, x, 2) ) ; 1; 0)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1388(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="KDelta(0,0)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(1,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1389(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="KDelta(0,1)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1390(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sum(i, 1, 100, sum(j, 1, 100, KDelta(i,j)*i*j ) ) - sum(k, 1, 100, k^2)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1391(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="EulerPol(0, x) - 1";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1392(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="EulerPol(1, x) - (x - 1_2)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1393(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="EulerPol(2, x) - (x^2 - x)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1394(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="EulerPol(3, x) - (x^3 - 3_2x^2 + 1_4)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1395(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="EulerPol(4, x) - (x^4 - 2x^3 + x)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1396(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="EulerPol(5, x) - (x^5 - 5_2x^4 + 5_2x^2 - 1_2)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1397(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="EulerPol(6, x) - (x^6 - 3x^5 + 5x^3 - 3x)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let testExp=keep(new mx.Expression(expStr,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1398(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="EulerPol(n, x + y) - sum(k, 0, n, C(n,k) EulerPol(n-k, x) y^k )";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let y=keep(new mx.Argument("y = 4"));
let n=keep(new mx.Argument("n = 8"));
let testExp=keep(new mx.Expression(expStr,n,x,y));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1399(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="der(EulerPol(n, x), x)  - n*EulerPol(n-1, x)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let n=keep(new mx.Argument("n = 7"));
let testExp=keep(new mx.Expression(expStr,n,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=0.001)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1400(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="EulerPol(n, x+1) + EulerPol(n, x) - 2x^n";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x = 2"));
let n=keep(new mx.Argument("n = 7"));
let testExp=keep(new mx.Expression(expStr,n,x));
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
let stringResources=keep(mx.StringModel.getStringResources());
if((mx.MathFunctions.abs((reg-value))<=9.9999999999999999E-15)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1401(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="(2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) - (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) + (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) * 345 * ((897 - 323)/ 23)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=testExp.calculate();
if((mx.MathFunctions.abs((reg-value))===cppNumericCast(0,"double"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1402(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="f(x,y)+z+(x*y)/z";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x","2*rList(2,2,2,2,2)"));
let y=keep(new mx.Argument("y = 2*x",[x]));
let z=keep(new mx.Argument("z = 3*y/x",[x,y]));
let f=keep(new mx.Function("f(a,b) = a*b"));
let testExp=keep(new mx.Expression(expStr,x,y,z,f));
let value=testExp.calculate();
let reg=testExp.calculate();
if((mx.MathFunctions.abs((reg-value))===cppNumericCast(0,"double"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1415(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="b.1101@~&b.1001";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(cppNumericCast((~cppNumericCast((13&9),"int")),"int"),"double");
if((mx.MathFunctions.abs((reg-value))===cppNumericCast(0,"double"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1416(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="b.1101@~|b.1001";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(cppNumericCast((~cppNumericCast((13|9),"int")),"int"),"double");
if((mx.MathFunctions.abs((reg-value))===cppNumericCast(0,"double"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1417(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="b.1101@~^b.1001";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
let value=testExp.calculate();
let reg=cppNumericCast(cppNumericCast((~cppNumericCast((13^9),"int")),"int"),"double");
if((mx.MathFunctions.abs((reg-value))===cppNumericCast(0,"double"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1418(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="(b.1101@~^b.1001)+(b.1101@~&b.1001)+(b.1101@~|b.1001)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr));
testExp.calculate();
testExp.calculate();
let value=testExp.calculate();
let reg=cppNumericCast(((cppNumericCast((~cppNumericCast((13^9),"int")),"int")+cppNumericCast((~cppNumericCast((13&9),"int")),"int"))+cppNumericCast((~cppNumericCast((13|9),"int")),"int")),"double");
if((mx.MathFunctions.abs((reg-value))===cppNumericCast(0,"double"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1419(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let x=keep(new mx.Argument("x"));
x.setArgumentValue(mx.MathConstants.PIBY2);
let expStr="tan(x)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
testExp.calculate();
let value=testExp.calculate();
let reg=NaN;
if(Number.isNaN(value)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1420(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let x=keep(new mx.Argument("x"));
x.setArgumentValue(mx.MathConstants.PIBY2);
let expStr="cos(x)";
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
testExp.calculate();
let value=testExp.calculate();
let reg=cppNumericCast(0,"double");
if((value===reg)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1421(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let x=keep(new mx.Argument("x"));
x.setArgumentValue(mx.MathConstants.PIBY2);
let expStr="tan(x)";
void 0 /* console diagnostics */;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.disableSpecialCases();
let testExp=keep(new mx.Expression(expStr,x));
testExp.calculate();
let value=testExp.calculate();
let reg=Math.tan(mx.MathConstants.PIBY2);
if((value===reg)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1422(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let x=keep(new mx.Argument("x"));
x.setArgumentValue(mx.MathConstants.PIBY2);
let expStr="cos(x)";
void 0 /* console diagnostics */;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
mx.mXparser.disableSpecialCases();
let testExp=keep(new mx.Expression(expStr,x));
testExp.calculate();
let value=testExp.calculate();
let reg=Math.cos(x.getArgumentValue());
if((value===reg)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1437(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
let testResult=false;
let expStr="dern(x^5, 3, x)";
let x=keep(new mx.Argument("x = 1"));
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
testExp.calculate();
let value=testExp.calculate();
let reg=cppNumericCast(60,"double");
let tolerance=0.69999999999999996;
if((mx.MathFunctions.abs((reg-value))<tolerance)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1439(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
let testResult=false;
let expStr="dern(x^6, 3, x)";
let x=keep(new mx.Argument("x = 1"));
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
testExp.calculate();
let value=testExp.calculate();
let reg=cppNumericCast(120,"double");
let tolerance=0.01;
if((mx.MathFunctions.abs((reg-value))<tolerance)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testExpr1440(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
mx.mXparser.disableAlmostIntRounding();
mx.mXparser.disableCanonicalRounding();
mx.mXparser.disableUlpRounding();
let testResult=false;
let expStr="dern(x^6, 3, x)";
let x=keep(new mx.Argument("x = 1.5"));
void 0 /* console diagnostics */;
let testExp=keep(new mx.Expression(expStr,x));
testExp.calculate();
let value=testExp.calculate();
let reg=cppNumericCast(405,"double");
let tolerance=0.5;
if((mx.MathFunctions.abs((reg-value))<tolerance)){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0086(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="f()=x+y";
void 0 /* console diagnostics */;
let f=keep(new mx.Function(expStr));
let msg=f.getErrorMessage();
let e=keep(new mx.Expression("f",f));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH)&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0087(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="f(1,x,y)=x+y";
void 0 /* console diagnostics */;
let f=keep(new mx.Function(expStr));
let msg=f.getErrorMessage();
let e=keep(new mx.Expression("f",f));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH)&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0088(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="f(1)=x+y";
void 0 /* console diagnostics */;
let f=keep(new mx.Function(expStr));
let msg=f.getErrorMessage();
let e=keep(new mx.Expression("f",f));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH)&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0089(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="f(x,)=x+y";
void 0 /* console diagnostics */;
let f=keep(new mx.Function(expStr));
let msg=f.getErrorMessage();
let e=keep(new mx.Expression("f",f));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH)&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0090(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="f(x,  a, x, )=x+y";
void 0 /* console diagnostics */;
let f=keep(new mx.Function(expStr));
let msg=f.getErrorMessage();
let e=keep(new mx.Expression("f",f));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH)&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0091(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="  f   (x ,   y,    z   )  = x +  y  +z  ";
void 0 /* console diagnostics */;
let f=keep(new mx.Function(expStr));
let msg=f.getErrorMessage();
let e=keep(new mx.Expression("f(1,2,3)",f));
let reg=true;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((!textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&(cppNumericCast(reg,"int")===cppNumericCast(syn,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0092(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x()=y+z";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((textContains(msg,stringResources.INVALID_ARGUMENT_DEFINITION)&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0093(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x(1,a,b)=a+b";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((textContains(msg,stringResources.INVALID_ARGUMENT_DEFINITION)&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0094(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x(1)=a+b";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((textContains(msg,stringResources.INVALID_ARGUMENT_DEFINITION)&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0095(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x(a,)=a+b";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((textContains(msg,stringResources.INVALID_ARGUMENT_DEFINITION)&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0096(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x(a, b, c,)=a+c";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((textContains(msg,stringResources.INVALID_ARGUMENT_DEFINITION)&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0097(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="  x (  a, b   , c  ) = a+b+c";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr,[keep(new mx.Argument("a = 1")),keep(new mx.Argument("b = 2")),keep(new mx.Argument("   c = 3"))]));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((cppNumericCast(reg,"int")===cppNumericCast(syn,"int"))&&textContains(msg,stringResources.INVALID_ARGUMENT_DEFINITION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0098(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x 5";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((textContains(msg,stringResources.INVALID_ARGUMENT_DEFINITION)&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0099(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="  x = 5 + 1 + 2";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr,[keep(new mx.Argument("a = 1")),keep(new mx.Argument("b = 2")),keep(new mx.Argument("   c = 3"))]));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=true;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((((!textContains(msg,stringResources.INVALID_ARGUMENT_DEFINITION))&&(cppNumericCast(reg,"int")===cppNumericCast(syn,"int")))&&(e.calculate()===cppNumericCast(8,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0100(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="f(n,m)=n*f(n-1)";
void 0 /* console diagnostics */;
let x=keep(new mx.RecursiveArgument(expStr));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((textContains(msg,stringResources.INVALID_ARGUMENT_DEFINITION)&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0101(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="RecursiveArgument name    1fa";
void 0 /* console diagnostics */;
let x=keep(new mx.RecursiveArgument("1fa","f(n-1)","n"));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x(1)",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((textContains(msg,stringResources.INVALID_ARGUMENT_NAME)&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0102(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x()=y+z";
void 0 /* console diagnostics */;
let c1=keep(new mx.Constant(expStr));
let msg=c1.getErrorMessage();
let e=keep(new mx.Expression("x",c1));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH)&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0103(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x(1,a,b)=a+b";
void 0 /* console diagnostics */;
let c1=keep(new mx.Constant(expStr));
let msg=c1.getErrorMessage();
let e=keep(new mx.Expression("x",c1));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH)&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0104(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x(1)=a+b";
void 0 /* console diagnostics */;
let c1=keep(new mx.Constant(expStr));
let msg=c1.getErrorMessage();
let e=keep(new mx.Expression("x",c1));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH)&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0105(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x(a,)=a+b";
void 0 /* console diagnostics */;
let c1=keep(new mx.Constant(expStr));
let msg=c1.getErrorMessage();
let e=keep(new mx.Expression("x",c1));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH)&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0106(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x(a, b, c,)=a+c";
void 0 /* console diagnostics */;
let c1=keep(new mx.Constant(expStr));
let msg=c1.getErrorMessage();
let e=keep(new mx.Expression("x",c1));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH)&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0107(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="  x = a+b+c";
void 0 /* console diagnostics */;
let c1=keep(new mx.Constant(expStr,keep(new mx.Argument("a = 1")),keep(new mx.Argument("b = 2")),keep(new mx.Argument("   c = 3"))));
let msg=c1.getErrorMessage();
let e=keep(new mx.Expression("x",c1));
let reg=true;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((((!textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&(cppNumericCast(reg,"int")===cppNumericCast(syn,"int")))&&(e.calculate()===cppNumericCast(6,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0108(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x 5";
void 0 /* console diagnostics */;
let c1=keep(new mx.Constant(expStr));
let msg=c1.getErrorMessage();
let e=keep(new mx.Expression("x",c1));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH)&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0109(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="  x = 5 + 1 + 2";
void 0 /* console diagnostics */;
let c1=keep(new mx.Constant(expStr));
let msg=c1.getErrorMessage();
let e=keep(new mx.Expression("x",c1));
let reg=true;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if((((!textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&(cppNumericCast(reg,"int")===cppNumericCast(syn,"int")))&&(e.calculate()===cppNumericCast(8,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0110(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="Constant name    1fa";
void 0 /* console diagnostics */;
let c1=keep(new mx.Constant("1fa",1));
let msg=c1.getErrorMessage();
let e=keep(new mx.Expression("1fa",c1));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((textContains(msg,stringResources.INVALID_CONSTANT_NAME)&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0111(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let funExt=extensionFixture(mx,"FunExt");
let ff=keep(new mx.Function("ff",nullableExtension(mx,"FunctionExtension",funExt)));
let expStr="ff(4,5)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr,ff));
let reg=false;
let syn=e.checkSyntax();
if((cppNumericCast(syn,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0112(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let funExt=extensionFixture(mx,"FunExt");
let ff=keep(new mx.Function("ff",nullableExtension(mx,"FunctionExtension",funExt)));
let expStr="ff(4,5,6)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr,ff));
let reg=false;
let syn=e.checkSyntax();
if((cppNumericCast(syn,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0113(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="solve(2*x - 4, x+y, -10, 10)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let reg=false;
let syn=e.checkSyntax();
if((cppNumericCast(syn,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0114(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.unremoveAllBuiltinTokens();
mx.mXparser.removeBuiltinTokens("sin");
let expStr="sin(2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let reg=false;
let syn=e.checkSyntax();
mx.mXparser.unremoveAllBuiltinTokens();
if((cppNumericCast(syn,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0115(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.unmodifyAllBuiltinTokens();
mx.mXparser.modifyBuiltinToken("sin","sinos");
let expStr="sin(2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let reg=false;
let syn=e.checkSyntax();
mx.mXparser.unmodifyAllBuiltinTokens();
if((cppNumericCast(syn,"int")===cppNumericCast(mx.Expression.SYNTAX_ERROR,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0116(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
mx.mXparser.unmodifyAllBuiltinTokens();
mx.mXparser.modifyBuiltinToken("sin","sinos");
let expStr="sinos(2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let reg=true;
let syn=e.checkSyntax();
mx.mXparser.unmodifyAllBuiltinTokens();
if((cppNumericCast(syn,"int")===cppNumericCast(mx.Expression.NO_SYNTAX_ERRORS,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0208(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sin(pi)+cos(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
mx.mXparser.unremoveAllBuiltinTokens();
let syn=e.checkSyntax();
mx.mXparser.removeBuiltinTokens("sin","cos");
(syn=e.checkSyntax());
let reg=false;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.unremoveAllBuiltinTokens();
check(testResult);
},
testSyn0209(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sin(pi)+cos(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
mx.mXparser.unremoveAllBuiltinTokens();
let syn=e.checkSyntax();
mx.mXparser.removeBuiltinTokens("sin","cos");
(syn=e.checkSyntax());
mx.mXparser.unremoveBuiltinTokens("cos");
(syn=e.checkSyntax());
let reg=false;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.unremoveAllBuiltinTokens();
check(testResult);
},
testSyn0210(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sin(pi)+cos(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
mx.mXparser.unremoveAllBuiltinTokens();
let syn=e.checkSyntax();
mx.mXparser.removeBuiltinTokens("sin","cos");
(syn=e.checkSyntax());
mx.mXparser.unremoveBuiltinTokens("cos");
(syn=e.checkSyntax());
mx.mXparser.unremoveAllBuiltinTokens();
(syn=e.checkSyntax());
let reg=true;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0212(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sine(pi)+cosine(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
mx.mXparser.unmodifyAllBuiltinTokens();
let syn=e.checkSyntax();
mx.mXparser.modifyBuiltinToken("sin","sine");
(syn=e.checkSyntax());
let reg=false;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.unmodifyAllBuiltinTokens();
check(testResult);
},
testSyn0213(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sine(pi)+cosine(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
mx.mXparser.unmodifyAllBuiltinTokens();
let syn=e.checkSyntax();
mx.mXparser.modifyBuiltinToken("sin","sine");
(syn=e.checkSyntax());
mx.mXparser.modifyBuiltinToken("cos","cosine","My new cosine token");
(syn=e.checkSyntax());
let reg=true;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.unmodifyAllBuiltinTokens();
check(testResult);
},
testSyn0214(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sine(pi)+cosine(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
mx.mXparser.unmodifyAllBuiltinTokens();
let syn=e.checkSyntax();
mx.mXparser.modifyBuiltinToken("sin","sine");
(syn=e.checkSyntax());
mx.mXparser.modifyBuiltinToken("cos","cosine","My new cosine token");
(syn=e.checkSyntax());
mx.mXparser.unmodifyBuiltinTokens("sin");
(syn=e.checkSyntax());
let reg=false;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.unmodifyAllBuiltinTokens();
check(testResult);
},
testSyn0215(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sine(pi)+cosine(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
mx.mXparser.unmodifyAllBuiltinTokens();
let syn=e.checkSyntax();
mx.mXparser.modifyBuiltinToken("sin","sine");
(syn=e.checkSyntax());
mx.mXparser.modifyBuiltinToken("cos","cosine","My new cosine token");
(syn=e.checkSyntax());
mx.mXparser.unmodifyAllBuiltinTokens();
(syn=e.checkSyntax());
let reg=false;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0217(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sin(pi)";
void 0 /* console diagnostics */;
let sin=keep(new mx.Function("sin(x) = 2*x"));
let pi=keep(new mx.Constant("pi = 1"));
let e=keep(new mx.Expression(expStr,sin,pi));
mx.mXparser.setNotToOverrideBuiltinTokens();
let syn=e.checkSyntax();
mx.mXparser.setToOverrideBuiltinTokens();
(syn=e.checkSyntax());
let reg=true;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
mx.mXparser.setNotToOverrideBuiltinTokens();
check(testResult);
},
testSyn0218(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="sin(pi)";
void 0 /* console diagnostics */;
let sin=keep(new mx.Function("sin(x) = 2*x"));
let pi=keep(new mx.Constant("pi = 1"));
let e=keep(new mx.Expression(expStr,sin,pi));
mx.mXparser.setNotToOverrideBuiltinTokens();
let syn=e.checkSyntax();
mx.mXparser.setToOverrideBuiltinTokens();
(syn=e.checkSyntax());
mx.mXparser.setNotToOverrideBuiltinTokens();
(syn=e.checkSyntax());
let reg=false;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0237(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="{fun-ext-var}";
void 0 /* console diagnostics */;
let fx=extensionFixture(mx,"FunExtVar");
let f=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtensionVariadic",fx)));
let e=keep(new mx.Expression(""));
let syn=f.checkSyntax();
let reg=true;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0238(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let gx=extensionFixture(mx,"FunExtVar");
let f=keep(new mx.Function("f(...) = sum(i, 1, [npar], par(i) )"));
let g=keep(new mx.Function("g",nullableExtension(mx,"FunctionExtensionVariadic",gx)));
let expStr="f(1) + f(1,2) + f(1,2,3) + g(1) + g(1,2) + g(1,2,3)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr,f,g));
let syn=e.checkSyntax();
let reg=true;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0245(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let fun=keep(new mx.Argument("fun"));
let x=keep(new mx.Argument("x"));
let expStr="fun(x)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr,fun,x));
let lex=e.checkLexSyntax();
let syn=e.checkSyntax();
let reg=true;
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&(cppNumericCast(lex,"int")===cppNumericCast(true,"int")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0260(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="2.1a2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
e.addArguments(keep(new mx.Argument("a = 2")));
let syn=e.checkSyntax();
let reg=true;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0261(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="2.1a2.1e2(.3+0.4)[h-].01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
e.addArguments(keep(new mx.Argument("a = 2")));
let syn=e.checkSyntax();
let reg=true;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0262(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="2.1a[h-]2.1e2(.3+0.4)[h-].01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
e.addArguments(keep(new mx.Argument("a = 2")));
let syn=e.checkSyntax();
let reg=true;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0302(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="2pi2√√pi";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkLexSyntax();
let reg=true;
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0317(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ALREADY_CHECKED_NO_ERRORS";
let expStr="2+2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
e.checkSyntax();
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ALREADY_CHECKED_NO_ERRORS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0318(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS";
let expStr="f(2,2)";
void 0 /* console diagnostics */;
let funExt=extensionFixture(mx,"FunExt");
let f=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtension",funExt)));
let e=keep(new mx.Expression(expStr,f));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0319(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS";
let expStr="g(2,2,2) + f(2,2)";
void 0 /* console diagnostics */;
let funExt=extensionFixture(mx,"FunExt");
let f=keep(new mx.Function("f",nullableExtension(mx,"FunctionExtension",funExt)));
let g=keep(new mx.Function("g(x,y,z)=z*f(x,y)",[f]));
let e=keep(new mx.Expression(expStr,g,f));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0320(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="EXPRESSION_STRING_IS_EMPTY";
let expStr="";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.EXPRESSION_STRING_IS_EMPTY))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0321(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE";
let expStr="sin(pi)2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
e.disableImpliedMultiplicationMode();
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0322(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="INVALID_TOKEN";
let expStr="2.5sisn(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.INVALID_TOKEN))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0323(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR";
let expStr="2.5sisn(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
e.disableImpliedMultiplicationMode();
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0324(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DUPLICATED_KEYWORD";
let expStr="sin(pi)";
void 0 /* console diagnostics */;
let pi=keep(new mx.Argument("pi=3"));
let e=keep(new mx.Expression(expStr,pi));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DUPLICATED_KEYWORD))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0325(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE + ARGUMENT_WAS_EXPECTED";
let expStr="2+x(3)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x=3"));
let e=keep(new mx.Expression(expStr,x));
e.disableImpliedMultiplicationMode();
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE))&&textContains(errorMessage,stringResources.ARGUMENT_WAS_EXPECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0326(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT";
let expStr="2*y";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument("x=3"));
let y=keep(new mx.Argument("y = 2*x",[x]));
let e=keep(new mx.Expression(expStr,y));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0327(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS";
let expStr="2*x";
void 0 /* console diagnostics */;
let piMultArgExt=extensionFixture(mx,"PiMultArgExt");
let x=keep(new mx.Argument("x",nullableExtension(mx,"ArgumentExtension",piMultArgExt)));
let e=keep(new mx.Expression(expStr,x));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0328(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER";
let expStr="2*a";
void 0 /* console diagnostics */;
let a=keep(new mx.RecursiveArgument("a(n) = n*a(n-1)"));
a.addBaseCase(1,cppNumericCast(1,"double"));
let e=keep(new mx.Expression(expStr,a));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0329(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT";
let expStr="2+a(2)";
void 0 /* console diagnostics */;
let a=keep(new mx.RecursiveArgument("a(n) = n*a(n-1)"));
a.addBaseCase(1,cppNumericCast(1,"double"));
let e=keep(new mx.Expression(expStr,a));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0330(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT";
let expStr="2*f";
void 0 /* console diagnostics */;
let f=keep(new mx.Function("f(x,y) = 2*x+3*y"));
let e=keep(new mx.Expression(expStr,f));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0331(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION";
let expStr="2*f(1,2,3,4)";
void 0 /* console diagnostics */;
let f=keep(new mx.Function("f(x,y) = 2*x+3*y"));
let e=keep(new mx.Expression(expStr,f));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0332(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION";
let expStr="2*f(1,2)";
void 0 /* console diagnostics */;
let f=keep(new mx.Function("f(...) = [npar]"));
let e=keep(new mx.Expression(expStr,f));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0333(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE + USER_CONSTANT_WAS_EXPECTED";
let expStr="2+a(3)";
void 0 /* console diagnostics */;
let a=keep(new mx.Constant("a = 2"));
let e=keep(new mx.Expression(expStr,a));
e.disableImpliedMultiplicationMode();
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE))&&textContains(errorMessage,stringResources.USER_CONSTANT_WAS_EXPECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0334(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="UNARY_FUNCTION_EXPECTS_1_PARAMETER";
let expStr="sin(1,2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.UNARY_FUNCTION_EXPECTS_1_PARAMETER))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0335(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="BINARY_FUNCTION_EXPECTS_2_PARAMETERS";
let expStr="C(1)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.BINARY_FUNCTION_EXPECTS_2_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0336(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="TERNARY_FUNCTION_EXPECTS_3_PARAMETERS";
let expStr="if(1,2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.TERNARY_FUNCTION_EXPECTS_3_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0337(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED";
let expStr="2*min";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0338(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS";
let expStr="2*der(1)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0339(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS";
let expStr="2*der(1,2,3,4,5,6)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0340(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION + INVALID_TOKEN";
let expStr="der(sin(x), x)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION))&&textContains(errorMessage,stringResources.INVALID_TOKEN))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0341(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
let expStr="sum(pi, 1, 10, pi*2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0342(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
let expStr="2*int(sin(pi), pi, 1, 10)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0343(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
let expStr="2*solve(sin(pi), pi, 1, 10)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0344(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
let expStr="prod(pi, 1, 10, pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0345(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
let expStr="mini(pi, 1, 10, pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0346(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
let expStr="maxi(pi, 1, 10, pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0347(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
let expStr="vari(pi, 1, 10, pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0348(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
let expStr="avg(pi, 1, 10, pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0349(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
let expStr="stdi(pi, 1, 10, pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0350(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
let expStr="sum(2+x, 1, 10, pi*2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION))&&textContains(errorMessage,stringResources.INVALID_TOKEN))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0351(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
let expStr="int(2, 2+x, 1, 10)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION))&&textContains(errorMessage,stringResources.INVALID_TOKEN))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0352(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
let expStr="solve(2, 2+x, 1, 10)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION))&&textContains(errorMessage,stringResources.INVALID_TOKEN))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0353(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
let expStr="prod(2+x, 1, 10, pi*2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION))&&textContains(errorMessage,stringResources.INVALID_TOKEN))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0354(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
let expStr="mini(2+x, 1, 10, pi*2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION))&&textContains(errorMessage,stringResources.INVALID_TOKEN))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0355(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
let expStr="maxi(2+x, 1, 10, pi*2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION))&&textContains(errorMessage,stringResources.INVALID_TOKEN))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0356(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
let expStr="vari(2+x, 1, 10, pi*2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION))&&textContains(errorMessage,stringResources.INVALID_TOKEN))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0357(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
let expStr="avg(2+x, 1, 10, pi*2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION))&&textContains(errorMessage,stringResources.INVALID_TOKEN))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0358(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
let expStr="stdi(2+x, 1, 10, pi*2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION))&&textContains(errorMessage,stringResources.INVALID_TOKEN))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0359(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS";
let expStr="dern(1, 2)*2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0360(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS";
let expStr="dern(1, 2, 3, 4)*2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0361(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS";
let expStr="dern(1, 2, 3, 4, 5, 6)*2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0362(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION";
let expStr="dern(sin(pi), 2, pi)*2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0363(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS";
let expStr="2*int(1,2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0364(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS";
let expStr="2*solve(1,2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0365(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
let expStr="diff(sin(x))";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0366(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
let expStr="difb(sin(x))";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0367(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
let expStr="diff(sin(x),2,3,4)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0368(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
let expStr="difb(sin(x),2,3,4)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0369(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED";
let expStr="diff(sin(2), pi, 2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0370(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED";
let expStr="difb(sin(2), pi, 2)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0371(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="LEXICAL_ERROR_HAS_BEEN_FOUND + ERRORS_HAVE_BEEN_FOUND + WAS_EXPECTING";
let expStr="sin(";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))&&textContains(errorMessage,stringResources.ERRORS_HAVE_BEEN_FOUND))&&textContains(errorMessage,stringResources.WAS_EXPECTING))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0372(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="NO_ERRORS_DETECTED";
let expStr="sin(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0373(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="ERRORS_HAVE_BEEN_FOUND";
let expStr="sin(2,3)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.ERRORS_HAVE_BEEN_FOUND))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0374(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="Function name    1fa";
void 0 /* console diagnostics */;
let f=keep(new mx.Function("1fa","2*x","x"));
let msg=f.getErrorMessage();
let e=keep(new mx.Expression("f(1)",f));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(msg,stringResources.INVALID_FUNCTION_NAME))&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0375(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x()=y+z";
void 0 /* console diagnostics */;
let x=keep(new mx.Constant(expStr));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(msg,stringResources.INVALID_CONSTANT_DEFINITION))&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0376(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x(1,2,3)=y+z";
void 0 /* console diagnostics */;
let x=keep(new mx.Constant(expStr));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(msg,stringResources.INVALID_CONSTANT_DEFINITION))&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0377(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="x(=y+z";
void 0 /* console diagnostics */;
let x=keep(new mx.Constant(expStr));
let msg=x.getErrorMessage();
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(msg,stringResources.INVALID_CONSTANT_DEFINITION))&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0378(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="f=y+z";
void 0 /* console diagnostics */;
let f=keep(new mx.Function(expStr));
let msg=f.getErrorMessage();
let e=keep(new mx.Expression("f",f));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(msg,stringResources.INVALID_FUNCTION_DEFINITION))&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0379(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="f()=y+z";
void 0 /* console diagnostics */;
let f=keep(new mx.Function(expStr));
let msg=f.getErrorMessage();
let e=keep(new mx.Expression("f",f));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(msg,stringResources.INVALID_FUNCTION_DEFINITION))&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0380(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let expStr="f(1,2,3)=y+z";
void 0 /* console diagnostics */;
let f=keep(new mx.Function(expStr));
let msg=f.getErrorMessage();
let e=keep(new mx.Expression("f",f));
let reg=false;
let syn=e.checkSyntax();
let stringResources=keep(mx.StringModel.getStringResources());
if(((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(msg,stringResources.INVALID_FUNCTION_DEFINITION))&&textContains(msg,stringResources.PATTERN_DOES_NOT_MATCH))&&textContains(msg,stringResources.PATTERN_EXAMPLES))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0381(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument forceDependent = true - #1";
let expStr="x";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr,true));
let e=keep(new mx.Expression("x",x));
let reg=true;
let syn=e.checkSyntax();
if((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&(x.getArgumentName()==="x"))&&(x.getArgumentType()===mx.Argument.FREE_ARGUMENT))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0382(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument forceDependent = true - #2";
let expStr="x = 2";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr,true));
let e=keep(new mx.Expression("x",x));
let reg=true;
let syn=e.checkSyntax();
if(((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&(x.getArgumentName()==="x"))&&(x.getArgumentType()===mx.Argument.DEPENDENT_ARGUMENT))&&(x.getArgumentValue()===cppNumericCast(2,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0383(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument forceDependent = false - #1";
let expStr="x = 2";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr,false));
let e=keep(new mx.Expression("x",x));
let reg=true;
let syn=e.checkSyntax();
if(((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&(x.getArgumentName()==="x"))&&(x.getArgumentType()===mx.Argument.FREE_ARGUMENT))&&(x.getArgumentValue()===cppNumericCast(2,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0384(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument forceDependent = false - #2";
let expStr="x = 2*y";
void 0 /* console diagnostics */;
let y=keep(new mx.Argument("y = 1"));
let x=keep(new mx.Argument(expStr,false,y));
let e=keep(new mx.Expression("x",x));
let reg=true;
let syn=e.checkSyntax();
if(((((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&(x.getArgumentName()==="x"))&&(x.getArgumentType()===mx.Argument.DEPENDENT_ARGUMENT))&&(x.getArgumentValue()===cppNumericCast(2,"double")))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0385(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Argument forceDependent = true - #3";
let expStr="x( = 2)";
void 0 /* console diagnostics */;
let x=keep(new mx.Argument(expStr));
let e=keep(new mx.Expression("x",x));
let reg=false;
let syn=x.checkSyntax();
mx.mXparser.consolePrintln(((x.getErrorMessage()+" = ")+String(cppNumericCast(syn,"int"))));
if((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0386(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE";
let expStr="2 pi*sin(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
e.disableImpliedMultiplicationMode();
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0387(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Implied Multiplication with blank spaces";
let expStr="2 pi*sin(pi)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
e.enableImpliedMultiplicationMode();
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0388(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Division symbol, Central and Eastern Europe";
let expStr="4:2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0389(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Division symbol, Central and Eastern Europe";
let expStr="4.0:-2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0390(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Division symbol, Central and Eastern Europe";
let expStr="pi:e";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0391(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Division symbol, Central and Eastern Europe";
let expStr="sin(pi:e)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0392(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Division symbol, Central and Eastern Europe";
let expStr="sin(pi:)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0393(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Division symbol, Central and Eastern Europe";
let expStr="sin(:e)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0394(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NAND";
let expStr="4@~&2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0395(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NAND";
let expStr="4.0@~&-2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0396(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NAND";
let expStr="pi@~&e";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0397(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NAND";
let expStr="sin(pi@~&e)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0398(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NAND";
let expStr="sin(pi@~&)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0399(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NAND";
let expStr="sin(@~&e)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0400(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NOR";
let expStr="4@~|2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0401(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NOR";
let expStr="4.0@~|-2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0402(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NOR";
let expStr="pi@~|e";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0403(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NOR";
let expStr="sin(pi@~|e)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn404(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NOR";
let expStr="sin(pi@~|)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0405(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise NOR";
let expStr="sin(@~|e)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0406(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise XNOR";
let expStr="4@~^2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0407(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise XNOR";
let expStr="4.0@~^-2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0408(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise XNOR";
let expStr="pi@~^e";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0409(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise XNOR";
let expStr="sin(pi@~^e)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn410(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise XNOR";
let expStr="sin(pi@~^)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0411(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Bitwise XNOR";
let expStr="sin(@~^e)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0412(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Integer division";
let expStr="4\\2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0413(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Integer division";
let expStr="4.0\\-2";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0414(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Integer division";
let expStr="pi\\e";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0415(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Integer division";
let expStr="sin(pi\\e)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=true;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.NO_ERRORS_DETECTED))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn416(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Integer division";
let expStr="sin(pi\\)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
testSyn0417(mx,keep,check,alias){
void 0 /* settings executed by the W2 runner */;
let testResult=false;
let testDescr="Integer division";
let expStr="sin(\\e)";
void 0 /* console diagnostics */;
let e=keep(new mx.Expression(expStr));
let syn=e.checkSyntax();
let reg=false;
let stringResources=keep(mx.StringModel.getStringResources());
let errorMessage=e.getErrorMessage();
if(((cppNumericCast(syn,"int")===cppNumericCast(reg,"int"))&&textContains(errorMessage,stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))){(testResult=true);}
void 0 /* console diagnostics */;
check(testResult);
},
};
