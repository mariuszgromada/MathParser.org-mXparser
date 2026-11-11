/*
 * @(#)LaTeXExporter.java        6.2.0    2026-11-11
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
package org.mariuszgromada.math.mxparser;

import org.mariuszgromada.math.mxparser.parsertokens.*;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Map;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;
import java.util.regex.Pattern;

/** Internal, on-demand mathematical presentation of the runtime token stream.
 *
 * @version        6.2.0
 */
final class LaTeXExporter {
	private LaTeXExporter() { }
	private static final int MAX_TOKENS = 100000;
	private static final int MAX_DEPTH = 256;
	// These describe mathematical presentation, not runtime reduction priority.
	private static final int LOGICAL = 20, RELATION = 30, NOT = 40, ADDITIVE = 50;
	private static final int PRODUCT = 60, SIGN = 70, POWER = 80, POSTFIX = 90, ATOM = 100;
	private static final int MAX_OUTPUT = 4000000;
	private static final Pattern NAME = Pattern.compile(ParserSymbol.nameOnlyTokenRegExp);
	private static final Pattern DECIMAL = Pattern.compile(ParserSymbol.DECIMAL_REG_EXP);
	private static final Pattern FRACTION = Pattern.compile("[+-]?" + ParserSymbol.FRACTION);
	private static final Map<Long, Rule> RULES = makeRules();
	private static final Map<String, String> UNICODE_NAMES = makeUnicodeNames();

	/** @version        6.2.0 */
	private enum Style {
		TEMPLATE, OPERATOR, LITERAL, DELIMITER, DIRECT_FUNCTION, NAMED_FUNCTION,
		CASES_IF, CASES_IFF, CONTINUED_FRACTION, LIST_SUM, LIST_PRODUCT, MEAN,
		LIST_AND, LIST_OR, RANGE, RANGE_SAMPLE, INTEGRAL, DERIVATIVE,
		NTH_DERIVATIVE, DIFFERENCE, SOLVE, NORMAL
	}

	/** @version        6.2.0 */
	private static final class Slot {
		final int number;
		Slot(int number) { this.number = number; }
	}
	/** @version        6.2.0 */
	private static final class Rule {
		final String symbol;
		final Object[] template;
		final Style style;
		final int[] arities;
		final int listStart;
		final String separator;
		final boolean atomicPresentation;
		Rule(String symbol, String template, Style style, int[] arities, int listStart, String separator) {
			this.symbol = symbol;
			this.template = compileTemplate(template);
			this.style = style;
			this.arities = arities.clone();
			this.listStart = listStart;
			this.separator = separator;
			this.atomicPresentation = atomicPresentation(template);
		}
		boolean accepts(int count) {
			if (arities.length == 0) return count >= 1;
			for (int arity : arities) if (count == arity) return true;
			return false;
		}
	}
	/** Presentation metadata for static templates, not source-language parsing.
	 * A scalar token can display a quotient, power or function call (units and
	 * named constants), so token atomicity alone cannot decide parentheses. */
	private static boolean atomicPresentation(String template) {
		int depth = 0;
		for (int i = 0; i < template.length(); i++) {
			char c = template.charAt(i);
			if (c == '{') depth++;
			else if (c == '}') depth--;
			else if (depth == 0 && (c == '^' || c == '/' || c == '(')) return false;
		}
		return !template.startsWith("\\frac");
	}

	private static long key(int type, int id) { return ((long)type << 32) | (id & 0xffffffffL); }
	private static Rule rule(Token token) { return RULES.get(key(token.tokenTypeId, token.tokenId)); }
	private static void register(Map<Long, Rule> rules, int type, int id, Rule rule) {
		if (rules.put(key(type, id), rule) != null) throw new IllegalStateException("Duplicate LaTeX rule");
	}
	private static void register(Map<Long, Rule> rules, int type, int id, String symbol,
			String template, Style style, int... arities) {
		register(rules, type, id, new Rule(symbol, template, style, arities, 0, ","));
	}
	private static void listRule(Map<Long, Rule> rules, int type, int id, String symbol,
			String template, Style style, int start, String separator) {
		register(rules, type, id, new Rule(symbol, template, style, new int[0], start, separator));
	}

	/** Compile only trusted, static templates. Substituted data is never parsed as a template. */
	private static Object[] compileTemplate(String template) {
		List<Object> parts = new ArrayList<>();
		StringBuilder text = new StringBuilder();
		for (int i = 0; i < template.length(); i++) {
			char c = template.charAt(i);
			if (c != '@') { text.append(c); continue; }
			if (++i == template.length()) throw new IllegalStateException("Incomplete LaTeX template");
			c = template.charAt(i);
			if (c == '@') { text.append(c); continue; }
			if (text.length() > 0) { parts.add(text.toString()); text.setLength(0); }
			int number;
			if (c == '*') number = -2;
			else if (c == '#') number = -3;
			else if (c == '0') number = 0;
			else if (c == '+' || c == '-') {
				boolean negative = c == '-';
				int start = ++i;
				while (i < template.length() && Character.isDigit(template.charAt(i))) i++;
				if (i == start) throw new IllegalStateException("Invalid LaTeX slot");
				number = Integer.parseInt(template.substring(start, i--));
				if (number < 1 || (negative && number != 1)) throw new IllegalStateException("Invalid LaTeX operand");
				if (negative) number = -1;
			} else throw new IllegalStateException("Unknown LaTeX slot");
			parts.add(new Slot(number));
		}
		if (text.length() > 0) parts.add(text.toString());
		return parts.toArray();
	}

	private static Map<Long, Rule> makeRules() {
		Map<Long, Rule> rules = new HashMap<>();
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
		register(rules, ConstantValue.TYPE_ID, ConstantValue.MONN_SEMI_MAJOR_AXIS_ID, "", "a_{\\mathrm{Moon}}", Style.TEMPLATE, 0);
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
		return Collections.unmodifiableMap(rules);
	}

	static String format(List<Token> tokens) {
		Node root = reconstruct(tokens);
		return root == null ? "" : new Renderer(root).render();
	}

