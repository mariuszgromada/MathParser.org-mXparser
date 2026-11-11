/*
 * @(#)tutorial.mjs        6.2.0    2026-11-04
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

// Generated from the complete JavaScript fences in TUTORIAL.md by scripts/tutorial.py.

// JS-setup-001 | C2-chapter-001
import { initMxParser } from '@mathparser.org/mxparser';

const mx = await initMxParser();

// JS-ownership-001 | C2-chapter-001
{
  const x = new mx.Argument('x', 2);
  const y = new mx.Argument('y=x^2', x);
  const e = new mx.Expression('x+y', x, y);
  const alias = e.getArgument('x');
  try {
    x.delete();
    y.delete();
    console.log(e.getExpressionString(), e.calculate());
    alias.setArgumentValue(3);
    console.log(e.getExpressionString(), e.calculate());
    alias.setArgumentValue(4);
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    for (const object of [alias, e, y, x]) {
      if (!object.isDeleted()) object.delete();
    }
  }
}

// JS-ownership-002 | C2-chapter-001
{
  const f = new mx.Function('first(t)=t+1');
  const g = new mx.Function('second(t)=t+2');
  try {
    f.addFunctions(g);
    g.addFunctions(f);
    console.log('first(2)', f.calculate(2));
    console.log('second(2)', g.calculate(2));
  } finally {
    f.removeFunctions(g);
    g.removeFunctions(f);
    g.delete();
    f.delete();
  }
}

// JS-language-001 | C2-chapter-002
{
  const english = mx.StringResources.languageEnglish();
  try {
    mx.StringModel.setStringResources(english);
  } finally {
    english.delete();
  }
}

// C2-example-001 | C2-chapter-003
mx.mXparser.consolePrintHelp();

// C2-example-002 | C2-chapter-003
mx.mXparser.consolePrintHelp('sine');

// C2-example-003 | C2-chapter-003
mx.mXparser.consolePrintHelp('desc=inver');

// C2-example-004 | C2-chapter-004
{
  const e = new mx.Expression('2+1');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-005 | C2-chapter-004
{
  const e = new mx.Expression('2+1');
  try {
    e.setExpressionString('2-1');
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); }
}

// C2-example-006 | C2-chapter-004
{
  const e = new mx.Expression('2-(32-4)/(23+4/5)-(2-4)*(4+6-98.2)+4');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-007 | C2-chapter-004
{
  const e = new mx.Expression('2^3+2^(-3)+2^3^(-4)');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-008 | C2-chapter-004
{
  const expressions = [
    new mx.Expression('1.2e2 + 1.2e+2 + 1.2e-2'),
    new mx.Expression('1.2E2 + 1.2E+2 + 1.2E-2')
  ];
  try { for (const e of expressions) console.log(e.getExpressionString(), e.calculate()); }
  finally { for (const e of expressions) e.delete(); }
}

// C2-example-009 | C2-chapter-004
{
  const expressions = [new mx.Expression('2%'), new mx.Expression('2% * 100'), new mx.Expression('pi% * 100')];
  try { for (const e of expressions) console.log(e.getExpressionString(), e.calculate()); }
  finally { for (const e of expressions) e.delete(); }
}

// C2-example-010 | C2-chapter-004
{
  const expressions = [new mx.Expression('00123'), new mx.Expression('-00123'), new mx.Expression('-00000123.123e-10')];
  try { for (const e of expressions) console.log(e.getExpressionString(), e.calculate()); }
  finally { for (const e of expressions) e.delete(); }
}

// C2-example-011 | C2-chapter-004
{
  const e = new mx.Expression('1_2 + 2_1_2');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-012 | C2-chapter-004
{
  const expressions = [new mx.Expression('6:3'), new mx.Expression('7\\3')];
  try { for (const e of expressions) console.log(e.getExpressionString(), e.calculate()); }
  finally { for (const e of expressions) e.delete(); }
}

// C2-example-013 | C2-chapter-005
{
  const e = new mx.Expression('2(3+4)3');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); }
}

// C2-example-014 | C2-chapter-005
{
  const e = new mx.Expression('2pi+3e');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); }
}

// C2-example-015 | C2-chapter-005
{
  const e = new mx.Expression('2pi(3+4)2e');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); }
}

// C2-example-016 | C2-chapter-005
{
  const e = new mx.Expression('2pi(3+4)2sin(3)e');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); }
}

// C2-example-017 | C2-chapter-005
{
  const e = new mx.Expression('2pi2');
  try {
    const valid = e.checkSyntax();
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(valid);
    console.log(e.getErrorMessage());
  } finally { e.delete(); }
}

// C2-example-018 | C2-chapter-005
{
  const e = new mx.Expression('2pi(3+4)2e');
  try {
    e.consolePrintCopyOfInitialTokens();
    const tokens = e.getCopyOfInitialTokens();
    try { console.log(tokens.map(token => token?.tokenStr)); }
    finally { for (const token of tokens) token?.delete(); }
  } finally { e.delete(); }
}

// C2-example-019 | C2-chapter-005
{
  const e = new mx.Expression('2pi+3e');
  try {
    e.disableImpliedMultiplicationMode();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    e.enableImpliedMultiplicationMode();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
  } finally { e.delete(); }
}

// C2-example-020 | C2-chapter-006
{
  const e = new mx.Expression("2=3");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-021 | C2-chapter-006
{
  const e = new mx.Expression("2<3");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-022 | C2-chapter-006
{
  const e = new mx.Expression("(2=3) | (2<3)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-023 | C2-chapter-006
{
  const e = new mx.Expression("(2=3) & (2<3)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-024 | C2-chapter-007
{
  const e = new mx.Expression("sin(2)-cos(3)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-025 | C2-chapter-007
{
  const e = new mx.Expression("min(3,4) + max(-2,-1)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-026 | C2-chapter-007
{
  const e = new mx.Expression("C(10,5)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-027 | C2-chapter-007
{
  const e = new mx.Expression("if(2<3, 1, 0)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-028 | C2-chapter-007
{
  const e = new mx.Expression("if(3<2, 1, if(1=1, 5, 0) )");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-029 | C2-chapter-007
{
  const e = new mx.Expression("gcd(4,2,8,20)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-030 | C2-chapter-007
{
  const e = new mx.Expression("iff( 1>2, 1, 3<2, 2, 5>3, 3, 7 < 3, 4 )");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-031 | C2-chapter-007
{
  const e = new mx.Expression("iff( 1>2, 1; 3<2, 2; 5>3, 3; 7 < 3, 4 )");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-032 | C2-chapter-008
{
  const x = new mx.Argument('x = 1');
  const y = new mx.Argument('y = 2*pi');
  const z = new mx.Argument('z', 3);
  const n = new mx.Argument('n', 4);
  const e = new mx.Expression('n*( sin(x+y)-cos(y/z) )', x, y, z, n);
  try {
    console.log(e.getExpressionString(), e.calculate());
    x.setArgumentValue(0);
    z.setArgumentValue(4);
    console.log(e.getExpressionString(), e.calculate());
    x.setArgumentValue(5);
    console.log(x.getArgumentName(), x.getArgumentValue());
  } finally {
    e.delete(); n.delete(); z.delete(); y.delete(); x.delete();
  }
}

// C2-example-033 | C2-chapter-008
{
  const x = new mx.Argument('x');
  const y = new mx.Argument('y = x^2', x);
  let e;
  try {
    x.setArgumentValue(1);
    console.log(y.getArgumentName(), y.getArgumentValue());
    x.setArgumentValue(2);
    console.log(y.getArgumentName(), y.getArgumentValue());
    x.setArgumentValue(3);
    console.log(y.getArgumentName(), y.getArgumentValue());
    e = new mx.Expression('x*y', x, y);
    console.log(e.getExpressionString(), e.calculate());
  } finally { e?.delete(); y.delete(); x.delete(); }
}

// C2-example-034 | C2-chapter-008
{
  class PiMultArgExt extends mx.ArgumentExtension {
    multiple = 0;
    getArgumentValue() {
      this.multiple++;
      return Math.PI * this.multiple;
    }
    clone() { return new PiMultArgExt(); }
  }
  const extension = new PiMultArgExt();
  const pim = new mx.Argument('pim', extension);
  const e = new mx.Expression('pim', pim);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); pim.delete(); }
}

// C2-example-035 | C2-chapter-008
{
  const x = new mx.Argument('x = 2');
  const e = new mx.Expression('2x+3y+4*a', x);
  try {
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); x.delete(); }
}

// C2-example-036 | C2-chapter-008
{
  const e = new mx.Expression('3*CasterAttack');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); }
}

// C2-example-037 | C2-chapter-008
{
  const e = new mx.Expression('3*CasterAttack');
  try {
    e.disableImpliedMultiplicationMode();
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); }
}

// C2-example-038 | C2-chapter-008
{
  const previous = mx.mXparser.checkIfImpliedMultiplicationMode();
  mx.mXparser.disableImpliedMultiplicationMode();
  let e;
  try {
    e = new mx.Expression('3*CasterAttack');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedArguments());
  } finally {
    e?.delete();
    if (previous) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}

// C2-example-039 | C2-chapter-008
{
  mx.mXparser.removeBuiltinTokens('e');
  let e;
  try {
    e = new mx.Expression('3*CasterAttack');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e?.delete(); mx.mXparser.unremoveBuiltinTokens('e'); }
}

// C2-example-040 | C2-chapter-008
{
  mx.mXparser.modifyBuiltinToken('e', 'ee');
  let e;
  try {
    e = new mx.Expression('3*CasterAttack');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e?.delete(); mx.mXparser.unmodifyBuiltinTokens('e'); }
}

// C2-example-041 | C2-chapter-009
{
  const f = new mx.Function('f', 'x^2', 'x');
  const e = new mx.Expression('f(2)', f);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('f(5)', f.calculate(5));
  } finally { e.delete(); f.delete(); }
}

// C2-example-042 | C2-chapter-009
{
  const f = new mx.Function('f(x) = x^2');
  const e = new mx.Expression('f(2)', f);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('f(5)', f.calculate(5));
  } finally { e.delete(); f.delete(); }
}

// C2-example-043 | C2-chapter-009
{
  const f = new mx.Function('f(a, b, c) = a+b+c');
  const e = new mx.Expression('f(1,2,3)', f);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('f(1,2,3)', f.calculate(1, 2, 3));
  } finally { e.delete(); f.delete(); }
}

// C2-example-044 | C2-chapter-009
{
  const g = new mx.Function('g(x) = 2*x');
  const f = new mx.Function('f(x) = g(x)^2', g);
  try {
    console.log('g(1)', g.calculate(1));
    console.log('f(1)', f.calculate(1));
  } finally { f.delete(); g.delete(); }
}

// C2-example-045 | C2-chapter-009
{
  class Addition extends mx.FunctionExtension {
    constructor(x = NaN, y = NaN) {
      super();
      this.x = x;
      this.y = y;
    }
    getParametersNumber() { return 2; }
    setParameterValue(index, value) {
      if (index === 0) this.x = value;
      if (index === 1) this.y = value;
    }
    getParameterName(index) {
      if (index === 0) return 'x';
      if (index === 1) return 'y';
      return '';
    }
    calculate() { return this.x + this.y; }
    clone() { return new Addition(this.x, this.y); }
  }
  const addition = new Addition();
  const f = new mx.Function('f', addition);
  let e;
  try {
    console.log('f(1,2)', f.calculate(1, 2));
    e = new mx.Expression('f(2,3)', f);
    console.log(e.getExpressionString(), e.calculate());
  } finally { e?.delete(); f.delete(); }
}

// C2-example-046 | C2-chapter-009
{
  const e = new mx.Expression('2sin(pi)+2f(1)g(3,4)+4*x');
  try {
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); }
}

// C2-example-047 | C2-chapter-009
{
  const e = new mx.Expression('3*CasterAttack(4,5)');
  try {
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); }
}

// C2-example-048 | C2-chapter-009
{
  const e = new mx.Expression('3*CasterAttack(4,5)');
  try {
    e.disableImpliedMultiplicationMode();
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e.delete(); }
}

// C2-example-049 | C2-chapter-009
{
  const previous = mx.mXparser.checkIfImpliedMultiplicationMode();
  mx.mXparser.disableImpliedMultiplicationMode();
  let e;
  try {
    e = new mx.Expression('3*CasterAttack(4,5)');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally {
    e?.delete();
    if (previous) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}

// C2-example-050 | C2-chapter-009
{
  mx.mXparser.removeBuiltinTokens('e');
  let e;
  try {
    e = new mx.Expression('3*CasterAttack(4,5)');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e?.delete(); mx.mXparser.unremoveBuiltinTokens('e'); }
}

// C2-example-051 | C2-chapter-009
{
  mx.mXparser.modifyBuiltinToken('e', 'ee');
  let e;
  try {
    e = new mx.Expression('3*CasterAttack(4,5)');
    console.log(e.getExpressionString(), e.getCanonicalExpressionString());
    console.log(e.getMissingUserDefinedFunctions());
    console.log(e.getMissingUserDefinedArguments());
  } finally { e?.delete(); mx.mXparser.unmodifyBuiltinTokens('e'); }
}

// C2-example-052 | C2-chapter-010
{
  const started = performance.now();
  let lastResult = NaN;
  for (let i = 0; i < 100000; i++) {
    const x = new mx.Argument('x');
    const e = new mx.Expression('2sin(x)', x);
    try {
      x.setArgumentValue(i);
      lastResult = e.calculate();
    } finally { e.delete(); x.delete(); }
  }
  const finished = performance.now();
  console.log('Computing time =', Number(finished - started) / 1000, 's');
  console.log('2sin(x)', lastResult);
}

// C2-example-053 | C2-chapter-010
{
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const previousAlmostInt = mx.mXparser.checkIfAlmostIntRounding();
  mx.mXparser.disableUlpRounding();
  mx.mXparser.disableCanonicalRounding();
  mx.mXparser.disableAlmostIntRounding();
  let x, e;
  try {
    const started = performance.now();
    x = new mx.Argument('x');
    e = new mx.Expression('2sin(x)', x);
    let lastResult = NaN;
    for (let i = 0; i < 100000; i++) {
      x.setArgumentValue(i);
      lastResult = e.calculate();
    }
    const finished = performance.now();
    console.log('Computing time =', Number(finished - started) / 1000, 's');
    console.log(e.getExpressionString(), lastResult);
  } finally {
    e?.delete(); x?.delete();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
    if (previousAlmostInt) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
  }
}

// C2-example-054 | C2-chapter-011
{
  for (const text of ['sum(i, 1, 10, 2*i)', 'sum(i, 1, 10, i, 0.5)']) {
    const e = new mx.Expression(text);
    try { console.log(e.getExpressionString(), e.calculate()); }
    finally { e.delete(); }
  }
}

// C2-example-055 | C2-chapter-011
{
  for (const text of ['prod(i, 1, 5, i)', 'prod(i, 1, 5, 2*i, 0.5)']) {
    const e = new mx.Expression(text);
    try { console.log(e.getExpressionString(), e.calculate()); }
    finally { e.delete(); }
  }
}

// C2-example-056 | C2-chapter-011
{
  const x = new mx.Argument('x = 2*pi');
  const n = new mx.Argument('n = 3');
  const e = new mx.Expression('sin(x) - sum(k, 0, n, (-1)^k*(x^(2*k+1))/(2*k+1)! )', x, n);
  try {
    console.log(e.getExpressionString(), e.calculate());
    n.setArgumentValue(5);
    console.log(e.getExpressionString(), e.calculate());
    n.setArgumentValue(10);
    console.log(e.getExpressionString(), e.calculate());
    n.setArgumentValue(20);
    console.log(e.getExpressionString(), e.calculate());
    x.setArgumentValue(2);
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); n.delete(); x.delete(); }
}

// C2-example-057 | C2-chapter-011
{
  const d = new mx.Argument('d', 0.1);
  const e = new mx.Expression('2 * sum(x, -1, 1, d*sqrt(1-x^2), d)', d);
  try {
    console.log(e.getExpressionString(), 'd =', d.getArgumentValue(), e.calculate());
    d.setArgumentValue(0.01);
    console.log(e.getExpressionString(), 'd =', d.getArgumentValue(), e.calculate());
  } finally { e.delete(); d.delete(); }
}

// C2-example-058 | C2-chapter-012
{
  const e = new mx.Expression('cos(1) - der(sin(x), x, 1)');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-059 | C2-chapter-012
{
  const x = new mx.Argument('x = 1');
  const e = new mx.Expression('cos(x) - der(sin(x), x)', x);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); x.delete(); }
}

// C2-example-060 | C2-chapter-012
{
  const left = new mx.Expression('der-(abs(x), x, 0)');
  const right = new mx.Expression('der+(abs(x), x, 0)');
  try {
    console.log(left.getExpressionString(), left.calculate());
    console.log(right.getExpressionString(), right.calculate());
  } finally { right.delete(); left.delete(); }
}

// C2-example-061 | C2-chapter-012
{
  const x = new mx.Argument('x = 0');
  const left = new mx.Expression('der-(abs(x), x)', x);
  const right = new mx.Expression('der+(abs(x), x)', x);
  try {
    console.log(left.getExpressionString(), left.calculate());
    console.log(right.getExpressionString(), right.calculate());
  } finally { right.delete(); left.delete(); x.delete(); }
}

// C2-example-062 | C2-chapter-012
{
  for (const text of [
    'cos(1) - der( sum(k,0,10,(-1)^k*(x^(2*k+1))/(2*k+1)!), x, 1)',
    'cos(2) - der( sum(k,0,10,(-1)^k*(x^(2*k+1))/(2*k+1)!), x, 2)',
    'cos(3) - der( sum(k,0,10,(-1)^k*(x^(2*k+1))/(2*k+1)!), x, 3)',
  ]) {
    const e = new mx.Expression(text);
    try { console.log(e.getExpressionString(), e.calculate()); }
    finally { e.delete(); }
  }
}

// C2-example-063 | C2-chapter-012
{
  const x = new mx.Argument('x = 1');
  const e = new mx.Expression('cos(x) - der( sum(k,0,10,(-1)^k*(x^(2*k+1))/(2*k+1)!), x)', x);
  try {
    console.log(e.getExpressionString(), e.calculate());
    x.setArgumentValue(2);
    console.log(e.getExpressionString(), e.calculate());
    x.setArgumentValue(3);
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}

// C2-example-064 | C2-chapter-012
{
  const e = new mx.Expression('2 * int( sqrt(1-x^2), x, -1, 1 )');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-065 | C2-chapter-013
{
  const e = new mx.Expression('solve( 2*x - 4, x, 0, 10 )');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-066 | C2-chapter-013
{
  const e = new mx.Expression('solve( cos(x), x, 0, pi )');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-067 | C2-chapter-013
{
  const previous = mx.ProbabilityDistributions.randomGenerator;
  const random = new mx.Random(1729);
  const e = new mx.Expression('solve( cos(x), x, -pi, pi )');
  try {
    mx.mXparser.setRandomGenerator(random);
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previous;
    e.delete(); random.delete(); previous?.delete();
  }
}

// C2-example-068 | C2-chapter-013
{
  const y = new mx.Argument('y = 4');
  const e = new mx.Expression('solve( x-y, x, 0, 10 )', y);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); y.delete(); }
}

// C2-example-069 | C2-chapter-013
{
  const x = new mx.Argument('x');
  const e = new mx.Expression('solve( der( sin(x), x ), x, 0, pi )', x);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); x.delete(); }
}

// C2-example-070 | C2-chapter-014
{
  const first = new mx.Expression('if(2<3, 1, 2)');
  const second = new mx.Expression('if(4<3, 1, 2)');
  try {
    console.log(first.getExpressionString(), first.calculate());
    console.log(second.getExpressionString(), second.calculate());
  } finally { second.delete(); first.delete(); }
}

// C2-example-071 | C2-chapter-014
{
  const x = new mx.Argument('x = 2');
  const e = new mx.Expression('if(x<3, x+2, x-2)', x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(4);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}

// C2-example-072 | C2-chapter-014
{
  const f = new mx.Function('f(x) = if(x<3, x+2, x-2)');
  const first = new mx.Expression('f(2)', f);
  const second = new mx.Expression('f(4)', f);
  try {
    console.log(first.getExpressionString(), first.calculate());
    console.log(second.getExpressionString(), second.calculate());
  } finally { second.delete(); first.delete(); f.delete(); }
}

// C2-example-073 | C2-chapter-014
{
  const x = new mx.Argument('x = 0.5');
  const e = new mx.Expression('iff(x<1, 1; x<2, 2; x<3, 3)', x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(1.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(2.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(3.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}

// C2-example-074 | C2-chapter-014
{
  const x = new mx.Argument('x = 0.5');
  const e = new mx.Expression('iff(x<1, 1; x<2, 2; x<3, 3; x<4, 4; x<5, 5)', x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(1.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(2.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(3.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(4.5);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}

// C2-example-075 | C2-chapter-015
{
  const e = new mx.Expression('pi+e');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-076 | C2-chapter-015
{
  const e = new mx.Expression('( [G.] * [Moon-M] / [Moon-R]^2 ) * ( [m] / [s]^2 )');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-077 | C2-chapter-015
{
  const e = new mx.Expression();
  try { console.log(e.getHelp('constant')); }
  finally { e.delete(); }
}

// C2-example-078 | C2-chapter-016
{
  const e = new mx.Expression('( 95*[cm] + 200*[m] + 1*[km] ) / [km]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-079 | C2-chapter-016
{
  const e = new mx.Expression('( 60*[min] + 2*[h] ) / [h]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-080 | C2-chapter-016
{
  const e = new mx.Expression('8*[Mb] / [MB]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-081 | C2-chapter-016
{
  const e = new mx.Expression('2000*[l] / [m3]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-082 | C2-chapter-016
{
  const e = new mx.Expression('4[ft]/[inch]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-083 | C2-chapter-016
{
  const e = new mx.Expression('100[m] * 2[km] / [km2]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-084 | C2-chapter-016
mx.mXparser.consolePrintHelp('type=unit');

// C2-example-085 | C2-chapter-017
{
  const e = new mx.Expression('10*[M] / [k]');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-086 | C2-chapter-017
mx.mXparser.consolePrintHelp('metric prefix');

// C2-example-087 | C2-chapter-018
{
  const e1 = new mx.Expression("@~ 2");
  const e2 = new mx.Expression("@~ b.10");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}

// C2-example-088 | C2-chapter-018
{
  const e1 = new mx.Expression("13 @& 10");
  const e2 = new mx.Expression("b.1101 @& b.1010");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}

// C2-example-089 | C2-chapter-018
{
  const e1 = new mx.Expression("13 @^ 10");
  const e2 = new mx.Expression("b.1101 @^ b.1010");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}

// C2-example-090 | C2-chapter-018
{
  const e1 = new mx.Expression("13 @| 10");
  const e2 = new mx.Expression("b.1101 @| b.1010");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}

// C2-example-091 | C2-chapter-018
{
  const e1 = new mx.Expression("13 @<< 2");
  const e2 = new mx.Expression("b.1101 @<< b.10");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}

// C2-example-092 | C2-chapter-018
{
  const e1 = new mx.Expression("13 @>> 2");
  const e2 = new mx.Expression("b.1101 @>> b.10");
  try {
    const v1 = e1.calculate();
    const v2 = e2.calculate();
    console.log(e1.getExpressionString(), v1);
    console.log(e2.getExpressionString(), v2);
    console.log(mx.mXparser.convDecimal2OthBase(v2, 2));
  } finally { e2.delete(); e1.delete(); }
}

// C2-example-093 | C2-chapter-018
console.log(mx.mXparser.getHelpAsHtmlTable('bitwise'));

// C2-example-094 | C2-chapter-019
{
  const f = new mx.Function("f(...) = [npar]");
  const e1 = new mx.Expression("f(5)", f);
  const e2 = new mx.Expression("f(5,2)", f);
  const e3 = new mx.Expression("f(5,2,4)", f);
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
  } finally { e3.delete(); e2.delete(); e1.delete(); f.delete(); }
}

// C2-example-095 | C2-chapter-019
{
  const f = new mx.Function("f(...) = par(1) + par([npar])");
  const e1 = new mx.Expression("f(5)", f);
  const e2 = new mx.Expression("f(5,2)", f);
  const e3 = new mx.Expression("f(5,2,4)", f);
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
  } finally { e3.delete(); e2.delete(); e1.delete(); f.delete(); }
}

// C2-example-096 | C2-chapter-019
{
  const f = new mx.Function("f(...) = par(par(1))");
  const e1 = new mx.Expression("f(5)", f);
  const e2 = new mx.Expression("f(1,2)", f);
  const e3 = new mx.Expression("f(3,2,4)", f);
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
  } finally { e3.delete(); e2.delete(); e1.delete(); f.delete(); }
}

// C2-example-097 | C2-chapter-019
{
  const f = new mx.Function("f(...) = sum(i, 1, [npar], par(i)^2)");
  const e1 = new mx.Expression("f(5)", f);
  const e2 = new mx.Expression("f(1,2)", f);
  const e3 = new mx.Expression("f(3,2,4)", f);
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
  } finally { e3.delete(); e2.delete(); e1.delete(); f.delete(); }
}

// C2-example-098 | C2-chapter-019
{
  class SumVar extends mx.FunctionExtensionVariadic {
    calculate(parameters) {
      if (parameters === null || parameters.size() === 0) return NaN;
      let result = 0;
      for (const value of parameters) result += value;
      return result;
    }
    clone() { return new SumVar(); }
  }
  const sumVar = new mx.Function('sumVar', new SumVar());
  const e1 = new mx.Expression('sumVar(1)', sumVar);
  const e2 = new mx.Expression('sumVar(1,2)', sumVar);
  const e3 = new mx.Expression('sumVar(1,2,3)', sumVar);
  let copied;
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
    copied = sumVar.cloneForThreadSafe();
    if (copied.calculate(1, 2, 3) !== 6) throw new Error('Extension clone failed');
  } finally {
    copied?.delete(); e3.delete(); e2.delete(); e1.delete(); sumVar.delete();
  }
}

// C2-example-099 | C2-chapter-020
{
  const a = new mx.Constant('a', 5);
  const b = new mx.Constant('b = 10');
  const e = new mx.Expression('a+b', a, b);
  try {
    console.log(a.getConstantName(), a.getConstantValue());
    console.log(b.getConstantName(), b.getConstantValue());
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); b.delete(); a.delete(); }
}

// C2-example-100 | C2-chapter-021
{
  const fib = new mx.RecursiveArgument('fib(n) = fib(n-1) + fib(n-2)');
  fib.addBaseCase(0, 0);
  fib.addBaseCase(1, 1);
  const e = new mx.Expression('fib(10)', fib);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('fib(11)', fib.getArgumentValue(11));
  } finally { e.delete(); fib.delete(); }
}

// C2-example-101 | C2-chapter-021
{
  const fib = new mx.RecursiveArgument('fib', 'fib(n-1) + fib(n-2)', 'n');
  fib.addBaseCase(0, 0);
  fib.addBaseCase(1, 1);
  const e = new mx.Expression('fib(10)', fib);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('fib(11)', fib.getArgumentValue(11));
  } finally { e.delete(); fib.delete(); }
}

// C2-example-102 | C2-chapter-022
{
  const fib = new mx.Function('fib(n) = if( n>1, fib(n-1)+fib(n-2), if(n>0, 1, 0) )');
  const e = new mx.Expression('fib(10)', fib);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('fib(11)', fib.calculate(11));
  } finally { e.delete(); fib.delete(); }
}

// C2-example-103 | C2-chapter-022
{
  const Cnk = new mx.Function('Cnk(n,k) = if( k>0, if( k<n, Cnk(n-1,k-1)+Cnk(n-1,k), 1), 1)');
  const e = new mx.Expression('Cnk(10,3) - C(10,3)', Cnk);
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log('Cnk(10,3)', Cnk.calculate(10, 3));
  } finally { e.delete(); Cnk.delete(); }
}

// C2-example-104 | C2-chapter-022
{
  const T = new mx.Function('T(n,x) = if(n>1, 2*x*T(n-1,x)-T(n-2,x), if(n>0, x, 1) )');
  const k = new mx.Argument('k = 5');
  const x = new mx.Argument('x = 2');
  const e = new mx.Expression('T(k,x) - ( (x + sqrt(x^2-1))^k + (x - sqrt(x^2-1))^k)/2', T, k, x);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); x.delete(); k.delete(); T.delete(); }
}

// C2-example-105 | C2-chapter-022
{
  const a = new mx.Constant('a = 0.0001');
  const s = new mx.Function('s(x) = if( abs(x) < a, x, 2*s(x/2)*c(x/2) )', a);
  const c = new mx.Function('c(x) = if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )', a);
  s.addDefinitions(c);
  c.addDefinitions(s);
  const e1 = new mx.Expression('sin(5)-s(5)', s);
  const e2 = new mx.Expression('cos(5)-c(5)', c);
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
  } finally {
    s.removeDefinitions(c);
    c.removeDefinitions(s);
    e2.delete(); e1.delete(); c.delete(); s.delete(); a.delete();
  }
}

// C2-example-106 | C2-chapter-023
const previousPrimesCache = mx.mXparser.primesCache;
{
  const e1 = new mx.Expression('ispr(5)');
  const e2 = new mx.Expression('ispr(9)');
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
  } finally { e2.delete(); e1.delete(); }
}

// C2-example-107 | C2-chapter-023
{
  const e = new mx.Expression('Pi(10000000)');
  try {
    console.log(e.getExpressionString(), e.calculate());
    const seconds = e.getComputingTime();
    if (!Number.isFinite(seconds) || seconds < 0) throw new Error('Invalid elapsed time');
    console.log('Time: ' + seconds + ' s.');
  } finally { e.delete(); }
}

// C2-example-108 | C2-chapter-023
{
  mx.mXparser.initPrimesCache(10000000);
  const cache = mx.mXparser.primesCache;
  const e = new mx.Expression('Pi(10000000)');
  try {
    if (cache === null || !cache.isInitSuccessful()) throw new Error('Primes cache initialization failed');
    console.log('Primes cache init time: ' + cache.getComputingTime() + ' s.');
    console.log(e.getExpressionString(), e.calculate());
    console.log('Time: ' + e.getComputingTime() + ' s.');
  } finally { e.delete(); cache?.delete(); }
}

// C2-example-109 | C2-chapter-023
{
  const e = new mx.Expression('Pi(10000000) / Li(10000000)');
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-110 | C2-chapter-023
{
  const x = new mx.Argument('x = 12345');
  const e = new mx.Expression('sgn(x) * prod(i, 1, nfact(x), factval(x, i)^factexp(x, i) )', x);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally {
    e.delete(); x.delete();
    mx.mXparser.primesCache = previousPrimesCache;
    previousPrimesCache?.delete();
  }
}

// C2-example-111 | C2-chapter-024
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e = new mx.Expression("rUni(1,2)");
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-112 | C2-chapter-024
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e = new mx.Expression("rUnid(1,10)");
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-113 | C2-chapter-024
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e = new mx.Expression("rNor(0,1)");
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-114 | C2-chapter-024
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e = new mx.Expression("rList(0,3,6,9,12)");
  try {
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-115 | C2-chapter-024
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e10 = new mx.Expression("avg(i, 1,   10, rNor(2,4) )");
  const e100 = new mx.Expression("avg(i, 1,  100, rNor(2,4) )");
  const e1000 = new mx.Expression("avg(i, 1, 1000, rNor(2,4) )");
  try {
    console.log(e10.getExpressionString(), e10.calculate());
    console.log(e100.getExpressionString(), e100.calculate());
    console.log(e1000.getExpressionString(), e1000.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e1000.delete();
    e100.delete();
    e10.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-116 | C2-chapter-024
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e10 = new mx.Expression("stdi(i, 1,   10, rNor(2,4) )");
  const e100 = new mx.Expression("stdi(i, 1,  100, rNor(2,4) )");
  const e1000 = new mx.Expression("stdi(i, 1, 1000, rNor(2,4) )");
  try {
    console.log(e10.getExpressionString(), e10.calculate());
    console.log(e100.getExpressionString(), e100.calculate());
    console.log(e1000.getExpressionString(), e1000.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e1000.delete();
    e100.delete();
    e10.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-117 | C2-chapter-024
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const e10 = new mx.Expression("vari(i, 1,   10, rNor(2,4) )");
  const e100 = new mx.Expression("vari(i, 1,  100, rNor(2,4) )");
  const e1000 = new mx.Expression("vari(i, 1, 1000, rNor(2,4) )");
  try {
    console.log(e10.getExpressionString(), e10.calculate());
    console.log(e100.getExpressionString(), e100.calculate());
    console.log(e1000.getExpressionString(), e1000.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e1000.delete();
    e100.delete();
    e10.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-118 | C2-chapter-025
{
  const e = new mx.Expression("int( x * pNor(x, 2, 4), x, -18, 22)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-119 | C2-chapter-025
{
  const e = new mx.Expression("cNor(3,0,1) - cNor(-3,0,1)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-120 | C2-chapter-025
{
  const e = new mx.Expression("qNor(0.9, 170, 15)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-121 | C2-chapter-026
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e;
  try {
    e = new mx.Expression("[Int]");
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-122 | C2-chapter-026
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e2, e5;
  try {
    e2 = new mx.Expression("[Int2]");
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    e5 = new mx.Expression("[Int5]");
    console.log(e5.getExpressionString(), e5.calculate());
    console.log(e5.getExpressionString(), e5.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e5?.delete();
    e2?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-123 | C2-chapter-026
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e1, e2;
  try {
    e1 = new mx.Expression("[nat]");
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e1.getExpressionString(), e1.calculate());
    e2 = new mx.Expression("[Nat]");
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e2?.delete();
    e1?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-124 | C2-chapter-026
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e1, e2;
  try {
    e1 = new mx.Expression("[nat1]");
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e1.getExpressionString(), e1.calculate());
    e2 = new mx.Expression("[Nat3]");
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e2?.delete();
    e1?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-125 | C2-chapter-026
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e;
  try {
    e = new mx.Expression("[Uni]");
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-126 | C2-chapter-026
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let e;
  try {
    e = new mx.Expression("[Nor]");
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-127 | C2-chapter-027
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let X, e;
  try {
    X = new mx.Argument("X", "5*[Uni]+1");
    e = new mx.Expression("X", X);
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e?.delete();
    X?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-128 | C2-chapter-027
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  let rWalk, e;
  try {
    rWalk = new mx.Function("rWalk(n) = sum( i, 1, n, rList(-1,1) )");
    e = new mx.Expression("rWalk(20)", rWalk);
    console.log(e.getExpressionString(), e.calculate());
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e?.delete();
    rWalk?.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-129 | C2-chapter-028
{
  const e = new mx.Expression("√2");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-130 | C2-chapter-028
{
  const e = new mx.Expression("√√16");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-131 | C2-chapter-028
{
  const e = new mx.Expression("√√(8+8)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-132 | C2-chapter-028
{
  const e = new mx.Expression("∜16 + ∛27 + √16");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-133 | C2-chapter-028
{
  const e = new mx.Expression("∑(i, 1, 5, i^2)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-134 | C2-chapter-028
{
  const a = new mx.Argument("α = 2π");
  const b = new mx.Argument("β = π/2");
  const e = new mx.Expression("sin(α) + cos(β)", a, b);
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); b.delete(); a.delete(); }
}

// C2-example-135 | C2-chapter-028
mx.mXparser.consolePrintHelp('unicode');

// C2-example-136 | C2-chapter-028
{
  const enabled = mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode();
  try {
    mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
    mx.mXparser.consolePrintHelp('unicode');
  } finally {
    if (enabled) mx.mXparser.enableUnicodeBuiltinKeyWordsMode();
    else mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
  }
}

// C2-example-137 | C2-chapter-029
{
  const e = new mx.Expression("1_2");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-138 | C2-chapter-029
{
  const e = new mx.Expression("-6_5");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-139 | C2-chapter-029
{
  const e = new mx.Expression("2_3_5");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-140 | C2-chapter-029
{
  const e = new mx.Expression("2_12_5");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-141 | C2-chapter-029
{
  const e = new mx.Expression("1_2-6_5*2_3_5/2_12_5");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-142 | C2-chapter-029
{
  const e = new mx.Expression('1_2-6_5*2_3_5/2_12_5');
  try {
    const resultAsDouble = e.calculate();
    const resultAsFraction = mx.mXparser.toFractionString(resultAsDouble);
    console.log(e.getExpressionString(), resultAsFraction);
  } finally { e.delete(); }
}

// C2-example-143 | C2-chapter-030
{
  const e = new mx.Expression("b.10101 + B.10101");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-144 | C2-chapter-030
{
  const e = new mx.Expression("o.120 + O.120");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-145 | C2-chapter-030
{
  const e = new mx.Expression("h.2FE + H.2fE");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-146 | C2-chapter-030
{
  const e = new mx.Expression("b1.111 + B1.111");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-147 | C2-chapter-030
{
  const e = new mx.Expression("b1. + 2");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-148 | C2-chapter-030
{
  const e = new mx.Expression("b1.1 + b2.101 + b3.102 + b8.71 + b10.12340 + b11.12340A + b16.FF + b25.fgh + b36.xYZ");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-149 | C2-chapter-030
{
  const e = new mx.Expression("base(1, 1, 1, 1) + base(2, 1, 0, 1) + base(10, 1, 2, 3, 9) + base(16, 0, 1, 15) + base(50, 1, 2, 3, 49)");
  try { console.log(e.getExpressionString(), e.calculate()); }
  finally { e.delete(); }
}

// C2-example-150 | C2-chapter-031
{
  const x = new mx.Argument('x = 1');
  const e = new mx.Expression("if( isNaN( 2 / x ), 1, -1 )", x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(0);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}

// C2-example-151 | C2-chapter-031
{
  const x = new mx.Argument('x = 1');
  const e = new mx.Expression("if( x >= 1, 1, [NaN] )", x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(0);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}

// C2-example-152 | C2-chapter-031
{
  const x = new mx.Argument('x = 1');
  const e = new mx.Expression("coalesce( 2/0 , x , 3)", x);
  try {
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
    x.setArgumentValue(NaN);
    console.log('x =', x.getArgumentValue(), e.getExpressionString(), e.calculate());
  } finally { e.delete(); x.delete(); }
}

// C2-example-153 | C2-chapter-032
{
  const previouslyRadians = mx.mXparser.checkIfRadiansMode();
  const eRad = new mx.Expression("sin(π)");
  const eDeg = new mx.Expression("sin(180)");
  const showMode = expectedRadians => {
    const radians = mx.mXparser.checkIfRadiansMode();
    const degrees = mx.mXparser.checkIfDegreesMode();
    if (radians !== expectedRadians || degrees !== !expectedRadians) throw new Error('Unexpected angle mode');
    console.log(radians, degrees);
  };
  try {
    showMode(true);
    console.log(eRad.getExpressionString(), eRad.calculate());
    console.log(eDeg.getExpressionString(), eDeg.calculate());
    mx.mXparser.setDegreesMode();
    showMode(false);
    console.log(eRad.getExpressionString(), eRad.calculate());
    console.log(eDeg.getExpressionString(), eDeg.calculate());
    mx.mXparser.setRadiansMode();
    showMode(true);
    console.log(eRad.getExpressionString(), eRad.calculate());
    console.log(eDeg.getExpressionString(), eDeg.calculate());
  } finally {
    eDeg.delete();
    eRad.delete();
    if (previouslyRadians) mx.mXparser.setRadiansMode();
    else mx.mXparser.setDegreesMode();
  }
}

// C2-example-154 | C2-chapter-032
{
  const previouslyRadians = mx.mXparser.checkIfRadiansMode();
  const e = new mx.Expression("acos(-1)");
  const showMode = expectedRadians => {
    const radians = mx.mXparser.checkIfRadiansMode();
    const degrees = mx.mXparser.checkIfDegreesMode();
    if (radians !== expectedRadians || degrees !== !expectedRadians) throw new Error('Unexpected angle mode');
    console.log(radians, degrees);
  };
  try {
    showMode(true);
    console.log(e.getExpressionString(), e.calculate());
    mx.mXparser.setDegreesMode();
    showMode(false);
    console.log(e.getExpressionString(), e.calculate());
    mx.mXparser.setRadiansMode();
    showMode(true);
    console.log(e.getExpressionString(), e.calculate());
  } finally {
    e.delete();
    if (previouslyRadians) mx.mXparser.setRadiansMode();
    else mx.mXparser.setDegreesMode();
  }
}

// C2-example-155 | C2-chapter-032
{
  if (!mx.mXparser.checkIfRadiansMode() || mx.mXparser.checkIfDegreesMode()) throw new Error('This example requires radians mode');
  const e1 = new mx.Expression("sin(π)");
  const e2 = new mx.Expression("sin(π[rad])");
  const e3 = new mx.Expression("sin(180)");
  const e4 = new mx.Expression("sin(180[deg])");
  try {
    console.log(e1.getExpressionString(), e1.calculate());
    console.log(e2.getExpressionString(), e2.calculate());
    console.log(e3.getExpressionString(), e3.calculate());
    console.log(e4.getExpressionString(), e4.calculate());
  } finally { e4.delete(); e3.delete(); e2.delete(); e1.delete(); }
}

// C2-example-156 | C2-chapter-033
function printCalculationSteps(register, detailed = false) {
  console.log('register', {
    argumentNameStart: register.argumentNameStart,
    functionNameStart: register.functionNameStart,
    expressionStringStart: register.expressionStringStart,
    errorMessage: register.errorMessage,
    result: register.result,
    computingTime: register.computingTime
  });
  const records = register.calcStepRecords;
  try {
    for (const step of records) {
      try {
        const typeText = (Object.keys(mx.StepType).find(name => mx.StepType[name] === step.type) ?? 'Unknown');
        console.log('step', {
          numberGroup: step.numberGroup,
          numberGroupWithin: step.numberGroupWithin,
          type: step.type,
          typeText,
          description: step.description,
          content: step.content,
          firstInGroup: step.firstInGroup,
          lastInGroup: step.lastInGroup
        });
        if (detailed) {
          const indent = '   '.repeat(step.numberGroup - 1);
          console.log('trace', step.numberGroup + '.' + step.numberGroupWithin + ' ' + indent + typeText + ' ' + step.content);
        }
      } finally { step.delete(); }
    }
  } finally { records.delete(); }
}
{
  const e = new mx.Expression('2*(3+4)+5');
  const register = new mx.CalcStepsRegister();
  try {
    console.log(e.getExpressionString(), e.calculate(register));
    printCalculationSteps(register);
  } finally { register.delete(); e.delete(); }
}

// C2-example-157 | C2-chapter-033
{
  const x = new mx.Argument('x', '2*(3+4)+5');
  const register = new mx.CalcStepsRegister();
  try {
    console.log(x.getArgumentName(), x.getArgumentValue(register));
    printCalculationSteps(register);
  } finally { register.delete(); x.delete(); }
}

// C2-example-158 | C2-chapter-033
{
  const f = new mx.Function('f(x) = x*(2*(3+4)+5)');
  const register = new mx.CalcStepsRegister();
  try {
    f.setArgumentValue(0, 2);
    console.log(f.getFunctionName(), f.calculate(register));
    printCalculationSteps(register);
  } finally { register.delete(); f.delete(); }
}

// C2-example-159 | C2-chapter-033
{
  const previousGenerator = mx.ProbabilityDistributions.randomGenerator;
  const seeded = new mx.Random(1729);
  mx.mXparser.setRandomGenerator(seeded);
  const x = new mx.Argument('x', '2rList(2,1,3,5,4)');
  const y = new mx.Argument('y = 2*x', x);
  const z = new mx.Argument('z = 3*y/x', x, y);
  const f = new mx.Function('f(a,b) = a*b');
  const register = new mx.CalcStepsRegister();
  const e = new mx.Expression('f(x,y)+z+(x*y)/z', x, y, z, f);
  try {
    console.log(e.getExpressionString(), e.calculate(register));
    printCalculationSteps(register, true);
    register.consolePrint();
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previousGenerator;
    e.delete(); register.delete(); f.delete(); z.delete(); y.delete(); x.delete();
    seeded.delete(); previousGenerator?.delete();
  }
}

// C2-example-160 | C2-chapter-034
{
  const f = new mx.Function('f(x) = x^2');
  const e = new mx.Expression('f(2)+(2+3)^2', f);
  try {
    e.setDescription('Example - verbose mode');
    e.setVerboseMode();
    console.log(e.getExpressionString(), e.calculate());
  } finally { e.delete(); f.delete(); }
}

// C2-example-161 | C2-chapter-034
{
  const fib = new mx.Function('fib(n) = if( n>1, fib(n-1)+fib(n-2), if(n > 0, 1, 0) )');
  const e = new mx.Expression('fib(10) + 20/sin(x)', fib);
  let x;
  try {
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    x = new mx.Argument('x = 2');
    e.addDefinitions(x);
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
  } finally { e.delete(); x?.delete(); fib.delete(); }
}

// C2-example-162 | C2-chapter-034
{
  const e = new mx.Expression('fun(1,2)+3');
  try {
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    console.log(e.checkLexSyntax());
  } finally { e.delete(); }
}

// C2-example-163 | C2-chapter-034
{
  const e = new mx.Expression('sum(i, 1, 1000000, 1)');
  try {
    console.log(e.getExpressionString(), e.calculate());
    const seconds = e.getComputingTime();
    if (!Number.isFinite(seconds) || seconds < 0) throw new Error('Invalid elapsed time');
    console.log('Computing time = ' + seconds + ' s.');
  } finally { e.delete(); }
}

// C2-example-164 | C2-chapter-034
{
  const previous = mx.mXparser.checkIfAttemptToFixExpStrMode();
  const expressions = ['2++3', '2+-3', '2-+3', '2--3', '2-3+', '+2-3', '+2--3-']
    .map(source => new mx.Expression(source));
  let createdAfterGlobalChange;
  const show = e => console.log(e.getExpressionString(), e.getCanonicalExpressionString(), e.checkSyntax());
  try {
    for (const e of expressions) show(e);
    for (const e of expressions) e.disableAttemptToFixExpStrMode();
    for (const e of expressions) show(e);
    mx.mXparser.disableAttemptToFixExpStrMode();
    createdAfterGlobalChange = new mx.Expression('+3+-2-');
    show(createdAfterGlobalChange);
  } finally {
    createdAfterGlobalChange?.delete();
    for (const e of expressions) e.delete();
    if (previous) mx.mXparser.enableAttemptToFixExpStrMode();
    else mx.mXparser.disableAttemptToFixExpStrMode();
  }
}

// C2-example-165 | C2-chapter-035
{
  const e = new mx.Expression('1+2^3-sin(10+cos(20-1))+30');
  const tokens = e.getCopyOfInitialTokens();
  try { mx.mXparser.consolePrintTokens(tokens); }
  finally {
    for (const token of tokens ?? []) token?.delete();
    e.delete();
  }
}

// C2-example-166 | C2-chapter-035
{
  const e = new mx.Expression('1+2^3-sin(10+cos(20-1))+30');
  const tokens = e.getCopyOfInitialTokens();
  try {
    if (tokens === null) throw new Error('Expected initial token copy');
    let maximumLevel = 0;
    for (const token of tokens) {
      if (token === null) throw new Error('Unexpected null token');
      if (token.tokenLevel > maximumLevel) maximumLevel = token.tokenLevel;
    }
    mx.mXparser.consolePrintln(e.getExpressionString());
    mx.mXparser.consolePrintln('--------------------------');
    for (let level = 0; level <= maximumLevel; level++) {
      for (const token of tokens) {
        const displayed = token.tokenLevel === level
          ? token.tokenStr
          : ' '.repeat(token.tokenStr.length);
        mx.mXparser.consolePrint(displayed);
      }
      mx.mXparser.consolePrintln();
    }
  } finally {
    for (const token of tokens ?? []) token?.delete();
    e.delete();
  }
}

// C2-example-167 | C2-chapter-035
{
  const e = new mx.Expression('pi+var1-fun1(var1)+fun2(var2)-1pi');
  const tokens = e.getCopyOfInitialTokens();
  try { mx.mXparser.consolePrintTokens(tokens); }
  finally {
    for (const token of tokens ?? []) token?.delete();
    e.delete();
  }
}

// C2-example-168 | C2-chapter-036
{
  const savedRemoved = mx.mXparser.getBuiltinTokensToRemove() ?? [];
  const savedModified = mx.mXparser.getBuiltinTokensToModify() ?? [];
  const savedImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  const savedOverride = mx.mXparser.checkIfsetToOverrideBuiltinTokens();
  mx.mXparser.unremoveAllBuiltinTokens();
  mx.mXparser.unmodifyAllBuiltinTokens();
  mx.mXparser.setNotToOverrideBuiltinTokens();
  let e;
  try {
    e = new mx.Expression('sin(pi)+cos(pi)');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.removeBuiltinTokens('sin', 'cos');
    e.delete();
    e = new mx.Expression('sin(pi)+cos(pi)');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    console.log('removed', mx.mXparser.getBuiltinTokensToRemove());
    mx.mXparser.unremoveBuiltinTokens('cos');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.unremoveAllBuiltinTokens();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
  } finally {
    e?.delete();
    mx.mXparser.unremoveAllBuiltinTokens();
    mx.mXparser.unmodifyAllBuiltinTokens();
    for (const [original, replacement, description] of savedModified)
      mx.mXparser.modifyBuiltinToken(original, replacement, description);
    for (const name of savedRemoved) mx.mXparser.removeBuiltinTokens(name);
    if (savedImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
    if (savedOverride) mx.mXparser.setToOverrideBuiltinTokens();
    else mx.mXparser.setNotToOverrideBuiltinTokens();
  }
}

// C2-example-169 | C2-chapter-036
{
  const savedRemoved = mx.mXparser.getBuiltinTokensToRemove() ?? [];
  const savedModified = mx.mXparser.getBuiltinTokensToModify() ?? [];
  const savedImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  const savedOverride = mx.mXparser.checkIfsetToOverrideBuiltinTokens();
  mx.mXparser.unremoveAllBuiltinTokens();
  mx.mXparser.unmodifyAllBuiltinTokens();
  mx.mXparser.setNotToOverrideBuiltinTokens();
  let e;
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    e = new mx.Expression('sine(pi)+cosine(pi)');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.modifyBuiltinToken('sin', 'sine');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.modifyBuiltinToken('cos', 'cosine', 'My new cosine token');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.resetConsoleOutput();
    mx.mXparser.consolePrintHelp('My new_cosine');
    console.log('help', mx.mXparser.getConsoleOutput());
    mx.mXparser.resetConsoleOutput();
    mx.mXparser.consolePrintHelp('My new cosine');
    console.log('help', mx.mXparser.getConsoleOutput());
    console.log('modified', mx.mXparser.getBuiltinTokensToModify());
    e.delete();
    e = new mx.Expression('sine(pi)+cosine(pi)');
    mx.mXparser.unmodifyBuiltinTokens('sin');
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.unmodifyAllBuiltinTokens();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
  } finally {
    e?.delete();
    mx.mXparser.unremoveAllBuiltinTokens();
    mx.mXparser.unmodifyAllBuiltinTokens();
    for (const [original, replacement, description] of savedModified)
      mx.mXparser.modifyBuiltinToken(original, replacement, description);
    for (const name of savedRemoved) mx.mXparser.removeBuiltinTokens(name);
    if (savedImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
    if (savedOverride) mx.mXparser.setToOverrideBuiltinTokens();
    else mx.mXparser.setNotToOverrideBuiltinTokens();
  }
}

// C2-example-170 | C2-chapter-036
{
  const savedRemoved = mx.mXparser.getBuiltinTokensToRemove() ?? [];
  const savedModified = mx.mXparser.getBuiltinTokensToModify() ?? [];
  const savedImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  const savedOverride = mx.mXparser.checkIfsetToOverrideBuiltinTokens();
  mx.mXparser.unremoveAllBuiltinTokens();
  mx.mXparser.unmodifyAllBuiltinTokens();
  mx.mXparser.setNotToOverrideBuiltinTokens();
  let e;
  let sin, pi;
  try {
    sin = new mx.Function('sin(x) = 2*x');
    pi = new mx.Constant('pi = 1');
    e = new mx.Expression('sin(pi)', sin, pi);
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    mx.mXparser.setToOverrideBuiltinTokens();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
    console.log(e.getExpressionString(), e.calculate());
    console.log('override', mx.mXparser.checkIfsetToOverrideBuiltinTokens());
    e.delete();
    e = new mx.Expression('sin(pi)', sin, pi);
    mx.mXparser.setNotToOverrideBuiltinTokens();
    console.log(e.checkSyntax());
    console.log(e.getErrorMessage());
  } finally {
    e?.delete(); sin?.delete(); pi?.delete();
    mx.mXparser.unremoveAllBuiltinTokens();
    mx.mXparser.unmodifyAllBuiltinTokens();
    for (const [original, replacement, description] of savedModified)
      mx.mXparser.modifyBuiltinToken(original, replacement, description);
    for (const name of savedRemoved) mx.mXparser.removeBuiltinTokens(name);
    if (savedImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
    if (savedOverride) mx.mXparser.setToOverrideBuiltinTokens();
    else mx.mXparser.setNotToOverrideBuiltinTokens();
  }
}

// C2-example-171 | C2-chapter-037
{
  const a = 0.1, b = 0.1, c = 0.1;
  const d = a + b + c;
  console.log('d-0.3', d - 0.3);
}

// C2-example-172 | C2-chapter-037
console.log(mx.mXparser.checkIfAlmostIntRounding());
console.log(mx.mXparser.checkIfUlpRounding());
console.log(mx.mXparser.checkIfCanonicalRounding());

// C2-example-173 | C2-chapter-037
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const expressions = [];
  try {
    mx.mXparser.disableAlmostIntRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.enableCanonicalRounding();
    console.log(mx.mXparser.checkIfAlmostIntRounding());
    console.log(mx.mXparser.checkIfUlpRounding());
    console.log(mx.mXparser.checkIfCanonicalRounding());
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("2.5 - 2.2"));
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("5.55 / 5"));
    expressions.push(new mx.Expression("(1/6.2)^(-3)"));
    for (const e of expressions) console.log(e.getExpressionString(), e.calculate());
  } finally {
    for (const e of expressions) e.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}

// C2-example-174 | C2-chapter-037
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const expressions = [];
  try {
    mx.mXparser.disableAlmostIntRounding();
    mx.mXparser.enableUlpRounding();
    mx.mXparser.disableCanonicalRounding();
    console.log(mx.mXparser.checkIfAlmostIntRounding());
    console.log(mx.mXparser.checkIfUlpRounding());
    console.log(mx.mXparser.checkIfCanonicalRounding());
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("2.5 - 2.2"));
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("5.55 / 5"));
    expressions.push(new mx.Expression("(1/6.2)^(-3)"));
    for (const e of expressions) console.log(e.getExpressionString(), e.calculate());
  } finally {
    for (const e of expressions) e.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}

// C2-example-175 | C2-chapter-037
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const expressions = [];
  try {
    mx.mXparser.enableAlmostIntRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.disableCanonicalRounding();
    console.log(mx.mXparser.checkIfAlmostIntRounding());
    console.log(mx.mXparser.checkIfUlpRounding());
    console.log(mx.mXparser.checkIfCanonicalRounding());
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("2.5 - 2.2"));
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("5.55 / 5"));
    expressions.push(new mx.Expression("(1/6.2)^(-3)"));
    for (const e of expressions) console.log(e.getExpressionString(), e.calculate());
  } finally {
    for (const e of expressions) e.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}

// C2-example-176 | C2-chapter-037
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const expressions = [];
  try {
    mx.mXparser.disableAlmostIntRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.disableCanonicalRounding();
    console.log(mx.mXparser.checkIfAlmostIntRounding());
    console.log(mx.mXparser.checkIfUlpRounding());
    console.log(mx.mXparser.checkIfCanonicalRounding());
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("2.5 - 2.2"));
    expressions.push(new mx.Expression("0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1"));
    expressions.push(new mx.Expression("5.55 / 5"));
    expressions.push(new mx.Expression("(1/6.2)^(-3)"));
    for (const e of expressions) console.log(e.getExpressionString(), e.calculate());
  } finally {
    for (const e of expressions) e.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}

// C2-example-177 | C2-chapter-038
{
  const x = new mx.Argument('x');
  const e = new mx.Expression('2sin(x)', x);
  try {
    for (let i = 0; i <= 10; i++) {
      x.setArgumentValue(i / 10.0);
      console.log({ input: x.getArgumentValue() });
      console.log(e.getExpressionString(), e.calculate());
    }
  } finally { e.delete(); x.delete(); }
}

// C2-example-178 | C2-chapter-038
{
  const f = new mx.Function('f(i) = 2sin(i/10)');
  try {
    for (let i = 0; i <= 10; i++) {
      console.log({ input: i });
      console.log('f(i)', f.calculate(i));
    }
  } finally { f.delete(); }
}

// C2-example-179 | C2-chapter-038
{
  const x = new mx.Argument('x');
  const y = new mx.Argument('y = 2sin(x)', x);
  try {
    for (let i = 0; i <= 10; i++) {
      x.setArgumentValue(i / 10.0);
      console.log({ input: x.getArgumentValue() });
      console.log('y', y.getArgumentValue());
    }
  } finally { y.delete(); x.delete(); }
}

// C2-example-180 | C2-chapter-038
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const x = new mx.Argument('x');
  const e = new mx.Expression('2sin(x)', x);
  try {
    const numOfIter = 10000000;
    let result, evaluations = 0;
    const start = performance.now();
    for (let xv = 0; xv <= numOfIter; xv++) {
      x.setArgumentValue(xv);
      result = e.calculate();
      evaluations++;
    }
    const computingTimeSec = (performance.now() - start) / 1000;
    if (evaluations !== numOfIter + 1 || !Number.isFinite(computingTimeSec) || computingTimeSec < 0)
      throw new Error('Invalid benchmark count or elapsed time');
    console.log("2sin(x)", result);
    console.log('evaluations', evaluations);
    console.log({ benchmark: true, numOfIter, evaluations, computingTimeSec,
      iterationsPerSecond: computingTimeSec > 0 ? numOfIter / computingTimeSec : null,
      almost: mx.mXparser.checkIfAlmostIntRounding(),
      ulp: mx.mXparser.checkIfUlpRounding(),
      canonical: mx.mXparser.checkIfCanonicalRounding() });
  } finally {
    e.delete(); x.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}

// C2-example-181 | C2-chapter-038
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const x = new mx.Argument('x');
  const e = new mx.Expression('2sin(x)', x);
  try {
    mx.mXparser.disableCanonicalRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.disableAlmostIntRounding();
    const numOfIter = 10000000;
    let result, evaluations = 0;
    const start = performance.now();
    for (let xv = 0; xv <= numOfIter; xv++) {
      x.setArgumentValue(xv);
      result = e.calculate();
      evaluations++;
    }
    const computingTimeSec = (performance.now() - start) / 1000;
    if (evaluations !== numOfIter + 1 || !Number.isFinite(computingTimeSec) || computingTimeSec < 0)
      throw new Error('Invalid benchmark count or elapsed time');
    console.log("2sin(x)", result);
    console.log('evaluations', evaluations);
    console.log({ benchmark: true, numOfIter, evaluations, computingTimeSec,
      iterationsPerSecond: computingTimeSec > 0 ? numOfIter / computingTimeSec : null,
      almost: mx.mXparser.checkIfAlmostIntRounding(),
      ulp: mx.mXparser.checkIfUlpRounding(),
      canonical: mx.mXparser.checkIfCanonicalRounding() });
  } finally {
    e.delete(); x.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}

// C2-example-182 | C2-chapter-038
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const f = new mx.Function('f(x) = 2sin(x)');
  try {
    mx.mXparser.disableCanonicalRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.disableAlmostIntRounding();
    const numOfIter = 10000000;
    let result, evaluations = 0;
    const start = performance.now();
    for (let xv = 0; xv <= numOfIter; xv++) {
      result = f.calculate(xv);
      evaluations++;
    }
    const computingTimeSec = (performance.now() - start) / 1000;
    if (evaluations !== numOfIter + 1 || !Number.isFinite(computingTimeSec) || computingTimeSec < 0)
      throw new Error('Invalid benchmark count or elapsed time');
    console.log("f(x)", result);
    console.log('evaluations', evaluations);
    console.log({ benchmark: true, numOfIter, evaluations, computingTimeSec,
      iterationsPerSecond: computingTimeSec > 0 ? numOfIter / computingTimeSec : null,
      almost: mx.mXparser.checkIfAlmostIntRounding(),
      ulp: mx.mXparser.checkIfUlpRounding(),
      canonical: mx.mXparser.checkIfCanonicalRounding() });
  } finally {
    f.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}

// C2-example-183 | C2-chapter-038
{
  const previousAlmost = mx.mXparser.checkIfAlmostIntRounding();
  const previousUlp = mx.mXparser.checkIfUlpRounding();
  const previousCanonical = mx.mXparser.checkIfCanonicalRounding();
  const x = new mx.Argument('x');
  const y = new mx.Argument('y = 2sin(x)', x);
  try {
    mx.mXparser.disableCanonicalRounding();
    mx.mXparser.disableUlpRounding();
    mx.mXparser.disableAlmostIntRounding();
    const numOfIter = 10000000;
    let result, evaluations = 0;
    const start = performance.now();
    for (let xv = 0; xv <= numOfIter; xv++) {
      x.setArgumentValue(xv);
      result = y.getArgumentValue();
      evaluations++;
    }
    const computingTimeSec = (performance.now() - start) / 1000;
    if (evaluations !== numOfIter + 1 || !Number.isFinite(computingTimeSec) || computingTimeSec < 0)
      throw new Error('Invalid benchmark count or elapsed time');
    console.log("y", result);
    console.log('evaluations', evaluations);
    console.log({ benchmark: true, numOfIter, evaluations, computingTimeSec,
      iterationsPerSecond: computingTimeSec > 0 ? numOfIter / computingTimeSec : null,
      almost: mx.mXparser.checkIfAlmostIntRounding(),
      ulp: mx.mXparser.checkIfUlpRounding(),
      canonical: mx.mXparser.checkIfCanonicalRounding() });
  } finally {
    y.delete(); x.delete();
    if (previousAlmost) mx.mXparser.enableAlmostIntRounding();
    else mx.mXparser.disableAlmostIntRounding();
    if (previousUlp) mx.mXparser.enableUlpRounding();
    else mx.mXparser.disableUlpRounding();
    if (previousCanonical) mx.mXparser.enableCanonicalRounding();
    else mx.mXparser.disableCanonicalRounding();
  }
}

// JS-settings-check-001 | C2-chapter-039
let checkedSettings = 0;
function requireSetting(condition) {
  if (!condition) throw new Error('Native setting check failed');
  checkedSettings++;
}

// C2-example-184 | C2-chapter-039
{
  const radians = mx.mXparser.checkIfRadiansMode();
  try {
    mx.mXparser.setDegreesMode();
    requireSetting(mx.mXparser.checkIfDegreesMode() && !mx.mXparser.checkIfRadiansMode());
    mx.mXparser.setRadiansMode();
    requireSetting(mx.mXparser.checkIfRadiansMode() && !mx.mXparser.checkIfDegreesMode());
  } finally { if (radians) mx.mXparser.setRadiansMode(); else mx.mXparser.setDegreesMode(); }
}

// C2-example-185 | C2-chapter-039
{
  const previous = mx.mXparser.checkIfAttemptToFixExpStrMode();
  let e;
  try {
    mx.mXparser.disableAttemptToFixExpStrMode();
    e = new mx.Expression('2--3');
    requireSetting(!mx.mXparser.checkIfAttemptToFixExpStrMode() && !e.checkIfAttemptToFixExpStrMode());
    e.enableAttemptToFixExpStrMode();
    requireSetting(e.checkIfAttemptToFixExpStrMode());
    e.disableAttemptToFixExpStrMode();
    requireSetting(!e.checkIfAttemptToFixExpStrMode());
    mx.mXparser.enableAttemptToFixExpStrMode();
    requireSetting(mx.mXparser.checkIfAttemptToFixExpStrMode());
  } finally {
    e?.delete();
    if (previous) mx.mXparser.enableAttemptToFixExpStrMode(); else mx.mXparser.disableAttemptToFixExpStrMode();
  }
}

// C2-example-186 | C2-chapter-039
{
  const previous = mx.mXparser.primesCache;
  let supplied;
  try {
    mx.mXparser.initPrimesCache();
    requireSetting(mx.mXparser.isInitPrimesCacheSuccessful() && mx.mXparser.getMaxNumInPrimesCache() > 0);
    mx.mXparser.initPrimesCache(1000);
    requireSetting(mx.mXparser.isInitPrimesCacheSuccessful() && mx.mXparser.getMaxNumInPrimesCache() === 1000);
    supplied = new mx.PrimesCache(2000);
    mx.mXparser.initPrimesCache(supplied);
    supplied.delete();
    requireSetting(mx.mXparser.getMaxNumInPrimesCache() === 2000);
    mx.mXparser.setNoPrimesCache();
    requireSetting(!mx.mXparser.isInitPrimesCacheSuccessful());
  } finally {
    mx.mXparser.primesCache = previous;
    if (supplied && !supplied.isDeleted()) supplied.delete();
    previous?.delete();
  }
}

// C2-example-187 | C2-chapter-039
{
  const epsilon = mx.mXparser.getEpsilon();
  const exact = mx.mXparser.checkIfExactMode();
  try {
    mx.mXparser.setEpsilonComparison();
    mx.mXparser.setEpsilon(1e-9);
    requireSetting(mx.mXparser.checkIfEpsilonMode() && mx.mXparser.getEpsilon() === 1e-9);
    mx.mXparser.setDefaultEpsilon();
    requireSetting(mx.mXparser.getEpsilon() === mx.BinaryRelations.DEFAULT_COMPARISON_EPSILON);
    mx.mXparser.setExactComparison();
    requireSetting(mx.mXparser.checkIfExactMode() && !mx.mXparser.checkIfEpsilonMode());
  } finally {
    mx.mXparser.setEpsilon(epsilon);
    if (exact) mx.mXparser.setExactComparison(); else mx.mXparser.setEpsilonComparison();
  }
}

// C2-example-188 | C2-chapter-039
{
  const previous = mx.mXparser.checkIfCanonicalRounding();
  try {
    mx.mXparser.disableCanonicalRounding(); requireSetting(!mx.mXparser.checkIfCanonicalRounding());
    mx.mXparser.enableCanonicalRounding(); requireSetting(mx.mXparser.checkIfCanonicalRounding());
    mx.mXparser.setCanonicalRounding(false); requireSetting(!mx.mXparser.checkIfCanonicalRounding());
    mx.mXparser.setCanonicalRounding(true); requireSetting(mx.mXparser.checkIfCanonicalRounding());
  } finally { mx.mXparser.setCanonicalRounding(previous); }
}

// C2-example-189 | C2-chapter-039
{
  const previous = mx.mXparser.checkIfUlpRounding();
  try {
    mx.mXparser.disableUlpRounding(); requireSetting(!mx.mXparser.checkIfUlpRounding());
    mx.mXparser.enableUlpRounding(); requireSetting(mx.mXparser.checkIfUlpRounding());
    mx.mXparser.setUlpRounding(false); requireSetting(!mx.mXparser.checkIfUlpRounding());
    mx.mXparser.setUlpRounding(true); requireSetting(mx.mXparser.checkIfUlpRounding());
  } finally { mx.mXparser.setUlpRounding(previous); }
}

// C2-example-190 | C2-chapter-039
{
  const previous = mx.mXparser.checkIfAlmostIntRounding();
  try {
    mx.mXparser.disableAlmostIntRounding(); requireSetting(!mx.mXparser.checkIfAlmostIntRounding());
    mx.mXparser.enableAlmostIntRounding(); requireSetting(mx.mXparser.checkIfAlmostIntRounding());
    mx.mXparser.setAlmostIntRounding(false); requireSetting(!mx.mXparser.checkIfAlmostIntRounding());
    mx.mXparser.setAlmostIntRounding(true); requireSetting(mx.mXparser.checkIfAlmostIntRounding());
  } finally { mx.mXparser.setAlmostIntRounding(previous); }
}

// C2-example-191 | C2-chapter-039
{
  const previous = mx.mXparser.checkIfImpliedMultiplicationMode();
  let e;
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    e = new mx.Expression("2pi");
    requireSetting(!mx.mXparser.checkIfImpliedMultiplicationMode() && !e.checkIfImpliedMultiplicationMode());
    e.enableImpliedMultiplicationMode(); requireSetting(e.checkIfImpliedMultiplicationMode());
    e.disableImpliedMultiplicationMode(); requireSetting(!e.checkIfImpliedMultiplicationMode());
    mx.mXparser.enableImpliedMultiplicationMode(); requireSetting(mx.mXparser.checkIfImpliedMultiplicationMode());
  } finally {
    e?.delete();
    if (previous) mx.mXparser.enableImpliedMultiplicationMode(); else mx.mXparser.disableImpliedMultiplicationMode();
  }
}

// C2-example-192 | C2-chapter-039
{
  const previous = mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode();
  let e;
  try {
    mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
    e = new mx.Expression("2π");
    requireSetting(!mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode() && !e.checkIfUnicodeBuiltinKeyWordsMode());
    e.enableUnicodeBuiltinKeyWordsMode(); requireSetting(e.checkIfUnicodeBuiltinKeyWordsMode());
    e.disableUnicodeBuiltinKeyWordsMode(); requireSetting(!e.checkIfUnicodeBuiltinKeyWordsMode());
    mx.mXparser.enableUnicodeBuiltinKeyWordsMode(); requireSetting(mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode());
  } finally {
    e?.delete();
    if (previous) mx.mXparser.enableUnicodeBuiltinKeyWordsMode(); else mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
  }
}

// C2-example-193 | C2-chapter-039
{
  const e = new mx.Expression('2+3');
  try {
    e.setVerboseMode(); requireSetting(e.getVerboseMode());
    requireSetting(e.calculate() === 5);
    e.setSilentMode(); requireSetting(!e.getVerboseMode());
  } finally { e.delete(); }
}

// C2-example-194 | C2-chapter-039
{
  const previous = mx.mXparser.checkIfsetToOverrideBuiltinTokens();
  try {
    mx.mXparser.setToOverrideBuiltinTokens(); requireSetting(mx.mXparser.checkIfsetToOverrideBuiltinTokens());
    mx.mXparser.setNotToOverrideBuiltinTokens(); requireSetting(!mx.mXparser.checkIfsetToOverrideBuiltinTokens());
  } finally {
    if (previous) mx.mXparser.setToOverrideBuiltinTokens(); else mx.mXparser.setNotToOverrideBuiltinTokens();
  }
}

// C2-example-195 | C2-chapter-039
{
  const previous = mx.mXparser.getBuiltinTokensToModify();
  try {
    mx.mXparser.unmodifyAllBuiltinTokens();
    mx.mXparser.modifyBuiltinToken('sin', 'sineAlias');
    mx.mXparser.modifyBuiltinToken('cos', 'cosineAlias', 'Custom cosine description');
    const rows = mx.mXparser.getBuiltinTokensToModify();
    requireSetting(rows.length === 2 && rows[0][0] === 'sin' && rows[0][1] === 'sineAlias');
    requireSetting(rows[1][0] === 'cos' && rows[1][1] === 'cosineAlias' && rows[1][2] === 'Custom cosine description');
    mx.mXparser.unmodifyBuiltinTokens('sin', 'cosineAlias');
    requireSetting(mx.mXparser.getBuiltinTokensToModify().length === 0);
  } finally {
    mx.mXparser.unmodifyAllBuiltinTokens();
    for (const [original, replacement, description] of previous) mx.mXparser.modifyBuiltinToken(original, replacement, description);
  }
}

// C2-example-196 | C2-chapter-039
{
  const previous = mx.mXparser.getBuiltinTokensToRemove();
  try {
    mx.mXparser.unremoveAllBuiltinTokens();
    mx.mXparser.removeBuiltinTokens('sin', 'cos');
    const removed = mx.mXparser.getBuiltinTokensToRemove();
    requireSetting(removed.length === 2 && removed[0] === 'sin' && removed[1] === 'cos');
    mx.mXparser.unremoveBuiltinTokens('sin', 'cos');
    requireSetting(mx.mXparser.getBuiltinTokensToRemove().length === 0);
  } finally {
    mx.mXparser.unremoveAllBuiltinTokens();
    mx.mXparser.removeBuiltinTokens(previous);
  }
}

// C2-example-197 | C2-chapter-039
{
  const previous = mx.mXparser.isCurrentCalculationCancelled();
  try {
    mx.mXparser.cancelCurrentCalculation(); requireSetting(mx.mXparser.isCurrentCalculationCancelled());
    mx.mXparser.resetCancelCurrentCalculationFlag(); requireSetting(!mx.mXparser.isCurrentCalculationCancelled());
  } finally {
    if (previous) mx.mXparser.cancelCurrentCalculation(); else mx.mXparser.resetCancelCurrentCalculationFlag();
  }
}

// C2-example-198 | C2-chapter-039
{
  try {
    mx.mXparser.resetConsoleOutput();
    mx.mXparser.setConsolePrefix('[tutorial] ');
    mx.mXparser.consolePrintln(['Native console prefix example']);
  } finally { mx.mXparser.setDefaultConsolePrefix(); }
}

// C2-example-199 | C2-chapter-039
{
  try {
    mx.mXparser.resetConsoleOutput();
    mx.mXparser.setConsoleOutputPrefix('[captured] ');
    mx.mXparser.consolePrintln(['Captured native output']);
    const captured = mx.mXparser.getConsoleOutput();
    requireSetting(captured.includes('[captured] ') && captured.includes('Captured native output'));
    mx.mXparser.resetConsoleOutput();
    requireSetting(mx.mXparser.getConsoleOutput() === '');
  } finally { mx.mXparser.setDefaultConsoleOutputPrefix(); }
}

// C2-example-200 | C2-chapter-039
{
  const previous = mx.mXparser.getMaxAllowedRecursionDepth();
  try {
    mx.mXparser.setMaxAllowedRecursionDepth(64);
    requireSetting(mx.mXparser.getMaxAllowedRecursionDepth() === 64);
  } finally { mx.mXparser.setMaxAllowedRecursionDepth(previous); }
}

// C2-example-201 | C2-chapter-039
{
  const previous = mx.mXparser.getToFractionInitSearchSize();
  try {
    mx.mXparser.setToFractionInitSearchSize(1000n);
    requireSetting(mx.mXparser.getToFractionInitSearchSize() === 1000n);
    const fraction = mx.mXparser.toFraction(-2.5);
    const mixed = mx.mXparser.toMixedFraction(-2.5);
    requireSetting(fraction.length === 3 && fraction[0] === -1 && fraction[1] === 5 && fraction[2] === 2);
    requireSetting(mixed.length === 4 && mixed[0] === -1 && mixed[1] === 2 && mixed[2] === 1 && mixed[3] === 2);
    requireSetting(mx.mXparser.toFractionString(-2.5) === '-5/2');
    requireSetting(mx.mXparser.toMixedFractionString(-2.5) === '-2-1/2');
  } finally { mx.mXparser.setToFractionInitSearchSize(previous); }
}

// C2-example-202 | C2-chapter-039
{
  const previous = mx.ProbabilityDistributions.randomGenerator;
  const selected = new mx.Random(1729);
  try {
    mx.mXparser.setRandomGenerator(selected);
    const installed = mx.ProbabilityDistributions.randomGenerator;
    try {
      requireSetting(installed.isAliasOf(selected));
      const value = installed.nextDouble();
      requireSetting(Number.isFinite(value) && value >= 0 && value < 1);
    } finally { installed.delete(); }
  } finally {
    mx.ProbabilityDistributions.randomGenerator = previous;
    selected.delete(); previous?.delete();
  }
}

// C2-example-203 | C2-chapter-039
{
  const previous = mx.mXparser.getThreadsNumber();
  try {
    mx.mXparser.setThreadsNumber(2);
    requireSetting(mx.mXparser.getThreadsNumber() === 2);
    mx.mXparser.setDefaultThreadsNumber();
    const detected = mx.mXparser.getThreadsNumber();
    requireSetting(Number.isInteger(detected) && detected >= 0);
  } finally {
    if (previous > 0) mx.mXparser.setThreadsNumber(previous);
  }
}

// C2-example-204 | C2-chapter-039
{
  mx.mXparser.disableUlpRounding();
  mx.mXparser.setDegreesMode();
  mx.mXparser.setExactComparison();
  mx.mXparser.disableImpliedMultiplicationMode();
  mx.mXparser.disableUnicodeBuiltinKeyWordsMode();
  mx.mXparser.disableAttemptToFixExpStrMode();
  mx.mXparser.setDefaultOptions();
  requireSetting(mx.mXparser.checkIfUlpRounding() && mx.mXparser.checkIfAlmostIntRounding());
  requireSetting(mx.mXparser.checkIfRadiansMode() && mx.mXparser.checkIfEpsilonMode());
  requireSetting(mx.mXparser.checkIfImpliedMultiplicationMode() && mx.mXparser.checkIfUnicodeBuiltinKeyWordsMode());
  requireSetting(mx.mXparser.checkIfAttemptToFixExpStrMode() && !mx.mXparser.isCurrentCalculationCancelled());
}

// C2-example-205 | C2-chapter-040
{
  mx.mXparser.changeLanguageTo('en');
  try {
    mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
    console.log('Was the last operation successful = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('The last operation message = ', mx.SerializationUtils.getLastOperationMessage());
    console.log('-----------------------------------');
    mx.SerializationUtils.disableBinarySerialization();
    console.log('Was the last operation successful = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('The last operation message = ', mx.SerializationUtils.getLastOperationMessage());
  } finally { mx.SerializationUtils.disableBinarySerialization(); }
}

// C2-example-206 | C2-chapter-040
{
  const e = new mx.Expression('2+3/sin(pi/2)');
  let copy;
  try {
    mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
    console.log('This is where the entire object is serialized');
    const data = mx.SerializationUtils.serializeToBytes(e);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    console.log('This is where the entire object is deserialized');
    copy = mx.SerializationUtils.deserializeFromBytes(data, mx.Expression);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    mx.SerializationUtils.disableBinarySerialization();
    console.log('And here we check if the copy of the Expression works');
    if (copy === null) throw new Error('Native deserialization failed');
    console.log('eCopy.calculate() = ', copy.calculate());
  } finally {
    mx.SerializationUtils.disableBinarySerialization();
    copy?.delete(); e.delete();
  }
}

// C2-example-207 | C2-chapter-040
{
  const e = new mx.Expression('2+3/sin(pi/2)');
  let copy;
  try {
    mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
    console.log('This is where the entire object is serialized');
    const data = mx.SerializationUtils.serializeToString(e);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    console.log('This is where the entire object is deserialized');
    copy = mx.SerializationUtils.deserializeFromString(data, mx.Expression);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    mx.SerializationUtils.disableBinarySerialization();
    console.log('And here we check if the copy of the Expression works');
    if (copy === null) throw new Error('Native deserialization failed');
    console.log('eCopy.calculate() = ', copy.calculate());
  } finally {
    mx.SerializationUtils.disableBinarySerialization();
    copy?.delete(); e.delete();
  }
}

// C2-example-208 | C2-chapter-040
{
  const e = new mx.Expression('2+3/sin(pi/2)');
  let copy;
  const path = 'tutorial-expression.ser';
  let written = false;
  try {
    mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
    console.log('This is where the entire object is serialized');
    written = mx.SerializationUtils.serializeToFile(e, path);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    console.log('This is where the entire object is deserialized');
    copy = mx.SerializationUtils.deserializeFromFile(path, mx.Expression);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    mx.SerializationUtils.disableBinarySerialization();
    console.log('And here we check if the copy of the Expression works');
    if (copy === null) throw new Error('Native deserialization failed');
    console.log('eCopy.calculate() = ', copy.calculate());
  } finally {
    mx.SerializationUtils.disableBinarySerialization();
    copy?.delete(); e.delete();
    if (written) mx.FS.unlink(path);
  }
}

// C2-example-209 | C2-chapter-040
{
  const f = new mx.Function('f(x) = x^2');
  const g = new mx.Function('g(x,y) = sqrt(f(x) + f(y))', f);
  const a = new mx.Argument('a = 3');
  const b = new mx.Argument('b = 4');
  const e = new mx.Expression('g(a,b)', g, a, b);
  let copy, aCopy, bCopy, gCopy, fCopy;
  try {
    console.log('Syntax status before pre-compilation: ', e.getSyntaxStatus());
    console.log('Message before pre-compilation: ', e.getErrorMessage());
    console.log('----------------------------------');
    console.log('Calculated value = ', e.calculate());
    console.log('Syntax status before serialization: ', e.getSyntaxStatus());
    console.log('Message after before serialization: ', e.getErrorMessage());
    console.log('----------------------------------');
    mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
    const data = mx.SerializationUtils.serializeToBytes(e);
    console.log('Last operation = ', mx.SerializationUtils.checkLastOperationWasSuccessful());
    console.log('Message = ', mx.SerializationUtils.getLastOperationMessage());
    copy = mx.SerializationUtils.deserializeFromBytes(data, mx.Expression);
    mx.SerializationUtils.disableBinarySerialization();
    if (copy === null) throw new Error('Native deserialization failed');
    console.log('----------------------------------');
    console.log('Syntax status after deserialization: ', copy.getSyntaxStatus());
    console.log('Message after deserialization: ', copy.getErrorMessage());
    console.log('Calculated value after deserialization = ', copy.calculate());
    console.log('----------------------------------');
    aCopy = copy.getArgument('a'); bCopy = copy.getArgument('b');
    gCopy = copy.getFunction('g'); fCopy = gCopy.getFunction('f');
    aCopy.setArgumentValue(5); bCopy.setArgumentValue(12);
    console.log('Calculated value after arguments values modification = ', copy.calculate());
    if (aCopy.isAliasOf(a) || bCopy.isAliasOf(b) || gCopy.isAliasOf(g) || fCopy.isAliasOf(f))
      throw new Error('Restored dependencies unexpectedly alias the original graph');
    if (e.calculate() !== 5) throw new Error('Restored graph mutation changed the original');
  } finally {
    mx.SerializationUtils.disableBinarySerialization();
    for (const handle of [fCopy, gCopy, bCopy, aCopy, copy, e, b, a, g, f]) handle?.delete();
  }
}

// C2-example-210 | C2-chapter-041
{
  const constant = new mx.Constant('k = 7');
  const argument = new mx.Argument('x = 2');
  const recursive = new mx.RecursiveArgument('r(n) = r(n-1)+r(n-2)');
  const fn = new mx.Function('f(t) = t^2');
  const expression = new mx.Expression('2+3');
  const copies = [];
  try {
    recursive.addBaseCase(0, 0); recursive.addBaseCase(1, 1);
    const c = constant.cloneForThreadSafe(); copies.push(c);
    const a = argument.cloneForThreadSafe(); copies.push(a);
    const r = recursive.cloneForThreadSafe(); copies.push(r);
    const f = fn.cloneForThreadSafe(); copies.push(f);
    const e = expression.cloneForThreadSafe(); copies.push(e);
    if (!(r instanceof mx.RecursiveArgument)) throw new Error('Recursive clone lost its native subtype');
    console.log([constant.getConstantValue(), c.getConstantValue(), c.isAliasOf(constant)]);
    console.log([argument.getArgumentValue(), a.getArgumentValue(), a.isAliasOf(argument)]);
    console.log([recursive.getArgumentValue(8), r.getArgumentValue(8), r.isAliasOf(recursive)]);
    console.log([fn.calculate(3), f.calculate(3), f.isAliasOf(fn)]);
    console.log([expression.calculate(), e.calculate(), e.isAliasOf(expression)]);
  } finally {
    for (const copy of copies.reverse()) copy.delete();
    expression.delete(); fn.delete(); recursive.delete(); argument.delete(); constant.delete();
  }
}

// C2-example-211 | C2-chapter-041
{
  const x = new mx.Argument('x = 2');
  const y = new mx.Argument('y = 2x', x);
  let yc;
  try {
    yc = y.cloneForThreadSafe();
    console.log([x.getArgumentValue(), y.getArgumentValue(), yc.getArgumentValue()]);
    x.setArgumentValue(4);
    console.log([x.getArgumentValue(), y.getArgumentValue(), yc.getArgumentValue()]);
  } finally { yc?.delete(); y.delete(); x.delete(); }
}

// C2-example-212 | C2-chapter-041
{
  const x = new mx.Argument('x = 2');
  const y = new mx.Argument('y = 2x', x);
  let yc, xc;
  try {
    yc = y.cloneForThreadSafe(); xc = yc.getArgument('x');
    console.log([x.getArgumentValue(), y.getArgumentValue(), xc.getArgumentValue(), yc.getArgumentValue()]);
    x.setArgumentValue(4);
    console.log([x.getArgumentValue(), y.getArgumentValue(), xc.getArgumentValue(), yc.getArgumentValue()]);
    xc.setArgumentValue(5);
    console.log([x.getArgumentValue(), y.getArgumentValue(), xc.getArgumentValue(), yc.getArgumentValue()]);
  } finally { xc?.delete(); yc?.delete(); y.delete(); x.delete(); }
}

// C2-example-213 | C2-chapter-041
{
  const a = new mx.Constant('a = 2');
  const x = new mx.Argument('x = 2a', a);
  const y = new mx.Argument('y = 2x', x);
  const f = new mx.Function('f(u,v) = u^2 + v^2 + a', a);
  const e = new mx.Expression('f(1,2) + y', f, y);
  let ec, fc, yc, xc, ac1, ac2;
  try {
    ec = e.cloneForThreadSafe();
    console.log([e.calculate(), ec.calculate()]);
    fc = ec.getFunction('f'); ac1 = fc.getConstant('a');
    yc = ec.getArgument('y'); xc = yc.getArgument('x'); ac2 = xc.getConstant('a');
    console.log([ac1.isAliasOf(ac2), a.isAliasOf(ac1), a.isAliasOf(ac2)]);
  } finally {
    for (const handle of [ac2, ac1, xc, yc, fc, ec, e, f, y, x, a]) handle?.delete();
  }
}

// C2-example-214 | C2-chapter-041
{
  let a, s, c, e1, e2, e1c, e2c, sc1, cc1, sc2, cc2;
  try {
    a = new mx.Constant('a = 0.001');
    s = new mx.Function('s(x) = if( abs(x) < a, x, 2*s(x/2)*c(x/2) )', a);
    c = new mx.Function('c(x) = if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )', a);
    s.addDefinitions(c); c.addDefinitions(s);
    e1 = new mx.Expression('sin(5)-s(5)', s);
    e2 = new mx.Expression('cos(5)-c(5)', c);
    e1c = e1.cloneForThreadSafe();
    sc1 = e1c.getFunction('s'); cc1 = sc1.getFunction('c');
    e2c = e2.cloneForThreadSafe();
    cc2 = e2c.getFunction('c'); sc2 = cc2.getFunction('s');
    console.log([e1.calculate(), e1c.calculate()]);
    console.log([e2.calculate(), e2c.calculate()]);
    if (s.isAliasOf(sc1) || s.isAliasOf(sc2) || sc1.isAliasOf(sc2) ||
        c.isAliasOf(cc1) || c.isAliasOf(cc2) || cc1.isAliasOf(cc2))
      throw new Error('Independent expression clones unexpectedly share function nodes');
  } finally {
    for (const [left, right] of [[s, c], [sc1, cc1], [sc2, cc2]]) {
      if (left && right) { left.removeDefinitions(right); right.removeDefinitions(left); }
    }
    for (const handle of [sc2, cc2, cc1, sc1, e2c, e1c, e2, e1, c, s, a]) handle?.delete();
  }
}

// C2-example-215 | C2-chapter-042
{
  const e = new mx.Expression('');
  try {
    const texts = [
      mx.mXparser.getHelp(),
      mx.mXparser.getHelp("sin"),
      mx.mXparser.getHelp(true, true, "Help reference"),
      mx.mXparser.getHelp("type=Bitwise operator", true, true, "Help reference"),
      e.getHelp(),
      e.getHelp("sin"),
      e.getHelp(true, true, "Help reference"),
      e.getHelp("type=Bitwise operator", true, true, "Help reference"),
    ];
    const counts = [];
    for (const value of texts) {
      if (typeof value !== 'string') throw new Error('Expected native help text');
      counts.push(new TextEncoder().encode(value).length);
    }
    console.log(counts);
  } finally { e.delete(); }
}

// C2-example-216 | C2-chapter-042
{
  const help = mx.mXparser.getHelp("type=Bitwise operator", true, true, "");
  console.log(help);
}

// C2-example-217 | C2-chapter-042
{
  const help = mx.mXparser.getHelp("type=Bitwise operator", true, true, "This is a caption");
  console.log(help);
}

// C2-example-218 | C2-chapter-042
{
  const help = mx.mXparser.getHelp("type=Bitwise operator", false, false, "This is a caption");
  console.log(help);
}

// C2-example-219 | C2-chapter-043
{
  const e = new mx.Expression('');
  try {
    const texts = [
      mx.mXparser.getHelpAsCsv(),
      mx.mXparser.getHelpAsCsv("sin"),
      mx.mXparser.getHelpAsCsv("\"", ";", true),
      mx.mXparser.getHelpAsCsv("type=Bitwise operator", "\"", ";", true),
      e.getHelpAsCsv(),
      e.getHelpAsCsv("sin"),
      e.getHelpAsCsv("\"", ";", true),
      e.getHelpAsCsv("type=Bitwise operator", "\"", ";", true),
    ];
    const counts = [];
    for (const value of texts) {
      if (typeof value !== 'string') throw new Error('Expected native help text');
      counts.push(new TextEncoder().encode(value).length);
    }
    console.log(counts);
  } finally { e.delete(); }
}

// C2-example-220 | C2-chapter-043
{
  const help = mx.mXparser.getHelpAsCsv("type=Bitwise operator", "\"", ";", true);
  console.log(help);
}

// C2-example-221 | C2-chapter-043
{
  const help = mx.mXparser.getHelpAsCsv("type=Bitwise operator", "'", ",", true);
  console.log(help);
}

// C2-example-222 | C2-chapter-043
{
  const help = mx.mXparser.getHelpAsCsv("type=Bitwise operator", "", ";", true);
  console.log(help);
}

// C2-example-223 | C2-chapter-043
{
  const help = mx.mXparser.getHelpAsCsv("type=Bitwise operator", "\"", ";", false);
  console.log(help);
}

// C2-example-224 | C2-chapter-044
{
  const e = new mx.Expression('');
  try {
    const texts = [
      mx.mXparser.getHelpAsHtmlTable(),
      mx.mXparser.getHelpAsHtmlTable("sin"),
      mx.mXparser.getHelpAsHtmlTable(true, true, false, "Help reference", "mx-help"),
      mx.mXparser.getHelpAsHtmlTable("type=Bitwise operator", true, true, true, "", "wp-block-table"),
      e.getHelpAsHtmlTable(),
      e.getHelpAsHtmlTable("sin"),
      e.getHelpAsHtmlTable(true, true, false, "Help reference", "mx-help"),
      e.getHelpAsHtmlTable("type=Bitwise operator", true, true, true, "", "wp-block-table"),
    ];
    const counts = [];
    for (const value of texts) {
      if (typeof value !== 'string') throw new Error('Expected native help text');
      counts.push(new TextEncoder().encode(value).length);
    }
    console.log(counts);
  } finally { e.delete(); }
}

// C2-example-225 | C2-chapter-044
{
  const help = mx.mXparser.getHelpAsHtmlTable("type=Bitwise operator", true, true, true, "", "wp-block-table");
  console.log(help);
}

// C2-example-226 | C2-chapter-044
{
  const help = mx.mXparser.getHelpAsHtmlTable("type=Bitwise operator", true, true, false, "", "wp-block-table");
  console.log(help);
}

// C2-example-227 | C2-chapter-044
{
  const help = mx.mXparser.getHelpAsHtmlTable("type=Bitwise operator", true, true, false, "This is a caption", "wp-block-table");
  console.log(help);
}

// C2-example-228 | C2-chapter-044
{
  const help = mx.mXparser.getHelpAsHtmlTable("type=Bitwise operator", false, false, false, "", "");
  console.log(help);
}

// C2-example-229 | C2-chapter-045
{
  const e = new mx.Expression('');
  try {
    const texts = [
      mx.mXparser.getHelpAsMarkdownTable(),
      mx.mXparser.getHelpAsMarkdownTable("sin"),
      mx.mXparser.getHelpAsMarkdownTable(true, true, "Help reference"),
      mx.mXparser.getHelpAsMarkdownTable("type=Bitwise operator", true, true, ""),
      e.getHelpAsMarkdownTable(),
      e.getHelpAsMarkdownTable("sin"),
      e.getHelpAsMarkdownTable(true, true, "Help reference"),
      e.getHelpAsMarkdownTable("type=Bitwise operator", true, true, ""),
    ];
    const counts = [];
    for (const value of texts) {
      if (typeof value !== 'string') throw new Error('Expected native help text');
      counts.push(new TextEncoder().encode(value).length);
    }
    console.log(counts);
  } finally { e.delete(); }
}

// C2-example-230 | C2-chapter-045
{
  const help = mx.mXparser.getHelpAsMarkdownTable("type=Bitwise operator", true, true, "");
  console.log(help);
}

// C2-example-231 | C2-chapter-045
{
  const help = mx.mXparser.getHelpAsMarkdownTable("type=Bitwise operator", true, true, "This is a caption");
  console.log(help);
}

// C2-example-232 | C2-chapter-045
{
  const help = mx.mXparser.getHelpAsMarkdownTable("type=Bitwise operator", true, false, "This is a caption");
  console.log(help);
}

// C2-example-233 | C2-chapter-045
{
  const help = mx.mXparser.getHelpAsMarkdownTable("type=Bitwise operator", false, false, "");
  console.log(help);
}

// C2-example-234 | C2-chapter-046
{
  const e = new mx.Expression('');
  try {
    const texts = [
      mx.mXparser.getHelpAsJson(),
      mx.mXparser.getHelpAsJson("sin"),
      mx.mXparser.getHelpAsJson(true, "Help reference"),
      mx.mXparser.getHelpAsJson("type=Bitwise operator", true, ""),
      e.getHelpAsJson(),
      e.getHelpAsJson("sin"),
      e.getHelpAsJson(true, "Help reference"),
      e.getHelpAsJson("type=Bitwise operator", true, ""),
    ];
    const counts = [];
    for (const value of texts) {
      if (typeof value !== 'string') throw new Error('Expected native help text');
      if (!Array.isArray(JSON.parse(value))) throw new Error('Expected the native help JSON array');
      counts.push(new TextEncoder().encode(value).length);
    }
    console.log(counts);
  } finally { e.delete(); }
}

// C2-example-235 | C2-chapter-046
{
  const help = mx.mXparser.getHelpAsJson("type=Bitwise operator", true, "");
  console.log(help);
}

// C2-example-236 | C2-chapter-046
{
  const help = mx.mXparser.getHelpAsJson("type=Bitwise operator", true, "This is a caption");
  console.log(help);
}

// C2-example-237 | C2-chapter-046
{
  const help = mx.mXparser.getHelpAsJson("type=Bitwise operator", false, "");
  console.log(help);
}

// C2-example-238 | C2-chapter-047
{
  const lists = [];
  try {
    lists.push(mx.mXparser.getKeyWords());
    lists.push(mx.mXparser.getKeyWords('type=Bitwise operator'));
    const counts = [];
    for (const words of lists) {
      if (words === null) throw new Error('Expected keyword arrays');
      counts.push(words.length);
    }
    console.log(counts);
  } finally {
    for (const words of lists) for (const word of words ?? []) word?.delete();
  }
}

// C2-example-239 | C2-chapter-047
{
  const e = new mx.Expression('');
  const lists = [];
  try {
    lists.push(e.getKeyWords());
    lists.push(e.getKeyWords('type=Bitwise operator'));
    const counts = [];
    for (const words of lists) {
      if (words === null) throw new Error('Expected keyword arrays');
      counts.push(words.length);
    }
    console.log(counts);
  } finally {
    for (const words of lists) for (const word of words ?? []) word?.delete();
    e.delete();
  }
}

// C2-example-240 | C2-chapter-047
{
  const words = mx.mXparser.getKeyWords();
  try {
    if (words === null) throw new Error('Expected keyword array');
    console.log([words.length]);
  } finally { for (const word of words ?? []) word?.delete(); }
}

// C2-example-241 | C2-chapter-047
{
  const words = mx.mXparser.getKeyWords("type=Bitwise operator");
  try {
    if (words === null) throw new Error('Expected keyword array');
    console.log([words.length]);
  } finally { for (const word of words ?? []) word?.delete(); }
}

// C2-example-242 | C2-chapter-047
{
  const words = mx.mXparser.getKeyWords('type=Bitwise operator');
  const resources = mx.StringModel.getStringResources();
  try {
    if (words === null || resources === null) throw new Error('Missing native help data');
    console.log([words.length]);
    for (const word of words) {
      if (word === null) throw new Error('Missing native keyword');
      console.log({ labels: [resources.KEYWORD, resources.DESCRIPTION, resources.SYNTAX, resources.SINCE, resources.TYPE],
        keyword: word.wordString, description: word.description, syntax: word.syntax, since: word.since,
        type: mx.Token.getTokenTypeDescription(word.wordTypeId), typeId: word.wordTypeId, id: word.wordId });
    }
  } finally {
    resources?.delete();
    for (const word of words ?? []) word?.delete();
  }
}

// C2-example-243 | C2-chapter-048
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("fr");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}

// C2-example-244 | C2-chapter-048
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("fr");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}

// C2-example-245 | C2-chapter-049
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("de");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}

// C2-example-246 | C2-chapter-049
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("de");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}

// C2-example-247 | C2-chapter-050
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("it");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}

// C2-example-248 | C2-chapter-050
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("it");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}

// C2-example-249 | C2-chapter-051
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("pl");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}

// C2-example-250 | C2-chapter-051
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("pl");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}

// C2-example-251 | C2-chapter-052
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("pt");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}

// C2-example-252 | C2-chapter-052
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("pt");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}

// C2-example-253 | C2-chapter-053
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("es");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}

// C2-example-254 | C2-chapter-053
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("es");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}

// C2-example-255 | C2-chapter-054
{
  const previousResources = mx.StringModel.getStringResources();
  const previousImplied = mx.mXparser.checkIfImpliedMultiplicationMode();
  try {
    mx.mXparser.disableImpliedMultiplicationMode();
    const e = new mx.Expression('2pi+3');
    try {
      mx.mXparser.changeLanguageTo('en');
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      mx.mXparser.changeLanguageTo("zh");
      console.log([e.getExpressionString(), e.calculate(), e.getErrorMessage()]);
      const decimal = new mx.Expression('1.5+2.5');
      const parameters = new mx.Expression('max(1,2)');
      try {
        if (decimal.calculate() !== 4 || parameters.calculate() !== 2)
          throw new Error('Language selection changed mathematical syntax');
      } finally { parameters.delete(); decimal.delete(); }
    } finally { e.delete(); }
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
    if (previousImplied) mx.mXparser.enableImpliedMultiplicationMode();
    else mx.mXparser.disableImpliedMultiplicationMode();
  }
}

// C2-example-256 | C2-chapter-054
{
  const previousResources = mx.StringModel.getStringResources();
  try {
    mx.mXparser.changeLanguageTo("zh");
    const help = mx.mXparser.getHelpAsHtmlTable();
    console.log(help);
  } finally {
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}

// C2-example-257 | C2-chapter-055
{
  const previousResources = mx.StringModel.getStringResources();
  const previousSelection = mx.mXparser.checkIfSelectBestMatchingLanguage();
  try {
    mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setDefaultEnglishStringResources();
    const resources = mx.StringModel.getStringResources();
    if (resources === null) throw new Error('Expected native text resources');
    try {
      mx.StringModel.setStringResources(resources);
      mx.StringModel.setDefaultStringResources();
      mx.StringModel.print();
      mx.StringModel.printDescriptions();
      resources.print();
      resources.printInitSrc();
    } finally { resources.delete(); }
  } finally {
    if (previousSelection) mx.mXparser.enableSelectBestMatchingLanguage();
    else mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}

// C2-example-258 | C2-chapter-055
{
  const previousResources = mx.StringModel.getStringResources();
  const previousSelection = mx.mXparser.checkIfSelectBestMatchingLanguage();
  const custom = new mx.StringResources();
  try {
    mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setDefaultEnglishStringResources();
    custom.USER_LANGUAGE = 'Polish';
    custom.NUMBER_LITERAL = 'Literał liczbowy';
    custom.NUMBER = 'Liczba';
    custom.ALL_HELP_CONTENT = 'Pomoc';
    custom.KEYWORD = 'Słowo kluczowe';
    custom.TYPE = 'Typ';
    custom.SYNTAX = 'Składnia';
    custom.SINCE = 'Od';
    custom.DESCRIPTION = 'Opis';
    custom.HELP_CONTENT_LIMITED_TO_QUERY = 'Zawartość pomocy została ograniczona do kwerendy';
    mx.mXparser.consolePrintln('Before change');
    mx.mXparser.consolePrintHelp('type=Number');
    mx.StringModel.setStringResources(custom);
    mx.mXparser.consolePrintln('After change');
    mx.mXparser.consolePrintHelp('type=Liczba');
    mx.StringModel.setDefaultStringResources();
    mx.mXparser.consolePrintln('Return to default');
    mx.mXparser.consolePrintHelp('type=Number');
  } finally {
    if (previousSelection) mx.mXparser.enableSelectBestMatchingLanguage();
    else mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setStringResources(previousResources);
    custom.delete();
    previousResources?.delete();
  }
}

// C2-example-259 | C2-chapter-055
{
  const previousResources = mx.StringModel.getStringResources();
  const previousSelection = mx.mXparser.checkIfSelectBestMatchingLanguage();
  try {
    mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setDefaultEnglishStringResources();
    const resources = mx.StringModel.getStringResources();
    if (resources === null) throw new Error('Expected native text resources');
    try {
      mx.mXparser.consolePrintln('Printing the list of variables that can be translated:');
      resources.printInitSrc();
    } finally { resources.delete(); }
  } finally {
    if (previousSelection) mx.mXparser.enableSelectBestMatchingLanguage();
    else mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}

// C2-example-260 | C2-chapter-056
{
  const previousResources = mx.StringModel.getStringResources();
  const previousSelection = mx.mXparser.checkIfSelectBestMatchingLanguage();
  try {
    mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setDefaultEnglishStringResources();
    mx.StringModel.printDescriptions();
  } finally {
    if (previousSelection) mx.mXparser.enableSelectBestMatchingLanguage();
    else mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setStringResources(previousResources);
    previousResources?.delete();
  }
}

// C2-example-261 | C2-chapter-056
{
  const previousResources = mx.StringModel.getStringResources();
  const previousSelection = mx.mXparser.checkIfSelectBestMatchingLanguage();
  const custom = new mx.StringResources();
  try {
    mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setDefaultEnglishStringResources();
    custom.USER_LANGUAGE = 'Polish';
    custom.NUMBER_LITERAL = 'Literał liczbowy';
    custom.NUMBER = 'Liczba';
    custom.ALL_HELP_CONTENT = 'Pomoc';
    custom.KEYWORD = 'Słowo kluczowe';
    custom.TYPE = 'Typ';
    custom.SYNTAX = 'Składnia';
    custom.SINCE = 'Od';
    custom.DESCRIPTION = 'Opis';
    custom.HELP_CONTENT_LIMITED_TO_QUERY = 'Zawartość pomocy została ograniczona do kwerendy';
    mx.StringModel.setStringResources(custom);
    const current = mx.StringModel.getStringResources();
    if (current === null) throw new Error('Expected installed native text resources');
    try { current.print(); } finally { current.delete(); }
  } finally {
    if (previousSelection) mx.mXparser.enableSelectBestMatchingLanguage();
    else mx.mXparser.disableSelectBestMatchingLanguage();
    mx.StringModel.setStringResources(previousResources);
    custom.delete();
    previousResources?.delete();
  }
}

// C2-example-262 | C2-chapter-057
{
  mx.License.consolePrintLicense();
}

// C2-example-263 | C2-chapter-058
{
  const example = await initMxParser();
  console.log(example.License.iConfirmNonCommercialUse('John Doe'));
}

// C2-example-264 | C2-chapter-058
{
  const example = await initMxParser();
  const isCallSuccessful = example.License.iConfirmNonCommercialUse('John Doe');
  const isConfirmed = example.License.checkIfUseTypeConfirmed();
  const message = example.License.getUseTypeConfirmationMessage();
  console.log('isCallSuccessful =', isCallSuccessful);
  console.log('isConfirmed =', isConfirmed);
  console.log('message =', message);
}

// C2-example-265 | C2-chapter-058
{
  const example = await initMxParser();
  console.log(example.License.iConfirmCommercialUse('John Doe'));
}

// C2-example-266 | C2-chapter-058
{
  const example = await initMxParser();
  const isCallSuccessful = example.License.iConfirmCommercialUse('John Doe');
  const isConfirmed = example.License.checkIfUseTypeConfirmed();
  const message = example.License.getUseTypeConfirmationMessage();
  console.log('isCallSuccessful =', isCallSuccessful);
  console.log('isConfirmed =', isConfirmed);
  console.log('message =', message);
}
