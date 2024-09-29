/*
 * @(#)StringUtils.hpp        6.1.0    2024-09-08
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_STRINGUTILS_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_STRINGUTILS_H
#include <type_traits>
#include <utility>

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"

#include "org/mariuszgromada/math/mxparser/wrapper/StringBuilder.hpp"
#include "org/mariuszgromada/math/mxparser/StringInvariant.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Double.hpp"

namespace org::mariuszgromada::math::mxparser::stringutils {
	using namespace org::mariuszgromada::math::mxparser::wrapper;

	class API_VISIBLE StringUtils {
	public:
		StringUtils() = delete;

		// ***********************************************************

		static bool regexMatch(const String &str, const String &pattern);
		static bool regexMatch(const StringPtr &str, const StringPtr &pattern);

		// ***********************************************************

		static StringPtr numberToHexString(int number);
		static StringPtr numberToHexString(Long number);
		static StringPtr numberToHexString(double number);
		static StringPtr hexString2AsciiString(const StringPtr &hexString);
		static StringPtr numberToAsciiString(int number);
		static StringPtr numberToAsciiString(Long number);
		static StringPtr numberToAsciiString(double number);

		// ***********************************************************

		static int countOccurrences(const StringPtr &str, const StringPtr &toFind);
		static int countOccurrences(const String &str, const String &toFind) { return countOccurrences(S(str), S(toFind)); }
		static int countOccurrences(const std::string &str, const std::string &toFind) { return countOccurrences(S(str), S(toFind)); }
		static int countOccurrences(const Char* str, const Char* toFind) { return countOccurrences(S(str), S(toFind)); }
		static int countOccurrences(const char* str, const char* toFind) { return countOccurrences(S(str), S(toFind)); }

		// ***********************************************************

		static int countLines(const StringPtr &text);

		// ***********************************************************

		static bool contains(const String &bigString, const String &subString);
		static bool contains(const std::string &bigString, const std::string &subString) { return contains(SC(bigString), SC(subString)); }
		static bool contains(const String &bigString, const StringPtr &subString) { return contains(bigString, *subString); }
		static bool contains(const StringPtr &bigString, const String &subString) { return contains(*bigString, subString); }
		static bool contains(const StringPtr &bigString, const StringPtr &subString) { return contains(*bigString, *subString); }
		static bool contains(const StringPtr &bigString, const std::string &subString) { return contains(*bigString, SC(subString)); }
		static bool contains(const StringPtr &bigString, const char* subString) { return contains(*bigString, SC(subString)); }

		// ***********************************************************

		static bool startsWith(const String &bigString, const String &prefix);
		static bool startsWith(const String &bigString, const StringPtr &prefix) { return startsWith(bigString, *prefix); }
		static bool startsWith(const StringPtr &bigString, const String &prefix) { return startsWith(*bigString, prefix); }
		static bool startsWith(const StringPtr &bigString, const StringPtr &prefix) { return startsWith(*bigString, *prefix); }

		// ***********************************************************

		static String toLowerCase(const String &str);
		static StringPtr toLowerCase(const StringPtr &str) { return S(toLowerCase(*str)); }

		// ***********************************************************

		static String replace(const String &bigString, const String &smallStringCurrent, const String &smallStringNew);
		static String replace(const String &bigString, const StringPtr &smallStringCurrent, const StringPtr &smallStringNew) { return replace(bigString, *smallStringCurrent, *smallStringNew); }
		static StringPtr replace(const StringPtr &bigString, const String &smallStringCurrent, const String &smallStringNew) { return S(replace(*bigString, smallStringCurrent, smallStringNew)); }
		static StringPtr replace(const StringPtr &bigString, const StringPtr &smallStringCurrent, const String &smallStringNew) { return S(replace(*bigString, *smallStringCurrent, smallStringNew)); }
		static StringPtr replace(const StringPtr &bigString, const String &smallStringCurrent, const StringPtr &smallStringNew) { return S(replace(*bigString, smallStringCurrent, *smallStringNew)); }
		static StringPtr replace(const StringPtr &bigString, const StringPtr &smallStringCurrent, const StringPtr &smallStringNew) { return S(replace(*bigString, *smallStringCurrent, *smallStringNew)); }

		// ***********************************************************

		// package
		static StringPtr surroundBrackets(const StringPtr &str);
		static StringPtr surroundBracketsAddSpace(const StringPtr &str);
		static StringPtr surroundSquareBrackets(const StringPtr &str);
		static StringPtr surroundSquareBracketsAddSpace(const StringPtr &str);
		static StringPtr surroundApostrophe(const StringPtr &str);
		static StringPtr surroundApostropheAddSpace(const StringPtr &str);
		static StringPtr surroundQuote(const StringPtr &str);
		static StringPtr surroundQuoteAddSpace(const StringPtr &str);

		// ***********************************************************

		static StringPtr trimNotNull(const StringPtr &str);

		// ***********************************************************

		static StringPtr strOremptyIfNull(const StringPtr &str);

		// ***********************************************************

		static StringPtr stringConcatenateMaxLength(const StringPtr &str1, const StringPtr &str2, int maxLength);

		// ***********************************************************

		static bool isUnicodeName(Char c);
		static bool isNotSpecialChar(Char c);
		static bool is0To9Digit(Char c);
		static bool canBeSeparatingChar(Char c);
		static bool isBlankChar(Char c);
		static bool charIsLeftParenthesis(const StringPtr &str, int pos);

		// ***********************************************************

		static StringPtr repeatString(const StringPtr &str, int times);
		static StringPtr getLeftSpaces(const StringPtr &maxStr, const StringPtr &str);
		static StringPtr getRightSpaces(const StringPtr &maxStr, const StringPtr &str);

		// ***********************************************************

		static String lTrim(const String &str);
		static String rTrim(const String &str);
		static String trim(const String &str);
		static StringPtr lTrim(const StringPtr &str);
		static StringPtr rTrim(const StringPtr &str);
		static StringPtr trim(const StringPtr &str);

		// ***********************************************************

		static StringPtr toString(const String &str) { return S(str); }
		static StringPtr toString(const StringPtr &str) { return str; }
		static StringPtr toString(const std::string &val) { return S(val); }
		static StringPtr toString(const std::string *val) { return S(*val); }
		static StringPtr toString(const Char *val) { return S(val); }
		static StringPtr toString(const char *val) { return S(val); }
		static StringPtr toString(char val) { return S(std::string(1, val)); }
		static StringPtr toString(signed char val) { return S(std::string(1, val)); }
		static StringPtr toString(unsigned char val) { return S(std::string(1, CAST_CHAR(val))); }
		static StringPtr toString(short val) { return S(std::to_string(val)); }
		static StringPtr toString(unsigned short val) { return S(std::to_string(val)); }
		static StringPtr toString(int val) { return S(std::to_string(val)); }
		static StringPtr toString(unsigned int val) { return S(std::to_string(val)); }
		static StringPtr toString(long val) { return S(std::to_string(val)); }
		static StringPtr toString(unsigned long val) { return S(std::to_string(val)); }
		static StringPtr toString(long long val) { return S(std::to_string(val)); }
		static StringPtr toString(unsigned long long val) { return S(std::to_string(val)); }
		static StringPtr toString(float val) { return S(std::to_string(val)); }
		static StringPtr toString(double val) { return Double::toString(val); }
		static StringPtr toString(long double val) { return S(std::to_string(val)); }
		static StringPtr toString(bool val) { return S(std::to_string(val)); }
		static StringPtr toString(const std::any &obj);

		// ***********************************************************

		static void consolePrintln();
		static void consolePrint(const String &str);
		static void consolePrint(const StringPtr &str) { consolePrint(*str); }
		static void consolePrint(const std::string &val) { consolePrint(toString(val)); }
		static void consolePrint(const std::string *val) { consolePrint(toString(val)); }
		static void consolePrint(const Char *val) { consolePrint(toString(val)); }
		static void consolePrint(const char *val) { consolePrint(toString(val)); }
		static void consolePrint(char val) { consolePrint(toString(val)); }
		static void consolePrint(signed char val) { consolePrint(toString(val)); }
		static void consolePrint(unsigned char val) { consolePrint(toString(val)); }
		static void consolePrint(short val) { consolePrint(toString(val)); }
		static void consolePrint(unsigned short val) { consolePrint(toString(val)); }
		static void consolePrint(int val) { consolePrint(toString(val)); }
		static void consolePrint(unsigned int val) { consolePrint(toString(val)); }
		static void consolePrint(long val) { consolePrint(toString(val)); }
		static void consolePrint(unsigned long val) { consolePrint(toString(val)); }
		static void consolePrint(long long val) { consolePrint(toString(val)); }
		static void consolePrint(unsigned long long val) { consolePrint(toString(val)); }
		static void consolePrint(float val) { consolePrint(toString(val)); }
		static void consolePrint(double val) { consolePrint(toString(val)); }
		static void consolePrint(long double val) { consolePrint(toString(val)); }
		static void consolePrint(bool val) { consolePrint(toString(val)); }
		static void consolePrint(const std::any &obj) { consolePrint(toString(obj)); }

		// ***********************************************************

		static void consolePrintln(const String &str) {
			consolePrint(str);
			consolePrintln();
		}

		static void consolePrintln(const StringPtr &str) {
			consolePrint(str);
			consolePrintln();
		}

		static void consolePrintln(const std::string &val) { consolePrintln(toString(val)); }
		static void consolePrintln(const std::string *val) { consolePrintln(toString(val)); }
		static void consolePrintln(const Char *val) { consolePrintln(toString(val)); }
		static void consolePrintln(const char *val) { consolePrintln(toString(val)); }
		static void consolePrintln(char val) { consolePrintln(toString(val)); }
		static void consolePrintln(signed char val) { consolePrintln(toString(val)); }
		static void consolePrintln(unsigned char val) { consolePrintln(toString(val)); }
		static void consolePrintln(short val) { consolePrintln(toString(val)); }
		static void consolePrintln(unsigned short val) { consolePrintln(toString(val)); }
		static void consolePrintln(int val) { consolePrintln(toString(val)); }
		static void consolePrintln(unsigned int val) { consolePrintln(toString(val)); }
		static void consolePrintln(long val) { consolePrintln(toString(val)); }
		static void consolePrintln(unsigned long val) { consolePrintln(toString(val)); }
		static void consolePrintln(long long val) { consolePrintln(toString(val)); }
		static void consolePrintln(unsigned long long val) { consolePrintln(toString(val)); }
		static void consolePrintln(float val) { consolePrintln(toString(val)); }
		static void consolePrintln(double val) { consolePrintln(toString(val)); }
		static void consolePrintln(long double val) { consolePrintln(toString(val)); }
		static void consolePrintln(bool val) { consolePrintln(toString(val)); }
		static void consolePrintLn(const std::any &obj) { consolePrintln(toString(obj)); }

		// ***********************************************************

		static void errorPrint(const String &str);
		static void errorPrint(const StringPtr &str) { errorPrint(*str); }
		static void errorPrint(const std::string &val) { errorPrint(toString(val)); }
		static void errorPrint(const std::string *val) { errorPrint(toString(val)); }
		static void errorPrint(const Char *val) { errorPrint(toString(val)); }
		static void errorPrint(const char *val) { errorPrint(toString(val)); }
		static void errorPrint(char val) { errorPrint(toString(val)); }
		static void errorPrint(signed char val) { errorPrint(toString(val)); }
		static void errorPrint(unsigned char val) { errorPrint(toString(val)); }
		static void errorPrint(short val) { errorPrint(toString(val)); }
		static void errorPrint(unsigned short val) { errorPrint(toString(val)); }
		static void errorPrint(int val) { errorPrint(toString(val)); }
		static void errorPrint(unsigned int val) { errorPrint(toString(val)); }
		static void errorPrint(long val) { errorPrint(toString(val)); }
		static void errorPrint(unsigned long val) { errorPrint(toString(val)); }
		static void errorPrint(long long val) { errorPrint(toString(val)); }
		static void errorPrint(unsigned long long val) { errorPrint(toString(val)); }
		static void errorPrint(float val) { errorPrint(toString(val)); }
		static void errorPrint(double val) { errorPrint(toString(val)); }
		static void errorPrint(long double val) { errorPrint(toString(val)); }
		static void errorPrint(bool val) { errorPrint(toString(val)); }
		static void errorPrint(const std::any &obj) { errorPrint(toString(obj)); }

		// ***********************************************************

		static void errorPrintln();

		static void errorPrintln(const String &str) {
			errorPrint(str);
			errorPrintln();
		}

		static void errorPrintln(const StringPtr &str) {
			errorPrint(str);
			errorPrintln();
		}

		static void errorPrintln(const std::string &val) { errorPrintln(toString(val)); }
		static void errorPrintln(const std::string *val) { errorPrintln(toString(val)); }
		static void errorPrintln(const Char *val) { errorPrintln(toString(val)); }
		static void errorPrintln(const char *val) { errorPrintln(toString(val)); }
		static void errorPrintln(char val) { errorPrintln(toString(val)); }
		static void errorPrintln(signed char val) { errorPrintln(toString(val)); }
		static void errorPrintln(unsigned char val) { errorPrintln(toString(val)); }
		static void errorPrintln(short val) { errorPrintln(toString(val)); }
		static void errorPrintln(unsigned short val) { errorPrintln(toString(val)); }
		static void errorPrintln(int val) { errorPrintln(toString(val)); }
		static void errorPrintln(unsigned int val) { errorPrintln(toString(val)); }
		static void errorPrintln(long val) { errorPrintln(toString(val)); }
		static void errorPrintln(unsigned long val) { errorPrintln(toString(val)); }
		static void errorPrintln(long long val) { errorPrintln(toString(val)); }
		static void errorPrintln(unsigned long long val) { errorPrintln(toString(val)); }
		static void errorPrintln(float val) { errorPrintln(toString(val)); }
		static void errorPrintln(double val) { errorPrintln(toString(val)); }
		static void errorPrintln(long double val) { errorPrintln(toString(val)); }
		static void errorPrintln(bool val) { errorPrintln(toString(val)); }
		static void errorPrintln(const std::any &obj) { errorPrintln(toString(obj)); }

		// ***********************************************************

		static StringPtr cleanForHtml(const StringPtr &text);
		static StringPtr cleanForMarkdown(const StringPtr &text);
		static StringPtr cleanForJson(const StringPtr &text);

		// ***********************************************************

		template<typename... Strings>
		static void stringBuilderPartsAppend(const StringBuilderPtr &stringBuilder, Strings &&... partsToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(partsToAppend)...);
			stringBuilderPartsAppend(stringBuilder, vp.paramsString);
		}

		static void stringBuilderPartsAppend(const StringBuilderPtr &stringBuilder, const ListPtr<StringPtr> &partsToAppend);
		static void stringBuilderPartsAppend(const StringBuilderPtr &stringBuilder, ListPtr<StringPtr> &partsToAppend);

		template<typename... Strings>
		static void stringBuilderLinesAppend(const StringBuilderPtr &stringBuilder, Strings &&... linesToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(linesToAppend)...);
			stringBuilderLinesAppend(stringBuilder, vp.paramsString);
		}

		static void stringBuilderLinesAppend(const StringBuilderPtr &stringBuilder, const ListPtr<StringPtr> &linesToAppend);
		static void stringBuilderLinesAppend(const StringBuilderPtr &stringBuilder, ListPtr<StringPtr> &linesToAppend);
		static void stringBuilderPartsAppendDelimited(const StringPtr &partTagLeft, const StringPtr &partTagRight,
		                                              const StringPtr &delimiter, bool clearForHtml,
		                                              bool clearForMarkdown, bool clearForJson,
		                                              const StringBuilderPtr &stringBuilder,
		                                              const ListPtr<StringPtr> &partsToAppend);

		static void stringBuilderPartsAppendDelimited(const StringPtr &partTagLeft, const StringPtr &partTagRight,
		                                              const StringPtr &delimiter, bool clearForHtml,
		                                              bool clearForMarkdown, bool clearForJson,
		                                              const StringBuilderPtr &stringBuilder,
		                                              ListPtr<StringPtr> &partsToAppend);

		template<typename... Strings>
		static void stringBuilderPartsAppendDelimited(const StringPtr &partTagLeft, const StringPtr &partTagRight,
		                                              const StringPtr &delimiter, bool clearForHtml,
		                                              bool clearForMarkdown, bool clearForJson,
		                                              const StringBuilderPtr &stringBuilder,
		                                              Strings &&... partsToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(partsToAppend)...);
			stringBuilderPartsAppendDelimited(partTagLeft, partTagRight, delimiter, clearForHtml, clearForMarkdown,
			                                  clearForJson, stringBuilder, vp.paramsString);
		}

		template<typename... Strings>
		static void stringBuilderPartsAppendDelimited(const StringPtr &partQuote, const StringPtr &delimiter, const StringBuilderPtr &stringBuilder, Strings &&... partsToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(partsToAppend)...);
			stringBuilderPartsAppendDelimited(partQuote, partQuote, delimiter, false, false, false, stringBuilder,
			                                  vp.paramsString);
		}

		static void stringBuilderPartsAppendDelimitedRow(const StringPtr &partTagLeft, const StringPtr &partTagRight,
		                                                 const StringPtr &delimiter, const StringPtr &rowBeforeTag,
		                                                 const StringPtr &rowAfterTag, bool clearForHtml,
		                                                 bool clearForMarkdown, bool clearForJson,
		                                                 const StringBuilderPtr &stringBuilder,
		                                                 const ListPtr<StringPtr> &partsToAppend);

		static void stringBuilderPartsAppendDelimitedRow(const StringPtr &partTagLeft, const StringPtr &partTagRight,
		                                                 const StringPtr &delimiter, const StringPtr &rowBeforeTag,
		                                                 const StringPtr &rowAfterTag, bool clearForHtml,
		                                                 bool clearForMarkdown, bool clearForJson,
		                                                 const StringBuilderPtr &stringBuilder,
		                                                 ListPtr<StringPtr> &partsToAppend);

		template<typename... Strings>
		static void stringBuilderPartsAppendDelimitedRow(const StringPtr &partTagLeft, const StringPtr &partTagRight,
		                                                 const StringPtr &delimiter, const StringPtr &rowBeforeTag,
		                                                 const StringPtr &rowAfterTag, bool clearForHtml,
		                                                 bool clearForMarkdown, bool clearForJson,
		                                                 const StringBuilderPtr &stringBuilder,
		                                                 Strings &&... partsToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(partsToAppend)...);
			stringBuilderPartsAppendDelimitedRow(partTagLeft, partTagRight, delimiter, rowBeforeTag, rowAfterTag,
			                                     clearForHtml, clearForMarkdown, clearForJson, stringBuilder,
			                                     vp.paramsString);
		}

		template<typename... Strings>
		static void stringBuilderPartsAppendDelimitedRow(const StringPtr &partQuote, const StringPtr &delimiter,
		                                                 bool newLineBefore, bool clearForHtml, bool clearForMarkdown,
		                                                 bool clearForJson, const StringBuilderPtr &stringBuilder,
		                                                 Strings &&... partsToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(partsToAppend)...);
			stringBuilderPartsAppendDelimitedRow(partQuote, delimiter, newLineBefore, clearForHtml, clearForMarkdown,
			                                     clearForJson, stringBuilder, vp.paramsString);
		}

		static void stringBuilderPartsAppendDelimitedRow(const StringPtr &partQuote, const StringPtr &delimiter,
		                                                 bool newLineBefore, bool clearForHtml, bool clearForMarkdown,
		                                                 bool clearForJson, const StringBuilderPtr &stringBuilder,
		                                                 const ListPtr<StringPtr> &partsToAppend);

		static void stringBuilderPartsAppendDelimitedRow(const StringPtr &partQuote, const StringPtr &delimiter,
		                                                 bool newLineBefore, bool clearForHtml, bool clearForMarkdown,
		                                                 bool clearForJson, const StringBuilderPtr &stringBuilder,
		                                                 ListPtr<StringPtr> &partsToAppend);

		template<typename... Strings>
		static void stringBuilderPartsAppendDelimitedRow(const StringPtr &partQuote, const StringPtr &delimiter,
		                                                 bool newLineBefore, const StringBuilderPtr &stringBuilder,
		                                                 Strings &&... partsToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(partsToAppend)...);
			stringBuilderPartsAppendDelimitedRow(partQuote, delimiter, newLineBefore, false, false, false,
			                                     stringBuilder, vp.paramsString);
		}

		// ***********************************************************

		static StringPtr HTML_TD_START_TAG;
		static StringPtr HTML_TD_END_TAG;
		static StringPtr HTML_TH_START_TAG;
		static StringPtr HTML_TH_END_TAG;
		static StringPtr HTML_TR_START_TAG;
		static StringPtr HTML_TR_END_TAG;

		// ***********************************************************

		static StringPtr MARKDOWN_DELIMITER;
		static StringPtr MARKDOWN_ROW_BEFORE_TAG;
		static StringPtr MARKDOWN_ROW_AFTER_TAG;
		static StringPtr MARKDOWN_HEADER_TAG;

		// ***********************************************************

		static StringPtr JSON_ROW_INDENTATION_TAG;
		static StringPtr JSON_PART_INDENTATION_TAG;
		static StringPtr JSON_ROW_BEFORE_TAG;
		static StringPtr JSON_ROW_AFTER_TAG;
		static StringPtr JSON_PART_DELIMITER;

		// ***********************************************************

		template<typename... Strings>
		static void stringBuilderPartsAppendHtmlTableRow(const StringBuilderPtr &stringBuilder,
		                                                 Strings &&... partsToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(partsToAppend)...);
			stringBuilderPartsAppendDelimitedRow(
				HTML_TD_START_TAG
				, HTML_TD_END_TAG
				, StringInvariant::EMPTY
				, HTML_TR_START_TAG
				, HTML_TR_END_TAG
				, true
				, false
				, false
				, stringBuilder
				, vp.paramsString
			);
		}

		template<typename... Strings>
		static void stringBuilderPartsAppendHtmlTableHead(const StringBuilderPtr &stringBuilder,
		                                                  Strings &&... partsToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(partsToAppend)...);
			stringBuilderPartsAppendDelimitedRow(
				HTML_TH_START_TAG
				, HTML_TH_END_TAG
				, StringInvariant::EMPTY
				, HTML_TR_START_TAG
				, HTML_TR_END_TAG
				, true
				, false
				, false
				, stringBuilder
				, vp.paramsString);
		}

		template<typename... Strings>
		static void stringBuilderPartsAppendMarkdownTableRow(const StringBuilderPtr &stringBuilder,
		                                                     Strings &&... partsToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(partsToAppend)...);
			stringBuilderPartsAppendDelimitedRow(
				StringInvariant::EMPTY
				, StringInvariant::EMPTY
				, MARKDOWN_DELIMITER
				, MARKDOWN_ROW_BEFORE_TAG
				, MARKDOWN_ROW_AFTER_TAG
				, false
				, true
				, false
				, stringBuilder
				, vp.paramsString
			);
		}

		template<typename... Strings>
		static void stringBuilderPartsAppendMarkdownTableHead(bool addHeader, const StringBuilderPtr &stringBuilder,
		                                                      Strings &&... partsToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(partsToAppend)...);

			if (!addHeader) {
				ListPtr<StringPtr> mdTableEmptyHeader = new_List<StringPtr>();
				for (const StringPtr& part : *vp.paramsString)
					mdTableEmptyHeader->add(S("   "));

				stringBuilderPartsAppendDelimitedRow(
					StringInvariant::EMPTY
					, StringInvariant::EMPTY
					, MARKDOWN_DELIMITER
					, MARKDOWN_ROW_BEFORE_TAG
					, MARKDOWN_ROW_AFTER_TAG
					, false
					, false
					, false
					, stringBuilder
					, mdTableEmptyHeader
				);
			} else
				stringBuilderPartsAppendDelimitedRow(
					StringInvariant::EMPTY
					, StringInvariant::EMPTY
					, MARKDOWN_DELIMITER
					, MARKDOWN_ROW_BEFORE_TAG
					, MARKDOWN_ROW_AFTER_TAG
					, false
					, true
					, false
					, stringBuilder
					, vp.paramsString
				);

			ListPtr<StringPtr> mdTableStructure = new_List<StringPtr>();
			for (const StringPtr& part : *vp.paramsString)
				mdTableStructure->add(MARKDOWN_HEADER_TAG);

			stringBuilderPartsAppendDelimitedRow(
				StringInvariant::EMPTY
				, StringInvariant::EMPTY
				, MARKDOWN_DELIMITER
				, MARKDOWN_ROW_BEFORE_TAG
				, MARKDOWN_ROW_AFTER_TAG
				, false
				, false
				, false
				, stringBuilder
				, mdTableStructure
			);
		}

		template<typename... Strings>
		static void stringBuilderPartsAppendJsonRow(const StringBuilderPtr &stringBuilder,
		                                            Strings &&... partsToAppend) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Strings>(partsToAppend)...);
			stringBuilderPartsAppendDelimitedRow(
				JSON_PART_INDENTATION_TAG
				, StringInvariant::EMPTY
				, JSON_PART_DELIMITER
				, JSON_ROW_BEFORE_TAG
				, JSON_ROW_AFTER_TAG
				, false
				, false
				, true
				, stringBuilder
				, vp.paramsString
			);
		}

		static bool endsWith(const String &str, const String &suffix);
		static bool endsWith(const String &str, const StringPtr &suffix);
		static bool endsWith(const StringPtr &str, const String &suffix);
		static bool endsWith(const StringPtr &str, const StringPtr &suffix);
		static StringPtr cleanNewLineAtTheEnd(const StringPtr &str);
		static StringPtr cleanNewLineAtTheEnd(const String &str) {
			return cleanNewLineAtTheEnd(S(str));
		}

	private:
		static bool isUnicodeOperator(Char c);

	public:
		STATIC_VARS_INITI_H;
	};

} // namespace org::mariuszgromada::math::mxparser::stringutils

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_STRINGUTILS_H
