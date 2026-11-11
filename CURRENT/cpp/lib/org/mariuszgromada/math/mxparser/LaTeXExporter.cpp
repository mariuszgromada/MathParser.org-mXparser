/*
 * @(#)LaTeXExporter.cpp        6.2.0    2026-11-11
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
#include "LaTeXExporter.hpp"
#include "LaTeXSupport.hpp"
#include "wrapper/ReadOnlyList.hpp"
#include "wrapper/Integer.hpp"
#include "Expression.hpp"
#include "Argument.hpp"
#include "Constant.hpp"
#include "Function.hpp"
#include "RecursiveArgument.hpp"
#include "parsertokens/Token.hpp"
#include "parsertokens/BitwiseOperator.hpp"
#include <functional>
#include "parsertokens/ParserSymbol.hpp"
#include "parsertokens/Operator.hpp"
#include "parsertokens/BooleanOperator.hpp"
#include "parsertokens/BinaryRelation.hpp"
#include "parsertokens/Function1Arg.hpp"
#include "parsertokens/Function2Arg.hpp"
#include "parsertokens/Function3Arg.hpp"
#include "parsertokens/FunctionVariadic.hpp"
#include "parsertokens/CalculusOperator.hpp"
#include "parsertokens/Unit.hpp"
#include "parsertokens/ConstantValue.hpp"
#include "parsertokens/RandomVariable.hpp"
namespace org::mariuszgromada::math::mxparser {
using namespace parsertokens; using namespace wrapper; using namespace latex_detail;
namespace {
/** @version        6.2.0 */
class ExporterImplementation {
public:
using object = std::any;
enum class Form; enum class Binding; class CandidateQueue; struct Node; struct Rule; struct Visit; struct Scope; struct Candidate; struct DecimalLiteral; struct Part;
using NodePtr = Ptr<Node>; using RulePtr = Ptr<const Rule>; using VisitPtr = Ptr<Visit>; using ScopePtr = Ptr<Scope>; using CandidatePtr = Ptr<Candidate>; using DecimalLiteralPtr = Ptr<DecimalLiteral>; using PartPtr = Ptr<Part>;

	
	static constexpr int MAX_TOKENS = 100000;
	static constexpr int MAX_DEPTH = 256;
	// These describe mathematical presentation, not runtime reduction priority.
	static constexpr int LOGICAL = 20, RELATION = 30, NOT = 40, ADDITIVE = 50;
	static constexpr int PRODUCT = 60, SIGN = 70, POWER = 80, POSTFIX = 90, ATOM = 100;
	static constexpr int MAX_OUTPUT = 4000000;
	static const Pattern& NAME() { STATIC_VARS_INITI_DEPENDENCY(ParserSymbol); static const Pattern value{Text(ParserSymbol::nameOnlyTokenRegExp)}; return value; }
	static const Pattern& DECIMAL() { STATIC_VARS_INITI_DEPENDENCY(ParserSymbol); static const Pattern value{Text(ParserSymbol::DECIMAL_REG_EXP)}; return value; }
	static const Pattern& FRACTION() { STATIC_VARS_INITI_DEPENDENCY(ParserSymbol); static const Pattern value{Text(UTF("[+-]?")) + Text(ParserSymbol::FRACTION)}; return value; }
	static const Map<Long, RulePtr>& RULES() { static const auto value = makeRules(); return value; }
	static const Map<Text, Text>& UNICODE_NAMES() { static const auto value = makeUnicodeNames(); return value; }

	/** @version        6.2.0 */
	enum class Style {
		TEMPLATE, OPERATOR, LITERAL, DELIMITER, DIRECT_FUNCTION, NAMED_FUNCTION,
		CASES_IF, CASES_IFF, CONTINUED_FRACTION, LIST_SUM, LIST_PRODUCT, MEAN,
		LIST_AND, LIST_OR, RANGE, RANGE_SAMPLE, INTEGRAL, DERIVATIVE,
		NTH_DERIVATIVE, DIFFERENCE, SOLVE, NORMAL
	};

	/** @version        6.2.0 */
	struct Slot {
		const int number;
		Slot(int number) : number(number) {
		}
	};
	/** @version        6.2.0 */
	struct Rule {
		const Text symbol;
		const std::vector<object> templ;
		const Style style;
		const std::vector<int> arities;
		const int listStart;
		const Text separator;
		const bool atomicPresentation;
		Rule(Text symbol, Text templ, Style style, std::vector<int> arities, int listStart, Text separator) : symbol(symbol), templ(compileTemplate(templ)), style(style), arities(arities), listStart(listStart), separator(separator), atomicPresentation(ExporterImplementation::atomicPresentation(templ)) {
}
		bool accepts(int count) const {
			if (arities.size() == 0) return count >= 1;
			for (int arity : arities) if (count == arity) return true;
			return false;
		}
	};
	/** Presentation metadata for static templates, not source-language parsing.
	 * A scalar token can display a quotient, power or function call (units and
	 * named constants), so token atomicity alone cannot decide parentheses. */
	static bool atomicPresentation(Text templ) {
		int depth = 0;
		for (int i = 0; i < templ.length(); i++) {
			Char c = templ.charAt(i);
			if (c == UTF('{')) depth++;
			else if (c == UTF('}')) depth--;
			else if (depth == 0 && (c == UTF('^') || c == UTF('/') || c == UTF('('))) return false;
		}
		return !templ.startsWith(Text(UTF("\\frac")));
	}

	static Long key(int type, int id) { return ((Long)type * 4294967296LL) | (id & 0xffffffffLL); }
	static RulePtr rule(TokenPtr token) { return RULES().get(key(token->tokenTypeId, token->tokenId)); }
	static void registerRule(Map<Long, RulePtr>& rules, int type, int id, RulePtr rule) {
		if (rules.put(key(type, id), rule) != nullptr) throw logicError(Text(UTF("Duplicate LaTeX rule")));
	}
	template<typename... A> static void registerRule(Map<Long, RulePtr>& rules, int type, int id, Text symbol,
			Text templ, Style style, A... arities) {
		registerRule(rules, type, id, new_Rule(symbol, templ, style, std::vector<int>{arities...}, 0, Text(UTF(","))));
	}
	static void listRule(Map<Long, RulePtr>& rules, int type, int id, Text symbol,
			Text templ, Style style, int start, Text separator) {
		registerRule(rules, type, id, new_Rule(symbol, templ, style, std::vector<int>{}, start, separator));
	}

	/** Compile only trusted, static templates. Substituted data is never parsed as a template. */
	static std::vector<object> compileTemplate(Text templ) {
		ListPtr<object> parts = new_List<object>();
		TextBuilder text;
		for (int i = 0; i < templ.length(); i++) {
			Char c = templ.charAt(i);
			if (c != UTF('@')) { text.append(c); continue; }
			if (++i == templ.length()) throw logicError(Text(UTF("Incomplete LaTeX template")));
			c = templ.charAt(i);
			if (c == UTF('@')) { text.append(c); continue; }
			if (text.length() > 0) { parts->add(text.toString()); text.setLength(0); }
			int number;
			if (c == UTF('*')) number = -2;
			else if (c == UTF('#')) number = -3;
			else if (c == UTF('0')) number = 0;
			else if (c == UTF('+') || c == UTF('-')) {
				bool negative = c == UTF('-');
				int start = ++i;
				while (i < templ.length() && isDigit(templ.charAt(i))) i++;
				if (i == start) throw logicError(Text(UTF("Invalid LaTeX slot")));
				number = parseInt(templ.substring(start, i--));
				if (number < 1 || (negative && number != 1)) throw logicError(Text(UTF("Invalid LaTeX operand")));
				if (negative) number = -1;
			} else throw logicError(Text(UTF("Unknown LaTeX slot")));
			parts->add(Slot(number));
		}
		if (text.length() > 0) parts->add(text.toString());
		return copyObjects(parts);
	}

