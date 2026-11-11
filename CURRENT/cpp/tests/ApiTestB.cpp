/*
 * @(#)ApiTestB.cpp        6.2.0    2026-11-11
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

TEST_CASE("testApi0200", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument API - setDescription, getDescription";
	TestCommonTools::consolePrintTestApiStart(200, testDescr);
	ArgumentPtr a = new_Argument("a = 2");
	a->setDescription("b");
	if (*a->getDescription() == UTF("b"))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0201", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument API - setVerboseMode, setSilentMode, getVerboseMode";
	TestCommonTools::consolePrintTestApiStart(201, testDescr);
	ArgumentPtr a = new_Argument("a", "2+3");
	a->setVerboseMode();
	bool v1 = a->getVerboseMode();
	a->setSilentMode();
	bool v2 = a->getVerboseMode();
	if (v1 & !v2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0202", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Expression API - error while calculate - behaviour test";
	TestCommonTools::consolePrintTestApiStart(202, testDescr);
	ArgumentPtr x = new_Argument("x = if(isNaN(x) || x> 3, 100, x/2)");
	x->addArguments(x);
	StringPtr e1 = x->getErrorMessage();
	bool syn = x->checkSyntax();
	StringPtr e2 = x->getErrorMessage();
	double v = x->getArgumentValue();
	StringPtr e3 = x->getErrorMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(e1, stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
	    && syn
	    && StringUtils::contains(e2, stringResources->NO_ERRORS_DETECTED)
	    && Double::isNaN(v)
	    && StringUtils::contains(e3, stringResources->RECURSION_CALLS_COUNTER_EXCEEDED)
	    && StringUtils::contains(e3, stringResources->ERROR_WHILE_EXECUTING_THE_CALCULATE)
	    && StringUtils::contains(e3, stringResources->EXCEPTION)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0203", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument API - public getComputingTime()";
	TestCommonTools::consolePrintTestApiStart(203, testDescr);
	ArgumentPtr a = new_Argument("a", 2);
	ArgumentPtr b = new_Argument("b", "sum(i, 1, 200000, i)");
	a->getArgumentValue();
	b->getArgumentValue();
	if (a->getComputingTime() == 0 && b->getComputingTime() > 0)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0204", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument API - public void setArgumentName(string argumentName)";
	TestCommonTools::consolePrintTestApiStart(204, testDescr);
	ArgumentPtr a = new_Argument("a", 2);
	a->setArgumentName((StringPtr) nullptr);
	ArgumentPtr b = new_Argument("1a2", 2);
	b->setArgumentName((StringPtr) nullptr);
	ArgumentPtr c = new_Argument("1a2", 2);
	c->setArgumentName("c");
	c->setArgumentValue(2);
	ArgumentPtr d = new_Argument("d", 2);
	d->setArgumentName("1a2");
	if (*a->getArgumentName() == UTF("a")
	    && a->checkSyntax()
	    && b->getArgumentName()->length() == 0
	    && *c->getArgumentName() == UTF("c")
	    && c->getArgumentValue() == 2
	    && *d->getArgumentName() == UTF("d")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0205",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument API - public void setArgumentExpressionString(string argumentExpressionString)";
	TestCommonTools::consolePrintTestApiStart(205, testDescr);
	ArgumentPtr a = new_Argument("a = 2");
	a->setArgumentExpressionString("2+3");
	ArgumentPtr b = new_Argument("b = 2");
	b->setArgumentExpressionString((StringPtr) nullptr);
	if (a->getArgumentType() == Argument::DEPENDENT_ARGUMENT
	    && a->getArgumentValue() == 5
	    && *a->getArgumentExpressionString() == UTF("2+3")
	    && b->getArgumentType() == Argument::FREE_ARGUMENT
	    && b->getArgumentValue() == 2
	    && *b->getArgumentExpressionString() == UTF("")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0206",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - public void addDefinitions(PrimitiveElement... elements), public void addArguments(Argument::.. arguments)";
	TestCommonTools::consolePrintTestApiStart(206, testDescr);
	ArgumentPtr x = new_Argument("x = a + b + f(4)");
	ArgumentPtr a = new_Argument("a = 2");
	ConstantPtr b = new_Constant("b = 3");
	FunctionPtr f = new_Function("f(x) = x");
	ArgumentPtr nullElements = nullptr;
	double v1 = x->getArgumentValue();
	StringPtr msg1 = x->getErrorMessage();
	x->addDefinitions(nullElements);
	x->addDefinitions(a, b, f);
	double v2 = x->getArgumentValue();
	StringPtr msg2 = x->getErrorMessage();
	x->removeDefinitions(a, b, f);
	x->removeDefinitions(nullElements);
	double v3 = x->getArgumentValue();
	StringPtr msg3 = x->getErrorMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (Double::isNaN(v1)
	    && StringUtils::contains(msg1, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg1, stringResources->ERRORS_HAVE_BEEN_FOUND)
	    && StringUtils::contains(msg1, "'a'") && StringUtils::contains(msg1, "'b'") &&
	    StringUtils::contains(msg1, "'f'") && !StringUtils::contains(msg1, "[f]")
	    && v2 == 9
	    && StringUtils::contains(msg2, stringResources->NO_ERRORS_DETECTED)
	    && !StringUtils::contains(msg2, "'a'") && !StringUtils::contains(msg2, "'b'") &&
	    StringUtils::contains(msg2, "'f'") && StringUtils::contains(msg2, "[f]")
	    && Double::isNaN(v3)
	    && StringUtils::contains(msg3, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg3, stringResources->ERRORS_HAVE_BEEN_FOUND)
	    && StringUtils::contains(msg3, "'a'") && StringUtils::contains(msg3, "'b'") &&
	    StringUtils::contains(msg3, "'f'") && !StringUtils::contains(msg3, "[f]")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0207",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument API - add/remove Arguments, add/remove Constants, add/remove Functions - objects";
	TestCommonTools::consolePrintTestApiStart(207, testDescr);
	ArgumentPtr x = new_Argument("x = a + b + f(4)");
	ArgumentPtr a = new_Argument("a = 2");
	ConstantPtr b = new_Constant("b = 3");
	FunctionPtr f = new_Function("f(x) = x");
	ArgumentPtr nullArg = nullptr;
	ListPtr<ConstantPtr> nullConst = nullptr;
	ListPtr<FunctionPtr> nullFun = nullptr;
	double v1 = x->getArgumentValue();
	StringPtr msg1 = x->getErrorMessage();
	x->addArguments(a);
	x->addArguments(nullArg);
	x->addConstants(b);
	x->addConstants(nullConst);
	x->addFunctions(f);
	x->addFunctions(nullFun);
	double v2 = x->getArgumentValue();
	StringPtr msg2 = x->getErrorMessage();
	x->removeArguments(a);
	x->removeArguments(nullArg);
	x->removeConstants(b);
	x->removeConstants(nullConst);
	x->removeFunctions(f);
	x->removeFunctions(nullFun);
	double v3 = x->getArgumentValue();
	StringPtr msg3 = x->getErrorMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (Double::isNaN(v1)
	    && StringUtils::contains(msg1, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg1, stringResources->ERRORS_HAVE_BEEN_FOUND)
	    && StringUtils::contains(msg1, "'a'") && StringUtils::contains(msg1, "'b'") &&
	    StringUtils::contains(msg1, "'f'") && !StringUtils::contains(msg1, "[f]")
	    && v2 == 9
	    && StringUtils::contains(msg2, stringResources->NO_ERRORS_DETECTED)
	    && !StringUtils::contains(msg2, "'a'") && !StringUtils::contains(msg2, "'b'") &&
	    StringUtils::contains(msg2, "'f'") && StringUtils::contains(msg2, "[f]")
	    && Double::isNaN(v3)
	    && StringUtils::contains(msg3, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg3, stringResources->ERRORS_HAVE_BEEN_FOUND)
	    && StringUtils::contains(msg3, "'a'") && StringUtils::contains(msg3, "'b'") &&
	    StringUtils::contains(msg3, "'f'") && !StringUtils::contains(msg3, "[f]")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0208",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - addConstants(ListPtr<ConstantPtr> constantsList) / getConstantIndex / getConstant / getConstantsNumber / removeAllConstants";
	TestCommonTools::consolePrintTestApiStart(208, testDescr);
	ArgumentPtr x = new_Argument("x = a + b + c + d");
	ConstantPtr a = new_Constant("a = 1");
	ConstantPtr b = new_Constant("b = 2");
	ConstantPtr c = new_Constant("c = 3");
	ConstantPtr d = new_Constant("d = 4");
	ListPtr<ConstantPtr> constList = new_List<ConstantPtr>();
	constList->add(a);
	constList->add(b);
	constList->add(c);
	constList->add(d);
	bool syn1 = x->checkSyntax();
	StringPtr msg1 = x->getErrorMessage();
	int nconst1 = x->getConstantsNumber();
	int apos0 = x->getConstantIndex((StringPtr) nullptr);
	int apos1 = x->getConstantIndex("a");
	ConstantPtr afound1 = x->getConstant(apos1);
	ConstantPtr afound11 = x->getConstant((StringPtr) nullptr);
	x->addConstants(constList);
	bool syn2 = x->checkSyntax();
	StringPtr msg2 = x->getErrorMessage();
	int nconst2 = x->getConstantsNumber();
	int apos2 = x->getConstantIndex("a");
	ConstantPtr afound2 = x->getConstant(apos2);
	ConstantPtr afound21 = x->getConstant("a");
	x->removeAllConstants();
	bool syn3 = x->checkSyntax();
	StringPtr msg3 = x->getErrorMessage();
	int nconst3 = x->getConstantsNumber();
	int apos3 = x->getConstantIndex("a");
	ConstantPtr afound3 = x->getConstant(apos3);
	ConstantPtr afound31 = x->getConstant("a");
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (!syn1
	    && StringUtils::contains(msg1, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg1, "'a'") && StringUtils::contains(msg1, "'b'") &&
	    StringUtils::contains(msg1, "'c'") && StringUtils::contains(msg1, "'d'")
	    && nconst1 == 0 && apos0 == -1
	    && afound1 == nullptr & afound11 == nullptr
	    && syn2
	    && StringUtils::contains(msg2, stringResources->NO_ERRORS_DETECTED)
	    && !StringUtils::contains(msg2, "'a'") && !StringUtils::contains(msg2, "'b'") && !
	    StringUtils::contains(msg2, "'c'") && !StringUtils::contains(msg2, "'d'")
	    && nconst2 == 4 && apos2 == 0
	    && afound2 == afound21 && *afound2->getConstantName() == UTF("a")
	    && !syn3
	    && StringUtils::contains(msg3, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg3, "'a'") && StringUtils::contains(msg3, "'b'") &&
	    StringUtils::contains(msg3, "'c'") && StringUtils::contains(msg3, "'d'")
	    && nconst3 == 0 && apos3 == -1
	    && afound3 == nullptr & afound31 == nullptr
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0209",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - defineArguments(String... argumentsNames / getArgumentIndex(string argumentName) / getArgument(string argumentName) / getArgument(int argumentIndex) / getArgumentsNumber() / removeAllArguments()";
	TestCommonTools::consolePrintTestApiStart(209, testDescr);
	ArgumentPtr x = new_Argument("x = a+b+c+d+e+f");
	ListPtr<StringPtr> nullStr = nullptr;
	x->defineArguments(nullStr);
	bool syn1 = x->checkSyntax();
	StringPtr msg1 = x->getErrorMessage();
	int narg1 = x->getArgumentsNumber();
	int apos0 = x->getArgumentIndex((StringPtr) nullptr);
	int apos1 = x->getArgumentIndex("a");
	ArgumentPtr afound1 = x->getArgument(apos1);
	ArgumentPtr afound11 = x->getArgument("a");
	x->defineArguments("c", "a", "b");
	bool syn2 = x->checkSyntax();
	StringPtr msg2 = x->getErrorMessage();
	int narg2 = x->getArgumentsNumber();
	int apos2 = x->getArgumentIndex("a");
	ArgumentPtr afound2 = x->getArgument(apos2);
	ArgumentPtr afound21 = x->getArgument("a");
	x->defineArguments(nullStr);
	x->defineArguments("d", "f");
	bool syn3 = x->checkSyntax();
	StringPtr msg3 = x->getErrorMessage();
	int narg3 = x->getArgumentsNumber();
	int apos3 = x->getArgumentIndex("a");
	ArgumentPtr afound3 = x->getArgument(apos3);
	ArgumentPtr afound31 = x->getArgument("a");
	x->removeAllArguments();
	x->defineArguments(nullStr);
	bool syn4 = x->checkSyntax();
	StringPtr msg4 = x->getErrorMessage();
	int narg4 = x->getArgumentsNumber();
	int apos4 = x->getArgumentIndex("a");
	ArgumentPtr afound4 = x->getArgument(apos4);
	ArgumentPtr afound41 = x->getArgument("a");
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (!syn1
	    && StringUtils::contains(msg1, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg1, "'a'") && StringUtils::contains(msg1, "'b'") &&
	    StringUtils::contains(msg1, "'c'") && StringUtils::contains(msg1, "'d'") && StringUtils::contains(msg1, "'f'")
	    && narg1 == 0 && apos0 == -1 && apos1 == -1
	    && afound1 == nullptr && afound11 == nullptr
	    && !syn2
	    && StringUtils::contains(msg2, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg2, "'d'") && StringUtils::contains(msg2, "'f'")
	    && narg2 == 3 && apos2 == 1
	    && afound2 == afound21 && *afound2->getArgumentName() == UTF("a")
	    && syn3
	    && StringUtils::contains(msg3, stringResources->NO_ERRORS_DETECTED)
	    && !StringUtils::contains(msg3, "'a'") && !StringUtils::contains(msg3, "'b'") && !
	    StringUtils::contains(msg3, "'c'") && !StringUtils::contains(msg3, "'d'") && !StringUtils::contains(msg3, "'f'")
	    && narg3 == 5 && apos3 == 1
	    && afound3 == afound31 && *afound3->getArgumentName() == UTF("a")
	    && !syn4
	    && StringUtils::contains(msg4, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg4, "'a'") && StringUtils::contains(msg4, "'b'") &&
	    StringUtils::contains(msg4, "'c'") && StringUtils::contains(msg4, "'d'") && StringUtils::contains(msg4, "'f'")
	    && narg4 == 0 && apos4 == -1
	    && afound4 == nullptr && afound41 == nullptr
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0210",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Argument API - defineArguments(String... getFunctionIndex / getFunction / getFunctionsNumber / removeAllFunctions";
	TestCommonTools::consolePrintTestApiStart(210, testDescr);
	ArgumentPtr x = new_Argument("x = a(1)+b(2)+c(3)+d(4)");
	FunctionPtr a = new_Function("a(x) = x");
	FunctionPtr b = new_Function("b(x) = x");
	FunctionPtr c = new_Function("c(x) = x");
	FunctionPtr d = new_Function("d(x) = x");
	int nfun0 = x->getFunctionsNumber();
	x->addFunctions(a, b, c, d);
	bool syn1 = x->checkSyntax();
	StringPtr msg1 = x->getErrorMessage();
	int nfun1 = x->getFunctionsNumber();
	FunctionPtr n1 = x->getFunction((StringPtr) nullptr);
	FunctionPtr n2 = x->getFunction(-1);
	FunctionPtr f = x->getFunction("f");
	int bpos = x->getFunctionIndex("b");
	FunctionPtr b1 = x->getFunction(bpos);
	x->removeAllFunctions();
	int nfun2 = x->getFunctionsNumber();
	bool syn2 = x->checkSyntax();
	StringPtr msg2 = x->getErrorMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (nfun0 == 0
	    && syn1
	    && StringUtils::contains(msg1, stringResources->NO_ERRORS_DETECTED)
	    && nfun1 == 4
	    && n1 == nullptr
	    && n2 == nullptr
	    && f == nullptr
	    && bpos == 1
	    && b1 == b
	    && nfun2 == 0
	    && !syn2
	    && StringUtils::contains(msg2, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg2, "'a'") && StringUtils::contains(msg2, "'b'") &&
	    StringUtils::contains(msg2, "'c'") && StringUtils::contains(msg2, "'d'")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0211", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument API - public Argument clone()";
	TestCommonTools::consolePrintTestApiStart(211, testDescr);
	ArgumentPtr xx = new_Argument("x = a(1)+b(2)+c(3)+d(4)");
	FunctionPtr a = new_Function("a(x) = x");
	FunctionPtr b = new_Function("b(x) = x");
	FunctionPtr c = new_Function("c(x) = x");
	FunctionPtr d = new_Function("d(x) = x");
	ArgumentPtr xc = xx->clone();
	if (*xx->getArgumentName() == *xc->getArgumentName()
	    && *xx->getArgumentExpressionString() == *xc->getArgumentExpressionString()
	    && *xx->getDescription() == *xc->getDescription()
	    && xx->getArgumentType() == xc->getArgumentType()
	    && xx->getArgumentBodyType() == xc->getArgumentBodyType()
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0212",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Function API - public Function(string functionName, string functionExpressionString, PrimitiveElement... elements)";
	TestCommonTools::consolePrintTestApiStart(212, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr nullStr = nullptr;
	ArgumentPtr nullElements = nullptr;
	StringPtr plus23Str = S("2+3");
	StringPtr fStr = S("f");
	ConstantPtr c = new_Constant("c = 1");
	FunctionPtr f1 = new_Function(nullStr, plus23Str, nullElements);
	FunctionPtr f2 = new_Function(fStr, nullStr, nullElements);
	FunctionPtr f3 = new_Function("f", "2+3", nullElements);
	FunctionPtr f4 = new_Function("1f", "2+3", c);
	FunctionPtr f5 = new_Function("f1(", "2+3", c);
	FunctionPtr f6 = new_Function("  f   ", "  2+3 ", c);
	bool syn1 = f1->checkSyntax();
	StringPtr msg1 = f1->getErrorMessage();
	bool syn2 = f2->checkSyntax();
	StringPtr msg2 = f2->getErrorMessage();
	bool syn3 = f3->checkSyntax();
	StringPtr msg3 = f3->getErrorMessage();
	StringPtr msg4 = f4->getErrorMessage();
	bool syn4 = f4->checkSyntax();
	StringPtr msg5 = f5->getErrorMessage();
	bool syn5 = f5->checkSyntax();
	StringPtr msg6 = f6->getErrorMessage();
	bool syn6 = f6->checkSyntax();
	if (!syn1 && StringUtils::contains(msg1, stringResources->PROVIDED_STRING_IS_NULL)
	    && !syn2 && StringUtils::contains(msg2, stringResources->PROVIDED_STRING_IS_NULL)
	    && !syn3 && StringUtils::contains(msg3, stringResources->PROVIDED_ELEMENTS_ARE_NULL)
	    && !syn4 && StringUtils::contains(msg4, stringResources->INVALID_FUNCTION_NAME)
	    && StringUtils::contains(msg4, stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(msg4, stringResources->PATTERN_EXAMPLES)
	    && !syn5 && StringUtils::contains(msg5, stringResources->INVALID_FUNCTION_NAME)
	    && StringUtils::contains(msg5, stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(msg5, stringResources->PATTERN_EXAMPLES)
	    && syn6 && StringUtils::contains(msg6, stringResources->NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
	    && *f6->getFunctionName() == UTF("f")
	    && *f6->getFunctionExpressionString() == UTF("2+3")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0213",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Function API - Function(string functionName, string  functionExpressionString, String... argumentsNames)";
	TestCommonTools::consolePrintTestApiStart(213, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr nullStr = nullptr;
	StringPtr fStr = S("f");
	ArgumentPtr nullElements = nullptr;
	FunctionPtr f1 = new_Function(nullStr, "2+3", nullElements);
	FunctionPtr f2 = new_Function(fStr, nullStr, nullElements);
	FunctionPtr f3 = new_Function("f", "2+3", nullElements);
	FunctionPtr f4 = new_Function("1f", "2+3*x", "x");
	FunctionPtr f5 = new_Function("f1( ", "2+3*x", "x");
	FunctionPtr f6 = new_Function("  f   ", "  2+3*x  ", "x");
	bool syn1 = f1->checkSyntax();
	StringPtr msg1 = f1->getErrorMessage();
	bool syn2 = f2->checkSyntax();
	StringPtr msg2 = f2->getErrorMessage();
	bool syn3 = f3->checkSyntax();
	StringPtr msg3 = f3->getErrorMessage();
	StringPtr msg4 = f4->getErrorMessage();
	bool syn4 = f4->checkSyntax();
	StringPtr msg5 = f5->getErrorMessage();
	bool syn5 = f5->checkSyntax();
	StringPtr msg6 = f6->getErrorMessage();
	bool syn6 = f6->checkSyntax();
	if (!syn1 && StringUtils::contains(msg1, stringResources->PROVIDED_STRING_IS_NULL)
	    && !syn2 && StringUtils::contains(msg2, stringResources->PROVIDED_STRING_IS_NULL)
	    && !syn3 && StringUtils::contains(msg3, stringResources->PROVIDED_ELEMENTS_ARE_NULL)
	    && !syn4 && StringUtils::contains(msg4, stringResources->INVALID_FUNCTION_NAME)
	    && StringUtils::contains(msg4, stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(msg4, stringResources->PATTERN_EXAMPLES)
	    && !syn5 && StringUtils::contains(msg5, stringResources->INVALID_FUNCTION_NAME)
	    && StringUtils::contains(msg5, stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(msg5, stringResources->PATTERN_EXAMPLES)
	    && syn6 && StringUtils::contains(msg6, stringResources->NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
	    && *f6->getFunctionName() == UTF("f")
	    && *f6->getFunctionExpressionString() == UTF("2+3*x")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0214",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function API - public Function(string functionDefinitionString, PrimitiveElement... elements)";
	TestCommonTools::consolePrintTestApiStart(214, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr nullStr = nullptr;
	ArgumentPtr nullElements = nullptr;
	ConstantPtr c = new_Constant("c = 1");
	FunctionPtr f1 = new_Function(nullStr, c);
	FunctionPtr f2 = new_Function("f(x) = 2", nullElements);
	FunctionPtr f3 = new_Function(nullStr, nullElements);
	FunctionPtr f4 = new_Function("f = 2+3*x", c);
	FunctionPtr f5 = new_Function(" 2+3*x", c);
	FunctionPtr f6 = new_Function("  f(x)   =   2+3*x   ", c);
	FunctionPtr f7 = new_Function("  f(...)   =   [npar]   ", c);
	bool syn1 = f1->checkSyntax();
	StringPtr msg1 = f1->getErrorMessage();
	bool syn2 = f2->checkSyntax();
	StringPtr msg2 = f2->getErrorMessage();
	bool syn3 = f3->checkSyntax();
	StringPtr msg3 = f3->getErrorMessage();
	StringPtr msg4 = f4->getErrorMessage();
	bool syn4 = f4->checkSyntax();
	StringPtr msg5 = f5->getErrorMessage();
	bool syn5 = f5->checkSyntax();
	StringPtr msg6 = f6->getErrorMessage();
	bool syn6 = f6->checkSyntax();
	StringPtr msg7 = f7->getErrorMessage();
	bool syn7 = f7->checkSyntax();
	if (!syn1 && StringUtils::contains(msg1, stringResources->PROVIDED_STRING_IS_NULL)
	    && !syn2 && StringUtils::contains(msg2, stringResources->PROVIDED_ELEMENTS_ARE_NULL)
	    && !syn3 && StringUtils::contains(msg3, stringResources->PROVIDED_STRING_IS_NULL)
	    && !syn4 && StringUtils::contains(msg4, stringResources->INVALID_FUNCTION_DEFINITION)
	    && StringUtils::contains(msg4, stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(msg4, stringResources->PATTERN_EXAMPLES)
	    && !syn5 && StringUtils::contains(msg5, stringResources->INVALID_FUNCTION_DEFINITION)
	    && StringUtils::contains(msg5, stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(msg5, stringResources->PATTERN_EXAMPLES)
	    && syn6 && StringUtils::contains(msg6, stringResources->NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
	    && *f6->getFunctionName() == UTF("f")
	    && *f6->getFunctionExpressionString() == UTF("2+3*x")
	    && syn7 && StringUtils::contains(msg7, stringResources->NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
	    && *f7->getFunctionName() == UTF("f")
	    && *f7->getFunctionExpressionString() == UTF("[npar]")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0215",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function API - public Function(string functionName, FunctionExtension functionExtension)";
	TestCommonTools::consolePrintTestApiStart(215, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr nullStr = nullptr;
	FunctionExtensionPtr funExtNull = nullptr;
	FunctionExtensionPtr funExt = new_FunExt();
	FunctionPtr f1 = new_Function(nullStr, funExt);
	FunctionPtr f2 = new_Function("f", funExtNull);
	FunctionPtr f3 = new_Function(nullStr, funExtNull);
	FunctionPtr f4 = new_Function("1f", funExt);
	FunctionPtr f5 = new_Function("f1(", funExt);
	FunctionPtr f6 = new_Function("f", funExt);
	bool syn1 = f1->checkSyntax();
	StringPtr msg1 = f1->getErrorMessage();
	bool syn2 = f2->checkSyntax();
	StringPtr msg2 = f2->getErrorMessage();
	bool syn3 = f3->checkSyntax();
	StringPtr msg3 = f3->getErrorMessage();
	StringPtr msg4 = f4->getErrorMessage();
	bool syn4 = f4->checkSyntax();
	StringPtr msg5 = f5->getErrorMessage();
	bool syn5 = f5->checkSyntax();
	StringPtr msg6 = f6->getErrorMessage();
	bool syn6 = f6->checkSyntax();
	if (!syn1 && StringUtils::contains(msg1, stringResources->PROVIDED_STRING_IS_NULL)
	    && !syn2 && StringUtils::contains(msg2, stringResources->PROVIDED_EXTENSION_IS_NULL)
	    && !syn3 && StringUtils::contains(msg3, stringResources->PROVIDED_STRING_IS_NULL)
	    && !syn4 && StringUtils::contains(msg4, stringResources->INVALID_FUNCTION_NAME)
	    && StringUtils::contains(msg4, stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(msg4, stringResources->PATTERN_EXAMPLES)
	    && !syn5 && StringUtils::contains(msg5, stringResources->INVALID_FUNCTION_NAME)
	    && StringUtils::contains(msg5, stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(msg5, stringResources->PATTERN_EXAMPLES)
	    && syn6 && StringUtils::contains(msg6, stringResources->NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
	    && *f6->getFunctionName() == UTF("f")
	    && f6->getFunctionBodyType() == Function::BODY_EXTENDED
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0216",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Function API - public Function(string functionName, FunctionExtensionVariadic functionExtensionVariadic) + checkSyntax + getErrorMessage";
	TestCommonTools::consolePrintTestApiStart(216, testDescr);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr nullStr = nullptr;
	FunctionExtensionVariadicPtr funExtNull = nullptr;
	FunctionExtensionVariadicPtr funExt = new_FunExtVar();
	FunctionPtr f1 = new_Function(nullStr, funExt);
	FunctionPtr f2 = new_Function("f", funExtNull);
	FunctionPtr f3 = new_Function(nullStr, funExtNull);
	FunctionPtr f4 = new_Function("1f", funExt);
	FunctionPtr f5 = new_Function("f1(", funExt);
	FunctionPtr f6 = new_Function("f", funExt);
	bool syn1 = f1->checkSyntax();
	StringPtr msg1 = f1->getErrorMessage();
	bool syn2 = f2->checkSyntax();
	StringPtr msg2 = f2->getErrorMessage();
	bool syn3 = f3->checkSyntax();
	StringPtr msg3 = f3->getErrorMessage();
	StringPtr msg4 = f4->getErrorMessage();
	bool syn4 = f4->checkSyntax();
	StringPtr msg5 = f5->getErrorMessage();
	bool syn5 = f5->checkSyntax();
	StringPtr msg6 = f6->getErrorMessage();
	bool syn6 = f6->checkSyntax();
	if (!syn1 && StringUtils::contains(msg1, stringResources->PROVIDED_STRING_IS_NULL)
	    && !syn2 && StringUtils::contains(msg2, stringResources->PROVIDED_EXTENSION_IS_NULL)
	    && !syn3 && StringUtils::contains(msg3, stringResources->PROVIDED_STRING_IS_NULL)
	    && !syn4 && StringUtils::contains(msg4, stringResources->INVALID_FUNCTION_NAME)
	    && StringUtils::contains(msg4, stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(msg4, stringResources->PATTERN_EXAMPLES)
	    && !syn5 && StringUtils::contains(msg5, stringResources->INVALID_FUNCTION_NAME)
	    && StringUtils::contains(msg5, stringResources->PATTERN_DOES_NOT_MATCH)
	    && StringUtils::contains(msg5, stringResources->PATTERN_EXAMPLES)
	    && syn6 && StringUtils::contains(msg6, stringResources->NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
	    && *f6->getFunctionName() == UTF("f")
	    && f6->getFunctionBodyType() == Function::BODY_EXTENDED
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0217",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Function API - setDescription /  setFunctionName / getDescription / getFunctionName / getFunctionExpressionstring / getFunctionBodyType";
	TestCommonTools::consolePrintTestApiStart(217, testDescr);
	FunctionPtr f = new_Function("f(x,y) = 2*x+3*y");
	f->setDescription("This is a new description");
	f->setFunctionName("g");
	f->setFunctionName("1g");
	f->setFunctionName((StringPtr) nullptr);
	f->setDescription((StringPtr) nullptr);
	if (*f->getDescription() == UTF("This is a new description")
	    && *f->getFunctionName() == UTF("g")
	    && *f->getFunctionExpressionString() == UTF("2*x+3*y")
	    && f->getFunctionBodyType() == Function::BODY_RUNTIME
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0218", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function API - public double calculate(double... parameters) + getComputingTime";
	TestCommonTools::consolePrintTestApiStart(218, testDescr);
	FunctionPtr fErr = new_Function("f = 2+3");
	FunctionPtr f = new_Function("f(n) = sum(i, 1, n, i)");
	FunctionPtr fVar = new_Function("f(...) = sum(i, 1, par(1), i)");
	FunctionExtensionPtr longComputingFunExt = new_LongComputingFunExt();
	FunctionExtensionVariadicPtr longComputingFunExtVar = new_LongComputingFunExtVar();
	FunctionPtr fExt = new_Function("f", longComputingFunExt);
	FunctionPtr fExtVar = new_Function("f", longComputingFunExtVar);
	double range = 2000000;
	double result = 0;
	for (int i = 1; i <= range; i++)
		result += i;
	ListPtr<double> nullParams = nullptr;
	ListPtr<double> zerLengthParams = new_List<double>();
	double dErr = fErr->calculate(range);
	double tErr = fErr->getComputingTime();
	double dNullParams = f->calculate(nullParams);
	double tNullParams = f->getComputingTime();
	double dZerLengthParams = f->calculate(zerLengthParams);
	double tZerLengthParams = f->getComputingTime();
	double df = f->calculate(range);
	double tf = f->getComputingTime();
	double dfVar = fVar->calculate(range);
	double tfVar = fVar->getComputingTime();
	double dfExt = fExt->calculate(range);
	double tfExt = fExt->getComputingTime();
	double dfExtVar = fExtVar->calculate(range);
	double tfExtVar = fExtVar->getComputingTime();
	if (Double::isNaN(dErr) && tErr == 0
	    && Double::isNaN(dNullParams) && tNullParams == 0
	    && Double::isNaN(dZerLengthParams) && tZerLengthParams == 0
	    && df == result && tf > 0
	    && dfVar == result && tfVar > 0
	    && dfExt == result && tfExt > 0
	    && dfExtVar == result && tfExtVar > 0
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0219", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function API - public calculate(Argument::.. arguments) + getComputingTime";
	TestCommonTools::consolePrintTestApiStart(219, testDescr);
	FunctionPtr fErr = new_Function("f = 2+3");
	FunctionPtr f = new_Function("f(n) = sum(i, 1, n, i)");
	FunctionPtr fVar = new_Function("f(...) = sum(i, 1, par(1), i)");
	FunctionExtensionPtr longComputingFunExt = new_LongComputingFunExt();
	FunctionExtensionVariadicPtr longComputingFunExtVar = new_LongComputingFunExtVar();
	FunctionPtr fExt = new_Function("f", longComputingFunExt);
	FunctionPtr fExtVar = new_Function("f", longComputingFunExtVar);
	ArgumentPtr range = new_Argument("range = 2000000");
	double result = 0;
	double drange = range->getArgumentValue();
	for (int i = 1; i <= drange; i++)
		result += i;
	ArgumentPtr nullParams = nullptr;
	ListPtr<ArgumentPtr> zerLengthParams = new_List<ArgumentPtr>();
	double dErr = fErr->calculate(range);
	double tErr = fErr->getComputingTime();
	double dNullParams = f->calculate(nullParams);
	double tNullParams = f->getComputingTime();
	double dZerLengthParams = f->calculate(zerLengthParams);
	double tZerLengthParams = f->getComputingTime();
	double df = f->calculate(range);
	double tf = f->getComputingTime();
	double dfVar = fVar->calculate(range);
	double tfVar = fVar->getComputingTime();
	double dfExt = fExt->calculate(range);
	double tfExt = fExt->getComputingTime();
	double dfExtVar = fExtVar->calculate(range);
	double tfExtVar = fExtVar->getComputingTime();
	if (Double::isNaN(dErr) && tErr == 0
	    && Double::isNaN(dNullParams) && tNullParams == 0
	    && Double::isNaN(dZerLengthParams) && tZerLengthParams == 0
	    && df == result && tf > 0
	    && dfVar == result && tfVar > 0
	    && dfExt == result && tfExt > 0
	    && dfExtVar == result && tfExtVar > 0
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0220", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function API - calculate(CalcStepsRegisterPtr calcStepsRegister) + getComputingTime";
	TestCommonTools::consolePrintTestApiStart(220, testDescr);
	FunctionExtensionPtr longComputingFunExt = new_LongComputingFunExt();
	FunctionExtensionVariadicPtr longComputingFunExtVar = new_LongComputingFunExtVar();
	ArgumentPtr range = new_Argument("range = 2000000");
	FunctionPtr fErr = new_Function("f = 2+3");
	FunctionPtr f = new_Function("f(n) = sum(i, 1, n, i)");
	ExpressionPtr e = new_Expression("f(range)", range, f);
	FunctionPtr fVar = new_Function("f(...) = sum(i, 1, par(1), i)");
	ExpressionPtr eVar = new_Expression("f(range)", range, fVar);
	FunctionPtr fExt = new_Function("f", longComputingFunExt);
	ExpressionPtr eExt = new_Expression("f(range)", range, fExt);
	FunctionPtr fExtVar = new_Function("f", longComputingFunExtVar);
	ExpressionPtr eExtVar = new_Expression("f(range)", range, fExtVar);
	double result = 0;
	double drange = range->getArgumentValue();
	for (int i = 1; i <= drange; i++)
		result += i;
	CalcStepsRegisterPtr calcStepsRegister = nullptr;
	double dErr = fErr->calculate(calcStepsRegister);
	double tErr = fErr->getComputingTime();
	double df = e->calculate(calcStepsRegister);
	double tf = f->getComputingTime();
	double dfVar = eVar->calculate(calcStepsRegister);
	double tfVar = fVar->getComputingTime();
	double dfExt = eExt->calculate(calcStepsRegister);
	double tfExt = fExt->getComputingTime();
	double dfExtVar = eExtVar->calculate(calcStepsRegister);
	double tfExtVar = fExtVar->getComputingTime();
	if (Double::isNaN(dErr) && tErr == 0
	    && df == result && tf > 0
	    && dfVar == result && tfVar > 0
	    && dfExt == result && tfExt > 0
	    && dfExtVar == result && tfExtVar > 0
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0221", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function API - setArgumentValue";
	TestCommonTools::consolePrintTestApiStart(221, testDescr);
	FunctionPtr fErr = new_Function("f = 2+3");
	FunctionPtr f = new_Function("f(n) = sum(i, 1, n, i)");
	FunctionPtr fVar = new_Function("f(...) = sum(i, 1, par(1), i)");
	FunctionExtensionPtr longComputingFunExt = new_LongComputingFunExt();
	FunctionExtensionVariadicPtr longComputingFunExtVar = new_LongComputingFunExtVar();
	FunctionPtr fExt = new_Function("f", longComputingFunExt);
	FunctionPtr fExtVar = new_Function("f", longComputingFunExtVar);
	double range = 2000000;
	double result = 0;
	for (int i = 1; i <= range; i++)
		result += i;
	fErr->setArgumentValue(0, 1);
	f->setArgumentValue(0, range);
	f->setArgumentValue(-1, -1);
	f->setArgumentValue(10, 10);
	fVar->setArgumentValue(0, range);
	fVar->setArgumentValue(-1, -1);
	fVar->setArgumentValue(10, 10);
	fExt->setArgumentValue(0, range);
	fExt->setArgumentValue(-1, -1);
	fExt->setArgumentValue(10, 10);
	fExtVar->setArgumentValue(0, range);
	fExtVar->setArgumentValue(-1, -1);
	fExtVar->setArgumentValue(10, 10);
	double df = f->calculate();
	double dfVar = fVar->calculate();
	double dfExt = fExt->calculate();
	double dfExtVar = fExtVar->calculate(range);
	if (df == result
	    && Double::isNaN(dfVar)
	    && dfExt == result
	    && dfExtVar == result
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0222", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function API - setVerboseMode, setSilentMode, getVerboseMode";
	TestCommonTools::consolePrintTestApiStart(222, testDescr);
	FunctionPtr a = new_Function("a", "2+3", "x");
	a->setVerboseMode();
	bool v1 = a->getVerboseMode();
	a->setSilentMode();
	bool v2 = a->getVerboseMode();
	if (v1 & !v2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0223",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Function API - public void addDefinitions(PrimitiveElement... elements), public void addArguments(Argument::.. arguments)";
	TestCommonTools::consolePrintTestApiStart(206, testDescr);
	FunctionPtr x = new_Function("x(n) = a + b + f(n)");
	ArgumentPtr a = new_Argument("a = 2");
	ConstantPtr b = new_Constant("b = 3");
	FunctionPtr f = new_Function("f(x) = x");
	ArgumentPtr nullElements = nullptr;
	double v1 = x->calculate(4);
	StringPtr msg1 = x->getErrorMessage();
	x->addDefinitions(nullElements);
	x->addDefinitions(a, b, f);
	double v2 = x->calculate(4);
	StringPtr msg2 = x->getErrorMessage();
	x->removeDefinitions(a, b, f);
	x->removeDefinitions(nullElements);
	double v3 = x->calculate(4);
	StringPtr msg3 = x->getErrorMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (Double::isNaN(v1)
	    && StringUtils::contains(msg1, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg1, stringResources->ERRORS_HAVE_BEEN_FOUND)
	    && StringUtils::contains(msg1, "'a'") && StringUtils::contains(msg1, "'b'") &&
	    StringUtils::contains(msg1, "'f'") && !StringUtils::contains(msg1, "[f]")
	    && v2 == 9
	    && StringUtils::contains(msg2, stringResources->NO_ERRORS_DETECTED)
	    && !StringUtils::contains(msg2, "'a'") && !StringUtils::contains(msg2, "'b'") &&
	    StringUtils::contains(msg2, "'f'") && StringUtils::contains(msg2, "[f]")
	    && Double::isNaN(v3)
	    && StringUtils::contains(msg3, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg3, stringResources->ERRORS_HAVE_BEEN_FOUND)
	    && StringUtils::contains(msg3, "'a'") && StringUtils::contains(msg3, "'b'") &&
	    StringUtils::contains(msg3, "'f'") && !StringUtils::contains(msg3, "[f]")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0224",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function API - add/remove Arguments, add/remove Constants, add/remove Functions - objects";
	TestCommonTools::consolePrintTestApiStart(224, testDescr);
	FunctionPtr x = new_Function("x(n) = a + b + f(n)");
	ArgumentPtr a = new_Argument("a = 2");
	ConstantPtr b = new_Constant("b = 3");
	FunctionPtr f = new_Function("f(x) = x");
	ArgumentPtr nullArg = nullptr;
	ListPtr<ConstantPtr> nullConst = nullptr;
	ListPtr<FunctionPtr> nullFun = nullptr;
	double v1 = x->calculate(4);
	StringPtr msg1 = x->getErrorMessage();
	x->addArguments(a);
	x->addArguments(nullArg);
	x->addConstants(b);
	x->addConstants(nullConst);
	x->addFunctions(f);
	x->addFunctions(nullFun);
	double v2 = x->calculate(4);
	StringPtr msg2 = x->getErrorMessage();
	x->removeArguments(a);
	x->removeArguments(nullArg);
	x->removeConstants(b);
	x->removeConstants(nullConst);
	x->removeFunctions(f);
	x->removeFunctions(nullFun);
	double v3 = x->calculate(4);
	StringPtr msg3 = x->getErrorMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (Double::isNaN(v1)
	    && StringUtils::contains(msg1, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg1, stringResources->ERRORS_HAVE_BEEN_FOUND)
	    && StringUtils::contains(msg1, "'a'") && StringUtils::contains(msg1, "'b'") &&
	    StringUtils::contains(msg1, "'f'") && !StringUtils::contains(msg1, "[f]")
	    && v2 == 9
	    && StringUtils::contains(msg2, stringResources->NO_ERRORS_DETECTED)
	    && !StringUtils::contains(msg2, "'a'") && !StringUtils::contains(msg2, "'b'") &&
	    StringUtils::contains(msg2, "'f'") && StringUtils::contains(msg2, "[f]")
	    && Double::isNaN(v3)
	    && StringUtils::contains(msg3, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg3, stringResources->ERRORS_HAVE_BEEN_FOUND)
	    && StringUtils::contains(msg3, "'a'") && StringUtils::contains(msg3, "'b'") &&
	    StringUtils::contains(msg3, "'f'") && !StringUtils::contains(msg3, "[f]")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0225",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Function API - addConstants(ListPtr<ConstantPtr> constantsList) / getConstantIndex / getConstant / getConstantsNumber / removeAllConstants";
	TestCommonTools::consolePrintTestApiStart(225, testDescr);
	FunctionPtr x = new_Function("x(n) = a + b + c + d");
	ConstantPtr a = new_Constant("a = 1");
	ConstantPtr b = new_Constant("b = 2");
	ConstantPtr c = new_Constant("c = 3");
	ConstantPtr d = new_Constant("d = 4");
	ListPtr<ConstantPtr> constList = new_List<ConstantPtr>();
	constList->add(a);
	constList->add(b);
	constList->add(c);
	constList->add(d);
	bool syn1 = x->checkSyntax();
	StringPtr msg1 = x->getErrorMessage();
	int nconst1 = x->getConstantsNumber();
	int apos0 = x->getConstantIndex((StringPtr) nullptr);
	int apos1 = x->getConstantIndex("a");
	ConstantPtr afound1 = x->getConstant(apos1);
	ConstantPtr afound11 = x->getConstant((StringPtr) nullptr);
	x->addConstants(constList);
	bool syn2 = x->checkSyntax();
	StringPtr msg2 = x->getErrorMessage();
	int nconst2 = x->getConstantsNumber();
	int apos2 = x->getConstantIndex("a");
	ConstantPtr afound2 = x->getConstant(apos2);
	ConstantPtr afound21 = x->getConstant("a");
	x->removeAllConstants();
	bool syn3 = x->checkSyntax();
	StringPtr msg3 = x->getErrorMessage();
	int nconst3 = x->getConstantsNumber();
	int apos3 = x->getConstantIndex("a");
	ConstantPtr afound3 = x->getConstant(apos3);
	ConstantPtr afound31 = x->getConstant("a");
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (!syn1
	    && StringUtils::contains(msg1, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg1, "'a'") && StringUtils::contains(msg1, "'b'") &&
	    StringUtils::contains(msg1, "'c'") && StringUtils::contains(msg1, "'d'")
	    && nconst1 == 0 && apos0 == -1
	    && afound1 == nullptr & afound11 == nullptr
	    && syn2
	    && StringUtils::contains(msg2, stringResources->NO_ERRORS_DETECTED)
	    && !StringUtils::contains(msg2, "'a'") && !StringUtils::contains(msg2, "'b'") && !
	    StringUtils::contains(msg2, "'c'") && !StringUtils::contains(msg2, "'d'")
	    && nconst2 == 4 && apos2 == 0
	    && afound2 == afound21 && *afound2->getConstantName() == UTF("a")
	    && !syn3
	    && StringUtils::contains(msg3, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg3, "'a'") && StringUtils::contains(msg3, "'b'") &&
	    StringUtils::contains(msg3, "'c'") && StringUtils::contains(msg3, "'d'")
	    && nconst3 == 0 && apos3 == -1
	    && afound3 == nullptr & afound31 == nullptr
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0226",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Function API - defineArguments(String... argumentsNames) / getArgumentIndex(string argumentName) / getArgument(string argumentName) / getArgument(int argumentIndex) / getArgumentsNumber() / removeAllArguments()";
	TestCommonTools::consolePrintTestApiStart(226, testDescr);
	FunctionPtr x = new_Function("x(n) = a+b+c+d+e+f");
	ListPtr<StringPtr> nullStr = nullptr;
	x->defineArguments(nullStr);
	bool syn1 = x->checkSyntax();
	StringPtr msg1 = x->getErrorMessage();
	int narg1 = x->getArgumentsNumber();
	int apos0 = x->getArgumentIndex((StringPtr) nullptr);
	int apos1 = x->getArgumentIndex("a");
	ArgumentPtr afound1 = x->getArgument(apos1);
	ArgumentPtr afound11 = x->getArgument("a");
	x->defineArguments("c", "a", "b");
	bool syn2 = x->checkSyntax();
	StringPtr msg2 = x->getErrorMessage();
	int narg2 = x->getArgumentsNumber();
	int apos2 = x->getArgumentIndex("a");
	ArgumentPtr afound2 = x->getArgument(apos2);
	ArgumentPtr afound21 = x->getArgument("a");
	x->defineArguments(nullStr);
	x->defineArguments("d", "f");
	bool syn3 = x->checkSyntax();
	StringPtr msg3 = x->getErrorMessage();
	int narg3 = x->getArgumentsNumber();
	int apos3 = x->getArgumentIndex("a");
	ArgumentPtr afound3 = x->getArgument(apos3);
	ArgumentPtr afound31 = x->getArgument("a");
	x->removeAllArguments();
	x->defineArguments(nullStr);
	bool syn4 = x->checkSyntax();
	StringPtr msg4 = x->getErrorMessage();
	int narg4 = x->getArgumentsNumber();
	int apos4 = x->getArgumentIndex("a");
	ArgumentPtr afound4 = x->getArgument(apos4);
	ArgumentPtr afound41 = x->getArgument("a");
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (!syn1
	    && StringUtils::contains(msg1, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg1, "'a'") && StringUtils::contains(msg1, "'b'") &&
	    StringUtils::contains(msg1, "'c'") && StringUtils::contains(msg1, "'d'") && StringUtils::contains(msg1, "'f'")
	    && narg1 == 1 && apos0 == -1 && apos1 == -1
	    && afound1 == nullptr && afound11 == nullptr
	    && !syn2
	    && StringUtils::contains(msg2, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg2, "'d'") && StringUtils::contains(msg2, "'f'")
	    && narg2 == 4 && apos2 == 2
	    && afound2 == afound21 && *afound2->getArgumentName() == UTF("a")
	    && syn3
	    && StringUtils::contains(msg3, stringResources->NO_ERRORS_DETECTED)
	    && !StringUtils::contains(msg3, "'a'") && !StringUtils::contains(msg3, "'b'") && !
	    StringUtils::contains(msg3, "'c'") && !StringUtils::contains(msg3, "'d'") && !StringUtils::contains(msg3, "'f'")
	    && narg3 == 6 && apos3 == 2
	    && afound3 == afound31 && *afound3->getArgumentName() == UTF("a")
	    && !syn4
	    && StringUtils::contains(msg4, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg4, "'a'") && StringUtils::contains(msg4, "'b'") &&
	    StringUtils::contains(msg4, "'c'") && StringUtils::contains(msg4, "'d'") && StringUtils::contains(msg4, "'f'")
	    && narg4 == 0 && apos4 == -1
	    && afound4 == nullptr && afound41 == nullptr
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0227",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"Function API - defineArguments(String... getFunctionIndex / getFunction / getFunctionsNumber / removeAllFunctions";
	TestCommonTools::consolePrintTestApiStart(227, testDescr);
	FunctionPtr x = new_Function("x(n) = a(1)+b(2)+c(3)+d(4)");
	FunctionPtr a = new_Function("a(x) = x");
	FunctionPtr b = new_Function("b(x) = x");
	FunctionPtr c = new_Function("c(x) = x");
	FunctionPtr d = new_Function("d(x) = x");
	int nfun0 = x->getFunctionsNumber();
	x->addFunctions(a, b, c, d);
	bool syn1 = x->checkSyntax();
	StringPtr msg1 = x->getErrorMessage();
	int nfun1 = x->getFunctionsNumber();
	FunctionPtr n1 = x->getFunction((StringPtr) nullptr);
	FunctionPtr n2 = x->getFunction(-1);
	FunctionPtr f = x->getFunction("f");
	int bpos = x->getFunctionIndex("b");
	FunctionPtr b1 = x->getFunction(bpos);
	x->removeAllFunctions();
	int nfun2 = x->getFunctionsNumber();
	bool syn2 = x->checkSyntax();
	StringPtr msg2 = x->getErrorMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (nfun0 == 0
	    && syn1
	    && StringUtils::contains(msg1, stringResources->NO_ERRORS_DETECTED)
	    && nfun1 == 4
	    && n1 == nullptr
	    && n2 == nullptr
	    && f == nullptr
	    && bpos == 2
	    && b1 == b
	    && nfun2 == 0
	    && !syn2
	    && StringUtils::contains(msg2, stringResources->INVALID_TOKEN)
	    && StringUtils::contains(msg2, "'a'") && StringUtils::contains(msg2, "'b'") &&
	    StringUtils::contains(msg2, "'c'") && StringUtils::contains(msg2, "'d'")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0228", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function API - getRecursiveMode";
	TestCommonTools::consolePrintTestApiStart(228, testDescr);
	FunctionPtr f1 = new_Function("f1(n) = if(n > 1; n*f1(n-1); 1)");
	FunctionPtr f2 = new_Function("f2(n) = if(n > 1; n*sin(n-1); 1)");
	bool syn1 = f1->checkSyntax();
	bool syn2 = f2->checkSyntax();
	if (syn1 && syn2 && f1->getRecursiveMode() && !f2->getRecursiveMode())
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0229", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function API - getParametersNumber / setParametersNumber / getParameterName";
	TestCommonTools::consolePrintTestApiStart(229, testDescr);
	FunctionPtr f1 = new_Function("f1(x) = 2*x");
	FunctionPtr f2 = new_Function("f2(x,y) = x+y");
	FunctionPtr f3 = new_Function("f3(...) = [npar]");
	FunctionExtensionPtr funExt = new_FunExt();
	FunctionExtensionVariadicPtr funExtVar = new_FunExtVar();
	FunctionPtr f4 = new_Function("f4", funExt);
	FunctionPtr f5 = new_Function("f4", funExtVar);
	FunctionPtr f6 = new_Function("f6(x,y) = x+y");
	int n1 = f1->getParametersNumber();
	f1->calculate(1, 2, 3, 4, 5);
	int n11 = f1->getParametersNumber();
	int n2 = f2->getParametersNumber();
	f2->calculate(1, 2, 3, 4, 5);
	int n21 = f2->getParametersNumber();
	int n3 = f3->getParametersNumber();
	f3->calculate(1, 2, 3, 4, 5);
	int n31 = f3->getParametersNumber();
	int n4 = f4->getParametersNumber();
	f4->calculate(1, 2, 3, 4, 5);
	int n41 = f4->getParametersNumber();
	int n5 = f5->getParametersNumber();
	f5->calculate(1, 2, 3, 4, 5);
	int n51 = f5->getParametersNumber();
	int n6 = f6->getParametersNumber();
	f6->setParametersNumber(-1);
	int n61 = f6->getParametersNumber();
	f6->setParametersNumber(3);
	int n62 = f6->getParametersNumber();
	StringPtr x1 = f1->getParameterName(0);
	StringPtr x11 = f1->getParameterName(-1);
	StringPtr x12 = f1->getParameterName(10);
	StringPtr x2 = f2->getParameterName(0);
	StringPtr x21 = f2->getParameterName(1);
	StringPtr x22 = f2->getParameterName(10);
	StringPtr x3 = f3->getParameterName(0);
	StringPtr x31 = f3->getParameterName(-1);
	StringPtr x32 = f3->getParameterName(10);
	StringPtr x4 = f4->getParameterName(1);
	StringPtr x41 = f4->getParameterName(-1);
	StringPtr x42 = f4->getParameterName(10);
	StringPtr x5 = f5->getParameterName(1);
	StringPtr x51 = f5->getParameterName(-1);
	StringPtr x52 = f5->getParameterName(10);
	if (n1 == 1 && n11 == 1
	    && n2 == 2 && n21 == 2
	    && n3 == -1 && n31 == 5
	    && n4 == 2 && n41 == 2
	    && n5 == -1 && n51 == 5
	    && n6 == 2 && n61 == 2 && n62 == 3
	    && *x1 == UTF("x") && *x11 == UTF("") && *x12 == UTF("")
	    && *x2 == UTF("x") && *x21 == UTF("y") && *x22 == UTF("")
	    && *x3 == UTF("") && *x31 == UTF("") && *x32 == UTF("")
	    && *x4 == UTF("y") && *x41 == UTF("") && *x42 == UTF("")
	    && *x5 == UTF("") && *x51 == UTF("") && *x52 == UTF("")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0230", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "console print always true test - just for API use & test coverage";
	TestCommonTools::consolePrintTestApiStart(230, testDescr);
	mXparser::consolePrintln("test");
	mXparser::consolePrintln();
	mXparser::consolePrint("test");
	mXparser::consolePrintHelp();
	mXparser::consolePrintLicense();
	mXparser::consolePrintSettings();
	mXparser::consolePrintSettings("aaa");
	ArrayPtr<StringPtr> strArray = new_Array<StringPtr>(2);
	(*strArray)(0) = S("a");
	(*strArray)(1) = S("b");
	ListPtr<StringPtr> nullStrArray = nullptr;
	mXparser::consolePrintln(strArray);
	mXparser::consolePrintln(nullStrArray);
	mXparser::consolePrintHelp("sin");
	ArgumentPtr x = new_Argument("x = 2");
	ConstantPtr c = new_Constant("c  = 3");
	FunctionPtr f = new_Function("f(x,y,z)=x*y*z");
	RecursiveArgumentPtr r = new_RecursiveArgument("r(n) = n*r(n-1)");
	r->addBaseCase(1, 1);
	ExpressionPtr e = new_Expression("2+2 + x + c + f(1,2,3) + r(5)", x, c, f, r);
	mXparser::consolePrintTokens(e->getCopyOfInitialTokens());
	mXparser::consolePrintln(e->getCopyOfInitialTokens());
	e->consolePrintCopyOfInitialTokens();
	StringModel::getStringResources()->print();
	StringModel::getStringResources()->printInitSrc();
	StringModel::print();
	StringModel::printDescriptions();
	License::consolePrintLicense();
	mXparser::resetConsoleOutput();
	mXparser::setConsolePrefix("aaa");
	mXparser::setDefaultConsolePrefix();
	mXparser::setConsoleOutputPrefix("aaa");
	mXparser::setDefaultConsoleOutputPrefix();
	CalcStepsRegisterPtr calcStepsRegister = new_CalcStepsRegister();
	e->setVerboseMode();
	e->calculate(calcStepsRegister);
	e->setSilentMode();
	calcStepsRegister->consolePrint();
	testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0231", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - consolePrintln / consolePrintln / resetConsoleOutput / getConsoleOutput / setConsoleOutputPrefix";
	TestCommonTools::consolePrintTestApiStart(231, testDescr);
	mXparser::resetConsoleOutput();
	StringPtr cleanA = mXparser::getConsoleOutput();
	mXparser::setConsoleOutputPrefix("TEST A: ");
	mXparser::consolePrintln("A1");
	mXparser::consolePrintln("A2");
	StringPtr testA = mXparser::getConsoleOutput();
	mXparser::setConsoleOutputPrefix("TEST B: ");
	mXparser::consolePrint("B1");
	mXparser::consolePrintln("B2");
	StringPtr testB = mXparser::getConsoleOutput();
	mXparser::resetConsoleOutput();
	StringPtr cleanB = mXparser::getConsoleOutput();
	mXparser::setDefaultConsoleOutputPrefix();
	mXparser::consolePrintln("C1");
	mXparser::consolePrintln("C2");
	StringPtr testC = mXparser::getConsoleOutput();
	mXparser::resetConsoleOutput();
	StringPtr cleanC = mXparser::getConsoleOutput();
	StringPtr newLine = StringInvariant::NEW_LINE;
	StringPtr resultA =
			"TEST A: A1" + newLine +
			"TEST A: A2" + newLine +
			"TEST A: ";
	StringPtr resultB =
			"TEST A: A1" + newLine +
			"TEST A: A2" + newLine +
			"TEST A: B1B2" + newLine +
			"TEST B: ";
	StringPtr defaultPrefix = "[mXparser-v." + mXparser::VERSION + "] ";
	StringPtr resultC =
			defaultPrefix + "C1" + newLine +
			defaultPrefix + "C2" + newLine +
			defaultPrefix;
	if (*testA == *resultA && cleanA->length() == 0
	    && *testB == *resultB && cleanB->length() == 0
	    && *testC == *resultC && cleanC->length() == 0
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0232", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getLicense";
	TestCommonTools::consolePrintTestApiStart(232, testDescr);
	StringPtr license1 = License::geTermsOfAgreement();
	StringPtr license2 = License::MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT;
	StringPtr license3 = mXparser::LICENSE;
	StringPtr license4 = mXparser::getLicense();
	if (*license1 == *license2 && StringUtils::contains(license3, license1) &&
	    StringUtils::contains(license4, license1))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0233",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - mXparser::cancelCurrentCalculation / wait / resetCancelCurrentCalculationFlag";
	TestCommonTools::consolePrintTestApiStart(233, testDescr);
	mXparser::resetCancelCurrentCalculationFlag();
	bool isCancelled0 = mXparser::isCurrentCalculationCancelled();
	LongTestPtr runner = new_LongTest();
	bool isAlive0 = runner->isAlive;
	std::thread thread = std::thread(&LongTest::run, runner);
	mXparser::wait(300);
	bool isCancelled1 = mXparser::isCurrentCalculationCancelled();
	bool isAlive1 = runner->isAlive;
	double v1 = runner->v;
	mXparser::wait(1000);
	bool isCancelled2 = mXparser::isCurrentCalculationCancelled();
	bool isAlive2 = runner->isAlive;
	double v2 = runner->v;
	mXparser::wait(1000);
	double v3 = runner->v;
	bool isCancelled3 = mXparser::isCurrentCalculationCancelled();
	bool isAlive3 = runner->isAlive;
	mXparser::cancelCurrentCalculation();
	mXparser::wait(1000);
	bool isCancelled4 = mXparser::isCurrentCalculationCancelled();
	bool isAlive4 = runner->isAlive;
	double v4 = runner->v;
	mXparser::resetCancelCurrentCalculationFlag();
	bool isCancelled5 = mXparser::isCurrentCalculationCancelled();
	bool isAlive5 = runner->isAlive;
	thread.detach();
	if (!isCancelled0 && !isAlive0
	    && !isCancelled1 && v1 == 0 && isAlive1
	    && !isCancelled2 && v2 == 0 && isAlive2
	    && !isCancelled3 && v3 == 0 && isAlive3
	    && isCancelled4 && Double::isNaN(v4) && !isAlive4
	    && !isCancelled5 && !isAlive5
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0234", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Constant API - public Constant(string constantName, double constantValue)";
	TestCommonTools::consolePrintTestApiStart(234, testDescr);
	mXparser::resetCancelCurrentCalculationFlag();
	StringPtr nullStr = nullptr;
	ConstantPtr c1 = new_Constant(nullStr, 1);
	ConstantPtr c2 = new_Constant("1a", 1);
	ConstantPtr c3 = new_Constant("2+3", 1);
	ConstantPtr c4 = new_Constant("f(1)", 1);
	ConstantPtr c5 = new_Constant("a", 1);
	ConstantPtr c6 = new_Constant("a1", 2);
	ConstantPtr c7 = new_Constant(" [a1]   ", 3);
	StringPtr msg1 = c1->getErrorMessage();
	StringPtr msg2 = c2->getErrorMessage();
	StringPtr msg3 = c3->getErrorMessage();
	StringPtr msg4 = c4->getErrorMessage();
	StringPtr msg5 = c5->getErrorMessage();
	StringPtr msg6 = c6->getErrorMessage();
	StringPtr msg7 = c7->getErrorMessage();
	bool syn1 = c1->getSyntaxStatus();
	bool syn2 = c2->getSyntaxStatus();
	bool syn3 = c3->getSyntaxStatus();
	bool syn4 = c4->getSyntaxStatus();
	bool syn5 = c5->getSyntaxStatus();
	bool syn6 = c6->getSyntaxStatus();
	bool syn7 = c7->getSyntaxStatus();
	StringPtr n1 = c1->getConstantName();
	StringPtr n2 = c2->getConstantName();
	StringPtr n3 = c3->getConstantName();
	StringPtr n4 = c4->getConstantName();
	StringPtr n5 = c5->getConstantName();
	StringPtr n6 = c6->getConstantName();
	StringPtr n7 = c7->getConstantName();
	double v1 = c1->getConstantValue();
	double v2 = c2->getConstantValue();
	double v3 = c3->getConstantValue();
	double v4 = c4->getConstantValue();
	double v5 = c5->getConstantValue();
	double v6 = c6->getConstantValue();
	double v7 = c7->getConstantValue();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (!syn1 && StringUtils::contains(msg1, stringResources->PROVIDED_STRING_IS_NULL) && Double::isNaN(v1) && *n1 ==
	    UTF("")
	    && !syn2 && StringUtils::contains(msg2, stringResources->INVALID_CONSTANT_NAME) && Double::isNaN(v2) && *n2 ==
	    UTF("")
	    && !syn3 && StringUtils::contains(msg3, stringResources->INVALID_CONSTANT_NAME) && Double::isNaN(v3) && *n3 ==
	    UTF("")
	    && !syn4 && StringUtils::contains(msg4, stringResources->INVALID_CONSTANT_NAME) && Double::isNaN(v4) && *n4 ==
	    UTF("")
	    && syn5 && StringUtils::contains(msg5, stringResources->NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v5 == 1 &&
	    *n5 == UTF("a")
	    && syn6 && StringUtils::contains(msg6, stringResources->NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v6 == 2 &&
	    *n6 == UTF("a1")
	    && syn7 && StringUtils::contains(msg7, stringResources->NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v7 == 3 &&
	    *n7 == UTF("[a1]")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0235",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Constant API - public Constant(string constantName, double constantValue, string description)";
	TestCommonTools::consolePrintTestApiStart(235, testDescr);
	mXparser::resetCancelCurrentCalculationFlag();
	StringPtr nullStr = nullptr;
	StringPtr aStr = S("a");
	const char *description = "test description";
	StringPtr descriptionPtr = S(description);
	ConstantPtr c1 = new_Constant(nullStr, 1, descriptionPtr);
	ConstantPtr c2 = new_Constant(aStr, 1, nullStr);
	ConstantPtr c3 = new_Constant("2+3", 1, description);
	ConstantPtr c4 = new_Constant("f(1)", 1, description);
	ConstantPtr c5 = new_Constant("a", 1, description);
	ConstantPtr c6 = new_Constant("a1", 2, description);
	ConstantPtr c7 = new_Constant(" [a1]   ", 3, description);
	StringPtr msg1 = c1->getErrorMessage();
	StringPtr msg2 = c2->getErrorMessage();
	StringPtr msg3 = c3->getErrorMessage();
	StringPtr msg4 = c4->getErrorMessage();
	StringPtr msg5 = c5->getErrorMessage();
	StringPtr msg6 = c6->getErrorMessage();
	StringPtr msg7 = c7->getErrorMessage();
	bool syn1 = c1->getSyntaxStatus();
	bool syn2 = c2->getSyntaxStatus();
	bool syn3 = c3->getSyntaxStatus();
	bool syn4 = c4->getSyntaxStatus();
	bool syn5 = c5->getSyntaxStatus();
	bool syn6 = c6->getSyntaxStatus();
	bool syn7 = c7->getSyntaxStatus();
	StringPtr n1 = c1->getConstantName();
	StringPtr n2 = c2->getConstantName();
	StringPtr n3 = c3->getConstantName();
	StringPtr n4 = c4->getConstantName();
	StringPtr n5 = c5->getConstantName();
	StringPtr n6 = c6->getConstantName();
	StringPtr n7 = c7->getConstantName();
	StringPtr d1 = c1->getDescription();
	StringPtr d2 = c2->getDescription();
	StringPtr d3 = c3->getDescription();
	StringPtr d4 = c4->getDescription();
	StringPtr d5 = c5->getDescription();
	StringPtr d6 = c6->getDescription();
	StringPtr d7 = c7->getDescription();
	double v1 = c1->getConstantValue();
	double v2 = c2->getConstantValue();
	double v3 = c3->getConstantValue();
	double v4 = c4->getConstantValue();
	double v5 = c5->getConstantValue();
	double v6 = c6->getConstantValue();
	double v7 = c7->getConstantValue();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (!syn1 && StringUtils::contains(msg1, stringResources->PROVIDED_STRING_IS_NULL) && Double::isNaN(v1) && *n1 ==
	    UTF("") && *d1 == UTF("")
	    && !syn2 && StringUtils::contains(msg2, stringResources->PROVIDED_STRING_IS_NULL) && Double::isNaN(v2) && *n2 ==
	    UTF("") && *d2 == UTF("")
	    && !syn3 && StringUtils::contains(msg3, stringResources->INVALID_CONSTANT_NAME) && Double::isNaN(v3) && *n3 ==
	    UTF("") && *d3 == UTF("")
	    && !syn4 && StringUtils::contains(msg4, stringResources->INVALID_CONSTANT_NAME) && Double::isNaN(v4) && *n4 ==
	    UTF("") && *d4 == UTF("")
	    && syn5 && StringUtils::contains(msg5, stringResources->NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v5 == 1 &&
	    *n5 == UTF("a") && *d5 == SC(description)
	    && syn6 && StringUtils::contains(msg6, stringResources->NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v6 == 2 &&
	    *n6 == UTF("a1") && *d6 == SC(description)
	    && syn7 && StringUtils::contains(msg7, stringResources->NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v7 == 3 &&
	    *n7 == UTF("[a1]") && *d7 == SC(description)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0236",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Constant API - public Constant(string constantDefinitionString, PrimitiveElement...elements)";
	TestCommonTools::consolePrintTestApiStart(236, testDescr);
	mXparser::resetCancelCurrentCalculationFlag();
	StringPtr nullStr = nullptr;
	ArgumentPtr nullParams = nullptr;
	ConstantPtr x = new_Constant("x", 4);
	ConstantPtr c1 = new_Constant(nullStr, x);
	ConstantPtr c2 = new_Constant("a", nullParams);
	ConstantPtr c3 = new_Constant("2+3", x);
	ConstantPtr c4 = new_Constant("f(1)", x);
	ConstantPtr c5 = new_Constant("a = 2*x", x);
	ConstantPtr c6 = new_Constant("a1 = 3*x", x);
	ConstantPtr c7 = new_Constant(" [a1]   =   4*x  ", x);
	StringPtr msg1 = c1->getErrorMessage();
	StringPtr msg2 = c2->getErrorMessage();
	StringPtr msg3 = c3->getErrorMessage();
	StringPtr msg4 = c4->getErrorMessage();
	StringPtr msg5 = c5->getErrorMessage();
	StringPtr msg6 = c6->getErrorMessage();
	StringPtr msg7 = c7->getErrorMessage();
	bool syn1 = c1->getSyntaxStatus();
	bool syn2 = c2->getSyntaxStatus();
	bool syn3 = c3->getSyntaxStatus();
	bool syn4 = c4->getSyntaxStatus();
	bool syn5 = c5->getSyntaxStatus();
	bool syn6 = c6->getSyntaxStatus();
	bool syn7 = c7->getSyntaxStatus();
	StringPtr n1 = c1->getConstantName();
	StringPtr n2 = c2->getConstantName();
	StringPtr n3 = c3->getConstantName();
	StringPtr n4 = c4->getConstantName();
	StringPtr n5 = c5->getConstantName();
	StringPtr n6 = c6->getConstantName();
	StringPtr n7 = c7->getConstantName();
	double v1 = c1->getConstantValue();
	double v2 = c2->getConstantValue();
	double v3 = c3->getConstantValue();
	double v4 = c4->getConstantValue();
	double v5 = c5->getConstantValue();
	double v6 = c6->getConstantValue();
	double v7 = c7->getConstantValue();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (!syn1 && StringUtils::contains(msg1, stringResources->PROVIDED_STRING_IS_NULL) && Double::isNaN(v1) && *n1 ==
	    UTF("")
	    && !syn2 && StringUtils::contains(msg2, stringResources->PROVIDED_ELEMENTS_ARE_NULL) && Double::isNaN(v2) && *n2
	    == UTF("")
	    && !syn3 && StringUtils::contains(msg3, stringResources->INVALID_CONSTANT_DEFINITION) && Double::isNaN(v3) && *
	    n3 == UTF("")
	    && !syn4 && StringUtils::contains(msg4, stringResources->INVALID_CONSTANT_DEFINITION) && Double::isNaN(v4) && *
	    n4 == UTF("")
	    && syn5 && StringUtils::contains(msg5, stringResources->NO_ERRORS_DETECTED) && v5 == 8 && *n5 == UTF("a")
	    && syn6 && StringUtils::contains(msg6, stringResources->NO_ERRORS_DETECTED) && v6 == 12 && *n6 == UTF("a1")
	    && syn7 && StringUtils::contains(msg7, stringResources->NO_ERRORS_DETECTED) && v7 == 16 && *n7 == UTF("[a1]")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0237", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Constant API - setConstantName / setConstantValue / setDescription";
	TestCommonTools::consolePrintTestApiStart(237, testDescr);
	mXparser::resetCancelCurrentCalculationFlag();
	StringPtr nullStr = nullptr;
	ConstantPtr x = new_Constant("x", 4);
	ConstantPtr c1 = new_Constant(nullStr, x);
	ConstantPtr c2 = new_Constant("1a", 1);
	ConstantPtr c3 = new_Constant("2+3", x);
	ConstantPtr c4 = new_Constant("f(1)", x);
	ConstantPtr c5 = new_Constant("a = 2*x", x);
	ConstantPtr c6 = new_Constant("a1 = 3*x", x);
	ConstantPtr c7 = new_Constant(" [a1]   =   4*x  ", x);
	c1->setConstantName("[c1]");
	c2->setConstantName("c2");
	c3->setConstantName("c3");
	c4->setConstantName("c4");
	c5->setConstantName((StringPtr) nullStr);
	c6->setConstantName("a1");
	c7->setConstantName("1a");
	c1->setConstantValue(1);
	c2->setConstantValue(2);
	c3->setConstantValue(3);
	c4->setConstantValue(4);
	c5->setConstantValue(5);
	c6->setConstantValue(6);
	c7->setConstantValue(7);
	StringPtr msg1 = c1->getErrorMessage();
	StringPtr msg2 = c2->getErrorMessage();
	StringPtr msg3 = c3->getErrorMessage();
	StringPtr msg4 = c4->getErrorMessage();
	StringPtr msg5 = c5->getErrorMessage();
	StringPtr msg6 = c6->getErrorMessage();
	StringPtr msg7 = c7->getErrorMessage();
	bool syn1 = c1->getSyntaxStatus();
	bool syn2 = c2->getSyntaxStatus();
	bool syn3 = c3->getSyntaxStatus();
	bool syn4 = c4->getSyntaxStatus();
	bool syn5 = c5->getSyntaxStatus();
	bool syn6 = c6->getSyntaxStatus();
	bool syn7 = c7->getSyntaxStatus();
	StringPtr n1 = c1->getConstantName();
	StringPtr n2 = c2->getConstantName();
	StringPtr n3 = c3->getConstantName();
	StringPtr n4 = c4->getConstantName();
	StringPtr n5 = c5->getConstantName();
	StringPtr n6 = c6->getConstantName();
	StringPtr n7 = c7->getConstantName();
	double v1 = c1->getConstantValue();
	double v2 = c2->getConstantValue();
	double v3 = c3->getConstantValue();
	double v4 = c4->getConstantValue();
	double v5 = c5->getConstantValue();
	double v6 = c6->getConstantValue();
	double v7 = c7->getConstantValue();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (syn1 && StringUtils::contains(msg1, stringResources->NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v1 == 1 && *
	    n1 == UTF("[c1]")
	    && syn2 && StringUtils::contains(msg2, stringResources->NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v2 == 2 &&
	    *n2 == UTF("c2")
	    && syn3 && StringUtils::contains(msg3, stringResources->NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v3 == 3 &&
	    *n3 == UTF("c3")
	    && syn4 && StringUtils::contains(msg4, stringResources->NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v4 == 4 &&
	    *n4 == UTF("c4")
	    && syn5 && StringUtils::contains(msg5, stringResources->NO_ERRORS_DETECTED) && v5 == 5 && *n5 == UTF("a")
	    && syn6 && StringUtils::contains(msg6, stringResources->NO_ERRORS_DETECTED) && v6 == 6 && *n6 == UTF("a1")
	    && syn7 && StringUtils::contains(msg7, stringResources->NO_ERRORS_DETECTED) && v7 == 7 && *n7 == UTF("[a1]")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0238", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "License API";
	TestCommonTools::consolePrintTestApiStart(238, testDescr);
	License::iConfirmNonCommercialUse("INFIMA1");
	bool useType1 = License::checkIfUseTypeConfirmed();
	StringPtr msg1 = License::getUseTypeConfirmationMessage();
	StringPtr err1 = License::getErrorMessage();
	License::iConfirmCommercialUse("INFIMA2");
	bool useType2 = License::checkIfUseTypeConfirmed();
	StringPtr msg2 = License::getUseTypeConfirmationMessage();
	StringPtr err2 = License::getErrorMessage();
	License::iConfirmNonCommercialUse("INFIMA3");
	bool useType3 = License::checkIfUseTypeConfirmed();
	StringPtr msg3 = License::getUseTypeConfirmationMessage();
	StringPtr err3 = License::getErrorMessage();
	License::iConfirmCommercialUse("INFI");
	bool useType4 = License::checkIfUseTypeConfirmed();
	StringPtr msg4 = License::getUseTypeConfirmationMessage();
	StringPtr err4 = License::getErrorMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	string warning = "WARNING";
	string nonCommercial = "confirmed the non-commercial";
	if (useType1 && useType2 && useType3 && useType4
	    && StringUtils::contains(msg1, "INFIMA1") && StringUtils::contains(msg2, "INFIMA1") &&
	    StringUtils::contains(msg3, "INFIMA1") && StringUtils::contains(msg4, "INFIMA1")
	    && err1->length() == 0 && StringUtils::contains(err2, warning) && StringUtils::contains(err3, warning) &&
	    StringUtils::contains(err4, warning)
	    && StringUtils::contains(msg1, nonCommercial) && StringUtils::contains(msg2, nonCommercial) &&
	    StringUtils::contains(msg3, nonCommercial) && StringUtils::contains(msg4, nonCommercial)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0239", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringModel / StringResources API";
	TestCommonTools::consolePrintTestApiStart(239, testDescr);
	TestStringResourcesPtr testStringResources = new_TestStringResources();
	TestStringResourcesPtr nullStringResources = nullptr;
	StringResourcesPtr stringResources1 = StringModel::getStringResources();
	StringModel::setStringResources(nullStringResources);
	StringResourcesPtr stringResources2 = StringModel::getStringResources();
	StringModel::setStringResources(testStringResources);
	StringResourcesPtr stringResources3 = StringModel::getStringResources();
	mXparser::resetConsoleOutput();
	mXparser::consolePrintHelp();
	StringPtr help1 = mXparser::getConsoleOutput();
	StringModel::setDefaultStringResources();
	StringResourcesPtr stringResources4 = StringModel::getStringResources();
	mXparser::resetConsoleOutput();
	mXparser::consolePrintHelp();
	StringPtr help2 = mXparser::getConsoleOutput();
	if (stringResources1 == stringResources2
	    && stringResources3 == testStringResources
	    && stringResources4 != testStringResources
	    && *help1 != *help2
	    && StringUtils::contains(help1, testStringResources->ALL_HELP_CONTENT)
	    && !StringUtils::contains(help2, testStringResources->ALL_HELP_CONTENT)
	    && !StringUtils::contains(help1, stringResources4->ALL_HELP_CONTENT)
	    && StringUtils::contains(help2, stringResources4->ALL_HELP_CONTENT)
	    && StringUtils::contains(help1, testStringResources->KEYWORD)
	    && !StringUtils::contains(help2, testStringResources->KEYWORD)
	    && !StringUtils::contains(help1, stringResources4->KEYWORD)
	    && StringUtils::contains(help2, stringResources4->KEYWORD)
	    && StringUtils::contains(help1, testStringResources->SYNTAX)
	    && !StringUtils::contains(help2, testStringResources->SYNTAX)
	    && !StringUtils::contains(help1, stringResources4->SYNTAX)
	    && StringUtils::contains(help2, stringResources4->SYNTAX)
	    && StringUtils::contains(help1, testStringResources->NUMBER_LITERAL)
	    && !StringUtils::contains(help2, testStringResources->NUMBER_LITERAL)
	    && !StringUtils::contains(help1, stringResources4->NUMBER_LITERAL)
	    && StringUtils::contains(help2, stringResources4->NUMBER_LITERAL)
	    && StringUtils::contains(help1, testStringResources->DESCRIPTION)
	    && !StringUtils::contains(help2, testStringResources->DESCRIPTION)
	    && !StringUtils::contains(help1, stringResources4->DESCRIPTION)
	    && StringUtils::contains(help2, stringResources4->DESCRIPTION)
	    && *testStringResources->USER_LANGUAGE != *stringResources4->USER_LANGUAGE
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0240", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "SerializationUtils API - enable / disable / isEnabled / status / message";
	TestCommonTools::consolePrintTestApiStart(240, testDescr);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	bool statusEnabled = SerializationUtils::checkLastOperationWasSuccessful();
	bool isEnabled = SerializationUtils::isBinarySerializationEnabled();
	StringPtr msgEnabled = SerializationUtils::getLastOperationMessage();
	SerializationUtils::disableBinarySerialization();
	bool isDisabled = !SerializationUtils::isBinarySerializationEnabled();
	bool statusDisabled = SerializationUtils::checkLastOperationWasSuccessful();
	StringPtr msgDisabled = SerializationUtils::getLastOperationMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (isEnabled && isDisabled
	    && statusEnabled && statusDisabled
	    && StringUtils::contains(msgEnabled, stringResources->BINARY_SERIALIZATION_ENABLED)
	    && StringUtils::contains(msgDisabled, stringResources->BINARY_SERIALIZATION_DISABLED)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0241",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"SerializationUtils API - serializeToFile / nullFilePath + zerLengthPath + nullObject + wrongFilePath";
	TestCommonTools::consolePrintTestApiStart(241, testDescr);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	StdStringPtr nullFilePath = nullptr;
	string zerLengthPath = "";
	ArgumentPtr nullObject = nullptr;
	ArgumentPtr x = new_Argument("x");
	string wrongFilePath = "X:/XYZ";
	string tmpPath = getTempDir();
	bool nullFilePathExecuted = SerializationUtils::serializeToFile<Argument>(x, nullFilePath);
	StringPtr nullFilePathMsg = SerializationUtils::getLastOperationMessage();
	bool nullFilePathStatus = SerializationUtils::checkLastOperationWasSuccessful();
	bool zerLengthPathExecuted = SerializationUtils::serializeToFile<Argument>(x, zerLengthPath);
	StringPtr zerLengthPathPathMsg = SerializationUtils::getLastOperationMessage();
	bool zerLengthPathStatus = SerializationUtils::checkLastOperationWasSuccessful();
	bool nullObjectExecuted = SerializationUtils::serializeToFile(nullObject, tmpPath);
	StringPtr nullObjectPathMsg = SerializationUtils::getLastOperationMessage();
	bool nullObjectStatus = SerializationUtils::checkLastOperationWasSuccessful();
	bool wrongFilePathExecuted = SerializationUtils::serializeToFile<Argument>(x, wrongFilePath);
	StringPtr wrongFilePathPathMsg = SerializationUtils::getLastOperationMessage();
	bool wrongFilePathStatus = SerializationUtils::checkLastOperationWasSuccessful();
	SerializationUtils::disableBinarySerialization();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (!nullFilePathExecuted
	    && !nullFilePathStatus
	    && StringUtils::contains(nullFilePathMsg, stringResources->NULL_FILE_PATH_PROVIDED)
	    && !zerLengthPathExecuted
	    && !zerLengthPathStatus
	    && StringUtils::contains(zerLengthPathPathMsg, stringResources->FILE_PATH_ZERO_LENGTH_PROVIDED)
	    && !nullObjectExecuted
	    && !nullObjectStatus
	    && StringUtils::contains(nullObjectPathMsg, stringResources->NULL_OBJECT_PROVIDED)
	    && !wrongFilePathExecuted
	    && !wrongFilePathStatus
	    && StringUtils::contains(wrongFilePathPathMsg, stringResources->EXCEPTION)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0242", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "SerializationUtils API - serializeToBytes / nullObject";
	TestCommonTools::consolePrintTestApiStart(242, testDescr);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	ArgumentPtr nullObject = nullptr;
	VectorPtr<char> nullObjectExecuted = SerializationUtils::serializeToBytes<Argument>(nullObject);
	StringPtr nullObjectPathMsg = SerializationUtils::getLastOperationMessage();
	bool nullObjectStatus = SerializationUtils::checkLastOperationWasSuccessful();
	SerializationUtils::disableBinarySerialization();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (nullObjectExecuted == nullptr
	    && !nullObjectStatus
	    && StringUtils::contains(nullObjectPathMsg, stringResources->NULL_OBJECT_PROVIDED)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0243", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "SerializationUtils API - deserializeFromBytes / deserializeFromstring + nullData";
	TestCommonTools::consolePrintTestApiStart(243, testDescr);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	VectorPtr<char> nullData = nullptr;
	StdStringPtr nullStr = nullptr;
	ArgumentPtr nullDataX = SerializationUtils::deserializeFromBytes<Argument>(nullData);
	StringPtr nullDataMsg = SerializationUtils::getLastOperationMessage();
	bool nullDataStatus = SerializationUtils::checkLastOperationWasSuccessful();
	ArgumentPtr nullStrX = SerializationUtils::deserializeFromString<Argument>(nullStr);
	StringPtr nullStrMsg = SerializationUtils::getLastOperationMessage();
	bool nullStrStatus = SerializationUtils::checkLastOperationWasSuccessful();
	SerializationUtils::disableBinarySerialization();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (nullDataX == nullptr
	    && !nullDataStatus
	    && StringUtils::contains(nullDataMsg, stringResources->NULL_DATA_PROVIDED)
	    && nullStrX == nullptr
	    && !nullStrStatus
	    && StringUtils::contains(nullStrMsg, stringResources->NULL_DATA_PROVIDED)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0244",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"SerializationUtils API - deserializeFromFile / nullFilePath + zerLengthPath + nullObject + wrongFilePath";
	TestCommonTools::consolePrintTestApiStart(244, testDescr);
	SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
	StdStringPtr nullFilePath = nullptr;
	string zerLengthPath = "";
	string wrongFilePath = "X:/XYZ";
	string tmpPath = getTempDir();
	ArgumentPtr nullFilePathExecuted = SerializationUtils::deserializeFromFile<Argument>(nullFilePath);
	StringPtr nullFilePathMsg = SerializationUtils::getLastOperationMessage();
	bool nullFilePathStatus = SerializationUtils::checkLastOperationWasSuccessful();
	ArgumentPtr zerLengthPathExecuted = SerializationUtils::deserializeFromFile<Argument>(zerLengthPath);
	StringPtr zerLengthPathPathMsg = SerializationUtils::getLastOperationMessage();
	bool zerLengthPathStatus = SerializationUtils::checkLastOperationWasSuccessful();
	ArgumentPtr notAFileExecuted = SerializationUtils::deserializeFromFile<Argument>(tmpPath);
	StringPtr notAFilePathMsg = SerializationUtils::getLastOperationMessage();
	bool notAFileStatus = SerializationUtils::checkLastOperationWasSuccessful();
	ArgumentPtr wrongFilePathExecuted = SerializationUtils::deserializeFromFile<Argument>(wrongFilePath);
	StringPtr wrongFilePathPathMsg = SerializationUtils::getLastOperationMessage();
	bool wrongFilePathStatus = SerializationUtils::checkLastOperationWasSuccessful();
	SerializationUtils::disableBinarySerialization();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (nullFilePathExecuted == nullptr
	    && !nullFilePathStatus
	    && StringUtils::contains(nullFilePathMsg, stringResources->NULL_FILE_PATH_PROVIDED)
	    && zerLengthPathExecuted == nullptr
	    && !zerLengthPathStatus
	    && StringUtils::contains(zerLengthPathPathMsg, stringResources->FILE_PATH_ZERO_LENGTH_PROVIDED)
	    && notAFileExecuted == nullptr
	    && !notAFileStatus
	    && StringUtils::contains(notAFilePathMsg, stringResources->FILE_PATH_IS_NOT_A_FILE)
	    && wrongFilePathExecuted == nullptr
	    && !wrongFilePathStatus
	    && StringUtils::contains(wrongFilePathPathMsg, stringResources->FILE_PATH_NOT_EXISTS)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}


TEST_CASE("testApi0245", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(245, testDescr);
	testResult = testCanonicalString("2 x", "2*x");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0246", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(246, testDescr);
	testResult = testCanonicalString("x 2 ", "x*2");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0247", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(247, testDescr);
	testResult = testCanonicalString("2 x sin(x) ", "2*x*sin(x)");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0248", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(248, testDescr);
	testResult = testCanonicalString("  (  2+3)  n x sin(  x )   ", "(2+3)*n*x*sin(x)");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0249", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication & canonical expression string test";
	TestCommonTools::consolePrintTestApiStart(249, testDescr);
	testResult = testCanonicalString("-  (-2+3)  -n -x sin(  -  x   )   ", "-(-2+3)-n-x*sin(-x)");
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0250", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsCsv()";
	TestCommonTools::consolePrintTestApiStart(250, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = mXparser::getHelpAsCsv();
	int linesNumber = StringUtils::countLines(help);
	String quote = UTF("\"");
	String dlm = UTF(";");
	String quoteDlm = quote + dlm + quote;
	int dlmOccurrences = StringUtils::countOccurrences(*help, quoteDlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 1
	    && elementsNumber > 500
	    && dlmOccurrences == linesNumber * 4
	    && StringUtils::contains(help, quote + stringResources->KEYWORD + quote)
	    && StringUtils::contains(help, quote + stringResources->TYPE + quote)
	    && StringUtils::contains(help, quote + stringResources->SYNTAX + quote)
	    && StringUtils::contains(help, quote + stringResources->SINCE + quote)
	    && StringUtils::contains(help, quote + stringResources->DESCRIPTION + quote)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0251", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsCsv(query)";
	TestCommonTools::consolePrintTestApiStart(251, testDescr);
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelpAsCsv(query);
	int linesNumber = StringUtils::countLines(help);
	String quote = UTF("\"");
	String dlm = UTF(";");
	String quoteDlm = quote + dlm + quote;
	int dlmOccurrences = StringUtils::countOccurrences(*help, quoteDlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 1
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && dlmOccurrences == linesNumber * 4
	    && StringUtils::contains(help, quote + stringResources->KEYWORD + quote)
	    && StringUtils::contains(help, quote + stringResources->TYPE + quote)
	    && StringUtils::contains(help, quote + stringResources->SYNTAX + quote)
	    && StringUtils::contains(help, quote + stringResources->SINCE + quote)
	    && StringUtils::contains(help, quote + stringResources->DESCRIPTION + quote)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0252", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsCsv(asjfdkasjfdhkjhkasfdlkh)";
	TestCommonTools::consolePrintTestApiStart(252, testDescr);
	string query = "asjfdkasjfdhkjhkasfdlkh";
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelpAsCsv(query);
	int linesNumber = StringUtils::countLines(help);
	String quote = UTF("\"");
	String dlm = UTF(";");
	String quoteDlm = quote + dlm + quote;
	int dlmOccurrences = StringUtils::countOccurrences(*help, quoteDlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 1
	    && elementsNumber == 0
	    && dlmOccurrences == linesNumber * 4
	    && StringUtils::contains(help, quote + stringResources->KEYWORD + quote)
	    && StringUtils::contains(help, quote + stringResources->TYPE + quote)
	    && StringUtils::contains(help, quote + stringResources->SYNTAX + quote)
	    && StringUtils::contains(help, quote + stringResources->SINCE + quote)
	    && StringUtils::contains(help, quote + stringResources->DESCRIPTION + quote)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0253", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsCsv(nullptr)";
	TestCommonTools::consolePrintTestApiStart(253, testDescr);
	StringPtr query = nullptr;
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelpAsCsv(query);
	int linesNumber = StringUtils::countLines(help);
	String quote = UTF("\"");
	String dlm = UTF(";");
	String quoteDlm = quote + dlm + quote;
	int dlmOccurrences = StringUtils::countOccurrences(*help, quoteDlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 1
	    && elementsNumber > 500
	    && dlmOccurrences == linesNumber * 4
	    && StringUtils::contains(help, quote + stringResources->KEYWORD + quote)
	    && StringUtils::contains(help, quote + stringResources->TYPE + quote)
	    && StringUtils::contains(help, quote + stringResources->SYNTAX + quote)
	    && StringUtils::contains(help, quote + stringResources->SINCE + quote)
	    && StringUtils::contains(help, quote + stringResources->DESCRIPTION + quote)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0254", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsCsv(quote, delimiter, addHeader)";
	TestCommonTools::consolePrintTestApiStart(254, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	String quote = UTF("''");
	String dlm = UTF(";;");
	String quoteDlm = quote + dlm + quote;
	StringPtr help = mXparser::getHelpAsCsv(quote, dlm, false);
	int linesNumber = StringUtils::countLines(help);
	int dlmOccurrences = StringUtils::countOccurrences(*help, quoteDlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber
	    && elementsNumber > 500
	    && dlmOccurrences == linesNumber * 4
	    && !StringUtils::contains(help, quote + stringResources->KEYWORD + quote)
	    && !StringUtils::contains(help, quote + stringResources->TYPE + quote)
	    && !StringUtils::contains(help, quote + stringResources->SYNTAX + quote)
	    && !StringUtils::contains(help, quote + stringResources->SINCE + quote)
	    && !StringUtils::contains(help, quote + stringResources->DESCRIPTION + quote)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0255", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsCsv(query, quote, delimiter, addHeader)";
	TestCommonTools::consolePrintTestApiStart(255, testDescr);
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	String quote = UTF("''");
	String dlm = UTF(";;");
	String quoteDlm = quote + dlm + quote;
	StringPtr help = mXparser::getHelpAsCsv(query, quote, dlm, true);
	int linesNumber = StringUtils::countLines(help);
	int dlmOccurrences = StringUtils::countOccurrences(*help, quoteDlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 1
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && dlmOccurrences == linesNumber * 4
	    && StringUtils::contains(help, quote + stringResources->KEYWORD + quote)
	    && StringUtils::contains(help, quote + stringResources->TYPE + quote)
	    && StringUtils::contains(help, quote + stringResources->SYNTAX + quote)
	    && StringUtils::contains(help, quote + stringResources->SINCE + quote)
	    && StringUtils::contains(help, quote + stringResources->DESCRIPTION + quote)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0256", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsHtmlTable()";
	TestCommonTools::consolePrintTestApiStart(256, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = mXparser::getHelpAsHtmlTable();
	int linesNumber = StringUtils::countLines(help);
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table>");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	String cssClass = UTF("class=\"");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 6
	    && elementsNumber > 500
	    && figureLeftOccurrences == 0
	    && figcaptionLeftOccurrences == 0
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 1
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 5
	    && tdLeftOccurrences == elementsNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 0
	    && StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && StringUtils::contains(help, stringResources->ALL_HELP_CONTENT)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0257", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsHtmlTable(sine)";
	TestCommonTools::consolePrintTestApiStart(257, testDescr);
	String query = UTF("sine");
	int elementNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelpAsHtmlTable(query);
	int linesNumber = StringUtils::countLines(help);
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table>");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	String cssClass = UTF("class=\"");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 6
	    && elementNumber > 5
	    && elementNumber < 100
	    && figureLeftOccurrences == 0
	    && figcaptionLeftOccurrences == 0
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 1
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 5
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 0
	    && StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && StringUtils::contains(help, stringResources->HELP_CONTENT_LIMITED_TO_QUERY)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0258", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsHtmlTable(asjfdkasjfdhkjhkasfdlkh)";
	TestCommonTools::consolePrintTestApiStart(258, testDescr);
	string query = "asjfdkasjfdhkjhkasfdlkh";
	int elementNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelpAsHtmlTable(query);
	int linesNumber = StringUtils::countLines(help);
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table>");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	String cssClass = UTF("class=\"");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 6
	    && elementNumber == 0
	    && figureLeftOccurrences == 0
	    && figcaptionLeftOccurrences == 0
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 1
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 5
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 0
	    && StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && StringUtils::contains(help, stringResources->HELP_CONTENT_LIMITED_TO_QUERY)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0259",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(addHeader = true, addCaption = true, addFigure = true, caption = '', cssClass = '')";
	TestCommonTools::consolePrintTestApiStart(259, testDescr);
	int elementNumber = mXparser::getKeyWords()->size();
	StringPtr help = mXparser::getHelpAsHtmlTable(true, true, true, UTF(""), UTF(""));
	int linesNumber = StringUtils::countLines(help);
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table>");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	String cssClass = UTF("class=\"");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 8
	    && elementNumber > 500
	    && figureLeftOccurrences == 1
	    && figcaptionLeftOccurrences == 1
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 0
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 5
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 0
	    && StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && StringUtils::contains(help, stringResources->ALL_HELP_CONTENT)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0260",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(addHeader = true, addCaption = true, addFigure = true, caption = 'This is a caption', cssClass = 'wp-1')";
	TestCommonTools::consolePrintTestApiStart(260, testDescr);
	int elementNumber = mXparser::getKeyWords()->size();
	String captionText = UTF("This is a caption");
	String cssClassText = UTF("wp-1");
	StringPtr help = mXparser::getHelpAsHtmlTable(true, true, true, captionText, cssClassText);
	int linesNumber = StringUtils::countLines(help);
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table>");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String cssClass = UTF("class=\"") + cssClassText + UTF("\"");
	String figureLeft = UTF("<figure ") + cssClass + UTF(">");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	int captionTextOccurrences = StringUtils::countOccurrences(*help, captionText);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 8
	    && elementNumber > 500
	    && figureLeftOccurrences == 1
	    && figcaptionLeftOccurrences == 1
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 0
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 5
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 1
	    && captionTextOccurrences == 1
	    && StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0261",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(addHeader = true, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
	TestCommonTools::consolePrintTestApiStart(261, testDescr);
	int elementNumber = mXparser::getKeyWords()->size();
	String captionText = UTF("This is a caption");
	String cssClassText = UTF("wp-1");
	StringPtr help = mXparser::getHelpAsHtmlTable(true, true, false, captionText, cssClassText);
	int linesNumber = StringUtils::countLines(help);
	String cssClass = UTF("class=\"") + cssClassText + UTF("\"");
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table ") + cssClass + UTF(">");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	int captionTextOccurrences = StringUtils::countOccurrences(*help, captionText);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 6
	    && elementNumber > 500
	    && figureLeftOccurrences == 0
	    && figcaptionLeftOccurrences == 0
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 1
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 5
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 1
	    && captionTextOccurrences == 1
	    && StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0262",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(addHeader = false, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
	TestCommonTools::consolePrintTestApiStart(262, testDescr);
	int elementNumber = mXparser::getKeyWords()->size();
	String captionText = UTF("This is a caption");
	String cssClassText = UTF("wp-1");
	StringPtr help = mXparser::getHelpAsHtmlTable(false, true, false, captionText, cssClassText);
	int linesNumber = StringUtils::countLines(help);
	String cssClass = UTF("class=\"") + cssClassText + UTF("\"");
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table ") + cssClass + UTF(">");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	int captionTextOccurrences = StringUtils::countOccurrences(*help, captionText);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 5
	    && elementNumber > 500
	    && figureLeftOccurrences == 0
	    && figcaptionLeftOccurrences == 0
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 1
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 0
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 1
	    && captionTextOccurrences == 1
	    && !StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0263",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(addHeader = false, addCaption = false, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
	TestCommonTools::consolePrintTestApiStart(263, testDescr);
	int elementNumber = mXparser::getKeyWords()->size();
	String captionText = UTF("This is a caption");
	String cssClassText = UTF("wp-1");
	StringPtr help = mXparser::getHelpAsHtmlTable(false, false, false, captionText, cssClassText);
	int linesNumber = StringUtils::countLines(help);
	String cssClass = UTF("class=\"") + cssClassText + UTF("\"");
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table ") + cssClass + UTF(">");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	int captionTextOccurrences = StringUtils::countOccurrences(*help, captionText);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 4
	    && elementNumber > 500
	    && figureLeftOccurrences == 0
	    && figcaptionLeftOccurrences == 0
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 0
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 0
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 1
	    && captionTextOccurrences == 0
	    && !StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0264",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(addHeader = false, addCaption = false, addFigure = true, caption = 'This is a caption', cssClass = '')";
	TestCommonTools::consolePrintTestApiStart(264, testDescr);
	int elementNumber = mXparser::getKeyWords()->size();
	String captionText = UTF("This is a caption");
	StringPtr help = mXparser::getHelpAsHtmlTable(false, false, true, captionText, UTF(""));
	int linesNumber = StringUtils::countLines(help);
	String cssClass = UTF("class=\"");
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table>");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	int captionTextOccurrences = StringUtils::countOccurrences(*help, captionText);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 6
	    && elementNumber > 500
	    && figureLeftOccurrences == 1
	    && figcaptionLeftOccurrences == 0
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 0
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 0
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 0
	    && captionTextOccurrences == 0
	    && !StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0265",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(query, addHeader = true, addCaption = true, addFigure = true, caption = '', cssClass = '')";
	TestCommonTools::consolePrintTestApiStart(265, testDescr);
	String query = UTF("sine");
	int elementNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelpAsHtmlTable(query, true, true, true, UTF(""), UTF(""));
	int linesNumber = StringUtils::countLines(help);
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table>");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	String cssClass = UTF("class=\"");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 8
	    && elementNumber > 5
	    && elementNumber < 100
	    && figureLeftOccurrences == 1
	    && figcaptionLeftOccurrences == 1
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 0
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 5
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 0
	    && StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && StringUtils::contains(help, stringResources->HELP_CONTENT_LIMITED_TO_QUERY)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0266",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(query, addHeader = true, addCaption = true, addFigure = true, caption = 'This is a caption', cssClass = 'wp-1')";
	TestCommonTools::consolePrintTestApiStart(266, testDescr);
	String query = UTF("sine");
	int elementNumber = mXparser::getKeyWords(query)->size();
	String captionText = UTF("This is a caption");
	String cssClassText = UTF("wp-1");
	StringPtr help = mXparser::getHelpAsHtmlTable(query, true, true, true, captionText, cssClassText);
	int linesNumber = StringUtils::countLines(help);
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table>");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String cssClass = UTF("class=\"") + cssClassText + UTF("\"");
	String figureLeft = UTF("<figure ") + cssClass + UTF(">");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	int captionTextOccurrences = StringUtils::countOccurrences(*help, captionText);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 8
	    && elementNumber > 5
	    && elementNumber < 100
	    && figureLeftOccurrences == 1
	    && figcaptionLeftOccurrences == 1
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 0
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 5
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 1
	    && captionTextOccurrences == 1
	    && StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0267",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(query, addHeader = true, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
	TestCommonTools::consolePrintTestApiStart(267, testDescr);
	String query = UTF("sine");
	int elementNumber = mXparser::getKeyWords(query)->size();
	String captionText = UTF("This is a caption");
	String cssClassText = UTF("wp-1");
	StringPtr help = mXparser::getHelpAsHtmlTable(query, true, true, false, captionText, cssClassText);
	int linesNumber = StringUtils::countLines(help);
	String cssClass = UTF("class=\"") + cssClassText + UTF("\"");
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table ") + cssClass + UTF(">");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	int captionTextOccurrences = StringUtils::countOccurrences(*help, captionText);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 6
	    && elementNumber > 5
	    && elementNumber < 100
	    && figureLeftOccurrences == 0
	    && figcaptionLeftOccurrences == 0
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 1
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 5
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 1
	    && captionTextOccurrences == 1
	    && StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0268",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(query, addHeader = false, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
	TestCommonTools::consolePrintTestApiStart(268, testDescr);
	String query = UTF("sine");
	int elementNumber = mXparser::getKeyWords(query)->size();
	String captionText = UTF("This is a caption");
	String cssClassText = UTF("wp-1");
	StringPtr help = mXparser::getHelpAsHtmlTable(query, false, true, false, captionText, cssClassText);
	int linesNumber = StringUtils::countLines(help);
	String cssClass = UTF("class=\"") + cssClassText + UTF("\"");
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table ") + cssClass + UTF(">");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	int captionTextOccurrences = StringUtils::countOccurrences(*help, captionText);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 5
	    && elementNumber > 5
	    && elementNumber < 100
	    && figureLeftOccurrences == 0
	    && figcaptionLeftOccurrences == 0
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 1
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 0
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 1
	    && captionTextOccurrences == 1
	    && !StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0269",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(query, addHeader = false, addCaption = false, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
	TestCommonTools::consolePrintTestApiStart(269, testDescr);
	String query = UTF("sine");
	int elementNumber = mXparser::getKeyWords(query)->size();
	String captionText = UTF("This is a caption");
	String cssClassText = UTF("wp-1");
	StringPtr help = mXparser::getHelpAsHtmlTable(query, false, false, false, captionText, cssClassText);
	int linesNumber = StringUtils::countLines(help);
	String cssClass = UTF("class=\"") + cssClassText + UTF("\"");
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table ") + cssClass + UTF(">");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	int captionTextOccurrences = StringUtils::countOccurrences(*help, captionText);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 4
	    && elementNumber > 5
	    && elementNumber < 100
	    && figureLeftOccurrences == 0
	    && figcaptionLeftOccurrences == 0
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 0
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 0
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 1
	    && captionTextOccurrences == 0
	    && !StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0270",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsHtmlTable(query, addHeader = false, addCaption = false, addFigure = true, caption = 'This is a caption', cssClass = '')";
	TestCommonTools::consolePrintTestApiStart(270, testDescr);
	String query = UTF("sine");
	int elementNumber = mXparser::getKeyWords(query)->size();
	String captionText = UTF("This is a caption");
	StringPtr help = mXparser::getHelpAsHtmlTable(query, false, false, true, captionText, UTF(""));
	int linesNumber = StringUtils::countLines(help);
	String cssClass = UTF("class=\"");
	String tdLeft = UTF("<td>");
	String tdRight = UTF("</td>");
	String thLeft = UTF("<th>");
	String thRight = UTF("</th>");
	String tableLeft = UTF("<table>");
	String tableRight = UTF("</table>");
	String tbodyLeft = UTF("<tbody>");
	String tbodyRight = UTF("</tbody>");
	String captionLeft = UTF("<caption>");
	String captionRight = UTF("</caption>");
	String figureLeft = UTF("<figure>");
	String figureRight = UTF("</figure>");
	String figcaptionLeft = UTF("<figcaption>");
	String figcaptionRight = UTF("</figcaption>");
	int tdLeftOccurrences = StringUtils::countOccurrences(*help, tdLeft);
	int tdRightOccurrences = StringUtils::countOccurrences(*help, tdRight);
	int thLeftOccurrences = StringUtils::countOccurrences(*help, thLeft);
	int thRightOccurrences = StringUtils::countOccurrences(*help, thRight);
	int tableLeftOccurrences = StringUtils::countOccurrences(*help, tableLeft);
	int tableRightOccurrences = StringUtils::countOccurrences(*help, tableRight);
	int tbodyLeftOccurrences = StringUtils::countOccurrences(*help, tbodyLeft);
	int tbodyRightOccurrences = StringUtils::countOccurrences(*help, tbodyRight);
	int captionLeftOccurrences = StringUtils::countOccurrences(*help, captionLeft);
	int captionRightOccurrences = StringUtils::countOccurrences(*help, captionRight);
	int figureLeftOccurrences = StringUtils::countOccurrences(*help, figureLeft);
	int figureRightOccurrences = StringUtils::countOccurrences(*help, figureRight);
	int figcaptionLeftOccurrences = StringUtils::countOccurrences(*help, figcaptionLeft);
	int figcaptionRightOccurrences = StringUtils::countOccurrences(*help, figcaptionRight);
	int cssClassOccurrences = StringUtils::countOccurrences(*help, cssClass);
	int captionTextOccurrences = StringUtils::countOccurrences(*help, captionText);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementNumber + 6
	    && elementNumber > 5
	    && elementNumber < 100
	    && figureLeftOccurrences == 1
	    && figcaptionLeftOccurrences == 0
	    && tableLeftOccurrences == 1
	    && captionLeftOccurrences == 0
	    && tbodyLeftOccurrences == 1
	    && thLeftOccurrences == 0
	    && tdLeftOccurrences == elementNumber * 5
	    && tdLeftOccurrences == tdRightOccurrences
	    && thLeftOccurrences == thRightOccurrences
	    && tableLeftOccurrences == tableRightOccurrences
	    && tbodyLeftOccurrences == tbodyRightOccurrences
	    && captionLeftOccurrences == captionRightOccurrences
	    && figureLeftOccurrences == figureRightOccurrences
	    && figcaptionLeftOccurrences == figcaptionRightOccurrences
	    && cssClassOccurrences == 0
	    && captionTextOccurrences == 0
	    && !StringUtils::contains(help, thLeft + stringResources->KEYWORD + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->TYPE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SYNTAX + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->SINCE + thRight)
	    && !StringUtils::contains(help, thLeft + stringResources->DESCRIPTION + thRight)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0271", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsHtmlTable() - check clean for HTML";
	TestCommonTools::consolePrintTestApiStart(271, testDescr);
	StringPtr help = mXparser::getHelpAsHtmlTable();
	String ampPure = UTF("&");
	String ampHtml = UTF("&amp;");
	String ltPure = UTF("<");
	String ltHtml = UTF("&lt;");
	String gtPure = UTF(">");
	String gtHtml = UTF("&gt;");
	int ampPureOccurrences = StringUtils::countOccurrences(*help, ampPure);
	int ampHtmlOccurrences = StringUtils::countOccurrences(*help, ampHtml);
	int ltPureOccurrences = StringUtils::countOccurrences(*help, ltPure);
	int ltHtmlOccurrences = StringUtils::countOccurrences(*help, ltHtml);
	int gtPureOccurrences = StringUtils::countOccurrences(*help, gtPure);
	int gtHtmlRightOccurrences = StringUtils::countOccurrences(*help, gtHtml);
	int deltaLtGtureOccurrences = Math::abs(ltPureOccurrences - gtPureOccurrences);
	if (deltaLtGtureOccurrences == 0
	    && ampPureOccurrences == ampHtmlOccurrences + ltHtmlOccurrences + gtHtmlRightOccurrences
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0272", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsMarkdownTable()";
	TestCommonTools::consolePrintTestApiStart(272, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = cleanMarkdownBackslash(*mXparser::getHelpAsMarkdownTable());
	int linesNumber = StringUtils::countLines(help);
	String captionStart = UTF("### ");
	String headLeft = UTF("|---");
	String headRight = UTF("---|");
	String dlm = UTF("|");
	int captionStartOccurrences = StringUtils::countOccurrences(*help, captionStart);
	int headLeftOccurrences = StringUtils::countOccurrences(*help, headLeft);
	int headRightOccurrences = StringUtils::countOccurrences(*help, headRight);
	int dlmOccurrences = StringUtils::countOccurrences(*help, dlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 500
	    && captionStartOccurrences == 1
	    && headLeftOccurrences == 5
	    && dlmOccurrences == (elementsNumber + 2) * 6
	    && headLeftOccurrences == headRightOccurrences
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION + dlm)
	    && StringUtils::contains(help, stringResources->ALL_HELP_CONTENT)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0273", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsMarkdownTable(sine)";
	TestCommonTools::consolePrintTestApiStart(273, testDescr);
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = cleanMarkdownBackslash(*mXparser::getHelpAsMarkdownTable(query));
	int linesNumber = StringUtils::countLines(help);
	String captionStart = UTF("### ");
	String headLeft = UTF("|---");
	String headRight = UTF("---|");
	String dlm = UTF("|");
	int captionStartOccurrences = StringUtils::countOccurrences(*help, captionStart);
	int headLeftOccurrences = StringUtils::countOccurrences(*help, headLeft);
	int headRightOccurrences = StringUtils::countOccurrences(*help, headRight);
	int dlmOccurrences = StringUtils::countOccurrences(*help, dlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && captionStartOccurrences == 1
	    && headLeftOccurrences == 5
	    && dlmOccurrences == (elementsNumber + 2) * 6
	    && headLeftOccurrences == headRightOccurrences
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION + dlm)
	    && StringUtils::contains(help, stringResources->HELP_CONTENT_LIMITED_TO_QUERY)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0274", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsMarkdownTable(asjfdkasjfdhkjhkasfdlkh)";
	TestCommonTools::consolePrintTestApiStart(274, testDescr);
	string query = "asjfdkasjfdhkjhkasfdlkh";
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = cleanMarkdownBackslash(*mXparser::getHelpAsMarkdownTable(query));
	int linesNumber = StringUtils::countLines(help);
	String captionStart = UTF("### ");
	String headLeft = UTF("|---");
	String headRight = UTF("---|");
	String dlm = UTF("|");
	int captionStartOccurrences = StringUtils::countOccurrences(*help, captionStart);
	int headLeftOccurrences = StringUtils::countOccurrences(*help, headLeft);
	int headRightOccurrences = StringUtils::countOccurrences(*help, headRight);
	int dlmOccurrences = StringUtils::countOccurrences(*help, dlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 3
	    && elementsNumber == 0
	    && captionStartOccurrences == 1
	    && headLeftOccurrences == 5
	    && dlmOccurrences == (elementsNumber + 2) * 6
	    && headLeftOccurrences == headRightOccurrences
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION + dlm)
	    && StringUtils::contains(help, stringResources->HELP_CONTENT_LIMITED_TO_QUERY)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0275",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsMarkdownTable(addHeader = true, addCaption = true, caption = '')";
	TestCommonTools::consolePrintTestApiStart(275, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = cleanMarkdownBackslash(*mXparser::getHelpAsMarkdownTable(true, true, ""));
	int linesNumber = StringUtils::countLines(help);
	String captionStart = UTF("### ");
	String headLeft = UTF("|---");
	String headRight = UTF("---|");
	String dlm = UTF("|");
	int captionStartOccurrences = StringUtils::countOccurrences(*help, captionStart);
	int headLeftOccurrences = StringUtils::countOccurrences(*help, headLeft);
	int headRightOccurrences = StringUtils::countOccurrences(*help, headRight);
	int dlmOccurrences = StringUtils::countOccurrences(*help, dlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 500
	    && captionStartOccurrences == 1
	    && headLeftOccurrences == 5
	    && dlmOccurrences == (elementsNumber + 2) * 6
	    && headLeftOccurrences == headRightOccurrences
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION + dlm)
	    && StringUtils::contains(help, stringResources->ALL_HELP_CONTENT)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0276",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsMarkdownTable(addHeader = true, addCaption = true, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(276, testDescr);
	String captionText = UTF("This is a caption");
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = cleanMarkdownBackslash(*mXparser::getHelpAsMarkdownTable(true, true, captionText));
	int linesNumber = StringUtils::countLines(help);
	String captionStart = UTF("### ");
	String headLeft = UTF("|---");
	String headRight = UTF("---|");
	String dlm = UTF("|");
	int captionStartOccurrences = StringUtils::countOccurrences(*help, captionStart);
	int headLeftOccurrences = StringUtils::countOccurrences(*help, headLeft);
	int headRightOccurrences = StringUtils::countOccurrences(*help, headRight);
	int dlmOccurrences = StringUtils::countOccurrences(*help, dlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 500
	    && captionStartOccurrences == 1
	    && headLeftOccurrences == 5
	    && dlmOccurrences == (elementsNumber + 2) * 6
	    && headLeftOccurrences == headRightOccurrences
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION + dlm)
	    && StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0277",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsMarkdownTable(addHeader = true, addCaption = false, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(277, testDescr);
	String captionText = UTF("This is a caption");
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = cleanMarkdownBackslash(*mXparser::getHelpAsMarkdownTable(true, false, captionText));
	int linesNumber = StringUtils::countLines(help);
	String captionStart = UTF("### ");
	String headLeft = UTF("|---");
	String headRight = UTF("---|");
	String dlm = UTF("|");
	int captionStartOccurrences = StringUtils::countOccurrences(*help, captionStart);
	int headLeftOccurrences = StringUtils::countOccurrences(*help, headLeft);
	int headRightOccurrences = StringUtils::countOccurrences(*help, headRight);
	int dlmOccurrences = StringUtils::countOccurrences(*help, dlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 2
	    && elementsNumber > 500
	    && captionStartOccurrences == 0
	    && headLeftOccurrences == 5
	    && dlmOccurrences == (elementsNumber + 2) * 6
	    && headLeftOccurrences == headRightOccurrences
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION + dlm)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0278",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsMarkdownTable(addHeader = false, addCaption = false, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(278, testDescr);
	String captionText = UTF("This is a caption");
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = cleanMarkdownBackslash(*mXparser::getHelpAsMarkdownTable(false, false, captionText));
	int linesNumber = StringUtils::countLines(help);
	String captionStart = UTF("### ");
	String headLeft = UTF("|---");
	String headRight = UTF("---|");
	String dlm = UTF("|");
	int captionStartOccurrences = StringUtils::countOccurrences(*help, captionStart);
	int headLeftOccurrences = StringUtils::countOccurrences(*help, headLeft);
	int headRightOccurrences = StringUtils::countOccurrences(*help, headRight);
	int dlmOccurrences = StringUtils::countOccurrences(*help, dlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 2
	    && elementsNumber > 500
	    && captionStartOccurrences == 0
	    && headLeftOccurrences == 5
	    && dlmOccurrences == (elementsNumber + 2) * 6
	    && headLeftOccurrences == headRightOccurrences
	    && !StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->DESCRIPTION + dlm)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0279",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsMarkdownTable(query, addHeader = true, addCaption = true, caption = '')";
	TestCommonTools::consolePrintTestApiStart(279, testDescr);
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = cleanMarkdownBackslash(*mXparser::getHelpAsMarkdownTable(query, true, true, UTF("")));
	int linesNumber = StringUtils::countLines(help);
	String captionStart = UTF("### ");
	String headLeft = UTF("|---");
	String headRight = UTF("---|");
	String dlm = UTF("|");
	int captionStartOccurrences = StringUtils::countOccurrences(*help, captionStart);
	int headLeftOccurrences = StringUtils::countOccurrences(*help, headLeft);
	int headRightOccurrences = StringUtils::countOccurrences(*help, headRight);
	int dlmOccurrences = StringUtils::countOccurrences(*help, dlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && captionStartOccurrences == 1
	    && headLeftOccurrences == 5
	    && dlmOccurrences == (elementsNumber + 2) * 6
	    && headLeftOccurrences == headRightOccurrences
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION + dlm)
	    && StringUtils::contains(help, stringResources->HELP_CONTENT_LIMITED_TO_QUERY)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0280",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsMarkdownTable(query, addHeader = true, addCaption = true, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(280, testDescr);
	String captionText = UTF("This is a caption");
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = cleanMarkdownBackslash(*mXparser::getHelpAsMarkdownTable(query, true, true, captionText));
	int linesNumber = StringUtils::countLines(help);
	String captionStart = UTF("### ");
	String headLeft = UTF("|---");
	String headRight = UTF("---|");
	String dlm = UTF("|");
	int captionStartOccurrences = StringUtils::countOccurrences(*help, captionStart);
	int headLeftOccurrences = StringUtils::countOccurrences(*help, headLeft);
	int headRightOccurrences = StringUtils::countOccurrences(*help, headRight);
	int dlmOccurrences = StringUtils::countOccurrences(*help, dlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && captionStartOccurrences == 1
	    && headLeftOccurrences == 5
	    && dlmOccurrences == (elementsNumber + 2) * 6
	    && headLeftOccurrences == headRightOccurrences
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION + dlm)
	    && StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0281",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsMarkdownTable(query, addHeader = true, addCaption = false, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(281, testDescr);
	String captionText = UTF("This is a caption");
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = cleanMarkdownBackslash(*mXparser::getHelpAsMarkdownTable(query, true, false, captionText));
	int linesNumber = StringUtils::countLines(help);
	String captionStart = UTF("### ");
	String headLeft = UTF("|---");
	String headRight = UTF("---|");
	String dlm = UTF("|");
	int captionStartOccurrences = StringUtils::countOccurrences(*help, captionStart);
	int headLeftOccurrences = StringUtils::countOccurrences(*help, headLeft);
	int headRightOccurrences = StringUtils::countOccurrences(*help, headRight);
	int dlmOccurrences = StringUtils::countOccurrences(*help, dlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 2
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && captionStartOccurrences == 0
	    && headLeftOccurrences == 5
	    && dlmOccurrences == (elementsNumber + 2) * 6
	    && headLeftOccurrences == headRightOccurrences
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION + dlm)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0282",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelpAsMarkdownTable(addHeader = false, addCaption = false, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(282, testDescr);
	String captionText = UTF("This is a caption");
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = cleanMarkdownBackslash(*mXparser::getHelpAsMarkdownTable(query, false, false, captionText));
	int linesNumber = StringUtils::countLines(help);
	String captionStart = UTF("### ");
	String headLeft = UTF("|---");
	String headRight = UTF("---|");
	String dlm = UTF("|");
	int captionStartOccurrences = StringUtils::countOccurrences(*help, captionStart);
	int headLeftOccurrences = StringUtils::countOccurrences(*help, headLeft);
	int headRightOccurrences = StringUtils::countOccurrences(*help, headRight);
	int dlmOccurrences = StringUtils::countOccurrences(*help, dlm);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (linesNumber == elementsNumber + 2
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && captionStartOccurrences == 0
	    && headLeftOccurrences == 5
	    && dlmOccurrences == (elementsNumber + 2) * 6
	    && headLeftOccurrences == headRightOccurrences
	    && !StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->DESCRIPTION + dlm)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0283", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsMarkdownTable() - check clean for MD";
	TestCommonTools::consolePrintTestApiStart(283, testDescr);
	StringPtr help = mXparser::getHelpAsMarkdownTable();
	int elementsNumber = mXparser::getKeyWords()->size();
	String pipePure = UTF("|");
	String pipeMd = UTF("\\|");
	String backslashMdPipe = UTF("\\\\|");
	int pipePureOccurrences = StringUtils::countOccurrences(*help, pipePure);
	int pipeMdOccurrences = StringUtils::countOccurrences(*help, pipeMd);
	int backslashMdPipeOccurrences = StringUtils::countOccurrences(*help, backslashMdPipe);
	if (pipePureOccurrences == (elementsNumber + 2) * 6 + (pipeMdOccurrences - backslashMdPipeOccurrences)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0284", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelp()";
	TestCommonTools::consolePrintTestApiStart(284, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = mXparser::getHelp();
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String dlm = UTF(" ");
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 500
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION)
	    && StringUtils::contains(help, stringResources->ALL_HELP_CONTENT)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0285", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelp(addHeader = true, addCaption = true, caption = '')";
	TestCommonTools::consolePrintTestApiStart(285, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = mXparser::getHelp(true, true, UTF(""));
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String dlm = UTF(" ");
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 500
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION)
	    && StringUtils::contains(help, stringResources->ALL_HELP_CONTENT)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0286",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelp(addHeader = true, addCaption = true, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(286, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	String captionText = UTF("This is a caption");
	StringPtr help = mXparser::getHelp(true, true, captionText);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String dlm = UTF(" ");
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 500
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION)
	    && StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0287",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelp(addHeader = true, addCaption = false, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(287, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	String captionText = UTF("This is a caption");
	StringPtr help = mXparser::getHelp(true, false, captionText);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String dlm = UTF(" ");
	if (linesNumber == elementsNumber + 2
	    && elementsNumber > 500
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0288",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelp(addHeader = false, addCaption = false, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(288, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	String captionText = UTF("This is a caption");
	StringPtr help = mXparser::getHelp(false, false, captionText);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String dlm = UTF(" ");
	if (linesNumber == elementsNumber
	    && elementsNumber > 500
	    && !StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->DESCRIPTION)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0289", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelp(query)";
	TestCommonTools::consolePrintTestApiStart(289, testDescr);
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelp(query);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String dlm = UTF(" ");
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION)
	    && StringUtils::contains(help, stringResources->HELP_CONTENT_LIMITED_TO_QUERY)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0290", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelp(query, addHeader = true, addCaption = true, caption = '')";
	TestCommonTools::consolePrintTestApiStart(290, testDescr);
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelp(query, true, true, UTF(""));
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String dlm = UTF(" ");
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION)
	    && StringUtils::contains(help, stringResources->HELP_CONTENT_LIMITED_TO_QUERY)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0291",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelp(query, addHeader = true, addCaption = true, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(291, testDescr);
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	String captionText = UTF("This is a caption");
	StringPtr help = mXparser::getHelp(query, true, true, captionText);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String dlm = UTF(" ");
	if (linesNumber == elementsNumber + 3
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION)
	    && StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0292",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelp(query, addHeader = true, addCaption = false, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(292, testDescr);
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	String captionText = UTF("This is a caption");
	StringPtr help = mXparser::getHelp(query, true, false, captionText);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String dlm = UTF(" ");
	if (linesNumber == elementsNumber + 2
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && StringUtils::contains(help, dlm + stringResources->DESCRIPTION)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0293",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser API - getHelp(query, addHeader = false, addCaption = false, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(293, testDescr);
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	String captionText = UTF("This is a caption");
	StringPtr help = mXparser::getHelp(query, false, false, captionText);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String dlm = UTF(" ");
	if (linesNumber == elementsNumber
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && !StringUtils::contains(help, dlm + stringResources->KEYWORD + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->TYPE + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->SYNTAX + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->SINCE + dlm)
	    && !StringUtils::contains(help, dlm + stringResources->DESCRIPTION)
	    && !StringUtils::contains(help, captionText)
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0294", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getKeyWords(query) - advanced search tag: key=";
	TestCommonTools::consolePrintTestApiStart(294, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	int tagNumber0 = mXparser::getKeyWords("key=")->size();
	int tagNumber1 = mXparser::getKeyWords("key")->size();
	int tagNumber2 = mXparser::getKeyWords("key=s")->size();
	int tagNumber3 = mXparser::getKeyWords("key=sin")->size();
	int tagNumber2ref = mXparser::getKeyWords("s")->size();
	int tagNumber3ref = mXparser::getKeyWords("sin")->size();
	if (tagNumber0 == 0
	    && tagNumber1 < elementsNumber
	    && tagNumber2 > 0
	    && tagNumber3 > 0
	    && tagNumber2 > tagNumber3
	    && tagNumber2ref > tagNumber3ref
	    && tagNumber2ref > tagNumber2
	    && tagNumber3ref > tagNumber3
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0295", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getKeyWords(query) - advanced search tag: desc=";
	TestCommonTools::consolePrintTestApiStart(295, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	int tagNumber0 = mXparser::getKeyWords("desc=")->size();
	int tagNumber1 = mXparser::getKeyWords("desc")->size();
	int tagNumber2 = mXparser::getKeyWords("desc=s")->size();
	int tagNumber3 = mXparser::getKeyWords("desc=sin")->size();
	int tagNumber2ref = mXparser::getKeyWords("s")->size();
	int tagNumber3ref = mXparser::getKeyWords("sin")->size();
	if (tagNumber0 == 0
	    && tagNumber1 < elementsNumber
	    && tagNumber2 > 0
	    && tagNumber3 > 0
	    && tagNumber2 > tagNumber3
	    && tagNumber2ref > tagNumber3ref
	    && tagNumber2ref > tagNumber2
	    && tagNumber3ref > tagNumber3
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0296", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getKeyWords(query) - advanced search tag: syn=";
	TestCommonTools::consolePrintTestApiStart(296, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	int tagNumber0 = mXparser::getKeyWords("syn=")->size();
	int tagNumber1 = mXparser::getKeyWords("syn")->size();
	int tagNumber2 = mXparser::getKeyWords("syn=s")->size();
	int tagNumber3 = mXparser::getKeyWords("syn=sin")->size();
	int tagNumber2ref = mXparser::getKeyWords("s")->size();
	int tagNumber3ref = mXparser::getKeyWords("sin")->size();
	if (tagNumber0 == 0
	    && tagNumber1 < elementsNumber
	    && tagNumber2 > 0
	    && tagNumber3 > 0
	    && tagNumber2 > tagNumber3
	    && tagNumber2ref > tagNumber3ref
	    && tagNumber2ref > tagNumber2
	    && tagNumber3ref > tagNumber3
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0297", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getKeyWords(query) - advanced search tag: since=";
	TestCommonTools::consolePrintTestApiStart(297, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	int tagNumber0 = mXparser::getKeyWords("since=")->size();
	int tagNumber1 = mXparser::getKeyWords("since")->size();
	int tagNumber2 = mXparser::getKeyWords("since=4")->size();
	int tagNumber3 = mXparser::getKeyWords("since=4.1")->size();
	int tagNumber2ref = mXparser::getKeyWords("4")->size();
	int tagNumber3ref = mXparser::getKeyWords("4.1")->size();
	if (tagNumber0 == 0
	    && tagNumber1 < elementsNumber
	    && tagNumber2 > 0
	    && tagNumber3 > 0
	    && tagNumber2 > tagNumber3
	    && tagNumber2ref > tagNumber3ref
	    && tagNumber2ref > tagNumber2
	    && tagNumber3ref > tagNumber3
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0298", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getKeyWords(query) - advanced search tag: type=";
	TestCommonTools::consolePrintTestApiStart(298, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	int tagNumber0 = mXparser::getKeyWords("type=")->size();
	int tagNumber1 = mXparser::getKeyWords("type")->size();
	int tagNumber2 = mXparser::getKeyWords("type=b")->size();
	int tagNumber3 = mXparser::getKeyWords("type=binary")->size();
	int tagNumber2ref = mXparser::getKeyWords("b")->size();
	int tagNumber3ref = mXparser::getKeyWords("binary")->size();
	if (tagNumber0 == 0
	    && tagNumber1 < elementsNumber
	    && tagNumber2 > 0
	    && tagNumber3 > 0
	    && tagNumber2 > tagNumber3
	    && tagNumber2ref > tagNumber3ref
	    && tagNumber2ref > tagNumber2
	    && tagNumber3ref > tagNumber3
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0299", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getKeyWords(query) - advanced search tag: type=";
	TestCommonTools::consolePrintTestApiStart(299, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	int tagNumber0 = mXparser::getKeyWords("typeid=")->size();
	int tagNumber1 = mXparser::getKeyWords("typeid")->size();
	int tagNumber2 = mXparser::getKeyWords("type=binary relation")->size();
	int tagNumber3 = mXparser::getKeyWords("typeid=3")->size();
	int tagNumber2ref = mXparser::getKeyWords("b")->size();
	int tagNumber3ref = mXparser::getKeyWords("binary")->size();
	if (tagNumber0 == 0
	    && tagNumber1 < elementsNumber
	    && tagNumber2 > 0
	    && tagNumber3 > 0
	    && tagNumber2 == tagNumber3
	    && tagNumber2ref > tagNumber3ref
	    && tagNumber2ref > tagNumber2
	    && tagNumber3ref > tagNumber3
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0300", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getKeyWords(query) - advanced search tag: keyid=";
	TestCommonTools::consolePrintTestApiStart(300, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	int tagNumber0 = mXparser::getKeyWords("keyid=")->size();
	int tagNumber1 = mXparser::getKeyWords("keyid")->size();
	StringPtr keyStr = mXparser::getKeyWords(S("keyid=") + Unit::SECOND_ARC_ID)->get(0)->wordString;
	if (tagNumber0 == 0
	    && tagNumber1 < elementsNumber
	    && *keyStr == *Unit::SECOND_ARC_STR
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0301", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsJson()";
	TestCommonTools::consolePrintTestApiStart(301, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = mXparser::getHelpAsJson();
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String q = UTF("\"");
	String qs = q + UTF(":");
	String caption = q + *stringResources->CAPTION + qs;
	String keyword = q + *stringResources->KEYWORD + qs;
	String type = q + *stringResources->TYPE + qs;
	String syntax = q + *stringResources->SYNTAX + qs;
	String since = q + *stringResources->SINCE + qs;
	String description = q + *stringResources->DESCRIPTION + qs;
	String recordStart = UTF("  {");
	String recordEnd1 = q + UTF(" },");
	String recordEnd2 = UTF("  }");
	String keyColon = qs + UTF(" ");
	String partEnd = q + UTF(",");
	String partEndCorrection = q + UTF(": ") + q + UTF(",") + q;
	int captionOccurrences = StringUtils::countOccurrences(*help, caption);
	int keywordOccurrences = StringUtils::countOccurrences(*help, keyword);
	int typeRightOccurrences = StringUtils::countOccurrences(*help, type);
	int syntaxOccurrences = StringUtils::countOccurrences(*help, syntax);
	int sinceOccurrences = StringUtils::countOccurrences(*help, since);
	int descriptionOccurrences = StringUtils::countOccurrences(*help, description);
	int recordStartOccurrences = StringUtils::countOccurrences(*help, recordStart);
	int recordEnd1Occurrences = StringUtils::countOccurrences(*help, recordEnd1);
	int recordEnd2Occurrences = StringUtils::countOccurrences(*help, recordEnd2);
	int keyColonOccurrences = StringUtils::countOccurrences(*help, keyColon);
	int partEndOccurrences = StringUtils::countOccurrences(*help, partEnd);
	int partEndCorrectionOccurrences = StringUtils::countOccurrences(*help, partEndCorrection);
	if (linesNumber == elementsNumber * 7 + 3
	    && elementsNumber > 500
	    && captionOccurrences == 1
	    && keywordOccurrences == elementsNumber
	    && typeRightOccurrences == elementsNumber
	    && syntaxOccurrences == elementsNumber
	    && sinceOccurrences == elementsNumber
	    && descriptionOccurrences == elementsNumber
	    && keyColonOccurrences == elementsNumber * 5 + 1
	    && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
	    && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
	    && StringUtils::contains(help, stringResources->ALL_HELP_CONTENT)
	    && StringUtils::startsWith(help, UTF("["))
	    && StringUtils::endsWith(help, UTF("]"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0302", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsJson(addCaption = true, caption = '')";
	TestCommonTools::consolePrintTestApiStart(302, testDescr);
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = mXparser::getHelpAsJson(true, UTF(""));
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String q = UTF("\"");
	String qs = q + UTF(":");
	String caption = q + *stringResources->CAPTION + qs;
	String keyword = q + *stringResources->KEYWORD + qs;
	String type = q + *stringResources->TYPE + qs;
	String syntax = q + *stringResources->SYNTAX + qs;
	String since = q + *stringResources->SINCE + qs;
	String description = q + *stringResources->DESCRIPTION + qs;
	String recordStart = UTF("  {");
	String recordEnd1 = q + UTF(" },");
	String recordEnd2 = UTF("  }");
	String keyColon = qs + UTF(" ");
	String partEnd = q + UTF(",");
	String partEndCorrection = q + UTF(": ") + q + UTF(",") + q;
	int captionOccurrences = StringUtils::countOccurrences(*help, caption);
	int keywordOccurrences = StringUtils::countOccurrences(*help, keyword);
	int typeRightOccurrences = StringUtils::countOccurrences(*help, type);
	int syntaxOccurrences = StringUtils::countOccurrences(*help, syntax);
	int sinceOccurrences = StringUtils::countOccurrences(*help, since);
	int descriptionOccurrences = StringUtils::countOccurrences(*help, description);
	int recordStartOccurrences = StringUtils::countOccurrences(*help, recordStart);
	int recordEnd1Occurrences = StringUtils::countOccurrences(*help, recordEnd1);
	int recordEnd2Occurrences = StringUtils::countOccurrences(*help, recordEnd2);
	int keyColonOccurrences = StringUtils::countOccurrences(*help, keyColon);
	int partEndOccurrences = StringUtils::countOccurrences(*help, partEnd);
	int partEndCorrectionOccurrences = StringUtils::countOccurrences(*help, partEndCorrection);
	if (linesNumber == elementsNumber * 7 + 3
	    && elementsNumber > 500
	    && captionOccurrences == 1
	    && keywordOccurrences == elementsNumber
	    && typeRightOccurrences == elementsNumber
	    && syntaxOccurrences == elementsNumber
	    && sinceOccurrences == elementsNumber
	    && descriptionOccurrences == elementsNumber
	    && keyColonOccurrences == elementsNumber * 5 + 1
	    && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
	    && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
	    && StringUtils::contains(help, stringResources->ALL_HELP_CONTENT)
	    && StringUtils::startsWith(help, UTF("["))
	    && StringUtils::endsWith(help, UTF("]"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0303", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsJson(addCaption = true, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(303, testDescr);
	String captionText = UTF("This is a caption");
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = mXparser::getHelpAsJson(true, captionText);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String q = UTF("\"");
	String qs = q + UTF(":");
	String caption = q + *stringResources->CAPTION + qs;
	String keyword = q + *stringResources->KEYWORD + qs;
	String type = q + *stringResources->TYPE + qs;
	String syntax = q + *stringResources->SYNTAX + qs;
	String since = q + *stringResources->SINCE + qs;
	String description = q + *stringResources->DESCRIPTION + qs;
	String recordStart = UTF("  {");
	String recordEnd1 = q + UTF(" },");
	String recordEnd2 = UTF("  }");
	String keyColon = qs + UTF(" ");
	String partEnd = q + UTF(",");
	String partEndCorrection = q + UTF(": ") + q + UTF(",") + q;
	int captionOccurrences = StringUtils::countOccurrences(*help, caption);
	int keywordOccurrences = StringUtils::countOccurrences(*help, keyword);
	int typeRightOccurrences = StringUtils::countOccurrences(*help, type);
	int syntaxOccurrences = StringUtils::countOccurrences(*help, syntax);
	int sinceOccurrences = StringUtils::countOccurrences(*help, since);
	int descriptionOccurrences = StringUtils::countOccurrences(*help, description);
	int recordStartOccurrences = StringUtils::countOccurrences(*help, recordStart);
	int recordEnd1Occurrences = StringUtils::countOccurrences(*help, recordEnd1);
	int recordEnd2Occurrences = StringUtils::countOccurrences(*help, recordEnd2);
	int keyColonOccurrences = StringUtils::countOccurrences(*help, keyColon);
	int partEndOccurrences = StringUtils::countOccurrences(*help, partEnd);
	int partEndCorrectionOccurrences = StringUtils::countOccurrences(*help, partEndCorrection);
	if (linesNumber == elementsNumber * 7 + 3
	    && elementsNumber > 500
	    && captionOccurrences == 1
	    && keywordOccurrences == elementsNumber
	    && typeRightOccurrences == elementsNumber
	    && syntaxOccurrences == elementsNumber
	    && sinceOccurrences == elementsNumber
	    && descriptionOccurrences == elementsNumber
	    && keyColonOccurrences == elementsNumber * 5 + 1
	    && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
	    && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
	    && StringUtils::contains(help, captionText)
	    && StringUtils::startsWith(help, UTF("["))
	    && StringUtils::endsWith(help, UTF("]"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0304", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsJson(addCaption = false, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(304, testDescr);
	String captionText = UTF("This is a caption");
	int elementsNumber = mXparser::getKeyWords()->size();
	StringPtr help = mXparser::getHelpAsJson(false, captionText);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String q = UTF("\"");
	String qs = q + UTF(":");
	String caption = q + *stringResources->CAPTION + qs;
	String keyword = q + *stringResources->KEYWORD + qs;
	String type = q + *stringResources->TYPE + qs;
	String syntax = q + *stringResources->SYNTAX + qs;
	String since = q + *stringResources->SINCE + qs;
	String description = q + *stringResources->DESCRIPTION + qs;
	String recordStart = UTF("  {");
	String recordEnd1 = q + UTF(" },");
	String recordEnd2 = UTF("  }");
	String keyColon = qs + UTF(" ");
	String partEnd = q + UTF(",");
	String partEndCorrection = q + UTF(": ") + q + UTF(",") + q;
	int captionOccurrences = StringUtils::countOccurrences(*help, caption);
	int keywordOccurrences = StringUtils::countOccurrences(*help, keyword);
	int typeRightOccurrences = StringUtils::countOccurrences(*help, type);
	int syntaxOccurrences = StringUtils::countOccurrences(*help, syntax);
	int sinceOccurrences = StringUtils::countOccurrences(*help, since);
	int descriptionOccurrences = StringUtils::countOccurrences(*help, description);
	int recordStartOccurrences = StringUtils::countOccurrences(*help, recordStart);
	int recordEnd1Occurrences = StringUtils::countOccurrences(*help, recordEnd1);
	int recordEnd2Occurrences = StringUtils::countOccurrences(*help, recordEnd2);
	int keyColonOccurrences = StringUtils::countOccurrences(*help, keyColon);
	int partEndOccurrences = StringUtils::countOccurrences(*help, partEnd);
	int partEndCorrectionOccurrences = StringUtils::countOccurrences(*help, partEndCorrection);
	if (linesNumber == elementsNumber * 7 + 2
	    && elementsNumber > 500
	    && captionOccurrences == 0
	    && keywordOccurrences == elementsNumber
	    && typeRightOccurrences == elementsNumber
	    && syntaxOccurrences == elementsNumber
	    && sinceOccurrences == elementsNumber
	    && descriptionOccurrences == elementsNumber
	    && keyColonOccurrences == elementsNumber * 5
	    && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
	    && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
	    && !StringUtils::contains(help, captionText)
	    && StringUtils::startsWith(help, UTF("["))
	    && StringUtils::endsWith(help, UTF("]"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0305", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsJson(query)";
	TestCommonTools::consolePrintTestApiStart(305, testDescr);
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelpAsJson(query);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String q = UTF("\"");
	String qs = q + UTF(":");
	String caption = q + *stringResources->CAPTION + qs;
	String keyword = q + *stringResources->KEYWORD + qs;
	String type = q + *stringResources->TYPE + qs;
	String syntax = q + *stringResources->SYNTAX + qs;
	String since = q + *stringResources->SINCE + qs;
	String description = q + *stringResources->DESCRIPTION + qs;
	String recordStart = UTF("  {");
	String recordEnd1 = q + UTF(" },");
	String recordEnd2 = UTF("  }");
	String keyColon = qs + UTF(" ");
	String partEnd = q + UTF(",");
	String partEndCorrection = q + UTF(": ") + q + UTF(",") + q;
	int captionOccurrences = StringUtils::countOccurrences(*help, caption);
	int keywordOccurrences = StringUtils::countOccurrences(*help, keyword);
	int typeRightOccurrences = StringUtils::countOccurrences(*help, type);
	int syntaxOccurrences = StringUtils::countOccurrences(*help, syntax);
	int sinceOccurrences = StringUtils::countOccurrences(*help, since);
	int descriptionOccurrences = StringUtils::countOccurrences(*help, description);
	int recordStartOccurrences = StringUtils::countOccurrences(*help, recordStart);
	int recordEnd1Occurrences = StringUtils::countOccurrences(*help, recordEnd1);
	int recordEnd2Occurrences = StringUtils::countOccurrences(*help, recordEnd2);
	int keyColonOccurrences = StringUtils::countOccurrences(*help, keyColon);
	int partEndOccurrences = StringUtils::countOccurrences(*help, partEnd);
	int partEndCorrectionOccurrences = StringUtils::countOccurrences(*help, partEndCorrection);
	if (linesNumber == elementsNumber * 7 + 3
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && captionOccurrences == 1
	    && keywordOccurrences == elementsNumber
	    && typeRightOccurrences == elementsNumber
	    && syntaxOccurrences == elementsNumber
	    && sinceOccurrences == elementsNumber
	    && descriptionOccurrences == elementsNumber
	    && keyColonOccurrences == elementsNumber * 5 + 1
	    && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
	    && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
	    && StringUtils::contains(help, stringResources->HELP_CONTENT_LIMITED_TO_QUERY)
	    && StringUtils::startsWith(help, UTF("["))
	    && StringUtils::endsWith(help, UTF("]"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0306", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsJson(query, addCaption = true, caption = '')";
	TestCommonTools::consolePrintTestApiStart(306, testDescr);
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelpAsJson(query, true, UTF(""));
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String q = UTF("\"");
	String qs = q + UTF(":");
	String caption = q + *stringResources->CAPTION + qs;
	String keyword = q + *stringResources->KEYWORD + qs;
	String type = q + *stringResources->TYPE + qs;
	String syntax = q + *stringResources->SYNTAX + qs;
	String since = q + *stringResources->SINCE + qs;
	String description = q + *stringResources->DESCRIPTION + qs;
	String recordStart = UTF("  {");
	String recordEnd1 = q + UTF(" },");
	String recordEnd2 = UTF("  }");
	String keyColon = qs + UTF(" ");
	String partEnd = q + UTF(",");
	String partEndCorrection = q + UTF(": ") + q + UTF(",") + q;
	int captionOccurrences = StringUtils::countOccurrences(*help, caption);
	int keywordOccurrences = StringUtils::countOccurrences(*help, keyword);
	int typeRightOccurrences = StringUtils::countOccurrences(*help, type);
	int syntaxOccurrences = StringUtils::countOccurrences(*help, syntax);
	int sinceOccurrences = StringUtils::countOccurrences(*help, since);
	int descriptionOccurrences = StringUtils::countOccurrences(*help, description);
	int recordStartOccurrences = StringUtils::countOccurrences(*help, recordStart);
	int recordEnd1Occurrences = StringUtils::countOccurrences(*help, recordEnd1);
	int recordEnd2Occurrences = StringUtils::countOccurrences(*help, recordEnd2);
	int keyColonOccurrences = StringUtils::countOccurrences(*help, keyColon);
	int partEndOccurrences = StringUtils::countOccurrences(*help, partEnd);
	int partEndCorrectionOccurrences = StringUtils::countOccurrences(*help, partEndCorrection);
	if (linesNumber == elementsNumber * 7 + 3
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && captionOccurrences == 1
	    && keywordOccurrences == elementsNumber
	    && typeRightOccurrences == elementsNumber
	    && syntaxOccurrences == elementsNumber
	    && sinceOccurrences == elementsNumber
	    && descriptionOccurrences == elementsNumber
	    && keyColonOccurrences == elementsNumber * 5 + 1
	    && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
	    && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
	    && StringUtils::contains(help, stringResources->HELP_CONTENT_LIMITED_TO_QUERY)
	    && StringUtils::startsWith(help, UTF("["))
	    && StringUtils::endsWith(help, UTF("]"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0307",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsJson(query, addCaption = true, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(307, testDescr);
	String captionText = UTF("This is a caption");
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelpAsJson(query, true, captionText);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String q = UTF("\"");
	String qs = q + UTF(":");
	String caption = q + *stringResources->CAPTION + qs;
	String keyword = q + *stringResources->KEYWORD + qs;
	String type = q + *stringResources->TYPE + qs;
	String syntax = q + *stringResources->SYNTAX + qs;
	String since = q + *stringResources->SINCE + qs;
	String description = q + *stringResources->DESCRIPTION + qs;
	String recordStart = UTF("  {");
	String recordEnd1 = q + UTF(" },");
	String recordEnd2 = UTF("  }");
	String keyColon = qs + UTF(" ");
	String partEnd = q + UTF(",");
	String partEndCorrection = q + UTF(": ") + q + UTF(",") + q;
	int captionOccurrences = StringUtils::countOccurrences(*help, caption);
	int keywordOccurrences = StringUtils::countOccurrences(*help, keyword);
	int typeRightOccurrences = StringUtils::countOccurrences(*help, type);
	int syntaxOccurrences = StringUtils::countOccurrences(*help, syntax);
	int sinceOccurrences = StringUtils::countOccurrences(*help, since);
	int descriptionOccurrences = StringUtils::countOccurrences(*help, description);
	int recordStartOccurrences = StringUtils::countOccurrences(*help, recordStart);
	int recordEnd1Occurrences = StringUtils::countOccurrences(*help, recordEnd1);
	int recordEnd2Occurrences = StringUtils::countOccurrences(*help, recordEnd2);
	int keyColonOccurrences = StringUtils::countOccurrences(*help, keyColon);
	int partEndOccurrences = StringUtils::countOccurrences(*help, partEnd);
	int partEndCorrectionOccurrences = StringUtils::countOccurrences(*help, partEndCorrection);
	if (linesNumber == elementsNumber * 7 + 3
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && captionOccurrences == 1
	    && keywordOccurrences == elementsNumber
	    && typeRightOccurrences == elementsNumber
	    && syntaxOccurrences == elementsNumber
	    && sinceOccurrences == elementsNumber
	    && descriptionOccurrences == elementsNumber
	    && keyColonOccurrences == elementsNumber * 5 + 1
	    && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
	    && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
	    && StringUtils::contains(help, captionText)
	    && StringUtils::startsWith(help, UTF("["))
	    && StringUtils::endsWith(help, UTF("]"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0308",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser API - getHelpAsJson(query, addCaption = false, caption = 'This is a caption')";
	TestCommonTools::consolePrintTestApiStart(308, testDescr);
	String captionText = UTF("This is a caption");
	String query = UTF("sine");
	int elementsNumber = mXparser::getKeyWords(query)->size();
	StringPtr help = mXparser::getHelpAsJson(query, false, captionText);
	int linesNumber = StringUtils::countLines(help);
	StringResourcesPtr stringResources = StringModel::getStringResources();
	String q = UTF("\"");
	String qs = q + UTF(":");
	String caption = q + *stringResources->CAPTION + qs;
	String keyword = q + *stringResources->KEYWORD + qs;
	String type = q + *stringResources->TYPE + qs;
	String syntax = q + *stringResources->SYNTAX + qs;
	String since = q + *stringResources->SINCE + qs;
	String description = q + *stringResources->DESCRIPTION + qs;
	String recordStart = UTF("  {");
	String recordEnd1 = q + UTF(" },");
	String recordEnd2 = UTF("  }");
	String keyColon = qs + UTF(" ");
	String partEnd = q + UTF(",");
	String partEndCorrection = q + UTF(": ") + q + UTF(",") + q;
	int captionOccurrences = StringUtils::countOccurrences(*help, caption);
	int keywordOccurrences = StringUtils::countOccurrences(*help, keyword);
	int typeRightOccurrences = StringUtils::countOccurrences(*help, type);
	int syntaxOccurrences = StringUtils::countOccurrences(*help, syntax);
	int sinceOccurrences = StringUtils::countOccurrences(*help, since);
	int descriptionOccurrences = StringUtils::countOccurrences(*help, description);
	int recordStartOccurrences = StringUtils::countOccurrences(*help, recordStart);
	int recordEnd1Occurrences = StringUtils::countOccurrences(*help, recordEnd1);
	int recordEnd2Occurrences = StringUtils::countOccurrences(*help, recordEnd2);
	int keyColonOccurrences = StringUtils::countOccurrences(*help, keyColon);
	int partEndOccurrences = StringUtils::countOccurrences(*help, partEnd);
	int partEndCorrectionOccurrences = StringUtils::countOccurrences(*help, partEndCorrection);
	if (linesNumber == elementsNumber * 7 + 2
	    && elementsNumber > 5
	    && elementsNumber < 100
	    && captionOccurrences == 0
	    && keywordOccurrences == elementsNumber
	    && typeRightOccurrences == elementsNumber
	    && syntaxOccurrences == elementsNumber
	    && sinceOccurrences == elementsNumber
	    && descriptionOccurrences == elementsNumber
	    && keyColonOccurrences == elementsNumber * 5
	    && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
	    && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
	    && !StringUtils::contains(help, captionText)
	    && StringUtils::startsWith(help, UTF("["))
	    && StringUtils::endsWith(help, UTF("]"))
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0309", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Argument API - cloneThreadSafe()";
	TestCommonTools::consolePrintTestApiStart(309, testDescr);
	FunctionPtr f = new_Function("f(x) = x^2");
	ConstantPtr c = new_Constant("c = 3");
	ArgumentPtr a = new_Argument("a = 2");
	a->setDescription("Clone");
	ArgumentPtr b = new_Argument("b = 2*a + f(c-c)", a, f, c);
	ArgumentPtr bc = b->cloneForThreadSafe();
	ArgumentPtr ac = bc->getArgument("a");
	StringPtr a_n1 = a->getArgumentName();
	StringPtr b_n1 = b->getArgumentName();
	StringPtr ac_n1 = ac->getArgumentName();
	StringPtr bc_n1 = bc->getArgumentName();
	double a_v1 = a->getArgumentValue();
	double b_v1 = b->getArgumentValue();
	double ac_v1 = ac->getArgumentValue();
	double bc_v1 = bc->getArgumentValue();
	a->setArgumentValue(3);
	double a_v2 = a->getArgumentValue();
	double b_v2 = b->getArgumentValue();
	double ac_v2 = ac->getArgumentValue();
	double bc_v2 = bc->getArgumentValue();
	ac->setArgumentValue(4);
	double a_v3 = a->getArgumentValue();
	double b_v3 = b->getArgumentValue();
	double ac_v3 = ac->getArgumentValue();
	double bc_v3 = bc->getArgumentValue();
	a->setArgumentName("b");
	StringPtr a_n2 = a->getArgumentName();
	StringPtr b_n2 = b->getArgumentName();
	StringPtr ac_n2 = ac->getArgumentName();
	StringPtr bc_n2 = bc->getArgumentName();
	bool a_s1 = a->checkSyntax();
	bool b_s1 = b->checkSyntax();
	StringPtr a_m1 = a->getErrorMessage();
	StringPtr b_m1 = b->getErrorMessage();
	bool ac_s1 = ac->checkSyntax();
	bool bc_s1 = bc->checkSyntax();
	StringPtr ac_m1 = ac->getErrorMessage();
	StringPtr bc_m1 = bc->getErrorMessage();
	ac->setArgumentName("c");
	StringPtr a_n3 = a->getArgumentName();
	StringPtr b_n3 = b->getArgumentName();
	StringPtr ac_n3 = ac->getArgumentName();
	StringPtr bc_n3 = bc->getArgumentName();
	bool a_s2 = a->checkSyntax();
	bool b_s2 = b->checkSyntax();
	StringPtr a_m2 = a->getErrorMessage();
	StringPtr b_m2 = b->getErrorMessage();
	bool ac_s2 = ac->checkSyntax();
	bool bc_s2 = bc->checkSyntax();
	StringPtr ac_m2 = ac->getErrorMessage();
	StringPtr bc_m2 = bc->getErrorMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (a != ac && b != bc
	    && *a->getDescription() == UTF("Clone")
	    && *ac->getDescription() == UTF("Clone")
	    && a->getArgumentType() == ac->getArgumentType()
	    && b->getArgumentType() == bc->getArgumentType()
	    && a->getArgumentBodyType() == ac->getArgumentBodyType()
	    && b->getArgumentBodyType() == bc->getArgumentBodyType()
	    && *a_n1 == *ac_n1
	    && *b_n1 == *bc_n1
	    && a_v1 == 2 && b_v1 == 4
	    && ac_v1 == 2 && bc_v1 == 4
	    && a_v2 == 3 && b_v2 == 6
	    && ac_v2 == 2 && bc_v2 == 4
	    && a_v3 == 3 && b_v3 == 6
	    && ac_v3 == 4 && bc_v3 == 8
	    && a_s1 && !b_s1
	    && StringUtils::contains(a_m1, stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION) &&
	    StringUtils::contains(b_m1, stringResources->INVALID_TOKEN)
	    && ac_s1 && bc_s1
	    && StringUtils::contains(ac_m1, stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION) &&
	    StringUtils::contains(bc_m1, stringResources->ALREADY_CHECKED_NO_ERRORS)
	    && *a_n2 != *ac_n2
	    && *b_n2 == *bc_n2
	    && a_s2 && !b_s2
	    && StringUtils::contains(a_m2, stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION) &&
	    StringUtils::contains(b_m2, stringResources->INVALID_TOKEN)
	    && ac_s2 && !bc_s2
	    && StringUtils::contains(ac_m2, stringResources->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION) &&
	    StringUtils::contains(bc_m2, stringResources->INVALID_TOKEN)
	    && *a_n3 != *ac_n3
	    && *b_n3 == *bc_n3
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0310", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Constant API - cloneThreadSafe()";
	TestCommonTools::consolePrintTestApiStart(310, testDescr);
	ConstantPtr a = new_Constant("a = 3");
	a->setDescription("Clone");
	ExpressionPtr e = new_Expression("a*a", a);
	ConstantPtr ac = a->cloneForThreadSafe();
	StringPtr a_n1 = a->getConstantName();
	StringPtr ac_n1 = ac->getConstantName();
	double a_v1 = a->getConstantValue();
	double ac_v1 = ac->getConstantValue();
	a->setConstantName("b");
	a->setConstantValue(4);
	StringPtr a_n2 = a->getConstantName();
	StringPtr ac_n2 = ac->getConstantName();
	double a_v2 = a->getConstantValue();
	double ac_v2 = ac->getConstantValue();
	ac->setConstantName("c");
	ac->setConstantValue(5);
	StringPtr a_n3 = a->getConstantName();
	StringPtr ac_n3 = ac->getConstantName();
	double a_v3 = a->getConstantValue();
	double ac_v3 = ac->getConstantValue();
	if (a != ac
	    && *a->getDescription() == UTF("Clone")
	    && *ac->getDescription() == UTF("Clone")
	    && *a_n1 == UTF("a") && *ac_n1 == UTF("a")
	    && a_v1 == 3 && ac_v1 == 3
	    && *a_n2 == UTF("b") && *ac_n2 == UTF("a")
	    && a_v2 == 4 && ac_v2 == 3
	    && *a_n3 == UTF("b") && *ac_n3 == UTF("c")
	    && a_v3 == 4 && ac_v3 == 5
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0311", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "RecursiveArgument API - cloneThreadSafe()";
	TestCommonTools::consolePrintTestApiStart(311, testDescr);
	ConstantPtr c = new_Constant("c = 2");
	ConstantPtr a = new_Constant("a = 2");
	FunctionPtr g = new_Function("g(x,y) = x - y");
	RecursiveArgumentPtr f = new_RecursiveArgument("fib(n) = fib(n-1)+fib(n-2) + g(c,a)", c, a, g);
	f->addBaseCase(0, 0);
	f->addBaseCase(1, 1);
	f->setDescription("Clone");
	StringPtr f_n1 = f->getArgumentName();
	double f_v1 = f->getArgumentValue(6);
	RecursiveArgumentPtr fc = PtrCast<RecursiveArgument, Argument>(f->cloneForThreadSafe());
	StringPtr fc_n1 = fc->getArgumentName();
	double fc_v1 = fc->getArgumentValue(6);
	double f_v2 = f->getArgumentValue(8);
	double fc_v2 = fc->getArgumentValue(8);
	double f_v3 = f->getArgumentValue(19);
	double fc_v3 = fc->getArgumentValue(19);
	if (f != fc
	    && *f->getDescription() == UTF("Clone")
	    && *fc->getDescription() == UTF("Clone")
	    && *f_n1 == UTF("fib") && *fc_n1 == UTF("fib")
	    && f_v1 == 8 && fc_v1 == 8
	    && f_v2 == 21 && fc_v2 == 21
	    && f_v3 == 4181 && fc_v3 == 4181
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0312", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Function API - cloneThreadSafe()";
	TestCommonTools::consolePrintTestApiStart(312, testDescr);
	ConstantPtr a = new_Constant("a = 0.001");
	FunctionPtr s = new_Function("s(x) = if( abs(x) < a, x, 2*s(x/2)*c(x/2) )", a);
	FunctionPtr c = new_Function("c(x) = if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )", a);
	s->addDefinitions(c);
	c->addDefinitions(s);
	s->setDescription("Clone");
	c->setDescription("Clone");
	a->setDescription("Clone");
	double s_v1 = s->calculate(MathConstants::PIBY2);
	double c_v1 = c->calculate(MathConstants::PIBY2);
	FunctionPtr sc = s->cloneForThreadSafe();
	FunctionPtr cc = c->cloneForThreadSafe();
	double sc_v1 = sc->calculate(MathConstants::PIBY2);
	double cc_v1 = cc->calculate(MathConstants::PIBY2);
	double s_v2 = s->calculate(MathConstants::PI);
	double c_v2 = c->calculate(MathConstants::PI);
	double sc_v2 = sc->calculate(MathConstants::PI);
	double cc_v2 = cc->calculate(MathConstants::PI);
	FunctionPtr sc_c = sc->getFunction("c");
	FunctionPtr sc_c_s = sc_c->getFunction("s");
	ConstantPtr sc_a = sc->getConstant("a");
	ConstantPtr sc_c_a = sc_c->getConstant("a");
	FunctionPtr cc_s = cc->getFunction("s");
	FunctionPtr cc_s_c = cc_s->getFunction("c");
	ConstantPtr cc_a = cc->getConstant("a");
	ConstantPtr cc_s_a = cc_s->getConstant("a");
	if (s != sc && c != cc
	    && s_v1 == sc_v1
	    && c_v1 == cc_v1
	    && s_v2 == sc_v2
	    && c_v2 == cc_v2
	    && sc == sc_c_s
	    && cc == cc_s_c
	    && sc_a == sc_c_a
	    && cc_a == cc_s_a
	    && *s->getDescription() == UTF("Clone")
	    && *c->getDescription() == UTF("Clone")
	    && *a->getDescription() == UTF("Clone")
	    && *sc->getDescription() == UTF("Clone")
	    && *cc->getDescription() == UTF("Clone")
	    && *sc_a->getDescription() == UTF("Clone")
	    && *cc_a->getDescription() == UTF("Clone")
	    && *s->getFunctionName() == UTF("s")
	    && *c->getFunctionName() == UTF("c")
	    && *a->getConstantName() == UTF("a")
	    && *sc->getFunctionName() == UTF("s")
	    && *cc->getFunctionName() == UTF("c")
	    && *sc_a->getConstantName() == UTF("a")
	    && *cc_a->getConstantName() == UTF("a")
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0313", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "Expression API - cloneThreadSafe()";
	TestCommonTools::consolePrintTestApiStart(313, testDescr);
	ConstantPtr a = new_Constant("a = 3");
	ArgumentPtr x = new_Argument("x = 2");
	ArgumentPtr y = new_Argument("y = x^a + a^2", x, a);
	FunctionPtr f = new_Function("f(x) = 2*x + a", a);
	FunctionPtr g = new_Function("g(x,y) = f(x) + f(y)", f);
	RecursiveArgumentPtr fib = new_RecursiveArgument("fib(n) = fib(n-1)+fib(n-2) + a", a);
	fib->addBaseCase(0, 0);
	fib->addBaseCase(1, 1);
	ExpressionPtr e = new_Expression("y+g(2,3) + fib(10) + f(x) + f(a)", g, y, fib, f, x, a);
	double e_v1 = e->calculate();
	ExpressionPtr ec = e->cloneForThreadSafe();
	double ec_v1 = ec->calculate();
	ArgumentPtr y1 = ec->getArgument("y");
	ArgumentPtr x1 = ec->getArgument("x");
	ArgumentPtr fib1 = ec->getArgument("fib");
	FunctionPtr g1 = ec->getFunction("g");
	FunctionPtr f1 = ec->getFunction("f");
	ConstantPtr a1 = ec->getConstant("a");
	FunctionPtr f2 = g1->getFunction("f");
	ConstantPtr a2 = fib1->getConstant("a");
	ConstantPtr a3 = f1->getConstant("a");
	ArgumentPtr x2 = y1->getArgument("x");
	ConstantPtr a4 = y1->getConstant("a");
	bool s1 = ec->getSyntaxStatus();
	bool p1 = e->getSyntaxStatus();
	a1->setConstantName("b");
	bool s2 = ec->getSyntaxStatus();
	bool p2 = e->getSyntaxStatus();
	a1->setConstantName("c");
	bool s3 = ec->checkSyntax();
	bool p3 = e->checkSyntax();
	a1->setConstantName("a");
	bool s4 = ec->checkSyntax();
	bool p4 = e->checkSyntax();
	bool s5 = ec->getSyntaxStatus();
	bool p5 = e->getSyntaxStatus();
	x1->setArgumentName("z");
	bool s6 = ec->getSyntaxStatus();
	bool p6 = e->getSyntaxStatus();
	bool s7 = ec->checkSyntax();
	bool p7 = e->checkSyntax();
	x1->setArgumentName("x");
	bool s8 = ec->checkSyntax();
	bool p8 = e->checkSyntax();
	bool s9 = ec->getSyntaxStatus();
	bool p9 = e->getSyntaxStatus();
	StringPtr n1 = f1->getFunctionName();
	f1->setFunctionName("ff");
	bool s10 = ec->getSyntaxStatus();
	bool p10 = e->getSyntaxStatus();
	bool s11 = ec->checkSyntax();
	bool p11 = e->checkSyntax();
	f1->setFunctionName("f");
	StringPtr n2 = f1->getFunctionName();
	bool s12 = ec->checkSyntax();
	bool p12 = e->checkSyntax();
	double e_v2 = e->calculate();
	double ec_v2 = ec->calculate();
	if (e != ec
	    && e_v1 == ec_v1
	    && a != a1
	    && a1 == a2
	    && a1 == a3
	    && a1 == a4
	    && x != x1
	    && x1 == x2
	    && f != f1
	    && f1 == f2
	    && y != y1
	    && fib != fib1
	    && s1 && p1
	    && !s2 && p2
	    && !s3 && p3
	    && s4 && p4
	    && s5 && p5
	    && !s6 && p6
	    && !s7 && p7
	    && s8 && p8
	    && s9 && p9
	    && !s10 && p10
	    && !s11 && p11
	    && s12 && p12
	    && e_v2 == ec_v2
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0314", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string exprStr =
			"(2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) - (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) + (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) * 345 * ((897 - 323)/ 23)";
	string testDescr = "Expression + CalcStepsRegisterPtr + Full Compilation: " + exprStr;
	TestCommonTools::consolePrintTestApiStart(314, testDescr);
	CalcStepsRegisterPtr r1 = new_CalcStepsRegister();
	CalcStepsRegisterPtr r2 = new_CalcStepsRegister();
	CalcStepsRegisterPtr r3 = new_CalcStepsRegister();
	ExpressionPtr e = new_Expression(exprStr);
	double v1 = e->calculate(r1);
	double v2 = e->calculate(r2);
	double v3 = e->calculate(r3);
	if (v1 == v2
	    && v1 == v3
	    && r1->calcStepRecords->size() == r2->calcStepRecords->size()
	    && r1->calcStepRecords->size() == r3->calcStepRecords->size()
	    && *r1->toString() == *r2->toString()
	    && *r1->toString() == *r3->toString()
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0315", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string exprStr = "f(x,y)+z+(x*y)/z";
	string testDescr = "Expression + CalcStepsRegisterPtr + Full Compilation: " + exprStr;
	TestCommonTools::consolePrintTestApiStart(315, testDescr);
	CalcStepsRegisterPtr r1 = new_CalcStepsRegister();
	CalcStepsRegisterPtr r2 = new_CalcStepsRegister();
	CalcStepsRegisterPtr r3 = new_CalcStepsRegister();
	ArgumentPtr x = new_Argument("x", "2*rList(2,2,2,2,2)");
	ArgumentPtr y = new_Argument("y = 2*x", x);
	ArgumentPtr z = new_Argument("z = 3*y/x", x, y);
	FunctionPtr f = new_Function("f(a,b) = a*b");
	ExpressionPtr e = new_Expression(exprStr, x, y, z, f);
	double v1 = e->calculate(r1);
	double v2 = e->calculate(r2);
	double v3 = e->calculate(r3);
	if (v1 == v2
	    && v1 == v3
	    && r1->calcStepRecords->size() == r2->calcStepRecords->size()
	    && r1->calcStepRecords->size() == r3->calcStepRecords->size()
	    && *r1->toString() == *r2->toString()
	    && *r1->toString() == *r3->toString()
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0316", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string exprStr = "f(a,b) = g(a,b) * a*b";
	string testDescr = "Expression + CalcStepsRegisterPtr + Full Compilation: " + exprStr;
	TestCommonTools::consolePrintTestApiStart(316, testDescr);
	CalcStepsRegisterPtr r1 = new_CalcStepsRegister();
	CalcStepsRegisterPtr r2 = new_CalcStepsRegister();
	CalcStepsRegisterPtr r3 = new_CalcStepsRegister();
	FunctionPtr g = new_Function("g(a,b) = a*b");
	FunctionPtr f = new_Function("f(a,b) = g(a,b) * a*b", g);
	f->setArgumentValue(0, 1);
	f->setArgumentValue(1, 1);
	double v1 = f->calculate(r1);
	double v2 = f->calculate(r2);
	double v3 = f->calculate(r3);
	if (v1 == v2
	    && v1 == v3
	    && r1->calcStepRecords->size() == r2->calcStepRecords->size()
	    && r1->calcStepRecords->size() == r3->calcStepRecords->size()
	    && *r1->toString() == *r2->toString()
	    && *r1->toString() == *r3->toString()
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0317", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string exprStr = "z = 3*y/x";
	string testDescr = "Expression + CalcStepsRegisterPtr + Full Compilation: " + exprStr;
	TestCommonTools::consolePrintTestApiStart(317, testDescr);
	CalcStepsRegisterPtr r1 = new_CalcStepsRegister();
	CalcStepsRegisterPtr r2 = new_CalcStepsRegister();
	CalcStepsRegisterPtr r3 = new_CalcStepsRegister();
	ArgumentPtr x = new_Argument("x", "2*rList(2,2,2,2,2)");
	ArgumentPtr y = new_Argument("y = 2*x", x);
	ArgumentPtr z = new_Argument("z = 3*y/x", x, y);
	double v1 = z->getArgumentValue(r1);
	double v2 = z->getArgumentValue(r2);
	double v3 = z->getArgumentValue(r3);
	if (v1 == v2
	    && v1 == v3
	    && r1->calcStepRecords->size() == r2->calcStepRecords->size()
	    && r1->calcStepRecords->size() == r3->calcStepRecords->size()
	    && *r1->toString() == *r2->toString()
	    && *r1->toString() == *r3->toString()
	)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
}

TEST_CASE("testApi0318", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - French";
	TestCommonTools::consolePrintTestApiStart(318, testDescr);
	StringResourcesPtr French = StringResources::languageFrench();
	StringModel::setStringResources(French);
	StringPtr userLanguage = StringModel::getStringResources()->USER_LANGUAGE;
	mXparser::consolePrintln("USER_LANGUAGE = " + userLanguage);
	if (*userLanguage == UTF("Français"))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0319", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - German";
	TestCommonTools::consolePrintTestApiStart(319, testDescr);
	StringResourcesPtr German = StringResources::languageGerman();
	StringModel::setStringResources(German);
	StringPtr userLanguage = StringModel::getStringResources()->USER_LANGUAGE;
	mXparser::consolePrintln("USER_LANGUAGE = " + userLanguage);
	if (*userLanguage == UTF("Deutsch"))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0320", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - Italian";
	TestCommonTools::consolePrintTestApiStart(320, testDescr);
	StringResourcesPtr Italian = StringResources::languageItalian();
	StringModel::setStringResources(Italian);
	StringPtr userLanguage = StringModel::getStringResources()->USER_LANGUAGE;
	mXparser::consolePrintln("USER_LANGUAGE = " + userLanguage);
	if (*userLanguage == UTF("Italiano"))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0321", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - Polish";
	TestCommonTools::consolePrintTestApiStart(321, testDescr);
	StringResourcesPtr Polish = StringResources::languagePolish();
	StringModel::setStringResources(Polish);
	StringPtr userLanguage = StringModel::getStringResources()->USER_LANGUAGE;
	mXparser::consolePrintln("USER_LANGUAGE = " + userLanguage);
	if (*userLanguage == UTF("Polski"))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0322", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - Portuguese";
	TestCommonTools::consolePrintTestApiStart(322, testDescr);
	StringResourcesPtr Portuguese = StringResources::languagePortuguese();
	StringModel::setStringResources(Portuguese);
	StringPtr userLanguage = StringModel::getStringResources()->USER_LANGUAGE;
	mXparser::consolePrintln("USER_LANGUAGE = " + userLanguage);
	if (*userLanguage == UTF("Português"))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0323", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - Spanish";
	TestCommonTools::consolePrintTestApiStart(323, testDescr);
	StringResourcesPtr Spanish = StringResources::languageSpanish();
	StringModel::setStringResources(Spanish);
	StringPtr userLanguage = StringModel::getStringResources()->USER_LANGUAGE;
	mXparser::consolePrintln("USER_LANGUAGE = " + userLanguage);
	if (*userLanguage == UTF("Español"))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0324", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - English";
	TestCommonTools::consolePrintTestApiStart(324, testDescr);
	StringResourcesPtr English = StringResources::languageEnglish();
	StringModel::setStringResources(English);
	StringPtr userLanguage = StringModel::getStringResources()->USER_LANGUAGE;
	mXparser::consolePrintln("USER_LANGUAGE = " + userLanguage);
	if (*userLanguage == UTF("English"))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0325", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(String) - English";
	TestCommonTools::consolePrintTestApiStart(325, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("en");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageEnglish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0326", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(String) - French";
	TestCommonTools::consolePrintTestApiStart(326, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("fr");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageFrench()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0327", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(String) - German";
	TestCommonTools::consolePrintTestApiStart(327, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("de");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageGerman()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0328", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(String) - Italian";
	TestCommonTools::consolePrintTestApiStart(328, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("it");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageItalian()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0329", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(String) - Polish";
	TestCommonTools::consolePrintTestApiStart(329, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("pl");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languagePolish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0330", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(String) - Portuguese";
	TestCommonTools::consolePrintTestApiStart(330, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("pt");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languagePortuguese()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0331", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(String) - Spanish";
	TestCommonTools::consolePrintTestApiStart(331, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("es");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageSpanish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0332", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(String) - Not supported";
	TestCommonTools::consolePrintTestApiStart(332, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("xyz");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageEnglish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0333", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - UK";
	TestCommonTools::consolePrintTestApiStart(333, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("UK");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageEnglish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0334", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - US";
	TestCommonTools::consolePrintTestApiStart(334, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("US");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageEnglish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0335", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - ENGLISH";
	TestCommonTools::consolePrintTestApiStart(335, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("ENGLISH");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageEnglish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0336", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - CANADA";
	TestCommonTools::consolePrintTestApiStart(336, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("CANADA");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageEnglish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0337", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - FRENCH";
	TestCommonTools::consolePrintTestApiStart(337, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("FRENCH");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageFrench()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0338", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - FRANCE";
	TestCommonTools::consolePrintTestApiStart(338, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("FRANCE");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageFrench()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0339", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - CANADA_FRENCH";
	TestCommonTools::consolePrintTestApiStart(339, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("CANADA_FRENCH");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageFrench()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0340", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - GERMAN";
	TestCommonTools::consolePrintTestApiStart(340, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("GERMAN");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageGerman()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0341", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - GERMANY";
	TestCommonTools::consolePrintTestApiStart(341, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("GERMANY");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageGerman()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0342", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - ITALIAN";
	TestCommonTools::consolePrintTestApiStart(342, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("ITALIAN");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageItalian()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0343", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - ITALY";
	TestCommonTools::consolePrintTestApiStart(343, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("ITALY");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageItalian()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0344", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - pl-PL";
	TestCommonTools::consolePrintTestApiStart(344, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("pl-PL");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languagePolish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0345", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - pt-PT";
	TestCommonTools::consolePrintTestApiStart(345, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("pt_PT");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languagePortuguese()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0346", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - pt-BR";
	TestCommonTools::consolePrintTestApiStart(346, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("pt BR");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languagePortuguese()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0347", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - es-ES";
	TestCommonTools::consolePrintTestApiStart(347, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("esES");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageSpanish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0348", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - es-AR";
	TestCommonTools::consolePrintTestApiStart(348, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("es_AR");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageSpanish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0349", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - no-NO";
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("no-NO");
	TestCommonTools::consolePrintTestApiStart(349, testDescr);
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageEnglish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0350", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser - enableSelectBestMatchingLanguage + checkIfSelectBestMatchingLanguage";
	TestCommonTools::consolePrintTestApiStart(350, testDescr);
	mXparser::enableSelectBestMatchingLanguage();
	if (mXparser::checkIfSelectBestMatchingLanguage())
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0351", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser - disableSelectBestMatchingLanguage + checkIfSelectBestMatchingLanguage";
	TestCommonTools::consolePrintTestApiStart(351, testDescr);
	mXparser::disableSelectBestMatchingLanguage();
	if (!mXparser::checkIfSelectBestMatchingLanguage())
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0352",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser - enableSelectBestMatchingLanguage + disableSelectBestMatchingLanguage + enableSelectBestMatchingLanguage";
	TestCommonTools::consolePrintTestApiStart(352, testDescr);
	mXparser::enableSelectBestMatchingLanguage();
	StringPtr lang1 = StringModel::getStringResources()->USER_LANGUAGE;
	mXparser::disableSelectBestMatchingLanguage();
	mXparser::enableSelectBestMatchingLanguage();
	StringPtr lang2 = StringModel::getStringResources()->USER_LANGUAGE;
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("noNO");
	mXparser::consolePrintln("USER_LANGUAGE #1 = " + lang1 + ", USER_LANGUAGE #2 = " + lang2);
	if (*lang1 == *lang2)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0353",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr =
			"mXparser - disableSelectBestMatchingLanguage + enableSelectBestMatchingLanguage + disableSelectBestMatchingLanguage";
	TestCommonTools::consolePrintTestApiStart(352, testDescr);
	mXparser::disableSelectBestMatchingLanguage();
	StringPtr lang1 = StringModel::getStringResources()->USER_LANGUAGE;
	mXparser::enableSelectBestMatchingLanguage();
	mXparser::disableSelectBestMatchingLanguage();
	StringPtr lang2 = StringModel::getStringResources()->USER_LANGUAGE;
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("no NO");
	mXparser::consolePrintln("USER_LANGUAGE #1 = " + lang1 + ", USER_LANGUAGE #2 = " + lang2);
	mXparser::consolePrintln();
	if (*lang1 == *lang2 && *lang1 == *StringResources::languageEnglish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0354", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser - changeLanguageTo(String) - pl";
	TestCommonTools::consolePrintTestApiStart(354, testDescr);
	mXparser::changeLanguageTo("pl");
	StringResourcesPtr lang = StringModel::getStringResources();
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languagePolish()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}


TEST_CASE("testApi0355", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser - changeLanguageTo(Locale) - pt-PT";
	TestCommonTools::consolePrintTestApiStart(355, testDescr);
	mXparser::changeLanguageTo("pt-PT");
	StringResourcesPtr lang = StringModel::getStringResources();
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languagePortuguese()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0356", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser - disableSelectBestMatchingLanguage + changeLanguageToBestMatching";
	TestCommonTools::consolePrintTestApiStart(356, testDescr);
	string osLang = StringResources::getLanguageIso(SystemUtils::getDefaultOsLanguage());
	bool isSupportedLanguage = osLang == "fr" || osLang == "de" || osLang == "it" || osLang == "pl" || osLang == "pt" ||
	                           osLang == "es";
	mXparser::disableSelectBestMatchingLanguage();
	mXparser::changeLanguageToBestMatching();
	StringPtr userLang = StringModel::getStringResources()->USER_LANGUAGE;
	StringPtr englishLang = StringResources::languageEnglish()->USER_LANGUAGE;
	mXparser::consolePrintln("OS_LANGUAGE = " + osLang);
	mXparser::consolePrintln("USER_LANGUAGE = " + userLang);
	if (isSupportedLanguage && *userLang != *englishLang)
		testResult = true;
	if (!isSupportedLanguage && *userLang == *englishLang)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0357",
          "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "mXparser - getHelpAsMarkdownTable + case of wrongly escaping pipe in some MD engines |/\\|";
	TestCommonTools::consolePrintTestApiStart(357, testDescr);
	StringPtr helpString1 = mXparser::getHelpAsMarkdownTable();
	StringPtr helpString2 = mXparser::getHelpAsMarkdownTable("");
	StringPtr helpString3 = mXparser::getHelpAsMarkdownTable(true, true, "caption");
	StringPtr helpString4 = mXparser::getHelpAsMarkdownTable("", true, true, "caption");
	if (!StringUtils::contains(helpString1, "\\\\ |") && StringUtils::contains(helpString1, "\\\\|"))
		testResult = false;
	if (!StringUtils::contains(helpString2, "\\\\ |") && StringUtils::contains(helpString2, "\\\\|"))
		testResult = false;
	if (!StringUtils::contains(helpString3, "\\\\ |") && StringUtils::contains(helpString3, "\\\\|"))
		testResult = false;
	if (!StringUtils::contains(helpString4, "\\\\ |") && StringUtils::contains(helpString4, "\\\\|"))
		testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0358", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "Bitwise NAND translations";
	TestCommonTools::consolePrintTestApiStart(358, testDescr);
	StringPtr en = StringResources::languageEnglish()->BITWISE_OPERATOR_NAND;
	StringPtr fr = StringResources::languageFrench()->BITWISE_OPERATOR_NAND;
	StringPtr de = StringResources::languageGerman()->BITWISE_OPERATOR_NAND;
	StringPtr it = StringResources::languageItalian()->BITWISE_OPERATOR_NAND;
	StringPtr pl = StringResources::languagePolish()->BITWISE_OPERATOR_NAND;
	StringPtr pt = StringResources::languagePortuguese()->BITWISE_OPERATOR_NAND;
	StringPtr es = StringResources::languageSpanish()->BITWISE_OPERATOR_NAND;
	StringPtr zh = StringResources::languageChinese()->BITWISE_OPERATOR_NAND;
	if (*en == *fr) testResult = false;
	if (*en == *de) testResult = false;
	if (*en == *it) testResult = false;
	if (*en == *pl) testResult = false;
	if (*en == *pt) testResult = false;
	if (*en == *es) testResult = false;
	if (*en == *zh) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0359", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "Bitwise NOR translations";
	TestCommonTools::consolePrintTestApiStart(359, testDescr);
	StringPtr en = StringResources::languageEnglish()->BITWISE_OPERATOR_NOR;
	StringPtr fr = StringResources::languageFrench()->BITWISE_OPERATOR_NOR;
	StringPtr de = StringResources::languageGerman()->BITWISE_OPERATOR_NOR;
	StringPtr it = StringResources::languageItalian()->BITWISE_OPERATOR_NOR;
	StringPtr pl = StringResources::languagePolish()->BITWISE_OPERATOR_NOR;
	StringPtr pt = StringResources::languagePortuguese()->BITWISE_OPERATOR_NOR;
	StringPtr es = StringResources::languageSpanish()->BITWISE_OPERATOR_NOR;
	StringPtr zh = StringResources::languageChinese()->BITWISE_OPERATOR_NOR;
	if (*en == *fr) testResult = false;
	if (*en == *de) testResult = false;
	if (*en == *it) testResult = false;
	if (*en == *pl) testResult = false;
	if (*en == *pt) testResult = false;
	if (*en == *es) testResult = false;
	if (*en == *zh) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0360", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "Bitwise XNOR translations";
	TestCommonTools::consolePrintTestApiStart(360, testDescr);
	StringPtr en = StringResources::languageEnglish()->BITWISE_OPERATOR_XNOR;
	StringPtr fr = StringResources::languageFrench()->BITWISE_OPERATOR_XNOR;
	StringPtr de = StringResources::languageGerman()->BITWISE_OPERATOR_XNOR;
	StringPtr it = StringResources::languageItalian()->BITWISE_OPERATOR_XNOR;
	StringPtr pl = StringResources::languagePolish()->BITWISE_OPERATOR_XNOR;
	StringPtr pt = StringResources::languagePortuguese()->BITWISE_OPERATOR_XNOR;
	StringPtr es = StringResources::languageSpanish()->BITWISE_OPERATOR_XNOR;
	StringPtr zh = StringResources::languageChinese()->BITWISE_OPERATOR_XNOR;
	if (*en == *fr) testResult = false;
	if (*en == *de) testResult = false;
	if (*en == *it) testResult = false;
	if (*en == *pl) testResult = false;
	if (*en == *pt) testResult = false;
	if (*en == *es) testResult = false;
	if (*en == *zh) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0361", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "Integer division translations";
	TestCommonTools::consolePrintTestApiStart(361, testDescr);
	StringPtr en = StringResources::languageEnglish()->OPERATOR_DIVIDE_QUOTIENT;
	StringPtr fr = StringResources::languageFrench()->OPERATOR_DIVIDE_QUOTIENT;
	StringPtr de = StringResources::languageGerman()->OPERATOR_DIVIDE_QUOTIENT;
	StringPtr it = StringResources::languageItalian()->OPERATOR_DIVIDE_QUOTIENT;
	StringPtr pl = StringResources::languagePolish()->OPERATOR_DIVIDE_QUOTIENT;
	StringPtr pt = StringResources::languagePortuguese()->OPERATOR_DIVIDE_QUOTIENT;
	StringPtr es = StringResources::languageSpanish()->OPERATOR_DIVIDE_QUOTIENT;
	StringPtr zh = StringResources::languageChinese()->OPERATOR_DIVIDE_QUOTIENT;
	if (*en == *fr) testResult = false;
	if (*en == *de) testResult = false;
	if (*en == *it) testResult = false;
	if (*en == *pl) testResult = false;
	if (*en == *pt) testResult = false;
	if (*en == *es) testResult = false;
	if (*en == *zh) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0362", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "String Resources & Help test: Bitwise NAND";
	TestCommonTools::consolePrintTestApiStart(362, testDescr);
	StringPtr helpStr = mXparser::getHelpAsCsv("@~&");
	if (!StringUtils::contains(helpStr, BitwiseOperator::NAND_STR)) testResult = false;
	if (!StringUtils::contains(helpStr, BitwiseOperator::NAND_SINCE)) testResult = false;
	if (!StringUtils::contains(helpStr, BitwiseOperator::NAND_SYN)) testResult = false;
	StringResourcesPtr sr = StringModel::getStringResources();
	if (!StringUtils::contains(helpStr, sr->BITWISE_OPERATOR)) testResult = false;
	if (!StringUtils::contains(helpStr, sr->BITWISE_OPERATOR_NAND)) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0363", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "String Resources & Help test: Bitwise NOR";
	TestCommonTools::consolePrintTestApiStart(363, testDescr);
	StringPtr helpStr = mXparser::getHelpAsCsv("@~|");
	if (!StringUtils::contains(helpStr, BitwiseOperator::NOR_STR)) testResult = false;
	if (!StringUtils::contains(helpStr, BitwiseOperator::NOR_SINCE)) testResult = false;
	if (!StringUtils::contains(helpStr, BitwiseOperator::NOR_SYN)) testResult = false;
	StringResourcesPtr sr = StringModel::getStringResources();
	if (!StringUtils::contains(helpStr, sr->BITWISE_OPERATOR)) testResult = false;
	if (!StringUtils::contains(helpStr, sr->BITWISE_OPERATOR_NOR)) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0364", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "String Resources & Help test: Bitwise XNOR";
	TestCommonTools::consolePrintTestApiStart(364, testDescr);
	StringPtr helpStr = mXparser::getHelpAsCsv("@~^");
	if (!StringUtils::contains(helpStr, BitwiseOperator::XNOR_STR)) testResult = false;
	if (!StringUtils::contains(helpStr, BitwiseOperator::XNOR_SINCE)) testResult = false;
	if (!StringUtils::contains(helpStr, BitwiseOperator::XNOR_SYN)) testResult = false;
	StringResourcesPtr sr = StringModel::getStringResources();
	if (!StringUtils::contains(helpStr, sr->BITWISE_OPERATOR)) testResult = false;
	if (!StringUtils::contains(helpStr, sr->BITWISE_OPERATOR_XNOR)) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0365", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "String Resources & Help test: Integer division";
	TestCommonTools::consolePrintTestApiStart(365, testDescr);
	StringPtr helpStr = mXparser::getHelpAsCsv("\\");
	if (!StringUtils::contains(helpStr, Operator::DIVIDE_QUOTIENT_STR)) testResult = false;
	if (!StringUtils::contains(helpStr, Operator::DIVIDE_QUOTIENT_SINCE)) testResult = false;
	if (!StringUtils::contains(helpStr, Operator::DIVIDE_QUOTIENT_SYN)) testResult = false;
	StringResourcesPtr sr = StringModel::getStringResources();
	if (!StringUtils::contains(helpStr, sr->OPERATOR)) testResult = false;
	if (!StringUtils::contains(helpStr, sr->OPERATOR_DIVIDE_QUOTIENT)) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0366", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = true;
	string testDescr = "String Resources & Help test: division central & east europe";
	TestCommonTools::consolePrintTestApiStart(366, testDescr);
	StringPtr helpStr = mXparser::getHelpAsCsv(":");
	if (!StringUtils::contains(helpStr, Operator::DIVIDE_EUROPE_STR)) testResult = false;
	if (!StringUtils::contains(helpStr, Operator::DIVIDE_SINCE_EUROPE)) testResult = false;
	if (!StringUtils::contains(helpStr, Operator::DIVIDE_EUROPE_SYN)) testResult = false;
	StringResourcesPtr sr = StringModel::getStringResources();
	if (!StringUtils::contains(helpStr, sr->OPERATOR)) testResult = false;
	if (!StringUtils::contains(helpStr, sr->OPERATOR_DIVIDE)) testResult = false;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0367", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "disable / enable / check if Special Cases";
	TestCommonTools::consolePrintTestApiStart(367, testDescr);
	bool specialCases0 = mXparser::checkIfSpecialCases();
	mXparser::disableSpecialCases();
	bool specialCases1 = mXparser::checkIfSpecialCases();
	mXparser::setSpecialCases(false);
	bool specialCases2 = mXparser::checkIfSpecialCases();
	mXparser::enableSpecialCases();
	bool specialCases3 = mXparser::checkIfSpecialCases();
	mXparser::setSpecialCases(true);
	bool specialCases4 = mXparser::checkIfSpecialCases();
	mXparser::setSpecialCases(false);
	bool specialCases5 = mXparser::checkIfSpecialCases();

	if (specialCases0 && !specialCases1 && !specialCases2 && specialCases3 && specialCases4 && !specialCases5)
		testResult = true;

	CHECK(testResult);
}

TEST_CASE("testApi0368", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - Chinese";
	TestCommonTools::consolePrintTestApiStart(368, testDescr);
	StringResourcesPtr Chinese = StringResources::languageChinese();
	StringModel::setStringResources(Chinese);
	StringPtr userLanguage = StringModel::getStringResources()->USER_LANGUAGE;
	mXparser::consolePrintln("USER_LANGUAGE = " + userLanguage);
	if (*userLanguage == UTF("中文"))
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0369", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(String) - Chinese";
	TestCommonTools::consolePrintTestApiStart(369, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("zh");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageChinese()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0370", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "StringResources - BestMatchingLanguage(Locale) - zh-CN";
	TestCommonTools::consolePrintTestApiStart(370, testDescr);
	StringResourcesPtr lang = StringResources::bestMatchingLanguage("zh-CN");
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageChinese()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0371", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser - changeLanguageTo(String) - zh";
	TestCommonTools::consolePrintTestApiStart(371, testDescr);
	mXparser::changeLanguageTo("zh");
	StringResourcesPtr lang = StringModel::getStringResources();
	mXparser::consolePrintln("USER_LANGUAGE = " + lang->USER_LANGUAGE);
	if (*lang->USER_LANGUAGE == *StringResources::languageChinese()->USER_LANGUAGE)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

TEST_CASE("testApi0372", "[API]") {
	TestCommonTools::testApiSettingsInit();
	bool testResult = false;
	string testDescr = "mXparser - warmUpBeforeConcurrentUse()";
	TestCommonTools::consolePrintTestApiStart(372, testDescr);
	bool isWarmedUpFalse = mXparser::checkIfWarmedUpBeforeConcurrentUse();
	bool isWarmedUp = mXparser::warmUpBeforeConcurrentUse();
	bool isWarmedUpTrue = mXparser::checkIfWarmedUpBeforeConcurrentUse();
	if (!isWarmedUpFalse && isWarmedUp && isWarmedUpTrue)
		testResult = true;
	TestCommonTools::consolePrintTestApiEnd(testResult);
	CHECK(testResult);
	StringModel::setDefaultStringResources();
}

namespace {
class RecoveringArgumentSource final : public ArgumentExtension {
public:
	double value = 2;
	int failureKind = 0;
	double getArgumentValue() override {
		const int failure = failureKind;
		failureKind = 0;
		if (failure == 1) throw std::runtime_error("planned callback failure");
		if (failure == 2) throw 373;
		return value;
	}
	ArgumentExtensionPtr clone() override {
		return std::make_shared<RecoveringArgumentSource>(*this);
	}
};
class NestedRecoverySource final : public ArgumentExtension {
	ExpressionPtr expression;
public:
	explicit NestedRecoverySource(const ExpressionPtr &expression) : expression(expression) {}
	double getArgumentValue() override { return expression->calculate(); }
	ArgumentExtensionPtr clone() override {
		return std::make_shared<NestedRecoverySource>(expression->cloneForThreadSafe());
	}
};
}

TEST_CASE("testApi0373", "[API]") {
	TestCommonTools::testApiSettingsInit();
	TestCommonTools::consolePrintTestApiStart(373, "Repeated calculation after callback exceptions");
	for (bool compiled : {false, true}) {
		for (int failureKind : {1, 2}) {
			for (bool registerSteps : {false, true}) {
				auto source = std::make_shared<RecoveringArgumentSource>();
				ArgumentExtensionPtr extension = source;
				auto expression = new_Expression("recoveringValue+1", new_Argument("recoveringValue", extension));
				if (compiled) CHECK(expression->calculate() == 3);
				source->failureKind = failureKind;
				CHECK(Double::isNaN(expression->calculate(registerSteps ? new_CalcStepsRegister() : nullptr)));
				if (failureKind == 1)
					CHECK(expression->getErrorMessage()->find(UTF("planned callback failure")) != String::npos);
				else
					CHECK(expression->getErrorMessage()->find(*StringModel::getStringResources()->ERROR_WHILE_EXECUTING_THE_CALCULATE) != String::npos);
				for (double nextValue : {5.0, 8.0, 11.0}) {
					source->value = nextValue;
					CHECK(expression->calculate(registerSteps ? new_CalcStepsRegister() : nullptr) == nextValue + 1);
				}
				source->failureKind = failureKind;
				CHECK(Double::isNaN(expression->calculate()));
				for (double nextValue : {14.0, 17.0, 20.0}) {
					source->value = nextValue;
					CHECK(expression->calculate() == nextValue + 1);
				}
			}
		}
	}
	std::weak_ptr<Expression> originalObserver, cloneObserver, innerObserver, outerObserver;
	std::weak_ptr<Argument> argumentObserver;
	{
		auto source = std::make_shared<RecoveringArgumentSource>();
		auto base = new_Argument("baseValue", 1.0);
		ArgumentExtensionPtr extension = source;
		auto original = new_Expression("recoveringValue+baseValue", new_Argument("recoveringValue", extension), base);
		originalObserver = original;
		argumentObserver = base;
		CHECK(original->calculate() == 3);
		auto clone = original->cloneForThreadSafe();
		cloneObserver = clone;
		source->failureKind = 1;
		CHECK(Double::isNaN(original->calculate()));
		clone->getArgument("baseValue")->setArgumentValue(5);
		CHECK(clone->calculate() == 7);
		base->setArgumentValue(8);
		source->value = 3;
		CHECK(original->calculate() == 11);
		base->setArgumentValue(9);
		source->value = 4;
		CHECK(original->calculate() == 13);
		clone->getArgument("baseValue")->setArgumentValue(10);
		CHECK(clone->calculate() == 12);

		auto innerSource = std::make_shared<RecoveringArgumentSource>();
		ArgumentExtensionPtr innerExtension = innerSource;
		auto inner = new_Expression("recoveringValue+1", new_Argument("recoveringValue", innerExtension));
		ArgumentExtensionPtr outerExtension = std::make_shared<NestedRecoverySource>(inner);
		auto outer = new_Expression("nestedValue*2", new_Argument("nestedValue", outerExtension));
		innerObserver = inner;
		outerObserver = outer;
		innerSource->failureKind = 1;
		CHECK(Double::isNaN(outer->calculate()));
		innerSource->value = 5;
		CHECK(outer->calculate() == 12);
		innerSource->value = 8;
		CHECK(outer->calculate() == 18);
	}
	CHECK(originalObserver.expired());
	CHECK(cloneObserver.expired());
	CHECK(argumentObserver.expired());
	CHECK(innerObserver.expired());
	CHECK(outerObserver.expired());
	TestCommonTools::consolePrintTestApiEnd(true);
}

TEST_CASE("testApi0374", "[API]") {
	TestCommonTools::testApiSettingsInit();
	TestCommonTools::consolePrintTestApiStart(374, "Gamma recurrence without representable progress");
	using Gamma = double (*)(double, double);
	const Gamma regularized[] = {SpecialFunctions::regularizedGammaLowerP, SpecialFunctions::regularizedGammaUpperQ};
	for (int kind = 0; kind < 2; ++kind) {
		for (double shape : {Double::NEGATIVE_INFINITY, -Double::MAX_VALUE, -0x1.0p54}) {
			CHECK(shape + 1 == shape);
			for (double value : {1.0, 2.0, -1.0, Double::NaN})
				CHECK(Double::isNaN(regularized[kind](shape, value)));
			for (double value : {0.0, -0.0, BinaryRelations::DEFAULT_COMPARISON_EPSILON / 2, -BinaryRelations::DEFAULT_COMPARISON_EPSILON / 2})
				CHECK(regularized[kind](shape, value) == kind);
		}
		CHECK(Double::isNaN(regularized[kind](Double::NaN, 0)));
	}
	CHECK(Double::isNaN(SpecialFunctions::incompleteGammaLower(Double::NEGATIVE_INFINITY, 2)));
	CHECK(Double::isNaN(SpecialFunctions::incompleteGammaUpper(Double::NEGATIVE_INFINITY, 2)));
	for (const char *name : {"GammaL", "GammaU", "GammaRegL", "GammaRegU", "GammaP", "GammaQ"}) {
		const std::string functionName(name);
		const double expected = functionName == "GammaU" || functionName == "GammaRegU" || functionName == "GammaQ"
			? 0.1353352832366127 : 0.8646647167633873;
		for (bool compiled : {false, true}) {
			auto shape = new_Argument("shape", 1.0);
			std::string expressionText = functionName + "(shape,2)";
			auto expression = new_Expression(expressionText, shape);
			REQUIRE(expression->checkSyntax());
			if (compiled) CHECK(Math::abs(expression->calculate() - expected) <= 1e-14);
			for (int reuse = 0; reuse < 2; ++reuse) {
				shape->setArgumentValue(Double::NEGATIVE_INFINITY);
				CHECK(Double::isNaN(expression->calculate()));
				shape->setArgumentValue(1);
				CHECK(Math::abs(expression->calculate() - expected) <= 1e-14);
			}
		}
	}
	TestCommonTools::consolePrintTestApiEnd(true);
}

TEST_CASE("testOwnershipArgumentObservers", "[API][Ownership]") {
	TestCommonTools::testApiSettingsInit();
	std::weak_ptr<Argument> argument;
	std::weak_ptr<Expression> first, second;
	{
		auto x = new_Argument("x", 2.0);
		auto e1 = new_Expression("x+1", x);
		auto e2 = new_Expression("x+2", x);
		argument = x; first = e1; second = e2;
		x.reset();
		REQUIRE_FALSE(argument.expired());
		CHECK(e1->getArgument("x") == e2->getArgument("x"));
		CHECK(e1->calculate() == 3);
		CHECK(e2->calculate() == 4);
		e1.reset();
		CHECK(first.expired());
		e2->getArgument("x")->setArgumentName("y");
		e2->setExpressionString("y+2");
		CHECK(e2->calculate() == 4);
	}
	CHECK(first.expired());
	CHECK(second.expired());
	CHECK(argument.expired());
	{
		auto x = new_Argument("x", 2.0);
		{ auto e = new_Expression("x", x); first = e; }
		CHECK(first.expired());
		x->setArgumentName("y");
		CHECK(x->getArgumentValue() == 2);
	}
}

TEST_CASE("testOwnershipConstantObservers", "[API][Ownership]") {
	TestCommonTools::testApiSettingsInit();
	std::weak_ptr<Constant> constant;
	std::weak_ptr<Expression> expression;
	{
		auto c = new_Constant("cc", 2.0);
		auto e = new_Expression("cc+1", c);
		constant = c; expression = e;
		CHECK(e->calculate() == 3);
		c->setConstantName("dd");
		CHECK_FALSE(e->checkSyntax());
		e->setExpressionString("dd+1");
		CHECK(e->calculate() == 3);
		c.reset();
		REQUIRE_FALSE(constant.expired());
		CHECK(e->calculate() == 3);
	}
	CHECK(constant.expired());
	CHECK(expression.expired());
}

TEST_CASE("testOwnershipDependentArguments", "[API][Ownership]") {
	TestCommonTools::testApiSettingsInit();
	std::weak_ptr<Argument> source, dependent;
	std::weak_ptr<Expression> expression;
	{
		auto x = new_Argument("x", 2.0);
		auto y = new_Argument("y=x^2", x);
		auto e = new_Expression("x+y", x, y);
		source = x; dependent = y; expression = e;
		x.reset(); y.reset();
		CHECK(e->calculate() == 6);
		e->getArgument("x")->setArgumentValue(3);
		CHECK(e->calculate() == 12);
	}
	CHECK(source.expired()); CHECK(dependent.expired()); CHECK(expression.expired());
}

TEST_CASE("testOwnershipCloneDoesNotRetainOriginal", "[API][Ownership]") {
	TestCommonTools::testApiSettingsInit();
	std::weak_ptr<Expression> original, cloned;
	std::weak_ptr<Argument> source, clonedArgument;
	ExpressionPtr clone;
	{
		auto x = new_Argument("x", 2.0);
		auto e = new_Expression("x+1", x);
		CHECK(e->calculate() == 3);
		clone = e->cloneForThreadSafe();
		original = e; source = x; cloned = clone; clonedArgument = clone->getArgument("x");
		CHECK(clone->getArgument("x") != x);
		CHECK(clone->calculate() == 3);
	}
	CHECK(original.expired()); CHECK(source.expired());
	clone->getArgument("x")->setArgumentValue(8);
	CHECK(clone->calculate() == 9);
	clone.reset();
	CHECK(cloned.expired()); CHECK(clonedArgument.expired());
}

TEST_CASE("testOwnershipRemoveReaddAndDeserialize", "[API][Ownership]") {
	TestCommonTools::testApiSettingsInit();
	std::weak_ptr<Argument> removed, retained;
	std::weak_ptr<Expression> restored;
	{
		auto x = new_Argument("x", 2.0);
		auto e = new_Expression("x+1", x);
		removed = x;
		e->removeArguments(x); x.reset();
		CHECK(removed.expired());
		x = new_Argument("x", 4.0); e->addArguments(x);
		CHECK(e->calculate() == 5);
		SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
		auto bytes = SerializationUtils::serializeToBytes(e);
		SerializationUtils::disableBinarySerialization();
		REQUIRE(bytes != nullptr);
		SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
		auto copy = SerializationUtils::deserializeFromBytes<Expression>(bytes);
		SerializationUtils::disableBinarySerialization();
		REQUIRE(copy != nullptr);
		CHECK(copy->calculate() == 5);
		CHECK(copy->getArgument("x") != x);
		restored = copy; retained = copy->getArgument("x");
	}
	CHECK(restored.expired()); CHECK(retained.expired());
}

TEST_CASE("testFunctionNamedListConstructor", "[API]") {
	TestCommonTools::testApiSettingsInit();
	const ListPtr<StringPtr> names = new_List<StringPtr>();
	names->add(S("x")); names->add(S("y"));
	const StringPtr name = S("ff"), body = S("x+y");
	auto f = new_Function(name, body, names);
	REQUIRE(f->checkSyntax());
	CHECK(f->getParametersNumber() == 2);
	CHECK(f->getFunction("ff") == f);
	CHECK(f->calculate(1.0, 2.0) == 3);
	auto clone = f->cloneForThreadSafe();
	CHECK(clone->calculate(2.0, 3.0) == 5);
	const ListPtr<StringPtr> nullNames = nullptr;
	const StringPtr nullString = nullptr;
	CHECK_FALSE(new_Function(name, body, nullNames)->checkSyntax());
	CHECK_FALSE(new_Function(nullString, body, names)->checkSyntax());
	CHECK_FALSE(new_Function(name, nullString, names)->checkSyntax());
	CHECK_FALSE(new_Function(S("1!"), body, names)->checkSyntax());
}

TEST_CASE("testPolishResourceDescriptions", "[API][Localization]") {
	TestCommonTools::testApiSettingsInit();
	const StringResourcesPtr polish = StringResources::languagePolish();
	REQUIRE(polish != nullptr);
	REQUIRE(polish->DESCRIPTION != nullptr);
	CHECK(*polish->DESCRIPTION == UTF("Opis"));
	REQUIRE(polish->DESCRIPTION_SHORT != nullptr);
	CHECK(*polish->DESCRIPTION_SHORT == UTF("opis"));
	REQUIRE(polish->CONSTANT_VALUE_VENUS_RADIUS_MEAN != nullptr);
	CHECK(*polish->CONSTANT_VALUE_VENUS_RADIUS_MEAN == UTF("Średni promień Wenus"));
	REQUIRE(polish->CONSTANT_VALUE_VENUS_MASS != nullptr);
	CHECK(*polish->CONSTANT_VALUE_VENUS_MASS == UTF("Masa Wenus"));
	REQUIRE(polish->FUNCTION_1_ARG_SIN != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_SIN == UTF("Trygonometryczny sinus"));
	REQUIRE(polish->FUNCTION_1_ARG_COS != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_COS == UTF("Trygonometryczny cosinus"));
	REQUIRE(polish->FUNCTION_1_ARG_TAN != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_TAN == UTF("Trygonometryczny tangens"));
	REQUIRE(polish->FUNCTION_1_ARG_CTAN != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_CTAN == UTF("Trygonometryczny cotangens"));
	REQUIRE(polish->FUNCTION_1_ARG_SEC != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_SEC == UTF("Trygonometryczny secans"));
	REQUIRE(polish->FUNCTION_1_ARG_COSEC != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_COSEC == UTF("Trygonometryczny cosecans"));
	REQUIRE(polish->FUNCTION_1_ARG_ASIN != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ASIN == UTF("Odwrotny trygonometryczny sinus"));
	REQUIRE(polish->FUNCTION_1_ARG_ACOS != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ACOS == UTF("Odwrotny trygonometryczny cosinus"));
	REQUIRE(polish->FUNCTION_1_ARG_ATAN != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ATAN == UTF("Odwrotny trygonometryczny tangens"));
	REQUIRE(polish->FUNCTION_1_ARG_ACTAN != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ACTAN == UTF("Odwrotny trygonometryczny cotangens"));
	REQUIRE(polish->FUNCTION_1_ARG_SINH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_SINH == UTF("Hiperboliczny sinus"));
	REQUIRE(polish->FUNCTION_1_ARG_COSH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_COSH == UTF("Hiperboliczny cosinus"));
	REQUIRE(polish->FUNCTION_1_ARG_TANH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_TANH == UTF("Hiperboliczny tangens"));
	REQUIRE(polish->FUNCTION_1_ARG_COTH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_COTH == UTF("Hiperboliczny cotangens"));
	REQUIRE(polish->FUNCTION_1_ARG_SECH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_SECH == UTF("Hiperboliczny secans"));
	REQUIRE(polish->FUNCTION_1_ARG_CSCH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_CSCH == UTF("Hiperboliczny cosecans"));
	REQUIRE(polish->FUNCTION_1_ARG_ARSINH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ARSINH == UTF("Odwrotny hiperboliczny sinus"));
	REQUIRE(polish->FUNCTION_1_ARG_ARCOSH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ARCOSH == UTF("Odwrotny hiperboliczny cosinus"));
	REQUIRE(polish->FUNCTION_1_ARG_ARTANH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ARTANH == UTF("Odwrotny hiperboliczny tangens"));
	REQUIRE(polish->FUNCTION_1_ARG_ARCOTH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ARCOTH == UTF("Odwrotny hiperboliczny cotangens"));
	REQUIRE(polish->FUNCTION_1_ARG_ARSECH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ARSECH == UTF("Odwrotny hiperboliczny secans"));
	REQUIRE(polish->FUNCTION_1_ARG_ARCSCH != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ARCSCH == UTF("Odwrotny hiperboliczny cosecans"));
	REQUIRE(polish->FUNCTION_1_ARG_ARCSEC != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ARCSEC == UTF("Odwrotny trygonometryczny secans"));
	REQUIRE(polish->FUNCTION_1_ARG_ARCCSC != nullptr);
	CHECK(*polish->FUNCTION_1_ARG_ARCCSC == UTF("Odwrotny trygonometryczny cosecans"));
	REQUIRE(polish->PARSER_SYMBOL_LEFT_PARENTHESES != nullptr);
	CHECK(*polish->PARSER_SYMBOL_LEFT_PARENTHESES == UTF("Lewy nawias"));
	REQUIRE(polish->PARSER_SYMBOL_RIGHT_PARENTHESES != nullptr);
	CHECK(*polish->PARSER_SYMBOL_RIGHT_PARENTHESES == UTF("Prawy nawias"));
}

TEST_CASE("testNativeMathConversionPreconditions", "[API][NativePreconditions]") {
    auto check = [](bool value) { CHECK(value); };
    auto expect = [&](const char* operation, const char* type, const std::function<void()>& action) {
        bool caught = false;
        std::string message;
        try { action(); } catch (const std::invalid_argument& error) { caught = true; message = error.what(); }
        CHECK(caught);
        CHECK(message == std::string("Native MathFunctions.") + operation + " requires "
              + (std::string(type) == "int" ? "an " : "a ") + type + "-representable conversion value");
    };
    TestCommonTools::testApiSettingsInit();
    const double nan=Double::NaN,inf=Double::POSITIVE_INFINITY;
    using Unary=std::pair<const char*,std::function<double(double)>>;
    const Unary unary[]={
        {"factorial",[](double x){return MathFunctions::factorial(x);}},
        {"harmonicNumber",[](double x){return MathFunctions::harmonicNumber(x);}},
        {"catalanNumber",[](double x){return MathFunctions::catalanNumber(x);}},
        {"fibonacciNumber",[](double x){return MathFunctions::fibonacciNumber(x);}},
        {"lucasNumber",[](double x){return MathFunctions::lucasNumber(x);}}
    };
    using Binary=std::pair<const char*,std::function<double(double,double)>>;
    const Binary binary[]={
        {"eulerNumber",[](double n,double k){return MathFunctions::eulerNumber(n,k);}},
        {"bernoulliNumber",[](double n,double k){return MathFunctions::bernoulliNumber(n,k);}},
        {"Stirling1Number",[](double n,double k){return MathFunctions::Stirling1Number(n,k);}},
        {"Stirling2Number",[](double n,double k){return MathFunctions::Stirling2Number(n,k);}},
        {"worpitzkyNumber",[](double n,double k){return MathFunctions::worpitzkyNumber(n,k);}}
    };
    for(double bad:{inf,-inf,1e40}) {
        for(const auto& row:unary)expect(row.first,"int",[&]{row.second(bad);});
        for(const auto& row:binary) {
            expect(row.first,"int",[&]{row.second(bad,2.0);});
            expect(row.first,"int",[&]{row.second(2.0,bad);});
        }
        expect("harmonicNumber","int",[&]{MathFunctions::harmonicNumber(2.0,bad);});
        expect("eulerPolynomial","int",[&]{MathFunctions::eulerPolynomial(bad,2.0);});
        expect("binomCoeff","Long",[&]{MathFunctions::binomCoeff(2.0,bad);});
        expect("numberOfPermutations","Long",[&]{MathFunctions::numberOfPermutations(2.0,bad);});
    }
    // The fixed default-epsilon integer branch already makes this safe.
    check(MathFunctions::power(-2.0,1e-20)==1);
    expect("root","Long",[]{MathFunctions::root(1e40,2.0);});
    for(const auto& row:unary)check(Double::isNaN(row.second(nan)));
    for(const auto& row:binary) {
        check(Double::isNaN(row.second(nan,inf)));
        check(Double::isNaN(row.second(inf,nan)));
    }
    check(Double::isNaN(MathFunctions::harmonicNumber(nan,inf)));
    check(Double::isNaN(MathFunctions::harmonicNumber(2.0,nan)));
    check(Double::isNaN(MathFunctions::eulerPolynomial(inf,nan)));
    check(Double::isNaN(MathFunctions::eulerPolynomial(nan,2.0)));
    check(Double::isNaN(MathFunctions::binomCoeff(nan,inf)));
    check(Double::isNaN(MathFunctions::binomCoeff(2.0,nan)));
    check(Double::isNaN(MathFunctions::numberOfPermutations(nan,inf)));
    check(Double::isNaN(MathFunctions::numberOfPermutations(2.0,nan)));
    check(Double::isNaN(MathFunctions::root(inf,2.0)));
    check(Double::isNaN(MathFunctions::root(-inf,2.0)));
    check(Double::isNaN(MathFunctions::root(2.0,nan)));
    check(Double::isNaN(MathFunctions::power(nan,1e-20)));
    check(Double::isNaN(MathFunctions::power(-2.0,nan)));
    check(Double::isInfinite(MathFunctions::power(2.0,inf)));
    check(MathFunctions::power(2.0,-inf)==0);
    // Preserve the currently defined C++ rounding, including its known Java
    // discrepancy. This safety proposal does not silently change that policy.
    check(MathFunctions::factorial(2.5)==6);
    check(Double::isNaN(MathFunctions::factorial(-0.5)));
    check(MathFunctions::fibonacciNumber(5.0)==5);
    check(MathFunctions::root(3.0,-8.0)==-2);
    check(MathFunctions::power(-2.0,2.0)==4);
    check(Double::isNaN(MathFunctions::fibonacciNumber(-2147483648.0)));
    check(Double::isNaN(MathFunctions::fibonacciNumber(-2147483648.25)));
    check(Double::isNaN(MathFunctions::fibonacciNumber(2147483647.25)));
    check(Double::isNaN(MathFunctions::binomCoeff(2.0,-9223372036854775808.0)));
    const double belowUpper=std::nextafter(9223372036854775808.0,0.0);
    mXparser::cancelCurrentCalculation();
    check(Double::isNaN(MathFunctions::binomCoeff(2.0,belowUpper)));
    check(Double::isNaN(MathFunctions::numberOfPermutations(2.0,belowUpper)));
    mXparser::resetCancelCurrentCalculationFlag();
    std::weak_ptr<Expression> expressionObserver;
    std::weak_ptr<Argument> argumentObserver;
    {
        const auto argument=new_Argument("guardedValue",inf);
        const auto expression=new_Expression("Fib(guardedValue)",argument);
        expressionObserver=expression;argumentObserver=argument;
        check(expression->checkSyntax());
        check(Double::isNaN(expression->calculate()));
        check(expression->getErrorMessage()->find(UTF("Native MathFunctions.fibonacciNumber"))!=String::npos);
        argument->setArgumentValue(5);
        check(expression->calculate()==5);
    }
    check(expressionObserver.expired());check(argumentObserver.expired());
}

#include "NumericRuntimeChecks.hpp"
TEST_CASE("testNativeNumericRuntimeConversions", "[API][NativePreconditions]") {
    unsigned predicate=0;
    const auto count=numericRuntimeChecks([&](bool value){INFO("public numeric predicate " << ++predicate);CHECK(value);});
    CHECK(count>150);
}


TEST_CASE("testNativeMathNextUp", "[API][NativeMath]") {
    // Binary64 neighbors observed from the canonical JDK Math.nextUp.
    // NaN payload identity is not part of the contract; only NaN is required.
    struct Vector { std::uint64_t input; std::uint64_t expected; bool nan; };
    const Vector vectors[] = {
        {0x0000000000000000ULL, 0x0000000000000001ULL, false},
        {0x8000000000000000ULL, 0x0000000000000001ULL, false},
        {0x0000000000000001ULL, 0x0000000000000002ULL, false},
        {0x8000000000000001ULL, 0x8000000000000000ULL, false},
        {0x000fffffffffffffULL, 0x0010000000000000ULL, false},
        {0x800fffffffffffffULL, 0x800ffffffffffffeULL, false},
        {0x0010000000000000ULL, 0x0010000000000001ULL, false},
        {0x8010000000000000ULL, 0x800fffffffffffffULL, false},
        {0x3ff0000000000000ULL, 0x3ff0000000000001ULL, false},
        {0xbff0000000000000ULL, 0xbfefffffffffffffULL, false},
        {0x3fe0000000000000ULL, 0x3fe0000000000001ULL, false},
        {0xbfe0000000000000ULL, 0xbfdfffffffffffffULL, false},
        {0x3fffffffffffffffULL, 0x4000000000000000ULL, false},
        {0xbfffffffffffffffULL, 0xbffffffffffffffeULL, false},
        {0x4000000000000000ULL, 0x4000000000000001ULL, false},
        {0xc000000000000000ULL, 0xbfffffffffffffffULL, false},
        {0x7fefffffffffffffULL, 0x7ff0000000000000ULL, false},
        {0xffefffffffffffffULL, 0xffeffffffffffffeULL, false},
        {0x7ff0000000000000ULL, 0x7ff0000000000000ULL, false},
        {0xfff0000000000000ULL, 0xffefffffffffffffULL, false},
        {0x7ff8000000000000ULL, 0x7ff8000000000000ULL, true},
        {0xfff8000000000000ULL, 0xfff8000000000000ULL, true},
        {0x7ff8000000000123ULL, 0x7ff8000000000123ULL, true},
        {0xfff8000000000123ULL, 0xfff8000000000123ULL, true},
    };
    for (const auto& vector : vectors) {
        double input;
        std::memcpy(&input, &vector.input, sizeof(input));
        INFO("nextUp input bits " << std::hex << vector.input);
        const double actual = wrapper::Math::nextUp(input);
        if (vector.nan) CHECK(Double::isNaN(actual));
        else {
            std::uint64_t actualBits;
            std::memcpy(&actualBits, &actual, sizeof(actualBits));
            CHECK(actualBits == vector.expected);
        }
    }
}

TEST_CASE("testApi0375", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(375, "Function setFunction restores recursive self without duplicate registration");
    for (bool variadic : {false, true})
        for (bool suppliedSelf : {false, true})
            for (int overload = 0; overload < 3; ++overload) {
                auto function = new_Function("old(t)=t+1");
                std::weak_ptr<Function> weak = function;
                for (const std::string name : {"f", "g"}) {
                    const std::string definition = variadic
                        ? name + "(...)=if(par(1)>0,par(1)*" + name + "(par(1)-1),1)"
                        : name + "(t)=if(t>0,t*" + name + "(t-1),1)";
                    const StringPtr text = S(definition);
                    const String wide = *text;
                    if (overload == 0) {
                        if (suppliedSelf) function->setFunction<FunctionPtr&>(text, function);
                        else function->setFunction<>(text);
                    } else if (overload == 1) {
                        if (suppliedSelf) function->setFunction<FunctionPtr&>(wide, function);
                        else function->setFunction<>(wide);
                    } else {
                        const auto elements = new_List<PrimitiveElementPtr>();
                        if (suppliedSelf) elements->add(function);
                        function->setFunction(text, elements);
                    }
                    CHECK(function->getFunction(S(name)).get() == function.get());
                    REQUIRE(function->checkSyntax());
                    CHECK(function->calculate(5.0) == 120.0);
                    CHECK(function->calculate(3.0) == 6.0);
                }
                const StringPtr definition = S("h(t)=t+2");
                function->setFunction<>(definition);
                CHECK(function->getFunction(S("h")).get() == function.get());
                CHECK(function->calculate(5.0) == 7.0);
                function.reset();
                CHECK(weak.expired());
            }
    TestCommonTools::consolePrintTestApiEnd(true);
}


TEST_CASE("testApi0376", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(376, "Other numeral base conversion from int and double digit parameters");
    for (int base : {2, 3, 8, 10, 16, 36}) {
        const double expected = base * base + 1;
        CHECK(mXparser::convOthBase2Decimal(base, 1, 0, 1) == expected);
        CHECK(mXparser::convOthBase2Decimal(CAST_DOUBLE(base), 1.0, 0.0, 1.0) == expected);
        const auto ints = new_List<int>();
        const auto doubles = new_List<double>();
        for (int digit : {1, 0, 1}) {
            ints->add(digit);
            doubles->add(CAST_DOUBLE(digit));
        }
        CHECK(std::invoke(static_cast<double(*)(int, const ListPtr<int>&)>(&mXparser::convOthBase2Decimal), base, ints) == expected);
        CHECK(std::invoke(static_cast<double(*)(double, const ListPtr<double>&)>(&mXparser::convOthBase2Decimal), CAST_DOUBLE(base), doubles) == expected);
        CHECK(mXparser::convOthBase2Decimal<const ListPtr<double>&>(base, doubles) == expected);
        CHECK(mXparser::convOthBase2Decimal<const ListPtr<int>&>(CAST_DOUBLE(base), ints) == expected);
    }
    CHECK(mXparser::convOthBase2Decimal(16, 15, 10) == 250.0);
    CHECK(mXparser::convOthBase2Decimal(16.0, 15.0, 10.0) == 250.0);
    CHECK(mXparser::convOthBase2Decimal(10, 0, 1, 2, 3) == 123.0);
    CHECK(mXparser::convOthBase2Decimal(10.0, 0.0, 1.0, 2.0, 3.0) == 123.0);
    CHECK(mXparser::convOthBase2Decimal(1, 1, 1, 1) == 3.0);
    CHECK(mXparser::convOthBase2Decimal(1.0, 1.0, 1.0, 1.0) == 3.0);
    CHECK(mXparser::convOthBase2Decimal(1) == 0.0);
    CHECK(mXparser::convOthBase2Decimal(1.0) == 0.0);
    CHECK(mXparser::convOthBase2Decimal(2.9, 1.9, 0.2, 1.8) == 5.0);
    CHECK(Double::isNaN(mXparser::convOthBase2Decimal(2)));
    CHECK(Double::isNaN(mXparser::convOthBase2Decimal(2.0)));
    const ListPtr<int> nullInts = nullptr;
    const ListPtr<double> nullDoubles = nullptr;
    CHECK(Double::isNaN(std::invoke(static_cast<double(*)(int, const ListPtr<int>&)>(&mXparser::convOthBase2Decimal), 2, nullInts)));
    CHECK(Double::isNaN(std::invoke(static_cast<double(*)(double, const ListPtr<double>&)>(&mXparser::convOthBase2Decimal), 2.0, nullDoubles)));
    CHECK(Double::isNaN(mXparser::convOthBase2Decimal(2, 1, 2)));
    CHECK(Double::isNaN(mXparser::convOthBase2Decimal(2.0, 1.0, 2.0)));
    CHECK(Double::isNaN(mXparser::convOthBase2Decimal(1, 1, 0)));
    CHECK(Double::isNaN(mXparser::convOthBase2Decimal(1.0, 1.0, 0.0)));
    CHECK(Double::isNaN(mXparser::convOthBase2Decimal(0, 1)));
    CHECK(Double::isNaN(mXparser::convOthBase2Decimal(0.0, 1.0)));
    CHECK(Double::isNaN(mXparser::convOthBase2Decimal(2.0, Double::NaN)));
    // C++ packs can admit doubles even with the int base overload. Guard the
    // newly reachable undefined casts; Java/C# int arrays cannot represent these.
    for (double digit : {Double::NaN, Double::POSITIVE_INFINITY, Double::NEGATIVE_INFINITY,
                         CAST_DOUBLE(Integer::MAX_VALUE) + 1.0, CAST_DOUBLE(Integer::MIN_VALUE) - 1.0}) {
        CHECK(Double::isNaN(mXparser::convOthBase2Decimal(2, digit)));
    }
    CHECK(mXparser::convOthBase2Decimal(2, 1.9, 0.2, 1.8) == 5.0);
    TestCommonTools::consolePrintTestApiEnd(true);
}


TEST_CASE("testApi0377", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(377, "Native C++ string wrappers preserve text, nullable processor state and formatting exceptions");
    auto builder = new_StringBuilder();
    builder->append(UTF("ABβ🧮"));
    CHECK(*builder->toString() == String(UTF("ABβ🧮")));
    builder->clear();
    builder->append(UTF(""));
    CHECK(builder->length() == 0);
    CHECK_THROWS_AS(new_StringBuilder(StringPtr{}), std::invalid_argument);
    CHECK_THROWS_AS(builder->append(static_cast<const Char*>(nullptr)), std::invalid_argument);
    CHECK_THROWS_AS(builder->append(static_cast<const char*>(nullptr)), std::invalid_argument);
    const StringPtr nullText;
    const String wide = UTF("x");
    const std::string narrow = "y";
    VariadicProcessorString wideProcessor;
    wideProcessor.processArgs(nullText, wide);
    REQUIRE(wideProcessor.paramsString != nullptr);
    REQUIRE(wideProcessor.paramsString->size() == 2);
    CHECK(wideProcessor.paramsString->get(0) == nullptr);
    CHECK(*wideProcessor.paramsString->get(1) == wide);
    CHECK(wideProcessor.paramsStringNumberNull == 1);
    CHECK(wideProcessor.paramsStringNumberNotNull == 1);
    VariadicProcessorString narrowProcessor;
    narrowProcessor.processArgs(nullText, narrow);
    REQUIRE(narrowProcessor.paramsString != nullptr);
    CHECK(*narrowProcessor.paramsString->get(1) == String(UTF("y")));
    CHECK(narrowProcessor.paramsStringNumberNotNull == 1);
    VariadicProcessorString nullWideProcessor;
    const String* nullWide = nullptr;
    nullWideProcessor.processArgs(nullWide);
    CHECK(nullWideProcessor.paramsString == nullptr);
    CHECK(nullWideProcessor.paramsStringNumberNull == 1);
    VariadicProcessorString nullNarrowProcessor;
    const std::string* nullNarrow = nullptr;
    nullNarrowProcessor.processArgs(nullNarrow);
    CHECK(nullNarrowProcessor.paramsString == nullptr);
    CHECK(nullNarrowProcessor.paramsStringNumberNull == 1);
    CHECK_THROWS_AS(StringUtils::cleanForHtml(nullText), std::invalid_argument);
    CHECK_THROWS_AS(StringUtils::cleanForMarkdown(nullText), std::invalid_argument);
    CHECK_THROWS_AS(StringUtils::cleanForJson(nullText), std::invalid_argument);
    CHECK(*StringUtils::cleanForHtml(S("<&>")) == String(UTF("&lt;&amp;&gt;")));
    using Append = void(*)(const StringBuilderPtr&, const ListPtr<StringPtr>&);
    const Append appendParts = static_cast<Append>(&StringUtils::stringBuilderPartsAppend);
    const Append appendLines = static_cast<Append>(&StringUtils::stringBuilderLinesAppend);
    const ListPtr<StringPtr> noParts;
    const ListPtr<StringPtr> emptyParts = new_List<StringPtr>();
    const ListPtr<StringPtr> onePart = new_List<StringPtr>();
    onePart->add(S("x"));
    const StringBuilderPtr noBuilder;
    CHECK_THROWS_AS(appendParts(builder, noParts), std::invalid_argument);
    CHECK_THROWS_AS(appendLines(builder, noParts), std::invalid_argument);
    CHECK_NOTHROW(appendParts(noBuilder, emptyParts));
    CHECK_NOTHROW(appendLines(noBuilder, emptyParts));
    CHECK_THROWS_AS(appendParts(noBuilder, onePart), std::invalid_argument);
    CHECK_THROWS_AS(appendLines(noBuilder, onePart), std::invalid_argument);
    using Delimited = void(*)(const StringPtr&, const StringPtr&, const StringPtr&, bool, bool, bool, const StringBuilderPtr&, const ListPtr<StringPtr>&);
    const Delimited appendDelimited = static_cast<Delimited>(&StringUtils::stringBuilderPartsAppendDelimited);
    const StringPtr empty = S(UTF(""));
    CHECK_NOTHROW(appendDelimited(empty, empty, empty, false, false, false, noBuilder, emptyParts));
    CHECK_THROWS_AS(appendDelimited(empty, empty, empty, false, false, false, noBuilder, onePart), std::invalid_argument);
    using Row = void(*)(const StringPtr&, const StringPtr&, const StringPtr&, const StringPtr&, const StringPtr&, bool, bool, bool, const StringBuilderPtr&, const ListPtr<StringPtr>&);
    const Row appendRow = static_cast<Row>(&StringUtils::stringBuilderPartsAppendDelimitedRow);
    CHECK_NOTHROW(appendRow(empty, empty, empty, empty, empty, false, false, false, noBuilder, emptyParts));
    CHECK_THROWS_AS(appendRow(empty, empty, empty, S("["), empty, false, false, false, noBuilder, emptyParts), std::invalid_argument);
    CHECK_THROWS_AS(appendRow(empty, empty, empty, empty, S("]"), false, false, false, noBuilder, emptyParts), std::invalid_argument);
    builder->append(S("seed"));
    CHECK_THROWS_AS(appendRow(empty, empty, empty, S("["), S("]"), false, false, false, builder, noParts), std::invalid_argument);
    CHECK(*builder->toString() == String(UTF("seed[")));
    const ListPtr<StringPtr> mixed = new_List<StringPtr>();
    mixed->add(S("<&>"));
    mixed->add(nullptr);
    builder->clear();
    CHECK_THROWS_AS(appendDelimited(S("<p>"), S("</p>"), S("|"), true, false, false, builder, mixed), std::invalid_argument);
    CHECK(*builder->toString() == String(UTF("<p>&lt;&amp;&gt;</p>|<p>")));
    CHECK_THROWS_AS(StringUtils::stringBuilderPartsAppendMarkdownTableHead(false, builder, nullText), std::invalid_argument);
    TestCommonTools::consolePrintTestApiEnd(true);
}


TEST_CASE("testApi0378", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(378, "C++ JSON help rejects reached null labels and preserves empty filtered output");
    const auto resources = StringModel::getStringResources();
    const auto keywords = new_List<KeyWordPtr>();
    keywords->add(new_KeyWord(S("jsonNullLabel"), S("description"), 1, S("jsonNullLabel"), S("1.0"), Function1Arg::TYPE_ID));
    const StringPtr empty = S("");
    const StringPtr noMatch = S("key=___jsonNullLabelNoMatch_378___");
    const StringPtr caption = S("custom caption");
    const StringPtr original = expressionutils::ExpressionUtils::getHelpAsJson(keywords, false, empty, empty);
    CHECK(StringUtils::contains(original, S("jsonNullLabel")));
    const StringPtr filtered = expressionutils::ExpressionUtils::getHelpAsJson(keywords, false, noMatch, empty);
    StringPtr StringResources::* fields[] = {&StringResources::KEYWORD, &StringResources::TYPE,
        &StringResources::SYNTAX, &StringResources::SINCE, &StringResources::DESCRIPTION};
    for (const auto field : fields) {
        struct Restore {
            StringPtr& target;
            StringPtr saved;
            ~Restore() { target = saved; }
        } restore{resources.get()->*field, resources.get()->*field};
        resources.get()->*field = nullptr;
        CHECK_THROWS_AS(expressionutils::ExpressionUtils::getHelpAsJson(keywords, false, empty, empty), std::invalid_argument);
        CHECK(*expressionutils::ExpressionUtils::getHelpAsJson(keywords, false, noMatch, empty) == *filtered);
    }
    CHECK(*expressionutils::ExpressionUtils::getHelpAsJson(keywords, false, empty, empty) == *original);
    const StringPtr captionLabel = resources->CAPTION;
    resources->CAPTION = nullptr;
    CHECK_THROWS_AS(expressionutils::ExpressionUtils::getHelpAsJson(keywords, true, empty, caption), std::invalid_argument);
    CHECK(*expressionutils::ExpressionUtils::getHelpAsJson(keywords, false, empty, caption) == *original);
    resources->CAPTION = captionLabel;
    const StringPtr allHelp = resources->ALL_HELP_CONTENT;
    resources->ALL_HELP_CONTENT = nullptr;
    CHECK_THROWS_AS(expressionutils::ExpressionUtils::getHelpAsJson(keywords, true, empty, empty), std::invalid_argument);
    CHECK_NOTHROW(expressionutils::ExpressionUtils::getHelpAsJson(keywords, true, empty, caption));
    CHECK(*expressionutils::ExpressionUtils::getHelpAsJson(keywords, false, empty, empty) == *original);
    resources->ALL_HELP_CONTENT = allHelp;
    CHECK(*expressionutils::ExpressionUtils::getHelpAsJson(keywords, false, empty, empty) == *original);
    TestCommonTools::consolePrintTestApiEnd(true);
}


TEST_CASE("testApi0379", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(379, "C++ recursive argument wide-value definition factory matches StringPtr with empty and nonempty packs");
    const String definition = UTF("wideRecursive(n)=n+1");
    const auto wide = new_RecursiveArgument(definition);
    const auto pointer = new_RecursiveArgument(S(definition));
    CHECK(wide->checkSyntax());
    CHECK(pointer->checkSyntax());
    CHECK(*wide->getArgumentName() == *pointer->getArgumentName());
    CHECK(wide->getArgumentValue(4.0) == 5.0);
    CHECK(wide->getArgumentValue(4.0) == pointer->getArgumentValue(4.0));
    const auto argument = new_Argument("wideDependency", 2.0);
    const String dependentDefinition = UTF("wideDependent(n)=n+wideDependency");
    const auto wideDependent = new_RecursiveArgument(dependentDefinition, argument);
    const auto pointerDependent = new_RecursiveArgument(S(dependentDefinition), argument);
    CHECK(wideDependent->checkSyntax());
    CHECK(pointerDependent->checkSyntax());
    CHECK(wideDependent->getArgumentValue(4.0) == 6.0);
    CHECK(wideDependent->getArgumentValue(4.0) == pointerDependent->getArgumentValue(4.0));
    TestCommonTools::consolePrintTestApiEnd(true);
}


TEST_CASE("testApi0380", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(380, "C++ null definition lists raise an exception without dereferencing a null list");
    const auto expression = new_Expression("2+3");
    const ListPtr<PrimitiveElementPtr> nullElements;
    CHECK_THROWS_AS(expression->addDefinitions(nullElements), std::invalid_argument);
    CHECK(expression->calculate() == 5.0);
    const PrimitiveElementPtr nullElement;
    CHECK_NOTHROW(expression->addDefinitions(nullElement));
    CHECK(expression->calculate() == 5.0);
    const auto elements = new_List<PrimitiveElementPtr>();
    const auto dependency = new_Argument("definitionListDependency", 2.0);
    elements->add(dependency);
    elements->add(nullptr);
    const auto dependent = new_Expression("definitionListDependency+1", elements);
    CHECK(dependent->calculate() == 3.0);
    dependency->setArgumentValue(7.0);
    CHECK(dependent->calculate() == 8.0);
    {
        struct Restore {
            ListPtr<PrimitiveElementPtr> saved;
            ~Restore() { VariadicProcessor::paramsPrimitiveElementEmpty = saved; }
        } restore{VariadicProcessor::paramsPrimitiveElementEmpty};
        VariadicProcessor::paramsPrimitiveElementEmpty = nullptr;
        const String definition = UTF("definitionListRecursive(n)=n+1");
        CHECK_THROWS_AS(new_RecursiveArgument(definition), std::invalid_argument);
        CHECK_THROWS_AS(new_RecursiveArgument(S(definition)), std::invalid_argument);
    }
    CHECK(expression->calculate() == 5.0);
    TestCommonTools::consolePrintTestApiEnd(true);
}


TEST_CASE("testApi0381", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(381, "C++ character stream buffer cleanup is repeatable");
    auto stream = syntaxchecker::new_CharStream(S("ab"));
    const std::weak_ptr<syntaxchecker::CharStream> observer = stream;
    CHECK(stream->BeginToken() == UTF('a'));
    CHECK_NOTHROW(stream->DeleteBuffers());
    CHECK_NOTHROW(stream->DeleteBuffers());
    CHECK_NOTHROW(stream->ReInit(UTF("xy"), 1, 1));
    CHECK(stream->BeginToken() == UTF('x'));
    CHECK(stream->readChar() == UTF('y'));
    CHECK(stream->endOfInput());
    CHECK_NOTHROW(stream->DeleteBuffers());
    CHECK_NOTHROW(stream.reset());
    CHECK(observer.expired());
    TestCommonTools::consolePrintTestApiEnd(true);
}


TEST_CASE("testApi0382", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(382, "C++ syntax checker cleanup is repeatable");
    const auto stream = syntaxchecker::new_CharStream(S("1+2"));
    auto manager = syntaxchecker::new_SyntaxCheckerTokenManager(stream);
    auto parser = syntaxchecker::new_SyntaxChecker(manager);
    const std::weak_ptr<syntaxchecker::SyntaxChecker> observer = parser;
    CHECK(parser->checkSyntax());
    CHECK_NOTHROW(parser->clear());
    CHECK_NOTHROW(parser->clear());
    CHECK_NOTHROW(stream->ReInit(UTF("2+3"), 1, 1));
    CHECK_NOTHROW(manager->ReInit(stream.get()));
    CHECK_NOTHROW(parser->ReInit(manager.get()));
    CHECK(parser->checkSyntax());
    CHECK_NOTHROW(parser->clear());
    CHECK_NOTHROW(parser.reset());
    CHECK(observer.expired());
    TestCommonTools::consolePrintTestApiEnd(true);
}


TEST_CASE("testApi0383", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(383, "C++ Unicode syntax diagnostics preserve valid UTF-8");
    for (int code = 0x80; code < 0xff; code++) {
        const String text(1, static_cast<Char>(code));
        const auto escaped = syntaxchecker::addUnicodeEscapes(text);
        CHECK_NOTHROW(UTF8toUTF16(escaped));
        CHECK(escaped.size() == 6);
        for (const unsigned char byte : escaped) CHECK(byte < 0x80);
    }
    CHECK(syntaxchecker::addUnicodeEscapes(UTF("\u00ac")) == "\\u00ac");
    const auto stream = syntaxchecker::new_CharStream(S(UTF("\u00ac")));
    auto manager = syntaxchecker::new_SyntaxCheckerTokenManager(stream);
    const auto parser = syntaxchecker::new_SyntaxChecker(manager);
    CHECK_FALSE(parser->checkSyntax());
    CHECK(parser->errorMessages->size() > 0);
    TestCommonTools::consolePrintTestApiEnd(true);
}


TEST_CASE("testApi0384", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(384, "C++ character stream positional adjustment follows Java increment order");
    const String inputs[] = {UTF("abcdefgh"), UTF("a\nbc\nxyz"), UTF("ab\r\ncdef")};
    const int expected[3][8][2] = {
        {{11, 20}, {10, 21}, {10, 22}, {10, 23}, {10, 24}, {10, 25}, {10, 26}, {10, 27}},
        {{13, 20}, {10, 21}, {11, 1}, {11, 2}, {11, 3}, {12, 1}, {12, 2}, {12, 3}},
        {{12, 20}, {10, 21}, {10, 22}, {10, 23}, {11, 1}, {11, 2}, {11, 3}, {11, 4}}
    };
    for (int mode = 0; mode < 3; mode++) {
        syntaxchecker::CharStream stream(inputs[mode], 1, 1, 8);
        CHECK(stream.BeginToken() == inputs[mode][0]);
        for (int index = 1; index < 8; index++) CHECK(stream.readChar() == inputs[mode][index]);
        // Initialize every position cell before adjustment can wrap the ring.
        CHECK_NOTHROW(stream.adjustBeginLineColumn(10, 20));
        stream.backup(8);
        for (int index = 0; index < 8; index++) {
            CHECK(stream.readChar() == inputs[mode][index]);
            CHECK(stream.getEndLine() == expected[mode][index][0]);
            CHECK(stream.getEndColumn() == expected[mode][index][1]);
        }
    }
    TestCommonTools::consolePrintTestApiEnd(true);
}


#include "org/mariuszgromada/math/mxparser/syntaxchecker/ParseException.hpp"

TEST_CASE("testApi0385", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(385, "C++ character stream initializes newly allocated position cells");
    class PositionStream : public syntaxchecker::CharStream {
    public:
        using syntaxchecker::CharStream::CharStream;
        int capacity() const { return bufsize; }
        int position() const { return bufpos; }
        bool zeroPositionsFrom(int first) const {
            for (int i = first; i < bufsize; i++)
                if (bufline[i] != 0 || bufcolumn[i] != 0) return false;
            return true;
        }
    };
    PositionStream partial(String(UTF("abcdefgh")), 1, 1, 8);
    CHECK(partial.zeroPositionsFrom(0));
    CHECK(partial.BeginToken() == UTF('a'));
    CHECK(partial.readChar() == UTF('b'));
    CHECK(partial.readChar() == UTF('c'));
    CHECK_NOTHROW(partial.adjustBeginLineColumn(10, 20));
    CHECK(partial.getBeginLine() == 10);
    CHECK(partial.getBeginColumn() == 20);
    CHECK(partial.getEndLine() == 10);
    CHECK(partial.getEndColumn() == 22);
    partial.ReInit(UTF("xy"), 2, 3, 8);
    CHECK(partial.zeroPositionsFrom(0));
    CHECK(partial.BeginToken() == UTF('x'));
    CHECK(partial.getEndLine() == 2);
    CHECK(partial.getEndColumn() == 3);

    const String input(10000, UTF('x'));
    PositionStream expanded(input, 1, 1, 8);
    CHECK(expanded.BeginToken() == UTF('x'));
    for (int i = 1; i <= 8; i++) CHECK(expanded.readChar() == UTF('x'));
    CHECK(expanded.capacity() == 2056);
    CHECK(expanded.position() == 8);
    CHECK(expanded.getEndColumn() == 9);
    CHECK(expanded.zeroPositionsFrom(9));

    PositionStream wrapped(input, 1, 1, 4096);
    for (int i = 0; i < 3000; i++) CHECK(wrapped.BeginToken() == UTF('x'));
    CHECK(wrapped.BeginToken() == UTF('x'));
    for (int i = 1; i <= 4096; i++) CHECK(wrapped.readChar() == UTF('x'));
    CHECK(wrapped.capacity() == 6144);
    CHECK(wrapped.position() == 4096);
    CHECK(wrapped.getBeginColumn() == 3001);
    CHECK(wrapped.getEndColumn() == 7097);
    CHECK(wrapped.zeroPositionsFrom(4097));
    TestCommonTools::consolePrintTestApiEnd(true);
}


TEST_CASE("testApi0386", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(386, "C++ syntax checker reinitialization releases saved lookahead calls");
    const auto stream = syntaxchecker::new_CharStream(S("1+2"));
    auto manager = syntaxchecker::new_SyntaxCheckerTokenManager(stream);
    const auto parser = syntaxchecker::new_SyntaxChecker(manager);
    for (int iteration = 0; iteration < 8; iteration++) {
        stream->ReInit(UTF("1+2"), 1, 1);
        manager->ReInit(stream.get());
        parser->ReInit(manager.get());
        CHECK_NOTHROW(parser->jj_2_1(2));
        for (int repetition = 0; repetition < 3; repetition++) {
            parser->jj_save(0, 3);
            parser->jj_save(153, 3);
            parser->jj_save(154, 3);
        }
        stream->ReInit(UTF("3+4"), 1, 1);
        manager->ReInit(stream.get());
        CHECK_NOTHROW(parser->ReInit(manager.get()));
        CHECK(parser->token->kind == 0);
        CHECK_NOTHROW(parser->jj_rescan_token());
        CHECK(parser->checkSyntax());
    }
    TestCommonTools::consolePrintTestApiEnd(true);
}


TEST_CASE("testApi0387", "[API]") {
    TestCommonTools::testApiSettingsInit();
    TestCommonTools::consolePrintTestApiStart(387, "C++ parse exception constructor safely preserves borrowed native inputs");
    int row[] = {1, 0};
    int *expected[] = {row};
    syntaxchecker::JJString images[] = {UTF("<EOF>"), UTF("token")};
    syntaxchecker::JavaCCToken current(0, UTF("current")), unexpected(1, UTF("unexpected"));
    current.next = &unexpected;
    for (int iteration = 0; iteration < 32; iteration++) {
        const syntaxchecker::ParseException exception(current, expected, images);
        CHECK(exception.currentToken.kind == 0);
        CHECK(exception.currentToken.image == UTF("current"));
        CHECK(exception.currentToken.next == &unexpected);
        CHECK(exception.expectedTokenSequences == expected);
        CHECK(exception.tokenImage == images);
        CHECK(exception.expectedTokenSequences[0][0] == 1);
        CHECK(exception.tokenImage[1] == UTF("token"));
    }
    CHECK(current.next == &unexpected);
    CHECK(unexpected.image == UTF("unexpected"));
    CHECK(row[0] == 1);
    TestCommonTools::consolePrintTestApiEnd(true);
}

#include "org/mariuszgromada/math/mxparser/LaTeXSupport.hpp"
#include <future>

namespace {
using latex_detail::Text; using latex_detail::TextBuilder; using latex_detail::Map; using latex_detail::Set; using latex_detail::Stack; using latex_detail::Pattern;
using IllegalStateException = std::logic_error;
using IllegalArgumentException = std::invalid_argument;
using UnsupportedOperationException = std::logic_error;
const String& textArg(const Text& text) { return text.str(); }
Text latexMessage(const std::exception& error) { return Text(SC(error.what())); }
Text charText(Char c) { return String(1,c); }
Text textFromChars(const std::vector<Char>& chars) { return String(chars.begin(),chars.end()); }
void fillChars(std::vector<Char>& chars, Char c) { std::fill(chars.begin(),chars.end(),c); }
std::string latexContext(const Text& text) {
    std::string context;
    const char* hex = "0123456789abcdef";
    for (Char c : text.str()) {
        if (c >= 32 && c <= 126) context.push_back(static_cast<char>(c));
        else { context += "\\u"; for (int shift = 12; shift >= 0; shift -= 4) context.push_back(hex[(static_cast<unsigned>(c) >> shift) & 15]); }
    }
    return context;
}
template<class E, class A> void latexEquals(const E& expected, const A& actual, Text context = Text(UTF(""))) { INFO(latexContext(context)); CHECK(expected == actual); }
inline void latexEquals(double expected, double actual, double delta, Text context = Text(UTF(""))) { INFO(latexContext(context)); CHECK((expected == actual || std::isnan(expected) && std::isnan(actual) || std::abs(expected - actual) <= delta)); }
void latexTrue(bool value, Text context = Text(UTF(""))) { INFO(latexContext(context)); CHECK(value); }
void latexFalse(bool value, Text context = Text(UTF(""))) { INFO(latexContext(context)); CHECK_FALSE(value); }
template<class E, class F> E latexThrows(F action, Text context = Text(UTF(""))) { INFO(latexContext(context)); try { action(); } catch (const E& error) { return error; } FAIL("Expected exception"); throw std::logic_error("Expected exception"); }
Text kindName(LaTeXParser::Kind kind) {
    static const std::vector<Text> names = {UTF("NUMBER"),UTF("SYMBOL"),UTF("POSITIVE"),UTF("NEGATIVE"),UTF("ADD"),UTF("SUBTRACT"),UTF("MULTIPLY"),UTF("DIVIDE"),UTF("POWER"),UTF("FACTORIAL"),UTF("PERCENT"),UTF("FLOOR"),UTF("REMAINDER")};
    return names.at(CAST_INT(kind));
}
Text styleName(LaTeXParser::SymbolStyle style) { static const std::vector<Text> names = {UTF("DEFAULT"),UTF("ITALIC"),UTF("UPRIGHT")}; return names.at(CAST_INT(style)); }
struct LatexRandomRestore { ~LatexRandomRestore() { mXparser::resetCancelCurrentCalculationFlag(); mXparser::setRandomGenerator(new_Random()); } };
    // LaTeX API IDs 0388-0422 are reserved for matching Java/C#/C++ scenarios.

    static Text latexCalculusExpected(int id, int count);
    static ListPtr<KeyWordPtr> latexKeywords() { return mXparser::getKeyWords(); }

    static ExpressionPtr latexExpression(Text source) {
        ExpressionPtr e = new_Expression(textArg(source));
        if (source.equals(Text(UTF("a(b+c)")))) e->addArguments(new_Argument(textArg(Text(UTF("a")))));
        if (source.equals(Text(UTF("[my_unit]")))) e->addConstants(new_Constant(textArg(Text(UTF("[my_unit]"))), 1));
        return e;
    }
    static Text latexExport(Text source) {
        Text text = latexExpression(source)->getExpressionAsLaTeX();
        return text;
    }
    static Long latexTokenKey(int type, int id) { return ((Long)type * 4294967296LL) | (id & 0xffffffffLL); }
    TEST_CASE("testApi0388", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: public token inventory and equivalent square root rules"));
        TestCommonTools::consolePrintTestApiStart(388, UTF16toUTF8(testDescr.str()));
        ListPtr<KeyWordPtr> keywords = latexKeywords();
        Set<Long> actual;
        for (KeyWordPtr kw : *keywords) actual.add(latexTokenKey(kw->wordTypeId, kw->wordId));
        // The two additional UDF-context keys are not in the public ordinary-expression vocabulary.
        latexEquals(527, keywords->size());
        latexEquals(412, actual.size());
        latexEquals(latexExport(Text(UTF("sqrt(x+1)"))), latexExport(Text(UTF("√(x+1)"))));
        latexEquals(Text(UTF("\\sqrt[{3}]{x}")), latexExport(Text(UTF("root(3,x)"))));
        latexEquals(Text(UTF("\\sqrt[3]{x}")), latexExport(Text(UTF("∛x"))));
        latexEquals(Text(UTF("\\sqrt[{4}]{x}")), latexExport(Text(UTF("root(4,x)"))));
        latexEquals(Text(UTF("\\sqrt[4]{x}")), latexExport(Text(UTF("∜x"))));
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    static Text latexCalculusArguments(int id, int count) {
        if (id == CalculusOperator::INT_ID || id == CalculusOperator::SOLVE_ID) return Text(UTF("f(x),x,a,b"));
        if (id == CalculusOperator::DERN_ID) return count == 3 ? Text(UTF("f(x),n,x")) : Text(UTF("f(x),n,x,eps,m"));
        if (id == CalculusOperator::DER_ID || id == CalculusOperator::DER_LEFT_ID || id == CalculusOperator::DER_RIGHT_ID)
            return count == 2 ? Text(UTF("f(x),x")) : count == 3 ? Text(UTF("f(x),x,p")) : count == 4 ? Text(UTF("f(x),x,eps,m")) : Text(UTF("f(x),x,p,eps,m"));
        if (id == CalculusOperator::FORW_DIFF_ID || id == CalculusOperator::BACKW_DIFF_ID) return count == 2 ? Text(UTF("f(x),x")) : Text(UTF("f(x),x,h"));
        return count == 4 ? Text(UTF("i,a,b,f(i)")) : Text(UTF("i,a,b,f(i),h"));
    }
    static std::vector<int> latexCalculusArities(int id) {
        if (id == CalculusOperator::INT_ID || id == CalculusOperator::SOLVE_ID) return std::vector<int>{4};
        if (id == CalculusOperator::DERN_ID) return std::vector<int>{3, 5};
        if (id == CalculusOperator::DER_ID || id == CalculusOperator::DER_LEFT_ID || id == CalculusOperator::DER_RIGHT_ID) return std::vector<int>{2, 3, 4, 5};
        if (id == CalculusOperator::FORW_DIFF_ID || id == CalculusOperator::BACKW_DIFF_ID) return std::vector<int>{2, 3};
        return std::vector<int>{4, 5};
    }
    static Text latexAliasInput(KeyWordPtr kw) {
        int t = kw->wordTypeId, id = kw->wordId;
        Text w = Text(kw->wordString);
        if (t == ParserSymbol::NUMBER_TYPE_ID) return Text(UTF("2.10"));
        if (t == ParserSymbol::TYPE_ID) return id == ParserSymbol::BLANK_ID ? Text(UTF(" ")) : id == ParserSymbol::COMMA_ID ? Text(UTF("f(a")) + w + Text(UTF("b)")) : Text(UTF("(a)"));
        if (t == Function1Arg::TYPE_ID) return w + Text(UTF("(x)"));
        if (t == Function2Arg::TYPE_ID) return w + Text(UTF("(a,b)"));
        if (t == Function3Arg::TYPE_ID) return w + Text(UTF("(a,b,c)"));
        if (t == FunctionVariadic::TYPE_ID) return w + (id == FunctionVariadic::IFF_ID ? Text(UTF("(a,b,c,x)")) : Text(UTF("(a,b,c)")));
        if (t == CalculusOperator::TYPE_ID) return w + Text(UTF("(")) + latexCalculusArguments(id, latexCalculusArities(id)[0]) + Text(UTF(")"));
        TokenPtr token = new_Token(); token->tokenTypeId = t; token->tokenId = id;
        if (Token::isUnaryLeftOperator(token)) return w + Text(UTF("a"));
        if (Token::isUnaryRightOperator(token)) return Text(UTF("a")) + w;
        if (Token::isBinaryOperator(token)) return Text(UTF("a")) + w + Text(UTF("b"));
        return w;
    }
    TEST_CASE("testApi0389", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: builtin aliases and calculus arity variants"));
        TestCommonTools::consolePrintTestApiStart(389, UTF16toUTF8(testDescr.str()));
        Map<Long, Text> canonical = {};
        const ListPtr<KeyWordPtr> keywords = latexKeywords();
        for (KeyWordPtr kw : *keywords) {
            Long key = latexTokenKey(kw->wordTypeId, kw->wordId);
            Text input = latexAliasInput(kw);
            canonical.putIfAbsent(key, input);
            Text reference = canonical.get(key);
            Text scenario = Text(UTF("Alias ")) + kw->wordTypeId + Text(UTF(":")) + kw->wordId + Text(UTF(" ")) + Text(kw->wordString);
            Text actual = latexExport(input), expected = latexExport(reference);
            latexEquals(expected, actual, scenario);
            latexFalse(actual.contains(Text(UTF("@+"))), scenario);
            latexFalse(actual.contains(Text(UTF("@-"))), scenario);
            if (kw->wordTypeId == CalculusOperator::TYPE_ID) {
                for (int count : latexCalculusArities(kw->wordId)) {
                    Text variant = Text(kw->wordString) + Text(UTF("(")) + latexCalculusArguments(kw->wordId, count) + Text(UTF(")"));
                    latexEquals(latexCalculusExpected(kw->wordId, count), latexExport(variant), Text(UTF("Calculus arity ")) + variant);
                }
            }
        }
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    static Text latexCalculusExpected(int id, int count) {
        if (id == CalculusOperator::INT_ID) return Text(UTF("\\int_a^bf(x)\\,\\mathrm{d}x"));
        if (id == CalculusOperator::SOLVE_ID) return Text(UTF("\\operatorname{root}_{x\\in[a,b]}(f(x)=0)"));
        if (id == CalculusOperator::DERN_ID) return Text(UTF("\\frac{\\mathrm d^{n}}{\\mathrm d x^{n}}[f(x)]"));
        if (id == CalculusOperator::DER_ID || id == CalculusOperator::DER_LEFT_ID || id == CalculusOperator::DER_RIGHT_ID) {
            Text derivative = id == CalculusOperator::DER_ID ? Text(UTF("\\frac{\\mathrm d}{\\mathrm d x}[f(x)]"))
                    : Text(UTF("D_x^")) + (id == CalculusOperator::DER_LEFT_ID ? Text(UTF("-")) : Text(UTF("+"))) + Text(UTF("[f(x)]"));
            return count == 3 || count == 5 ? Text(UTF("\\left.")) + derivative + Text(UTF("\\right\\rvert_{x=p}")) : derivative;
        }
        if (id == CalculusOperator::FORW_DIFF_ID || id == CalculusOperator::BACKW_DIFF_ID)
            return (id == CalculusOperator::FORW_DIFF_ID ? Text(UTF("\\Delta")) : Text(UTF("\\nabla"))) + Text(UTF("_{x,")) + (count == 2 ? Text(UTF("1")) : Text(UTF("h"))) + Text(UTF("}[f(x)]"));
        Text range = count == 4 ? Text(UTF("_{i=a}^{b}")) : Text(UTF("_{\\substack{i=a+k\\cdot h\\\\k\\in\\mathbb Z,\\;0\\le k\\le\\frac{b-a}{h}}}"));
        if (id == CalculusOperator::SUM_ID) return Text(UTF("\\sum")) + range + Text(UTF("f(i)"));
        if (id == CalculusOperator::PROD_ID) return Text(UTF("\\prod")) + range + Text(UTF("f(i)"));
        if (id == CalculusOperator::MIN_ID) return Text(UTF("\\min")) + range + Text(UTF("f(i)"));
        if (id == CalculusOperator::MAX_ID) return Text(UTF("\\max")) + range + Text(UTF("f(i)"));
        Text statistic = id == CalculusOperator::AVG_ID ? Text(UTF("\\operatorname{mean}")) : id == CalculusOperator::VAR_ID ? Text(UTF("s^2")) : Text(UTF("s"));
        return statistic + Text(UTF("\\left((f(i))")) + range + Text(UTF("\\right)"));
    }
    static const std::vector<std::vector<Text>> LATEX_REFERENCE = {
        {Text(UTF("(a+b)/c")), Text(UTF("\\frac{a+b}{c}"))},
        {Text(UTF("a/(b+c)")), Text(UTF("\\frac{a}{b+c}"))},
        {Text(UTF("a*b/c")), Text(UTF("\\frac{a\\cdot b}{c}"))},
        {Text(UTF("a/b*c")), Text(UTF("\\frac{a}{b}\\cdot c"))},
        {Text(UTF("a/(b*c)")), Text(UTF("\\frac{a}{b\\cdot c}"))},
        {Text(UTF("a/b^c")), Text(UTF("\\frac{a}{b^{c}}"))},
        {Text(UTF("a/(b/c)")), Text(UTF("\\frac{a}{\\frac{b}{c}}"))},
        {Text(UTF("(a/b)/c")), Text(UTF("\\frac{\\frac{a}{b}}{c}"))},
        {Text(UTF("a^b^c")), Text(UTF("a^{b^{c}}"))},
        {Text(UTF("(a^b)^c")), Text(UTF("(a^{b})^{c}"))},
        {Text(UTF("-a^2")), Text(UTF("-a^{2}"))},
        {Text(UTF("(-a)^2")), Text(UTF("(-a)^{2}"))},
        {Text(UTF("2x^2")), Text(UTF("2x^{2}"))},
        {Text(UTF("a(b+c)")), Text(UTF("a\\cdot(b+c)"))},
        {Text(UTF("sin(x)")), Text(UTF("\\sin x"))},
        {Text(UTF("(sin(x))^2")), Text(UTF("\\sin^{2}x"))},
        {Text(UTF("(sin(x+2))^2")), Text(UTF("\\sin^{2}(x+2)"))},
        {Text(UTF("sin(x)^n")), Text(UTF("\\sin^{n}x"))},
        {Text(UTF("sin(x^2)")), Text(UTF("\\sin(x^{2})"))},
        {Text(UTF("sin(x^2)^3")), Text(UTF("\\sin^{3}(x^{2})"))},
        {Text(UTF("((sin((x))))^2")), Text(UTF("\\sin^{2}x"))},
        {Text(UTF("sin(cos(x)^2)^3")), Text(UTF("\\sin^{3}(\\cos^{2}x)"))},
        {Text(UTF("sin(2*x)")), Text(UTF("\\sin 2x"))},
        {Text(UTF("sin(2*x)+y")), Text(UTF("\\sin 2x+y"))},
        {Text(UTF("sin(2*x)*y")), Text(UTF("\\sin(2x)\\cdot y"))},
        {Text(UTF("sin(x)/cos(x)^2")), Text(UTF("\\frac{\\sin x}{\\cos^{2}x}"))},
        {Text(UTF("sin(x/y)")), Text(UTF("\\sin\\left(\\frac{x}{y}\\right)"))},
        {Text(UTF("sin(x)*cos(y)")), Text(UTF("\\sin(x)\\cdot\\cos(y)"))},
        {Text(UTF("-sin(x)^2")), Text(UTF("-\\sin^{2}x"))},
        {Text(UTF("(-sin(x))^2")), Text(UTF("(-\\sin x)^{2}"))},
        {Text(UTF("sin(x)^(-1)")), Text(UTF("(\\sin x)^{-1}"))},
        {Text(UTF("sin(x)^(-n)")), Text(UTF("(\\sin x)^{-n}"))},
        {Text(UTF("sin(x)^(n+1)")), Text(UTF("(\\sin x)^{n+1}"))},
        {Text(UTF("sin(x)^2^3")), Text(UTF("(\\sin x)^{2^{3}}"))},
        {Text(UTF("(sin(x)^2)^3")), Text(UTF("(\\sin^{2}x)^{3}"))},
        {Text(UTF("asin(x)")), Text(UTF("\\arcsin x"))},
        {Text(UTF("asin(x)^2")), Text(UTF("(\\arcsin x)^{2}"))},
        {Text(UTF("ctg(x)^2")), Text(UTF("\\cot^{2}x"))},
        {Text(UTF("tgh(x)^3")), Text(UTF("\\tanh^{3}x"))},
        {Text(UTF("cosech(x)^2")), Text(UTF("\\operatorname{csch}^{2}x"))},
        {Text(UTF("sin(x+2)")), Text(UTF("\\sin(x+2)"))},
        {Text(UTF("sin(x)^2+cos(x)^2")), Text(UTF("\\sin^{2}x+\\cos^{2}x"))},
        {Text(UTF("sin(x)*y")), Text(UTF("\\sin(x)\\cdot y"))},
        {Text(UTF("sqrt(x^2+y^2)")), Text(UTF("\\sqrt{x^{2}+y^{2}}"))},
        {Text(UTF("sqrt(x+1)")), Text(UTF("\\sqrt{x+1}"))},
        {Text(UTF("√(x+1)")), Text(UTF("\\sqrt{x+1}"))},
        {Text(UTF("root(3,x+y)")), Text(UTF("\\sqrt[{3}]{x+y}"))},
        {Text(UTF("abs(x-2)")), Text(UTF("\\left\\lvert x-2\\right\\rvert"))},
        {Text(UTF("log(2,x+y)")), Text(UTF("\\log_{2}(x+y)"))},
        {Text(UTF("mod(-5,3)")), Text(UTF("\\operatorname{rem}(-5,3)"))},
        {Text(UTF("C(n,k)")), Text(UTF("\\binom{n}{k}"))},
        {Text(UTF("Bern(2,n)")), Text(UTF("B_2(n)"))},
        {Text(UTF("Stirl1(n,k)")), Text(UTF("\\left[\\genfrac{}{}{0pt}{}{n}{k}\\right]"))},
        {Text(UTF("EulerPol(m,x)")), Text(UTF("E_m(x)"))},
        {Text(UTF("Gamma(0)")), Text(UTF("\\Gamma(0)"))},
        {Text(UTF("logGamma(x)")), Text(UTF("\\ln\\left\\lvert\\Gamma(x)\\right\\rvert"))},
        {Text(UTF("LambW1(z)")), Text(UTF("W_{-1}(z)"))},
        {Text(UTF("GammaRegU(s,x)")), Text(UTF("Q(s,x)"))},
        {Text(UTF("BetaInc(x,a,b)")), Text(UTF("B_x(a,b)"))},
        {Text(UTF("BetaI(x,a,b)")), Text(UTF("I_x(a,b)"))},
        {Text(UTF("sum(i,1,5,i^2)")), Text(UTF("\\sum_{i=1}^{5}i^{2}"))},
        {Text(UTF("prod(i,5,1,f(i),-2)")), Text(UTF("\\prod_{\\substack{i=5-2k\\\\k\\in\\mathbb Z_{\\ge0},\\,i\\ge1}}f(i)"))},
        {Text(UTF("int(sin(x),x,a,b)")), Text(UTF("\\int_a^b\\sin(x)\\,\\mathrm{d}x"))},
        {Text(UTF("der-(f(x),x,p)")), Text(UTF("\\left.D_x^-[f(x)]\\right\\rvert_{x=p}"))},
        {Text(UTF("der(f(x),x,p,eps,m)")), Text(UTF("\\left.\\frac{\\mathrm d}{\\mathrm d x}[f(x)]\\right\\rvert_{x=p}"))},
        {Text(UTF("diff(f(x),x,h)")), Text(UTF("\\Delta_{x,h}[f(x)]"))},
        {Text(UTF("solve(f(x),x,a,b)")), Text(UTF("\\operatorname{root}_{x\\in[a,b]}(f(x)=0)"))},
        {Text(UTF("if(x,1,-1)")), Text(UTF("\\begin{cases}1&\\text{if }x\\ne0\\\\-1&\\text{otherwise}\\end{cases}"))},
        {Text(UTF("iff(x<0,-1,x>0,1)")), Text(UTF("\\begin{cases}-1&\\text{if }x<0\\\\1&\\text{else if }x>0\\\\\\text{undefined}&\\text{otherwise}\\end{cases}"))},
        {Text(UTF("ConFrac(a,b,c)")), Text(UTF("a+\\frac{1}{b+\\frac{1}{c}}"))},
        {Text(UTF("ConPol(a,b,c)")), Text(UTF("K_{3}(a,b,c)"))},
        {Text(UTF("mean(a,b,c)")), Text(UTF("\\frac{a+b+c}{3}"))},
        {Text(UTF("var(a,b,c)")), Text(UTF("s^2(a,b,c)"))},
        {Text(UTF("pNor(x,mu,sigma)")), Text(UTF("f_{\\mathcal N(\\mathit{mu},\\mathit{sigma}^{2})}(x)"))},
        {Text(UTF("qStud(p,v)")), Text(UTF("Q_{t_v}(p)"))},
        {Text(UTF("rList(1,1,2)")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathrm{list}}(1,1,2))"))},
        {Text(UTF("[Int3]")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{3},10^{3}])"))},
        {Text(UTF("xor(a,b,c)")), Text(UTF("\\operatorname{exactlyOne}(a,b,c)"))},
        {Text(UTF("a @>> b")), Text(UTF("\\operatorname{ashr}(a,b)"))},
        {Text(UTF("CHi(x,a,b)")), Text(UTF("\\mathbf{1}_{[a,b]}(x)"))},
        {Text(UTF("[Mb]")), Text(UTF("\\mathrm{Mibit}"))},
        {Text(UTF("[MB]")), Text(UTF("\\mathrm{MiB}"))},
        {Text(UTF("2*[km/h]")), Text(UTF("2\\,\\mathrm{km}/\\mathrm{h}"))},
        {Text(UTF("my_Function(x; y)")), Text(UTF("\\operatorname{my\\_Function}(x,y)"))}
    };
    TEST_CASE("testApi0390", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: mathematical reference expressions"));
        TestCommonTools::consolePrintTestApiStart(390, UTF16toUTF8(testDescr.str()));
        for (std::vector<Text> c : LATEX_REFERENCE) latexEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0391", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: observable binding of powers, signs and postfixes"));
        TestCommonTools::consolePrintTestApiStart(391, UTF16toUTF8(testDescr.str()));
        std::vector<std::vector<Text>> cases = {
            {Text(UTF("a^b!")), Text(UTF("(a^{b})!"))}, {Text(UTF("a*-b")), Text(UTF("a\\cdot(-b)"))},
            {Text(UTF("a#b*c")), Text(UTF("\\operatorname{rem}(a,b)\\cdot c"))},
            {Text(UTF("a^^b^c")), Text(UTF("(\\mathord{{}^{b}\\!a})^{c}"))},
            {Text(UTF("f(a,g(b,c);sin(a+b))")), Text(UTF("f(a,g(b,c),\\sin(a+b))"))}
        };
        for (std::vector<Text> c : cases) latexEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0392", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: argument separators and token levels"));
        TestCommonTools::consolePrintTestApiStart(392, UTF16toUTF8(testDescr.str()));
        latexEquals(Text(UTF("f(a,g(b,c),a+b)")), latexExport(Text(UTF("f(a;g(b,c),a+b)"))));
        latexEquals(latexExport(Text(UTF("f(a,g(b,c),a+b)"))), latexExport(Text(UTF("f(a;g(b;c);a+b)"))));
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0393", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: structure reconstruction preserves copied tokens"));
        TestCommonTools::consolePrintTestApiStart(393, UTF16toUTF8(testDescr.str()));
        ExpressionPtr expression = new_Expression(textArg(Text(UTF("sin(x)^2+x/y"))));
        ListPtr<TokenPtr> tokens = expression->getCopyOfInitialTokens();
        TextBuilder before = TextBuilder();
        for (TokenPtr t : *tokens) before.append(Text(t->tokenStr)).append(UTF(':')).append(t->tokenTypeId).append(UTF(':'))
                .append(t->tokenId).append(UTF(':')).append(t->tokenLevel).append(UTF(':')).append(t->tokenValue).append(UTF(';'));
        latexEquals(Text(UTF("\\sin^{2}x+\\frac{x}{y}")), expression->getExpressionAsLaTeX());
        TextBuilder after = TextBuilder();
        for (TokenPtr t : *tokens) after.append(Text(t->tokenStr)).append(UTF(':')).append(t->tokenTypeId).append(UTF(':'))
                .append(t->tokenId).append(UTF(':')).append(t->tokenLevel).append(UTF(':')).append(t->tokenValue).append(UTF(';'));
        latexEquals(before.toString(), after.toString());
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0394", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: malformed expression structure diagnostics"));
        TestCommonTools::consolePrintTestApiStart(394, UTF16toUTF8(testDescr.str()));
        for (Text s : std::vector<Text>{Text(UTF("a/(b")), Text(UTF("sin(,a)")), Text(UTF("a**b")), Text(UTF("f(a,,b)")), Text(UTF("a,b")), Text(UTF("()"))})
            (void)latexThrows<std::logic_error>([&] { return latexExport(s); }, s);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0395", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: mathematical typography and numeric notation"));
        TestCommonTools::consolePrintTestApiStart(395, UTF16toUTF8(testDescr.str()));
        std::vector<std::vector<Text>> cases = {
            {Text(UTF("")), Text(UTF(""))}, {Text(UTF("   ")), Text(UTF(""))}, {Text(UTF("002.10")), Text(UTF("002.10"))}, {Text(UTF(".25")), Text(UTF("0.25"))},
            {Text(UTF("2.30e-4")), Text(UTF("2.30\\times 10^{-4}"))}, {Text(UTF("14_3")), Text(UTF("\\frac{14}{3}"))},
            {Text(UTF("2_1_3")), Text(UTF("2\\,\\frac{1}{3}"))}, {Text(UTF("b1.")), Text(UTF("(\\varepsilon)_{1}"))},
            {Text(UTF("h.af1")), Text(UTF("(\\mathrm{af1})_{16}"))}, {Text(UTF("B36.z")), Text(UTF("(\\mathrm{z})_{36}"))},
            {Text(UTF("sin(x)!")), Text(UTF("(\\sin x)!"))}, {Text(UTF("sin(x)%")), Text(UTF("(\\sin x)\\%"))},
            {Text(UTF("sin(x)^2*y")), Text(UTF("\\sin^{2}(x)\\cdot y"))}, {Text(UTF("-sin(x)*y")), Text(UTF("-\\sin(x)\\cdot y"))},
            {Text(UTF("sin(-x)")), Text(UTF("\\sin(-x)"))}, {Text(UTF("sin(x)^0")), Text(UTF("(\\sin x)^{0}"))},
            {Text(UTF("sin(x)^2.5")), Text(UTF("(\\sin x)^{2.5}"))}, {Text(UTF("ln(x)^2")), Text(UTF("(\\ln x)^{2}"))},
            {Text(UTF("not(a|b)")), Text(UTF("\\neg (a\\lor b)"))}, {Text(UTF("a<(b<c)")), Text(UTF("a<(b<c)"))},
            {Text(UTF("(a<b)<c")), Text(UTF("(a<b)<c"))}, {Text(UTF("a-(b-c)")), Text(UTF("a-(b-c)"))},
            {Text(UTF("2*3")), Text(UTF("2\\cdot 3"))}, {Text(UTF("ab*cd")), Text(UTF("\\mathit{ab}\\cdot \\mathit{cd}"))},
            {Text(UTF("30*[deg]")), Text(UTF("30^{\\circ}"))}, {Text(UTF("2*[km]")), Text(UTF("2\\,\\mathrm{km}"))},
            {Text(UTF("[km/h]^2")), Text(UTF("(\\mathrm{km}/\\mathrm{h})^{2}"))}, {Text(UTF("[k]^2")), Text(UTF("(10^{3})^{2}"))},
            {Text(UTF("sin([km/h])")), Text(UTF("\\sin(\\mathrm{km}/\\mathrm{h})"))}, {Text(UTF("sin([k])")), Text(UTF("\\sin(10^{3})"))},
            {Text(UTF("logGamma(x+y)")), Text(UTF("\\ln\\left\\lvert\\Gamma(x+y)\\right\\rvert"))},
            {Text(UTF("GammaL(s,x)")), Text(UTF("\\gamma(s,x)"))}, {Text(UTF("GammaU(s,x)")), Text(UTF("\\Gamma(s,x)"))},
            {Text(UTF("GammaP(s,x)")), Text(UTF("P(s,x)"))}, {Text(UTF("diGamma(x)")), Text(UTF("\\psi(x)"))},
            {Text(UTF("rNor(mu,sigma+1)")), Text(UTF("\\operatorname{draw}(\\mathcal N(\\mathit{mu},(\\mathit{sigma}+1)^{2}))"))},
            {Text(UTF("ConFrac(a)")), Text(UTF("a"))}, {Text(UTF("ConFrac(a,b,c,d)")), Text(UTF("a+\\frac{1}{b+\\frac{1}{c+\\frac{1}{d}}}"))},
            {Text(UTF("mean(a,b+c,d)")), Text(UTF("\\frac{a+b+c+d}{3}"))},
            {Text(UTF("sum(i,1,n,x+y)")), Text(UTF("\\sum_{i=1}^{n}(x+y)"))},
            {Text(UTF("sum(i,1,n,f(i))*x")), Text(UTF("(\\sum_{i=1}^{n}f(i))\\cdot x"))},
            {Text(UTF("dern(f(x),n,x)")), Text(UTF("\\frac{\\mathrm d^{n}}{\\mathrm d x^{n}}[f(x)]"))},
            {Text(UTF("der+(f(x),x,p)")), Text(UTF("\\left.D_x^+[f(x)]\\right\\rvert_{x=p}"))},
            {Text(UTF("der(f(x),x,eps,m)")), Text(UTF("\\frac{\\mathrm d}{\\mathrm d x}[f(x)]"))},
            {Text(UTF("difb(f(x),x)")), Text(UTF("\\nabla_{x,1}[f(x)]"))},
            {Text(UTF("x_1+y2")), Text(UTF("\\mathit{x\\_1}+\\mathit{y2}"))},
            {Text(UTF("α+ς+Γ")), Text(UTF("\\alpha+\\varsigma+\\Gamma"))},
            {Text(UTF("[my_unit]")), Text(UTF("[\\mathrm{my\\_unit}]"))},
            {Text(UTF("f(a,b,c,d,x,y,z)")), Text(UTF("f(a,b,c,d,x,y,z)"))}
        };
        for (std::vector<Text> c : cases) {
            try { latexEquals(c[1], latexExport(c[0]), c[0]); } catch (std::logic_error ex) {
                TextBuilder detail = TextBuilder(c[0]);
                const ListPtr<TokenPtr> detailTokens = latexExpression(c[0])->getCopyOfInitialTokens();
                for (TokenPtr t : *detailTokens) detail.append(Text(UTF(" ["))).append(Text(t->tokenStr)).append(Text(UTF(":"))).append(t->tokenTypeId).append(Text(UTF("]")));
                throw latex_detail::logicError(detail.toString());
            }
        }
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0396", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: invalid builtin arities and calculus variables"));
        TestCommonTools::consolePrintTestApiStart(396, UTF16toUTF8(testDescr.str()));
        Set<Long> seen;
        const ListPtr<KeyWordPtr> keywords = latexKeywords();
        for (KeyWordPtr kw : *keywords) {
            if (!seen.add(latexTokenKey(kw->wordTypeId, kw->wordId))) continue;
            if (kw->wordTypeId == Function1Arg::TYPE_ID || kw->wordTypeId == Function2Arg::TYPE_ID
                    || kw->wordTypeId == Function3Arg::TYPE_ID || kw->wordTypeId == FunctionVariadic::TYPE_ID
                    || kw->wordTypeId == CalculusOperator::TYPE_ID) {
                if (kw->wordTypeId == Function1Arg::TYPE_ID && kw->wordId == Function1Arg::PARAM_ID) continue;
                Text source = Text(kw->wordString) + Text(UTF("()"));
                (void)latexThrows<std::logic_error>([&] { return latexExport(source); }, Text(UTF("Invalid arity ")) + source);
            }
        }
        for (Text s : std::vector<Text>{Text(UTF("sin(a,b)")), Text(UTF("log(a)")), Text(UTF("if(a,b)")), Text(UTF("iff(a,b,c)")), Text(UTF("der(a)")), Text(UTF("dern(a,b,c,d)")), Text(UTF("int(a,b,c)")), Text(UTF("sum(i,a,b)")), Text(UTF("sum(2,a,b,f(i))")), Text(UTF("diff(f(x),x+1)"))})
            (void)latexThrows<std::logic_error>([&] { return latexExport(s); }, s);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0397", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: compiled expressions, dependencies and calculation history"));
        TestCommonTools::consolePrintTestApiStart(397, UTF16toUTF8(testDescr.str()));
        ArgumentPtr x = new_Argument(textArg(Text(UTF("x=2"))));
        ArgumentPtr y = new_Argument(textArg(Text(UTF("y=3*x"))), x);
        FunctionPtr f = new_Function(textArg(Text(UTF("f(t)=t^2"))));
        ExpressionPtr e = new_Expression(textArg(Text(UTF("f(y)+sin(x)"))), x, y, f);
        CalcStepsRegisterPtr steps = new_CalcStepsRegister();
        double before = e->calculate(steps);
        Text history = steps->toString();
        Text diagnostic = e->getErrorMessage();
        double time = e->getComputingTime();
        bool syntax = e->getSyntaxStatus();
        Text text = e->getExpressionAsLaTeX();
        for (int i = 0; i < 10; i++) latexEquals(text, e->getExpressionAsLaTeX());
        latexEquals(diagnostic, e->getErrorMessage());
        latexEquals(time, e->getComputingTime());
        latexEquals(syntax, e->getSyntaxStatus());
        latexEquals(history, steps->toString());
        latexEquals(before, e->calculate());
        x->setArgumentValue(3);
        latexEquals(text, e->getExpressionAsLaTeX());
        latexEquals(81 + std::sin(3), e->calculate(), 1e-12);
        e->setExpressionString(Text(UTF("sqrt(x)")));
        latexEquals(Text(UTF("\\sqrt{x}")), e->getExpressionAsLaTeX());
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    struct LaTeXFunctionExtension : FunctionExtension {
        int calculations = 0, assignments = 0, metadata = 0;
        int getParametersNumber() override { return 1; }
        void setParameterValue(int index, double value) override { assignments++; }
        StringPtr getParameterName(int index) override { metadata++; return S(UTF("x")); }
        double calculate() override { calculations++; return 42; }
        FunctionExtensionPtr clone() override { return std::make_shared<LaTeXFunctionExtension>(); }
    };
    TEST_CASE("testApi0398", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: token metadata callbacks without evaluation"));
        TestCommonTools::consolePrintTestApiStart(398, UTF16toUTF8(testDescr.str()));
        Ptr<LaTeXFunctionExtension> extension = std::make_shared<LaTeXFunctionExtension>();
        const FunctionExtensionPtr callback = extension;
        FunctionPtr f = new_Function(textArg(Text(UTF("custom"))), callback);
        ExpressionPtr e = new_Expression(textArg(Text(UTF("custom(x)"))), f);
        int metadataBefore = extension->metadata;
        latexEquals(Text(UTF("\\operatorname{custom}(x)")), e->getExpressionAsLaTeX());
        latexTrue(extension->metadata > metadataBefore);
        latexEquals(0, extension->calculations);
        latexEquals(0, extension->assignments);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0399", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: random stream and cancellation state"));
        TestCommonTools::consolePrintTestApiStart(399, UTF16toUTF8(testDescr.str()));
        RandomPtr expected = new_Random(12345);
        mXparser::setRandomGenerator(new_Random(12345));
        LatexRandomRestore restore;
        {
            ExpressionPtr e = new_Expression(textArg(Text(UTF("[Uni]+rNor(0,1)"))));
            Text once = e->getExpressionAsLaTeX();
            latexEquals(once, e->getExpressionAsLaTeX());
            latexEquals(expected->nextDouble(), new_Expression(textArg(Text(UTF("[Uni]"))))->calculate());
            mXparser::cancelCurrentCalculation();
            latexEquals(Text(UTF("\\sin x")), latexExport(Text(UTF("sin(x)"))));
            latexTrue(mXparser::isCurrentCalculationCancelled());
        }
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0400", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: deterministic independent parallel exports"));
        TestCommonTools::consolePrintTestApiStart(400, UTF16toUTF8(testDescr.str()));
        std::vector<std::future<Text>> calls;
        for (int i = 0; i < 32; i++) calls.push_back(std::async(std::launch::async, [] { return latexExport(Text(UTF("sin(x)^n+sqrt(y/z)"))); }));
        for (auto& value : calls) latexEquals(Text(UTF("\\sin^{n}x+\\sqrt{\\frac{y}{z}}")), value.get());
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0401", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: resource budgets and untrusted identifier safety"));
        TestCommonTools::consolePrintTestApiStart(401, UTF16toUTF8(testDescr.str()));
        TextBuilder deep = TextBuilder();
        for (int i = 0; i < 300; i++) deep.append(UTF('('));
        deep.append(UTF('x')); for (int i = 0; i < 300; i++) deep.append(UTF(')'));
        (void)latexThrows<std::logic_error>([&] { return latexExport(deep.toString()); });
        TextBuilder flat = TextBuilder(Text(UTF("x")));
        for (int i = 0; i < 5999; i++) flat.append(Text(UTF("+x")));
        latexEquals(flat.toString(), latexExport(flat.toString()));
        // A valid flat scope close to the token limit must also remain usable.
        TextBuilder nearLimit = TextBuilder(Text(UTF("x")));
        for (int i = 1; i < 50000; i++) nearLimit.append(Text(UTF("+x")));
        latexEquals(nearLimit.toString(), latexExport(nearLimit.toString()));
        nearLimit.append(Text(UTF("+x")));
        (void)latexThrows<std::logic_error>([&] { return latexExport(nearLimit.toString()); });
        TextBuilder continued = TextBuilder(Text(UTF("ConFrac(x")));
        for (int i = 0; i < 300; i++) continued.append(Text(UTF(",x")));
        continued.append(UTF(')'));
        (void)latexThrows<std::logic_error>([&] { return latexExport(continued.toString()); });
        for (Text malicious : std::vector<Text>{Text(UTF("\\input{secret}")), Text(UTF("a_b}")), Text(UTF("a$")), Text(UTF("a#"))})
            (void)latexThrows<std::logic_error>([&] { return latexExport(malicious); });
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    /* Numeric interpretation of an already parsed tree. No LaTeX recognition,
     * parser state or source binding rules remain in the test suite. */
    static double latexArithmeticValue(LaTeXParser::NodePtr node, Map<Text, double> values) {
        ReadOnlyListPtr<LaTeXParser::NodePtr> children = node->getChildren();
        if (node->getKind() == LaTeXParser::Kind::NUMBER) return Double::parseDouble(node->getText());
        if (node->getKind() == LaTeXParser::Kind::SYMBOL) {
            latexTrue(values.containsKey(node->getText()), node->getText());
            return values.get(node->getText());
        }
        double left = latexArithmeticValue(children->get(0), values);
        switch (node->getKind()) {
            case LaTeXParser::Kind::POSITIVE: return left;
            case LaTeXParser::Kind::NEGATIVE: return -left;
            case LaTeXParser::Kind::PERCENT: return left / 100;
            case LaTeXParser::Kind::FLOOR: return std::floor(left);
            case LaTeXParser::Kind::FACTORIAL: {
                double value = 1; for (int i = 2; i <= left; i++) value *= i; return value; }
            default: break;
        }
        double right = latexArithmeticValue(children->get(1), values);
        switch (node->getKind()) {
            case LaTeXParser::Kind::ADD: return left + right;
            case LaTeXParser::Kind::SUBTRACT: return left - right;
            case LaTeXParser::Kind::MULTIPLY: return left * right;
            case LaTeXParser::Kind::DIVIDE: return left / right;
            case LaTeXParser::Kind::POWER: return std::pow(left, right);
            case LaTeXParser::Kind::REMAINDER: return std::fmod(left, right);
            default: throw latex_detail::logicError(Text(UTF("Unexpected arithmetic tree operation ")) + kindName(node->getKind()));
        }
    }
    TEST_CASE("testApi0402", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: arithmetic binding compared with independent values and evaluator"));
        TestCommonTools::consolePrintTestApiStart(402, UTF16toUTF8(testDescr.str()));
        Map<Text, double> values = {};
        values.put(Text(UTF("a")), 2.0); values.put(Text(UTF("b")), 3.0); values.put(Text(UTF("c")), 2.0);
        std::vector<Text> operators = {Operator::PLUS_STR, Operator::MINUS_STR, Operator::MULTIPLY_STR,
            Operator::DIVIDE_STR, Operator::DIVIDE_QUOTIENT_STR, Operator::MOD_STR, Operator::POWER_STR};
        for (Text first : operators) for (Text second : operators) {
            for (Text source : std::vector<Text>{Text(UTF("a")) + first + Text(UTF("b")) + second + Text(UTF("c")),
                    Text(UTF("(a")) + first + Text(UTF("b)")) + second + Text(UTF("c")), Text(UTF("a")) + first + Text(UTF("(b")) + second + Text(UTF("c)"))}) {
                ExpressionPtr e = new_Expression(textArg(source), new_Argument(textArg(Text(UTF("a=2")))), new_Argument(textArg(Text(UTF("b=3")))), new_Argument(textArg(Text(UTF("c=2")))));
                latexTrue(e->checkSyntax(), source);
                double symbolic = latexArithmeticValue(LaTeXParser::parse(e->getExpressionAsLaTeX()), values);
                latexEquals(symbolic, e->calculate(), 1e-10, source);
                latexFalse(e->getExpressionAsLaTeX()->empty(), source);
            }
        }
        for (Text source : std::vector<Text>{Text(UTF("-a^2")), Text(UTF("(-a)^2")), Text(UTF("a*-b")), Text(UTF("a^-b^c")), Text(UTF("a^b!")), Text(UTF("-2^2")), Text(UTF("2^-3!")), Text(UTF("a%*b"))}) {
            ExpressionPtr e = new_Expression(textArg(source), new_Argument(textArg(Text(UTF("a=2")))), new_Argument(textArg(Text(UTF("b=3")))), new_Argument(textArg(Text(UTF("c=2")))));
            latexTrue(e->checkSyntax(), source);
            latexEquals(latexArithmeticValue(LaTeXParser::parse(e->getExpressionAsLaTeX()), values), e->calculate(), 1e-10, source);
        }
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0403", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: renamed builtins and user function overrides"));
        TestCommonTools::consolePrintTestApiStart(403, UTF16toUTF8(testDescr.str()));
        mXparser::modifyBuiltinToken(Function1Arg::SIN_STR, Text(UTF("sine")));
        latexEquals(Text(UTF("\\sin^{2}x")), latexExport(Text(UTF("sine(x)^2"))));
        mXparser::unmodifyBuiltinTokens();
        mXparser::setToOverrideBuiltinTokens();
        FunctionPtr f = new_Function(textArg(Text(UTF("sin(x)=x+1"))));
        latexEquals(Text(UTF("\\operatorname{sin}(x)")), new_Expression(textArg(Text(UTF("sin(x)"))), f)->getExpressionAsLaTeX());
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0404", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: minimum variadic arities and mathematical notation"));
        TestCommonTools::consolePrintTestApiStart(404, UTF16toUTF8(testDescr.str()));
        std::vector<std::vector<Text>> cases = {
            {Text(UTF("iff(x,y)")), Text(UTF("\\begin{cases}y&\\text{if }x\\ne0\\\\\\text{undefined}&\\text{otherwise}\\end{cases}"))},
            {Text(UTF("min(x)")), Text(UTF("\\min(x)"))}, {Text(UTF("max(x)")), Text(UTF("\\max(x)"))}, {Text(UTF("ConFrac(x)")), Text(UTF("x"))},
            {Text(UTF("ConPol(x)")), Text(UTF("K_{1}(x)"))}, {Text(UTF("gcd(x)")), Text(UTF("\\gcd(x)"))}, {Text(UTF("lcm(x)")), Text(UTF("\\operatorname{lcm}(x)"))},
            {Text(UTF("add(x)")), Text(UTF("x"))}, {Text(UTF("multi(x)")), Text(UTF("x"))}, {Text(UTF("mean(x)")), Text(UTF("\\frac{x}{1}"))},
            {Text(UTF("var(x)")), Text(UTF("s^2(x)"))}, {Text(UTF("std(x)")), Text(UTF("s(x)"))},
            {Text(UTF("rList(x)")), Text(UTF("\\operatorname{draw}(\\mathcal U_{\\mathrm{list}}(x))"))},
            {Text(UTF("coalesce(x)")), Text(UTF("\\operatorname{first}_{\\ne\\mathrm{NaN}}(x)"))},
            {Text(UTF("or(x)")), Text(UTF("x\\ne0"))}, {Text(UTF("and(x)")), Text(UTF("x\\ne0"))}, {Text(UTF("xor(x)")), Text(UTF("\\operatorname{exactlyOne}(x)"))},
            {Text(UTF("argmin(x)")), Text(UTF("\\operatorname*{arg\\,min}_{\\mathrm{first},\\,1}(x)"))},
            {Text(UTF("argmax(x)")), Text(UTF("\\operatorname*{arg\\,max}_{\\mathrm{first},\\,1}(x)"))},
            {Text(UTF("med(x)")), Text(UTF("\\operatorname{median}(x)"))}, {Text(UTF("mode(x)")), Text(UTF("\\operatorname{mode}(x)"))},
            {Text(UTF("base(x)")), Text(UTF("\\operatorname{value}_x(\\varepsilon)"))}, {Text(UTF("ndist(x)")), Text(UTF("\\operatorname{nDistinct}(x)"))}
        };
        latexEquals(23, cases.size());
        for (std::vector<Text> c : cases) latexEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0405", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: all builtin rules in powers and function arguments"));
        TestCommonTools::consolePrintTestApiStart(405, UTF16toUTF8(testDescr.str()));
        std::vector<Text> contexts = {Text(UTF("X")), Text(UTF("(X)^2")), Text(UTF("(X)*c")), Text(UTF("c-(X)")), Text(UTF("(X)!")), Text(UTF("c/(X)")), Text(UTF("sin(X)")),
                Text(UTF("-(X)")), Text(UTF("sin(X)^2")), Text(UTF("2*(X)")), Text(UTF("rNor(0,X)")), Text(UTF("(X)+c")), Text(UTF("c^(X)"))};
        Set<Long> seen;
        int rows = 0;
        const ListPtr<KeyWordPtr> keywords = latexKeywords();
        for (KeyWordPtr kw : *keywords) {
            seen.add(latexTokenKey(kw->wordTypeId, kw->wordId));
            Text source = kw->wordTypeId == ParserSymbol::TYPE_ID && kw->wordId == ParserSymbol::BLANK_ID ? Text(UTF(" a ")) : latexAliasInput(kw);
            for (Text context : contexts) {
                Text input = context.replace(Text(UTF("X")), source);
                Text actual = latexExport(input);
                latexFalse(actual.contains(Text(UTF("@+"))), input);
                latexFalse(actual.contains(Text(UTF("@-"))), input);
                // Ordinary numbered test output, consumed separately by real-renderer QA.
                // No lifecycle hook, private access, process property or test artifact writer.
                mXparser::consolePrintln(textArg(Text(UTF("LATEX-CONTEXT\t")) + input + Text(UTF("\t=> ")) + actual));
                rows++;
            }
        }
        latexEquals(412, seen.size());
        latexEquals(527 * contexts.size(), rows);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0406", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: review regressions: command boundaries, scopes and compound numbers"));
        TestCommonTools::consolePrintTestApiStart(406, UTF16toUTF8(testDescr.str()));
        std::vector<std::vector<Text>> cases = {
            {Text(UTF("2*x%")), Text(UTF("2\\cdot x\\%"))},
            {Text(UTF("a*b%")), Text(UTF("a\\cdot b\\%"))},
            {Text(UTF("100*r%")), Text(UTF("100\\cdot r\\%"))},
            {Text(UTF("sum(i,1,n,i,2)")), Text(UTF("\\sum_{\\substack{i=1+2k\\\\k\\in\\mathbb Z_{\\ge0},\\,i\\le n}}i"))},
            {Text(UTF("prod(i,10,a,i,-1)")), Text(UTF("\\prod_{\\substack{i=10-k\\\\k\\in\\mathbb Z_{\\ge0},\\,i\\ge a}}i"))},
            {Text(UTF("sum(i,0.5,n,i)")), Text(UTF("\\sum_{\\substack{i=0.5+k\\\\k\\in\\mathbb Z_{\\ge0},\\,i\\le n}}i"))},
            {Text(UTF("ConFrac(a+b)*c")), Text(UTF("(a+b)\\cdot c"))},
            {Text(UTF("c-ConFrac(a+b)")), Text(UTF("c-(a+b)"))},
            {Text(UTF("rNor(0,1e3)")), Text(UTF("\\operatorname{draw}(\\mathcal N(0,(1\\times 10^{3})^{2}))"))},
            {Text(UTF("rNor(0,2_1_3)")), Text(UTF("\\operatorname{draw}(\\mathcal N(0,(2\\,\\frac{1}{3})^{2}))"))},
            {Text(UTF("pNor(x,0,14_3)")), Text(UTF("f_{\\mathcal N(0,(\\frac{14}{3})^{2})}(x)"))},
            {Text(UTF("(a/b)^2")), Text(UTF("(\\frac{a}{b})^{2}"))},
            {Text(UTF("(a/b)!")), Text(UTF("(\\frac{a}{b})!"))},
            {Text(UTF("2e3!")), Text(UTF("(2\\times 10^{3})!"))},
            {Text(UTF("2*[k]")), Text(UTF("2\\cdot 10^{3}"))},
            {Text(UTF("3*[%]")), Text(UTF("3\\cdot 10^{-2}"))}
        };
        for (std::vector<Text> c : cases) latexEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0407", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: review regressions: glyph identity, signs and iterated operator scope"));
        TestCommonTools::consolePrintTestApiStart(407, UTF16toUTF8(testDescr.str()));
        std::vector<std::vector<Text>> cases = {
            {Text(UTF("c*[c]")), Text(UTF("{c}_{\\mathrm{user}}\\cdot c"))},
            {Text(UTF("γ*[gam]")), Text(UTF("{\\gamma}_{\\mathrm{user}}\\cdot\\gamma"))},
            {Text(UTF("φ+[phi]")), Text(UTF("{\\varphi}_{\\mathrm{user}}+\\varphi"))},
            {Text(UTF("Ω*[Om]")), Text(UTF("{\\Omega}_{\\mathrm{user}}\\cdot\\Omega"))},
            {Text(UTF("-(-a)")), Text(UTF("-(-a)"))},
            {Text(UTF("a+(+b)")), Text(UTF("a+(+b)"))},
            {Text(UTF("add(a,-b)")), Text(UTF("a+(-b)"))},
            {Text(UTF("mean(a,-b)")), Text(UTF("\\frac{a+(-b)}{2}"))},
            {Text(UTF("a*(-b)")), Text(UTF("a\\cdot(-b)"))},
            {Text(UTF("sum(i,1,n,i)+1")), Text(UTF("(\\sum_{i=1}^{n}i)+1"))},
            {Text(UTF("1+sum(i,1,n,i)")), Text(UTF("1+(\\sum_{i=1}^{n}i)"))}
        };
        for (std::vector<Text> c : cases) latexEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0408", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: review regressions: predicates and professional self-delimiting notation"));
        TestCommonTools::consolePrintTestApiStart(408, UTF16toUTF8(testDescr.str()));
        std::vector<std::vector<Text>> cases = {
            {Text(UTF("if(and(a,b),1,0)")), Text(UTF("\\begin{cases}1&\\text{if }a\\ne0\\land b\\ne0\\\\0&\\text{otherwise}\\end{cases}"))},
            {Text(UTF("if(or(a,b),1,0)")), Text(UTF("\\begin{cases}1&\\text{if }a\\ne0\\lor b\\ne0\\\\0&\\text{otherwise}\\end{cases}"))},
            {Text(UTF("if(xor(a,b),1,0)")), Text(UTF("\\begin{cases}1&\\text{if }\\operatorname{exactlyOne}(a,b)\\\\0&\\text{otherwise}\\end{cases}"))},
            {Text(UTF("if([true],1,0)")), Text(UTF("\\begin{cases}1&\\text{if }\\mathrm{true}\\\\0&\\text{otherwise}\\end{cases}"))},
            {Text(UTF("a*(b#c)")), Text(UTF("a\\cdot\\operatorname{rem}(b,c)"))},
            {Text(UTF("@~a+b")), Text(UTF("\\operatorname{bitNot}(a)+b"))},
            {Text(UTF("abs(x)^2")), Text(UTF("\\left\\lvert x\\right\\rvert^{2}"))},
            {Text(UTF("-sin(x)*y")), Text(UTF("-\\sin(x)\\cdot y"))},
            {Text(UTF("mean(a,b+c,d)")), Text(UTF("\\frac{a+b+c+d}{3}"))},
            {Text(UTF("base(x)")), Text(UTF("\\operatorname{value}_x(\\varepsilon)"))},
            {Text(UTF("logGamma(x)^2")), Text(UTF("(\\ln\\left\\lvert\\Gamma(x)\\right\\rvert)^{2}"))},
            {Text(UTF("logBeta(a,b)^2")), Text(UTF("(\\ln B(a,b))^{2}"))}
        };
        for (std::vector<Text> c : cases) latexEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0409", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: diagnostics refer to existing offending tokens"));
        TestCommonTools::consolePrintTestApiStart(409, UTF16toUTF8(testDescr.str()));
        std::logic_error missing = latexThrows<std::logic_error>([&] { return latexExport(Text(UTF("a*"))); });
        latexTrue(latexMessage(missing).contains(Text(UTF("token 1"))), latexMessage(missing));
        std::logic_error middle = latexThrows<std::logic_error>([&] { return latexExport(Text(UTF("a+*b"))); });
        latexTrue(latexMessage(middle).contains(Text(UTF("token 1"))) || latexMessage(middle).contains(Text(UTF("token 2"))), latexMessage(middle));
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0410", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: protected root degree with nested radicals and bracketed symbols"));
        TestCommonTools::consolePrintTestApiStart(410, UTF16toUTF8(testDescr.str()));
        std::vector<std::vector<Text>> cases = {
            {Text(UTF("root(root(3,n),x)")), Text(UTF("\\sqrt[{\\sqrt[{3}]{n}}]{x}"))},
            {Text(UTF("root([my_unit],x)")), Text(UTF("\\sqrt[{[\\mathrm{my\\_unit}]}]{x}"))},
            {Text(UTF("root([Int3],x)")), Text(UTF("\\sqrt[{\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{3},10^{3}])}]{x}"))},
            {Text(UTF("root(3,root(n,x))")), Text(UTF("\\sqrt[{3}]{\\sqrt[{n}]{x}}"))},
            {Text(UTF("root(root(root(2,n),m),x)")), Text(UTF("\\sqrt[{\\sqrt[{\\sqrt[{2}]{n}}]{m}}]{x}"))},
            {Text(UTF("root(n+1,x+y)")), Text(UTF("\\sqrt[{n+1}]{x+y}"))},
            {Text(UTF("root(n/x,y)")), Text(UTF("\\sqrt[{\\frac{n}{x}}]{y}"))},
            {Text(UTF("root(∛n,x)")), Text(UTF("\\sqrt[{\\sqrt[3]{n}}]{x}"))}
        };
        for (std::vector<Text> c : cases) latexEquals(c[1], new_Expression(textArg(c[0]), new_Constant(textArg(Text(UTF("[my_unit]"))), 1))->getExpressionAsLaTeX(), c[0]);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0411", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("LaTeX export: complete scope of iterated minima and maxima"));
        TestCommonTools::consolePrintTestApiStart(411, UTF16toUTF8(testDescr.str()));
        std::vector<std::vector<Text>> cases = {
            {Text(UTF("mini(i,1,n,i)*2")), Text(UTF("(\\min_{i=1}^{n}i)\\cdot 2"))},
            {Text(UTF("2*mini(i,1,n,i)")), Text(UTF("2\\cdot(\\min_{i=1}^{n}i)"))},
            {Text(UTF("mini(i,1,n,i)+1")), Text(UTF("(\\min_{i=1}^{n}i)+1"))},
            {Text(UTF("1+mini(i,1,n,i)")), Text(UTF("1+(\\min_{i=1}^{n}i)"))},
            {Text(UTF("mini(i,1,n,i)-1")), Text(UTF("(\\min_{i=1}^{n}i)-1"))},
            {Text(UTF("1-mini(i,1,n,i)")), Text(UTF("1-(\\min_{i=1}^{n}i)"))},
            {Text(UTF("(mini(i,1,n,i))^2")), Text(UTF("(\\min_{i=1}^{n}i)^{2}"))},
            {Text(UTF("(mini(i,1,n,i))!")), Text(UTF("(\\min_{i=1}^{n}i)!"))},
            {Text(UTF("add(mini(i,1,n,i),1)")), Text(UTF("(\\min_{i=1}^{n}i)+1"))},
            {Text(UTF("mean(mini(i,1,n,i),1)")), Text(UTF("\\frac{(\\min_{i=1}^{n}i)+1}{2}"))},
            {Text(UTF("ConFrac(mini(i,1,n,i))+1")), Text(UTF("(\\min_{i=1}^{n}i)+1"))},
            {Text(UTF("sin(mini(i,1,n,i))")), Text(UTF("\\sin(\\min_{i=1}^{n}i)"))},
            {Text(UTF("maxi(i,1,n,i)*2")), Text(UTF("(\\max_{i=1}^{n}i)\\cdot 2"))},
            {Text(UTF("2*maxi(i,1,n,i)")), Text(UTF("2\\cdot(\\max_{i=1}^{n}i)"))},
            {Text(UTF("maxi(i,1,n,i)+1")), Text(UTF("(\\max_{i=1}^{n}i)+1"))},
            {Text(UTF("1+maxi(i,1,n,i)")), Text(UTF("1+(\\max_{i=1}^{n}i)"))},
            {Text(UTF("maxi(i,1,n,i)-1")), Text(UTF("(\\max_{i=1}^{n}i)-1"))},
            {Text(UTF("1-maxi(i,1,n,i)")), Text(UTF("1-(\\max_{i=1}^{n}i)"))},
            {Text(UTF("(maxi(i,1,n,i))^2")), Text(UTF("(\\max_{i=1}^{n}i)^{2}"))},
            {Text(UTF("(maxi(i,1,n,i))!")), Text(UTF("(\\max_{i=1}^{n}i)!"))},
            {Text(UTF("add(maxi(i,1,n,i),1)")), Text(UTF("(\\max_{i=1}^{n}i)+1"))},
            {Text(UTF("mean(maxi(i,1,n,i),1)")), Text(UTF("\\frac{(\\max_{i=1}^{n}i)+1}{2}"))},
            {Text(UTF("ConFrac(maxi(i,1,n,i))+1")), Text(UTF("(\\max_{i=1}^{n}i)+1"))},
            {Text(UTF("sin(maxi(i,1,n,i))")), Text(UTF("\\sin(\\max_{i=1}^{n}i)"))}
        };
        for (std::vector<Text> c : cases) latexEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    static Text latexTreeShape(LaTeXParser::NodePtr node) {
        if (node->getChildren()->isEmpty()) return kindName(node->getKind()) + Text(UTF(":")) + Text(node->getText());
        TextBuilder shape = TextBuilder(kindName(node->getKind())).append(UTF('('));
        for (int i = 0; i < node->getChildren()->size(); i++) {
            if (i > 0) shape.append(UTF(','));
            shape.append(latexTreeShape(node->getChildren()->get(i)));
        }
        return shape.append(UTF(')')).toString();
    }

    TEST_CASE("testApi0412", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("symbolic LaTeX parser: arithmetic structure and grouping"));
        TestCommonTools::consolePrintTestApiStart(412, UTF16toUTF8(testDescr.str()));
        std::vector<std::vector<Text>> cases = {
            {Text(UTF("\\frac{x+1}{y-2}")), Text(UTF("DIVIDE(ADD(SYMBOL:x,NUMBER:1),SUBTRACT(SYMBOL:y,NUMBER:2))"))},
            {Text(UTF("\\frac{a}{b}\\cdot c")), Text(UTF("MULTIPLY(DIVIDE(SYMBOL:a,SYMBOL:b),SYMBOL:c)"))},
            {Text(UTF("a/\\frac{b}{c}")), Text(UTF("DIVIDE(SYMBOL:a,DIVIDE(SYMBOL:b,SYMBOL:c))"))},
            {Text(UTF("2(x+1)")), Text(UTF("MULTIPLY(NUMBER:2,ADD(SYMBOL:x,NUMBER:1))"))},
            {Text(UTF("(a+b)c")), Text(UTF("MULTIPLY(ADD(SYMBOL:a,SYMBOL:b),SYMBOL:c)"))},
            {Text(UTF("\\left\\lfloor\\frac{-a}{b}\\right\\rfloor")), Text(UTF("FLOOR(DIVIDE(NEGATIVE(SYMBOL:a),SYMBOL:b))"))},
            {Text(UTF("\\lfloor x+1\\rfloor")), Text(UTF("FLOOR(ADD(SYMBOL:x,NUMBER:1))"))},
            {Text(UTF("\\operatorname{rem}(a,b)")), Text(UTF("REMAINDER(SYMBOL:a,SYMBOL:b)"))},
            {Text(UTF("\\operatorname{rem}\\left(a,b\\right)")), Text(UTF("REMAINDER(SYMBOL:a,SYMBOL:b)"))},
            {Text(UTF("a\\,\\cdot\\!b")), Text(UTF("MULTIPLY(SYMBOL:a,SYMBOL:b)"))},
            {Text(UTF("\\left(a+b\\right)/c")), Text(UTF("DIVIDE(ADD(SYMBOL:a,SYMBOL:b),SYMBOL:c)"))}
        };
        for (std::vector<Text> c : cases) latexEquals(c[1], latexTreeShape(LaTeXParser::parse(c[0])), c[0]);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0413", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("symbolic LaTeX parser: TeX scripts, signs and juxtaposition"));
        TestCommonTools::consolePrintTestApiStart(413, UTF16toUTF8(testDescr.str()));
        std::vector<std::vector<Text>> cases = {
            {Text(UTF("x^12")), Text(UTF("MULTIPLY(POWER(SYMBOL:x,NUMBER:1),NUMBER:2)"))},
            {Text(UTF("x^{12}")), Text(UTF("POWER(SYMBOL:x,NUMBER:12)"))},
            {Text(UTF("x^{y^{z}}")), Text(UTF("POWER(SYMBOL:x,POWER(SYMBOL:y,SYMBOL:z))"))},
            {Text(UTF("(x^y)^z")), Text(UTF("POWER(POWER(SYMBOL:x,SYMBOL:y),SYMBOL:z)"))},
            {Text(UTF("-x^2")), Text(UTF("NEGATIVE(POWER(SYMBOL:x,NUMBER:2))"))},
            {Text(UTF("(-x)^2")), Text(UTF("POWER(NEGATIVE(SYMBOL:x),NUMBER:2)"))},
            {Text(UTF("x!^2")), Text(UTF("POWER(FACTORIAL(SYMBOL:x),NUMBER:2)"))},
            {Text(UTF("x^2!")), Text(UTF("FACTORIAL(POWER(SYMBOL:x,NUMBER:2))"))},
            {Text(UTF("x^{2!}")), Text(UTF("POWER(SYMBOL:x,FACTORIAL(NUMBER:2))"))},
            {Text(UTF("xy")), Text(UTF("MULTIPLY(SYMBOL:x,SYMBOL:y)"))},
            {Text(UTF("\\mathit{xy}")), Text(UTF("SYMBOL:xy"))},
            {Text(UTF("1e3")), Text(UTF("MULTIPLY(MULTIPLY(NUMBER:1,SYMBOL:e),NUMBER:3)"))},
            {Text(UTF("1\\times10^{-3}")), Text(UTF("MULTIPLY(NUMBER:1,POWER(NUMBER:10,NEGATIVE(NUMBER:3)))"))},
            {Text(UTF("+x\\%")), Text(UTF("POSITIVE(PERCENT(SYMBOL:x))"))}
        };
        for (std::vector<Text> c : cases) latexEquals(c[1], latexTreeShape(LaTeXParser::parse(c[0])), c[0]);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0414", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("symbolic LaTeX parser: names, exact source ranges and immutable nodes"));
        TestCommonTools::consolePrintTestApiStart(414, UTF16toUTF8(testDescr.str()));
        Text source = Text(UTF("  ( \\mathit{x\\_1} + .250 )  "));
        LaTeXParser::NodePtr root = LaTeXParser::parse(source);
        latexEquals(LaTeXParser::Kind::ADD, root->getKind());
        latexEquals(2, root->getStartOffset());
        latexEquals(source.length() - 2, root->getEndOffset());
        latexEquals(source.substring(2, source.length() - 2), root->getSourceText());
        LaTeXParser::NodePtr name = root->getChildren()->get(0);
        latexEquals(Text(UTF("x_1")), name->getText());
        latexEquals(source.indexOf(Text(UTF("\\mathit"))), name->getStartOffset());
        latexEquals(Text(UTF("\\mathit{x\\_1}")), name->getSourceText());
        latexEquals(Text(UTF(".250")), root->getChildren()->get(1)->getText());
        latexEquals(Text(UTF("km")), LaTeXParser::parse(Text(UTF("\\mathrm{km}")))->getText());
        latexEquals(Text(UTF("α")), LaTeXParser::parse(Text(UTF("α")))->getText());
        (void)latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(Text(UTF("\xD835\xDC65"))); });
        (void)latexThrows<UnsupportedOperationException>([&] { return root->getChildren()->clear(); });
        (void)latexThrows<UnsupportedOperationException>([&] { return name->getChildren()->add(root); });
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0415", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("symbolic LaTeX parser: strict subset, unsafe macros and located failures"));
        TestCommonTools::consolePrintTestApiStart(415, UTF16toUTF8(testDescr.str()));
        std::vector<Text> invalid = {Text(UTF("")), Text(UTF("  ")), Text(UTF("a+")), Text(UTF("()")), Text(UTF("\\frac{x}")), Text(UTF("\\frac{}{y}")),
            Text(UTF("\\operatorname{rem}(a,b,c)")), Text(UTF("x^{2}^{3}")), Text(UTF("x^")), Text(UTF("x^-1")), Text(UTF("a_b")), Text(UTF("\\sin x")),
            Text(UTF("\\sqrt{x}")), Text(UTF("\\input{secret}")), Text(UTF("\\write18{cmd}")), Text(UTF("\\def\\x{x}")), Text(UTF("a%b")), Text(UTF("$x$")),
            Text(UTF("\\cdotx")), Text(UTF("\\fracx{x}{y}")), Text(UTF("\\mathit{x_1}")), Text(UTF("\\mathit{}")), Text(UTF("f(x)")), Text(UTF("2f(x)")), Text(UTF("-f(x)")), Text(UTF("f^{2}(x)")),
            Text(UTF("a\\left[b\\right]")), Text(UTF("\\left(a)")), Text(UTF("(a\\right)")), Text(UTF("1 2")), Text(UTF("x!!")), Text(UTF("\xD800"))};
        for (Text source : invalid) (void)latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(source); }, source);
        (void)latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(nullptr); });
        latexTrue(latexMessage(latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(Text(UTF("a+"))); })).contains(Text(UTF("offset 2"))));
        latexTrue(latexMessage(latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(Text(UTF("a+}"))); })).contains(Text(UTF("offset 2"))));
        latexTrue(latexMessage(latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(Text(UTF("\\frac{x}"))); })).contains(Text(UTF("offset 8"))));
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0416", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("symbolic LaTeX parser: bounded recursive syntax and large flat structures"));
        TestCommonTools::consolePrintTestApiStart(416, UTF16toUTF8(testDescr.str()));
        TextBuilder flat = TextBuilder(Text(UTF("x")));
        for (int i = 1; i < 50000; i++) flat.append(Text(UTF("+x")));
        LaTeXParser::NodePtr root = LaTeXParser::parse(flat.toString());
        latexEquals(LaTeXParser::Kind::ADD, root->getKind());
        latexEquals(flat.length(), root->getEndOffset());
        Stack<LaTeXParser::NodePtr> pending;
        pending.push(root); int count = 0;
        while (!pending.isEmpty()) { LaTeXParser::NodePtr node = pending.pop(); count++; for (LaTeXParser::NodePtr child : *node->getChildren()) pending.push(child); }
        latexEquals(99999, count);
        flat.append(Text(UTF("+x")));
        (void)latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(flat.toString()); });
        TextBuilder deep = TextBuilder(Text(UTF("x")));
        for (int i = 0; i < 300; i++) { deep.insert(0, UTF('(')); deep.append(UTF(')')); }
        (void)latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(deep.toString()); });
        TextBuilder signs = TextBuilder(); for (int i = 0; i < 300; i++) signs.append(UTF('-')); signs.append(UTF('x'));
        (void)latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(signs.toString()); });
        std::vector<Char> huge(1000001); fillChars(huge, UTF(' '));
        (void)latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(textFromChars(huge)); });
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0417", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("symbolic LaTeX parser: preserves literals and unbound symbols without calculating"));
        TestCommonTools::consolePrintTestApiStart(417, UTF16toUTF8(testDescr.str()));
        LaTeXParser::NodePtr unbound = LaTeXParser::parse(Text(UTF("\\mathit{unboundName}^{99999999999999999999999999999}")));
        latexEquals(Text(UTF("unboundName")), unbound->getChildren()->get(0)->getText());
        latexEquals(Text(UTF("99999999999999999999999999999")), unbound->getChildren()->get(1)->getText());
        latexEquals(Text(UTF("0002.300")), LaTeXParser::parse(Text(UTF("0002.300")))->getText());
        latexEquals(LaTeXParser::Kind::DIVIDE, LaTeXParser::parse(Text(UTF("\\frac{1}{0}")))->getKind());
        latexEquals(Text(UTF("DIVIDE(NUMBER:0,NUMBER:0)")), latexTreeShape(LaTeXParser::parse(Text(UTF("0/0")))));
        LaTeXParser::NodePtr first = LaTeXParser::parse(Text(UTF("x+1"))), second = LaTeXParser::parse(Text(UTF("y+2")));
        latexEquals(Text(UTF("ADD(SYMBOL:x,NUMBER:1)")), latexTreeShape(first));
        latexEquals(Text(UTF("ADD(SYMBOL:y,NUMBER:2)")), latexTreeShape(second));
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0418", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("symbolic LaTeX parser: independent parallel parses"));
        TestCommonTools::consolePrintTestApiStart(418, UTF16toUTF8(testDescr.str()));
        std::vector<std::future<Text>> calls;
        for (int i = 0; i < 32; i++) calls.push_back(std::async(std::launch::async, [] { return latexTreeShape(LaTeXParser::parse(Text(UTF("\\frac{x+1}{y}^{2}")))); }));
        for (auto& value : calls) latexEquals(Text(UTF("POWER(DIVIDE(ADD(SYMBOL:x,NUMBER:1),SYMBOL:y),NUMBER:2)")), value.get());
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0419", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("experimental LaTeX parser: explicit symbol typography survives grouping"));
        TestCommonTools::consolePrintTestApiStart(419, UTF16toUTF8(testDescr.str()));
        std::vector<std::vector<Text>> cases = {
            {Text(UTF("e")), Text(UTF("e")), Text(UTF("DEFAULT"))}, {Text(UTF("\\mathrm{e}")), Text(UTF("e")), Text(UTF("UPRIGHT"))}, {Text(UTF("\\mathit{e}")), Text(UTF("e")), Text(UTF("ITALIC"))},
            {Text(UTF("\\mathrm e")), Text(UTF("e")), Text(UTF("UPRIGHT"))}, {Text(UTF("\\mathit e")), Text(UTF("e")), Text(UTF("ITALIC"))},
            {Text(UTF("\\mathrm{km}")), Text(UTF("km")), Text(UTF("UPRIGHT"))}, {Text(UTF("\\mathit{km}")), Text(UTF("km")), Text(UTF("ITALIC"))},
            {Text(UTF("(\\mathrm e)")), Text(UTF("e")), Text(UTF("UPRIGHT"))}, {Text(UTF("{\\mathit{e}}")), Text(UTF("e")), Text(UTF("ITALIC"))},
            {Text(UTF("\\left(\\mathrm{km}\\right)")), Text(UTF("km")), Text(UTF("UPRIGHT"))},
            {Text(UTF("\\mathrm α")), Text(UTF("α")), Text(UTF("UPRIGHT"))}, {Text(UTF("\\mathit{\\_}")), Text(UTF("_")), Text(UTF("ITALIC"))}
        };
        for (std::vector<Text> c : cases) {
            LaTeXParser::NodePtr node = LaTeXParser::parse(c[0]);
            latexEquals(LaTeXParser::Kind::SYMBOL, node->getKind(), c[0]);
            latexEquals(c[1], node->getText(), c[0]);
            latexEquals(c[2], styleName(node->getSymbolStyle()), c[0]);
            latexEquals(c[0], node->getSourceText(), c[0]);
        }
        LaTeXParser::NodePtr power = LaTeXParser::parse(Text(UTF("\\mathrm e^{2}")));
        latexEquals(LaTeXParser::Kind::POWER, power->getKind());
        latexEquals(LaTeXParser::SymbolStyle::DEFAULT, power->getSymbolStyle());
        latexEquals(LaTeXParser::SymbolStyle::UPRIGHT, power->getChildren()->get(0)->getSymbolStyle());
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0420", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("experimental LaTeX parser: exhaustive closed BMP alphabet matches parser metadata"));
        TestCommonTools::consolePrintTestApiStart(420, UTF16toUTF8(testDescr.str()));
        Pattern reference = Pattern(Text(UTF("[A-Za-z]|")) + Text(ParserSymbol::UNICODE_NAME_REG_EXP));
        int symbols = 0, unicode = 0, numbers = 0;
        for (int code = 0; code <= 0xffff; code++) {
            Text input = charText(static_cast<Char>(code));
            if (reference.matches(input)) {
                LaTeXParser::NodePtr node = LaTeXParser::parse(input);
                latexEquals(LaTeXParser::Kind::SYMBOL, node->getKind(), Text(UTF("Character ")) + code);
                latexEquals(input, node->getText());
                latexEquals(1, node->getEndOffset());
                latexEquals(LaTeXParser::SymbolStyle::DEFAULT, node->getSymbolStyle());
                symbols++; if (code > 127) unicode++;
            } else if (code >= UTF('0') && code <= UTF('9')) {
                latexEquals(LaTeXParser::Kind::NUMBER, LaTeXParser::parse(input)->getKind()); numbers++;
            } else (void)latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(input); }, Text(UTF("Character ")) + code);
        }
        latexEquals(112, symbols);
        latexEquals(60, unicode);
        latexEquals(10, numbers);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0421", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("experimental LaTeX parser: quoted names and font command token boundaries"));
        TestCommonTools::consolePrintTestApiStart(421, UTF16toUTF8(testDescr.str()));
        std::vector<Text> names = {Text(UTF("x")), Text(UTF("speed")), Text(UTF("ABC123")), Text(UTF("x_1")), Text(UTF("_")), Text(UTF("_123")), Text(UTF("α")), Text(UTF("∑")), Text(UTF("ⅇ"))};
        for (Text name : names) {
            latexTrue(name.matches(ParserSymbol::nameOnlyTokenRegExp), name);
            Text input = Text(UTF("\\mathit{")) + name.replace(Text(UTF("_")), Text(UTF("\\_"))) + Text(UTF("}"));
            LaTeXParser::NodePtr node = LaTeXParser::parse(input);
            latexEquals(name, node->getText());
            latexEquals(LaTeXParser::SymbolStyle::ITALIC, node->getSymbolStyle());
        }
        LaTeXParser::NodePtr product = LaTeXParser::parse(Text(UTF("\\mathrm km")));
        latexEquals(LaTeXParser::Kind::MULTIPLY, product->getKind());
        latexEquals(Text(UTF("k")), product->getChildren()->get(0)->getText());
        latexEquals(LaTeXParser::SymbolStyle::UPRIGHT, product->getChildren()->get(0)->getSymbolStyle());
        latexEquals(Text(UTF("m")), product->getChildren()->get(1)->getText());
        latexEquals(LaTeXParser::SymbolStyle::DEFAULT, product->getChildren()->get(1)->getSymbolStyle());
        std::vector<Text> invalid = {Text(UTF("\\mathrm")), Text(UTF("\\mathit")), Text(UTF("\\mathrmex")), Text(UTF("\\mathrm 3")), Text(UTF("\\mathit{x٣}")),
            Text(UTF("\\mathit{ł}")), Text(UTF("\\mathrm{中}")), Text(UTF("\\mathit{ℵ}")), Text(UTF("\\mathit{αx}")), Text(UTF("\\mathit{xα}")),
            Text(UTF("\\mathit{αβ}")), Text(UTF("\\mathrm{1x}")), Text(UTF("\\mathrm{a_b}")), Text(UTF("\\mathit{\\input{x}}")), Text(UTF("\\mathrm\\quad e")), Text(UTF("\\mathrm\\,e")), Text(UTF("\\mathit\\quad\\_"))};
        for (Text input : invalid) (void)latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(input); }, input);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }
    TEST_CASE("testApi0422", "[API]") {
        TestCommonTools::testApiSettingsInit();
        bool testResult = false;
        Text testDescr = Text(UTF("experimental LaTeX parser: portable ASCII whitespace and invalid Unicode offsets"));
        TestCommonTools::consolePrintTestApiStart(422, UTF16toUTF8(testDescr.str()));
        for (Char c : std::vector<Char>{UTF(' '), UTF('\t'), UTF('\n'), UTF('\r'), UTF('\f'), UTF('\x000b')}) {
            LaTeXParser::NodePtr node = LaTeXParser::parse(c + Text(UTF("x")) + c + Text(UTF("+")) + c + Text(UTF("1")) + c);
            latexEquals(LaTeXParser::Kind::ADD, node->getKind());
        }
        for (Text input : std::vector<Text>{Text(UTF("x\x00a0+1")), Text(UTF("x\x2003+1")), Text(UTF("x\x3000+1")), Text(UTF("x+\xD835\xDC65")), Text(UTF("x+\xDC65")), Text(UTF("x+中"))}) {
            std::invalid_argument error = latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(input); });
            int expectedOffset = input.charAt(1) == UTF('+') ? 2 : 1;
            latexTrue(latexMessage(error).contains(Text(UTF("offset ")) + expectedOffset), latexMessage(error));
        }
        latexEquals(LaTeXParser::Kind::ADD, LaTeXParser::parse(Text(UTF("x\\quad+\\qquad 1")))->getKind());
        for (Text input : std::vector<Text>{Text(UTF("x^\\quad2")), Text(UTF("x^\\,2")), Text(UTF("\\frac\\quad{x}{y}")),
                Text(UTF("\\frac{x}\\quad{y}")), Text(UTF("\\operatorname\\quad{rem}(x,y)"))})
            (void)latexThrows<std::invalid_argument>([&] { return LaTeXParser::parse(input); }, input);
        testResult = true;
        TestCommonTools::consolePrintTestApiEnd(testResult);
        latexTrue(testResult);
    }

}
