/*
 * @(#)Miscellaneous.hpp        6.1.0    2024-10-06
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

#ifndef TESTS_MISCELLANEOUS_H
#define TESTS_MISCELLANEOUS_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/ArgumentExtension.hpp"
#include "org/mariuszgromada/math/mxparser/Expression.hpp"
#include "org/mariuszgromada/math/mxparser/FunctionExtension.hpp"
#include "org/mariuszgromada/math/mxparser/FunctionExtensionVariadic.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.hpp"
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Double.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Math.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/SystemUtils.hpp"
#include <cstdlib>
#include <memory>
#include <string>

using namespace org::mariuszgromada::math::mxparser;


/**
* Common tools for unit tests
*/
class TestCommonTools {
private:
	static inline Long apiTestsStartTimeMs = 0;
	static inline Long expressionTestsStartTimeMs = 0;
	static inline Long syntaxTestsStartTimeMs = 0;
	static inline Long performanceTestsStartTimeMs = 0;

public:
	TestCommonTools() = delete;


	static bool startTestsApi() {
		apiTestsStartTimeMs = SystemUtils::currentTimeMillis();
		return startTests("API");
	}

	static bool finalizeTestsApi() {
		return finalizeTests(apiTestsStartTimeMs, "API");
	}


	static bool startTestsExpression() {
		expressionTestsStartTimeMs = SystemUtils::currentTimeMillis();
		return startTests("Expression");
	}
	static bool finalizeTestsExpression() {
		return finalizeTests(expressionTestsStartTimeMs, "Expression");
	}

	static bool startTestsSyntax() {
		syntaxTestsStartTimeMs = SystemUtils::currentTimeMillis();
		return startTests("Syntax");
	}
	static bool finalizeTestsSyntax() {
		return finalizeTests(syntaxTestsStartTimeMs, "Syntax");
	}

	static bool startTestsPerformance() {
		performanceTestsStartTimeMs = SystemUtils::currentTimeMillis();
		return startTests("Performance");
	}
	static bool finalizeTestsPerformance() {
		return finalizeTests(performanceTestsStartTimeMs, "Performance");
	}

	static bool startTests(const std::string &testsType) {
		mXparser::consolePrintln("\n=================================================");
		mXparser::consolePrintln("Starting tests: " + testsType);
		SystemUtils::consolePrintBuildConfig();
		mXparser::consolePrintln("\n=================================================");
		return true;
	}
	static bool finalizeTests(Long testsStartTimeMs, const std::string &testsType) {
		Long testsEndTimeMs = SystemUtils::currentTimeMillis();
		double testDuration = (testsEndTimeMs - testsStartTimeMs) / 1000.0;
		mXparser::consolePrintln("\n=================================================");
		mXparser::consolePrintln("Finalizing tests: " + testsType);
		mXparser::consolePrintln(S("Time: ") + testDuration);
		SystemUtils::consolePrintBuildConfig();
		mXparser::consolePrintln("\n=================================================");
		return true;
	}

	static void consolePrintOptionsMxparser(const StringPtr &prefix) {
		mXparser::consolePrintSettings(prefix);
	}

	static void consolePrintOptionsExpression(const ExpressionPtr &testExp) {
		mXparser::consolePrintln(S("------------ OPTIONS AFTER ------------"));
		mXparser::consolePrintln(S("getImpliedMultiplicationMode = ") + testExp->checkIfImpliedMultiplicationMode());
		mXparser::consolePrintln(S("getCanonicalExpressionString = ") + testExp->getCanonicalExpressionString());
		mXparser::consolePrintSettings();
		mXparser::consolePrintln(S("getErrorMessage = ") + testExp->getErrorMessage());
		mXparser::consolePrintln(S("checkLexSyntax = ") + testExp->checkLexSyntax());
		mXparser::consolePrintln(S("checkSyntax = ") + testExp->checkSyntax());
		mXparser::consolePrintln(S("getCopyOfInitialTokens = "));
		mXparser::consolePrintTokens(testExp->getCopyOfInitialTokens());
	}

	static void consolePrintTestStart(int testId, const string &testStr, const string &testType) {
		mXparser::consolePrintln();
		mXparser::consolePrintln(S("[") + testType + "/" + testId + "] ------------ TEST INIT: " + testStr);
		mXparser::consolePrintln(S("-- Options before"));
		consolePrintOptionsMxparser(S("---- "));
		mXparser::consolePrint(S("[") + testType + "/" + testId + "] Starting test: " + testStr + " ...... ");
	}

