/*
 * @(#)native-renewal16-cases.mjs        6.2.0    2026-11-04
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
// Faithful public API counterparts of the sixteen appended C++ regressions.
// Weak-pointer expiration predicates are separate native/ASan evidence, so the
// three affected cases below are explicitly partial in the W2 manifest.
const attempt=(check,fn)=>{let threw=false;try{fn();}catch{threw=true;}check(!threw);},throws=(check,fn)=>{let threw=false;try{fn();}catch{threw=true;}check(threw);};
export const nativeRenewalCases={
 testApi0377(mx,keep,check,require){
  const U=mx.StringUtils,b=keep(new mx.StringBuilder());b.append('ABβ🧮');check(b.toString()==='ABβ🧮');b.clear();b.append('');check(b.length()===0);throws(check,()=>new mx.StringBuilder(null));throws(check,()=>b.append(mx.wcstr(null)));throws(check,()=>b.append(mx.cstr(null)));
  const wide=keep(new mx.VariadicProcessorString());wide.processArgs(mx.processorInput('StringPtr',null),mx.processorInput('String','x'));const wl=keep(wide.paramsString);require(wl!==null);require(wl.size()===2);check(wl.get(0)===null);check(wl.get(1)==='x');check(wide.paramsStringNumberNull===1);check(wide.paramsStringNumberNotNull===1);
  const narrow=keep(new mx.VariadicProcessorString());narrow.processArgs(mx.processorInput('StringPtr',null),mx.processorInput('std::string','y'));const nl=keep(narrow.paramsString);require(nl!==null);check(nl.get(1)==='y');check(narrow.paramsStringNumberNotNull===1);
  const nullWide=keep(new mx.VariadicProcessorString());nullWide.processArgs(mx.processorInput('String*',null));check(nullWide.paramsString===null);check(nullWide.paramsStringNumberNull===1);const nullNarrow=keep(new mx.VariadicProcessorString());nullNarrow.processArgs(mx.processorInput('std::string*',null));check(nullNarrow.paramsString===null);check(nullNarrow.paramsStringNumberNull===1);
  throws(check,()=>U.cleanForHtml(null));throws(check,()=>U.cleanForMarkdown(null));throws(check,()=>U.cleanForJson(null));check(U.cleanForHtml('<&>')==='&lt;&amp;&gt;');
  const none=mx.nullList('StringPtr'),empty=keep(mx.new_List('StringPtr')),one=keep(mx.new_List('StringPtr'));one.add('x');throws(check,()=>U.stringBuilderPartsAppend(b,none));throws(check,()=>U.stringBuilderLinesAppend(b,none));attempt(check,()=>U.stringBuilderPartsAppend(null,empty));attempt(check,()=>U.stringBuilderLinesAppend(null,empty));throws(check,()=>U.stringBuilderPartsAppend(null,one));throws(check,()=>U.stringBuilderLinesAppend(null,one));
  attempt(check,()=>U.stringBuilderPartsAppendDelimited('','','',false,false,false,null,empty));throws(check,()=>U.stringBuilderPartsAppendDelimited('','','',false,false,false,null,one));attempt(check,()=>U.stringBuilderPartsAppendDelimitedRow('','','','','',false,false,false,null,empty));throws(check,()=>U.stringBuilderPartsAppendDelimitedRow('','','','[','',false,false,false,null,empty));throws(check,()=>U.stringBuilderPartsAppendDelimitedRow('','','','',']',false,false,false,null,empty));
  b.append('seed');throws(check,()=>U.stringBuilderPartsAppendDelimitedRow('','','','[',']',false,false,false,b,none));check(b.toString()==='seed[');const mixed=keep(mx.new_List('StringPtr'));mixed.add('<&>');mixed.add(null);b.clear();throws(check,()=>U.stringBuilderPartsAppendDelimited('<p>','</p>','|',true,false,false,b,mixed));check(b.toString()==='<p>&lt;&amp;&gt;</p>|<p>');throws(check,()=>U.stringBuilderPartsAppendMarkdownTableHead(false,b,mx.processorInput('StringPtr',null)));
 },
 testApi0376(mx,keep,check){
  // JS numbers use the native double overload; C++ int intent selectors are not managed numeric promotion.
  const convert=mx.mXparser.convOthBase2Decimal,int=value=>value;
  for(const base of[2,3,8,10,16,36]){
   const expected=base*base+1;check(convert(int(base),1,0,1)===expected);check(convert(base,1,0,1)===expected);const ints=keep(mx.new_List('int')),doubles=keep(mx.new_List('double'));for(const digit of[1,0,1]){ints.add(digit);doubles.add(digit);}
   check(convert(int(base),ints)===expected);check(convert(base,doubles)===expected);check(convert(int(base),doubles)===expected);check(convert(base,ints)===expected);
  }
  check(convert(int(16),15,10)===250);check(convert(16,15,10)===250);check(convert(int(10),0,1,2,3)===123);check(convert(10,0,1,2,3)===123);check(convert(int(1),1,1,1)===3);check(convert(1,1,1,1)===3);check(convert(int(1))===0);check(convert(1)===0);check(convert(2.9,1.9,0.2,1.8)===5);check(Number.isNaN(convert(int(2))));check(Number.isNaN(convert(2)));check(Number.isNaN(convert(int(2),null)));check(Number.isNaN(convert(2,null)));
  check(Number.isNaN(convert(int(2),1,2)));check(Number.isNaN(convert(2,1,2)));check(Number.isNaN(convert(int(1),1,0)));check(Number.isNaN(convert(1,1,0)));check(Number.isNaN(convert(int(0),1)));check(Number.isNaN(convert(0,1)));check(Number.isNaN(convert(2,NaN)));// The public JS number path selects the native double overload. Its checked
  // conversion rejects values outside int32, while native int-pack returns NaN.
  // This is an explicit binding-level adaptation of the C++ overload-specific assertions.
  check(Number.isNaN(convert(2,NaN)));
  for(const digit of[Infinity,-Infinity,2147483648,-2147483649])throws(check,()=>convert(2,digit));check(convert(int(2),1.9,0.2,1.8)===5);
 },
 testApi0378(mx,keep,check){
  const resources=keep(mx.StringModel.getStringResources()),keywords=keep(mx.new_List('KeyWordPtr'));keywords.add(keep(new mx.KeyWord('jsonNullLabel','description',1,'jsonNullLabel','1.0',mx.Function1Arg.TYPE_ID)));const empty='',noMatch='key=___jsonNullLabelNoMatch_378___',caption='custom caption',help=(addCaption,query,title)=>mx.ExpressionUtils.getHelpAsJson(keywords,addCaption,query,title),original=help(false,empty,empty);check(textContains(original,'jsonNullLabel'));const filtered=help(false,noMatch,empty);
  for(const field of['KEYWORD','TYPE','SYNTAX','SINCE','DESCRIPTION']){const saved=resources[field];try{resources[field]=null;throws(check,()=>help(false,empty,empty));check(help(false,noMatch,empty)===filtered);}finally{resources[field]=saved;}}
  check(help(false,empty,empty)===original);const captionLabel=resources.CAPTION;try{resources.CAPTION=null;throws(check,()=>help(true,empty,caption));check(help(false,empty,caption)===original);}finally{resources.CAPTION=captionLabel;}
  const all=resources.ALL_HELP_CONTENT;try{resources.ALL_HELP_CONTENT=null;throws(check,()=>help(true,empty,empty));attempt(check,()=>help(true,empty,caption));check(help(false,empty,empty)===original);}finally{resources.ALL_HELP_CONTENT=all;}check(help(false,empty,empty)===original);
 },
 testApi0380(mx,keep,check){
  const e=keep(new mx.Expression('2+3'));
  throws(check,()=>e.addDefinitions(mx.nullList('PrimitiveElementPtr')));check(e.calculate()===5);attempt(check,()=>e.addDefinitions(null));check(e.calculate()===5);
  const elements=keep(mx.new_List('PrimitiveElementPtr')),dependency=keep(new mx.Argument('definitionListDependency',2));elements.add(dependency);elements.add(null);const dependent=keep(new mx.Expression('definitionListDependency+1',elements));check(dependent.calculate()===3);dependency.setArgumentValue(7);check(dependent.calculate()===8);
  const saved=mx.VariadicProcessor.paramsPrimitiveElementEmpty;try{mx.VariadicProcessor.paramsPrimitiveElementEmpty=null;throws(check,()=>new mx.RecursiveArgument('definitionListRecursive(n)=n+1'));throws(check,()=>new mx.RecursiveArgument('definitionListRecursive(n)=n+1'));}finally{mx.VariadicProcessor.paramsPrimitiveElementEmpty=saved;saved?.delete();}check(e.calculate()===5);
 },
 testNativeMathNextUp(mx,keep,check){
  const vectors=[['0000000000000000','0000000000000001'],['8000000000000000','0000000000000001'],['0000000000000001','0000000000000002'],['8000000000000001','8000000000000000'],['000fffffffffffff','0010000000000000'],['800fffffffffffff','800ffffffffffffe'],['0010000000000000','0010000000000001'],['8010000000000000','800fffffffffffff'],['3ff0000000000000','3ff0000000000001'],['bff0000000000000','bfefffffffffffff'],['3fe0000000000000','3fe0000000000001'],['bfe0000000000000','bfdfffffffffffff'],['3fffffffffffffff','4000000000000000'],['bfffffffffffffff','bffffffffffffffe'],['4000000000000000','4000000000000001'],['c000000000000000','bfffffffffffffff'],['7fefffffffffffff','7ff0000000000000'],['ffefffffffffffff','ffeffffffffffffe'],['7ff0000000000000','7ff0000000000000'],['fff0000000000000','ffefffffffffffff'],['7ff8000000000000',null],['fff8000000000000',null],['7ff8000000000123',null],['fff8000000000123',null]];
  const bytes=new DataView(new ArrayBuffer(8));for(const[input,expected]of vectors){bytes.setBigUint64(0,BigInt('0x'+input));const value=Math.nextUp(bytes.getFloat64(0));if(expected===null)check(Number.isNaN(value));else{bytes.setFloat64(0,value);check(bytes.getBigUint64(0)===BigInt('0x'+expected));}}
 },
 testApi0375(mx,keep,check,require,context){
  for(const variadic of[false,true])for(const suppliedSelf of[false,true])for(let overload=0;overload<3;overload++){
   const f=keep(new mx.Function('old(t)=t+1')),afterRelease=context?.watchNative?.('Function',f);
   for(const name of['f','g']){
    const definition=variadic?`${name}(...)=if(par(1)>0,par(1)*${name}(par(1)-1),1)`:`${name}(t)=if(t>0,t*${name}(t-1),1)`;
    if(overload===2){const elements=mx.new_List('PrimitiveElementPtr');try{if(suppliedSelf)elements.add(f);f.setFunction(definition,elements);}finally{elements.delete();}}
    else if(suppliedSelf)f.setFunction(definition,f);else f.setFunction(definition);
    const self=f.getFunction(name);try{check(self.isAliasOf(f));}finally{self.delete();}require(f.checkSyntax());check(f.calculate(5)===120);check(f.calculate(3)===6);
   }
   f.setFunction('h(t)=t+2');const self=f.getFunction('h');try{check(self.isAliasOf(f));}finally{self.delete();}check(f.calculate(5)===7);f.delete();afterRelease?.();
   // Public W2 has no weak API; the separate ASan companion observes native
   // expiration after the same explicit temporary/list/function releases.
  }
 },
 testApi0379(mx,keep,check){
  // std::wstring and StringPtr normalize to the same JS text transport.
  const wide=keep(new mx.RecursiveArgument('wideRecursive(n)=n+1')),pointer=keep(new mx.RecursiveArgument('wideRecursive(n)=n+1'));
  check(wide.checkSyntax());check(pointer.checkSyntax());check(wide.getArgumentName()===pointer.getArgumentName());check(wide.getArgumentValue(4)===5);check(wide.getArgumentValue(4)===pointer.getArgumentValue(4));
  const a=keep(new mx.Argument('wideDependency',2)),wd=keep(new mx.RecursiveArgument('wideDependent(n)=n+wideDependency',a)),pd=keep(new mx.RecursiveArgument('wideDependent(n)=n+wideDependency',a));
  check(wd.checkSyntax());check(pd.checkSyntax());check(wd.getArgumentValue(4)===6);check(wd.getArgumentValue(4)===pd.getArgumentValue(4));
 },
 testApi0381(mx,keep,check,require,context){
  const s=keep(new mx.CharStream('ab',1,1)),afterRelease=context?.watchNative?.('CharStream',s);check(s.BeginToken()==='a');attempt(check,()=>s.DeleteBuffers());attempt(check,()=>s.DeleteBuffers());attempt(check,()=>s.ReInit('xy',1,1));check(s.BeginToken()==='x');check(s.readChar()==='y');check(s.endOfInput());attempt(check,()=>s.DeleteBuffers());attempt(check,()=>s.delete());afterRelease?.();
 },
 testApi0382(mx,keep,check,require,context){
  const s=keep(new mx.CharStream('1+2',1,1)),m=keep(new mx.SyntaxCheckerTokenManager(s)),p=keep(new mx.SyntaxChecker(m)),afterRelease=context?.watchNative?.('SyntaxChecker',p);check(p.checkSyntax());attempt(check,()=>p.clear());attempt(check,()=>p.clear());attempt(check,()=>s.ReInit('2+3',1,1));attempt(check,()=>m.ReInit(s));attempt(check,()=>p.ReInit(m));check(p.checkSyntax());attempt(check,()=>p.clear());attempt(check,()=>p.delete());afterRelease?.();
 },
 testApi0383(mx,keep,check){
  for(let code=0x80;code<0xff;code++){
   const text=String.fromCodePoint(code),escaped=mx.syntaxchecker.addUnicodeEscapes(text);attempt(check,()=>mx.UTF8toUTF16(escaped));check(escaped.length===6);for(const byte of escaped)check(byte<0x80);
  }
  check(String.fromCharCode(...mx.syntaxchecker.addUnicodeEscapes('¬'))==='\\u00ac');const stream=keep(new mx.CharStream('¬',1,1)),manager=keep(new mx.SyntaxCheckerTokenManager(stream)),parser=keep(new mx.SyntaxChecker(manager));check(parser.checkSyntax()===false);const errors=keep(parser.errorMessages);check(errors.size()>0);
 },
 testExpr1441(mx,keep,check){
  const e=keep(new mx.Expression('sin(0)+cos(0)'));e.calculate();const initial=e.calculate();mx.mXparser.removeBuiltinTokens('sin');const first=e.calculate(),second=e.calculate();mx.mXparser.unremoveBuiltinTokens('sin');const restored=e.calculate(),value=e.calculate();check(initial===1&&Number.isNaN(first)&&Number.isNaN(second)&&restored===1&&value===1);mx.mXparser.unremoveAllBuiltinTokens();mx.mXparser.unmodifyAllBuiltinTokens();
 },
 testExpr1442(mx,keep,check){
  const m=mx.mXparser,e=keep(new mx.Expression('sin(0)+cos(0)'));e.calculate();const initial=e.calculate();m.modifyBuiltinToken('sin','sine');const sin=e.calculate();m.unmodifyBuiltinTokens('sine');const restored=e.calculate();m.modifyBuiltinToken('cos','cosine');const cos=e.calculate();m.unmodifyAllBuiltinTokens();const value=e.calculate();check(initial===1&&Number.isNaN(sin)&&restored===1&&Number.isNaN(cos)&&value===1);m.unremoveAllBuiltinTokens();m.unmodifyAllBuiltinTokens();
 },
 testExpr1443(mx,keep,check){
  const m=mx.mXparser,e=keep(new mx.Expression('sin(0)+cos(0)'));e.calculate();const initial=e.calculate();m.removeBuiltinTokens(null,'','sin','cos','sin');const removed=e.calculate();m.unremoveBuiltinTokens('sin');const partial=e.calculate();m.unremoveAllBuiltinTokens();const value=e.calculate();check(initial===1&&Number.isNaN(removed)&&Number.isNaN(partial)&&value===1);m.unremoveAllBuiltinTokens();m.unmodifyAllBuiltinTokens();
 },
 testExpr1444(mx,keep,check){
  const m=mx.mXparser,a=keep(new mx.Argument('a=sin(0)+1',true)),f=keep(new mx.Function('f(t)=a+t'));f.addDefinitions(a);check(a.getArgumentType()===mx.Argument.DEPENDENT_ARGUMENT);check(f.getParametersNumber()===1);const e=keep(new mx.Expression('f(2)',f));e.calculate();const initial=e.calculate();m.removeBuiltinTokens('sin');const removed=e.calculate();m.unremoveAllBuiltinTokens();const value=e.calculate();check(initial===3&&Number.isNaN(removed)&&value===3);m.unremoveAllBuiltinTokens();m.unmodifyAllBuiltinTokens();
 },
 testExpr1445(mx,keep,check){
  const m=mx.mXparser,x=keep(new mx.Argument('x',0)),e=keep(new mx.Expression('sin(0)+x',x));e.calculate();let result=true;for(let i=0;i<16;i++){x.setArgumentValue(i);if(e.calculate()!==i)result=false;}m.removeBuiltinTokens('sin');if(!Number.isNaN(e.calculate()))result=false;m.unremoveBuiltinTokens('sin');for(let i=16;i<32;i++){x.setArgumentValue(i);if(e.calculate()!==i)result=false;}const value=e.calculate();check(result&&value===31);m.unremoveAllBuiltinTokens();m.unmodifyAllBuiltinTokens();
 },
 testExpr1446(mx,keep,check){
  const source=keep(new mx.Expression('2+3'));source.checkSyntax();const tokens=source.getCopyOfInitialTokens();for(const token of tokens)keep(token);const args=keep(mx.new_List('ArgumentPtr')),functions=keep(mx.new_List('FunctionPtr')),constants=keep(mx.new_List('ConstantPtr'));
  const e=keep(new mx.Expression('Internal prevalidated tokens must not be tokenized again',tokens,args,functions,constants,false,false,null)),value=e.calculate();check(value===5&&e.calculate()===5);
 }
};
