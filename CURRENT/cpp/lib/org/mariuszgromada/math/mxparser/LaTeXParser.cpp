/*
 * @(#)LaTeXParser.cpp        6.2.0    2026-11-13
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
#include "LaTeXParser.hpp"
#include "LaTeXSupport.hpp"
#include "parsertokens/ParserSymbol.hpp"
namespace org::mariuszgromada::math::mxparser {
using namespace latex_detail;
using namespace parsertokens;
using namespace wrapper;
	String LaTeXParser::makeUnicodeSymbols() {
		STATIC_VARS_INITI_DEPENDENCY(ParserSymbol);
        Text definition(ParserSymbol::UNICODE_NAME_REG_EXP);
		int end = definition.length() - 1;
		if (definition.length() < 3 || definition.length() % 2 != 1
				|| definition.charAt(0) != UTF('(') || definition.charAt(end) != UTF(')'))
			throw logicError(Text(UTF("Unsupported parser symbol alphabet definition")));
		TextBuilder symbols = TextBuilder();
		for (int i = 1; i < end; i += 2) {
			Char symbol = definition.charAt(i);
			if (symbol <= 127 || symbol >= 0xD800 && symbol <= 0xDFFF
					|| i + 1 < end && definition.charAt(i + 1) != UTF('|'))
				throw logicError(Text(UTF("Unsupported parser symbol alphabet alternative")));
			symbols.append(symbol);
		}
		return symbols.toString().str();
	}

const String& LaTeXParser::UNICODE_SYMBOLS() { static const String value = makeUnicodeSymbols(); return value; }
LaTeXParser::Node::Node(Kind kind, Ptr<const String> text, SymbolStyle style, Ptr<const String> source, int start, int end, const std::vector<NodePtr>& children)
    : kind(kind), text(text), source(source), symbolStyle(style), startOffset(start), endOffset(end), children(new_ReadOnlyList<NodePtr>(children)) { }
LaTeXParser::Kind LaTeXParser::Node::getKind() const { return kind; }
StringPtr LaTeXParser::Node::getText() const { return S(*text); }
LaTeXParser::SymbolStyle LaTeXParser::Node::getSymbolStyle() const { return symbolStyle; }
ReadOnlyListPtr<LaTeXParser::NodePtr> LaTeXParser::Node::getChildren() const { return children; }
int LaTeXParser::Node::getStartOffset() const { return startOffset; }
int LaTeXParser::Node::getEndOffset() const { return endOffset; }
StringPtr LaTeXParser::Node::getSourceText() const { return S(source->substr(startOffset, endOffset - startOffset)); }
LaTeXParser::NodePtr LaTeXParser::new_Node(Kind kind, Ptr<const String> text, SymbolStyle style, Ptr<const String> source, int start, int end, const std::vector<NodePtr>& children) {
    return NodePtr(new Node(kind, text, style, source, start, end, children), IterativeDelete<Node>{});
}
	/**
	 * \version 6.2.0
	 */
	class LaTeXParser::Parser {
		friend class LaTeXParser;
		const Text source;
		int position = 0, depth = 0, nodes = 0;
		Parser(Text source) : source(source) { }
		std::invalid_argument error(Text reason) {
			return invalidArgument(Text(UTF("LaTeX parse: ")) + reason + Text(UTF(" (offset ")) + position + Text(UTF(")")));
		}
		
    template<typename... Children> NodePtr node(Kind kind, Text text, int start, int end, Children... children) {
        return node(kind, text, SymbolStyle::DEFAULT, start, end, std::vector<NodePtr>{children...});
    }
    template<typename... Children> NodePtr node(Kind kind, Text text, SymbolStyle style, int start, int end, Children... children) {
        return node(kind, text, style, start, end, std::vector<NodePtr>{children...});
    }
    NodePtr node(Kind kind, Text text, SymbolStyle style, int start, int end, const std::vector<NodePtr>& children) {
        if (++nodes > MAX_NODES) throw error(Text(UTF("node limit exceeded")));
        return new_Node(kind, text.shared(), style, source.shared(), start, end, children);
    }
		NodePtr binary(Kind kind, NodePtr left, NodePtr right) {
			return node(kind, Text(UTF("")), left->startOffset, right->endOffset, left, right);
		}
		bool asciiLetter(Char c) { return c >= UTF('a') && c <= UTF('z') || c >= UTF('A') && c <= UTF('Z'); }
		bool digit(Char c) { return c >= UTF('0') && c <= UTF('9'); }
		bool unicodeSymbol(Char c) { return Text(UNICODE_SYMBOLS()).indexOf(c) >= 0; }
		bool symbol(Char c) { return asciiLetter(c) || unicodeSymbol(c); }
		bool whitespace(Char c) { return c == UTF(' ') || c >= UTF('\t') && c <= UTF('\r'); }
		bool commandAt(Text command) {
			int end = position + command.length() + 1;
			return source.startsWith(Text(UTF("\\")) + command, position)
					&& (end == source.length() || !asciiLetter(source.charAt(end)));
		}
		void space() {
			while (position < source.length()) {
				Char c = source.charAt(position);
				if (whitespace(c)) { position++; continue; }
				if (c != UTF('\\')) return;
				if (position + 1 < source.length() && Text(UTF(",;:! ")).indexOf(source.charAt(position + 1)) >= 0) { position += 2; continue; }
				if (commandAt(Text(UTF("qquad")))) position += 6;
				else if (commandAt(Text(UTF("quad")))) position += 5;
				else return;
			}
		}
		/**
		 * \brief TeX command arguments skip ordinary whitespace, not spacing macros:
		 * a macro such as quad is itself the next argument token.
		 */
		void argumentSpace() {
			while (position < source.length() && whitespace(source.charAt(position))) position++;
		}
		NodePtr argumentGroup() {
			argumentSpace();
			if (position == source.length() || source.charAt(position) != UTF('{'))
				throw error(Text(UTF("expected a braced command argument")));
			return group(Text(UTF("{")), Text(UTF("}")), false);
		}
		bool take(Text token) {
			space();
			if (!source.startsWith(token, position)) return false;
			position += token.length(); return true;
		}
		bool command(Text name) {
			space();
			if (!commandAt(name)) return false;
			position += name.length() + 1; return true;
		}
		void need(Text token) { if (!take(token)) throw error(Text(UTF("expected ")) + token); }
		void needCommand(Text token) { if (!command(token)) throw error(Text(UTF("expected \\")) + token); }
		NodePtr sum() {
			NodePtr left = product();
			while (true) {
				if (take(Text(UTF("+")))) left = binary(Kind::ADD, left, product());
				else if (take(Text(UTF("-")))) left = binary(Kind::SUBTRACT, left, product());
				else return left;
			}
		}
		NodePtr product() {
			NodePtr left = unary(), lastFactor = left;
			while (true) {
				if (command(Text(UTF("cdot"))) || command(Text(UTF("times"))) || take(Text(UTF("*")))) {
					lastFactor = unary(); left = binary(Kind::MULTIPLY, left, lastFactor);
				} else if (take(Text(UTF("/")))) {
					lastFactor = unary(); left = binary(Kind::DIVIDE, left, lastFactor);
				}
				else if (startsAtom()) {
					// Distinct numeric words require an explicit operator. A number
					// following an exponent, as in x^12, is a separate TeX factor.
					if (symbolFactor(lastFactor) && (source.charAt(position) == UTF('(') || commandAt(Text(UTF("left")))))
						throw error(Text(UTF("ambiguous function-like juxtaposition; use an explicit operator")));
					if (lastFactor->kind == Kind::NUMBER && (digit(source.charAt(position)) || source.charAt(position) == UTF('.')))
						throw error(Text(UTF("adjacent numbers require a multiplication operator")));
					lastFactor = unary(); left = binary(Kind::MULTIPLY, left, lastFactor);
				} else return left;
			}
		}
		bool symbolFactor(NodePtr factor) {
			while (factor->kind == Kind::POSITIVE || factor->kind == Kind::NEGATIVE || factor->kind == Kind::POWER)
				factor = factor->children->get(0);
			return factor->kind == Kind::SYMBOL;
		}
		bool startsAtom() {
			space();
			if (position == source.length()) return false;
			Char c = source.charAt(position);
			if (digit(c) || c == UTF('.') || c == UTF('(') || c == UTF('{') || symbol(c)) return true;
			return commandAt(Text(UTF("frac"))) || commandAt(Text(UTF("left"))) || commandAt(Text(UTF("lfloor")))
					|| commandAt(Text(UTF("mathit"))) || commandAt(Text(UTF("mathrm"))) || commandAt(Text(UTF("operatorname")));
		}
		NodePtr unary() {
			space();
			if (depth >= MAX_DEPTH) throw error(Text(UTF("nesting limit exceeded")));
			depth++;
			int start = position;
			NodePtr result;
			if (take(Text(UTF("+")))) { NodePtr child = unary(); result = node(Kind::POSITIVE, Text(UTF("")), start, child->endOffset, child); }
			else if (take(Text(UTF("-")))) { NodePtr child = unary(); result = node(Kind::NEGATIVE, Text(UTF("")), start, child->endOffset, child); }
			else result = postfix();
			depth--;
			return result;
		}
		NodePtr postfix() {
			NodePtr result = atom();
			bool superscript = false, factorial = false;
			while (true) {
				if (take(Text(UTF("^")))) {
					if (superscript) throw error(Text(UTF("repeated superscript requires grouping")));
					NodePtr exponent = script();
					result = binary(Kind::POWER, result, exponent); superscript = true; factorial = false;
				} else if (take(Text(UTF("!")))) {
					if (factorial) throw error(Text(UTF("double factorial is outside the supported subset")));
					result = node(Kind::FACTORIAL, Text(UTF("")), result->startOffset, position, result); factorial = true;
				} else if (take(Text(UTF("\\%")))) { result = node(Kind::PERCENT, Text(UTF("")), result->startOffset, position, result); factorial = false; }
				else return result;
			}
		}
		NodePtr script() {
			argumentSpace();
			if (position == source.length()) throw error(Text(UTF("missing superscript")));
			if (source.charAt(position) == UTF('{')) return group(Text(UTF("{")), Text(UTF("}")), false);
			int start = position;
			if (digit(source.charAt(position))) { position++; return node(Kind::NUMBER, source.substring(start, position), start, position); }
			if (symbol(source.charAt(position))) { position++; return node(Kind::SYMBOL, source.substring(start, position), start, position); }
			throw error(Text(UTF("superscript requires braces or one letter/digit")));
		}
		NodePtr group(Text open, Text close, bool scalable) {
			space(); int start = position;
			need(open);
			NodePtr inner = sum();
			if (scalable) needCommand(Text(UTF("right")));
			need(close);
			return node(inner->kind, Text(inner->text), inner->symbolStyle, start, position, inner->children->toArray());
		}
		Text quotedName() {
			argumentSpace();
			if (position == source.length() || source.charAt(position) != UTF('{'))
				throw error(Text(UTF("expected a braced symbol name")));
			need(Text(UTF("{")));
			TextBuilder name = TextBuilder();
			bool first = true, unicodeName = false;
			while (position < source.length() && source.charAt(position) != UTF('}')) {
				bool escapedUnderscore = source.startsWith(Text(UTF("\\_")), position);
				Char c = escapedUnderscore ? UTF('_') : source.charAt(position);
				if (first && unicodeSymbol(c)) unicodeName = true;
				else if (unicodeName || !(asciiLetter(c) || escapedUnderscore || !first && digit(c)))
					throw error(Text(UTF("unsupported symbol spelling")));
				name.append(c); position += escapedUnderscore ? 2 : 1;
				first = false;
			}
			if (first) throw error(Text(UTF("empty symbol name")));
			need(Text(UTF("}"))); return name.toString();
		}
		NodePtr fontSymbol(SymbolStyle style, int start) {
			argumentSpace();
			Text name;
			if (position < source.length() && source.charAt(position) == UTF('{')) name = quotedName();
			else if (position < source.length() && symbol(source.charAt(position))) {
				int symbolStart = position; position++; name = source.substring(symbolStart, position);
			}
			else if (source.startsWith(Text(UTF("\\_")), position)) { position += 2; name = Text(UTF("_")); }
			else throw error(Text(UTF("font command requires a symbol name")));
			return node(Kind::SYMBOL, name, style, start, position);
		}
		NodePtr atom() {
			space();
			if (position == source.length()) throw error(Text(UTF("expected an operand")));
			int start = position;
			Char c = source.charAt(position);
			if (c == UTF('(')) return group(Text(UTF("(")), Text(UTF(")")), false);
			if (c == UTF('{')) return group(Text(UTF("{")), Text(UTF("}")), false);
			if (digit(c) || c == UTF('.')) {
				bool digits = false;
				while (position < source.length() && digit(source.charAt(position))) { position++; digits = true; }
				if (position < source.length() && source.charAt(position) == UTF('.')) {
					position++; while (position < source.length() && digit(source.charAt(position))) { position++; digits = true; }
				}
				if (!digits) throw error(Text(UTF("expected decimal digits")));
				return node(Kind::NUMBER, source.substring(start, position), start, position);
			}
			if (symbol(c)) {
				position++;
				return node(Kind::SYMBOL, source.substring(start, position), start, position);
			}
			if (command(Text(UTF("frac")))) {
				NodePtr top = argumentGroup(), bottom = argumentGroup();
				return node(Kind::DIVIDE, Text(UTF("")), start, position, top, bottom);
			}
			if (command(Text(UTF("left")))) {
				if (take(Text(UTF("(")))) {
					NodePtr inner = sum(); needCommand(Text(UTF("right"))); need(Text(UTF(")")));
					return node(inner->kind, Text(inner->text), inner->symbolStyle, start, position, inner->children->toArray());
				}
				needCommand(Text(UTF("lfloor"))); NodePtr inner = sum(); needCommand(Text(UTF("right"))); needCommand(Text(UTF("rfloor")));
				return node(Kind::FLOOR, Text(UTF("")), start, position, inner);
			}
			if (command(Text(UTF("lfloor")))) {
				NodePtr inner = sum(); needCommand(Text(UTF("rfloor"))); return node(Kind::FLOOR, Text(UTF("")), start, position, inner);
			}
			if (command(Text(UTF("mathit")))) return fontSymbol(SymbolStyle::ITALIC, start);
			if (command(Text(UTF("mathrm")))) return fontSymbol(SymbolStyle::UPRIGHT, start);
			if (command(Text(UTF("operatorname")))) {
				Text name = quotedName();
				if (!name.equals(Text(UTF("rem")))) throw error(Text(UTF("unsupported named operator")));
				bool scalable = command(Text(UTF("left"))); need(Text(UTF("(")));
				NodePtr left = sum(); need(Text(UTF(","))); NodePtr right = sum();
				if (scalable) needCommand(Text(UTF("right")));
				need(Text(UTF(")"))); return node(Kind::REMAINDER, Text(UTF("")), start, position, left, right);
			}
			throw error(Text(UTF("unknown command or unsupported operand")));
		}
	};
LaTeXParser::NodePtr LaTeXParser::parse(const StringPtr& latex) {
    if (!latex) throw std::invalid_argument("LaTeX parse: null input (offset 0)");
    // Normalize only character storage to Java UTF-16 units, never mathematical syntax.
    size_t length = 0;
    for (Char c : *latex) { length += static_cast<uint32_t>(c) > 0xffff ? 2 : 1; if (length > MAX_INPUT) throw std::invalid_argument("LaTeX parse: input limit exceeded (offset 0)"); }
    String units; units.reserve(length);
    for (Char c : *latex) {
        uint32_t code = static_cast<uint32_t>(c);
        if (code > 0xffff && code <= 0x10ffff) {
            code -= 0x10000; units.push_back(static_cast<Char>(0xd800 + (code >> 10))); units.push_back(static_cast<Char>(0xdc00 + (code & 1023)));
        } else units.push_back(c);
    }
    Text source(units);
    Parser parser(source);
    NodePtr result = parser.sum();
    parser.space();
    if (parser.position != source.length()) throw parser.error(Text(UTF("unexpected or unsupported input")));
    return result;
}
}