	private static boolean is(Node n, int type, int id) {
		return n.token.tokenTypeId == type && n.token.tokenId == id;
	}
	private static boolean identifier(Node n) {
		return n.form == Form.ATOM && !n.token.isNumber()
				&& (n.token.isIdentifier() || n.token.tokenTypeId == Token.NOT_MATCHED);
	}
	private static boolean decimalAtom(Node n) {
		return n.form == Form.ATOM && n.token.isNumber() && DECIMAL.matcher(n.token.tokenStr).matches();
	}
	private static boolean unsignedNumber(Node n) {
		return decimalAtom(n) && !n.token.tokenStr.startsWith("-")
				&& !n.token.tokenStr.startsWith("+") && n.token.tokenStr.indexOf('e') < 0
				&& n.token.tokenStr.indexOf('E') < 0;
	}
	private static boolean singleSymbol(Node n) {
		return identifier(n) && (n.token.tokenStr.length() == 1 || is(n, ConstantValue.TYPE_ID, ConstantValue.PI_ID)
				|| is(n, ConstantValue.TYPE_ID, ConstantValue.EULER_ID));
	}
	private static boolean compactProduct(Node n) {
		return n.form == Form.BINARY && is(n, Operator.TYPE_ID, Operator.MULTIPLY_ID)
				&& unsignedNumber(n.children.get(0)) && singleSymbol(n.children.get(1));
	}
	private static boolean bareArgument(Node n) {
		Rule r = rule(n.token);
		return unsignedNumber(n) || (identifier(n) && (r == null || r.atomicPresentation)) || compactProduct(n);
	}
	private static boolean headExponent(Node n) {
		Rule r = rule(n.token);
		if (identifier(n) && (r == null || r.atomicPresentation)) return true;
		return unsignedNumber(n) && n.token.tokenStr.matches("[0-9]+")
				&& !n.token.tokenStr.matches("0+");
	}
	private static boolean negative(Node n) {
		return (n.form == Form.PREFIX && is(n, Operator.TYPE_ID, Operator.MINUS_ID))
				|| (n.form == Form.ATOM && n.token.isNumber() && n.token.tokenStr.startsWith("-"));
	}
	private static Node presentation(Node n) {
		Rule r = rule(n.token);
		while (r != null && r.style == Style.CONTINUED_FRACTION && n.children.size() == 1) {
			n = n.children.get(0);
			r = rule(n.token);
		}
		return n;
	}
	private static boolean signed(Node n) {
		n = presentation(n);
		return (n.form == Form.PREFIX && isSign(n.token)) || negative(n)
				|| (n.form == Form.ATOM && n.token.isNumber() && n.token.tokenStr.startsWith("+"));
	}
	private static boolean delimited(Node n) {
		n = presentation(n);
		Rule r = rule(n.token);
		if (n.form == Form.PREFIX && n.token.isUnicodeRootOperator()) return true;
		if (r == null) return n.form == Form.CALL;
		if (r.style == Style.OPERATOR) return n.token.tokenTypeId == BitwiseOperator.TYPE_ID
				|| is(n, Operator.TYPE_ID, Operator.MOD_ID) || is(n, Operator.TYPE_ID, Operator.DIVIDE_QUOTIENT_ID);
		return is(n, Function1Arg.TYPE_ID, Function1Arg.ABS_ID) || is(n, Function1Arg.TYPE_ID, Function1Arg.FLOOR_ID)
				|| is(n, Function1Arg.TYPE_ID, Function1Arg.CEIL_ID) || is(n, Function1Arg.TYPE_ID, Function1Arg.SQRT_ID)
				|| is(n, Function2Arg.TYPE_ID, Function2Arg.ROOT_ID) || is(n, Function2Arg.TYPE_ID, Function2Arg.BINOM_COEFF_ID);
	}
	private static boolean powerBaseNeedsGrouping(Node n) {
		n = presentation(n);
		if (n.token.isNumber()) return !unsignedNumber(n);
		if (delimited(n)) return false;
		return strength(n) < ATOM || n.form == Form.CALL;
	}
	private static boolean extensive(Node n) {
		n = presentation(n);
		Rule r = rule(n.token);
		return r != null && (r.style == Style.RANGE || r.style == Style.INTEGRAL
				|| is(n, CalculusOperator.TYPE_ID, CalculusOperator.MIN_ID) || is(n, CalculusOperator.TYPE_ID, CalculusOperator.MAX_ID));
	}
	private static int strength(Node n) {
		n = presentation(n);
		Rule r = rule(n.token);
		if (n.form == Form.CALL && r != null) {
			if (r.style == Style.LIST_SUM || (r.style == Style.CONTINUED_FRACTION && n.children.size() > 1)) return ADDITIVE;
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
			if (is(n, Operator.TYPE_ID, Operator.DIVIDE_ID)) return POWER;
			if (is(n, Operator.TYPE_ID, Operator.DIVIDE_QUOTIENT_ID)) return ATOM;
			return PRODUCT;
		}
		return n.token.tokenTypeId == BinaryRelation.TYPE_ID ? RELATION : LOGICAL;
	}

