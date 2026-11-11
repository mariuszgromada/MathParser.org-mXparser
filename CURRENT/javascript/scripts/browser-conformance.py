#/*
# @(#)browser-conformance.py        6.2.0    2026-11-04
#
# MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
# The most up-to-date license is available at the below link:
# - https://mathparser.org/mxparser-license
#
# AUTHOR: Copyright 2010 - 2026 Mariusz Gromada - All rights reserved
# PUBLISHER: INFIMA - https://payhip.com/infima
#
# SOFTWARE means source code and/or binary form and/or documentation.
# PRODUCT: MathParser.org-mXparser SOFTWARE
# LICENSE: DUAL LICENSE AGREEMENT
#
# BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
# BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
#
# The AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
# model designed to meet the needs of both non-commercial use and commercial
# use.
#
# NON-COMMERCIAL USE means any use or activity where a fee is not charged
# and the purpose is not the sale of a good or service, and the use or
# activity is not intended to produce a profit. Examples of NON-COMMERCIAL USE
# include:
#
# 1. Non-commercial open-source software.
# 2. Non-commercial mobile applications.
# 3. Non-commercial desktop software.
# 4. Non-commercial web applications/solutions.
# 5. Non-commercial use in research, scholarly and educational context.
#
# The above list is non-exhaustive and illustrative only.
#
# COMMERCIAL USE means any use or activity where a fee is charged or the
# purpose is the sale of a good or service, or the use or activity is
# intended to produce a profit. COMMERCIAL USE examples:
#
# 1. OEMs (Original Equipment Manufacturers).
# 2. ISVs (Independent Software Vendors).
# 3. VARs (Value Added Resellers).
# 4. Other distributors that combine and distribute commercially licensed
#    software.
#
# The above list is non-exhaustive and illustrative only.
#
# IN CASE YOU WANT TO USE THE PRODUCT COMMERCIALLY, YOU MUST PURCHASE THE
# APPROPRIATE LICENSE FROM "INFIMA" ONLINE STORE, STORE ADDRESS:
#
# 1. https://mathparser.org/order-commercial-license
# 2. https://payhip.com/infima
#
# NON-COMMERCIAL LICENSE
#
# Redistribution and use of the PRODUCT in source and/or binary forms,
# with or without modification, are permitted provided that the following
# conditions are met:
#
# 1. Redistributions of source code must retain the unmodified content of
#    the entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
#    the definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE,
#    the NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
#    and the following DISCLAIMER.
# 2. Redistributions in binary form must reproduce the entire content of
#    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
#    and/or other materials provided with the distribution, including the
#    definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE, the
#    NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
#    and the following DISCLAIMER.
# 3. Any form of redistribution requires confirmation and signature of
#    the NON-COMMERCIAL USE by successfully calling the method:
#       License.iConfirmNonCommercialUse(...)
#    The method call is used only internally for logging purposes, and
#    there is no connection with other external services, and no data is
#    sent or collected. The lack of a method call (or its successful call)
#    does not affect the operation of the PRODUCT in any way. Please see
#    the API documentation.
#
# COMMERCIAL LICENSE
#
#  1. Before purchasing a commercial license, the AUTHOR & PUBLISHER allow
#     you to download, install, and use up to three copies of the PRODUCT to
#     perform integration tests, confirm the quality of the PRODUCT, and
#     its suitability. The testing period should be limited to fourteen
#     days. Tests should be performed under the test environments conditions
#     and not for profit generation.
#  2. Provided that you purchased a license from "INFIMA" online store
#     (store address: https://mathparser.org/order-commercial-license or
#     https://payhip.com/infima), and you comply with all terms and
#     conditions below, and you have acknowledged and understood the
#     following DISCLAIMER, the AUTHOR & PUBLISHER grant you a nonexclusive
#     license with the following rights:
#  3. The license is granted only to you, the person or entity that made
#     the purchase, identified and confirmed by the data provided during
#     the purchase.
#  4. If you purchased a license in the "ONE-TIME PURCHASE" model, the
#     license is granted only for the PRODUCT version specified in the
#     purchase. The upgrade policy gives you additional rights, described
#     in the dedicated section below.
#  5. If you purchased a license in the "SUBSCRIPTION" model, you may
#     install and use any version of the PRODUCT during the subscription
#     validity period.
#  6. If you purchased a "SINGLE LICENSE" you may install and use the
#     PRODUCT on/from one workstation that is located/accessible at/from
#     any of your premises.
#  7. Additional copies of the PRODUCT may be installed and used on/from
#     more than one workstation, limited to the number of workstations
#     purchased per order.
#  8. If you purchased a "SITE LICENSE", the PRODUCT may be installed
#     and used on/from all workstations located/accessible at/from any
#     of your premises.
#  9. You may incorporate the unmodified PRODUCT into your own products
#     and software.
# 10. If you purchased a license with the "SOURCE CODE" option, you may
#     modify the PRODUCT's source code and incorporate the modified source
#     code into your own products and/or software.
# 11. Provided that the license validity period has not expired, you may
#     distribute your product and/or software with the incorporated
#     PRODUCT royalty-free.
# 12. You may make copies of the PRODUCT for backup and archival purposes.
# 13. Any form of redistribution requires confirmation and signature of
#     the COMMERCIAL USE by successfully calling the method:
#        License.iConfirmCommercialUse(...)
#     The method call is used only internally for logging purposes, and
#     there is no connection with other external services, and no data is
#     sent or collected. The lack of a method call (or its successful call)
#     does not affect the operation of the PRODUCT in any way. Please see
#     the API documentation.
# 14. The AUTHOR & PUBLISHER reserve all rights not expressly granted to
#     you in this agreement.
#
# ADDITIONAL CLARIFICATION ON WORKSTATION
#
# A workstation is a device, a remote device, or a virtual device, used by
# you, your employees, or other entities to whom you have commissioned
# tasks. For example, the number of workstations may refer to the number
# of software developers, engineers, architects, scientists, and other
# professionals who use the PRODUCT on your behalf. The number of
# workstations is not the number of copies of your end-product that you
# distribute to your end-users.
#
# By purchasing the COMMERCIAL LICENSE, you only pay for the number of
# workstations, while the number of copies/users of your final product
# (delivered to your end-users) is not limited.
#
# Below are some examples to help you select the right license size:
#
# Example 1: Single Workstation License
# Only one developer works on the development of your application. You do
# not use separate environments for testing, meaning you design, create,
# test, and compile your final application on one environment. In this
# case, you need a license for a single workstation.
#
# Example 2: Up to 5 Workstations License
# Two developers are working on the development of your application.
# Additionally, one tester conducts tests in a separate environment.
# You use three workstations in total, so you need a license for up to
# five workstations.
#
# Example 3: Up to 20 Workstations License
# Ten developers are working on the development of your application.
# Additionally, five testers conduct tests in separate environments.
# You use fifteen workstations in total, so you need a license for
# up to twenty workstations.
#
# Example 4: Site License
# Several dozen developers and testers work on the development of your
# application using multiple environments. You have a large,
# multi-disciplinary team involved in creating your solution. As your team
# is growing and you want to avoid licensing limitations, the best choice
# would be a site license.
#
# UPGRADE POLICY
#
# The PRODUCT is versioned according to the following convention:
#
#    [MAJOR].[MINOR].[PATCH]
#
# 1. COMMERCIAL LICENSE holders can install and use the updated version
#    for bug fixes free of charge, i.e. if you have purchased a license
#    for the [MAJOR].[MINOR] version (e.g., 5.0), you can freely install
#    all releases specified in the [PATCH] version (e.g., 5.0.2).
#    The license terms remain unchanged after the update.
# 2. COMMERCIAL LICENSE holders for the [MAJOR].[MINOR] version (e.g., 5.0)
#    can install and use the updated version [MAJOR].[MINOR + 1] free of
#    charge, i.e., plus one release in the [MINOR] range (e.g., 5.1). The
#    license terms remain unchanged after the update.
# 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
#    not eligible for the free upgrade, can claim a discount when
#    purchasing the upgrade. For this purpose, please contact us via e-mail.
#
# DISCLAIMER
#
# THIS PRODUCT IS PROVIDED BY THE AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
# OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL AUTHOR OR PUBLISHER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS PRODUCT, EVEN IF ADVISED OF
# THE POSSIBILITY OF SUCH DAMAGE.
#
# THE VIEWS AND CONCLUSIONS CONTAINED IN THE PRODUCT AND DOCUMENTATION ARE
# THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING
# OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF THE AUTHOR OR PUBLISHER.
#
# CONTACT
#
# - e-mail: info@mathparser.org
# - website: https://mathparser.org
# - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
# - online store: https://mathparser.org/order-commercial-license
# - online store: https://payhip.com/infima
#*/

