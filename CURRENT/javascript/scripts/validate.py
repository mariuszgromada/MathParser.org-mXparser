#/*
# @(#)validate.py        6.2.0    2026-11-11
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

"""Validate the actual public module, packed consumer, types and declared browsers.

Run the build first. --node may be repeated. --asan-module selects a separately
instrumented build of the same source, not the release binary. No publication.
"""
from pathlib import Path
import argparse
import datetime as dt
import hashlib
import json
import os
import shutil
import subprocess
import sys

PROJECT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--node', action='append', help='Node executable; repeat for a tested matrix')
    parser.add_argument('--browser', action='append', default=[], help='Chromium executable; each tested with and without isolation')
    parser.add_argument('--browser-conformance', action='store_true', help='Also execute complete regression/tutorial in each supplied browser')
    parser.add_argument('--asan-module', type=Path, help='ASan dist/index.js')
    parser.add_argument('--out', type=Path)
    parser.add_argument('--asan-only', action='store_true', help='Only instrumented checks; release validation is separate')
    parser.add_argument('--asan-prefix-batch-size', type=int, default=4096)
    parser.add_argument('--asan-case-batch-size', type=int, default=25)
    parser.add_argument('--asan-conformance-only', action='store_true', help='Only instrumented regression/tutorial; other checks are separate')
    args = parser.parse_args()
    if (args.asan_only or args.asan_conformance_only) and not args.asan_module:
        parser.error('--asan-only requires --asan-module')
    if args.asan_prefix_batch_size < 1:
        parser.error('--asan-prefix-batch-size must be positive')
    if args.asan_case_batch_size < 1:
        parser.error('--asan-case-batch-size must be positive')
    target = (args.out or PROJECT / 'build' / ('validation-' + dt.datetime.now(dt.timezone.utc).strftime('%Y%m%dT%H%M%S%fZ'))).resolve()
    target.mkdir(parents=True, exist_ok=False)
    report = {'status':'RUNNING','commands':[], 'scope':'Final public profile; native-only cases explicitly classified by regression inventory'}
    report['mode']='ASAN_CONFORMANCE_ONLY' if args.asan_conformance_only else 'ASAN_ONLY' if args.asan_only else 'FULL'
    def save():
        (target/'run.json').write_text(json.dumps(report,indent=2),encoding='utf8')
    def run(name, command, *, env=None, cwd=PROJECT):
        log=target/(name+'.log')
        entry={'name':name,'command':[str(x) for x in command],'cwd':str(cwd),'status':'RUNNING'}
        report['commands'].append(entry);save();print(name,flush=True)
        with log.open('w',encoding='utf8') as stream:
            result=subprocess.run(command,cwd=cwd,env=env,stdout=stream,stderr=subprocess.STDOUT)
        entry.update(exit_code=result.returncode,status='PASS' if result.returncode==0 else 'FAILED',log_sha256=hashlib.sha256(log.read_bytes()).hexdigest());save()
        if result.returncode:
            print(log.read_text(encoding='utf8')[-3500:],flush=True)
            raise RuntimeError(name+' failed; original log preserved')
        if name.startswith('asan-') and name != 'asan-node-version':
            checks=[row for row in json_records(log) if row.get('scope')=='ASAN_FINAL']
            if not checks or not all(row['leakCheck']==0 and row['sdkHandles']==0 and not row['diagnosticFailure'] for row in checks):
                entry.update(status='FAILED',verification_error='Missing or failed sanitizer final check');save()
                raise RuntimeError('Missing or failed sanitizer final check: '+name)
        return log
    def json_records(log):
        rows=[]
        for line in log.read_text(encoding='utf8').splitlines():
            if line.startswith('{'):
                try: rows.append(json.loads(line))
                except json.JSONDecodeError: pass
        return rows
    def source_snapshot():
        files=[x for directory in ['src','scripts','test','examples'] for x in (PROJECT/directory).rglob('*') if x.is_file() and '__pycache__' not in x.parts]
        files += [PROJECT/x for x in ['CMakeLists.txt','package.json','package-lock.json','tsconfig.json','TUTORIAL.md']]
        return {x.relative_to(PROJECT).as_posix():hashlib.sha256(x.read_bytes()).hexdigest() for x in sorted(files)}
    report['source_before']=source_snapshot();save()
    def artifacts(directory):
        return {path.name:hashlib.sha256(path.read_bytes()).hexdigest()
                for path in sorted(directory.iterdir()) if path.is_file() and path.suffix in {'.js','.mjs','.json','.wasm','.ts'}
                and not path.name.startswith('validation-loader-')}
    report['release_before']=artifacts(PROJECT/'dist')
    if args.asan_module:
        report['asan_before']=artifacts(args.asan_module.resolve().parent)
    save()
    try:
        run('binding-contract',[sys.executable,'scripts/check-bindings.py'])
        run('tutorial-source',[sys.executable,'scripts/tutorial.py'])
        run('browser-assertion-host',[(args.node or ['node'])[0],'test/browser-host-assertions.mjs'])
        nodes=args.node or ['node']
        def suite(prefix,node,module):
            env=os.environ.copy();env['MXPARSER_MODULE']=module.resolve().as_uri()
            env['MXPARSER_TEST_LOADER']=str(module.resolve())
            env.pop('MXPARSER_ASAN_TUTORIAL_PROFILE',None)
            for key in ['MXPARSER_SERIALIZATION_PREFIX_START','MXPARSER_SERIALIZATION_PREFIX_END',
                        'MXPARSER_SERIALIZATION_ARCHIVES','MXPARSER_SERIALIZATION_ARCHIVES_SHA256',
                        'MXPARSER_SERIALIZATION_ARCHIVES_OUT']:
                env.pop(key,None)
            run(prefix+'-node-version',[node,'--version'])
            for filename in ['public-runtime.mjs','varargs.mjs','numeric-types.mts','behavior-runtime.mjs','latex-runtime.mjs','extension-serialization.mjs']:
                if args.asan_conformance_only: continue
                run(prefix+'-'+Path(filename).stem,[node,'test/'+filename],env=env)
            if prefix != 'asan':
                for script in ['resilience','worker']:
                    run(prefix+'-'+script,[node,'test/'+script+'.mjs'],env=env)
            if prefix=='asan' and not args.asan_conformance_only:
                corpus=target/'asan-prefix-archives.json'
                probe_env={**env,'MXPARSER_SERIALIZATION_PREFIX_START':'0','MXPARSER_SERIALIZATION_PREFIX_END':'0',
                           'MXPARSER_SERIALIZATION_ARCHIVES_OUT':str(corpus)}
                probe=run('asan-interop-corpus',[node,'test/interop.mjs'],env=probe_env)
                manifest=json.loads(corpus.read_text(encoding='utf8'))
                import base64
                assert len(manifest['roots'])==9
                total=sum(len(base64.b64decode(entry['base64'],validate=True)) for entry in manifest['roots'])
                actual=next(row['groups']['serialization'] for row in json_records(probe) if row.get('status')=='PASS' and 'groups' in row)
                assert actual['totalPrefixes']==total and actual['prefixes']==0
                corpus_sha=hashlib.sha256(corpus.read_bytes()).hexdigest()
                partition={'status':'RUNNING','totalPrefixes':total,'corpus_sha256':corpus_sha,'batchSize':args.asan_prefix_batch_size,'parts':[]}
                report['asan_prefix_partition']=partition;save()
                cursor=0
                while cursor<total:
                    end=min(total,cursor+args.asan_prefix_batch_size)
                    part_env={**env,'MXPARSER_SERIALIZATION_PREFIX_START':str(cursor),'MXPARSER_SERIALIZATION_PREFIX_END':str(end),
                              'MXPARSER_SERIALIZATION_ARCHIVES':str(corpus),'MXPARSER_SERIALIZATION_ARCHIVES_SHA256':corpus_sha}
                    log=run(f'asan-interop-{cursor:06}-{end:06}',[node,'test/interop.mjs'],env=part_env)
                    actual=next(row['groups']['serialization'] for row in json_records(log) if row.get('status')=='PASS' and 'groups' in row)
                    assert actual['roots']==9 and actual['totalPrefixes']==total and actual['range']==[cursor,end] and actual['prefixes']==end-cursor
                    partition['parts'].append({'range':[cursor,end],'prefixes':actual['prefixes']});save()
                    cursor=end
                assert sum(part['prefixes'] for part in partition['parts'])==total
                assert hashlib.sha256(corpus.read_bytes()).hexdigest()==corpus_sha
                partition['status']='PASS';save()
            elif not args.asan_conformance_only:
                run(prefix+'-interop',[node,'test/interop.mjs'],env=env)
            env['MXPARSER_TEST_REPORT']=str(target/(prefix+'-regression.json'))
            if prefix=='asan':
                inventory=json.loads((PROJECT/'test/regression/cases.json').read_text(encoding='utf8'))
                expected=[case['cpp_id'] for case in inventory['tests'] if case['cpp_id'] not in inventory['not_applicable']]
                partition={'status':'RUNNING','expected':expected,'batchSize':args.asan_case_batch_size,'parts':[]}
                report['asan_case_partition']=partition;save()
                observed=[]
                for start in range(0,len(expected),args.asan_case_batch_size):
                    selected=expected[start:start+args.asan_case_batch_size]
                    part_report=target/f'asan-regression-{start:04}.json'
                    part_env={**env,'MXPARSER_TEST_REPORT':str(part_report)}
                    run(f'asan-regression-{start:04}',[node,'test/regression/run.mjs','--partial',*['--test-id='+case for case in selected]],env=part_env)
                    actual=json.loads(part_report.read_text(encoding='utf8'))
                    assert actual['public_loader']==module.resolve().as_uri(), 'Regression used a different module'
                    assert actual['executed']==actual['passed']==len(selected) and actual['failed']==actual['unmapped']==0
                    passed=[case['cpp_id'] for case in actual['tests'] if case['status']=='PASS']
                    assert passed==selected, 'Regression partition identities differ'
                    observed.extend(passed);partition['parts'].append({'ids':passed,'report':part_report.name});save()
                assert observed==expected and len(set(observed))==len(expected)
                partition.update(status='PASS',executed=len(observed));save()
            else:
                run(prefix+'-regression',[node,'test/regression/run.mjs'],env=env)
                actual_regression=json.loads((target/(prefix+'-regression.json')).read_text(encoding='utf8'))
                assert actual_regression['public_loader']==module.resolve().as_uri(), 'Regression used a different module'
            if prefix=='asan': env['MXPARSER_ASAN_TUTORIAL_PROFILE']='1'
            run(prefix+'-tutorial',[sys.executable,'scripts/tutorial.py','--run','--node',node,'--report-dir',str(target/(prefix+'-tutorial'))],env=env)
        node=nodes[0]
        if not args.asan_only and not args.asan_conformance_only:
            for i,node in enumerate(nodes):
                suite('node-'+str(i),node,PROJECT/'dist/index.js')
            run('typescript',[node,str(PROJECT/'node_modules/typescript/bin/tsc'),'--noEmit','--project','tsconfig.json'])
            npm=Path(shutil.which('npm') or shutil.which('npm.cmd') or '')
            npm_cli=npm.parent/'node_modules/npm/bin/npm-cli.js'
            if not npm_cli.is_file():
                raise RuntimeError('Cannot locate npm-cli.js beside npm; no shell/registry publication fallback')
            pack=run('pack',[node,str(npm_cli),'pack','--json','--pack-destination',str(target)])
            packed=json.JSONDecoder().raw_decode(pack.read_text(encoding='utf8').lstrip())[0][0];archive=target/packed['filename']
            report['package']={'filename':archive.name,'sha256':hashlib.sha256(archive.read_bytes()).hexdigest(),'unpackedSize':packed['unpackedSize'],'files':len(packed['files'])};save()
            consumer=target/'consumer';consumer.mkdir()
            (consumer/'package.json').write_text('{"private":true,"type":"module"}\n',encoding='utf8')
            run('consumer-install',[node,str(npm_cli),'install','--ignore-scripts','--no-audit','--no-fund','--package-lock=false',str(archive)],cwd=consumer)
            installed=consumer/'node_modules/@mathparser.org/mxparser'
            for source in (PROJECT/'dist').iterdir():
                if source.is_file():
                    assert hashlib.sha256(source.read_bytes()).digest()==hashlib.sha256((installed/'dist'/source.name).read_bytes()).digest(), 'Packed dist differs: '+source.name
            env=os.environ.copy();env['MXPARSER_MODULE']=(installed/'dist/index.js').as_uri()
            for filename in ['public-runtime.mjs','varargs.mjs','numeric-types.mts','behavior-runtime.mjs','latex-runtime.mjs','extension-serialization.mjs','resilience.mjs']:
                run('consumer-'+Path(filename).stem,[node,str(PROJECT/'test'/filename)],env=env)
            run('consumer-basic',[node,str(installed/'examples/basic.mjs')],cwd=consumer)
            run('consumer-isolated-example',[node,str(installed/'examples/untrusted-input.mjs'),'2+2'],cwd=consumer)
            shutil.copy2(PROJECT/'test/public-types.mts',consumer/'public-types.mts')
            shutil.copy2(PROJECT/'test/numeric-types.mts',consumer/'numeric-types.mts')
            shutil.copy2(PROJECT/'test/latex-types.mts',consumer/'latex-types.mts')
            config=json.loads((PROJECT/'tsconfig.json').read_text());config['files']=['public-types.mts','numeric-types.mts','latex-types.mts']
            (consumer/'tsconfig.json').write_text(json.dumps(config),encoding='utf8')
            run('consumer-typescript',[node,str(PROJECT/'node_modules/typescript/bin/tsc'),'--noEmit','--project',str(consumer/'tsconfig.json')],cwd=consumer)
            for index,browser in enumerate(args.browser):
                for isolated in [False,True]:
                    env=os.environ.copy();env['MXPARSER_ISOLATED']='1' if isolated else '0'
                    run('browser-'+str(index)+'-'+('isolated' if isolated else 'ordinary'),[node,'scripts/browser-test.mjs',browser],env=env)
                if args.browser_conformance:
                    for scope in ['regression','tutorial']:
                        run('browser-'+str(index)+'-full-'+scope,[sys.executable,'scripts/browser-conformance.py','--browser',browser,'--node',node,'--suite',scope,'--out',str(target/f'browser-{index}-{scope}')])
        if args.asan_module:
            # Official Emscripten option: retain address/leak detection while
            # avoiding allocation-stack collection for allocation-heavy cases.
            # Failures are rerun separately with default stacks for diagnosis.
            asan_module=args.asan_module.resolve()
            wrapper=asan_module.parent/('validation-loader-'+target.name+'.mjs')
            wrapper.write_text("""import {initMxParser as initialize} from ORIGINAL;
const modules=[];
const tutorialMemoryProfile=process.env.MXPARSER_ASAN_TUTORIAL_PROFILE==='1';
const sanitizerOptions='malloc_context_size=0'+(tutorialMemoryProfile?':quarantine_size_mb=64':'');
let diagnosticFailure=false;
export async function initMxParser(options={}) {
    const callback=options.onRuntimeInitialized;
    return initialize({...options, ASAN_OPTIONS:sanitizerOptions,
        printErr(...args) {
            const text=args.map(String).join(' ');
            if(/(?:ERROR|SUMMARY): (?:AddressSanitizer|LeakSanitizer)|AddressSanitizer:DEADLYSIGNAL|Sanitizer CHECK failed/i.test(text)) {
                diagnosticFailure=true;
                console.error(text);
            } else options.printErr?.(...args);
        },
        onAbort(reason) {
            diagnosticFailure=true;
            options.onAbort?.call(this,reason);
        },
        onRuntimeInitialized() {
            if(typeof this.___lsan_do_recoverable_leak_check!=='function') throw new Error('Missing native LSan check');
            modules.push(this);
            callback?.call(this);
        }
    });
}
process.once('beforeExit',()=>{
    for(const native of modules) {
        let leaks=-1;
        try { leaks=native.___lsan_do_recoverable_leak_check(); }
        catch(error) { diagnosticFailure=true;console.error('ASAN_FINAL_CHECK_FAILED',error); }
        console.log(JSON.stringify({scope:'ASAN_FINAL',leakCheck:leaks,sdkHandles:native.count_emval_handles(),diagnosticFailure,allocationStacks:false,quarantineSizeMB:tutorialMemoryProfile?64:256}));
        if(leaks!==0)process.exitCode=23;
    }
    if(diagnosticFailure)process.exitCode=23;
});
""".replace('ORIGINAL',json.dumps(asan_module.as_uri())),encoding='utf8')
            report['asan']={'module':str(asan_module),'options':'malloc_context_size=0','tutorial_options':'malloc_context_size=0:quarantine_size_mb=64',
                            'wrapper_sha256':hashlib.sha256(wrapper.read_bytes()).hexdigest(),
                            'leak_check':'explicit native __lsan_do_recoverable_leak_check at beforeExit',
                            'limitation':'allocation origins omitted; rerun failing case with default stacks'}
            save()
            suite('asan',node,wrapper)
        report['source_after']=source_snapshot()
        assert report['source_after']==report['source_before'],'Source changed during validation; this is not a stable validation snapshot'
        report['release_after']=artifacts(PROJECT/'dist')
        assert report['release_after']==report['release_before'],'Release artifacts changed during validation'
        if args.asan_module:
            report['asan_after']=artifacts(args.asan_module.resolve().parent)
            assert report['asan_after']==report['asan_before'],'ASan artifacts changed during validation'
        report['status']='PASS'
    except BaseException as error:
        report.update(status='FAILED',error=str(error));raise
    finally:
        save();print(target,flush=True)


if __name__=='__main__':
    main()
