/*
 * @(#)run.mjs        6.2.0    2026-11-04
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

// Per-native-ID regression through PUBLIC JS API. No native test trampoline.
import assert from 'node:assert/strict';
import {readFile,writeFile} from 'node:fs/promises';
import {createHash} from 'node:crypto';
import {performance} from 'node:perf_hooks';
import {pathToFileURL} from 'node:url';
import {resolve} from 'node:path';
import fixtures from './cases.json' with {type:'json'};
import {nativeApiCases} from './native-api-cases.mjs';
import {typedCases} from './native-typed-cases.mjs';
import {nativeEdgeCases} from './native-edge-cases.mjs';
import {nativeNewCases} from './native-new-cases.mjs';

const publicLoader=process.env.MXPARSER_MODULE?new URL(process.env.MXPARSER_MODULE)
  :process.env.MXPARSER_TEST_LOADER?pathToFileURL(resolve(process.env.MXPARSER_TEST_LOADER)):new URL('../../dist/index.js',import.meta.url);
const publicCatalog=new URL('./api.json',publicLoader);
const {initMxParser}=await import(publicLoader.href);
const {default:catalog}=await import(publicCatalog.href,{with:{type:'json'}});

const report={scope:'W2 public API, complete native inventory and partial translated scenarios',
  status:'RUNNING',runtime:process.version,discovered:fixtures.discovered,mapped:fixtures.tests.length-Object.keys(fixtures.not_applicable).length,
  executed:0,passed:0,failed:0,unmapped:0,tests:[]};
const selected=new Set(process.argv.filter(value=>value.startsWith('--test-id=')).map(value=>value.slice('--test-id='.length)));
const excluded=new Set(process.argv.filter(value=>value.startsWith('--exclude-test-id=')).map(value=>value.slice('--exclude-test-id='.length)));
for(const id of selected)assert.ok(fixtures.tests.some(item=>item.cpp_id===id&&item.scenario),`Unknown/unmapped selected ID ${id}`);
for(const id of excluded)assert.ok(fixtures.tests.some(item=>item.cpp_id===id&&item.scenario)&&!selected.has(id),`Unknown/conflicting excluded ID ${id}`);
report.selection=selected.size?[...selected]:null;report.exclusion=[...excluded];report.not_selected=0;
const hash=buffer=>createHash('sha256').update(buffer).digest('hex');
const root=new URL('../../../../',import.meta.url);
for(const [path,expected] of Object.entries(fixtures.sources))
  assert.equal(hash(await readFile(new URL(path,root))),expected,`Stale public regression fixture: ${path}`);
report.not_applicable=0;
let nativeOutput=0,nativeOutputTail=[],nativeOutputTruncated=false,numericResults=[],stdoutObserver=null;
function observeOutput(text){nativeOutput++;nativeOutputTail.push(String(text));if(nativeOutputTail.length>64){nativeOutputTail.shift();nativeOutputTruncated=true;}}
const observeStdout=listener=>{
  assert.equal(stdoutObserver,null,'Output observer already active');stdoutObserver=listener;
  return ()=>{assert.equal(stdoutObserver,listener);stdoutObserver=null;};
};

let nativeModule;
const mx=await initMxParser({print:text=>{observeOutput(text);stdoutObserver?.(text);},printErr:observeOutput,onRuntimeInitialized(){nativeModule=this;}});
assert.equal(typeof nativeModule?.ctor_Expression,'function','SDK runtime callback must capture the actual native module');
// Observe export identities without altering SDK prototypes or retaining any
// object arguments. All scenario operations still use the public JS facade.
let bindingOperations=new Map();
for(const item of catalog.emitted){
  const exports=item.kind==='field'?[item.export+'_get',...(!item.readonly?[item.export+'_set']:[])]:[item.export];
  for(const name of exports){
    const operation=nativeModule[name];assert.equal(typeof operation,'function');
    nativeModule[name]=function(...args){bindingOperations.set(name,(bindingOperations.get(name)??0)+1);const result=operation.apply(this,args);
      if(typeof result==='number'&&['calculate','getArgumentValue','getConstantValue'].includes(item.name)){
        numericResults.push({export:name,result:printable(result)});if(numericResults.length>32)numericResults.shift();
      }
      return result;};
  }
}
report.binding_catalog_sha256=hash(await readFile(publicCatalog));
report.public_loader=publicLoader.href;
function settings(kind){
  const m=mx.mXparser;m.setDefaultOptions();
  if(kind==='Expr'){
    m.setEpsilonComparison();m.setDefaultEpsilon();m.enableUlpRounding();m.enableCanonicalRounding();
    m.enableImpliedMultiplicationMode();m.enableUnicodeBuiltinKeyWordsMode();m.setRadiansMode();m.enableSpecialCases();
  }
  if(kind==='Api')m.disableSelectBestMatchingLanguage();
}
function operand(description,variables,temporaries=[]){
  if('reference' in description){assert.ok(variables.has(description.reference));return variables.get(description.reference);}
  if('number' in description)return Number(description.number);
  if('bits' in description){
    const view=new DataView(new ArrayBuffer(8));view.setBigUint64(0,BigInt('0x'+description.bits),false);
    return view.getFloat64(0,false);
  }
  if('string' in description)return description.string;
  if('boolean' in description)return description.boolean;
  if('null' in description)return null;
  if('construct' in description){
    const specification=description.construct;
    const object=new mx[specification.type](...specification.arguments.map(a=>operand(a,variables,temporaries)));
    temporaries.push(object);return object;
  }
  throw new Error('Unknown fixture operand');
}
function validate(value,predicate){
  if(predicate.kind==='syntax')return value===predicate.expected;
  if(predicate.kind==='nan')return Number.isNaN(value);
  const expected=operand(predicate.expected,new Map());
  if(predicate.kind==='equal')return value===expected; // C++ == also equates signed zero.
  if(predicate.kind==='absolute'){
    const difference=predicate.subtraction==='reg - value'?expected-value:value-expected;
    const absolute=Math.abs(difference),limit=operand(predicate.tolerance,new Map());
    if(predicate.comparison==='<')return absolute<limit;
    if(predicate.comparison==='<=')return absolute<=limit;
    if(predicate.comparison==='==')return absolute===limit;
  }
  throw new Error('Unknown fixture predicate');
}
const printable=value=>typeof value==='number'?(Object.is(value,-0)?'-0':String(value)):value;
try{
  for(const item of fixtures.tests){
    const entry={cpp_id:item.cpp_id,source:item.source,line:item.line,body_sha256:item.body_sha256,
      native_assertions:item.native_assertions};
    if(item.cpp_id==='testApi0376')entry.execution_adaptation={reason:'JS numbers select the native double overload; its explicit range exceptions replace C++ int-pack NaN checks. No production algorithm is emulated.'};
    if(fixtures.not_applicable[item.cpp_id]){report.not_applicable++;report.tests.push({...entry,status:'NOT_APPLICABLE',reason:fixtures.not_applicable[item.cpp_id]});continue;}
    assert.ok(item.scenario, 'Unclassified public regression case '+item.cpp_id);
    if(excluded.has(item.cpp_id)||(selected.size&&!selected.has(item.cpp_id))){report.not_selected++;report.tests.push({...entry,status:'NOT_SELECTED'});continue;}
    const nativeOutputStart=nativeOutput,start=performance.now(),variables=new Map(),handles=[],addedDefinitions=[];
    report.executed++;
    bindingOperations=new Map();nativeOutputTail=[];nativeOutputTruncated=false;numericResults=[];
    try{
      settings(item.scenario.settings);
      if(item.scenario.style==='assertions'){
        const test=nativeNewCases[item.scenario.test]??nativeEdgeCases[item.scenario.test];assert.equal(typeof test,'function');
        let assertions=0;const failures=[];
        const check=value=>{assertions++;if(value!==true)failures.push({assertion:assertions,actual:String(value)});};
        const require=value=>{assertions++;assert.equal(value,true,item.cpp_id+': original fatal assertion failed');};
        test(mx,object=>{handles.push(object);return object;},check,require,{
          observeStdout,recordAdaptation:result=>{entry.execution_adaptation={
            trigger:result.trigger,parallelExecution:result.parallelExecution,
            original_predicate_terms:result.predicates,
            observed:Object.fromEntries(Object.entries(result.observed).map(([name,value])=>[name,printable(value)]))};}
        });
        assert.equal(assertions,item.scenario.expected_assertions);
        assert.deepEqual(failures,[],item.cpp_id+': original native assertions failed');
        entry.actual=true;entry.executed_assertions=assertions;
        entry.predicate={kind:'complete-native-multiple-assertions',implementation:item.scenario.implementation};
      }else if(item.scenario.style==='typed'){
        const test=typedCases[item.scenario.test];assert.equal(typeof test,'function');
        let assertions=0;const failures=[];
        const keep=object=>{if(Array.isArray(object))object.forEach(keep);else if(object!==null&&typeof object?.delete==='function')handles.push(object);return object;};
        const check=value=>{assertions++;if(value!==true)failures.push(String(value));};
        const alias=(a,b)=>a===null||b===null?a===b:a.isAliasOf(b);
        test(mx,keep,check,alias);assert.equal(assertions,item.native_assertions);
        assert.deepEqual(failures,[],item.cpp_id+': original native assertion failed');
        entry.actual=true;entry.executed_assertions=assertions;
        entry.predicate={kind:'complete-typed-native-source',implementation:item.scenario.implementation};
      }else if(item.scenario.style==='manual'){
        const test=nativeApiCases[item.scenario.test];assert.equal(typeof test,'function');
        entry.actual=test(mx,object=>{handles.push(object);return object;});
        entry.predicate={kind:'complete-native-source-conjunction',implementation:item.scenario.implementation};
        assert.equal(entry.actual,true,`${item.cpp_id}: original conjunction is false`);
      }else{
       for(const operation of item.scenario.operations){
        if(operation.operation==='literal'){variables.set(operation.target,operation.value);continue;}
        const temporaries=[];
        try{
          const args=operation.arguments.map(a=>operand(a,variables,temporaries));
          if(operation.operation==='construct'){
            const object=new mx[operation.type](...args);handles.push(object);variables.set(operation.target,object);
          }else if(operation.operation==='call'){
            const object=operation.target==='mXparser'?mx.mXparser:variables.get(operation.target);
            object[operation.method](...args);
            if(['addDefinitions','addFunctions','addArguments','addConstants'].includes(operation.method))
              addedDefinitions.push({object,args});
          }else throw new Error('Unknown fixture operation');
        }finally{
          // Native inline factory temporaries expire at the end of the C++
          // full expression. Release JS handles here; native owners must retain
          // the definitions needed by all subsequent public API operations.
          for(const object of temporaries.reverse())object.delete();
        }
      }
      const expression=variables.get(item.scenario.receiver);
      let value=item.scenario.predicate.kind==='syntax'?expression.checkSyntax():expression.calculate();
      if(item.scenario.transform){
        const {owner,method,arguments:args}=item.scenario.transform;
        value=mx[owner][method](value,...args.map(a=>operand(a,variables)));
      }
      entry.actual=printable(value);entry.predicate=item.scenario.predicate;
      assert.ok(validate(value,item.scenario.predicate),`${item.cpp_id}: ${String(value)} does not satisfy original native predicate`);
      }
      entry.status='PASS';report.passed++;
    }catch(error){entry.status='FAIL';entry.error=error.stack;entry.native_output_tail=nativeOutputTail;entry.native_output_truncated=nativeOutputTruncated;entry.numeric_results=numericResults;report.failed++;}
    finally{
      // Only explicit definition additions in the source scenario are undone.
      // This test teardown releases user-created owning cycles after asserting;
      // it is not a product graph manager or a requirement for ordinary graphs.
      try{
        for(const {object,args} of addedDefinitions.reverse())object.removeDefinitions(...args);
        for(const handle of handles.reverse())if(!handle.isDeleted())handle.delete();
      }catch(error){
        if(entry.status==='PASS'){report.passed--;report.failed++;}
        entry.status='FAIL';entry.cleanupError=error.stack;
      }
      entry.native_console_messages=nativeOutput-nativeOutputStart;
      entry.binding_operations=Object.fromEntries(bindingOperations);
      entry.elapsed_ms=performance.now()-start;report.tests.push(entry);
    }
    if(entry.status==='FAIL')console.error('W2_FAIL',item.cpp_id,entry.error||entry.cleanupError);
    if(report.executed%100===0)console.log('W2_PROGRESS',report.executed,'passed',report.passed,'failed',report.failed);
  }
  report.status=report.failed?'FAILED':report.unmapped||report.not_selected?'PARTIAL':'PASS';
  report.mapped_status=report.failed?'FAILED':'PASS';
}finally{
  report.native_console_messages=nativeOutput;
  if(process.env.MXPARSER_TEST_REPORT)await writeFile(process.env.MXPARSER_TEST_REPORT,JSON.stringify(report,null,2));
}
console.log('W2_RESULT',JSON.stringify({status:report.status,discovered:report.discovered,mapped:report.mapped,
  executed:report.executed,passed:report.passed,failed:report.failed,unmapped:report.unmapped,not_selected:report.not_selected,not_applicable:report.not_applicable}));
process.exitCode=report.failed?1:(report.unmapped||report.not_selected)&&!process.argv.includes('--partial')?2:0;