	/** @version        6.2.0 */
	private static final class Visit {
		final Node node;
		final boolean forceCall;
		final boolean wrap;
		final Node exponent;
		Visit(Node node, boolean forceCall, boolean wrap, Node exponent) {
			this.node = node;
			this.forceCall = forceCall;
			this.wrap = wrap;
			this.exponent = exponent;
		}
	}
	private static Visit visit(Node node) { return new Visit(node, false, false, null); }
	private static Visit grouped(Node node, boolean wrap, boolean forceCall) { return new Visit(node, forceCall, wrap, null); }
	private static boolean asciiLetter(char c) { return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'); }
	private static boolean endsControlWord(CharSequence text) {
		int i = text.length() - 1;
		if (i < 0 || !asciiLetter(text.charAt(i))) return false;
		while (i >= 0 && asciiLetter(text.charAt(i))) i--;
		int slashes = 0;
		while (i >= 0 && text.charAt(i--) == '\\') slashes++;
		return slashes % 2 != 0;
	}

	/** Iterative emission keeps long flat expressions off the Java call stack and
	 * writes each generated fragment once to the bounded final buffer.
	 *
	 * @version        6.2.0
	 */
	private static final class Renderer {
		private final ArrayDeque<Object> pending = new ArrayDeque<>();
		private final StringBuilder result = new StringBuilder();
		private final Set<String> names = new HashSet<>();
		private final Set<String> builtinSymbols = new HashSet<>();
		private int outputDepth;
		Renderer(Node root) {
			pending.push(visit(root));
			ArrayDeque<Node> nodes = new ArrayDeque<>();
			nodes.push(root);
			while (!nodes.isEmpty()) {
				Node n = nodes.pop();
				names.add(n.token.tokenStr);
				Rule r = rule(n.token);
				if (n.form == Form.ATOM && r != null && r.style == Style.TEMPLATE) {
					StringBuilder symbol = new StringBuilder();
					for (Object part : r.template) if (part instanceof String) symbol.append(part);
					builtinSymbols.add(symbol.toString());
				}
				for (Node child : n.children) nodes.push(child);
			}
		}
		String render() {
			while (!pending.isEmpty()) {
				Object item = pending.pop();
				if (item instanceof String) {
					String text = (String)item;
					// A TeX control word consumes subsequent ASCII letters. Check the
					// actual emitted boundary, including operands of postfix operators.
					if (!text.isEmpty() && asciiLetter(text.charAt(0)) && endsControlWord(result)) result.append(' ');
					if (text.length() > MAX_OUTPUT - result.length()) throw error(0, "output budget exceeded");
					for (int i = 0; i < text.length(); i++) {
						if (text.charAt(i) == '{' && ++outputDepth > MAX_DEPTH)
							throw error(0, "presentation nesting budget exceeded");
						if (text.charAt(i) == '}' && --outputDepth < 0) throw error(0, "unbalanced rendering rule");
					}
					result.append(text);
				} else {
					Visit v = (Visit)item;
					List<Object> output = new ArrayList<>();
					if (v.wrap) {
						output.add("(");
						output.add(new Visit(v.node, v.forceCall, false, v.exponent));
						output.add(")");
					} else emit(output, v);
					for (int i = output.size() - 1; i >= 0; i--) pending.push(output.get(i));
				}
			}
			if (outputDepth != 0) throw error(0, "unbalanced rendering rule");
			return result.toString();
		}
		private void emit(List<Object> out, Visit v) {
			Node n = presentation(v.node);
			Rule r = rule(n.token);
			if (r == null) {
				if (n.token.tokenTypeId != Token.NOT_MATCHED && n.token.tokenTypeId != Argument.TYPE_ID
						&& n.token.tokenTypeId != Function.TYPE_ID && n.token.tokenTypeId != Constant.TYPE_ID
						&& n.token.tokenTypeId != RecursiveArgument.TYPE_ID_RECURSIVE)
					throw error(n.index, "no rule for builtin token");
				String symbol = name(n.token.tokenStr, n.form == Form.CALL, n.index);
				out.add(builtinSymbols.contains(symbol) ? "{" + symbol + "}_{\\mathrm{user}}" : symbol);
				if (n.form == Form.CALL) { out.add("("); list(out, n.children, 0, ",", 0); out.add(")"); }
				return;
			}
			if (n.form == Form.CALL && (!r.accepts(n.children.size())
					|| (r.style == Style.CASES_IFF && n.children.size() % 2 != 0)))
				throw error(n.index, "invalid function arity: " + n.children.size());
			switch (r.style) {
				case LITERAL: out.add(number(n)); return;
				case DELIMITER: throw error(n.index, "unexpected delimiter");
				case OPERATOR: operator(out, n, r, v.forceCall); return;
				case DIRECT_FUNCTION: case NAMED_FUNCTION: function(out, n, r, v); return;
				case CASES_IF: case CASES_IFF: cases(out, n, r.style == Style.CASES_IFF); return;
				case CONTINUED_FRACTION: continuedFraction(out, n); return;
				case LIST_SUM: list(out, n.children, 0, "+", ADDITIVE); return;
				case LIST_PRODUCT: list(out, n.children, 0, "\\cdot ", PRODUCT); return;
				case MEAN:
					out.add("\\frac{"); list(out, n.children, 0, "+", ADDITIVE);
					out.add("}{" + n.children.size() + "}"); return;
				case LIST_AND: case LIST_OR:
					for (int i = 0; i < n.children.size(); i++) {
						if (i > 0) out.add(r.style == Style.LIST_AND ? "\\land " : "\\lor ");
						condition(out, n.children.get(i), true);
					} return;
				case RANGE: case RANGE_SAMPLE: range(out, n, r); return;
				case INTEGRAL: integral(out, n); return;
				case DERIVATIVE: case NTH_DERIVATIVE: derivative(out, n, r); return;
				case DIFFERENCE:
					variable(n.children.get(1));
					out.add(r.symbol + "_{"); out.add(visit(n.children.get(1))); out.add(",");
					out.add(n.children.size() == 3 ? visit(n.children.get(2)) : "1");
					out.add("}["); out.add(visit(n.children.get(0))); out.add("]"); return;
				case SOLVE:
					variable(n.children.get(1));
					out.add("\\operatorname{root}_{"); out.add(visit(n.children.get(1))); out.add("\\in[");
					out.add(visit(n.children.get(2))); out.add(","); out.add(visit(n.children.get(3)));
					out.add("]}("); out.add(grouped(n.children.get(0), strength(n.children.get(0)) <= RELATION, false));
					out.add("=0)"); return;
				case NORMAL: normal(out, n, r); return;
				default: template(out, n, r);
			}
		}
		private void function(List<Object> out, Node n, Rule r, Visit v) {
			Node arg = n.children.get(0);
			out.add(r.symbol);
			if (v.exponent != null) { out.add("^{"); out.add(visit(v.exponent)); out.add("}"); }
			if (!v.forceCall && bareArgument(arg)) { if (v.exponent == null) out.add(" "); out.add(visit(arg)); }
			else {
				boolean tall = is(arg, Operator.TYPE_ID, Operator.DIVIDE_ID);
				out.add(tall ? "\\left(" : "("); out.add(visit(arg)); out.add(tall ? "\\right)" : ")");
			}
		}
		private void template(List<Object> out, Node n, Rule r) {
			if (is(n, Function1Arg.TYPE_ID, Function1Arg.NOT_ID)) {
				out.add(r.symbol + " "); out.add(grouped(n.children.get(0), strength(n.children.get(0)) <= NOT, false)); return;
			}
			for (int i = 0; i < r.template.length; i++) {
				Object part = r.template[i];
				if (part instanceof String) { out.add(part); continue; }
				int slot = ((Slot)part).number;
				if (slot == 0) out.add(r.symbol);
			else if (slot == -2) {
				if (is(n, FunctionVariadic.TYPE_ID, FunctionVariadic.BASE_ID) && n.children.size() == r.listStart)
					out.add("\\varepsilon");
				else list(out, n.children, r.listStart, r.separator, 0);
			}
				else if (slot == -3) out.add(Integer.toString(n.children.size() - r.listStart));
				else {
					int argument = n.form == Form.BINARY ? slot < 0 ? 0 : 1 : slot < 0 ? 0 : slot - 1;
					if (argument < 0 || argument >= n.children.size()) throw error(n.index, "invalid rule operand");
					Node child = n.children.get(argument);
					// A single-character subscript needs no braces. This is template
					// composition, never a rewrite of already emitted LaTeX.
					if (i > 0 && i + 1 < r.template.length && r.template[i - 1] instanceof String
							&& !is(n, Function2Arg.TYPE_ID, Function2Arg.LOG_ID)
							&& ((String)r.template[i - 1]).endsWith("_{")
							&& r.template[i + 1] instanceof String && ((String)r.template[i + 1]).startsWith("}")
							&& child.form == Form.ATOM && child.token.tokenStr.matches("[A-Za-z0-9]")) {
						String previous = (String)out.remove(out.size() - 1);
						out.add(previous.substring(0, previous.length() - 1));
						out.add(visit(child));
						String next = ((String)r.template[++i]).substring(1);
						if (!next.isEmpty()) out.add(next);
					} else out.add(visit(child));
				}
			}
		}
		private void list(List<Object> out, List<Node> nodes, int start, String separator, int minimum) {
			for (int i = start; i < nodes.size(); i++) {
				if (i > start) out.add(separator);
				Node child = nodes.get(i);
				boolean wrap = strength(child) < minimum || (i > start && signed(child))
						|| extensive(child);
				out.add(grouped(child, wrap, minimum == PRODUCT));
			}
		}
		private void operator(List<Object> out, Node n, Rule r, boolean forceCall) {
			Node left = presentation(n.children.get(0));
			if (n.form == Form.PREFIX) {
				if (isSign(n.token)) {
					out.add(r.symbol); out.add(grouped(left, strength(left) <= ADDITIVE || signed(left), forceCall));
				} else if (n.token.isUnicodeRootOperator()) template(out, n, r);
				else if (n.token.tokenTypeId == BooleanOperator.TYPE_ID) {
					out.add(r.symbol + " "); out.add(grouped(left, strength(left) <= NOT, false));
				} else template(out, n, r);
				return;
			}
			if (n.form == Form.POSTFIX) {
				out.add(grouped(left, !delimited(left) && (powerBaseNeedsGrouping(left) || left.form == Form.POSTFIX), false));
				out.add(r.symbol); return;
			}
			Node right = presentation(n.children.get(1));
			if (is(n, Operator.TYPE_ID, Operator.POWER_ID)) {
				Rule baseRule = rule(left.token);
				if (left.form == Form.CALL && baseRule != null && baseRule.style == Style.DIRECT_FUNCTION && headExponent(right))
					out.add(new Visit(left, forceCall, false, right));
				else {
					boolean wrap = powerBaseNeedsGrouping(left);
					out.add(grouped(left, wrap, false)); out.add("^{"); out.add(visit(right)); out.add("}");
				} return;
			}
			if (is(n, Operator.TYPE_ID, Operator.DIVIDE_ID)) {
				out.add("\\frac{"); out.add(visit(left)); out.add("}{"); out.add(visit(right)); out.add("}"); return;
			}
			if (is(n, Operator.TYPE_ID, Operator.MULTIPLY_ID)) {
				Rule unitRule = rule(right.token);
				if (right.token.tokenTypeId == Unit.TYPE_ID && right.form == Form.ATOM && unsignedNumber(left)
						&& unitRule != null && unitRule.template.length > 0
						&& unitRule.template[0] instanceof String && !((String)unitRule.template[0]).startsWith("10^")) {
					if (angle(out, left, right)) return;
					out.add(visit(left)); out.add("\\,"); out.add(visit(right)); return;
				}
				boolean compact = unsignedNumber(left) && (singleSymbol(right)
						|| (is(right, Operator.TYPE_ID, Operator.POWER_ID) && singleSymbol(right.children.get(0))));
				out.add(grouped(left, strength(left) < PRODUCT, !compact));
				if (!compact) {
					Rule rightRule = rule(right.token);
					boolean command = right.form != Form.POSTFIX && rightRule != null && (rightRule.symbol.startsWith("\\")
							|| (rightRule.template.length > 0 && rightRule.template[0] instanceof String
							&& ((String)rightRule.template[0]).startsWith("\\")));
					out.add(strength(right) <= PRODUCT || signed(right) || command ? "\\cdot" : "\\cdot ");
				}
				out.add(grouped(right, strength(right) <= PRODUCT || signed(right), !compact)); return;
			}
			if (isSign(n.token)) {
				out.add(grouped(left, strength(left) < ADDITIVE || extensive(left), false)); out.add(r.symbol);
				out.add(grouped(right, strength(right) <= ADDITIVE || signed(right), false)); return;
			}
			if (is(n, Operator.TYPE_ID, Operator.TETRATION_ID)) {
				out.add("\\mathord{{}^{"); out.add(visit(right)); out.add("}\\!");
				out.add(grouped(left, strength(left) < ATOM, true)); out.add("}"); return;
			}
			if (n.token.tokenTypeId == BooleanOperator.TYPE_ID || n.token.tokenTypeId == BinaryRelation.TYPE_ID) {
				int minimum = n.token.tokenTypeId == BinaryRelation.TYPE_ID ? RELATION : LOGICAL;
				out.add(grouped(left, strength(left) <= minimum, false)); out.add(r.symbol);
				if (r.symbol.startsWith("\\")) out.add(" ");
				out.add(grouped(right, strength(right) <= minimum, false)); return;
			}
			template(out, n, r);
		}
		private boolean angle(List<Object> out, Node value, Node unit) {
			String symbol;
			if (is(unit, Unit.TYPE_ID, Unit.DEGREE_ARC_ID)) symbol = "^{\\circ}";
			else if (is(unit, Unit.TYPE_ID, Unit.MINUTE_ARC_ID)) symbol = "^{\\prime}";
			else if (is(unit, Unit.TYPE_ID, Unit.SECOND_ARC_ID)) symbol = "^{\\prime\\prime}";
			else return false;
			out.add(visit(value)); out.add(symbol); return true;
		}
		private void condition(List<Object> out, Node n, boolean asOperand) {
			boolean predicate = n.token.tokenTypeId == BinaryRelation.TYPE_ID || n.token.tokenTypeId == BooleanOperator.TYPE_ID
					|| is(n, Function1Arg.TYPE_ID, Function1Arg.NOT_ID) || is(n, Function1Arg.TYPE_ID, Function1Arg.IS_PRIME_ID)
					|| is(n, Function1Arg.TYPE_ID, Function1Arg.ISNAN_ID)
					|| is(n, ConstantValue.TYPE_ID, ConstantValue.TRUE_ID) || is(n, ConstantValue.TYPE_ID, ConstantValue.FALSE_ID)
					|| is(n, FunctionVariadic.TYPE_ID, FunctionVariadic.AND_ID) || is(n, FunctionVariadic.TYPE_ID, FunctionVariadic.OR_ID)
					|| is(n, FunctionVariadic.TYPE_ID, FunctionVariadic.XOR_ID);
			out.add(grouped(n, predicate ? asOperand && strength(n) <= LOGICAL : strength(n) <= RELATION, false));
			if (!predicate) out.add("\\ne0");
		}
		private void cases(List<Object> out, Node n, boolean multiple) {
			out.add("\\begin{cases}");
			if (!multiple) {
				out.add(visit(n.children.get(1))); out.add("&\\text{if }"); condition(out, n.children.get(0), false);
				out.add("\\\\"); out.add(visit(n.children.get(2))); out.add("&\\text{otherwise}");
			} else {
				for (int i = 0; i < n.children.size(); i += 2) {
					if (i > 0) out.add("\\\\");
					out.add(visit(n.children.get(i + 1))); out.add(i == 0 ? "&\\text{if }" : "&\\text{else if }");
					condition(out, n.children.get(i), false);
				}
				out.add("\\\\\\text{undefined}&\\text{otherwise}");
			}
			out.add("\\end{cases}");
		}
		private void continuedFraction(List<Object> out, Node n) {
			for (int i = 0; i < n.children.size(); i++) {
				out.add(grouped(n.children.get(i), i + 1 < n.children.size() && strength(n.children.get(i)) < ADDITIVE, false));
				if (i + 1 < n.children.size()) out.add("+\\frac{1}{");
			}
			for (int i = 1; i < n.children.size(); i++) out.add("}");
		}
		private void normal(List<Object> out, Node n, Rule r) {
			boolean draw = n.token.tokenTypeId == Function2Arg.TYPE_ID;
			int offset = draw ? 0 : 1;
			out.add(draw ? "\\operatorname{draw}(\\mathcal N(" : r.symbol + "_{\\mathcal N(");
			out.add(visit(n.children.get(offset))); out.add(",");
			Node sigma = n.children.get(offset + 1);
			out.add(grouped(sigma, powerBaseNeedsGrouping(sigma), false)); out.add("^{2}");
			if (draw) out.add("))");
			else { out.add(")}("); out.add(visit(n.children.get(0))); out.add(")"); }
		}
		private void variable(Node n) {
			if (!identifier(n) || n.token.tokenTypeId == ConstantValue.TYPE_ID || n.token.tokenTypeId == Unit.TYPE_ID)
				throw error(n.index, "calculus variable must be an identifier");
		}
		private void integral(List<Object> out, Node n) {
			variable(n.children.get(1));
			out.add("\\int"); script(out, n.children.get(2), '_'); script(out, n.children.get(3), '^');
			Node body = n.children.get(0);
			out.add(grouped(body, strength(body) <= ADDITIVE, true));
			out.add("\\,\\mathrm{d}"); out.add(visit(n.children.get(1)));
		}
		private void script(List<Object> out, Node n, char kind) {
			boolean single = n.form == Form.ATOM && n.token.tokenStr.matches("[A-Za-z0-9]");
			out.add(Character.toString(kind) + (single ? "" : "{")); out.add(visit(n));
			if (!single) out.add("}");
		}
		private void derivative(List<Object> out, Node n, Rule r) {
			boolean nth = r.style == Style.NTH_DERIVATIVE;
			Node x = n.children.get(nth ? 2 : 1);
			variable(x);
			boolean point = !nth && (n.children.size() == 3 || n.children.size() == 5);
			if (point) out.add("\\left.");
			if (!nth && !r.symbol.isEmpty()) {
				out.add("D"); script(out, x, '_'); out.add("^" + r.symbol + "[");
			} else if (nth) {
				out.add("\\frac{\\mathrm d^{"); out.add(visit(n.children.get(1)));
				out.add("}}{\\mathrm d "); out.add(visit(x)); out.add("^{");
				out.add(visit(n.children.get(1))); out.add("}}[");
			} else { out.add("\\frac{\\mathrm d}{\\mathrm d "); out.add(visit(x)); out.add("}["); }
			out.add(visit(n.children.get(0))); out.add("]");
			if (point) {
				out.add("\\right\\rvert_{"); out.add(visit(x)); out.add("=");
				out.add(visit(n.children.get(2))); out.add("}");
			}
		}
		private String freshIndex() {
			String candidate = "k";
			for (int i = 1; names.contains(candidate); i++) candidate = "k" + i;
			names.add(candidate);
			return candidate.length() == 1 ? candidate : "k_{" + candidate.substring(1) + "}";
		}
		private void range(List<Object> out, Node n, Rule r) {
			Node index = n.children.get(0), a = n.children.get(1), b = n.children.get(2), body = n.children.get(3);
			variable(index);
			Node step = n.children.size() == 5 ? n.children.get(4) : null;
			DecimalLiteral av = literalValue(a), bv = literalValue(b), hv = step == null ? null : literalValue(step);
			boolean descending = av != null && bv != null && av.compareTo(bv) > 0;
			boolean fractional = (av == null && decimalAtom(a)) || (bv == null && decimalAtom(b)) || (av != null && av.fractional())
					|| (bv != null && bv.fractional());
			boolean ordinary = (step == null || (hv != null && hv.isOne()))
					&& !descending && !fractional;
			boolean aggregate = r.style == Style.RANGE;
			boolean extremum = is(n, CalculusOperator.TYPE_ID, CalculusOperator.MIN_ID)
					|| is(n, CalculusOperator.TYPE_ID, CalculusOperator.MAX_ID);
			out.add(r.symbol);
			if (!aggregate && !extremum) out.add("\\left((");
			if (!aggregate && !extremum) { out.add(visit(body)); out.add(")"); }
			out.add("_{");
			if (ordinary) {
				out.add(visit(index)); out.add("="); out.add(visit(a));
			} else {
				String k = freshIndex();
				out.add("\\substack{"); out.add(visit(index)); out.add("="); out.add(visit(a));
				boolean minus = hv != null ? hv.sign < 0 : step == null && descending;
				if (step == null || (hv != null && hv.isUnitMagnitude())) {
					out.add(minus ? "-" : "+"); out.add(k);
				} else if (hv != null) {
					out.add(minus ? "-" : "+");
					if (minus && step.form == Form.PREFIX) out.add(visit(step.children.get(0)));
					else if (minus && step.form == Form.ATOM) out.add(numberText(step.token.tokenStr.substring(1), step.index));
					else out.add(visit(step));
					out.add(k);
				} else {
					out.add("+"); out.add(k); out.add("\\cdot "); out.add(grouped(step, strength(step) < PRODUCT, true));
				}
				out.add("\\\\" + k + "\\in\\mathbb Z");
				if (step != null && hv == null) {
					out.add(",\\;0\\le " + k + "\\le\\frac{");
					out.add(grouped(b, strength(b) < ADDITIVE, false)); out.add("-");
					out.add(grouped(a, strength(a) <= ADDITIVE || negative(a), false));
					out.add("}{"); out.add(visit(step)); out.add("}");
				} else {
					out.add("_{\\ge0},\\,"); out.add(visit(index)); out.add(minus ? "\\ge" : "\\le");
					out.add(visit(b));
				}
				out.add("}");
			}
			out.add("}");
			if (ordinary) { out.add("^{"); out.add(visit(b)); out.add("}"); }
			if (!aggregate && !extremum) out.add("\\right)");
			else out.add(grouped(body, strength(body) <= ADDITIVE, false));
		}
	}

	/** Decimal spelling metadata only: no floating evaluation or arbitrary-precision
	 * library. The same character/32-bit-integer algorithm ports to C# and C++.
	 * Excessive exponents remain unclassified and use explicit symbolic ranges.
	 *
	 * @version        6.2.0
	 */
	private static final class DecimalLiteral {
		final int sign, order;
		final String digits;
		DecimalLiteral(int sign, int order, String digits) {
			this.sign = sign; this.order = order; this.digits = digits;
		}
		boolean fractional() { return sign != 0 && order < digits.length(); }
		boolean isUnitMagnitude() { return sign != 0 && order == 1 && digits.equals("1"); }
		boolean isOne() { return sign > 0 && isUnitMagnitude(); }
		int compareTo(DecimalLiteral other) {
			if (sign != other.sign) return Integer.compare(sign, other.sign);
			if (sign == 0) return 0;
			if (order != other.order) return sign * Integer.compare(order, other.order);
			for (int i = 0; i < Math.max(digits.length(), other.digits.length()); i++) {
				char a = i < digits.length() ? digits.charAt(i) : '0';
				char b = i < other.digits.length() ? other.digits.charAt(i) : '0';
				if (a != b) return sign * Character.compare(a, b);
			}
			return 0;
		}
	}
	private static DecimalLiteral literalValue(Node n) {
		boolean negate = false;
		if (n.form == Form.PREFIX && isSign(n.token)) {
			negate = is(n, Operator.TYPE_ID, Operator.MINUS_ID);
			n = n.children.get(0);
		}
		if (!decimalAtom(n)) return null;
		String text = n.token.tokenStr;
		int start = text.startsWith("-") || text.startsWith("+") ? 1 : 0;
		int sign = text.startsWith("-") ? -1 : 1;
		if (negate) sign = -sign;
		int e = Math.max(text.indexOf('e'), text.indexOf('E'));
		int end = e < 0 ? text.length() : e;
		int exponent = 0;
		if (e >= 0) {
			int pos = e + 1, exponentSign = 1;
			if (text.charAt(pos) == '+' || text.charAt(pos) == '-') {
				if (text.charAt(pos) == '-') exponentSign = -1;
				pos++;
			}
			for (; pos < text.length(); pos++) {
				if (exponent > 100000) return null;
				exponent = exponent * 10 + text.charAt(pos) - '0';
			}
			exponent *= exponentSign;
		}
		StringBuilder digits = new StringBuilder();
		int whole = end - start;
		for (int i = start; i < end; i++) {
			if (text.charAt(i) == '.') whole = i - start; else digits.append(text.charAt(i));
		}
		int first = 0, last = digits.length();
		while (first < last && digits.charAt(first) == '0') first++;
		if (first == last) return new DecimalLiteral(0, 0, "0");
		while (last > first && digits.charAt(last - 1) == '0') last--;
		return new DecimalLiteral(sign, whole - first + exponent, digits.substring(first, last));
	}
	private static int compareUnsignedIntegers(String a, String b) {
		int i = 0, j = 0;
		while (i + 1 < a.length() && a.charAt(i) == '0') i++;
		while (j + 1 < b.length() && b.charAt(j) == '0') j++;
		if (a.length() - i != b.length() - j) return Integer.compare(a.length() - i, b.length() - j);
		return a.substring(i).compareTo(b.substring(j));
	}

	private static String number(Node n) { return numberText(n.token.tokenStr, n.index); }
	private static String numberText(String s, int index) {
		if (s.length() > 100000) throw error(index, "literal budget exceeded");
		if (DECIMAL.matcher(s).matches()) {
			int e = Math.max(s.indexOf('e'), s.indexOf('E'));
			if (e >= 0) return decimalText(s.substring(0, e)) + "\\times 10^{" + s.substring(e + 1) + "}";
			return decimalText(s);
		}
		if (FRACTION.matcher(s).matches()) {
			String[] parts = s.split("_", -1);
			if (parts.length == 2) return "\\frac{" + parts[0] + "}{" + parts[1] + "}";
			String fraction = "\\frac{" + parts[1] + "}{" + parts[2] + "}";
			if (parts[0].startsWith("-") || compareUnsignedIntegers(parts[1], parts[2]) >= 0)
				return "(" + parts[0] + "+" + fraction + ")";
			return parts[0] + "\\," + fraction;
		}
		int start = s.startsWith("-") || s.startsWith("+") ? 1 : 0;
		int dot = s.indexOf('.', start);
		if (dot > start) {
			String prefix = s.substring(start, dot);
			int base;
			if (prefix.equalsIgnoreCase("o")) base = 8;
			else if (prefix.equalsIgnoreCase("h")) base = 16;
			else if (prefix.equalsIgnoreCase("b")) base = 2;
			else if (prefix.matches("[bB][0-9]{1,2}")) base = Integer.parseInt(prefix.substring(1));
			else throw error(index, "invalid numeric literal");
			if (base < 1 || base > 36) throw error(index, "invalid numeral base");
			String digits = s.substring(dot + 1);
			if (digits.isEmpty() && base != 1) throw error(index, "missing numeral digits");
			for (int i = 0; i < digits.length(); i++) {
				char c = digits.charAt(i);
				if (c > 127 || (base == 1 ? c != '1' : Character.digit(c, base) < 0))
					throw error(index, "invalid numeral digit");
			}
			return s.substring(0, start) + "(" + (digits.isEmpty() ? "\\varepsilon" : "\\mathrm{" + digits + "}") + ")_{" + base + "}";
		}
		throw error(index, "invalid numeric literal");
	}
	private static String decimalText(String s) {
		if (s.startsWith(".")) return "0" + s;
		if (s.startsWith("-.") || s.startsWith("+.")) return s.substring(0, 1) + "0" + s.substring(1);
		return s;
	}
	private static String name(String source, boolean function, int index) {
		boolean bracketed = source.startsWith("[") && source.endsWith("]");
		String s = bracketed ? source.substring(1, source.length() - 1) : source;
		if (s.length() > 100000 || !NAME.matcher(s).matches()) throw error(index, "invalid identifier");
		String unicode = UNICODE_NAMES.get(s);
		if (unicode != null) return bracketed ? "[" + unicode + "]" : function ? "\\operatorname{" + unicode + "}" : unicode;
		String safe = s.replace("_", "\\_");
		if (bracketed) return "[\\mathrm{" + safe + "}]";
		if (s.length() == 1 && Character.isLetter(s.charAt(0))) return safe;
		return (function ? "\\operatorname{" : "\\mathit{") + safe + "}";
	}
	private static Map<String, String> makeUnicodeNames() {
		Map<String, String> names = new HashMap<>();
		String letters = "αβγδεζηθικλμνξοπρςστυφχψωΑΒΓΔΕΖΗΘΙΚΛΜΝΞΟΠΡΣΤΥΦΧΨΩ∑∏ℿ∆∇∫ℼℇⅇℯ∂";
		String[] latex = {"\\alpha", "\\beta", "\\gamma", "\\delta", "\\epsilon", "\\zeta", "\\eta", "\\theta", "\\iota", "\\kappa", "\\lambda", "\\mu", "\\nu", "\\xi", "o", "\\pi", "\\rho", "\\varsigma", "\\sigma", "\\tau", "\\upsilon", "\\varphi", "\\chi", "\\psi", "\\omega",
			"A", "B", "\\Gamma", "\\Delta", "E", "Z", "H", "\\Theta", "I", "K", "\\Lambda", "M", "N", "\\Xi", "O", "\\Pi", "P", "\\Sigma", "T", "\\Upsilon", "\\Phi", "X", "\\Psi", "\\Omega",
			"\\mathit{\\Sigma}", "\\mathit{\\Pi}", "\\mathit{\\Pi}", "\\mathit{\\Delta}", "\\mathit{\\nabla}", "\\mathit{\\int}", "\\mathit{\\pi}", "\\mathit{E}", "\\mathit{e}", "\\mathit{e}", "\\mathit{\\partial}"};
		if (letters.length() != latex.length) throw new IllegalStateException("Incomplete Unicode name alphabet");
		for (int i = 0; i < latex.length; i++) names.put(letters.substring(i, i + 1), latex[i]);
		return Collections.unmodifiableMap(names);
	}

	/** @version        6.2.0 */
	enum Form { ATOM, CALL, PREFIX, POSTFIX, BINARY }

	/** @version        6.2.0 */
	static final class Node {
		final Token token;
		final int index;
		final Form form;
		final List<Node> children;
		Node(Token token, int index, Form form, List<Node> children) {
			this.token = token;
			this.index = index;
			this.form = form;
			this.children = Collections.unmodifiableList(new ArrayList<>(children));
		}
	}

	/** @version        6.2.0 */
	private static final class Part {
		final Token token;
		final int index;
		Node node;
		Part previous, next;
		int version;
		boolean removed;
		Part(Token token, int index, Node node) {
			this.token = token;
			this.index = index;
			this.node = node;
		}
	}

	/** @version        6.2.0 */
	private static final class Scope {
		final Token call;
		final int index;
		final int level;
		final List<Part> parts = new ArrayList<>();
		final List<Node> arguments = new ArrayList<>();
		Scope(Token call, int index, int level) {
			this.call = call;
			this.index = index;
			this.level = level;
		}
	}

	static IllegalStateException error(int index, String reason) {
		return new IllegalStateException("LaTeX export: " + reason + " (token " + index + ")");
	}

	private static boolean isCall(Token token) {
		int type = token.tokenTypeId;
		return type == Function1Arg.TYPE_ID || type == Function2Arg.TYPE_ID
				|| type == Function3Arg.TYPE_ID || type == FunctionVariadic.TYPE_ID
				|| type == CalculusOperator.TYPE_ID || type == Function.TYPE_ID
				|| type == RecursiveArgument.TYPE_ID_RECURSIVE
				|| (type == Token.NOT_MATCHED && "function".equals(token.looksLike));
	}

	/** Delimiters and levels come from mXparser; no source text is parsed here. */
	static Node reconstruct(List<Token> tokens) {
		if (tokens == null) throw error(0, "missing token stream");
		if (tokens.size() > MAX_TOKENS) throw error(0, "token budget exceeded");
		ArrayDeque<Scope> scopes = new ArrayDeque<>();
		scopes.push(new Scope(null, 0, -1));
		for (int i = 0; i < tokens.size(); i++) {
			Token t = tokens.get(i);
			Scope scope = scopes.peek();
			if (t == null || t.tokenStr == null) throw error(i, "incomplete token");
			if (t.tokenTypeId == ParserSymbol.TYPE_ID && t.tokenId == ParserSymbol.BLANK_ID) continue;
			if (isCall(t)) {
				if (i + 1 >= tokens.size() || !tokens.get(i + 1).isLeftParenthesis())
					throw error(i, "function requires an argument list");
				if (scopes.size() > MAX_DEPTH) throw error(i, "nesting budget exceeded");
				scopes.push(new Scope(t, i, tokens.get(++i).tokenLevel));
			} else if (t.isLeftParenthesis()) {
				if (scopes.size() > MAX_DEPTH) throw error(i, "nesting budget exceeded");
				scopes.push(new Scope(null, i, t.tokenLevel));
			} else if (t.isParameterSeparator()) {
				if (scope.call == null || t.tokenLevel != scope.level)
					throw error(i, "separator outside an argument list");
				scope.arguments.add(reduce(scope.parts, i));
				scope.parts.clear();
			} else if (t.isRightParenthesis()) {
				if (scopes.size() == 1 || t.tokenLevel != scope.level)
					throw error(i, "unmatched closing parenthesis");
				Node result;
				if (scope.call != null) {
					if (!scope.parts.isEmpty() || !scope.arguments.isEmpty())
						scope.arguments.add(reduce(scope.parts, i));
					result = new Node(scope.call, scope.index, Form.CALL, scope.arguments);
				} else result = reduce(scope.parts, i);
				scopes.pop();
				scopes.peek().parts.add(new Part(result.token, result.index, result));
			} else {
				boolean operator = t.isBinaryOperator() || t.isUnaryLeftOperator() || t.isUnaryRightOperator();
				if (!operator && !t.isNumber() && !t.isIdentifier()
						&& t.tokenTypeId != RandomVariable.TYPE_ID && t.tokenTypeId != Token.NOT_MATCHED)
					throw error(i, "unknown token type or syntax symbol");
				scope.parts.add(new Part(t, i, operator ? null
						: new Node(t, i, Form.ATOM, Collections.<Node>emptyList())));
			}
		}
		if (scopes.size() != 1) throw error(scopes.peek().index, "unclosed parenthesis");
		return scopes.peek().parts.isEmpty() ? null : reduce(scopes.peek().parts, tokens.size());
	}

	/* The selection order deliberately mirrors calculateFirstAndFullyCompile:
	 * ready fragments first, rightmost ready powers/tetrations, then first position in
	 * each remaining group. A conventional precedence-only parser is insufficient
	 * for signs and for mXparser's power/postfix/remainder ordering. */
	/** @version        6.2.0 */
	private static final class Candidate {
		final Part part;
		final int version;
		final Binding priority;
		Candidate(Part part) {
			this.part = part;
			this.version = part.version;
			this.priority = binding(part.token, part.index);
		}
	}
	private static boolean ready(Part part) {
		boolean left = part.previous != null && part.previous.node != null;
		boolean right = part.next != null && part.next.node != null;
		return part.token.isUnaryLeftOperator() || isSign(part.token) ? right
				: part.token.isUnaryRightOperator() ? left : left && right;
	}
	private static void offer(PriorityQueue<Candidate> candidates, Part part) {
		if (part == null || part.removed || part.node != null) return;
		part.version++;
		if (ready(part)) candidates.add(new Candidate(part));
	}
	/** Linked fragments plus a queue of ready candidates preserve the original
	 * selection order without rescanning/shifting a flat expression quadratically.
	 * Only the two surviving neighbours can become newly ready after a reduction. */
	private static Node reduce(List<Part> parts, int index) {
		if (parts.isEmpty()) throw error(index, "empty expression or argument");
		PriorityQueue<Candidate> candidates = new PriorityQueue<>((a, b) -> {
			if (a.priority != b.priority) return a.priority.compareTo(b.priority);
			return rightAssociative(a.part.token) ? Integer.compare(b.part.index, a.part.index)
					: Integer.compare(a.part.index, b.part.index);
		});
		for (int i = 0; i < parts.size(); i++) {
			Part part = parts.get(i);
			part.previous = i == 0 ? null : parts.get(i - 1);
			part.next = i + 1 == parts.size() ? null : parts.get(i + 1);
		}
		for (Part part : parts) offer(candidates, part);
		Part head = parts.get(0);
		int remaining = parts.size();
		while (remaining > 1 || head.node == null) {
			Candidate candidate = candidates.poll();
			if (candidate == null) {
				Part offending = head;
				while (offending.node != null && offending.next != null) offending = offending.next;
				throw error(offending.index, "missing operand or adjacent expressions");
			}
			Part operator = candidate.part;
			if (operator.removed || operator.node != null || candidate.version != operator.version) continue;
			boolean leftReady = operator.previous != null && operator.previous.node != null;
			Form form = operator.token.isUnaryLeftOperator() || (isSign(operator.token) && !leftReady)
					? Form.PREFIX : operator.token.isUnaryRightOperator() ? Form.POSTFIX : Form.BINARY;
			List<Node> operands = new ArrayList<>();
			Part before = operator.previous, after = operator.next;
			if (form != Form.PREFIX) {
				operands.add(before.node);
				before.removed = true;
				before = before.previous;
				remaining--;
			}
			if (form != Form.POSTFIX) {
				operands.add(after.node);
				after.removed = true;
				after = after.next;
				remaining--;
			}
			operator.node = new Node(operator.token, operator.index, form, operands);
			operator.previous = before;
			operator.next = after;
			if (before == null) head = operator; else before.next = operator;
			if (after != null) after.previous = operator;
			offer(candidates, before);
			offer(candidates, after);
		}
		return head.node;
	}

	private static boolean isSign(Token t) {
		return t.tokenTypeId == Operator.TYPE_ID
				&& (t.tokenId == Operator.PLUS_ID || t.tokenId == Operator.MINUS_ID);
	}
	private static boolean rightAssociative(Token t) {
		return t.tokenTypeId == Operator.TYPE_ID
				&& (t.tokenId == Operator.POWER_ID || t.tokenId == Operator.TETRATION_ID);
	}

	/* Source order in Expression.calculateFirstAndFullyCompile. Keep this catalogue
	 * and the independent operator-combination audit together when that method changes.
	 * The evaluator's exceptional multi-power selection with an unready negative
	 * exponent is intentionally deferred to a separate engine investigation. */
	/** @version        6.2.0 */
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
}
