/*
 * @(#)ApiTestA.cpp        6.2.0    2026-11-11
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

#include <cstdint>
#include <cstring>
#include "Miscellaneous.hpp"
#include "org/mariuszgromada/math/mxparser.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxChecker.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerTokenManager.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/CharStream.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/Argument.hpp"
#include "org/mariuszgromada/math/mxparser/ArgumentExtension.hpp"
#include "org/mariuszgromada/math/mxparser/CalcStepRecord.hpp"
#include "org/mariuszgromada/math/mxparser/CalcStepRecord.hpp"
#include "org/mariuszgromada/math/mxparser/CalcStepsRegister.hpp"
#include "org/mariuszgromada/math/mxparser/Constant.hpp"
#include "org/mariuszgromada/math/mxparser/Expression.hpp"
#include "org/mariuszgromada/math/mxparser/Expression.hpp"
#include "org/mariuszgromada/math/mxparser/Function.hpp"
#include "org/mariuszgromada/math/mxparser/FunctionExtension.hpp"
#include "org/mariuszgromada/math/mxparser/FunctionExtensionVariadic.hpp"
#include "org/mariuszgromada/math/mxparser/License.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/BinaryRelations.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/BooleanAlgebra.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/MathConstants.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/NumberTheory.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/SpecialFunctions.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/SpecialValue.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/SpecialValueTrigonometric.hpp"
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/BinaryRelation.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/BitwiseOperator.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/BooleanOperator.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/CalculusOperator.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Function1Arg.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Function2Arg.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Function3Arg.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/FunctionVariadic.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Operator.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/RandomVariable.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Unit.hpp"
#include "org/mariuszgromada/math/mxparser/RecursiveArgument.hpp"
#include "org/mariuszgromada/math/mxparser/SerializationUtils.hpp"
#include "org/mariuszgromada/math/mxparser/StringModel.hpp"
#include "org/mariuszgromada/math/mxparser/StringResources.hpp"
#include "org/mariuszgromada/math/mxparser/StringUtils.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Double.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Math.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/PtrsMap.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/PtrsSet.hpp"
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers.hpp>
#include <catch2/internal/catch_assertion_handler.hpp>
#include <catch2/internal/catch_decomposer.hpp>
#include <catch2/internal/catch_preprocessor_internal_stringify.hpp>
#include <cereal/archives/binary.hpp>
#include <cereal/cereal.hpp>
#include <cereal/types/map.hpp>
#include <cereal/types/memory.hpp>
#include <cereal/types/memory.hpp>
#include <cereal/types/polymorphic.hpp>
#include <cereal/types/set.hpp>
#include <cereal/types/string.hpp>
#include <cereal/types/unordered_map.hpp>
#include <cereal/types/unordered_set.hpp>
#include <cereal/types/vector.hpp>
#include <cstdlib>
#include <filesystem>
#include <iostream>
#include <string>
#include <string>
#include <thread>
#include <stdexcept>
#include <functional>
#include <limits>
#include <cmath>

#include "ApiTestTools.hpp"

using namespace org::mariuszgromada::math::mxparser;
using namespace org::mariuszgromada::math::mxparser::mathcollection;
using namespace org::mariuszgromada::math::mxparser::parsertokens;
using namespace org::mariuszgromada::math::mxparser::wrapper;

TEST_CASE("testNativeConsolePreconditions") {
	const StringPtr nullText, savedNewLine = StringInvariant::NEW_LINE;
	struct RestoreConsole {
		StringPtr newLine;
		~RestoreConsole() {
			StringInvariant::NEW_LINE = newLine;
			mXparser::setDefaultConsolePrefix();
			mXparser::setDefaultConsoleOutputPrefix();
			mXparser::resetConsoleOutput();
		}
	} restore{savedNewLine};
	mXparser::setDefaultConsolePrefix();
	mXparser::setDefaultConsoleOutputPrefix();
	mXparser::resetConsoleOutput();
	CHECK_NOTHROW(StringUtils::consolePrint(S("native console before")));
	CHECK_NOTHROW(StringUtils::consolePrintln());
	CHECK_NOTHROW(StringUtils::errorPrint(S("native error before")));
	CHECK_NOTHROW(StringUtils::errorPrintln());
	CHECK_THROWS_AS(StringUtils::consolePrint(nullText), std::invalid_argument);
	CHECK_THROWS_WITH(StringUtils::consolePrint(nullText), "Native StringUtils.consolePrint requires non-null text");
	CHECK_THROWS_AS(StringUtils::errorPrint(nullText), std::invalid_argument);
	CHECK_THROWS_WITH(StringUtils::errorPrint(nullText), "Native StringUtils.errorPrint requires non-null text");
	CHECK_THROWS_AS(mXparser::consolePrintSettings(nullText), std::invalid_argument);
	CHECK_THROWS_WITH(mXparser::consolePrintSettings(nullText), "Native mXparser.consolePrintSettings requires non-null prefix");
	CHECK_NOTHROW(mXparser::consolePrintSettings(S("")));
	CHECK_NOTHROW(mXparser::setConsolePrefix(nullText));
	CHECK_NOTHROW(mXparser::resetConsoleOutput());
	CHECK_THROWS_AS(mXparser::consolePrintln(), std::invalid_argument);
	CHECK_NOTHROW(mXparser::setDefaultConsolePrefix());
	CHECK_NOTHROW(mXparser::consolePrintln(S("recovered live prefix")));
	CHECK(StringUtils::contains(mXparser::getConsoleOutput(), S("recovered live prefix")));
	CHECK_NOTHROW(mXparser::setConsoleOutputPrefix(nullText));
	CHECK_NOTHROW(mXparser::resetConsoleOutput());
	CHECK_THROWS_AS(mXparser::consolePrintln(S("null stored output prefix")), std::invalid_argument);
	CHECK_NOTHROW(mXparser::setDefaultConsoleOutputPrefix());
	CHECK_NOTHROW(mXparser::consolePrintln(S("recovered output prefix")));
	CHECK(StringUtils::contains(mXparser::getConsoleOutput(), S("recovered output prefix")));
	REQUIRE(savedNewLine != nullptr);
	StringInvariant::NEW_LINE = nullptr;
	CHECK_THROWS_AS(StringUtils::consolePrintln(), std::invalid_argument);
	CHECK_THROWS_WITH(StringUtils::consolePrintln(), "Native StringUtils.consolePrintln requires non-null NEW_LINE");
	CHECK_THROWS_AS(StringUtils::errorPrintln(), std::invalid_argument);
	CHECK_THROWS_WITH(StringUtils::errorPrintln(), "Native StringUtils.errorPrintln requires non-null NEW_LINE");
	CHECK_NOTHROW(StringUtils::consolePrint(S("stdout without newline")));
	CHECK_NOTHROW(StringUtils::errorPrint(S("stderr without newline")));
	CHECK_THROWS_AS(mXparser::consolePrintln(S("missing newline")), std::invalid_argument);
	StringInvariant::NEW_LINE = savedNewLine;
	CHECK(*StringInvariant::NEW_LINE == *savedNewLine);
	CHECK_NOTHROW(StringUtils::consolePrintln());
	CHECK_NOTHROW(StringUtils::errorPrintln());
	mXparser::resetConsoleOutput();
	CHECK_NOTHROW(mXparser::consolePrintln(S("complete recovery")));
	CHECK(StringUtils::contains(mXparser::getConsoleOutput(), S("complete recovery")));
	std::weak_ptr<Expression> expressionObserver;
	std::weak_ptr<Argument> argumentObserver;
	{
		const auto argument = new_Argument("nativeConsoleArgument", 2);
		const auto expression = new_Expression("nativeConsoleArgument+2", argument);
		argumentObserver = argument;
		expressionObserver = expression;
		expression->setVerboseMode();
		mXparser::setConsolePrefix(nullText);
		mXparser::resetConsoleOutput();
		// calculate() preserves its existing catch/register/NaN contract.
		CHECK(Double::isNaN(expression->calculate()));
		CHECK(StringUtils::contains(expression->getErrorMessage(),
		    S("Native StringUtils.consolePrint requires non-null text")));
		expression->setSilentMode();
		mXparser::setDefaultConsolePrefix();
		expression->setExpressionString(S("nativeConsoleArgument+2"));
		CHECK(expression->calculate() == 4);
		CHECK_FALSE(argumentObserver.expired());
	}
	CHECK(expressionObserver.expired());
	CHECK(argumentObserver.expired());
}

TEST_CASE("testNativePointerPreconditions") {
	mXparser::setDefaultOptions();
	const StringPtr nullText, text = S(" value "), empty = S(""), caption = S("guard caption");
	const auto builder = new_StringBuilder();
	builder->append(text);
	CHECK(*builder->toString() == *text);
	CHECK_THROWS_AS(builder->append(nullText), std::invalid_argument);
	CHECK(*builder->toString() == *text);
	CHECK(*StringUtils::trim(text) == UTF("value"));
	CHECK_THROWS_AS(StringUtils::trim(nullText), std::invalid_argument);
	CHECK(*StringUtils::surroundSquareBrackets(text) == UTF("[ value ]"));
	CHECK_THROWS_AS(StringUtils::surroundSquareBrackets(nullText), std::invalid_argument);

	const auto fresh = new_Expression("2+2");
	CHECK_THROWS_AS(fresh->showKeyWords(), std::invalid_argument);
	const auto keywords = fresh->getKeyWords();
	REQUIRE(keywords != nullptr);
	CHECK(keywords->size() > 0);
	CHECK_NOTHROW(fresh->showKeyWords());

	const StringPtr noMatch = S("key=___nativePointerNoMatch_9c40f638___"), matching = S("key=sin");
	CHECK(fresh->getHelpAsCsv(noMatch, nullText, nullText, false)->empty());
	CHECK_THROWS_AS(fresh->getHelpAsCsv(matching, nullText, nullText, false), std::invalid_argument);
	CHECK_THROWS_AS(fresh->getHelpAsCsv(noMatch, nullText, nullText, true), std::invalid_argument);
	CHECK_FALSE(fresh->getHelp(nullText, false, false, nullText)->empty());
	CHECK(fresh->getHelp(nullText, false, true, caption)->find(*caption) == 0);
	CHECK_THROWS_AS(fresh->getHelp(nullText), std::invalid_argument);
	CHECK_THROWS_AS(fresh->getHelpAsHtmlTable(nullText, false, false, false, nullText, nullText), std::invalid_argument);
	CHECK(fresh->getHelpAsHtmlTable(nullText, false, false, false, caption, nullText)->find(UTF("<table>")) == 0);
	CHECK_FALSE(fresh->getHelpAsMarkdownTable(nullText, false, false, nullText)->empty());
	CHECK_THROWS_AS(fresh->getHelpAsMarkdownTable(nullText), std::invalid_argument);
	CHECK_FALSE(fresh->getHelpAsJson(nullText, false, nullText)->empty());
	CHECK_THROWS_AS(fresh->getHelpAsJson(nullText), std::invalid_argument);

	const auto expression = new_Expression("2+2");
	CHECK(expression->calculate() == 4);
	expression->setDescription(nullText);
	CHECK(expression->getDescription() == nullptr);
	CHECK(expression->calculate() == 4);
	const auto steps = new_CalcStepsRegister();
	CHECK_THROWS_AS(expression->calculate(steps), std::invalid_argument);
	expression->clearDescription();
	// Existing invalidation resets native recursion/compilation state after a
	// failed calculation; the pointer guard does not invent rollback semantics.
	expression->setExpressionString(S("2+2"));
	CHECK(expression->calculate() == 4);
	expression->setExpressionString(nullText);
	CHECK(expression->getExpressionString() == nullptr);
	CHECK_THROWS_AS(expression->calculate(), std::invalid_argument);
	expression->setExpressionString(S("2+2"));
	CHECK(expression->calculate() == 4);

	struct NativePointerFailure final : ArgumentExtension {
		bool fail = false;
		double getArgumentValue() override {
			if (fail) throw std::runtime_error("native callback failure");
			return 2;
		}
		ArgumentExtensionPtr clone() override { return std::make_shared<NativePointerFailure>(*this); }
	};
	const auto implementation = std::make_shared<NativePointerFailure>();
	const ArgumentExtensionPtr extension = implementation;
	const StringPtr argumentName = S("nativeGuardArgument");
	const auto argument = new_Argument(argumentName, extension);
	const auto dependent = new_Expression("nativeGuardArgument+2", argument);
	CHECK(dependent->calculate() == 4);
	dependent->setDescription(nullText);
	implementation->fail = true;
	CHECK_THROWS_AS(dependent->calculate(), std::invalid_argument);
	implementation->fail = false;
	dependent->clearDescription();
	dependent->setExpressionString(S("nativeGuardArgument+2"));
	CHECK(dependent->calculate() == 4);
}


TEST_CASE("testApi0000", "[API]") {
	START_TESTS_API;
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Expression(), getExpressionString()";
	TestCommonTools::consolePrintTestApiStart(0, testDescr);
	ExpressionPtr e = new_Expression();
	if (*e->getExpressionString() == UTF("")
	    && e->getArgumentsNumber() == 0
	    && e->getConstantsNumber() == 0
	    && e->getFunctionsNumber() == 0)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0001", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "getExpressionString(), getArgumentsNumber()";
	TestCommonTools::consolePrintTestApiStart(1, testDescr);
	ArgumentPtr a5 = new_Argument("a5", 5);
	ArgumentPtr a4 = new_Argument("a4", 4);
	ArgumentPtr a3 = new_Argument("a3", 3);
	ArgumentPtr a2 = new_Argument("a2", 2);
	ArgumentPtr a1 = new_Argument("a1", 1);
	ExpressionPtr e = new_Expression("a1+c2", a1, a2, a3, a4, a5);
	if (*e->getExpressionString() == UTF("a1+c2")
	    && e->getArgumentsNumber() == 5
	    && e->getConstantsNumber() == 0
	    && e->getFunctionsNumber() == 0)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0002", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "getExpressionString(), getArgumentsNumber(), getFunctionsNumber()";
	TestCommonTools::consolePrintTestApiStart(2, testDescr);
	ArgumentPtr a5 = new_Argument("a5", 5);
	ArgumentPtr a4 = new_Argument("a4", 4);
	ArgumentPtr a3 = new_Argument("a3", 3);
	ArgumentPtr a2 = new_Argument("a2", 2);
	ArgumentPtr a1 = new_Argument("a1", 1);
	FunctionPtr f4 = new_Function("f4", "4", "x");
	FunctionPtr f3 = new_Function("f3", "3", "x");
	FunctionPtr f2 = new_Function("f2", "2", "x");
	FunctionPtr f1 = new_Function("f1", "1", "x");
	ExpressionPtr e = new_Expression("a1+c2", a1, f1, a2, f2, a3, a4, f3, a5, f4);
	if (*e->getExpressionString() == UTF("a1+c2")
	    && e->getArgumentsNumber() == 5
	    && e->getConstantsNumber() == 0
	    && e->getFunctionsNumber() == 4)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0003", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "getExpressionString(), getArgumentsNumber(), getFunctionsNumber()";
	TestCommonTools::consolePrintTestApiStart(3, testDescr);
	ArgumentPtr a5 = new_Argument("a5", 5);
	ArgumentPtr a4 = new_Argument("a4", 4);
	ArgumentPtr a3 = new_Argument("a3", 3);
	ArgumentPtr a2 = new_Argument("a2", 2);
	ArgumentPtr a1 = new_Argument("a1", 1);
	FunctionPtr f4 = new_Function("f4", "4", "x");
	FunctionPtr f3 = new_Function("f3", "3", "x");
	FunctionPtr f2 = new_Function("f2", "2", "x");
	FunctionPtr f1 = new_Function("f1", "1", "x");
	ConstantPtr c5 = new_Constant("c5", 5);
	ConstantPtr c2 = new_Constant("c2", 2);
	ConstantPtr c1 = new_Constant("c1", 1);
	ExpressionPtr e = new_Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
	if (*e->getExpressionString() == UTF("a1+c2")
	    && e->getArgumentsNumber() == 5
	    && e->getConstantsNumber() == 3
	    && e->getFunctionsNumber() == 4)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0004", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "setExpressionString(), getExpressionString(), clearExpressionString()";
	TestCommonTools::consolePrintTestApiStart(4, testDescr);
	ArgumentPtr a5 = new_Argument("a5", 5);
	ArgumentPtr a4 = new_Argument("a4", 4);
	ArgumentPtr a3 = new_Argument("a3", 3);
	ArgumentPtr a2 = new_Argument("a2", 2);
	ArgumentPtr a1 = new_Argument("a1", 1);
	FunctionPtr f4 = new_Function("f4", "4", "x");
	FunctionPtr f3 = new_Function("f3", "3", "x");
	FunctionPtr f2 = new_Function("f2", "2", "x");
	FunctionPtr f1 = new_Function("f1", "1", "x");
	ConstantPtr c5 = new_Constant("c5", 5);
	ConstantPtr c2 = new_Constant("c2", 2);
	ConstantPtr c1 = new_Constant("c1", 1);
	ExpressionPtr e = new_Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
	bool syn1 = e->checkSyntax();
	e->setExpressionString("c2+a1");
	bool syn2 = e->getSyntaxStatus();
	bool syn3 = e->checkSyntax();
	StringPtr s1 = e->getExpressionString();
	bool syn4 = e->getSyntaxStatus();
	bool syn5 = e->checkSyntax();
	e->clearExpressionString();
	bool syn6 = e->getSyntaxStatus();
	bool syn7 = e->checkSyntax();
	StringPtr s2 = e->getExpressionString();
	bool syn8 = e->getSyntaxStatus();
	if (*s1 == UTF("c2+a1")
	    && *s2 == UTF("")
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::SYNTAX_ERROR
	    && syn3 == Expression::NO_SYNTAX_ERRORS
	    && syn4 == Expression::NO_SYNTAX_ERRORS
	    && syn5 == Expression::NO_SYNTAX_ERRORS
	    && syn6 == Expression::SYNTAX_ERROR
	    && syn7 == Expression::SYNTAX_ERROR
	    && syn8 == Expression::SYNTAX_ERROR
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0005", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "setDescription(), getDescription(), clearDescription()";
	TestCommonTools::consolePrintTestApiStart(5, testDescr);
	ArgumentPtr a5 = new_Argument("a5", 5);
	ArgumentPtr a4 = new_Argument("a4", 4);
	ArgumentPtr a3 = new_Argument("a3", 3);
	ArgumentPtr a2 = new_Argument("a2", 2);
	ArgumentPtr a1 = new_Argument("a1", 1);
	FunctionPtr f4 = new_Function("f4", "4", "x");
	FunctionPtr f3 = new_Function("f3", "3", "x");
	FunctionPtr f2 = new_Function("f2", "2", "x");
	FunctionPtr f1 = new_Function("f1", "1", "x");
	ConstantPtr c5 = new_Constant("c5", 5);
	ConstantPtr c2 = new_Constant("c2", 2);
	ConstantPtr c1 = new_Constant("c1", 1);
	ExpressionPtr e = new_Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
	e->setExpressionString("c1+a2");
	bool syn1 = e->checkSyntax();
	e->setDescription("opis");
	StringPtr s1 = e->getDescription();
	e->clearDescription();
	StringPtr s2 = e->getDescription();
	bool syn2 = e->getSyntaxStatus();
	if (*s1 == UTF("opis")
	    && *s2 == UTF("")
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::NO_SYNTAX_ERRORS
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0006", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "setVerboseMode(), getVerboseMode(), setSilentMode()";
	TestCommonTools::consolePrintTestApiStart(6, testDescr);
	ArgumentPtr a5 = new_Argument("a5", 5);
	ArgumentPtr a4 = new_Argument("a4", 4);
	ArgumentPtr a3 = new_Argument("a3", 3);
	ArgumentPtr a2 = new_Argument("a2", 2);
	ArgumentPtr a1 = new_Argument("a1", 1);
	FunctionPtr f4 = new_Function("f4", "4", "x");
	FunctionPtr f3 = new_Function("f3", "3", "x");
	FunctionPtr f2 = new_Function("f2", "2", "x");
	FunctionPtr f1 = new_Function("f1", "1", "x");
	ConstantPtr c5 = new_Constant("c5", 5);
	ConstantPtr c2 = new_Constant("c2", 2);
	ConstantPtr c1 = new_Constant("c1", 1);
	ExpressionPtr e = new_Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
	e->setExpressionString("c1+a2");
	bool syn1 = e->checkSyntax();
	bool b1 = e->getVerboseMode();
	e->setVerboseMode();
	bool b2 = e->getVerboseMode();
	e->setSilentMode();
	bool b3 = e->getVerboseMode();
	bool syn2 = e->getSyntaxStatus();
	if (b1 == false
	    && b2 == true
	    && b3 == false
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::NO_SYNTAX_ERRORS
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0007", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "getRecursiveMode()";
	TestCommonTools::consolePrintTestApiStart(7, testDescr);
	FunctionPtr fa = new_Function("f(x,y)=sin(x)+cos(y)");
	FunctionPtr fb = new_Function("f(x,y)=sin(x)+cos(y)+f(1,2)");
	bool syn1 = fa->checkSyntax();
	bool syn2 = fb->checkSyntax();
	bool b1 = fa->getRecursiveMode();
	bool b2 = fb->getRecursiveMode();
	if (b1 == false
	    && b2 == true
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::NO_SYNTAX_ERRORS
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0008", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Expression(string expressionString)";
	TestCommonTools::consolePrintTestApiStart(8, testDescr);
	ExpressionPtr e = new_Expression("1+2");
	if (*e->getExpressionString() == UTF("1+2")
	    && e->getArgumentsNumber() == 0
	    && e->getConstantsNumber() == 0
	    && e->getFunctionsNumber() == 0)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0009", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Expression(string expressionString)";
	TestCommonTools::consolePrintTestApiStart(9, testDescr);
	ArgumentPtr a3 = new_Argument("a3", 3);
	ArgumentPtr a2 = new_Argument("a2", 2);
	ArgumentPtr a1 = new_Argument("a1", 1);
	ExpressionPtr e = new_Expression("1+2", a1, a2, a3);
	if (*e->getExpressionString() == UTF("1+2")
	    && e->getArgumentsNumber() == 3
	    && e->getConstantsNumber() == 0
	    && e->getFunctionsNumber() == 0)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0010",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"addArguments(Argument::.. arguments), addArguments( ListPtr<Argument> argumentsList), defineArguments(String... argumentsNames), defineArgument(string argumentName, double argumentValue)";
	TestCommonTools::consolePrintTestApiStart(10, testDescr);
	ArgumentPtr a5 = new_Argument("a5", 5);
	ArgumentPtr a4 = new_Argument("a4", 4);
	ArgumentPtr a3 = new_Argument("a3", 3);
	ArgumentPtr a2 = new_Argument("a2", 2);
	ArgumentPtr a1 = new_Argument("a1", 1);
	ArgumentPtr a7 = new_Argument("a7", 7);
	ArgumentPtr a6 = new_Argument("a6", 6);
	ExpressionPtr e = new_Expression("1+2");
	bool syn1 = e->checkSyntax();
	e->addDefinitions(a6, a7);
	bool syn2 = e->getSyntaxStatus();
	bool syn3 = e->checkSyntax();
	e->addDefinitions(a1, a2, a3, a4, a5);
	bool syn4 = e->getSyntaxStatus();
	bool syn5 = e->checkSyntax();
	e->defineArguments("x1", "x2", "x3");
	bool syn6 = e->getSyntaxStatus();
	bool syn7 = e->checkSyntax();
	e->defineArgument("x", 1);
	bool syn8 = e->getSyntaxStatus();
	if (*e->getExpressionString() == UTF("1+2")
	    && e->getArgumentsNumber() == 11
	    && e->getConstantsNumber() == 0
	    && e->getFunctionsNumber() == 0
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::SYNTAX_ERROR
	    && syn3 == Expression::NO_SYNTAX_ERRORS
	    && syn4 == Expression::SYNTAX_ERROR
	    && syn5 == Expression::NO_SYNTAX_ERRORS
	    && syn6 == Expression::SYNTAX_ERROR
	    && syn7 == Expression::NO_SYNTAX_ERRORS
	    && syn8 == Expression::SYNTAX_ERROR
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0011",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"int getArgumentIndex(string argumentName), Argument getArgument(string argumentName), getArgument(int argumentIndex), getArgumentsNumber()";
	TestCommonTools::consolePrintTestApiStart(11, testDescr);
	ArgumentPtr a5 = new_Argument("a5", 5);
	ArgumentPtr a4 = new_Argument("a4", 4);
	ArgumentPtr a3 = new_Argument("a3", 3);
	ArgumentPtr a2 = new_Argument("a2", 2);
	ArgumentPtr a1 = new_Argument("a1", 1);
	ArgumentPtr a7 = new_Argument("a7", 7);
	ArgumentPtr a6 = new_Argument("a6", 6);
	ExpressionPtr e = new_Expression("1+2");
	e->addDefinitions(a6, a7);
	e->addDefinitions(a1, a2, a3, a4, a5);
	e->defineArguments("x1", "x2", "x3");
	e->defineArgument("x", 1);
	bool syn1 = e->checkSyntax();
	int i1 = e->getArgumentIndex("asdsa"); //-1
	int i2 = e->getArgumentIndex("x1"); //7
	ArgumentPtr A1 = e->getArgument("asasas"); //null
	ArgumentPtr A2 = e->getArgument("a2"); //a2
	ArgumentPtr A3 = e->getArgument(-1); //null
	ArgumentPtr A4 = e->getArgument(23); //null
	ArgumentPtr A5 = e->getArgument(1); //a7
	int n1 = e->getArgumentsNumber(); //11
	bool syn2 = e->getSyntaxStatus();
	if (i1 == -1
	    && i2 == 7
	    && A1 == nullptr
	    && A2 == a2
	    && A3 == nullptr
	    && A4 == nullptr
	    && A5 == a7
	    && n1 == 11
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::NO_SYNTAX_ERRORS
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0012", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "setArgumentValue(), getArgumentValue()";
	TestCommonTools::consolePrintTestApiStart(12, testDescr);
	ArgumentPtr a5 = new_Argument("a5", 5);
	ArgumentPtr a4 = new_Argument("a4", 4);
	ArgumentPtr a3 = new_Argument("a3", 3);
	ArgumentPtr a2 = new_Argument("a2", 2);
	ArgumentPtr a1 = new_Argument("a1", 1);
	ArgumentPtr a7 = new_Argument("a7", 7);
	ArgumentPtr a6 = new_Argument("a6", 6);
	ExpressionPtr e = new_Expression("1+2");
	e->addDefinitions(a6, a7);
	e->addDefinitions(a1, a2, a3, a4, a5);
	e->defineArguments("x1", "x2", "x3");
	e->defineArgument("x", 1);
	bool syn1 = e->checkSyntax();
	double d1 = e->getArgumentValue("a1");
	bool syn2 = e->getSyntaxStatus();
	e->setArgumentValue("asds", 1);
	bool syn3 = e->getSyntaxStatus();
	bool syn4 = e->checkSyntax();
	e->setArgumentValue("a1", 10);
	syn4 = e->getSyntaxStatus();
	double d2 = e->getArgumentValue("asdfasdf");
	double d3 = e->getArgumentValue("a1");
	bool syn5 = e->getSyntaxStatus();
	if (d1 == 1
	    && Double::isNaN(d2)
	    && d3 == 10
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::NO_SYNTAX_ERRORS
	    && syn3 == Expression::NO_SYNTAX_ERRORS
	    && syn4 == Expression::NO_SYNTAX_ERRORS
	    && syn5 == Expression::NO_SYNTAX_ERRORS
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0013",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"removeArguments(String... argumentsNames), removeArguments(Argument::.. arguments), removeAllArguments()";
	TestCommonTools::consolePrintTestApiStart(13, testDescr);
	ArgumentPtr a5 = new_Argument("a5", 5);
	ArgumentPtr a4 = new_Argument("a4", 4);
	ArgumentPtr a3 = new_Argument("a3", 3);
	ArgumentPtr a2 = new_Argument("a2", 2);
	ArgumentPtr a1 = new_Argument("a1", 1);
	ArgumentPtr a7 = new_Argument("a7", 7);
	ArgumentPtr a6 = new_Argument("a6", 6);
	ExpressionPtr e = new_Expression("1+2");
	e->addDefinitions(a6, a7);
	e->addDefinitions(a1, a2, a3, a4, a5);
	e->defineArguments("x1", "x2", "x3");
	e->defineArgument("x", 1);
	e->setExpressionString("1+2");
	bool syn1 = e->checkSyntax();
	int n1 = e->getArgumentsNumber();
	e->removeArguments("asfdf");
	bool syn2 = e->getSyntaxStatus();
	int n2 = e->getArgumentsNumber();
	e->removeArguments("x1", "x2");
	int n3 = e->getArgumentsNumber();
	bool syn3 = e->checkSyntax();
	e->removeArguments(a3);
	int n4 = e->getArgumentsNumber();
	e->removeArguments(a1, a2);
	bool syn4 = e->getSyntaxStatus();
	int n5 = e->getArgumentsNumber();
	bool syn5 = e->checkSyntax();
	e->removeAllArguments();
	int n6 = e->getArgumentsNumber();
	bool syn6 = e->getSyntaxStatus();
	if (n2 == n1
	    && n2 - n3 == 2
	    && n3 - n4 == 1
	    && n4 - n5 == 2
	    && n6 == 0
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::SYNTAX_ERROR
	    && syn3 == Expression::NO_SYNTAX_ERRORS
	    && syn4 == Expression::SYNTAX_ERROR
	    && syn5 == Expression::NO_SYNTAX_ERRORS
	    && syn6 == Expression::SYNTAX_ERROR
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0014",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"addConstants(Constant::.. constants), addConstants( ListPtr<ConstantPtr> constantsList), defineConstant(string constantName, double constantValue)";
	TestCommonTools::consolePrintTestApiStart(14, testDescr);
	ConstantPtr c3 = new_Constant("c3", 3);
	ConstantPtr c2 = new_Constant("c2", 2);
	ConstantPtr c1 = new_Constant("c1", 1);
	ConstantPtr c6 = new_Constant("c6", 6);
	ConstantPtr c5 = new_Constant("c5", 5);
	ExpressionPtr e = new_Expression("1+2", new_Constant("a=5"));
	bool syn1 = e->checkSyntax();
	e->addDefinitions(c5, c6);
	bool syn2 = e->getSyntaxStatus();
	bool syn3 = e->checkSyntax();
	e->addDefinitions(c1, c2, c3, c5, c6);
	bool syn4 = e->getSyntaxStatus();
	bool syn5 = e->checkSyntax();
	e->defineConstant("cx1", 1);
	e->removeDefinitions(c5, c6);
	bool syn6 = e->checkSyntax();
	e->removeDefinitions(c5, c6);
	if (*e->getExpressionString() == UTF("1+2")
	    && e->getArgumentsNumber() == 0
	    && e->getConstantsNumber() == 5
	    && e->getFunctionsNumber() == 0
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::SYNTAX_ERROR
	    && syn3 == Expression::NO_SYNTAX_ERRORS
	    && syn4 == Expression::SYNTAX_ERROR
	    && syn5 == Expression::SYNTAX_ERROR
	    && syn6 == Expression::NO_SYNTAX_ERRORS
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0015",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"getConstantIndex(string constantName), getConstant(string constantName), getConstant(int constantIndex), getConstantsNumber()";
	TestCommonTools::consolePrintTestApiStart(15, testDescr);
	ConstantPtr c3 = new_Constant("c3", 3);
	ConstantPtr c2 = new_Constant("c2", 2);
	ConstantPtr c1 = new_Constant("c1", 1);
	ExpressionPtr e = new_Expression("1+2", new_Constant("a=5"));
	e->addDefinitions(c1, c2, c3);
	e->defineConstant("cx1", 1);
	bool syn1 = e->checkSyntax();
	int i1 = e->getConstantIndex("asdsa"); //-1
	int i2 = e->getConstantIndex("c6"); //-1
	ConstantPtr C1 = e->getConstant("asasas"); //null
	ConstantPtr C2 = e->getConstant("c1"); //c1
	ConstantPtr C3 = e->getConstant(-1); //null
	ConstantPtr C4 = e->getConstant(23); //null
	ConstantPtr C5 = e->getConstant(1); //c1
	int n1 = e->getConstantsNumber(); //5
	bool syn2 = e->getSyntaxStatus();
	if (i1 == -1
	    && i2 == -1
	    && C1 == nullptr
	    && C2 == c1
	    && C3 == nullptr
	    && C4 == nullptr
	    && C5 == c1
	    && n1 == 5
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::NO_SYNTAX_ERRORS
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0016",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"removeConstants(String... constantsNames), removeConstants(Constant::.. constants), removeAllConstants()";
	TestCommonTools::consolePrintTestApiStart(16, testDescr);
	ConstantPtr c3 = new_Constant("c3", 3);
	ConstantPtr c2 = new_Constant("c2", 2);
	ConstantPtr c1 = new_Constant("c1", 1);
	ExpressionPtr e = new_Expression("1+2", new_Constant("a=5"));
	e->addDefinitions(c1, c2, c3);
	e->defineConstant("cx1", 1);
	e->defineConstant("cx2", 1);
	e->setExpressionString("1+2");
	bool syn1 = e->checkSyntax();
	int n1 = e->getConstantsNumber();
	e->removeConstants("asfdf");
	bool syn2 = e->getSyntaxStatus();
	int n2 = e->getConstantsNumber();
	e->removeConstants("cx1", "cx2");
	int n3 = e->getConstantsNumber();
	bool syn3 = e->checkSyntax();
	e->removeConstants(c1);
	int n4 = e->getConstantsNumber();
	e->removeConstants(c2, c3);
	bool syn4 = e->getSyntaxStatus();
	int n5 = e->getConstantsNumber();
	bool syn5 = e->checkSyntax();
	e->removeAllConstants();
	int n6 = e->getConstantsNumber();
	bool syn6 = e->getSyntaxStatus();
	if (n2 == n1
	    && n2 - n3 == 2
	    && n3 - n4 == 1
	    && n4 - n5 == 2
	    && n6 == 0
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::SYNTAX_ERROR
	    && syn3 == Expression::NO_SYNTAX_ERRORS
	    && syn4 == Expression::SYNTAX_ERROR
	    && syn5 == Expression::NO_SYNTAX_ERRORS
	    && syn6 == Expression::SYNTAX_ERROR
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0017",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"addFunctions(Function::.. functions), addFunctions( ListPtr<Function> functionsList), defineFunction(string functionName, string  functionExpressionString,...";
	TestCommonTools::consolePrintTestApiStart(17, testDescr);
	FunctionPtr f4 = new_Function("f4", "4", "x");
	FunctionPtr f3 = new_Function("f3", "3", "x");
	FunctionPtr f2 = new_Function("f2", "2", "x");
	FunctionPtr f1 = new_Function("f1", "1", "x");
	FunctionPtr f7 = new_Function("f7", "7", "x");
	FunctionPtr f6 = new_Function("f6", "6", "x");
	ExpressionPtr e = new_Expression("1+2");
	bool syn1 = e->checkSyntax();
	e->addDefinitions(f6, f7);
	bool syn2 = e->getSyntaxStatus();
	bool syn3 = e->checkSyntax();
	e->addDefinitions(f1, f2, f3, f4, f6);
	bool syn4 = e->getSyntaxStatus();
	e->removeDefinitions(f6);
	bool syn5 = e->checkSyntax();
	e->defineFunction("ff1", "1", "x");
	bool syn6 = e->getSyntaxStatus();
	if (*e->getExpressionString() == UTF("1+2")
	    && e->getArgumentsNumber() == 0
	    && e->getConstantsNumber() == 0
	    && e->getFunctionsNumber() == 7
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::SYNTAX_ERROR
	    && syn3 == Expression::NO_SYNTAX_ERRORS
	    && syn4 == Expression::SYNTAX_ERROR
	    && syn5 == Expression::NO_SYNTAX_ERRORS
	    && syn6 == Expression::SYNTAX_ERROR
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0018",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"getFunctionIndex(string functionName), getFunction(string functionName), getFunction(int functionIndex), getFunctionsNumber()";
	TestCommonTools::consolePrintTestApiStart(18, testDescr);
	FunctionPtr f4 = new_Function("f4", "4", "x");
	FunctionPtr f3 = new_Function("f3", "3", "x");
	FunctionPtr f2 = new_Function("f2", "2", "x");
	FunctionPtr f1 = new_Function("f1", "1", "x");
	FunctionPtr f7 = new_Function("f7", "7", "x");
	FunctionPtr f6 = new_Function("f6", "6", "x");
	ExpressionPtr e = new_Expression("1+2");
	e->addDefinitions(f6, f7);
	e->addDefinitions(f1, f2, f3, f4, f6);
	e->removeDefinitions(f6);
	e->defineFunction("ff1", "1", "x");
	bool syn1 = e->checkSyntax();
	int i1 = e->getFunctionIndex("asdsa"); //-1
	int i2 = e->getFunctionIndex("f7"); //0
	FunctionPtr F1 = e->getFunction("asasas"); //null
	FunctionPtr F2 = e->getFunction("f1"); //f1
	FunctionPtr F3 = e->getFunction(-1); //null
	FunctionPtr F4 = e->getFunction(23); //null
	FunctionPtr F5 = e->getFunction(0); //f7
	int n1 = e->getFunctionsNumber(); //7
	bool syn2 = e->getSyntaxStatus();
	if (i1 == -1
	    && i2 == 0
	    && F1 == nullptr
	    && F2 == f1
	    && F3 == nullptr
	    && F4 == nullptr
	    && F5 == f7
	    && n1 == 7
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::NO_SYNTAX_ERRORS
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0019",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"removeFunctions(String... functionsNames), removeFunctions(Function::.. functions), removeAllFunctions()";
	TestCommonTools::consolePrintTestApiStart(19, testDescr);
	FunctionPtr f4 = new_Function("f4", "4", "x");
	FunctionPtr f3 = new_Function("f3", "3", "x");
	FunctionPtr f2 = new_Function("f2", "2", "x");
	FunctionPtr f1 = new_Function("f1", "1", "x");
	FunctionPtr f7 = new_Function("f7", "7", "x");
	FunctionPtr f6 = new_Function("f6", "6", "x");
	ExpressionPtr e = new_Expression("1+2");
	e->addDefinitions(f6, f7);
	e->addDefinitions(f1, f2, f3, f4, f6);
	e->removeDefinitions(f6);
	e->defineFunction("ff1", "1", "x");
	e->setExpressionString("1+2");
	bool syn1 = e->checkSyntax();
	int n1 = e->getFunctionsNumber();
	e->removeFunctions("asfdf");
	bool syn2 = e->getSyntaxStatus();
	int n2 = e->getFunctionsNumber();
	e->removeFunctions("f1", "f2");
	int n3 = e->getFunctionsNumber();
	bool syn3 = e->checkSyntax();
	e->removeFunctions(f3);
	int n4 = e->getFunctionsNumber();
	e->removeFunctions(f6, f7);
	bool syn4 = e->getSyntaxStatus();
	int n5 = e->getFunctionsNumber();
	bool syn5 = e->checkSyntax();
	e->removeAllFunctions();
	int n6 = e->getFunctionsNumber();
	bool syn6 = e->getSyntaxStatus();
	if (n2 == n1
	    && n2 - n3 == 2
	    && n3 - n4 == 1
	    && n4 - n5 == 2
	    && n6 == 0
	    && syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::SYNTAX_ERROR
	    && syn3 == Expression::NO_SYNTAX_ERRORS
	    && syn4 == Expression::SYNTAX_ERROR
	    && syn5 == Expression::NO_SYNTAX_ERRORS
	    && syn6 == Expression::SYNTAX_ERROR
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0020", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "double calculate(), getHelp(), getHelp(string word), getLicense()";
	TestCommonTools::consolePrintTestApiStart(20, testDescr);
	FunctionPtr f4 = new_Function("f4", "4", "x");
	FunctionPtr f3 = new_Function("f3", "3", "x");
	FunctionPtr f2 = new_Function("f2", "2", "x");
	FunctionPtr f1 = new_Function("f1", "1", "x");
	FunctionPtr f7 = new_Function("f7", "7", "x");
	FunctionPtr f6 = new_Function("f6", "6", "x");
	ExpressionPtr e = new_Expression("1+2");
	e->addDefinitions(f6, f7);
	e->addDefinitions(f1, f2, f3, f4, f6);
	e->removeDefinitions(f6);
	e->defineFunction("ff1", "1", "x");
	e->setExpressionString("1+2");
	e->removeFunctions("asfdf");
	e->removeFunctions("f1", "f2");
	e->removeFunctions(f3);
	e->removeFunctions(f6, f7);
	e->removeAllFunctions();
	bool syn1 = e->checkSyntax();
	double d1 = e->calculate();
	bool syn2 = e->getSyntaxStatus();
	if (syn1 == Expression::NO_SYNTAX_ERRORS
	    && syn2 == Expression::NO_SYNTAX_ERRORS
	    && d1 == 3)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0021", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "getCopyOfInitialTokens()";
	TestCommonTools::consolePrintTestApiStart(21, testDescr);
	ExpressionPtr e = new_Expression("1+(2+3)-sin(10)");
	ListPtr<TokenPtr> tokens = e->getCopyOfInitialTokens();
	mXparser::consolePrintTokens(tokens);
	if (
		(*tokens->get(0)->tokenStr == UTF("1")) &&
		(*tokens->get(1)->tokenStr == UTF("+")) &&
		(*tokens->get(2)->tokenStr == UTF("(")) &&
		(*tokens->get(3)->tokenStr == UTF("2")) &&
		(*tokens->get(4)->tokenStr == UTF("+")) &&
		(*tokens->get(5)->tokenStr == UTF("3")) &&
		(*tokens->get(6)->tokenStr == UTF(")")) &&
		(*tokens->get(7)->tokenStr == UTF("-")) &&
		(*tokens->get(8)->tokenStr == UTF("sin")) &&
		(*tokens->get(9)->tokenStr == UTF("(")) &&
		(*tokens->get(10)->tokenStr == UTF("10")) &&
		(*tokens->get(11)->tokenStr == UTF(")")) &&
		(tokens->get(0)->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID) &&
		(tokens->get(1)->tokenTypeId == Operator::TYPE_ID) &&
		(tokens->get(2)->tokenTypeId == ParserSymbol::TYPE_ID) &&
		(tokens->get(3)->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID) &&
		(tokens->get(4)->tokenTypeId == Operator::TYPE_ID) &&
		(tokens->get(5)->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID) &&
		(tokens->get(6)->tokenTypeId == ParserSymbol::TYPE_ID) &&
		(tokens->get(7)->tokenTypeId == Operator::TYPE_ID) &&
		(tokens->get(8)->tokenTypeId == Function1Arg::TYPE_ID) &&
		(tokens->get(9)->tokenTypeId == ParserSymbol::TYPE_ID) &&
		(tokens->get(10)->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID) &&
		(tokens->get(11)->tokenTypeId == ParserSymbol::TYPE_ID) &&
		(tokens->get(0)->tokenLevel == 0) &&
		(tokens->get(1)->tokenLevel == 0) &&
		(tokens->get(2)->tokenLevel == 1) &&
		(tokens->get(3)->tokenLevel == 1) &&
		(tokens->get(4)->tokenLevel == 1) &&
		(tokens->get(5)->tokenLevel == 1) &&
		(tokens->get(6)->tokenLevel == 1) &&
		(tokens->get(7)->tokenLevel == 0) &&
		(tokens->get(8)->tokenLevel == 1) &&
		(tokens->get(9)->tokenLevel == 2) &&
		(tokens->get(10)->tokenLevel == 2) &&
		(tokens->get(11)->tokenLevel == 2)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0022", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Invalid tokens, getCopyOfInitialTokens()";
	TestCommonTools::consolePrintTestApiStart(22, testDescr);
	ExpressionPtr e = new_Expression("token1+toke2n*sin(token3-t3^t5)^t45+pi-pie+e");
	e->disableImpliedMultiplicationMode();
	ListPtr<TokenPtr> tokens = e->getCopyOfInitialTokens();
	mXparser::consolePrintTokens(tokens);
	if (
		(*tokens->get(0)->tokenStr == UTF("token1")) &&
		(*tokens->get(1)->tokenStr == UTF("+")) &&
		(*tokens->get(2)->tokenStr == UTF("toke2n")) &&
		(*tokens->get(3)->tokenStr == UTF("*")) &&
		(*tokens->get(4)->tokenStr == UTF("sin")) &&
		(*tokens->get(5)->tokenStr == UTF("(")) &&
		(*tokens->get(6)->tokenStr == UTF("token3")) &&
		(*tokens->get(7)->tokenStr == UTF("-")) &&
		(*tokens->get(8)->tokenStr == UTF("t3")) &&
		(*tokens->get(9)->tokenStr == UTF("^")) &&
		(*tokens->get(10)->tokenStr == UTF("t5")) &&
		(*tokens->get(11)->tokenStr == UTF(")")) &&
		(*tokens->get(12)->tokenStr == UTF("^")) &&
		(*tokens->get(13)->tokenStr == UTF("t45")) &&
		(*tokens->get(14)->tokenStr == UTF("+")) &&
		(*tokens->get(15)->tokenStr == UTF("pi")) &&
		(*tokens->get(16)->tokenStr == UTF("-")) &&
		(*tokens->get(17)->tokenStr == UTF("pie")) &&
		(*tokens->get(18)->tokenStr == UTF("+")) &&
		(*tokens->get(19)->tokenStr == UTF("e")) &&
		(tokens->get(0)->tokenTypeId == Token::NOT_MATCHED) &&
		(tokens->get(1)->tokenTypeId == Operator::TYPE_ID) &&
		(tokens->get(2)->tokenTypeId == Token::NOT_MATCHED) &&
		(tokens->get(3)->tokenTypeId == Operator::TYPE_ID) &&
		(tokens->get(4)->tokenTypeId == Function1Arg::TYPE_ID) &&
		(tokens->get(5)->tokenTypeId == ParserSymbol::TYPE_ID) &&
		(tokens->get(6)->tokenTypeId == Token::NOT_MATCHED) &&
		(tokens->get(7)->tokenTypeId == Operator::TYPE_ID) &&
		(tokens->get(8)->tokenTypeId == Token::NOT_MATCHED) &&
		(tokens->get(9)->tokenTypeId == Operator::TYPE_ID) &&
		(tokens->get(10)->tokenTypeId == Token::NOT_MATCHED) &&
		(tokens->get(11)->tokenTypeId == ParserSymbol::TYPE_ID) &&
		(tokens->get(12)->tokenTypeId == Operator::TYPE_ID) &&
		(tokens->get(13)->tokenTypeId == Token::NOT_MATCHED) &&
		(tokens->get(14)->tokenTypeId == Operator::TYPE_ID) &&
		(tokens->get(15)->tokenTypeId == ConstantValue::TYPE_ID) &&
		(tokens->get(16)->tokenTypeId == Operator::TYPE_ID) &&
		(tokens->get(17)->tokenTypeId == Token::NOT_MATCHED) &&
		(tokens->get(18)->tokenTypeId == Operator::TYPE_ID) &&
		(tokens->get(19)->tokenTypeId == ConstantValue::TYPE_ID) &&
		(tokens->get(0)->tokenLevel == 0) &&
		(tokens->get(1)->tokenLevel == 0) &&
		(tokens->get(2)->tokenLevel == 0) &&
		(tokens->get(3)->tokenLevel == 0) &&
		(tokens->get(4)->tokenLevel == 1) &&
		(tokens->get(5)->tokenLevel == 2) &&
		(tokens->get(6)->tokenLevel == 2) &&
		(tokens->get(7)->tokenLevel == 2) &&
		(tokens->get(8)->tokenLevel == 2) &&
		(tokens->get(9)->tokenLevel == 2) &&
		(tokens->get(10)->tokenLevel == 2) &&
		(tokens->get(11)->tokenLevel == 2) &&
		(tokens->get(12)->tokenLevel == 0) &&
		(tokens->get(13)->tokenLevel == 0) &&
		(tokens->get(14)->tokenLevel == 0) &&
		(tokens->get(15)->tokenLevel == 0) &&
		(tokens->get(16)->tokenLevel == 0) &&
		(tokens->get(17)->tokenLevel == 0) &&
		(tokens->get(18)->tokenLevel == 0) &&
		(tokens->get(19)->tokenLevel == 0)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0023", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function Extension - calculate()";
	TestCommonTools::consolePrintTestApiStart(23, testDescr);
	FunctionExtensionPtr funExt = new_FunExt();
	FunctionPtr ff = new_Function("ff", funExt);
	if (ff->calculate(2, 3) == 6) testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0024", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "FunctionExtension - setArgumentValue - calculate";
	TestCommonTools::consolePrintTestApiStart(24, testDescr);
	FunctionExtensionPtr funExt = new_FunExt();
	FunctionPtr ff = new_Function("ff", funExt);
	ff->setArgumentValue(0, 3);
	ff->setArgumentValue(1, 4);
	if (ff->calculate() == 12) testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0025", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "FunctionExtension - parameters";
	TestCommonTools::consolePrintTestApiStart(25, testDescr);
	FunctionExtensionPtr funExt = new_FunExt();
	FunctionPtr ff = new_Function("ff", funExt);
	if (
		(ff->getParametersNumber() == 2) &&
		(ff->getFunctionBodyType() == Function::BODY_EXTENDED) &&
		(ff->checkSyntax() == Function::NO_SYNTAX_ERRORS)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0026", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "FunctionExtension - calculate";
	TestCommonTools::consolePrintTestApiStart(26, testDescr);
	FunctionExtensionPtr funExt = new_FunExt();
	FunctionPtr ff = new_Function("ff", funExt);
	ArgumentPtr x = new_Argument("x = 5");
	ArgumentPtr y = new_Argument("y = 6");
	if (ff->calculate(x, y) == 30) testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0027", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Invalid tokens looks like, getCopyOfInitialTokens()";
	TestCommonTools::consolePrintTestApiStart(27, testDescr);
	ExpressionPtr e = new_Expression("1pi+2pi3+((_d1(a)+(_d^_g)))))");
	ListPtr<TokenPtr> tokens = e->getCopyOfInitialTokens();
	mXparser::consolePrintTokens(tokens);
	if (
		(*tokens->get(0)->tokenStr == UTF("1")) &&
		(*tokens->get(1)->tokenStr == UTF("*")) &&
		(*tokens->get(2)->tokenStr == UTF("pi")) &&
		(*tokens->get(3)->tokenStr == UTF("+")) &&
		(*tokens->get(4)->tokenStr == UTF("2")) &&
		(*tokens->get(5)->tokenStr == UTF("*")) &&
		(*tokens->get(6)->tokenStr == UTF("pi3")) &&
		(*tokens->get(7)->tokenStr == UTF("+")) &&
		(*tokens->get(8)->tokenStr == UTF("(")) &&
		(*tokens->get(9)->tokenStr == UTF("(")) &&
		(*tokens->get(10)->tokenStr == UTF("_d1")) &&
		(*tokens->get(11)->tokenStr == UTF("(")) &&
		(*tokens->get(12)->tokenStr == UTF("a")) &&
		(*tokens->get(13)->tokenStr == UTF(")")) &&
		(*tokens->get(14)->tokenStr == UTF("+")) &&
		(*tokens->get(15)->tokenStr == UTF("(")) &&
		(*tokens->get(16)->tokenStr == UTF("_d")) &&
		(*tokens->get(17)->tokenStr == UTF("^")) &&
		(*tokens->get(18)->tokenStr == UTF("_g")) &&
		(*tokens->get(19)->tokenStr == UTF(")")) &&
		(*tokens->get(20)->tokenStr == UTF(")")) &&
		(*tokens->get(21)->tokenStr == UTF(")")) &&
		(*tokens->get(22)->tokenStr == UTF(")")) &&
		(*tokens->get(23)->tokenStr == UTF(")")) &&
		(*tokens->get(10)->looksLike == UTF("function")) &&
		(*tokens->get(12)->looksLike == UTF("argument")) &&
		(*tokens->get(16)->looksLike == UTF("argument")) &&
		(*tokens->get(18)->looksLike == UTF("argument"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0028", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "checkSyntax()";
	TestCommonTools::consolePrintTestApiStart(28, testDescr);
	ExpressionPtr e = new_Expression("1+2+3+(4+5)+a+b");
	if (
		(e->checkSyntax() == Expression::SYNTAX_ERROR) &&
		(e->checkLexSyntax() == Expression::NO_SYNTAX_ERRORS)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0029", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "checkSyntax()";
	TestCommonTools::consolePrintTestApiStart(29, testDescr);
	ExpressionPtr e = new_Expression("1+2+3+(4+5)+a)+b");
	if (
		(e->checkSyntax() == Expression::SYNTAX_ERROR) &&
		(e->checkLexSyntax() == Expression::SYNTAX_ERROR)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0030",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Tokens to remove, removeBuiltinTokens(), unremoveBuiltinTokens(), getBuiltinTokensToRemove(),";
	TestCommonTools::consolePrintTestApiStart(30, testDescr);
	StringPtr t = nullptr;
	mXparser::removeBuiltinTokens("sin");
	mXparser::removeBuiltinTokens("sin");
	mXparser::removeBuiltinTokens("cos");
	mXparser::removeBuiltinTokens("sin");
	mXparser::removeBuiltinTokens("sin", "cos", t, "", "tg");
	mXparser::removeBuiltinTokens(t);
	mXparser::unremoveBuiltinTokens(t);
	mXparser::unremoveBuiltinTokens(t, UTF(""));
	mXparser::unremoveBuiltinTokens("sin", "tg");
	ArrayPtr<StringPtr> tokensToRemove1 = mXparser::getBuiltinTokensToRemove();
	mXparser::unremoveAllBuiltinTokens();
	ArrayPtr<StringPtr> tokensToRemove2 = mXparser::getBuiltinTokensToRemove();
	if (
		(tokensToRemove1->length == 1) &&
		(*(*tokensToRemove1)(0) == UTF("cos")) &&
		(tokensToRemove2->length == 0)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0031", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Tokens to modify, modifyBuiltinToken(), getBuiltinTokensToModify(), getHelp()";
	TestCommonTools::consolePrintTestApiStart(31, testDescr);
	StringPtr u = nullptr;
	mXparser::modifyBuiltinToken("sin", "SIN");
	mXparser::modifyBuiltinToken("cos", "");
	mXparser::modifyBuiltinToken(S("tan"), u);
	mXparser::modifyBuiltinToken(u, u);
	mXparser::modifyBuiltinToken(u, S("TAN"));
	mXparser::modifyBuiltinToken("tg", "TG", "NEW TG");
	mXparser::modifyBuiltinToken("", "TG", "NEW TG");
	mXparser::modifyBuiltinToken(u, S("TG"), S("NEW TG"));
	mXparser::modifyBuiltinToken("sin", "TG", "NEW TG");
	mXparser::modifyBuiltinToken("cos", "COS", "NEW COS");
	mXparser::modifyBuiltinToken("cos", "COS1", "NEW COS1");
	StringPtr help = mXparser::getHelp("COS");
	ArrayPtr<StringPtr> tokensToModify1 = mXparser::getBuiltinTokensToModify();
	mXparser::unmodifyBuiltinTokens("", u, "SIN", "tg");
	ArrayPtr<StringPtr> tokensToModify2 = mXparser::getBuiltinTokensToModify();
	mXparser::unmodifyAllBuiltinTokens();
	ArrayPtr<StringPtr> tokensToModify3 = mXparser::getBuiltinTokensToModify();

	if (
		(tokensToModify1->rows == 3) &&
		(tokensToModify2->rows == 1) &&
		(tokensToModify3->rows == 0) &&
		(*(*tokensToModify1)(0, 0) == UTF("sin")) &&
		(*(*tokensToModify1)(0, 1) == UTF("SIN")) &&
		((*tokensToModify1)(0, 2) == nullptr) &&
		(*(*tokensToModify1)(1, 0) == UTF("tg")) &&
		(*(*tokensToModify1)(1, 1) == UTF("TG")) &&
		(*(*tokensToModify1)(1, 2) == UTF("NEW TG")) &&
		(*(*tokensToModify1)(2, 0) == UTF("cos")) &&
		(*(*tokensToModify1)(2, 1) == UTF("COS")) &&
		(*(*tokensToModify1)(2, 2) == UTF("NEW COS")) &&
		(*(*tokensToModify2)(0, 0) == UTF("cos")) &&
		(*(*tokensToModify2)(0, 1) == UTF("COS")) &&
		(*(*tokensToModify2)(0, 2) == UTF("NEW COS")) &&
		(StringUtils::contains(*help, UTF("COS(x)")))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0032", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Recursion counter, setMaxAllowedRecursionDepth(), getMaxAllowedRecursionDepth()";
	TestCommonTools::consolePrintTestApiStart(32, testDescr);
	mXparser::setMaxAllowedRecursionDepth(100);
	int rc100 = mXparser::getMaxAllowedRecursionDepth();
	mXparser::setMaxAllowedRecursionDepth(200);
	int rc200 = mXparser::getMaxAllowedRecursionDepth();
	if ((rc100 == 100) && (rc200 == 200))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0033",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Override built-in tokens, setToOverrideBuiltinTokens(), setNotToOverrideBuiltinTokens(), checkIfsetToOverrideBuiltinTokens()";
	TestCommonTools::consolePrintTestApiStart(33, testDescr);
	mXparser::setToOverrideBuiltinTokens();
	bool over1 = mXparser::checkIfsetToOverrideBuiltinTokens();
	mXparser::setNotToOverrideBuiltinTokens();
	bool over2 = mXparser::checkIfsetToOverrideBuiltinTokens();
	mXparser::setToOverrideBuiltinTokens();
	bool over3 = mXparser::checkIfsetToOverrideBuiltinTokens();
	mXparser::setNotToOverrideBuiltinTokens();
	bool over4 = mXparser::checkIfsetToOverrideBuiltinTokens();
	if ((over1 == true) && (over2 == false) && (over3 == true) && (over4 == false))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0034", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "getKeyWords()";
	TestCommonTools::consolePrintTestApiStart(34, testDescr);
	ListPtr<KeyWordPtr> keyWords = mXparser::getKeyWords("sin ");
	if ((keyWords->size() == 4) &&
	    (*keyWords->get(0)->wordString == UTF("sin")) &&
	    (*keyWords->get(1)->wordString == UTF("asin")) &&
	    (*keyWords->get(2)->wordString == UTF("arsin")) &&
	    (*keyWords->get(3)->wordString == UTF("arcsin"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0035", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "getTokenTypeDescription()";
	TestCommonTools::consolePrintTestApiStart(35, testDescr);
	if ((*Token::getTokenTypeDescription(BinaryRelation::TYPE_ID) == *BinaryRelation::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(BitwiseOperator::TYPE_ID) == *BitwiseOperator::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(BooleanOperator::TYPE_ID) == *BooleanOperator::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(CalculusOperator::TYPE_ID) == *CalculusOperator::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(ConstantValue::TYPE_ID) == *ConstantValue::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(Function1Arg::TYPE_ID) == *Function1Arg::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(Function2Arg::TYPE_ID) == *Function2Arg::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(Function3Arg::TYPE_ID) == *Function3Arg::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(FunctionVariadic::TYPE_ID) == *FunctionVariadic::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(Operator::TYPE_ID) == *Operator::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(ParserSymbol::TYPE_ID) == *ParserSymbol::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(RandomVariable::TYPE_ID) == *RandomVariable::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(Unit::TYPE_ID) == *Unit::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(Argument::TYPE_ID) == *Argument::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(Constant::TYPE_ID) == *Constant::TYPE_DESC) &&
	    (*Token::getTokenTypeDescription(RecursiveArgument::TYPE_ID_RECURSIVE) == *
	     RecursiveArgument::TYPE_DESC_RECURSIVE) &&
	    (*Token::getTokenTypeDescription(Function::TYPE_ID) == *Function::TYPE_DESC)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0036", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convOthBase2Decimal()";
	TestCommonTools::consolePrintTestApiStart(36, testDescr);
	if (
		(NumberTheory::convOthBase2Decimal("11", 2) == 3.0) &&
		(NumberTheory::convOthBase2Decimal("011", 2) == 3.0) &&
		(NumberTheory::convOthBase2Decimal("000011", 2) == 3.0) &&
		(NumberTheory::convOthBase2Decimal("12", 3) == 5.0) &&
		(NumberTheory::convOthBase2Decimal("012", 3) == 5.0) &&
		(NumberTheory::convOthBase2Decimal("0012", 3) == 5.0) &&
		(NumberTheory::convOthBase2Decimal("123", 4) == 27.0) &&
		(NumberTheory::convOthBase2Decimal("0123", 4) == 27.0) &&
		(NumberTheory::convOthBase2Decimal("00123", 4) == 27.0) &&
		(NumberTheory::convOthBase2Decimal("1234", 5) == 194.0) &&
		(NumberTheory::convOthBase2Decimal("01234", 5) == 194.0) &&
		(NumberTheory::convOthBase2Decimal("001234", 5) == 194.0) &&
		(NumberTheory::convOthBase2Decimal("12345", 6) == 1865.0) &&
		(NumberTheory::convOthBase2Decimal("012345", 6) == 1865.0) &&
		(NumberTheory::convOthBase2Decimal("0012345", 6) == 1865.0) &&
		(NumberTheory::convOthBase2Decimal("123456", 7) == 22875.0) &&
		(NumberTheory::convOthBase2Decimal("0123456", 7) == 22875.0) &&
		(NumberTheory::convOthBase2Decimal("00123456", 7) == 22875.0) &&
		(NumberTheory::convOthBase2Decimal("1234567", 8) == 342391.0) &&
		(NumberTheory::convOthBase2Decimal("01234567", 8) == 342391.0) &&
		(NumberTheory::convOthBase2Decimal("01234567", 8) == 342391.0) &&
		(NumberTheory::convOthBase2Decimal("12345678", 9) == 6053444.0) &&
		(NumberTheory::convOthBase2Decimal("012345678", 9) == 6053444.0) &&
		(NumberTheory::convOthBase2Decimal("0012345678", 9) == 6053444.0) &&
		(NumberTheory::convOthBase2Decimal("123456789", 10) == 123456789.0) &&
		(NumberTheory::convOthBase2Decimal("0123456789", 10) == 123456789.0) &&
		(NumberTheory::convOthBase2Decimal("00123456789", 10) == 123456789.0) &&
		(NumberTheory::convOthBase2Decimal("123456789A", 11) == 2853116705.0) &&
		(NumberTheory::convOthBase2Decimal("0123456789A", 11) == 2853116705.0) &&
		(NumberTheory::convOthBase2Decimal("00123456789A", 11) == 2853116705.0) &&
		(NumberTheory::convOthBase2Decimal("123456789Ab", 12) == 73686780563.0) &&
		(NumberTheory::convOthBase2Decimal("0123456789Ab", 12) == 73686780563.0) &&
		(NumberTheory::convOthBase2Decimal("00123456789Ab", 12) == 73686780563.0) &&
		(NumberTheory::convOthBase2Decimal("123456789AbC", 13) == 2103299351334.0) &&
		(NumberTheory::convOthBase2Decimal("0123456789AbC", 13) == 2103299351334.0) &&
		(NumberTheory::convOthBase2Decimal("00123456789AbC", 13) == 2103299351334.0) &&
		(NumberTheory::convOthBase2Decimal("123456789AbCd", 14) == 65751519677857.0) &&
		(NumberTheory::convOthBase2Decimal("0123456789AbCd", 14) == 65751519677857.0) &&
		(NumberTheory::convOthBase2Decimal("00123456789AbCd", 14) == 65751519677857.0)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0037", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convOthBase2Decimal() - loop";
	TestCommonTools::consolePrintTestApiStart(37, testDescr);
	testResult = true;
	for (int decimalNumber = -1000; decimalNumber < 1000; decimalNumber++)
		for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase++) {
			if (NumberTheory::convOthBase2Decimal(*NumberTheory::convDecimal2OthBase(decimalNumber, numeralSystemBase),
			                                      numeralSystemBase) != decimalNumber) {
				testResult = false;
				break;
			}
		}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0038", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convert2Decimal() and other - special cases";
	TestCommonTools::consolePrintTestApiStart(38, testDescr);
	Char dc_1 = NumberTheory::digitChar(-1);
	Char dc37 = NumberTheory::digitChar(37);
	int di = NumberTheory::digitIndex(' ');
	double dec1 = NumberTheory::convOthBase2Decimal("", 1);
	double decNaN1 = NumberTheory::convOthBase2Decimal("1101", 0);
	double decNaN2 = NumberTheory::convOthBase2Decimal("1101", 37);
	double decNaN3 = NumberTheory::convOthBase2Decimal((StringPtr) nullptr, 3);
	double decNaN4 = NumberTheory::convOthBase2Decimal("", 3);
	double decNaN5 = NumberTheory::convOthBase2Decimal("1234", 4);
	StringPtr strNaN1 = NumberTheory::convDecimal2OthBase(Double::NaN, 2);
	StringPtr strNaN2 = NumberTheory::convDecimal2OthBase(2, 0);
	StringPtr strNaN3 = NumberTheory::convDecimal2OthBase(2, 37);
	if ((dc_1 == '?') &&
	    (dc37 == '?') &&
	    (di == -1) &&
	    (dec1 == 0) &&
	    (Double::isNaN(decNaN1)) &&
	    (Double::isNaN(decNaN2)) &&
	    (Double::isNaN(decNaN3)) &&
	    (Double::isNaN(decNaN4)) &&
	    (Double::isNaN(decNaN5)) &&
	    (*strNaN1 == UTF("NaN")) &&
	    (*strNaN2 == UTF("NaN")) &&
	    (*strNaN3 == UTF("NaN"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0039", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convert2Decimal() - loop";
	TestCommonTools::consolePrintTestApiStart(39, testDescr);
	testResult = true;
	for (int decimalNumber = -100; decimalNumber < 100; decimalNumber++)
		for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase++) {
			if (NumberTheory::convOthBase2Decimal(
				    *NumberTheory::convDecimal2OthBase(decimalNumber, numeralSystemBase, 1)) != decimalNumber) {
				testResult = false;
				break;
			}
		}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0040", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convert2Decimal() - loop";
	TestCommonTools::consolePrintTestApiStart(40, testDescr);
	testResult = true;
	for (int decimalNumber = -100; decimalNumber < 100; decimalNumber++)
		for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase++) {
			if (NumberTheory::convOthBase2Decimal(
				    *NumberTheory::convDecimal2OthBase(decimalNumber, numeralSystemBase, 2)) != decimalNumber) {
				testResult = false;
				break;
			}
		}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0041", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convert2Decimal() - loop";
	TestCommonTools::consolePrintTestApiStart(41, testDescr);
	testResult = true;
	for (int decimalNumber = -1000; decimalNumber < 1000; decimalNumber++)
		for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase++) {
			if (NumberTheory::convOthBase2Decimal(
				    *NumberTheory::convDecimal2OthBase(decimalNumber, numeralSystemBase, 0),
				    numeralSystemBase) != decimalNumber) {
				testResult = false;
				break;
			}
		}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0042", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "getNumeralSystemBase()";
	TestCommonTools::consolePrintTestApiStart(42, testDescr);
	if (
		(NumberTheory::getNumeralSystemBase("h.1234567890aBcDeF") == 16) &&
		(NumberTheory::getNumeralSystemBase("o.12345670") == 8) &&
		(NumberTheory::getNumeralSystemBase("b.101010") == 2) &&
		(NumberTheory::getNumeralSystemBase("b1.") == 1) &&
		(NumberTheory::getNumeralSystemBase("b2.01") == 2) &&
		(NumberTheory::getNumeralSystemBase("b3.012") == 3) &&
		(NumberTheory::getNumeralSystemBase("b4.0123") == 4) &&
		(NumberTheory::getNumeralSystemBase("b5.01234") == 5) &&
		(NumberTheory::getNumeralSystemBase("b6.012345") == 6) &&
		(NumberTheory::getNumeralSystemBase("b7.0123456") == 7) &&
		(NumberTheory::getNumeralSystemBase("b8.01234567") == 8) &&
		(NumberTheory::getNumeralSystemBase("b9.012345678") == 9) &&
		(NumberTheory::getNumeralSystemBase("b10.0123456789") == 10) &&
		(NumberTheory::getNumeralSystemBase("b11.0123456789a") == 11) &&
		(NumberTheory::getNumeralSystemBase("b12.0123456789ab") == 12) &&
		(NumberTheory::getNumeralSystemBase("b13.0123456789abc") == 13) &&
		(NumberTheory::getNumeralSystemBase("b14.0123456789abcd") == 14) &&
		(NumberTheory::getNumeralSystemBase("b15.0123456789abcde") == 15) &&
		(NumberTheory::getNumeralSystemBase("b16.0123456789abcdef") == 16) &&
		(NumberTheory::getNumeralSystemBase("b16.0123456789abcdef") == 16) &&
		(NumberTheory::getNumeralSystemBase("b17.0123456789abcdefg") == 17) &&
		(NumberTheory::getNumeralSystemBase("b18.0123456789abcdefgh") == 18) &&
		(NumberTheory::getNumeralSystemBase("b19.0123456789abcdefghi") == 19) &&
		(NumberTheory::getNumeralSystemBase("b20.0123456789abcdefghij") == 20) &&
		(NumberTheory::getNumeralSystemBase("b21.0123456789abcdefghijk") == 21) &&
		(NumberTheory::getNumeralSystemBase("b22.0123456789abcdefghijkl") == 22) &&
		(NumberTheory::getNumeralSystemBase("b23.0123456789abcdefghijklm") == 23) &&
		(NumberTheory::getNumeralSystemBase("b24.0123456789abcdefghijklmn") == 24) &&
		(NumberTheory::getNumeralSystemBase("b25.0123456789abcdefghijklmno") == 25) &&
		(NumberTheory::getNumeralSystemBase("b26.0123456789abcdefghijklmnop") == 26) &&
		(NumberTheory::getNumeralSystemBase("b27.0123456789abcdefghijklmnopq") == 27) &&
		(NumberTheory::getNumeralSystemBase("b28.0123456789abcdefghijklmnopqr") == 28) &&
		(NumberTheory::getNumeralSystemBase("b29.0123456789abcdefghijklmnopqrs") == 29) &&
		(NumberTheory::getNumeralSystemBase("b30.0123456789abcdefghijklmnopqrst") == 30) &&
		(NumberTheory::getNumeralSystemBase("b31.0123456789abcdefghijklmnopqrstu") == 31) &&
		(NumberTheory::getNumeralSystemBase("b32.0123456789abcdefghijklmnopqrstuv") == 32) &&
		(NumberTheory::getNumeralSystemBase("b33.0123456789abcdefghijklmnopqrstuvw") == 33) &&
		(NumberTheory::getNumeralSystemBase("b34.0123456789abcdefghijklmnopqrstuvwx") == 34) &&
		(NumberTheory::getNumeralSystemBase("b35.0123456789abcdefghijklmnopqrstuvwxy") == 35) &&
		(NumberTheory::getNumeralSystemBase("b36.0123456789abcdefghijklmnopqrstuvwxyz") == 36) &&
		(NumberTheory::getNumeralSystemBase("H.001234567890aBcDeF") == 16) &&
		(NumberTheory::getNumeralSystemBase("O.0012345670") == 8) &&
		(NumberTheory::getNumeralSystemBase("B.000101010") == 2) &&
		(NumberTheory::getNumeralSystemBase("B1.111") == 1) &&
		(NumberTheory::getNumeralSystemBase("B2.0101") == 2) &&
		(NumberTheory::getNumeralSystemBase("B3.0012") == 3) &&
		(NumberTheory::getNumeralSystemBase("B4.00123") == 4) &&
		(NumberTheory::getNumeralSystemBase("B5.001234") == 5) &&
		(NumberTheory::getNumeralSystemBase("B6.0012345") == 6) &&
		(NumberTheory::getNumeralSystemBase("B7.00123456") == 7) &&
		(NumberTheory::getNumeralSystemBase("B8.001234567") == 8) &&
		(NumberTheory::getNumeralSystemBase("B9.0012345678") == 9) &&
		(NumberTheory::getNumeralSystemBase("B10.00123456789") == 10) &&
		(NumberTheory::getNumeralSystemBase("B11.00123456789A") == 11) &&
		(NumberTheory::getNumeralSystemBase("B12.00123456789AB") == 12) &&
		(NumberTheory::getNumeralSystemBase("B13.00123456789ABC") == 13) &&
		(NumberTheory::getNumeralSystemBase("B14.00123456789ABCD") == 14) &&
		(NumberTheory::getNumeralSystemBase("B15.00123456789ABCDE") == 15) &&
		(NumberTheory::getNumeralSystemBase("B16.00123456789ABCDEF") == 16) &&
		(NumberTheory::getNumeralSystemBase("B16.00123456789ABCDEF") == 16) &&
		(NumberTheory::getNumeralSystemBase("B17.00123456789ABCDEFG") == 17) &&
		(NumberTheory::getNumeralSystemBase("B18.00123456789ABCDEFGH") == 18) &&
		(NumberTheory::getNumeralSystemBase("B19.00123456789ABCDEFGI") == 19) &&
		(NumberTheory::getNumeralSystemBase("B20.00123456789ABCDEFGIJ") == 20) &&
		(NumberTheory::getNumeralSystemBase("B21.00123456789ABCDEFGIJK") == 21) &&
		(NumberTheory::getNumeralSystemBase("B22.00123456789ABCDEFGIJKL") == 22) &&
		(NumberTheory::getNumeralSystemBase("B23.00123456789ABCDEFGIJKLM") == 23) &&
		(NumberTheory::getNumeralSystemBase("B24.00123456789ABCDEFGIJKLMN") == 24) &&
		(NumberTheory::getNumeralSystemBase("B25.00123456789ABCDEFGIJKLMNO") == 25) &&
		(NumberTheory::getNumeralSystemBase("B26.00123456789ABCDEFGIJKLMNOP") == 26) &&
		(NumberTheory::getNumeralSystemBase("B27.00123456789ABCDEFGIJKLMNOPQ") == 27) &&
		(NumberTheory::getNumeralSystemBase("B28.00123456789ABCDEFGIJKLMNOPQR") == 28) &&
		(NumberTheory::getNumeralSystemBase("B29.00123456789ABCDEFGIJKLMNOPQRS") == 29) &&
		(NumberTheory::getNumeralSystemBase("B30.00123456789ABCDEFGIJKLMNOPQRST") == 30) &&
		(NumberTheory::getNumeralSystemBase("B31.00123456789ABCDEFGIJKLMNOPQRSTU") == 31) &&
		(NumberTheory::getNumeralSystemBase("B32.00123456789ABCDEFGIJKLMNOPQRSTUV") == 32) &&
		(NumberTheory::getNumeralSystemBase("B33.00123456789ABCDEFGIJKLMNOPQRSTUVW") == 33) &&
		(NumberTheory::getNumeralSystemBase("B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX") == 34) &&
		(NumberTheory::getNumeralSystemBase("B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY") == 35) &&
		(NumberTheory::getNumeralSystemBase("B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ") == 36) &&
		(NumberTheory::getNumeralSystemBase("-h.1234567890aBcDeF") == 16) &&
		(NumberTheory::getNumeralSystemBase("-o.12345670") == 8) &&
		(NumberTheory::getNumeralSystemBase("-b.101010") == 2) &&
		(NumberTheory::getNumeralSystemBase("-b1.") == 1) &&
		(NumberTheory::getNumeralSystemBase("-b2.01") == 2) &&
		(NumberTheory::getNumeralSystemBase("-b3.012") == 3) &&
		(NumberTheory::getNumeralSystemBase("-b4.0123") == 4) &&
		(NumberTheory::getNumeralSystemBase("-b5.01234") == 5) &&
		(NumberTheory::getNumeralSystemBase("-b6.012345") == 6) &&
		(NumberTheory::getNumeralSystemBase("-b7.0123456") == 7) &&
		(NumberTheory::getNumeralSystemBase("-b8.01234567") == 8) &&
		(NumberTheory::getNumeralSystemBase("-b9.012345678") == 9) &&
		(NumberTheory::getNumeralSystemBase("-b10.0123456789") == 10) &&
		(NumberTheory::getNumeralSystemBase("-b11.0123456789a") == 11) &&
		(NumberTheory::getNumeralSystemBase("-b12.0123456789ab") == 12) &&
		(NumberTheory::getNumeralSystemBase("-b13.0123456789abc") == 13) &&
		(NumberTheory::getNumeralSystemBase("-b14.0123456789abcd") == 14) &&
		(NumberTheory::getNumeralSystemBase("-b15.0123456789abcde") == 15) &&
		(NumberTheory::getNumeralSystemBase("-b16.0123456789abcdef") == 16) &&
		(NumberTheory::getNumeralSystemBase("-b16.0123456789abcdef") == 16) &&
		(NumberTheory::getNumeralSystemBase("-b17.0123456789abcdefg") == 17) &&
		(NumberTheory::getNumeralSystemBase("-b18.0123456789abcdefgh") == 18) &&
		(NumberTheory::getNumeralSystemBase("-b19.0123456789abcdefghi") == 19) &&
		(NumberTheory::getNumeralSystemBase("-b20.0123456789abcdefghij") == 20) &&
		(NumberTheory::getNumeralSystemBase("-b21.0123456789abcdefghijk") == 21) &&
		(NumberTheory::getNumeralSystemBase("-b22.0123456789abcdefghijkl") == 22) &&
		(NumberTheory::getNumeralSystemBase("-b23.0123456789abcdefghijklm") == 23) &&
		(NumberTheory::getNumeralSystemBase("-b24.0123456789abcdefghijklmn") == 24) &&
		(NumberTheory::getNumeralSystemBase("-b25.0123456789abcdefghijklmno") == 25) &&
		(NumberTheory::getNumeralSystemBase("-b26.0123456789abcdefghijklmnop") == 26) &&
		(NumberTheory::getNumeralSystemBase("-b27.0123456789abcdefghijklmnopq") == 27) &&
		(NumberTheory::getNumeralSystemBase("-b28.0123456789abcdefghijklmnopqr") == 28) &&
		(NumberTheory::getNumeralSystemBase("-b29.0123456789abcdefghijklmnopqrs") == 29) &&
		(NumberTheory::getNumeralSystemBase("-b30.0123456789abcdefghijklmnopqrst") == 30) &&
		(NumberTheory::getNumeralSystemBase("-b31.0123456789abcdefghijklmnopqrstu") == 31) &&
		(NumberTheory::getNumeralSystemBase("-b32.0123456789abcdefghijklmnopqrstuv") == 32) &&
		(NumberTheory::getNumeralSystemBase("-b33.0123456789abcdefghijklmnopqrstuvw") == 33) &&
		(NumberTheory::getNumeralSystemBase("-b34.0123456789abcdefghijklmnopqrstuvwx") == 34) &&
		(NumberTheory::getNumeralSystemBase("-b35.0123456789abcdefghijklmnopqrstuvwxy") == 35) &&
		(NumberTheory::getNumeralSystemBase("-b36.0123456789abcdefghijklmnopqrstuvwxyz") == 36) &&
		(NumberTheory::getNumeralSystemBase("-H.001234567890aBcDeF") == 16) &&
		(NumberTheory::getNumeralSystemBase("-O.0012345670") == 8) &&
		(NumberTheory::getNumeralSystemBase("-B.000101010") == 2) &&
		(NumberTheory::getNumeralSystemBase("-B1.111") == 1) &&
		(NumberTheory::getNumeralSystemBase("-B2.0101") == 2) &&
		(NumberTheory::getNumeralSystemBase("-B3.0012") == 3) &&
		(NumberTheory::getNumeralSystemBase("-B4.00123") == 4) &&
		(NumberTheory::getNumeralSystemBase("-B5.001234") == 5) &&
		(NumberTheory::getNumeralSystemBase("-B6.0012345") == 6) &&
		(NumberTheory::getNumeralSystemBase("-B7.00123456") == 7) &&
		(NumberTheory::getNumeralSystemBase("-B8.001234567") == 8) &&
		(NumberTheory::getNumeralSystemBase("-B9.0012345678") == 9) &&
		(NumberTheory::getNumeralSystemBase("-B10.00123456789") == 10) &&
		(NumberTheory::getNumeralSystemBase("-B11.00123456789A") == 11) &&
		(NumberTheory::getNumeralSystemBase("-B12.00123456789AB") == 12) &&
		(NumberTheory::getNumeralSystemBase("-B13.00123456789ABC") == 13) &&
		(NumberTheory::getNumeralSystemBase("-B14.00123456789ABCD") == 14) &&
		(NumberTheory::getNumeralSystemBase("-B15.00123456789ABCDE") == 15) &&
		(NumberTheory::getNumeralSystemBase("-B16.00123456789ABCDEF") == 16) &&
		(NumberTheory::getNumeralSystemBase("-B16.00123456789ABCDEF") == 16) &&
		(NumberTheory::getNumeralSystemBase("-B17.00123456789ABCDEFG") == 17) &&
		(NumberTheory::getNumeralSystemBase("-B18.00123456789ABCDEFGH") == 18) &&
		(NumberTheory::getNumeralSystemBase("-B19.00123456789ABCDEFGI") == 19) &&
		(NumberTheory::getNumeralSystemBase("-B20.00123456789ABCDEFGIJ") == 20) &&
		(NumberTheory::getNumeralSystemBase("-B21.00123456789ABCDEFGIJK") == 21) &&
		(NumberTheory::getNumeralSystemBase("-B22.00123456789ABCDEFGIJKL") == 22) &&
		(NumberTheory::getNumeralSystemBase("-B23.00123456789ABCDEFGIJKLM") == 23) &&
		(NumberTheory::getNumeralSystemBase("-B24.00123456789ABCDEFGIJKLMN") == 24) &&
		(NumberTheory::getNumeralSystemBase("-B25.00123456789ABCDEFGIJKLMNO") == 25) &&
		(NumberTheory::getNumeralSystemBase("-B26.00123456789ABCDEFGIJKLMNOP") == 26) &&
		(NumberTheory::getNumeralSystemBase("-B27.00123456789ABCDEFGIJKLMNOPQ") == 27) &&
		(NumberTheory::getNumeralSystemBase("-B28.00123456789ABCDEFGIJKLMNOPQR") == 28) &&
		(NumberTheory::getNumeralSystemBase("-B29.00123456789ABCDEFGIJKLMNOPQRS") == 29) &&
		(NumberTheory::getNumeralSystemBase("-B30.00123456789ABCDEFGIJKLMNOPQRST") == 30) &&
		(NumberTheory::getNumeralSystemBase("-B31.00123456789ABCDEFGIJKLMNOPQRSTU") == 31) &&
		(NumberTheory::getNumeralSystemBase("-B32.00123456789ABCDEFGIJKLMNOPQRSTUV") == 32) &&
		(NumberTheory::getNumeralSystemBase("-B33.00123456789ABCDEFGIJKLMNOPQRSTUVW") == 33) &&
		(NumberTheory::getNumeralSystemBase("-B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX") == 34) &&
		(NumberTheory::getNumeralSystemBase("-B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY") == 35) &&
		(NumberTheory::getNumeralSystemBase("-B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ") == 36) &&
		(NumberTheory::getNumeralSystemBase("+h.1234567890aBcDeF") == 16) &&
		(NumberTheory::getNumeralSystemBase("+o.12345670") == 8) &&
		(NumberTheory::getNumeralSystemBase("+b.101010") == 2) &&
		(NumberTheory::getNumeralSystemBase("+b1.") == 1) &&
		(NumberTheory::getNumeralSystemBase("+b2.01") == 2) &&
		(NumberTheory::getNumeralSystemBase("+b3.012") == 3) &&
		(NumberTheory::getNumeralSystemBase("+b4.0123") == 4) &&
		(NumberTheory::getNumeralSystemBase("+b5.01234") == 5) &&
		(NumberTheory::getNumeralSystemBase("+b6.012345") == 6) &&
		(NumberTheory::getNumeralSystemBase("+b7.0123456") == 7) &&
		(NumberTheory::getNumeralSystemBase("+b8.01234567") == 8) &&
		(NumberTheory::getNumeralSystemBase("+b9.012345678") == 9) &&
		(NumberTheory::getNumeralSystemBase("+b10.0123456789") == 10) &&
		(NumberTheory::getNumeralSystemBase("+b11.0123456789a") == 11) &&
		(NumberTheory::getNumeralSystemBase("+b12.0123456789ab") == 12) &&
		(NumberTheory::getNumeralSystemBase("+b13.0123456789abc") == 13) &&
		(NumberTheory::getNumeralSystemBase("+b14.0123456789abcd") == 14) &&
		(NumberTheory::getNumeralSystemBase("+b15.0123456789abcde") == 15) &&
		(NumberTheory::getNumeralSystemBase("+b16.0123456789abcdef") == 16) &&
		(NumberTheory::getNumeralSystemBase("+b16.0123456789abcdef") == 16) &&
		(NumberTheory::getNumeralSystemBase("+b17.0123456789abcdefg") == 17) &&
		(NumberTheory::getNumeralSystemBase("+b18.0123456789abcdefgh") == 18) &&
		(NumberTheory::getNumeralSystemBase("+b19.0123456789abcdefghi") == 19) &&
		(NumberTheory::getNumeralSystemBase("+b20.0123456789abcdefghij") == 20) &&
		(NumberTheory::getNumeralSystemBase("+b21.0123456789abcdefghijk") == 21) &&
		(NumberTheory::getNumeralSystemBase("+b22.0123456789abcdefghijkl") == 22) &&
		(NumberTheory::getNumeralSystemBase("+b23.0123456789abcdefghijklm") == 23) &&
		(NumberTheory::getNumeralSystemBase("+b24.0123456789abcdefghijklmn") == 24) &&
		(NumberTheory::getNumeralSystemBase("+b25.0123456789abcdefghijklmno") == 25) &&
		(NumberTheory::getNumeralSystemBase("+b26.0123456789abcdefghijklmnop") == 26) &&
		(NumberTheory::getNumeralSystemBase("+b27.0123456789abcdefghijklmnopq") == 27) &&
		(NumberTheory::getNumeralSystemBase("+b28.0123456789abcdefghijklmnopqr") == 28) &&
		(NumberTheory::getNumeralSystemBase("+b29.0123456789abcdefghijklmnopqrs") == 29) &&
		(NumberTheory::getNumeralSystemBase("+b30.0123456789abcdefghijklmnopqrst") == 30) &&
		(NumberTheory::getNumeralSystemBase("+b31.0123456789abcdefghijklmnopqrstu") == 31) &&
		(NumberTheory::getNumeralSystemBase("+b32.0123456789abcdefghijklmnopqrstuv") == 32) &&
		(NumberTheory::getNumeralSystemBase("+b33.0123456789abcdefghijklmnopqrstuvw") == 33) &&
		(NumberTheory::getNumeralSystemBase("+b34.0123456789abcdefghijklmnopqrstuvwx") == 34) &&
		(NumberTheory::getNumeralSystemBase("+b35.0123456789abcdefghijklmnopqrstuvwxy") == 35) &&
		(NumberTheory::getNumeralSystemBase("+b36.0123456789abcdefghijklmnopqrstuvwxyz") == 36) &&
		(NumberTheory::getNumeralSystemBase("+H.001234567890aBcDeF") == 16) &&
		(NumberTheory::getNumeralSystemBase("+O.0012345670") == 8) &&
		(NumberTheory::getNumeralSystemBase("+B.000101010") == 2) &&
		(NumberTheory::getNumeralSystemBase("+B1.111") == 1) &&
		(NumberTheory::getNumeralSystemBase("+B2.0101") == 2) &&
		(NumberTheory::getNumeralSystemBase("+B3.0012") == 3) &&
		(NumberTheory::getNumeralSystemBase("+B4.00123") == 4) &&
		(NumberTheory::getNumeralSystemBase("+B5.001234") == 5) &&
		(NumberTheory::getNumeralSystemBase("+B6.0012345") == 6) &&
		(NumberTheory::getNumeralSystemBase("+B7.00123456") == 7) &&
		(NumberTheory::getNumeralSystemBase("+B8.001234567") == 8) &&
		(NumberTheory::getNumeralSystemBase("+B9.0012345678") == 9) &&
		(NumberTheory::getNumeralSystemBase("+B10.00123456789") == 10) &&
		(NumberTheory::getNumeralSystemBase("+B11.00123456789A") == 11) &&
		(NumberTheory::getNumeralSystemBase("+B12.00123456789AB") == 12) &&
		(NumberTheory::getNumeralSystemBase("+B13.00123456789ABC") == 13) &&
		(NumberTheory::getNumeralSystemBase("+B14.00123456789ABCD") == 14) &&
		(NumberTheory::getNumeralSystemBase("+B15.00123456789ABCDE") == 15) &&
		(NumberTheory::getNumeralSystemBase("+B16.00123456789ABCDEF") == 16) &&
		(NumberTheory::getNumeralSystemBase("+B16.00123456789ABCDEF") == 16) &&
		(NumberTheory::getNumeralSystemBase("+B17.00123456789ABCDEFG") == 17) &&
		(NumberTheory::getNumeralSystemBase("+B18.00123456789ABCDEFGH") == 18) &&
		(NumberTheory::getNumeralSystemBase("+B19.00123456789ABCDEFGI") == 19) &&
		(NumberTheory::getNumeralSystemBase("+B20.00123456789ABCDEFGIJ") == 20) &&
		(NumberTheory::getNumeralSystemBase("+B21.00123456789ABCDEFGIJK") == 21) &&
		(NumberTheory::getNumeralSystemBase("+B22.00123456789ABCDEFGIJKL") == 22) &&
		(NumberTheory::getNumeralSystemBase("+B23.00123456789ABCDEFGIJKLM") == 23) &&
		(NumberTheory::getNumeralSystemBase("+B24.00123456789ABCDEFGIJKLMN") == 24) &&
		(NumberTheory::getNumeralSystemBase("+B25.00123456789ABCDEFGIJKLMNO") == 25) &&
		(NumberTheory::getNumeralSystemBase("+B26.00123456789ABCDEFGIJKLMNOP") == 26) &&
		(NumberTheory::getNumeralSystemBase("+B27.00123456789ABCDEFGIJKLMNOPQ") == 27) &&
		(NumberTheory::getNumeralSystemBase("+B28.00123456789ABCDEFGIJKLMNOPQR") == 28) &&
		(NumberTheory::getNumeralSystemBase("+B29.00123456789ABCDEFGIJKLMNOPQRS") == 29) &&
		(NumberTheory::getNumeralSystemBase("+B30.00123456789ABCDEFGIJKLMNOPQRST") == 30) &&
		(NumberTheory::getNumeralSystemBase("+B31.00123456789ABCDEFGIJKLMNOPQRSTU") == 31) &&
		(NumberTheory::getNumeralSystemBase("+B32.00123456789ABCDEFGIJKLMNOPQRSTUV") == 32) &&
		(NumberTheory::getNumeralSystemBase("+B33.00123456789ABCDEFGIJKLMNOPQRSTUVW") == 33) &&
		(NumberTheory::getNumeralSystemBase("+B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX") == 34) &&
		(NumberTheory::getNumeralSystemBase("+B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY") == 35) &&
		(NumberTheory::getNumeralSystemBase("+B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ") == 36)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0043", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convOthBase2Decimal()";
	TestCommonTools::consolePrintTestApiStart(43, testDescr);
	if (
		(NumberTheory::convOthBase2Decimal("b1.") == 0) &&
		(NumberTheory::convOthBase2Decimal("b1.111") == 3) &&
		(NumberTheory::convOthBase2Decimal("b2.101") == 5) &&
		(NumberTheory::convOthBase2Decimal("b3.121") == 16) &&
		(NumberTheory::convOthBase2Decimal("b4.123") == 27) &&
		(NumberTheory::convOthBase2Decimal("b5.341") == 96) &&
		(NumberTheory::convOthBase2Decimal("b6.352") == 140) &&
		(NumberTheory::convOthBase2Decimal("b7.256") == 139) &&
		(NumberTheory::convOthBase2Decimal("b8.376") == 254) &&
		(NumberTheory::convOthBase2Decimal("o.376") == 254) &&
		(NumberTheory::convOthBase2Decimal("b.101") == 5) &&
		(NumberTheory::convOthBase2Decimal("b9.821") == 667) &&
		(NumberTheory::convOthBase2Decimal("b10.394") == 394) &&
		(NumberTheory::convOthBase2Decimal("b11.3A7") == 480) &&
		(NumberTheory::convOthBase2Decimal("b12.A5B") == 1511) &&
		(NumberTheory::convOthBase2Decimal("b13.ACB") == 1857) &&
		(NumberTheory::convOthBase2Decimal("b14.2AD") == 545) &&
		(NumberTheory::convOthBase2Decimal("b15.BE4") == 2689) &&
		(NumberTheory::convOthBase2Decimal("b16.FA2") == 4002) &&
		(NumberTheory::convOthBase2Decimal("h.FA2") == 4002) &&
		(NumberTheory::convOthBase2Decimal("b17.AG6") == 3168) &&
		(NumberTheory::convOthBase2Decimal("b18.FGH") == 5165) &&
		(NumberTheory::convOthBase2Decimal("b19.2I3") == 1067) &&
		(NumberTheory::convOthBase2Decimal("b20.9CJ") == 3859) &&
		(NumberTheory::convOthBase2Decimal("b21.K5F") == 8940) &&
		(NumberTheory::convOthBase2Decimal("b22.FL5") == 7727) &&
		(NumberTheory::convOthBase2Decimal("b23.1AM") == 781) &&
		(NumberTheory::convOthBase2Decimal("b24.5ND") == 3445) &&
		(NumberTheory::convOthBase2Decimal("b25.5ND5C") == 2320762) &&
		(NumberTheory::convOthBase2Decimal("b26.3KPB5") == 1739639) &&
		(NumberTheory::convOthBase2Decimal("b27.IQH67") == 10090258) &&
		(NumberTheory::convOthBase2Decimal("b28.RKHB2") == 17048390) &&
		(NumberTheory::convOthBase2Decimal("b29.8BIFS") == 5942128) &&
		(NumberTheory::convOthBase2Decimal("b30.2TGJB") == 2417981) &&
		(NumberTheory::convOthBase2Decimal("b31.6PUC0") == 6315103) &&
		(NumberTheory::convOthBase2Decimal("b32.C0PV0") == 12609504) &&
		(NumberTheory::convOthBase2Decimal("b33.V000W") == 36763583) &&
		(NumberTheory::convOthBase2Decimal("b34.NP2XW") == 31721794) &&
		(NumberTheory::convOthBase2Decimal("b35.120Y0") == 1587565) &&
		(NumberTheory::convOthBase2Decimal("b36.ZZZZZ") == 60466175) &&
		(NumberTheory::convOthBase2Decimal("B1.") == 0) &&
		(NumberTheory::convOthBase2Decimal("B1.111") == 3) &&
		(NumberTheory::convOthBase2Decimal("B2.00101") == 5) &&
		(NumberTheory::convOthBase2Decimal("B3.00121") == 16) &&
		(NumberTheory::convOthBase2Decimal("B4.00123") == 27) &&
		(NumberTheory::convOthBase2Decimal("B5.00341") == 96) &&
		(NumberTheory::convOthBase2Decimal("B6.00352") == 140) &&
		(NumberTheory::convOthBase2Decimal("B7.00256") == 139) &&
		(NumberTheory::convOthBase2Decimal("B8.00376") == 254) &&
		(NumberTheory::convOthBase2Decimal("O.00376") == 254) &&
		(NumberTheory::convOthBase2Decimal("B.00101") == 5) &&
		(NumberTheory::convOthBase2Decimal("B9.00821") == 667) &&
		(NumberTheory::convOthBase2Decimal("B10.00394") == 394) &&
		(NumberTheory::convOthBase2Decimal("B11.003a7") == 480) &&
		(NumberTheory::convOthBase2Decimal("B12.00a5b") == 1511) &&
		(NumberTheory::convOthBase2Decimal("B13.00acb") == 1857) &&
		(NumberTheory::convOthBase2Decimal("B14.002ad") == 545) &&
		(NumberTheory::convOthBase2Decimal("B15.00be4") == 2689) &&
		(NumberTheory::convOthBase2Decimal("B16.00fa2") == 4002) &&
		(NumberTheory::convOthBase2Decimal("H.00fa2") == 4002) &&
		(NumberTheory::convOthBase2Decimal("B17.00ag6") == 3168) &&
		(NumberTheory::convOthBase2Decimal("B18.00fgh") == 5165) &&
		(NumberTheory::convOthBase2Decimal("B19.002i3") == 1067) &&
		(NumberTheory::convOthBase2Decimal("B20.009cj") == 3859) &&
		(NumberTheory::convOthBase2Decimal("B21.00k5f") == 8940) &&
		(NumberTheory::convOthBase2Decimal("B22.00fl5") == 7727) &&
		(NumberTheory::convOthBase2Decimal("B23.001am") == 781) &&
		(NumberTheory::convOthBase2Decimal("B24.005nd") == 3445) &&
		(NumberTheory::convOthBase2Decimal("B25.005nd5c") == 2320762) &&
		(NumberTheory::convOthBase2Decimal("B26.003kpb5") == 1739639) &&
		(NumberTheory::convOthBase2Decimal("B27.00iqh67") == 10090258) &&
		(NumberTheory::convOthBase2Decimal("B28.00rkhb2") == 17048390) &&
		(NumberTheory::convOthBase2Decimal("B29.008bifs") == 5942128) &&
		(NumberTheory::convOthBase2Decimal("B30.002tgjb") == 2417981) &&
		(NumberTheory::convOthBase2Decimal("B31.006puc0") == 6315103) &&
		(NumberTheory::convOthBase2Decimal("B32.00c0pv0") == 12609504) &&
		(NumberTheory::convOthBase2Decimal("B33.00v000w") == 36763583) &&
		(NumberTheory::convOthBase2Decimal("B34.00np2xw") == 31721794) &&
		(NumberTheory::convOthBase2Decimal("B35.00120y0") == 1587565) &&
		(NumberTheory::convOthBase2Decimal("B36.00zzzzz") == 60466175) &&
		(NumberTheory::convOthBase2Decimal("+b1.") == 0) &&
		(NumberTheory::convOthBase2Decimal("+b1.111") == 3) &&
		(NumberTheory::convOthBase2Decimal("+b2.101") == 5) &&
		(NumberTheory::convOthBase2Decimal("+b3.121") == 16) &&
		(NumberTheory::convOthBase2Decimal("+b4.123") == 27) &&
		(NumberTheory::convOthBase2Decimal("+b5.341") == 96) &&
		(NumberTheory::convOthBase2Decimal("+b6.352") == 140) &&
		(NumberTheory::convOthBase2Decimal("+b7.256") == 139) &&
		(NumberTheory::convOthBase2Decimal("+b8.376") == 254) &&
		(NumberTheory::convOthBase2Decimal("+o.376") == 254) &&
		(NumberTheory::convOthBase2Decimal("+b.101") == 5) &&
		(NumberTheory::convOthBase2Decimal("+b9.821") == 667) &&
		(NumberTheory::convOthBase2Decimal("+b10.394") == 394) &&
		(NumberTheory::convOthBase2Decimal("+b11.3A7") == 480) &&
		(NumberTheory::convOthBase2Decimal("+b12.A5B") == 1511) &&
		(NumberTheory::convOthBase2Decimal("+b13.ACB") == 1857) &&
		(NumberTheory::convOthBase2Decimal("+b14.2AD") == 545) &&
		(NumberTheory::convOthBase2Decimal("+b15.BE4") == 2689) &&
		(NumberTheory::convOthBase2Decimal("+b16.FA2") == 4002) &&
		(NumberTheory::convOthBase2Decimal("+h.FA2") == 4002) &&
		(NumberTheory::convOthBase2Decimal("+b17.AG6") == 3168) &&
		(NumberTheory::convOthBase2Decimal("+b18.FGH") == 5165) &&
		(NumberTheory::convOthBase2Decimal("+b19.2I3") == 1067) &&
		(NumberTheory::convOthBase2Decimal("+b20.9CJ") == 3859) &&
		(NumberTheory::convOthBase2Decimal("+b21.K5F") == 8940) &&
		(NumberTheory::convOthBase2Decimal("+b22.FL5") == 7727) &&
		(NumberTheory::convOthBase2Decimal("+b23.1AM") == 781) &&
		(NumberTheory::convOthBase2Decimal("+b24.5ND") == 3445) &&
		(NumberTheory::convOthBase2Decimal("+b25.5ND5C") == 2320762) &&
		(NumberTheory::convOthBase2Decimal("+b26.3KPB5") == 1739639) &&
		(NumberTheory::convOthBase2Decimal("+b27.IQH67") == 10090258) &&
		(NumberTheory::convOthBase2Decimal("+b28.RKHB2") == 17048390) &&
		(NumberTheory::convOthBase2Decimal("+b29.8BIFS") == 5942128) &&
		(NumberTheory::convOthBase2Decimal("+b30.2TGJB") == 2417981) &&
		(NumberTheory::convOthBase2Decimal("+b31.6PUC0") == 6315103) &&
		(NumberTheory::convOthBase2Decimal("+b32.C0PV0") == 12609504) &&
		(NumberTheory::convOthBase2Decimal("+b33.V000W") == 36763583) &&
		(NumberTheory::convOthBase2Decimal("+b34.NP2XW") == 31721794) &&
		(NumberTheory::convOthBase2Decimal("+b35.120Y0") == 1587565) &&
		(NumberTheory::convOthBase2Decimal("+b36.ZZZZZ") == 60466175) &&
		(NumberTheory::convOthBase2Decimal("+B1.") == 0) &&
		(NumberTheory::convOthBase2Decimal("+B1.111") == 3) &&
		(NumberTheory::convOthBase2Decimal("+B2.00101") == 5) &&
		(NumberTheory::convOthBase2Decimal("+B3.00121") == 16) &&
		(NumberTheory::convOthBase2Decimal("+B4.00123") == 27) &&
		(NumberTheory::convOthBase2Decimal("+B5.00341") == 96) &&
		(NumberTheory::convOthBase2Decimal("+B6.00352") == 140) &&
		(NumberTheory::convOthBase2Decimal("+B7.00256") == 139) &&
		(NumberTheory::convOthBase2Decimal("+B8.00376") == 254) &&
		(NumberTheory::convOthBase2Decimal("+O.00376") == 254) &&
		(NumberTheory::convOthBase2Decimal("+B.00101") == 5) &&
		(NumberTheory::convOthBase2Decimal("+B9.00821") == 667) &&
		(NumberTheory::convOthBase2Decimal("+B10.00394") == 394) &&
		(NumberTheory::convOthBase2Decimal("+B11.003a7") == 480) &&
		(NumberTheory::convOthBase2Decimal("+B12.00a5b") == 1511) &&
		(NumberTheory::convOthBase2Decimal("+B13.00acb") == 1857) &&
		(NumberTheory::convOthBase2Decimal("+B14.002ad") == 545) &&
		(NumberTheory::convOthBase2Decimal("+B15.00be4") == 2689) &&
		(NumberTheory::convOthBase2Decimal("+B16.00fa2") == 4002) &&
		(NumberTheory::convOthBase2Decimal("+H.00fa2") == 4002) &&
		(NumberTheory::convOthBase2Decimal("+B17.00ag6") == 3168) &&
		(NumberTheory::convOthBase2Decimal("+B18.00fgh") == 5165) &&
		(NumberTheory::convOthBase2Decimal("+B19.002i3") == 1067) &&
		(NumberTheory::convOthBase2Decimal("+B20.009cj") == 3859) &&
		(NumberTheory::convOthBase2Decimal("+B21.00k5f") == 8940) &&
		(NumberTheory::convOthBase2Decimal("+B22.00fl5") == 7727) &&
		(NumberTheory::convOthBase2Decimal("+B23.001am") == 781) &&
		(NumberTheory::convOthBase2Decimal("+B24.005nd") == 3445) &&
		(NumberTheory::convOthBase2Decimal("+B25.005nd5c") == 2320762) &&
		(NumberTheory::convOthBase2Decimal("+B26.003kpb5") == 1739639) &&
		(NumberTheory::convOthBase2Decimal("+B27.00iqh67") == 10090258) &&
		(NumberTheory::convOthBase2Decimal("+B28.00rkhb2") == 17048390) &&
		(NumberTheory::convOthBase2Decimal("+B29.008bifs") == 5942128) &&
		(NumberTheory::convOthBase2Decimal("+B30.002tgjb") == 2417981) &&
		(NumberTheory::convOthBase2Decimal("+B31.006puc0") == 6315103) &&
		(NumberTheory::convOthBase2Decimal("+B32.00c0pv0") == 12609504) &&
		(NumberTheory::convOthBase2Decimal("+B33.00v000w") == 36763583) &&
		(NumberTheory::convOthBase2Decimal("+B34.00np2xw") == 31721794) &&
		(NumberTheory::convOthBase2Decimal("+B35.00120y0") == 1587565) &&
		(NumberTheory::convOthBase2Decimal("+B36.00zzzzz") == 60466175) &&
		(NumberTheory::convOthBase2Decimal("-b1.") == -0) &&
		(NumberTheory::convOthBase2Decimal("-b1.111") == -3) &&
		(NumberTheory::convOthBase2Decimal("-b2.101") == -5) &&
		(NumberTheory::convOthBase2Decimal("-b3.121") == -16) &&
		(NumberTheory::convOthBase2Decimal("-b4.123") == -27) &&
		(NumberTheory::convOthBase2Decimal("-b5.341") == -96) &&
		(NumberTheory::convOthBase2Decimal("-b6.352") == -140) &&
		(NumberTheory::convOthBase2Decimal("-b7.256") == -139) &&
		(NumberTheory::convOthBase2Decimal("-b8.376") == -254) &&
		(NumberTheory::convOthBase2Decimal("-o.376") == -254) &&
		(NumberTheory::convOthBase2Decimal("-b.101") == -5) &&
		(NumberTheory::convOthBase2Decimal("-b9.821") == -667) &&
		(NumberTheory::convOthBase2Decimal("-b10.394") == -394) &&
		(NumberTheory::convOthBase2Decimal("-b11.3A7") == -480) &&
		(NumberTheory::convOthBase2Decimal("-b12.A5B") == -1511) &&
		(NumberTheory::convOthBase2Decimal("-b13.ACB") == -1857) &&
		(NumberTheory::convOthBase2Decimal("-b14.2AD") == -545) &&
		(NumberTheory::convOthBase2Decimal("-b15.BE4") == -2689) &&
		(NumberTheory::convOthBase2Decimal("-b16.FA2") == -4002) &&
		(NumberTheory::convOthBase2Decimal("-h.FA2") == -4002) &&
		(NumberTheory::convOthBase2Decimal("-b17.AG6") == -3168) &&
		(NumberTheory::convOthBase2Decimal("-b18.FGH") == -5165) &&
		(NumberTheory::convOthBase2Decimal("-b19.2I3") == -1067) &&
		(NumberTheory::convOthBase2Decimal("-b20.9CJ") == -3859) &&
		(NumberTheory::convOthBase2Decimal("-b21.K5F") == -8940) &&
		(NumberTheory::convOthBase2Decimal("-b22.FL5") == -7727) &&
		(NumberTheory::convOthBase2Decimal("-b23.1AM") == -781) &&
		(NumberTheory::convOthBase2Decimal("-b24.5ND") == -3445) &&
		(NumberTheory::convOthBase2Decimal("-b25.5ND5C") == -2320762) &&
		(NumberTheory::convOthBase2Decimal("-b26.3KPB5") == -1739639) &&
		(NumberTheory::convOthBase2Decimal("-b27.IQH67") == -10090258) &&
		(NumberTheory::convOthBase2Decimal("-b28.RKHB2") == -17048390) &&
		(NumberTheory::convOthBase2Decimal("-b29.8BIFS") == -5942128) &&
		(NumberTheory::convOthBase2Decimal("-b30.2TGJB") == -2417981) &&
		(NumberTheory::convOthBase2Decimal("-b31.6PUC0") == -6315103) &&
		(NumberTheory::convOthBase2Decimal("-b32.C0PV0") == -12609504) &&
		(NumberTheory::convOthBase2Decimal("-b33.V000W") == -36763583) &&
		(NumberTheory::convOthBase2Decimal("-b34.NP2XW") == -31721794) &&
		(NumberTheory::convOthBase2Decimal("-b35.120Y0") == -1587565) &&
		(NumberTheory::convOthBase2Decimal("-b36.ZZZZZ") == -60466175) &&
		(NumberTheory::convOthBase2Decimal("-B1.") == -0) &&
		(NumberTheory::convOthBase2Decimal("-B1.111") == -3) &&
		(NumberTheory::convOthBase2Decimal("-B2.00101") == -5) &&
		(NumberTheory::convOthBase2Decimal("-B3.00121") == -16) &&
		(NumberTheory::convOthBase2Decimal("-B4.00123") == -27) &&
		(NumberTheory::convOthBase2Decimal("-B5.00341") == -96) &&
		(NumberTheory::convOthBase2Decimal("-B6.00352") == -140) &&
		(NumberTheory::convOthBase2Decimal("-B7.00256") == -139) &&
		(NumberTheory::convOthBase2Decimal("-B8.00376") == -254) &&
		(NumberTheory::convOthBase2Decimal("-O.00376") == -254) &&
		(NumberTheory::convOthBase2Decimal("-B.00101") == -5) &&
		(NumberTheory::convOthBase2Decimal("-B9.00821") == -667) &&
		(NumberTheory::convOthBase2Decimal("-B10.00394") == -394) &&
		(NumberTheory::convOthBase2Decimal("-B11.003a7") == -480) &&
		(NumberTheory::convOthBase2Decimal("-B12.00a5b") == -1511) &&
		(NumberTheory::convOthBase2Decimal("-B13.00acb") == -1857) &&
		(NumberTheory::convOthBase2Decimal("-B14.002ad") == -545) &&
		(NumberTheory::convOthBase2Decimal("-B15.00be4") == -2689) &&
		(NumberTheory::convOthBase2Decimal("-B16.00fa2") == -4002) &&
		(NumberTheory::convOthBase2Decimal("-H.00fa2") == -4002) &&
		(NumberTheory::convOthBase2Decimal("-B17.00ag6") == -3168) &&
		(NumberTheory::convOthBase2Decimal("-B18.00fgh") == -5165) &&
		(NumberTheory::convOthBase2Decimal("-B19.002i3") == -1067) &&
		(NumberTheory::convOthBase2Decimal("-B20.009cj") == -3859) &&
		(NumberTheory::convOthBase2Decimal("-B21.00k5f") == -8940) &&
		(NumberTheory::convOthBase2Decimal("-B22.00fl5") == -7727) &&
		(NumberTheory::convOthBase2Decimal("-B23.001am") == -781) &&
		(NumberTheory::convOthBase2Decimal("-B24.005nd") == -3445) &&
		(NumberTheory::convOthBase2Decimal("-B25.005nd5c") == -2320762) &&
		(NumberTheory::convOthBase2Decimal("-B26.003kpb5") == -1739639) &&
		(NumberTheory::convOthBase2Decimal("-B27.00iqh67") == -10090258) &&
		(NumberTheory::convOthBase2Decimal("-B28.00rkhb2") == -17048390) &&
		(NumberTheory::convOthBase2Decimal("-B29.008bifs") == -5942128) &&
		(NumberTheory::convOthBase2Decimal("-B30.002tgjb") == -2417981) &&
		(NumberTheory::convOthBase2Decimal("-B31.006puc0") == -6315103) &&
		(NumberTheory::convOthBase2Decimal("-B32.00c0pv0") == -12609504) &&
		(NumberTheory::convOthBase2Decimal("-B33.00v000w") == -36763583) &&
		(NumberTheory::convOthBase2Decimal("-B34.00np2xw") == -31721794) &&
		(NumberTheory::convOthBase2Decimal("-B35.00120y0") == -1587565) &&
		(NumberTheory::convOthBase2Decimal("-B36.00zzzzz") == -60466175)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0044", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convDecimal2OthBase()";
	TestCommonTools::consolePrintTestApiStart(44, testDescr);
	if (
		(*NumberTheory::convDecimal2OthBase(0, 1) == UTF("")) &&
		(*NumberTheory::convDecimal2OthBase(3, 1) == UTF("111")) &&
		(*NumberTheory::convDecimal2OthBase(5, 2) == UTF("101")) &&
		(*NumberTheory::convDecimal2OthBase(16, 3) == UTF("121")) &&
		(*NumberTheory::convDecimal2OthBase(27, 4) == UTF("123")) &&
		(*NumberTheory::convDecimal2OthBase(96, 5) == UTF("341")) &&
		(*NumberTheory::convDecimal2OthBase(140, 6) == UTF("352")) &&
		(*NumberTheory::convDecimal2OthBase(139, 7) == UTF("256")) &&
		(*NumberTheory::convDecimal2OthBase(254, 8) == UTF("376")) &&
		(*NumberTheory::convDecimal2OthBase(667, 9) == UTF("821")) &&
		(*NumberTheory::convDecimal2OthBase(394, 10) == UTF("394")) &&
		(*NumberTheory::convDecimal2OthBase(480, 11) == UTF("3A7")) &&
		(*NumberTheory::convDecimal2OthBase(1511, 12) == UTF("A5B")) &&
		(*NumberTheory::convDecimal2OthBase(1857, 13) == UTF("ACB")) &&
		(*NumberTheory::convDecimal2OthBase(545, 14) == UTF("2AD")) &&
		(*NumberTheory::convDecimal2OthBase(2689, 15) == UTF("BE4")) &&
		(*NumberTheory::convDecimal2OthBase(4002, 16) == UTF("FA2")) &&
		(*NumberTheory::convDecimal2OthBase(3168, 17) == UTF("AG6")) &&
		(*NumberTheory::convDecimal2OthBase(5165, 18) == UTF("FGH")) &&
		(*NumberTheory::convDecimal2OthBase(1067, 19) == UTF("2I3")) &&
		(*NumberTheory::convDecimal2OthBase(3859, 20) == UTF("9CJ")) &&
		(*NumberTheory::convDecimal2OthBase(8940, 21) == UTF("K5F")) &&
		(*NumberTheory::convDecimal2OthBase(7727, 22) == UTF("FL5")) &&
		(*NumberTheory::convDecimal2OthBase(781, 23) == UTF("1AM")) &&
		(*NumberTheory::convDecimal2OthBase(3445, 24) == UTF("5ND")) &&
		(*NumberTheory::convDecimal2OthBase(2320762, 25) == UTF("5ND5C")) &&
		(*NumberTheory::convDecimal2OthBase(1739639, 26) == UTF("3KPB5")) &&
		(*NumberTheory::convDecimal2OthBase(10090258, 27) == UTF("IQH67")) &&
		(*NumberTheory::convDecimal2OthBase(17048390, 28) == UTF("RKHB2")) &&
		(*NumberTheory::convDecimal2OthBase(5942128, 29) == UTF("8BIFS")) &&
		(*NumberTheory::convDecimal2OthBase(2417981, 30) == UTF("2TGJB")) &&
		(*NumberTheory::convDecimal2OthBase(6315103, 31) == UTF("6PUC0")) &&
		(*NumberTheory::convDecimal2OthBase(12609504, 32) == UTF("C0PV0")) &&
		(*NumberTheory::convDecimal2OthBase(36763583, 33) == UTF("V000W")) &&
		(*NumberTheory::convDecimal2OthBase(31721794, 34) == UTF("NP2XW")) &&
		(*NumberTheory::convDecimal2OthBase(1587565, 35) == UTF("120Y0")) &&
		(*NumberTheory::convDecimal2OthBase(60466175, 36) == UTF("ZZZZZ")) &&
		(*NumberTheory::convDecimal2OthBase(-0, 1) == UTF("")) &&
		(*NumberTheory::convDecimal2OthBase(-3, 1) == UTF("-111")) &&
		(*NumberTheory::convDecimal2OthBase(-5, 2) == UTF("-101")) &&
		(*NumberTheory::convDecimal2OthBase(-16, 3) == UTF("-121")) &&
		(*NumberTheory::convDecimal2OthBase(-27, 4) == UTF("-123")) &&
		(*NumberTheory::convDecimal2OthBase(-96, 5) == UTF("-341")) &&
		(*NumberTheory::convDecimal2OthBase(-140, 6) == UTF("-352")) &&
		(*NumberTheory::convDecimal2OthBase(-139, 7) == UTF("-256")) &&
		(*NumberTheory::convDecimal2OthBase(-254, 8) == UTF("-376")) &&
		(*NumberTheory::convDecimal2OthBase(-667, 9) == UTF("-821")) &&
		(*NumberTheory::convDecimal2OthBase(-394, 10) == UTF("-394")) &&
		(*NumberTheory::convDecimal2OthBase(-480, 11) == UTF("-3A7")) &&
		(*NumberTheory::convDecimal2OthBase(-1511, 12) == UTF("-A5B")) &&
		(*NumberTheory::convDecimal2OthBase(-1857, 13) == UTF("-ACB")) &&
		(*NumberTheory::convDecimal2OthBase(-545, 14) == UTF("-2AD")) &&
		(*NumberTheory::convDecimal2OthBase(-2689, 15) == UTF("-BE4")) &&
		(*NumberTheory::convDecimal2OthBase(-4002, 16) == UTF("-FA2")) &&
		(*NumberTheory::convDecimal2OthBase(-3168, 17) == UTF("-AG6")) &&
		(*NumberTheory::convDecimal2OthBase(-5165, 18) == UTF("-FGH")) &&
		(*NumberTheory::convDecimal2OthBase(-1067, 19) == UTF("-2I3")) &&
		(*NumberTheory::convDecimal2OthBase(-3859, 20) == UTF("-9CJ")) &&
		(*NumberTheory::convDecimal2OthBase(-8940, 21) == UTF("-K5F")) &&
		(*NumberTheory::convDecimal2OthBase(-7727, 22) == UTF("-FL5")) &&
		(*NumberTheory::convDecimal2OthBase(-781, 23) == UTF("-1AM")) &&
		(*NumberTheory::convDecimal2OthBase(-3445, 24) == UTF("-5ND")) &&
		(*NumberTheory::convDecimal2OthBase(-2320762, 25) == UTF("-5ND5C")) &&
		(*NumberTheory::convDecimal2OthBase(-1739639, 26) == UTF("-3KPB5")) &&
		(*NumberTheory::convDecimal2OthBase(-10090258, 27) == UTF("-IQH67")) &&
		(*NumberTheory::convDecimal2OthBase(-17048390, 28) == UTF("-RKHB2")) &&
		(*NumberTheory::convDecimal2OthBase(-5942128, 29) == UTF("-8BIFS")) &&
		(*NumberTheory::convDecimal2OthBase(-2417981, 30) == UTF("-2TGJB")) &&
		(*NumberTheory::convDecimal2OthBase(-6315103, 31) == UTF("-6PUC0")) &&
		(*NumberTheory::convDecimal2OthBase(-12609504, 32) == UTF("-C0PV0")) &&
		(*NumberTheory::convDecimal2OthBase(-36763583, 33) == UTF("-V000W")) &&
		(*NumberTheory::convDecimal2OthBase(-31721794, 34) == UTF("-NP2XW")) &&
		(*NumberTheory::convDecimal2OthBase(-1587565, 35) == UTF("-120Y0")) &&
		(*NumberTheory::convDecimal2OthBase(-60466175, 36) == UTF("-ZZZZZ")))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0045", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convDecimal2OthBase() - format 0";
	TestCommonTools::consolePrintTestApiStart(45, testDescr);
	if (
		(*NumberTheory::convDecimal2OthBase(0, 1, 0) == UTF("")) &&
		(*NumberTheory::convDecimal2OthBase(3, 1, 0) == UTF("111")) &&
		(*NumberTheory::convDecimal2OthBase(5, 2, 0) == UTF("101")) &&
		(*NumberTheory::convDecimal2OthBase(16, 3, 0) == UTF("121")) &&
		(*NumberTheory::convDecimal2OthBase(27, 4, 0) == UTF("123")) &&
		(*NumberTheory::convDecimal2OthBase(96, 5, 0) == UTF("341")) &&
		(*NumberTheory::convDecimal2OthBase(140, 6, 0) == UTF("352")) &&
		(*NumberTheory::convDecimal2OthBase(139, 7, 0) == UTF("256")) &&
		(*NumberTheory::convDecimal2OthBase(254, 8, 0) == UTF("376")) &&
		(*NumberTheory::convDecimal2OthBase(667, 9, 0) == UTF("821")) &&
		(*NumberTheory::convDecimal2OthBase(394, 10, 0) == UTF("394")) &&
		(*NumberTheory::convDecimal2OthBase(480, 11, 0) == UTF("3A7")) &&
		(*NumberTheory::convDecimal2OthBase(1511, 12, 0) == UTF("A5B")) &&
		(*NumberTheory::convDecimal2OthBase(1857, 13, 0) == UTF("ACB")) &&
		(*NumberTheory::convDecimal2OthBase(545, 14, 0) == UTF("2AD")) &&
		(*NumberTheory::convDecimal2OthBase(2689, 15, 0) == UTF("BE4")) &&
		(*NumberTheory::convDecimal2OthBase(4002, 16, 0) == UTF("FA2")) &&
		(*NumberTheory::convDecimal2OthBase(3168, 17, 0) == UTF("AG6")) &&
		(*NumberTheory::convDecimal2OthBase(5165, 18, 0) == UTF("FGH")) &&
		(*NumberTheory::convDecimal2OthBase(1067, 19, 0) == UTF("2I3")) &&
		(*NumberTheory::convDecimal2OthBase(3859, 20, 0) == UTF("9CJ")) &&
		(*NumberTheory::convDecimal2OthBase(8940, 21, 0) == UTF("K5F")) &&
		(*NumberTheory::convDecimal2OthBase(7727, 22, 0) == UTF("FL5")) &&
		(*NumberTheory::convDecimal2OthBase(781, 23, 0) == UTF("1AM")) &&
		(*NumberTheory::convDecimal2OthBase(3445, 24, 0) == UTF("5ND")) &&
		(*NumberTheory::convDecimal2OthBase(2320762, 25, 0) == UTF("5ND5C")) &&
		(*NumberTheory::convDecimal2OthBase(1739639, 26, 0) == UTF("3KPB5")) &&
		(*NumberTheory::convDecimal2OthBase(10090258, 27, 0) == UTF("IQH67")) &&
		(*NumberTheory::convDecimal2OthBase(17048390, 28, 0) == UTF("RKHB2")) &&
		(*NumberTheory::convDecimal2OthBase(5942128, 29, 0) == UTF("8BIFS")) &&
		(*NumberTheory::convDecimal2OthBase(2417981, 30, 0) == UTF("2TGJB")) &&
		(*NumberTheory::convDecimal2OthBase(6315103, 31, 0) == UTF("6PUC0")) &&
		(*NumberTheory::convDecimal2OthBase(12609504, 32, 0) == UTF("C0PV0")) &&
		(*NumberTheory::convDecimal2OthBase(36763583, 33, 0) == UTF("V000W")) &&
		(*NumberTheory::convDecimal2OthBase(31721794, 34, 0) == UTF("NP2XW")) &&
		(*NumberTheory::convDecimal2OthBase(1587565, 35, 0) == UTF("120Y0")) &&
		(*NumberTheory::convDecimal2OthBase(60466175, 36, 0) == UTF("ZZZZZ")) &&
		(*NumberTheory::convDecimal2OthBase(-0, 1, 0) == UTF("")) &&
		(*NumberTheory::convDecimal2OthBase(-3, 1, 0) == UTF("-111")) &&
		(*NumberTheory::convDecimal2OthBase(-5, 2, 0) == UTF("-101")) &&
		(*NumberTheory::convDecimal2OthBase(-16, 3, 0) == UTF("-121")) &&
		(*NumberTheory::convDecimal2OthBase(-27, 4, 0) == UTF("-123")) &&
		(*NumberTheory::convDecimal2OthBase(-96, 5, 0) == UTF("-341")) &&
		(*NumberTheory::convDecimal2OthBase(-140, 6, 0) == UTF("-352")) &&
		(*NumberTheory::convDecimal2OthBase(-139, 7, 0) == UTF("-256")) &&
		(*NumberTheory::convDecimal2OthBase(-254, 8, 0) == UTF("-376")) &&
		(*NumberTheory::convDecimal2OthBase(-667, 9, 0) == UTF("-821")) &&
		(*NumberTheory::convDecimal2OthBase(-394, 10, 0) == UTF("-394")) &&
		(*NumberTheory::convDecimal2OthBase(-480, 11, 0) == UTF("-3A7")) &&
		(*NumberTheory::convDecimal2OthBase(-1511, 12, 0) == UTF("-A5B")) &&
		(*NumberTheory::convDecimal2OthBase(-1857, 13, 0) == UTF("-ACB")) &&
		(*NumberTheory::convDecimal2OthBase(-545, 14, 0) == UTF("-2AD")) &&
		(*NumberTheory::convDecimal2OthBase(-2689, 15, 0) == UTF("-BE4")) &&
		(*NumberTheory::convDecimal2OthBase(-4002, 16, 0) == UTF("-FA2")) &&
		(*NumberTheory::convDecimal2OthBase(-3168, 17, 0) == UTF("-AG6")) &&
		(*NumberTheory::convDecimal2OthBase(-5165, 18, 0) == UTF("-FGH")) &&
		(*NumberTheory::convDecimal2OthBase(-1067, 19, 0) == UTF("-2I3")) &&
		(*NumberTheory::convDecimal2OthBase(-3859, 20, 0) == UTF("-9CJ")) &&
		(*NumberTheory::convDecimal2OthBase(-8940, 21, 0) == UTF("-K5F")) &&
		(*NumberTheory::convDecimal2OthBase(-7727, 22, 0) == UTF("-FL5")) &&
		(*NumberTheory::convDecimal2OthBase(-781, 23, 0) == UTF("-1AM")) &&
		(*NumberTheory::convDecimal2OthBase(-3445, 24, 0) == UTF("-5ND")) &&
		(*NumberTheory::convDecimal2OthBase(-2320762, 25, 0) == UTF("-5ND5C")) &&
		(*NumberTheory::convDecimal2OthBase(-1739639, 26, 0) == UTF("-3KPB5")) &&
		(*NumberTheory::convDecimal2OthBase(-10090258, 27, 0) == UTF("-IQH67")) &&
		(*NumberTheory::convDecimal2OthBase(-17048390, 28, 0) == UTF("-RKHB2")) &&
		(*NumberTheory::convDecimal2OthBase(-5942128, 29, 0) == UTF("-8BIFS")) &&
		(*NumberTheory::convDecimal2OthBase(-2417981, 30, 0) == UTF("-2TGJB")) &&
		(*NumberTheory::convDecimal2OthBase(-6315103, 31, 0) == UTF("-6PUC0")) &&
		(*NumberTheory::convDecimal2OthBase(-12609504, 32, 0) == UTF("-C0PV0")) &&
		(*NumberTheory::convDecimal2OthBase(-36763583, 33, 0) == UTF("-V000W")) &&
		(*NumberTheory::convDecimal2OthBase(-31721794, 34, 0) == UTF("-NP2XW")) &&
		(*NumberTheory::convDecimal2OthBase(-1587565, 35, 0) == UTF("-120Y0")) &&
		(*NumberTheory::convDecimal2OthBase(-60466175, 36, 0) == UTF("-ZZZZZ")))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0046", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convDecimal2OthBase() - format 1";
	TestCommonTools::consolePrintTestApiStart(46, testDescr);
	if (
		(*NumberTheory::convDecimal2OthBase(0, 1, 1) == UTF("b1.")) &&
		(*NumberTheory::convDecimal2OthBase(3, 1, 1) == UTF("b1.111")) &&
		(*NumberTheory::convDecimal2OthBase(5, 2, 1) == UTF("b2.101")) &&
		(*NumberTheory::convDecimal2OthBase(16, 3, 1) == UTF("b3.121")) &&
		(*NumberTheory::convDecimal2OthBase(27, 4, 1) == UTF("b4.123")) &&
		(*NumberTheory::convDecimal2OthBase(96, 5, 1) == UTF("b5.341")) &&
		(*NumberTheory::convDecimal2OthBase(140, 6, 1) == UTF("b6.352")) &&
		(*NumberTheory::convDecimal2OthBase(139, 7, 1) == UTF("b7.256")) &&
		(*NumberTheory::convDecimal2OthBase(254, 8, 1) == UTF("b8.376")) &&
		(*NumberTheory::convDecimal2OthBase(667, 9, 1) == UTF("b9.821")) &&
		(*NumberTheory::convDecimal2OthBase(394, 10, 1) == UTF("b10.394")) &&
		(*NumberTheory::convDecimal2OthBase(480, 11, 1) == UTF("b11.3A7")) &&
		(*NumberTheory::convDecimal2OthBase(1511, 12, 1) == UTF("b12.A5B")) &&
		(*NumberTheory::convDecimal2OthBase(1857, 13, 1) == UTF("b13.ACB")) &&
		(*NumberTheory::convDecimal2OthBase(545, 14, 1) == UTF("b14.2AD")) &&
		(*NumberTheory::convDecimal2OthBase(2689, 15, 1) == UTF("b15.BE4")) &&
		(*NumberTheory::convDecimal2OthBase(4002, 16, 1) == UTF("b16.FA2")) &&
		(*NumberTheory::convDecimal2OthBase(3168, 17, 1) == UTF("b17.AG6")) &&
		(*NumberTheory::convDecimal2OthBase(5165, 18, 1) == UTF("b18.FGH")) &&
		(*NumberTheory::convDecimal2OthBase(1067, 19, 1) == UTF("b19.2I3")) &&
		(*NumberTheory::convDecimal2OthBase(3859, 20, 1) == UTF("b20.9CJ")) &&
		(*NumberTheory::convDecimal2OthBase(8940, 21, 1) == UTF("b21.K5F")) &&
		(*NumberTheory::convDecimal2OthBase(7727, 22, 1) == UTF("b22.FL5")) &&
		(*NumberTheory::convDecimal2OthBase(781, 23, 1) == UTF("b23.1AM")) &&
		(*NumberTheory::convDecimal2OthBase(3445, 24, 1) == UTF("b24.5ND")) &&
		(*NumberTheory::convDecimal2OthBase(2320762, 25, 1) == UTF("b25.5ND5C")) &&
		(*NumberTheory::convDecimal2OthBase(1739639, 26, 1) == UTF("b26.3KPB5")) &&
		(*NumberTheory::convDecimal2OthBase(10090258, 27, 1) == UTF("b27.IQH67")) &&
		(*NumberTheory::convDecimal2OthBase(17048390, 28, 1) == UTF("b28.RKHB2")) &&
		(*NumberTheory::convDecimal2OthBase(5942128, 29, 1) == UTF("b29.8BIFS")) &&
		(*NumberTheory::convDecimal2OthBase(2417981, 30, 1) == UTF("b30.2TGJB")) &&
		(*NumberTheory::convDecimal2OthBase(6315103, 31, 1) == UTF("b31.6PUC0")) &&
		(*NumberTheory::convDecimal2OthBase(12609504, 32, 1) == UTF("b32.C0PV0")) &&
		(*NumberTheory::convDecimal2OthBase(36763583, 33, 1) == UTF("b33.V000W")) &&
		(*NumberTheory::convDecimal2OthBase(31721794, 34, 1) == UTF("b34.NP2XW")) &&
		(*NumberTheory::convDecimal2OthBase(1587565, 35, 1) == UTF("b35.120Y0")) &&
		(*NumberTheory::convDecimal2OthBase(60466175, 36, 1) == UTF("b36.ZZZZZ")) &&
		(*NumberTheory::convDecimal2OthBase(-0, 1, 1) == UTF("b1.")) &&
		(*NumberTheory::convDecimal2OthBase(-3, 1, 1) == UTF("-b1.111")) &&
		(*NumberTheory::convDecimal2OthBase(-5, 2, 1) == UTF("-b2.101")) &&
		(*NumberTheory::convDecimal2OthBase(-16, 3, 1) == UTF("-b3.121")) &&
		(*NumberTheory::convDecimal2OthBase(-27, 4, 1) == UTF("-b4.123")) &&
		(*NumberTheory::convDecimal2OthBase(-96, 5, 1) == UTF("-b5.341")) &&
		(*NumberTheory::convDecimal2OthBase(-140, 6, 1) == UTF("-b6.352")) &&
		(*NumberTheory::convDecimal2OthBase(-139, 7, 1) == UTF("-b7.256")) &&
		(*NumberTheory::convDecimal2OthBase(-254, 8, 1) == UTF("-b8.376")) &&
		(*NumberTheory::convDecimal2OthBase(-667, 9, 1) == UTF("-b9.821")) &&
		(*NumberTheory::convDecimal2OthBase(-394, 10, 1) == UTF("-b10.394")) &&
		(*NumberTheory::convDecimal2OthBase(-480, 11, 1) == UTF("-b11.3A7")) &&
		(*NumberTheory::convDecimal2OthBase(-1511, 12, 1) == UTF("-b12.A5B")) &&
		(*NumberTheory::convDecimal2OthBase(-1857, 13, 1) == UTF("-b13.ACB")) &&
		(*NumberTheory::convDecimal2OthBase(-545, 14, 1) == UTF("-b14.2AD")) &&
		(*NumberTheory::convDecimal2OthBase(-2689, 15, 1) == UTF("-b15.BE4")) &&
		(*NumberTheory::convDecimal2OthBase(-4002, 16, 1) == UTF("-b16.FA2")) &&
		(*NumberTheory::convDecimal2OthBase(-3168, 17, 1) == UTF("-b17.AG6")) &&
		(*NumberTheory::convDecimal2OthBase(-5165, 18, 1) == UTF("-b18.FGH")) &&
		(*NumberTheory::convDecimal2OthBase(-1067, 19, 1) == UTF("-b19.2I3")) &&
		(*NumberTheory::convDecimal2OthBase(-3859, 20, 1) == UTF("-b20.9CJ")) &&
		(*NumberTheory::convDecimal2OthBase(-8940, 21, 1) == UTF("-b21.K5F")) &&
		(*NumberTheory::convDecimal2OthBase(-7727, 22, 1) == UTF("-b22.FL5")) &&
		(*NumberTheory::convDecimal2OthBase(-781, 23, 1) == UTF("-b23.1AM")) &&
		(*NumberTheory::convDecimal2OthBase(-3445, 24, 1) == UTF("-b24.5ND")) &&
		(*NumberTheory::convDecimal2OthBase(-2320762, 25, 1) == UTF("-b25.5ND5C")) &&
		(*NumberTheory::convDecimal2OthBase(-1739639, 26, 1) == UTF("-b26.3KPB5")) &&
		(*NumberTheory::convDecimal2OthBase(-10090258, 27, 1) == UTF("-b27.IQH67")) &&
		(*NumberTheory::convDecimal2OthBase(-17048390, 28, 1) == UTF("-b28.RKHB2")) &&
		(*NumberTheory::convDecimal2OthBase(-5942128, 29, 1) == UTF("-b29.8BIFS")) &&
		(*NumberTheory::convDecimal2OthBase(-2417981, 30, 1) == UTF("-b30.2TGJB")) &&
		(*NumberTheory::convDecimal2OthBase(-6315103, 31, 1) == UTF("-b31.6PUC0")) &&
		(*NumberTheory::convDecimal2OthBase(-12609504, 32, 1) == UTF("-b32.C0PV0")) &&
		(*NumberTheory::convDecimal2OthBase(-36763583, 33, 1) == UTF("-b33.V000W")) &&
		(*NumberTheory::convDecimal2OthBase(-31721794, 34, 1) == UTF("-b34.NP2XW")) &&
		(*NumberTheory::convDecimal2OthBase(-1587565, 35, 1) == UTF("-b35.120Y0")) &&
		(*NumberTheory::convDecimal2OthBase(-60466175, 36, 1) == UTF("-b36.ZZZZZ"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0047", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convDecimal2OthBase() - format 2";
	TestCommonTools::consolePrintTestApiStart(47, testDescr);
	if (
		(*NumberTheory::convDecimal2OthBase(0, 1, 2) == UTF("b1.")) &&
		(*NumberTheory::convDecimal2OthBase(3, 1, 2) == UTF("b1.111")) &&
		(*NumberTheory::convDecimal2OthBase(5, 2, 2) == UTF("b.101")) &&
		(*NumberTheory::convDecimal2OthBase(16, 3, 2) == UTF("b3.121")) &&
		(*NumberTheory::convDecimal2OthBase(27, 4, 2) == UTF("b4.123")) &&
		(*NumberTheory::convDecimal2OthBase(96, 5, 2) == UTF("b5.341")) &&
		(*NumberTheory::convDecimal2OthBase(140, 6, 2) == UTF("b6.352")) &&
		(*NumberTheory::convDecimal2OthBase(139, 7, 2) == UTF("b7.256")) &&
		(*NumberTheory::convDecimal2OthBase(254, 8, 2) == UTF("o.376")) &&
		(*NumberTheory::convDecimal2OthBase(667, 9, 2) == UTF("b9.821")) &&
		(*NumberTheory::convDecimal2OthBase(394, 10, 2) == UTF("b10.394")) &&
		(*NumberTheory::convDecimal2OthBase(480, 11, 2) == UTF("b11.3A7")) &&
		(*NumberTheory::convDecimal2OthBase(1511, 12, 2) == UTF("b12.A5B")) &&
		(*NumberTheory::convDecimal2OthBase(1857, 13, 2) == UTF("b13.ACB")) &&
		(*NumberTheory::convDecimal2OthBase(545, 14, 2) == UTF("b14.2AD")) &&
		(*NumberTheory::convDecimal2OthBase(2689, 15, 2) == UTF("b15.BE4")) &&
		(*NumberTheory::convDecimal2OthBase(4002, 16, 2) == UTF("h.FA2")) &&
		(*NumberTheory::convDecimal2OthBase(3168, 17, 2) == UTF("b17.AG6")) &&
		(*NumberTheory::convDecimal2OthBase(5165, 18, 2) == UTF("b18.FGH")) &&
		(*NumberTheory::convDecimal2OthBase(1067, 19, 2) == UTF("b19.2I3")) &&
		(*NumberTheory::convDecimal2OthBase(3859, 20, 2) == UTF("b20.9CJ")) &&
		(*NumberTheory::convDecimal2OthBase(8940, 21, 2) == UTF("b21.K5F")) &&
		(*NumberTheory::convDecimal2OthBase(7727, 22, 2) == UTF("b22.FL5")) &&
		(*NumberTheory::convDecimal2OthBase(781, 23, 2) == UTF("b23.1AM")) &&
		(*NumberTheory::convDecimal2OthBase(3445, 24, 2) == UTF("b24.5ND")) &&
		(*NumberTheory::convDecimal2OthBase(2320762, 25, 2) == UTF("b25.5ND5C")) &&
		(*NumberTheory::convDecimal2OthBase(1739639, 26, 2) == UTF("b26.3KPB5")) &&
		(*NumberTheory::convDecimal2OthBase(10090258, 27, 2) == UTF("b27.IQH67")) &&
		(*NumberTheory::convDecimal2OthBase(17048390, 28, 2) == UTF("b28.RKHB2")) &&
		(*NumberTheory::convDecimal2OthBase(5942128, 29, 2) == UTF("b29.8BIFS")) &&
		(*NumberTheory::convDecimal2OthBase(2417981, 30, 2) == UTF("b30.2TGJB")) &&
		(*NumberTheory::convDecimal2OthBase(6315103, 31, 2) == UTF("b31.6PUC0")) &&
		(*NumberTheory::convDecimal2OthBase(12609504, 32, 2) == UTF("b32.C0PV0")) &&
		(*NumberTheory::convDecimal2OthBase(36763583, 33, 2) == UTF("b33.V000W")) &&
		(*NumberTheory::convDecimal2OthBase(31721794, 34, 2) == UTF("b34.NP2XW")) &&
		(*NumberTheory::convDecimal2OthBase(1587565, 35, 2) == UTF("b35.120Y0")) &&
		(*NumberTheory::convDecimal2OthBase(60466175, 36, 2) == UTF("b36.ZZZZZ")) &&
		(*NumberTheory::convDecimal2OthBase(-0, 1, 2) == UTF("b1.")) &&
		(*NumberTheory::convDecimal2OthBase(-3, 1, 2) == UTF("-b1.111")) &&
		(*NumberTheory::convDecimal2OthBase(-5, 2, 2) == UTF("-b.101")) &&
		(*NumberTheory::convDecimal2OthBase(-16, 3, 2) == UTF("-b3.121")) &&
		(*NumberTheory::convDecimal2OthBase(-27, 4, 2) == UTF("-b4.123")) &&
		(*NumberTheory::convDecimal2OthBase(-96, 5, 2) == UTF("-b5.341")) &&
		(*NumberTheory::convDecimal2OthBase(-140, 6, 2) == UTF("-b6.352")) &&
		(*NumberTheory::convDecimal2OthBase(-139, 7, 2) == UTF("-b7.256")) &&
		(*NumberTheory::convDecimal2OthBase(-254, 8, 2) == UTF("-o.376")) &&
		(*NumberTheory::convDecimal2OthBase(-667, 9, 2) == UTF("-b9.821")) &&
		(*NumberTheory::convDecimal2OthBase(-394, 10, 2) == UTF("-b10.394")) &&
		(*NumberTheory::convDecimal2OthBase(-480, 11, 2) == UTF("-b11.3A7")) &&
		(*NumberTheory::convDecimal2OthBase(-1511, 12, 2) == UTF("-b12.A5B")) &&
		(*NumberTheory::convDecimal2OthBase(-1857, 13, 2) == UTF("-b13.ACB")) &&
		(*NumberTheory::convDecimal2OthBase(-545, 14, 2) == UTF("-b14.2AD")) &&
		(*NumberTheory::convDecimal2OthBase(-2689, 15, 2) == UTF("-b15.BE4")) &&
		(*NumberTheory::convDecimal2OthBase(-4002, 16, 2) == UTF("-h.FA2")) &&
		(*NumberTheory::convDecimal2OthBase(-3168, 17, 2) == UTF("-b17.AG6")) &&
		(*NumberTheory::convDecimal2OthBase(-5165, 18, 2) == UTF("-b18.FGH")) &&
		(*NumberTheory::convDecimal2OthBase(-1067, 19, 2) == UTF("-b19.2I3")) &&
		(*NumberTheory::convDecimal2OthBase(-3859, 20, 2) == UTF("-b20.9CJ")) &&
		(*NumberTheory::convDecimal2OthBase(-8940, 21, 2) == UTF("-b21.K5F")) &&
		(*NumberTheory::convDecimal2OthBase(-7727, 22, 2) == UTF("-b22.FL5")) &&
		(*NumberTheory::convDecimal2OthBase(-781, 23, 2) == UTF("-b23.1AM")) &&
		(*NumberTheory::convDecimal2OthBase(-3445, 24, 2) == UTF("-b24.5ND")) &&
		(*NumberTheory::convDecimal2OthBase(-2320762, 25, 2) == UTF("-b25.5ND5C")) &&
		(*NumberTheory::convDecimal2OthBase(-1739639, 26, 2) == UTF("-b26.3KPB5")) &&
		(*NumberTheory::convDecimal2OthBase(-10090258, 27, 2) == UTF("-b27.IQH67")) &&
		(*NumberTheory::convDecimal2OthBase(-17048390, 28, 2) == UTF("-b28.RKHB2")) &&
		(*NumberTheory::convDecimal2OthBase(-5942128, 29, 2) == UTF("-b29.8BIFS")) &&
		(*NumberTheory::convDecimal2OthBase(-2417981, 30, 2) == UTF("-b30.2TGJB")) &&
		(*NumberTheory::convDecimal2OthBase(-6315103, 31, 2) == UTF("-b31.6PUC0")) &&
		(*NumberTheory::convDecimal2OthBase(-12609504, 32, 2) == UTF("-b32.C0PV0")) &&
		(*NumberTheory::convDecimal2OthBase(-36763583, 33, 2) == UTF("-b33.V000W")) &&
		(*NumberTheory::convDecimal2OthBase(-31721794, 34, 2) == UTF("-b34.NP2XW")) &&
		(*NumberTheory::convDecimal2OthBase(-1587565, 35, 2) == UTF("-b35.120Y0")) &&
		(*NumberTheory::convDecimal2OthBase(-60466175, 36, 2) == UTF("-b36.ZZZZZ"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0048", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "convOthBase2Decimal() - special cases";
	TestCommonTools::consolePrintTestApiStart(48, testDescr);
	double potNaN1 = NumberTheory::convOthBase2Decimal((StringPtr) nullptr);
	double potNaN2 = NumberTheory::convOthBase2Decimal("1");
	double potNaN3 = NumberTheory::convOthBase2Decimal("12");
	double potNaN4 = NumberTheory::convOthBase2Decimal("b1.123");
	double potNaN5 = NumberTheory::convOthBase2Decimal("b37.123");
	if (
		(Double::isNaN(potNaN1)) &&
		(Double::isNaN(potNaN2)) &&
		(Double::isNaN(potNaN3)) &&
		(Double::isNaN(potNaN4)) &&
		(Double::isNaN(potNaN5))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0049", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "getMissingUserDefinedArguments()";
	TestCommonTools::consolePrintTestApiStart(49, testDescr);
	ExpressionPtr e = new_Expression("sin(x) + cos(x) + f(x,y) + x + y / z + 2*pi");
	ArrayPtr<StringPtr> misArgs = e->getMissingUserDefinedArguments();
	if (
		(*(*misArgs)(0) == UTF("x")) &&
		(*(*misArgs)(1) == UTF("y")) &&
		(*(*misArgs)(2) == UTF("z")) &&
		(misArgs->length == 3)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0050", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "getMissingUserDefinedFunctions()";
	TestCommonTools::consolePrintTestApiStart(50, testDescr);
	ExpressionPtr e = new_Expression("sin(x) + cos(x) + f(x,y) + x + y / z + 2*pi");
	ArrayPtr<StringPtr> misFun = e->getMissingUserDefinedFunctions();
	if (
		(*(*misFun)(0) == UTF("f")) &&
		(misFun->length == 1)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0051", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Default radian / degrees mode";
	TestCommonTools::consolePrintTestApiStart(51, testDescr);
	if ((mXparser::checkIfRadiansMode() == true) && (mXparser::checkIfDegreesMode() == false))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0052", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Set to degrees mode";
	TestCommonTools::consolePrintTestApiStart(52, testDescr);
	mXparser::setDegreesMode();
	if ((mXparser::checkIfRadiansMode() == false) && (mXparser::checkIfDegreesMode() == true))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0053", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Set to degrees mode";
	TestCommonTools::consolePrintTestApiStart(53, testDescr);
	mXparser::setRadiansMode();
	if ((mXparser::checkIfRadiansMode() == true) && (mXparser::checkIfDegreesMode() == false))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0054", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "roundHalfUp";
	TestCommonTools::consolePrintTestApiStart(54, testDescr);
	if (
		(MathFunctions::roundHalfUp(0.0, 0) == 0.0) &&
		(MathFunctions::roundHalfUp(0.0, 1) == 0.0) &&
		(MathFunctions::roundHalfUp(0.0, 2) == 0.0) &&
		(MathFunctions::roundHalfUp(0.0, 100) == 0.0) &&
		(Double::isNaN(MathFunctions::roundHalfUp(0.0, -1))) &&
		(MathFunctions::roundHalfUp(1.0, 0) == 1.0) &&
		(MathFunctions::roundHalfUp(1.0, 1) == 1.0) &&
		(MathFunctions::roundHalfUp(1.0, 2) == 1.0) &&
		(MathFunctions::roundHalfUp(1.0, 100) == 1.0) &&
		(Double::isNaN(MathFunctions::roundHalfUp(1.0, -1))) &&
		(MathFunctions::roundHalfUp(9856.0, 0) == 9856.0) &&
		(MathFunctions::roundHalfUp(9856.0, 1) == 9856.0) &&
		(MathFunctions::roundHalfUp(9856.0, 2) == 9856.0) &&
		(MathFunctions::roundHalfUp(9856.0, 100) == 9856.0) &&
		(Double::isNaN(MathFunctions::roundHalfUp(9856.0, -1))) &&
		(MathFunctions::roundHalfUp(9.856E303, 0) == 9.856E303) &&
		(MathFunctions::roundHalfUp(9.856E303, 1) == 9.856E303) &&
		(MathFunctions::roundHalfUp(9.856E303, 2) == 9.856E303) &&
		(MathFunctions::roundHalfUp(9.856E303, 100) == 9.856E303) &&
		(Double::isNaN(MathFunctions::roundHalfUp(9.856E303, -1))) &&
		(MathFunctions::roundHalfUp(-1.0, 0) == -1.0) &&
		(MathFunctions::roundHalfUp(-1.0, 1) == -1.0) &&
		(MathFunctions::roundHalfUp(-1.0, 2) == -1.0) &&
		(MathFunctions::roundHalfUp(-1.0, 100) == -1.0) &&
		(Double::isNaN(MathFunctions::roundHalfUp(-1.0, -1))) &&
		(MathFunctions::roundHalfUp(-9856.0, 0) == -9856.0) &&
		(MathFunctions::roundHalfUp(-9856.0, 1) == -9856.0) &&
		(MathFunctions::roundHalfUp(-9856.0, 2) == -9856.0) &&
		(MathFunctions::roundHalfUp(-9856.0, 100) == -9856.0) &&
		(Double::isNaN(MathFunctions::roundHalfUp(-9856.0, -1))) &&
		(MathFunctions::roundHalfUp(-9.856E303, 0) == -9.856E303) &&
		(MathFunctions::roundHalfUp(-9.856E303, 1) == -9.856E303) &&
		(MathFunctions::roundHalfUp(-9.856E303, 2) == -9.856E303) &&
		(MathFunctions::roundHalfUp(-9.856E303, 100) == -9.856E303) &&
		(Double::isNaN(MathFunctions::roundHalfUp(-9.856E303, -1))) &&
		(MathFunctions::roundHalfUp(1.0E-5, 5) == 1.0E-5) &&
		(MathFunctions::roundHalfUp(1.0E-5, 6) == 1.0E-5) &&
		(MathFunctions::roundHalfUp(1.0E-5, 100) == 1.0E-5) &&
		(MathFunctions::roundHalfUp(1.0E-5, 500) == 1.0E-5) &&
		(MathFunctions::roundHalfUp(1.0E-5, 4) == 0.0) &&
		(MathFunctions::roundHalfUp(1.0E-5, 3) == 0.0) &&
		(MathFunctions::roundHalfUp(1.0E-5, 2) == 0.0) &&
		(MathFunctions::roundHalfUp(1.0E-5, 1) == 0.0) &&
		(MathFunctions::roundHalfUp(1.0E-5, 0) == 0.0) &&
		(MathFunctions::roundHalfUp(-1.0E-5, 5) == -1.0E-5) &&
		(MathFunctions::roundHalfUp(-1.0E-5, 6) == -1.0E-5) &&
		(MathFunctions::roundHalfUp(-1.0E-5, 100) == -1.0E-5) &&
		(MathFunctions::roundHalfUp(-1.0E-5, 500) == -1.0E-5) &&
		(MathFunctions::roundHalfUp(-1.0E-5, 4) == -0.0) &&
		(MathFunctions::roundHalfUp(-1.0E-5, 3) == -0.0) &&
		(MathFunctions::roundHalfUp(-1.0E-5, 2) == -0.0) &&
		(MathFunctions::roundHalfUp(-1.0E-5, 1) == -0.0) &&
		(MathFunctions::roundHalfUp(-1.0E-5, 0) == -0.0) &&
		(MathFunctions::roundHalfUp(10.000000000123, 14) == 10.000000000123) &&
		(MathFunctions::roundHalfUp(10.000000000123, 13) == 10.000000000123) &&
		(MathFunctions::roundHalfUp(10.000000000123, 12) == 10.000000000123) &&
		(MathFunctions::roundHalfUp(10.000000000123, 11) == 10.00000000012) &&
		(MathFunctions::roundHalfUp(10.000000000123, 10) == 10.0000000001) &&
		(MathFunctions::roundHalfUp(10.000000000123, 9) == 10.0) &&
		(MathFunctions::roundHalfUp(10.000000000123, 3) == 10.0) &&
		(MathFunctions::roundHalfUp(10.000000000123, 0) == 10.0) &&
		(MathFunctions::roundHalfUp(-10.000000000123, 14) == -10.000000000123) &&
		(MathFunctions::roundHalfUp(-10.000000000123, 13) == -10.000000000123) &&
		(MathFunctions::roundHalfUp(-10.000000000123, 12) == -10.000000000123) &&
		(MathFunctions::roundHalfUp(-10.000000000123, 11) == -10.00000000012) &&
		(MathFunctions::roundHalfUp(-10.000000000123, 10) == -10.0000000001) &&
		(MathFunctions::roundHalfUp(-10.000000000123, 9) == -10.0) &&
		(MathFunctions::roundHalfUp(-10.000000000123, 3) == -10.0) &&
		(MathFunctions::roundHalfUp(-10.000000000123, 0) == -10.0) &&
		(MathFunctions::roundHalfUp(100.444444444445, 200) == 100.444444444445) &&
		(MathFunctions::roundHalfUp(100.444444444445, 14) == 100.444444444445) &&
		(MathFunctions::roundHalfUp(100.444444444445, 13) == 100.444444444445) &&
		(MathFunctions::roundHalfUp(100.444444444445, 12) == 100.444444444445) &&
		(MathFunctions::roundHalfUp(100.444444444445, 11) == 100.44444444445) &&
		(MathFunctions::roundHalfUp(100.444444444445, 10) == 100.4444444444) &&
		(MathFunctions::roundHalfUp(100.444444444445, 9) == 100.444444444) &&
		(MathFunctions::roundHalfUp(100.444444444445, 8) == 100.44444444) &&
		(MathFunctions::roundHalfUp(100.444444444445, 7) == 100.4444444) &&
		(MathFunctions::roundHalfUp(100.444444444445, 6) == 100.444444) &&
		(MathFunctions::roundHalfUp(100.444444444445, 5) == 100.44444) &&
		(MathFunctions::roundHalfUp(100.444444444445, 4) == 100.4444) &&
		(MathFunctions::roundHalfUp(100.444444444445, 3) == 100.444) &&
		(MathFunctions::roundHalfUp(100.444444444445, 2) == 100.44) &&
		(MathFunctions::roundHalfUp(100.444444444445, 1) == 100.4) &&
		(MathFunctions::roundHalfUp(100.444444444445, 0) == 100.0) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 200) == -100.444444444445) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 14) == -100.444444444445) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 13) == -100.444444444445) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 12) == -100.444444444445) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 11) == -100.44444444445) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 10) == -100.4444444444) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 9) == -100.444444444) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 8) == -100.44444444) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 7) == -100.4444444) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 6) == -100.444444) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 5) == -100.44444) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 4) == -100.4444) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 3) == -100.444) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 2) == -100.44) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 1) == -100.4) &&
		(MathFunctions::roundHalfUp(-100.444444444445, 0) == -100.0) &&
		(MathFunctions::roundHalfUp(1.2345678907654321E9, 100) == 1.2345678907654321E9) &&
		(MathFunctions::roundHalfUp(1.2345678907654321E9, 8) == 1.2345678907654321E9) &&
		(MathFunctions::roundHalfUp(1.2345678907654321E9, 7) == 1.2345678907654321E9) &&
		(MathFunctions::roundHalfUp(1.2345678907654321E9, 6) == 1.234567890765432E9) &&
		(MathFunctions::roundHalfUp(1.2345678907654321E9, 5) == 1.23456789076543E9) &&
		(MathFunctions::roundHalfUp(1.2345678907654321E9, 4) == 1.2345678907654E9) &&
		(MathFunctions::roundHalfUp(1.2345678907654321E9, 3) == 1.234567890765E9) &&
		(MathFunctions::roundHalfUp(1.2345678907654321E9, 2) == 1.23456789077E9) &&
		(MathFunctions::roundHalfUp(1.2345678907654321E9, 1) == 1.2345678908E9) &&
		(MathFunctions::roundHalfUp(1.2345678907654321E9, 0) == 1.234567891E9) &&
		(MathFunctions::roundHalfUp(-1.2345678907654321E9, 100) == -1.2345678907654321E9) &&
		(MathFunctions::roundHalfUp(-1.2345678907654321E9, 8) == -1.2345678907654321E9) &&
		(MathFunctions::roundHalfUp(-1.2345678907654321E9, 7) == -1.2345678907654321E9) &&
		(MathFunctions::roundHalfUp(-1.2345678907654321E9, 6) == -1.234567890765432E9) &&
		(MathFunctions::roundHalfUp(-1.2345678907654321E9, 5) == -1.23456789076543E9) &&
		(MathFunctions::roundHalfUp(-1.2345678907654321E9, 4) == -1.2345678907654E9) &&
		(MathFunctions::roundHalfUp(-1.2345678907654321E9, 3) == -1.234567890765E9) &&
		(MathFunctions::roundHalfUp(-1.2345678907654321E9, 2) == -1.23456789077E9) &&
		(MathFunctions::roundHalfUp(-1.2345678907654321E9, 1) == -1.2345678908E9) &&
		(MathFunctions::roundHalfUp(-1.2345678907654321E9, 0) == -1.234567891E9) &&
		(MathFunctions::roundHalfUp(5.9999999999, 11) == 5.9999999999) &&
		(MathFunctions::roundHalfUp(5.9999999999, 10) == 5.9999999999) &&
		(MathFunctions::roundHalfUp(5.9999999999, 9) == 6.0) &&
		(MathFunctions::roundHalfUp(5.9999999999, 3) == 6.0) &&
		(MathFunctions::roundHalfUp(5.9999999999, 0) == 6.0) &&
		(MathFunctions::roundHalfUp(-5.9999999999, 11) == -5.9999999999) &&
		(MathFunctions::roundHalfUp(-5.9999999999, 10) == -5.9999999999) &&
		(MathFunctions::roundHalfUp(-5.9999999999, 9) == -6.0) &&
		(MathFunctions::roundHalfUp(-5.9999999999, 3) == -6.0) &&
		(MathFunctions::roundHalfUp(-5.9999999999, 0) == -6.0) &&
		(MathFunctions::roundHalfUp(1.2300000000000001E305, 307) == 1.2300000000000001E305) &&
		(MathFunctions::roundHalfUp(1.2300000000000001E305, 10) == 1.2300000000000001E305) &&
		(MathFunctions::roundHalfUp(1.2300000000000001E305, 1) == 1.2300000000000001E305) &&
		(MathFunctions::roundHalfUp(1.2300000000000001E305, 0) == 1.2300000000000001E305) &&
		(MathFunctions::roundHalfUp(-1.2300000000000001E305, 307) == -1.2300000000000001E305) &&
		(MathFunctions::roundHalfUp(-1.2300000000000001E305, 10) == -1.2300000000000001E305) &&
		(MathFunctions::roundHalfUp(-1.2300000000000001E305, 1) == -1.2300000000000001E305) &&
		(MathFunctions::roundHalfUp(-1.2300000000000001E305, 0) == -1.2300000000000001E305) &&
		(Double::isNaN(MathFunctions::roundHalfUp(Double::NaN, 0))) &&
		(MathFunctions::roundHalfUp(Double::POSITIVE_INFINITY, 100) == Double::POSITIVE_INFINITY) &&
		(MathFunctions::roundHalfUp(Double::NEGATIVE_INFINITY, 100) == Double::NEGATIVE_INFINITY)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0055", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "To Mixed fraction";
	TestCommonTools::consolePrintTestApiStart(55, testDescr);
	if (
		(*NumberTheory::toMixedFractionString(0.0) == UTF("0")) &&
		(*NumberTheory::toMixedFractionString(1.0) == UTF("1")) &&
		(*NumberTheory::toMixedFractionString(2.0) == UTF("2")) &&
		(*NumberTheory::toMixedFractionString(1234567890.0) == UTF("1234567890")) &&
		(*NumberTheory::toMixedFractionString(-1.0) == UTF("-1")) &&
		(*NumberTheory::toMixedFractionString(-2.0) == UTF("-2")) &&
		(*NumberTheory::toMixedFractionString(-1234567890.0) == UTF("-1234567890")) &&
		(*NumberTheory::toMixedFractionString(1.0 / 2.0) == UTF("1/2")) &&
		(*NumberTheory::toMixedFractionString(-1.0 / 2.0) == UTF("-1/2")) &&
		(*NumberTheory::toMixedFractionString(2.0 / 3.0) == UTF("2/3")) &&
		(*NumberTheory::toMixedFractionString(-2.0 / 3.0) == UTF("-2/3")) &&
		(*NumberTheory::toMixedFractionString(263.0 / 326.0) == UTF("263/326")) &&
		(*NumberTheory::toMixedFractionString(-263.0 / 326.0) == UTF("-263/326")) &&
		(*NumberTheory::toMixedFractionString(2.0 + 5.0 / 6.0) == UTF("2+5/6")) &&
		(*NumberTheory::toMixedFractionString(-2.0 - 5.0 / 6.0) == UTF("-2-5/6")) &&
		(*NumberTheory::toMixedFractionString(2 + 263.0 / 326.0) == UTF("2+263/326")) &&
		(*NumberTheory::toMixedFractionString(-2 - 263.0 / 326.0) == UTF("-2-263/326")) &&
		(*NumberTheory::toMixedFractionString(20 + 263.0 / 326.0) == UTF("20+263/326")) &&
		(*NumberTheory::toMixedFractionString(-20 - 263.0 / 326.0) == UTF("-20-263/326")) &&
		(*NumberTheory::toMixedFractionString(200 + 263.0 / 326.0) == UTF("200+263/326")) &&
		(*NumberTheory::toMixedFractionString(-200 - 263.0 / 326.0) == UTF("-200-263/326")) &&
		(*NumberTheory::toMixedFractionString(2000 + 263.0 / 326.0) == UTF("2000+263/326")) &&
		(*NumberTheory::toMixedFractionString(-2000 - 263.0 / 326.0) == UTF("-2000-263/326")) &&
		(*NumberTheory::toMixedFractionString(20000 + 263.0 / 326.0) == UTF("20000+263/326")) &&
		(*NumberTheory::toMixedFractionString(-20000 - 263.0 / 326.0) == UTF("-20000-263/326")) &&
		(*NumberTheory::toMixedFractionString(200000 + 263.0 / 326.0) == UTF("200000+263/326")) &&
		(*NumberTheory::toMixedFractionString(-200000 - 263.0 / 326.0) == UTF("-200000-263/326")) &&
		(*NumberTheory::toMixedFractionString(2000000 + 263.0 / 326.0) == UTF("2000000+263/326")) &&
		(*NumberTheory::toMixedFractionString(-2000000 - 263.0 / 326.0) == UTF("-2000000-263/326")) &&
		(*NumberTheory::toMixedFractionString(20000000 + 263.0 / 326.0) == UTF("20000000+263/326")) &&
		(*NumberTheory::toMixedFractionString(-20000000 - 263.0 / 326.0) == UTF("-20000000-263/326")) &&
		(*NumberTheory::toMixedFractionString(200000000 + 263.0 / 326.0) == UTF("200000000+263/326")) &&
		(*NumberTheory::toMixedFractionString(-200000000 - 263.0 / 326.0) == UTF("-200000000-263/326")) &&
		(*NumberTheory::toMixedFractionString(2000000000 + 263.0 / 326.0) == UTF("2000000000+263/326")) &&
		(*NumberTheory::toMixedFractionString(-2000000000 - 263.0 / 326.0) == UTF("-2000000000-263/326")) &&
		(*NumberTheory::toMixedFractionString(20000000000.0 + 263.0 / 326.0) == UTF("20000000000+263/326")) &&
		(*NumberTheory::toMixedFractionString(-20000000000.0 - 263.0 / 326.0) == UTF("-20000000000-263/326"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0056", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "To fraction";
	TestCommonTools::consolePrintTestApiStart(56, testDescr);
	if (
		(*NumberTheory::toFractionString(0.0) == UTF("0")) &&
		(*NumberTheory::toFractionString(1.0) == UTF("1")) &&
		(*NumberTheory::toFractionString(2.0) == UTF("2")) &&
		(*NumberTheory::toFractionString(1234567890.0) == UTF("1234567890")) &&
		(*NumberTheory::toFractionString(-1.0) == UTF("-1")) &&
		(*NumberTheory::toFractionString(-2.0) == UTF("-2")) &&
		(*NumberTheory::toFractionString(-1234567890.0) == UTF("-1234567890")) &&
		(*NumberTheory::toFractionString(1.0 / 2.0) == UTF("1/2")) &&
		(*NumberTheory::toFractionString(-1.0 / 2.0) == UTF("-1/2")) &&
		(*NumberTheory::toFractionString(2.0 / 3.0) == UTF("2/3")) &&
		(*NumberTheory::toFractionString(-2.0 / 3.0) == UTF("-2/3")) &&
		(*NumberTheory::toFractionString(263.0 / 326.0) == UTF("263/326")) &&
		(*NumberTheory::toFractionString(-263.0 / 326.0) == UTF("-263/326")) &&
		(*NumberTheory::toFractionString(17.0 / 6.0) == UTF("17/6")) &&
		(*NumberTheory::toFractionString(-17.0 / 6.0) == UTF("-17/6")) &&
		(*NumberTheory::toFractionString(915.0 / 326.0) == UTF("915/326")) &&
		(*NumberTheory::toFractionString(-915.0 / 326.0) == UTF("-915/326")) &&
		(*NumberTheory::toFractionString(6783.0 / 326.0) == UTF("6783/326")) &&
		(*NumberTheory::toFractionString(-6783.0 / 326.0) == UTF("-6783/326")) &&
		(*NumberTheory::toFractionString(65463.0 / 326.0) == UTF("65463/326")) &&
		(*NumberTheory::toFractionString(-65463.0 / 326.0) == UTF("-65463/326")) &&
		(*NumberTheory::toFractionString(652263.0 / 326.0) == UTF("652263/326")) &&
		(*NumberTheory::toFractionString(-652263.0 / 326.0) == UTF("-652263/326")) &&
		(*NumberTheory::toFractionString(6520263.0 / 326.0) == UTF("6520263/326")) &&
		(*NumberTheory::toFractionString(-6520263.0 / 326.0) == UTF("-6520263/326")) &&
		(*NumberTheory::toFractionString(65200263.0 / 326.0) == UTF("65200263/326")) &&
		(*NumberTheory::toFractionString(-65200263.0 / 326.0) == UTF("-65200263/326")) &&
		(*NumberTheory::toFractionString(652000263.0 / 326.0) == UTF("652000263/326")) &&
		(*NumberTheory::toFractionString(-652000263.0 / 326.0) == UTF("-652000263/326")) &&
		(*NumberTheory::toFractionString(6520000263.0 / 326.0) == UTF("6520000263/326")) &&
		(*NumberTheory::toFractionString(-6520000263.0 / 326.0) == UTF("-6520000263/326")) &&
		(*NumberTheory::toFractionString(65200000263.0 / 326.0) == UTF("65200000263/326")) &&
		(*NumberTheory::toFractionString(-65200000263.0 / 326.0) == UTF("-65200000263/326")) &&
		(*NumberTheory::toFractionString(652000000263.0 / 326.0) == UTF("652000000263/326")) &&
		(*NumberTheory::toFractionString(-652000000263.0 / 326.0) == UTF("-652000000263/326")) &&
		(*NumberTheory::toFractionString(6520000000263.0 / 326.0) == UTF("6520000000263/326")) &&
		(*NumberTheory::toFractionString(-6520000000263.0 / 326.0) == UTF("-6520000000263/326"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0057", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Variadic user function";
	TestCommonTools::consolePrintTestApiStart(57, testDescr);
	FunctionPtr f = new_Function("f(...) = sum( i, 1, [npar], par(i) )");
	if (
		(f->calculate(1) == 1) &&
		(f->calculate(1, 2) == 3) &&
		(f->calculate(1, 2, 3) == 6) &&
		(f->calculate(1, 2, 3, 4) == 10) &&
		(f->calculate(1, 2, 3, 4, 5) == 15)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0058", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Variadic user function with extension";
	TestCommonTools::consolePrintTestApiStart(58, testDescr);
	FunctionExtensionVariadicPtr gx = new_FunExtVar();
	FunctionPtr g = new_Function("g", gx);
	if (
		(g->calculate(1) == 1) &&
		(g->calculate(1, 2) == 3) &&
		(g->calculate(1, 2, 3) == 6) &&
		(g->calculate(1, 2, 3, 4) == 10) &&
		(g->calculate(1, 2, 3, 4, 5) == 15)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0059", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Almost int rounding disable / enable";
	TestCommonTools::consolePrintTestApiStart(59, testDescr);
	bool u1 = mXparser::checkIfAlmostIntRounding();
	mXparser::disableAlmostIntRounding();
	bool u2 = mXparser::checkIfAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	bool u3 = mXparser::checkIfAlmostIntRounding();
	if ((u1 == true) && (u2 == false) && (u3 == true))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0060", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringIndexOutOfBoundsException asking for tokens of empty expression #135";
	TestCommonTools::consolePrintTestApiStart(60, testDescr);
	ExpressionPtr e = new_Expression("");
	ListPtr<TokenPtr> tokens = e->getCopyOfInitialTokens();
	if (tokens->size() == 0)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0061", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument check syntax #145";
	TestCommonTools::consolePrintTestApiStart(61, testDescr);
	ArgumentPtr x = new_Argument("AAAAA", 730000000);
	if (x->checkSyntax() == Argument::NO_SYNTAX_ERRORS)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0062", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument check syntax #145";
	TestCommonTools::consolePrintTestApiStart(62, testDescr);
	ArgumentPtr x = new_Argument("AAAAA = 730000000");
	if (x->checkSyntax() == Argument::NO_SYNTAX_ERRORS)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0063", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument check syntax #145";
	TestCommonTools::consolePrintTestApiStart(63, testDescr);
	ArgumentPtr x = new_Argument("AAAAA = y*730000000");
	if (x->checkSyntax() == Argument::SYNTAX_ERROR)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0064", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument check syntax #145";
	TestCommonTools::consolePrintTestApiStart(64, testDescr);
	ArgumentPtr y = new_Argument("y", 2);
	ArgumentPtr x = new_Argument("AAAAA = y*730000000", y);
	if (x->checkSyntax() == Argument::NO_SYNTAX_ERRORS)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0065", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument check syntax #145";
	TestCommonTools::consolePrintTestApiStart(65, testDescr);
	ExpressionPtr e = new_Expression("f(2)-2 * [ww]+a+[qq1]");
	ArrayPtr<StringPtr> units = e->getMissingUserDefinedUnits();
	ArrayPtr<StringPtr> args = e->getMissingUserDefinedArguments();
	ArrayPtr<StringPtr> fun = e->getMissingUserDefinedFunctions();
	if (units->length == 2 && args->length == 1 && fun->length == 1)
		if (*(*units)(0) == UTF("[ww]") && *(*units)(1) == UTF("[qq1]"))
			if (*(*args)(0) == UTF("a") && *(*fun)(0) == UTF("f"))
				testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0066", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Trigonometric functions special values - compared to Math";
	TestCommonTools::consolePrintTestApiStart(66, testDescr);
	testResult = true;
	for (const SpecialValueTrigonometricPtr &sv: SpecialValueTrigonometric::valuesListTrig) {
		if (Math::abs(sv->sin - Math::sin(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
		if (Math::abs(sv->cos - Math::cos(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
		if (!Double::isNaN(sv->tan))
			if (Math::abs(sv->tan - Math::tan(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				testResult = false;
		if (!Double::isNaN(sv->ctan))
			if (Math::abs(sv->ctan - 1.0 / Math::tan(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				testResult = false;
		if (!Double::isNaN(sv->sec))
			if (Math::abs(sv->sec - 1.0 / Math::cos(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				testResult = false;
		if (!Double::isNaN(sv->csc))
			if (Math::abs(sv->csc - 1.0 / Math::sin(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0067", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Inverse trigonometric functions special values - compared to Math";
	TestCommonTools::consolePrintTestApiStart(67, testDescr);
	testResult = true;
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListAsin) {
		if (!Double::isNaN(sv->fv))
			if (Math::abs(sv->fv - Math::asin(sv->x)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
	}
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListAcos) {
		if (!Double::isNaN(sv->fv))
			if (Math::abs(sv->fv - Math::acos(sv->x)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
	}
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListAtan) {
		if (!Double::isNaN(sv->fv))
			if (Math::abs(sv->fv - Math::atan(sv->x)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
	}
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListActan) {
		if (!Double::isNaN(sv->fv)) {
			double actan = Double::NaN;
			if (sv->x > 0) actan = Math::atan(1.0 / sv->x);
			else if (sv->x < 0) actan = Math::atan(1.0 / sv->x) + MathConstants::PI;
			if (Math::abs(sv->fv - actan) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
		}
	}
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListAsec) {
		if (!Double::isNaN(sv->fv)) {
			double asec = Math::acos(1.0 / sv->x);
			if (Math::abs(sv->fv - asec) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
		}
	}
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListAcsc) {
		if (!Double::isNaN(sv->fv)) {
			double acsc = Math::asin(1.0 / sv->x);
			if (Math::abs(sv->fv - acsc) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
		}
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0068", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Trigonometric functions special values - compared to MathFunctions";
	TestCommonTools::consolePrintTestApiStart(68, testDescr);
	testResult = true;
	for (SpecialValueTrigonometricPtr sv: SpecialValueTrigonometric::valuesListTrig) {
		if (Math::abs(sv->sin - MathFunctions::sin(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
		if (Math::abs(sv->cos - MathFunctions::cos(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
		if (!Double::isNaN(sv->tan))
			if (Math::abs(sv->tan - MathFunctions::tan(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				testResult = false;
		if (!Double::isNaN(sv->ctan))
			if (Math::abs(sv->ctan - MathFunctions::ctan(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				testResult = false;
		if (!Double::isNaN(sv->sec))
			if (Math::abs(sv->sec - MathFunctions::sec(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				testResult = false;
		if (!Double::isNaN(sv->csc))
			if (Math::abs(sv->csc - MathFunctions::cosec(sv->xrad)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0069", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Inverse trigonometric functions special values - compared to MathFunctions";
	TestCommonTools::consolePrintTestApiStart(69, testDescr);
	testResult = true;
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListAsin) {
		if (!Double::isNaN(sv->fv))
			if (Math::abs(sv->fv - MathFunctions::asin(sv->x)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				testResult = false;
	}
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListAcos) {
		if (!Double::isNaN(sv->fv))
			if (Math::abs(sv->fv - MathFunctions::acos(sv->x)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				testResult = false;
	}
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListAtan) {
		if (!Double::isNaN(sv->fv))
			if (Math::abs(sv->fv - MathFunctions::atan(sv->x)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				testResult = false;
	}
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListActan) {
		if (!Double::isNaN(sv->fv)) {
			double actan = Double::NaN;
			actan = MathFunctions::actan(sv->x);
			if (Math::abs(sv->fv - actan) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
		}
	}
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListAsec) {
		if (!Double::isNaN(sv->fv)) {
			double asec = MathFunctions::asec(sv->x);
			if (Math::abs(sv->fv - asec) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
		}
	}
	for (const SpecialValuePtr &sv: *SpecialValueTrigonometric::valuesListAcsc) {
		if (!Double::isNaN(sv->fv)) {
			double acsc = MathFunctions::acosec(sv->x);
			if (Math::abs(sv->fv - acsc) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
		}
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0070", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Sine test";
	TestCommonTools::consolePrintTestApiStart(70, testDescr);
	testResult = true;
	for (double a = -6; a <= 6; a += 0.1) {
		if (Math::abs(Math::sin(a) - MathFunctions::sin(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0071", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Cosine test";
	TestCommonTools::consolePrintTestApiStart(71, testDescr);
	testResult = true;
	for (double a = -6; a <= 6; a += 0.1) {
		if (Math::abs(Math::cos(a) - MathFunctions::cos(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0072", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Tangent test";
	TestCommonTools::consolePrintTestApiStart(72, testDescr);
	testResult = true;
	for (double a = -6; a <= 6; a += 0.1) {
		if (Math::abs(Math::tan(a) - MathFunctions::tan(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0073", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Cotangent test";
	TestCommonTools::consolePrintTestApiStart(73, testDescr);
	testResult = true;
	for (double a = -6; a <= 6; a += 0.1) {
		if (Math::abs(1.0 / Math::tan(a) - MathFunctions::ctan(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0074", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Secant test";
	TestCommonTools::consolePrintTestApiStart(74, testDescr);
	testResult = true;
	for (double a = -6; a <= 6; a += 0.1) {
		if (Math::abs(1.0 / Math::cos(a) - MathFunctions::sec(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0075", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Cosecant test";
	TestCommonTools::consolePrintTestApiStart(75, testDescr);
	testResult = true;
	for (double a = -6; a <= 6; a += 0.1) {
		if (Math::abs(1.0 / Math::sin(a) - MathFunctions::cosec(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0076", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Inverse sine test";
	TestCommonTools::consolePrintTestApiStart(76, testDescr);
	testResult = true;
	for (double a = -0.9; a <= 0.9; a += 0.1) {
		if (Math::abs(Math::asin(a) - MathFunctions::asin(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0077", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Inverse cosine test";
	TestCommonTools::consolePrintTestApiStart(77, testDescr);
	testResult = true;
	for (double a = -0.9; a <= 0.9; a += 0.1) {
		if (Math::abs(Math::acos(a) - MathFunctions::acos(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0078", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Inverse tangent test";
	TestCommonTools::consolePrintTestApiStart(78, testDescr);
	testResult = true;
	for (double a = -5; a <= 5; a += 0.1) {
		if (Math::abs(Math::atan(a) - MathFunctions::atan(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0079", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Inverse ctangent test";
	TestCommonTools::consolePrintTestApiStart(79, testDescr);
	testResult = true;
	for (double a = -5; a <= 5; a += 0.1) {
		double atan = Double::NaN;
		if (a > 0) atan = Math::atan(1 / a);
		else if (a < 0) atan = Math::atan(1 / a) + MathConstants::PI;
		if (Math::abs(atan - MathFunctions::actan(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON) testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0080", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Inverse secant test";
	TestCommonTools::consolePrintTestApiStart(80, testDescr);
	testResult = true;
	for (double a = -5.05; a <= 5.05; a += 0.1) {
		if (Math::abs(Math::acos(1 / a) - MathFunctions::asec(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0081", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Inverse cosecant test";
	TestCommonTools::consolePrintTestApiStart(81, testDescr);
	testResult = true;
	for (double a = -5.05; a <= 5.05; a += 0.1) {
		if (Math::abs(Math::asin(1 / a) - MathFunctions::acosec(a)) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
			testResult = false;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0082", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument extension test";
	TestCommonTools::consolePrintTestApiStart(82, testDescr);
	testResult = true;
	ArgumentExtensionPtr piMultArgExt = new_PiMultArgExt();
	ArgumentPtr pim = new_Argument("pim", piMultArgExt);
	if (pim->getArgumentBodyType() != Argument::BODY_EXTENDED) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0083", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument extension test";
	TestCommonTools::consolePrintTestApiStart(83, testDescr);
	testResult = true;
	ArgumentExtensionPtr piMultArgExt = new_PiMultArgExt();
	ArgumentPtr pim = new_Argument("pim", piMultArgExt);
	if (pim->getArgumentBodyType() != Argument::BODY_EXTENDED) testResult = false;
	pim->setArgumentValue(3.0);
	if (pim->getArgumentBodyType() != Argument::BODY_RUNTIME) testResult = false;
	if (pim->getArgumentValue() != 3.0) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0084", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument extension test";
	TestCommonTools::consolePrintTestApiStart(84, testDescr);
	testResult = true;
	ArgumentExtensionPtr piMultArgExt = new_PiMultArgExt();
	ArgumentPtr pim = new_Argument("pim", piMultArgExt);
	if (pim->getArgumentBodyType() != Argument::BODY_EXTENDED) testResult = false;
	pim->setArgumentExpressionString("2+3");
	if (pim->getArgumentBodyType() != Argument::BODY_RUNTIME) testResult = false;
	if (pim->getArgumentValue() != 5.0) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0085", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(85, testDescr);
	testResult = true;
	ExpressionPtr e = new_Expression("2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi");
	if (*e->getCanonicalExpressionString() != UTF("2.1e2*(.3+0.4)*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi"))
		testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0086", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(86, testDescr);
	testResult = true;
	ExpressionPtr e = new_Expression("2.1a2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi\n");
	if (*e->getCanonicalExpressionString() != UTF(
		    "2.1*a*2.1e2*(.3+0.4)*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi"))
		testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0087", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(87, testDescr);
	testResult = testCanonicalString("2x", "2*x");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0088", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(88, testDescr);
	testResult = testCanonicalString("2xy", "2*xy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0089", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(89, testDescr);
	testResult = testCanonicalString("2xy", "2*x*y", "x");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0090", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(90, testDescr);
	testResult = testCanonicalString("2xyzsin(x)cos(x)2(3+4)6", "2*x*yz*sin(x)*cos(x)*2*(3+4)*6", "x");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0091", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(91, testDescr);
	testResult = testCanonicalString("2xyz2", "2*x*y*z2", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0092", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(92, testDescr);
	testResult = testCanonicalString("2xyz2", "2*x*y*z2", "x", "y", "z");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0093", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(93, testDescr);
	testResult = testCanonicalString("2xyz2.1", "2*x*y*z*2.1", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0094", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(94, testDescr);
	testResult = testCanonicalString("2xyz2.1e", "2*x*y*z*2.1*e", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0095", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(95, testDescr);
	testResult = testCanonicalString("2xyz2.1e3", "2*x*y*z*2.1e3", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0096", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(96, testDescr);
	testResult = testCanonicalString("2xyzh.1234", "2*x*y*z*h.1234", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0097", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(97, testDescr);
	testResult = testCanonicalString("2.1xyzh.1234", "2.1*x*y*z*h.1234", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0098", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(98, testDescr);
	testResult = testCanonicalString("-2.1xyzh.1234", "-2.1*x*y*z*h.1234", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0099", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(99, testDescr);
	testResult = testCanonicalString("1_2_3-2.1xyzh.1234", "1_2_3-2.1*x*y*z*h.1234", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0100", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(100, testDescr);
	testResult = testCanonicalString("1_2_3xyzh.1234", "1_2_3*x*y*z*h.1234", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0101", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(101, testDescr);
	testResult = testCanonicalString("2_3xyzh.1234", "2_3*x*y*z*h.1234", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0102", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(102, testDescr);
	testResult = testCanonicalString("b4.0123xyzh.1234", "b4.0123*x*y*z*h.1234", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0103", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(103, testDescr);
	testResult = testCanonicalString("2.1apipi[h-]2.1e2pi(.3+0.4)[h-]pi.01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi",
	                                 "2.1*a*pi*pi*[h-]*2.1e2*pi*(.3+0.4)*[h-]*pi*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0104", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(104, testDescr);
	testResult = testCanonicalString("xy1_2_3zh.1234", "x*y*1_2_3*z*h.1234", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0105", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(105, testDescr);
	testResult = testCanonicalString("xyh.1234z1_2_3", "x*y*h.1234*z*1_2_3", "x", "y");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0106", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(106, testDescr);
	testResult = testCanonicalString("xyh.1234z1_2_3", "xy*h.1234*z*1_2_3");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0107", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(107, testDescr);
	testResult = testCanonicalString("2xx", "2*xx");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0108", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(108, testDescr);
	testResult = testCanonicalString("2xxyy", "2*xxyy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0109", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(109, testDescr);
	testResult = testCanonicalString("2xxyy", "2*xx*yy", "xx");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0110", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(110, testDescr);
	testResult = testCanonicalString("2xxyyzsin(xx)cos(xx)2(3+4)6", "2*xx*yyz*sin(xx)*cos(xx)*2*(3+4)*6", "xx");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0111", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(111, testDescr);
	testResult = testCanonicalString("2xxyyz2", "2*xx*yy*z2", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0112", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(112, testDescr);
	testResult = testCanonicalString("2xxyyz2", "2*xx*yy*z2", "xx", "yy", "z");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0113", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(113, testDescr);
	testResult = testCanonicalString("2xxyyz2.1", "2*xx*yy*z*2.1", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0114", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(114, testDescr);
	testResult = testCanonicalString("2xxyyz2.1e", "2*xx*yy*z*2.1*e", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0115", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(115, testDescr);
	testResult = testCanonicalString("2xxyyz2.1e3", "2*xx*yy*z*2.1e3", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0116", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(116, testDescr);
	testResult = testCanonicalString("2xxyyzh.1234", "2*xx*yy*z*h.1234", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0117", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(117, testDescr);
	testResult = testCanonicalString("2.1xxyyzh.1234", "2.1*xx*yy*z*h.1234", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0118", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(118, testDescr);
	testResult = testCanonicalString("-2.1xxyyzh.1234", "-2.1*xx*yy*z*h.1234", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0119", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(119, testDescr);
	testResult = testCanonicalString("1_2_3-2.1xxyyzh.1234", "1_2_3-2.1*xx*yy*z*h.1234", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0120", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(120, testDescr);
	testResult = testCanonicalString("1_2_3xxyyzh.1234", "1_2_3*xx*yy*z*h.1234", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0121", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(121, testDescr);
	testResult = testCanonicalString("2_3xxyyzh.1234", "2_3*xx*yy*z*h.1234", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0122", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(122, testDescr);
	testResult = testCanonicalString("b4.0123xxyyzh.1234", "b4.0123*xx*yy*z*h.1234", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0123", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(123, testDescr);
	testResult = testCanonicalString("2.1apipi[h-]2.1e2pi(.3+0.4)[h-]pi.01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi",
	                                 "2.1*a*pi*pi*[h-]*2.1e2*pi*(.3+0.4)*[h-]*pi*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0124", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(124, testDescr);
	testResult = testCanonicalString("xxyy1_2_3zh.1234", "xx*yy*1_2_3*z*h.1234", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0125", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(125, testDescr);
	testResult = testCanonicalString("xxyyh.1234z1_2_3", "xx*yy*h.1234*z*1_2_3", "xx", "yy");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0126", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(126, testDescr);
	testResult = testCanonicalString("xxyyh.1234z1_2_3", "xxyy*h.1234*z*1_2_3");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0127", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(127, testDescr);
	testResult = testCanonicalString("2pi2√√pi", "2*pi2*√√pi");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0128", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(128, testDescr);
	testResult = testCanonicalString("2pi2√√2pi", "2*pi2*√√2*pi");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0129", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication on/off API - global and local";
	TestCommonTools::consolePrintTestApiStart(129, testDescr);
	mXparser::enableImpliedMultiplicationMode();
	ExpressionPtr e1 = new_Expression("2pi");
	bool global1 = mXparser::checkIfImpliedMultiplicationMode();
	bool local1 = e1->checkIfImpliedMultiplicationMode();
	mXparser::disableImpliedMultiplicationMode();
	ExpressionPtr e2 = new_Expression("2pi");
	bool global2 = mXparser::checkIfImpliedMultiplicationMode();
	bool local2 = e2->checkIfImpliedMultiplicationMode();
	if (global1 && local1 && !global2 && !local2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0130", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Unicode Parser Keywords on/off API - global and local";
	TestCommonTools::consolePrintTestApiStart(130, testDescr);
	mXparser::enableUnicodeBuiltinKeyWordsMode();
	ExpressionPtr e1 = new_Expression("2pi");
	bool global1 = mXparser::checkIfUnicodeBuiltinKeyWordsMode();
	bool local1 = e1->checkIfUnicodeBuiltinKeyWordsMode();
	mXparser::disableUnicodeBuiltinKeyWordsMode();
	ExpressionPtr e2 = new_Expression("2pi");
	bool global2 = mXparser::checkIfUnicodeBuiltinKeyWordsMode();
	bool local2 = e2->checkIfUnicodeBuiltinKeyWordsMode();
	if (global1 && local1 && !global2 && !local2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0131", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication on/off API - global - check syntax impact";
	TestCommonTools::consolePrintTestApiStart(131, testDescr);
	mXparser::enableImpliedMultiplicationMode();
	ExpressionPtr e1 = new_Expression("2pi");
	bool syn1 = e1->checkSyntax();
	mXparser::disableImpliedMultiplicationMode();
	ExpressionPtr e2 = new_Expression("2pi");
	bool syn2 = e2->checkSyntax();
	if (syn1 && !syn2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0132", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication on/off API - local - check syntax impact";
	TestCommonTools::consolePrintTestApiStart(132, testDescr);
	ExpressionPtr e = new_Expression("2pi");
	e->enableImpliedMultiplicationMode();
	bool syn1 = e->checkSyntax();
	e->disableImpliedMultiplicationMode();
	bool syn2 = e->checkSyntax();
	if (syn1 && !syn2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0133", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Unicode Parser Keywords on/off API - global - check syntax impact";
	TestCommonTools::consolePrintTestApiStart(133, testDescr);
	mXparser::enableUnicodeBuiltinKeyWordsMode();
	ExpressionPtr e1 = new_Expression("√π");
	bool syn1 = e1->checkSyntax();
	mXparser::disableUnicodeBuiltinKeyWordsMode();
	ExpressionPtr e2 = new_Expression("√π");
	bool syn2 = e2->checkSyntax();
	if (syn1 && !syn2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0134", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Unicode Parser Keywords on/off API - local - check syntax impact";
	TestCommonTools::consolePrintTestApiStart(134, testDescr);
	ExpressionPtr e = new_Expression("√π");
	e->enableUnicodeBuiltinKeyWordsMode();
	bool syn1 = e->checkSyntax();
	e->disableUnicodeBuiltinKeyWordsMode();
	bool syn2 = e->checkSyntax();
	if (syn1 && !syn2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0135", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Unicode Parser Keywords on/off API - global - syntax help";
	TestCommonTools::consolePrintTestApiStart(135, testDescr);
	mXparser::enableUnicodeBuiltinKeyWordsMode();
	int n1 = mXparser::getKeyWords()->size();
	mXparser::disableUnicodeBuiltinKeyWordsMode();
	int n2 = mXparser::getKeyWords()->size();
	if (n1 == n2 + 49)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0136", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Unicode Parser Keywords on/off API - local - syntax help";
	TestCommonTools::consolePrintTestApiStart(136, testDescr);
	ExpressionPtr e = new_Expression("2pi");
	e->enableUnicodeBuiltinKeyWordsMode();
	int n1 = e->getKeyWords()->size();
	e->disableUnicodeBuiltinKeyWordsMode();
	int n2 = e->getKeyWords()->size();
	if (n1 == n2 + 49)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0137", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Attempt to fix expression string on/off API - global and local";
	TestCommonTools::consolePrintTestApiStart(137, testDescr);
	mXparser::enableAttemptToFixExpStrMode();
	ExpressionPtr e1 = new_Expression("-+2++3--3+-4-+5-->6<--7<->8++");
	bool global1 = mXparser::checkIfAttemptToFixExpStrMode();
	bool local1 = e1->checkIfAttemptToFixExpStrMode();
	mXparser::disableAttemptToFixExpStrMode();
	ExpressionPtr e2 = new_Expression("-+2++3--3+-4-+5-->6<--7<->8++");
	bool global2 = mXparser::checkIfAttemptToFixExpStrMode();
	bool local2 = e2->checkIfAttemptToFixExpStrMode();
	if (global1 && local1 && !global2 && !local2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0138", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Attempt to fix expression string on/off API - global - check syntax impact";
	TestCommonTools::consolePrintTestApiStart(138, testDescr);
	mXparser::enableAttemptToFixExpStrMode();
	ExpressionPtr e1 = new_Expression("-+2++3--3+-4-+5-->6<--7<->8++");
	bool syn1 = e1->checkSyntax();
	mXparser::disableAttemptToFixExpStrMode();
	ExpressionPtr e2 = new_Expression("-+2++3--3+-4-+5-->6<--7<->8++");
	bool syn2 = e2->checkSyntax();
	if (syn1 && !syn2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0139", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Attempt to fix expression string on/off API - local - check syntax impact";
	TestCommonTools::consolePrintTestApiStart(139, testDescr);
	ExpressionPtr e = new_Expression("-+2++3--3+-4-+5-->6<--7<->8++");
	e->enableAttemptToFixExpStrMode();
	bool syn1 = e->checkSyntax();
	e->disableAttemptToFixExpStrMode();
	bool syn2 = e->checkSyntax();
	if (syn1 && !syn2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0140", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(140, testDescr);
	testResult = testCanonicalString("2--3", "2+3");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0141", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(141, testDescr);
	testResult = testCanonicalString("2++3", "2+3");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0142", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(142, testDescr);
	testResult = testCanonicalString("2+-3", "2-3");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0143", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(143, testDescr);
	testResult = testCanonicalString("2-+3", "2-3");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0144", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(144, testDescr);
	testResult = testCanonicalString("2--3<--4", "2+3<--4");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0145", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(145, testDescr);
	testResult = testCanonicalString("2--3-->4", "2+3-->4");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0146", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(146, testDescr);
	testResult = testCanonicalString("+2--3-->4-", "2+3-->4");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0147", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(147, testDescr);
	testResult = testCanonicalString("-2--3-->4+", "-2+3-->4");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0148", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "Calc Steps Register - Expression 2*(3+4)+5";
	TestCommonTools::consolePrintTestApiStart(148, testDescr);
	ExpressionPtr e = new_Expression("2*(3+4)+5");
	CalcStepsRegisterPtr calcStepsRegister = new_CalcStepsRegister();
	double result = e->calculate(calcStepsRegister);
	if (result != calcStepsRegister->result) testResult = false;
	if (*e->getExpressionString() != *calcStepsRegister->expressionStringStart) testResult = false;
	if (calcStepsRegister->argumentNameStart->length() > 0) testResult = false;
	if (calcStepsRegister->functionNameStart->length() > 0) testResult = false;
	if (calcStepsRegister->calcStepRecords->size() != 4) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0149", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "Calc Steps Register - Argument x = 2*(3+4)+5";
	TestCommonTools::consolePrintTestApiStart(149, testDescr);
	ArgumentPtr x = new_Argument("x", "2*(3+4)+5");
	CalcStepsRegisterPtr calcStepsRegister = new_CalcStepsRegister();
	double result = x->getArgumentValue(calcStepsRegister);
	if (result != calcStepsRegister->result) testResult = false;
	if (*x->getArgumentName() != *calcStepsRegister->argumentNameStart) testResult = false;
	if (*x->getArgumentExpressionString() != *calcStepsRegister->expressionStringStart) testResult = false;
	if (calcStepsRegister->functionNameStart->length() > 0) testResult = false;
	if (calcStepsRegister->calcStepRecords->size() != 4) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0150", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "Calc Steps Register - Function f(x) = 2*(3+4)+5";
	TestCommonTools::consolePrintTestApiStart(150, testDescr);
	FunctionPtr f = new_Function("f(x) = 2*(3+4)+5");
	CalcStepsRegisterPtr calcStepsRegister = new_CalcStepsRegister();
	double result = f->calculate(calcStepsRegister);
	if (*f->getFunctionName() != *calcStepsRegister->functionNameStart) testResult = false;
	if (*StringUtils::trim(f->getFunctionExpressionString()) != *calcStepsRegister->expressionStringStart)
		testResult = false;
	if (calcStepsRegister->argumentNameStart->length() > 0) testResult = false;
	if (calcStepsRegister->calcStepRecords->size() != 4) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0151", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "Calc Steps Register - Expression f(x,y)+z+(x*y)/z";
	TestCommonTools::consolePrintTestApiStart(151, testDescr);
	CalcStepsRegisterPtr calcStepsRegister = new_CalcStepsRegister();
	ArgumentPtr x = new_Argument("x", "2*rList(2,1,3,5,4)");
	ArgumentPtr y = new_Argument("y = 2*x", x);
	ArgumentPtr z = new_Argument("z = 3*y/x", x, y);
	FunctionPtr f = new_Function("f(a,b) = a*b");
	ExpressionPtr e = new_Expression("f(x,y)+z+(x*y)/z", x, y, z, f);
	double result = e->calculate(calcStepsRegister);
	if (result != calcStepsRegister->result) testResult = false;
	if (*e->getExpressionString() != *calcStepsRegister->expressionStringStart) testResult = false;
	if (calcStepsRegister->argumentNameStart->length() > 0) testResult = false;
	if (calcStepsRegister->functionNameStart->length() > 0) testResult = false;
	if (calcStepsRegister->calcStepRecords->size() != 60) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0152", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(152, testDescr);
	testResult = testCanonicalString("sum(i, 1, 10, 2*xi)", "sum(i,1,10,2*x*i)");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0153", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(153, testDescr);
	testResult = testCanonicalString("sum(i, 1, 10, xi*2)", "sum(i,1,10,x*i*2)");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0154", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(154, testDescr);
	testResult = testCanonicalString("sum(i, 1, 10, 2*ix)", "sum(i,1,10,2*i*x)");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0155", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(155, testDescr);
	testResult = testCanonicalString("sum(i, 1, 10, ix*2)", "sum(i,1,10,i*x*2)");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0156", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(156, testDescr);
	testResult = testCanonicalString("sum(i, 1, 10, 2*xpi)", "sum(i,1,10,2*x*pi)");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0157", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(157, testDescr);
	testResult = testCanonicalString("sum(i, 1, 10, xpi*2)", "sum(i,1,10,x*pi*2)");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0158", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(158, testDescr);
	testResult = testCanonicalString("sum(i, 1, 10, 2*pix)", "sum(i,1,10,2*pi*x)");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0159", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(159, testDescr);
	testResult = testCanonicalString("sum(i, 1, 10, pix*2)", "sum(i,1,10,pi*x*2)");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0160", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(160, testDescr);
	testResult = testCanonicalString("300+Caster_Attack*3", "300+Cast*e*r_Attack*3");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0161", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(161, testDescr);
	testResult = testCanonicalString("300+Caster_Attack(2)*3", "300+Cast*e*r_Attack(2)*3");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0162", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(162, testDescr);
	testResult = testCanonicalString("300+Caster_AttackC(2)*3", "300+Cast*e*r_Attack*C(2)*3");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0163", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(163, testDescr);
	mXparser::disableImpliedMultiplicationMode();
	testResult = testCanonicalString("300+Caster_AttackC(2)*3", "300+Caster_AttackC(2)*3");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0164", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Serialization / Deserialization: Argument x Bytes";
	TestCommonTools::consolePrintTestApiStart(164, testDescr);
	ArgumentPtr x = new_Argument("x = 3");
	ArgumentPtr y = new_Argument("y = 2*x", x);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	VectorPtr<char> data = SerializationUtils::serializeToBytes<Argument>(y);
	mXparser::consolePrintln();
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	ArgumentPtr ys = SerializationUtils::deserializeFromBytes<Argument>(data);
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	SerializationUtils::disableBinarySerialization();
	if (ys != nullptr)
		if (*y->getArgumentName() == *ys->getArgumentName() && y->getArgumentValue() == ys->getArgumentValue())
			testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0165", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Serialization / Deserialization: Function x String";
	TestCommonTools::consolePrintTestApiStart(165, testDescr);
	ConstantPtr c = new_Constant("c = 3");
	FunctionPtr g = new_Function("g(x) = 2*x + c", c);
	FunctionPtr f = new_Function("f(x,y) = g(x)*g(y)", g);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	StdStringPtr data = SerializationUtils::serializeToString<Function>(f);
	mXparser::consolePrintln();
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	FunctionPtr fs = SerializationUtils::deserializeFromString<Function>(data);
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	SerializationUtils::disableBinarySerialization();
	if (fs != nullptr)
		if (*f->getFunctionName() == *fs->getFunctionName() && f->calculate(2, 3) == fs->calculate(2, 3))
			testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0166", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Serialization / Deserialization: RecursiveArgument x Bytes";
	TestCommonTools::consolePrintTestApiStart(166, testDescr);
	RecursiveArgumentPtr fib = new_RecursiveArgument("fib(n)= fib(n-1)+fib(n-2)");
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	VectorPtr<char> data = SerializationUtils::serializeToBytes<RecursiveArgument>(fib);
	mXparser::consolePrintln();
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	RecursiveArgumentPtr fibs = SerializationUtils::deserializeFromBytes<RecursiveArgument>(data);
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	SerializationUtils::disableBinarySerialization();
	fib->addBaseCase(0, 0);
	fib->addBaseCase(1, 1);
	if (fibs != nullptr) {
		fibs->addBaseCase(0, 0);
		fibs->addBaseCase(1, 1);
		if (*fib->getArgumentName() == *fibs->getArgumentName() && fib->getArgumentValue(10) == fibs->
		    getArgumentValue(10))
			testResult = true;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0167", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Serialization / Deserialization: Extended Argument x String";
	TestCommonTools::consolePrintTestApiStart(167, testDescr);
	ArgumentExtensionPtr piMultArgExt = new_PiMultArgExt();
	ArgumentPtr x = new_Argument("x", piMultArgExt);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	StdStringPtr s = SerializationUtils::serializeToString<Argument>(x);
	mXparser::consolePrintln();
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	ArgumentPtr xs = SerializationUtils::deserializeFromString<Argument>(s);
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	SerializationUtils::disableBinarySerialization();
	if (xs != nullptr) {
		if (*x->getArgumentName() == *xs->getArgumentName() && x->getArgumentValue() == xs->getArgumentValue())
			testResult = true;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0168", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Serialization / Deserialization: Extended Function x Bytes";
	TestCommonTools::consolePrintTestApiStart(168, testDescr);
	FunctionExtensionPtr funExt = new_FunExt();
	FunctionPtr f = new_Function("f", funExt);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	VectorPtr<char> data = SerializationUtils::serializeToBytes<Function>(f);
	mXparser::consolePrintln();
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	FunctionPtr fs = SerializationUtils::deserializeFromBytes<Function>(data);
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	SerializationUtils::disableBinarySerialization();
	if (fs != nullptr) {
		if (*f->getFunctionName() == *fs->getFunctionName() && f->calculate(2, 3) == fs->calculate(2, 3))
			testResult = true;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0169", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Serialization / Deserialization: Extended Function Variadic x String";
	TestCommonTools::consolePrintTestApiStart(168, testDescr);
	FunctionExtensionVariadicPtr funExtVar = new_FunExtVar();
	FunctionPtr f = new_Function("f", funExtVar);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	StdStringPtr data = SerializationUtils::serializeToString<Function>(f);
	mXparser::consolePrintln();
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	FunctionPtr fs = SerializationUtils::deserializeFromString<Function>(data);
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	SerializationUtils::disableBinarySerialization();
	if (fs != nullptr) {
		if (*f->getFunctionName() == *fs->getFunctionName() && f->calculate(2, 3, 4, 5) == fs->calculate(2, 3, 4, 5))
			testResult = true;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0170", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Serialization / Deserialization: Constant x Bytes";
	TestCommonTools::consolePrintTestApiStart(170, testDescr);
	ConstantPtr b = new_Constant("b = 5");
	ConstantPtr a = new_Constant("a = 2*b", b);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	VectorPtr<char> data = SerializationUtils::serializeToBytes<Constant>(a);
	mXparser::consolePrintln();
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	ConstantPtr as = SerializationUtils::deserializeFromBytes<Constant>(data);
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	SerializationUtils::disableBinarySerialization();
	if (as != nullptr) {
		if (*a->getConstantName() == *as->getConstantName() && a->getConstantValue() == as->getConstantValue())
			testResult = true;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0171", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Serialization / Deserialization: Expression x Bytes";
	TestCommonTools::consolePrintTestApiStart(171, testDescr);
	ConstantPtr a = new_Constant("a = 0.0001");
	FunctionPtr s = new_Function("s(x) = if( abs(x) < a, x, 2*s(x/2)*c(x/2) )", a);
	FunctionPtr c = new_Function("c(x) = if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )", a);
	a = nullptr;
	s->addDefinitions(c);
	c->addDefinitions(s);
	ExpressionPtr e1 = new_Expression("sin(5)-s(5)", s);
	ExpressionPtr e2 = new_Expression("cos(5)-c(5)", c);
	double v1 = e1->calculate();
	double v2 = e2->calculate();
	bool syn1 = e1->getSyntaxStatus();
	bool syn2 = e2->getSyntaxStatus();
	c = nullptr;
	s = nullptr;
	mXparser::consolePrintln();
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	VectorPtr<char> data1 = SerializationUtils::serializeToBytes<Expression>(e1);
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	VectorPtr<char> data2 = SerializationUtils::serializeToBytes<Expression>(e2);
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	ExpressionPtr es1 = SerializationUtils::deserializeFromBytes<Expression>(data1);
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	ExpressionPtr es2 = SerializationUtils::deserializeFromBytes<Expression>(data2);
	mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
	SerializationUtils::disableBinarySerialization();
	if (es1 != nullptr && es2 != nullptr) {
		bool syns1 = es1->getSyntaxStatus();
		bool syns2 = es2->getSyntaxStatus();
		double vs1 = es1->calculate();
		double vs2 = es2->calculate();
		if (syn1 == syns1 && syn2 == syns2)
			if (*e1->getExpressionString() == *es1->getExpressionString() && *e2->getExpressionString() == *es2->
			    getExpressionString() && v1 == vs1 && v2 == vs2)
				testResult = true;
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0172", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Serialization / Deserialization: Expression x File";
	TestCommonTools::consolePrintTestApiStart(171, testDescr);
	ArgumentPtr x = new_Argument("x = 5");
	FunctionPtr f = new_Function("f(x,y) = x + 2*y");
	ExpressionPtr e = new_Expression("f(2,3)*x", f, x);
	double v = e->calculate();
	string tmpPath = getTempDir();
	std::filesystem::path tmpDir(tmpPath);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	try {
		std::filesystem::path canonicalPath = std::filesystem::canonical(tmpDir);
		std::filesystem::path filePath = canonicalPath / "mxp_ser_test.ser";

		mXparser::consolePrintln();
		bool serializationDone = SerializationUtils::serializeToFile<Expression>(e, filePath.string());
		mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
		ExpressionPtr es = SerializationUtils::deserializeFromFile<Expression>(filePath.string());
		mXparser::consolePrintln(SerializationUtils::getLastOperationMessage());
		bool isDeleted = std::filesystem::remove(filePath);
		mXparser::consolePrintln(S("File: ") + filePath.string() + " is deleted = " + isDeleted);
		if (es != nullptr) {
			double vs = es->calculate();
			if (*e->getExpressionString() == *es->getExpressionString() && v == vs)
				testResult = true;
		}
	} catch (const std::filesystem::filesystem_error &ex) {
		mXparser::consolePrintln(ex.what());
	}
	SerializationUtils::disableBinarySerialization();
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0173", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Disabled serialization: serializeToBytes";
	TestCommonTools::consolePrintTestApiStart(173, testDescr);
	ArgumentPtr x = new_Argument("x = 5");
	SerializationUtils::disableBinarySerialization();
	VectorPtr<char> data = SerializationUtils::serializeToBytes<Argument>(x);
	if (data == nullptr && !SerializationUtils::checkLastOperationWasSuccessful())
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0174", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Disabled serialization: serializeToString";
	TestCommonTools::consolePrintTestApiStart(174, testDescr);
	ArgumentPtr x = new_Argument("x = 5");
	SerializationUtils::disableBinarySerialization();
	StdStringPtr data = SerializationUtils::serializeToString<Argument>(x);
	if (data == nullptr && !SerializationUtils::checkLastOperationWasSuccessful())
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0175", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Disabled serialization: serializeToFile";
	TestCommonTools::consolePrintTestApiStart(175, testDescr);
	ArgumentPtr x = new_Argument("x = 5");
	SerializationUtils::disableBinarySerialization();
	string tmpPath = getTempDir();
	std::filesystem::path tmpDir(tmpPath);
	try {
		std::filesystem::path canonicalPath = std::filesystem::canonical(tmpDir);
		std::filesystem::path filePath = canonicalPath / "mxp_ser_test.ser";
		mXparser::consolePrintln();
		bool serializationDone = SerializationUtils::serializeToFile<Argument>(x, filePath.string());
		if (!serializationDone && !SerializationUtils::checkLastOperationWasSuccessful())
			testResult = true;
	} catch (const std::filesystem::filesystem_error &ex) {
		mXparser::consolePrintln(ex.what());
	}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0176", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Disabled serialization: deserializeFromBytes";
	TestCommonTools::consolePrintTestApiStart(176, testDescr);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	ArgumentPtr x = new_Argument("x = 5");
	VectorPtr<char> data = SerializationUtils::serializeToBytes<Argument>(x);
	SerializationUtils::disableBinarySerialization();
	ArgumentPtr xs = SerializationUtils::deserializeFromBytes<Argument>(data);
	if (data != nullptr && xs == nullptr && !SerializationUtils::checkLastOperationWasSuccessful())
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0177", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Disabled serialization: deserializeFromString";
	TestCommonTools::consolePrintTestApiStart(177, testDescr);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	ArgumentPtr x = new_Argument("x = 5");
	StdStringPtr data = SerializationUtils::serializeToString<Argument>(x);
	SerializationUtils::disableBinarySerialization();
	ArgumentPtr xs = SerializationUtils::deserializeFromString<Argument>(data);
	if (data != nullptr && xs == nullptr && !SerializationUtils::checkLastOperationWasSuccessful())
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0178", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Disabled serialization: deserializeFromFile";
	TestCommonTools::consolePrintTestApiStart(178, testDescr);
	ArgumentPtr x = new_Argument("x = 5");
	string tmpPath = getTempDir();
	std::filesystem::path tmpDir(tmpPath);
	try {
		std::filesystem::path canonicalPath = std::filesystem::canonical(tmpDir);
		std::filesystem::path filePath = canonicalPath / "mxp_ser_test.ser";
		mXparser::consolePrintln();
		SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
		bool serializationDone = SerializationUtils::serializeToFile<Argument>(x, filePath.string());
		SerializationUtils::disableBinarySerialization();
		ArgumentPtr xs = SerializationUtils::deserializeFromFile<Argument>(filePath.string());
		if (serializationDone && xs == nullptr && !SerializationUtils::checkLastOperationWasSuccessful())
			testResult = true;
	} catch (const std::filesystem::filesystem_error &ex) {
		mXparser::consolePrintln(ex.what());
	}
	SerializationUtils::disableBinarySerialization();
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0179", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "Check all descriptions of keywords - lengths";
	TestCommonTools::consolePrintTestApiStart(179, testDescr);
	ListPtr<KeyWordPtr> keywords = mXparser::getKeyWords();
	for (const KeyWordPtr &kw: *keywords)
		if (kw->description->length() <= 5) {
			testResult = false;
			break;
		}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0180", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "Check all descriptions of keywords - type description";
	TestCommonTools::consolePrintTestApiStart(180, testDescr);
	ListPtr<KeyWordPtr> keywords = mXparser::getKeyWords();
	for (const KeyWordPtr &kw: *keywords)
		if (!StringUtils::contains(StringUtils::toLowerCase(kw->description),
		                           StringUtils::toLowerCase(Token::getTokenTypeDescription(kw->wordTypeId)))) {
			mXparser::consolePrintln(*Token::getTokenTypeDescription(kw->wordTypeId));
			mXparser::consolePrintHelp(kw->description);
			testResult = false;
			break;
		}
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0181", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Check all parser token types - descriptions";
	TestCommonTools::consolePrintTestApiStart(181, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (*BinaryRelation::TYPE_DESC == *stringResources->BINARY_RELATION
	    && *BitwiseOperator::TYPE_DESC == *stringResources->BITWISE_OPERATOR
	    && *BooleanOperator::TYPE_DESC == *stringResources->BOOLEAN_OPERATOR
	    && *CalculusOperator::TYPE_DESC == *stringResources->CALCULUS_OPERATOR
	    && *ConstantValue::TYPE_DESC == *stringResources->CONSTANT_VALUE
	    && *Function1Arg::TYPE_DESC == *stringResources->FUNCTION_1_ARG
	    && *Function2Arg::TYPE_DESC == *stringResources->FUNCTION_2_ARG
	    && *Function3Arg::TYPE_DESC == *stringResources->FUNCTION_3_ARG
	    && *FunctionVariadic::TYPE_DESC == *stringResources->FUNCTION_VARIADIC
	    && *Operator::TYPE_DESC == *stringResources->OPERATOR
	    && *ParserSymbol::TYPE_DESC == *stringResources->PARSER_SYMBOL
	    && *RandomVariable::TYPE_DESC == *stringResources->RANDOM_VARIABLE
	    && *Unit::TYPE_DESC == *stringResources->UNIT
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0182", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Check all user defined token types - descriptions";
	TestCommonTools::consolePrintTestApiStart(182, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (*Argument::TYPE_DESC == *stringResources->USER_DEFINED_ARGUMENT
	    && *Constant::TYPE_DESC == *stringResources->USER_DEFINED_CONSTANT
	    && *Expression::TYPE_DESC == *stringResources->USER_DEFINED_EXPRESSION
	    && *Function::TYPE_DESC == *stringResources->USER_DEFINED_FUNCTION
	    && *RecursiveArgument::TYPE_DESC_RECURSIVE == *stringResources->USER_DEFINED_RECURSIVE_ARGUMENT
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0183", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Check all user defined token types - descriptions";
	TestCommonTools::consolePrintTestApiStart(183, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (*Argument::TYPE_DESC == *stringResources->USER_DEFINED_ARGUMENT
	    && *Constant::TYPE_DESC == *stringResources->USER_DEFINED_CONSTANT
	    && *Expression::TYPE_DESC == *stringResources->USER_DEFINED_EXPRESSION
	    && *Function::TYPE_DESC == *stringResources->USER_DEFINED_FUNCTION
	    && *RecursiveArgument::TYPE_DESC_RECURSIVE == *stringResources->USER_DEFINED_RECURSIVE_ARGUMENT
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0184",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentDefinitionString, PrimitiveElement...elements) - argumentDefinitionstring == nullptr, elements == nullptr";
	TestCommonTools::consolePrintTestApiStart(184, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument((StringPtr) nullptr);
	ArgumentPtr x = nullptr;
	ArgumentPtr b = new_Argument("b", x);
	if (
		!a->checkSyntax()
		&& StringUtils::contains(a->getErrorMessage(), stringResources->PROVIDED_STRING_IS_NULL)
		&& !b->checkSyntax()
		&& StringUtils::contains(b->getErrorMessage(), stringResources->PROVIDED_ELEMENTS_ARE_NULL)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0185",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentDefinitionString, PrimitiveElement...elements) - nameOnlyTokenRegExp";
	TestCommonTools::consolePrintTestApiStart(185, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument("a");
	ArgumentPtr b = new_Argument("   b   ");
	if (
		*a->getArgumentName() == UTF("a")
		&& a->checkSyntax()
		&& a->getArgumentType() == Argument::FREE_ARGUMENT
		&& StringUtils::contains(a->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& *b->getArgumentName() == UTF("b")
		&& b->checkSyntax()
		&& b->getArgumentType() == Argument::FREE_ARGUMENT
		&& StringUtils::contains(b->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0186",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentDefinitionString, PrimitiveElement...elements) - constArgDefStrRegExp";
	TestCommonTools::consolePrintTestApiStart(186, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument("a = 2*4");
	ArgumentPtr b = new_Argument("   b    = 2*a   ");
	ArgumentPtr c = new_Argument("   c    = 2*a   ");
	c->addArguments(a);
	if (
		*a->getArgumentName() == UTF("a")
		&& a->checkSyntax()
		&& a->getArgumentType() == Argument::FREE_ARGUMENT
		&& a->getArgumentValue() == 8
		&& StringUtils::contains(a->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& *b->getArgumentName() == UTF("b")
		&& *b->getArgumentExpressionString() == UTF("2*a")
		&& StringUtils::contains(b->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& b->getArgumentType() == Argument::DEPENDENT_ARGUMENT
		&& !b->checkSyntax()
		&& StringUtils::contains(b->getErrorMessage(), stringResources->INVALID_TOKEN)
		&& !StringUtils::contains(b->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& *c->getArgumentName() == UTF("c")
		&& c->checkSyntax()
		&& StringUtils::contains(c->getErrorMessage(), stringResources->NO_ERRORS_DETECTED)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0187",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentDefinitionString, PrimitiveElement...elements) - incorrect definition string";
	TestCommonTools::consolePrintTestApiStart(187, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument("a+2");
	ArgumentPtr b = new_Argument("b( = 2   ");
	ArgumentPtr c = new_Argument("   c(x) = 2*x   ");
	if (
		!a->checkSyntax()
		&& StringUtils::contains(a->getErrorMessage(), stringResources->INVALID_ARGUMENT_DEFINITION)
		&& StringUtils::contains(a->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
		&& StringUtils::contains(a->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
		&& !b->checkSyntax()
		&& StringUtils::contains(b->getErrorMessage(), stringResources->INVALID_ARGUMENT_DEFINITION)
		&& StringUtils::contains(b->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
		&& StringUtils::contains(b->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
		&& !c->checkSyntax()
		&& StringUtils::contains(c->getErrorMessage(), stringResources->INVALID_ARGUMENT_DEFINITION)
		&& StringUtils::contains(c->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
		&& StringUtils::contains(c->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0188",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentDefinitionString, bool forceDependent, PrimitiveElement...elements) - argumentDefinitionstring == nullptr, elements == nullptr";
	TestCommonTools::consolePrintTestApiStart(188, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument((StringPtr) nullptr, true);
	ArgumentPtr x = nullptr;
	ArgumentPtr b = new_Argument("b", true, x);
	if (
		!a->checkSyntax()
		&& StringUtils::contains(a->getErrorMessage(), stringResources->PROVIDED_STRING_IS_NULL)
		&& !b->checkSyntax()
		&& StringUtils::contains(b->getErrorMessage(), stringResources->PROVIDED_ELEMENTS_ARE_NULL)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0189",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentDefinitionString, bool forceDependent, PrimitiveElement...elements) - nameOnlyTokenRegExp";
	TestCommonTools::consolePrintTestApiStart(189, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument("a", true);
	ArgumentPtr b = new_Argument("   b   ", true);
	if (
		*a->getArgumentName() == UTF("a")
		&& a->checkSyntax()
		&& a->getArgumentType() == Argument::FREE_ARGUMENT
		&& StringUtils::contains(a->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& *b->getArgumentName() == UTF("b")
		&& b->checkSyntax()
		&& b->getArgumentType() == Argument::FREE_ARGUMENT
		&& StringUtils::contains(b->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0190",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentDefinitionString, bool forceDependent, PrimitiveElement...elements)";
	TestCommonTools::consolePrintTestApiStart(190, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument("a = 2", false);
	ArgumentPtr b = new_Argument("b = 2", true);
	if (
		*a->getArgumentName() == UTF("a")
		&& StringUtils::contains(a->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& a->checkSyntax()
		&& a->getArgumentType() == Argument::FREE_ARGUMENT
		&& StringUtils::contains(b->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& *b->getArgumentName() == UTF("b")
		&& b->checkSyntax()
		&& b->getArgumentType() == Argument::DEPENDENT_ARGUMENT
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0191",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentName, double argumentValue) - argumentName = null";
	TestCommonTools::consolePrintTestApiStart(191, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument((StringPtr) nullptr, 2);
	if (StringUtils::contains(a->getErrorMessage(), stringResources->PROVIDED_STRING_IS_NULL)
	    && !a->checkSyntax()
	    && a->getArgumentName()->length() == 0
	    && Double::isNaN(a->getArgumentValue())
	    && a->getArgumentType() == Argument::FREE_ARGUMENT
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0192",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentName, double argumentValue) - invalid argumentName";
	TestCommonTools::consolePrintTestApiStart(192, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument("1", 2);
	ArgumentPtr b = new_Argument("x()", 2);
	ArgumentPtr c = new_Argument("x(1)", 2);
	ArgumentPtr d = new_Argument("x = ", 2);
	ArgumentPtr e = new_Argument("1+x", 2);
	ArgumentPtr f = new_Argument("1x", 2);
	if (StringUtils::contains(a->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(a->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(a->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !a->checkSyntax()
	    && StringUtils::contains(b->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(b->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(b->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !b->checkSyntax()
	    && StringUtils::contains(c->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(c->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(c->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !c->checkSyntax()
	    && StringUtils::contains(d->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(d->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(d->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !d->checkSyntax()
	    && StringUtils::contains(e->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(e->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(e->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !e->checkSyntax()
	    && StringUtils::contains(f->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(f->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(f->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !f->checkSyntax()
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0193", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument API - public Argument(string argumentName, double argumentValue)";
	TestCommonTools::consolePrintTestApiStart(193, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument("a", 1);
	ArgumentPtr a1 = new_Argument("a1", 2);
	ArgumentPtr a1b = new_Argument("a1b", 3);
	ArgumentPtr x = new_Argument("   x ", 4);
	if (
		StringUtils::contains(a->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& a->checkSyntax()
		&& a->getArgumentType() == Argument::FREE_ARGUMENT
		&& a->getArgumentBodyType() == Argument::BODY_RUNTIME
		&& *a->getArgumentName() == UTF("a")
		&& a->getArgumentValue() == 1
		&& StringUtils::contains(a1->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& a1->checkSyntax()
		&& a1->getArgumentType() == Argument::FREE_ARGUMENT
		&& a1->getArgumentBodyType() == Argument::BODY_RUNTIME
		&& *a1->getArgumentName() == UTF("a1")
		&& a1->getArgumentValue() == 2
		&& StringUtils::contains(a1b->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& a1b->checkSyntax()
		&& a1b->getArgumentType() == Argument::FREE_ARGUMENT
		&& a1b->getArgumentBodyType() == Argument::BODY_RUNTIME
		&& *a1b->getArgumentName() == UTF("a1b")
		&& a1b->getArgumentValue() == 3
		&& StringUtils::contains(x->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& x->checkSyntax()
		&& x->getArgumentType() == Argument::FREE_ARGUMENT
		&& x->getArgumentBodyType() == Argument::BODY_RUNTIME
		&& *x->getArgumentName() == UTF("x")
		&& x->getArgumentValue() == 4
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0194",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentName, ArgumentExtension argumentExtension) - argumentName = null, argumentExtension = null";
	TestCommonTools::consolePrintTestApiStart(194, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentExtensionPtr piMultArgExt = new_PiMultArgExt();
	ArgumentPtr a = new_Argument((StringPtr) nullptr, piMultArgExt);
	ArgumentExtensionPtr nullExtension = nullptr;
	ArgumentPtr b = new_Argument("b", nullExtension);
	if (
		StringUtils::contains(a->getErrorMessage(), stringResources->PROVIDED_STRING_IS_NULL)
		&& !a->checkSyntax()
		&& a->getArgumentName()->length() == 0
		&& a->getArgumentType() == Argument::FREE_ARGUMENT
		&& a->getArgumentBodyType() == Argument::BODY_RUNTIME
		&& Double::isNaN(a->getArgumentValue())
		&& StringUtils::contains(b->getErrorMessage(), stringResources->PROVIDED_EXTENSION_IS_NULL)
		&& !b->checkSyntax()
		&& b->getArgumentName()->length() == 0
		&& b->getArgumentType() == Argument::FREE_ARGUMENT
		&& b->getArgumentBodyType() == Argument::BODY_RUNTIME
		&& Double::isNaN(b->getArgumentValue())
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0195",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentName, ArgumentExtension argumentExtension) - invalid argumentName";
	TestCommonTools::consolePrintTestApiStart(195, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentExtensionPtr piMultArgExt = new_PiMultArgExt();
	ArgumentPtr a = new_Argument("1", piMultArgExt);
	ArgumentPtr b = new_Argument("x()", piMultArgExt);
	ArgumentPtr c = new_Argument("x(1)", piMultArgExt);
	ArgumentPtr d = new_Argument("x = ", piMultArgExt);
	ArgumentPtr e = new_Argument("1+x", piMultArgExt);
	ArgumentPtr f = new_Argument("1x", piMultArgExt);
	if (StringUtils::contains(a->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(a->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(a->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !a->checkSyntax()
	    && StringUtils::contains(b->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(b->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(b->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !b->checkSyntax()
	    && StringUtils::contains(c->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(c->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(c->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !c->checkSyntax()
	    && StringUtils::contains(d->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(d->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(d->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !d->checkSyntax()
	    && StringUtils::contains(e->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(e->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(e->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !e->checkSyntax()
	    && StringUtils::contains(f->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(f->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(f->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !f->checkSyntax()
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0196",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument API - public Argument(string argumentName, ArgumentExtension argumentExtension)";
	TestCommonTools::consolePrintTestApiStart(196, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentExtensionPtr piMultArgExta = new_PiMultArgExt();
	ArgumentExtensionPtr piMultArgExtb = new_PiMultArgExt();
	ArgumentPtr a = new_Argument("a", piMultArgExta);
	ArgumentPtr b = new_Argument("  b ", piMultArgExtb);
	if (
		StringUtils::contains(a->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& a->checkSyntax()
		&& *a->getArgumentName() == UTF("a")
		&& a->getArgumentType() == Argument::FREE_ARGUMENT
		&& a->getArgumentBodyType() == Argument::BODY_EXTENDED
		&& StringUtils::contains(b->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
		&& b->checkSyntax()
		&& *b->getArgumentName() == UTF("b")
		&& b->getArgumentType() == Argument::FREE_ARGUMENT
		&& b->getArgumentBodyType() == Argument::BODY_EXTENDED
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0197",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentName, string argumentExpressionString, PrimitiveElement... elements) - argumentName = null, argumentExpressionstring = null, elements = null";
	TestCommonTools::consolePrintTestApiStart(197, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr nullString = nullptr;
	StringPtr bStr = S("b");
	StringPtr plus23 = S("2+3");
	ArgumentPtr nullElements = nullptr;
	ArgumentPtr a = new_Argument(nullString, plus23);
	ArgumentPtr b = new_Argument(bStr, nullString);
	ArgumentPtr c = new_Argument(bStr, plus23, nullElements);
	if (
		StringUtils::contains(a->getErrorMessage(), stringResources->PROVIDED_STRING_IS_NULL)
		&& !a->checkSyntax()
		&& a->getArgumentName()->length() == 0
		&& a->getArgumentType() == Argument::FREE_ARGUMENT
		&& a->getArgumentBodyType() == Argument::BODY_RUNTIME
		&& Double::isNaN(a->getArgumentValue())
		&& StringUtils::contains(b->getErrorMessage(), stringResources->PROVIDED_STRING_IS_NULL)
		&& !b->checkSyntax()
		&& b->getArgumentName()->length() == 0
		&& b->getArgumentType() == Argument::FREE_ARGUMENT
		&& b->getArgumentBodyType() == Argument::BODY_RUNTIME
		&& Double::isNaN(b->getArgumentValue())
		&& StringUtils::contains(c->getErrorMessage(), stringResources->PROVIDED_ELEMENTS_ARE_NULL)
		&& !c->checkSyntax()
		&& c->getArgumentName()->length() == 0
		&& c->getArgumentType() == Argument::FREE_ARGUMENT
		&& c->getArgumentBodyType() == Argument::BODY_RUNTIME
		&& Double::isNaN(c->getArgumentValue())
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0198",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public Argument(string argumentName, string argumentExpressionString, PrimitiveElement... elements) - invalid argumentName";
	TestCommonTools::consolePrintTestApiStart(198, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument("1", "2+3");
	ArgumentPtr b = new_Argument("x()", "2+3");
	ArgumentPtr c = new_Argument("x(1)", "2+3");
	ArgumentPtr d = new_Argument("x = ", "2+3");
	ArgumentPtr e = new_Argument("1+x", "2+3");
	ArgumentPtr f = new_Argument("1x", "2+3");
	if (StringUtils::contains(a->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(a->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(a->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !a->checkSyntax()
	    && StringUtils::contains(b->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(b->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(b->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !b->checkSyntax()
	    && StringUtils::contains(c->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(c->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(c->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !c->checkSyntax()
	    && StringUtils::contains(d->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(d->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(d->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !d->checkSyntax()
	    && StringUtils::contains(e->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(e->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(e->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !e->checkSyntax()
	    && StringUtils::contains(f->getErrorMessage(), stringResources->INVALID_ARGUMENT_NAME)
	    && StringUtils::contains(f->getErrorMessage(), stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(f->getErrorMessage(), stringResources->PATTERN_EXAMPLES)
	    && !f->checkSyntax()
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0199",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument API - public Argument(string argumentName, ArgumentExtension argumentExtension)";
	TestCommonTools::consolePrintTestApiStart(199, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	ArgumentPtr a = new_Argument("a", "2+3");
	ArgumentPtr b = new_Argument("  b ", "2*3");
	if (StringUtils::contains(a->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
	    && a->checkSyntax()
	    && *a->getArgumentName() == UTF("a")
	    && a->getArgumentType() == Argument::DEPENDENT_ARGUMENT
	    && a->getArgumentBodyType() == Argument::BODY_RUNTIME
	    && a->getArgumentValue() == 5
	    && StringUtils::contains(b->getErrorMessage(), stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
	    && b->checkSyntax()
	    && *b->getArgumentName() == UTF("b")
	    && b->getArgumentType() == Argument::DEPENDENT_ARGUMENT
	    && b->getArgumentBodyType() == Argument::BODY_RUNTIME
	    && b->getArgumentValue() == 6
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