	static void consolePrintTestStart(int testId, const String &testStr, const string &testType) {
		mXparser::consolePrintln();
		mXparser::consolePrintln(S("[") + testType + "/" + testId + "] ------------ TEST INIT: " + testStr);
		mXparser::consolePrintln(S("-- Options before"));
		consolePrintOptionsMxparser(S("---- "));
		mXparser::consolePrint(S("[") + testType + "/" + testId + "] Starting test: " + testStr + " ...... ");
	}

	static void consolePrintTestExprStart(int testId, const string &testStr) {
		consolePrintTestStart(testId, testStr, "Expr");
	}

	static void consolePrintTestExprEnd(double calculatedValue, double expectedValue, bool testResult,
	                                    const ExpressionPtr &testExp) {
		mXparser::consolePrint(
			S("Test finished, calculated = ") + calculatedValue + " expected = " + expectedValue + " diff = " +
			MathFunctions::abs(calculatedValue - expectedValue) + " --> result ");
		if (testResult) {
			mXparser::consolePrintln(S("OK, time = ") + testExp->getComputingTime());
		} else {
			mXparser::consolePrintln(S("ERROR, time = ") + testExp->getComputingTime());
			consolePrintOptionsExpression(testExp);
		}
	}

	static void consolePrintTestSynEnd(bool receivedSyntax, bool expectedSyntax, bool testResult, const ExpressionPtr &testExp) {
		mXparser::consolePrint(
			S("Test finished, received = ") + receivedSyntax + " expected = " + expectedSyntax + " --> result ");
		if (testResult) {
			mXparser::consolePrintln(S("OK, time = ") + testExp->getComputingTime());
		} else {
			mXparser::consolePrintln(S("ERROR, time = ") + testExp->getComputingTime());
			consolePrintOptionsExpression(testExp);
		}
	}


	static void consolePrintTestApiEnd(bool testResult) {
		mXparser::consolePrint(S("Test finished, result = ") + testResult + " --> result ");
		if (testResult) {
			mXparser::consolePrintln(S("OK"));
		} else {
			mXparser::consolePrintln(S("ERROR"));
		}
	}


	static void consolePrintTestUnicodeEnd(bool testResult, const std::string& inStr, const std::string& outStr) {
		std::cout << "Test finished, result = \"" << outStr << "\" expected = \"" << inStr << "\" ";
		if (testResult) {
			std::cout << "OK\n";
		} else {
			std::cout << "ERROR\n";
		}
	}

	static void consolePrintTestUnicodeEnd(bool testResult, const String& inStr, const String& outStr) {
		std::wcout << L"Test finished, result = \"" << outStr << L"\" expected = \"" << inStr << L"\" ";
		if (testResult) {
			std::wcout << L"OK\n";
		} else {
			std::wcout << L"ERROR\n";
		}
	}

	static void consolePrintTestUnicodeStart(int testId, const std::string& testDescr) {
		consolePrintTestStart(testId, "\"" + testDescr + "\"", "Uncode/UTF8->UTF16->UTF8");
	}

	static void consolePrintTestUnicodeStart(int testId, const String& testDescr) {
		consolePrintTestStart(testId, L"L\"" + testDescr + L"\"", "Uncode/UTF16->UTF8->UTF16");
	}



	static void consolePrintTestSynStart(int testId, const string &testStr) {
		consolePrintTestStart(testId, testStr, "Syn");
	}

	static void consolePrintTestApiStart(int testId, const string &testDescr) {
		consolePrintTestStart(testId, testDescr, "API");
	}

	static void testExprSettingsInit() {
		mXparser::setEpsilonComparison();
		mXparser::setDefaultEpsilon();
		mXparser::enableUlpRounding();
		mXparser::enableCanonicalRounding();
		mXparser::enableImpliedMultiplicationMode();
		mXparser::enableUnicodeBuiltinKeyWordsMode();
		mXparser::setRadiansMode();
		mXparser::enableSpecialCases();
	}

	static void testSynSettingsInit() {
		mXparser::setDefaultOptions();
	}

	static void testApiSettingsInit() {
		mXparser::setDefaultOptions();
		mXparser::disableSelectBestMatchingLanguage();
	}