"""Run the complete unchanged public regression or tutorial predicates in Chromium.
Only Node host I/O, hashing and assertions are adapted; all native scenarios and
numeric predicates remain in the original runner/fences. No installed archive.
"""
from pathlib import Path
import argparse,datetime as dt,hashlib,importlib.util,json,os,subprocess,sys
P=Path(__file__).resolve().parents[1]
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def replace_once(text,old,new):
    if text.count(old)!=1:raise RuntimeError('Host adapter source changed: '+old[:80])
    return text.replace(old,new)
def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--browser',required=True)
    parser.add_argument('--suite',choices=['regression','tutorial'],required=True)
    parser.add_argument('--node',default='node')
    parser.add_argument('--test-id',action='append',default=[],help='Only an explicitly selected diagnostic regression case')
    parser.add_argument('--out',type=Path)
    parser.add_argument('--timeout-ms',type=int,default=1800000)
    args=parser.parse_args()
    if len(set(args.test_id)) != len(args.test_id):parser.error('Repeated diagnostic test ID')
    if args.timeout_ms < 1:parser.error('Timeout must be positive')
    if args.test_id and args.suite!='regression':parser.error('--test-id is only for regression diagnostics')
    target=(args.out or P/'build'/('browser-'+args.suite+'-'+dt.datetime.now(dt.timezone.utc).strftime('%Y%m%dT%H%M%S%fZ'))).resolve()
    relative=target.relative_to(P)
    if relative.parts[0]!='build':parser.error('Output must be inside this product build directory')
    target.mkdir(parents=True,exist_ok=False)
    inputs=[p for d in ['src','test/regression'] for p in (P/d).rglob('*') if p.is_file()]
    inputs += [P/'test/browser-host.mjs',P/'scripts/browser-test.mjs',P/'scripts/serve.mjs',Path(__file__)]
    if args.suite=='tutorial':inputs += [P/'TUTORIAL.md',P/'examples/tutorial.mjs',P/'scripts/tutorial.py',P/'test/tutorial/assertions.mjs.in',P/'test/tutorial/coverage.json',P/'test/tutorial/native-reference.json.gz']
    snapshot=lambda:{p.relative_to(P).as_posix():sha(p) for p in sorted(set(inputs))}
    report={'status':'RUNNING','suite':args.suite,'source_before':snapshot(),'browser':args.browser,'scope':'Every applicable native ID' if args.suite=='regression' else 'Every complete tutorial fence, unchanged benchmarks and native predicates'}
    save=lambda:(target/'run.json').write_text(json.dumps(report,indent=2),encoding='utf8')
    save()
    try:
        prelude="const process={env:{MXPARSER_MODULE:new URL('/dist/index.js',location.href).href,MXPARSER_TEST_REPORT:'browser-report.json'},argv:[],version:navigator.userAgent,exitCode:0};\n"
        if args.test_id:
            inventory=json.loads((P/'test/regression/cases.json').read_text(encoding='utf8'))
            assert all(any(x['cpp_id']==i and x.get('scenario') for x in inventory['tests']) and i not in inventory['not_applicable'] for i in args.test_id)
            prelude=prelude.replace('argv:[]','argv:'+json.dumps(['--partial',*['--test-id='+i for i in args.test_id]]))
            report['selected_ids']=args.test_id
        if args.suite=='regression':
            source=(P/'test/regression/run.mjs').read_text(encoding='utf8')
            imports=["import assert from 'node:assert/strict';","import {readFile,writeFile} from 'node:fs/promises';","import {createHash} from 'node:crypto';","import {performance} from 'node:perf_hooks';","import {pathToFileURL} from 'node:url';","import {resolve} from 'node:path';"]
            for i,line in enumerate(imports):source=replace_once(source,line,"import {assert,readFile,writeFile,hash} from '/test/browser-host.mjs';" if i==0 else '')
            for name in ['cases.json','native-api-cases.mjs','native-typed-cases.mjs','native-edge-cases.mjs','native-new-cases.mjs']:
                source=source.replace("'./"+name+"'","'/test/regression/"+name+"'")
            source=replace_once(source,"const hash=buffer=>createHash('sha256').update(buffer).digest('hex');",'')
            source=replace_once(source,"const root=new URL('../../../../',import.meta.url);","const root=new URL('/',location.href);")
            source=replace_once(source,'assert.equal(hash(await readFile(new URL(path,root))),expected,','assert.equal(await hash(await readFile(new URL(path,root))),expected,')
            source=replace_once(source,'report.binding_catalog_sha256=hash(await readFile(publicCatalog));','report.binding_catalog_sha256=await hash(await readFile(publicCatalog));')
            count=len(args.test_id) if args.test_id else 2242
        else:
            spec=importlib.util.spec_from_file_location('mx_tutorial',P/'scripts/tutorial.py');tutorial=importlib.util.module_from_spec(spec);spec.loader.exec_module(tutorial)
            items=tutorial.blocks();assert (P/'examples/tutorial.mjs').read_text(encoding='utf8')==tutorial.teaching_source(items)
            source=(P/'test/tutorial/assertions.mjs.in').read_text(encoding='utf8')
            source=replace_once(source,"import assert from 'node:assert/strict';","import {assert,writeFileSync,writeFile} from '/test/browser-host.mjs';")
            for line in ["import {writeFileSync} from 'node:fs';","import {writeFile} from 'node:fs/promises';","import {readFileSync} from 'node:fs';","import {gunzipSync} from 'node:zlib';"]:source=replace_once(source,line,'')
            source=replace_once(source,"const reference=JSON.parse(gunzipSync(readFileSync(new URL(REFERENCE))).toString('utf8'));","const compressed=await fetch('/test/tutorial/native-reference.json.gz');if(!compressed.ok)throw new Error('Native oracle unavailable');const reference=await new Response(compressed.body.pipeThrough(new DecompressionStream('gzip'))).json();")
            source=source.replace('BLOCKS',json.dumps([{k:v for k,v in item.items() if k!='code'} for item in items],ensure_ascii=False))
            source=replace_once(source,'const report=',"const reportDirectory=new URL('./',import.meta.url);\nconst report=")
            code=[source,'try{']
            for item in items:
                body=item['code']
                if item['id']=='JS-setup-001':body=replace_once(body,"import { initMxParser } from '@mathparser.org/mxparser';",'')
                code.append('begin('+json.dumps(item['id'])+');')
                if item.get('setting'):code.append('settingsBefore=checkedSettings;')
                code += [body,'finish(checkedSettings);' if item.get('setting') else 'finish();']
            code.append("report.status='PASS';}catch(error){report.status='FAILED';report.failed++;report.error=String(error);report.stack=error.stack;}finally{console.log=output;await writeFile(new URL('./report.json',reportDirectory),JSON.stringify(report));}")
            source='\n'.join(code);count=271
        if "from 'node:" in source:raise RuntimeError('Unadapted Node host import')
        script=target/(args.suite+'.mjs');script.write_text(prelude+source,encoding='utf8')
        page="""<!doctype html><meta charset='utf-8'><title>Full public conformance</title><pre id='result'>Running</pre><script type='module'>
try{await import('./SUITE.mjs');const report=globalThis.browserReport;globalThis.testResult={status:report?.status==='PASS'&&report.executed===COUNT&&report.passed===COUNT&&report.failed===0?'PASS':'FAIL',checks:report?.executed??0,crossOriginIsolated,report};}catch(error){globalThis.testResult={status:'FAIL',checks:0,error:String(error),stack:error.stack};}document.querySelector('#result').textContent=JSON.stringify({status:globalThis.testResult.status,checks:globalThis.testResult.checks});</script>""".replace('SUITE',args.suite).replace('COUNT',str(count))
        if args.test_id:page=page.replace("report?.status==='PASS'","report?.status==='PARTIAL'")
        (target/'index.html').write_text(page,encoding='utf8')
        env=os.environ.copy();env.update(MXPARSER_BROWSER_CONFORMANCE='1',MXPARSER_BROWSER_PATH='/'+relative.as_posix()+'/index.html',MXPARSER_BROWSER_CHECKS=str(count),MXPARSER_BROWSER_TIMEOUT_MS=str(args.timeout_ms))
        command=[args.node,str(P/'scripts/browser-test.mjs'),args.browser];report.update(command=command,generated_script_sha256=sha(script));save()
        with (target/'browser.log').open('w',encoding='utf8') as log:result=subprocess.run(command,cwd=P,env=env,stdout=log,stderr=subprocess.STDOUT)
        report['exit_code']=result.returncode;save()
        rows=[json.loads(line) for line in (target/'browser.log').read_text(encoding='utf8').splitlines() if line.startswith('{')]
        if not rows:raise RuntimeError((target/'browser.log').read_text(encoding='utf8')[-2000:])
        actual=rows[-1].get('report',{})
        (target/'report.json').write_text(json.dumps(actual,indent=2),encoding='utf8')
        report['source_after']=snapshot()
        if result.returncode:raise RuntimeError('Browser failed; actual report retained: '+str(actual.get('failed'))+' failures')
        assert actual['status']==('PARTIAL' if args.test_id else 'PASS') and actual['executed']==actual['passed']==count and actual['failed']==0
        if args.suite=='regression':
            fixtures=json.loads((P/'test/regression/cases.json').read_text(encoding='utf8'));expected=[x['cpp_id'] for x in fixtures['tests'] if x['cpp_id'] not in fixtures['not_applicable']]
            if args.test_id:expected=[i for i in expected if i in args.test_id]
            assert [x['cpp_id'] for x in actual['tests'] if x['status']=='PASS']==expected and actual['not_applicable']==56 and actual['unmapped']==0
            assert actual['not_selected']==2242-len(expected)
        (target/'report.json').write_text(json.dumps(actual,indent=2),encoding='utf8');report['source_after']=snapshot();assert report['source_before']==report['source_after']
        report.update(status='PASS',executed=count,passed=count,log_sha256=sha(target/'browser.log'))
    except BaseException as error:report.update(status='FAILED',error=str(error));raise
    finally:save()
    print(json.dumps({'status':report['status'],'suite':args.suite,'executed':count,'evidence':str(target)}),flush=True)
if __name__=='__main__':main()