	static Map<Long, RulePtr> makeRules() {
		Map<Long, RulePtr> rules = {};
		registerRule(rules, ParserSymbol::NUMBER_TYPE_ID, ParserSymbol::NUMBER_ID, Text(UTF("")), Text(UTF("")), Style::LITERAL, 0);
		// Contextual structural operators use their symbol and Style.OPERATOR handler.
		// Their empty templates are intentional; only actually executed templates are stored.
		registerRule(rules, Operator::TYPE_ID, Operator::PLUS_ID, Text(UTF("+")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, Operator::TYPE_ID, Operator::MINUS_ID, Text(UTF("-")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, Operator::TYPE_ID, Operator::MULTIPLY_ID, Text(UTF("\\cdot")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, Operator::TYPE_ID, Operator::DIVIDE_ID, Text(UTF("\\frac")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, Operator::TYPE_ID, Operator::POWER_ID, Text(UTF("^")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, Operator::TYPE_ID, Operator::FACT_ID, Text(UTF("!")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, Operator::TYPE_ID, Operator::MOD_ID, Text(UTF("")), Text(UTF("\\operatorname{rem}(@-1,@+1)")), Style::OPERATOR);
		registerRule(rules, Operator::TYPE_ID, Operator::PERC_ID, Text(UTF("\\%")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, Operator::TYPE_ID, Operator::TETRATION_ID, Text(UTF("")), Text(UTF("")), Style::OPERATOR);
		RulePtr squareRoot = new_Rule(Text(UTF("\\sqrt")), Text(UTF("@0{@+1}")), Style::TEMPLATE, std::vector<int>{1}, 0, Text(UTF(",")));
		registerRule(rules, Operator::TYPE_ID, Operator::SQUARE_ROOT_ID, squareRoot);
		registerRule(rules, Operator::TYPE_ID, Operator::CUBE_ROOT_ID, Text(UTF("\\sqrt")), Text(UTF("@0[3]{@+1}")), Style::OPERATOR);
		registerRule(rules, Operator::TYPE_ID, Operator::FOURTH_ROOT_ID, Text(UTF("\\sqrt")), Text(UTF("@0[4]{@+1}")), Style::OPERATOR);
		registerRule(rules, Operator::TYPE_ID, Operator::DIVIDE_QUOTIENT_ID, Text(UTF("")), Text(UTF("\\left\\lfloor\\frac{@-1}{@+1}\\right\\rfloor")), Style::OPERATOR);
		registerRule(rules, BooleanOperator::TYPE_ID, BooleanOperator::AND_ID, Text(UTF("\\land")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BooleanOperator::TYPE_ID, BooleanOperator::NAND_ID, Text(UTF("\\uparrow")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BooleanOperator::TYPE_ID, BooleanOperator::OR_ID, Text(UTF("\\lor")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BooleanOperator::TYPE_ID, BooleanOperator::NOR_ID, Text(UTF("\\downarrow")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BooleanOperator::TYPE_ID, BooleanOperator::XOR_ID, Text(UTF("\\oplus")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BooleanOperator::TYPE_ID, BooleanOperator::IMP_ID, Text(UTF("\\Rightarrow")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BooleanOperator::TYPE_ID, BooleanOperator::CIMP_ID, Text(UTF("\\Leftarrow")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BooleanOperator::TYPE_ID, BooleanOperator::NIMP_ID, Text(UTF("\\nRightarrow")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BooleanOperator::TYPE_ID, BooleanOperator::CNIMP_ID, Text(UTF("\\nLeftarrow")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BooleanOperator::TYPE_ID, BooleanOperator::EQV_ID, Text(UTF("\\Leftrightarrow")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BooleanOperator::TYPE_ID, BooleanOperator::NEG_ID, Text(UTF("\\neg")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BinaryRelation::TYPE_ID, BinaryRelation::EQ_ID, Text(UTF("=")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BinaryRelation::TYPE_ID, BinaryRelation::NEQ_ID, Text(UTF("\\ne")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BinaryRelation::TYPE_ID, BinaryRelation::LT_ID, Text(UTF("<")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BinaryRelation::TYPE_ID, BinaryRelation::GT_ID, Text(UTF(">")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BinaryRelation::TYPE_ID, BinaryRelation::LEQ_ID, Text(UTF("\\le")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, BinaryRelation::TYPE_ID, BinaryRelation::GEQ_ID, Text(UTF("\\ge")), Text(UTF("")), Style::OPERATOR);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::SIN_ID, Text(UTF("\\sin")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::COS_ID, Text(UTF("\\cos")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::TAN_ID, Text(UTF("\\tan")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::CTAN_ID, Text(UTF("\\cot")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::SEC_ID, Text(UTF("\\sec")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::COSEC_ID, Text(UTF("\\csc")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ASIN_ID, Text(UTF("\\arcsin")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ACOS_ID, Text(UTF("\\arccos")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ATAN_ID, Text(UTF("\\arctan")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ACTAN_ID, Text(UTF("\\operatorname{arccot}")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::LN_ID, Text(UTF("\\ln")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::LOG2_ID, Text(UTF("\\log_{2}")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::LOG10_ID, Text(UTF("\\log_{10}")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::RAD_ID, Text(UTF("\\operatorname{rad}")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::EXP_ID, Text(UTF("\\exp")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::SQRT_ID, squareRoot);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::SINH_ID, Text(UTF("\\sinh")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::COSH_ID, Text(UTF("\\cosh")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::TANH_ID, Text(UTF("\\tanh")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::COTH_ID, Text(UTF("\\coth")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::SECH_ID, Text(UTF("\\operatorname{sech}")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::CSCH_ID, Text(UTF("\\operatorname{csch}")), Text(UTF("@0 @+1")), Style::DIRECT_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::DEG_ID, Text(UTF("\\operatorname{deg}")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ABS_ID, Text(UTF("")), Text(UTF("\\left\\lvert @+1\\right\\rvert")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::SGN_ID, Text(UTF("\\operatorname{sgn}")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::FLOOR_ID, Text(UTF("")), Text(UTF("\\left\\lfloor @+1\\right\\rfloor")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::CEIL_ID, Text(UTF("")), Text(UTF("\\left\\lceil @+1\\right\\rceil")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::NOT_ID, Text(UTF("\\neg")), Text(UTF("@0 @+1")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ARSINH_ID, Text(UTF("\\operatorname{arsinh}")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ARCOSH_ID, Text(UTF("\\operatorname{arcosh}")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ARTANH_ID, Text(UTF("\\operatorname{artanh}")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ARCOTH_ID, Text(UTF("\\operatorname{arcoth}")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ARSECH_ID, Text(UTF("\\operatorname{arsech}")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ARCSCH_ID, Text(UTF("\\operatorname{arcsch}")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::SA_ID, Text(UTF("\\operatorname{sinc}_{\\pi}")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::SINC_ID, Text(UTF("\\operatorname{sinc}_{0}")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::BELL_NUMBER_ID, Text(UTF("")), Text(UTF("B_{@+1}")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::LUCAS_NUMBER_ID, Text(UTF("")), Text(UTF("L_{@+1}")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::FIBONACCI_NUMBER_ID, Text(UTF("")), Text(UTF("F_{@+1}")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::HARMONIC_NUMBER_ID, Text(UTF("")), Text(UTF("H_{@+1}")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::IS_PRIME_ID, Text(UTF("")), Text(UTF("\\mathbf{1}_{\\mathbb{P}}(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::PRIME_COUNT_ID, Text(UTF("")), Text(UTF("\\pi(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::EXP_INT_ID, Text(UTF("\\operatorname{Ei}")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::LOG_INT_ID, Text(UTF("\\operatorname{li}")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::OFF_LOG_INT_ID, Text(UTF("\\operatorname{Li}")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::GAUSS_ERF_ID, Text(UTF("\\operatorname{erf}")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::GAUSS_ERFC_ID, Text(UTF("\\operatorname{erfc}")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::GAUSS_ERF_INV_ID, Text(UTF("")), Text(UTF("\\operatorname{erf}^{-1}(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::GAUSS_ERFC_INV_ID, Text(UTF("")), Text(UTF("\\operatorname{erfc}^{-1}(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ULP_ID, Text(UTF("\\operatorname{ulp}")), Text(UTF("@0(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ISNAN_ID, Text(UTF("")), Text(UTF("\\mathbf{1}_{\\mathrm{NaN}}(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::NDIG10_ID, Text(UTF("")), Text(UTF("\\operatorname{digits}_{10}(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::NFACT_ID, Text(UTF("")), Text(UTF("\\omega(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ARCSEC_ID, Text(UTF("\\operatorname{arcsec}")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::ARCCSC_ID, Text(UTF("\\operatorname{arccsc}")), Text(UTF("@0(@+1)")), Style::NAMED_FUNCTION, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::GAMMA_ID, Text(UTF("")), Text(UTF("\\Gamma(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::LAMBERT_W0_ID, Text(UTF("")), Text(UTF("W_{0}(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::LAMBERT_W1_ID, Text(UTF("")), Text(UTF("W_{-1}(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::SGN_GAMMA_ID, Text(UTF("")), Text(UTF("\\operatorname{sgn}\\!\\bigl(\\Gamma(@+1)\\bigr)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::LOG_GAMMA_ID, Text(UTF("")), Text(UTF("\\ln\\left\\lvert\\Gamma(@+1)\\right\\rvert")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::DI_GAMMA_ID, Text(UTF("")), Text(UTF("\\psi(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::PARAM_ID, Text(UTF("")), Text(UTF("\\operatorname{param}_{\\mathrm{UDF}}(@+1)")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::RND_STUDENT_T_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(t_{@+1})")), Style::TEMPLATE, 1);
		registerRule(rules, Function1Arg::TYPE_ID, Function1Arg::RND_CHI2_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\chi^{2}_{@+1})")), Style::TEMPLATE, 1);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::LOG_ID, Text(UTF("")), Text(UTF("\\log_{@+1}(@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::MOD_ID, Text(UTF("")), Text(UTF("\\operatorname{rem}(@+1,@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::BINOM_COEFF_ID, Text(UTF("")), Text(UTF("\\binom{@+1}{@+2}")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::BERNOULLI_NUMBER_ID, Text(UTF("")), Text(UTF("B_{@+1}(@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::STIRLING1_NUMBER_ID, Text(UTF("")), Text(UTF("\\left[\\genfrac{}{}{0pt}{}{@+1}{@+2}\\right]")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::STIRLING2_NUMBER_ID, Text(UTF("")), Text(UTF("\\left\\{\\genfrac{}{}{0pt}{}{@+1}{@+2}\\right\\}")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::WORPITZKY_NUMBER_ID, Text(UTF("")), Text(UTF("\\mathrm{Worp}_{@+1,@+2}")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::EULER_NUMBER_ID, Text(UTF("")), Text(UTF("\\left\\langle\\genfrac{}{}{0pt}{}{@+1}{@+2}\\right\\rangle")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::KRONECKER_DELTA_ID, Text(UTF("")), Text(UTF("\\delta_{@+1,@+2}")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::EULER_POLYNOMIAL_ID, Text(UTF("")), Text(UTF("E_{@+1}(@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::HARMONIC_NUMBER_ID, Text(UTF("")), Text(UTF("H_{@+2}^{(@+1)}")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::RND_UNIFORM_CONT_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U(@+1,@+2))")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::RND_UNIFORM_DISCR_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[@+1,@+2])")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::ROUND_ID, Text(UTF("")), Text(UTF("\\operatorname{round}_{\\mathrm{half\\,up}}(@+1,@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::RND_NORMAL_ID, Text(UTF("")), Text(UTF("")), Style::NORMAL, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::NDIG_ID, Text(UTF("")), Text(UTF("\\operatorname{digits}_{@+2}(@+1)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::DIGIT10_ID, Text(UTF("")), Text(UTF("\\operatorname{digit}_{10}(@+1,@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::FACTVAL_ID, Text(UTF("")), Text(UTF("p_{@+2}(@+1)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::FACTEXP_ID, Text(UTF("")), Text(UTF("\\nu_{@+2}(@+1)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::ROOT_ID, Text(UTF("")), Text(UTF("\\sqrt[{@+1}]{@+2}")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::INC_GAMMA_LOWER_ID, Text(UTF("")), Text(UTF("\\gamma(@+1,@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::INC_GAMMA_UPPER_ID, Text(UTF("")), Text(UTF("\\Gamma(@+1,@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::REG_GAMMA_LOWER_ID, Text(UTF("")), Text(UTF("P(@+1,@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::REG_GAMMA_UPPER_ID, Text(UTF("")), Text(UTF("Q(@+1,@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::PERMUTATIONS_ID, Text(UTF("")), Text(UTF("\\left(@+1\\right)^{\\underline{@+2}}")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::BETA_ID, Text(UTF("")), Text(UTF("B(@+1,@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::LOG_BETA_ID, Text(UTF("")), Text(UTF("\\ln B(@+1,@+2)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::PDF_STUDENT_T_ID, Text(UTF("")), Text(UTF("f_{t_{@+2}}(@+1)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::CDF_STUDENT_T_ID, Text(UTF("")), Text(UTF("F_{t_{@+2}}(@+1)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::QNT_STUDENT_T_ID, Text(UTF("")), Text(UTF("Q_{t_{@+2}}(@+1)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::PDF_CHI2_ID, Text(UTF("")), Text(UTF("f_{\\chi^2_{@+2}}(@+1)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::CDF_CHI2_ID, Text(UTF("")), Text(UTF("F_{\\chi^2_{@+2}}(@+1)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::QNT_CHI2_ID, Text(UTF("")), Text(UTF("Q_{\\chi^2_{@+2}}(@+1)")), Style::TEMPLATE, 2);
		registerRule(rules, Function2Arg::TYPE_ID, Function2Arg::RND_F_SNEDECOR_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathsf F_{@+1,@+2})")), Style::TEMPLATE, 2);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::IF_CONDITION_ID, Text(UTF("")), Text(UTF("")), Style::CASES_IF, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::CHI_ID, Text(UTF("")), Text(UTF("\\mathbf{1}_{(@+2,@+3)}(@+1)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::CHI_LR_ID, Text(UTF("")), Text(UTF("\\mathbf{1}_{[@+2,@+3]}(@+1)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::CHI_L_ID, Text(UTF("")), Text(UTF("\\mathbf{1}_{[@+2,@+3)}(@+1)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::CHI_R_ID, Text(UTF("")), Text(UTF("\\mathbf{1}_{(@+2,@+3]}(@+1)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::PDF_UNIFORM_CONT_ID, Text(UTF("")), Text(UTF("f_{\\mathcal U(@+2,@+3)}(@+1)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::CDF_UNIFORM_CONT_ID, Text(UTF("")), Text(UTF("F_{\\mathcal U(@+2,@+3)}(@+1)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::QNT_UNIFORM_CONT_ID, Text(UTF("")), Text(UTF("Q_{\\mathcal U(@+2,@+3)}(@+1)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::PDF_NORMAL_ID, Text(UTF("f")), Text(UTF("")), Style::NORMAL, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::CDF_NORMAL_ID, Text(UTF("F")), Text(UTF("")), Style::NORMAL, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::QNT_NORMAL_ID, Text(UTF("Q")), Text(UTF("")), Style::NORMAL, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::DIGIT_ID, Text(UTF("")), Text(UTF("\\operatorname{digit}_{@+3}(@+1,@+2)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::INC_BETA_ID, Text(UTF("")), Text(UTF("B_{@+1}(@+2,@+3)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::REG_BETA_ID, Text(UTF("")), Text(UTF("I_{@+1}(@+2,@+3)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::PDF_F_SNEDECOR_ID, Text(UTF("")), Text(UTF("f_{\\mathsf F_{@+2,@+3}}(@+1)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::CDF_F_SNEDECOR_ID, Text(UTF("")), Text(UTF("F_{\\mathsf F_{@+2,@+3}}(@+1)")), Style::TEMPLATE, 3);
		registerRule(rules, Function3Arg::TYPE_ID, Function3Arg::QNT_F_SNEDECOR_ID, Text(UTF("")), Text(UTF("Q_{\\mathsf F_{@+2,@+3}}(@+1)")), Style::TEMPLATE, 3);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::IFF_ID, Text(UTF("")), Text(UTF("")), Style::CASES_IFF);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::MIN_ID, Text(UTF("\\min")), Text(UTF("@0(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::MAX_ID, Text(UTF("\\max")), Text(UTF("@0(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::CONT_FRAC_ID, Text(UTF("")), Text(UTF("")), Style::CONTINUED_FRACTION);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::CONT_POL_ID, Text(UTF("")), Text(UTF("K_{@#}(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::GCD_ID, Text(UTF("\\gcd")), Text(UTF("@0(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::LCM_ID, Text(UTF("\\operatorname{lcm}")), Text(UTF("@0(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::SUM_ID, Text(UTF("")), Text(UTF("")), Style::LIST_SUM);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::PROD_ID, Text(UTF("")), Text(UTF("")), Style::LIST_PRODUCT);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::AVG_ID, Text(UTF("")), Text(UTF("")), Style::MEAN);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::VAR_ID, Text(UTF("")), Text(UTF("s^2(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::STD_ID, Text(UTF("")), Text(UTF("s(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::RND_LIST_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathrm{list}}(@*))")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::COALESCE_ID, Text(UTF("")), Text(UTF("\\operatorname{first}_{\\ne\\mathrm{NaN}}(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::OR_ID, Text(UTF("")), Text(UTF("")), Style::LIST_OR);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::AND_ID, Text(UTF("")), Text(UTF("")), Style::LIST_AND);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::XOR_ID, Text(UTF("")), Text(UTF("\\operatorname{exactlyOne}(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::ARGMIN_ID, Text(UTF("")), Text(UTF("\\operatorname*{arg\\,min}_{\\mathrm{first},\\,1}(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::ARGMAX_ID, Text(UTF("")), Text(UTF("\\operatorname*{arg\\,max}_{\\mathrm{first},\\,1}(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::MEDIAN_ID, Text(UTF("")), Text(UTF("\\operatorname{median}(@*)")), Style::TEMPLATE);
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::MODE_ID, Text(UTF("")), Text(UTF("\\operatorname{mode}(@*)")), Style::TEMPLATE);
		listRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::BASE_ID, Text(UTF("")), Text(UTF("\\operatorname{value}_{@+1}(@*)")), Style::TEMPLATE, 1, Text(UTF(",")));
		registerRule(rules, FunctionVariadic::TYPE_ID, FunctionVariadic::NDIST_ID, Text(UTF("")), Text(UTF("\\operatorname{nDistinct}(@*)")), Style::TEMPLATE);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::SUM_ID, Text(UTF("\\sum")), Text(UTF("")), Style::RANGE, 4, 5);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::PROD_ID, Text(UTF("\\prod")), Text(UTF("")), Style::RANGE, 4, 5);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::INT_ID, Text(UTF("")), Text(UTF("")), Style::INTEGRAL, 4);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::DER_ID, Text(UTF("")), Text(UTF("")), Style::DERIVATIVE, 2, 3, 4, 5);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::DER_LEFT_ID, Text(UTF("-")), Text(UTF("")), Style::DERIVATIVE, 2, 3, 4, 5);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::DER_RIGHT_ID, Text(UTF("+")), Text(UTF("")), Style::DERIVATIVE, 2, 3, 4, 5);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::DERN_ID, Text(UTF("")), Text(UTF("")), Style::NTH_DERIVATIVE, 3, 5);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::FORW_DIFF_ID, Text(UTF("\\Delta")), Text(UTF("")), Style::DIFFERENCE, 2, 3);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::BACKW_DIFF_ID, Text(UTF("\\nabla")), Text(UTF("")), Style::DIFFERENCE, 2, 3);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::AVG_ID, Text(UTF("\\operatorname{mean}")), Text(UTF("")), Style::RANGE_SAMPLE, 4, 5);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::VAR_ID, Text(UTF("s^2")), Text(UTF("")), Style::RANGE_SAMPLE, 4, 5);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::STD_ID, Text(UTF("s")), Text(UTF("")), Style::RANGE_SAMPLE, 4, 5);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::MIN_ID, Text(UTF("\\min")), Text(UTF("")), Style::RANGE_SAMPLE, 4, 5);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::MAX_ID, Text(UTF("\\max")), Text(UTF("")), Style::RANGE_SAMPLE, 4, 5);
		registerRule(rules, CalculusOperator::TYPE_ID, CalculusOperator::SOLVE_ID, Text(UTF("")), Text(UTF("")), Style::SOLVE, 4);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::PI_ID, Text(UTF("")), Text(UTF("\\pi")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::EULER_ID, Text(UTF("")), Text(UTF("\\mathrm e")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::EULER_MASCHERONI_ID, Text(UTF("")), Text(UTF("\\gamma")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::GOLDEN_RATIO_ID, Text(UTF("")), Text(UTF("\\varphi")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::PLASTIC_ID, Text(UTF("")), Text(UTF("\\rho_{\\mathrm{plastic}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::EMBREE_TREFETHEN_ID, Text(UTF("")), Text(UTF("\\sigma_{\\mathrm{Embree\\!-\\!Trefethen}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::FEIGENBAUM_DELTA_ID, Text(UTF("")), Text(UTF("\\delta_{\\mathrm F}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::FEIGENBAUM_ALPHA_ID, Text(UTF("")), Text(UTF("\\lvert\\alpha_{\\mathrm F}\\rvert")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::TWIN_PRIME_ID, Text(UTF("")), Text(UTF("C_{2,\\mathrm{twin}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MEISSEL_MERTEENS_ID, Text(UTF("")), Text(UTF("M_{\\mathrm{MM}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::BRAUN_TWIN_PRIME_ID, Text(UTF("")), Text(UTF("B_{2,\\mathrm{Brun}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::BRAUN_PRIME_QUADR_ID, Text(UTF("")), Text(UTF("B_{4,\\mathrm{Brun}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::BRUIJN_NEWMAN_ID, Text(UTF("")), Text(UTF("\\Lambda_{\\mathrm{dBN}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::CATALAN_ID, Text(UTF("")), Text(UTF("G_{\\mathrm{Cat}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::LANDAU_RAMANUJAN_ID, Text(UTF("")), Text(UTF("K_{\\mathrm{LR}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::VISWANATH_ID, Text(UTF("")), Text(UTF("\\lambda_{\\mathrm{Viswanath}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::LEGENDRE_ID, Text(UTF("")), Text(UTF("B_{\\mathrm{Legendre}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::RAMANUJAN_SOLDNER_ID, Text(UTF("")), Text(UTF("\\mu_{\\mathrm{RS}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::ERDOS_BORWEIN_ID, Text(UTF("")), Text(UTF("E_{\\mathrm{EB}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::BERNSTEIN_ID, Text(UTF("")), Text(UTF("\\beta_{\\mathrm{Bernstein}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::GAUSS_KUZMIN_WIRSING_ID, Text(UTF("")), Text(UTF("\\lambda_{\\mathrm{GKW}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::HAFNER_SARNAK_MCCURLEY_ID, Text(UTF("")), Text(UTF("C_{\\mathrm{HSM}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::GOLOMB_DICKMAN_ID, Text(UTF("")), Text(UTF("\\lambda_{\\mathrm{GD}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::CAHEN_ID, Text(UTF("")), Text(UTF("C_{\\mathrm{Cahen}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::LAPLACE_LIMIT_ID, Text(UTF("")), Text(UTF("e_{\\mathrm{Laplace}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::ALLADI_GRINSTEAD_ID, Text(UTF("")), Text(UTF("C_{\\mathrm{AG}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::LENGYEL_ID, Text(UTF("")), Text(UTF("\\lambda_{\\mathrm{Lengyel}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::LEVY_ID, Text(UTF("")), Text(UTF("L_{\\mathrm{L\\acute evy}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::APERY_ID, Text(UTF("")), Text(UTF("\\zeta(3)")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MILLS_ID, Text(UTF("")), Text(UTF("A_{\\mathrm{Mills}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::BACKHOUSE_ID, Text(UTF("")), Text(UTF("B_{\\mathrm{Backhouse}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::PORTER_ID, Text(UTF("")), Text(UTF("C_{\\mathrm{Porter}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::LIEB_QUARE_ICE_ID, Text(UTF("")), Text(UTF("W_{\\mathrm{ice}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::NIVEN_ID, Text(UTF("")), Text(UTF("C_{\\mathrm{Niven}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::SIERPINSKI_ID, Text(UTF("")), Text(UTF("K_{\\mathrm{Sierpi\\acute nski}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::KHINCHIN_ID, Text(UTF("")), Text(UTF("K_{0,\\mathrm{Khinchin}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::FRANSEN_ROBINSON_ID, Text(UTF("")), Text(UTF("F_{\\mathrm{FR}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::LANDAU_ID, Text(UTF("")), Text(UTF("L_{\\mathrm{Landau}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::PARABOLIC_ID, Text(UTF("")), Text(UTF("P_{\\mathrm{parab}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::OMEGA_ID, Text(UTF("")), Text(UTF("\\Omega")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MRB_ID, Text(UTF("")), Text(UTF("C_{\\mathrm{MRB}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::LI2_ID, Text(UTF("")), Text(UTF("\\operatorname{li}(2)")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::GOMPERTZ_ID, Text(UTF("")), Text(UTF("G_{\\mathrm{Gompertz}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::LIGHT_SPEED_ID, Text(UTF("")), Text(UTF("c")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::GRAVITATIONAL_CONSTANT_ID, Text(UTF("")), Text(UTF("G")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::GRAVIT_ACC_EARTH_ID, Text(UTF("")), Text(UTF("g_{\\mathrm n}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::PLANCK_CONSTANT_ID, Text(UTF("")), Text(UTF("h")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::PLANCK_CONSTANT_REDUCED_ID, Text(UTF("")), Text(UTF("\\hbar")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::PLANCK_LENGTH_ID, Text(UTF("")), Text(UTF("\\ell_{\\mathrm P}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::PLANCK_MASS_ID, Text(UTF("")), Text(UTF("m_{\\mathrm P}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::PLANCK_TIME_ID, Text(UTF("")), Text(UTF("t_{\\mathrm P}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::LIGHT_YEAR_ID, Text(UTF("")), Text(UTF("\\mathrm{ly}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::ASTRONOMICAL_UNIT_ID, Text(UTF("")), Text(UTF("\\mathrm{au}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::PARSEC_ID, Text(UTF("")), Text(UTF("\\mathrm{pc}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::KILOPARSEC_ID, Text(UTF("")), Text(UTF("\\mathrm{kpc}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::EARTH_RADIUS_EQUATORIAL_ID, Text(UTF("")), Text(UTF("R_{\\mathrm{Earth,eq}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::EARTH_RADIUS_POLAR_ID, Text(UTF("")), Text(UTF("R_{\\mathrm{Earth,pol}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::EARTH_RADIUS_MEAN_ID, Text(UTF("")), Text(UTF("R_{\\mathrm{Earth,mean}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::EARTH_MASS_ID, Text(UTF("")), Text(UTF("M_{\\mathrm{Earth}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::EARTH_SEMI_MAJOR_AXIS_ID, Text(UTF("")), Text(UTF("a_{\\mathrm{Earth}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MOON_RADIUS_MEAN_ID, Text(UTF("")), Text(UTF("R_{\\mathrm{Moon,mean}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MOON_MASS_ID, Text(UTF("")), Text(UTF("M_{\\mathrm{Moon}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MONN_SEMI_MAJOR_AXIS_ID, Text(UTF("")), Text(UTF("a_{\\mathrm{Moon}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::SOLAR_RADIUS_ID, Text(UTF("")), Text(UTF("R_{\\odot}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::SOLAR_MASS_ID, Text(UTF("")), Text(UTF("M_{\\odot}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MERCURY_RADIUS_MEAN_ID, Text(UTF("")), Text(UTF("R_{\\mathrm{Mercury,mean}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MERCURY_MASS_ID, Text(UTF("")), Text(UTF("M_{\\mathrm{Mercury}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MERCURY_SEMI_MAJOR_AXIS_ID, Text(UTF("")), Text(UTF("a_{\\mathrm{Mercury}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::VENUS_RADIUS_MEAN_ID, Text(UTF("")), Text(UTF("R_{\\mathrm{Venus,mean}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::VENUS_MASS_ID, Text(UTF("")), Text(UTF("M_{\\mathrm{Venus}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::VENUS_SEMI_MAJOR_AXIS_ID, Text(UTF("")), Text(UTF("a_{\\mathrm{Venus}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MARS_RADIUS_MEAN_ID, Text(UTF("")), Text(UTF("R_{\\mathrm{Mars,mean}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MARS_MASS_ID, Text(UTF("")), Text(UTF("M_{\\mathrm{Mars}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::MARS_SEMI_MAJOR_AXIS_ID, Text(UTF("")), Text(UTF("a_{\\mathrm{Mars}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::JUPITER_RADIUS_MEAN_ID, Text(UTF("")), Text(UTF("R_{\\mathrm{Jupiter,mean}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::JUPITER_MASS_ID, Text(UTF("")), Text(UTF("M_{\\mathrm{Jupiter}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::JUPITER_SEMI_MAJOR_AXIS_ID, Text(UTF("")), Text(UTF("a_{\\mathrm{Jupiter}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::SATURN_RADIUS_MEAN_ID, Text(UTF("")), Text(UTF("R_{\\mathrm{Saturn,mean}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::SATURN_MASS_ID, Text(UTF("")), Text(UTF("M_{\\mathrm{Saturn}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::SATURN_SEMI_MAJOR_AXIS_ID, Text(UTF("")), Text(UTF("a_{\\mathrm{Saturn}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::URANUS_RADIUS_MEAN_ID, Text(UTF("")), Text(UTF("R_{\\mathrm{Uranus,mean}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::URANUS_MASS_ID, Text(UTF("")), Text(UTF("M_{\\mathrm{Uranus}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::URANUS_SEMI_MAJOR_AXIS_ID, Text(UTF("")), Text(UTF("a_{\\mathrm{Uranus}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::NEPTUNE_RADIUS_MEAN_ID, Text(UTF("")), Text(UTF("R_{\\mathrm{Neptune,mean}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::NEPTUNE_MASS_ID, Text(UTF("")), Text(UTF("M_{\\mathrm{Neptune}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_ID, Text(UTF("")), Text(UTF("a_{\\mathrm{Neptune}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::TRUE_ID, Text(UTF("")), Text(UTF("\\mathrm{true}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::FALSE_ID, Text(UTF("")), Text(UTF("\\mathrm{false}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::NPAR_ID, Text(UTF("")), Text(UTF("n_{\\mathrm{args}}")), Style::TEMPLATE, 0);
		registerRule(rules, ConstantValue::TYPE_ID, ConstantValue::NAN_ID, Text(UTF("")), Text(UTF("\\mathrm{NaN}")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::UNIFORM_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U[0,1))")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::INT_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-2^{31},2^{31}-1])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::INT1_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{1},10^{1}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::INT2_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{2},10^{2}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::INT3_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{3},10^{3}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::INT4_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{4},10^{4}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::INT5_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{5},10^{5}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::INT6_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{6},10^{6}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::INT7_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{7},10^{7}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::INT8_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{8},10^{8}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::INT9_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{9},10^{9}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT0_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,2^{31}-2])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT0_1_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{1}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT0_2_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{2}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT0_3_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{3}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT0_4_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{4}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT0_5_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{5}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT0_6_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{6}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT0_7_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{7}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT0_8_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{8}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT0_9_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[0,10^{9}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT1_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,2^{31}-2])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT1_1_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{1}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT1_2_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{2}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT1_3_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{3}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT1_4_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{4}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT1_5_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{5}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT1_6_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{6}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT1_7_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{7}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT1_8_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{8}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NAT1_9_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[1,10^{9}])")), Style::TEMPLATE, 0);
		registerRule(rules, RandomVariable::TYPE_ID, RandomVariable::NOR_ID, Text(UTF("")), Text(UTF("\\operatorname{draw}(\\mathcal N(0,1))")), Style::TEMPLATE, 0);
		registerRule(rules, BitwiseOperator::TYPE_ID, BitwiseOperator::COMPL_ID, Text(UTF("")), Text(UTF("\\operatorname{bitNot}(@+1)")), Style::OPERATOR);
		registerRule(rules, BitwiseOperator::TYPE_ID, BitwiseOperator::AND_ID, Text(UTF("")), Text(UTF("\\operatorname{bitAnd}(@-1,@+1)")), Style::OPERATOR);
		registerRule(rules, BitwiseOperator::TYPE_ID, BitwiseOperator::XOR_ID, Text(UTF("")), Text(UTF("\\operatorname{bitXor}(@-1,@+1)")), Style::OPERATOR);
		registerRule(rules, BitwiseOperator::TYPE_ID, BitwiseOperator::OR_ID, Text(UTF("")), Text(UTF("\\operatorname{bitOr}(@-1,@+1)")), Style::OPERATOR);
		registerRule(rules, BitwiseOperator::TYPE_ID, BitwiseOperator::LEFT_SHIFT_ID, Text(UTF("")), Text(UTF("\\operatorname{shl}(@-1,@+1)")), Style::OPERATOR);
		registerRule(rules, BitwiseOperator::TYPE_ID, BitwiseOperator::RIGHT_SHIFT_ID, Text(UTF("")), Text(UTF("\\operatorname{ashr}(@-1,@+1)")), Style::OPERATOR);
		registerRule(rules, BitwiseOperator::TYPE_ID, BitwiseOperator::NAND_ID, Text(UTF("")), Text(UTF("\\operatorname{bitNand}(@-1,@+1)")), Style::OPERATOR);
		registerRule(rules, BitwiseOperator::TYPE_ID, BitwiseOperator::NOR_ID, Text(UTF("")), Text(UTF("\\operatorname{bitNor}(@-1,@+1)")), Style::OPERATOR);
		registerRule(rules, BitwiseOperator::TYPE_ID, BitwiseOperator::XNOR_ID, Text(UTF("")), Text(UTF("\\operatorname{bitXnor}(@-1,@+1)")), Style::OPERATOR);
		registerRule(rules, Unit::TYPE_ID, Unit::PERC_ID, Text(UTF("")), Text(UTF("10^{-2}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::PERM_ID, Text(UTF("")), Text(UTF("10^{-3}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::YOTTA_ID, Text(UTF("")), Text(UTF("10^{24}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::ZETTA_ID, Text(UTF("")), Text(UTF("10^{21}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::EXA_ID, Text(UTF("")), Text(UTF("10^{18}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::PETA_ID, Text(UTF("")), Text(UTF("10^{15}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::TERA_ID, Text(UTF("")), Text(UTF("10^{12}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::GIGA_ID, Text(UTF("")), Text(UTF("10^{9}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MEGA_ID, Text(UTF("")), Text(UTF("10^{6}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::KILO_ID, Text(UTF("")), Text(UTF("10^{3}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::HECTO_ID, Text(UTF("")), Text(UTF("10^{2}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::DECA_ID, Text(UTF("")), Text(UTF("10^{1}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::DECI_ID, Text(UTF("")), Text(UTF("10^{-1}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::CENTI_ID, Text(UTF("")), Text(UTF("10^{-2}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MILLI_ID, Text(UTF("")), Text(UTF("10^{-3}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MICRO_ID, Text(UTF("")), Text(UTF("10^{-6}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::NANO_ID, Text(UTF("")), Text(UTF("10^{-9}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::PICO_ID, Text(UTF("")), Text(UTF("10^{-12}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::FEMTO_ID, Text(UTF("")), Text(UTF("10^{-15}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::ATTO_ID, Text(UTF("")), Text(UTF("10^{-18}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::ZEPTO_ID, Text(UTF("")), Text(UTF("10^{-21}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::YOCTO_ID, Text(UTF("")), Text(UTF("10^{-24}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::METRE_ID, Text(UTF("")), Text(UTF("\\mathrm{m}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::KILOMETRE_ID, Text(UTF("")), Text(UTF("\\mathrm{km}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::CENTIMETRE_ID, Text(UTF("")), Text(UTF("\\mathrm{cm}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MILLIMETRE_ID, Text(UTF("")), Text(UTF("\\mathrm{mm}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::INCH_ID, Text(UTF("")), Text(UTF("\\mathrm{in}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::YARD_ID, Text(UTF("")), Text(UTF("\\mathrm{yd}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::FEET_ID, Text(UTF("")), Text(UTF("\\mathrm{ft}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MILE_ID, Text(UTF("")), Text(UTF("\\mathrm{mi}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::NAUTICAL_MILE_ID, Text(UTF("")), Text(UTF("\\mathrm{nmi}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::METRE2_ID, Text(UTF("")), Text(UTF("\\mathrm{m}^{2}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::CENTIMETRE2_ID, Text(UTF("")), Text(UTF("\\mathrm{cm}^{2}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MILLIMETRE2_ID, Text(UTF("")), Text(UTF("\\mathrm{mm}^{2}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::ARE_ID, Text(UTF("")), Text(UTF("\\mathrm{a}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::HECTARE_ID, Text(UTF("")), Text(UTF("\\mathrm{ha}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::ACRE_ID, Text(UTF("")), Text(UTF("\\mathrm{acre}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::KILOMETRE2_ID, Text(UTF("")), Text(UTF("\\mathrm{km}^{2}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MILLIMETRE3_ID, Text(UTF("")), Text(UTF("\\mathrm{mm}^{3}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::CENTIMETRE3_ID, Text(UTF("")), Text(UTF("\\mathrm{cm}^{3}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::METRE3_ID, Text(UTF("")), Text(UTF("\\mathrm{m}^{3}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::KILOMETRE3_ID, Text(UTF("")), Text(UTF("\\mathrm{km}^{3}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MILLILITRE_ID, Text(UTF("")), Text(UTF("\\mathrm{mL}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::LITRE_ID, Text(UTF("")), Text(UTF("\\mathrm{L}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::GALLON_ID, Text(UTF("")), Text(UTF("\\mathrm{gal}_{\\mathrm{US}}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::PINT_ID, Text(UTF("")), Text(UTF("\\mathrm{pint}_{\\mathrm{US}}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::SECOND_ID, Text(UTF("")), Text(UTF("\\mathrm{s}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MILLISECOND_ID, Text(UTF("")), Text(UTF("\\mathrm{ms}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MINUTE_ID, Text(UTF("")), Text(UTF("\\mathrm{min}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::HOUR_ID, Text(UTF("")), Text(UTF("\\mathrm{h}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::DAY_ID, Text(UTF("")), Text(UTF("\\mathrm{d}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::WEEK_ID, Text(UTF("")), Text(UTF("\\mathrm{wk}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::JULIAN_YEAR_ID, Text(UTF("")), Text(UTF("\\mathrm{a}_{\\mathrm{J}}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::KILOGRAM_ID, Text(UTF("")), Text(UTF("\\mathrm{kg}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::GRAM_ID, Text(UTF("")), Text(UTF("\\mathrm{g}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MILLIGRAM_ID, Text(UTF("")), Text(UTF("\\mathrm{mg}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::DECAGRAM_ID, Text(UTF("")), Text(UTF("\\mathrm{dag}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::TONNE_ID, Text(UTF("")), Text(UTF("\\mathrm{t}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::OUNCE_ID, Text(UTF("")), Text(UTF("\\mathrm{oz}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::POUND_ID, Text(UTF("")), Text(UTF("\\mathrm{lb}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::BIT_ID, Text(UTF("")), Text(UTF("\\mathrm{bit}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::KILOBIT_ID, Text(UTF("")), Text(UTF("\\mathrm{Kibit}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MEGABIT_ID, Text(UTF("")), Text(UTF("\\mathrm{Mibit}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::GIGABIT_ID, Text(UTF("")), Text(UTF("\\mathrm{Gibit}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::TERABIT_ID, Text(UTF("")), Text(UTF("\\mathrm{Tibit}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::PETABIT_ID, Text(UTF("")), Text(UTF("\\mathrm{Pibit}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::EXABIT_ID, Text(UTF("")), Text(UTF("\\mathrm{Eibit}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::ZETTABIT_ID, Text(UTF("")), Text(UTF("\\mathrm{Zibit}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::YOTTABIT_ID, Text(UTF("")), Text(UTF("\\mathrm{Yibit}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::BYTE_ID, Text(UTF("")), Text(UTF("\\mathrm{B}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::KILOBYTE_ID, Text(UTF("")), Text(UTF("\\mathrm{KiB}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MEGABYTE_ID, Text(UTF("")), Text(UTF("\\mathrm{MiB}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::GIGABYTE_ID, Text(UTF("")), Text(UTF("\\mathrm{GiB}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::TERABYTE_ID, Text(UTF("")), Text(UTF("\\mathrm{TiB}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::PETABYTE_ID, Text(UTF("")), Text(UTF("\\mathrm{PiB}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::EXABYTE_ID, Text(UTF("")), Text(UTF("\\mathrm{EiB}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::ZETTABYTE_ID, Text(UTF("")), Text(UTF("\\mathrm{ZiB}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::YOTTABYTE_ID, Text(UTF("")), Text(UTF("\\mathrm{YiB}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::JOULE_ID, Text(UTF("")), Text(UTF("\\mathrm{J}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::ELECTRONO_VOLT_ID, Text(UTF("")), Text(UTF("\\mathrm{eV}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::KILO_ELECTRONO_VOLT_ID, Text(UTF("")), Text(UTF("\\mathrm{keV}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MEGA_ELECTRONO_VOLT_ID, Text(UTF("")), Text(UTF("\\mathrm{MeV}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::GIGA_ELECTRONO_VOLT_ID, Text(UTF("")), Text(UTF("\\mathrm{GeV}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::TERA_ELECTRONO_VOLT_ID, Text(UTF("")), Text(UTF("\\mathrm{TeV}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::METRE_PER_SECOND_ID, Text(UTF("")), Text(UTF("\\mathrm{m}/\\mathrm{s}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::KILOMETRE_PER_HOUR_ID, Text(UTF("")), Text(UTF("\\mathrm{km}/\\mathrm{h}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MILE_PER_HOUR_ID, Text(UTF("")), Text(UTF("\\mathrm{mi}/\\mathrm{h}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::KNOT_ID, Text(UTF("")), Text(UTF("\\mathrm{kn}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::METRE_PER_SECOND2_ID, Text(UTF("")), Text(UTF("\\mathrm{m}/\\mathrm{s}^{2}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::KILOMETRE_PER_HOUR2_ID, Text(UTF("")), Text(UTF("\\mathrm{km}/\\mathrm{h}^{2}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MILE_PER_HOUR2_ID, Text(UTF("")), Text(UTF("\\mathrm{mi}/\\mathrm{h}^{2}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::RADIAN_ARC_ID, Text(UTF("")), Text(UTF("\\mathrm{rad}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::DEGREE_ARC_ID, Text(UTF("")), Text(UTF("{}^{\\circ}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::MINUTE_ARC_ID, Text(UTF("")), Text(UTF("{}^{\\prime}")), Style::TEMPLATE, 0);
		registerRule(rules, Unit::TYPE_ID, Unit::SECOND_ARC_ID, Text(UTF("")), Text(UTF("{}^{\\prime\\prime}")), Style::TEMPLATE, 0);
		registerRule(rules, ParserSymbol::TYPE_ID, ParserSymbol::LEFT_PARENTHESES_ID, Text(UTF("")), Text(UTF("")), Style::DELIMITER, 0);
		registerRule(rules, ParserSymbol::TYPE_ID, ParserSymbol::RIGHT_PARENTHESES_ID, Text(UTF("")), Text(UTF("")), Style::DELIMITER, 0);
		registerRule(rules, ParserSymbol::TYPE_ID, ParserSymbol::COMMA_ID, Text(UTF("")), Text(UTF("")), Style::DELIMITER, 0);
		registerRule(rules, ParserSymbol::TYPE_ID, ParserSymbol::BLANK_ID, Text(UTF("")), Text(UTF("")), Style::DELIMITER, 0);
		return rules;
	}

	static Text format(ListPtr<TokenPtr> tokens) {
		NodePtr root = reconstruct(tokens);
		return root == nullptr ? Text(UTF("")) : Renderer(root).render();
	}

	static bool is(NodePtr n, int type, int id) {
		return n->token->tokenTypeId == type && n->token->tokenId == id;
	}
	static bool identifier(NodePtr n) {
		return n->form == Form::ATOM && !Token::isNumber(n->token)
				&& (Token::isIdentifier(n->token) || n->token->tokenTypeId == Token::NOT_MATCHED);
	}
	static bool decimalAtom(NodePtr n) {
		return n->form == Form::ATOM && Token::isNumber(n->token) && DECIMAL().matches(Text(n->token->tokenStr));
	}
	static bool unsignedNumber(NodePtr n) {
		return decimalAtom(n) && !Text(n->token->tokenStr).startsWith(Text(UTF("-")))
				&& !Text(n->token->tokenStr).startsWith(Text(UTF("+"))) && Text(n->token->tokenStr).indexOf(UTF('e')) < 0
				&& Text(n->token->tokenStr).indexOf(UTF('E')) < 0;
	}
	static bool singleSymbol(NodePtr n) {
		return identifier(n) && (Text(n->token->tokenStr).length() == 1 || is(n, ConstantValue::TYPE_ID, ConstantValue::PI_ID)
				|| is(n, ConstantValue::TYPE_ID, ConstantValue::EULER_ID));
	}
	static bool compactProduct(NodePtr n) {
		return n->form == Form::BINARY && is(n, Operator::TYPE_ID, Operator::MULTIPLY_ID)
				&& unsignedNumber(n->children->get(0)) && singleSymbol(n->children->get(1));
	}
	static bool bareArgument(NodePtr n) {
		RulePtr r = rule(n->token);
		return unsignedNumber(n) || (identifier(n) && (r == nullptr || r->atomicPresentation)) || compactProduct(n);
	}
	static bool headExponent(NodePtr n) {
		RulePtr r = rule(n->token);
		if (identifier(n) && (r == nullptr || r->atomicPresentation)) return true;
		return unsignedNumber(n) && Text(n->token->tokenStr).matches(Text(UTF("[0-9]+")))
				&& !Text(n->token->tokenStr).matches(Text(UTF("0+")));
	}
	static bool negative(NodePtr n) {
		return (n->form == Form::PREFIX && is(n, Operator::TYPE_ID, Operator::MINUS_ID))
				|| (n->form == Form::ATOM && Token::isNumber(n->token) && Text(n->token->tokenStr).startsWith(Text(UTF("-"))));
	}
	static NodePtr presentation(NodePtr n) {
		RulePtr r = rule(n->token);
		while (r != nullptr && r->style == Style::CONTINUED_FRACTION && n->children->size() == 1) {
			n = n->children->get(0);
			r = rule(n->token);
		}
		return n;
	}
	static bool isSigned(NodePtr n) {
		n = presentation(n);
		return (n->form == Form::PREFIX && isSign(n->token)) || negative(n)
				|| (n->form == Form::ATOM && Token::isNumber(n->token) && Text(n->token->tokenStr).startsWith(Text(UTF("+"))));
	}
	static bool delimited(NodePtr n) {
		n = presentation(n);
		RulePtr r = rule(n->token);
		if (n->form == Form::PREFIX && Token::isUnicodeRootOperator(n->token)) return true;
		if (r == nullptr) return n->form == Form::CALL;
		if (r->style == Style::OPERATOR) return n->token->tokenTypeId == BitwiseOperator::TYPE_ID
				|| is(n, Operator::TYPE_ID, Operator::MOD_ID) || is(n, Operator::TYPE_ID, Operator::DIVIDE_QUOTIENT_ID);
		return is(n, Function1Arg::TYPE_ID, Function1Arg::ABS_ID) || is(n, Function1Arg::TYPE_ID, Function1Arg::FLOOR_ID)
				|| is(n, Function1Arg::TYPE_ID, Function1Arg::CEIL_ID) || is(n, Function1Arg::TYPE_ID, Function1Arg::SQRT_ID)
				|| is(n, Function2Arg::TYPE_ID, Function2Arg::ROOT_ID) || is(n, Function2Arg::TYPE_ID, Function2Arg::BINOM_COEFF_ID);
	}
	static bool powerBaseNeedsGrouping(NodePtr n) {
		n = presentation(n);
		if (Token::isNumber(n->token)) return !unsignedNumber(n);
		if (delimited(n)) return false;
		return strength(n) < ATOM || n->form == Form::CALL;
	}
	static bool extensive(NodePtr n) {
		n = presentation(n);
		RulePtr r = rule(n->token);
		return r != nullptr && (r->style == Style::RANGE || r->style == Style::INTEGRAL
				|| is(n, CalculusOperator::TYPE_ID, CalculusOperator::MIN_ID) || is(n, CalculusOperator::TYPE_ID, CalculusOperator::MAX_ID));
	}
	static int strength(NodePtr n) {
		n = presentation(n);
		RulePtr r = rule(n->token);
		if (n->form == Form::CALL && r != nullptr) {
			if (r->style == Style::LIST_SUM || (r->style == Style::CONTINUED_FRACTION && n->children->size() > 1)) return ADDITIVE;
			if (r->style == Style::LIST_PRODUCT) return PRODUCT;
			if (r->style == Style::LIST_OR || r->style == Style::LIST_AND) return LOGICAL;
			if (extensive(n)) return ADDITIVE;
		}
		if (delimited(n)) return ATOM;
		if (n->form == Form::ATOM && Token::isNumber(n->token) && !unsignedNumber(n)) return POWER;
		if (n->form == Form::ATOM && r != nullptr && !r->atomicPresentation) return POWER;
		if (n->form == Form::ATOM || n->form == Form::CALL) return negative(n) ? SIGN : ATOM;
		if (n->form == Form::PREFIX) return isSign(n->token) ? SIGN : Token::isUnicodeRootOperator(n->token) ? ATOM : NOT;
		if (n->form == Form::POSTFIX) return POSTFIX;
		if (n->token->tokenTypeId == Operator::TYPE_ID) {
			if (rightAssociative(n->token)) return POWER;
			if (isSign(n->token)) return ADDITIVE;
			if (is(n, Operator::TYPE_ID, Operator::DIVIDE_ID)) return POWER;
			if (is(n, Operator::TYPE_ID, Operator::DIVIDE_QUOTIENT_ID)) return ATOM;
			return PRODUCT;
		}
		return n->token->tokenTypeId == BinaryRelation::TYPE_ID ? RELATION : LOGICAL;
	}

	/** @version        6.2.0 */
	struct Visit {
		const NodePtr node = nullptr;
		const bool forceCall;
		const bool wrap;
		const NodePtr exponent;
		Visit(NodePtr node, bool forceCall, bool wrap, NodePtr exponent) : node(node), forceCall(forceCall), wrap(wrap), exponent(exponent) {
		}
	};
	static VisitPtr visit(NodePtr node) { return new_Visit(node, false, false, nullptr); }
	static VisitPtr grouped(NodePtr node, bool wrap, bool forceCall) { return new_Visit(node, forceCall, wrap, nullptr); }
	static bool asciiLetter(Char c) { return (c >= UTF('a') && c <= UTF('z')) || (c >= UTF('A') && c <= UTF('Z')); }
	static bool endsControlWord(TextBuilder& text) {
		int i = text.length() - 1;
		if (i < 0 || !asciiLetter(text.charAt(i))) return false;
		while (i >= 0 && asciiLetter(text.charAt(i))) i--;
		int slashes = 0;
		while (i >= 0 && text.charAt(i--) == UTF('\\')) slashes++;
		return slashes % 2 != 0;
	}

	/** Iterative emission keeps long flat expressions off the Java call stack and
	 * writes each generated fragment once to the bounded final buffer.
	 *
	 * @version        6.2.0
	 */
	struct Renderer {
		Stack<object> pending;
		TextBuilder result;
		Set<Text> names = {};
		Set<Text> builtinSymbols = {};
		int outputDepth = 0;
		Renderer(NodePtr root) {
			pending.push(visit(root));
			Stack<NodePtr> nodes;
			nodes.push(root);
			while (!nodes.isEmpty()) {
				NodePtr n = nodes.pop();
				names.add(Text(n->token->tokenStr));
				RulePtr r = rule(n->token);
				if (n->form == Form::ATOM && r != nullptr && r->style == Style::TEMPLATE) {
					TextBuilder symbol;
					for (object part : r->templ) if (isText(part)) symbol.append(part);
					builtinSymbols.add(symbol.toString());
				}
				for (NodePtr child : *n->children) nodes.push(child);
			}
		}
		Text render() {
			while (!pending.isEmpty()) {
				object item = pending.pop();
				if (isText(item)) {
					Text text = std::any_cast<Text>(item);
					// A TeX control word consumes subsequent ASCII letters. Check the
					// actual emitted boundary, including operands of postfix operators.
					if (!text.isEmpty() && asciiLetter(text.charAt(0)) && endsControlWord(result)) result.append(UTF(' '));
					if (text.length() > MAX_OUTPUT - result.length()) throw error(0, Text(UTF("output budget exceeded")));
					for (int i = 0; i < text.length(); i++) {
						if (text.charAt(i) == UTF('{') && ++outputDepth > MAX_DEPTH)
							throw error(0, Text(UTF("presentation nesting budget exceeded")));
						if (text.charAt(i) == UTF('}') && --outputDepth < 0) throw error(0, Text(UTF("unbalanced rendering rule")));
					}
					result.append(text);
				} else {
					VisitPtr v = std::any_cast<VisitPtr>(item);
					ListPtr<object> output = new_List<object>();
					if (v->wrap) {
						output->add(Text(UTF("(")));
						output->add(new_Visit(v->node, v->forceCall, false, v->exponent));
						output->add(Text(UTF(")")));
					} else emit(output, v);
					for (int i = output->size() - 1; i >= 0; i--) pending.push(output->get(i));
				}
			}
			if (outputDepth != 0) throw error(0, Text(UTF("unbalanced rendering rule")));
			return result.toString();
		}
		void emit(ListPtr<object> out, VisitPtr v) {
			NodePtr n = presentation(v->node);
			RulePtr r = rule(n->token);
			if (r == nullptr) {
				if (n->token->tokenTypeId != Token::NOT_MATCHED && n->token->tokenTypeId != Argument::TYPE_ID
						&& n->token->tokenTypeId != Function::TYPE_ID && n->token->tokenTypeId != Constant::TYPE_ID
						&& n->token->tokenTypeId != RecursiveArgument::TYPE_ID_RECURSIVE)
					throw error(n->index, Text(UTF("no rule for builtin token")));
				Text symbol = name(Text(n->token->tokenStr), n->form == Form::CALL, n->index);
				out->add(builtinSymbols.contains(symbol) ? Text(UTF("{")) + symbol + Text(UTF("}_{\\mathrm{user}}")) : symbol);
				if (n->form == Form::CALL) { out->add(Text(UTF("("))); list(out, n->children, 0, Text(UTF(",")), 0); out->add(Text(UTF(")"))); }
				return;
			}
			if (n->form == Form::CALL && (!r->accepts(n->children->size())
					|| (r->style == Style::CASES_IFF && n->children->size() % 2 != 0)))
				throw error(n->index, Text(UTF("invalid function arity: ")) + n->children->size());
			switch (r->style) {
				case Style::LITERAL: out->add(number(n)); return;
				case Style::DELIMITER: throw error(n->index, Text(UTF("unexpected delimiter")));
				case Style::OPERATOR: operatorPart(out, n, r, v->forceCall); return;
				case Style::DIRECT_FUNCTION: case Style::NAMED_FUNCTION: function(out, n, r, v); return;
				case Style::CASES_IF: case Style::CASES_IFF: cases(out, n, r->style == Style::CASES_IFF); return;
				case Style::CONTINUED_FRACTION: continuedFraction(out, n); return;
				case Style::LIST_SUM: list(out, n->children, 0, Text(UTF("+")), ADDITIVE); return;
				case Style::LIST_PRODUCT: list(out, n->children, 0, Text(UTF("\\cdot ")), PRODUCT); return;
				case Style::MEAN:
					out->add(Text(UTF("\\frac{"))); list(out, n->children, 0, Text(UTF("+")), ADDITIVE);
					out->add(Text(UTF("}{")) + n->children->size() + Text(UTF("}"))); return;
				case Style::LIST_AND: case Style::LIST_OR:
					for (int i = 0; i < n->children->size(); i++) {
						if (i > 0) out->add(r->style == Style::LIST_AND ? Text(UTF("\\land ")) : Text(UTF("\\lor ")));
						condition(out, n->children->get(i), true);
					} return;
				case Style::RANGE: case Style::RANGE_SAMPLE: range(out, n, r); return;
				case Style::INTEGRAL: integral(out, n); return;
				case Style::DERIVATIVE: case Style::NTH_DERIVATIVE: derivative(out, n, r); return;
				case Style::DIFFERENCE:
					variable(n->children->get(1));
					out->add(r->symbol + Text(UTF("_{"))); out->add(visit(n->children->get(1))); out->add(Text(UTF(",")));
					out->add(n->children->size() == 3 ? object(visit(n->children->get(2))) : object(Text(UTF("1"))));
					out->add(Text(UTF("}["))); out->add(visit(n->children->get(0))); out->add(Text(UTF("]"))); return;
				case Style::SOLVE:
					variable(n->children->get(1));
					out->add(Text(UTF("\\operatorname{root}_{"))); out->add(visit(n->children->get(1))); out->add(Text(UTF("\\in[")));
					out->add(visit(n->children->get(2))); out->add(Text(UTF(","))); out->add(visit(n->children->get(3)));
					out->add(Text(UTF("]}("))); out->add(grouped(n->children->get(0), strength(n->children->get(0)) <= RELATION, false));
					out->add(Text(UTF("=0)"))); return;
				case Style::NORMAL: normal(out, n, r); return;
				default: templ(out, n, r);
			}
		}
		void function(ListPtr<object> out, NodePtr n, RulePtr r, VisitPtr v) {
			NodePtr arg = n->children->get(0);
			out->add(r->symbol);
			if (v->exponent != nullptr) { out->add(Text(UTF("^{"))); out->add(visit(v->exponent)); out->add(Text(UTF("}"))); }
			if (!v->forceCall && bareArgument(arg)) { if (v->exponent == nullptr) out->add(Text(UTF(" "))); out->add(visit(arg)); }
			else {
				bool tall = is(arg, Operator::TYPE_ID, Operator::DIVIDE_ID);
				out->add(tall ? Text(UTF("\\left(")) : Text(UTF("("))); out->add(visit(arg)); out->add(tall ? Text(UTF("\\right)")) : Text(UTF(")")));
			}
		}
		void templ(ListPtr<object> out, NodePtr n, RulePtr r) {
			if (is(n, Function1Arg::TYPE_ID, Function1Arg::NOT_ID)) {
				out->add(r->symbol + Text(UTF(" "))); out->add(grouped(n->children->get(0), strength(n->children->get(0)) <= NOT, false)); return;
			}
			for (int i = 0; i < r->templ.size(); i++) {
				object part = r->templ[i];
				if (isText(part)) { out->add(part); continue; }
				int slot = (std::any_cast<Slot>(part)).number;
				if (slot == 0) out->add(r->symbol);
			else if (slot == -2) {
				if (is(n, FunctionVariadic::TYPE_ID, FunctionVariadic::BASE_ID) && n->children->size() == r->listStart)
					out->add(Text(UTF("\\varepsilon")));
				else list(out, n->children, r->listStart, r->separator, 0);
			}
				else if (slot == -3) out->add(integerText(n->children->size() - r->listStart));
				else {
					int argument = n->form == Form::BINARY ? slot < 0 ? 0 : 1 : slot < 0 ? 0 : slot - 1;
					if (argument < 0 || argument >= n->children->size()) throw error(n->index, Text(UTF("invalid rule operand")));
					NodePtr child = n->children->get(argument);
					// A single-character subscript needs no braces. This is template
					// composition, never a rewrite of already emitted LaTeX.
					if (i > 0 && i + 1 < r->templ.size() && isText(r->templ[i - 1])
							&& !is(n, Function2Arg::TYPE_ID, Function2Arg::LOG_ID)
							&& (std::any_cast<Text>(r->templ[i - 1])).endsWith(Text(UTF("_{")))
							&& isText(r->templ[i + 1]) && (std::any_cast<Text>(r->templ[i + 1])).startsWith(Text(UTF("}")))
							&& child->form == Form::ATOM && Text(child->token->tokenStr).matches(Text(UTF("[A-Za-z0-9]")))) {
						Text previous = std::any_cast<Text>(removeLast(out));
						out->add(previous.substring(0, previous.length() - 1));
						out->add(visit(child));
						Text next = (std::any_cast<Text>(r->templ[++i])).substring(1);
						if (!next.isEmpty()) out->add(next);
					} else out->add(visit(child));
				}
			}
		}
		void list(ListPtr<object> out, ReadOnlyListPtr<NodePtr> nodes, int start, Text separator, int minimum) {
			for (int i = start; i < nodes->size(); i++) {
				if (i > start) out->add(separator);
				NodePtr child = nodes->get(i);
				bool wrap = strength(child) < minimum || (i > start && isSigned(child))
						|| extensive(child);
				out->add(grouped(child, wrap, minimum == PRODUCT));
			}
		}
		void operatorPart(ListPtr<object> out, NodePtr n, RulePtr r, bool forceCall) {
			NodePtr left = presentation(n->children->get(0));
			if (n->form == Form::PREFIX) {
				if (isSign(n->token)) {
					out->add(r->symbol); out->add(grouped(left, strength(left) <= ADDITIVE || isSigned(left), forceCall));
				} else if (Token::isUnicodeRootOperator(n->token)) templ(out, n, r);
				else if (n->token->tokenTypeId == BooleanOperator::TYPE_ID) {
					out->add(r->symbol + Text(UTF(" "))); out->add(grouped(left, strength(left) <= NOT, false));
				} else templ(out, n, r);
				return;
			}
			if (n->form == Form::POSTFIX) {
				out->add(grouped(left, !delimited(left) && (powerBaseNeedsGrouping(left) || left->form == Form::POSTFIX), false));
				out->add(r->symbol); return;
			}
			NodePtr right = presentation(n->children->get(1));
			if (is(n, Operator::TYPE_ID, Operator::POWER_ID)) {
				RulePtr baseRule = rule(left->token);
				if (left->form == Form::CALL && baseRule != nullptr && baseRule->style == Style::DIRECT_FUNCTION && headExponent(right))
					out->add(new_Visit(left, forceCall, false, right));
				else {
					bool wrap = powerBaseNeedsGrouping(left);
					out->add(grouped(left, wrap, false)); out->add(Text(UTF("^{"))); out->add(visit(right)); out->add(Text(UTF("}")));
				} return;
			}
			if (is(n, Operator::TYPE_ID, Operator::DIVIDE_ID)) {
				out->add(Text(UTF("\\frac{"))); out->add(visit(left)); out->add(Text(UTF("}{"))); out->add(visit(right)); out->add(Text(UTF("}"))); return;
			}
			if (is(n, Operator::TYPE_ID, Operator::MULTIPLY_ID)) {
				RulePtr unitRule = rule(right->token);
				if (right->token->tokenTypeId == Unit::TYPE_ID && right->form == Form::ATOM && unsignedNumber(left)
						&& unitRule != nullptr && unitRule->templ.size() > 0
						&& isText(unitRule->templ[0]) && !(std::any_cast<Text>(unitRule->templ[0])).startsWith(Text(UTF("10^")))) {
					if (angle(out, left, right)) return;
					out->add(visit(left)); out->add(Text(UTF("\\,"))); out->add(visit(right)); return;
				}
				bool compact = unsignedNumber(left) && (singleSymbol(right)
						|| (is(right, Operator::TYPE_ID, Operator::POWER_ID) && singleSymbol(right->children->get(0))));
				out->add(grouped(left, strength(left) < PRODUCT, !compact));
				if (!compact) {
					RulePtr rightRule = rule(right->token);
					bool command = right->form != Form::POSTFIX && rightRule != nullptr && (rightRule->symbol.startsWith(Text(UTF("\\")))
							|| (rightRule->templ.size() > 0 && isText(rightRule->templ[0])
							&& (std::any_cast<Text>(rightRule->templ[0])).startsWith(Text(UTF("\\")))));
					out->add(strength(right) <= PRODUCT || isSigned(right) || command ? Text(UTF("\\cdot")) : Text(UTF("\\cdot ")));
				}
				out->add(grouped(right, strength(right) <= PRODUCT || isSigned(right), !compact)); return;
			}
			if (isSign(n->token)) {
				out->add(grouped(left, strength(left) < ADDITIVE || extensive(left), false)); out->add(r->symbol);
				out->add(grouped(right, strength(right) <= ADDITIVE || isSigned(right), false)); return;
			}
			if (is(n, Operator::TYPE_ID, Operator::TETRATION_ID)) {
				out->add(Text(UTF("\\mathord{{}^{"))); out->add(visit(right)); out->add(Text(UTF("}\\!")));
				out->add(grouped(left, strength(left) < ATOM, true)); out->add(Text(UTF("}"))); return;
			}
			if (n->token->tokenTypeId == BooleanOperator::TYPE_ID || n->token->tokenTypeId == BinaryRelation::TYPE_ID) {
				int minimum = n->token->tokenTypeId == BinaryRelation::TYPE_ID ? RELATION : LOGICAL;
				out->add(grouped(left, strength(left) <= minimum, false)); out->add(r->symbol);
				if (r->symbol.startsWith(Text(UTF("\\")))) out->add(Text(UTF(" ")));
				out->add(grouped(right, strength(right) <= minimum, false)); return;
			}
			templ(out, n, r);
		}
		bool angle(ListPtr<object> out, NodePtr value, NodePtr unit) {
			Text symbol;
			if (is(unit, Unit::TYPE_ID, Unit::DEGREE_ARC_ID)) symbol = Text(UTF("^{\\circ}"));
			else if (is(unit, Unit::TYPE_ID, Unit::MINUTE_ARC_ID)) symbol = Text(UTF("^{\\prime}"));
			else if (is(unit, Unit::TYPE_ID, Unit::SECOND_ARC_ID)) symbol = Text(UTF("^{\\prime\\prime}"));
			else return false;
			out->add(visit(value)); out->add(symbol); return true;
		}
		void condition(ListPtr<object> out, NodePtr n, bool asOperand) {
			bool predicate = n->token->tokenTypeId == BinaryRelation::TYPE_ID || n->token->tokenTypeId == BooleanOperator::TYPE_ID
					|| is(n, Function1Arg::TYPE_ID, Function1Arg::NOT_ID) || is(n, Function1Arg::TYPE_ID, Function1Arg::IS_PRIME_ID)
					|| is(n, Function1Arg::TYPE_ID, Function1Arg::ISNAN_ID)
					|| is(n, ConstantValue::TYPE_ID, ConstantValue::TRUE_ID) || is(n, ConstantValue::TYPE_ID, ConstantValue::FALSE_ID)
					|| is(n, FunctionVariadic::TYPE_ID, FunctionVariadic::AND_ID) || is(n, FunctionVariadic::TYPE_ID, FunctionVariadic::OR_ID)
					|| is(n, FunctionVariadic::TYPE_ID, FunctionVariadic::XOR_ID);
			out->add(grouped(n, predicate ? asOperand && strength(n) <= LOGICAL : strength(n) <= RELATION, false));
			if (!predicate) out->add(Text(UTF("\\ne0")));
		}
		void cases(ListPtr<object> out, NodePtr n, bool multiple) {
			out->add(Text(UTF("\\begin{cases}")));
			if (!multiple) {
				out->add(visit(n->children->get(1))); out->add(Text(UTF("&\\text{if }"))); condition(out, n->children->get(0), false);
				out->add(Text(UTF("\\\\"))); out->add(visit(n->children->get(2))); out->add(Text(UTF("&\\text{otherwise}")));
			} else {
				for (int i = 0; i < n->children->size(); i += 2) {
					if (i > 0) out->add(Text(UTF("\\\\")));
					out->add(visit(n->children->get(i + 1))); out->add(i == 0 ? Text(UTF("&\\text{if }")) : Text(UTF("&\\text{else if }")));
					condition(out, n->children->get(i), false);
				}
				out->add(Text(UTF("\\\\\\text{undefined}&\\text{otherwise}")));
			}
			out->add(Text(UTF("\\end{cases}")));
		}
		void continuedFraction(ListPtr<object> out, NodePtr n) {
			for (int i = 0; i < n->children->size(); i++) {
				out->add(grouped(n->children->get(i), i + 1 < n->children->size() && strength(n->children->get(i)) < ADDITIVE, false));
				if (i + 1 < n->children->size()) out->add(Text(UTF("+\\frac{1}{")));
			}
			for (int i = 1; i < n->children->size(); i++) out->add(Text(UTF("}")));
		}
		void normal(ListPtr<object> out, NodePtr n, RulePtr r) {
			bool draw = n->token->tokenTypeId == Function2Arg::TYPE_ID;
			int offset = draw ? 0 : 1;
			out->add(draw ? Text(UTF("\\operatorname{draw}(\\mathcal N(")) : r->symbol + Text(UTF("_{\\mathcal N(")));
			out->add(visit(n->children->get(offset))); out->add(Text(UTF(",")));
			NodePtr sigma = n->children->get(offset + 1);
			out->add(grouped(sigma, powerBaseNeedsGrouping(sigma), false)); out->add(Text(UTF("^{2}")));
			if (draw) out->add(Text(UTF("))")));
			else { out->add(Text(UTF(")}("))); out->add(visit(n->children->get(0))); out->add(Text(UTF(")"))); }
		}
		void variable(NodePtr n) {
			if (!identifier(n) || n->token->tokenTypeId == ConstantValue::TYPE_ID || n->token->tokenTypeId == Unit::TYPE_ID)
				throw error(n->index, Text(UTF("calculus variable must be an identifier")));
		}
		void integral(ListPtr<object> out, NodePtr n) {
			variable(n->children->get(1));
			out->add(Text(UTF("\\int"))); script(out, n->children->get(2), UTF('_')); script(out, n->children->get(3), UTF('^'));
			NodePtr body = n->children->get(0);
			out->add(grouped(body, strength(body) <= ADDITIVE, true));
			out->add(Text(UTF("\\,\\mathrm{d}"))); out->add(visit(n->children->get(1)));
		}
		void script(ListPtr<object> out, NodePtr n, Char kind) {
			bool single = n->form == Form::ATOM && Text(n->token->tokenStr).matches(Text(UTF("[A-Za-z0-9]")));
			out->add(charText(kind) + (single ? Text(UTF("")) : Text(UTF("{")))); out->add(visit(n));
			if (!single) out->add(Text(UTF("}")));
		}
		void derivative(ListPtr<object> out, NodePtr n, RulePtr r) {
			bool nth = r->style == Style::NTH_DERIVATIVE;
			NodePtr x = n->children->get(nth ? 2 : 1);
			variable(x);
			bool point = !nth && (n->children->size() == 3 || n->children->size() == 5);
			if (point) out->add(Text(UTF("\\left.")));
			if (!nth && !r->symbol.isEmpty()) {
				out->add(Text(UTF("D"))); script(out, x, UTF('_')); out->add(Text(UTF("^")) + r->symbol + Text(UTF("[")));
			} else if (nth) {
				out->add(Text(UTF("\\frac{\\mathrm d^{"))); out->add(visit(n->children->get(1)));
				out->add(Text(UTF("}}{\\mathrm d "))); out->add(visit(x)); out->add(Text(UTF("^{")));
				out->add(visit(n->children->get(1))); out->add(Text(UTF("}}[")));
			} else { out->add(Text(UTF("\\frac{\\mathrm d}{\\mathrm d "))); out->add(visit(x)); out->add(Text(UTF("}["))); }
			out->add(visit(n->children->get(0))); out->add(Text(UTF("]")));
			if (point) {
				out->add(Text(UTF("\\right\\rvert_{"))); out->add(visit(x)); out->add(Text(UTF("=")));
				out->add(visit(n->children->get(2))); out->add(Text(UTF("}")));
			}
		}
		Text freshIndex() {
			Text candidate = Text(UTF("k"));
			for (int i = 1; names.contains(candidate); i++) candidate = Text(UTF("k")) + i;
			names.add(candidate);
			return candidate.length() == 1 ? candidate : Text(UTF("k_{")) + candidate.substring(1) + Text(UTF("}"));
		}
		void range(ListPtr<object> out, NodePtr n, RulePtr r) {
			NodePtr index = n->children->get(0), a = n->children->get(1), b = n->children->get(2), body = n->children->get(3);
			variable(index);
			NodePtr step = n->children->size() == 5 ? n->children->get(4) : nullptr;
			DecimalLiteralPtr av = literalValue(a), bv = literalValue(b), hv = step == nullptr ? nullptr : literalValue(step);
			bool descending = av != nullptr && bv != nullptr && av->compareTo(bv) > 0;
			bool fractional = (av == nullptr && decimalAtom(a)) || (bv == nullptr && decimalAtom(b)) || (av != nullptr && av->fractional())
					|| (bv != nullptr && bv->fractional());
			bool ordinary = (step == nullptr || (hv != nullptr && hv->isOne()))
					&& !descending && !fractional;
			bool aggregate = r->style == Style::RANGE;
			bool extremum = is(n, CalculusOperator::TYPE_ID, CalculusOperator::MIN_ID)
					|| is(n, CalculusOperator::TYPE_ID, CalculusOperator::MAX_ID);
			out->add(r->symbol);
			if (!aggregate && !extremum) out->add(Text(UTF("\\left((")));
			if (!aggregate && !extremum) { out->add(visit(body)); out->add(Text(UTF(")"))); }
			out->add(Text(UTF("_{")));
			if (ordinary) {
				out->add(visit(index)); out->add(Text(UTF("="))); out->add(visit(a));
			} else {
				Text k = freshIndex();
				out->add(Text(UTF("\\substack{"))); out->add(visit(index)); out->add(Text(UTF("="))); out->add(visit(a));
				bool minus = hv != nullptr ? hv->sign < 0 : step == nullptr && descending;
				if (step == nullptr || (hv != nullptr && hv->isUnitMagnitude())) {
					out->add(minus ? Text(UTF("-")) : Text(UTF("+"))); out->add(k);
				} else if (hv != nullptr) {
					out->add(minus ? Text(UTF("-")) : Text(UTF("+")));
					if (minus && step->form == Form::PREFIX) out->add(visit(step->children->get(0)));
					else if (minus && step->form == Form::ATOM) out->add(numberText(Text(step->token->tokenStr).substring(1), step->index));
					else out->add(visit(step));
					out->add(k);
				} else {
					out->add(Text(UTF("+"))); out->add(k); out->add(Text(UTF("\\cdot "))); out->add(grouped(step, strength(step) < PRODUCT, true));
				}
				out->add(Text(UTF("\\\\")) + k + Text(UTF("\\in\\mathbb Z")));
				if (step != nullptr && hv == nullptr) {
					out->add(Text(UTF(",\\;0\\le ")) + k + Text(UTF("\\le\\frac{")));
					out->add(grouped(b, strength(b) < ADDITIVE, false)); out->add(Text(UTF("-")));
					out->add(grouped(a, strength(a) <= ADDITIVE || negative(a), false));
					out->add(Text(UTF("}{"))); out->add(visit(step)); out->add(Text(UTF("}")));
				} else {
					out->add(Text(UTF("_{\\ge0},\\,"))); out->add(visit(index)); out->add(minus ? Text(UTF("\\ge")) : Text(UTF("\\le")));
					out->add(visit(b));
				}
				out->add(Text(UTF("}")));
			}
			out->add(Text(UTF("}")));
			if (ordinary) { out->add(Text(UTF("^{"))); out->add(visit(b)); out->add(Text(UTF("}"))); }
			if (!aggregate && !extremum) out->add(Text(UTF("\\right)")));
			else out->add(grouped(body, strength(body) <= ADDITIVE, false));
		}
	};

	/** Decimal spelling metadata only: no floating evaluation or arbitrary-precision
	 * library. The same character/32-bit-integer algorithm ports to C# and C++.
	 * Excessive exponents remain unclassified and use explicit symbolic ranges.
	 *
	 * @version        6.2.0
	 */
	struct DecimalLiteral {
		const int sign, order;
		const Text digits;
		DecimalLiteral(int sign, int order, Text digits) : sign(sign), order(order), digits(digits) {
}
		bool fractional() { return sign != 0 && order < digits.length(); }
		bool isUnitMagnitude() { return sign != 0 && order == 1 && digits.equals(Text(UTF("1"))); }
		bool isOne() { return sign > 0 && isUnitMagnitude(); }
		int compareTo(DecimalLiteralPtr other) {
			if (sign != other->sign) return compare(sign, other->sign);
			if (sign == 0) return 0;
			if (order != other->order) return sign * compare(order, other->order);
			for (int i = 0; i < std::max(digits.length(), other->digits.length()); i++) {
				Char a = i < digits.length() ? digits.charAt(i) : UTF('0');
				Char b = i < other->digits.length() ? other->digits.charAt(i) : UTF('0');
				if (a != b) return sign * compare(a, b);
			}
			return 0;
		}
	};
	static DecimalLiteralPtr literalValue(NodePtr n) {
		bool negate = false;
		if (n->form == Form::PREFIX && isSign(n->token)) {
			negate = is(n, Operator::TYPE_ID, Operator::MINUS_ID);
			n = n->children->get(0);
		}
		if (!decimalAtom(n)) return nullptr;
		Text text = Text(n->token->tokenStr);
		int start = text.startsWith(Text(UTF("-"))) || text.startsWith(Text(UTF("+"))) ? 1 : 0;
		int sign = text.startsWith(Text(UTF("-"))) ? -1 : 1;
		if (negate) sign = -sign;
		int e = std::max(text.indexOf(UTF('e')), text.indexOf(UTF('E')));
		int end = e < 0 ? text.length() : e;
		int exponent = 0;
		if (e >= 0) {
			int pos = e + 1, exponentSign = 1;
			if (text.charAt(pos) == UTF('+') || text.charAt(pos) == UTF('-')) {
				if (text.charAt(pos) == UTF('-')) exponentSign = -1;
				pos++;
			}
			for (; pos < text.length(); pos++) {
				if (exponent > 100000) return nullptr;
				exponent = exponent * 10 + text.charAt(pos) - UTF('0');
			}
			exponent *= exponentSign;
		}
		TextBuilder digits;
		int whole = end - start;
		for (int i = start; i < end; i++) {
			if (text.charAt(i) == UTF('.')) whole = i - start; else digits.append(text.charAt(i));
		}
		int first = 0, last = digits.length();
		while (first < last && digits.charAt(first) == UTF('0')) first++;
		if (first == last) return new_DecimalLiteral(0, 0, Text(UTF("0")));
		while (last > first && digits.charAt(last - 1) == UTF('0')) last--;
		return new_DecimalLiteral(sign, whole - first + exponent, digits.substring(first, last));
	}
	static int compareUnsignedIntegers(Text a, Text b) {
		int i = 0, j = 0;
		while (i + 1 < a.length() && a.charAt(i) == UTF('0')) i++;
		while (j + 1 < b.length() && b.charAt(j) == UTF('0')) j++;
		if (a.length() - i != b.length() - j) return compare(a.length() - i, b.length() - j);
		return a.substring(i).compareTo(b.substring(j));
	}

	static Text number(NodePtr n) { return numberText(Text(n->token->tokenStr), n->index); }
	static Text numberText(Text s, int index) {
		if (s.length() > 100000) throw error(index, Text(UTF("literal budget exceeded")));
		if (DECIMAL().matches(s)) {
			int e = std::max(s.indexOf(UTF('e')), s.indexOf(UTF('E')));
			if (e >= 0) return decimalText(s.substring(0, e)) + Text(UTF("\\times 10^{")) + s.substring(e + 1) + Text(UTF("}"));
			return decimalText(s);
		}
		if (FRACTION().matches(s)) {
			std::vector<Text> parts = s.split(Text(UTF("_")), -1);
			if (parts.size() == 2) return Text(UTF("\\frac{")) + parts[0] + Text(UTF("}{")) + parts[1] + Text(UTF("}"));
			Text fraction = Text(UTF("\\frac{")) + parts[1] + Text(UTF("}{")) + parts[2] + Text(UTF("}"));
			if (parts[0].startsWith(Text(UTF("-"))) || compareUnsignedIntegers(parts[1], parts[2]) >= 0)
				return Text(UTF("(")) + parts[0] + Text(UTF("+")) + fraction + Text(UTF(")"));
			return parts[0] + Text(UTF("\\,")) + fraction;
		}
		int start = s.startsWith(Text(UTF("-"))) || s.startsWith(Text(UTF("+"))) ? 1 : 0;
		int dot = s.indexOf(UTF('.'), start);
		if (dot > start) {
			Text prefix = s.substring(start, dot);
			int base;
			if (prefix.equalsIgnoreCase(Text(UTF("o")))) base = 8;
			else if (prefix.equalsIgnoreCase(Text(UTF("h")))) base = 16;
			else if (prefix.equalsIgnoreCase(Text(UTF("b")))) base = 2;
			else if (prefix.matches(Text(UTF("[bB][0-9]{1,2}")))) base = parseInt(prefix.substring(1));
			else throw error(index, Text(UTF("invalid numeric literal")));
			if (base < 1 || base > 36) throw error(index, Text(UTF("invalid numeral base")));
			Text digits = s.substring(dot + 1);
			if (digits.isEmpty() && base != 1) throw error(index, Text(UTF("missing numeral digits")));
			for (int i = 0; i < digits.length(); i++) {
				Char c = digits.charAt(i);
				if (c > 127 || (base == 1 ? c != UTF('1') : digit(c, base) < 0))
					throw error(index, Text(UTF("invalid numeral digit")));
			}
			return s.substring(0, start) + Text(UTF("(")) + (digits.isEmpty() ? Text(UTF("\\varepsilon")) : Text(UTF("\\mathrm{")) + digits + Text(UTF("}"))) + Text(UTF(")_{")) + base + Text(UTF("}"));
		}
		throw error(index, Text(UTF("invalid numeric literal")));
	}
	static Text decimalText(Text s) {
		if (s.startsWith(Text(UTF(".")))) return Text(UTF("0")) + s;
		if (s.startsWith(Text(UTF("-."))) || s.startsWith(Text(UTF("+.")))) return s.substring(0, 1) + Text(UTF("0")) + s.substring(1);
		return s;
	}
	static Text name(Text source, bool function, int index) {
		bool bracketed = source.startsWith(Text(UTF("["))) && source.endsWith(Text(UTF("]")));
		Text s = bracketed ? source.substring(1, source.length() - 1) : source;
		if (s.length() > 100000 || !NAME().matches(s)) throw error(index, Text(UTF("invalid identifier")));
		Text unicode = UNICODE_NAMES().get(s);
		if (unicode != nullptr) return bracketed ? Text(UTF("[")) + unicode + Text(UTF("]")) : function ? Text(UTF("\\operatorname{")) + unicode + Text(UTF("}")) : unicode;
		Text safe = s.replace(Text(UTF("_")), Text(UTF("\\_")));
		if (bracketed) return Text(UTF("[\\mathrm{")) + safe + Text(UTF("}]"));
		if (s.length() == 1 && isLetter(s.charAt(0))) return safe;
		return (function ? Text(UTF("\\operatorname{")) : Text(UTF("\\mathit{"))) + safe + Text(UTF("}"));
	}
	static Map<Text, Text> makeUnicodeNames() {
		Map<Text, Text> names = {};
		Text letters = Text(UTF("αβγδεζηθικλμνξοπρςστυφχψωΑΒΓΔΕΖΗΘΙΚΛΜΝΞΟΠΡΣΤΥΦΧΨΩ∑∏ℿ∆∇∫ℼℇⅇℯ∂"));
		std::vector<Text> latex = {Text(UTF("\\alpha")), Text(UTF("\\beta")), Text(UTF("\\gamma")), Text(UTF("\\delta")), Text(UTF("\\epsilon")), Text(UTF("\\zeta")), Text(UTF("\\eta")), Text(UTF("\\theta")), Text(UTF("\\iota")), Text(UTF("\\kappa")), Text(UTF("\\lambda")), Text(UTF("\\mu")), Text(UTF("\\nu")), Text(UTF("\\xi")), Text(UTF("o")), Text(UTF("\\pi")), Text(UTF("\\rho")), Text(UTF("\\varsigma")), Text(UTF("\\sigma")), Text(UTF("\\tau")), Text(UTF("\\upsilon")), Text(UTF("\\varphi")), Text(UTF("\\chi")), Text(UTF("\\psi")), Text(UTF("\\omega")),
			Text(UTF("A")), Text(UTF("B")), Text(UTF("\\Gamma")), Text(UTF("\\Delta")), Text(UTF("E")), Text(UTF("Z")), Text(UTF("H")), Text(UTF("\\Theta")), Text(UTF("I")), Text(UTF("K")), Text(UTF("\\Lambda")), Text(UTF("M")), Text(UTF("N")), Text(UTF("\\Xi")), Text(UTF("O")), Text(UTF("\\Pi")), Text(UTF("P")), Text(UTF("\\Sigma")), Text(UTF("T")), Text(UTF("\\Upsilon")), Text(UTF("\\Phi")), Text(UTF("X")), Text(UTF("\\Psi")), Text(UTF("\\Omega")),
			Text(UTF("\\mathit{\\Sigma}")), Text(UTF("\\mathit{\\Pi}")), Text(UTF("\\mathit{\\Pi}")), Text(UTF("\\mathit{\\Delta}")), Text(UTF("\\mathit{\\nabla}")), Text(UTF("\\mathit{\\int}")), Text(UTF("\\mathit{\\pi}")), Text(UTF("\\mathit{E}")), Text(UTF("\\mathit{e}")), Text(UTF("\\mathit{e}")), Text(UTF("\\mathit{\\partial}"))};
		if (letters.length() != latex.size()) throw logicError(Text(UTF("Incomplete Unicode name alphabet")));
		for (int i = 0; i < latex.size(); i++) names.put(letters.substring(i, i + 1), latex[i]);
		return names;
	}

	/** @version        6.2.0 */
	enum class Form { ATOM, CALL, PREFIX, POSTFIX, BINARY };

	/** @version        6.2.0 */
	struct Node {
        Node* deleteNext = nullptr;
		const TokenPtr token;
		const int index;
		const Form form;
		const ReadOnlyListPtr<NodePtr> children;
		Node(TokenPtr token, int index, Form form, ListPtr<NodePtr> children) : token(token), index(index), form(form), children(new_ReadOnlyList<NodePtr>(children)) {
		}
	};

	/** @version        6.2.0 */
	struct Part {
		const TokenPtr token;
		const int index;
		NodePtr node = nullptr;
		Part* previous = nullptr; Part* next = nullptr;
		int version = 0;
		bool removed = false;
		Part(TokenPtr token, int index, NodePtr node) : token(token), index(index), node(node) {
		}
	};

	/** @version        6.2.0 */
	struct Scope {
		const TokenPtr call;
		const int index;
		const int level;
		ListPtr<PartPtr> parts = new_List<PartPtr>();
		ListPtr<NodePtr> arguments = new_List<NodePtr>();
		Scope(TokenPtr call, int index, int level) : call(call), index(index), level(level) {
		}
	};

	static std::logic_error error(int index, Text reason) {
		return logicError(Text(UTF("LaTeX export: ")) + reason + Text(UTF(" (token ")) + index + Text(UTF(")")));
	}

	static bool isCall(TokenPtr token) {
		int type = token->tokenTypeId;
		return type == Function1Arg::TYPE_ID || type == Function2Arg::TYPE_ID
				|| type == Function3Arg::TYPE_ID || type == FunctionVariadic::TYPE_ID
				|| type == CalculusOperator::TYPE_ID || type == Function::TYPE_ID
				|| type == RecursiveArgument::TYPE_ID_RECURSIVE
				|| (type == Token::NOT_MATCHED && Text(UTF("function")).equals(Text(token->looksLike)));
	}

	/** Delimiters and levels come from mXparser; no source text is parsed here. */
	static NodePtr reconstruct(ListPtr<TokenPtr> tokens) {
		if (tokens == nullptr) throw error(0, Text(UTF("missing token stream")));
		if (tokens->size() > MAX_TOKENS) throw error(0, Text(UTF("token budget exceeded")));
		Stack<ScopePtr> scopes;
		scopes.push(new_Scope(nullptr, 0, -1));
		for (int i = 0; i < tokens->size(); i++) {
			TokenPtr t = tokens->get(i);
			ScopePtr scope = scopes.peek();
			if (t == nullptr || Text(t->tokenStr) == nullptr) throw error(i, Text(UTF("incomplete token")));
			if (t->tokenTypeId == ParserSymbol::TYPE_ID && t->tokenId == ParserSymbol::BLANK_ID) continue;
			if (isCall(t)) {
				if (i + 1 >= tokens->size() || !Token::isLeftParenthesis(tokens->get(i + 1)))
					throw error(i, Text(UTF("function requires an argument list")));
				if (scopes.size() > MAX_DEPTH) throw error(i, Text(UTF("nesting budget exceeded")));
				// Java evaluates the index argument before incrementing i in the level argument.
				const int callIndex = i;
				const int callLevel = tokens->get(++i)->tokenLevel;
				scopes.push(new_Scope(t, callIndex, callLevel));
			} else if (Token::isLeftParenthesis(t)) {
				if (scopes.size() > MAX_DEPTH) throw error(i, Text(UTF("nesting budget exceeded")));
				scopes.push(new_Scope(nullptr, i, t->tokenLevel));
			} else if (Token::isParameterSeparator(t)) {
				if (scope->call == nullptr || t->tokenLevel != scope->level)
					throw error(i, Text(UTF("separator outside an argument list")));
				scope->arguments->add(reduce(scope->parts, i));
				scope->parts->clear();
			} else if (Token::isRightParenthesis(t)) {
				if (scopes.size() == 1 || t->tokenLevel != scope->level)
					throw error(i, Text(UTF("unmatched closing parenthesis")));
				NodePtr result;
				if (scope->call != nullptr) {
					if (!scope->parts->isEmpty() || !scope->arguments->isEmpty())
						scope->arguments->add(reduce(scope->parts, i));
					result = new_Node(scope->call, scope->index, Form::CALL, scope->arguments);
				} else result = reduce(scope->parts, i);
				scopes.pop();
				scopes.peek()->parts->add(std::make_shared<Part>(result->token, result->index, result));
			} else {
				bool operatorPart = Token::isBinaryOperator(t) || Token::isUnaryLeftOperator(t) || Token::isUnaryRightOperator(t);
				if (!operatorPart && !Token::isNumber(t) && !Token::isIdentifier(t)
						&& t->tokenTypeId != RandomVariable::TYPE_ID && t->tokenTypeId != Token::NOT_MATCHED)
					throw error(i, Text(UTF("unknown token type or syntax symbol")));
				scope->parts->add(std::make_shared<Part>(t, i, operatorPart ? nullptr
						: new_Node(t, i, Form::ATOM, new_List<NodePtr>())));
			}
		}
		if (scopes.size() != 1) throw error(scopes.peek()->index, Text(UTF("unclosed parenthesis")));
		return scopes.peek()->parts->isEmpty() ? nullptr : reduce(scopes.peek()->parts, tokens->size());
	}

	/* The selection order deliberately mirrors calculateFirstAndFullyCompile:
	 * ready fragments first, rightmost ready powers/tetrations, then first position in
	 * each remaining group. A conventional precedence-only parser is insufficient
	 * for signs and for mXparser's power/postfix/remainder ordering. */
	/** @version        6.2.0 */
	struct Candidate {
		Part* const part;
		const int version;
		const Binding priority;
		Candidate(Part* part) : part(part), version(part->version), priority(binding(part->token, part->index)) {
		}
	};
    /** @version        6.2.0 */
    class CandidateQueue {
        using Comparator = std::function<int(const CandidatePtr&, const CandidatePtr&)>;
        /** @version        6.2.0 */
        struct Later { Comparator compare; bool operator()(const CandidatePtr& a, const CandidatePtr& b) const { return compare(a, b) > 0; } };
        std::priority_queue<CandidatePtr, std::vector<CandidatePtr>, Later> queue;
    public:
        explicit CandidateQueue(Comparator compare) : queue(Later{compare}) { }
        void add(const CandidatePtr& candidate) { queue.push(candidate); }
        CandidatePtr poll() { if (queue.empty()) return nullptr; auto result = queue.top(); queue.pop(); return result; }
    };

	static bool ready(Part* part) {
		bool left = part->previous != nullptr && part->previous->node != nullptr;
		bool right = part->next != nullptr && part->next->node != nullptr;
		return Token::isUnaryLeftOperator(part->token) || isSign(part->token) ? right
				: Token::isUnaryRightOperator(part->token) ? left : left && right;
	}
	static void offer(CandidateQueue& candidates, Part* part) {
		if (part == nullptr || part->removed || part->node != nullptr) return;
		part->version++;
		if (ready(part)) candidates.add(new_Candidate(part));
	}
	/** Linked fragments plus a queue of ready candidates preserve the original
	 * selection order without rescanning/shifting a flat expression quadratically.
	 * Only the two surviving neighbours can become newly ready after a reduction. */
	static NodePtr reduce(ListPtr<PartPtr> parts, int index) {
		if (parts->isEmpty()) throw error(index, Text(UTF("empty expression or argument")));
		CandidateQueue candidates([](const CandidatePtr& a, const CandidatePtr& b) {
			if (a->priority != b->priority) return compare(CAST_INT(a->priority), CAST_INT(b->priority));
			return rightAssociative(a->part->token) ? compare(b->part->index, a->part->index)
					: compare(a->part->index, b->part->index);
		});
		for (int i = 0; i < parts->size(); i++) {
			Part* part = parts->get(i).get();
			part->previous = i == 0 ? nullptr : parts->get(i - 1).get();
			part->next = i + 1 == parts->size() ? nullptr : parts->get(i + 1).get();
		}
		for (const PartPtr& part : *parts) offer(candidates, part.get());
		Part* head = parts->get(0).get();
		int remaining = parts->size();
		while (remaining > 1 || head->node == nullptr) {
			CandidatePtr candidate = candidates.poll();
			if (candidate == nullptr) {
				Part* offending = head;
				while (offending->node != nullptr && offending->next != nullptr) offending = offending->next;
				throw error(offending->index, Text(UTF("missing operand or adjacent expressions")));
			}
			Part* operatorPart = candidate->part;
			if (operatorPart->removed || operatorPart->node != nullptr || candidate->version != operatorPart->version) continue;
			bool leftReady = operatorPart->previous != nullptr && operatorPart->previous->node != nullptr;
			Form form = Token::isUnaryLeftOperator(operatorPart->token) || (isSign(operatorPart->token) && !leftReady)
					? Form::PREFIX : Token::isUnaryRightOperator(operatorPart->token) ? Form::POSTFIX : Form::BINARY;
			ListPtr<NodePtr> operands = new_List<NodePtr>();
			Part* before = operatorPart->previous, *after = operatorPart->next;
			if (form != Form::PREFIX) {
				operands->add(before->node);
				before->removed = true;
				before = before->previous;
				remaining--;
			}
			if (form != Form::POSTFIX) {
				operands->add(after->node);
				after->removed = true;
				after = after->next;
				remaining--;
			}
			operatorPart->node = new_Node(operatorPart->token, operatorPart->index, form, operands);
			operatorPart->previous = before;
			operatorPart->next = after;
			if (before == nullptr) head = operatorPart; else before->next = operatorPart;
			if (after != nullptr) after->previous = operatorPart;
			offer(candidates, before);
			offer(candidates, after);
		}
		return head->node;
	}

	static bool isSign(TokenPtr t) {
		return t->tokenTypeId == Operator::TYPE_ID
				&& (t->tokenId == Operator::PLUS_ID || t->tokenId == Operator::MINUS_ID);
	}
	static bool rightAssociative(TokenPtr t) {
		return t->tokenTypeId == Operator::TYPE_ID
				&& (t->tokenId == Operator::POWER_ID || t->tokenId == Operator::TETRATION_ID);
	}

	/* Source order in Expression.calculateFirstAndFullyCompile. Keep this catalogue
	 * and the independent operator-combination audit together when that method changes.
	 * The evaluator's exceptional multi-power selection with an unready negative
	 * exponent is intentionally deferred to a separate engine investigation. */
	/** @version        6.2.0 */
	enum class Binding {
		TETRATION, POWER, FACTORIAL, PERCENT, REMAINDER, NEGATION, ROOT,
		BIT_COMPLEMENT, PRODUCT, SUM, NOT_EQUAL, EQUAL, LESS, GREATER,
		LESS_EQUAL, GREATER_EQUAL, CONJUNCTION, DISJUNCTION, IMPLICATION, BIT_BINARY
	};

	static Binding binding(TokenPtr t, int index) {
		int id = t->tokenId;
		if (t->tokenTypeId == Operator::TYPE_ID) {
			switch (id) {
				case Operator::TETRATION_ID: return Binding::TETRATION;
				case Operator::POWER_ID: return Binding::POWER;
				case Operator::FACT_ID: return Binding::FACTORIAL;
				case Operator::PERC_ID: return Binding::PERCENT;
				case Operator::MOD_ID: return Binding::REMAINDER;
				case Operator::SQUARE_ROOT_ID: case Operator::CUBE_ROOT_ID: case Operator::FOURTH_ROOT_ID: return Binding::ROOT;
				case Operator::MULTIPLY_ID: case Operator::DIVIDE_ID: case Operator::DIVIDE_QUOTIENT_ID: return Binding::PRODUCT;
				case Operator::PLUS_ID: case Operator::MINUS_ID: return Binding::SUM;
				default: throw error(index, Text(UTF("unknown arithmetic operator")));
			}
		}
		if (t->tokenTypeId == BinaryRelation::TYPE_ID) {
			switch (id) {
				case BinaryRelation::NEQ_ID: return Binding::NOT_EQUAL;
				case BinaryRelation::EQ_ID: return Binding::EQUAL;
				case BinaryRelation::LT_ID: return Binding::LESS;
				case BinaryRelation::GT_ID: return Binding::GREATER;
				case BinaryRelation::LEQ_ID: return Binding::LESS_EQUAL;
				case BinaryRelation::GEQ_ID: return Binding::GREATER_EQUAL;
				default: throw error(index, Text(UTF("unknown relation")));
			}
		}
		if (t->tokenTypeId == BooleanOperator::TYPE_ID) {
			if (id == BooleanOperator::NEG_ID) return Binding::NEGATION;
			if (id == BooleanOperator::AND_ID || id == BooleanOperator::NAND_ID) return Binding::CONJUNCTION;
			if (id == BooleanOperator::OR_ID || id == BooleanOperator::NOR_ID || id == BooleanOperator::XOR_ID) return Binding::DISJUNCTION;
			return Binding::IMPLICATION;
		}
		if (t->tokenTypeId == BitwiseOperator::TYPE_ID)
			return id == BitwiseOperator::COMPL_ID ? Binding::BIT_COMPLEMENT : Binding::BIT_BINARY;
		throw error(index, Text(UTF("unknown operator")));
	}

    static RulePtr new_Rule(Text symbol, Text templ, Style style, std::vector<int> arities, int start, Text separator) { return std::make_shared<const Rule>(symbol, templ, style, arities, start, separator); }
    static NodePtr new_Node(TokenPtr token, int index, Form form, ListPtr<NodePtr> children) { return NodePtr(new Node(token, index, form, children), IterativeDelete<Node>{}); }
    template<typename... A> static VisitPtr new_Visit(A&&... args) { return std::make_shared<Visit>(std::forward<A>(args)...); }
    template<typename... A> static ScopePtr new_Scope(A&&... args) { return std::make_shared<Scope>(std::forward<A>(args)...); }
    template<typename... A> static CandidatePtr new_Candidate(A&&... args) { return std::make_shared<Candidate>(std::forward<A>(args)...); }
    template<typename... A> static DecimalLiteralPtr new_DecimalLiteral(A&&... args) { return std::make_shared<DecimalLiteral>(std::forward<A>(args)...); }
    static bool isText(const object& part) { return std::any_cast<Text>(&part) != nullptr; }
    static std::vector<object> copyObjects(ListPtr<object> parts) { return std::vector<object>(parts->begin(), parts->end()); }
    static object removeLast(ListPtr<object> parts) { object result = parts->top(); parts->pop(); return result; }
    static int parseInt(Text s) { return wrapper::Integer::parseInt(s.str(), 10); }
    static Text integerText(int n) { return std::to_wstring(n); }
    static Text charText(Char c) { return String(1, c); }

};

}
StringPtr LaTeXExporter::format(const ListPtr<TokenPtr>& tokens) { return ExporterImplementation::format(tokens).pointer(); }
}
