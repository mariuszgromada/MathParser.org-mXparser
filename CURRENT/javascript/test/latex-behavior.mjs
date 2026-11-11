/*
 * @(#)latex-behavior.mjs        6.2.0    2026-11-11
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

// Shared Node/browser conformance. Expected strings originate in canonical Java
// ApiTest 0390–0419; the fixture records its source hash. No TeX parser in tests.
import reference from './latex-reference.json' with {type: 'json'};

export function runLaTeXBehavior(mx) {
    let checks = 0, exports = 0, aliases = 0, shapes = 0;
    const owned = [], keep = value => { owned.push(value); return value; };
    const equal = (a, b, context = '') => {
        checks++;
        if (!Object.is(a, b)) throw new Error(`${context}: expected ${JSON.stringify(b)}, received ${JSON.stringify(a)}`);
    };
    const throws = (operation, pattern) => {
        checks++;
        try { operation(); } catch (error) {
            if (!pattern.test(String(error))) throw error;
            return error;
        }
        throw new Error('Expected failure: ' + pattern);
    };
    const release = () => { for (const value of owned.splice(0).reverse()) if (!value.isDeleted()) value.delete(); };
    const children = node => node.getChildren().map(keep);
    const kind = value => Object.keys(mx.LaTeXParser.Kind).find(name => mx.LaTeXParser.Kind[name] === value);
    function shape(node) {
        const nested = children(node), name = kind(node.getKind());
        return nested.length ? name + '(' + nested.map(shape).join(',') + ')' : name + ':' + node.getText();
    }
    function exportText(source) {
        const e = keep(new mx.Expression(source));
        if (source === 'a(b+c)') e.addArguments(keep(new mx.Argument('a')));
        if (source.includes('[my_unit]')) e.addConstants(keep(new mx.Constant('[my_unit]', 1)));
        try { return e.getExpressionAsLaTeX(); }
        catch (error) { throw new Error('Export ' + source + ': ' + error.message, {cause: error}); }
    }
    mx.mXparser.setDefaultOptions();
    try {
        equal('LaTeXExporter' in mx, false);
        equal('ReadOnlyList' in mx, false);
        equal('LaTeXNode' in mx, false);
        equal('Node' in mx, false);
        equal('Kind' in mx, false);
        equal('new_Node' in mx.LaTeXParser, false);
        equal(Object.isFrozen(mx.LaTeXParser.Kind), true);
        equal(Object.keys(mx.LaTeXParser.Kind).length, 13);
        equal(Object.keys(mx.LaTeXParser.SymbolStyle).length, 3);
        throws(() => new mx.LaTeXParser.Node(), /no public constructor/);
        throws(() => new mx.LaTeXParser(), /not a constructor/);
        for (const row of reference.exports) {
            equal(exportText(row.input), row.expected, 'Java API ' + row.test + ' ' + row.input);
            exports++;
            release();
        }
        for (const row of reference.shapes) {
            equal(shape(keep(mx.LaTeXParser.parse(row.input))), row.expected, 'Java API ' + row.test + ' ' + row.input);
            shapes++;
            release();
        }
        for (const [source, text, style] of reference.styles) {
            const node = keep(mx.LaTeXParser.parse(source));
            equal(node.getKind(), mx.LaTeXParser.Kind.SYMBOL);
            equal(node.getText(), text);
            equal(node.getSymbolStyle(), mx.LaTeXParser.SymbolStyle[style]);
            equal(node.getSourceText(), source);
            release();
        }
        // Every declared alias shares its native type/ID rule. Token predicates
        // supply fixity; no operator/name interpretation is recreated in JS.
        const keys = new Set(), canonical = new Map();
        const words = mx.mXparser.getKeyWords();
        for (const kw of words) {
            keep(kw);
            const t = kw.wordTypeId, id = kw.wordId, w = kw.wordString;
            keys.add(t + ':' + id);
            let source;
            if (t === mx.ParserSymbol.NUMBER_TYPE_ID) source = '2.10';
            else if (t === mx.ParserSymbol.TYPE_ID) source = id === mx.ParserSymbol.BLANK_ID ? ' ' : id === mx.ParserSymbol.COMMA_ID ? 'f(a' + w + 'b)' : '(a)';
            else if (t === mx.Function1Arg.TYPE_ID) source = w + '(x)';
            else if (t === mx.Function2Arg.TYPE_ID) source = w + '(a,b)';
            else if (t === mx.Function3Arg.TYPE_ID) source = w + '(a,b,c)';
            else if (t === mx.FunctionVariadic.TYPE_ID) source = w + (id === mx.FunctionVariadic.IFF_ID ? '(a,b,c,x)' : '(a,b,c)');
            else if (t === mx.CalculusOperator.TYPE_ID) {
                const c = mx.CalculusOperator;
                source = w + '(' + ([c.INT_ID, c.SOLVE_ID].includes(id) ? 'f(x),x,a,b'
                    : id === c.DERN_ID ? 'f(x),n,x'
                    : [c.DER_ID, c.DER_LEFT_ID, c.DER_RIGHT_ID, c.FORW_DIFF_ID, c.BACKW_DIFF_ID].includes(id) ? 'f(x),x' : 'i,a,b,f(i)') + ')';
            } else {
                const token = keep(new mx.Token()); token.tokenTypeId = t; token.tokenId = id;
                source = token.isUnaryLeftOperator() ? w + 'a' : token.isUnaryRightOperator() ? 'a' + w : token.isBinaryOperator() ? 'a' + w + 'b' : w;
            }
            const text = exportText(source), key = t + ':' + id;
            if (!canonical.has(key)) canonical.set(key, text);
            equal(text, canonical.get(key), 'alias ' + source);
            aliases++;
            release();
        }
        equal(aliases, 527); equal(keys.size, 412);
        const udf = keep(new mx.Function('f(...) = par(1)+[npar]'));
        // Ordinary expressions intentionally lack the two UDF-only keywords;
        // exporting user functions preserves calls instead of expanding bodies.
        equal(exportText('f(x)'), 'f(x)');
        equal(udf.calculate(2, 3), 4);
        release();
        const source = '  ( \\mathit{x\\_1} + .250 )  ';
        const root = keep(mx.LaTeXParser.parse(source)), first = children(root)[0];
        equal(root.getStartOffset(), 2); equal(root.getEndOffset(), source.length - 2);
        equal(root.getSourceText(), source.slice(2, -2));
        equal(first.getSourceText(), '\\mathit{x\\_1}');
        const array = root.getChildren(); array.forEach(keep);
        equal(Object.isFrozen(array), true);
        throws(() => array.push(root), /extensible|read only|readonly/);
        const alias = keep(root.cloneHandle());
        equal(alias === root, false); equal(alias.isAliasOf(root), true);
        root.delete(); equal(first.getText(), 'x_1'); equal(alias.getSourceText(), source.slice(2, -2));
        throws(() => root.getText(), /deleted/);
        release();
        const invalid = [null, '', 'a+', '\\frac{x}', '\\sin x', '\\input{secret}', '\\write18{cmd}',
            'f(x)', '\\frac12', '\\alpha', '$x$', 'x^-1', 'x^{2}^{3}', 'ł', '中', '\\mathit{x٣}',
            '\ud800', '\udfff', '\ud835\udc65', '('.repeat(300) + 'x' + ')'.repeat(300), ' '.repeat(1000001)];
        for (const text of invalid) throws(() => mx.LaTeXParser.parse(text), /offset/);
        equal(throws(() => mx.LaTeXParser.parse('a+🧮'), /offset 2/).name, 'std::invalid_argument');
        // Non-BMP text before a later failure tests the native UTF-16 conversion:
        // supplementary characters are rejected at their first UTF-16 unit.
        throws(() => mx.LaTeXParser.parse('α+🧮+x'), /offset 2/);
        throws(() => exportText('a*'), /token 1/);
        throws(() => mx.LaTeXParser.parse(1), /No matching overload/);
        const e = keep(new mx.Expression('a^2+1', keep(new mx.Argument('a', 3))));
        equal(e.calculate(), 10); const latex = e.getExpressionAsLaTeX();
        equal(latex, 'a^{2}+1'); equal(e.getExpressionAsLaTeX(), latex); equal(e.calculate(), 10);
        // A recoverable native parse error does not poison this module.
        equal(shape(keep(mx.LaTeXParser.parse('1+2'))), 'ADD(NUMBER:1,NUMBER:2)');
        return {status: 'PASS', checks, exports, shapes, styles: reference.styles.length, aliases, keys: keys.size};
    } finally { release(); mx.mXparser.setDefaultOptions(); }
}
