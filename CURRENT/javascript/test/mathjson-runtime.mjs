/*
 * @(#)mathjson-runtime.mjs        6.2.0    2026-11-23
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

import assert from 'node:assert/strict';

const {initMxParser} = await import(process.env.MXPARSER_MODULE ?? '@mathparser.org/mxparser');
const output = [];
const mx = await initMxParser({print: text => output.push(text), printErr: text => output.push(text)});
const math = mx.MathJSON;
const handles = [];
function keep(handle) {
    assert.ok(handle);
    handles.push(handle);
    return handle;
}
function value(result) {
    keep(result);
    assert.equal(result.isSuccess(), true);
    assert.equal(result.getError(), null);
    return result.getValue();
}
function failure(result, code) {
    keep(result);
    assert.equal(result.isSuccess(), false);
    assert.equal(result.getValue(), null);
    assert.deepEqual(result.getDiagnostics(), []);
    const error = keep(result.getError());
    assert.equal(error.getCode(), code);
    assert.equal(typeof error.getMessage(), 'string');
    return error;
}

function warning(result, index, code, path) {
    const diagnostics = result.getDiagnostics();
    diagnostics.forEach(keep);
    const diagnostic = diagnostics[index];
    assert.ok(diagnostic);
    assert.equal(diagnostic.getCode(), code);
    assert.equal(diagnostic.getPath(), path);
    return diagnostic;
}

let executed = 0;
function test(name, body) {
    body();
    executed++;
    console.log(name);
}

mx.License.iConfirmNonCommercialUse('MathJSON binding regression');
try {
    test('0475/0476: formula round-trip and independent combined results', () => {
        const formulas = [
            ['2+3*4', 14],
            ['abs(-3)+floor(3.9)*ceil(1.1)', 9],
            ['sum(i,1,2,sum(j,1,2,i+j))', 12],
        ];
        for (const [text, expected] of formulas) {
            const original = keep(new mx.Expression(text));
            const wire = original.getExpressionAsMathJSON();
            assert.equal(math.exportExpression(original), wire);
            assert.equal(value(math.exportExpressionWithDiagnostics(original)), wire);
            assert.equal(original.calculate(), expected);
            assert.equal(keep(value(math.importExpression(wire))).calculate(), expected);
        }
        const foreign = '{"fn":["Add",["Power",2,["Factorial",3]],["Root",27,3],["Divide",3,2]],"comment":"reference"}';
        assert.equal(keep(value(math.importExpression(foreign))).calculate(), 68.5);
    });

    test('0477: closed Block and all declaration kinds', () => {
        const block = '["Block",["Declare","x",{"dict":{"value":5}}],'
            + '["Declare","k",{"dict":{"value":2,"constant":"True"}}],'
            + '["DefineFunction","fact",["Function",["If",["LessEqual","n",1],1,'
            + '["Multiply","n",["fact",["Subtract","n",1]]]],"n"]],["Add","k",["fact","x"]]]';
        const imported = keep(value(math.importExpression(block)));
        assert.equal(imported.calculate(), 122);
        const program = math.exportProgram(imported);
        assert.equal(value(math.exportProgramWithDiagnostics(imported)), program);
        assert.equal(keep(value(math.importExpression(program))).calculate(), 122);
        const constant = keep(imported.getConstant('k'));
        const declaration = math.exportDefinition(constant);
        assert.equal(value(math.exportDefinitionWithDiagnostics(constant)), declaration);
        const restoredConstant = keep(value(math.importDefinition(declaration, [])));
        assert.ok(restoredConstant instanceof mx.Constant);
        assert.equal(restoredConstant.getConstantValue(), 2);
        const fn = keep(imported.getFunction('fact'));
        const restoredFn = keep(value(math.importDefinition(math.exportDefinition(fn))));
        assert.ok(restoredFn instanceof mx.Function);
        assert.equal(restoredFn.calculate(5), 120);
        const restoredArgument = keep(value(math.importDefinition('["Declare","freeValue",{"dict":{"value":7}}]')));
        assert.ok(restoredArgument instanceof mx.Argument);
        assert.equal(restoredArgument.getArgumentValue(), 7);
        const ordered = '["Block",["DefineFunction","orderedF",["Function",["Subtract","z","a"],"z","a"]],["orderedF",8,3]]';
        const orderedModel = keep(value(math.importExpression(ordered)));
        assert.equal(orderedModel.calculate(), 5);
        assert.equal(math.exportProgram(orderedModel), ordered);
        const unknown = failure(math.importDefinition('["Declare","valueX",{"dict":{"badZ":0,"badA":0,"value":2}}]'), 'INVALID_SHAPE');
        assert.equal(unknown.getPath(), '/2/dict/badZ');
    });

    test('0478/0485: live bindings, result aliases, and independent handle release', () => {
        const argument = keep(new mx.Argument('x', 0));
        const expressionResult = keep(math.importExpression('["If",["Equal","x",0],7,["Divide",1,"x"]]', argument));
        const aliasResult = keep(expressionResult.cloneHandle());
        assert.ok(aliasResult instanceof math.Result);
        assert.ok(expressionResult.isAliasOf(aliasResult));
        const expression = keep(expressionResult.getValue());
        const expressionAlias = keep(aliasResult.getValue());
        assert.notStrictEqual(expression, expressionAlias);
        assert.ok(expression.isAliasOf(expressionAlias));
        assert.equal(expression.calculate(), 7);
        expressionResult.delete();
        expressionAlias.delete();
        argument.setArgumentValue(4);
        assert.equal(expression.calculate(), 0.25);
        const retained = keep(expression.getArgument('x'));
        assert.ok(retained.isAliasOf(argument));
        argument.delete();
        retained.setArgumentValue(8);
        assert.equal(expression.calculate(), 0.125);
        const named = keep(value(math.importExpression('["Add","x",2]', [retained])));
        assert.equal(named.calculate(), 10);
    });

    test('0479: native double conversion and optional projections', () => {
        const defaults = keep(math.ImportOptions.defaults());
        const options = keep(defaults.withKilometresAsScalar(true));
        assert.ok(options instanceof math.ImportOptions);
        const subnormal = keep(value(math.importExpression('{"num":"5e-324"}')));
        const subnormalTokens = subnormal.getCopyOfInitialTokens();
        subnormalTokens.forEach(keep);
        assert.equal(subnormalTokens[0].tokenValue, Number.MIN_VALUE);
        for (const [source, expected] of [
            ['9007199254740993', 9007199254740992],
            ['{"num":"9007199254740995"}', 9007199254740996],
            ['-9007199254740993', -9007199254740992],
        ]) {
            const result = math.importExpression(source);
            assert.equal(keep(value(result)).calculate(), expected);
            assert.deepEqual(result.getDiagnostics(), []);
        }
        const largeValue = keep(value(math.importDefinition('["Declare","largeValue",{"dict":{"value":9007199254740993}}]')));
        assert.equal(largeValue.getArgumentValue(), 9007199254740992);
        for (const [source, expected] of [
            ['9007199254740993', 9007199254740992],
            ['9007199254740995', 9007199254740996],
            ['h.20000000000001', 9007199254740992],
        ]) {
            const original = keep(new mx.Expression(source));
            const wire = math.exportExpression(original);
            assert.equal(original.calculate(), expected);
            assert.equal(keep(value(math.importExpression(wire))).calculate(), expected);
        }
        const inputs = [
            ['{"num":"0.(3)"}', 1/3], ['{"num":"0.1(6)e1"}', 5/3],
            ['"-1.(6)"', -5/3], ['{"num":"0.(9)"}', 1],
        ];
        for (const [source, expected] of inputs) {
            const result = math.importExpression(source);
            assert.ok(Math.abs(keep(value(result)).calculate() - expected) <= 1e-14);
            assert.deepEqual(result.getDiagnostics(), []);
        }
        const quantity = '["Quantity",2,{"str":"km"}]';
        failure(math.importExpressionWithOptions(quantity, defaults), 'UNSUPPORTED_NODE');
        const result = math.importExpressionWithOptions(quantity, options);
        assert.equal(keep(value(result)).calculate(), 2000);
        const warnings = result.getDiagnostics();
        warnings.forEach(keep);
        assert.equal(warnings.length, 1);
        assert.ok(Object.isFrozen(warnings));
        assert.ok(warnings[0] instanceof math.Diagnostic);
        assert.equal(warnings[0].getCode(), 'UNIT_PROJECTED_TO_SCALAR');
        assert.equal(warnings[0].getPath(), '');
        assert.equal(warnings[0].getOffset(), 0);
        const warning = keep(warnings[0].cloneHandle());
        assert.ok(warnings[0].isAliasOf(warning));
        warnings[0].delete();
        assert.equal(warning.getCode(), 'UNIT_PROJECTED_TO_SCALAR');
        const periodicDeclaration = math.importDefinition('["Declare","x",{"dict":{"value":{"num":"0.(3)"}}}]');
        assert.equal(keep(value(periodicDeclaration)).getArgumentValue(), 1/3);
        assert.deepEqual(periodicDeclaration.getDiagnostics(), []);
        const restored = keep(value(math.importDefinition('["Declare","signedZero",{"dict":{"value":{"num":"-0"}}}]')));
        assert.ok(Object.is(restored.getArgumentValue(), -0));
        assert.equal(defaults.withPeriodicNumberConversion, undefined);
        failure(math.importExpression('{"num":"1(3)"}'), 'UNSUPPORTED_NUMBER');
    });

    test('0480/0492/0493: refusal, input offsets and error JSON without output', () => {
        const source = '{"comment":"😀","fn":["Add",1,["List",0]]}';
        const unknown = failure(math.importExpression(source), 'UNSUPPORTED_NODE');
        assert.equal(unknown.getPath(), '/fn/2');
        assert.equal(unknown.getOffset(), source.indexOf('["List"'));
        const badSurrogate = '"\ud800x"';
        assert.equal(failure(math.importExpression(badSurrogate), 'INVALID_JSON').getOffset(), badSurrogate.length);
        assert.equal(failure(math.importExpression(null), 'INVALID_ARGUMENT').getOffset(), -1);
        failure(math.importDefinition('1', null), 'INVALID_ARGUMENT');
        failure(math.importDefinition('1', [null]), 'INVALID_ROOT');
        failure(math.importExpressionWithOptions('1', null), 'INVALID_ARGUMENT');
        failure(math.exportDefinitionWithDiagnostics(null), 'INVALID_ARGUMENT');
        const expression = keep(new mx.Expression('x??1', keep(new mx.Argument('x', 2))));
        const error = failure(math.exportExpressionWithDiagnostics(expression), 'UNSUPPORTED_NODE');
        assert.equal(error.getPath(), '');
        assert.equal(error.getOffset(), -1);
        const wire = math.exportExpression(expression);
        assert.equal(JSON.parse(wire)[0], 'Error');
        assert.equal(JSON.parse(wire)[1][1].str, 'mxparser:UNSUPPORTED_NODE');
        assert.equal(expression.getExpressionAsMathJSON(), wire);
        failure(math.importExpression(wire), 'INPUT_ERROR');
        failure(math.importDefinition(wire), 'INPUT_ERROR');
    });

    test('0481: C++ token conversion at binary64 and identifier boundaries', () => {
        const overflow = '1797693134862315808' + '0'.repeat(290) + '.5';
        for (const source of ['1e400', overflow, '-' + overflow]) {
            const original = keep(new mx.Expression(source));
            const tokens = original.getCopyOfInitialTokens();
            tokens.forEach(keep);
            const expected = tokens[0].tokenValue;
            const exported = math.exportExpressionWithDiagnostics(original);
            if (Number.isFinite(expected)) {
                const restored = keep(value(math.importExpression(value(exported))));
                assert.equal(restored.calculate(), expected);
            } else {
                failure(exported, 'UNSUPPORTED_NUMBER');
            }
        }
        const underflow = keep(new mx.Expression('1e-400'));
        assert.equal(underflow.calculate(), 0);
        assert.equal(math.exportExpression(underflow), '0');
        const nearMaximum = '17976931348623157' + '0'.repeat(292) + '.5';
        const finite = math.exportExpression(keep(new mx.Expression(nearMaximum)));
        assert.equal(keep(value(math.importExpression(finite))).calculate(), Number.MAX_VALUE);
        const oversized = 'z'.repeat(300);
        for (const source of [oversized, '[' + oversized + ']'])
            failure(math.exportExpressionWithDiagnostics(keep(new mx.Expression(source))), 'RESOURCE_LIMIT');
        const longest = oversized.slice(0, 256);
        const argument = keep(new mx.Argument(longest, 7));
        assert.equal(keep(value(math.importExpression(JSON.stringify(longest), argument))).calculate(), 7);
        const longCall = keep(new mx.Expression('z'.repeat(1200) + '(1)'));
        failure(math.exportExpressionWithDiagnostics(longCall), 'RESOURCE_LIMIT');
        failure(math.importExpression(math.exportExpression(longCall)), 'INPUT_ERROR');
    });

    test('0494: locale catalogue and custom MathJSON resource values', () => {
        const saved = keep(mx.StringModel.getStringResources());
        const catalog = Object.keys(mx.StringResources.prototype).filter(name => name.startsWith('MATHJSON_'));
        assert.deepEqual(catalog.sort(), [
            'MATHJSON_INVALID_ARGUMENT',
            'MATHJSON_INVALID_JSON',
            'MATHJSON_INVALID_SHAPE',
            'MATHJSON_INPUT_ERROR_NODE',
            'MATHJSON_INVALID_NAME',
            'MATHJSON_NAME_COLLISION',
            'MATHJSON_UNRESOLVED_REFERENCE',
            'MATHJSON_EXTERNAL_DEFINITION',
            'MATHJSON_MXPARSER_EXTENSION',
            'MATHJSON_WRONG_ARGUMENT_COUNT',
            'MATHJSON_UNSUPPORTED_CONSTRUCT',
            'MATHJSON_UNSUPPORTED_NUMBER',
            'MATHJSON_UNSUPPORTED_DEFINITION',
            'MATHJSON_BUILTIN_SPELLING_UNAVAILABLE',
            'MATHJSON_INVALID_MXPARSER_SOURCE',
            'MATHJSON_EMISSION_MISMATCH',
            'MATHJSON_RESOURCE_LIMIT',
            'MATHJSON_UNIT_PROJECTED_TO_SCALAR',
        ].sort());
        const options = keep(keep(math.ImportOptions.defaults()).withKilometresAsScalar(true));
        const source = '["Add",1,["List",0]]';
        const unsupported = keep(new mx.Expression('x??1', keep(new mx.Argument('x', 2))));
        const cases = [
            ['en','Unsupported MathJSON construct','Quantity converted to metres'],
            ['pl','Nieobsługiwana konstrukcja MathJSON','Przeliczono wielkość na metry'],
            ['de','Nicht unterstützte MathJSON-Konstruktion','Größe in Meter umgerechnet'],
            ['fr','Construction MathJSON non prise en charge','Quantité convertie en mètres'],
            ['es','Construcción MathJSON no admitida','Magnitud convertida a metros'],
            ['it','Costrutto MathJSON non supportato','Quantità convertita in metri'],
            ['pt','Construção MathJSON não suportada','Grandeza convertida em metros'],
            ['zh','不支持的 MathJSON 结构','量值已换算为米'],
        ];
        try {
            for (const [language, msg, warning] of cases) {
                mx.mXparser.changeLanguageTo(language);
                const current = keep(mx.StringModel.getStringResources());
                for (const name of catalog) assert.equal(typeof current[name], 'string');
                const imported = failure(math.importExpression(source), 'UNSUPPORTED_NODE');
                assert.equal(imported.getMessage(), msg);
                assert.equal(imported.getPath(), '/2');
                assert.equal(imported.getOffset(), source.indexOf('["List"'));
                const exported = failure(math.exportExpressionWithDiagnostics(unsupported), 'UNSUPPORTED_NODE');
                assert.equal(exported.getMessage(), msg);
                assert.equal(exported.getPath(), '');
                assert.equal(exported.getOffset(), -1);
                assert.deepEqual(JSON.parse(math.exportExpression(unsupported)),
                    ['Error', ['ErrorCode', {str:'mxparser:UNSUPPORTED_NODE'}, {str:msg}, {str:''}, -1]]);
                const result = keep(math.importExpressionWithOptions('["Quantity",2,{"str":"km"}]', options));
                assert.ok(result.isSuccess());
                const diagnostics = result.getDiagnostics();
                diagnostics.forEach(keep);
                assert.equal(diagnostics.length, 1);
                assert.equal(diagnostics[0].getMessage(), warning);
            }
            const custom = keep(mx.StringResources.languagePolish());
            custom.MATHJSON_UNRESOLVED_REFERENCE = 'Brak funkcji „{0}”.';
            mx.StringModel.setStringResources(custom);
            const missing = math.importExpression('["sampleFunction",1]');
            keep(value(missing));
            assert.equal(warning(missing, 0, 'UNRESOLVED_FUNCTION', '').getMessage(), 'Brak funkcji „sampleFunction”.');
            const invalidRational = '["Rational",1,0]';
            assert.equal(failure(math.importExpression(invalidRational), 'UNSUPPORTED_NUMBER').getMessage(),
                'Nieobsługiwana liczba przy konwersji MathJSON');
            custom.MATHJSON_UNSUPPORTED_NUMBER = null;
            custom.MATHJSON_UNSUPPORTED_CONSTRUCT = null;
            assert.equal(JSON.parse(math.exportExpression(unsupported))[1][2].str, '');
            const rational = failure(math.importExpression('["Rational",1,0]'), 'UNSUPPORTED_NUMBER');
            assert.equal(rational.getMessage(), '');
            assert.equal(rational.getPath(), '/2');
            assert.equal(rational.getOffset(), 14);
        } finally {
            mx.StringModel.setStringResources(saved);
        }
    });

    test('0495: ordinary domains are evaluated by mXparser on import and export', () => {
        const cases = [
            ['19!', ['Factorial', 19], 121645100408832000],
            ['root(3,-8)', ['Root', ['Negate', 8], 3], -2],
            ['1/0', ['Divide', 1, 0], NaN],
            ['sqrt(-1)', ['Sqrt', -1], NaN],
            ['ln(0)', ['Ln', 0], -Infinity],
            ['log(1,8)', ['Log', 8, 1], NaN],
            ['0^0', ['Power', 0, 0], 1],
            ['if(1.25<1.5,7,8)', ['If', ['Less', {num:'1.25'}, {num:'1.5'}], 7, 8], 7],
            ['if(1=1,7,1/0)', ['If', ['Equal', 1, 1], 7, ['Divide', 1, 0]], 7],
        ];
        for (const [source, tree, expected] of cases) {
            const original = keep(new mx.Expression(source));
            const wire = JSON.stringify(tree);
            assert.equal(math.exportExpression(original), wire);
            const imported = keep(value(math.importExpression(wire)));
            for (const expression of [original, imported]) {
                const result = expression.calculate();
                if (Number.isNaN(expected)) assert.ok(Number.isNaN(result));
                else assert.equal(result, expected);
            }
        }
        const x = keep(new mx.Argument('x', 2));
        const y = keep(new mx.Argument('y', 3));
        const original = keep(new mx.Expression('x^y', x, y));
        const powerJson = '["Power","x","y"]';
        const power = keep(value(math.importExpression(powerJson, x, y)));
        assert.equal(math.exportExpression(original), powerJson);
        assert.equal(original.calculate(), 8);
        assert.equal(power.calculate(), 8);
        y.setArgumentValue(-3);
        assert.equal(original.calculate(), 0.125);
        assert.equal(power.calculate(), 0.125);
        assert.equal(keep(value(math.importExpression('["Root",-8,3]'))).calculate(), -2);
        assert.equal(keep(value(math.importExpression('["Power",["Rational",0,1],0]'))).calculate(), 1);
        const longSum = keep(value(math.importExpression('["Sum","i",["Limits","i",1,1001]]')));
        assert.equal(longSum.calculate(), 501501);
        const nativeLongSum = keep(new mx.Expression('sum(i,1,1001,i)'));
        assert.equal(nativeLongSum.calculate(), 501501);
        value(math.exportExpressionWithDiagnostics(nativeLongSum));
    });

    test('0496: mXparser evaluates Sum and Product bounds', () => {
        const n = keep(new mx.Argument('n', 5));
        const cases = [
            ['sum(i,1,n,i)', '["Sum","i",["Limits","i",1,"n"]]', 15],
            ['prod(i,1,n,i)', '["Product","i",["Limits","i",1,"n"]]', 120],
            ['sum(i,3,1,i)', '["Sum","i",["Limits","i",3,1]]', 6],
            ['sum(i,1,2.5,i)', '["Sum","i",["Limits","i",1,2.5]]', 3],
            ['sum(i,1,2,sum(j,1,i,j))', '["Sum",["Sum","j",["Limits","j",1,"i"]],["Limits","i",1,2]]', 4],
        ];
        for (const [source, wire, expected] of cases) {
            const original = keep(new mx.Expression(source, n));
            const imported = keep(value(math.importExpression(wire, n)));
            const exported = value(math.exportExpressionWithDiagnostics(original));
            const restored = keep(value(math.importExpression(exported, n)));
            assert.equal(original.calculate(), expected);
            assert.equal(imported.calculate(), expected);
            assert.equal(restored.calculate(), expected);
        }
        const dynamic = keep(value(math.importExpression(cases[0][1], n)));
        n.setArgumentValue(6);
        assert.equal(dynamic.calculate(), 21);
    });

    test('0497: only referenced definitions require a supported kind and unique name', () => {
        class UncalledExtension extends mx.ArgumentExtension {
            constructor() {
                super();
                this.calls = 0;
            }

            getArgumentValue() {
                this.calls++;
                throw new Error('MathJSON must not evaluate extensions');
            }

            clone() {
                return new UncalledExtension();
            }
        }
        const x = keep(new mx.Argument('x', 10));
        const dependent = keep(new mx.Argument('valueY', 'x+2', x));
        const duplicate1 = keep(new mx.Argument('valueZ', 1));
        const duplicate2 = keep(new mx.Argument('valueZ', 2));
        const host = new UncalledExtension();
        const extended = keep(new mx.Argument('hostValue', host));
        const ignored = keep(value(math.importExpression('["Add","x",2]',
            dependent, duplicate1, duplicate2, extended, x, null, keep(new mx.Expression('7')))));
        assert.equal(ignored.calculate(), 12);
        const linked = keep(value(math.importExpression('"valueY"', dependent)));
        assert.ok(keep(linked.getArgument('valueY')).isAliasOf(dependent));
        assert.equal(linked.calculate(), 12);
        const result = math.importExpression('"hostValue"', extended);
        assert.ok(keep(keep(value(result)).getArgument('hostValue')).isAliasOf(extended));
        warning(result, 0, 'EXTERNAL_DEFINITION', '');
        assert.equal(host.calls, 0);
        const duplicate = failure(math.importExpression('["Add",1,"valueZ"]', duplicate1, duplicate2), 'NAME_COLLISION');
        assert.equal(duplicate.getPath(), '/2');
        assert.equal(keep(value(math.importExpression('"x"', x, x))).calculate(), 10);
    });

    test('0498: unary associative operations and large integral Rational atoms', () => {
        const x = keep(new mx.Argument('x', 7));
        const unary = keep(value(math.importExpression('["Multiply",["Add","x"]]', x)));
        assert.equal(unary.calculate(), 7);
        assert.equal(math.exportExpression(unary), '"x"');
        const cases = [
            ['["Rational",9007199254740992,2]', 4503599627370496],
            ['["Rational",{"num":"1.8014398509481984e16"},-2]', -9007199254740992],
        ];
        for (const [wire, expected] of cases)
            assert.equal(keep(value(math.importExpression(wire))).calculate(), expected);
        failure(math.importExpression('["Add"]'), 'INVALID_ARITY');
        failure(math.importExpression('["Multiply"]'), 'INVALID_ARITY');
        failure(math.importExpression('["Rational",1.5,2]'), 'UNSUPPORTED_NUMBER');
        failure(math.importExpression('["Rational",2,0]'), 'UNSUPPORTED_NUMBER');
        const fraction = keep(new mx.Expression('9007199254740992_2'));
        const wire = value(math.exportExpressionWithDiagnostics(fraction));
        assert.equal(JSON.parse(wire)[0], 'Rational');
        assert.equal(keep(value(math.importExpression(wire))).calculate(), cases[0][1]);
    });

    test('0499: shared messages keep codes and input positions', () => {
        const resources = keep(mx.StringModel.getStringResources());
        const first = failure(math.importExpression('1 true'), 'INVALID_JSON');
        const second = failure(math.importExpression('[1,]'), 'INVALID_JSON');
        assert.equal(first.getMessage(), resources.MATHJSON_INVALID_JSON);
        assert.equal(first.getMessage(), second.getMessage());
        assert.equal(first.getPath(), '');
        assert.equal(first.getOffset(), 2);
        assert.equal(second.getPath(), '/1');
        assert.equal(second.getOffset(), 3);
        const shape = failure(math.importExpression('["Add",1,true]'), 'INVALID_SHAPE');
        const root = failure(math.importDefinition('1'), 'INVALID_ROOT');
        assert.equal(shape.getMessage(), resources.MATHJSON_INVALID_SHAPE);
        assert.equal(shape.getMessage(), root.getMessage());
        assert.equal(shape.getPath(), '/2');
        assert.equal(shape.getOffset(), 9);
        assert.equal(root.getPath(), '');
        assert.equal(root.getOffset(), 0);
    });

    test('0500: safe self-calls use the native recursion limit', () => {
        const definitions = [
            ['walk(n)=if(n<=0,1,n*walk(n-1))', ['If', ['LessEqual','n',0], 1, ['Multiply','n',['walk',['Subtract','n',1]]]]],
            ['walk(n)=walk(n)', ['walk','n']],
            ['walk(n)=1+walk(n-1)', ['Add',1,['walk',['Subtract','n',1]]]],
            ['walk(n)=if(n<=0,walk(n+1),walk(n-1))', ['If',['LessEqual','n',0],['walk',['Add','n',1]],['walk',['Subtract','n',1]]]],
            ['walk(n)=if(walk(n)>0,1,0)', ['If',['Greater',['walk','n'],0],1,0]],
            ['walk(n)=sum(i,1,1,walk(n))', ['Sum',['walk','n'],['Limits','i',1,1]]],
            ['walk(n)=sum(i,1,walk(n),i)', ['Sum','i',['Limits','i',1,['walk','n']]]],
            ['walk(n)=prod(i,1,1,walk(n))', ['Product',['walk','n'],['Limits','i',1,1]]],
            ['walk(n)=if(n<=0,0,sum(i,1,1,walk(n)))', ['If',['LessEqual','n',0],0,['Sum',['walk','n'],['Limits','i',1,1]]]],
        ];
        const saved = mx.mXparser.getMaxAllowedRecursionDepth();
        try {
            mx.mXparser.setMaxAllowedRecursionDepth(48);
            for (const [index, [source, body]] of definitions.entries()) {
                const original = keep(new mx.Expression('walk(4)', keep(new mx.Function(source))));
                assert.equal(original.checkSyntax(), true);
                const wire = JSON.stringify(['Block',['DefineFunction','walk',['Function',body,'n']],['walk',4]]);
                const imported = math.importExpression(wire);
                const exported = math.exportProgramWithDiagnostics(original);
                if (index >= 4) {
                    const refused = failure(imported, 'UNSUPPORTED_PROGRAM');
                    if (index === 4) assert.equal(refused.getPath(), '/1/2/1/1/1');
                    failure(exported, 'UNSUPPORTED_PROGRAM');
                    continue;
                }
                const restored = keep(value(math.importExpression(value(exported))));
                for (const expression of [original, keep(value(imported)), restored]) {
                    const functionHandle = keep(expression.getFunction('walk'));
                    assert.ok(keep(functionHandle.getFunction('walk')).isAliasOf(functionHandle));
                    const first = expression.calculate(), second = expression.calculate();
                    if (index === 0) assert.deepEqual([first, second], [24, 24]);
                    else assert.ok(Number.isNaN(first) && Number.isNaN(second));
                }
            }
        } finally {
            mx.mXparser.setMaxAllowedRecursionDepth(saved);
        }
    });

    test('0501: MathJSON export ignores unused extensions without invoking callbacks', () => {
        class UncalledArgument extends mx.ArgumentExtension {
            calls = 0;
            getArgumentValue() { this.calls++; throw new Error('MathJSON evaluated an extension'); }
            clone() { return new UncalledArgument(); }
        }
        class UncalledFunction extends mx.FunctionExtension {
            metadata = 0;
            calculations = 0;
            assignments = 0;
            getParametersNumber() { return 1; }
            getParameterName() { this.metadata++; return 'x'; }
            setParameterValue() { this.assignments++; }
            calculate() { this.calculations++; return 42; }
            clone() { return new UncalledFunction(); }
        }
        const argumentSource = new UncalledArgument();
        const extra = keep(new mx.Argument('unusedArg', argumentSource));
        const functionSource = new UncalledFunction();
        const extraFunction = keep(new mx.Function('unusedFn', functionSource));
        const x = keep(new mx.Argument('x', 2));
        const inc = keep(new mx.Function('inc(t)=t+1'));
        const plain = keep(new mx.Expression('inc(x)', x, inc));
        const augmented = keep(new mx.Expression('inc(x)', extra, extraFunction, x, inc));
        const outer = keep(new mx.Function('outer(t)=t+1'));
        outer.addDefinitions(extra, extraFunction);
        const usesArgument = keep(new mx.Expression('unusedArg+1', extra));
        const usesFunction = keep(new mx.Expression('unusedFn(1)', extraFunction));
        const metadataBefore = functionSource.metadata;
        assert.equal(value(math.exportExpressionWithDiagnostics(augmented)), '["inc","x"]');
        assert.equal(value(math.exportProgramWithDiagnostics(augmented)), math.exportProgram(plain));
        assert.equal(value(math.exportDefinitionWithDiagnostics(outer)),
            math.exportDefinition(keep(new mx.Function('outer(t)=t+1'))));
        const referencedArgument = math.exportExpressionWithDiagnostics(usesArgument);
        const referencedFunction = math.exportExpressionWithDiagnostics(usesFunction);
        assert.equal(value(referencedArgument), '["Add","unusedArg",1]');
        assert.equal(value(referencedFunction), '["unusedFn",1]');
        warning(referencedArgument, 0, 'EXTERNAL_DEFINITION', '');
        warning(referencedFunction, 0, 'EXTERNAL_DEFINITION', '');
        failure(math.exportProgramWithDiagnostics(usesArgument), 'UNSUPPORTED_PROGRAM');
        failure(math.exportProgramWithDiagnostics(usesFunction), 'UNSUPPORTED_PROGRAM');
        assert.equal(argumentSource.calls, 0);
        assert.equal(functionSource.metadata, metadataBefore);
        assert.equal(functionSource.calculations, 0);
        assert.equal(functionSource.assignments, 0);
    });

    test('0502: MathJSON rounds decimal underflow to zero', () => {
        const cases = ['1e-400', '-1e-400', '{"num":"1E-400"}', '{"num":"-1E-400"}',
            '["Rational",-1e-400,2]'];
        for (const wire of cases) {
            const imported = math.importExpression(wire);
            assert.ok(Object.is(keep(value(imported)).calculate(), 0));
            assert.deepEqual(imported.getDiagnostics(), []);
        }
        const positive = keep(value(math.importDefinition('["Declare","valueX",{"dict":{"value":1e-400}}]')));
        const negative = keep(value(math.importDefinition('["Declare","valueX",{"dict":{"value":-1e-400}}]')));
        assert.ok(Object.is(positive.getArgumentValue(), 0));
        assert.ok(Object.is(negative.getArgumentValue(), -0));
        failure(math.importExpression('["Rational",1,1e-400]'), 'UNSUPPORTED_NUMBER');
        failure(math.importExpression('-1e400'), 'UNSUPPORTED_NUMBER');
    });

    test('0503: shared functions, conditional bodies and angle units', () => {
        const cases = [
            ['sin(pi/2)', '["Sin",["Divide","Pi",2]]', 1],
            ['cos(0)', '["Cos",0]', 1],
            ['tg(pi/4)', '["Tan",["Divide","Pi",4]]', 1],
            ['exp(1)', '["Exp",1]', Math.E],
            ['Gamma(5)', '["Gamma",5]', 24],
            ['min(8,3,4)', '["Min",8,3,4]', 3],
            ['max(8,3,4)', '["Max",8,3,4]', 8],
            ['1+if(1<2,3,1/0)', '["Add",1,["If",["Less",1,2],3,["Divide",1,0]]]', 4],
            ['min(cos(0),2)', '["Min",["Cos",0],2]', 1],
            ['if(if(1<2,3,4)>2,1,0)', '["If",["Greater",["If",["Less",1,2],3,4],2],1,0]', 1],
            ['sum(i,1,3,if(i<3,1,0))', '["Sum",["If",["Less","i",3],1,0],["Limits","i",1,3]]', 2],
        ];
        for (const [source, wire, expected] of cases) {
            const original = keep(new mx.Expression(source));
            const exported = math.exportExpressionWithDiagnostics(original);
            const imported = math.importExpression(wire);
            assert.ok(Math.abs(original.calculate() - expected) <= 1e-14);
            assert.equal(value(exported), wire);
            assert.deepEqual(exported.getDiagnostics(), []);
            assert.ok(Math.abs(keep(value(imported)).calculate() - expected) <= 1e-14);
            assert.deepEqual(imported.getDiagnostics(), []);
        }
        mx.mXparser.setDegreesMode();
        try {
            const result = math.exportExpressionWithDiagnostics(keep(new mx.Expression('sin(30)')));
            assert.equal(value(result), '["Sin",["Degrees",30]]');
            assert.deepEqual(result.getDiagnostics(), []);
            for (const [wire, expected] of [['["Sin",["Divide","Pi",2]]', 1],
                [result.getValue(), 0.5], ['["Cos",["Degrees",60]]', 0.5], ['["Tan",["Degrees",45]]', 1]])
                assert.ok(Math.abs(keep(value(math.importExpression(wire))).calculate() - expected) <= 1e-14);
            assert.equal(math.exportExpression(keep(new mx.Expression('sin(rad(30))'))), '["Sin",["Degrees",["Degrees",30]]]');
        } finally {
            mx.mXparser.setRadiansMode();
        }
    });

    test('0504: open formulas can be completed without reimport', () => {
        const json = '["Add",["score",2],"offset"]';
        const imported = math.importExpression(json);
        const expression = keep(value(imported));
        warning(imported, 0, 'UNRESOLVED_FUNCTION', '/1');
        warning(imported, 1, 'UNRESOLVED_SYMBOL', '/2');
        assert.equal(imported.getDiagnostics().length, 2);
        assert.equal(expression.checkSyntax(), false);
        assert.deepEqual(expression.getMissingUserDefinedFunctions(), ['score']);
        assert.deepEqual(expression.getMissingUserDefinedArguments(), ['offset']);
        const exported = math.exportExpressionWithDiagnostics(expression);
        assert.equal(value(exported), json);
        assert.equal(exported.getDiagnostics().length, 2);
        expression.addDefinitions(keep(new mx.Function('score(t)=t^2')), keep(new mx.Constant('offset', 1)));
        assert.equal(expression.checkSyntax(), true);
        assert.equal(expression.calculate(), 5);
        const repeated = math.importExpression('["Add",["score",2],["score",2,3]]');
        const variadic = keep(value(repeated));
        assert.equal(repeated.getDiagnostics().length, 1);
        variadic.addDefinitions(keep(new mx.Function('score(...)= [npar]')));
        assert.equal(variadic.calculate(), 3);
        for (const [wire, expected] of [['["score",["offset",2]]', 81], ['["Sin",["score",2]]', Math.sin(4)],
            ['["If","True",["score",2],0]', 4], ['["Sum",["score","j"],["Limits","j",1,2]]', 5]]) {
            const nested = keep(value(math.importExpression(wire)));
            nested.addDefinitions(keep(new mx.Function('score(t)=t^2')), keep(new mx.Function('offset(t)=t+7')));
            assert.ok(nested.checkSyntax() && Math.abs(nested.calculate() - expected) <= 1e-14);
        }
        failure(math.importExpression('["Block",["score",2]]'), 'UNRESOLVED_FUNCTION');
        failure(math.importExpression('["List",1,2]'), 'UNSUPPORTED_NODE');
    });

    test('0505: host arguments and functions retain native identity and stay idle during conversion', () => {
        class ArgumentSource extends mx.ArgumentExtension {
            calls = 0;
            getArgumentValue() { this.calls++; return 42; }
            clone() { return new ArgumentSource(); }
        }
        class FunctionSource extends mx.FunctionExtension {
            metadata = 0;
            calculations = 0;
            assignments = 0;
            getParametersNumber() { return 1; }
            getParameterName() { this.metadata++; return 'x'; }
            setParameterValue() { this.assignments++; }
            calculate() { this.calculations++; return 2; }
            clone() { return new FunctionSource(); }
        }
        const argumentSource = new ArgumentSource();
        const functionSource = new FunctionSource();
        const argument = keep(new mx.Argument('hostValue', argumentSource));
        const fn = keep(new mx.Function('hostFn', functionSource));
        const metadata = functionSource.metadata;
        const json = '["Add","hostValue",["hostFn",1]]';
        const imported = math.importExpression(json, argument, fn);
        const expression = keep(value(imported));
        warning(imported, 0, 'EXTERNAL_DEFINITION', '/1');
        warning(imported, 1, 'EXTERNAL_DEFINITION', '/2');
        assert.ok(keep(expression.getArgument('hostValue')).isAliasOf(argument));
        assert.ok(keep(expression.getFunction('hostFn')).isAliasOf(fn));
        const exported = math.exportExpressionWithDiagnostics(expression);
        assert.equal(value(exported), json);
        assert.equal(exported.getDiagnostics().length, 2);
        assert.deepEqual([argumentSource.calls, functionSource.metadata, functionSource.calculations, functionSource.assignments],
            [0, metadata, 0, 0]);
        assert.equal(expression.calculate(), 44);
        assert.equal(functionSource.calculations, 1);
    });

    test('0506: standard and overridden builtin tokens keep their bindings', () => {
        const tan = keep(new mx.Argument('Tan', 2));
        assert.equal(keep(value(math.importExpression('["Add","Tan",1]', tan))).calculate(), 3);
        const custom = keep(new mx.Function('Tan(t)=t+1'));
        assert.equal(keep(value(math.importDefinition(math.exportDefinition(custom)))).calculate(2), 3);
        failure(math.importExpression('["Sum","Pi",["Limits","Pi",1,3]]'), 'NAME_COLLISION');
        failure(math.importDefinition('["DefineFunction","turn",["Function","Pi","Pi"]]'), 'NAME_COLLISION');
        const i = keep(new mx.Argument('i', 2));
        const symbol = math.exportExpressionWithDiagnostics(keep(new mx.Expression('i+1', i)));
        assert.equal(value(symbol), '["Add",["MxParserSymbol","i"],1]');
        warning(symbol, 1, 'MXPARSER_EXTENSION', '');
        assert.equal(keep(value(math.importExpression(symbol.getValue(), i))).calculate(), 3);
        const recursive = '["Block",["DefineFunction","Sum",["Function","t","t"]],'
            + '["DefineFunction","walk",["Function",["If",["Less","n",1],0,'
            + '["MxParserCall","Sum",["walk",["Subtract","n",1]]]],"n"]],["walk",3]]';
        assert.equal(keep(value(math.importExpression(recursive))).calculate(), 0);
        mx.mXparser.setToOverrideBuiltinTokens();
        try {
            const sin = keep(new mx.Function('sin(t)=t+1'));
            const overridden = keep(new mx.Expression('sin(0)', sin));
            const exported = math.exportExpressionWithDiagnostics(overridden);
            assert.equal(overridden.calculate(), 1);
            assert.equal(value(exported), '["MxParserCall","sin",0]');
            warning(exported, 1, 'MXPARSER_EXTENSION', '');
            assert.equal(keep(value(math.importExpression(exported.getValue(), sin))).calculate(), 1);
            const mixed = '["Add",["Sin",0],["MxParserCall","sin",0]]';
            failure(math.importExpression(mixed, sin), 'BUILTIN_UNAVAILABLE');
            mx.mXparser.modifyBuiltinToken('sin', 'sine');
            assert.equal(keep(value(math.importExpression(mixed, sin))).calculate(), 1);
            const standard = math.exportExpressionWithDiagnostics(keep(new mx.Expression('sine(0)')));
            assert.equal(value(standard), '["Sin",0]');
            assert.deepEqual(standard.getDiagnostics(), []);
        } finally {
            mx.mXparser.unmodifyBuiltinTokens('sin');
            mx.mXparser.setNotToOverrideBuiltinTokens();
        }
    });

    test('0507: explicit tetration keeps its value and export warning', () => {
        const original = keep(new mx.Expression('2^^3+1'));
        const exported = math.exportExpressionWithDiagnostics(original);
        assert.equal(value(exported), '["Add",["MxParserTetration",2,3],1]');
        assert.equal(exported.getDiagnostics().length, 1);
        warning(exported, 0, 'MXPARSER_EXTENSION', '');
        assert.equal(original.calculate(), 17);
        assert.equal(keep(value(math.importExpression(exported.getValue()))).calculate(), 17);
        failure(math.importExpression('["MxParserTetration",2]'), 'INVALID_ARITY');
        for (const [source, expected] of [['2^^2^^2', 65536], ['2^^3!', 20922789888000],
            ['2^-3^^2', 0.9746546091224311], ['2^^-1*3', NaN]]) {
            const chain = keep(new mx.Expression(source));
            const wire = value(math.exportExpressionWithDiagnostics(chain));
            const imported = keep(value(math.importExpression(wire)));
            for (const result of [chain.calculate(), imported.calculate()])
                assert.ok(Number.isNaN(expected) ? Number.isNaN(result) : Math.abs(result - expected) <= 1e-14);
        }
    });

    test('0508: single function export keeps external references', () => {
        const g = keep(new mx.Function('g(t)=t??1'));
        const f = keep(new mx.Function('f(t)=g(t)+g(t)'));
        f.addDefinitions(g, keep(new mx.Function('unused(t)=t??3')));
        const wire = '["DefineFunction","f",["Function",["Add",["g","t"],["g","t"]],"t"]]';
        const exported = math.exportDefinitionWithDiagnostics(f);
        assert.equal(f.calculate(2), 4);
        assert.equal(value(exported), wire);
        assert.equal(exported.getDiagnostics().length, 1);
        warning(exported, 0, 'EXTERNAL_DEFINITION', '');
        const restored = keep(value(math.importDefinition(wire, g)));
        assert.ok(keep(restored.getFunction('g')).isAliasOf(g));
        assert.equal(restored.calculate(2), 4);
        const open = keep(math.importDefinition(wire));
        keep(value(open));
        assert.deepEqual(open.getDiagnostics().map(d => [d.getCode(), d.getPath()]),
            [['UNRESOLVED_FUNCTION', '/2/1/1']]);
        failure(math.exportDefinitionWithDiagnostics(keep(new mx.Function('missing(t)=g(t)'))), 'UNRESOLVED_FUNCTION');
        const wrongArity = keep(new mx.Function('wrong(t)=g(t,t)'));
        wrongArity.addDefinitions(g);
        failure(math.exportDefinitionWithDiagnostics(wrongArity), 'INVALID_ARITY');
        failure(math.exportDefinitionWithDiagnostics(g), 'UNSUPPORTED_NODE');
        failure(math.exportProgramWithDiagnostics(keep(new mx.Expression('f(2)', f))), 'UNSUPPORTED_NODE');
    });

    test('0509: formula zeros are normalized and declared zero keeps its sign', () => {
        const examples = ['-0', '-0.0', '{"num":"-0e-400"}', '["Multiply",2,-0]', '["Rational",-0,2]'];
        for (const example of examples) {
            const imported = math.importExpression(example);
            assert.ok(Object.is(keep(value(imported)).calculate(), 0));
            assert.deepEqual(imported.getDiagnostics(), []);
        }
        const original = keep(new mx.Expression('2*(-0.0)'));
        const exported = value(math.exportExpressionWithDiagnostics(original));
        assert.equal(exported, '["Multiply",2,0]');
        assert.ok(keep(value(math.importExpression(exported))).calculate() === original.calculate());
        const signedPower = keep(new mx.Expression('(-0.0)^(-1)'));
        const normalizedPower = math.exportExpression(signedPower);
        assert.equal(Math.abs(signedPower.calculate()), Infinity);
        assert.equal(normalizedPower, '["Power",0,-1]');
        assert.equal(keep(value(math.importExpression(normalizedPower))).calculate(), Infinity);
        failure(math.importExpression('["Rational",1,-0]'), 'UNSUPPORTED_NUMBER');
        const signed = keep(new mx.Argument('z', -0));
        const declaration = '["Declare","z",["Dictionary",["KeyValuePair","value",{"num":"-0"}]]]';
        assert.equal(math.exportDefinition(signed), declaration);
        assert.ok(Object.is(keep(value(math.importDefinition(declaration))).getArgumentValue(), -0));
    });

    test('0510: qualified user names stay distinct from numeric atoms', () => {
        const symbol = keep(new mx.Argument('NaN', 7));
        const exported = math.exportExpressionWithDiagnostics(keep(new mx.Expression('NaN+1', symbol)));
        assert.equal(value(exported), '["Add",["MxParserSymbol",{"sym":"NaN"}],1]');
        warning(exported, 1, 'MXPARSER_EXTENSION', '');
        for (const reference of [exported.getValue(), '["Add",["MxParserSymbol","NaN"],1]']) {
            const imported = keep(value(math.importExpression(reference, symbol)));
            assert.ok(keep(imported.getArgument('NaN')).isAliasOf(symbol));
            assert.equal(imported.calculate(), 8);
        }
        const program = value(math.exportProgramWithDiagnostics(keep(new mx.Expression('NaN+1', symbol))));
        assert.ok(program.includes('["Declare",{"sym":"NaN"},'));
        assert.equal(keep(value(math.importExpression(program))).calculate(), 8);
        const fn = keep(new mx.Function('Infinity(t)=t+1'));
        const call = '["MxParserCall",{"sym":"Infinity"},2]';
        const qualified = math.exportExpressionWithDiagnostics(keep(new mx.Expression('Infinity(2)', fn)));
        assert.equal(value(qualified), call);
        warning(qualified, 1, 'MXPARSER_EXTENSION', '');
        for (const reference of [call, '["MxParserCall","Infinity",2]']) {
            const imported = keep(value(math.importExpression(reference, fn)));
            assert.ok(keep(imported.getFunction('Infinity')).isAliasOf(fn));
            assert.equal(imported.calculate(), 3);
        }
        const wrapper = keep(new mx.Function('MxParserSymbol(t)=t+1'));
        assert.equal(math.exportExpression(keep(new mx.Expression('MxParserSymbol(2)', wrapper))),
            '["MxParserCall","MxParserSymbol",2]');
        failure(math.importExpression('["MxParserSymbol",{"num":"NaN"}]', symbol), 'INVALID_SHAPE');
        failure(math.importExpression('{"num":"NaN"}'), 'UNSUPPORTED_NUMBER');
    });

    test('0511: function parameter names stay local', () => {
        const x = keep(new mx.Argument('x', 99));
        const f = keep(new mx.Function('f(x)=x+1'));
        const declaration = '["DefineFunction","f",["Function",["Add","x",1],"x"]]';
        const scalar = '["Declare","x",["Dictionary",["KeyValuePair","value",99]]]';
        const body = '["Add","x",["f",2]]';
        const original = keep(new mx.Expression('x+f(2)', x, f));
        assert.equal(original.calculate(), 102);
        assert.equal(x.getArgumentValue(), 99);
        const exported = math.exportProgram(original);
        assert.equal(exported, `["Block",${scalar},${declaration},${body}]`);
        for (const block of [exported, `["Block",${declaration},${scalar},${body}]`]) {
            const imported = keep(value(math.importExpression(block)));
            assert.equal(imported.calculate(), 102);
            assert.equal(keep(imported.getArgument('x')).getArgumentValue(), 99);
        }
        const imported = keep(value(math.importDefinition(declaration, x)));
        assert.equal(imported.calculate(2), 3);
        assert.equal(x.getArgumentValue(), 99);
        failure(math.importDefinition('["DefineFunction","f",["Function","x","x","x"]]'), 'NAME_COLLISION');
    });

    test('0512: scalar comparisons and predicates', () => {
        for (const [source, wire, expected] of [
            ['1<2', '["Boole",["Less",1,2]]', 1],
            ['1+(1<2)', '["Add",1,["Boole",["Less",1,2]]]', 2],
            ['3<2<1', '["Boole",["Less",["Boole",["Less",3,2]],1]]', 1],
            ['if(1<2,3,4)', '["If",["Less",1,2],3,4]', 3],
            ['5>3=3', '["Boole",["Greater",5,["Boole",["Equal",3,3]]]]', 1],
            ['if(3<2<1,5,6)', '["If",["Less",["Boole",["Less",3,2]],1],5,6]', 5],
        ]) {
            const original = keep(new mx.Expression(source));
            assert.equal(original.calculate(), expected);
            assert.equal(math.exportExpression(original), wire);
            assert.equal(keep(value(math.importExpression(wire))).calculate(), expected);
        }
        assert.equal(keep(value(math.importExpression('["Less",2,1]'))).calculate(), 0);
        for (const [name, expected] of [['True', 1], ['False', 0]]) {
            const literal = JSON.stringify(name);
            const wire = `["Boole",${literal}]`;
            const scalar = keep(value(math.importExpression(wire)));
            assert.equal(scalar.calculate(), expected);
            assert.equal(math.exportExpression(scalar), wire);
            assert.equal(keep(value(math.importExpression(literal))).calculate(), expected);
        }
        assert.equal(keep(value(math.importExpression('["Add",1,["Less",1,2]]'))).calculate(), 2);
        failure(math.importExpression('["Less",1,2,3]'), 'INVALID_ARITY');
        failure(math.importExpression('["Boole"]'), 'INVALID_ARITY');
        failure(math.importExpression('["Boole","True","False"]'), 'INVALID_ARITY');
        failure(math.importExpression('["Boole",2]'), 'UNSUPPORTED_DOMAIN');
        const host = keep(new mx.Function('Boole(t)=t+1'));
        const qualified = math.exportExpression(keep(new mx.Expression('Boole(2)', host)));
        assert.equal(qualified, '["MxParserCall","Boole",2]');
        assert.equal(keep(value(math.importExpression(qualified, host))).calculate(), 3);
        assert.equal(keep(value(math.importExpression('["Boole","True"]', host))).calculate(), 1);
    });

    test('0513: parenthesized unit step', () => {
        for (const [source, wire] of [
            ['sum(i,1,3,i,(1))', '["Sum","i",["Limits","i",1,3]]'],
            ['prod(i,1,3,i,((1)))', '["Product","i",["Limits","i",1,3]]'],
        ]) {
            const original = keep(new mx.Expression(source));
            assert.equal(original.calculate(), 6);
            assert.equal(math.exportExpression(original), wire);
            assert.equal(keep(value(math.importExpression(wire))).calculate(), 6);
        }
        failure(math.exportExpressionWithDiagnostics(keep(new mx.Expression('sum(i,1,3,i,(2-1))'))), 'UNSUPPORTED_DOMAIN');
    });

    test('0514: iterator names checked against installed definitions', () => {
        const i = keep(new mx.Argument('i', 7));
        const sum = '["Sum","i",["Limits","i",1,3]]';
        const tupleSum = '["Sum","i",["Tuple","i",1,3]]';
        const tupleProduct = '["Product","i",["Tuple","i",1,3]]';
        for (const wire of [sum, tupleSum, tupleProduct]) {
            const expression = keep(value(keep(math.importExpression(wire, i))));
            assert.equal(expression.calculate(), 6);
            assert.equal(expression.getArgument('i'), null);
            assert.equal(i.getArgumentValue(), 7);
        }
        const collision = failure(math.importExpression(`["Add","i",${tupleSum}]`, i), 'NAME_COLLISION');
        assert.equal(collision.getPath(), '/2/2/1');
        failure(math.importExpression(`["Block",["Declare","i",{"dict":{"value":7}}],${sum}]`), 'NAME_COLLISION');
        const definition = `["DefineFunction","localSum",["Function",["Multiply","n",${tupleSum}],"n"]]`;
        const fn = keep(value(keep(math.importDefinition(definition, i))));
        assert.equal(fn.calculate(2), 12);
        failure(math.importDefinition(`["DefineFunction","i",["Function",${sum},"n"]]`), 'NAME_COLLISION');
        failure(math.importExpression('["Sum","i",["Tuple","i",1]]'), 'INVALID_ARITY');
    });

    test('0515: Boolean declaration attributes', () => {
        const prefix = '["Declare","x",';
        for (const attributes of [
            '{"dict":{"value":7,"constant":false}}', '{"dict":{"value":7,"constant":"False"}}',
            '["Dictionary",["Tuple","constant","False"],["Tuple","value",7]]',
        ]) {
            const result = keep(math.importDefinition(prefix + attributes + ']'));
            const argument = keep(value(result));
            assert.ok(argument instanceof mx.Argument);
            assert.equal(argument.getArgumentValue(), 7);
            assert.deepEqual(result.getDiagnostics(), []);
        }
        const constant = keep(value(keep(math.importDefinition(prefix + '{"dict":{"value":7,"constant":true}}]'))));
        assert.ok(constant instanceof mx.Constant);
        assert.equal(constant.getConstantValue(), 7);
        failure(math.importDefinition(prefix + '{"dict":{"value":7,"constant":0}}]'), 'INVALID_SHAPE');
        failure(math.importDefinition(prefix + '["Dictionary",["Tuple","value",7],["Tuple","constant","False"],["Tuple","constant","True"]]]'), 'INVALID_SHAPE');
        failure(math.importExpression('["If",true,3,4]'), 'INVALID_SHAPE');
    });

    test('0516: numeric literal conditional export with native rounding', () => {
        for (const [source, wire, expected] of [
            ['if(2,3,4)', '["If","True",3,4]', 3], ['if(0,3,4)', '["If","False",3,4]', 4],
            ['if(-(2),3,4)', '["If","True",3,4]', 3], ['if(1e-15,3,4)', '["If","False",3,4]', 4],
        ]) {
            const expression = keep(new mx.Expression(source));
            const exported = math.exportExpression(expression);
            assert.equal(expression.calculate(), expected);
            assert.equal(exported, wire);
            assert.equal(keep(value(keep(math.importExpression(exported)))).calculate(), expected);
        }
        mx.mXparser.disableAlmostIntRounding();
        mx.mXparser.disableCanonicalRounding();
        try {
            const small = keep(new mx.Expression('if(1e-15,3,4)'));
            assert.equal(small.calculate(), 3);
            assert.equal(math.exportExpression(small), '["If","True",3,4]');
        } finally {
            mx.mXparser.enableAlmostIntRounding();
            mx.mXparser.enableCanonicalRounding();
        }
        const negate = keep(new mx.Function('Negate(t)=t+1'));
        failure(math.importExpression('["If",2,3,4]'), 'UNSUPPORTED_DOMAIN');
        failure(math.exportExpressionWithDiagnostics(keep(new mx.Expression('if(Negate(2),3,4)', negate))), 'UNSUPPORTED_DOMAIN');
    });

    test('0518: standalone functions can be completed after import', () => {
        const source = keep(new mx.Function('f(x)=x+y+g(x)'));
        const y = keep(new mx.Argument('y', 4));
        const g = keep(new mx.Function('g(t)=2*t'));
        source.addArguments(y);
        source.addFunctions(g);
        const wire = math.exportDefinition(source);
        assert.equal(source.calculate(3), 13);
        const imported = keep(math.importDefinition(wire));
        const restored = keep(value(imported));
        assert.deepEqual(imported.getDiagnostics().map(d => [d.getCode(), d.getPath()]),
            [['UNRESOLVED_SYMBOL', '/2/1/2'], ['UNRESOLVED_FUNCTION', '/2/1/3']]);
        assert.equal(restored.checkSyntax(), false);
        restored.addArguments(y);
        restored.addFunctions(g);
        assert.ok(restored.checkSyntax());
        assert.equal(restored.calculate(3), 13);
        const complete = keep(math.importDefinition(wire, y, g));
        assert.deepEqual(complete.getDiagnostics(), []);
        assert.equal(keep(value(complete)).calculate(3), 13);
        failure(math.importExpression(`["Block",${wire},["f",3]]`), 'UNRESOLVED_SYMBOL');
    });

    test('0519: wide flat arithmetic preserves native infix order', () => {
        mx.mXparser.disableCanonicalRounding();
        mx.mXparser.disableAlmostIntRounding();
        mx.mXparser.disableUlpRounding();
        try {
            const wires = ['["Abs",["Add",1e16,1,-1e16' + ',1'.repeat(300) + ']]',
                '["Multiply",1e-200,1e-200,1e200' + ',1'.repeat(300) + ']'];
            const sources = ['abs(1e16+1+(-1e16)' + '+1'.repeat(300) + ')',
                '1e-200*1e-200*1e200' + '*1'.repeat(300)];
            const expected = [300, 0];
            for (let j = 0; j < wires.length; j++) {
                const imported = keep(value(keep(math.importExpression(wires[j]))));
                assert.equal(keep(new mx.Expression(sources[j])).calculate(), expected[j]);
                assert.equal(imported.calculate(), expected[j]);
                const restored = keep(value(keep(math.importExpression(math.exportExpression(imported)))));
                assert.equal(restored.calculate(), expected[j]);
            }
            const grouped = keep(value(keep(math.importExpression('["Add",1e16,["Add",-1e16,1]]'))));
            assert.equal(grouped.calculate(), 0);
            failure(math.importExpression('["Abs",'.repeat(300) + '1' + ']'.repeat(300)), 'RESOURCE_LIMIT');
        } finally {
            mx.mXparser.enableCanonicalRounding();
            mx.mXparser.enableAlmostIntRounding();
            mx.mXparser.enableUlpRounding();
        }
    });

    test('0520: collision checks use the active native dictionary', () => {
        const cosineWire = '["Cos",0]';
        const shiftedDeclaration = '["Declare","shifted",{"dict":{"value":2}}]';
        mx.mXparser.modifyBuiltinToken('cos', 'shifted');
        mx.mXparser.modifyBuiltinToken('shifted', 'fresh');
        try {
            let activeNames = 0;
            for (const name of ['shifted', 'fresh']) {
                const nativeCall = keep(new mx.Expression(name + '(0)'));
                const declaration = JSON.stringify(['Declare', name, {dict: {value: 2}}]);
                if (nativeCall.checkSyntax()) {
                    activeNames++;
                    assert.equal(nativeCall.calculate(), 1);
                    failure(math.importDefinition(declaration), 'NAME_COLLISION');
                } else {
                    const argument = keep(new mx.Argument(name, 2));
                    const source = keep(new mx.Expression(name + '+1', argument));
                    const wire = JSON.stringify(['Add', name, 1]);
                    assert.equal(source.calculate(), 3);
                    assert.equal(math.exportExpression(source), wire);
                    assert.equal(keep(value(keep(math.importExpression(wire, argument)))).calculate(), 3);
                    assert.equal(keep(value(keep(math.importDefinition(declaration)))).getArgumentValue(), 2);
                }
            }
            assert.equal(activeNames, 1);
            assert.equal(keep(value(keep(math.importExpression(cosineWire)))).calculate(), 1);
        } finally {
            mx.mXparser.unmodifyBuiltinTokens('cos', 'shifted');
        }
        mx.mXparser.removeBuiltinTokens('cos');
        mx.mXparser.modifyBuiltinToken('cos', 'shifted');
        try {
            assert.equal(keep(new mx.Expression('shifted(0)')).calculate(), 1);
            assert.equal(keep(value(keep(math.importExpression(cosineWire)))).calculate(), 1);
            failure(math.importDefinition(shiftedDeclaration), 'NAME_COLLISION');
        } finally {
            mx.mXparser.unmodifyBuiltinTokens('cos');
            mx.mXparser.unremoveBuiltinTokens('cos');
        }
    });

    test('0521: builtin constant aliases with brackets round-trip', () => {
        mx.mXparser.modifyBuiltinToken('[true]', '[testTrue]');
        mx.mXparser.modifyBuiltinToken('[false]', '[testFalse]');
        try {
            for (const [source, wire, expected] of [
                ['if([testTrue],3,4)', '["If","True",3,4]', 3],
                ['if([testFalse],3,4)', '["If","False",3,4]', 4],
            ]) {
                const expression = keep(new mx.Expression(source));
                const exported = math.exportExpression(expression);
                assert.equal(expression.calculate(), expected);
                assert.equal(exported, wire);
                assert.equal(keep(value(keep(math.importExpression(exported)))).calculate(), expected);
            }
        } finally {
            mx.mXparser.unmodifyBuiltinTokens('[true]', '[false]');
        }
        mx.mXparser.removeBuiltinTokens('[true]');
        try {
            failure(math.importExpression('["If","True",3,4]'), 'BUILTIN_UNAVAILABLE');
        } finally {
            mx.mXparser.unremoveBuiltinTokens('[true]');
        }
    });

    test('0522: MathJSON budgets long decimal atoms by processed text length', () => {
        const decimal = '1.' + '0'.repeat(1022);
        const atom = {num: decimal};
        const wire = JSON.stringify(['Add', ...Array(800).fill(atom)]);
        const expression = keep(value(math.importExpression(wire)));
        assert.equal(expression.calculate(), 800);
        assert.equal(math.exportExpression(keep(new mx.Expression(decimal))), '1');
        failure(math.importExpression(JSON.stringify({num: decimal + '0'})), 'RESOURCE_LIMIT');
    });

    test('0524: input and function arity errors at their validation stage', () => {
        const f = keep(new mx.Function('curveF(t)=2*t'));
        const wire = '["curveF",2]';
        const source = keep(new mx.Expression('curveF(2)', f));
        const exported = math.exportExpressionWithDiagnostics(source);
        assert.equal(source.calculate(), 4);
        assert.equal(value(exported), wire);
        warning(exported, 0, 'EXTERNAL_DEFINITION', '');
        const imported = keep(value(math.importExpression(wire, f)));
        assert.ok(keep(imported.getFunction('curveF')).isAliasOf(f));
        assert.equal(imported.calculate(), 4);
        const wrongCall = keep(new mx.Expression('curveF(2,3)', f));
        failure(math.exportExpressionWithDiagnostics(wrongCall), 'INVALID_ARITY');
        failure(math.importExpression('["curveF",2,3]', f), 'INVALID_ARITY');
        const wrongDefinition = keep(new mx.Function('outerF(t)=curveF(t,3)', f));
        failure(math.exportDefinitionWithDiagnostics(wrongDefinition), 'INVALID_ARITY');
        failure(math.exportExpressionWithDiagnostics(keep(new mx.Expression('sin(2,3)'))), 'INVALID_ARITY');
        failure(math.importExpression('[', f), 'INVALID_JSON');
        failure(math.importDefinition('[', f), 'INVALID_JSON');
        failure(math.importExpression('["Error"]', f), 'INPUT_ERROR');
        failure(math.importDefinition('["Error"]', f), 'INPUT_ERROR');
    });

    test('0525: root kind is checked before processing definitions', () => {
        const x = keep(new mx.Argument('x', 2));
        const declaration = '["Declare","x",{"dict":{"value":3}}]';
        failure(math.importExpression(declaration, x), 'INVALID_ROOT');
        failure(math.importDefinition('["Add","x",1]', x), 'INVALID_ROOT');
        failure(math.importDefinition('["Block",1]', x), 'INVALID_ROOT');
        failure(math.importExpression('["Block"]', x), 'INVALID_ROOT');
        failure(math.importExpression('["Block",["Block",1]]', x), 'INVALID_ROOT');
        failure(math.importExpression(`["Block",${declaration},${declaration}]`, x), 'INVALID_ROOT');
        assert.equal(x.getArgumentValue(), 2);
    });

    test('0526: names starting with an underscore exchange in both directions', () => {
        for (const name of ['_scale', '_mxp0']) {
            const offset = keep(new mx.Argument('_offset', 2));
            const scale = keep(new mx.Function(`${name}(_v)=2*_v`));
            const source = keep(new mx.Expression(`_offset+${name}(3)`, offset, scale));
            const wire = `["Add","_offset",["${name}",3]]`;
            assert.equal(source.calculate(), 8);
            assert.equal(value(math.exportExpressionWithDiagnostics(source)), wire);
            const imported = keep(value(math.importExpression(wire, offset, scale)));
            assert.equal(imported.calculate(), 8);
            const block = keep(value(math.importExpression(`["Block",${wire}]`, offset, scale)));
            assert.equal(block.calculate(), 8);
            const program = keep(value(math.importExpression(math.exportProgram(source))));
            assert.equal(program.calculate(), 8);
            const declaration = `["DefineFunction","outerF",["Function",["${name}","t"],"t"]]`;
            const defined = keep(value(math.importDefinition(declaration, scale)));
            assert.equal(defined.calculate(3), 6);
            offset.setArgumentValue(4);
            assert.equal(imported.calculate(), 10);
        }
    });

    test('0527: arithmetic retains flat chains and explicit grouping', () => {
        for (const [wire, expected] of [['["Add",1,2,3]', 6], ['["Multiply",2,3,4]', 24],
                ['["Add",["Add",1,2],3]', 6], ['["Multiply",2,["Multiply",3,4]]', 24]]) {
            const imported = keep(value(math.importExpression(wire)));
            assert.equal(imported.calculate(), expected);
            assert.equal(math.exportExpression(imported), wire);
        }
        const x = keep(new mx.Argument('x', 3));
        const f = keep(new mx.Function('f', 'x', x));
        const g = keep(new mx.Function('g', 'x', x));
        f.setParametersNumber(1);
        g.setParametersNumber(1);
        const source = keep(new mx.Expression('(x)+(f(4))+((x)+(g(9)))', x, f, g));
        const wire = '["Add","x",["f",4],["Add","x",["g",9]]]';
        assert.equal(value(math.exportExpressionWithDiagnostics(source)), wire);
        assert.equal(source.calculate(), 19);
        assert.equal(x.getArgumentValue(), 4);
        x.setArgumentValue(3);
        const restored = keep(value(math.importExpression(wire, x, f, g)));
        assert.equal(restored.calculate(), 19);
        assert.equal(x.getArgumentValue(), 4);
        x.setArgumentValue(3);
        const grouped = '["Add",["Add","x",["f",4]],["Add","x",["g",9]]]';
        const importedGroup = keep(value(math.importExpression(grouped, x, f, g)));
        assert.equal(importedGroup.calculate(), 19);
        assert.equal(x.getArgumentValue(), 9);
        assert.equal(math.exportExpression(importedGroup), grouped);
    });

    test('0528/0529: readable import source preserves shared parameter evaluation', () => {
        const example = '["Multiply",2,["Add",1,["Sin",["Divide","Pi",2]]]]';
        const compact = keep(value(math.importExpression(example)));
        assert.equal(compact.getExpressionString(), '2*(1+sin(pi/2))');
        assert.equal(compact.calculate(), 4);

        const x = keep(new mx.Argument('x', 3));
        const y = keep(new mx.Argument('y', 0));
        const g = keep(new mx.Function('g', 'x', x));
        const h = keep(new mx.Function('h', 'x+0*y', y, x));
        g.setParametersNumber(1);
        h.setParametersNumber(1);
        const wire = '["Add",["Abs",["h",0]],["Max",["Add",["g",9],0]]]';
        const grouped = keep(value(math.importExpression(wire, x, g, h)));
        assert.equal(grouped.getExpressionString(), '(abs(h(0)))+(max((g(9))+(0)))');
        assert.equal(grouped.calculate(), 18);
        assert.equal(x.getArgumentValue(), 9);
    });

    test('public surface hides internals and interpreter remains silent', () => {
        assert.equal(mx.MathJSONUtils, undefined);
        assert.equal(keep(math.ImportOptions.defaults()).withInexactIntegerConversion, undefined);
        assert.equal(mx.ImportOptions, undefined);
        assert.equal(mx.Result, undefined);
        assert.equal(mx.Diagnostic, undefined);
        for (const Type of [math.ImportOptions, math.Result, math.Diagnostic])
            assert.throws(() => new Type(), TypeError);
        assert.throws(() => math.importExpression(42), TypeError);
        assert.deepEqual(output, []);
    });
    console.log(JSON.stringify({status:'PASS',executed,passed:executed,failed:0,skipped:0,node:process.version}));
} finally {
    for (const handle of handles.reverse()) if (!handle.isDeleted()) handle.delete();
}