	static void testUnicodeSettingsInit() {
		mXparser::setDefaultOptions();
	}

};

#define START_TESTS_API bool apiTestsStarted = TestCommonTools::startTestsApi();
#define FINALIZE_TESTS_API bool apiTestsFinalized = TestCommonTools::finalizeTestsApi();

#define START_TESTS_EXPRESSION bool expressionTestsStarted = TestCommonTools::startTestsExpression();
#define FINALIZE_TESTS_EXPRESSION bool expressionTestsFinalized = TestCommonTools::finalizeTestsExpression();

#define START_TESTS_SYNTAX bool syntaxTestsStarted = TestCommonTools::startTestsSyntax();
#define FINALIZE_TESTS_SYNTAX bool syntaxTestsFinalized = TestCommonTools::finalizeTestsSyntax();

#define START_TESTS_PERFORMANCE bool performanceTestsStarted = TestCommonTools::startTestsPerformance();
#define FINALIZE_TESTS_PERFORMANCE bool performanceTestsFinalized = TestCommonTools::finalizeTestsPerformance();


/**
 * Example of implementation
 * ArgumentExtension interface
 * @see ArgumentExtension
 */
class PiMultArgExt : public ArgumentExtension {
private:
	int multiple = 0;
	SERIALIZE(91, (NVP(multiple)));

public:
	double getArgumentValue() override {
		multiple++;
		return  Math::PI * multiple;
	}
	ArgumentExtensionPtr clone() override {
		return std::make_shared<PiMultArgExt>();
	}
};

POLYMORPHIC_SERIALIZE(org::mariuszgromada::math::mxparser::ArgumentExtension, PiMultArgExt);

inline ArgumentExtensionPtr new_PiMultArgExt() {
	return std::make_shared<PiMultArgExt>();
}

class LongComputingArgExt : public ArgumentExtension {
public:
	double getArgumentValue() override {
		int j = 0;
		for (int i = 0; i < 1000000; i++)
			j += 1;
		return j;
	}
	ArgumentExtensionPtr clone() override {
		return std::make_shared<LongComputingArgExt>();
	}
private:
	SERIALIZE_EMPTY(92);
};

POLYMORPHIC_SERIALIZE(org::mariuszgromada::math::mxparser::ArgumentExtension, LongComputingArgExt);

inline ArgumentExtensionPtr new_LongComputingArgExt() {
	return std::make_shared<LongComputingArgExt>();
}

/**
 * Example of implementation
 * FunctionExtension interface
 * @see FunctionExtension
 */
class FunExt : public FunctionExtension {
private:
	double x;
	double y;
	SERIALIZE(93, (NVP(x), NVP(y)));

public:
	FunExt() {
		x = Double::NaN;
		y = Double::NaN;
	}
	FunExt(double x, double y) {
		this->x = x;
		this->y = y;
	}
	int getParametersNumber() override {
		return 2;
	}
	void setParameterValue(int parameterIndex, double parameterValue) override {
		if (parameterIndex == 0) x = parameterValue;
		if (parameterIndex == 1) y = parameterValue;
	}
	StringPtr getParameterName(int parameterIndex) override {
		if (parameterIndex == 0) return S("x");
		if (parameterIndex == 1) return S("y");
		return S("");
	}
	double calculate() override {
		return x*y;
	}
	FunctionExtensionPtr clone() override {
		return std::make_shared<FunExt>();
	}
};

POLYMORPHIC_SERIALIZE(org::mariuszgromada::math::mxparser::FunctionExtension, FunExt);

inline FunctionExtensionPtr new_FunExt() {
	return std::make_shared<FunExt>();
}

inline FunctionExtensionPtr new_FunExt(double x, double y) {
	return std::make_shared<FunExt>(x, y);
}


class LongComputingFunExt : public FunctionExtension {
private:
	double n;
	SERIALIZE(94, (NVP(n)));

public:
	LongComputingFunExt() {
		n = Double::NaN;
	}
	explicit LongComputingFunExt(double n) {
		this->n = n;
	}
	int getParametersNumber() override {
		return 1;
	}
	void setParameterValue(int parameterIndex, double parameterValue) override {
		if (parameterIndex == 0) n = parameterValue;
	}
	StringPtr getParameterName(int parameterIndex) override {
		if (parameterIndex == 0) return S("n");
		return S("");
	}
	double calculate() override {
		double sum = 0;
		for (int i = 1; i <= n; i++)
			sum += i;
		return sum;
	}
	FunctionExtensionPtr clone() override {
		return std::make_shared<LongComputingFunExt>();
	}
};

