/*
 * @(#)mXparser.hpp        6.1.0    2024-10-06
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_MXPARSER_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_MXPARSER_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/License.hpp"
#include "org/mariuszgromada/math/mxparser/StringModel.hpp"
#include "org/mariuszgromada/math/mxparser/StringUtils.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/StringBuilder.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.hpp"

namespace org::mariuszgromada::math::mxparser {

	class API_VISIBLE Expression;

	USING_FRIENDS_NAMESPACES;

	class API_VISIBLE mXparser {
		ADD_FRIENDS_OF(mXparser);

	public:
		mXparser() = delete;

		// ***********************************************************

		static constexpr int VERSION_MAJOR = MXPARSER_BUILD_PROJECT_VERSION_MAJOR;
		static constexpr int VERSION_MINOR = MXPARSER_BUILD_PROJECT_VERSION_MINOR;
		static constexpr int VERSION_PATCH = MXPARSER_BUILD_PROJECT_VERSION_PATCH;

		// ***********************************************************

		static StringPtr VERSION;
		static StringPtr VERSION_CODE_NAME;
		static StringPtr VERSION_NAME;

		// ***********************************************************

		/**
		 * Framework used to compile mXparser
		 */
		static StringPtr BUIT_FOR;

		// ***********************************************************

		/**
		 * Prime numbers cache
		 */
		static PrimesCachePtr primesCache;
		static constexpr int PRIMES_CACHE_NOT_INITIALIZED = -1;
		static void initPrimesCache();
		static void initPrimesCache(int mximumNumberInCache);
		static void initPrimesCache(const PrimesCachePtr &primesCache);
		static bool isInitPrimesCacheSuccessful();
		static void setNoPrimesCache();
		static int getMaxNumInPrimesCache();

		// ***********************************************************

		static int getThreadsNumber();
		static void setDefaultThreadsNumber();
		static void setThreadsNumber(int threadsNumber);

		// ***********************************************************

		// @Deprecated
		static double getFunctionValue(const ExpressionPtr &f, const ArgumentPtr &x, double x0);
		static ArrayPtr<double> getFunctionValues(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta);

		// ***********************************************************

		static ArrayPtr<double> arrayList2double(const ListPtr<double> &numbers);
		// @Deprecated
		static void setRandomGenerator(const RandomPtr &randomGenerator);

		// ***********************************************************

		static void setExactComparison();
		static void setEpsilonComparison();
		static void setEpsilon(double epsilon);
		static void setDefaultEpsilon();
		static double getEpsilon();
		static bool checkIfEpsilonMode();
		static bool checkIfExactMode();

		// ***********************************************************

		static void enableUlpRounding();
		static void disableUlpRounding();
		static void setUlpRounding(bool ulpRoundingState);
		static bool checkIfUlpRounding();

		// ***********************************************************

		static void enableCanonicalRounding();
		static void disableCanonicalRounding();
		static void setCanonicalRounding(bool canonicalRoundingState);
		static bool checkIfCanonicalRounding();

		// ***********************************************************

		static void enableAlmostIntRounding();
		static void disableAlmostIntRounding();
		static void setAlmostIntRounding(bool almostIntRoundingState);
		static bool checkIfAlmostIntRounding();

		// ***********************************************************

		static void enableSpecialCases();
		static void disableSpecialCases();
		static void setSpecialCases(bool specialCasesState);
		static bool checkIfSpecialCases();

		// ***********************************************************

		static void setMaxAllowedRecursionDepth(int maxAllowedRecursionDepth);
		static int getMaxAllowedRecursionDepth();

		// ***********************************************************

		static void setRadiansMode();
		static void setDegreesMode();
		static bool checkIfRadiansMode();
		static bool checkIfDegreesMode();

		// ***********************************************************

		static void enableImpliedMultiplicationMode();
		static void disableImpliedMultiplicationMode();
		static bool checkIfImpliedMultiplicationMode();

		// ***********************************************************

		static void enableUnicodeBuiltinKeyWordsMode();
		static void disableUnicodeBuiltinKeyWordsMode();
		static bool checkIfUnicodeBuiltinKeyWordsMode();

		// ***********************************************************

		static void enableAttemptToFixExpStrMode();
		static void disableAttemptToFixExpStrMode();
		static bool checkIfAttemptToFixExpStrMode();

		// ***********************************************************

		static void enableSelectBestMatchingLanguage();
		static void disableSelectBestMatchingLanguage();
		static bool checkIfSelectBestMatchingLanguage();

		// ***********************************************************

		static void changeLanguageTo(const StringPtr &language);
		static void changeLanguageTo(const String &language) { changeLanguageTo(S(language)); }
		static void changeLanguageTo(const char *locale) { changeLanguageTo(S(locale)); }
		static void changeLanguageToBestMatching();

		// ***********************************************************

		static void setToFractionInitSearchSize(Long n);
		static Long getToFractionInitSearchSize();

		// ***********************************************************

		template<typename... Strings>
		static void removeBuiltinTokens(Strings &&... tokens) {
			VariadicProcessorString vp;
			vp.processArgs(FORWARD_STRING(tokens)...);
			removeBuiltinTokens(vp.paramsString);
		}

		static void removeBuiltinTokens(const ListPtr<StringPtr> &tokens);

		static void removeBuiltinTokens(ListPtr<StringPtr> &tokens) {
			removeBuiltinTokens(CONST_LIST_STRING(tokens));
		}

		// ***********************************************************

		template<typename... Strings>
		static void unremoveBuiltinTokens(Strings &&... tokens) {
			VariadicProcessorString vp;
			vp.processArgs(FORWARD_STRING(tokens)...);
			unremoveBuiltinTokens(vp.paramsString);
		}
		static void unremoveBuiltinTokens(const ListPtr<StringPtr> &tokens);
		static void unremoveBuiltinTokens(ListPtr<StringPtr> &tokens) { unremoveBuiltinTokens(CONST_LIST_STRING(tokens)); }
		static void unremoveAllBuiltinTokens();
		static ArrayPtr<StringPtr> getBuiltinTokensToRemove();

		// ***********************************************************

		static void modifyBuiltinToken(const StringPtr &currentToken, const StringPtr &newToken);
		static void modifyBuiltinToken(const String &currentToken, const String &newToken) { modifyBuiltinToken(S(currentToken), S(newToken)); }
		static void modifyBuiltinToken(const std::string &currentToken, const std::string &newToken) { modifyBuiltinToken(S(currentToken), S(newToken)); }
		static void modifyBuiltinToken(const Char* currentToken, const Char* newToken) { modifyBuiltinToken(S(currentToken), S(newToken)); }
		static void modifyBuiltinToken(const char* currentToken, const char* newToken) { modifyBuiltinToken(S(currentToken), S(newToken)); }
		static void modifyBuiltinToken(const StringPtr &currentToken, const StringPtr &newToken, const StringPtr &newTokenDescription);
		static void modifyBuiltinToken(const String &currentToken, const String &newToken, const String &newTokenDescription) { modifyBuiltinToken(S(currentToken), S(newToken), S(newTokenDescription)); }
		static void modifyBuiltinToken(const std::string &currentToken, const std::string &newToken, const std::string &newTokenDescription) { modifyBuiltinToken(S(currentToken), S(newToken), S(newTokenDescription)); }
		static void modifyBuiltinToken(const Char* currentToken, const Char* newToken, const Char* newTokenDescription) { modifyBuiltinToken(S(currentToken), S(newToken), S(newTokenDescription)); }
		static void modifyBuiltinToken(const char* currentToken, const char* newToken, const char* newTokenDescription) { modifyBuiltinToken(S(currentToken), S(newToken), S(newTokenDescription)); }

		// ***********************************************************

		template<typename... Strings>
		static void unmodifyBuiltinTokens(Strings &&... currentOrNewTokens) {
			VariadicProcessorString vp;
			vp.processArgs(FORWARD_STRING(currentOrNewTokens)...);
			unmodifyBuiltinTokens(vp.paramsString);
		}
		static void unmodifyBuiltinTokens(const ListPtr<StringPtr> &currentOrNewTokens);
		static void unmodifyBuiltinTokens(ListPtr<StringPtr> &currentOrNewTokens) { unmodifyBuiltinTokens(CONST_LIST_STRING(currentOrNewTokens)); }

		// ***********************************************************

		static void unmodifyAllBuiltinTokens();

		// ***********************************************************

		static ArrayPtr<StringPtr> getBuiltinTokensToModify();

		// ***********************************************************

		static void setToOverrideBuiltinTokens();
		static void setNotToOverrideBuiltinTokens();
		static bool checkIfsetToOverrideBuiltinTokens();

		// ***********************************************************

		static void setDefaultOptions();

		// ***********************************************************

		// @Deprecated
		static StringPtr getTokenTypeDescription(int tokenTypeId);
		// @Deprecated
		static StringPtr numberToHexString(int number);
		// @Deprecated
		static StringPtr numberToHexString(Long number);
		// @Deprecated
		static StringPtr numberToHexString(double number);
		// @Deprecated
		static StringPtr hexString2AsciiString(const StringPtr &hexString);
		// @Deprecated
		static StringPtr numberToAsciiString(int number);
		// @Deprecated
		static StringPtr numberToAsciiString(Long number);
		// @Deprecated
		static StringPtr numberToAsciiString(double number);

		// ***********************************************************

		static double convOthBase2Decimal(const StringPtr &numberLiteral, int numeralSystemBase);
		static double convOthBase2Decimal(const StringPtr &numberLiteral);

		template<typename... Integers>
		static double convOthBase2Decimal(int numeralSystemBase, Integers &&... digits) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Integers>(digits)...);
			ListPtr<int> digitsInt = std::make_shared<List<int> >();;
			for (double d : *vp.paramsDouble)
				digitsInt->add(CAST_INT(d));

			return convOthBase2Decimal(numeralSystemBase, digitsInt);
		}
		static double convOthBase2Decimal(int numeralSystemBase, const ListPtr<int> &digits);
		static double convOthBase2Decimal(int numeralSystemBase, ListPtr<int> &digits) { return convOthBase2Decimal(numeralSystemBase, CONST_LIST_INT(digits)); }

		template<typename... Integers>
		static double convOthBase2Decimal(double numeralSystemBase, Integers &&... digits) {
			VariadicProcessorString vp;
			vp.processArgs(std::forward<Integers>(digits)...);
			return convOthBase2Decimal(numeralSystemBase, vp.paramsDouble);
		}

		static double convOthBase2Decimal(double numeralSystemBase, const ListPtr<double> &digits);
		static double convOthBase2Decimal(double numeralSystemBase, ListPtr<double> &digits) { return convOthBase2Decimal(numeralSystemBase, CONST_LIST_DOUBLE(digits)); }

		// ***********************************************************

		static StringPtr convDecimal2OthBase(double decimalNumber, int numeralSystemBase);
		static StringPtr convDecimal2OthBase(double decimalNumber, int numeralSystemBase, int format);

		// ***********************************************************

		static ArrayPtr<double> toFraction(double value);
		static ArrayPtr<double> toMixedFraction(double value);
		static StringPtr fractionToString(const ArrayPtr<double> &fraction);
		static StringPtr toFractionString(double value);
		static StringPtr toMixedFractionString(double value);

		// ***********************************************************

		/**
		 * Prints object.toString to the Console
		 *
		 * @param obj    Object to print
		 */

		// ***********************************************************

		template<typename T>
		static void consolePrint(const T &obj) {
			StringPtr str = StringUtils::toString(obj);
			consolePrintStr(str);
		}

		template<typename T>
		static void consolePrint(T &obj) {
			consolePrint(static_cast<const T &>(obj));
		}

		// ***********************************************************


		/**
		 * Prints object.toString to the Console + new line
		 *
		 * @param obj    Object to print
		 */
		template<typename T>
		static void consolePrintln(const T &obj) {
			StringPtr str = StringUtils::toString(obj);
			consolePrintlnStr(str);
		}

		template<typename T>
		static void consolePrintln(T &obj) {
			consolePrintln(static_cast<const T &>(obj));
		}

		static void consolePrintln();
		static void consolePrintln(const ArrayPtr<StringPtr> &stringArray);
		static void consolePrintln(const ListPtr<StringPtr> &stringList);
		static void consolePrintSettings(const StringPtr &prefix);
		static void consolePrintSettings(const String &prefix) { consolePrintSettings(S(prefix)); }
		static void consolePrintSettings(const std::string &prefix) { consolePrintSettings(SC(prefix)); }
		static void consolePrintSettings(const Char* prefix) { consolePrintSettings(SC(prefix)); }
		static void consolePrintSettings(const char* prefix) { consolePrintSettings(SC(prefix)); }

		// ***********************************************************

		static void consolePrintSettings();
		static void resetConsoleOutput();
		static void setDefaultConsolePrefix();
		static void setDefaultConsoleOutputPrefix();

		// ***********************************************************

		static void setConsolePrefix(const StringPtr &consolePrefix);
		static void setConsolePrefix(const String &consolePrefix) { setConsolePrefix(S(consolePrefix)); }
		static void setConsolePrefix(const std::string &consolePrefix) { setConsolePrefix(SC(consolePrefix)); }
		static void setConsolePrefix(const Char* consolePrefix) { setConsolePrefix(SC(consolePrefix)); }
		static void setConsolePrefix(const char* consolePrefix) { setConsolePrefix(SC(consolePrefix)); }

		// ***********************************************************

		static void setConsoleOutputPrefix(const StringPtr &consoleOutputPrefix);
		static void setConsoleOutputPrefix(const String &consoleOutputPrefix) { setConsoleOutputPrefix(S(consoleOutputPrefix)); }
		static void setConsoleOutputPrefix(const std::string &consoleOutputPrefix) { setConsoleOutputPrefix(SC(consoleOutputPrefix)); }
		static void setConsoleOutputPrefix(const Char* consoleOutputPrefix) { setConsoleOutputPrefix(SC(consoleOutputPrefix)); }
		static void setConsoleOutputPrefix(const char* consoleOutputPrefix) { setConsoleOutputPrefix(SC(consoleOutputPrefix)); }

		// ***********************************************************

		static StringPtr getConsoleOutput();

		// ***********************************************************

		static StringPtr getHelp();
		static StringPtr getHelp(const StringPtr &query);
		static StringPtr getHelp(const String &query) { return getHelp(S(query)); }
		static StringPtr getHelp(const Char *query) { return getHelp(S(query)); }
		static StringPtr getHelp(const std::string &query) { return getHelp(S(query)); }
		static StringPtr getHelp(const char * &query) { return getHelp(S(query)); }
		static StringPtr getHelp(bool addHeader, bool addCaption, const StringPtr &caption);
		static StringPtr getHelp(bool addHeader, bool addCaption, const String &caption) { return getHelp(addHeader, addCaption, S(caption)); }
		static StringPtr getHelp(bool addHeader, bool addCaption, const Char *caption) { return getHelp(addHeader, addCaption, S(caption)); }
		static StringPtr getHelp(bool addHeader, bool addCaption, const std::string &caption) { return getHelp(addHeader, addCaption, S(caption)); }
		static StringPtr getHelp(bool addHeader, bool addCaption, const char *caption) { return getHelp(addHeader, addCaption, S(caption)); }
		static StringPtr getHelp(const StringPtr &query, bool addHeader, bool addCaption, const StringPtr &caption);
		static StringPtr getHelp(const String &query, bool addHeader, bool addCaption, const String &caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		static StringPtr getHelp(const Char *query, bool addHeader, bool addCaption, const Char *caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		static StringPtr getHelp(const std::string &query, bool addHeader, bool addCaption, const std::string &caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		static StringPtr getHelp(const char *query, bool addHeader, bool addCaption, const char *caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }

		// ***********************************************************

		static StringPtr getHelpAsCsv();
		static StringPtr getHelpAsCsv(const StringPtr &query);
		static StringPtr getHelpAsCsv(const String &query) { return getHelpAsCsv(S(query)); }
		static StringPtr getHelpAsCsv(const Char *query) { return getHelpAsCsv(S(query)); }
		static StringPtr getHelpAsCsv(const std::string &query) { return getHelpAsCsv(S(query)); }
		static StringPtr getHelpAsCsv(const char *query) { return getHelpAsCsv(S(query)); }
		static StringPtr getHelpAsCsv(const StringPtr &quote, const StringPtr &delimiter, bool addHeader);
		static StringPtr getHelpAsCsv(const String &quote, const String &delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		static StringPtr getHelpAsCsv(const Char *quote, const Char *delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		static StringPtr getHelpAsCsv(const std::string &quote, const std::string &delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		static StringPtr getHelpAsCsv(const char *quote, const char * &delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		static StringPtr getHelpAsCsv(const StringPtr &query, const StringPtr &quote, const StringPtr &delimiter, bool addHeader);
		static StringPtr getHelpAsCsv(const String &query, const String &quote, const String &delimiter, bool addHeader) {
			return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader);
		}
		static StringPtr getHelpAsCsv(const Char *query, const Char *quote, const Char *delimiter, bool addHeader) {
			return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader);
		}
		static StringPtr getHelpAsCsv(const std::string &query, const std::string &quote, const std::string &delimiter, bool addHeader) {
			return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader);
		}
		static StringPtr getHelpAsCsv(const char *query, const char *quote, const char *delimiter, bool addHeader) {
			return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader);
		}

		// ***********************************************************

		static StringPtr getHelpAsHtmlTable();
		static StringPtr getHelpAsHtmlTable(const StringPtr &query);
		static StringPtr getHelpAsHtmlTable(const String &query) { return getHelpAsHtmlTable(S(query)); }
		static StringPtr getHelpAsHtmlTable(const Char *query) { return getHelpAsHtmlTable(S(query)); }
		static StringPtr getHelpAsHtmlTable(const std::string &query) { return getHelpAsHtmlTable(S(query)); }
		static StringPtr getHelpAsHtmlTable(const char *query) { return getHelpAsHtmlTable(S(query)); }
		static StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const StringPtr &caption, const StringPtr &cssClass);
		static StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const String &caption, const String &cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		static StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const Char *caption, const Char *cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		static StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const std::string &caption, const std::string &cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		static StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const char *caption, const char *cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		static StringPtr getHelpAsHtmlTable(const StringPtr &query, bool addHeader, bool addCaption, bool addFigure, const StringPtr &caption, const StringPtr &cssClass);
		static StringPtr getHelpAsHtmlTable(const String &query, bool addHeader, bool addCaption, bool addFigure, const String &caption, const String &cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		static StringPtr getHelpAsHtmlTable(const Char *query, bool addHeader, bool addCaption, bool addFigure, const Char *caption, const Char *cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		static StringPtr getHelpAsHtmlTable(const std::string &query, bool addHeader, bool addCaption, bool addFigure, const std::string &caption, const std::string &cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		static StringPtr getHelpAsHtmlTable(const char *query, bool addHeader, bool addCaption, bool addFigure, const char *caption, const char *cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}

		// ***********************************************************

		static StringPtr getHelpAsMarkdownTable();
		static StringPtr getHelpAsMarkdownTable(const StringPtr &query);
		static StringPtr getHelpAsMarkdownTable(const String &query) { return getHelpAsMarkdownTable(S(query)); }
		static StringPtr getHelpAsMarkdownTable(const Char *query) { return getHelpAsMarkdownTable(S(query)); }
		static StringPtr getHelpAsMarkdownTable(const std::string &query) { return getHelpAsMarkdownTable(S(query)); }
		static StringPtr getHelpAsMarkdownTable(const char * &query) { return getHelpAsMarkdownTable(S(query)); }
		static StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const StringPtr &caption);
		static StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const String &caption) {
			return getHelpAsMarkdownTable(addHeader, addCaption, S(caption));
		}
		static StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const Char *caption) {
			return getHelpAsMarkdownTable(addHeader, addCaption, S(caption));
		}
		static StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const std::string &caption) {
			return getHelpAsMarkdownTable(addHeader, addCaption, S(caption));
		}
		static StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const char *caption) {
			return getHelpAsMarkdownTable(addHeader, addCaption, S(caption));
		}
		static StringPtr getHelpAsMarkdownTable(const StringPtr &query, bool addHeader, bool addCaption, const StringPtr &caption);
		static StringPtr getHelpAsMarkdownTable(const String &query, bool addHeader, bool addCaption, const String &caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		static StringPtr getHelpAsMarkdownTable(const Char *query, bool addHeader, bool addCaption, const Char *caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		static StringPtr getHelpAsMarkdownTable(const std::string &query, bool addHeader, bool addCaption, const std::string &caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		static StringPtr getHelpAsMarkdownTable(const char *query, bool addHeader, bool addCaption, const char *caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}

		// ***********************************************************

		static StringPtr getHelpAsJson();
		static StringPtr getHelpAsJson(const StringPtr &query);
		static StringPtr getHelpAsJson(const String &query) { return getHelpAsJson(S(query)); }
		static StringPtr getHelpAsJson(const Char *query) { return getHelpAsJson(S(query)); }
		static StringPtr getHelpAsJson(const std::string &query) { return getHelpAsJson(S(query)); }
		static StringPtr getHelpAsJson(const char *query) { return getHelpAsJson(S(query)); }
		static StringPtr getHelpAsJson(bool addCaption, const StringPtr &caption);
		static StringPtr getHelpAsJson(bool addCaption, const String &caption) { return getHelpAsJson(addCaption, S(caption)); }
		static StringPtr getHelpAsJson(bool addCaption, const Char *caption) { return getHelpAsJson(addCaption, S(caption)); }
		static StringPtr getHelpAsJson(bool addCaption, const std::string &caption) { return getHelpAsJson(addCaption, S(caption)); }
		static StringPtr getHelpAsJson(bool addCaption, const char *caption) { return getHelpAsJson(addCaption, S(caption)); }
		static StringPtr getHelpAsJson(const StringPtr &query, bool addCaption, const StringPtr &caption);
		static StringPtr getHelpAsJson(const String &query, bool addCaption, const String &caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		static StringPtr getHelpAsJson(const Char *query, bool addCaption, const Char *caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		static StringPtr getHelpAsJson(const std::string &query, bool addCaption, const std::string &caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		static StringPtr getHelpAsJson(const char *query, bool addCaption, const char *caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }

		// ***********************************************************

		static void consolePrintHelp();
		static void consolePrintHelp(const StringPtr &query);
		static void consolePrintHelp(const std::string &query) { consolePrintHelp(S(query)); }
		static void consolePrintHelp(const std::string *query) { consolePrintHelp(S(*query)); }
		static void consolePrintHelp(const Char *query) { consolePrintHelp(S(query)); }
		static void consolePrintHelp(const char *query) { consolePrintHelp(S(query)); }

		// ***********************************************************

		static ListPtr<KeyWordPtr> getKeyWords();
		static ListPtr<KeyWordPtr> getKeyWords(const StringPtr &query);
		static ListPtr<KeyWordPtr> getKeyWords(const String &query) { return getKeyWords(S(query)); }
		static ListPtr<KeyWordPtr> getKeyWords(const Char *query) { return getKeyWords(S(query)); }
		static ListPtr<KeyWordPtr> getKeyWords(const std::string &query) { return getKeyWords(S(query)); }
		static ListPtr<KeyWordPtr> getKeyWords(const char * &query) { return getKeyWords(S(query)); }

		// ***********************************************************

		// @Deprecated
		static bool regexMatch(const StringPtr &str, const StringPtr &pattern);
		static bool regexMatch(const String &str, const String &pattern) { return regexMatch(S(str), S(pattern)); }
		static bool regexMatch(const Char *str, const Char *pattern) { return regexMatch(S(str), S(pattern)); }
		static bool regexMatch(const std::string &str, const std::string &pattern) { return regexMatch(S(str), S(pattern)); }
		static bool regexMatch(const char * &str, const char * &pattern) { return regexMatch(S(str), S(pattern)); }

		// ***********************************************************

		static void consolePrintTokens(const ListPtr<TokenPtr> &tokens);
		static void consolePrint(const ListPtr<TokenPtr> &tokens);
		static void consolePrintln(const ListPtr<TokenPtr> &tokens);

		// ***********************************************************

		/**
		 * The terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT.
		 */
		static StringPtr LICENSE;
		static void consolePrintLicense();
		static StringPtr getLicense();

		// ***********************************************************

		static void wait(int timeMillis);
		static void cancelCurrentCalculation();
		static void resetCancelCurrentCalculationFlag();
		static bool isCurrentCalculationCancelled();

		// ***********************************************************

		/*
		 * mXparser version names
		 */
		static StringPtr NAMEv10;
		static StringPtr NAMEv20;
		static StringPtr NAMEv23;
		static StringPtr NAMEv24;
		static StringPtr NAMEv30;
		static StringPtr NAMEv40;
		static StringPtr NAMEv41;
		static StringPtr NAMEv42;
		static StringPtr NAMEv43;
		static StringPtr NAMEv44;
		static StringPtr NAMEv50;
		static StringPtr NAMEv51;
		static StringPtr NAMEv52;
		static StringPtr NAMEv60;

	private:
		/**
		 * Console output string  for below methods
		 *
		 * @see #consolePrintln(Object)
		 * @see #consolePrint(Object)
		 */
		static StringBuilderPtr CONSOLE_OUTPUT;
		static StringPtr CONSOLE_PREFIX;
		static StringPtr CONSOLE_OUTPUT_PREFIX;
		static int CONSOLE_ROW_NUMBER;
		/**
		 * Threads number settings
		 */
		static int THREADS_NUMBER;

		static void initConsoleOutput();

		// package:
		/**
		 * FOUND / NOT_FOUND
		 * used for matching purposes
		 */
		static constexpr int NOT_FOUND = -1;
		static constexpr int FOUND = 0;

		/**
		 * Double floating-point precision arithmetic causes
		 *
		 * mXparser provides intelligent ULP rounding to avoid some
		 * type of this errors.
		 */
		static bool ulpRounding;
		/**
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is different than 0.3
		 *
		 * mXparser provides intelligent canonical rounding to avoid majority
		 * of this errors.
		 *
		 */
		static bool canonicalRounding;
		/**
		 * Indicator marking whether to round final result
		 * to precise integer when result is very close
		 * to integer, solves problems like
		 * sin(pi) = 0
		 */
		static bool almostIntRounding;
		static constexpr int DEFAULT_MAX_RECURSION_CALLS = 200;
		/**
		 * Internal limit for counter to avoid infinite loops while calculating
		 * expression defined in the way shown by below examples
		 *
		 * Argument x = new_Argument("x = 2*y");
		 * Argument y = new_Argument("y = 2*x");
		 * x->addDefinitions(y);
		 * y->addDefinitions(x);
		 *
		 * Function f = new_Function("f(x) = 2*g(x)");
		 * Function g = new_Function("g(x) = 2*f(x)");
		 * f->addDefinitions(g);
		 * g->addDefinitions(f);
		 */
		static int MAX_RECURSION_CALLS;
		/**
		 * The maximum error message length in expression
		 */
		static constexpr int ERROR_MESSAGE_MAXIMUM_LENGTH = 10000;
		/**
		 * The maximum number of expected tokens presented
		 * in error message when lexical error was encountered
		 */
		static constexpr int ERROR_MESSAGE_MAXIMUM_NUMBER_OF_EXPECTED_TOKENS = 5;
		/**
		 * List of built-in tokens to remove.
		 */
		static ListPtr<StringPtr> tokensToRemove;
		/**
		 * List of built-in tokens to modify
		 */
		static ListPtr<TokenModificationPtr> tokensToModify;;
		/**
		 * Indicator whether mXparser operates in radians / degrees mode
		 * true - degrees mode
		 * false - radians mode
		 *
		 * Default false (radians mode)
		 */
		static bool degreesMode;
		/**
		 * Indicator whether user defined tokens should override
		 * built-in tokens.
		 */
		static bool overrideBuiltinTokens;
		/**
		 * Implied multiplication mode
		 */
		static bool impliedMultiplicationMode;
		/**
		 * Internal indicator informing hte parser
		 * that unicode know keywords are enabled
		 * and will be recognized by the parser
		 * as built-in functions or operators
		 */
		static bool unicodeKeyWordsEnabled;
		/**
		 * Internal indicator informing the parser
		 * whether to try to fix the expression String.
		 * For example, situations such as:
		 * "++" change to "+",
		 * "+-" changed to "-"
		 * "-+" changed to "-"
		 * "--" changed to "-"
		 */
		static bool attemptToFixExpStrEnabled;;
		/**
		 * Options changeset
		 */
		static int optionsChangesetNumber;
		/**
		 * Indicator whether to call cancel current calculation
		 */
		static bool cancelCurrentCalculationFlag;
		/**
		 * Indicator whether to select best matching language to OS locale
		 */
		static bool selectBestMatchingLanguage;
		/**
		 * Empty expression for general help purposes.
		 */
		static ExpressionPtr HELP_EXPRESSION;

		static void refreshHelp();

		static void consolePrintStr(const StringPtr &str);
		static void consolePrintlnStr(const StringPtr &str);

	public:
		inline static ListPtr<PrimitiveElementPtr> testListPrimitiveElementPtr = nullptr;
		inline static ListPtr<CalcStepRecordPtr> testListCalcStepRecordPtr = nullptr;


		STATIC_VARS_INITI_H;

	};
} // namespace org::mariuszgromada::math::mxparser

#define mXparser_consolePrintln(PARAMS) mXparser::consolePrintln(StringInvariant::EMPTY+PARAMS+StringInvariant::EMPTY)
#define mXparser_consolePrint(PARAMS) mXparser::consolePrint(StringInvariant::EMPTY+PARAMS+StringInvariant::EMPTY)

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_MXPARSER_H