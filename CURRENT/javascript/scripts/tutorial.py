#/*
# @(#)tutorial.py        6.2.0    2026-11-04
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

"""Generate/check the teaching script and execute every complete documented fence."""
from pathlib import Path
import argparse
import datetime as dt
import hashlib
import json
import os
import re
import subprocess

PROJECT = Path(__file__).resolve().parents[1]


def blocks():
    text = (PROJECT / 'TUTORIAL.md').read_text(encoding='utf8')
    found = []
    for match in re.finditer(r'<!-- mx-example (\{[^\n]+\}) -->\s*```javascript\n(.*?)\n```', text, re.S):
        item = json.loads(match[1])
        item['code'] = match[2]
        found.append(item)
    ids = [item['id'] for item in found]
    assert len(ids) == len(set(ids)) == 271
    assert {item for item in ids if item.startswith('C2-example-')} == {f'C2-example-{i:03}' for i in range(1, 267)}
    assert len(set(re.findall(r'<!-- c2-chapter: ([^ ]+) -->', text))) == 58
    assert len([item for item in found if item.get('setting')]) == 21
    coverage = json.loads((PROJECT / 'test/tutorial/coverage.json').read_text(encoding='utf8'))
    assert {item['id'] for item in coverage['example']} == {item for item in ids if item.startswith('C2-example-')}
    represented = {case for item in found for case in item.get('cases', [item['case']] if item.get('case') else [])}
    assert represented == {item['id'] for item in coverage['case']} and len(represented) == 228
    assert {item['setting'] for item in found if item.get('setting')} == {item['id'] for item in coverage['setting']}
    assert hashlib.sha256((PROJECT / 'test/tutorial/native-reference.json.gz').read_bytes()).hexdigest() == coverage['native_reference_sha256']
    return found


def teaching_source(items):
    source = (PROJECT / 'src/index.js').read_text(encoding='utf8')
    header = source[:source.index('// D1/D2')].replace('@(#)index.js', '@(#)tutorial.mjs')
    return header + '// Generated from the complete JavaScript fences in TUTORIAL.md by scripts/tutorial.py.\n\n' + '\n\n'.join(
        '// ' + item['id'] + ' | ' + item['chapter'] + '\n' + item['code'] for item in items) + '\n'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--write', action='store_true', help='Refresh examples/tutorial.mjs from TUTORIAL.md')
    parser.add_argument('--run', action='store_true', help='Run all documented code with native-reference assertions')
    parser.add_argument('--node', default='node')
    parser.add_argument('--report-dir', type=Path)
    args = parser.parse_args()
    items = blocks()
    teaching = PROJECT / 'examples/tutorial.mjs'
    expected = teaching_source(items)
    if args.write:
        teaching.write_text(expected, encoding='utf8')
    assert teaching.read_text(encoding='utf8') == expected, 'Teaching code differs from TUTORIAL.md; run --write after review'
    print('Tutorial source: 271 executable blocks / 266 examples / 58 chapters / 21 settings', flush=True)
    if not args.run:
        return
    subprocess.run([os.sys.executable, str(PROJECT / 'scripts/check-bindings.py')], cwd=PROJECT, check=True)
    target = args.report_dir or PROJECT / 'build' / ('tutorial-' + dt.datetime.now(dt.timezone.utc).strftime('%Y%m%dT%H%M%S%fZ'))
    target = target.resolve()
    target.mkdir(parents=True, exist_ok=False)
    template = (PROJECT / 'test/tutorial/assertions.mjs.in').read_text(encoding='utf8')
    template = template.replace('BLOCKS', json.dumps([{k: v for k, v in item.items() if k != 'code'} for item in items], ensure_ascii=False))
    template = template.replace('REFERENCE', json.dumps((PROJECT / 'test/tutorial/native-reference.json.gz').as_uri()))
    template = template.replace("const report=", 'const reportDirectory=' + json.dumps(target.as_uri() + '/') + ';\nconst report=')
    code = [template, 'try{']
    for item in items:
        body = item['code']
        if item['id'] == 'JS-setup-001':
            original = "import { initMxParser } from '@mathparser.org/mxparser';"
            assert body.count(original) == 1
            body = body.replace(original, '')
        code.append('begin(' + json.dumps(item['id']) + ');')
        if item.get('setting'):
            code.append('settingsBefore=checkedSettings;')
        code.extend([body, 'finish(checkedSettings);' if item.get('setting') else 'finish();'])
    code.append("""report.status='PASS';
}catch(error){report.status='FAILED';report.failed++;report.examples.push({id:current.id,status:'FAIL'});report.error=String(error);report.stack=error.stack;process.exitCode=1;}
finally{console.log=output;await writeFile(new URL('./report.json',reportDirectory),JSON.stringify(report,null,2));output(JSON.stringify({status:report.status,executed:report.executed,passed:report.passed,failed:report.failed}));}
""")
    runner = target / 'runner.mjs'
    runner.write_text('\n'.join(code), encoding='utf8')
    command = [args.node, str(runner)]
    with (target / 'runtime.log').open('w', encoding='utf8') as log:
        result = subprocess.run(command, cwd=PROJECT, env=os.environ.copy(), stdout=log, stderr=subprocess.STDOUT)
    (target / 'run.json').write_text(json.dumps({'command': command, 'exit_code': result.returncode,
        'tutorial_sha256': hashlib.sha256((PROJECT / 'TUTORIAL.md').read_bytes()).hexdigest(),
        'runner_sha256': hashlib.sha256(runner.read_bytes()).hexdigest()}, indent=2), encoding='utf8')
    print(target, flush=True)
    print((target / 'runtime.log').read_text(encoding='utf8')[-2500:], flush=True)
    if result.returncode:
        raise SystemExit(result.returncode)
    report = json.loads((target / 'report.json').read_text(encoding='utf8'))
    assert report['status'] == 'PASS' and report['executed'] == report['passed'] == 271 and report['failed'] == 0


if __name__ == '__main__':
    main()