POLYMORPHIC_SERIALIZE(org::mariuszgromada::math::mxparser::FunctionExtension, LongComputingFunExt);

inline FunctionExtensionPtr new_LongComputingFunExt() {
	return std::make_shared<LongComputingFunExt>();
}

inline FunctionExtensionPtr new_LongComputingFunExt(double n) {
	return std::make_shared<LongComputingFunExt>(n);
}


/**
 * Example of implementation
 * FunctionExtensionVariadic interface
 * @see FunctionExtensionVariadic
 */
class FunExtVar : public FunctionExtensionVariadic {
public:
	double calculate(const ListPtr<double> &parameters) override {
		if (parameters == nullptr) return Double::NaN;
		if (parameters->size() == 0) return Double::NaN;
		double result = 0;
		for (double x : *parameters)
			result+=x;
		return result;
	}
	FunctionExtensionVariadicPtr clone() override {
		return std::make_shared<FunExtVar>();
	}
private:
	SERIALIZE_EMPTY(95);
};

POLYMORPHIC_SERIALIZE(org::mariuszgromada::math::mxparser::FunctionExtensionVariadic, FunExtVar);

inline FunctionExtensionVariadicPtr new_FunExtVar() {
	return std::make_shared<FunExtVar>();
}


class LongComputingFunExtVar : public FunctionExtensionVariadic {
public:
	double calculate(const ListPtr<double> &parameters) override {
		if (parameters == nullptr) return Double::NaN;
		if (parameters->size() == 0) return Double::NaN;
		double result = 0;
		for (int i = 1; i <= parameters->get(0); i++)
			result += i;
		return result;
	}
	FunctionExtensionVariadicPtr clone() override {
		return std::make_shared<LongComputingFunExtVar>();
	}
private:
	SERIALIZE_EMPTY(96);
};

POLYMORPHIC_SERIALIZE(org::mariuszgromada::math::mxparser::FunctionExtensionVariadic, LongComputingFunExtVar);

inline FunctionExtensionVariadicPtr new_LongComputingFunExtVar() {
	return std::make_shared<LongComputingFunExtVar>();
}

class LongTest {
public:
	ExpressionPtr e = new_Expression("sum(i, 1, 1000000000000, 0)");
	double v = 0;
	bool isAlive = false;
	void run() {
		isAlive = true;
		v = e->calculate();
		isAlive = false;
	}
};

using LongTestPtr = std::shared_ptr<LongTest>;

inline LongTestPtr new_LongTest() {
	return std::make_shared<LongTest>();
}


class TestStringResources : public StringResources {
public:
	TestStringResources()  {
		USER_LANGUAGE = S(UTF("Polish"));
		NUMBER_LITERAL = S(UTF("Literał liczbowy"));
		NUMBER = S(UTF("Liczba"));
		ALL_HELP_CONTENT = S(UTF("Pomoc"));
		KEYWORD = S(UTF("Słowo kluczowe"));
		TYPE = S(UTF("Typ"));
		SYNTAX = S(UTF("Składnia"));
		SINCE = S(UTF("Od"));
		DESCRIPTION = S(UTF("Opis"));
		OPERATOR_MULTIPLY = S(UTF("Mnożenie"));
	}
};

using TestStringResourcesPtr = std::shared_ptr<TestStringResources>;

inline TestStringResourcesPtr new_TestStringResources() {
	return std::make_shared<TestStringResources>();
}

inline std::string getTempDir() {
	const char* temp_dir = nullptr;
#if defined(_WIN32)
	size_t requiredSize;
	char buffer[1024];
	if (getenv_s(&requiredSize, buffer, sizeof(buffer), "TEMP") == 0 && requiredSize > 0) {
		temp_dir = buffer;
	} else if (getenv_s(&requiredSize, buffer, sizeof(buffer), "TMP") == 0 && requiredSize > 0) {
		temp_dir = buffer;
	}
#elif defined(__unix__) || defined(__APPLE__)
	temp_dir = getenv("TMPDIR");
	if (!temp_dir) temp_dir = "/tmp";
#endif
	return temp_dir ? std::string(temp_dir) : std::string();
}


#endif // TESTS_MISCELLANEOUS_H