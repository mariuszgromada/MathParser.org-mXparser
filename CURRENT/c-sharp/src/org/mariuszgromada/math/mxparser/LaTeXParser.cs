/*
 * @(#)LaTeXParser.cs        6.2.0    2026-11-13
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


/// <summary>Structural parser for a deliberately limited arithmetic subset of mathematical
/// LaTeX fragments. Parsing preserves symbols and decimal spelling; it never
/// evaluates a formula, resolves definitions or expands TeX macros.
///
/// <para><b>Experimental API:</b> this class and its nested types are a public
/// foundation for future import, not a stable import contract. The API, supported
/// subset and metadata may evolve before stabilization. This status is documented,
/// not a runtime switch or a deprecation of the established export API.</para>
///
/// <para>Supports +, -, explicit and juxtaposed multiplication, /, fractions,
/// superscripts, factorial, percent, floor and the named remainder operation.
/// Parentheses, braces and matching scalable parentheses/floors are recognized.
/// Plain letters are individual symbols: xy is a product, while
/// <c>\mathit{xy}</c> is one symbol. Unknown commands and unsupported constructs
/// are errors, not guessed functions. Function-like juxtaposition (also after
/// a sign or symbolic power) requires an explicit multiplication operator.
/// This is a foundation for future import,
/// not a general TeX processor or a complete mXparser LaTeX importer.</para>
///
/// <para>All offsets are zero-based UTF-16 offsets, with exclusive end offsets.
/// The symbol alphabet is ASCII letters and the closed single-character alphabet
/// defined by ParserSymbol; named symbols follow mXparser's identifier forms.
/// Only ASCII whitespace and the documented TeX spacing commands are ignored.
/// Each call owns its parser state; returned nodes and child lists are immutable.
/// At most 1,000,000 input characters, 100,000 nodes (including discarded grouping
/// wrappers), and 128 simultaneous recursive operand levels are accepted.</para></summary>
/// <remarks><para>Since: 6.2.0</para><para>Version: 6.2.0</para></remarks>
public sealed class LaTeXParser {
	private LaTeXParser() { }
	private const int MAX_INPUT = 1000000, MAX_NODES = 100000, MAX_DEPTH = 128;
	private static readonly String UNICODE_SYMBOLS = makeUnicodeSymbols();

	/// <summary>Read the existing closed alphabet, not a Unicode database or a second table.
	/// The source definition must remain an alternation of single BMP characters.</summary>
	private static String makeUnicodeSymbols() {
		String definition = ParserSymbol.UNICODE_NAME_REG_EXP;
		int end = definition.Length - 1;
		if (definition.Length < 3 || definition.Length % 2 != 1
				|| definition[0] != '(' || definition[end] != ')')
			throw new InvalidOperationException("Unsupported parser symbol alphabet definition");
		StringBuilder symbols = new StringBuilder();
		for (int i = 1; i < end; i += 2) {
			char symbol = definition[i];
			if (symbol <= 127 || symbol >= 0xD800 && symbol <= 0xDFFF
					|| i + 1 < end && definition[i + 1] != '|')
				throw new InvalidOperationException("Unsupported parser symbol alphabet alternative");
			symbols.Append(symbol);
		}
		return symbols.ToString();
	}

	/// <summary>Experimental mathematical operations represented by the supported subset.</summary>
	/// <remarks><para>Version: 6.2.0</para></remarks>
	public enum Kind {
		NUMBER, SYMBOL, POSITIVE, NEGATIVE, ADD, SUBTRACT, MULTIPLY, DIVIDE,
		POWER, FACTORIAL, PERCENT, FLOOR, REMAINDER
	}

	/// <summary>Experimental source typography of a symbol; no constant/unit meaning is inferred.</summary>
	/// <remarks><para>Version: 6.2.0</para></remarks>
	public enum SymbolStyle {
		DEFAULT, ITALIC, UPRIGHT
	}

	/// <summary>Experimental immutable mathematical structure, spelling and source range.</summary>
	/// <remarks><para>Version: 6.2.0</para></remarks>
	public sealed class Node {
		internal readonly Kind kind;
		internal readonly String text, source;
		internal readonly SymbolStyle symbolStyle;
		internal readonly int startOffset, endOffset;
		internal readonly IList<Node> children;
		internal Node(Kind kind, String text, SymbolStyle symbolStyle, String source, int start, int end, Node[] children) {
			this.kind = kind;
			this.text = text;
			this.symbolStyle = symbolStyle;
			this.source = source;
			this.startOffset = start;
			this.endOffset = end;
			this.children = Array.AsReadOnly((Node[])children.Clone());
		}
		/// <summary>Returns the mathematical operation represented by this node.</summary>
		/// <returns>The operation kind; no numerical value is computed.</returns>
		public Kind getKind() { return kind; }
		/// <summary>Returns the number spelling or decoded symbol name.</summary>
		/// <returns>The original number spelling, decoded symbol name, or an empty string for an operation.</returns>
		public String getText() { return text; }
		/// <summary>Returns the source typography of a symbol.</summary>
		/// <returns>The typography for a SYMBOL node, or DEFAULT for other kinds; no constant or unit meaning is inferred.</returns>
		public SymbolStyle getSymbolStyle() { return symbolStyle; }
		/// <summary>Returns the operands in mathematical order.</summary>
		/// <returns>An immutable list of child nodes.</returns>
		public IList<Node> getChildren() { return children; }
		/// <summary>Returns the inclusive start of this node in the source.</summary>
		/// <returns>The zero-based UTF-16 start offset.</returns>
		public int getStartOffset() { return startOffset; }
		/// <summary>Returns the exclusive end of this node in the source.</summary>
		/// <returns>The zero-based UTF-16 end offset.</returns>
		public int getEndOffset() { return endOffset; }
		/// <summary>Returns the exact source text covered by this node.</summary>
		/// <returns>The original source spelling, including any enclosing grouping.</returns>
		public String getSourceText() { return source.Substring(startOffset, endOffset - startOffset); }
	}

	/// <summary>Parses one nonempty mathematical fragment into an immutable structure.
	/// Delimiters such as $...$ and full documents are outside this subset.</summary>
	/// <param name="latex">Mathematical LaTeX fragment.</param>
	/// <returns>The symbolic structure, without calculation or simplification.</returns>
	/// <exception cref="System.ArgumentException">For null/empty input, unsupported syntax,
	///         malformed input or a resource limit; message includes a UTF-16 offset.</exception>
	public static Node parse(String latex) {
		if (latex == null) throw new ArgumentException("LaTeX parse: null input (offset 0)");
		if (latex.Length > MAX_INPUT) throw new ArgumentException("LaTeX parse: input limit exceeded (offset 0)");
		Parser parser = new Parser(latex);
		Node result = parser.sum();
		parser.space();
		if (parser.position != latex.Length) throw parser.error("unexpected or unsupported input");
		return result;
	}

	/// <remarks><para>Version: 6.2.0</para></remarks>
	private sealed class Parser {
		internal readonly String source;
		internal int position, depth, nodes;
		internal Parser(String source) { this.source = source; }
		internal ArgumentException error(String reason) {
			return new ArgumentException("LaTeX parse: " + reason + " (offset " + position + ")");
		}
		private Node node(Kind kind, String text, int start, int end, params Node[] children) {
			return node(kind, text, SymbolStyle.DEFAULT, start, end, children);
		}
		private Node node(Kind kind, String text, SymbolStyle style, int start, int end, params Node[] children) {
			if (++nodes > MAX_NODES) throw error("node limit exceeded");
			return new Node(kind, text, style, source, start, end, children);
		}
		private Node binary(Kind kind, Node left, Node right) {
			return node(kind, "", left.startOffset, right.endOffset, left, right);
		}
		private bool asciiLetter(char c) { return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'; }
		private bool digit(char c) { return c >= '0' && c <= '9'; }
		private bool unicodeSymbol(char c) { return UNICODE_SYMBOLS.IndexOf(c) >= 0; }
		private bool symbol(char c) { return asciiLetter(c) || unicodeSymbol(c); }
		private bool whitespace(char c) { return c == ' ' || c >= '\t' && c <= '\r'; }
		private bool commandAt(String command) {
			int end = position + command.Length + 1;
			return startsWith(source, "\\" + command, position)
					&& (end == source.Length || !asciiLetter(source[end]));
		}
		internal void space() {
			while (position < source.Length) {
				char c = source[position];
				if (whitespace(c)) { position++; continue; }
				if (c != '\\') return;
				if (position + 1 < source.Length && ",;:! ".IndexOf(source[position + 1]) >= 0) { position += 2; continue; }
				if (commandAt("qquad")) position += 6;
				else if (commandAt("quad")) position += 5;
				else return;
			}
		}
		/// <summary>TeX command arguments skip ordinary whitespace, not spacing macros:
		/// a macro such as quad is itself the next argument token.</summary>
		private void argumentSpace() {
			while (position < source.Length && whitespace(source[position])) position++;
		}
		private Node argumentGroup() {
			argumentSpace();
			if (position == source.Length || source[position] != '{')
				throw error("expected a braced command argument");
			return group("{", "}", false);
		}
		private bool take(String token) {
			space();
			if (!startsWith(source, token, position)) return false;
			position += token.Length; return true;
		}
		private bool command(String name) {
			space();
			if (!commandAt(name)) return false;
			position += name.Length + 1; return true;
		}
		private void need(String token) { if (!take(token)) throw error("expected " + token); }
		private void needCommand(String token) { if (!command(token)) throw error("expected \\" + token); }
		internal Node sum() {
			Node left = product();
			while (true) {
				if (take("+")) left = binary(Kind.ADD, left, product());
				else if (take("-")) left = binary(Kind.SUBTRACT, left, product());
				else return left;
			}
		}
		private Node product() {
			Node left = unary(), lastFactor = left;
			while (true) {
				if (command("cdot") || command("times") || take("*")) {
					lastFactor = unary(); left = binary(Kind.MULTIPLY, left, lastFactor);
				} else if (take("/")) {
					lastFactor = unary(); left = binary(Kind.DIVIDE, left, lastFactor);
				}
				else if (startsAtom()) {
					// Distinct numeric words require an explicit operator. A number
					// following an exponent, as in x^12, is a separate TeX factor.
					if (symbolFactor(lastFactor) && (source[position] == '(' || commandAt("left")))
						throw error("ambiguous function-like juxtaposition; use an explicit operator");
					if (lastFactor.kind == Kind.NUMBER && (digit(source[position]) || source[position] == '.'))
						throw error("adjacent numbers require a multiplication operator");
					lastFactor = unary(); left = binary(Kind.MULTIPLY, left, lastFactor);
				} else return left;
			}
		}
		private bool symbolFactor(Node factor) {
			while (factor.kind == Kind.POSITIVE || factor.kind == Kind.NEGATIVE || factor.kind == Kind.POWER)
				factor = factor.children[0];
			return factor.kind == Kind.SYMBOL;
		}
		private bool startsAtom() {
			space();
			if (position == source.Length) return false;
			char c = source[position];
			if (digit(c) || c == '.' || c == '(' || c == '{' || symbol(c)) return true;
			return commandAt("frac") || commandAt("left") || commandAt("lfloor")
					|| commandAt("mathit") || commandAt("mathrm") || commandAt("operatorname");
		}
		private Node unary() {
			space();
			if (depth >= MAX_DEPTH) throw error("nesting limit exceeded");
			depth++;
			int start = position;
			Node result;
			if (take("+")) { Node child = unary(); result = node(Kind.POSITIVE, "", start, child.endOffset, child); }
			else if (take("-")) { Node child = unary(); result = node(Kind.NEGATIVE, "", start, child.endOffset, child); }
			else result = postfix();
			depth--;
			return result;
		}
		private Node postfix() {
			Node result = atom();
			bool superscript = false, factorial = false;
			while (true) {
				if (take("^")) {
					if (superscript) throw error("repeated superscript requires grouping");
					Node exponent = script();
					result = binary(Kind.POWER, result, exponent); superscript = true; factorial = false;
				} else if (take("!")) {
					if (factorial) throw error("double factorial is outside the supported subset");
					result = node(Kind.FACTORIAL, "", result.startOffset, position, result); factorial = true;
				} else if (take("\\%")) { result = node(Kind.PERCENT, "", result.startOffset, position, result); factorial = false; }
				else return result;
			}
		}
		private Node script() {
			argumentSpace();
			if (position == source.Length) throw error("missing superscript");
			if (source[position] == '{') return group("{", "}", false);
			int start = position;
			if (digit(source[position])) { position++; return node(Kind.NUMBER, source.Substring(start, (position) - (start)), start, position); }
			if (symbol(source[position])) { position++; return node(Kind.SYMBOL, source.Substring(start, (position) - (start)), start, position); }
			throw error("superscript requires braces or one letter/digit");
		}
		private Node group(String open, String close, bool scalable) {
			space(); int start = position;
			need(open);
			Node inner = sum();
			if (scalable) needCommand("right");
			need(close);
			return node(inner.kind, inner.text, inner.symbolStyle, start, position, new List<Node>(inner.children).ToArray());
		}
		private String quotedName() {
			argumentSpace();
			if (position == source.Length || source[position] != '{')
				throw error("expected a braced symbol name");
			need("{");
			StringBuilder name = new StringBuilder();
			bool first = true, unicodeName = false;
			while (position < source.Length && source[position] != '}') {
				bool escapedUnderscore = startsWith(source, "\\_", position);
				char c = escapedUnderscore ? '_' : source[position];
				if (first && unicodeSymbol(c)) unicodeName = true;
				else if (unicodeName || !(asciiLetter(c) || escapedUnderscore || !first && digit(c)))
					throw error("unsupported symbol spelling");
				name.Append(c); position += escapedUnderscore ? 2 : 1;
				first = false;
			}
			if (first) throw error("empty symbol name");
			need("}"); return name.ToString();
		}
		private Node fontSymbol(SymbolStyle style, int start) {
			argumentSpace();
			String name;
			if (position < source.Length && source[position] == '{') name = quotedName();
			else if (position < source.Length && symbol(source[position])) {
				int symbolStart = position; position++; name = source.Substring(symbolStart, (position) - (symbolStart));
			}
			else if (startsWith(source, "\\_", position)) { position += 2; name = "_"; }
			else throw error("font command requires a symbol name");
			return node(Kind.SYMBOL, name, style, start, position);
		}
		private Node atom() {
			space();
			if (position == source.Length) throw error("expected an operand");
			int start = position;
			char c = source[position];
			if (c == '(') return group("(", ")", false);
			if (c == '{') return group("{", "}", false);
			if (digit(c) || c == '.') {
				bool digits = false;
				while (position < source.Length && digit(source[position])) { position++; digits = true; }
				if (position < source.Length && source[position] == '.') {
					position++; while (position < source.Length && digit(source[position])) { position++; digits = true; }
				}
				if (!digits) throw error("expected decimal digits");
				return node(Kind.NUMBER, source.Substring(start, (position) - (start)), start, position);
			}
			if (symbol(c)) {
				position++;
				return node(Kind.SYMBOL, source.Substring(start, (position) - (start)), start, position);
			}
			if (command("frac")) {
				Node top = argumentGroup(), bottom = argumentGroup();
				return node(Kind.DIVIDE, "", start, position, top, bottom);
			}
			if (command("left")) {
				if (take("(")) {
					Node inner = sum(); needCommand("right"); need(")");
					return node(inner.kind, inner.text, inner.symbolStyle, start, position, new List<Node>(inner.children).ToArray());
				}
				needCommand("lfloor"); Node floorInner = sum(); needCommand("right"); needCommand("rfloor");
				return node(Kind.FLOOR, "", start, position, floorInner);
			}
			if (command("lfloor")) {
				Node inner = sum(); needCommand("rfloor"); return node(Kind.FLOOR, "", start, position, inner);
			}
			if (command("mathit")) return fontSymbol(SymbolStyle.ITALIC, start);
			if (command("mathrm")) return fontSymbol(SymbolStyle.UPRIGHT, start);
			if (command("operatorname")) {
				String name = quotedName();
				if (!name.Equals("rem")) throw error("unsupported named operator");
				bool scalable = command("left"); need("(");
				Node left = sum(); need(","); Node right = sum();
				if (scalable) needCommand("right");
				need(")"); return node(Kind.REMAINDER, "", start, position, left, right);
			}
			throw error("unknown command or unsupported operand");
		}
	}

	private static bool startsWith(String source, String token, int offset) {
		return offset <= source.Length && source.Length - offset >= token.Length
			&& String.CompareOrdinal(source, offset, token, 0, token.Length) == 0;
	}
}

}
