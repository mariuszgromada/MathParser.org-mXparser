/*
 * @(#)StringUtils.cpp        6.1.0    2024-10-06
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

#include "org/mariuszgromada/math/mxparser/StringUtils.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/StringModel.hpp"
#include "org/mariuszgromada/math/mxparser/StringResources.hpp"
#include "org/mariuszgromada/math/mxparser/StringInvariant.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Integer.hpp"

#include <sstream>
#include <regex>
#include <string>

#include <cwctype>
#include <cstdio>
#include <cwchar>

namespace org::mariuszgromada::math::mxparser::stringutils {
	using namespace org::mariuszgromada::math::mxparser;
	using namespace org::mariuszgromada::math::mxparser::wrapper;

	API_VISIBLE StringPtr StringUtils::HTML_TD_START_TAG = nullptr;
	API_VISIBLE StringPtr StringUtils::HTML_TD_END_TAG = nullptr;
	API_VISIBLE StringPtr StringUtils::HTML_TH_START_TAG = nullptr;
	API_VISIBLE StringPtr StringUtils::HTML_TH_END_TAG = nullptr;
	API_VISIBLE StringPtr StringUtils::HTML_TR_START_TAG = nullptr;
	API_VISIBLE StringPtr StringUtils::HTML_TR_END_TAG = nullptr;

	API_VISIBLE StringPtr StringUtils::MARKDOWN_DELIMITER = nullptr;
	API_VISIBLE StringPtr StringUtils::MARKDOWN_ROW_BEFORE_TAG = nullptr;
	API_VISIBLE StringPtr StringUtils::MARKDOWN_ROW_AFTER_TAG = nullptr;
	API_VISIBLE StringPtr StringUtils::MARKDOWN_HEADER_TAG = nullptr;

	API_VISIBLE StringPtr StringUtils::JSON_ROW_INDENTATION_TAG = nullptr;
	API_VISIBLE StringPtr StringUtils::JSON_PART_INDENTATION_TAG = nullptr;
	API_VISIBLE StringPtr StringUtils::JSON_ROW_BEFORE_TAG = nullptr;
	API_VISIBLE StringPtr StringUtils::JSON_ROW_AFTER_TAG = nullptr;
	API_VISIBLE StringPtr StringUtils::JSON_PART_DELIMITER = nullptr;

	STATIC_VARS_INITI_CPP(StringUtils,
		STATIC_VARS_INITI_DEPENDENCY(StringInvariant);

		HTML_TD_START_TAG = S(UTF("<td>"));
		HTML_TD_END_TAG = S(UTF("</td>"));
		HTML_TH_START_TAG = S(UTF("<th>"));
		HTML_TH_END_TAG = S(UTF("</th>"));
		HTML_TR_START_TAG = S(UTF("<tr>"));
		HTML_TR_END_TAG = UTF("</tr>") + StringInvariant::NEW_LINE;

		MARKDOWN_DELIMITER = S(UTF("|"));
		MARKDOWN_ROW_BEFORE_TAG = S(UTF("|"));
		MARKDOWN_ROW_AFTER_TAG = UTF("|") + StringInvariant::NEW_LINE;
		MARKDOWN_HEADER_TAG = S(UTF("---"));

		JSON_ROW_INDENTATION_TAG = S(UTF("  "));
		JSON_PART_INDENTATION_TAG = JSON_ROW_INDENTATION_TAG + JSON_ROW_INDENTATION_TAG;
		JSON_ROW_BEFORE_TAG = StringInvariant::NEW_LINE + JSON_ROW_INDENTATION_TAG + StringInvariant::LEFT_CURLY_BRACKET + StringInvariant::NEW_LINE;
		JSON_ROW_AFTER_TAG = StringInvariant::NEW_LINE + JSON_ROW_INDENTATION_TAG + StringInvariant::RIGHT_CURLY_BRACKET;
		JSON_PART_DELIMITER = StringInvariant::COMMA + StringInvariant::NEW_LINE;
	);

	/**
	 * Function used to introduce some compatibility
	 * between JAVA and C# while regexp matching.
	 *
	 * @param str         String
	 * @param pattern     Pattern (regexp)
	 *
	 * @return            True if pattern matches entirely, False otherwise
	 */
	API_VISIBLE bool StringUtils::regexMatch(const String &str, const String &pattern) {
		std::wregex re(UTF("^(") + pattern + UTF(")$"));
		return std::regex_match(str, re);
	}
	API_VISIBLE bool StringUtils::regexMatch(const StringPtr &str, const StringPtr &pattern) {
		return regexMatch(*str, *pattern);
	}

	API_VISIBLE StringPtr StringUtils::surroundBrackets(const StringPtr &str) {
		return *StringInvariant::LEFT_BRACKET + str + StringInvariant::RIGHT_BRACKET;
	}

	API_VISIBLE StringPtr StringUtils::surroundBracketsAddSpace(const StringPtr &str) {
		return surroundBrackets(str) + StringInvariant::SPACE;
	}

	API_VISIBLE StringPtr StringUtils::surroundSquareBrackets(const StringPtr &str) {
		return StringInvariant::LEFT_SQUARE_BRACKET + str + StringInvariant::RIGHT_SQUARE_BRACKET;
	}

	API_VISIBLE StringPtr StringUtils::surroundSquareBracketsAddSpace(const StringPtr &str) {
		return surroundSquareBrackets(str) + StringInvariant::SPACE;
	}

	API_VISIBLE StringPtr StringUtils::surroundApostrophe(const StringPtr &str) {
		return StringInvariant::APOSTROPHE + str + StringInvariant::APOSTROPHE;
	}

	API_VISIBLE StringPtr StringUtils::surroundApostropheAddSpace(const StringPtr &str) {
		return surroundApostrophe(str) + StringInvariant::SPACE;
	}

	API_VISIBLE StringPtr StringUtils::surroundQuote(const StringPtr &str) {
		return StringInvariant::QUOTE + str + StringInvariant::QUOTE;
	}

	API_VISIBLE StringPtr StringUtils::surroundQuoteAddSpace(const StringPtr &str) {
		return surroundQuote(str) + StringInvariant::SPACE;
	}

	API_VISIBLE StringPtr StringUtils::trimNotNull(const StringPtr &str) {
		if (str) return trim(str);
		return StringInvariant::EMPTY;
	}

	API_VISIBLE StringPtr StringUtils::strOremptyIfNull(const StringPtr &str) {
		if (str) return str;
		return StringInvariant::EMPTY;
	}


	API_VISIBLE String StringUtils::lTrim(const String &str) {
		String result = str;
		result.erase(result.begin(), std::find_if(result.begin(), result.end(), [](Char ch) {
			return !std::iswspace(ch);
		}));
		return result;
	}

	API_VISIBLE String StringUtils::rTrim(const String &str) {
		String result = str;
		result.erase(std::find_if(result.rbegin(), result.rend(), [](Char ch) {
			return !std::iswspace(ch);
		}).base(), result.end());
		return result;
	}

	API_VISIBLE String StringUtils::trim(const String &str) {
		return lTrim(rTrim(str));
	}

	API_VISIBLE StringPtr StringUtils::lTrim(const StringPtr &str) {
		return S(lTrim(*str));
	}

	API_VISIBLE StringPtr StringUtils::rTrim(const StringPtr &str) {
		return S(rTrim(*str));
	}

	API_VISIBLE StringPtr StringUtils::trim(const StringPtr &str) {
		return S(lTrim(rTrim(*str)));
	}

	API_VISIBLE StringPtr StringUtils::stringConcatenateMaxLength(const StringPtr &str1, const StringPtr &str2, int maxLength) {
		if (str1->length() + str2->length() > maxLength) {
			if (contains(str1, StringModel::STRING_RESOURCES->MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED))
				return str1;
			return str1 + StringModel::STRING_RESOURCES->MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED + StringInvariant::NEW_LINE;
		}
		return str1 + str2;
	}

	API_VISIBLE bool StringUtils::isUnicodeName(Char c) {
		switch (c) {
			case UTF('α'):
			case UTF('β'):
			case UTF('γ'):
			case UTF('δ'):
			case UTF('ε'):
			case UTF('ζ'):
			case UTF('η'):
			case UTF('θ'):
			case UTF('ι'):
			case UTF('κ'):
			case UTF('λ'):
			case UTF('μ'):
			case UTF('ν'):
			case UTF('ξ'):
			case UTF('ο'):
			case UTF('π'):
			case UTF('ρ'):
			case UTF('ς'):
			case UTF('σ'):
			case UTF('τ'):
			case UTF('υ'):
			case UTF('φ'):
			case UTF('χ'):
			case UTF('ψ'):
			case UTF('ω'):
			case UTF('Α'):
			case UTF('Β'):
			case UTF('Γ'):
			case UTF('Δ'):
			case UTF('Ε'):
			case UTF('Ζ'):
			case UTF('Η'):
			case UTF('Θ'):
			case UTF('Ι'):
			case UTF('Κ'):
			case UTF('Λ'):
			case UTF('Μ'):
			case UTF('Ν'):
			case UTF('Ξ'):
			case UTF('Ο'):
			case UTF('Π'):
			case UTF('Ρ'):
			case UTF('Σ'):
			case UTF('Τ'):
			case UTF('Υ'):
			case UTF('Φ'):
			case UTF('Χ'):
			case UTF('Ψ'):
			case UTF('Ω'):
			case UTF('∑'):
			case UTF('∏'):
			case UTF('ℿ'):
			case UTF('∆'):
			case UTF('∇'):
			case UTF('∫'):
			case UTF('ℼ'):
			case UTF('ℇ'):
			case UTF('ⅇ'):
			case UTF('ℯ'):
			case UTF('∂'):
				return true;
			default: return false;
		}
	}

	API_VISIBLE bool StringUtils::isUnicodeOperator(Char c) {
		switch (c) {
			case UTF('∜'):
			case UTF('∛'):
			case UTF('√'):
			case UTF('⊻'):
			case UTF('⊽'):
			case UTF('⊼'):
			case UTF('⇔'):
			case UTF('⇍'):
			case UTF('⇏'):
			case UTF('⇐'):
			case UTF('⇒'):
			case UTF('¬'):
			case UTF('∧'):
			case UTF('∨'):
			case UTF('⋝'):
			case UTF('≥'):
			case UTF('⋜'):
			case UTF('≤'):
			case UTF('≠'):
			case UTF('÷'):
			case UTF('∙'):
			case UTF('⨉'):
			case UTF('×'):
				return true;
			default: return false;
		}
	}

	API_VISIBLE bool StringUtils::isNotSpecialChar(Char c) {
		switch (c) {
			case UTF('+'):
			case UTF('-'):
			case UTF('*'):
			case UTF('/'):
			case UTF('^'):
			case UTF(','):
			case UTF(';'):
			case UTF('('):
			case UTF(')'):
			case UTF('|'):
			case UTF('&'):
			case UTF('='):
			case UTF('>'):
			case UTF('<'):
			case UTF('~'):
			case UTF('\\'):
			case UTF('#'):
			case UTF('@'):
			case UTF(']'):
			case UTF('['):
			case UTF(':'):
				return false;
			default: return !isUnicodeOperator(c);
		}
	}

	API_VISIBLE bool StringUtils::is0To9Digit(Char c) {
		switch (c) {
			case UTF('0'):
			case UTF('1'):
			case UTF('2'):
			case UTF('3'):
			case UTF('4'):
			case UTF('5'):
			case UTF('6'):
			case UTF('7'):
			case UTF('8'):
			case UTF('9'):
				return true;
			default: return false;
		}
	}

	API_VISIBLE bool StringUtils::canBeSeparatingChar(Char c) {
		switch (c) {
			case UTF(' '):
			case UTF(','):
			case UTF(';'):
			case UTF('|'):
			case UTF('&'):
			case UTF('+'):
			case UTF('-'):
			case UTF('*'):
			case UTF('\\'):
			case UTF('/'):
			case UTF('('):
			case UTF(')'):
			case UTF('='):
			case UTF('>'):
			case UTF('<'):
			case UTF('~'):
			case UTF('^'):
			case UTF('#'):
			case UTF('%'):
			case UTF('@'):
			case UTF('!'):
			case UTF('['):
			case UTF(']'):
			case UTF(':'):
				return true;
			default: return isUnicodeOperator(c);
		}
	}

	API_VISIBLE bool StringUtils::isBlankChar(Char c) {
		switch (c) {
			case UTF(' '):
			case UTF('\n'):
			case UTF('\r'):
			case UTF('\t'):
			case UTF('\f'):
				return true;
			default: return false;
		}
	}

	API_VISIBLE bool StringUtils::charIsLeftParenthesis(const StringPtr &str, int pos) {
		size_t len = str->length();
		if (pos >= len) return false;
		return str->at(pos) == '(';
	}

	API_VISIBLE StringPtr StringUtils::repeatString(const StringPtr &str, int times) {
		StringBuilderPtr result = new_StringBuilder();
		for (int i = 0; i < times; i++)
			result->append(str);

		return result->toString();
	}

	/*
	 * Text adjusting.
	 */
	API_VISIBLE StringPtr StringUtils::getLeftSpaces(const StringPtr &maxStr, const StringPtr &str) {
		if (str->length() >= maxStr->length()) return str;
		return repeatString(StringInvariant::SPACE, Integer::castSizetToInt(maxStr->length() - str->length())) + str;
	}

	/*
	 * Text adjusting.
	 */
	API_VISIBLE StringPtr StringUtils::getRightSpaces(const StringPtr &maxStr, const StringPtr &str) {
		if (str->length() >= maxStr->length()) return str;
		return str + repeatString(StringInvariant::SPACE, Integer::castSizetToInt(maxStr->length() - str->length()));
	}

	API_VISIBLE StringPtr StringUtils::toString(const std::any &obj) {
		return S(UTF("Type not suppoert in toString"));
	}

	API_VISIBLE void StringUtils::consolePrintln() {
		std::wprintf(StringInvariant::NEW_LINE->c_str());
	}

	API_VISIBLE void StringUtils::consolePrint(const String &str) {
		std::wprintf(UTF("%ls"), str.c_str());
	}

	API_VISIBLE void StringUtils::errorPrintln() {
		std::fwprintf(stderr, StringInvariant::NEW_LINE->c_str());
	}

	API_VISIBLE void StringUtils::errorPrint(const String &str) {
		std::fwprintf(stderr, UTF("%ls"), str.c_str());
	}

	API_VISIBLE StringPtr StringUtils::cleanForHtml(const StringPtr &text) {
		StringPtr r1 = replace(text, UTF("&"), UTF("&amp;"));
		StringPtr r2 = replace(r1, UTF("<"), UTF("&lt;"));
		return replace(r2, UTF(">"), UTF("&gt;"));
	}

	API_VISIBLE StringPtr StringUtils::cleanForMarkdown(const StringPtr &text) {
		StringPtr r1 = replace(text, UTF("\\"), UTF("\\\\"));
		return replace(r1, UTF("|"), UTF("\\|"));
	}

	API_VISIBLE StringPtr StringUtils::cleanForJson(const StringPtr &text) {
		return replace(text, UTF("\\"), UTF("\\\\"));
	}

	API_VISIBLE bool StringUtils::endsWith(const String &str, const String &suffix) {
		if (suffix.empty() || str.empty() || suffix.size() > str.size()) return false;
		return std::equal(suffix.rbegin(), suffix.rend(), str.rbegin());
	}

	API_VISIBLE bool StringUtils::endsWith(const String &str, const StringPtr &suffix) {
		return endsWith(str, *suffix);
	}

	API_VISIBLE bool StringUtils::endsWith(const StringPtr &str, const String &suffix) {
		return endsWith(*str, suffix);
	}

	API_VISIBLE bool StringUtils::endsWith(const StringPtr &str, const StringPtr &suffix) {
		return endsWith(*str, *suffix);
	}

	API_VISIBLE StringPtr StringUtils::cleanNewLineAtTheEnd(const StringPtr &str) {
		size_t length = str->length();

		if (length == 0)
			return str;

		if (endsWith(str, StringInvariant::NEW_LINE))
			return S(str->substr(0, length - StringInvariant::NEW_LINE->length()));

		return str;
	}

	/**
	 * Converts integer number to hex StringPtr (plain text)
	 *
	 * @param number   Integer number
	 * @return         Hex StringPtr (i.e. FF23)
	 */
	API_VISIBLE StringPtr StringUtils::numberToHexString(int number) {
		STRINGSTREAM ss;
		ss << std::hex << number;
		return S(ss.str());
	}

	/**
	 * Converts long number to hex StringPtr (plain text)
	 *
	 * @param number   Long number
	 * @return         Hex StringPtr (i.e. FF23)
	 */
	API_VISIBLE StringPtr StringUtils::numberToHexString(Long number) {
		STRINGSTREAM ss;
		ss << std::hex << number;
		return S(ss.str());
	}

	/**
	 * Converts (long)double number to hex StringPtr (plain text)
	 *
	 * @param number   Double number
	 * @return         Hex StringPtr (i.e. FF23)
	 */
	API_VISIBLE StringPtr StringUtils::numberToHexString(double number) {
		return numberToHexString(CAST_LONG(number));
	}

	/**
	 * Converts hex StringPtr into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex string.
	 *
	 * @param hexString   Hex StringPtr (i.e. 48656C6C6F)
	 * @return         ASCII StringPtr (i.e. '48656C6C6F' = 'Hello')
	 */
	API_VISIBLE StringPtr StringUtils::hexString2AsciiString(const StringPtr &hexString) {
		StringPtr hexByteStr;
		int hexByteInt;
		StringPtr asciiString = StringInvariant::EMPTY;
		for (int i = 0; i < hexString->length(); i += 2) {
			hexByteStr = S(hexString->substr(i, 2));
			hexByteInt = Integer::parseInt(hexByteStr, 16);
			asciiString = asciiString + (UTF("") + SC(CAST_CHAR(hexByteInt)));
		}
		return asciiString;
	}

	/**
	 * Converts number into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex representation
	 * of the original number
	 *
	 * @param number   Integer number (i.e. 310939249775 = '48656C6C6F')
	 * @return         ASCII StringPtr (i.e. '48656C6C6F' = 'Hello')
	 */
	API_VISIBLE StringPtr StringUtils::numberToAsciiString(int number) {
		return hexString2AsciiString(numberToHexString(number));
	}

	/**
	 * Converts number into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex representation
	 * of the original number
	 *
	 * @param number   Long number (i.e. 310939249775 = '48656C6C6F')
	 * @return         ASCII StringPtr (i.e. '48656C6C6F' = 'Hello')
	 */
	API_VISIBLE StringPtr StringUtils::numberToAsciiString(Long number) {
		return hexString2AsciiString(numberToHexString(number));
	}

	/**
	 * Converts (long)double number into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex representation
	 * of the original number cast to long type.
	 *
	 * @param number   Double number (i.e. 310939249775 = '48656C6C6F')
	 * @return         ASCII StringPtr (i.e. '48656C6C6F' = 'Hello')
	 */
	API_VISIBLE StringPtr StringUtils::numberToAsciiString(double number) {
		return hexString2AsciiString(numberToHexString(number));
	}

	API_VISIBLE int StringUtils::countOccurrences(const StringPtr &str, const StringPtr &toFind) {
		if (str == nullptr || toFind == nullptr) return -1;
		size_t strLen = str->length();
		size_t toFindLen = toFind->length();
		if (strLen == 0 || toFindLen == 0 || toFindLen > strLen) return 0;
		size_t ccurrences = (strLen - replace(str, toFind, StringInvariant::EMPTY)->length()) / toFindLen;
		return Integer::castSizetToInt(ccurrences);
	}

	API_VISIBLE int StringUtils::countLines(const StringPtr &text) {
		if (text == nullptr) return -1;
		if (text->empty()) return 0;
		return countOccurrences(text, StringInvariant::NEW_LINE) + 1;
	}

	API_VISIBLE bool StringUtils::contains(const String &bigString, const String &subString) {
		return bigString.find(subString) != std::string::npos;
	}

	API_VISIBLE String StringUtils::toLowerCase(const String &str) {
		String lowerStr;
		lowerStr.resize(str.size());
		std::transform(str.begin(), str.end(), lowerStr.begin(), [](Char c) { return std::towlower(c); });
		return lowerStr;
	}

	API_VISIBLE String StringUtils::replace(const String &bigString, const String &smallStringCurrent,
	                            const String &smallStringNew) {
		if (smallStringCurrent.empty()) return bigString;
		String result = bigString;
		size_t start_pos = 0;
		while ((start_pos = result.find(smallStringCurrent, start_pos)) != String::npos) {
			result.replace(start_pos, smallStringCurrent.length(), smallStringNew);
			start_pos += smallStringNew.length();
		}
		return result;
	}

	API_VISIBLE bool StringUtils::startsWith(const String &bigString, const String &prefix) {
		return bigString.find(prefix) == 0;
	}

	API_VISIBLE void StringUtils::stringBuilderPartsAppend(const StringBuilderPtr &stringBuilder, const ListPtr<StringPtr> &partsToAppend) {
		for (const StringPtr& part : *partsToAppend) {
			stringBuilder->append(part);
		}
	}

	API_VISIBLE void StringUtils::stringBuilderPartsAppend(const StringBuilderPtr &stringBuilder, ListPtr<StringPtr> &partsToAppend) {
		stringBuilderPartsAppend(stringBuilder, CONST_LIST_STRING(partsToAppend));
	}

	API_VISIBLE void StringUtils::stringBuilderLinesAppend(const StringBuilderPtr &stringBuilder, const ListPtr<StringPtr> &linesToAppend) {
		for (const StringPtr& line : *linesToAppend) {
			stringBuilder->append(line);
			stringBuilder->append(StringInvariant::NEW_LINE);
		}
	}

	API_VISIBLE void StringUtils::stringBuilderLinesAppend(const StringBuilderPtr &stringBuilder, ListPtr<StringPtr> &linesToAppend) {
		stringBuilderLinesAppend(stringBuilder, CONST_LIST_STRING(linesToAppend));
	}

	API_VISIBLE void StringUtils::stringBuilderPartsAppendDelimited(const StringPtr &partTagLeft, const StringPtr &partTagRight,
	                                              const StringPtr &delimiter, bool clearForHtml,
	                                              bool clearForMarkdown, bool clearForJson,
	                                              const StringBuilderPtr &stringBuilder,
	                                              const ListPtr<StringPtr> &partsToAppend) {
		int n = 0;
		for (const StringPtr& part : *partsToAppend) {
			n++;
			if (n > 1) stringBuilder->append(delimiter);
			stringBuilder->append(partTagLeft);

			StringPtr partFinal = part;
			if (clearForHtml)
				partFinal = cleanForHtml(partFinal);
			if (clearForMarkdown)
				partFinal = cleanForMarkdown(partFinal);

			if (clearForJson)
				partFinal = cleanForJson(partFinal);

			stringBuilder->append(partFinal);
			stringBuilder->append(partTagRight);
		}
	}

	API_VISIBLE void StringUtils::stringBuilderPartsAppendDelimited(const StringPtr &partTagLeft, const StringPtr &partTagRight,
	                                              const StringPtr &delimiter, bool clearForHtml,
	                                              bool clearForMarkdown, bool clearForJson,
	                                              const StringBuilderPtr &stringBuilder,
	                                              ListPtr<StringPtr> &partsToAppend) {
		stringBuilderPartsAppendDelimited(partTagLeft, partTagRight, delimiter, clearForHtml, clearForMarkdown,
		                                  clearForJson, stringBuilder,
		                                  CONST_LIST_STRING(partsToAppend));
	}

	API_VISIBLE void StringUtils::stringBuilderPartsAppendDelimitedRow(const StringPtr &partTagLeft, const StringPtr &partTagRight,
													 const StringPtr &delimiter, const StringPtr &rowBeforeTag,
													 const StringPtr &rowAfterTag, bool clearForHtml,
													 bool clearForMarkdown, bool clearForJson,
													 const StringBuilderPtr &stringBuilder,
													 const ListPtr<StringPtr> &partsToAppend) {
		bool tagBefore = rowBeforeTag == nullptr || !rowBeforeTag->empty();
		bool tagAfter = rowAfterTag == nullptr || !rowAfterTag->empty();

		if (tagBefore) stringBuilder->append(rowBeforeTag);
		stringBuilderPartsAppendDelimited(partTagLeft, partTagRight, delimiter, clearForHtml, clearForMarkdown,
										  clearForJson, stringBuilder, partsToAppend);
		if (tagAfter) stringBuilder->append(rowAfterTag);
	}

	API_VISIBLE void StringUtils::stringBuilderPartsAppendDelimitedRow(const StringPtr &partTagLeft, const StringPtr &partTagRight,
													 const StringPtr &delimiter, const StringPtr &rowBeforeTag,
													 const StringPtr &rowAfterTag, bool clearForHtml,
													 bool clearForMarkdown, bool clearForJson,
													 const StringBuilderPtr &stringBuilder,
													 ListPtr<StringPtr> &partsToAppend) {
		stringBuilderPartsAppendDelimitedRow(partTagLeft, partTagRight, delimiter, rowBeforeTag, rowAfterTag,
											 clearForHtml, clearForMarkdown, clearForJson, stringBuilder,
											 CONST_LIST_STRING(partsToAppend));
	}

	API_VISIBLE void StringUtils::stringBuilderPartsAppendDelimitedRow(const StringPtr &partQuote, const StringPtr &delimiter,
													 bool newLineBefore, bool clearForHtml, bool clearForMarkdown,
													 bool clearForJson, const StringBuilderPtr &stringBuilder,
													 const ListPtr<StringPtr> &partsToAppend) {
		if (newLineBefore) {
			stringBuilderPartsAppendDelimitedRow(partQuote, partQuote, delimiter, StringInvariant::NEW_LINE,
												 StringInvariant::EMPTY, clearForHtml, clearForMarkdown,
												 clearForJson, stringBuilder, partsToAppend);
		} else {
			stringBuilderPartsAppendDelimitedRow(partQuote, partQuote, delimiter, StringInvariant::EMPTY,
												 StringInvariant::EMPTY, clearForHtml, clearForMarkdown,
												 clearForJson, stringBuilder, partsToAppend);
		}
	}

	API_VISIBLE void StringUtils::stringBuilderPartsAppendDelimitedRow(const StringPtr &partQuote, const StringPtr &delimiter,
													 bool newLineBefore, bool clearForHtml, bool clearForMarkdown,
													 bool clearForJson, const StringBuilderPtr &stringBuilder,
													 ListPtr<StringPtr> &partsToAppend) {
		stringBuilderPartsAppendDelimitedRow(partQuote, delimiter, newLineBefore, clearForHtml, clearForMarkdown,
											 clearForJson, stringBuilder,
											 CONST_LIST_STRING(partsToAppend));
	}

} // org::mariuszgromada::math::mxparser::stringutils