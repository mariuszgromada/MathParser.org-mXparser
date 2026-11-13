/*
 * @(#)LaTeXExporter.cs        6.2.0    2026-11-13
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2024 Mariusz Gromada - All rights reserved
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
using System;
using System.Collections.Generic;
using System.Text;
using System.Text.RegularExpressions;
using System.Globalization;
using org.mariuszgromada.math.mxparser.parsertokens;

namespace org.mariuszgromada.math.mxparser {


/// <summary>Internal, on-demand mathematical presentation of the runtime token stream.</summary>
/// <remarks><para>Version: 6.2.0</para></remarks>
internal sealed class LaTeXExporter {
	private LaTeXExporter() { }
	private const int MAX_TOKENS = 100000;
	private const int MAX_DEPTH = 256;
	// These describe mathematical presentation, not runtime reduction priority.
	private const int LOGICAL = 20, RELATION = 30, NOT = 40, ADDITIVE = 50;
	private const int PRODUCT = 60, SIGN = 70, POWER = 80, POSTFIX = 90, ATOM = 100;
	private const int MAX_OUTPUT = 4000000;
	private static readonly Regex NAME = new Regex("\\A(?:" + ParserSymbol.nameOnlyTokenRegExp + ")\\z");
	private static readonly Regex DECIMAL = new Regex("\\A(?:" + ParserSymbol.DECIMAL_REG_EXP + ")\\z");
	private static readonly Regex FRACTION = new Regex("\\A(?:[+-]?" + ParserSymbol.FRACTION + ")\\z");
	private static readonly FrozenMap<long, Rule> RULES = makeRules();
	private static readonly FrozenMap<String, String> UNICODE_NAMES = makeUnicodeNames();

	/// <remarks><para>Version: 6.2.0</para></remarks>
	private enum Style {
		TEMPLATE, OPERATOR, LITERAL, DELIMITER, DIRECT_FUNCTION, NAMED_FUNCTION,
		CASES_IF, CASES_IFF, CONTINUED_FRACTION, LIST_SUM, LIST_PRODUCT, MEAN,
		LIST_AND, LIST_OR, RANGE, RANGE_SAMPLE, INTEGRAL, DERIVATIVE,
		NTH_DERIVATIVE, DIFFERENCE, SOLVE, NORMAL
	}

	/// <remarks><para>Version: 6.2.0</para></remarks>
	private sealed class Slot {
		internal readonly int number;
		internal Slot(int number) { this.number = number; }
	}
	/// <remarks><para>Version: 6.2.0</para></remarks>
	private sealed class Rule {
		internal readonly String symbol;
		internal readonly object[] template;
		internal readonly Style style;
		internal readonly int[] arities;
		internal readonly int listStart;
		internal readonly String separator;
		internal readonly bool atomicPresentation;
		internal Rule(String symbol, String template, Style style, int[] arities, int listStart, String separator) {
			this.symbol = symbol;
			this.template = compileTemplate(template);
			this.style = style;
			this.arities = (int[])arities.Clone();
			this.listStart = listStart;
			this.separator = separator;
			this.atomicPresentation = LaTeXExporter.atomicPresentation(template);
		}
		internal bool accepts(int count) {
			if (arities.Length == 0) return count >= 1;
			foreach (int arity in arities) if (count == arity) return true;
			return false;
		}
	}
	/// <summary>Presentation metadata for static templates, not source-language parsing.
	/// A scalar token can display a quotient, power or function call (units and
	/// named constants), so token atomicity alone cannot decide parentheses.</summary>
	private static bool atomicPresentation(String template) {
		int depth = 0;
		for (int i = 0; i < template.Length; i++) {
			char c = template[i];
			if (c == '{') depth++;
			else if (c == '}') depth--;
			else if (depth == 0 && (c == '^' || c == '/' || c == '(')) return false;
		}
		return !template.StartsWith("\\frac", StringComparison.Ordinal);
	}

	private static long key(int type, int id) { return ((long)type << 32) | (id & 0xffffffffL); }
	private static Rule rule(Token token) { return RULES.get(key(token.tokenTypeId, token.tokenId)); }
	private static void register(Dictionary<long, Rule> rules, int type, int id, Rule rule) {
		if (rules.ContainsKey(key(type, id))) throw new InvalidOperationException("Duplicate LaTeX rule");
		rules.Add(key(type, id), rule);
	}
	private static void register(Dictionary<long, Rule> rules, int type, int id, String symbol,
			String template, Style style, params int[] arities) {
		register(rules, type, id, new Rule(symbol, template, style, arities, 0, ","));
	}
	private static void listRule(Dictionary<long, Rule> rules, int type, int id, String symbol,
			String template, Style style, int start, String separator) {
		register(rules, type, id, new Rule(symbol, template, style, new int[0], start, separator));
	}

	/// <summary>Compile only trusted, static templates. Substituted data is never parsed as a template.</summary>
	private static object[] compileTemplate(String template) {
		List<object> parts = new List<object>();
		StringBuilder text = new StringBuilder();
		for (int i = 0; i < template.Length; i++) {
			char c = template[i];
			if (c != '@') { text.Append(c); continue; }
			if (++i == template.Length) throw new InvalidOperationException("Incomplete LaTeX template");
			c = template[i];
			if (c == '@') { text.Append(c); continue; }
			if (text.Length > 0) { parts.Add(text.ToString()); text.Length = 0; }
			int number;
			if (c == '*') number = -2;
			else if (c == '#') number = -3;
			else if (c == '0') number = 0;
			else if (c == '+' || c == '-') {
				bool negative = c == '-';
				int start = ++i;
				while (i < template.Length && Char.IsDigit(template[i])) i++;
				if (i == start) throw new InvalidOperationException("Invalid LaTeX slot");
				number = Int32.Parse(template.Substring(start, (i--) - (start)));
				if (number < 1 || (negative && number != 1)) throw new InvalidOperationException("Invalid LaTeX operand");
				if (negative) number = -1;
			} else throw new InvalidOperationException("Unknown LaTeX slot");
			parts.Add(new Slot(number));
		}
		if (text.Length > 0) parts.Add(text.ToString());
		return parts.ToArray();
	}

	private static FrozenMap<long, Rule> makeRules() {
		Dictionary<long, Rule> rules = new Dictionary<long, Rule>();
		register(rules, ParserSymbol.NUMBER_TYPE_ID, ParserSymbol.NUMBER_ID, "", "", Style.LITERAL, 0);
		// Contextual structural operators use their symbol and Style.OPERATOR handler.
		// Their empty templates are intentional; only actually executed templates are stored.
		register(rules, Operator.TYPE_ID, Operator.PLUS_ID, "+", "", Style.OPERATOR);
		register(rules, Operator.TYPE_ID, Operator.MINUS_ID, "-", "", Style.OPERATOR);
		register(rules, Operator.TYPE_ID, Operator.MULTIPLY_ID, "\\cdot", "", Style.OPERATOR);
		register(rules, Operator.TYPE_ID, Operator.DIVIDE_ID, "\\frac", "", Style.OPERATOR);
		register(rules, Operator.TYPE_ID, Operator.POWER_ID, "^", "", Style.OPERATOR);
		register(rules, Operator.TYPE_ID, Operator.FACT_ID, "!", "", Style.OPERATOR);
		register(rules, Operator.TYPE_ID, Operator.MOD_ID, "", "\\operatorname{rem}(@-1,@+1)", Style.OPERATOR);
		register(rules, Operator.TYPE_ID, Operator.PERC_ID, "\\%", "", Style.OPERATOR);
		register(rules, Operator.TYPE_ID, Operator.TETRATION_ID, "", "", Style.OPERATOR);
		Rule squareRoot = new Rule("\\sqrt", "@0{@+1}", Style.TEMPLATE, new int[]{1}, 0, ",");
		register(rules, Operator.TYPE_ID, Operator.SQUARE_ROOT_ID, squareRoot);
		register(rules, Operator.TYPE_ID, Operator.CUBE_ROOT_ID, "\\sqrt", "@0[3]{@+1}", Style.OPERATOR);
		register(rules, Operator.TYPE_ID, Operator.FOURTH_ROOT_ID, "\\sqrt", "@0[4]{@+1}", Style.OPERATOR);
		register(rules, Operator.TYPE_ID, Operator.DIVIDE_QUOTIENT_ID, "", "\\left\\lfloor\\frac{@-1}{@+1}\\right\\rfloor", Style.OPERATOR);
		register(rules, BooleanOperator.TYPE_ID, BooleanOperator.AND_ID, "\\land", "", Style.OPERATOR);
		register(rules, BooleanOperator.TYPE_ID, BooleanOperator.NAND_ID, "\\uparrow", "", Style.OPERATOR);
		register(rules, BooleanOperator.TYPE_ID, BooleanOperator.OR_ID, "\\lor", "", Style.OPERATOR);
		register(rules, BooleanOperator.TYPE_ID, BooleanOperator.NOR_ID, "\\downarrow", "", Style.OPERATOR);
		register(rules, BooleanOperator.TYPE_ID, BooleanOperator.XOR_ID, "\\oplus", "", Style.OPERATOR);
		register(rules, BooleanOperator.TYPE_ID, BooleanOperator.IMP_ID, "\\Rightarrow", "", Style.OPERATOR);
		register(rules, BooleanOperator.TYPE_ID, BooleanOperator.CIMP_ID, "\\Leftarrow", "", Style.OPERATOR);
		register(rules, BooleanOperator.TYPE_ID, BooleanOperator.NIMP_ID, "\\nRightarrow", "", Style.OPERATOR);
		register(rules, BooleanOperator.TYPE_ID, BooleanOperator.CNIMP_ID, "\\nLeftarrow", "", Style.OPERATOR);
		register(rules, BooleanOperator.TYPE_ID, BooleanOperator.EQV_ID, "\\Leftrightarrow", "", Style.OPERATOR);
		register(rules, BooleanOperator.TYPE_ID, BooleanOperator.NEG_ID, "\\neg", "", Style.OPERATOR);
		register(rules, BinaryRelation.TYPE_ID, BinaryRelation.EQ_ID, "=", "", Style.OPERATOR);
		register(rules, BinaryRelation.TYPE_ID, BinaryRelation.NEQ_ID, "\\ne", "", Style.OPERATOR);
		register(rules, BinaryRelation.TYPE_ID, BinaryRelation.LT_ID, "<", "", Style.OPERATOR);
		register(rules, BinaryRelation.TYPE_ID, BinaryRelation.GT_ID, ">", "", Style.OPERATOR);
		register(rules, BinaryRelation.TYPE_ID, BinaryRelation.LEQ_ID, "\\le", "", Style.OPERATOR);
		register(rules, BinaryRelation.TYPE_ID, BinaryRelation.GEQ_ID, "\\ge", "", Style.OPERATOR);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.SIN_ID, "\\sin", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.COS_ID, "\\cos", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.TAN_ID, "\\tan", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.CTAN_ID, "\\cot", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.SEC_ID, "\\sec", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.COSEC_ID, "\\csc", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ASIN_ID, "\\arcsin", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ACOS_ID, "\\arccos", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ATAN_ID, "\\arctan", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ACTAN_ID, "\\operatorname{arccot}", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.LN_ID, "\\ln", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.LOG2_ID, "\\log_{2}", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.LOG10_ID, "\\log_{10}", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.RAD_ID, "\\operatorname{rad}", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.EXP_ID, "\\exp", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.SQRT_ID, squareRoot);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.SINH_ID, "\\sinh", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.COSH_ID, "\\cosh", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.TANH_ID, "\\tanh", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.COTH_ID, "\\coth", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.SECH_ID, "\\operatorname{sech}", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.CSCH_ID, "\\operatorname{csch}", "@0 @+1", Style.DIRECT_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.DEG_ID, "\\operatorname{deg}", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ABS_ID, "", "\\left\\lvert @+1\\right\\rvert", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.SGN_ID, "\\operatorname{sgn}", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.FLOOR_ID, "", "\\left\\lfloor @+1\\right\\rfloor", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.CEIL_ID, "", "\\left\\lceil @+1\\right\\rceil", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.NOT_ID, "\\neg", "@0 @+1", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ARSINH_ID, "\\operatorname{arsinh}", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ARCOSH_ID, "\\operatorname{arcosh}", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ARTANH_ID, "\\operatorname{artanh}", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ARCOTH_ID, "\\operatorname{arcoth}", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ARSECH_ID, "\\operatorname{arsech}", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ARCSCH_ID, "\\operatorname{arcsch}", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.SA_ID, "\\operatorname{sinc}_{\\pi}", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.SINC_ID, "\\operatorname{sinc}_{0}", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.BELL_NUMBER_ID, "", "B_{@+1}", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.LUCAS_NUMBER_ID, "", "L_{@+1}", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.FIBONACCI_NUMBER_ID, "", "F_{@+1}", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.HARMONIC_NUMBER_ID, "", "H_{@+1}", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.IS_PRIME_ID, "", "\\mathbf{1}_{\\mathbb{P}}(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.PRIME_COUNT_ID, "", "\\pi(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.EXP_INT_ID, "\\operatorname{Ei}", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.LOG_INT_ID, "\\operatorname{li}", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.OFF_LOG_INT_ID, "\\operatorname{Li}", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.GAUSS_ERF_ID, "\\operatorname{erf}", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.GAUSS_ERFC_ID, "\\operatorname{erfc}", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.GAUSS_ERF_INV_ID, "", "\\operatorname{erf}^{-1}(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.GAUSS_ERFC_INV_ID, "", "\\operatorname{erfc}^{-1}(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ULP_ID, "\\operatorname{ulp}", "@0(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ISNAN_ID, "", "\\mathbf{1}_{\\mathrm{NaN}}(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.NDIG10_ID, "", "\\operatorname{digits}_{10}(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.NFACT_ID, "", "\\omega(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ARCSEC_ID, "\\operatorname{arcsec}", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.ARCCSC_ID, "\\operatorname{arccsc}", "@0(@+1)", Style.NAMED_FUNCTION, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.GAMMA_ID, "", "\\Gamma(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.LAMBERT_W0_ID, "", "W_{0}(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.LAMBERT_W1_ID, "", "W_{-1}(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.SGN_GAMMA_ID, "", "\\operatorname{sgn}\\!\\bigl(\\Gamma(@+1)\\bigr)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.LOG_GAMMA_ID, "", "\\ln\\left\\lvert\\Gamma(@+1)\\right\\rvert", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.DI_GAMMA_ID, "", "\\psi(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.PARAM_ID, "", "\\operatorname{param}_{\\mathrm{UDF}}(@+1)", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.RND_STUDENT_T_ID, "", "\\operatorname{draw}(t_{@+1})", Style.TEMPLATE, 1);
		register(rules, Function1Arg.TYPE_ID, Function1Arg.RND_CHI2_ID, "", "\\operatorname{draw}(\\chi^{2}_{@+1})", Style.TEMPLATE, 1);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.LOG_ID, "", "\\log_{@+1}(@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.MOD_ID, "", "\\operatorname{rem}(@+1,@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.BINOM_COEFF_ID, "", "\\binom{@+1}{@+2}", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.BERNOULLI_NUMBER_ID, "", "B_{@+1}(@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.STIRLING1_NUMBER_ID, "", "\\left[\\genfrac{}{}{0pt}{}{@+1}{@+2}\\right]", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.STIRLING2_NUMBER_ID, "", "\\left\\{\\genfrac{}{}{0pt}{}{@+1}{@+2}\\right\\}", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.WORPITZKY_NUMBER_ID, "", "\\mathrm{Worp}_{@+1,@+2}", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.EULER_NUMBER_ID, "", "\\left\\langle\\genfrac{}{}{0pt}{}{@+1}{@+2}\\right\\rangle", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.KRONECKER_DELTA_ID, "", "\\delta_{@+1,@+2}", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.EULER_POLYNOMIAL_ID, "", "E_{@+1}(@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.HARMONIC_NUMBER_ID, "", "H_{@+2}^{(@+1)}", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.RND_UNIFORM_CONT_ID, "", "\\operatorname{draw}(\\mathcal U(@+1,@+2))", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.RND_UNIFORM_DISCR_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[@+1,@+2])", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.ROUND_ID, "", "\\operatorname{round}_{\\mathrm{half\\,up}}(@+1,@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.RND_NORMAL_ID, "", "", Style.NORMAL, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.NDIG_ID, "", "\\operatorname{digits}_{@+2}(@+1)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.DIGIT10_ID, "", "\\operatorname{digit}_{10}(@+1,@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.FACTVAL_ID, "", "p_{@+2}(@+1)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.FACTEXP_ID, "", "\\nu_{@+2}(@+1)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.ROOT_ID, "", "\\sqrt[{@+1}]{@+2}", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.INC_GAMMA_LOWER_ID, "", "\\gamma(@+1,@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.INC_GAMMA_UPPER_ID, "", "\\Gamma(@+1,@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.REG_GAMMA_LOWER_ID, "", "P(@+1,@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.REG_GAMMA_UPPER_ID, "", "Q(@+1,@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.PERMUTATIONS_ID, "", "\\left(@+1\\right)^{\\underline{@+2}}", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.BETA_ID, "", "B(@+1,@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.LOG_BETA_ID, "", "\\ln B(@+1,@+2)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.PDF_STUDENT_T_ID, "", "f_{t_{@+2}}(@+1)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.CDF_STUDENT_T_ID, "", "F_{t_{@+2}}(@+1)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.QNT_STUDENT_T_ID, "", "Q_{t_{@+2}}(@+1)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.PDF_CHI2_ID, "", "f_{\\chi^2_{@+2}}(@+1)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.CDF_CHI2_ID, "", "F_{\\chi^2_{@+2}}(@+1)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.QNT_CHI2_ID, "", "Q_{\\chi^2_{@+2}}(@+1)", Style.TEMPLATE, 2);
		register(rules, Function2Arg.TYPE_ID, Function2Arg.RND_F_SNEDECOR_ID, "", "\\operatorname{draw}(\\mathsf F_{@+1,@+2})", Style.TEMPLATE, 2);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.IF_CONDITION_ID, "", "", Style.CASES_IF, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.CHI_ID, "", "\\mathbf{1}_{(@+2,@+3)}(@+1)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.CHI_LR_ID, "", "\\mathbf{1}_{[@+2,@+3]}(@+1)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.CHI_L_ID, "", "\\mathbf{1}_{[@+2,@+3)}(@+1)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.CHI_R_ID, "", "\\mathbf{1}_{(@+2,@+3]}(@+1)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.PDF_UNIFORM_CONT_ID, "", "f_{\\mathcal U(@+2,@+3)}(@+1)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.CDF_UNIFORM_CONT_ID, "", "F_{\\mathcal U(@+2,@+3)}(@+1)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.QNT_UNIFORM_CONT_ID, "", "Q_{\\mathcal U(@+2,@+3)}(@+1)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.PDF_NORMAL_ID, "f", "", Style.NORMAL, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.CDF_NORMAL_ID, "F", "", Style.NORMAL, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.QNT_NORMAL_ID, "Q", "", Style.NORMAL, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.DIGIT_ID, "", "\\operatorname{digit}_{@+3}(@+1,@+2)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.INC_BETA_ID, "", "B_{@+1}(@+2,@+3)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.REG_BETA_ID, "", "I_{@+1}(@+2,@+3)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.PDF_F_SNEDECOR_ID, "", "f_{\\mathsf F_{@+2,@+3}}(@+1)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.CDF_F_SNEDECOR_ID, "", "F_{\\mathsf F_{@+2,@+3}}(@+1)", Style.TEMPLATE, 3);
		register(rules, Function3Arg.TYPE_ID, Function3Arg.QNT_F_SNEDECOR_ID, "", "Q_{\\mathsf F_{@+2,@+3}}(@+1)", Style.TEMPLATE, 3);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.IFF_ID, "", "", Style.CASES_IFF);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.MIN_ID, "\\min", "@0(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.MAX_ID, "\\max", "@0(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.CONT_FRAC_ID, "", "", Style.CONTINUED_FRACTION);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.CONT_POL_ID, "", "K_{@#}(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.GCD_ID, "\\gcd", "@0(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.LCM_ID, "\\operatorname{lcm}", "@0(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.SUM_ID, "", "", Style.LIST_SUM);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.PROD_ID, "", "", Style.LIST_PRODUCT);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.AVG_ID, "", "", Style.MEAN);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.VAR_ID, "", "s^2(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.STD_ID, "", "s(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.RND_LIST_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathrm{list}}(@*))", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.COALESCE_ID, "", "\\operatorname{first}_{\\ne\\mathrm{NaN}}(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.OR_ID, "", "", Style.LIST_OR);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.AND_ID, "", "", Style.LIST_AND);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.XOR_ID, "", "\\operatorname{exactlyOne}(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.ARGMIN_ID, "", "\\operatorname*{arg\\,min}_{\\mathrm{first},\\,1}(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.ARGMAX_ID, "", "\\operatorname*{arg\\,max}_{\\mathrm{first},\\,1}(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.MEDIAN_ID, "", "\\operatorname{median}(@*)", Style.TEMPLATE);
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.MODE_ID, "", "\\operatorname{mode}(@*)", Style.TEMPLATE);
		listRule(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.BASE_ID, "", "\\operatorname{value}_{@+1}(@*)", Style.TEMPLATE, 1, ",");
		register(rules, FunctionVariadic.TYPE_ID, FunctionVariadic.NDIST_ID, "", "\\operatorname{nDistinct}(@*)", Style.TEMPLATE);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.SUM_ID, "\\sum", "", Style.RANGE, 4, 5);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.PROD_ID, "\\prod", "", Style.RANGE, 4, 5);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.INT_ID, "", "", Style.INTEGRAL, 4);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.DER_ID, "", "", Style.DERIVATIVE, 2, 3, 4, 5);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.DER_LEFT_ID, "-", "", Style.DERIVATIVE, 2, 3, 4, 5);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.DER_RIGHT_ID, "+", "", Style.DERIVATIVE, 2, 3, 4, 5);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.DERN_ID, "", "", Style.NTH_DERIVATIVE, 3, 5);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.FORW_DIFF_ID, "\\Delta", "", Style.DIFFERENCE, 2, 3);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.BACKW_DIFF_ID, "\\nabla", "", Style.DIFFERENCE, 2, 3);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.AVG_ID, "\\operatorname{mean}", "", Style.RANGE_SAMPLE, 4, 5);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.VAR_ID, "s^2", "", Style.RANGE_SAMPLE, 4, 5);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.STD_ID, "s", "", Style.RANGE_SAMPLE, 4, 5);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.MIN_ID, "\\min", "", Style.RANGE_SAMPLE, 4, 5);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.MAX_ID, "\\max", "", Style.RANGE_SAMPLE, 4, 5);
		register(rules, CalculusOperator.TYPE_ID, CalculusOperator.SOLVE_ID, "", "", Style.SOLVE, 4);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.PI_ID, "", "\\pi", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.EULER_ID, "", "\\mathrm e", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.EULER_MASCHERONI_ID, "", "\\gamma", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.GOLDEN_RATIO_ID, "", "\\varphi", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.PLASTIC_ID, "", "\\rho_{\\mathrm{plastic}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.EMBREE_TREFETHEN_ID, "", "\\sigma_{\\mathrm{Embree\\!-\\!Trefethen}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.FEIGENBAUM_DELTA_ID, "", "\\delta_{\\mathrm F}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.FEIGENBAUM_ALPHA_ID, "", "\\lvert\\alpha_{\\mathrm F}\\rvert", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.TWIN_PRIME_ID, "", "C_{2,\\mathrm{twin}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MEISSEL_MERTEENS_ID, "", "M_{\\mathrm{MM}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.BRAUN_TWIN_PRIME_ID, "", "B_{2,\\mathrm{Brun}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.BRAUN_PRIME_QUADR_ID, "", "B_{4,\\mathrm{Brun}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.BRUIJN_NEWMAN_ID, "", "\\Lambda_{\\mathrm{dBN}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.CATALAN_ID, "", "G_{\\mathrm{Cat}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.LANDAU_RAMANUJAN_ID, "", "K_{\\mathrm{LR}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.VISWANATH_ID, "", "\\lambda_{\\mathrm{Viswanath}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.LEGENDRE_ID, "", "B_{\\mathrm{Legendre}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.RAMANUJAN_SOLDNER_ID, "", "\\mu_{\\mathrm{RS}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.ERDOS_BORWEIN_ID, "", "E_{\\mathrm{EB}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.BERNSTEIN_ID, "", "\\beta_{\\mathrm{Bernstein}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.GAUSS_KUZMIN_WIRSING_ID, "", "\\lambda_{\\mathrm{GKW}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.HAFNER_SARNAK_MCCURLEY_ID, "", "C_{\\mathrm{HSM}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.GOLOMB_DICKMAN_ID, "", "\\lambda_{\\mathrm{GD}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.CAHEN_ID, "", "C_{\\mathrm{Cahen}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.LAPLACE_LIMIT_ID, "", "e_{\\mathrm{Laplace}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.ALLADI_GRINSTEAD_ID, "", "C_{\\mathrm{AG}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.LENGYEL_ID, "", "\\lambda_{\\mathrm{Lengyel}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.LEVY_ID, "", "L_{\\mathrm{L\\acute evy}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.APERY_ID, "", "\\zeta(3)", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MILLS_ID, "", "A_{\\mathrm{Mills}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.BACKHOUSE_ID, "", "B_{\\mathrm{Backhouse}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.PORTER_ID, "", "C_{\\mathrm{Porter}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.LIEB_QUARE_ICE_ID, "", "W_{\\mathrm{ice}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.NIVEN_ID, "", "C_{\\mathrm{Niven}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.SIERPINSKI_ID, "", "K_{\\mathrm{Sierpi\\acute nski}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.KHINCHIN_ID, "", "K_{0,\\mathrm{Khinchin}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.FRANSEN_ROBINSON_ID, "", "F_{\\mathrm{FR}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.LANDAU_ID, "", "L_{\\mathrm{Landau}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.PARABOLIC_ID, "", "P_{\\mathrm{parab}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.OMEGA_ID, "", "\\Omega", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MRB_ID, "", "C_{\\mathrm{MRB}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.LI2_ID, "", "\\operatorname{li}(2)", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.GOMPERTZ_ID, "", "G_{\\mathrm{Gompertz}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.LIGHT_SPEED_ID, "", "c", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.GRAVITATIONAL_CONSTANT_ID, "", "G", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.GRAVIT_ACC_EARTH_ID, "", "g_{\\mathrm n}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.PLANCK_CONSTANT_ID, "", "h", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.PLANCK_CONSTANT_REDUCED_ID, "", "\\hbar", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.PLANCK_LENGTH_ID, "", "\\ell_{\\mathrm P}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.PLANCK_MASS_ID, "", "m_{\\mathrm P}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.PLANCK_TIME_ID, "", "t_{\\mathrm P}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.LIGHT_YEAR_ID, "", "\\mathrm{ly}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.ASTRONOMICAL_UNIT_ID, "", "\\mathrm{au}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.PARSEC_ID, "", "\\mathrm{pc}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.KILOPARSEC_ID, "", "\\mathrm{kpc}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.EARTH_RADIUS_EQUATORIAL_ID, "", "R_{\\mathrm{Earth,eq}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.EARTH_RADIUS_POLAR_ID, "", "R_{\\mathrm{Earth,pol}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.EARTH_RADIUS_MEAN_ID, "", "R_{\\mathrm{Earth,mean}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.EARTH_MASS_ID, "", "M_{\\mathrm{Earth}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.EARTH_SEMI_MAJOR_AXIS_ID, "", "a_{\\mathrm{Earth}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MOON_RADIUS_MEAN_ID, "", "R_{\\mathrm{Moon,mean}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MOON_MASS_ID, "", "M_{\\mathrm{Moon}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MOO_SEMI_MAJOR_AXIS_ID, "", "a_{\\mathrm{Moon}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.SOLAR_RADIUS_ID, "", "R_{\\odot}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.SOLAR_MASS_ID, "", "M_{\\odot}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MERCURY_RADIUS_MEAN_ID, "", "R_{\\mathrm{Mercury,mean}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MERCURY_MASS_ID, "", "M_{\\mathrm{Mercury}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_ID, "", "a_{\\mathrm{Mercury}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.VENUS_RADIUS_MEAN_ID, "", "R_{\\mathrm{Venus,mean}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.VENUS_MASS_ID, "", "M_{\\mathrm{Venus}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.VENUS_SEMI_MAJOR_AXIS_ID, "", "a_{\\mathrm{Venus}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MARS_RADIUS_MEAN_ID, "", "R_{\\mathrm{Mars,mean}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MARS_MASS_ID, "", "M_{\\mathrm{Mars}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MARS_SEMI_MAJOR_AXIS_ID, "", "a_{\\mathrm{Mars}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.JUPITER_RADIUS_MEAN_ID, "", "R_{\\mathrm{Jupiter,mean}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.JUPITER_MASS_ID, "", "M_{\\mathrm{Jupiter}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_ID, "", "a_{\\mathrm{Jupiter}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.SATURN_RADIUS_MEAN_ID, "", "R_{\\mathrm{Saturn,mean}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.SATURN_MASS_ID, "", "M_{\\mathrm{Saturn}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.SATURN_SEMI_MAJOR_AXIS_ID, "", "a_{\\mathrm{Saturn}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.URANUS_RADIUS_MEAN_ID, "", "R_{\\mathrm{Uranus,mean}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.URANUS_MASS_ID, "", "M_{\\mathrm{Uranus}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.URANUS_SEMI_MAJOR_AXIS_ID, "", "a_{\\mathrm{Uranus}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.NEPTUNE_RADIUS_MEAN_ID, "", "R_{\\mathrm{Neptune,mean}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.NEPTUNE_MASS_ID, "", "M_{\\mathrm{Neptune}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_ID, "", "a_{\\mathrm{Neptune}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.TRUE_ID, "", "\\mathrm{true}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.FALSE_ID, "", "\\mathrm{false}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.NPAR_ID, "", "n_{\\mathrm{args}}", Style.TEMPLATE, 0);
		register(rules, ConstantValue.TYPE_ID, ConstantValue.NAN_ID, "", "\\mathrm{NaN}", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.UNIFORM_ID, "", "\\operatorname{draw}(\\mathcal U[0,1))", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.INT_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-2^{31},2^{31}-1])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.INT1_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{1},10^{1}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.INT2_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{2},10^{2}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.INT3_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{3},10^{3}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.INT4_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{4},10^{4}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.INT5_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{5},10^{5}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.INT6_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{6},10^{6}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.INT7_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{7},10^{7}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.INT8_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{8},10^{8}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.INT9_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{9},10^{9}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT0_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,2^{31}-2])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT0_1_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{1}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT0_2_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{2}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT0_3_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{3}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT0_4_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{4}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT0_5_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{5}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT0_6_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{6}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT0_7_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{7}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT0_8_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{8}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT0_9_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{9}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT1_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,2^{31}-2])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT1_1_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{1}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT1_2_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{2}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT1_3_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{3}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT1_4_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{4}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT1_5_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{5}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT1_6_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{6}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT1_7_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{7}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT1_8_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{8}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NAT1_9_ID, "", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{9}])", Style.TEMPLATE, 0);
		register(rules, RandomVariable.TYPE_ID, RandomVariable.NOR_ID, "", "\\operatorname{draw}(\\mathcal N(0,1))", Style.TEMPLATE, 0);
		register(rules, BitwiseOperator.TYPE_ID, BitwiseOperator.COMPL_ID, "", "\\operatorname{bitNot}(@+1)", Style.OPERATOR);
		register(rules, BitwiseOperator.TYPE_ID, BitwiseOperator.AND_ID, "", "\\operatorname{bitAnd}(@-1,@+1)", Style.OPERATOR);
		register(rules, BitwiseOperator.TYPE_ID, BitwiseOperator.XOR_ID, "", "\\operatorname{bitXor}(@-1,@+1)", Style.OPERATOR);
		register(rules, BitwiseOperator.TYPE_ID, BitwiseOperator.OR_ID, "", "\\operatorname{bitOr}(@-1,@+1)", Style.OPERATOR);
		register(rules, BitwiseOperator.TYPE_ID, BitwiseOperator.LEFT_SHIFT_ID, "", "\\operatorname{shl}(@-1,@+1)", Style.OPERATOR);
		register(rules, BitwiseOperator.TYPE_ID, BitwiseOperator.RIGHT_SHIFT_ID, "", "\\operatorname{ashr}(@-1,@+1)", Style.OPERATOR);
		register(rules, BitwiseOperator.TYPE_ID, BitwiseOperator.NAND_ID, "", "\\operatorname{bitNand}(@-1,@+1)", Style.OPERATOR);
		register(rules, BitwiseOperator.TYPE_ID, BitwiseOperator.NOR_ID, "", "\\operatorname{bitNor}(@-1,@+1)", Style.OPERATOR);
		register(rules, BitwiseOperator.TYPE_ID, BitwiseOperator.XNOR_ID, "", "\\operatorname{bitXnor}(@-1,@+1)", Style.OPERATOR);
		register(rules, Unit.TYPE_ID, Unit.PERC_ID, "", "10^{-2}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.PERM_ID, "", "10^{-3}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.YOTTA_ID, "", "10^{24}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.ZETTA_ID, "", "10^{21}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.EXA_ID, "", "10^{18}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.PETA_ID, "", "10^{15}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.TERA_ID, "", "10^{12}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.GIGA_ID, "", "10^{9}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MEGA_ID, "", "10^{6}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.KILO_ID, "", "10^{3}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.HECTO_ID, "", "10^{2}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.DECA_ID, "", "10^{1}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.DECI_ID, "", "10^{-1}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.CENTI_ID, "", "10^{-2}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MILLI_ID, "", "10^{-3}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MICRO_ID, "", "10^{-6}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.NANO_ID, "", "10^{-9}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.PICO_ID, "", "10^{-12}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.FEMTO_ID, "", "10^{-15}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.ATTO_ID, "", "10^{-18}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.ZEPTO_ID, "", "10^{-21}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.YOCTO_ID, "", "10^{-24}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.METRE_ID, "", "\\mathrm{m}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.KILOMETRE_ID, "", "\\mathrm{km}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.CENTIMETRE_ID, "", "\\mathrm{cm}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MILLIMETRE_ID, "", "\\mathrm{mm}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.INCH_ID, "", "\\mathrm{in}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.YARD_ID, "", "\\mathrm{yd}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.FEET_ID, "", "\\mathrm{ft}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MILE_ID, "", "\\mathrm{mi}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.NAUTICAL_MILE_ID, "", "\\mathrm{nmi}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.METRE2_ID, "", "\\mathrm{m}^{2}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.CENTIMETRE2_ID, "", "\\mathrm{cm}^{2}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MILLIMETRE2_ID, "", "\\mathrm{mm}^{2}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.ARE_ID, "", "\\mathrm{a}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.HECTARE_ID, "", "\\mathrm{ha}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.ACRE_ID, "", "\\mathrm{acre}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.KILOMETRE2_ID, "", "\\mathrm{km}^{2}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MILLIMETRE3_ID, "", "\\mathrm{mm}^{3}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.CENTIMETRE3_ID, "", "\\mathrm{cm}^{3}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.METRE3_ID, "", "\\mathrm{m}^{3}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.KILOMETRE3_ID, "", "\\mathrm{km}^{3}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MILLILITRE_ID, "", "\\mathrm{mL}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.LITRE_ID, "", "\\mathrm{L}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.GALLON_ID, "", "\\mathrm{gal}_{\\mathrm{US}}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.PINT_ID, "", "\\mathrm{pint}_{\\mathrm{US}}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.SECOND_ID, "", "\\mathrm{s}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MILLISECOND_ID, "", "\\mathrm{ms}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MINUTE_ID, "", "\\mathrm{min}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.HOUR_ID, "", "\\mathrm{h}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.DAY_ID, "", "\\mathrm{d}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.WEEK_ID, "", "\\mathrm{wk}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.JULIAN_YEAR_ID, "", "\\mathrm{a}_{\\mathrm{J}}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.KILOGRAM_ID, "", "\\mathrm{kg}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.GRAM_ID, "", "\\mathrm{g}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MILLIGRAM_ID, "", "\\mathrm{mg}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.DECAGRAM_ID, "", "\\mathrm{dag}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.TONNE_ID, "", "\\mathrm{t}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.OUNCE_ID, "", "\\mathrm{oz}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.POUND_ID, "", "\\mathrm{lb}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.BIT_ID, "", "\\mathrm{bit}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.KILOBIT_ID, "", "\\mathrm{Kibit}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MEGABIT_ID, "", "\\mathrm{Mibit}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.GIGABIT_ID, "", "\\mathrm{Gibit}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.TERABIT_ID, "", "\\mathrm{Tibit}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.PETABIT_ID, "", "\\mathrm{Pibit}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.EXABIT_ID, "", "\\mathrm{Eibit}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.ZETTABIT_ID, "", "\\mathrm{Zibit}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.YOTTABIT_ID, "", "\\mathrm{Yibit}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.BYTE_ID, "", "\\mathrm{B}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.KILOBYTE_ID, "", "\\mathrm{KiB}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MEGABYTE_ID, "", "\\mathrm{MiB}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.GIGABYTE_ID, "", "\\mathrm{GiB}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.TERABYTE_ID, "", "\\mathrm{TiB}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.PETABYTE_ID, "", "\\mathrm{PiB}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.EXABYTE_ID, "", "\\mathrm{EiB}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.ZETTABYTE_ID, "", "\\mathrm{ZiB}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.YOTTABYTE_ID, "", "\\mathrm{YiB}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.JOULE_ID, "", "\\mathrm{J}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.ELECTRONO_VOLT_ID, "", "\\mathrm{eV}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.KILO_ELECTRONO_VOLT_ID, "", "\\mathrm{keV}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MEGA_ELECTRONO_VOLT_ID, "", "\\mathrm{MeV}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.GIGA_ELECTRONO_VOLT_ID, "", "\\mathrm{GeV}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.TERA_ELECTRONO_VOLT_ID, "", "\\mathrm{TeV}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.METRE_PER_SECOND_ID, "", "\\mathrm{m}/\\mathrm{s}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.KILOMETRE_PER_HOUR_ID, "", "\\mathrm{km}/\\mathrm{h}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MILE_PER_HOUR_ID, "", "\\mathrm{mi}/\\mathrm{h}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.KNOT_ID, "", "\\mathrm{kn}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.METRE_PER_SECOND2_ID, "", "\\mathrm{m}/\\mathrm{s}^{2}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.KILOMETRE_PER_HOUR2_ID, "", "\\mathrm{km}/\\mathrm{h}^{2}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MILE_PER_HOUR2_ID, "", "\\mathrm{mi}/\\mathrm{h}^{2}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.RADIAN_ARC_ID, "", "\\mathrm{rad}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.DEGREE_ARC_ID, "", "{}^{\\circ}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.MINUTE_ARC_ID, "", "{}^{\\prime}", Style.TEMPLATE, 0);
		register(rules, Unit.TYPE_ID, Unit.SECOND_ARC_ID, "", "{}^{\\prime\\prime}", Style.TEMPLATE, 0);
		register(rules, ParserSymbol.TYPE_ID, ParserSymbol.LEFT_PARENTHESES_ID, "", "", Style.DELIMITER, 0);
		register(rules, ParserSymbol.TYPE_ID, ParserSymbol.RIGHT_PARENTHESES_ID, "", "", Style.DELIMITER, 0);
		register(rules, ParserSymbol.TYPE_ID, ParserSymbol.COMMA_ID, "", "", Style.DELIMITER, 0);
		register(rules, ParserSymbol.TYPE_ID, ParserSymbol.BLANK_ID, "", "", Style.DELIMITER, 0);
		return new FrozenMap<long, Rule>(rules);
	}

	internal static String format(List<Token> tokens) {
		Node root = reconstruct(tokens);
		return root == null ? "" : new Renderer(root).render();
	}

	private static bool @is(Node n, int type, int id) {
		return n.token.tokenTypeId == type && n.token.tokenId == id;
	}
	private static bool identifier(Node n) {
		return n.form == Form.ATOM && !n.token.isNumber()
				&& (n.token.isIdentifier() || n.token.tokenTypeId == Token.NOT_MATCHED);
	}
	private static bool decimalAtom(Node n) {
		return n.form == Form.ATOM && n.token.isNumber() && DECIMAL.IsMatch(n.token.tokenStr);
	}
	private static bool unsignedNumber(Node n) {
		return decimalAtom(n) && !n.token.tokenStr.StartsWith("-", StringComparison.Ordinal)
				&& !n.token.tokenStr.StartsWith("+", StringComparison.Ordinal) && n.token.tokenStr.IndexOf('e') < 0
				&& n.token.tokenStr.IndexOf('E') < 0;
	}
	private static bool singleSymbol(Node n) {
		return identifier(n) && (n.token.tokenStr.Length == 1 || @is(n, ConstantValue.TYPE_ID, ConstantValue.PI_ID)
				|| @is(n, ConstantValue.TYPE_ID, ConstantValue.EULER_ID));
	}
	private static bool compactProduct(Node n) {
		return n.form == Form.BINARY && @is(n, Operator.TYPE_ID, Operator.MULTIPLY_ID)
				&& unsignedNumber(n.children[0]) && singleSymbol(n.children[1]);
	}
	private static bool bareArgument(Node n) {
		Rule r = rule(n.token);
		return unsignedNumber(n) || (identifier(n) && (r == null || r.atomicPresentation)) || compactProduct(n);
	}
	private static bool headExponent(Node n) {
		Rule r = rule(n.token);
		if (identifier(n) && (r == null || r.atomicPresentation)) return true;
		return unsignedNumber(n) && matches(n.token.tokenStr, "[0-9]+")
				&& !matches(n.token.tokenStr, "0+");
	}
	private static bool negative(Node n) {
		return (n.form == Form.PREFIX && @is(n, Operator.TYPE_ID, Operator.MINUS_ID))
				|| (n.form == Form.ATOM && n.token.isNumber() && n.token.tokenStr.StartsWith("-", StringComparison.Ordinal));
	}
	private static Node presentation(Node n) {
		Rule r = rule(n.token);
		while (r != null && r.style == Style.CONTINUED_FRACTION && n.children.Count == 1) {
			n = n.children[0];
			r = rule(n.token);
		}
		return n;
	}
	private static bool signed(Node n) {
		n = presentation(n);
		return (n.form == Form.PREFIX && isSign(n.token)) || negative(n)
				|| (n.form == Form.ATOM && n.token.isNumber() && n.token.tokenStr.StartsWith("+", StringComparison.Ordinal));
	}
	private static bool delimited(Node n) {
		n = presentation(n);
		Rule r = rule(n.token);
		if (n.form == Form.PREFIX && n.token.isUnicodeRootOperator()) return true;
		if (r == null) return n.form == Form.CALL;
		if (r.style == Style.OPERATOR) return n.token.tokenTypeId == BitwiseOperator.TYPE_ID
				|| @is(n, Operator.TYPE_ID, Operator.MOD_ID) || @is(n, Operator.TYPE_ID, Operator.DIVIDE_QUOTIENT_ID);
		return @is(n, Function1Arg.TYPE_ID, Function1Arg.ABS_ID) || @is(n, Function1Arg.TYPE_ID, Function1Arg.FLOOR_ID)
				|| @is(n, Function1Arg.TYPE_ID, Function1Arg.CEIL_ID) || @is(n, Function1Arg.TYPE_ID, Function1Arg.SQRT_ID)
				|| @is(n, Function2Arg.TYPE_ID, Function2Arg.ROOT_ID) || @is(n, Function2Arg.TYPE_ID, Function2Arg.BINOM_COEFF_ID);
	}
	private static bool powerBaseNeedsGrouping(Node n) {
		n = presentation(n);
		if (n.token.isNumber()) return !unsignedNumber(n);
		if (delimited(n)) return false;
		return strength(n) < ATOM || n.form == Form.CALL;
	}
	private static bool extensive(Node n) {
		n = presentation(n);
		Rule r = rule(n.token);
		return r != null && (r.style == Style.RANGE || r.style == Style.INTEGRAL
				|| @is(n, CalculusOperator.TYPE_ID, CalculusOperator.MIN_ID) || @is(n, CalculusOperator.TYPE_ID, CalculusOperator.MAX_ID));
	}
	private static int strength(Node n) {
		n = presentation(n);
		Rule r = rule(n.token);
		if (n.form == Form.CALL && r != null) {
			if (r.style == Style.LIST_SUM || (r.style == Style.CONTINUED_FRACTION && n.children.Count > 1)) return ADDITIVE;
			if (r.style == Style.LIST_PRODUCT) return PRODUCT;
			if (r.style == Style.LIST_OR || r.style == Style.LIST_AND) return LOGICAL;
			if (extensive(n)) return ADDITIVE;
		}
		if (delimited(n)) return ATOM;
		if (n.form == Form.ATOM && n.token.isNumber() && !unsignedNumber(n)) return POWER;
		if (n.form == Form.ATOM && r != null && !r.atomicPresentation) return POWER;
		if (n.form == Form.ATOM || n.form == Form.CALL) return negative(n) ? SIGN : ATOM;
		if (n.form == Form.PREFIX) return isSign(n.token) ? SIGN : n.token.isUnicodeRootOperator() ? ATOM : NOT;
		if (n.form == Form.POSTFIX) return POSTFIX;
		if (n.token.tokenTypeId == Operator.TYPE_ID) {
			if (rightAssociative(n.token)) return POWER;
			if (isSign(n.token)) return ADDITIVE;
			if (@is(n, Operator.TYPE_ID, Operator.DIVIDE_ID)) return POWER;
			if (@is(n, Operator.TYPE_ID, Operator.DIVIDE_QUOTIENT_ID)) return ATOM;
			return PRODUCT;
		}
		return n.token.tokenTypeId == BinaryRelation.TYPE_ID ? RELATION : LOGICAL;
	}

	/// <remarks><para>Version: 6.2.0</para></remarks>
	private sealed class Visit {
		internal readonly Node node;
		internal readonly bool forceCall;
		internal readonly bool wrap;
		internal readonly Node exponent;
		internal Visit(Node node, bool forceCall, bool wrap, Node exponent) {
			this.node = node;
			this.forceCall = forceCall;
			this.wrap = wrap;
			this.exponent = exponent;
		}
	}
	private static Visit visit(Node node) { return new Visit(node, false, false, null); }
	private static Visit grouped(Node node, bool wrap, bool forceCall) { return new Visit(node, forceCall, wrap, null); }
	private static bool asciiLetter(char c) { return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'); }
	private static bool endsControlWord(StringBuilder text) {
		int i = text.Length - 1;
		if (i < 0 || !asciiLetter(text[i])) return false;
		while (i >= 0 && asciiLetter(text[i])) i--;
		int slashes = 0;
		while (i >= 0 && text[i--] == '\\') slashes++;
		return slashes % 2 != 0;
	}

	/// <summary>Iterative emission keeps long flat expressions off the Java call stack and
	/// writes each generated fragment once to the bounded final buffer.</summary>
	/// <remarks><para>Version: 6.2.0</para></remarks>
	private sealed class Renderer {
		private readonly Stack<object> pending = new Stack<object>();
		private readonly StringBuilder result = new StringBuilder();
		private readonly HashSet<String> names = new HashSet<String>();
		private readonly HashSet<String> builtinSymbols = new HashSet<String>();
		private int outputDepth;
		internal Renderer(Node root) {
			pending.Push(visit(root));
			Stack<Node> nodes = new Stack<Node>();
			nodes.Push(root);
			while (!(nodes.Count == 0)) {
				Node n = nodes.Pop();
				names.Add(n.token.tokenStr);
				Rule r = rule(n.token);
				if (n.form == Form.ATOM && r != null && r.style == Style.TEMPLATE) {
					StringBuilder symbol = new StringBuilder();
					foreach (object part in r.template) if (part is String) symbol.Append(part);
					builtinSymbols.Add(symbol.ToString());
				}
				foreach (Node child in n.children) nodes.Push(child);
			}
		}
		internal String render() {
			while (!(pending.Count == 0)) {
				object item = pending.Pop();
				if (item is String) {
					String text = (String)item;
					// A TeX control word consumes subsequent ASCII letters. Check the
					// actual emitted boundary, including operands of postfix operators.
					if (!(text.Length == 0) && asciiLetter(text[0]) && endsControlWord(result)) result.Append(' ');
					if (text.Length > MAX_OUTPUT - result.Length) throw error(0, "output budget exceeded");
					for (int i = 0; i < text.Length; i++) {
						if (text[i] == '{' && ++outputDepth > MAX_DEPTH)
							throw error(0, "presentation nesting budget exceeded");
						if (text[i] == '}' && --outputDepth < 0) throw error(0, "unbalanced rendering rule");
					}
					result.Append(text);
				} else {
					Visit v = (Visit)item;
					List<object> output = new List<object>();
					if (v.wrap) {
						output.Add("(");
						output.Add(new Visit(v.node, v.forceCall, false, v.exponent));
						output.Add(")");
					} else emit(output, v);
					for (int i = output.Count - 1; i >= 0; i--) pending.Push(output[i]);
				}
			}
			if (outputDepth != 0) throw error(0, "unbalanced rendering rule");
			return result.ToString();
		}
		private void emit(List<object> @out, Visit v) {
			Node n = presentation(v.node);
			Rule r = rule(n.token);
			if (r == null) {
				if (n.token.tokenTypeId != Token.NOT_MATCHED && n.token.tokenTypeId != Argument.TYPE_ID
						&& n.token.tokenTypeId != Function.TYPE_ID && n.token.tokenTypeId != Constant.TYPE_ID
						&& n.token.tokenTypeId != RecursiveArgument.TYPE_ID_RECURSIVE)
					throw error(n.index, "no rule for builtin token");
				String symbol = name(n.token.tokenStr, n.form == Form.CALL, n.index);
				@out.Add(builtinSymbols.Contains(symbol) ? "{" + symbol + "}_{\\mathrm{user}}" : symbol);
				if (n.form == Form.CALL) { @out.Add("("); list(@out, n.children, 0, ",", 0); @out.Add(")"); }
				return;
			}
			if (n.form == Form.CALL && (!r.accepts(n.children.Count)
					|| (r.style == Style.CASES_IFF && n.children.Count % 2 != 0)))
				throw error(n.index, "invalid function arity: " + n.children.Count);
			switch (r.style) {
				case Style.LITERAL: @out.Add(number(n)); return;
				case Style.DELIMITER: throw error(n.index, "unexpected delimiter");
				case Style.OPERATOR: @operator(@out, n, r, v.forceCall); return;
				case Style.DIRECT_FUNCTION: case Style.NAMED_FUNCTION: function(@out, n, r, v); return;
				case Style.CASES_IF: case Style.CASES_IFF: cases(@out, n, r.style == Style.CASES_IFF); return;
				case Style.CONTINUED_FRACTION: continuedFraction(@out, n); return;
				case Style.LIST_SUM: list(@out, n.children, 0, "+", ADDITIVE); return;
				case Style.LIST_PRODUCT: list(@out, n.children, 0, "\\cdot ", PRODUCT); return;
				case Style.MEAN:
					@out.Add("\\frac{"); list(@out, n.children, 0, "+", ADDITIVE);
					@out.Add("}{" + n.children.Count + "}"); return;
				case Style.LIST_AND: case Style.LIST_OR:
					for (int i = 0; i < n.children.Count; i++) {
						if (i > 0) @out.Add(r.style == Style.LIST_AND ? "\\land " : "\\lor ");
						condition(@out, n.children[i], true);
					} return;
				case Style.RANGE: case Style.RANGE_SAMPLE: range(@out, n, r); return;
				case Style.INTEGRAL: integral(@out, n); return;
				case Style.DERIVATIVE: case Style.NTH_DERIVATIVE: derivative(@out, n, r); return;
				case Style.DIFFERENCE:
					variable(n.children[1]);
					@out.Add(r.symbol + "_{"); @out.Add(visit(n.children[1])); @out.Add(",");
					@out.Add(n.children.Count == 3 ? (object)visit(n.children[2]) : "1");
					@out.Add("}["); @out.Add(visit(n.children[0])); @out.Add("]"); return;
				case Style.SOLVE:
					variable(n.children[1]);
					@out.Add("\\operatorname{root}_{"); @out.Add(visit(n.children[1])); @out.Add("\\in[");
					@out.Add(visit(n.children[2])); @out.Add(","); @out.Add(visit(n.children[3]));
					@out.Add("]}("); @out.Add(grouped(n.children[0], strength(n.children[0]) <= RELATION, false));
					@out.Add("=0)"); return;
				case Style.NORMAL: normal(@out, n, r); return;
				default: template(@out, n, r); break;
			}
		}
		private void function(List<object> @out, Node n, Rule r, Visit v) {
			Node arg = n.children[0];
			@out.Add(r.symbol);
			if (v.exponent != null) { @out.Add("^{"); @out.Add(visit(v.exponent)); @out.Add("}"); }
			if (!v.forceCall && bareArgument(arg)) { if (v.exponent == null) @out.Add(" "); @out.Add(visit(arg)); }
			else {
				bool tall = @is(arg, Operator.TYPE_ID, Operator.DIVIDE_ID);
				@out.Add(tall ? "\\left(" : "("); @out.Add(visit(arg)); @out.Add(tall ? "\\right)" : ")");
			}
		}
		private void template(List<object> @out, Node n, Rule r) {
			if (@is(n, Function1Arg.TYPE_ID, Function1Arg.NOT_ID)) {
				@out.Add(r.symbol + " "); @out.Add(grouped(n.children[0], strength(n.children[0]) <= NOT, false)); return;
			}
			for (int i = 0; i < r.template.Length; i++) {
				object part = r.template[i];
				if (part is String) { @out.Add(part); continue; }
				int slot = ((Slot)part).number;
				if (slot == 0) @out.Add(r.symbol);
			else if (slot == -2) {
				if (@is(n, FunctionVariadic.TYPE_ID, FunctionVariadic.BASE_ID) && n.children.Count == r.listStart)
					@out.Add("\\varepsilon");
				else list(@out, n.children, r.listStart, r.separator, 0);
			}
				else if (slot == -3) @out.Add(Convert.ToString(n.children.Count - r.listStart));
				else {
					int argument = n.form == Form.BINARY ? slot < 0 ? 0 : 1 : slot < 0 ? 0 : slot - 1;
					if (argument < 0 || argument >= n.children.Count) throw error(n.index, "invalid rule operand");
					Node child = n.children[argument];
					// A single-character subscript needs no braces. This is template
					// composition, never a rewrite of already emitted LaTeX.
					if (i > 0 && i + 1 < r.template.Length && r.template[i - 1] is String
							&& !@is(n, Function2Arg.TYPE_ID, Function2Arg.LOG_ID)
							&& ((String)r.template[i - 1]).EndsWith("_{", StringComparison.Ordinal)
							&& r.template[i + 1] is String && ((String)r.template[i + 1]).StartsWith("}", StringComparison.Ordinal)
							&& child.form == Form.ATOM && matches(child.token.tokenStr, "[A-Za-z0-9]")) {
						String previous = (String)removeLast(@out);
						@out.Add(previous.Substring(0, (previous.Length - 1) - (0)));
						@out.Add(visit(child));
						String next = ((String)r.template[++i]).Substring(1);
						if (!(next.Length == 0)) @out.Add(next);
					} else @out.Add(visit(child));
				}
			}
		}
		private void list(List<object> @out, IList<Node> nodes, int start, String separator, int minimum) {
			for (int i = start; i < nodes.Count; i++) {
				if (i > start) @out.Add(separator);
				Node child = nodes[i];
				bool wrap = strength(child) < minimum || (i > start && signed(child))
						|| extensive(child);
				@out.Add(grouped(child, wrap, minimum == PRODUCT));
			}
		}
		private void @operator(List<object> @out, Node n, Rule r, bool forceCall) {
			Node left = presentation(n.children[0]);
			if (n.form == Form.PREFIX) {
				if (isSign(n.token)) {
					@out.Add(r.symbol); @out.Add(grouped(left, strength(left) <= ADDITIVE || signed(left), forceCall));
				} else if (n.token.isUnicodeRootOperator()) template(@out, n, r);
				else if (n.token.tokenTypeId == BooleanOperator.TYPE_ID) {
					@out.Add(r.symbol + " "); @out.Add(grouped(left, strength(left) <= NOT, false));
				} else template(@out, n, r);
				return;
			}
			if (n.form == Form.POSTFIX) {
				@out.Add(grouped(left, !delimited(left) && (powerBaseNeedsGrouping(left) || left.form == Form.POSTFIX), false));
				@out.Add(r.symbol); return;
			}
			Node right = presentation(n.children[1]);
			if (@is(n, Operator.TYPE_ID, Operator.POWER_ID)) {
				Rule baseRule = rule(left.token);
				if (left.form == Form.CALL && baseRule != null && baseRule.style == Style.DIRECT_FUNCTION && headExponent(right))
					@out.Add(new Visit(left, forceCall, false, right));
				else {
					bool wrap = powerBaseNeedsGrouping(left);
					@out.Add(grouped(left, wrap, false)); @out.Add("^{"); @out.Add(visit(right)); @out.Add("}");
				} return;
			}
			if (@is(n, Operator.TYPE_ID, Operator.DIVIDE_ID)) {
				@out.Add("\\frac{"); @out.Add(visit(left)); @out.Add("}{"); @out.Add(visit(right)); @out.Add("}"); return;
			}
			if (@is(n, Operator.TYPE_ID, Operator.MULTIPLY_ID)) {
				Rule unitRule = rule(right.token);
				if (right.token.tokenTypeId == Unit.TYPE_ID && right.form == Form.ATOM && unsignedNumber(left)
						&& unitRule != null && unitRule.template.Length > 0
						&& unitRule.template[0] is String && !((String)unitRule.template[0]).StartsWith("10^", StringComparison.Ordinal)) {
					if (angle(@out, left, right)) return;
					@out.Add(visit(left)); @out.Add("\\,"); @out.Add(visit(right)); return;
				}
				bool compact = unsignedNumber(left) && (singleSymbol(right)
						|| (@is(right, Operator.TYPE_ID, Operator.POWER_ID) && singleSymbol(right.children[0])));
				@out.Add(grouped(left, strength(left) < PRODUCT, !compact));
				if (!compact) {
					Rule rightRule = rule(right.token);
					bool command = right.form != Form.POSTFIX && rightRule != null && (rightRule.symbol.StartsWith("\\", StringComparison.Ordinal)
							|| (rightRule.template.Length > 0 && rightRule.template[0] is String
							&& ((String)rightRule.template[0]).StartsWith("\\", StringComparison.Ordinal)));
					@out.Add(strength(right) <= PRODUCT || signed(right) || command ? "\\cdot" : "\\cdot ");
				}
				@out.Add(grouped(right, strength(right) <= PRODUCT || signed(right), !compact)); return;
			}
			if (isSign(n.token)) {
				@out.Add(grouped(left, strength(left) < ADDITIVE || extensive(left), false)); @out.Add(r.symbol);
				@out.Add(grouped(right, strength(right) <= ADDITIVE || signed(right), false)); return;
			}
			if (@is(n, Operator.TYPE_ID, Operator.TETRATION_ID)) {
				@out.Add("\\mathord{{}^{"); @out.Add(visit(right)); @out.Add("}\\!");
				@out.Add(grouped(left, strength(left) < ATOM, true)); @out.Add("}"); return;
			}
			if (n.token.tokenTypeId == BooleanOperator.TYPE_ID || n.token.tokenTypeId == BinaryRelation.TYPE_ID) {
				int minimum = n.token.tokenTypeId == BinaryRelation.TYPE_ID ? RELATION : LOGICAL;
				@out.Add(grouped(left, strength(left) <= minimum, false)); @out.Add(r.symbol);
				if (r.symbol.StartsWith("\\", StringComparison.Ordinal)) @out.Add(" ");
				@out.Add(grouped(right, strength(right) <= minimum, false)); return;
			}
			template(@out, n, r);
		}
		private bool angle(List<object> @out, Node value, Node unit) {
			String symbol;
			if (@is(unit, Unit.TYPE_ID, Unit.DEGREE_ARC_ID)) symbol = "^{\\circ}";
			else if (@is(unit, Unit.TYPE_ID, Unit.MINUTE_ARC_ID)) symbol = "^{\\prime}";
			else if (@is(unit, Unit.TYPE_ID, Unit.SECOND_ARC_ID)) symbol = "^{\\prime\\prime}";
			else return false;
			@out.Add(visit(value)); @out.Add(symbol); return true;
		}
		private void condition(List<object> @out, Node n, bool asOperand) {
			bool predicate = n.token.tokenTypeId == BinaryRelation.TYPE_ID || n.token.tokenTypeId == BooleanOperator.TYPE_ID
					|| @is(n, Function1Arg.TYPE_ID, Function1Arg.NOT_ID) || @is(n, Function1Arg.TYPE_ID, Function1Arg.IS_PRIME_ID)
					|| @is(n, Function1Arg.TYPE_ID, Function1Arg.ISNAN_ID)
					|| @is(n, ConstantValue.TYPE_ID, ConstantValue.TRUE_ID) || @is(n, ConstantValue.TYPE_ID, ConstantValue.FALSE_ID)
					|| @is(n, FunctionVariadic.TYPE_ID, FunctionVariadic.AND_ID) || @is(n, FunctionVariadic.TYPE_ID, FunctionVariadic.OR_ID)
					|| @is(n, FunctionVariadic.TYPE_ID, FunctionVariadic.XOR_ID);
			@out.Add(grouped(n, predicate ? asOperand && strength(n) <= LOGICAL : strength(n) <= RELATION, false));
			if (!predicate) @out.Add("\\ne0");
		}
		private void cases(List<object> @out, Node n, bool multiple) {
			@out.Add("\\begin{cases}");
			if (!multiple) {
				@out.Add(visit(n.children[1])); @out.Add("&\\text{if }"); condition(@out, n.children[0], false);
				@out.Add("\\\\"); @out.Add(visit(n.children[2])); @out.Add("&\\text{otherwise}");
			} else {
				for (int i = 0; i < n.children.Count; i += 2) {
					if (i > 0) @out.Add("\\\\");
					@out.Add(visit(n.children[i + 1])); @out.Add(i == 0 ? "&\\text{if }" : "&\\text{else if }");
					condition(@out, n.children[i], false);
				}
				@out.Add("\\\\\\text{undefined}&\\text{otherwise}");
			}
			@out.Add("\\end{cases}");
		}
		private void continuedFraction(List<object> @out, Node n) {
			for (int i = 0; i < n.children.Count; i++) {
				@out.Add(grouped(n.children[i], i + 1 < n.children.Count && strength(n.children[i]) < ADDITIVE, false));
				if (i + 1 < n.children.Count) @out.Add("+\\frac{1}{");
			}
			for (int i = 1; i < n.children.Count; i++) @out.Add("}");
		}
		private void normal(List<object> @out, Node n, Rule r) {
			bool draw = n.token.tokenTypeId == Function2Arg.TYPE_ID;
			int offset = draw ? 0 : 1;
			@out.Add(draw ? "\\operatorname{draw}(\\mathcal N(" : r.symbol + "_{\\mathcal N(");
			@out.Add(visit(n.children[offset])); @out.Add(",");
			Node sigma = n.children[offset + 1];
			@out.Add(grouped(sigma, powerBaseNeedsGrouping(sigma), false)); @out.Add("^{2}");
			if (draw) @out.Add("))");
			else { @out.Add(")}("); @out.Add(visit(n.children[0])); @out.Add(")"); }
		}
		private void variable(Node n) {
			if (!identifier(n) || n.token.tokenTypeId == ConstantValue.TYPE_ID || n.token.tokenTypeId == Unit.TYPE_ID)
				throw error(n.index, "calculus variable must be an identifier");
		}
		private void integral(List<object> @out, Node n) {
			variable(n.children[1]);
			@out.Add("\\int"); script(@out, n.children[2], '_'); script(@out, n.children[3], '^');
			Node body = n.children[0];
			@out.Add(grouped(body, strength(body) <= ADDITIVE, true));
			@out.Add("\\,\\mathrm{d}"); @out.Add(visit(n.children[1]));
		}
		private void script(List<object> @out, Node n, char kind) {
			bool single = n.form == Form.ATOM && matches(n.token.tokenStr, "[A-Za-z0-9]");
			@out.Add(kind.ToString() + (single ? "" : "{")); @out.Add(visit(n));
			if (!single) @out.Add("}");
		}
		private void derivative(List<object> @out, Node n, Rule r) {
			bool nth = r.style == Style.NTH_DERIVATIVE;
			Node x = n.children[nth ? 2 : 1];
			variable(x);
			bool point = !nth && (n.children.Count == 3 || n.children.Count == 5);
			if (point) @out.Add("\\left.");
			if (!nth && !(r.symbol.Length == 0)) {
				@out.Add("D"); script(@out, x, '_'); @out.Add("^" + r.symbol + "[");
			} else if (nth) {
				@out.Add("\\frac{\\mathrm d^{"); @out.Add(visit(n.children[1]));
				@out.Add("}}{\\mathrm d "); @out.Add(visit(x)); @out.Add("^{");
				@out.Add(visit(n.children[1])); @out.Add("}}[");
			} else { @out.Add("\\frac{\\mathrm d}{\\mathrm d "); @out.Add(visit(x)); @out.Add("}["); }
			@out.Add(visit(n.children[0])); @out.Add("]");
			if (point) {
				@out.Add("\\right\\rvert_{"); @out.Add(visit(x)); @out.Add("=");
				@out.Add(visit(n.children[2])); @out.Add("}");
			}
		}
		private String freshIndex() {
			String candidate = "k";
			for (int i = 1; names.Contains(candidate); i++) candidate = "k" + i;
			names.Add(candidate);
			return candidate.Length == 1 ? candidate : "k_{" + candidate.Substring(1) + "}";
		}
		private void range(List<object> @out, Node n, Rule r) {
			Node index = n.children[0], a = n.children[1], b = n.children[2], body = n.children[3];
			variable(index);
			Node step = n.children.Count == 5 ? n.children[4] : null;
			DecimalLiteral av = literalValue(a), bv = literalValue(b), hv = step == null ? null : literalValue(step);
			bool descending = av != null && bv != null && av.compareTo(bv) > 0;
			bool fractional = (av == null && decimalAtom(a)) || (bv == null && decimalAtom(b)) || (av != null && av.fractional())
					|| (bv != null && bv.fractional());
			bool ordinary = (step == null || (hv != null && hv.isOne()))
					&& !descending && !fractional;
			bool aggregate = r.style == Style.RANGE;
			bool extremum = @is(n, CalculusOperator.TYPE_ID, CalculusOperator.MIN_ID)
					|| @is(n, CalculusOperator.TYPE_ID, CalculusOperator.MAX_ID);
			@out.Add(r.symbol);
			if (!aggregate && !extremum) @out.Add("\\left((");
			if (!aggregate && !extremum) { @out.Add(visit(body)); @out.Add(")"); }
			@out.Add("_{");
			if (ordinary) {
				@out.Add(visit(index)); @out.Add("="); @out.Add(visit(a));
			} else {
				String k = freshIndex();
				@out.Add("\\substack{"); @out.Add(visit(index)); @out.Add("="); @out.Add(visit(a));
				bool minus = hv != null ? hv.sign < 0 : step == null && descending;
				if (step == null || (hv != null && hv.isUnitMagnitude())) {
					@out.Add(minus ? "-" : "+"); @out.Add(k);
				} else if (hv != null) {
					@out.Add(minus ? "-" : "+");
					if (minus && step.form == Form.PREFIX) @out.Add(visit(step.children[0]));
					else if (minus && step.form == Form.ATOM) @out.Add(numberText(step.token.tokenStr.Substring(1), step.index));
					else @out.Add(visit(step));
					@out.Add(k);
				} else {
					@out.Add("+"); @out.Add(k); @out.Add("\\cdot "); @out.Add(grouped(step, strength(step) < PRODUCT, true));
				}
				@out.Add("\\\\" + k + "\\in\\mathbb Z");
				if (step != null && hv == null) {
					@out.Add(",\\;0\\le " + k + "\\le\\frac{");
					@out.Add(grouped(b, strength(b) < ADDITIVE, false)); @out.Add("-");
					@out.Add(grouped(a, strength(a) <= ADDITIVE || negative(a), false));
					@out.Add("}{"); @out.Add(visit(step)); @out.Add("}");
				} else {
					@out.Add("_{\\ge0},\\,"); @out.Add(visit(index)); @out.Add(minus ? "\\ge" : "\\le");
					@out.Add(visit(b));
				}
				@out.Add("}");
			}
			@out.Add("}");
			if (ordinary) { @out.Add("^{"); @out.Add(visit(b)); @out.Add("}"); }
			if (!aggregate && !extremum) @out.Add("\\right)");
			else @out.Add(grouped(body, strength(body) <= ADDITIVE, false));
		}
	}

	/// <summary>Decimal spelling metadata only: no floating evaluation or arbitrary-precision
	/// library. The same character/32-bit-integer algorithm ports to C# and C++.
	/// Excessive exponents remain unclassified and use explicit symbolic ranges.</summary>
	/// <remarks><para>Version: 6.2.0</para></remarks>
	private sealed class DecimalLiteral {
		internal readonly int sign, order;
		internal readonly String digits;
		internal DecimalLiteral(int sign, int order, String digits) {
			this.sign = sign; this.order = order; this.digits = digits;
		}
		internal bool fractional() { return sign != 0 && order < digits.Length; }
		internal bool isUnitMagnitude() { return sign != 0 && order == 1 && digits.Equals("1"); }
		internal bool isOne() { return sign > 0 && isUnitMagnitude(); }
		internal int compareTo(DecimalLiteral other) {
			if (sign != other.sign) return (sign).CompareTo(other.sign);
			if (sign == 0) return 0;
			if (order != other.order) return sign * (order).CompareTo(other.order);
			for (int i = 0; i < Math.Max(digits.Length, other.digits.Length); i++) {
				char a = i < digits.Length ? digits[i] : '0';
				char b = i < other.digits.Length ? other.digits[i] : '0';
				if (a != b) return sign * (a).CompareTo(b);
			}
			return 0;
		}
	}
	private static DecimalLiteral literalValue(Node n) {
		bool negate = false;
		if (n.form == Form.PREFIX && isSign(n.token)) {
			negate = @is(n, Operator.TYPE_ID, Operator.MINUS_ID);
			n = n.children[0];
		}
		if (!decimalAtom(n)) return null;
		String text = n.token.tokenStr;
		int start = text.StartsWith("-", StringComparison.Ordinal) || text.StartsWith("+", StringComparison.Ordinal) ? 1 : 0;
		int sign = text.StartsWith("-", StringComparison.Ordinal) ? -1 : 1;
		if (negate) sign = -sign;
		int e = Math.Max(text.IndexOf('e'), text.IndexOf('E'));
		int end = e < 0 ? text.Length : e;
		int exponent = 0;
		if (e >= 0) {
			int pos = e + 1, exponentSign = 1;
			if (text[pos] == '+' || text[pos] == '-') {
				if (text[pos] == '-') exponentSign = -1;
				pos++;
			}
			for (; pos < text.Length; pos++) {
				if (exponent > 100000) return null;
				exponent = exponent * 10 + text[pos] - '0';
			}
			exponent *= exponentSign;
		}
		StringBuilder digits = new StringBuilder();
		int whole = end - start;
		for (int i = start; i < end; i++) {
			if (text[i] == '.') whole = i - start; else digits.Append(text[i]);
		}
		int first = 0, last = digits.Length;
		while (first < last && digits[first] == '0') first++;
		if (first == last) return new DecimalLiteral(0, 0, "0");
		while (last > first && digits[last - 1] == '0') last--;
		return new DecimalLiteral(sign, whole - first + exponent, digits.ToString(first, last - first));
	}
	private static int compareUnsignedIntegers(String a, String b) {
		int i = 0, j = 0;
		while (i + 1 < a.Length && a[i] == '0') i++;
		while (j + 1 < b.Length && b[j] == '0') j++;
		if (a.Length - i != b.Length - j) return (a.Length - i).CompareTo(b.Length - j);
		return String.CompareOrdinal(a.Substring(i), b.Substring(j));
	}

	private static String number(Node n) { return numberText(n.token.tokenStr, n.index); }
	private static String numberText(String s, int index) {
		if (s.Length > 100000) throw error(index, "literal budget exceeded");
		if (DECIMAL.IsMatch(s)) {
			int e = Math.Max(s.IndexOf('e'), s.IndexOf('E'));
			if (e >= 0) return decimalText(s.Substring(0, e)) + "\\times 10^{" + s.Substring(e + 1) + "}";
			return decimalText(s);
		}
		if (FRACTION.IsMatch(s)) {
			String[] parts = s.Split(new char[] {'_'}, StringSplitOptions.None);
			if (parts.Length == 2) return "\\frac{" + parts[0] + "}{" + parts[1] + "}";
			String fraction = "\\frac{" + parts[1] + "}{" + parts[2] + "}";
			if (parts[0].StartsWith("-", StringComparison.Ordinal) || compareUnsignedIntegers(parts[1], parts[2]) >= 0)
				return "(" + parts[0] + "+" + fraction + ")";
			return parts[0] + "\\," + fraction;
		}
		int start = s.StartsWith("-", StringComparison.Ordinal) || s.StartsWith("+", StringComparison.Ordinal) ? 1 : 0;
		int dot = s.IndexOf('.', start);
		if (dot > start) {
			String prefix = s.Substring(start, (dot) - (start));
			int @base;
			if (prefix.Equals("o", StringComparison.OrdinalIgnoreCase)) @base = 8;
			else if (prefix.Equals("h", StringComparison.OrdinalIgnoreCase)) @base = 16;
			else if (prefix.Equals("b", StringComparison.OrdinalIgnoreCase)) @base = 2;
			else if (matches(prefix, "[bB][0-9]{1,2}")) @base = Int32.Parse(prefix.Substring(1));
			else throw error(index, "invalid numeric literal");
			if (@base < 1 || @base > 36) throw error(index, "invalid numeral base");
			String digits = s.Substring(dot + 1);
			if ((digits.Length == 0) && @base != 1) throw error(index, "missing numeral digits");
			for (int i = 0; i < digits.Length; i++) {
				char c = digits[i];
				if (c > 127 || (@base == 1 ? c != '1' : (c >= '0' && c <= '9' ? c - '0' : c >= 'a' && c <= 'z' ? c - 'a' + 10 : c >= 'A' && c <= 'Z' ? c - 'A' + 10 : 36) >= @base))
					throw error(index, "invalid numeral digit");
			}
			return s.Substring(0, start) + "(" + ((digits.Length == 0) ? "\\varepsilon" : "\\mathrm{" + digits + "}") + ")_{" + @base + "}";
		}
		throw error(index, "invalid numeric literal");
	}
	private static String decimalText(String s) {
		if (s.StartsWith(".", StringComparison.Ordinal)) return "0" + s;
		if (s.StartsWith("-.", StringComparison.Ordinal) || s.StartsWith("+.", StringComparison.Ordinal)) return s.Substring(0, 1) + "0" + s.Substring(1);
		return s;
	}
	private static String name(String source, bool function, int index) {
		bool bracketed = source.StartsWith("[", StringComparison.Ordinal) && source.EndsWith("]", StringComparison.Ordinal);
		String s = bracketed ? source.Substring(1, source.Length - 2) : source;
		if (s.Length > 100000 || !NAME.IsMatch(s)) throw error(index, "invalid identifier");
		String unicode = UNICODE_NAMES.get(s);
		if (unicode != null) return bracketed ? "[" + unicode + "]" : function ? "\\operatorname{" + unicode + "}" : unicode;
		String safe = s.Replace("_", "\\_");
		if (bracketed) return "[\\mathrm{" + safe + "}]";
		if (s.Length == 1 && Char.IsLetter(s[0])) return safe;
		return (function ? "\\operatorname{" : "\\mathit{") + safe + "}";
	}
	private static FrozenMap<String, String> makeUnicodeNames() {
		Dictionary<String, String> names = new Dictionary<String, String>();
		String letters = "αβγδεζηθικλμνξοπρςστυφχψωΑΒΓΔΕΖΗΘΙΚΛΜΝΞΟΠΡΣΤΥΦΧΨΩ∑∏ℿ∆∇∫ℼℇⅇℯ∂";
		String[] latex = {"\\alpha", "\\beta", "\\gamma", "\\delta", "\\epsilon", "\\zeta", "\\eta", "\\theta", "\\iota", "\\kappa", "\\lambda", "\\mu", "\\nu", "\\xi", "o", "\\pi", "\\rho", "\\varsigma", "\\sigma", "\\tau", "\\upsilon", "\\varphi", "\\chi", "\\psi", "\\omega",
			"A", "B", "\\Gamma", "\\Delta", "E", "Z", "H", "\\Theta", "I", "K", "\\Lambda", "M", "N", "\\Xi", "O", "\\Pi", "P", "\\Sigma", "T", "\\Upsilon", "\\Phi", "X", "\\Psi", "\\Omega",
			"\\mathit{\\Sigma}", "\\mathit{\\Pi}", "\\mathit{\\Pi}", "\\mathit{\\Delta}", "\\mathit{\\nabla}", "\\mathit{\\int}", "\\mathit{\\pi}", "\\mathit{E}", "\\mathit{e}", "\\mathit{e}", "\\mathit{\\partial}"};
		if (letters.Length != latex.Length) throw new InvalidOperationException("Incomplete Unicode name alphabet");
		for (int i = 0; i < latex.Length; i++) names[letters.Substring(i, 1)] = latex[i];
		return new FrozenMap<String, String>(names);
	}

	/// <remarks><para>Version: 6.2.0</para></remarks>
	internal enum Form { ATOM, CALL, PREFIX, POSTFIX, BINARY }

	/// <remarks><para>Version: 6.2.0</para></remarks>
	internal sealed class Node {
		internal readonly Token token;
		internal readonly int index;
		internal readonly Form form;
		internal readonly IList<Node> children;
		internal Node(Token token, int index, Form form, IList<Node> children) {
			this.token = token;
			this.index = index;
			this.form = form;
			this.children = new List<Node>(children).AsReadOnly();
		}
	}

	/// <remarks><para>Version: 6.2.0</para></remarks>
	private sealed class Part {
		internal readonly Token token;
		internal readonly int index;
		internal Node node;
		internal Part previous, next;
		internal int version;
		internal bool removed;
		internal Part(Token token, int index, Node node) {
			this.token = token;
			this.index = index;
			this.node = node;
		}
	}

	/// <remarks><para>Version: 6.2.0</para></remarks>
	private sealed class Scope {
		internal readonly Token call;
		internal readonly int index;
		internal readonly int level;
		internal readonly List<Part> parts = new List<Part>();
		internal readonly IList<Node> arguments = new List<Node>();
		internal Scope(Token call, int index, int level) {
			this.call = call;
			this.index = index;
			this.level = level;
		}
	}

	internal static InvalidOperationException error(int index, String reason) {
		return new InvalidOperationException("LaTeX export: " + reason + " (token " + index + ")");
	}

	private static bool isCall(Token token) {
		int type = token.tokenTypeId;
		return type == Function1Arg.TYPE_ID || type == Function2Arg.TYPE_ID
				|| type == Function3Arg.TYPE_ID || type == FunctionVariadic.TYPE_ID
				|| type == CalculusOperator.TYPE_ID || type == Function.TYPE_ID
				|| type == RecursiveArgument.TYPE_ID_RECURSIVE
				|| (type == Token.NOT_MATCHED && "function".Equals(token.looksLike));
	}

	/// <summary>Delimiters and levels come from mXparser; no source text is parsed here.</summary>
	internal static Node reconstruct(List<Token> tokens) {
		if (tokens == null) throw error(0, "missing token stream");
		if (tokens.Count > MAX_TOKENS) throw error(0, "token budget exceeded");
		Stack<Scope> scopes = new Stack<Scope>();
		scopes.Push(new Scope(null, 0, -1));
		for (int i = 0; i < tokens.Count; i++) {
			Token t = tokens[i];
			Scope scope = scopes.Peek();
			if (t == null || t.tokenStr == null) throw error(i, "incomplete token");
			if (t.tokenTypeId == ParserSymbol.TYPE_ID && t.tokenId == ParserSymbol.BLANK_ID) continue;
			if (isCall(t)) {
				if (i + 1 >= tokens.Count || !tokens[i + 1].isLeftParenthesis())
					throw error(i, "function requires an argument list");
				if (scopes.Count > MAX_DEPTH) throw error(i, "nesting budget exceeded");
				scopes.Push(new Scope(t, i, tokens[++i].tokenLevel));
			} else if (t.isLeftParenthesis()) {
				if (scopes.Count > MAX_DEPTH) throw error(i, "nesting budget exceeded");
				scopes.Push(new Scope(null, i, t.tokenLevel));
			} else if (t.isParameterSeparator()) {
				if (scope.call == null || t.tokenLevel != scope.level)
					throw error(i, "separator outside an argument list");
				scope.arguments.Add(reduce(scope.parts, i));
				scope.parts.Clear();
			} else if (t.isRightParenthesis()) {
				if (scopes.Count == 1 || t.tokenLevel != scope.level)
					throw error(i, "unmatched closing parenthesis");
				Node result;
				if (scope.call != null) {
					if (!(scope.parts.Count == 0) || !(scope.arguments.Count == 0))
						scope.arguments.Add(reduce(scope.parts, i));
					result = new Node(scope.call, scope.index, Form.CALL, scope.arguments);
				} else result = reduce(scope.parts, i);
				scopes.Pop();
				scopes.Peek().parts.Add(new Part(result.token, result.index, result));
			} else {
				bool @operator = t.isBinaryOperator() || t.isUnaryLeftOperator() || t.isUnaryRightOperator();
				if (!@operator && !t.isNumber() && !t.isIdentifier()
						&& t.tokenTypeId != RandomVariable.TYPE_ID && t.tokenTypeId != Token.NOT_MATCHED)
					throw error(i, "unknown token type or syntax symbol");
				scope.parts.Add(new Part(t, i, @operator ? null
						: new Node(t, i, Form.ATOM, new Node[0])));
			}
		}
		if (scopes.Count != 1) throw error(scopes.Peek().index, "unclosed parenthesis");
		return (scopes.Peek().parts.Count == 0) ? null : reduce(scopes.Peek().parts, tokens.Count);
	}

	/* The selection order deliberately mirrors calculateFirstAndFullyCompile:
	 * ready fragments first, rightmost ready powers/tetrations, then first position in
	 * each remaining group. A conventional precedence-only parser is insufficient
	 * for signs and for mXparser's power/postfix/remainder ordering. */
	/// <remarks><para>Version: 6.2.0</para></remarks>
	private sealed class Candidate {
		internal readonly Part part;
		internal readonly int version;
		internal readonly Binding priority;
		internal Candidate(Part part) {
			this.part = part;
			this.version = part.version;
			this.priority = binding(part.token, part.index);
		}
	}
	private static bool ready(Part part) {
		bool left = part.previous != null && part.previous.node != null;
		bool right = part.next != null && part.next.node != null;
		return part.token.isUnaryLeftOperator() || isSign(part.token) ? right
				: part.token.isUnaryRightOperator() ? left : left && right;
	}
	private static void offer(CandidateQueue candidates, Part part) {
		if (part == null || part.removed || part.node != null) return;
		part.version++;
		if (ready(part)) candidates.Add(new Candidate(part));
	}
	/// <summary>Linked fragments plus a queue of ready candidates preserve the original
	/// selection order without rescanning/shifting a flat expression quadratically.
	/// Only the two surviving neighbours can become newly ready after a reduction.</summary>
	private static Node reduce(List<Part> parts, int index) {
		if ((parts.Count == 0)) throw error(index, "empty expression or argument");
		CandidateQueue candidates = new CandidateQueue((a, b) => {
			if (a.priority != b.priority) return a.priority.CompareTo(b.priority);
			return rightAssociative(a.part.token) ? (b.part.index).CompareTo(a.part.index)
					: (a.part.index).CompareTo(b.part.index);
		});
		for (int i = 0; i < parts.Count; i++) {
			Part part = parts[i];
			part.previous = i == 0 ? null : parts[i - 1];
			part.next = i + 1 == parts.Count ? null : parts[i + 1];
		}
		foreach (Part part in parts) offer(candidates, part);
		Part head = parts[0];
		int remaining = parts.Count;
		while (remaining > 1 || head.node == null) {
			Candidate candidate = candidates.poll();
			if (candidate == null) {
				Part offending = head;
				while (offending.node != null && offending.next != null) offending = offending.next;
				throw error(offending.index, "missing operand or adjacent expressions");
			}
			Part @operator = candidate.part;
			if (@operator.removed || @operator.node != null || candidate.version != @operator.version) continue;
			bool leftReady = @operator.previous != null && @operator.previous.node != null;
			Form form = @operator.token.isUnaryLeftOperator() || (isSign(@operator.token) && !leftReady)
					? Form.PREFIX : @operator.token.isUnaryRightOperator() ? Form.POSTFIX : Form.BINARY;
			IList<Node> operands = new List<Node>();
			Part before = @operator.previous, after = @operator.next;
			if (form != Form.PREFIX) {
				operands.Add(before.node);
				before.removed = true;
				before = before.previous;
				remaining--;
			}
			if (form != Form.POSTFIX) {
				operands.Add(after.node);
				after.removed = true;
				after = after.next;
				remaining--;
			}
			@operator.node = new Node(@operator.token, @operator.index, form, operands);
			@operator.previous = before;
			@operator.next = after;
			if (before == null) head = @operator; else before.next = @operator;
			if (after != null) after.previous = @operator;
			offer(candidates, before);
			offer(candidates, after);
		}
		return head.node;
	}

	private static bool isSign(Token t) {
		return t.tokenTypeId == Operator.TYPE_ID
				&& (t.tokenId == Operator.PLUS_ID || t.tokenId == Operator.MINUS_ID);
	}
	private static bool rightAssociative(Token t) {
		return t.tokenTypeId == Operator.TYPE_ID
				&& (t.tokenId == Operator.POWER_ID || t.tokenId == Operator.TETRATION_ID);
	}

	/* Source order in Expression.calculateFirstAndFullyCompile. Keep this catalogue
	 * and the independent operator-combination audit together when that method changes.
	 * The evaluator's exceptional multi-power selection with an unready negative
	 * exponent is intentionally deferred to a separate engine investigation. */
	/// <remarks><para>Version: 6.2.0</para></remarks>
	private enum Binding {
		TETRATION, POWER, FACTORIAL, PERCENT, REMAINDER, NEGATION, ROOT,
		BIT_COMPLEMENT, PRODUCT, SUM, NOT_EQUAL, EQUAL, LESS, GREATER,
		LESS_EQUAL, GREATER_EQUAL, CONJUNCTION, DISJUNCTION, IMPLICATION, BIT_BINARY
	}

	private static Binding binding(Token t, int index) {
		int id = t.tokenId;
		if (t.tokenTypeId == Operator.TYPE_ID) {
			switch (id) {
				case Operator.TETRATION_ID: return Binding.TETRATION;
				case Operator.POWER_ID: return Binding.POWER;
				case Operator.FACT_ID: return Binding.FACTORIAL;
				case Operator.PERC_ID: return Binding.PERCENT;
				case Operator.MOD_ID: return Binding.REMAINDER;
				case Operator.SQUARE_ROOT_ID: case Operator.CUBE_ROOT_ID: case Operator.FOURTH_ROOT_ID: return Binding.ROOT;
				case Operator.MULTIPLY_ID: case Operator.DIVIDE_ID: case Operator.DIVIDE_QUOTIENT_ID: return Binding.PRODUCT;
				case Operator.PLUS_ID: case Operator.MINUS_ID: return Binding.SUM;
				default: throw error(index, "unknown arithmetic operator");
			}
		}
		if (t.tokenTypeId == BinaryRelation.TYPE_ID) {
			switch (id) {
				case BinaryRelation.NEQ_ID: return Binding.NOT_EQUAL;
				case BinaryRelation.EQ_ID: return Binding.EQUAL;
				case BinaryRelation.LT_ID: return Binding.LESS;
				case BinaryRelation.GT_ID: return Binding.GREATER;
				case BinaryRelation.LEQ_ID: return Binding.LESS_EQUAL;
				case BinaryRelation.GEQ_ID: return Binding.GREATER_EQUAL;
				default: throw error(index, "unknown relation");
			}
		}
		if (t.tokenTypeId == BooleanOperator.TYPE_ID) {
			if (id == BooleanOperator.NEG_ID) return Binding.NEGATION;
			if (id == BooleanOperator.AND_ID || id == BooleanOperator.NAND_ID) return Binding.CONJUNCTION;
			if (id == BooleanOperator.OR_ID || id == BooleanOperator.NOR_ID || id == BooleanOperator.XOR_ID) return Binding.DISJUNCTION;
			return Binding.IMPLICATION;
		}
		if (t.tokenTypeId == BitwiseOperator.TYPE_ID)
			return id == BitwiseOperator.COMPL_ID ? Binding.BIT_COMPLEMENT : Binding.BIT_BINARY;
		throw error(index, "unknown operator");
	}

	// Minimal runtime adapters for .NET targets predating ReadOnlyDictionary/PriorityQueue.
	// The registry owns a copy and exposes only lookup; no mutable dictionary escapes.
	/// <remarks><para>Version: 6.2.0</para></remarks>
	private sealed class FrozenMap<K, V> where V : class {
		private readonly Dictionary<K, V> values;
		internal FrozenMap(Dictionary<K, V> values) { this.values = new Dictionary<K, V>(values); }
		internal V get(K key) { V value; return values.TryGetValue(key, out value) ? value : null; }
	}
	/// <remarks><para>Version: 6.2.0</para></remarks>
	private sealed class CandidateQueue {
		private readonly List<Candidate> heap = new List<Candidate>();
		private readonly Comparison<Candidate> comparison;
		internal CandidateQueue(Comparison<Candidate> comparison) { this.comparison = comparison; }
		internal void Add(Candidate value) {
			int i = heap.Count; heap.Add(value);
			while (i > 0) {
				int parent = (i - 1) / 2;
				if (comparison(value, heap[parent]) >= 0) break;
				heap[i] = heap[parent]; i = parent;
			}
			heap[i] = value;
		}
		internal Candidate poll() {
			if (heap.Count == 0) return null;
			Candidate first = heap[0], last = heap[heap.Count - 1];
			heap.RemoveAt(heap.Count - 1);
			if (heap.Count == 0) return first;
			int i = 0;
			while (i < heap.Count / 2) {
				int child = 2 * i + 1;
				if (child + 1 < heap.Count && comparison(heap[child + 1], heap[child]) < 0) child++;
				if (comparison(last, heap[child]) <= 0) break;
				heap[i] = heap[child]; i = child;
			}
			heap[i] = last; return first;
		}
	}
	private static object removeLast(List<object> output) {
		object last = output[output.Count - 1]; output.RemoveAt(output.Count - 1); return last;
	}
	private static bool matches(String value, String pattern) { return Regex.IsMatch(value, "\\A(?:" + pattern + ")\\z"); }
}

}
