/*
 * @(#)ExpressionTest.cpp        6.1.0    2024-09-24
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

#include "Miscellaneous.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/Argument.hpp"
#include "org/mariuszgromada/math/mxparser/ArgumentExtension.hpp"
#include "org/mariuszgromada/math/mxparser/CalcStepRecord.hpp"
#include "org/mariuszgromada/math/mxparser/Constant.hpp"
#include "org/mariuszgromada/math/mxparser/Expression.hpp"
#include "org/mariuszgromada/math/mxparser/Expression.hpp"
#include "org/mariuszgromada/math/mxparser/Function.hpp"
#include "org/mariuszgromada/math/mxparser/FunctionExtension.hpp"
#include "org/mariuszgromada/math/mxparser/FunctionExtensionVariadic.hpp"
#include "org/mariuszgromada/math/mxparser/License.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/BooleanAlgebra.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/MathConstants.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/NumberTheory.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/SpecialValueTrigonometric.hpp"
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/RecursiveArgument.hpp"
#include "org/mariuszgromada/math/mxparser/StringModel.hpp"
#include "org/mariuszgromada/math/mxparser/StringResources.hpp"
#include "org/mariuszgromada/math/mxparser/StringUtils.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Double.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Math.hpp"
#include <catch2/catch_test_macros.hpp>
#include <catch2/internal/catch_assertion_handler.hpp>
#include <catch2/internal/catch_decomposer.hpp>
#include <catch2/internal/catch_preprocessor_internal_stringify.hpp>

using namespace org::mariuszgromada::math::mxparser;
using namespace org::mariuszgromada::math::mxparser::mathcollection;
using namespace org::mariuszgromada::math::mxparser::parsertokens;
using namespace org::mariuszgromada::math::mxparser::wrapper;


TEST_CASE("testExpr0000", "[Expression]") {
	START_TESTS_EXPRESSION;
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "";
	mXparser::consolePrint("Empty expression string ...... ");
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0001", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2+1";
	TestCommonTools::consolePrintTestExprStart(1, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2 + 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0002", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1-2";
	TestCommonTools::consolePrintTestExprStart(2, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1 - 2;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0003", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2*5";
	TestCommonTools::consolePrintTestExprStart(3, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2 * 5;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0004", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "20/4";
	TestCommonTools::consolePrintTestExprStart(4, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 20.0 / 4.0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0005", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "-2+22";
	TestCommonTools::consolePrintTestExprStart(5, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -2 + 22;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0006", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "3-(-5)";
	TestCommonTools::consolePrintTestExprStart(6, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3 - (-5);
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0007", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "+5-(+7)";
	TestCommonTools::consolePrintTestExprStart(7, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = +5 - (+7);
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0008", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "-5+(-7)";
	TestCommonTools::consolePrintTestExprStart(8, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -5 + (-7);
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0009", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "-2*(3-5)+7";
	TestCommonTools::consolePrintTestExprStart(9, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -2 * (3 - 5) + 7;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0010", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "5.5*(2-3 + (5.3-7.89)/2)/2";
	TestCommonTools::consolePrintTestExprStart(10, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -6.31125;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0011", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2-(32-4)/(23+(4)/(5))-(2-4)*(4+6-98.2)+4";
	TestCommonTools::consolePrintTestExprStart(11, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -171.5764705882353;
	if (MathFunctions::abs(value - reg) < 0.000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0012", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2^3";
	TestCommonTools::consolePrintTestExprStart(12, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::pow(2, 3);
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0013", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2^(-3)";
	TestCommonTools::consolePrintTestExprStart(13, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::pow(2, -3);
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0014", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2^0.7";
	TestCommonTools::consolePrintTestExprStart(14, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::pow(2, 0.7);
	if (MathFunctions::abs(value - reg) < 0.00000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0015", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "4^3^2";
	TestCommonTools::consolePrintTestExprStart(15, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::pow(4, Math::pow(3, 2));
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0016", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(4^3)^2";
	TestCommonTools::consolePrintTestExprStart(16, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::pow(Math::pow(4, 3), 2);
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0017", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "0.9^0.8^0.7^0.6^0.5";
	TestCommonTools::consolePrintTestExprStart(17, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.914888338607593;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0018", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2=2";
	TestCommonTools::consolePrintTestExprStart(18, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0019", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2=3";
	TestCommonTools::consolePrintTestExprStart(19, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0020", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2<>3";
	TestCommonTools::consolePrintTestExprStart(20, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0021", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2<>2";
	TestCommonTools::consolePrintTestExprStart(21, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0022", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "3>2";
	TestCommonTools::consolePrintTestExprStart(22, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0023", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2>2";
	TestCommonTools::consolePrintTestExprStart(23, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0024", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "3>2";
	TestCommonTools::consolePrintTestExprStart(24, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0025", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2<3";
	TestCommonTools::consolePrintTestExprStart(25, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0026", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2<2";
	TestCommonTools::consolePrintTestExprStart(26, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0027", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "3<2";
	TestCommonTools::consolePrintTestExprStart(27, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0028", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2>=2";
	TestCommonTools::consolePrintTestExprStart(28, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0029", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "3>=2";
	TestCommonTools::consolePrintTestExprStart(29, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0030", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1>=2";
	TestCommonTools::consolePrintTestExprStart(30, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0031", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1<=2";
	TestCommonTools::consolePrintTestExprStart(31, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0032", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1<=1";
	TestCommonTools::consolePrintTestExprStart(32, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0033", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1<=0";
	TestCommonTools::consolePrintTestExprStart(33, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0034", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1 & 1";
	TestCommonTools::consolePrintTestExprStart(34, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0035", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1 & -1";
	TestCommonTools::consolePrintTestExprStart(35, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0036", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1 & 0";
	TestCommonTools::consolePrintTestExprStart(36, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0037", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "0 & 1";
	TestCommonTools::consolePrintTestExprStart(37, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0038", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "0 & 0";
	TestCommonTools::consolePrintTestExprStart(38, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0039", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1 | -1";
	TestCommonTools::consolePrintTestExprStart(39, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0040", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "0 | -1";
	TestCommonTools::consolePrintTestExprStart(40, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0041", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1 | 0";
	TestCommonTools::consolePrintTestExprStart(41, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0042", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "0 | 0";
	TestCommonTools::consolePrintTestExprStart(42, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0043", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "3>2 | 2>3";
	TestCommonTools::consolePrintTestExprStart(43, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0044", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "3>5 | 2>3";
	TestCommonTools::consolePrintTestExprStart(44, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0045", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "not((3>4) & (2>=2))";
	TestCommonTools::consolePrintTestExprStart(45, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0046", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "not(-5)";
	TestCommonTools::consolePrintTestExprStart(46, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0047", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "not(0)";
	TestCommonTools::consolePrintTestExprStart(47, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0048", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "if(0,1,2)";
	TestCommonTools::consolePrintTestExprStart(48, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0049", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "if(5,1,2)";
	TestCommonTools::consolePrintTestExprStart(49, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0050", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(n,1,10,n)";
	TestCommonTools::consolePrintTestExprStart(50, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 55;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0051", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "prod(n,1,5,n)";
	TestCommonTools::consolePrintTestExprStart(51, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 120;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0052", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 5);
	string expStr = "sin(x)-sum(n,0,10,(-1)^n*(x^(2*n+1))/(2*n+1)!)";
	TestCommonTools::consolePrintTestExprStart(52, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0053", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr d = new_Argument("d", 0.01);
	string expStr = "pi-2*sum(x,-1,1,d*sqrt(1-x^2),d)";
	TestCommonTools::consolePrintTestExprStart(53, expStr);
	ExpressionPtr testExp = new_Expression(expStr, d);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0054", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 1);
	string expStr = "1 - ( sin(x)^2+cos(x)^2 )";
	TestCommonTools::consolePrintTestExprStart(54, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0055", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 1);
	string expStr = "1 - ( sec(x)^2 - tan(x)^2 )";
	TestCommonTools::consolePrintTestExprStart(55, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0056", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 1);
	string expStr = "1 - ( cosec(x)^2 - ctan(x)^2 )";
	TestCommonTools::consolePrintTestExprStart(56, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0057", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 1);
	string expStr = "1 - ( cosec(x)^2 - ctan(x)^2 )";
	TestCommonTools::consolePrintTestExprStart(57, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0058", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 1);
	string expStr = "1 - ( csc(x)^2 - ctg(x)^2 )";
	TestCommonTools::consolePrintTestExprStart(58, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0059", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 1);
	string expStr = "1 - ( sec(x)^2 - tg(x)^2 )";
	TestCommonTools::consolePrintTestExprStart(59, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0060", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 1);
	string expStr = "tan(x) - sin(x)/cos(x)";
	TestCommonTools::consolePrintTestExprStart(60, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0061", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr y = new_Argument("y", 3);
	string expStr = "sin(x+y) - (sin(x)*cos(y)+cos(x)*sin(y))";
	TestCommonTools::consolePrintTestExprStart(61, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0062", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr y = new_Argument("y", 3);
	string expStr = "sin(x-y) - (sin(x)*cos(y)-cos(x)*sin(y))";
	TestCommonTools::consolePrintTestExprStart(62, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0063", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr y = new_Argument("y", 3);
	string expStr = "cos(x+y) - (cos(x)*cos(y)-sin(x)*sin(y))";
	TestCommonTools::consolePrintTestExprStart(63, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0064", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr y = new_Argument("y", 3);
	string expStr = "cos(x-y) - (cos(x)*cos(y)+sin(x)*sin(y))";
	TestCommonTools::consolePrintTestExprStart(64, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0065", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr y = new_Argument("y", 3);
	string expStr = "tg(x+y) - (tg(x)+tg(y)) / (1 - tg(x)*tg(y))";
	TestCommonTools::consolePrintTestExprStart(65, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0066", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr y = new_Argument("y", 3);
	string expStr = "tg(x-y) - (tg(x)-tg(y)) / (1 + tg(x)*tg(y))";
	TestCommonTools::consolePrintTestExprStart(66, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0067", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr y = new_Argument("y", 3);
	string expStr = "ctg(x+y) - (ctg(x)*ctg(y)-1) / (ctg(y)+ctg(x))";
	TestCommonTools::consolePrintTestExprStart(67, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0068", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr n = new_Argument("n", 10);
	string expStr = "sin(n*x) - sum(i,0,n,(-1)^i*C(n,2*i+1)*(cos(x)^(n-2*i-1))*(sin(x)^(2*i+1))) ";
	TestCommonTools::consolePrintTestExprStart(68, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, n);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0069", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 45);
	string expStr = "n*2^(n-1) - sum(i,1,n,i*C(n,i))";
	TestCommonTools::consolePrintTestExprStart(69, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0070", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "prod(i,2,6,1+1/i)";
	TestCommonTools::consolePrintTestExprStart(70, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 7.0 / 2.0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0071", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "prod(i,1,6,10)";
	TestCommonTools::consolePrintTestExprStart(71, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::pow(10, 6);
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0072", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "prod(i,1,6,i,0.5)";
	TestCommonTools::consolePrintTestExprStart(72, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	for (double ii = 1; ii < 6; ii += 0.5)
		reg *= ii;
	reg *= 6;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0073", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(n,1,5,prod(i,1,n,n*i))";
	TestCommonTools::consolePrintTestExprStart(73, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double sum = 0;
	for (double nn = 1; nn <= 5; nn++) {
		double reg = 1;
		for (double ii = 1; ii <= nn; ii++)
			reg *= nn * ii;
		sum += reg;
	}
	double reg = sum;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0074", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n");
	RecursiveArgumentPtr fib = new_RecursiveArgument("fib", "fib(n-1)+fib(n-2)", n);
	fib->addBaseCase(0, 0);
	fib->addBaseCase(1, 1);
	string expStr = "sum(n,0,5,fib(n))";
	TestCommonTools::consolePrintTestExprStart(74, expStr);
	ExpressionPtr testExp = new_Expression(expStr, fib);
	double value = testExp->calculate();
	double reg = 12;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0075", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n");
	RecursiveArgumentPtr fact = new_RecursiveArgument("fact", "n*fact(n-1)", n);
	fact->addBaseCase(0, 1);
	string expStr = "5!-fact(5)";
	TestCommonTools::consolePrintTestExprStart(75, expStr);
	ExpressionPtr testExp = new_Expression(expStr, fact);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0076", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	string expStr = "cos(x)-der(sin(x),x)";
	TestCommonTools::consolePrintTestExprStart(76, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0077", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr y = new_Argument("y", 3);
	string expStr = "-sin(x+y)-der(der(sin(x+y),x),y)";
	TestCommonTools::consolePrintTestExprStart(77, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0078", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr y = new_Argument("y", 3);
	string expStr = "cos(x*y)-x*y*sin(x*y)-der(der(sin(x*y),x),y)";
	TestCommonTools::consolePrintTestExprStart(78, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0079", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", -5);
	string expStr = "C(n,2)";
	TestCommonTools::consolePrintTestExprStart(79, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n);
	double value = testExp->calculate();
	double reg = 15;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0080", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 0);
	string expStr = "der+(abs(x),x)";
	TestCommonTools::consolePrintTestExprStart(80, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0081", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 0);
	string expStr = "der-(abs(x),x)";
	TestCommonTools::consolePrintTestExprStart(81, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = -1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0082", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 4);
	string expStr = "cos(x)-der(sum(n,0,10,(-1)^n*(x^(2*n+1))/(2*n+1)!),x)";
	TestCommonTools::consolePrintTestExprStart(82, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0083", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 7);
	ArgumentPtr k = new_Argument("k", 4);
	string expStr = "C(n,k) - ( C(n-1,k-1)+C(n-1,k) )";
	TestCommonTools::consolePrintTestExprStart(83, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0084", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	ArgumentPtr k = new_Argument("k", 6);
	string expStr = "C(n,k) - prod(i,1,k,n-i+1) / prod(i,1,k,i)";
	TestCommonTools::consolePrintTestExprStart(84, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0085", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	ArgumentPtr k = new_Argument("k", 6);
	string expStr = "C(n,k) - prod(i,1,k,(n-i+1)/i)";
	TestCommonTools::consolePrintTestExprStart(85, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	mXparser::consolePrintSettings();
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0086", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	ArgumentPtr k = new_Argument("k", 6);
	string expStr = "C(n,k) - C(n,n-k)";
	TestCommonTools::consolePrintTestExprStart(86, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0087", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	ArgumentPtr k = new_Argument("k", 6);
	string expStr = "C(n,0)+C(n,n)+C(0,0)";
	TestCommonTools::consolePrintTestExprStart(87, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 3;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0088", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	ArgumentPtr k = new_Argument("k", 6);
	string expStr = "C(n,k+1)-C(n,k)*(n-k)/(k+1)";
	TestCommonTools::consolePrintTestExprStart(88, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0089", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	string expStr = "2^n-sum(k,0,n,C(n,k))";
	TestCommonTools::consolePrintTestExprStart(89, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0090", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	string expStr = "C(2*n,n)-sum(k,0,n,C(n,k)^2)";
	TestCommonTools::consolePrintTestExprStart(90, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0091", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	string expStr = "sum(k,0,n,(-1)^k*C(n,k))";
	TestCommonTools::consolePrintTestExprStart(91, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0092", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	ArgumentPtr m = new_Argument("m", 3);
	ArgumentPtr s = new_Argument("s", 5);
	ArgumentPtr r = new_Argument("r", 4);
	string expStr = "C(r+s,m+n)-sum(k,0,n,C(r,m+k)*C(s,n-k))";
	TestCommonTools::consolePrintTestExprStart(92, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, m, r, s);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0093", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	ArgumentPtr k = new_Argument("k", 6);
	string expStr = "C(n,k)-(n/k)*C(n-1,k-1)";
	TestCommonTools::consolePrintTestExprStart(93, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0094", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	ArgumentPtr k = new_Argument("k", 6);
	string expStr = "(n-k)*C(n,k)-n*C(n-1,k)";
	TestCommonTools::consolePrintTestExprStart(94, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0095", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	ArgumentPtr k = new_Argument("k", 6);
	string expStr = "C(n,k) <= n^k/k!";
	TestCommonTools::consolePrintTestExprStart(95, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0096", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	ArgumentPtr k = new_Argument("k", 6);
	string expStr = "C(n,k) <= (n*e/k)^k";
	TestCommonTools::consolePrintTestExprStart(96, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0097", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 13);
	ArgumentPtr k = new_Argument("k", 6);
	string expStr = "C(n,k) >= (n/k)^k";
	TestCommonTools::consolePrintTestExprStart(97, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0098", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 3);
	string expStr = "sin(3)-sin(2)-int(cos(x),x,2,3)";
	TestCommonTools::consolePrintTestExprStart(98, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0099", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr i = new_Argument("i", 5);
	string expStr = "2*i+sum(i,1,10,i)";
	TestCommonTools::consolePrintTestExprStart(99, expStr);
	ExpressionPtr testExp = new_Expression(expStr, i);
	double value = testExp->calculate();
	double reg = 65;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0100", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 3);
	string expStr = "sin(x)-sin(x-1)-int(cos(x),x,2,3)";
	TestCommonTools::consolePrintTestExprStart(100, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0101", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("mg", "sin(x)+cos(y)", "x", "y");
	ArgumentPtr x = new_Argument("x", 3);
	ArgumentPtr y = new_Argument("y", 2);
	string expStr = "sin(x)+cos(y)-mg(x,y)";
	TestCommonTools::consolePrintTestExprStart(101, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	testExp->addDefinitions(f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0102", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("mg", "sin(x)+cos(y)", "x", "y");
	string expStr = "der(sin(x)+cos(y),x)-der(mg(x,y),x)";
	TestCommonTools::consolePrintTestExprStart(102, expStr);
	ExpressionPtr testExp = new_Expression(expStr, new_Argument("x", 3), new_Argument("y", 2));
	testExp->addDefinitions(f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.00000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0103", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f", "x^2", "x");
	FunctionPtr g = new_Function("g", "f(x)^2", "x");
	g->addDefinitions(f);
	string expStr = "g(x)";
	TestCommonTools::consolePrintTestExprStart(103, expStr);
	ExpressionPtr testExp = new_Expression(expStr, new_Argument("x", 3));
	testExp->addDefinitions(g);
	double value = testExp->calculate();
	double reg = 81;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0104", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f", "sin(x)", "x");
	FunctionPtr g = new_Function("g", "cos(x)", "x");
	string expStr = "der( f(x)*g(x), x) - ( der(f(x), x)*g(x) + f(x)*der(g(x), x) )";
	TestCommonTools::consolePrintTestExprStart(104, expStr);
	ExpressionPtr testExp = new_Expression(expStr, new_Argument("x", 3));
	testExp->addDefinitions(f, g);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0105", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f", "sin(x)", "x");
	FunctionPtr g = new_Function("g", "cos(x)", "x");
	string expStr = "der( f(x)/g(x), x) - ( der(f(x), x)*g(x) - f(x)*der(g(x), x) )/g(x)^2";
	TestCommonTools::consolePrintTestExprStart(105, expStr);
	ExpressionPtr testExp = new_Expression(expStr, new_Argument("x", 3));
	testExp->addDefinitions(f, g);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0106", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f", "sin(x)", "x");
	string expStr = "der( int(f(t), t, 0, x), x) - f(x)";
	TestCommonTools::consolePrintTestExprStart(106, expStr);
	ExpressionPtr testExp = new_Expression(expStr, new_Argument("x", 3));
	testExp->addDefinitions(f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0107", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f", "sin(x)", "x");
	FunctionPtr g = new_Function("g", "cos(x)", "x");
	string expStr = "der(f(x)+g(x), x) - ( der(f(x), x) + der(g(x),x) )";
	TestCommonTools::consolePrintTestExprStart(107, expStr);
	ExpressionPtr testExp = new_Expression(expStr, new_Argument("x", 3));
	testExp->addDefinitions(f, g);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0108", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr a = new_Argument("a", 2);
	ArgumentPtr b = new_Argument("b", 2);
	FunctionPtr f = new_Function("f", "sin(x)", "x");
	FunctionPtr g = new_Function("g", "cos(x)", "x");
	string expStr = "der(a*f(x)+b*g(x), x) - ( a*der(f(x), x) + b*der(g(x),x) )";
	TestCommonTools::consolePrintTestExprStart(108, expStr);
	ExpressionPtr testExp = new_Expression(expStr, new_Argument("x", 3), a, b);
	testExp->addDefinitions(f, g);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0109",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f", "sin(x)", "x");
	FunctionPtr g = new_Function("g", "cos(x)", "x");
	FunctionPtr h = new_Function("h", "x^2", "x");
	string expStr =
			"der(f(x)*g(x)*h(x), x) - ( der(f(x), x)*g(x)*h(x) + f(x)*der(g(x), x)*h(x) + f(x)*g(x)*der(h(x), x))";
	TestCommonTools::consolePrintTestExprStart(109, expStr);
	ExpressionPtr testExp = new_Expression(expStr, new_Argument("x", 3));
	testExp->addDefinitions(f, g, h);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0110", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f", "sin(x)", "x");
	string expStr = "der(ln(f(x)), x) - der(f(x), x) / f(x)";
	TestCommonTools::consolePrintTestExprStart(110, expStr);
	ExpressionPtr testExp = new_Expression(expStr, new_Argument("x", 3));
	testExp->addDefinitions(f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0111", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f", "sin(x)", "x");
	ArgumentPtr a = new_Argument("a", Math::PI);
	string expStr = "der( f(x)^a, x) - a*f(x)^(a-1)*der(f(x), x)";
	TestCommonTools::consolePrintTestExprStart(111, expStr);
	ExpressionPtr testExp = new_Expression(expStr, new_Argument("x", 3), a);
	testExp->addDefinitions(f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0112", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f", "sin(x)^2", "x");
	FunctionPtr g = new_Function("g", "cos(x)^2", "x");
	string expStr = "der( f(x)^g(x), x) - f(x)^g(x)*( der(f(x), x)*g(x)/f(x) + der(g(x), x)*ln(f(x)) )";
	TestCommonTools::consolePrintTestExprStart(112, expStr);
	ExpressionPtr testExp = new_Expression(expStr, new_Argument("x", 3));
	testExp->addDefinitions(f, g);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0113", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	FunctionPtr f = new_Function("f", "sin(x)", "x");
	FunctionPtr g = new_Function("g", "cos(x)", "x");
	FunctionPtr h = new_Function("h", "int(f(t),t,0,x)", "x");
	h->addDefinitions(f);
	ArgumentPtr a = new_Argument("a", 2);
	ArgumentPtr b = new_Argument("b", 4);
	ArgumentPtr x = new_Argument("x", 3);
	string expStr = "int(f(x)*g(x),x,a,b) - ( h(b)*g(b)-h(a)*g(a) - int( h(x)*der(g(x),x), x, a, b) )";
	TestCommonTools::consolePrintTestExprStart(113, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, a, b);
	testExp->addDefinitions(f, g, h);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0114", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f", "ln(x)", "x");
	FunctionPtr g = new_Function("g", "x^2+2", "x");
	ArgumentPtr x = new_Argument("x", 10);
	ArgumentPtr t = new_Argument("t", "g(x)", x);
	t->addDefinitions(g);
	string expStr = "der( f(g(x)), x) - der( f(t), t)*der( g(x), x)";
	TestCommonTools::consolePrintTestExprStart(114, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, t);
	testExp->addDefinitions(f, g);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0115", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n");
	RecursiveArgumentPtr fact1 = new_RecursiveArgument("fact1", "n*fact1(n-1)", n);
	fact1->addBaseCase(0, 1);
	RecursiveArgumentPtr fact2 = new_RecursiveArgument("fact2", "if(n>0, n*fact2(n-1), 1)", n);
	string expStr = "sum(i,0,10,fact1(i)-fact2(i))";
	TestCommonTools::consolePrintTestExprStart(115, expStr);
	ExpressionPtr testExp = new_Expression(expStr, fact1, fact2);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0116", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n");
	RecursiveArgumentPtr fib1 = new_RecursiveArgument("fib1", "fib1(n-1)+fib1(n-2)", n);
	fib1->addBaseCase(0, 0);
	fib1->addBaseCase(1, 1);
	RecursiveArgumentPtr fib2 = new_RecursiveArgument("fib2", "if( n>1, fib2(n-1)+fib2(n-2), if(n=1,1,0) )", n);
	string expStr = "sum(i,0,10,fib1(i)-fib2(i))";
	TestCommonTools::consolePrintTestExprStart(116, expStr);
	ExpressionPtr testExp = new_Expression(expStr, fib1, fib2);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0117", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr Cnk = new_Function("Cnk", "if( k>0, if( k<n, Cnk(n-1,k-1)+Cnk(n-1,k), 1), 1)", "n", "k");
	string expStr = "C(10,5)-Cnk(10,5)";
	TestCommonTools::consolePrintTestExprStart(117, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(Cnk);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0118", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n");
	RecursiveArgumentPtr fib1 = new_RecursiveArgument("fib1", "fib1(n-1)+fib1(n-2)", n);
	fib1->addBaseCase(0, 0);
	fib1->addBaseCase(1, 1);
	RecursiveArgumentPtr fib2 = new_RecursiveArgument("fib2", "if( n>1, fib2(n-1)+fib2(n-2), if(n>0,1,0) )", n);
	FunctionPtr fib3 = new_Function("fib3", "if(n>1, fib3(n-1)+fib3(n-2), if(n>0,1,0))", "n");
	string expStr = "sum(i,1,10,(fib1(i) = fib2(i)) & (fib2(i) = fib3(i)) )";
	TestCommonTools::consolePrintTestExprStart(118, expStr);
	ExpressionPtr testExp = new_Expression(expStr, fib1, fib2);
	testExp->addDefinitions(fib3);
	double value = testExp->calculate();
	double reg = 10;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0119", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr m = new_Argument("m");
	ArgumentPtr n = new_Argument("n", "m-1", m);
	ArgumentPtr x = new_Argument("x", 3);
	FunctionPtr H = new_Function("H", "if(m>1, 2*x*H(n,x)-2*n*H(n-1,x), if(m>0, 2*x, 1) )", m, x, n);
	H->setParametersNumber(2);
	string expStr = "H(0,x) + H(1,x) + H(2,x) + H(3,x) - ( (1) + (2*x) + (4*x^2-2) + (8*x^3-12*x) )";
	TestCommonTools::consolePrintTestExprStart(119, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	testExp->addDefinitions(H);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0120", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableCanonicalRounding();
	ArgumentPtr m = new_Argument("m", 4);
	ArgumentPtr n = new_Argument("n", "m-1", m);
	ArgumentPtr x = new_Argument("x", 3);
	FunctionPtr H = new_Function("H", "if(m>1, 2*x*H(n,x)-2*n*H(n-1,x), if(m>0, 2*x, 1) )", m, x, n);
	H->setParametersNumber(2);
	ArgumentPtr k = new_Argument("k", 5);
	string expStr = "der( H(k,x), x) - 2*k*H(k-1,x)";
	TestCommonTools::consolePrintTestExprStart(120, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, k);
	testExp->addDefinitions(H);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0121", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr T = new_Function("T", "if(k>1, 2*x*T(k-1,x)-T(k-2,x), if(k>0, x, 1) )", "k", "x");
	ArgumentPtr k = new_Argument("k", 5);
	ArgumentPtr x = new_Argument("x", 3);
	string expStr = "T(k,x) - ( (x + sqrt(x^2-1))^k + (x - sqrt(x^2-1))^k)/2";
	TestCommonTools::consolePrintTestExprStart(121, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, k);
	testExp->addDefinitions(T);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0122", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr T1 = new_Function("T1", "if(k>1, 2*x*T1(k-1,x)-T1(k-2,x), if(k>0, x, 1) )", "k", "x");
	FunctionPtr T2 = new_Function(
		"T2", "if(x >= 1, cosh(k*arcosh(x)), if(x <= -1, ((-1)^k)*cosh(k*arcosh(-x)), cos(k*acos(x))) )", "k", "x");
	ArgumentPtr k = new_Argument("k", 5);
	string expStr = "T1(k,3)-T2(k,3) + T1(k,-3)-T2(k,-3) + T1(k,-0.5)-T2(k,-0.5) + T1(k,0.5)-T2(k,0.5)";
	TestCommonTools::consolePrintTestExprStart(122, expStr);
	ExpressionPtr testExp = new_Expression(expStr, k);
	testExp->addDefinitions(T1, T2);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) <= 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);































	CHECK(testResult);
}

TEST_CASE("testExpr0123",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr =
			"pi+e+[gam]+[phi]+[PN]+[B*]+[F'd]+[F'a]+[C2]+[M1]+[B2]+[B4]+[BN'L]+[Kat]+[K*]+[K.]+[B'L]+[RS'm]+[EB'e]+[Bern]+[GKW'l]+[HSM's]+[lm]+[Cah]+[Ll]+[AG]+[L*]+[L.]+[Dz3]+[A3n]+[Bh]+[Pt]+[L2]+[Nv]+[Ks]+[Kh]+[FR]+[La]+[P2]+[Om]+[MRB]+[li2]+[EG]";
	TestCommonTools::consolePrintTestExprStart(123, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3.14159265358979323846264338327950288 + /*Pi,Archimedes'constantorLudolph'snumber*/
	             2.71828182845904523536028747135266249 + /*Napier'sconstant,orEuler'snumber,baseofNaturallogarithm*/
	             0.57721566490153286060651209008240243 + /*Euler-Mascheroniconstant*/
	             1.61803398874989484820458683436563811 + /*Goldenratio*/
	             1.32471795724474602596090885447809734 + /*Plasticconstant*/
	             0.70258 + /*Embree-Trefethenconstant*/
	             4.66920160910299067185320382046620161 + /*Feigenbaumconstant*/
	             2.50290787509589282228390287321821578 + /*Feigenbaumconstant*/
	             0.66016181584686957392781211001455577 + /*Twinprimeconstant*/
	             0.26149721284764278375542683860869585 + /*Meissel-Mertensconstant*/
	             1.902160583104 + /*Brun'sconstantfortwinpr imes*/
	             0.8705883800 + /*Brun'sconstantforprimequadruplets*/
	             -2.7E-9 + /*deBruijn-Newmanconstant*/
	             0.91596559417721901505460351493238411 + /*Catalan'sconstant*/
	             0.76422365358922066299069873125009232 + /*Landau-Ramanujanconstant*/
	             1.13198824 + /*Viswanath'sconstant*/
	             1 + /*Legendre'sconstant*/
	             1.45136923488338105028396848589202744 + /*Ramanujan-Soldnerconstant*/
	             1.60669515241529176378330152319092458 + /*Erdős-Borweinconstant*/
	             0.28016949902386913303 + /*Bernstein'sconstant[29]*/
	             0.30366300289873265859744812190155623 + /*Gauss-Kuzmin-Wirsingconstant*/
	             0.35323637185499598454 + /*Hafner-Sarnak-McCurleyconstant*/
	             0.62432998854355087099293638310083724 + /*Golomb-Dickmanconstant*/
	             0.6434105463 + /*Cahen'sconstant*/
	             0.66274341934918158097474209710925290 + /*Laplacelimit*/
	             0.8093940205 + /*Alladi-Grinsteadconstant[30]*/
	             1.0986858055 + /*Lengyel'sconstant[31]*/
	             3.27582291872181115978768188245384386 + /*Lévy'sconstant*/
	             1.20205690315959428539973816151144999 + /*Apéry'sconstant*/
	             1.30637788386308069046861449260260571 + /*Mills'constant*/
	             1.45607494858268967139959535111654356 + /*Backhouse'sconstant[32]*/
	             1.4670780794 + /*Porter'sconstant[33]*/
	             1.5396007178 + /*Lieb'ssquareiceconstant[34]*/
	             1.70521114010536776428855145343450816 + /*Niven'sconstant*/
	             2.58498175957925321706589358738317116 + /*Sierpiński'sconstant*/
	             2.68545200106530644530971483548179569 + /*Khinchin'sconstant*/
	             2.80777024202851936522150118655777293 + /*Fransén-Robinsonconstant*/
	             0.5432589653429767 + /*Landau'sconstant*/
	             2.29558714939263807403429804918949039 + /*Parabolicconstant*/
	             0.56714329040978387299996866221035555 + /*Omegaconstant*/
	             0.18785964246206712024851793405427 + /*MRBconstant*/
	             1.045163780117492784844588889194613136522615578151 + /* l2(2) */
	             0.596347362323194074341078499369279376074 /* Gompertz Constant */
			;
	if (MathFunctions::abs(value - reg) <= 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0124", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr m = new_Argument("m", 4);
	ArgumentPtr n = new_Argument("n", "m-1", m);
	ArgumentPtr x = new_Argument("x", 3);
	FunctionPtr H = new_Function("H", "if(m>1, 2*x*H(n,x)-2*n*H(n-1,x), if(m>0, 2*x, 1) )", m, x, n);
	H->setParametersNumber(2);
	ArgumentPtr k = new_Argument("k", 5);
	string expStr = "der( H(k,x), x) - 2*k*H(k-1,x)";
	ExpressionPtr testExp = new_Expression(expStr, x, k);
	testExp->addDefinitions(H);
	bool syn1 = testExp->checkSyntax();
	m->setArgumentName("m1");
	bool syn2 = testExp->getSyntaxStatus();
	if ((syn1) && (!syn2))
		testResult = true;
	double value = 0;
	if (syn2) value = 1;
	double reg = 0;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0125", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2==2";
	TestCommonTools::consolePrintTestExprStart(125, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0126", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2 != 3";
	TestCommonTools::consolePrintTestExprStart(126, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0127", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2 ~= 3";
	TestCommonTools::consolePrintTestExprStart(127, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0128", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1 && 1";
	TestCommonTools::consolePrintTestExprStart(128, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0129", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1 || -1";
	TestCommonTools::consolePrintTestExprStart(129, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0130", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "~1";
	TestCommonTools::consolePrintTestExprStart(130, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0131", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2+~(1-1)!";
	TestCommonTools::consolePrintTestExprStart(131, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0132", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	string expStr = "if( int(2*x,x,0,pi) > 0 , 1, 2)";
	TestCommonTools::consolePrintTestExprStart(132, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0133", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	string expStr = "if( -int(2*x,x,0,pi) > 0 , 1, 2)";
	TestCommonTools::consolePrintTestExprStart(133, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0134", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.00000001);
	string expStr = "sum(n, 0, 10, if ( if( sin(n*pi/2) > 0, 1, 2) >= 2, 4, 2) )";
	TestCommonTools::consolePrintTestExprStart(134, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 38;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0135", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sin(0)";
	TestCommonTools::consolePrintTestExprStart(135, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0136", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "cos(0) - 1";
	TestCommonTools::consolePrintTestExprStart(136, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0137", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "tan(0) - 0";
	TestCommonTools::consolePrintTestExprStart(137, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0138", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "tg(0) - 0";
	TestCommonTools::consolePrintTestExprStart(138, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0139", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ctan(pi/2) - 0";
	TestCommonTools::consolePrintTestExprStart(139, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0140", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ctg(pi/2) - 0";
	TestCommonTools::consolePrintTestExprStart(140, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0141", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "cot(pi/2) - 0";
	TestCommonTools::consolePrintTestExprStart(141, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0142", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sec(0) - 1";
	TestCommonTools::consolePrintTestExprStart(142, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0143", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "cosec(pi/2) - 1";
	TestCommonTools::consolePrintTestExprStart(143, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0144", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "csc(pi/2) - 1";
	TestCommonTools::consolePrintTestExprStart(144, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0145", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "asin(0.5) - pi/6";
	TestCommonTools::consolePrintTestExprStart(145, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0146", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arsin(0) - 0";
	TestCommonTools::consolePrintTestExprStart(146, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0147", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcsin(1) - pi/2";
	TestCommonTools::consolePrintTestExprStart(147, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0148", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "acos(0) - pi/2";
	TestCommonTools::consolePrintTestExprStart(148, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0149", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcos(0.5) - pi/3";
	TestCommonTools::consolePrintTestExprStart(149, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0150", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arccos(-1) - pi";
	TestCommonTools::consolePrintTestExprStart(150, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0151", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "atan(0) - 0";
	TestCommonTools::consolePrintTestExprStart(151, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0152", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arctan(1) - pi/4";
	TestCommonTools::consolePrintTestExprStart(152, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0153", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "atg(1) - pi/4";
	TestCommonTools::consolePrintTestExprStart(153, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0154", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arctg(1) - pi/4";
	TestCommonTools::consolePrintTestExprStart(154, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0155", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "actan(0) - pi/2";
	TestCommonTools::consolePrintTestExprStart(155, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0156", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcctan(1) - pi/4";
	TestCommonTools::consolePrintTestExprStart(156, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0157", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "actg(1) - pi/4";
	TestCommonTools::consolePrintTestExprStart(157, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0158", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcctg(1) - pi/4";
	TestCommonTools::consolePrintTestExprStart(158, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0159", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "acot(1) - pi/4";
	TestCommonTools::consolePrintTestExprStart(159, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0160", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arccot(1) - pi/4";
	TestCommonTools::consolePrintTestExprStart(160, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0161", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ln(e) - 1";
	TestCommonTools::consolePrintTestExprStart(161, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0162", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ln(e^2) - 2";
	TestCommonTools::consolePrintTestExprStart(162, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0163", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "log2(8) - 3";
	TestCommonTools::consolePrintTestExprStart(163, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0164", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "log10(1000) - 3";
	TestCommonTools::consolePrintTestExprStart(164, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0165", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "rad(180) - pi";
	TestCommonTools::consolePrintTestExprStart(165, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0166", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "exp(2) - e^2";
	TestCommonTools::consolePrintTestExprStart(166, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0167", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sqrt(25) - 5";
	TestCommonTools::consolePrintTestExprStart(167, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0168", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sinh(ln([phi])) - 0.5";
	TestCommonTools::consolePrintTestExprStart(168, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0169", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "cosh(ln([phi])) - 0.5*sqrt(5)";
	TestCommonTools::consolePrintTestExprStart(169, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0170", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "tanh(ln([phi])) - 1/sqrt(5)";
	TestCommonTools::consolePrintTestExprStart(170, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0171", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "tgh(ln([phi])) - 1/sqrt(5)";
	TestCommonTools::consolePrintTestExprStart(171, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0172", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ctanh(ln([phi])) - sqrt(5)";
	TestCommonTools::consolePrintTestExprStart(172, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0173", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "coth(ln([phi])) - sqrt(5)";
	TestCommonTools::consolePrintTestExprStart(173, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0174", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ctgh(ln([phi])) - sqrt(5)";
	TestCommonTools::consolePrintTestExprStart(174, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0175", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sech(ln([phi])) - 1/(0.5*sqrt(5))";
	TestCommonTools::consolePrintTestExprStart(175, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0176", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "csch(ln([phi])) - 2";
	TestCommonTools::consolePrintTestExprStart(176, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0177", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "cosech(ln([phi])) - 2";
	TestCommonTools::consolePrintTestExprStart(177, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0178", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "deg(pi) - 180";
	TestCommonTools::consolePrintTestExprStart(178, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0179", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "abs(-1) - 1";
	TestCommonTools::consolePrintTestExprStart(179, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0180", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sgn(1) - 1";
	TestCommonTools::consolePrintTestExprStart(180, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0181", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sgn(0) - 0";
	TestCommonTools::consolePrintTestExprStart(181, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0182", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "floor(1.2) - 1";
	TestCommonTools::consolePrintTestExprStart(182, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0183", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "floor(1.9) - 1";
	TestCommonTools::consolePrintTestExprStart(183, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0184", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "floor(-1.9) - (-2)";
	TestCommonTools::consolePrintTestExprStart(184, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0185", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ceil(1.2) - 2";
	TestCommonTools::consolePrintTestExprStart(185, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0186", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ceil(1.9) - 2";
	TestCommonTools::consolePrintTestExprStart(186, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0187", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ceil(-1.2) - (-1)";
	TestCommonTools::consolePrintTestExprStart(187, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0188", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "asinh(0.5) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(188, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0189", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arsinh(0.5) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(189, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0190", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "acosh(0.5*sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(190, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0191", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcosh(0.5*sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(191, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0192", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arccosh(0.5*sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(192, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0193", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "atanh(1/sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(193, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0194", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arctanh(1/sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(194, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0195", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "atgh(1/sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(195, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0196", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arctgh(1/sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(196, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0197", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "actanh(sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(197, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0198", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcctanh(sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(198, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0199", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "acoth(sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(199, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0200", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcoth(sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(200, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0201", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arccoth(sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(201, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0202", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "actgh(sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(202, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0203", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcctgh(sqrt(5)) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(203, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0204", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "asech(1/(0.5*sqrt(5))) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(204, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0205", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arsech(1/(0.5*sqrt(5))) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(205, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0206", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcsech(1/(0.5*sqrt(5))) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(206, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0207", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "acsch(2) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(207, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0208", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcsch(2) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(208, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0209", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arccsch(2) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(209, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0210", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "acosech(2) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(210, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0211", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcosech(2) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(211, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0212", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arccosech(2) - ln([phi])";
	TestCommonTools::consolePrintTestExprStart(212, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0213", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "log(2,8) - 3";
	TestCommonTools::consolePrintTestExprStart(213, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0214", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "min(2,3) - 2";
	TestCommonTools::consolePrintTestExprStart(214, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0215", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "max(2,3) - 3";
	TestCommonTools::consolePrintTestExprStart(215, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0216", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mod(10,6) - 4";
	TestCommonTools::consolePrintTestExprStart(216, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0217", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "if(1,2,3) - 2";
	TestCommonTools::consolePrintTestExprStart(217, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0218", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "if(0,2,3) - 3";
	TestCommonTools::consolePrintTestExprStart(218, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0219", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "iff(1, 2) - 2";
	TestCommonTools::consolePrintTestExprStart(219, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0220", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "iff(0, 2)";
	TestCommonTools::consolePrintTestExprStart(220, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0221", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "iff(0, 2, 1, 2) - 2";
	TestCommonTools::consolePrintTestExprStart(221, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0222", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "iff(0, 2, 1, 2, 3, 4) - 2";
	TestCommonTools::consolePrintTestExprStart(222, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0223", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "iff(0, 2, 1, 2, 0, 4) - 2";
	TestCommonTools::consolePrintTestExprStart(223, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0224", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "iff(0, 2, 0, 2, 1, 4) - 4";
	TestCommonTools::consolePrintTestExprStart(224, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(value - reg) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0225", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "iff(0, 2, 0, 2, 0, 4)";
	TestCommonTools::consolePrintTestExprStart(225, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0226", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	string expStr = "Sinc(x) - prod(n, 1, 16, cos(x / 2^n) )";
	TestCommonTools::consolePrintTestExprStart(226, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0227", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	string expStr = "sinc(x) - prod(n, 1, 100, (1 - x^2 / n^2) )";
	TestCommonTools::consolePrintTestExprStart(227, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0228", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	string expStr = "Sa(x) - prod(n, 1, 100, (1 - x^2 / n^2) )";
	TestCommonTools::consolePrintTestExprStart(228, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0229", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 10);
	string expStr = "Bell(n) - sum(k, 0, n, Stirl2(n,k) )";
	TestCommonTools::consolePrintTestExprStart(229, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0230", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 10);
	ArgumentPtr k = new_Argument("k", 5);
	string expStr = "Worp(n, k) - k! * Stirl2(n+1, k+1)";
	TestCommonTools::consolePrintTestExprStart(230, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0231", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 10);
	string expStr = "Bern(n,0) - sum(k, 0, n, ( (-1)^k )* ( Worp(n, k) / ( k+1 ) ) )";
	TestCommonTools::consolePrintTestExprStart(231, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0232", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr n = new_Argument("n", 15);
	ArgumentPtr k = new_Argument("k", 5);
	string expStr = "sum(p, k, n, Stirl1(n, p) * C(p,k)) - Stirl1(n+1, k+1)";
	TestCommonTools::consolePrintTestExprStart(232, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, k);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0233", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = string("") +
	                "chi(1, 0, 2) + " +
	                "CHi(1, 0, 2) + " +
	                "Chi(1, 0, 2) + " +
	                "cHi(1, 0, 2) + " +
	                "chi(0, 0, 2) + " +
	                "CHi(0, 0, 2) + " +
	                "Chi(0, 0, 2) + " +
	                "cHi(0, 0, 2) + " +
	                "chi(2, 0, 2) + " +
	                "CHi(2, 0, 2) + " +
	                "Chi(2, 0, 2) + " +
	                "cHi(2, 0, 2)";
	TestCommonTools::consolePrintTestExprStart(233, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 8;
	if (MathFunctions::abs(reg - value) < 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0234", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2 + 10#7 + 3";
	TestCommonTools::consolePrintTestExprStart(234, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 8;
	if (MathFunctions::abs(reg - value) < 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0235", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 5);
	string expStr = "int( chi(t, 0, x), t, 0, x) - x";
	TestCommonTools::consolePrintTestExprStart(235, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0236", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 5);
	string expStr = "int( CHi(t, 0, x), t, 0, x) - x";
	TestCommonTools::consolePrintTestExprStart(236, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0237", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 5);
	string expStr = "int( Chi(t, 0, x), t, 0, x) - x";
	TestCommonTools::consolePrintTestExprStart(237, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0238", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 5);
	string expStr = "int( cHi(t, 0, x), t, 0, x) - x";
	TestCommonTools::consolePrintTestExprStart(238, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0239", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ConFrac(1,2,3,5,6,7) - ConPol(1,2,3,4,5,6,7) / ConPol(2,3,4,5,6,7)";
	TestCommonTools::consolePrintTestExprStart(239, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0240", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "min(1,2,3,4,5,-5,343,3)";
	TestCommonTools::consolePrintTestExprStart(240, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -5;
	if (MathFunctions::abs(reg - value) < 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0241", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "max(1,2,3,4,5,-5,343,3)";
	TestCommonTools::consolePrintTestExprStart(241, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 343;
	if (MathFunctions::abs(reg - value) < 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0242", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 0.5);
	string expStr = "ConPol(x,x,x,x,x,x) - sum(k, 0, 6, C(6-k, k) * x^(6-2*k))";
	TestCommonTools::consolePrintTestExprStart(242, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0243", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr m = new_Argument("m", 5);
	ArgumentPtr n = new_Argument("n", 10);
	string expStr = "Euler(n,m) -  sum(k,0,m, C(n+1,k)*((m+1-k)^n)*(-1)^k)";
	TestCommonTools::consolePrintTestExprStart(243, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n, m);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0244", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	FunctionPtr f = new_Function("f", "sin(x)+cos(x)", "x");
	string expStr = "diff(f(x), x) - ( f(x+1)-f(x) )";
	TestCommonTools::consolePrintTestExprStart(244, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	testExp->addDefinitions(f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0245", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr dh = new_Argument("h", 1);
	FunctionPtr f = new_Function("f", "sin(x)+cos(x)", "x");
	string expStr = "diff(f(x), x, h/2) - ( f(x+h/2)-f(x) )";
	TestCommonTools::consolePrintTestExprStart(245, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, dh);
	testExp->addDefinitions(f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0246", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	FunctionPtr f = new_Function("f", "sin(x)+cos(x)", "x");
	string expStr = "difb(f(x), x) - ( f(x)-f(x-1) )";
	TestCommonTools::consolePrintTestExprStart(246, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	testExp->addDefinitions(f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0247", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 2);
	ArgumentPtr dh = new_Argument("h", 1);
	FunctionPtr f = new_Function("f", "sin(x)+cos(x)", "x");
	string expStr = "difb(f(x), x, h/2) - ( f(x)-f(x-h/2) )";
	TestCommonTools::consolePrintTestExprStart(247, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, dh);
	testExp->addDefinitions(f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0248", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr fibr = new_Function("fib", "if(n>1, fib(n-1)+fib(n-2), if(n>0,1,0))", "n");
	string expStr = "sum(i,0,10,Fib(i) - fib(i))";
	TestCommonTools::consolePrintTestExprStart(248, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(fibr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0249", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr luc = new_Function("luc", "if(n>1, luc(n-1)+luc(n-2), if(n>0,1,2))", "n");
	string expStr = "sum(i,0,10,Luc(i) - luc(i))";
	TestCommonTools::consolePrintTestExprStart(249, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(luc);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0250", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(i,1,10,harm(i)) - sum(i,1,10,sum(k,1,i,1/k))";
	TestCommonTools::consolePrintTestExprStart(250, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0251", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p --> q";
	TestCommonTools::consolePrintTestExprStart(251, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0252", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p <-- q";
	TestCommonTools::consolePrintTestExprStart(252, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0253", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p <-- q";
	TestCommonTools::consolePrintTestExprStart(253, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0254", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p <-> q";
	TestCommonTools::consolePrintTestExprStart(254, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0255", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p (+) q";
	TestCommonTools::consolePrintTestExprStart(255, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0256", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p /\\ q";
	TestCommonTools::consolePrintTestExprStart(256, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0257", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p \\/ q";
	TestCommonTools::consolePrintTestExprStart(257, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0258", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p ~& q";
	TestCommonTools::consolePrintTestExprStart(258, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0259", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p ~&& q";
	TestCommonTools::consolePrintTestExprStart(259, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0260", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p ~/\\ q";
	TestCommonTools::consolePrintTestExprStart(260, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0261", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p ~| q";
	TestCommonTools::consolePrintTestExprStart(261, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0262", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p ~|| q";
	TestCommonTools::consolePrintTestExprStart(262, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0263", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "p ~\\/ q";
	TestCommonTools::consolePrintTestExprStart(263, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0264", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	ConstantPtr rr = new_Constant("r", 1);
	string expStr = "(p /\\ q) \\/ (~p) \\/ (~q)";
	TestCommonTools::consolePrintTestExprStart(264, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q, rr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0265", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	ConstantPtr rr = new_Constant("r", 1);
	string expStr = "(p --> q) <-> (~q --> ~p)";
	TestCommonTools::consolePrintTestExprStart(265, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q, rr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0266", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	ConstantPtr rr = new_Constant("r", 1);
	string expStr = "( (p --> q) /\\ (q --> r) ) --> (p --> r)";
	TestCommonTools::consolePrintTestExprStart(266, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q, rr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0267", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	ConstantPtr rr = new_Constant("r", 1);
	string expStr = "( (p \\/ q) /\\ (p --> r) /\\ (q --> r) ) --> r";
	TestCommonTools::consolePrintTestExprStart(267, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q, rr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0268", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr p = new_Constant("p", 0);
	ConstantPtr q = new_Constant("q", 1);
	string expStr = "~(p /\\ q) <-> (~p \\/ ~q)";
	TestCommonTools::consolePrintTestExprStart(268, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(p, q);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0269", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "gcd(1)";
	TestCommonTools::consolePrintTestExprStart(269, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0270", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "gcd(12,9)";
	TestCommonTools::consolePrintTestExprStart(270, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0271", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "gcd(12,6,18)";
	TestCommonTools::consolePrintTestExprStart(271, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 6;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0272", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "lcm(1)";
	TestCommonTools::consolePrintTestExprStart(272, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0273", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "lcm(12,9)";
	TestCommonTools::consolePrintTestExprStart(273, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 36;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0274", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "lcm(12,6,18)";
	TestCommonTools::consolePrintTestExprStart(274, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 36;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0275", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(i,1,10,harm(i)) - sum(i,1,10,Harm(1,i))";
	TestCommonTools::consolePrintTestExprStart(275, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0276", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1/4*2";
	TestCommonTools::consolePrintTestExprStart(276, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.5;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0277", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "n1_geq_2(0)";
	ConstantPtr c1 = new_Constant("c1", 0.25 + 0.01);
	RecursiveArgumentPtr z1 = new_RecursiveArgument("z1", "z1(n-1)^2+c1", "n");
	z1->addDefinitions(c1);
	z1->addBaseCase(0, 0);
	FunctionPtr n1_geq_2 = new_Function("n1_geq_2", "if( z1(k) > 2, k, n1_geq_2(k+1) )", "k");
	n1_geq_2->addDefinitions(z1);
	mXparser::consolePrint(
		c1->getConstantName() + " = " + c1->getConstantValue() + " ; " + z1->getArgumentName() + " = " + z1->
		getArgumentExpressionString() + " ; " + n1_geq_2->getFunctionName() + " = " + n1_geq_2->
		getFunctionExpressionString() + " ; " + expStr + " ...... ");
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(n1_geq_2);
	double value = testExp->calculate();
	double reg = 30;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0278", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "n2_geq_2(0)";
	ConstantPtr c2 = new_Constant("c2", 0.25 + 0.01);
	FunctionPtr z2 = new_Function("z2", "if( n>0, z2(n-1)^2+c2, 0)", "n");
	z2->addDefinitions(c2);
	FunctionPtr n2_geq_2 = new_Function("n2_geq_2", "if( z2(k) > 2, k, n2_geq_2(k+1) )", "k");
	n2_geq_2->addDefinitions(z2);
	mXparser::consolePrint(
		c2->getConstantName() + " = " + c2->getConstantValue() + " ; " + z2->getFunctionName() + " = " + z2->
		getFunctionExpressionString() + " ; " + n2_geq_2->getFunctionName() + " = " + n2_geq_2->
		getFunctionExpressionString() + " ; " + expStr + " ...... ");
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(n2_geq_2);
	double value = testExp->calculate();
	double reg = 30;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0279", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "n1_geq_2(0) - n2_geq_2(0)";
	ConstantPtr c1 = new_Constant("c1", 0.25 + 0.01);
	RecursiveArgumentPtr z1 = new_RecursiveArgument("z1", "z1(n-1)^2+c1", "n");
	z1->addDefinitions(c1);
	z1->addBaseCase(0, 0);
	FunctionPtr n1_geq_2 = new_Function("n1_geq_2", "if( z1(k) > 2, k, n1_geq_2(k+1) )", "k");
	n1_geq_2->addDefinitions(z1);
	ConstantPtr c2 = new_Constant("c2", 0.25 + 0.01);
	FunctionPtr z2 = new_Function("z2", "if( n>0, z2(n-1)^2+c2, 0)", "n");
	z2->addDefinitions(c2);
	FunctionPtr n2_geq_2 = new_Function("n2_geq_2", "if( z2(k) > 2, k, n2_geq_2(k+1) )", "k");
	n2_geq_2->addDefinitions(z2);
	TestCommonTools::consolePrintTestExprStart(279, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(n1_geq_2, n2_geq_2);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0280", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(i, 1, 20, IsPrime(i) )";
	FunctionPtr IsFactor = new_Function("IsFactor", "if( a>b, 0, if( n#a = 0, 1, IsFactor(n, a+1, b) ) )", "n", "a",
	                                    "b");
	FunctionPtr IsPrime = new_Function("IsPrime", "if( n<2, 0, ~IsFactor(n, 2, sqrt(n)) )", "n");
	IsPrime->addDefinitions(IsFactor);
	TestCommonTools::consolePrintTestExprStart(280, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(IsPrime);
	double value = testExp->calculate();
	double reg = 8;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0281", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr = "abs( sin(0.5)-s(0.5))+abs( cos(0.7)-c(0.7) )";
	ConstantPtr aa = new_Constant("a", 0.00001);
	FunctionPtr ss = new_Function("s", "if( abs(x) < a, x, 2*s(x/2)*c(x/2) )", "x");
	FunctionPtr cc = new_Function("c", "if( abs(x) < a, 1, c(x/2)^2 - s(x/2)^2 )", "x");
	ss->addDefinitions(aa);
	ss->addDefinitions(cc);
	cc->addDefinitions(aa);
	cc->addDefinitions(ss);
	TestCommonTools::consolePrintTestExprStart(281, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(ss, cc);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0282", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "f1(1,2)-f2(1,2)";
	FunctionPtr f1 = new_Function("f1", "sin(x)+cos(y)", "x", "y");
	FunctionPtr f2 = new_Function("f2(x,y) = sin(x)+cos(y)");
	TestCommonTools::consolePrintTestExprStart(282, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->addDefinitions(f1, f2);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0283", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "a = 5.1, expr = 2*a";
	ConstantPtr a1 = new_Constant("a = 5.1");
	TestCommonTools::consolePrintTestExprStart(283, expStr);
	ExpressionPtr testExp = new_Expression("2*a");
	testExp->addDefinitions(a1);
	double value = testExp->calculate();
	double reg = 10.2;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0284", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "a = sin(pi/2), expr = a";
	ConstantPtr a2 = new_Constant("a = sin(pi/2)");
	TestCommonTools::consolePrintTestExprStart(284, expStr);
	ExpressionPtr testExp = new_Expression("a");
	testExp->addDefinitions(a2);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0285", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "fib(n)= fib(n-1)+fib(n-2), fib(10) = ";
	TestCommonTools::consolePrintTestExprStart(285, expStr);
	RecursiveArgumentPtr fib10 = new_RecursiveArgument("fib(n)= fib(n-1)+fib(n-2)");
	fib10->addBaseCase(0, 0);
	fib10->addBaseCase(1, 1);
	ExpressionPtr testExp = new_Expression("fib(10)", fib10);
	double value = testExp->calculate();
	double reg = 55;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0286", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "fib(n) = if(n>1, fib(n-1) + fib(n-2), if(n = 1, 1, 0)), fib(10) = ";
	TestCommonTools::consolePrintTestExprStart(286, expStr);
	FunctionPtr fibb = new_Function("fib(n) = if(n>1, fib(n-1) + fib(n-2), if(n = 1, 1, 0))");
	ExpressionPtr testExp = new_Expression("fib(10)", fibb);
	double value = testExp->calculate();
	double reg = 55;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0287", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "5^2 * 7^3 * 11^1 * 67^1 * 49201^1";
	TestCommonTools::consolePrintTestExprStart(287, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	StringPtr hello = StringUtils::numberToAsciiString(testExp->calculate());
	StringPtr regHello = S("Hello");
	if (*regHello == *hello)
		testResult = true;
	mXparser::consolePrint(hello + " reg ... " + regHello + " --> ");
	CHECK(testResult);
}

TEST_CASE("testExpr0288", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "71^1 * 218549^1 * 6195547^1";
	TestCommonTools::consolePrintTestExprStart(288, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	StringPtr world = StringUtils::numberToAsciiString(testExp->calculate());
	StringPtr regWorld = S("World!");
	if (*regWorld == *world)
		testResult = true;
	mXparser::consolePrint(world + " reg ... " + regWorld + " --> ");
	CHECK(testResult);
}

TEST_CASE("testExpr0289", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "min(3,4)+max(-2,-1)";
	TestCommonTools::consolePrintTestExprStart(289, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0290", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(i, 0, 1000, ispr(i) )";
	TestCommonTools::consolePrintTestExprStart(290, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0291", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(50);
	string expStr = "sum(i, 0, 1000, ispr(i) )";
	TestCommonTools::consolePrintTestExprStart(291, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0292", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(55);
	string expStr = "sum(i, 0, 1000, ispr(i) )";
	TestCommonTools::consolePrintTestExprStart(292, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0293", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(97);
	string expStr = "sum(i, 0, 1000, ispr(i) )";
	TestCommonTools::consolePrintTestExprStart(293, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0294", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(99);
	string expStr = "sum(i, 0, 1000, ispr(i) )";
	TestCommonTools::consolePrintTestExprStart(294, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0295", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(101);
	string expStr = "sum(i, 0, 1000, ispr(i) )";
	TestCommonTools::consolePrintTestExprStart(295, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0296", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(999);
	string expStr = "sum(i, 0, 1000, ispr(i) )";
	TestCommonTools::consolePrintTestExprStart(296, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0297", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(2000);
	string expStr = "sum(i, 0, 1000, ispr(i) )";
	TestCommonTools::consolePrintTestExprStart(297, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0298", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setNoPrimesCache();
	string expStr = "Pi(1000)";
	TestCommonTools::consolePrintTestExprStart(298, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0299", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(50);
	string expStr = "Pi(1000)";
	TestCommonTools::consolePrintTestExprStart(299, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0300", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(55);
	string expStr = "Pi(1000)";
	TestCommonTools::consolePrintTestExprStart(300, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0301", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(97);
	string expStr = "Pi(1000)";
	TestCommonTools::consolePrintTestExprStart(301, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0302", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(99);
	string expStr = "Pi(1000)";
	TestCommonTools::consolePrintTestExprStart(302, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0303", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(101);
	string expStr = "Pi(1000)";
	TestCommonTools::consolePrintTestExprStart(303, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0304", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(999);
	string expStr = "Pi(1000)";
	TestCommonTools::consolePrintTestExprStart(304, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0305", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(2000);
	string expStr = "Pi(1000)";
	TestCommonTools::consolePrintTestExprStart(305, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 168;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0306", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Ei( ln([RS'm]) )";
	TestCommonTools::consolePrintTestExprStart(306, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0307", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "-e*Ei(-1) - [EG]";
	TestCommonTools::consolePrintTestExprStart(307, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0308", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr = string("") + "abs( Ei(-1)  / (0.219383934395520274 * 10^0 ) ) + " +
	                "abs( Ei(-4)  / (0.377935240984890648 * 10^-2 ) ) + " +
	                "abs( Ei(-6)  / (0.360082452162658659 * 10^-3 ) ) + " +
	                "abs( Ei(-8)  / (0.376656228439249018 * 10^-4 ) ) + " +
	                "abs( Ei(-11) / (0.140030030424744178 * 10^-5 ) ) + " +
	                "abs( Ei(-16) / (0.664048724944104278 * 10^-8 ) ) + " +
	                "abs( Ei(-21) / (0.345320126714675627 * 10^-10 ) ) + " +
	                "abs( Ei(-26) / (0.189468588567497824 * 10^-12 ) ) + " +
	                "abs( Ei(-31) / (0.107676703861623826 * 10^-14 ) ) + " +
	                "abs( Ei(-36) / (0.627333900976224159 * 10^-17 ) ) + " +
	                "abs( Ei(-41) / (0.372316677645997772 * 10^-19 ) ) + " +
	                "abs( Ei(-46) / (0.224153175974429975 * 10^-21 ) ) + " +
	                "abs( Ei(-50) / (0.378326402955045902 * 10^-23 ) ) + " +
	                "abs( Ei(1)  / (0.189511781635593676 * 10^1 ) ) + " +
	                "abs( Ei(4)  / (0.196308744700562200 * 10^2 ) ) + " +
	                "abs( Ei(6)  / (0.859897621424392048 * 10^2 ) ) + " +
	                "abs( Ei(8)  / (0.440379899534838269 * 10^3 ) ) + " +
	                "abs( Ei(11) / (0.607140637409861151 * 10^4 ) ) + " +
	                "abs( Ei(16) / (0.595560998670837002 * 10^6 ) ) + " +
	                "abs( Ei(21) / (0.661271863554849213 * 10^8 ) ) + " +
	                "abs( Ei(26) / (0.784294099189818637 * 10^10 ) ) + " +
	                "abs( Ei(31) / (0.969455575968393966 * 10^12 ) ) + " +
	                "abs( Ei(36) / (0.123285207991209769 * 10^15 ) ) + " +
	                "abs( Ei(41) / (0.160066491432450411 * 10^17 ) ) + " +
	                "abs( Ei(46) / (0.211134238864782419 * 10^19 ) ) + " +
	                "abs( Ei(50) / (0.105856368971316910 * 10^21 ) ) - 26";
	TestCommonTools::consolePrintTestExprStart(308, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0309", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x; -11; 11; [gam] + ln(abs(x)) + sum(k, 1, 50, x^k / (k*k!)) - Ei(x), 2)";
	TestCommonTools::consolePrintTestExprStart(309, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0310", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Li(0) + [li2]";
	TestCommonTools::consolePrintTestExprStart(310, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0311", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::initPrimesCache(10000000);
	string expStr = "Pi(10000000) / Li(10000000)";
	TestCommonTools::consolePrintTestExprStart(311, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0312", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = 100000000");
	string expStr = "( ( x / ln(x) ) * sum(k, 0, 20, k! / ln(x)^k ) ) / li(x)";
	TestCommonTools::consolePrintTestExprStart(312, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0313", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr fefe = new_Function("fefe(x)=2*x");
	string expStr = "fefe(2) + fefe(3)";
	TestCommonTools::consolePrintTestExprStart(313, expStr);
	ExpressionPtr testExp = new_Expression(expStr, fefe);
	double value = testExp->calculate();
	double reg = 10;
	if (MathFunctions::abs(reg - value) < 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0314", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "add(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
	TestCommonTools::consolePrintTestExprStart(314, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 55;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0315", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "multi(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
	TestCommonTools::consolePrintTestExprStart(315, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3628800;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0316", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mean(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
	TestCommonTools::consolePrintTestExprStart(316, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 5.5;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0317", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "var(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
	TestCommonTools::consolePrintTestExprStart(317, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 9.166666667;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0318", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "std(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
	TestCommonTools::consolePrintTestExprStart(318, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3.027650354;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0319", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "avg(i, 1, 10, i)";
	TestCommonTools::consolePrintTestExprStart(319, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 5.5;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0320", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "vari(i, 1, 10, i)";
	TestCommonTools::consolePrintTestExprStart(320, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 9.166666667;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0321", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "stdi(i, 1, 10, i)";
	TestCommonTools::consolePrintTestExprStart(321, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3.027650354;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0322", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, -10, 10, i)";
	TestCommonTools::consolePrintTestExprStart(322, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -10;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0323", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, -10, 10, i)";
	TestCommonTools::consolePrintTestExprStart(323, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10;
	if (MathFunctions::abs(reg - value) < 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0324", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 100000, [Uni])";
	TestCommonTools::consolePrintTestExprStart(324, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0325", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 100000, [Uni])";
	TestCommonTools::consolePrintTestExprStart(325, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0326", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "avg(i, 1, 100000, [Uni])";
	TestCommonTools::consolePrintTestExprStart(326, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.5;
	if (MathFunctions::abs(reg - value) < 1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0327", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "vari(i, 1, 100000, [Uni])";
	TestCommonTools::consolePrintTestExprStart(327, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0 / 12.0;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0328", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "stdi(i, 1, 100000, [Uni])";
	TestCommonTools::consolePrintTestExprStart(328, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathFunctions::sqrt(1.0 / 12.0);
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0329", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 100000, [Int1])";
	TestCommonTools::consolePrintTestExprStart(329, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0330", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 100000, [Int1])";
	TestCommonTools::consolePrintTestExprStart(330, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -10;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0331", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "avg(i, 1, 100000, [Int1])";
	TestCommonTools::consolePrintTestExprStart(331, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0332", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "vari(i, 1, 100000, [Int1])";
	TestCommonTools::consolePrintTestExprStart(332, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = (MathFunctions::power(21.0, 2) - 1) / 12.0;
	if (MathFunctions::abs(reg - value) < 1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0333", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "stdi(i, 1, 100000, [Int1])";
	TestCommonTools::consolePrintTestExprStart(333, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathFunctions::sqrt((MathFunctions::power(21.0, 2) - 1) / 12.0);
	if (MathFunctions::abs(reg - value) < 0.1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0334", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 100000, [Int2])";
	TestCommonTools::consolePrintTestExprStart(334, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 100;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0335", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 100000, [Int2])";
	TestCommonTools::consolePrintTestExprStart(335, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -100;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0336", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 1000000, [Int3])";
	TestCommonTools::consolePrintTestExprStart(336, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1000;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0337", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 1000000, [Int3])";
	TestCommonTools::consolePrintTestExprStart(337, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -1000;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0338", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Int4])";
	TestCommonTools::consolePrintTestExprStart(338, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10000;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0339", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Int4])";
	TestCommonTools::consolePrintTestExprStart(339, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -10000;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0340", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Int5])";
	TestCommonTools::consolePrintTestExprStart(340, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 100000;
	if (MathFunctions::abs(reg - value) <= 10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0341", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Int5])";
	TestCommonTools::consolePrintTestExprStart(341, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -100000;
	if (MathFunctions::abs(reg - value) <= 10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0342", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Int6])";
	TestCommonTools::consolePrintTestExprStart(342, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1000000;
	if (MathFunctions::abs(reg - value) <= 100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0343", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Int6])";
	TestCommonTools::consolePrintTestExprStart(343, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -1000000;
	if (MathFunctions::abs(reg - value) <= 100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0344", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Int7])";
	TestCommonTools::consolePrintTestExprStart(344, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10000000;
	if (MathFunctions::abs(reg - value) <= 1000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0345", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Int7])";
	TestCommonTools::consolePrintTestExprStart(345, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -10000000;
	if (MathFunctions::abs(reg - value) <= 1000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0346", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Int8])";
	TestCommonTools::consolePrintTestExprStart(346, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 100000000;
	if (MathFunctions::abs(reg - value) <= 10000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0347", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Int8])";
	TestCommonTools::consolePrintTestExprStart(347, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -100000000;
	if (MathFunctions::abs(reg - value) <= 10000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0348", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Int9])";
	TestCommonTools::consolePrintTestExprStart(348, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1000000000;
	if (MathFunctions::abs(reg - value) <= 100000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0349", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Int9])";
	TestCommonTools::consolePrintTestExprStart(349, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -1000000000;
	if (MathFunctions::abs(reg - value) <= 100000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0350", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Int])";
	TestCommonTools::consolePrintTestExprStart(350, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2147483647;
	if (MathFunctions::abs(reg - value) <= 214748)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0351", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Int])";
	TestCommonTools::consolePrintTestExprStart(351, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -2147483648.0;
	if (MathFunctions::abs(reg - value) <= 214748)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0352", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 100000, [nat1])";
	TestCommonTools::consolePrintTestExprStart(352, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0353", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 100000, [nat1])";
	TestCommonTools::consolePrintTestExprStart(353, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0354", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 100000, [nat2])";
	TestCommonTools::consolePrintTestExprStart(354, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 100;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0355", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 100000, [nat2])";
	TestCommonTools::consolePrintTestExprStart(355, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0356", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 100000, [nat3])";
	TestCommonTools::consolePrintTestExprStart(356, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1000;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0357", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 100000, [nat3])";
	TestCommonTools::consolePrintTestExprStart(357, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0358", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 1000000, [nat3])";
	TestCommonTools::consolePrintTestExprStart(358, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1000;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0359", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 1000000, [nat3])";
	TestCommonTools::consolePrintTestExprStart(359, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0360", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [nat4])";
	TestCommonTools::consolePrintTestExprStart(360, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10000;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0361", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [nat4])";
	TestCommonTools::consolePrintTestExprStart(361, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0362", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [nat5])";
	TestCommonTools::consolePrintTestExprStart(362, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 100000;
	if (MathFunctions::abs(reg - value) <= 5)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0363", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [nat5])";
	TestCommonTools::consolePrintTestExprStart(363, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 5)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0364", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [nat6])";
	TestCommonTools::consolePrintTestExprStart(364, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1000000;
	if (MathFunctions::abs(reg - value) <= 50)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0365", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [nat6])";
	TestCommonTools::consolePrintTestExprStart(365, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 50)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0366", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [nat7])";
	TestCommonTools::consolePrintTestExprStart(366, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10000000;
	if (MathFunctions::abs(reg - value) <= 500)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0367", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [nat7])";
	TestCommonTools::consolePrintTestExprStart(367, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 500)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0368", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [nat8])";
	TestCommonTools::consolePrintTestExprStart(368, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 100000000;
	if (MathFunctions::abs(reg - value) <= 5000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0369", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [nat8])";
	TestCommonTools::consolePrintTestExprStart(369, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 5000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0370", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [nat9])";
	TestCommonTools::consolePrintTestExprStart(370, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1000000000;
	if (MathFunctions::abs(reg - value) <= 50000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0371", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [nat9])";
	TestCommonTools::consolePrintTestExprStart(371, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 50000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0372", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [nat])";
	TestCommonTools::consolePrintTestExprStart(372, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2147483647;
	if (MathFunctions::abs(reg - value) <= 112374)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0373", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [nat])";
	TestCommonTools::consolePrintTestExprStart(373, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 112374)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0374", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 100000, [Nat1])";
	TestCommonTools::consolePrintTestExprStart(374, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0375", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 100000, [Nat1])";
	TestCommonTools::consolePrintTestExprStart(375, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0376", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 100000, [Nat2])";
	TestCommonTools::consolePrintTestExprStart(376, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 100;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0377", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 100000, [Nat2])";
	TestCommonTools::consolePrintTestExprStart(377, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0378", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 100000, [Nat3])";
	TestCommonTools::consolePrintTestExprStart(378, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1000;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0379", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 100000, [Nat3])";
	TestCommonTools::consolePrintTestExprStart(379, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0380", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 1000000, [Nat3])";
	TestCommonTools::consolePrintTestExprStart(380, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1000;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0381", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 1000000, [Nat3])";
	TestCommonTools::consolePrintTestExprStart(381, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0382", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Nat4])";
	TestCommonTools::consolePrintTestExprStart(382, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10000;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0383", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Nat4])";
	TestCommonTools::consolePrintTestExprStart(383, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) < 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0384", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Nat5])";
	TestCommonTools::consolePrintTestExprStart(384, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 100000;
	if (MathFunctions::abs(reg - value) <= 5)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0385", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Nat5])";
	TestCommonTools::consolePrintTestExprStart(385, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 5)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0386", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Nat6])";
	TestCommonTools::consolePrintTestExprStart(386, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1000000;
	if (MathFunctions::abs(reg - value) <= 50)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0387", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Nat6])";
	TestCommonTools::consolePrintTestExprStart(387, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 50)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0388", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Nat7])";
	TestCommonTools::consolePrintTestExprStart(388, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10000000;
	if (MathFunctions::abs(reg - value) <= 500)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0389", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Nat7])";
	TestCommonTools::consolePrintTestExprStart(389, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 500)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0390", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Nat8])";
	TestCommonTools::consolePrintTestExprStart(390, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 100000000;
	if (MathFunctions::abs(reg - value) <= 5000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0391", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Nat8])";
	TestCommonTools::consolePrintTestExprStart(391, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 5000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0392", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Nat9])";
	TestCommonTools::consolePrintTestExprStart(392, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1000000000;
	if (MathFunctions::abs(reg - value) <= 50000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0393", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Nat9])";
	TestCommonTools::consolePrintTestExprStart(393, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 50000)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0394", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000000, [Nat])";
	TestCommonTools::consolePrintTestExprStart(394, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2147483647;
	if (MathFunctions::abs(reg - value) <= 112374)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0395", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000000, [Nat])";
	TestCommonTools::consolePrintTestExprStart(395, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 112374)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0396", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "int( pUni(x, -1, 3), x, -1, 3)";
	TestCommonTools::consolePrintTestExprStart(396, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0397", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = rUni(-1, 3)");
	string expStr = "der( cUni(x, -1, 3), x) - pUni(x, -1, 3)";
	TestCommonTools::consolePrintTestExprStart(397, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0398", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = rUni(-1, 3)");
	string expStr = "x - qUni( cUni(x, -1, 3), -1, 3)";
	TestCommonTools::consolePrintTestExprStart(398, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0399", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 1000000, rUni(-1, 3) )";
	TestCommonTools::consolePrintTestExprStart(399, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -1;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0400", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 1000000, rUni(-1, 3) )";
	TestCommonTools::consolePrintTestExprStart(400, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0401", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 1000000, pUni( rUni(-10, 10), -1, 3) )";
	TestCommonTools::consolePrintTestExprStart(401, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0402", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 1000000, pUni( rUni(-10, 10), -1, 3) )";
	TestCommonTools::consolePrintTestExprStart(402, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0 / 4.0;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0403", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 1000000, cUni( rUni(-10, 10), -1, 3) )";
	TestCommonTools::consolePrintTestExprStart(403, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0404", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 1000000, cUni( rUni(-10, 10), -1, 3) )";
	TestCommonTools::consolePrintTestExprStart(404, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0405", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = rUni(-2,4)");
	ArgumentPtr y = new_Argument("y = rUni(-2,4)");
	string expStr = "cUni( min(x, y), -1, 3) <= cUni( max(x, y), -1, 3)";
	TestCommonTools::consolePrintTestExprStart(405, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0406", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "round(2.2, 0)";
	TestCommonTools::consolePrintTestExprStart(406, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0407", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "round(2.6, 0)";
	TestCommonTools::consolePrintTestExprStart(407, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0408", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "round(2.66, 1)";
	TestCommonTools::consolePrintTestExprStart(408, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2.7;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0409", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "round(2.123456, 5)";
	TestCommonTools::consolePrintTestExprStart(409, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2.12346;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0410", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "avg(i, 1, 1000000, [Nor])";
	TestCommonTools::consolePrintTestExprStart(410, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0411", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "stdi(i, 1, 1000000, [Nor])";
	TestCommonTools::consolePrintTestExprStart(411, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0412", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "vari(i, 1, 1000000, [Nor])";
	TestCommonTools::consolePrintTestExprStart(412, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0413", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "avg(i, 1, 1000000, rNor(1,5) )";
	TestCommonTools::consolePrintTestExprStart(413, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0414", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "stdi(i, 1, 1000000, rNor(3,3) )";
	TestCommonTools::consolePrintTestExprStart(414, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0415", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "vari(i, 1, 1000000, rNor(-10, 5) )";
	TestCommonTools::consolePrintTestExprStart(415, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 25;
	if (MathFunctions::abs(reg - value) <= 0.2)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0416", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "int( pNor(x, 0, 1), x, -10, 0.5) - cNor( 0.5, 0, 1)";
	TestCommonTools::consolePrintTestExprStart(416, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0417", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = 0.5");
	string expStr = "der( cNor(x, 1, 2), x) - pNor(x, 1, 2)";
	TestCommonTools::consolePrintTestExprStart(417, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0418", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "int( pNor(x, 1, 2), x, 0.5, 1.5) - ( cNor(1.5, 1, 2) - cNor(0.5, 1, 2) )";
	TestCommonTools::consolePrintTestExprStart(418, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0419", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = [Nor]");
	string expStr = "pNor(x, 0, 1) - pNor(-x, 0, 1)";
	TestCommonTools::consolePrintTestExprStart(419, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0420", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = [Uni]");
	string expStr = "cNor(2-x, 2, 2) - ( 1 - cNor(2+x, 2, 2) )";
	TestCommonTools::consolePrintTestExprStart(420, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0421", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = [Nor]");
	string expStr = "qNor(0.5, -4, 5) + 4";
	TestCommonTools::consolePrintTestExprStart(421, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0422", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = rUni(-10,10)");
	ArgumentPtr y = new_Argument("y = rUni(-10,10)");
	string expStr = "cNor( min(x, y), -1, 3) <= cNor( max(x, y), -1, 3)";
	TestCommonTools::consolePrintTestExprStart(422, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.002)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0423", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* Information & help: wolfram.com/raspi
	*
	* In[5]:= SetPrecision[Sum[ExpIntegralEi[x], {x, 0.01, 10, 0.01}], 20]
	* Out[5]= 290933.27886809571646
	*/
	string expStr = "290933.27886809571646 - sum(x, 0.01, 10, Ei(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(423, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0424", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* Information & help: wolfram.com/raspi
	*
	* In[12]:= SetPrecision[Sum[ExpIntegralEi[x], {x, -10, -0.01, 0.01}], 20]
	* Out[12]= -97.065869924036363159
	*/
	string expStr = "-97.065869924036363159 - sum(x, -10, -0.01, Ei(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(424, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.00000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0425", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* Information & help: wolfram.com/raspi
	*
	* In[26]:= SetPrecision[Sum[Erf[x], {x, 0, 2, 0.01}], 20]
	* Out[26]= 144.17558195220803441
	*/
	string expStr = "144.17558195220803441 - sum(x, 0, 2, erf(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(425, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.00000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0426", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* Information & help: wolfram.com/raspi
	*
	* In[27]:= SetPrecision[Sum[Erf[x], {x, -2, 0, 0.01}], 20]
	* Out[27]= -144.17558195220797757
	*/
	string expStr = "-144.17558195220797757 - sum(x, -2, 0, erf(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(426, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.00000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0427", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* Information & help: wolfram.com/raspi
	*
	* In[37]:= SetPrecision[Sum[Erfc[x], {x, 0, 2, 0.01}], 20]
	* Out[37]= 56.824418047792065067
	*/
	string expStr = "56.824418047792065067 - sum(x, 0, 2, erfc(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(427, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.00000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0428", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* Information & help: wolfram.com/raspi
	*
	* In[36]:= SetPrecision[Sum[Erfc[x], {x, -2, 0, 0.01}], 20]
	* Out[36]= 345.17558195220811967
	*/
	string expStr = "345.17558195220811967 - sum(x, -2, 0, erfc(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(428, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.00000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0429", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* Information & help: wolfram.com/raspi
	*
	* In[38]:= SetPrecision[Sum[InverseErf[x], {x, 0, 0.9, 0.01}], 20]
	* Out[38]= 42.417037259662720317
	*/
	string expStr = "42.417037259662720317 - sum(x, 0, 0.9, erfInv(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(429, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.00000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0430", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* Information & help: wolfram.com/raspi
	*
	* In[39]:= SetPrecision[Sum[InverseErf[x], {x, -0.9, 0, 0.01}], 20]
	* Out[39]= -42.417037259662699000
	*/
	string expStr = "-42.417037259662699000 - sum(x, -0.9, 0, erfInv(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(430, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.00000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0431", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* Information & help: wolfram.com/raspi
	*
	* In[40]:= SetPrecision[Sum[InverseErfc[x], {x, 0.01, 1, 0.01}], 20]
	* Out[40]= 55.303894660741931943
	*/
	string expStr = "55.303894660741931943 - sum(x, 0.01, 1, erfcInv(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(431, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.00000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0432", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* Information & help: wolfram.com/raspi
	*
	* In[41]:= SetPrecision[Sum[InverseErfc[x], {x, 1, 1.99, 0.01}], 20]
	* Out[41]= -55.303894660741946154
	*/
	string expStr = "-55.303894660741946154 - sum(x, 1, 1.99, erfcInv(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(432, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.00000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0433", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "round(2.125, 2)";
	TestCommonTools::consolePrintTestExprStart(433, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2.13;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0434", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "round(2.135, 2)";
	TestCommonTools::consolePrintTestExprStart(434, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2.14;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0435", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "round(2.145, 2)";
	TestCommonTools::consolePrintTestExprStart(435, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2.15;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0436", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "round(3.125, 2)";
	TestCommonTools::consolePrintTestExprStart(436, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3.13;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0437", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "round(3.135, 2)";
	TestCommonTools::consolePrintTestExprStart(437, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3.14;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0438", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "round(3.145, 2)";
	TestCommonTools::consolePrintTestExprStart(438, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3.15;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0439", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "rList(1)";
	TestCommonTools::consolePrintTestExprStart(439, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0440", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "rList(1, 1, 1, 1, 1, 1)";
	TestCommonTools::consolePrintTestExprStart(440, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0441", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "mini(i, 1, 10000, rList(3, 2, 7, 6, 10, 15, 12) )";
	TestCommonTools::consolePrintTestExprStart(441, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0442", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "maxi(i, 1, 10000, rList(3, 2, 7, 6, 10, 15, 12) )";
	TestCommonTools::consolePrintTestExprStart(442, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 15;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0443", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::setExactComparison();
	string expStr = "0.1+0.1+0.1 <> 0.3";
	TestCommonTools::consolePrintTestExprStart(443, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0444", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::setEpsilonComparison();;
	string expStr = "0.1+0.1+0.1 = 0.3";
	TestCommonTools::consolePrintTestExprStart(444, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0445", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableUlpRounding();
	bool tmp = mXparser::checkIfCanonicalRounding();
	//mXparser::disableCanonicalRounding();
	mXparser::setExactComparison();
	string expStr = "0.1+0.1+0.1 = 0.3";
	TestCommonTools::consolePrintTestExprStart(445, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0446", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2 < 3";
	TestCommonTools::consolePrintTestExprStart(446, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0447", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.5 < 3";
	TestCommonTools::consolePrintTestExprStart(447, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0448", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.7 < 3";
	TestCommonTools::consolePrintTestExprStart(448, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0449", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3 < 3";
	TestCommonTools::consolePrintTestExprStart(449, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0450", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.2 < 3";
	TestCommonTools::consolePrintTestExprStart(450, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0451", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.5 < 3";
	TestCommonTools::consolePrintTestExprStart(451, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0452", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "4 < 3";
	TestCommonTools::consolePrintTestExprStart(452, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0453", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2 <= 3";
	TestCommonTools::consolePrintTestExprStart(453, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0454", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.5 <= 3";
	TestCommonTools::consolePrintTestExprStart(454, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0455", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.7 <= 3";
	TestCommonTools::consolePrintTestExprStart(455, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0456", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3 <= 3";
	TestCommonTools::consolePrintTestExprStart(456, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0457", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.2 <= 3";
	TestCommonTools::consolePrintTestExprStart(457, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0458", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.5 <= 3";
	TestCommonTools::consolePrintTestExprStart(458, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0459", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "4 <= 3";
	TestCommonTools::consolePrintTestExprStart(459, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0460", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2 > 3";
	TestCommonTools::consolePrintTestExprStart(460, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0461", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.5 > 3";
	TestCommonTools::consolePrintTestExprStart(461, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0462", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.7 > 3";
	TestCommonTools::consolePrintTestExprStart(462, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0463", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3 > 3";
	TestCommonTools::consolePrintTestExprStart(463, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0464", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.2 > 3";
	TestCommonTools::consolePrintTestExprStart(464, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0465", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.5 > 3";
	TestCommonTools::consolePrintTestExprStart(465, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0466", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "4 > 3";
	TestCommonTools::consolePrintTestExprStart(466, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0467", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2 >= 3";
	TestCommonTools::consolePrintTestExprStart(467, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0468", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.5 >= 3";
	TestCommonTools::consolePrintTestExprStart(468, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0469", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.7 >= 3";
	TestCommonTools::consolePrintTestExprStart(469, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0470", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3 >= 3";
	TestCommonTools::consolePrintTestExprStart(470, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0471", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.2 >= 3";
	TestCommonTools::consolePrintTestExprStart(471, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0472", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.5 >= 3";
	TestCommonTools::consolePrintTestExprStart(472, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0473", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "4 >= 3";
	TestCommonTools::consolePrintTestExprStart(473, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0474", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2 = 3";
	TestCommonTools::consolePrintTestExprStart(474, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0475", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.5 = 3";
	TestCommonTools::consolePrintTestExprStart(475, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0476", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.7 = 3";
	TestCommonTools::consolePrintTestExprStart(476, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0477", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3 = 3";
	TestCommonTools::consolePrintTestExprStart(477, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0478", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.2 = 3";
	TestCommonTools::consolePrintTestExprStart(478, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0479", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.5 = 3";
	TestCommonTools::consolePrintTestExprStart(479, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0480", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "4 = 3";
	TestCommonTools::consolePrintTestExprStart(480, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0481", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2 <> 3";
	TestCommonTools::consolePrintTestExprStart(481, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0482", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.5 <> 3";
	TestCommonTools::consolePrintTestExprStart(482, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0483", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "2.7 <> 3";
	TestCommonTools::consolePrintTestExprStart(483, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0484", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3 <> 3";
	TestCommonTools::consolePrintTestExprStart(484, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0485", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.2 <> 3";
	TestCommonTools::consolePrintTestExprStart(485, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0486", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "3.5 <> 3";
	TestCommonTools::consolePrintTestExprStart(486, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0487", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilon(0.5);
	string expStr = "4 <> 3";
	TestCommonTools::consolePrintTestExprStart(487, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0488", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "2 < 3";
	TestCommonTools::consolePrintTestExprStart(488, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0489", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "3 < 3";
	TestCommonTools::consolePrintTestExprStart(489, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0490", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "4 < 3";
	TestCommonTools::consolePrintTestExprStart(490, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0491", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "2 <= 3";
	TestCommonTools::consolePrintTestExprStart(491, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0492", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "3 <= 3";
	TestCommonTools::consolePrintTestExprStart(492, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0493", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "4 <= 3";
	TestCommonTools::consolePrintTestExprStart(493, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0494", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "2 > 3";
	TestCommonTools::consolePrintTestExprStart(494, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0495", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "3 > 3";
	TestCommonTools::consolePrintTestExprStart(495, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0496", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "4 > 3";
	TestCommonTools::consolePrintTestExprStart(496, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0497", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "2 >= 3";
	TestCommonTools::consolePrintTestExprStart(497, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0498", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "3 >= 3";
	TestCommonTools::consolePrintTestExprStart(498, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0499", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "4 >= 3";
	TestCommonTools::consolePrintTestExprStart(499, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0500", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "2 = 3";
	TestCommonTools::consolePrintTestExprStart(500, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0501", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "3 = 3";
	TestCommonTools::consolePrintTestExprStart(501, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0502", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "4 = 3";
	TestCommonTools::consolePrintTestExprStart(502, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0503", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "2 <> 3";
	TestCommonTools::consolePrintTestExprStart(503, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0504", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "3 <> 3";
	TestCommonTools::consolePrintTestExprStart(504, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0505", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "4 <> 3";
	TestCommonTools::consolePrintTestExprStart(505, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0506", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ulp(0.1)";
	TestCommonTools::consolePrintTestExprStart(506, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.3877787807814457E-17;
	if (MathFunctions::abs(reg - value) <= 0.0000000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0507", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "sum(i, 1, 3, 0.1) = 0.3";
	TestCommonTools::consolePrintTestExprStart(507, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.0000000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0508", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	ArgumentPtr a = new_Argument("a");
	ArgumentPtr b = new_Argument("b");
	a->setArgumentValue(1);
	b->setArgumentValue(5);
	string expStr = "if(a=6,-b,15)";
	TestCommonTools::consolePrintTestExprStart(508, expStr);
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 15;
	if (MathFunctions::abs(reg - value) <= 0.0000000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0509", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "5!^2";
	TestCommonTools::consolePrintTestExprStart(509, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 14400;
	if (MathFunctions::abs(reg - value) <= 0.0000000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0510", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "5!-3";
	TestCommonTools::consolePrintTestExprStart(510, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 117;
	if (MathFunctions::abs(reg - value) <= 0.0000000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0511", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "5!+3";
	TestCommonTools::consolePrintTestExprStart(511, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 123;
	if (MathFunctions::abs(reg - value) <= 0.0000000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0512", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "10/5-(5!)";
	TestCommonTools::consolePrintTestExprStart(512, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -118;
	if (MathFunctions::abs(reg - value) <= 0.0000000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0513", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "10/5+(5!)";
	TestCommonTools::consolePrintTestExprStart(513, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 122;
	if (MathFunctions::abs(reg - value) <= 0.0000000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0514", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "10/5+5!";
	TestCommonTools::consolePrintTestExprStart(514, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 122;
	if (MathFunctions::abs(reg - value) <= 0.0000000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0515", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "1<-2";
	TestCommonTools::consolePrintTestExprStart(515, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0516", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setExactComparison();
	string expStr = "1e1";
	TestCommonTools::consolePrintTestExprStart(516, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10;
	if (MathFunctions::abs(reg - value) <= 0.0000000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0517", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "100*[%]-1000*[%%]";
	TestCommonTools::consolePrintTestExprStart(517, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0518", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[Y]-[sept]+( [Y]/[Z]-1000 )";
	TestCommonTools::consolePrintTestExprStart(518, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0519", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[Z]-[sext]+( [Z]/[E]-1000 )";
	TestCommonTools::consolePrintTestExprStart(519, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0520", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[E]-[quint]+( [E]/[P]-1000 )";
	TestCommonTools::consolePrintTestExprStart(520, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0521", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[P]-[quad]+( [P]/[T]-1000 )";
	TestCommonTools::consolePrintTestExprStart(521, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0522", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[T]-[tril]+( [T]/[G]-1000 )";
	TestCommonTools::consolePrintTestExprStart(522, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0523", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[G]-[bil]+( [G]/[M]-1000 )";
	TestCommonTools::consolePrintTestExprStart(523, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0524", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[M]-[mil]+( [M]/[k]-1000 )";
	TestCommonTools::consolePrintTestExprStart(524, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0525", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[k]-[th]+( [k]/[hecto]-10 )";
	TestCommonTools::consolePrintTestExprStart(525, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0526", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[hecto]-[hund]+( [hecto]/[deca]-10 )";
	TestCommonTools::consolePrintTestExprStart(526, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0527", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[deca]-[ten]+( [deca]-10 )";
	TestCommonTools::consolePrintTestExprStart(527, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0528", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[deci]^2-[%]";
	TestCommonTools::consolePrintTestExprStart(528, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0529", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[deci]/[centi]-10";
	TestCommonTools::consolePrintTestExprStart(529, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0530", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[centi]/[milli]-10";
	TestCommonTools::consolePrintTestExprStart(530, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0531", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[milli]/[mic]-1000";
	TestCommonTools::consolePrintTestExprStart(531, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0532", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[mic]/[n]-1000";
	TestCommonTools::consolePrintTestExprStart(532, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0533", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[n]/[p]-1000";
	TestCommonTools::consolePrintTestExprStart(533, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0534", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[p]/[f]-1000";
	TestCommonTools::consolePrintTestExprStart(534, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0535", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[f]/[a]-1000";
	TestCommonTools::consolePrintTestExprStart(535, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0536", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[a]/[z]-1000";
	TestCommonTools::consolePrintTestExprStart(536, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0537", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[z]/[y]-1000";
	TestCommonTools::consolePrintTestExprStart(537, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0538", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "1000*[m]-[km]+(10*[mm]-[cm])";
	TestCommonTools::consolePrintTestExprStart(538, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0539",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "([inch]-2.54*[cm])+([ft]-0.3048*[m])+([yd]-0.9144*[m])+([mile]-1.609344*[km])+([nmi]-1.852*[km])";
	TestCommonTools::consolePrintTestExprStart(539, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0540", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[m2]-100*[cm]*100*[cm]+[m2]-10000*[cm2]";
	TestCommonTools::consolePrintTestExprStart(540, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0541", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[cm2]-10*[mm]*10*[mm]+[cm2]-100*[mm2]";
	TestCommonTools::consolePrintTestExprStart(541, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0542", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[are]-10*[m]*10*[m]";
	TestCommonTools::consolePrintTestExprStart(542, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0543", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[ha]-100*[m]*100*[m]+[ha]-100*[are]";
	TestCommonTools::consolePrintTestExprStart(543, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0544", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[acre]-66*[ft]*660*[ft]";
	TestCommonTools::consolePrintTestExprStart(544, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0545", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[km2]-100*[ha]";
	TestCommonTools::consolePrintTestExprStart(545, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0546", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[cm3]-10*[mm]*10*[mm]*10*[mm]+[cm3]-1000*[mm3]";
	TestCommonTools::consolePrintTestExprStart(546, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0547", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[m3]-1000*[l]+[m3]-[m]*[m]*[m]";
	TestCommonTools::consolePrintTestExprStart(547, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0548", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[km3]-[bil]*[m3]";
	TestCommonTools::consolePrintTestExprStart(548, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0549", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[l]-[th]*[ml]";
	TestCommonTools::consolePrintTestExprStart(549, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0550", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[gall]-3.78541178*[l]";
	TestCommonTools::consolePrintTestExprStart(550, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0551", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[pint]-473.176473*[ml]";
	TestCommonTools::consolePrintTestExprStart(551, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0552", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[min]-60*[s]+[h]-60*[min]";
	TestCommonTools::consolePrintTestExprStart(552, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0553", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[day]-24*[h]+[week]-7*[day]";
	TestCommonTools::consolePrintTestExprStart(553, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0554", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[yearj]-365.25*[day]";
	TestCommonTools::consolePrintTestExprStart(554, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0555", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[kg]-1000*[gr]+[kg]-100*[dag]";
	TestCommonTools::consolePrintTestExprStart(555, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0556", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[dag]-10*[gr]";
	TestCommonTools::consolePrintTestExprStart(556, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0557", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[gr]-[th]*[mg]";
	TestCommonTools::consolePrintTestExprStart(557, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0558", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[t]-1000*[kg]";
	TestCommonTools::consolePrintTestExprStart(558, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0559", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[oz]-28.3495231*[gr]+[lb]-453.59237*[gr]";
	TestCommonTools::consolePrintTestExprStart(559, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0560", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[b]-1+[kb]/[b]-1024";
	TestCommonTools::consolePrintTestExprStart(560, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0561", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( [Mb]/[kb]-1024 ) + ( [Gb]/[Mb]-1024 )";
	TestCommonTools::consolePrintTestExprStart(561, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0562", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( [Tb]/[Gb]-1024 ) + ( [Pb]/[Tb]-1024 )";
	TestCommonTools::consolePrintTestExprStart(562, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0563", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( [Eb]/[Pb]-1024 ) + ( [Zb]/[Eb]-1024 )";
	TestCommonTools::consolePrintTestExprStart(563, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0564", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[Yb]/[Zb]-1024";
	TestCommonTools::consolePrintTestExprStart(564, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0565", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[B]-8*[b]+[kB]/[B]-1024";
	TestCommonTools::consolePrintTestExprStart(565, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0566", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( [MB]/[kB]-1024 ) + ( [GB]/[MB]-1024 )";
	TestCommonTools::consolePrintTestExprStart(566, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0567", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( [TB]/[GB]-1024 ) + ( [PB]/[TB]-1024 )";
	TestCommonTools::consolePrintTestExprStart(567, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0568", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( [EB]/[PB]-1024 ) + ( [ZB]/[EB]-1024 )";
	TestCommonTools::consolePrintTestExprStart(568, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0569", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[YB]/[ZB]-1024";
	TestCommonTools::consolePrintTestExprStart(569, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0570", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[J] - ( [kg]*[m2] ) / ( [s]*[s] )";
	TestCommonTools::consolePrintTestExprStart(570, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0571", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[eV]-1.60217662*[a]*[deci]*[J]";
	TestCommonTools::consolePrintTestExprStart(571, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0572",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( [keV]/[eV]-1000 ) + ( [MeV]/[keV]-1000 ) + ( [GeV]/[MeV]-1000 ) + ( [TeV]/[GeV]-1000 )";
	TestCommonTools::consolePrintTestExprStart(572, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0573", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[m/s] - ([m]/[s])";
	TestCommonTools::consolePrintTestExprStart(573, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0574", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[km/h] - ([km]/[h])";
	TestCommonTools::consolePrintTestExprStart(574, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0575", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[mi/h] - ([mile]/[h])";
	TestCommonTools::consolePrintTestExprStart(575, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0576", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[knot] - 0.514444444*[m/s]";
	TestCommonTools::consolePrintTestExprStart(576, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0577", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[m/s2]-[m]/([s]^2)";
	TestCommonTools::consolePrintTestExprStart(577, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0578", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[km/h2]-[km]/[h]^2";
	TestCommonTools::consolePrintTestExprStart(578, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0579", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[mi/h2]-[mile]/[h]^2";
	TestCommonTools::consolePrintTestExprStart(579, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0580", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2*pi*[rad]-360*[deg]";
	TestCommonTools::consolePrintTestExprStart(580, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0581", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( [deg]/[']-60 ) + ( [']/[''] - 60 )";
	TestCommonTools::consolePrintTestExprStart(581, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0582", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[c] - 299792458*[m]/[s]";
	TestCommonTools::consolePrintTestExprStart(582, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0583", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[hP] - [h-]*2*pi";
	TestCommonTools::consolePrintTestExprStart(583, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0584",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( [lP] - 1.616229*[y]*[p]*10*[m]) + ( [mP] - 2.176470*[n]*10*[kg] ) + ( [tP] - 5.39116*[y]*[z]*10*[s] )";
	TestCommonTools::consolePrintTestExprStart(584, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0585", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[ly]-[c]*[yearj]";
	TestCommonTools::consolePrintTestExprStart(585, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0586", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[pc]/(3.08567758*[P]*10*[m])-1";
	TestCommonTools::consolePrintTestExprStart(586, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0587", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[kpc]/[pc]-1000";
	TestCommonTools::consolePrintTestExprStart(587, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0588", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( [Earth-R-eq]-[Earth-R-po] ) / ( 6378.1370*[km]-6356.7523*[km] ) - 1";
	TestCommonTools::consolePrintTestExprStart(588, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0589", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( ( [G.] * [Earth-M] ) / [Earth-R]^2 ) / [g] - 1";
	TestCommonTools::consolePrintTestExprStart(589, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0590", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( ( [G.] * [Solar-M] ) / [Solar-R]^2 ) / ( 28.2*[g] ) - 1";
	TestCommonTools::consolePrintTestExprStart(590, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0591", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( ( [G.] * [Mercury-M] ) / [Mercury-R]^2 ) / ( 0.38*[g] ) - 1";
	TestCommonTools::consolePrintTestExprStart(591, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0592", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( ( [G.] * [Venus-M] ) / [Venus-R]^2 ) / ( 0.904*[g] ) - 1";
	TestCommonTools::consolePrintTestExprStart(592, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0593", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( ( [G.] * [Moon-M] ) / [Moon-R]^2 ) / ( 0.1654*[g] ) - 1";
	TestCommonTools::consolePrintTestExprStart(593, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0594", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( ( [G.] * [Mars-M] ) / [Mars-R]^2 ) / ( 0.376*[g] ) - 1";
	TestCommonTools::consolePrintTestExprStart(594, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0595", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( ( [G.] * [Jupiter-M] ) / [Jupiter-R]^2 ) / ( 2.527876492*[g] ) - 1";
	TestCommonTools::consolePrintTestExprStart(595, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0596", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( ( [G.] * [Saturn-M] ) / [Saturn-R]^2 ) / ( 1.065*[g] ) - 1";
	TestCommonTools::consolePrintTestExprStart(596, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0597", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( ( [G.] * [Uranus-M] ) / [Uranus-R]^2 ) / ( 0.886*[g] ) - 1";
	TestCommonTools::consolePrintTestExprStart(597, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0598", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( ( [G.] * [Neptune-M] ) / [Neptune-R]^2 ) / ( 1.14*[g] ) - 1";
	TestCommonTools::consolePrintTestExprStart(598, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0599", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[Earth-D]/[au]-1";
	TestCommonTools::consolePrintTestExprStart(599, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0600", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[Mercury-D] / ( 57909050*[km] )-1";
	TestCommonTools::consolePrintTestExprStart(600, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0601", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[Venus-D] / ( 108208000*[km] )-1";
	TestCommonTools::consolePrintTestExprStart(601, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0602", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[Mars-D] / ( 1.523679*[au] )-1";
	TestCommonTools::consolePrintTestExprStart(602, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0603", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[Jupiter-D] / ( 5.20260*[au] )-1";
	TestCommonTools::consolePrintTestExprStart(603, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0604", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[Saturn-D] / ( 1.429*[bil]*[km] )-1";
	TestCommonTools::consolePrintTestExprStart(604, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0605", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[Uranus-D] / ( 19.2184*[au] )-1";
	TestCommonTools::consolePrintTestExprStart(605, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0606", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "[Neptune-D] / ( 30.110387*[au] )-1";
	TestCommonTools::consolePrintTestExprStart(606, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0607", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "@~100";
	TestCommonTools::consolePrintTestExprStart(607, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = ~((long) (100.0));
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0608", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-100 @^ 2";
	TestCommonTools::consolePrintTestExprStart(608, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = ((long) (-100.0)) ^ ((long) (2.0));
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0609", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-100 @| 2";
	TestCommonTools::consolePrintTestExprStart(609, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = ((long) (-100.0)) | ((long) (2.0));
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0610", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-100 @& 2";
	TestCommonTools::consolePrintTestExprStart(610, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = ((long) (-100.0)) & ((long) (2.0));
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0611", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-100 @>> 4";
	TestCommonTools::consolePrintTestExprStart(611, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = ((long) (-100.0)) >> ((int) (4.0));
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0612", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-100 @<< 4";
	TestCommonTools::consolePrintTestExprStart(612, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = ((long) (-100.0)) << ((int) (4.0));
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0613", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "pi+1.23e-10";
	TestCommonTools::consolePrintTestExprStart(613, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathConstants::PI + 1.23e-10;
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0614", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::setEpsilonComparison();
	string expStr = "sin(pi+1.23e-10)+e^1.1e1";
	TestCommonTools::consolePrintTestExprStart(614, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathFunctions::sin(MathConstants::PI + 1.23e-10) + MathFunctions::power(MathConstants::E, 1.1e1);
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0615", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2e-2+2E+2+3.1e4";
	TestCommonTools::consolePrintTestExprStart(615, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2e-2 + 2E+2 + 3.1e4;
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0616", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "123.34344e-16*0.00001E-2";
	TestCommonTools::consolePrintTestExprStart(616, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 123.34344e-16 * 0.00001E-2;
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0617", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-123.34344e-16*(-0.00001E-2)";
	TestCommonTools::consolePrintTestExprStart(617, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -123.34344e-16 * (-0.00001E-2);
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0618", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	const FunctionExtensionPtr funExt = new_FunExt();
	FunctionPtr ff = new_Function("ff", funExt);
	string expStr = "5*6-ff(5,6)";
	TestCommonTools::consolePrintTestExprStart(618, expStr);
	ExpressionPtr testExp = new_Expression(expStr, ff);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0619", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "solve(2*x-4, x, -10, 10)";
	TestCommonTools::consolePrintTestExprStart(619, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0620", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x=0");
	string expStr = "solve( der(sin(x), x), x, 0, pi )";
	TestCommonTools::consolePrintTestExprStart(620, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = MathConstants::PI / 2.0;
	if (MathFunctions::abs(reg - value) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0621", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "solve( sin(x), x, -pi-1, 1 )";
	TestCommonTools::consolePrintTestExprStart(621, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -MathConstants::PI;
	if
	((MathFunctions::abs(-MathConstants::PI - value) <= 0.000001) ||
	 (MathFunctions::abs(0 - value) <= 0.000001))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0622", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "if( [true] && ([false] || ([false] && [true])) = [false], 1, 0)";
	TestCommonTools::consolePrintTestExprStart(622, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0623", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "if( isNaN(3/0) = [true], 1, 0)";
	TestCommonTools::consolePrintTestExprStart(623, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0624", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "if( isNaN(3/1) = [false], 1, 0)";
	TestCommonTools::consolePrintTestExprStart(624, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0625", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "if( isNaN([NaN]) = [true], 1, 0)";
	TestCommonTools::consolePrintTestExprStart(625, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0626", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "coalesce( 1, 2, 3 )";
	TestCommonTools::consolePrintTestExprStart(626, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0627", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "coalesce( [NaN], 2, 3)";
	TestCommonTools::consolePrintTestExprStart(627, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0628", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "coalesce( [NaN], [NaN], 3, 5, 6)";
	TestCommonTools::consolePrintTestExprStart(628, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0629", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "coalesce( [NaN], 3/0, [NaN], 5, 6)";
	TestCommonTools::consolePrintTestExprStart(629, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 5;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0630", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "coalesce( [NaN], 3/0, [NaN], 5/0, 6)";
	TestCommonTools::consolePrintTestExprStart(630, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 6;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0631", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "if( isNaN( coalesce( [NaN], 3/0, [NaN], 5/0, [NaN]) ) = [true], 1, 0)";
	TestCommonTools::consolePrintTestExprStart(631, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0632", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 2*y");
	ArgumentPtr y = new_Argument("y = 2*x");
	x->addDefinitions(y);
	y->addDefinitions(x);
	string expStr = "x+y";
	TestCommonTools::consolePrintTestExprStart(632, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0633", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	FunctionPtr f = new_Function("f(x) = 2*g(x)");
	FunctionPtr g = new_Function("g(x) = 2*f(x)");
	f->addDefinitions(g);
	g->addDefinitions(f);
	string expStr = "f(1)+g(1)";
	TestCommonTools::consolePrintTestExprStart(633, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f, g);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0634", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	FunctionPtr f = new_Function("f(n) = f(n-1)");
	string expStr = "f(10)";
	TestCommonTools::consolePrintTestExprStart(634, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0635", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = x + 2");
	x->addDefinitions(x);
	string expStr = "x-3";
	TestCommonTools::consolePrintTestExprStart(635, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0636", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr y = new_Argument("y = 2");
	ArgumentPtr x = new_Argument("x = 2*y + x");
	FunctionPtr f = new_Function("f(x) = 2*g(x)+y");
	FunctionPtr g = new_Function("g(x) = 2*f(x)+x+y");
	x->addDefinitions(x, y);
	f->addDefinitions(g, y);
	g->addDefinitions(f, y);
	string expStr = "2*sin(x)+2*x-3*y+f(x)-g(y)";
	TestCommonTools::consolePrintTestExprStart(636, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y, f, g);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0637", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "00000001";
	TestCommonTools::consolePrintTestExprStart(637, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 00000001;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0638", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-00000001";
	TestCommonTools::consolePrintTestExprStart(638, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -00000001;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0639", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "+00000001";
	TestCommonTools::consolePrintTestExprStart(639, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = +00000001;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0640", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "00000001.001";
	TestCommonTools::consolePrintTestExprStart(640, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 00000001.001;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0641", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-00000001.0002";
	TestCommonTools::consolePrintTestExprStart(641, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -00000001.0002;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0642", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "+00000001.123";
	TestCommonTools::consolePrintTestExprStart(642, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = +00000001.123;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0643", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "00000001.001e001";
	TestCommonTools::consolePrintTestExprStart(643, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 00000001.001e001;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0644", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-00000001.0002e0002";
	TestCommonTools::consolePrintTestExprStart(644, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -00000001.0002e0002;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0645", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "+00000001.123e004";
	TestCommonTools::consolePrintTestExprStart(645, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = +00000001.123e004;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0646", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "00000001.001e+001";
	TestCommonTools::consolePrintTestExprStart(646, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 00000001.001e+001;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0647", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-00000001.0002e+0002";
	TestCommonTools::consolePrintTestExprStart(647, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -00000001.0002e+0002;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0648", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "+00000001.123e+004";
	TestCommonTools::consolePrintTestExprStart(648, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = +00000001.123e+004;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0649", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "00000001.001e-001";
	TestCommonTools::consolePrintTestExprStart(649, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 00000001.001e-001;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0650", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "-00000001.0002e-0002";
	TestCommonTools::consolePrintTestExprStart(650, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -00000001.0002e-0002;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0651", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "+00000001.123e-004";
	TestCommonTools::consolePrintTestExprStart(651, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = +00000001.123e-004;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0652", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "+000001.001e+0000000";
	TestCommonTools::consolePrintTestExprStart(652, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = +000001.001e+0000000;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0653",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"00000001-(-00000001)+(+00000001)-00000001.001-(-00000001.0002)-(+00000001.123)+00000001.001e001+(-00000001.0002e0002)-(+00000001.123e004)-00000001.001e+001+00000001.0002e+0002+(+00000001.123e+004)-00000001.001e-001-(-00000001.0002e-0002)-(+00000001.123e-004)-(+00000001.123e-004)-(+000001.001e+0000000)";
	TestCommonTools::consolePrintTestExprStart(653, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 00000001 - (-00000001) + (+00000001) - 00000001.001 - (-00000001.0002) - (+00000001.123) +
	             00000001.001e001 + (-00000001.0002e0002) - (+00000001.123e004) - 00000001.001e+001 +
	             00000001.0002e+0002 + (+00000001.123e+004) - 00000001.001e-001 - (-00000001.0002e-0002) - (+
		             00000001.123e-004) - (+00000001.123e-004) - (+000001.001e+0000000);
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0654", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2%";
	TestCommonTools::consolePrintTestExprStart(654, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.02;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0655", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-2%";
	TestCommonTools::consolePrintTestExprStart(655, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -0.02;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0656", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "100%+2%";
	TestCommonTools::consolePrintTestExprStart(656, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.02;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0657", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "100%-2%";
	TestCommonTools::consolePrintTestExprStart(657, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.98;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0658", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "((1%)%)%";
	TestCommonTools::consolePrintTestExprStart(658, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.000001;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0659", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2!+(3!)%";
	TestCommonTools::consolePrintTestExprStart(659, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2.06;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0660", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2*[%]-2%";
	TestCommonTools::consolePrintTestExprStart(660, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0661", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr sin = new_Function("sin(x,y) = 2*x + y");
	ArgumentPtr ee = new_Argument("e = 5");
	ConstantPtr pi = new_Constant("pi = 2");
	string expStr = "sin(e,pi)";
	TestCommonTools::consolePrintTestExprStart(661, expStr);
	ExpressionPtr testExp = new_Expression(expStr, sin, ee, pi);
	double value = testExp->calculate();
	double reg = 12;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0662", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "or( [false] )";
	TestCommonTools::consolePrintTestExprStart(662, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setNotToOverrideBuiltinTokens();
	CHECK(testResult);
}

TEST_CASE("testExpr0663", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "or( [true] )";
	TestCommonTools::consolePrintTestExprStart(663, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::TRUE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0664", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "or( [NaN] )";
	TestCommonTools::consolePrintTestExprStart(664, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0665", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "or( [false], 0 )";
	TestCommonTools::consolePrintTestExprStart(665, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0666", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "or( [false], [NaN] )";
	TestCommonTools::consolePrintTestExprStart(666, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0667", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "or( [false], 0, 0, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
	TestCommonTools::consolePrintTestExprStart(667, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0668", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "or( [false], 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 1 )";
	TestCommonTools::consolePrintTestExprStart(668, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::TRUE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0669", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "or( 1, 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
	TestCommonTools::consolePrintTestExprStart(669, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::TRUE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0670", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "or( 0, 1, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
	TestCommonTools::consolePrintTestExprStart(670, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::TRUE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0671", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "or( 1, 2, 3, 4, [true], -10, -0.5, 2, 0.01 )";
	TestCommonTools::consolePrintTestExprStart(671, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::TRUE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0672", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "and( [false] )";
	TestCommonTools::consolePrintTestExprStart(672, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0673", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "and( [true] )";
	TestCommonTools::consolePrintTestExprStart(673, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::TRUE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0674", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "and( [NaN] )";
	TestCommonTools::consolePrintTestExprStart(674, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0675", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "and( [false], 0 )";
	TestCommonTools::consolePrintTestExprStart(675, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0676", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "and( [false], [NaN] )";
	TestCommonTools::consolePrintTestExprStart(676, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0677", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "and( [false], 0, 0, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
	TestCommonTools::consolePrintTestExprStart(677, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0678", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "and( [false], 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 1 )";
	TestCommonTools::consolePrintTestExprStart(678, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0679", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "and( 1, 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
	TestCommonTools::consolePrintTestExprStart(679, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0680", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "and( 0, 1, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
	TestCommonTools::consolePrintTestExprStart(680, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0681", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "and( 1, 2, 3, 4, [true], -10, -0.5, 2, 0.01 )";
	TestCommonTools::consolePrintTestExprStart(681, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::TRUE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0682", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "xor( [false] )";
	TestCommonTools::consolePrintTestExprStart(682, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0683", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "xor( [true] )";
	TestCommonTools::consolePrintTestExprStart(683, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::TRUE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0684", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "xor( [NaN] )";
	TestCommonTools::consolePrintTestExprStart(684, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0685", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "xor( [false], 0 )";
	TestCommonTools::consolePrintTestExprStart(685, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0686", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "xor( [false], [NaN] )";
	TestCommonTools::consolePrintTestExprStart(686, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0687", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "xor( [false], 0, 0, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
	TestCommonTools::consolePrintTestExprStart(687, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0688", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "xor( [false], 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 1 )";
	TestCommonTools::consolePrintTestExprStart(688, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0689", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "xor( 1, 0, [false], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
	TestCommonTools::consolePrintTestExprStart(689, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::TRUE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0690", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "xor( 0, 1, 1, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
	TestCommonTools::consolePrintTestExprStart(690, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0691", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "xor( 1, 2, 3, 4, [true], -10, -0.5, 2, 0.01 )";
	TestCommonTools::consolePrintTestExprStart(691, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::FALSE;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0692", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-b1.+0+b1.-2*B1.";
	TestCommonTools::consolePrintTestExprStart(692, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0693", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b1.111+3)-B1.111+3";
	TestCommonTools::consolePrintTestExprStart(693, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0694", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b2.101+5)-B2.00101+5";
	TestCommonTools::consolePrintTestExprStart(694, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0695", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b3.121+16)-B3.00121+16";
	TestCommonTools::consolePrintTestExprStart(695, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0696", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b4.123+27)-B4.00123+27";
	TestCommonTools::consolePrintTestExprStart(696, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0697", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b5.341+96)-B5.00341+96";
	TestCommonTools::consolePrintTestExprStart(697, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0698", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b6.352+140)-B6.00352+140";
	TestCommonTools::consolePrintTestExprStart(698, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0699", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b7.256+139)-B7.00256+139";
	TestCommonTools::consolePrintTestExprStart(699, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0700", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b8.376+254)-B8.00376+254";
	TestCommonTools::consolePrintTestExprStart(700, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0701", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-o.376+254)-O.00376+254";
	TestCommonTools::consolePrintTestExprStart(701, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0702", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b.101+5)-B.00101+5";
	TestCommonTools::consolePrintTestExprStart(702, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0703", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b9.821+667)-B9.00821+667";
	TestCommonTools::consolePrintTestExprStart(703, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0704", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b10.394+394)-B10.00394+394";
	TestCommonTools::consolePrintTestExprStart(704, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0705", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b11.3A7+480)-B11.003a7+480";
	TestCommonTools::consolePrintTestExprStart(705, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0706", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b12.A5B+1511)-B12.00a5b+1511";
	TestCommonTools::consolePrintTestExprStart(706, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0707", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b13.ACB+1857)-B13.00acb+1857";
	TestCommonTools::consolePrintTestExprStart(707, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0708", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b14.2AD+545)-B14.002ad+545";
	TestCommonTools::consolePrintTestExprStart(708, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0709", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b15.BE4+2689)-B15.00be4+2689";
	TestCommonTools::consolePrintTestExprStart(709, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0710", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b16.FA2+4002)-B16.00fa2+4002";
	TestCommonTools::consolePrintTestExprStart(710, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0711", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-h.FA2+4002)-H.00fa2+4002";
	TestCommonTools::consolePrintTestExprStart(711, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0712", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b17.AG6+3168)-B17.00ag6+3168";
	TestCommonTools::consolePrintTestExprStart(712, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0713", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b18.FGH+5165)-B18.00fgh+5165";
	TestCommonTools::consolePrintTestExprStart(713, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0714", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b19.2I3+1067)-B19.002i3+1067";
	TestCommonTools::consolePrintTestExprStart(714, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0715", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b20.9CJ+3859)-B20.009cj+3859";
	TestCommonTools::consolePrintTestExprStart(715, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0716", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b21.K5F+8940)-B21.00k5f+8940";
	TestCommonTools::consolePrintTestExprStart(716, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0717", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b22.FL5+7727)-B22.00fl5+7727";
	TestCommonTools::consolePrintTestExprStart(717, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0718", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b23.1AM+781)-B23.001am+781";
	TestCommonTools::consolePrintTestExprStart(718, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0719", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b24.5ND+3445)-B24.005nd+3445";
	TestCommonTools::consolePrintTestExprStart(719, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0720", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b25.5ND5C+2320762)-B25.005nd5c+2320762";
	TestCommonTools::consolePrintTestExprStart(720, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0721", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b26.3KPB5+1739639)-B26.003kpb5+1739639";
	TestCommonTools::consolePrintTestExprStart(721, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0722", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b27.IQH67+10090258)-B27.00iqh67+10090258";
	TestCommonTools::consolePrintTestExprStart(722, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0723", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b28.RKHB2+17048390)-B28.00rkhb2+17048390";
	TestCommonTools::consolePrintTestExprStart(723, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0724", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b29.8BIFS+5942128)-B29.008bifs+5942128";
	TestCommonTools::consolePrintTestExprStart(724, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0725", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b30.2TGJB+2417981)-B30.002tgjb+2417981";
	TestCommonTools::consolePrintTestExprStart(725, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0726", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b31.6PUC0+6315103)-B31.006puc0+6315103";
	TestCommonTools::consolePrintTestExprStart(726, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0727", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b32.C0PV0+12609504)-B32.00c0pv0+12609504";
	TestCommonTools::consolePrintTestExprStart(727, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0728", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b33.V000W+36763583)-B33.00v000w+36763583";
	TestCommonTools::consolePrintTestExprStart(728, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0729", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b34.NP2XW+31721794)-B34.00np2xw+31721794";
	TestCommonTools::consolePrintTestExprStart(729, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0730", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b35.120Y0+1587565)-B35.00120y0+1587565";
	TestCommonTools::consolePrintTestExprStart(730, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0731", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-b36.ZZZZZ+60466175)-B36.00zzzzz+60466175";
	TestCommonTools::consolePrintTestExprStart(731, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0732", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "base(1)-0";
	TestCommonTools::consolePrintTestExprStart(732, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0733", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "base(1,1)-1";
	TestCommonTools::consolePrintTestExprStart(733, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0734", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "base(1,1,1,1,1,1,1,1,1,1,1)-10";
	TestCommonTools::consolePrintTestExprStart(734, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0735", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "base(2,0,0,1)-1";
	TestCommonTools::consolePrintTestExprStart(735, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0736", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "base(2,1,0,1)-5";
	TestCommonTools::consolePrintTestExprStart(736, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0737", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "base(10,1,2,3,4,5,6,7,8,9,0)-1234567890";
	TestCommonTools::consolePrintTestExprStart(737, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0738", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "base(35,b35.0,b35.0,b35.1,b35.2,b35.0,b35.y,b35.0)-B35.00120y0";
	TestCommonTools::consolePrintTestExprStart(738, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0739", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN( base(-1,0,1,2) ) - [true]";
	TestCommonTools::consolePrintTestExprStart(739, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0740", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN( base(1,0,1) ) - [true]";
	TestCommonTools::consolePrintTestExprStart(740, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0741", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN( base(2) ) - [true]";
	TestCommonTools::consolePrintTestExprStart(741, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0742", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN( base(2,2,1) ) - [true]";
	TestCommonTools::consolePrintTestExprStart(742, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0743", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN( base(2,-1,1) ) - [true]";
	TestCommonTools::consolePrintTestExprStart(743, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0744", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( ndig10(-10)-2 ) + ( ndig10(1234)-4 ) + ( ndig10(0)-1 )";
	TestCommonTools::consolePrintTestExprStart(744, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0745", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr = "sum(i, -1000000, 1000000, ndig10(i) - floor( log10( abs(i) ) ) - 1, 3)";
	TestCommonTools::consolePrintTestExprStart(745, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0746", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN( ndig10( [NaN] ) ) - [true]";
	TestCommonTools::consolePrintTestExprStart(746, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0747", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr = "sum( i, -1000000, 1000000, ndig10(i) - ndig(i, 10) )";
	TestCommonTools::consolePrintTestExprStart(747, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0748",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"(ndig(5, 2) - 3) + (ndig(-5, 2) - 3) + (ndig( b35.124abcdefg,  35) - 10) + (ndig(0, 1) - 0) + (ndig(123, 1) - 123)";
	TestCommonTools::consolePrintTestExprStart(748, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0749",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( isNaN( ndig( [NaN], 10) ) - [true] ) + ( isNaN( ndig( 100, [NaN]) ) - [true] ) + ( isNaN( ndig( 10, -10) ) - [true] ) + ( isNaN( ndig( 10, 0) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(749, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0750",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( dig10(1234567890, 1) - 1 ) + ( dig10(1234567890, 2) - 2 ) + ( dig10(1234567890, 3) - 3 ) + ( dig10(1234567890, 4) - 4 ) + ( dig10(1234567890, 5) - 5 ) + ( dig10(1234567890, 6) - 6 ) + ( dig10(1234567890, 7) - 7 ) + ( dig10(1234567890, 8) - 8 ) + ( dig10(1234567890, 9) - 9 ) + ( dig10(1234567890, 10) - 0 )";
	TestCommonTools::consolePrintTestExprStart(750, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0751",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( dig(1234567890, 1, 10) - 1 ) + ( dig(1234567890, 2, 10) - 2 ) + ( dig(1234567890, 3, 10) - 3 ) + ( dig(1234567890, 4, 10) - 4 ) + ( dig(1234567890, 5, 10) - 5 ) + ( dig(1234567890, 6, 10) - 6 ) + ( dig(1234567890, 7, 10) - 7 ) + ( dig(1234567890, 8, 10) - 8 ) + ( dig(1234567890, 9, 10) - 9 ) + ( dig(1234567890, 10, 10) - 0 )";
	TestCommonTools::consolePrintTestExprStart(751, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0752",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( dig10(1234567890, 0) - 0 ) + ( dig10(1234567890, -1) - 9 ) + ( dig10(1234567890, -2) - 8 ) + ( dig10(1234567890, -3) - 7 ) + ( dig10(1234567890, -4) - 6 ) + ( dig10(1234567890, -5) - 5 ) + ( dig10(1234567890, -6) - 4 ) + ( dig10(1234567890, -7) - 3 ) + ( dig10(1234567890, -8) - 2 ) + ( dig10(1234567890, -9) - 1 ) + ( dig10(1234567890, -10) - 0 ) + ( dig10(1234567890, -11) - 0 )";
	TestCommonTools::consolePrintTestExprStart(752, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0753",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( dig(1234567890, 0, 10) - 0 ) + ( dig(1234567890, -1, 10) - 9 ) + ( dig(1234567890, -2, 10) - 8 ) + ( dig(1234567890, -3, 10) - 7 ) + ( dig(1234567890, -4, 10) - 6 ) + ( dig(1234567890, -5, 10) - 5 ) + ( dig(1234567890, -6, 10) - 4 ) + ( dig(1234567890, -7, 10) - 3 ) + ( dig(1234567890, -8, 10) - 2 ) + ( dig(1234567890, -9, 10) - 1 ) + ( dig(1234567890, -10, 10) - 0 ) + ( dig(1234567890, -11, 10) - 0 )";
	TestCommonTools::consolePrintTestExprStart(753, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0754",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( dig(b35.124abcdefg, 0, 35) - b35.g ) + ( dig(b35.124abcdefg, -1, 35) - b35.f ) + ( dig(b35.124abcdefg, 1, 35) - 1 ) + ( dig(b35.124abcdefg, 2, 35) - 2 ) + ( dig(b35.124abcdefg, 3, 35) - 4 )";
	TestCommonTools::consolePrintTestExprStart(754, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0755",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( dig(b1.11111, 1, 1) - 1 ) + ( dig(b1.11111, 2, 1) - 1 ) + ( dig(b1.11111, 3, 1) - 1 ) + ( dig(b1.11111, 4, 1) - 1 ) + ( dig(b1.11111, 5, 1) - 1 )";
	TestCommonTools::consolePrintTestExprStart(755, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0756",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( dig(b1.11111, 0, 1) - 1 ) + ( dig(b1.11111, -1, 1) - 1 ) + ( dig(b1.11111, -2, 1) - 1 ) + ( dig(b1.11111, -3, 1) - 1 ) + ( dig(b1.11111, -4, 1) - 1 )";
	TestCommonTools::consolePrintTestExprStart(756, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0757",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( dig(b2.10101, 1, 2) - 1 ) + ( dig(b2.10101, 2, 2) - 0 ) + ( dig(b2.10101, 3, 2) - 1 ) + ( dig(b2.10101, 4, 2) - 0 ) + ( dig(b2.10101, 5, 2) - 1 )";
	TestCommonTools::consolePrintTestExprStart(757, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0758",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( dig(b2.10101, 0, 2) - 1 ) + ( dig(b2.10101, -1, 2) - 0 ) + ( dig(b2.10101, -2, 2) - 1 ) + ( dig(b2.10101, -3, 2) - 0 ) + ( dig(b2.10101, -4, 2) - 1 ) + ( dig(b2.10101, -5, 2) - 0 ) + ( dig(b2.10101, -6, 2) - 0 )";
	TestCommonTools::consolePrintTestExprStart(758, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0759",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(d, 1, ndig10(123456789), dig10(123456789, d) ) - sum(d, 1, ndig10(123456789), d)";
	TestCommonTools::consolePrintTestExprStart(759, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0760",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(d, -2*ndig10(123456789), 0, dig10(123456789, d) ) - sum(d, 1, ndig10(123456789), d)";
	TestCommonTools::consolePrintTestExprStart(760, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0761",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(d, 1, ndig(123456789, 10), dig(123456789, d, 10) ) - sum(d, 1, ndig(123456789, 10), d)";
	TestCommonTools::consolePrintTestExprStart(761, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0762",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(d, -2*ndig(123456789, 10), 0, dig(123456789, d, 10) ) - sum(d, 1, ndig(123456789, 10), d)";
	TestCommonTools::consolePrintTestExprStart(762, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0763", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(p, 1, ndig(1234, 1), dig(1234, p, 1) ) - 1234";
	TestCommonTools::consolePrintTestExprStart(763, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0764", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(p, -ndig(1234, 1)+1, 0, dig(1234, p, 1) ) - 1234";
	TestCommonTools::consolePrintTestExprStart(764, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0765",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( isNaN( dig10( [NaN], 2 ) ) - [true] ) + ( isNaN( dig10( 10, [NaN] ) ) - [true] ) + ( isNaN( dig10( 10, 20 ) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(765, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0766", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( isNaN( dig( 0, 2, 1 ) ) - [true] ) + ( isNaN( dig( 10, -20, 1 ) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(766, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0767", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( isNaN( dig( 100, 1, 0 ) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(767, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0768",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( med(1)-1 ) + ( med(1,2)-1.5 ) + ( med(2,1)-1.5 ) + ( med(2,3,1)-2 ) + ( med(1,2,3)-2 ) + ( med(1,2,3,4)-2.5 ) + ( med(2,3,1,4)-2.5 ) + ( med(1,2,2,3)-2 ) + ( med(5,4,3,2,1)-3 ) + ( med(-5,-4,-3,-2,-1)+3 )";
	TestCommonTools::consolePrintTestExprStart(768, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0769", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN( med(1,2,[NaN] ) ) - [true]";
	TestCommonTools::consolePrintTestExprStart(769, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0770", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( mode(-1)+1 ) + ( mode(1)-1 )";
	TestCommonTools::consolePrintTestExprStart(770, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0771", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( mode(1,2)-1 ) + ( mode(2,1)-2 )";
	TestCommonTools::consolePrintTestExprStart(771, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0772", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( mode(1,2,3)-1 ) + ( mode(2,1,3)-2 ) + ( mode(3,2,1)-3 )";
	TestCommonTools::consolePrintTestExprStart(772, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0773", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "mode(1,1,1,1,1,1)-1";
	TestCommonTools::consolePrintTestExprStart(773, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0774", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "mode(1,2,1,2,1,2,1,2)-1";
	TestCommonTools::consolePrintTestExprStart(774, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0775", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "mode(1,2,1,2,1,2,1,2,2)-2";
	TestCommonTools::consolePrintTestExprStart(775, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0776", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "mode(2,3,1,4,7,5,6,5,8,9)-5";
	TestCommonTools::consolePrintTestExprStart(776, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0777", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "mode(2,3,1,4,7,5,6,5,8,9,4)-4";
	TestCommonTools::consolePrintTestExprStart(777, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0778", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN( mode(1,2,[NaN] ) ) - [true]";
	TestCommonTools::consolePrintTestExprStart(778, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0779",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( ndist(1) - 1 ) + ( ndist(1, 2) - 2 ) + ( ndist(1,2,3) - 3 ) + ( ndist(1,1,2) - 2 ) + ( ndist(1,2,1,2) - 2 )";
	TestCommonTools::consolePrintTestExprStart(779, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr0780", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setEpsilon(0.00001);
	string expStr = "ndist(1, 2, 1.000001, 1.0001, 3) - 4";
	TestCommonTools::consolePrintTestExprStart(780, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0781", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setEpsilon(0.00001);
	string expStr = "isNaN( ndist(1,2,3,[NaN]) ) - [true]";
	TestCommonTools::consolePrintTestExprStart(781, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0782",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setEpsilon(0.00001);
	string expStr =
			"( argmin(1) - 1 ) + ( argmin(1,2) - 1 ) + ( argmin(2,1) - 2 ) + ( argmin(2,2,2,1,3,-1) - 6 ) + ( argmin(1,2,3,-6,2,3,2) - 4 )";
	TestCommonTools::consolePrintTestExprStart(782, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0783",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setEpsilon(0.00001);
	string expStr =
			"( argmax(-1) - 1 ) + ( argmax(1,2) - 2 ) + ( argmax(2,1) - 1 ) + ( argmax(-1,2,3,2,5) - 5 ) + ( argmax(2,4,1,2,3,10,8,1) - 6 )";
	TestCommonTools::consolePrintTestExprStart(783, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0784", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setEpsilon(0.00001);
	string expStr = "argmax(4, 2, 4.000001, 3) - 1";
	TestCommonTools::consolePrintTestExprStart(784, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0785", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setEpsilon(0.00001);
	string expStr = "argmin(2, 1.000001, 3, 1) - 2";
	TestCommonTools::consolePrintTestExprStart(785, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0786", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setEpsilon(0.00001);
	string expStr = "isNaN( argmin(1,2,3,[NaN]) ) - [true]";
	TestCommonTools::consolePrintTestExprStart(786, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0787", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setEpsilon(0.00001);
	string expStr = "isNaN( argmax(1,2,3,[NaN]) ) - [true]";
	TestCommonTools::consolePrintTestExprStart(787, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0788", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2^3 - 8";
	TestCommonTools::consolePrintTestExprStart(788, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0789", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-2^3 + 8";
	TestCommonTools::consolePrintTestExprStart(789, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0790", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "8^(1/3) - 2";
	TestCommonTools::consolePrintTestExprStart(790, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0791", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-8^(1/3) + 2";
	TestCommonTools::consolePrintTestExprStart(791, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0792", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "125^(1/3) - 5";
	TestCommonTools::consolePrintTestExprStart(792, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0793", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-125^(1/3) + 5";
	TestCommonTools::consolePrintTestExprStart(793, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0794", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "128^(1/7) - 2";
	TestCommonTools::consolePrintTestExprStart(794, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0795", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-128^(1/7) + 2";
	TestCommonTools::consolePrintTestExprStart(795, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0796", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "128^0 - 1";
	TestCommonTools::consolePrintTestExprStart(796, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0797", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-128^0 - 1";
	TestCommonTools::consolePrintTestExprStart(797, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0798", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(1/125)^(-1/3) - 5";
	TestCommonTools::consolePrintTestExprStart(798, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0799", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-1/125)^(-1/3) + 5";
	TestCommonTools::consolePrintTestExprStart(799, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0800",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( nfact(74) - 2 ) + ( factval(74, 1) - 2 ) + ( factval(74, 2) - 37 ) + ( factexp(74, 1) - 1 ) + ( factexp(74, 2) - 1 )";
	TestCommonTools::consolePrintTestExprStart(800, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0801",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( nfact(5632) - 2 ) + ( factval(5632, 1) - 2 ) + ( factval(5632, 2) - 11 ) + ( factexp(5632, 1) - 9 ) + ( factexp(5632, 2) - 1 )";
	TestCommonTools::consolePrintTestExprStart(801, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0802",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( factval(123456789, 0) - 1 ) + ( factval(123456789, -1) - 1 ) + ( factval(123456789, 4) - 1 ) + ( factval(123456789, 5) - 1 )";
	TestCommonTools::consolePrintTestExprStart(802, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0803",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( factexp(123456789, 0) - 0 ) + ( factexp(123456789, -1) - 0 ) + ( factexp(123456789, 4) - 0 ) + ( factexp(123456789, 5) - 0 )";
	TestCommonTools::consolePrintTestExprStart(803, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0804",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( factval(123456789, 1) - 3 ) + ( factval(123456789, 2) - 3607 ) + ( factval(123456789, 3) - 3803 )";
	TestCommonTools::consolePrintTestExprStart(804, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0805",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( factexp(123456789, 1) - 2 ) + ( factexp(123456789, 2) - 1 ) + ( factexp(123456789, 3) - 1 )";
	TestCommonTools::consolePrintTestExprStart(805, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0806", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "nfact(123456789) - 3";
	TestCommonTools::consolePrintTestExprStart(806, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0807",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( nfact(0) - 0 ) + ( isNaN( factval(0,1) ) - [true] ) + ( isNaN( factexp(0,1) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(807, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0808",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( isNaN( nfact([NaN]) ) - [true] ) + ( isNaN( factval([NaN],1) ) - [true] ) + ( isNaN( factexp([NaN],1) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(808, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0809", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( isNaN( factval(10,[NaN]) ) - [true] ) + ( isNaN( factexp(10,[NaN]) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(809, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0810",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr =
			"sum(n, -100000, 100000,  sgn(n)*prod( id, -10, nfact(n) + 10, factval(n, id)^factexp(n, id) ) - n , 3 )";
	TestCommonTools::consolePrintTestExprStart(810, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0811", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( root(7,128) - 2 ) + ( root(7,-128) + 2 )";
	TestCommonTools::consolePrintTestExprStart(811, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0812", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( root(3,125) - 5 ) + ( root(3,-125) + 5 )";
	TestCommonTools::consolePrintTestExprStart(812, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0813", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( root(3,8) - 2 ) + ( root(3,-8) + 2 )";
	TestCommonTools::consolePrintTestExprStart(813, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0814", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( root(1,1) - 1 ) + ( root(1,2) - 2 ) + ( root(1,0) - 0) + ( root(1,-2) +2 )";
	TestCommonTools::consolePrintTestExprStart(814, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0815", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( root(0,1) - 1 ) + ( root(0,0) - 0 )";
	TestCommonTools::consolePrintTestExprStart(815, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0816", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( isNaN( root(-2,3) ) - [true]  ) + ( isNaN( root(4,-10) ) - [true]  )";
	TestCommonTools::consolePrintTestExprStart(816, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0817", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( isNaN( root([NaN],3) ) - [true]  ) + ( isNaN( root(3,[NaN]) ) - [true]  )";
	TestCommonTools::consolePrintTestExprStart(817, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0818", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "der( sin(x), x, 0 )";
	TestCommonTools::consolePrintTestExprStart(818, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0819", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "der+( sin(x), x, 0 )";
	TestCommonTools::consolePrintTestExprStart(819, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0820", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "der-( sin(x), x, 0 )";
	TestCommonTools::consolePrintTestExprStart(820, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0821", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = pi");
	string expStr = "der( sin(x), x, x )";
	TestCommonTools::consolePrintTestExprStart(821, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = -1;
	if (MathFunctions::abs(reg - value) <= 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0822", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = pi");
	string expStr = "der( sin(x), x, 2*x )";
	TestCommonTools::consolePrintTestExprStart(822, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0823", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 2");
	string expStr = "pi-arcsec(x)-arcsec(-x)";
	TestCommonTools::consolePrintTestExprStart(823, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0824", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 3");
	string expStr = "arccsc(-x)+arccsc(x)";
	TestCommonTools::consolePrintTestExprStart(824, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0825", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 5");
	string expStr = "der( arcsec(x), x ) - 1 / ( x^2 * sqrt(1 - 1 / x^2) )";
	TestCommonTools::consolePrintTestExprStart(825, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0826", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 6");
	string expStr = "der( arcsec(x), x ) - 1 / ( abs(x) * sqrt(x^2 - 1) )";
	TestCommonTools::consolePrintTestExprStart(826, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0827", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 7");
	string expStr = "der( arccsc(x), x ) + 1 / ( x^2 * sqrt(1 - 1 / x^2) )";
	TestCommonTools::consolePrintTestExprStart(827, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0828", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 8");
	string expStr = "der( arccsc(x), x ) + 1 / ( abs(x) * sqrt(x^2 - 1) )";
	TestCommonTools::consolePrintTestExprStart(828, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0829", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	FunctionPtr Ackermann = new_Function(
		"Ackermann(m,n) = iff( m = 0, n+1; (m>0) & (n=0), Ackermann(m-1,1); (m>0) & (n>0), Ackermann(m-1, Ackermann(m,n-1)) )");
	string expStr = "Ackermann(3,4)";
	TestCommonTools::consolePrintTestExprStart(829, expStr);
	ExpressionPtr testExp = new_Expression(expStr, Ackermann);
	double value = testExp->calculate();
	double reg = 125;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0830", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	FunctionPtr Tetration = new_Function("Tetration(x,n) = if(n > 1, x^Tetration(x,n-1), x)");
	string expStr = "Tetration(sqrt(2),80)";
	TestCommonTools::consolePrintTestExprStart(830, expStr);
	ExpressionPtr testExp = new_Expression(expStr, Tetration);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0831", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 3.5");
	string expStr = "Gamma(x+1)-x*Gamma(x)";
	TestCommonTools::consolePrintTestExprStart(831, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0832", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = -3.5");
	string expStr = "Gamma(x+1)-x*Gamma(x)";
	TestCommonTools::consolePrintTestExprStart(832, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0833", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 1.7");
	string expStr = "Gamma(x)*Gamma(x+1/2) - ( sqrt(pi) / 2^(2*x-1) ) * Gamma(2*x)";
	TestCommonTools::consolePrintTestExprStart(833, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0834", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 0.7");
	string expStr = "Gamma(x)*Gamma(1-x) - pi / sin(pi * x)";
	TestCommonTools::consolePrintTestExprStart(834, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0835", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 0.7");
	string expStr = "Gamma(x+1/2)*Gamma(1/2-x) - pi / cos(pi * x)";
	TestCommonTools::consolePrintTestExprStart(835, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0836", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = 0.7");
	string expStr = "Gamma(x+1/2)*Gamma(1/2-x) - pi / cos(pi * x)";
	TestCommonTools::consolePrintTestExprStart(836, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0837", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "Gamma(-3/2) - 4/3 *sqrt(pi)";
	TestCommonTools::consolePrintTestExprStart(837, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0838", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "Gamma(-1/2) + 2 *sqrt(pi)";
	TestCommonTools::consolePrintTestExprStart(838, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0839", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "Gamma(1/2) - sqrt(pi)";
	TestCommonTools::consolePrintTestExprStart(839, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0840", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "Gamma(3/2) - sqrt(pi)/2";
	TestCommonTools::consolePrintTestExprStart(840, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0841", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "Gamma(5/2) - 3/4 * sqrt(pi)";
	TestCommonTools::consolePrintTestExprStart(841, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0842", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "Gamma(7/2) - 15/8 * sqrt(pi)";
	TestCommonTools::consolePrintTestExprStart(842, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0843", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(n, 1, 10, Gamma(n) - (n-1)! )";
	TestCommonTools::consolePrintTestExprStart(843, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0844", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(n, -100, 0, isNaN( Gamma(n) ) )";
	TestCommonTools::consolePrintTestExprStart(844, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0845",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::setEpsilonComparison();
	ArgumentPtr x0 = new_Argument("x0 = 1.3");
	string expStr = "der( Gamma(x), x, x0 ) - ( -[gam] + sum(n, 0, 10000000, 1/(n+1) - 1/(n+x0) ) ) * Gamma(x0)";
	TestCommonTools::consolePrintTestExprStart(845, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x0);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0846", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	FunctionPtr V = new_Function("V(R,n) = if( n > 1, int( V( R/2, n-1 ), x, -R, R ), 1 )");
	string expStr = "V(1,1) + V(1,2)";
	TestCommonTools::consolePrintTestExprStart(846, expStr);
	ExpressionPtr testExp = new_Expression(expStr, V);
	double value = testExp->calculate();
	double reg = 3;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0847", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	FunctionPtr uniSum = new_Function("uniSum(n, x) = if( x >= 1, n, uniSum(n+1, x + rUni(0,1) ) )");
	string expStr = "avg( i, 1, 100000, uniSum(0,0) ) - e";
	TestCommonTools::consolePrintTestExprStart(847, expStr);
	ExpressionPtr testExp = new_Expression(expStr, uniSum);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0848", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr n = new_Argument("n = 100000");
	string expStr = "sqrt( 6 / (sum( i, 1, n, if( gcd( [Nat], [Nat] ) = 1, 1, 0) ) / n) ) - pi";
	TestCommonTools::consolePrintTestExprStart(848, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0849", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "root( 3, 7 + sqrt(50) ) + root( 3, 7 - sqrt(50) )";
	TestCommonTools::consolePrintTestExprStart(849, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 0.000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0850", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "root( 3, 7 + root(2,50) ) + root( 3, 7 - root(2,50) )";
	TestCommonTools::consolePrintTestExprStart(850, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 0.000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0851", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(7 + sqrt(50))^(1/3) + (7 - sqrt(50))^(1/3)";
	TestCommonTools::consolePrintTestExprStart(851, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 0.000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0852", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(7 + 50^(1/2))^(1/3) + (7 - 50^(1/2))^(1/3)";
	TestCommonTools::consolePrintTestExprStart(852, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 0.000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0853",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	FunctionPtr Nrec = new_Function("Nrec(a, s, k) = if( s >= a, k, Nrec( a, s + [Uni], k+1 ) )");
	ArgumentPtr N1 = new_Argument("N1 = Nrec(1,0,0)", Nrec);
	ArgumentPtr N2 = new_Argument("N2 = Nrec(2,0,0)", Nrec);
	ArgumentPtr N3 = new_Argument("N3 = Nrec(3,0,0)", Nrec);
	ArgumentPtr N4 = new_Argument("N4 = Nrec(4,0,0)", Nrec);
	ArgumentPtr N5 = new_Argument("N5 = Nrec(5,0,0)", Nrec);
	ArgumentPtr EN1 = new_Argument("EN1 = avg( i, 1, 100000, N1 )", N1);
	ArgumentPtr EN2 = new_Argument("EN2 = avg( i, 1, 100000, N2 )", N2);
	ArgumentPtr EN3 = new_Argument("EN3 = avg( i, 1, 100000, N3 )", N3);
	ArgumentPtr EN4 = new_Argument("EN4 = avg( i, 1, 100000, N4 )", N4);
	ArgumentPtr EN5 = new_Argument("EN5 = avg( i, 1, 100000, N5 )", N5);
	string expStr =
			"(EN1 - e) + (EN2 - (e^2 - e)) + (EN3 - (e^3 - 2*e^2 + e/2)) + (EN4 - (e^4 - 3*e^3 + 2*e^2 - e/6)) + (EN5 - (e^5 - 4*e^4 + 9/2 * e^3 - 4/3 * e^2 + e/24))";
	TestCommonTools::consolePrintTestExprStart(853, expStr);
	ExpressionPtr testExp = new_Expression(expStr, EN1, EN2, EN3, EN4, EN5);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0854", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "stdi(i, 1, 100000, X)";
	FunctionPtr f = new_Function("f(x) = pNor(x,2,4)");
	FunctionPtr RejectSampling = new_Function(
		"RejectSampling(a,b,M,x) = if( rUni(0,M) <= f(x), x, RejectSampling(a,b,M, rUni(a,b) ) )", f);
	ArgumentPtr X = new_Argument("X = RejectSampling( -22, 26, pNor(2,2,4) , rUni(-22, 26) )", RejectSampling);
	TestCommonTools::consolePrintTestExprStart(854, expStr);
	ExpressionPtr testExp = new_Expression(expStr, X);
	double value = testExp->calculate();
	double reg = 4;
	if (MathFunctions::abs(reg - value) <= 0.05)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0855", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, -3, 3, pNor(x, 0, 1) - f(x, 30), 0.1)";
	FunctionPtr f = new_Function(
		"f(x,n) = if( (x*sqrt(n/12)+n/2) >= 0 , ( 1 / (n-1)! ) * sum(k, 0, floor((x*sqrt(n/12)+n/2)), (-1)^k * C(n,k) * (x*sqrt(n/12)+n/2-k)^(n-1) )*sqrt(n/12) ; 0)");
	TestCommonTools::consolePrintTestExprStart(855, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0856", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr = "sum(x, -20.05, 20.05, sin(x)/x - prod(k,1, 10000 , 1 - (x/(k*pi))^2 ) , 0.1)";
	TestCommonTools::consolePrintTestExprStart(856, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0857", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	FunctionPtr f = new_Function(
		"f(x,a,n) = (sqrt(pi)/2) * sum(k, 0, n, ( a^(1/2 - k) / ( Gamma(3/2 - k) * k! ) ) * (x-a)^k   )");
	string expStr = "sum(x, 1, 3, sqrt(x) - f(x,2,50) , 0.001)";
	TestCommonTools::consolePrintTestExprStart(857, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0858", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "sin(90)";
	TestCommonTools::consolePrintTestExprStart(858, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0859", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "asin(-1)";
	TestCommonTools::consolePrintTestExprStart(859, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -90;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0860", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "cos(90)";
	TestCommonTools::consolePrintTestExprStart(860, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0861", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "acos(0)";
	TestCommonTools::consolePrintTestExprStart(861, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 90;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0862", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "tan(-45)";
	TestCommonTools::consolePrintTestExprStart(862, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -1;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0863", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "atan(1)";
	TestCommonTools::consolePrintTestExprStart(863, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 45;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0864", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "ctan(45)";
	TestCommonTools::consolePrintTestExprStart(864, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0865", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "actan(1)";
	TestCommonTools::consolePrintTestExprStart(865, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 45;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0866", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "sec(60)";
	TestCommonTools::consolePrintTestExprStart(866, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0867", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "arcsec(2)";
	TestCommonTools::consolePrintTestExprStart(867, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0868", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "csc(30)";
	TestCommonTools::consolePrintTestExprStart(868, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0869", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "arccsc(2)";
	TestCommonTools::consolePrintTestExprStart(869, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0870", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	mXparser::setDegreesMode();
	string expStr = "Sinc(90)";
	TestCommonTools::consolePrintTestExprStart(870, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0 / 90.0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setRadiansMode();
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0871", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "gcd(3333333333333330.0,10000000000000000.0)";
	TestCommonTools::consolePrintTestExprStart(871, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0872", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "gcd(58333333333333, 100000000000000)";
	TestCommonTools::consolePrintTestExprStart(872, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0873", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2.0+2.0/3.0";
	TestCommonTools::consolePrintTestExprStart(873, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	StringPtr regExpStr = NumberTheory::toMixedFractionString(2.0 + 2.0 / 3.0);
	double reg = (new_Expression(regExpStr))->calculate();
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0874", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-2.0-2.0/3.0";
	TestCommonTools::consolePrintTestExprStart(874, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	StringPtr regExpStr = NumberTheory::toMixedFractionString(-2.0 - 2.0 / 3.0);
	double reg = (new_Expression(regExpStr))->calculate();
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0875", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "17.0/3.0";
	TestCommonTools::consolePrintTestExprStart(875, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	StringPtr regExpStr = NumberTheory::toMixedFractionString(17.0 / 3.0);
	double reg = (new_Expression(regExpStr))->calculate();
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0876", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "-17.0/3.0";
	TestCommonTools::consolePrintTestExprStart(876, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	StringPtr regExpStr = NumberTheory::toMixedFractionString(-17.0 / 3.0);
	double reg = (new_Expression(regExpStr))->calculate();
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0877", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(1_2 - 1/2) + (-1_3 + 1/3)";
	TestCommonTools::consolePrintTestExprStart(877, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0878", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(11_3 - 11/3) + (-11_3 + 11/3)";
	TestCommonTools::consolePrintTestExprStart(878, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0879", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(123121_71 - 123121/71) + (-123121_71 + 123121/71)";
	TestCommonTools::consolePrintTestExprStart(879, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0880", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( 1_1_2 - (1+1/2) ) + (-1_1_2 + (1+1/2) )";
	TestCommonTools::consolePrintTestExprStart(880, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0881", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( 110_5_2 - (110+5/2) ) + (-110_5_2 + (110+5/2) )";
	TestCommonTools::consolePrintTestExprStart(881, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0882",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( 1234_12345_123456 - (1234+12345/123456) ) + (-1234_12345_123456 + (1234+12345/123456) )";
	TestCommonTools::consolePrintTestExprStart(882, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0883", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "0_0_1 - 0_0_2";
	TestCommonTools::consolePrintTestExprStart(883, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0884", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "0_1 - 0_234";
	TestCommonTools::consolePrintTestExprStart(884, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0885", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN(0_0_0) - [true]";
	TestCommonTools::consolePrintTestExprStart(885, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0886", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN(1_2_0) - [true]";
	TestCommonTools::consolePrintTestExprStart(886, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0887", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN(1_0_0) - [true]";
	TestCommonTools::consolePrintTestExprStart(887, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0888", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN(0_2_0) - [true]";
	TestCommonTools::consolePrintTestExprStart(888, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0889", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN(1_0) - [true]";
	TestCommonTools::consolePrintTestExprStart(889, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0890", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN(0_0) - [true]";
	TestCommonTools::consolePrintTestExprStart(890, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0891", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "isNaN(100_0) - [true]";
	TestCommonTools::consolePrintTestExprStart(891, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0892", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2^0 - 2^^0";
	TestCommonTools::consolePrintTestExprStart(892, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0893", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2^1 - 2^^1";
	TestCommonTools::consolePrintTestExprStart(893, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0894", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2^2 - 2^^2";
	TestCommonTools::consolePrintTestExprStart(894, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0895", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2^2^2 - 2^^3";
	TestCommonTools::consolePrintTestExprStart(895, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0896", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "2^2^2^2 - 2^^4";
	TestCommonTools::consolePrintTestExprStart(896, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0897", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(e^(-e))^^100000000 - 1/e";
	TestCommonTools::consolePrintTestExprStart(897, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0898", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(e^(1/e))^^10000000 - e";
	TestCommonTools::consolePrintTestExprStart(898, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0899", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sqrt(2)^^100 - 2";
	TestCommonTools::consolePrintTestExprStart(899, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0900", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "( (-1)^^10 + 1 ) + ( (-1)^^0 - 1 )";
	TestCommonTools::consolePrintTestExprStart(900, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0901", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "0^^1234";
	TestCommonTools::consolePrintTestExprStart(901, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0902", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "(-2)^^(2) - 1_4";
	TestCommonTools::consolePrintTestExprStart(902, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0903",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum( x, e^(-e), e^(1/e), LambW0( -ln(x) ) / (-ln(x) ) - solve(y - x^y, y, 1/e, e) , 0.001 )";
	TestCommonTools::consolePrintTestExprStart(903, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0904", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, -1/e + 0.1, 100, der( 0.5 * ( 1 + LambW0(x) )^2 , x, x) - LambW0(x)/x, 0.01)";
	TestCommonTools::consolePrintTestExprStart(904, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0905", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, -1/e, 100, e^LambW0(x) - x / LambW0(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(905, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0906", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, -1/e, -0.01, e^LambW1(x) - x / LambW1(x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(906, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0907", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "int( LambW0(x), x, 0, e) - e + 1";
	TestCommonTools::consolePrintTestExprStart(907, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0908",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, -0.3, 0.3, LambW0(x) - sum(n, 1, 100, ( ( (-n)^(n-1) ) / n! ) * x^n ) , 0.001)";
	TestCommonTools::consolePrintTestExprStart(908, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0909", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, 0, 200, LambW0(x * e^x) - x, 0.001)";
	TestCommonTools::consolePrintTestExprStart(909, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0910", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, -1, 0, LambW0(x * e^x) - x, 0.001)";
	TestCommonTools::consolePrintTestExprStart(910, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0911", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "avg(x, -10, -1, abs(x - LambW1(x * e^x))/abs(x), 0.001)";
	TestCommonTools::consolePrintTestExprStart(911, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0912", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, 0.01, 200, ln( LambW0(x) ) - ln(x) + LambW0(x), 0.001)";
	TestCommonTools::consolePrintTestExprStart(912, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0913", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr n = new_Argument("n = 4");
	string expStr = "sum(x, 0.01, 200, LambW0( (n*x^n) / LambW0(x)^(n-1) ) - n*LambW0(x), 0.001)";
	TestCommonTools::consolePrintTestExprStart(913, expStr);
	ExpressionPtr testExp = new_Expression(expStr, n);
	double value = testExp->calculate();
	double reg = 0;
#ifdef _MSC_VER
	double eps = 0.0000000001;
#else
	double eps = 0.00000000001;
#endif
	if (MathFunctions::abs(reg - value) <= eps)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0914", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	ArgumentPtr x = new_Argument("x = rUni(0,100)");
	ArgumentPtr y = new_Argument("y = rUni(0,100)");
	string expStr = "LambW0(x) + LambW0(y) - LambW0( x*y*( 1/LambW0(x) + 1/LambW0(y) ) )";
	TestCommonTools::consolePrintTestExprStart(914, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x, y);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0915", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "int( LambW0(2 * cot(x)^2) * sec(x)^2, x, 0.001182, pi-0.008 ) - 4*sqrt(pi)";
	TestCommonTools::consolePrintTestExprStart(915, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0916", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "int( LambW0( 1/x^2  ), x, 0.0000000804, 300 )/sqrt(2*pi)-1";
	TestCommonTools::consolePrintTestExprStart(916, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0917", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, 1/e, e, LambW0(-ln(x)/x) + ln(x), 0.001)";
	TestCommonTools::consolePrintTestExprStart(917, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.000000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0918",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( LambW0(-1/e) + 1 ) + ( LambW0(0) - 0 ) + ( LambW0(1) - [Om] ) + ( LambW0(1) + ln( LambW0(1) )  ) + ( LambW0(e) - 1 ) + ( LambW0(-ln(sqrt(2))) + 2*ln(sqrt(2)) )";
	TestCommonTools::consolePrintTestExprStart(918, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0919", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "LambW1(-1/e) + 1";
	TestCommonTools::consolePrintTestExprStart(919, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.00000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0920", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "der( LambW0(x), x, 0) - 1";
	TestCommonTools::consolePrintTestExprStart(920, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0921", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr = "int( LambW0(x)/( x*sqrt(x) ), x, 0.01 , 240000) - 2*sqrt(2*pi)";
	TestCommonTools::consolePrintTestExprStart(921, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0922", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, 0.001, 6, x^x - ( e^LambW0( ln(x^x) ) )^( e^LambW0( ln(x^x) ) ), 0.001)";
	TestCommonTools::consolePrintTestExprStart(922, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0923",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( isNaN( LambW0(-10) ) - [true] ) + ( isNaN( LambW1(-10) ) - [true] ) + ( isNaN( LambW1(10) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(923, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0924",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr =
			"( isNaN( 2^^[NaN] ) - [true] ) + ( isNaN( [NaN]^^2 ) - [true] ) + ( isNaN( 2^^(-1) ) - [true] ) + ( isNaN( 0^^0 ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(924, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0925", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, 1, 10, sgnGamma(x)) + sum(x, 0.5, 9.5, sgnGamma(x)) - 20";
	TestCommonTools::consolePrintTestExprStart(925, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0926", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, -99, 0, isNaN( sgnGamma(x) ) )";
	TestCommonTools::consolePrintTestExprStart(926, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0927", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, -98.5, -0.5, sgnGamma(x), 2) + 50 + sum(x, -99.5, -1.5, sgnGamma(x), 2) - 50";
	TestCommonTools::consolePrintTestExprStart(927, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0928",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr =
			"sum(x, 0.5, 50, logGamma(x) - ( -[gam]*x - ln(x) + sum(k, 1, 10000+x^3, x/k - ln(1 + x/k) ) ), 0.5)";
	TestCommonTools::consolePrintTestExprStart(928, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0929", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(x, -99, 0, isNaN( logGamma(x) ) )";
	TestCommonTools::consolePrintTestExprStart(929, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.0000000001)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0930", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::setEpsilonComparison();
	string expStr = "sum(s, -50.5, -50.5, sum(x, 0.5, 50.5, GammaL(s,x) + GammaU(s,x) - Gamma(s) ) )";
	TestCommonTools::consolePrintTestExprStart(930, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setDefaultEpsilon();
	CHECK(testResult);
}

TEST_CASE("testExpr0931", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 0.1, 1, 0.001}], 16] = 2114.212208108448
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 0.1, 1, Gamma(x), 0.001) - 2114.212208108448 ) / 2114.212208108448";
	TestCommonTools::consolePrintTestExprStart(931, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-15)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0932", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 1.1, 2, 0.001}], 16] = 826.2989620272716
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 1.1, 2, Gamma(x), 0.001) - 826.2989620272716 ) / 826.2989620272716";
	TestCommonTools::consolePrintTestExprStart(932, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0933", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 2.1, 3, 0.001}], 16] = 1284.551346724549
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 2.1, 3, Gamma(x), 0.001) - 1284.551346724549 ) / 1284.551346724549";
	TestCommonTools::consolePrintTestExprStart(933, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0934", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 3.1, 4, 0.001}], 16] = 3338.776475304076
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 3.1, 4, Gamma(x), 0.001) - 3338.776475304076 ) / 3338.776475304076";
	TestCommonTools::consolePrintTestExprStart(934, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0935", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 4.1, 5, 0.001}], 16] = 12102.99996568467
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 4.1, 5, Gamma(x), 0.001) - 12102.99996568467 ) / 12102.99996568467";
	TestCommonTools::consolePrintTestExprStart(935, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0936", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 5.1, 6, 0.001}], 16] = 56192.71972868672
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 5.1, 6, Gamma(x), 0.001) - 56192.71972868672 ) / 56192.71972868672";
	TestCommonTools::consolePrintTestExprStart(936, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0937", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 6.1, 7, 0.001}], 16] = 317850.3398689155
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 6.1, 7, Gamma(x), 0.001) - 317850.3398689155 ) / 317850.3398689155";
	TestCommonTools::consolePrintTestExprStart(937, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0938", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 7.1, 8, 0.001}], 16] = 2119192.458453365
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 7.1, 8, Gamma(x), 0.001) - 2119192.458453365 ) / 2119192.458453365";
	TestCommonTools::consolePrintTestExprStart(938, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0939", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 8.1, 9, 0.001}], 16] = 1.626741828826147E7
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 8.1, 9, Gamma(x), 0.001) - 1.626741828826147E7 ) / 1.626741828826147E7";
	TestCommonTools::consolePrintTestExprStart(939, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0940", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 9.1, 10, 0.001}], 16] = 1.412638999378844E8
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 9.1, 10, Gamma(x), 0.001) - 1.412638999378844E8 ) / 1.412638999378844E8";
	TestCommonTools::consolePrintTestExprStart(940, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0941", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 10.1, 20, 0.1}], 16] = 4.758039372588876E17
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 10.1, 20, Gamma(x), 0.1) - 4.758039372588876E17 ) / 4.758039372588876E17";
	TestCommonTools::consolePrintTestExprStart(941, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0942",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 20.1, 100, 0.1}], 16] = 2.532008062312612E156
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 20.1, 100, Gamma(x), 0.1) - 2.532008062312612E156 ) / 2.532008062312612E156";
	TestCommonTools::consolePrintTestExprStart(942, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0943",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, -0.9, -0.1, 0.001}], 16] = -4033.861662372823
	*/
	mXparser::disableUlpRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	string expStr = "( sum(x, -0.9, -0.1, Gamma(x), 0.001) - (-4033.861662372823) ) / (-4033.861662372823)";
	TestCommonTools::consolePrintTestExprStart(943, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-15)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0944", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, -1.9, -1.1, 0.001}], 16] = 2779.242455572773
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -1.9, -1.1, Gamma(x), 0.001) - 2779.242455572773 ) / 2779.242455572773";
	TestCommonTools::consolePrintTestExprStart(944, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0945",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, -2.9, -2.1, 0.001}], 16] = -1146.484828532192
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -2.9, -2.1, Gamma(x), 0.001) - (-1146.484828532192) ) / (-1146.484828532192)";
	TestCommonTools::consolePrintTestExprStart(945, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0946", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, -3.9, -3.1, 0.001}], 16] = 336.6702016774144
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -3.9, -3.1, Gamma(x), 0.001) - 336.6702016774144 ) / 336.6702016774144";
	TestCommonTools::consolePrintTestExprStart(946, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0947",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, 0.1, 1, 0.001}], 16] = -76.66832811614711
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -4.9, -4.1, Gamma(x), 0.001) - (-76.66832811614711) ) / (-76.66832811614711)";
	TestCommonTools::consolePrintTestExprStart(947, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0948", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, -5.9, -5.1, 0.001}], 16] = 14.25043511683485
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -5.9, -5.1, Gamma(x), 0.001) - 14.25043511683485 ) / 14.25043511683485";
	TestCommonTools::consolePrintTestExprStart(948, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0949",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, -6.9, -6.1, 0.001}], 16] = -2.236810549400713
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -6.9, -6.1, Gamma(x), 0.001) - (-2.236810549400713) ) / (-2.236810549400713)";
	TestCommonTools::consolePrintTestExprStart(949, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0950", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, -7.9, -7.1, 0.001}], 16] = 0.3037861166613209
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -7.9, -7.1, Gamma(x), 0.001) - 0.3037861166613209 ) / 0.3037861166613209";
	TestCommonTools::consolePrintTestExprStart(950, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0951",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, -8.9, -8.1, 0.001}], 16] = -0.03635359758623678
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -8.9, -8.1, Gamma(x), 0.001) - (-0.03635359758623678) ) / (-0.03635359758623678)";
	TestCommonTools::consolePrintTestExprStart(951, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0952",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, -9.9, -9.1, 0.001}], 16] = 0.003887845100640342
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -9.9, -9.1, Gamma(x), 0.001) - 0.003887845100640342 ) / 0.003887845100640342";
	TestCommonTools::consolePrintTestExprStart(952, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0953",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[Gamma[x], {x, -30.95, -10.05, 0.1}], 16] = -8.376548071082549E-6
	*/
	mXparser::disableUlpRounding();
	mXparser::disableAlmostIntRounding();
	string expStr = "( sum(x, -30.95, -10.05, Gamma(x), 0.1) - (-8.376548071082549E-6) ) / (-8.376548071082549E-6)";
	TestCommonTools::consolePrintTestExprStart(953, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0954", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, -90.95, 100.05, abs(ln(abs(Gamma(x))) - logGamma(x)), 0.1)";
	TestCommonTools::consolePrintTestExprStart(954, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0955",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 6870.775811214982
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaU(s, x), 0.001), 0.1) - 6870.775811214982 ) / 6870.775811214982";
	TestCommonTools::consolePrintTestExprStart(955, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0956",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 9785.880306439629
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaU(s, x), 0.001), 0.1) - 9785.880306439629 ) / 9785.880306439629";
	TestCommonTools::consolePrintTestExprStart(956, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0957",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 21205.70354995280
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaU(s, x), 0.001), 0.1) - 21205.70354995280 ) / 21205.70354995280";
	TestCommonTools::consolePrintTestExprStart(957, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0958",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 62496.08447233523
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaU(s, x), 0.001), 0.1) - 62496.08447233523 ) / 62496.08447233523";
	TestCommonTools::consolePrintTestExprStart(958, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0959",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 237127.0905587526
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaU(s, x), 0.001), 0.1) - 237127.0905587526 ) / 237127.0905587526";
	TestCommonTools::consolePrintTestExprStart(959, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0960",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 12659.04924160019
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaU(s, x), 0.1), 0.1) - 12659.04924160019 ) / 12659.04924160019";
	TestCommonTools::consolePrintTestExprStart(960, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0961",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 72192.46327984912
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaU(s, x), 0.1), 0.1) - 72192.46327984912 ) / 72192.46327984912";
	TestCommonTools::consolePrintTestExprStart(961, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-8)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0962",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 483608.0262675140
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaU(s, x), 0.1), 0.1) - 483608.0262675140 ) / 483608.0262675140";
	TestCommonTools::consolePrintTestExprStart(962, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-5)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0963",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 8224.880733100714
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaU(s, x), 0.001), 0.1) - 8224.880733100714 ) / 8224.880733100714";
	TestCommonTools::consolePrintTestExprStart(963, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0964",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 23629.12458493255
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaU(s, x), 0.001), 0.1) - 23629.12458493255 ) / 23629.12458493255";
	TestCommonTools::consolePrintTestExprStart(964, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0965",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 117364.35585450924
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaU(s, x), 0.001), 0.1) - 117364.35585450924 ) / 117364.35585450924";
	TestCommonTools::consolePrintTestExprStart(965, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0966",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 771195.4772567508
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaU(s, x), 0.001), 0.1) - 771195.4772567508 ) / 771195.4772567508";
	TestCommonTools::consolePrintTestExprStart(966, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0967",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 5800247.185711337
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaU(s, x), 0.001), 0.1) - 5800247.185711337 ) / 5800247.185711337";
	TestCommonTools::consolePrintTestExprStart(967, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0968",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4.685905102859140E7
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaU(s, x), 0.001), 0.1) - 4.685905102859140E7 ) / 4.685905102859140E7";
	TestCommonTools::consolePrintTestExprStart(968, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0969",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3.949477860591464E8
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaU(s, x), 0.001), 0.1) - 3.949477860591464E8 ) / 3.949477860591464E8";
	TestCommonTools::consolePrintTestExprStart(969, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0970",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3.421898375421077E9
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaU(s, x), 0.001), 0.1) - 3.421898375421077E9 ) / 3.421898375421077E9";
	TestCommonTools::consolePrintTestExprStart(970, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0971",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 35413.46835095401
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaL(s, x), 0.001), 0.1) - 35413.46835095401 ) / 35413.46835095401";
	TestCommonTools::consolePrintTestExprStart(971, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-15)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0972",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 6740.098934105806
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaL(s, x), 0.001), 0.1) - 6740.098934105806 ) / 6740.098934105806";
	TestCommonTools::consolePrintTestExprStart(972, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0973",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4485.323384538212
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaL(s, x), 0.001), 0.1) - 4485.323384538212 ) / 4485.323384538212";
	TestCommonTools::consolePrintTestExprStart(973, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0974",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4279.445033746266
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaL(s, x), 0.001), 0.1) - 4279.445033746266 ) / 4279.445033746266";
	TestCommonTools::consolePrintTestExprStart(974, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr0975",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4932.908754940856
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaL(s, x), 0.001), 0.1) - 4932.908754940856 ) / 4932.908754940856";
	TestCommonTools::consolePrintTestExprStart(975, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0976",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 71.00936681198708
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaL(s, x), 0.1), 0.1) - 71.00936681198708 ) / 71.00936681198708";
	TestCommonTools::consolePrintTestExprStart(976, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0977",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 99.53718099344381
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaL(s, x), 0.1), 0.1) - 99.53718099344381 ) / 99.53718099344381";
	TestCommonTools::consolePrintTestExprStart(977, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0978",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 147.6273237932475
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaL(s, x), 0.1), 0.1) - 147.6273237932475 ) / 147.6273237932475";
	TestCommonTools::consolePrintTestExprStart(978, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
#ifdef _MSC_VER
	double eps = 1e-13;
#else
	double eps = 1e-14;
#endif
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= eps)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0979",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -88902.11398055719
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaL(s, x), 0.001), 0.1) - (-88902.11398055719) ) / (-88902.11398055719)";
	TestCommonTools::consolePrintTestExprStart(979, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-15)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0980",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 31955.72452652288
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaL(s, x), 0.001), 0.1) - 31955.72452652288 ) / 31955.72452652288";
	TestCommonTools::consolePrintTestExprStart(980, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0981",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -140294.05242515303
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaL(s, x), 0.001), 0.1) - (-140294.05242515303) ) / (-140294.05242515303)";
	TestCommonTools::consolePrintTestExprStart(981, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0982",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -764462.0732232045
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaL(s, x), 0.001), 0.1) - (-764462.0732232045) ) / (-764462.0732232045)";
	TestCommonTools::consolePrintTestExprStart(982, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0983",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -5.801780552273669E6
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaL(s, x), 0.001), 0.1) - (-5.801780552273669E6) ) / (-5.801780552273669E6)";
	TestCommonTools::consolePrintTestExprStart(983, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0984",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -4.685876601988902E7
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaL(s, x), 0.001), 0.1) - (-4.685876601988902E7) ) / (-4.685876601988902E7)";
	TestCommonTools::consolePrintTestExprStart(984, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0985",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -3.949478307953569E8
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaL(s, x), 0.001), 0.1) - (-3.949478307953569E8) ) / (-3.949478307953569E8)";
	TestCommonTools::consolePrintTestExprStart(985, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0986",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -3.421898369345358E9
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaL(s, x), 0.001), 0.1) - (-3.421898369345358E9) ) / (-3.421898369345358E9)";
	TestCommonTools::consolePrintTestExprStart(986, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0987", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, -2.95, 2.95, GammaU(0,x) - ( -Ei(-x) ), 0.1)";
	TestCommonTools::consolePrintTestExprStart(987, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-16)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0988", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(s, -2.95, 2.95, GammaL(s,0), 0.1)";
	TestCommonTools::consolePrintTestExprStart(988, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-16)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0989", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(s, -2.95, 2.95, GammaU(s,0) - Gamma(s), 0.1)";
	TestCommonTools::consolePrintTestExprStart(989, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-16)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0990",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	string expStr =
			"sum(s, 1, 5, sum(x, 0.5, 3.5, GammaU(s, x) - ((s-1)!) * e^(-x) * sum(k, 0, s-1, x^k / k! ) , 0.01) )";
	TestCommonTools::consolePrintTestExprStart(990, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0991", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, -5, 5, GammaU(1,x) - e^(-x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(991, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0992", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, -5, 5, GammaL(1,x) - ( 1 - e^(-x) ), 0.01)";
	TestCommonTools::consolePrintTestExprStart(992, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0993", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, 0.1, 8, GammaU(0.5, x) - sqrt(pi) * erfc( sqrt(x) ), 0.01)";
	TestCommonTools::consolePrintTestExprStart(993, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0994", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, 0.1, 8, GammaL(0.5, x) - sqrt(pi) * erf( sqrt(x) ), 0.01)";
	TestCommonTools::consolePrintTestExprStart(994, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0995",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4128.619249122392
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaRegU(s, x), 0.001), 0.1) - 4128.619249122392 ) / 4128.619249122392";
	TestCommonTools::consolePrintTestExprStart(995, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0996",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 10648.33231753313
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaRegU(s, x), 0.001), 0.1) - 10648.33231753313 ) / 10648.33231753313";
	TestCommonTools::consolePrintTestExprStart(996, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0997",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 14732.67120032403
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaRegU(s, x), 0.001), 0.1) - 14732.67120032403 ) / 14732.67120032403";
	TestCommonTools::consolePrintTestExprStart(997, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0998",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 16769.95611832584
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaRegU(s, x), 0.001), 0.1) - 16769.95611832584 ) / 16769.95611832584";
	TestCommonTools::consolePrintTestExprStart(998, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr0999",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 17609.29585783721
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaRegU(s, x), 0.001), 0.1) - 17609.29585783721 ) / 17609.29585783721";
	TestCommonTools::consolePrintTestExprStart(999, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1000",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 198.6732618854221
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaRegU(s, x), 0.1), 0.1) - 198.6732618854221 ) / 198.6732618854221";
	TestCommonTools::consolePrintTestExprStart(1000, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1001",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 199.6608252491266
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaRegU(s, x), 0.1), 0.1) - 199.6608252491266 ) / 199.6608252491266";
	TestCommonTools::consolePrintTestExprStart(1001, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-8)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1002",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 199.9222940005033
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaRegU(s, x), 0.1), 0.1) - 199.9222940005033 ) / 199.9222940005033";
	TestCommonTools::consolePrintTestExprStart(1002, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-6)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1003",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -1776.380588210588
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaRegU(s, x), 0.001), 0.1) - (-1776.380588210588) ) / (-1776.380588210588)";
	TestCommonTools::consolePrintTestExprStart(1003, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1004",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 7890.923829786565
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaRegU(s, x), 0.001), 0.1) - 7890.923829786565 ) / 7890.923829786565";
	TestCommonTools::consolePrintTestExprStart(1004, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1005",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -102249.9066253191
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaRegU(s, x), 0.001), 0.1) - (-102249.9066253191) ) / (-102249.9066253191)";
	TestCommonTools::consolePrintTestExprStart(1005, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1006",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 2.440576583013389E6
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaRegU(s, x), 0.001), 0.1) - 2.440576583013389E6 ) / 2.440576583013389E6";
	TestCommonTools::consolePrintTestExprStart(1006, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1007",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -8.522034351730967E7
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaRegU(s, x), 0.001), 0.1) - (-8.522034351730967E7) ) / (-8.522034351730967E7)";
	TestCommonTools::consolePrintTestExprStart(1007, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1008",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3.889240488572830E9
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaRegU(s, x), 0.001), 0.1) - 3.889240488572830E9 ) / 3.889240488572830E9";
	TestCommonTools::consolePrintTestExprStart(1008, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1009",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -2.181166295073751E11
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaRegU(s, x), 0.001), 0.1) - (-2.181166295073751E11) ) / (-2.181166295073751E11)";
	TestCommonTools::consolePrintTestExprStart(1009, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1010",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 1.447213822212101E13
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaRegU(s, x), 0.001), 0.1) - 1.447213822212101E13 ) / 1.447213822212101E13";
	TestCommonTools::consolePrintTestExprStart(1010, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1011",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 13891.38075087760
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaRegL(s, x), 0.001), 0.1) - 13891.38075087760 ) / 13891.38075087760";
	TestCommonTools::consolePrintTestExprStart(1011, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-15)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1012",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 7371.667682466868
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaRegL(s, x), 0.001), 0.1) - 7371.667682466868 ) / 7371.667682466868";
	TestCommonTools::consolePrintTestExprStart(1012, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1013",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3287.328799675970
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaRegL(s, x), 0.001), 0.1) - 3287.328799675970 ) / 3287.328799675970";
	TestCommonTools::consolePrintTestExprStart(1013, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1014",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 1250.043881674157
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaRegL(s, x), 0.001), 0.1) - 1250.043881674157 ) / 1250.043881674157";
	TestCommonTools::consolePrintTestExprStart(1014, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1015",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 410.7041421627869
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaRegL(s, x), 0.001), 0.1) - 410.7041421627869 ) / 410.7041421627869";
	TestCommonTools::consolePrintTestExprStart(1015, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1016",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 1.326738114577891
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaRegL(s, x), 0.1), 0.1) - 1.326738114577891 ) / 1.326738114577891";
	TestCommonTools::consolePrintTestExprStart(1016, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1017",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 0.3391747508734272
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaRegL(s, x), 0.1), 0.1) - 0.3391747508734272 ) / 0.3391747508734272";
	TestCommonTools::consolePrintTestExprStart(1017, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1018",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 0.07770599949669701
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaRegL(s, x), 0.1), 0.1) - 0.07770599949669701 ) / 0.07770599949669701";
	TestCommonTools::consolePrintTestExprStart(1018, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1019",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 17796.38058821059
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaRegL(s, x), 0.001), 0.1) - 17796.38058821059 ) / 17796.38058821059";
	TestCommonTools::consolePrintTestExprStart(1019, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-15)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1020",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 8129.076170213447
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaRegL(s, x), 0.001), 0.1) - 8129.076170213447 ) / 8129.076170213447";
	TestCommonTools::consolePrintTestExprStart(1020, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1021",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 118269.9066253191
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaRegL(s, x), 0.001), 0.1) - 118269.9066253191 ) / 118269.9066253191";
	TestCommonTools::consolePrintTestExprStart(1021, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1022",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -2.424556583013388E6
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaRegL(s, x), 0.001), 0.1) - (-2.424556583013388E6) ) / (-2.424556583013388E6)";
	TestCommonTools::consolePrintTestExprStart(1022, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1023",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 8.523636351730967E7
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaRegL(s, x), 0.001), 0.1) - 8.523636351730967E7 ) / 8.523636351730967E7";
	TestCommonTools::consolePrintTestExprStart(1023, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1024",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -3.889224468572830E9
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaRegL(s, x), 0.001), 0.1) - (-3.889224468572830E9) ) / (-3.889224468572830E9)";
	TestCommonTools::consolePrintTestExprStart(1024, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1025",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 2.181166455273751E11
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaRegL(s, x), 0.001), 0.1) - 2.181166455273751E11 ) / 2.181166455273751E11";
	TestCommonTools::consolePrintTestExprStart(1025, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1026",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language (Raspberry Pi Pilot Release)
	* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -1.447213820610101E13
	*/
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaRegL(s, x), 0.001), 0.1) - (-1.447213820610101E13) ) / (-1.447213820610101E13)";
	TestCommonTools::consolePrintTestExprStart(1026, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1027", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, -2.95, 2.95, GammaRegU(0,x) - ( -Ei(-x) )/[gam], 0.1)";
	TestCommonTools::consolePrintTestExprStart(1027, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-15)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1028", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(s, -2.95, 2.95, GammaRegL(s,0), 0.1)";
	TestCommonTools::consolePrintTestExprStart(1028, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-15)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1029", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(s, -2.95, 2.95, GammaRegU(s,0) - 1, 0.1)";
	TestCommonTools::consolePrintTestExprStart(1029, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-15)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1030",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	string expStr =
			"sum(s, 1, 5, sum(x, 0.5, 3.5, GammaRegU(s, x) - ((s-1)!) * e^(-x) * sum(k, 0, s-1, x^k / k! ) / Gamma(s) , 0.01) )";
	TestCommonTools::consolePrintTestExprStart(1030, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1031", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, -5, 5, GammaRegU(1,x) - e^(-x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1031, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1032", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, -5, 5, GammaRegL(1,x) - ( 1 - e^(-x) ), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1032, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1033", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, 0.1, 8, GammaRegU(0.5, x) - erfc( sqrt(x) ), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1033, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1034", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, 0.1, 8, GammaRegL(0.5, x) - erf( sqrt(x) ), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1034, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1035",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 0.01, 0.5, 0.001}], 16] = -4079.209360654330
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 0.01, 0.5, diGamma(x), 0.001) - (-4079.209360654330) ) / (-4079.209360654330)";
	TestCommonTools::consolePrintTestExprStart(1035, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-15)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1036", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 0.5, 1, 0.001}], 16] = -573.6355799257133
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 0.5, 1, diGamma(x), 0.001) - (-573.6355799257133) ) / (-573.6355799257133)";
	TestCommonTools::consolePrintTestExprStart(1036, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1037",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 1, 2, 0.001}], 16] = -0.07729899822650133
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 1, 2, diGamma(x), 0.001) - (-0.07729899822650133) ) / (-0.07729899822650133)";
	TestCommonTools::consolePrintTestExprStart(1037, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-9)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1038", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 2, 3, 0.001}], 16] = 693.8199440617115
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 2, 3, diGamma(x), 0.001) - 693.8199440617115 ) / 693.8199440617115";
	TestCommonTools::consolePrintTestExprStart(1038, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1039", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 3, 4, 0.001}], 16] = 1099.701730410615
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 3, 4, diGamma(x), 0.001) - 1099.701730410615 ) / 1099.701730410615";
	TestCommonTools::consolePrintTestExprStart(1039, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1040", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 4, 5, 0.001}], 16] = 1387.675473579989
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 4, 5, diGamma(x), 0.001) - 1387.675473579989 ) / 1387.675473579989";
	TestCommonTools::consolePrintTestExprStart(1040, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1041", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 5, 6, 0.001}], 16] = 1611.044026769199
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 5, 6, diGamma(x), 0.001) - 1611.044026769199 ) / 1611.044026769199";
	TestCommonTools::consolePrintTestExprStart(1041, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1042", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 6, 7, 0.001}], 16] = 1793.548917915007
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 6, 7, diGamma(x), 0.001) - 1793.548917915007 ) / 1793.548917915007";
	TestCommonTools::consolePrintTestExprStart(1042, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1043", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 7, 8, 0.001}], 16] = 1947.854360261161
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 7, 8, diGamma(x), 0.001) - 1947.854360261161 ) / 1947.854360261161";
	TestCommonTools::consolePrintTestExprStart(1043, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1044", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 8, 9, 0.001}], 16] = 2081.519681855709
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 8, 9, diGamma(x), 0.001) - 2081.519681855709 ) / 2081.519681855709";
	TestCommonTools::consolePrintTestExprStart(1044, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1045", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 9, 10, 0.001}], 16] = 2199.420773340920
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 9, 10, diGamma(x), 0.001) - 2199.420773340920 ) / 2199.420773340920";
	TestCommonTools::consolePrintTestExprStart(1045, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1046", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 10, 100, 0.01}], 16] = 34636.66366690680
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 10, 100, diGamma(x), 0.01) - 34636.66366690680 ) / 34636.66366690680";
	TestCommonTools::consolePrintTestExprStart(1046, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1047", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, 100, 1000, 0.1}], 16] = 55466.61581150640
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, 100, 1000, diGamma(x), 0.1) - 55466.61581150640 ) / 55466.61581150640";
	TestCommonTools::consolePrintTestExprStart(1047, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1048", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, -0.99, -0.01, 0.001}], 16] = 1.422412463589325
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -0.99, -0.01, diGamma(x), 0.001) - 1.422412463589325 ) / 1.422412463589325";
	TestCommonTools::consolePrintTestExprStart(1048, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1049", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, -1.99, -1.01, 0.001}], 16] = 680.3530867812680
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -1.99, -1.01, diGamma(x), 0.001) - 680.3530867812680 ) / 680.3530867812680";
	TestCommonTools::consolePrintTestExprStart(1049, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1050", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, -2.99, -2.01, 0.001}], 16] = 1077.907743717255
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -2.99, -2.01, diGamma(x), 0.001) - 1077.907743717255 ) / 1077.907743717255";
	TestCommonTools::consolePrintTestExprStart(1050, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1051", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, -3.99, -3.01, 0.001}], 16] = 1360.050326061623
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -3.99, -3.01, diGamma(x), 0.001) - 1360.050326061623 ) / 1360.050326061623";
	TestCommonTools::consolePrintTestExprStart(1051, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1052", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, -4.99, -4.01, 0.001}], 16] = 1578.919885022366
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -4.99, -4.01, diGamma(x), 0.001) - 1578.919885022366 ) / 1578.919885022366";
	TestCommonTools::consolePrintTestExprStart(1052, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1053", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, -5.99, -5.01, 0.001}], 16] = 1757.758655903731
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -5.99, -5.01, diGamma(x), 0.001) - 1757.758655903731 ) / 1757.758655903731";
	TestCommonTools::consolePrintTestExprStart(1053, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1054", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, -6.99, -6.01, 0.001}], 16] = 1908.969189637675
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -6.99, -6.01, diGamma(x), 0.001) - 1908.969189637675 ) / 1908.969189637675";
	TestCommonTools::consolePrintTestExprStart(1054, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1055", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, -7.99, -7.01, 0.001}], 16] = 2039.956153658795
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -7.99, -7.01, diGamma(x), 0.001) - 2039.956153658795 ) / 2039.956153658795";
	TestCommonTools::consolePrintTestExprStart(1055, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1056", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, -8.99, -8.01, 0.001}], 16] = 2155.496280654945
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -8.99, -8.01, diGamma(x), 0.001) - 2155.496280654945 ) / 2155.496280654945";
	TestCommonTools::consolePrintTestExprStart(1056, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1057", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, -9.99, -9.01, 0.001}], 16] = 2258.851345832401
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -9.99, -9.01, diGamma(x), 0.001) - 2258.851345832401 ) / 2258.851345832401";
	TestCommonTools::consolePrintTestExprStart(1057, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1058",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[PolyGamma[x], {x, -10.99, -10.01, 0.001}], 16] = 2352.347967017835
	*/
	mXparser::disableUlpRounding();
	string expStr = "( sum(x, -10.99, -10.01, diGamma(x), 0.001) - 2352.347967017835 ) / 2352.347967017835";
	TestCommonTools::consolePrintTestExprStart(1058, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-10)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1059", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x0, 0.1, 2, diGamma(x0) - der( Gamma(x), x, x0) / Gamma(x0), 0.1)";
	TestCommonTools::consolePrintTestExprStart(1059, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-7)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1060", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr = "sum(x, 0.01, 0.99, diGamma(1-x)-diGamma(x) - pi * cot(pi*x), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1060, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::setCanonicalRounding(tmp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1061", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr = "sum(x, 0.01, 0.99, diGamma(x+1)-diGamma(x) - 1/x, 0.01)";
	TestCommonTools::consolePrintTestExprStart(1061, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1062",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr = "sum(x, 0.01, 0.99, diGamma(x+1) - ( -[gam] + sum(k, 1, 10000, 1/k - 1/(x+k) ) ), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1062, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-2)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1063",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableUlpRounding();
	string expStr = "sum(x, 0.01, 0.99, sum(N, 1, 10, diGamma(x+N) - diGamma(x) - sum(k, 0, N-1, 1/(x+k)) ), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1063, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1064",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	string expStr =
			"sum(m, 3, 20, sum(r, 1, m-1, diGamma(r/m) - ( -[gam] - ln(2*m) - (pi/2)*cot( r * pi/m ) + 2 * sum(n, 1, floor( (m-1)/2 ), cos(2*pi*n*r / m) * ln( sin(pi*n / m) ) ) ) ) )";
	TestCommonTools::consolePrintTestExprStart(1064, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1065", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(n, 1, 10, 1) - 10";
	TestCommonTools::consolePrintTestExprStart(1065, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1066", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(n, 10, 1, 1) - 10";
	TestCommonTools::consolePrintTestExprStart(1066, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1067", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(n, 10, 10, 1) - 1";
	TestCommonTools::consolePrintTestExprStart(1067, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1068", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "prod(n, 1, 10, 2) - 2^10";
	TestCommonTools::consolePrintTestExprStart(1068, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1069", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "prod(n, 10, 1, 2) - 2^10";
	TestCommonTools::consolePrintTestExprStart(1069, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1070", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "prod(n, 10, 10, 2) - 2";
	TestCommonTools::consolePrintTestExprStart(1070, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1071", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "avg(n, 1, 10, n) - 5.5";
	TestCommonTools::consolePrintTestExprStart(1071, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1072", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "avg(n, 10, 1, n) - 5.5";
	TestCommonTools::consolePrintTestExprStart(1072, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1073", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "avg(n, 10, 10, 1) - 1";
	TestCommonTools::consolePrintTestExprStart(1073, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1074", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f(x) = par(0) + par(1) + par(-1) + [npar]");
	string expStr = "f(1) - (1 + 1 + 1 + 1) + f(2) - (1 + 2 + 2 + 1)";
	TestCommonTools::consolePrintTestExprStart(1074, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1075", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f(x, y) = par(0) + par(1) + par(2) + par(-1) + par(-2) + [npar]");
	string expStr = "f(1, 2) - (2 + 1 + 2 + 2 + 1 + 2) + f(-2,-1) - (2 + (-2) + (-1) + (-1) + (-2) + 2)";
	TestCommonTools::consolePrintTestExprStart(1075, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1076", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f(x1, x2, x3, x4, x5) = prod(i, 1, [npar], par(i) )");
	string expStr = "f(1,2,3,4,5) - 5!";
	TestCommonTools::consolePrintTestExprStart(1076, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1077", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f(x1, x2, x3, x4, x5) = prod(i, 1, [npar], par(-i) )");
	string expStr = "f(1,2,3,4,5) - 5!";
	TestCommonTools::consolePrintTestExprStart(1077, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1078", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f(x1, x2, x3, x4, x5) = prod(i, -1, -[npar], par(i) )");
	string expStr = "f(1,2,3,4,5) - 5!";
	TestCommonTools::consolePrintTestExprStart(1078, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1079",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f(...) = maxi(i, 1, [npar], par(i) )");
	string expStr =
			"( f(1) - 1 ) + ( f(-1) + 1 ) + ( f(1,2,3,4,5) - 5 ) + ( f(1,2,6,10,4,5) - 10 ) + ( f(20, 1,2,3,4,5) - 20 )";
	TestCommonTools::consolePrintTestExprStart(1079, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1080",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("f(...) = sum(i, 1, par(0), sum(k, 1, [npar], par(i) + par(k)) )");
	string expStr =
			"(f(1)-2)+(f(1,2)-12)+(f(1,2,3)-36)+(f(1,2,3,4)-80)+(f(1,2,3,4,5)-150)+(f(1,2,3,4,5,6)-252)+(f(1,2,3,4,5,6,7)-392)+(f(1,2,3,4,5,6,7,8)-576)";
	TestCommonTools::consolePrintTestExprStart(1080, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1081",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function(
		"f(...) = iff( [npar]>5, f(par(1),par(2),par(3),par(4),par(5)); [npar]=5, par(5)*f(par(1),par(2),par(3),par(4)); [npar]=4, par(4)*f(par(1),par(2),par(3)); [npar]=3, par(3)*f(par(1),par(2)); [npar]=2, par(2)*f(par(1)); [npar]=1, par(1) )");
	string expStr =
			"f(1,2,3,4,5) - 1*2*3*4*5 + f(1,2,3,4,5,6) - 1*2*3*4*5 + f(1,2,3) - 1*2*3 + f(5,4,3,2,1) - 5*4*3*2*1";
	TestCommonTools::consolePrintTestExprStart(1081, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1082", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("sumv(...) = sum( i, 1, [npar], par(i) )");
	string expStr = "( sumv(1) - add(1) ) + ( sumv(1,2) - add(1,2) ) + ( sumv(1,2,3) - add(1,2,3) )";
	TestCommonTools::consolePrintTestExprStart(1082, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1083",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("multiv(...) = prod( i, 1, [npar], par(i) )");
	string expStr = "( multiv(1) - multi(1) ) + ( multiv(1,2) - multi(1,2) ) + ( multiv(1,2,3) - multi(1,2,3) )";
	TestCommonTools::consolePrintTestExprStart(1083, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1084",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("meanv(...) = avg( i, 1, [npar], par(i) )");
	string expStr = "( meanv(1) - mean(1) ) + ( meanv(1,2) - mean(1,2) ) + ( meanv(1,2,3) - mean(1,2,3) )";
	TestCommonTools::consolePrintTestExprStart(1084, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1085", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("varv(...) = vari( i, 1, [npar], par(i) )");
	string expStr = "( varv(1) - var(1) ) + ( varv(1,2) - var(1,2) ) + ( varv(1,2,3) - var(1,2,3) )";
	TestCommonTools::consolePrintTestExprStart(1085, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1086", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("stdv(...) = stdi( i, 1, [npar], par(i) )");
	string expStr = "( stdv(1) - std(1) ) + ( stdv(1,2) - std(1,2) ) + ( stdv(1,2,3) - std(1,2,3) )";
	TestCommonTools::consolePrintTestExprStart(1086, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1087", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("minv(...) = mini( i, 1, [npar], par(i) )");
	string expStr = "( minv(1) - min(1) ) + ( minv(1,2) - min(1,2) ) + ( minv(1,2,3) - min(1,2,3) )";
	TestCommonTools::consolePrintTestExprStart(1087, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1088", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	FunctionPtr f = new_Function("maxv(...) = maxi( i, 1, [npar], par(i) )");
	string expStr = "( maxv(1) - max(1) ) + ( maxv(1,2) - max(1,2) ) + ( maxv(1,2,3) - max(1,2,3) )";
	TestCommonTools::consolePrintTestExprStart(1088, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1089",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	const FunctionExtensionVariadicPtr fx = new_FunExtVar();
	FunctionPtr f = new_Function("fx", fx);
	string expStr =
			"( fx(1) - add(1) ) + ( fx(1,2) - add(1,2) ) + ( fx(1,2,3) - add(1,2,3) ) + ( fx(1,2,3,4) - add(1,2,3,4) ) +  ( fx(1,2,3,4,5) - add(1,2,3,4,5) )";
	TestCommonTools::consolePrintTestExprStart(1089, expStr);
	ExpressionPtr testExp = new_Expression(expStr, f);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1090", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableCanonicalRounding();
	string expStr = "1 + 1e-14";
	TestCommonTools::consolePrintTestExprStart(1090, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1 + 1e-14;
	if (MathFunctions::abs(reg - value) <= 1e-50)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1091", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableCanonicalRounding();
	string expStr = "-1 - 1e-14";
	TestCommonTools::consolePrintTestExprStart(1091, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -1 - 1e-14;
	if (MathFunctions::abs(reg - value) <= 1e-50)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1092", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	mXparser::enableAlmostIntRounding();
	string expStr = "1 + 1e-14";
	TestCommonTools::consolePrintTestExprStart(1092, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-50)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1093", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableUlpRounding();
	mXparser::enableAlmostIntRounding();
	string expStr = "-1 - 1e-14";
	TestCommonTools::consolePrintTestExprStart(1093, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -1;
	if (MathFunctions::abs(reg - value) <= 1e-50)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1094",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(n, -10, 10, sum(k, 0, abs(n), C(n,k) ) ) - sum(n, -10, 10, sum(k, 0, abs(n), nCk(n,k) ) )";
	TestCommonTools::consolePrintTestExprStart(1094, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-50)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1095",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr =
			"sum(n, -10, 10, sum(k, 0, abs(n), nPk(n,k) ) ) - sum(n, -10, 10, sum(k, 0, abs(n), nCk(n,k) * k! ) )";
	TestCommonTools::consolePrintTestExprStart(1095, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-50)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1096",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[Beta[x, y], {x, 0.1, 1, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 156045.8382688423
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(y, 0.1, 10, sum(x, 0.1, 1, Beta(x,y), 0.01) , 0.01) - 156045.8382688423 ) / 156045.8382688423";
	TestCommonTools::consolePrintTestExprStart(1096, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1097",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[Beta[x, y], {x, 1, 2, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 32015.62331640863
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "( sum(y, 0.1, 10, sum(x, 1, 2, Beta(x,y), 0.01) , 0.01) - 32015.62331640863 ) / 32015.62331640863";
	TestCommonTools::consolePrintTestExprStart(1097, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1098",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[Beta[x, y], {x, 2, 3, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 20432.57249276379
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "( sum(y, 0.1, 10, sum(x, 2, 3, Beta(x,y), 0.01) , 0.01) - 20432.57249276379 ) / 20432.57249276379";
	TestCommonTools::consolePrintTestExprStart(1098, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1099",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[Beta[x, y], {x, 3, 4, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 16648.09228879020
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "( sum(y, 0.1, 10, sum(x, 3, 4, Beta(x,y), 0.01) , 0.01) - 16648.09228879020 ) / 16648.09228879020";
	TestCommonTools::consolePrintTestExprStart(1099, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1100",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[Beta[x, y], {x, 4, 5, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 14709.95317941022
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "( sum(y, 0.1, 10, sum(x, 4, 5, Beta(x,y), 0.01) , 0.01) - 14709.95317941022 ) / 14709.95317941022";
	TestCommonTools::consolePrintTestExprStart(1100, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1101",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[Beta[x, y], {x, 5, 6, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 13491.02099096915
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "( sum(y, 0.1, 10, sum(x, 5, 6, Beta(x,y), 0.01) , 0.01) - 13491.02099096915 ) / 13491.02099096915";
	TestCommonTools::consolePrintTestExprStart(1101, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1102",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[Beta[x, y], {x, 6, 7, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 12632.76303747905
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "( sum(y, 0.1, 10, sum(x, 6, 7, Beta(x,y), 0.01) , 0.01) - 12632.76303747905 ) / 12632.76303747905";
	TestCommonTools::consolePrintTestExprStart(1102, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1103",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[Beta[x, y], {x, 7, 8, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 11984.64820297520
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "( sum(y, 0.1, 10, sum(x, 7, 8, Beta(x,y), 0.01) , 0.01) - 11984.64820297520 ) / 11984.64820297520";
	TestCommonTools::consolePrintTestExprStart(1103, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1104",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[Beta[x, y], {x, 8, 9, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 11471.56326266911
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "( sum(y, 0.1, 10, sum(x, 8, 9, Beta(x,y), 0.01) , 0.01) - 11471.56326266911 ) / 11471.56326266911";
	TestCommonTools::consolePrintTestExprStart(1104, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1105",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[Beta[x, y], {x, 9, 10, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 11051.38593753202
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(y, 0.1, 10, sum(x, 9, 10, Beta(x,y), 0.01) , 0.01) - 11051.38593753202 ) / 11051.38593753202";
	TestCommonTools::consolePrintTestExprStart(1105, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1106",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[Beta[x, y], {x, 10, 100, 0.1}], {y, 10, 100, 0.1} ], 16] = 0.0002504318934669270
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(y, 10, 100, sum(x, 10, 100, Beta(x,y), 0.1) , 0.1) - 0.0002504318934669270 ) / 0.0002504318934669270";
	TestCommonTools::consolePrintTestExprStart(1106, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1107", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "( isNaN( Beta(-1, 10 ) ) - [true] ) + ( isNaN( Beta(10, -1 ) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(1107, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1108", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "( isNaN( Beta(0, 10 ) ) - [true] ) + ( isNaN( Beta(10, 0 ) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(1108, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1109", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "( isNaN( Beta([NaN], 10 ) ) - [true] ) + ( isNaN( Beta(10, [NaN] ) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(1109, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1110",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr =
			"sum(x, 1, 10,  sum(y, 1, 10, der( Beta(x, y), x, x) - Beta(x,y) * ( diGamma(x) - diGamma(x+y) ) , 0.1), 0.1)";
	TestCommonTools::consolePrintTestExprStart(1110, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-4)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1111",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 0.1, 10, 0.1}], {y, 0.1, 10, 0.1} ], 16] = -52463.38489346371
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(y, 0.1, 10, sum(x, 0.1, 10, logBeta(x,y), 0.1) , 0.1) - (-52463.38489346371) ) / (-52463.38489346371)";
	TestCommonTools::consolePrintTestExprStart(1111, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1112",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 10, 30, 0.1}], {y, 10, 30, 0.1} ], 16] = -1.092606400417545E6
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(y, 10, 30, sum(x, 10, 30, logBeta(x,y), 0.1) , 0.1) - (-1.092606400417545E6) ) / (-1.092606400417545E6)";
	TestCommonTools::consolePrintTestExprStart(1112, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1113",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 30, 60, 0.1}], {y, 30, 60, 0.1} ], 16] = -5.631010749308205E6
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(y, 30, 60, sum(x, 30, 60, logBeta(x,y), 0.1) , 0.1) - (-5.631010749308205E6) ) / (-5.631010749308205E6)";
	TestCommonTools::consolePrintTestExprStart(1113, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1114",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 60, 100, 0.1}], {y, 60, 100, 0.1} ], 16] = -1.784485348348011E7
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(y, 60, 100, sum(x, 60, 100, logBeta(x,y), 0.1) , 0.1) - (-1.784485348348011E7) ) / (-1.784485348348011E7)";
	TestCommonTools::consolePrintTestExprStart(1114, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1115",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 0.1, 1, 0.01} ], {b, 0.1, 1, 0.01} ], 16] = 196515.9203818563
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(b, 0.1, 1, sum(a, 0.1, 1, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 196515.9203818563 ) / 196515.9203818563";
	TestCommonTools::consolePrintTestExprStart(1115, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1116",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 1, 2, 0.01} ], {b, 1, 2, 0.01} ], 16] = 24722.41740481695
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(b, 1, 2, sum(a, 1, 2, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 24722.41740481695 ) / 24722.41740481695";
	TestCommonTools::consolePrintTestExprStart(1116, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1117",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 2, 3, 0.01} ], {b, 2, 3, 0.01} ], 16] = 4464.859252111892
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(b, 2, 3, sum(a, 2, 3, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 4464.859252111892 ) / 4464.859252111892";
	TestCommonTools::consolePrintTestExprStart(1117, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1118",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 3, 4, 0.01} ], {b, 3, 4, 0.01} ], 16] = 918.5527313884891
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(b, 3, 4, sum(a, 3, 4, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 918.5527313884891 ) / 918.5527313884891";
	TestCommonTools::consolePrintTestExprStart(1118, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1119",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 4, 5, 0.01} ], {b, 4, 5, 0.01} ], 16] = 199.6846597371872
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(b, 4, 5, sum(a, 4, 5, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 199.6846597371872 ) / 199.6846597371872";
	TestCommonTools::consolePrintTestExprStart(1119, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1120",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 5, 6, 0.01} ], {b, 5, 6, 0.01} ], 16] = 44.76264323950131
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(b, 5, 6, sum(a, 5, 6, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 44.76264323950131 ) / 44.76264323950131";
	TestCommonTools::consolePrintTestExprStart(1120, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1121",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 6, 7, 0.01} ], {b, 6, 7, 0.01} ], 16] = 10.23292155881704
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(b, 6, 7, sum(a, 6, 7, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 10.23292155881704 ) / 10.23292155881704";
	TestCommonTools::consolePrintTestExprStart(1121, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1122",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 7, 8, 0.01} ], {b, 7, 8, 0.01} ], 16] = 2.371353239618641
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(b, 7, 8, sum(a, 7, 8, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 2.371353239618641 ) / 2.371353239618641";
	TestCommonTools::consolePrintTestExprStart(1122, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1123",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 8, 9, 0.01} ], {b, 8, 9, 0.01} ], 16] = 0.5550610613543622
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(b, 8, 9, sum(a, 8, 9, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 0.5550610613543622 ) / 0.5550610613543622";
	TestCommonTools::consolePrintTestExprStart(1123, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1124",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 9, 10, 0.01} ], {b, 9, 10, 0.01} ], 16] = 0.1309235541230968
	*/
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(b, 9, 10, sum(a, 9, 10, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 0.1309235541230968 ) / 0.1309235541230968";
	TestCommonTools::consolePrintTestExprStart(1124, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1125",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
	* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 10, 80, 0.25} ], {b, 10, 80, 0.25} ], 16] = 0.0.0002449250611436628
	*/
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( sum(b, 10, 80, sum(a, 10, 80, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.25) , 0.25) - 0.0002449250611436628 ) / 0.0002449250611436628";
	TestCommonTools::consolePrintTestExprStart(1125, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1126",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr =
			"sum(b, 1, 10, sum(a, 1, 10, sum(x, 0.1, 0.9, der( BetaInc(x, a, b), x, x ) - ( (1-x)^(b-1) ) * ( x^(a-1) ) ,0.1) , 0.1) , 0.1)";
	TestCommonTools::consolePrintTestExprStart(1126, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-4)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1127", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaInc(1, a, b) - Beta(a,b) , 0.1) , 0.1)";
	TestCommonTools::consolePrintTestExprStart(1127, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1128", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaInc(0, a, b) , 0.1) , 0.1)";
	TestCommonTools::consolePrintTestExprStart(1128, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1129",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( isNaN( BetaInc(-1,1,1) ) - [true] ) + ( isNaN( BetaInc(2,1,1) ) - [true] ) + ( isNaN( BetaInc( [NaN] ,1,1) ) - [true] ) + ( isNaN( BetaInc(0.5, [NaN], 1) ) - [true] ) + ( isNaN( BetaInc(0.5, 1 , [NaN]) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(1129, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1130", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "( isNaN( BetaInc(0.5,-1,1) ) - [true] ) + ( isNaN( BetaInc(0.5,1,-1) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(1130, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1131", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaI(1, a, b) - 1 , 0.1) , 0.1)";
	TestCommonTools::consolePrintTestExprStart(1131, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1132", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaI(0, a, b) , 0.1) , 0.1)";
	TestCommonTools::consolePrintTestExprStart(1132, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1133",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr =
			"( isNaN( BetaI(-1,0,1) ) - [true] ) + ( isNaN( BetaI(2,1,0) ) - [true] ) + ( isNaN( BetaI( [NaN] ,1,1) ) - [true] ) + ( isNaN( BetaI(0.5, [NaN], 1) ) - [true] ) + ( isNaN( BetaI(0.5, 1 , [NaN]) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(1133, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1134", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	string expStr = "( isNaN( BetaI(0.5,-1,1) ) - [true] ) + ( isNaN( BetaI(0.5,1,-1) ) - [true] )";
	TestCommonTools::consolePrintTestExprStart(1134, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1135",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	string expStr =
			"sum(b, 0.1, 80, sum(a, 0.1, 80, sum(x, 0, 1, BetaI(x, a, b) * Beta(a,b) - BetaInc(x,a,b) ,0.1) , 0.25) , 0.25)";
	TestCommonTools::consolePrintTestExprStart(1135, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1136",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	bool tmp = mXparser::checkIfCanonicalRounding();
	string expStr =
			"sum(b, 0.1, 80, sum(a, 0.1, 80, sum(x, 0, 1, BetaI(x, a, b) - BetaReg(x,a,b) ,0.1) , 0.25) , 0.25)";
	TestCommonTools::consolePrintTestExprStart(1136, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableUlpRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1137", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "5! = 120";
	TestCommonTools::consolePrintTestExprStart(1137, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1138", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "5! == 120";
	TestCommonTools::consolePrintTestExprStart(1138, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1139", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "5!=5";
	TestCommonTools::consolePrintTestExprStart(1139, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1140", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "5 != 5";
	TestCommonTools::consolePrintTestExprStart(1140, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1141", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = ".2-0.2";
	TestCommonTools::consolePrintTestExprStart(1141, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1142", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "-.2+0.2";
	TestCommonTools::consolePrintTestExprStart(1142, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1143", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "0.2-.2";
	TestCommonTools::consolePrintTestExprStart(1143, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1144", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "-0.2+.2";
	TestCommonTools::consolePrintTestExprStart(1144, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1145", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "4^.5";
	TestCommonTools::consolePrintTestExprStart(1145, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1146", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "4^(-.5)";
	TestCommonTools::consolePrintTestExprStart(1146, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.5;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1147", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "2+0.2+.4";
	TestCommonTools::consolePrintTestExprStart(1147, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2.6;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1148", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "2+.4+0.2";
	TestCommonTools::consolePrintTestExprStart(1148, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2.6;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1149", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = ".4+2+0.2";
	TestCommonTools::consolePrintTestExprStart(1149, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2.6;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1150", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "2+0.2-.2";
	TestCommonTools::consolePrintTestExprStart(1150, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1151", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "2-.2+0.2";
	TestCommonTools::consolePrintTestExprStart(1151, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1152", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "-.2+2+0.2";
	TestCommonTools::consolePrintTestExprStart(1152, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1153", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "12+.2e-1";
	TestCommonTools::consolePrintTestExprStart(1153, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 12.02;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1154", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "12+.2e+1";
	TestCommonTools::consolePrintTestExprStart(1154, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 14;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1155", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "+ 5";
	TestCommonTools::consolePrintTestExprStart(1155, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 5;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1156", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "- 5";
	TestCommonTools::consolePrintTestExprStart(1156, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -5;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1157", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "+sqrt(1)";
	TestCommonTools::consolePrintTestExprStart(1157, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1158", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "-sqrt(1)";
	TestCommonTools::consolePrintTestExprStart(1158, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -1;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1159", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "sin(+(1.2))";
	TestCommonTools::consolePrintTestExprStart(1159, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::sin(1.2);
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1160", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "+(1)";
	TestCommonTools::consolePrintTestExprStart(1160, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1161", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "-(1)";
	TestCommonTools::consolePrintTestExprStart(1161, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -1;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1162", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "2 * [xyz], [xyz] = 3";
	ConstantPtr xyz = new_Constant("[xyz] = 3");
	TestCommonTools::consolePrintTestExprStart(1162, expStr);
	ExpressionPtr testExp = new_Expression("2 * [xyz]", xyz);
	double value = testExp->calculate();
	double reg = 6;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1163", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::enableAlmostIntRounding();
	mXparser::enableUlpRounding();
	string expStr = "2 * [abc], [abc] = -3";
	ConstantPtr abc = new_Constant("[abc]", -3);
	TestCommonTools::consolePrintTestExprStart(1163, expStr);
	ExpressionPtr testExp = new_Expression("2 * [abc]", abc);
	double value = testExp->calculate();
	double reg = -6;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1164", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "sin(0) + sin(2*pi) + sin(-2*pi) + sin(4*pi) + sin(-4*pi)";
	TestCommonTools::consolePrintTestExprStart(1164, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::sin(0) + Math::sin(2.0 * Math::PI) + Math::sin(-2.0 * Math::PI) + Math::sin(4.0 * Math::PI) +
	             Math::sin(-4.0 * Math::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1165", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "cos(0) + cos(2*pi) + cos(-2*pi) + cos(4*pi) + cos(-4*pi)";
	TestCommonTools::consolePrintTestExprStart(1165, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::cos(0) + Math::cos(2.0 * Math::PI) + Math::cos(-2.0 * Math::PI) + Math::cos(4.0 * Math::PI) +
	             Math::cos(-4.0 * Math::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1166", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "tan(0) + tan(2*pi) + tan(-2*pi) + tan(4*pi) + tan(-4*pi)";
	TestCommonTools::consolePrintTestExprStart(1166, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::tan(0) + Math::tan(2.0 * Math::PI) + Math::tan(-2.0 * Math::PI) + Math::tan(4.0 * Math::PI) +
	             Math::tan(-4.0 * Math::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1167", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "sec(0) + sec(2*pi) + sec(-2*pi) + sec(4*pi) + sec(-4*pi)";
	TestCommonTools::consolePrintTestExprStart(1167, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0 / Math::cos(0) + 1.0 / Math::cos(2.0 * Math::PI) + 1.0 / Math::cos(-2.0 * Math::PI) + 1.0 /
	             Math::cos(4.0 * Math::PI) + 1.0 / Math::cos(-4.0 * Math::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1168", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "sin(0) + sin(2*pi) + sin(-2*pi) + sin(4*pi) + sin(-4*pi)";
	TestCommonTools::consolePrintTestExprStart(1168, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::SIN_0 + SpecialValueTrigonometric::SIN_0 + SpecialValueTrigonometric::SIN_0
	             + SpecialValueTrigonometric::SIN_0 + SpecialValueTrigonometric::SIN_0;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1169", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "cos(0) + cos(2*pi) + cos(-2*pi) + cos(4*pi) + cos(-4*pi)";
	TestCommonTools::consolePrintTestExprStart(1169, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::COS_0 + SpecialValueTrigonometric::COS_0 + SpecialValueTrigonometric::COS_0
	             + SpecialValueTrigonometric::COS_0 + SpecialValueTrigonometric::COS_0;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1170", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "tan(0) + tan(2*pi) + tan(-2*pi) + tan(4*pi) + tan(-4*pi)";
	TestCommonTools::consolePrintTestExprStart(1170, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::TAN_0 + SpecialValueTrigonometric::TAN_0 + SpecialValueTrigonometric::TAN_0
	             + SpecialValueTrigonometric::TAN_0 + SpecialValueTrigonometric::TAN_0;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1171", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "sec(0) + sec(2*pi) + sec(-2*pi) + sec(4*pi) + sec(-4*pi)";
	TestCommonTools::consolePrintTestExprStart(1171, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::SEC_0 + SpecialValueTrigonometric::SEC_0 + SpecialValueTrigonometric::SEC_0
	             + SpecialValueTrigonometric::SEC_0 + SpecialValueTrigonometric::SEC_0;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1172",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "isNaN(ctan(0)) + isNaN(ctan(2*pi)) + isNaN(ctan(-2*pi)) + isNaN(ctan(4*pi)) + isNaN(ctan(-4*pi))";
	TestCommonTools::consolePrintTestExprStart(1172, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::T + BooleanAlgebra::T + BooleanAlgebra::T + BooleanAlgebra::T + BooleanAlgebra::T;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1173",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "isNaN(csc(0)) + isNaN(csc(2*pi)) + isNaN(csc(-2*pi)) + isNaN(csc(4*pi)) + isNaN(csc(-4*pi))";
	TestCommonTools::consolePrintTestExprStart(1173, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = BooleanAlgebra::T + BooleanAlgebra::T + BooleanAlgebra::T + BooleanAlgebra::T + BooleanAlgebra::T;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1174", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "sin((1/6)*pi) + sin((13/6)*pi) + sin((-11/6)*pi) + sin((25/6)*pi) + sin((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1174, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::sin((1.0 / 6.0) * Math::PI) + Math::sin((13.0 / 6.0) * Math::PI) +
	             Math::sin((-11.0 / 6.0) * Math::PI) + Math::sin((25.0 / 6.0) * Math::PI) + Math::sin(
		             (-23.0 / 6) * Math::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1175", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "cos((1/6)*pi) + cos((13/6)*pi) + cos((-11/6)*pi) + cos((25/6)*pi) + cos((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1175, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::cos((1.0 / 6.0) * Math::PI) + Math::cos((13.0 / 6.0) * Math::PI) +
	             Math::cos((-11.0 / 6.0) * Math::PI) + Math::cos((25.0 / 6.0) * Math::PI) + Math::cos(
		             (-23.0 / 6) * Math::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1176", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "tan((1/6)*pi) + tan((13/6)*pi) + tan((-11/6)*pi) + tan((25/6)*pi) + tan((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1176, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Math::tan((1.0 / 6.0) * Math::PI) + Math::tan((13.0 / 6.0) * Math::PI) +
	             Math::tan((-11.0 / 6.0) * Math::PI) + Math::tan((25.0 / 6.0) * Math::PI) + Math::tan(
		             (-23.0 / 6) * Math::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1177",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "ctan((1/6)*pi) + ctan((13/6)*pi) + ctan((-11/6)*pi) + ctan((25/6)*pi) + ctan((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1177, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0 / Math::tan((1.0 / 6.0) * Math::PI) + 1.0 / Math::tan((13.0 / 6.0) * Math::PI) + 1.0 /
	             Math::tan((-11.0 / 6.0) * Math::PI) + 1.0 / Math::tan((25.0 / 6.0) * Math::PI) + 1.0 / Math::tan(
		             (-23.0 / 6) * Math::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1178", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "sec((1/6)*pi) + sec((13/6)*pi) + sec((-11/6)*pi) + sec((25/6)*pi) + sec((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1178, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0 / Math::cos((1.0 / 6.0) * Math::PI) + 1.0 / Math::cos((13.0 / 6.0) * Math::PI) + 1.0 /
	             Math::cos((-11.0 / 6.0) * Math::PI) + 1.0 / Math::cos((25.0 / 6.0) * Math::PI) + 1.0 / Math::cos(
		             (-23.0 / 6) * Math::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1179", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "csc((1/6)*pi) + csc((13/6)*pi) + csc((-11/6)*pi) + csc((25/6)*pi) + csc((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1179, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.0 / Math::sin((1.0 / 6.0) * Math::PI) + 1.0 / Math::sin((13.0 / 6.0) * Math::PI) + 1.0 /
	             Math::sin((-11.0 / 6.0) * Math::PI) + 1.0 / Math::sin((25.0 / 6.0) * Math::PI) + 1.0 / Math::sin(
		             (-23.0 / 6) * Math::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1180", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "sin((1/6)*pi) + sin((13/6)*pi) + sin((-11/6)*pi) + sin((25/6)*pi) + sin((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1180, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::SIN_30 + SpecialValueTrigonometric::SIN_30 +
	             SpecialValueTrigonometric::SIN_30 + SpecialValueTrigonometric::SIN_30 +
	             SpecialValueTrigonometric::SIN_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1181", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "cos((1/6)*pi) + cos((13/6)*pi) + cos((-11/6)*pi) + cos((25/6)*pi) + cos((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1181, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::COS_30 + SpecialValueTrigonometric::COS_30 +
	             SpecialValueTrigonometric::COS_30 + SpecialValueTrigonometric::COS_30 +
	             SpecialValueTrigonometric::COS_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1182", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "tan((1/6)*pi) + tan((13/6)*pi) + tan((-11/6)*pi) + tan((25/6)*pi) + tan((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1182, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::TAN_30 + SpecialValueTrigonometric::TAN_30 +
	             SpecialValueTrigonometric::TAN_30 + SpecialValueTrigonometric::TAN_30 +
	             SpecialValueTrigonometric::TAN_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1183",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "ctan((1/6)*pi) + ctan((13/6)*pi) + ctan((-11/6)*pi) + ctan((25/6)*pi) + ctan((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1183, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::CTAN_30 + SpecialValueTrigonometric::CTAN_30 +
	             SpecialValueTrigonometric::CTAN_30 + SpecialValueTrigonometric::CTAN_30 +
	             SpecialValueTrigonometric::CTAN_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1184", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "sec((1/6)*pi) + sec((13/6)*pi) + sec((-11/6)*pi) + sec((25/6)*pi) + sec((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1184, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::SEC_30 + SpecialValueTrigonometric::SEC_30 +
	             SpecialValueTrigonometric::SEC_30 + SpecialValueTrigonometric::SEC_30 +
	             SpecialValueTrigonometric::SEC_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1185", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "csc((1/6)*pi) + csc((13/6)*pi) + csc((-11/6)*pi) + csc((25/6)*pi) + csc((-23/6)*pi)";
	TestCommonTools::consolePrintTestExprStart(1185, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::CSC_30 + SpecialValueTrigonometric::CSC_30 +
	             SpecialValueTrigonometric::CSC_30 + SpecialValueTrigonometric::CSC_30 +
	             SpecialValueTrigonometric::CSC_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1186", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "sin(asin(sin(asin(sin(asin(sin((1/6)*pi)))))))";
	TestCommonTools::consolePrintTestExprStart(1186, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::SIN_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1187", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "cos(acos(cos(acos(cos(acos(cos((1/6)*pi)))))))";
	TestCommonTools::consolePrintTestExprStart(1187, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::COS_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1188", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "tan(atan(tan(atan(tan(atan(tan((1/6)*pi)))))))";
	TestCommonTools::consolePrintTestExprStart(1188, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::TAN_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1189", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "ctan(actan(ctan(actan(ctan(actan(ctan((1/6)*pi)))))))";
	TestCommonTools::consolePrintTestExprStart(1189, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::CTAN_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1190", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	bool tmp = mXparser::checkIfCanonicalRounding();
	mXparser::disableCanonicalRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "sec(arcsec(sec(arcsec(sec(arcsec(sec((1/6)*pi)))))))";
	TestCommonTools::consolePrintTestExprStart(1190, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::SEC_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setCanonicalRounding(tmp);
	CHECK(testResult);
}

TEST_CASE("testExpr1191", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setRadiansMode();
	string expStr = "csc(arccsc(csc(arccsc(csc(arccsc(csc((1/6)*pi)))))))";
	TestCommonTools::consolePrintTestExprStart(1191, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = SpecialValueTrigonometric::CSC_30;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	CHECK(testResult);
}

TEST_CASE("testExpr1192", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setDegreesMode();
	string expStr = "asin(sin(asin(sin(30))))";
	TestCommonTools::consolePrintTestExprStart(1192, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.0;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1193", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setDegreesMode();
	string expStr = "acos(cos(acos(cos(30))))";
	TestCommonTools::consolePrintTestExprStart(1193, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.0;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1194", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setDegreesMode();
	string expStr = "atan(tan(atan(tan(30))))";
	TestCommonTools::consolePrintTestExprStart(1194, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.0;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1195", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setDegreesMode();
	string expStr = "actan(ctan(actan(ctan(30))))";
	TestCommonTools::consolePrintTestExprStart(1195, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.0;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1196", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setDegreesMode();
	string expStr = "arcsec(sec(arcsec(sec(30))))";
	TestCommonTools::consolePrintTestExprStart(1196, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.0;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1197", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setDegreesMode();
	string expStr = "arccsc(csc(arccsc(csc(30))))";
	TestCommonTools::consolePrintTestExprStart(1197, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.0;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1198",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::setDegreesMode();
	string expStr =
			"asin(sin(31)) + acos(cos(32)) + atan(tan(33)) + actan(ctan(34)) + arcsec(sec(35)) + arccsc(csc(36))";
	TestCommonTools::consolePrintTestExprStart(1198, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 31.0 + 32.0 + 33.0 + 34.0 + 35.0 + 36.0;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1199", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "0.1 + 0.1 + 0.1";
	TestCommonTools::consolePrintTestExprStart(1199, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.3;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1200", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "2.5 - 2.3";
	TestCommonTools::consolePrintTestExprStart(1200, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.2;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1201", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "2.53 + 2.0";
	TestCommonTools::consolePrintTestExprStart(1201, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 4.53;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1202", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "2.53 * 2.675";
	TestCommonTools::consolePrintTestExprStart(1202, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 6.76775;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1203", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "-2.53 * 2.675";
	TestCommonTools::consolePrintTestExprStart(1203, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -6.76775;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1204", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "5.55 / 5";
	TestCommonTools::consolePrintTestExprStart(1204, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.11;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1205", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "-5.55 / 5";
	TestCommonTools::consolePrintTestExprStart(1205, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -1.11;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1206", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "6.2^2";
	TestCommonTools::consolePrintTestExprStart(1206, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 38.44;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1207", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "-6.2^3";
	TestCommonTools::consolePrintTestExprStart(1207, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -238.328;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1208", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "(1/6.2)^(-2)";
	TestCommonTools::consolePrintTestExprStart(1208, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 38.44;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1209", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "(1/6.2)^(-3)";
	TestCommonTools::consolePrintTestExprStart(1209, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 238.328;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1210", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "(-1/6.2)^(-3)";
	TestCommonTools::consolePrintTestExprStart(1210, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -238.328;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1211", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "sum(i, 1, 1000, 0.1)";
	TestCommonTools::consolePrintTestExprStart(1211, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 100;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1212", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "sum(i, 1, 1000, -0.1)";
	TestCommonTools::consolePrintTestExprStart(1212, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -100;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1213", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "sum(i, -1000, -1, 0.1)";
	TestCommonTools::consolePrintTestExprStart(1213, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 100;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1214", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "sum(i, -1000, -1, -0.1)";
	TestCommonTools::consolePrintTestExprStart(1214, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -100;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1215", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "prod(i, 1, 3, 0.1)";
	TestCommonTools::consolePrintTestExprStart(1215, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.001;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1216", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "prod(i, 1, 3, -0.1)";
	TestCommonTools::consolePrintTestExprStart(1216, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -0.001;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1217", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "prod(i, -3, -1, 0.1)";
	TestCommonTools::consolePrintTestExprStart(1217, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.001;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1218", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "prod(i, -3, -1, -0.1)";
	TestCommonTools::consolePrintTestExprStart(1218, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -0.001;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1219", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "prod(i, 1, 2, 6.2)";
	TestCommonTools::consolePrintTestExprStart(1219, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 38.44;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1220", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "prod(i, 1, 3, 6.2)";
	TestCommonTools::consolePrintTestExprStart(1220, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 238.328;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1221", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "add(0.1, 0.1, 0.1)";
	TestCommonTools::consolePrintTestExprStart(1221, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.3;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1222", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "add(-0.1, -0.1, -0.1)";
	TestCommonTools::consolePrintTestExprStart(1222, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -0.3;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1223", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "multi(0.1, 0.1, 0.1)";
	TestCommonTools::consolePrintTestExprStart(1223, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.001;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1224", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	mXparser::disableAlmostIntRounding();
	mXparser::disableUlpRounding();
	mXparser::enableCanonicalRounding();
	string expStr = "multi(-0.1, -0.1, -0.1)";
	TestCommonTools::consolePrintTestExprStart(1224, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -0.001;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::enableAlmostIntRounding();
	mXparser::enableAlmostIntRounding();
	mXparser::setRadiansMode();
	CHECK(testResult);
}

TEST_CASE("testExpr1225", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(0 & 1) | (1 & 1) | 1 & 0";
	TestCommonTools::consolePrintTestExprStart(1225, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1226", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1 | 0 & 0";
	TestCommonTools::consolePrintTestExprStart(1226, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1227", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1 | ~1 --> ~0 & 1";
	TestCommonTools::consolePrintTestExprStart(1227, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1228", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = 20");
	string expStr = "x + 4 * - 2";
	TestCommonTools::consolePrintTestExprStart(1228, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 12;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1229", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = 20");
	string expStr = "x + 4* - 2";
	TestCommonTools::consolePrintTestExprStart(1229, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 12;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1230", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = 20");
	string expStr = "x + 4*- 2";
	TestCommonTools::consolePrintTestExprStart(1230, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 12;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1231", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = 20");
	string expStr = "x + 4*-2";
	TestCommonTools::consolePrintTestExprStart(1231, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 12;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1232", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = 20");
	string expStr = "x + 4  *    -      2";
	TestCommonTools::consolePrintTestExprStart(1232, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 12;
	if (MathFunctions::abs(reg - value) <= 1e-100)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1233", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	const ArgumentExtensionPtr piMultArgExt = new_PiMultArgExt();
	ArgumentPtr x = new_Argument("x", piMultArgExt);
	string expStr = "x + x + x + x";
	TestCommonTools::consolePrintTestExprStart(1233, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 10 * MathConstants::PI;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1234", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2(3) - 2*(3)";
	TestCommonTools::consolePrintTestExprStart(1234, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1235", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(3)2 - (3)*2";
	TestCommonTools::consolePrintTestExprStart(1235, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1236", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2(3)2 - 2*(3)*2";
	TestCommonTools::consolePrintTestExprStart(1236, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1237", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "4×2";
	TestCommonTools::consolePrintTestExprStart(1237, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 8;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1238", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "4⨉2";
	TestCommonTools::consolePrintTestExprStart(1238, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 8;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1239", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "4∙2";
	TestCommonTools::consolePrintTestExprStart(1239, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 8;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1240", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "4÷2";
	TestCommonTools::consolePrintTestExprStart(1240, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1241", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "10+¬1";
	TestCommonTools::consolePrintTestExprStart(1241, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1242", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1∧0";
	TestCommonTools::consolePrintTestExprStart(1242, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1243", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1∨0";
	TestCommonTools::consolePrintTestExprStart(1243, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1244", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(1~∧1) + (1¬&1) + (1¬&&1) + (1¬/\\1) + (1¬∧1) + (1⊼1)";
	TestCommonTools::consolePrintTestExprStart(1244, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1245", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(0~∨0) + (0¬|0) + (0¬||0) + (0¬\\/0) + (0¬∨0) + (0⊽0)";
	TestCommonTools::consolePrintTestExprStart(1245, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 6;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1246", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(0⊻0) + (0⊻1) + (1⊻0) + (1⊻1)";
	TestCommonTools::consolePrintTestExprStart(1246, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1247", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(0⇍1) + (1⇍1)";
	TestCommonTools::consolePrintTestExprStart(1247, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1248", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(0⇐0) + (0⇐1) + (1⇐0)";
	TestCommonTools::consolePrintTestExprStart(1248, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1249", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(0⇒0) + (0⇒1) + (1⇒0)";
	TestCommonTools::consolePrintTestExprStart(1249, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1250", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(1⇏0) + (1⇏1)";
	TestCommonTools::consolePrintTestExprStart(1250, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1251", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(0⇔0) + (1⇔1)";
	TestCommonTools::consolePrintTestExprStart(1251, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1252", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(1≠2)+(1≠1)";
	TestCommonTools::consolePrintTestExprStart(1252, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1253", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(1≤2)+(1≤1)+(2≤1)";
	TestCommonTools::consolePrintTestExprStart(1253, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1254", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(1⋜2)+(1⋜1)+(2⋜1)";
	TestCommonTools::consolePrintTestExprStart(1254, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1255", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(2≥1)+(2≥2)+(1≥2)";
	TestCommonTools::consolePrintTestExprStart(1255, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1256", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(2⋝1)+(2⋝2)+(1⋝2)";
	TestCommonTools::consolePrintTestExprStart(1256, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1257", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "√4+√(6+3)+√16*2";
	TestCommonTools::consolePrintTestExprStart(1257, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 13;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1258", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∛1+∛(6+2)+∛27*2";
	TestCommonTools::consolePrintTestExprStart(1258, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 9;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1259", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∜1+∜(14+2)+∜81*2";
	TestCommonTools::consolePrintTestExprStart(1259, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 9;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1260", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "pi+π+ℼ";
	TestCommonTools::consolePrintTestExprStart(1260, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3 * MathConstants::PI;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1261", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "e+ℯ+ⅇ";
	TestCommonTools::consolePrintTestExprStart(1261, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3 * MathConstants::E;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1262", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∑(i, 1, 10, i) + Σ(i, 11, 20, i)";
	TestCommonTools::consolePrintTestExprStart(1262, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 210;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1263", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∏(i, 1, 3, i) + ℿ(i, 4, 6, i) + Π(i, 7, 9, i)";
	TestCommonTools::consolePrintTestExprStart(1263, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 630;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1264", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2*∫( √abs(x^2-1), x, -1, 1)";
	TestCommonTools::consolePrintTestExprStart(1264, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathConstants::PI;
	if (MathFunctions::abs(reg - value) <= 1e-04)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1265", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∂(x^2, x, 2)";
	TestCommonTools::consolePrintTestExprStart(1265, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 4;
	if (MathFunctions::abs(reg - value) <= 1e-04)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1266", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∂+( abs(x), x, 0)";
	TestCommonTools::consolePrintTestExprStart(1266, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-04)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1267", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∂-( abs(x), x, 0)";
	TestCommonTools::consolePrintTestExprStart(1267, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -1;
	if (MathFunctions::abs(reg - value) <= 1e-04)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1268", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = 2");
	string expStr = "∆(x^2, x) + Δ(x^2, x)";
	TestCommonTools::consolePrintTestExprStart(1268, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 10;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1269", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = 2");
	string expStr = "∇(x^2, x)";
	TestCommonTools::consolePrintTestExprStart(1269, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 3;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1270", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "α+β+γ+δ+ε";
	TestCommonTools::consolePrintTestExprStart(1270, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("α", 1);
	ArgumentPtr u2 = new_Argument("β = 2");
	ConstantPtr u3 = new_Constant("γ", 3);
	ConstantPtr u4 = new_Constant("δ = 4");
	ArgumentPtr u5 = new_Argument("ε = α+β+γ+δ", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1271", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ζ+η+θ+ι+κ";
	TestCommonTools::consolePrintTestExprStart(1271, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("ζ", 1);
	ArgumentPtr u2 = new_Argument("η = 2");
	ConstantPtr u3 = new_Constant("θ", 3);
	ConstantPtr u4 = new_Constant("ι = 4");
	ArgumentPtr u5 = new_Argument("κ = ζ+η+θ+ι", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1272", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "λ+μ+ν+ξ+ο";
	TestCommonTools::consolePrintTestExprStart(1272, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("λ", 1);
	ArgumentPtr u2 = new_Argument("μ = 2");
	ConstantPtr u3 = new_Constant("ν", 3);
	ConstantPtr u4 = new_Constant("ξ = 4");
	ArgumentPtr u5 = new_Argument("ο = λ+μ+ν+ξ", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1273", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "π+ρ+ς+σ+τ";
	TestCommonTools::consolePrintTestExprStart(1273, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("π", 1);
	ArgumentPtr u2 = new_Argument("ρ = 2");
	ConstantPtr u3 = new_Constant("ς", 3);
	ConstantPtr u4 = new_Constant("σ = 4");
	ArgumentPtr u5 = new_Argument("τ = π+ρ+ς+σ", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1274", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "υ+φ+χ+ψ+ω";
	TestCommonTools::consolePrintTestExprStart(1274, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("υ", 1);
	ArgumentPtr u2 = new_Argument("φ = 2");
	ConstantPtr u3 = new_Constant("χ", 3);
	ConstantPtr u4 = new_Constant("ψ = 4");
	ArgumentPtr u5 = new_Argument("ω = υ+φ+χ+ψ", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1275", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Α+Β+Γ+Δ+Ε";
	TestCommonTools::consolePrintTestExprStart(1275, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("Α", 1);
	ArgumentPtr u2 = new_Argument("Β = 2");
	ConstantPtr u3 = new_Constant("Γ", 3);
	ConstantPtr u4 = new_Constant("Δ = 4");
	ArgumentPtr u5 = new_Argument("Ε = Α+Β+Γ+Δ", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1276", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Ζ+Η+Θ+Ι+Κ";
	TestCommonTools::consolePrintTestExprStart(1276, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("Ζ", 1);
	ArgumentPtr u2 = new_Argument("Η = 2");
	ConstantPtr u3 = new_Constant("Θ", 3);
	ConstantPtr u4 = new_Constant("Ι = 4");
	ArgumentPtr u5 = new_Argument("Κ = Ζ+Η+Θ+Ι", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1277", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Λ+Μ+Ν+Ξ+Ο";
	TestCommonTools::consolePrintTestExprStart(1277, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("Λ", 1);
	ArgumentPtr u2 = new_Argument("Μ = 2");
	ConstantPtr u3 = new_Constant("Ν", 3);
	ConstantPtr u4 = new_Constant("Ξ = 4");
	ArgumentPtr u5 = new_Argument("Ο = Λ+Μ+Ν+Ξ", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1278", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Π+Ρ+Σ+Τ+Υ";
	TestCommonTools::consolePrintTestExprStart(1278, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("Π", 1);
	ArgumentPtr u2 = new_Argument("Ρ = 2");
	ConstantPtr u3 = new_Constant("Σ", 3);
	ConstantPtr u4 = new_Constant("Τ = 4");
	ArgumentPtr u5 = new_Argument("Υ = Π+Ρ+Σ+Τ", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1279", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Φ+Χ+Ψ+Ω+∑";
	TestCommonTools::consolePrintTestExprStart(1279, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("Φ", 1);
	ArgumentPtr u2 = new_Argument("Χ = 2");
	ConstantPtr u3 = new_Constant("Ψ", 3);
	ConstantPtr u4 = new_Constant("Ω = 4");
	ArgumentPtr u5 = new_Argument("∑ = Φ+Χ+Ψ+Ω", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1280", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∏+ℿ+∆+∇+∫";
	TestCommonTools::consolePrintTestExprStart(1280, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("∏", 1);
	ArgumentPtr u2 = new_Argument("ℿ = 2");
	ConstantPtr u3 = new_Constant("∆", 3);
	ConstantPtr u4 = new_Constant("∇ = 4");
	ArgumentPtr u5 = new_Argument("∫ = ∏+ℿ+∆+∇", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1281", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ℼ+ℇ+ⅇ+ℯ+∂";
	TestCommonTools::consolePrintTestExprStart(1281, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ArgumentPtr u1 = new_Argument("ℼ", 1);
	ArgumentPtr u2 = new_Argument("ℇ = 2");
	ConstantPtr u3 = new_Constant("ⅇ", 3);
	ConstantPtr u4 = new_Constant("ℯ = 4");
	ArgumentPtr u5 = new_Argument("∂ = ℼ+ℇ+ⅇ+ℯ", u1, u2, u3, u4);
	ExpressionPtr testExp = new_Expression(expStr, u1, u2, u3, u4, u5);
	double value = testExp->calculate();
	double reg = 20;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1282", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "α(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1282, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("α(β,γ,δ,ε) = β^2+γ^2+δ^2+ε^2");
	ExpressionPtr testExp = new_Expression(expStr, a);
	double value = testExp->calculate();
	double reg = 30;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1283", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "α(1,2,3,4) + β(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1283, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("α(β,γ,δ,ε) = β^2+γ^2+δ^2+ε^2");
	FunctionPtr b = new_Function("β", "α^2+γ^2+δ^2+ε^2", "α", "γ", "δ", "ε");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1284", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ζ(1,2,3,4) + η(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1284, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("ζ(η,θ,ι,κ) = η^2+θ^2+ι^2+κ^2");
	FunctionPtr b = new_Function("η", "ζ^2+θ^2+ι^2+κ^2", "ζ", "θ", "ι", "κ");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1285", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "λ(1,2,3,4) + μ(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1285, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("λ(μ,ν,ξ,ο) = μ^2+ν^2+ξ^2+ο^2");
	FunctionPtr b = new_Function("μ", "λ^2+ν^2+ξ^2+ο^2", "λ", "ν", "ξ", "ο");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1286", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "π(1,2,3,4) + ρ(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1286, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("π(ρ,ς,σ,τ) = ρ^2+ς^2+σ^2+τ^2");
	FunctionPtr b = new_Function("ρ", "π^2+ς^2+σ^2+τ^2", "π", "ς", "σ", "τ");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1287", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "υ(1,2,3,4) + φ(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1287, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("υ(φ,χ,ψ,ω) = φ^2+χ^2+ψ^2+ω^2");
	FunctionPtr b = new_Function("φ", "υ^2+χ^2+ψ^2+ω^2", "υ", "χ", "ψ", "ω");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1288", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Α(1,2,3,4) + Β(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1288, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("Α(Β,Γ,Δ,Ε) = Β^2+Γ^2+Δ^2+Ε^2");
	FunctionPtr b = new_Function("Β", "Α^2+Γ^2+Δ^2+Ε^2", "Α", "Γ", "Δ", "Ε");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1289", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Ζ(1,2,3,4) + Η(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1289, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("Ζ(Η,Θ,Ι,Κ) = Η^2+Θ^2+Ι^2+Κ^2");
	FunctionPtr b = new_Function("Η", "Ζ^2+Θ^2+Ι^2+Κ^2", "Ζ", "Θ", "Ι", "Κ");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1290", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Λ(1,2,3,4) + Μ(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1290, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("Λ(Μ,Ν,Ξ,Ο) = Μ^2+Ν^2+Ξ^2+Ο^2");
	FunctionPtr b = new_Function("Μ", "Λ^2+Ν^2+Ξ^2+Ο^2", "Λ", "Ν", "Ξ", "Ο");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1291", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Π(1,2,3,4) + Ρ(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1291, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("Π(Ρ,Σ,Τ,Υ) = Ρ^2+Σ^2+Τ^2+Υ^2");
	FunctionPtr b = new_Function("Ρ", "Π^2+Σ^2+Τ^2+Υ^2", "Π", "Σ", "Τ", "Υ");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1292", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Φ(1,2,3,4) + Χ(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1292, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("Φ(Χ,Ψ,Ω,∑) = Χ^2+Ψ^2+Ω^2+∑^2");
	FunctionPtr b = new_Function("Χ", "Φ^2+Ψ^2+Ω^2+∑^2", "Φ", "Ψ", "Ω", "∑");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1293", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∏(1,2,3,4) + ℿ(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1293, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("∏(ℿ,∆,∇,∫) = ℿ^2+∆^2+∇^2+∫^2");
	FunctionPtr b = new_Function("ℿ", "∏^2+∆^2+∇^2+∫^2", "∏", "∆", "∇", "∫");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1294", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "ℼ(1,2,3,4) + ℇ(1,2,3,4)";
	TestCommonTools::consolePrintTestExprStart(1294, expStr);
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr a = new_Function("ℼ(ℇ,ⅇ,ℯ,∂) = ℇ^2+ⅇ^2+ℯ^2+∂^2");
	FunctionPtr b = new_Function("ℇ", "ℼ^2+ⅇ^2+ℯ^2+∂^2", "ℼ", "ⅇ", "ℯ", "∂");
	ExpressionPtr testExp = new_Expression(expStr, a, b);
	double value = testExp->calculate();
	double reg = 60;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1295",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr =
			"[α]+[β]+[γ]+[δ]+[ε]+[ζ]+[η]+[θ]+[ι]+[κ]+[λ]+[μ]+[ν]+[ξ]+[ο]+[π]+[ρ]+[ς]+[σ]+[τ]+[υ]+[φ]+[χ]+[ψ]+[ω]+[Α]+[Β]+[Γ]+[Δ]+[Ε]+[Ζ]+[Η]+[Θ]+[Ι]+[Κ]+[Λ]+[Μ]+[Ν]+[Ξ]+[Ο]+[Π]+[Ρ]+[Σ]+[Τ]+[Υ]+[Φ]+[Χ]+[Ψ]+[Ω]+[∑]+[∏]+[ℿ]+[∆]+[∇]+[∫]+[ℼ]+[ℇ]+[ⅇ]+[ℯ]+[∂]";
	TestCommonTools::consolePrintTestExprStart(1295, expStr);
	mXparser::setToOverrideBuiltinTokens();
	ConstantPtr c1 = new_Constant("[α] = 1");
	ConstantPtr c2 = new_Constant("[β] = 2");
	ConstantPtr c3 = new_Constant("[γ] = 3");
	ConstantPtr c4 = new_Constant("[δ] = 4");
	ConstantPtr c5 = new_Constant("[ε] = 5");
	ConstantPtr c6 = new_Constant("[ζ] = 6");
	ConstantPtr c7 = new_Constant("[η] = 7");
	ConstantPtr c8 = new_Constant("[θ] = 8");
	ConstantPtr c9 = new_Constant("[ι] = 9");
	ConstantPtr c10 = new_Constant("[κ] = 10");
	ConstantPtr c11 = new_Constant("[λ] = 11");
	ConstantPtr c12 = new_Constant("[μ] = 12");
	ConstantPtr c13 = new_Constant("[ν] = 13");
	ConstantPtr c14 = new_Constant("[ξ] = 14");
	ConstantPtr c15 = new_Constant("[ο] = 15");
	ConstantPtr c16 = new_Constant("[π] = 16");
	ConstantPtr c17 = new_Constant("[ρ] = 17");
	ConstantPtr c18 = new_Constant("[ς] = 18");
	ConstantPtr c19 = new_Constant("[σ] = 19");
	ConstantPtr c20 = new_Constant("[τ] = 20");
	ConstantPtr c21 = new_Constant("[υ] = 21");
	ConstantPtr c22 = new_Constant("[φ] = 22");
	ConstantPtr c23 = new_Constant("[χ] = 23");
	ConstantPtr c24 = new_Constant("[ψ] = 24");
	ConstantPtr c25 = new_Constant("[ω] = 25");
	ConstantPtr c26 = new_Constant("[Α] = 26");
	ConstantPtr c27 = new_Constant("[Β] = 27");
	ConstantPtr c28 = new_Constant("[Γ] = 28");
	ConstantPtr c29 = new_Constant("[Δ] = 29");
	ConstantPtr c30 = new_Constant("[Ε] = 30");
	ConstantPtr c31 = new_Constant("[Ζ] = 31");
	ConstantPtr c32 = new_Constant("[Η] = 32");
	ConstantPtr c33 = new_Constant("[Θ] = 33");
	ConstantPtr c34 = new_Constant("[Ι] = 34");
	ConstantPtr c35 = new_Constant("[Κ] = 35");
	ConstantPtr c36 = new_Constant("[Λ] = 36");
	ConstantPtr c37 = new_Constant("[Μ] = 37");
	ConstantPtr c38 = new_Constant("[Ν] = 38");
	ConstantPtr c39 = new_Constant("[Ξ] = 39");
	ConstantPtr c40 = new_Constant("[Ο] = 40");
	ConstantPtr c41 = new_Constant("[Π] = 41");
	ConstantPtr c42 = new_Constant("[Ρ] = 42");
	ConstantPtr c43 = new_Constant("[Σ] = 43");
	ConstantPtr c44 = new_Constant("[Τ] = 44");
	ConstantPtr c45 = new_Constant("[Υ] = 45");
	ConstantPtr c46 = new_Constant("[Φ] = 46");
	ConstantPtr c47 = new_Constant("[Χ] = 47");
	ConstantPtr c48 = new_Constant("[Ψ] = 48");
	ConstantPtr c49 = new_Constant("[Ω] = 49");
	ConstantPtr c50 = new_Constant("[∑] = 50");
	ConstantPtr c51 = new_Constant("[∏] = 51");
	ConstantPtr c52 = new_Constant("[ℿ] = 52");
	ConstantPtr c53 = new_Constant("[∆] = 53");
	ConstantPtr c54 = new_Constant("[∇] = 54");
	ConstantPtr c55 = new_Constant("[∫] = 55");
	ConstantPtr c56 = new_Constant("[ℼ] = 56");
	ConstantPtr c57 = new_Constant("[ℇ] = 57");
	ConstantPtr c58 = new_Constant("[ⅇ] = 58");
	ConstantPtr c59 = new_Constant("[ℯ] = 59");
	ConstantPtr c60 = new_Constant("[∂] = 60");
	ExpressionPtr testExp = new_Expression(expStr, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15,
	                                       c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30,
	                                       c31, c32, c33, c34, c35, c36, c37, c38, c39, c40, c41, c42, c43, c44, c45,
	                                       c46, c47, c48, c49, c50, c51, c52, c53, c54, c55, c56, c57, c58, c59, c60);
	double value = testExp->calculate();
	double reg = 1830;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1296", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "√√16";
	TestCommonTools::consolePrintTestExprStart(1296, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1297", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "√√√256";
	TestCommonTools::consolePrintTestExprStart(1297, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1298", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∛∛-19683";
	TestCommonTools::consolePrintTestExprStart(1298, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -3;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1299", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∛∛∛-7625597484987";
	TestCommonTools::consolePrintTestExprStart(1299, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -3;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1300", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "pi+pi√pi";
	TestCommonTools::consolePrintTestExprStart(1300, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathConstants::PI + MathConstants::PI * MathFunctions::sqrt(MathConstants::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1301", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "pi+pi√pipi";
	TestCommonTools::consolePrintTestExprStart(1301, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathConstants::PI + MathConstants::PI * MathFunctions::sqrt(MathConstants::PI) * MathConstants::PI;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1302", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "pi+pi∛pi";
	TestCommonTools::consolePrintTestExprStart(1302, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathConstants::PI + MathConstants::PI * MathFunctions::root(3, MathConstants::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1303", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "pi+pi∛pipi";
	TestCommonTools::consolePrintTestExprStart(1303, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathConstants::PI + MathConstants::PI * MathFunctions::root(3, MathConstants::PI) * MathConstants::PI;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1304", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "pi+pi∜pi";
	TestCommonTools::consolePrintTestExprStart(1304, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathConstants::PI + MathConstants::PI * MathFunctions::root(4, MathConstants::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1305", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "pi+pi∜pipi";
	TestCommonTools::consolePrintTestExprStart(1305, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathConstants::PI + MathConstants::PI * MathFunctions::root(4, MathConstants::PI) * MathConstants::PI;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1306", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∜∜65536";
	TestCommonTools::consolePrintTestExprStart(1306, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1307", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "∜∜∜445.791568452592";
	TestCommonTools::consolePrintTestExprStart(1307, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.1;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1308", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "pi√pi";
	TestCommonTools::consolePrintTestExprStart(1308, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = MathConstants::PI * MathFunctions::sqrt(MathConstants::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1309", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2pi√pi";
	TestCommonTools::consolePrintTestExprStart(1309, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2 * MathConstants::PI * MathFunctions::sqrt(MathConstants::PI);
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1310", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2pi√√pi";
	TestCommonTools::consolePrintTestExprStart(1310, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2 * MathConstants::PI * MathFunctions::sqrt(MathFunctions::sqrt(MathConstants::PI));
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1311", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2pi√√2pi";
	TestCommonTools::consolePrintTestExprStart(1311, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2 * MathConstants::PI * MathFunctions::sqrt(MathFunctions::sqrt(2)) * MathConstants::PI;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1312", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "lg(100)";
	TestCommonTools::consolePrintTestExprStart(1312, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1313", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[9]:= SetPrecision[Sum[PDF[StudentTDistribution[1], x], {x, -10, 10, 0.02}], 20]
	Out[9]= 46.830597759724916784
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -10, 10, pStud(x, 1), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1313, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 46.830597759724916784;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1314", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[10]:= SetPrecision[Sum[PDF[StudentTDistribution[2], x], {x, -10, 10, 0.02}], 20]
	Out[10]= 49.508346930021311039
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -10, 10, pStud(x, 2), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1314, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 49.508346930021311039;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1315", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[11]:= SetPrecision[Sum[PDF[StudentTDistribution[3], x], {x, -10, 10, 0.02}], 20]
	Out[11]= 49.893891451661730230
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -10, 10, pStud(x, 3), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1315, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 49.893891451661730230;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1316", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[12]:= SetPrecision[Sum[PDF[StudentTDistribution[4], x], {x, -10, 10, 0.02}], 20]
	Out[12]= 49.972008436752780369
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -10, 10, pStud(x, 4), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1316, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 49.972008436752780369;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1317", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[13]:= SetPrecision[Sum[PDF[StudentTDistribution[5], x], {x, -10, 10, 0.02}], 20]
	Out[13]= 49.991493532953654721
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -10, 10, pStud(x, 5), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1317, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 49.991493532953654721;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1318", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[17]:= SetPrecision[Sum[PDF[StudentTDistribution[7], x], {x, -10, 10, 0.02}], 20]
	Out[17]= 49.998937324212853639
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -10, 10, pStud(x, 7), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1318, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 49.998937324212853639;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1319", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[16]:= SetPrecision[Sum[PDF[StudentTDistribution[10], x], {x, -10, 10, 0.02}], 20]
	Out[16]= 49.999921248381660632
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -10, 10, pStud(x, 10), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1319, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 49.999921248381660632;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1320", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[18]:= SetPrecision[Sum[PDF[StudentTDistribution[3.5], x], {x, -10, 10, 0.02}], 20]
	Out[18]= 49.946608252637815895
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -10, 10, pStud(x, 3.5), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1320, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 49.946608252637815895;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1321", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[3]:= SetPrecision[Sum[CDF[StudentTDistribution[1], x], {x, -4, 2, 0.02}], 20]
	Out[3]= 111.04123242153693241
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -4, 2, cStud(x, 1), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1321, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 111.04123242153693241;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1322", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[4]:= SetPrecision[Sum[CDF[StudentTDistribution[2], x], {x, -4, 2, 0.02}], 20]
	Out[4]= 105.63973985365477404
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -4, 2, cStud(x, 2), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1322, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 105.63973985365477404;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1323", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[5]:= SetPrecision[Sum[CDF[StudentTDistribution[3], x], {x, -4, 2, 0.02}], 20]
	Out[5]= 103.76840911119133182
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -4, 2, cStud(x, 3), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1323, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 103.76840911119133182;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1324", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[6]:= SetPrecision[Sum[CDF[StudentTDistribution[4], x], {x, -4, 2, 0.02}], 20]
	Out[6]= 102.88505229712588118
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -4, 2, cStud(x, 4), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1324, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 102.88505229712588118;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1325", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[7]:= SetPrecision[Sum[CDF[StudentTDistribution[5], x], {x, -4, 2, 0.02}], 20]
	Out[7]= 102.39024509448005062
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -4, 2, cStud(x, 5), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1325, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 102.39024509448005062;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1326", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[8]:= SetPrecision[Sum[CDF[StudentTDistribution[7], x], {x, -4, 2, 0.02}], 20]
	Out[8]= 101.87231418516095971
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -4, 2, cStud(x, 7), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1326, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 101.87231418516095971;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1327", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[9]:= SetPrecision[Sum[CDF[StudentTDistribution[10], x], {x, -4, 2, 0.02}], 20]
	Out[9]= 101.52722288162753728
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -4, 2, cStud(x, 10), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1327, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 101.52722288162753728;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1328", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[10]:= SetPrecision[Sum[CDF[StudentTDistribution[3.5], x], {x, -4, 2, 0.02}], 20]
	Out[10]= 103.25631202978907197
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -4, 2, cStud(x, 3.5), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1328, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 103.25631202978907197;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1329", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(v, 2, 10, int( pStud(x, v), x, -3, 1) - ( cStud(1, v) - cStud(-3, v)), 0.5)";
	TestCommonTools::consolePrintTestExprStart(1329, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-5)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1330", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[11]:= SetPrecision[Sum[CDF[StudentTDistribution[6], x], {x, -4, 2, 0.02}], 20]
	Out[11]= 102.08096048688545920
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -4, 2, cStud(x, 6), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1330, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 102.08096048688545920;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1331", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[12]:= SetPrecision[Sum[PDF[StudentTDistribution[6], x], {x, -10, 10, 0.02}], 20]
	Out[12]= 49.997120486355342450
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, -10, 10, pStud(x, 6), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1331, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 49.997120486355342450;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1332", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[20]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[1], p], {p, 0.01, 0.3, 0.01}], 20]
	Out[20]= -122.13661350334075451
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.01, 0.3, qStud(p, 1), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1332, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -122.13661350334075451;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1333", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[21]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[2], p], {p, 0.31, 0.6, 0.01}], 20]
	Out[21]= -4.0222366861212943689
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.31, 0.6, qStud(p, 2), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1333, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -4.0222366861212943689;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1334", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[22]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[3], p], {p, 0.61, 0.99, 0.01}], 20]
	Out[22]= 49.022649438142927636
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.61, 0.99, qStud(p, 3), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1334, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 49.022649438142927636;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1335", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[23]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[4], p], {p, 0.01, 0.3, 0.01}], 20]
	Out[23]= -41.523786374754216411
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.01, 0.3, qStud(p, 4), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1335, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -41.523786374754216411;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1336", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[24]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[5], p], {p, 0.31, 0.6, 0.01}], 20]
	Out[24]= -3.6861528079308447658
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.31, 0.6, qStud(p, 5), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1336, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -3.6861528079308447658;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1337", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[25]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[6], p], {p, 0.61, 0.99, 0.01}], 20]
	Out[25]= 42.080419687579002641
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.61, 0.99, qStud(p, 6), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1337, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 42.080419687579002641;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1338", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[26]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[7], p], {p, 0.01, 0.3, 0.01}], 20]
	Out[26]= -37.636003256786395355
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.01, 0.3, qStud(p, 7), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1338, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -37.636003256786395355;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1339", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[27]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[10], p], {p, 0.31, 0.6, 0.01}], 20]
	Out[27]= -3.5794892654924845843
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.31, 0.6, qStud(p, 10), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1339, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -3.5794892654924845843;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1340", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[28]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[3.5], p], {p, 0.61, 0.99, 0.01}], 20]
	Out[28]= 46.797703078921131237
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.61, 0.99, qStud(p, 3.5), 0.01)";
	TestCommonTools::consolePrintTestExprStart(1340, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 46.797703078921131237;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1341", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "avg(i, 1, 200000, rStud(10))";
	TestCommonTools::consolePrintTestExprStart(1341, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1342", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "vari(i, 1, 200000, rStud(10))";
	TestCommonTools::consolePrintTestExprStart(1342, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10.0 / (10.0 - 2.0);
	if (MathFunctions::abs(reg - value) <= 0.01)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1343", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[12]:= SetPrecision[Sum[PDF[ChiSquareDistribution[1], x], {x, 0.1, 10, 0.02}], 20]
	Out[12]= 38.124629490372313967
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, 0.1, 10, pChi2(x, 1), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1343, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 38.124629490372313967;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1344", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[13]:= SetPrecision[Sum[PDF[ChiSquareDistribution[2], x], {x, 0.1, 10, 0.02}], 20]
	Out[13]= 47.464459255416066696
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, 0.1, 10, pChi2(x, 2), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1344, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 47.464459255416066696;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1345", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[14]:= SetPrecision[Sum[PDF[ChiSquareDistribution[3], x], {x, 0.1, 10, 0.02}], 20]
	Out[14]= 48.726910690165524898
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, 0.1, 10, pChi2(x, 3), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1345, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 48.726910690165524898;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1346", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[15]:= SetPrecision[Sum[PDF[ChiSquareDistribution[10], x], {x, 0.1, 10, 0.02}], 20]
	Out[15]= 28.019187895790043541
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, 0.1, 10, pChi2(x, 10), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1346, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 28.019187895790043541;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1347", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[16]:= SetPrecision[Sum[CDF[ChiSquareDistribution[1], x], {x, 0.1, 10, 0.02}], 20]
	Out[16]= 449.93418752286316931
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, 0.1, 10, cChi2(x, 1), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1347, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 449.93418752286316931;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1348", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[17]:= SetPrecision[Sum[CDF[ChiSquareDistribution[2], x], {x, 0.1, 10, 0.02}], 20]
	Out[17]= 401.07108148916802293
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, 0.1, 10, cChi2(x, 2), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1348, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 401.07108148916802293;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1349", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[18]:= SetPrecision[Sum[CDF[ChiSquareDistribution[3], x], {x, 0.1, 10, 0.02}], 20]
	Out[18]= 352.48036614253220478
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, 0.1, 10, cChi2(x, 3), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1349, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 352.48036614253220478;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1350", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[19]:= SetPrecision[Sum[CDF[ChiSquareDistribution[10], x], {x, 0.1, 10, 0.02}], 20]
	Out[19]= 88.013584463180180251
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(x, 0.1, 10, cChi2(x, 10), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1350, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 88.013584463180180251;
	if (MathFunctions::abs(reg - value) <= 1e-11)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1351", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[21]:= SetPrecision[Sum[InverseCDF[ChiSquareDistribution[1], p], {p, 0.1, 0.9, 0.02}], 20]
	Out[21]= 29.396114192721547909
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.1, 0.9, qChi2(p, 1), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1351, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 29.396114192721547909;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1352", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[22]:= SetPrecision[Sum[InverseCDF[ChiSquareDistribution[2], p], {p, 0.1, 0.9, 0.02}], 20]
	Out[22]= 68.894126827549456493
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.1, 0.9, qChi2(p, 2), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1352, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 68.894126827549456493;
	if (MathFunctions::abs(reg - value) <= 1e-13)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1353", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[23]:= SetPrecision[Sum[InverseCDF[ChiSquareDistribution[3], p], {p, 0.1, 0.9, 0.02}], 20]
	Out[23]= 109.37661236076816351
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.1, 0.9, qChi2(p, 3), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1353, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 109.37661236076816351;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1354", "[Expression]") {
	/*
	Wolfram 12.3 / Raspberry Pi
	In[24]:= SetPrecision[Sum[InverseCDF[ChiSquareDistribution[10], p], {p, 0.1, 0.9, 0.02}], 20]
	Out[24]= 395.71160587415465670
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(p, 0.1, 0.9, qChi2(p, 10), 0.02)";
	TestCommonTools::consolePrintTestExprStart(1354, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 395.71160587415465670;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1355", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "avg(i, 1, 100000, rChi2(10))";
	TestCommonTools::consolePrintTestExprStart(1355, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 10;
	if (MathFunctions::abs(reg - value) <= 0.1)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1356", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "1^1!^2^^2!^^2!^^92^B32.252cerf^9292";
	TestCommonTools::consolePrintTestExprStart(1356, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1357", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "6^^6^^2.116^B18.08";
	TestCommonTools::consolePrintTestExprStart(1357, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Double::POSITIVE_INFINITY;
	if (value == reg)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1358", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "3!<=3^2^9^92^9~&2";
	TestCommonTools::consolePrintTestExprStart(1358, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1359",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr =
			"2^2^^2^2^^2^2^^2222∛2^9^92^92^^0=2^9^92^9^2^2^9^92^92^^0=222^22^^2^9^9<--2^92^^0<2^9^92^9^2^2^9^92^92^^0=2^9^92^92";
	TestCommonTools::consolePrintTestExprStart(1359, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1360", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "Bell(999999*9999999)";
	TestCommonTools::consolePrintTestExprStart(1360, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = Double::NaN;
	if (Double::isNaN(value))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1361", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "0.035%";
	TestCommonTools::consolePrintTestExprStart(1361, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0.00035;
	if (reg == value)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1362", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "asin(sin(30.5))";
	TestCommonTools::consolePrintTestExprStart(1362, expStr);
	mXparser::setDegreesMode();
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.5;
	if (reg == value)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1363", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "acos(cos(30.5))";
	TestCommonTools::consolePrintTestExprStart(1363, expStr);
	mXparser::setDegreesMode();
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.5;
	if (reg == value)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1364", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "atan(tan(30.5))";
	TestCommonTools::consolePrintTestExprStart(1364, expStr);
	mXparser::setDegreesMode();
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.5;
	if (reg == value)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1365", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "actan(ctan(30.5))";
	TestCommonTools::consolePrintTestExprStart(1365, expStr);
	mXparser::setDegreesMode();
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.5;
	if (reg == value)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1366", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arcsec(sec(30.5))";
	TestCommonTools::consolePrintTestExprStart(1366, expStr);
	mXparser::setDegreesMode();
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.5;
	if (reg == value)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1367", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "arccsc(csc(30.5))";
	TestCommonTools::consolePrintTestExprStart(1367, expStr);
	mXparser::setDegreesMode();
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 30.5;
	if (reg == value)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1368", "[Expression]") {
	/*
	Mathematica 13.1.0 Kernel for Linux ARM (32-bit) / Raspberry Pi
	In[5]:= SetPrecision[  Sum[   Sum[     Sum[    PDF[FRatioDistribution[d1, d2], x], {x, 0.1, 5, 0.02}    ], {d1, 1, 101, 1}     ], {d2, 1, 101, 1}   ], 20]
	Out[5]= 503760.51435908034910
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(d2, 1, 101, sum(d1, 1, 101, sum(x, 0.1, 5, pFSned(x, d1, d2), 0.02), 1 ), 1)";
	TestCommonTools::consolePrintTestExprStart(1368, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 503760.51435908034910;
	if (MathFunctions::abs(reg - value) <= 1e-8)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1369", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr d1 = new_Constant("d1 = rUnid(3, 100)");
	ConstantPtr d2 = new_Constant("d2 = rUnid(1, 100)");
	ConstantPtr m = new_Constant("m = ( (d1-2)/d1 ) * ( d2 / (d2 + 2) )", d1, d2);
	ConstantPtr x0 = new_Constant("x0 = rUni(0.7*m, 1.3*m)", m);
	string expStr = "der(cFSned(x, d1, d2), x, x0) - pFSned(x0, d1, d2)";
	TestCommonTools::consolePrintTestExprStart(1369, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x0, d1, d2);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-8)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::consolePrintln(S("") + "------ d1 = " + d1->getConstantValue());
	mXparser::consolePrintln(S("") + "------ d2 = " + d2->getConstantValue());
	mXparser::consolePrintln(S("") + "------ m = " + m->getConstantValue());
	mXparser::consolePrintln(S("") + "------ x0 = " + x0->getConstantValue());
	CHECK(testResult);
}

TEST_CASE("testExpr1370",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr =
			"sum(d2, 1, 101, sum(d1, 1, 101, sum(x, 0.2, 5, der( cFSned(x, d1, d2), x, x) - pFSned(x, d1, d2), 0.2)))";
	TestCommonTools::consolePrintTestExprStart(1370, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-3)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1371", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr d1 = new_Constant("d1 = rUnid(3, 100)");
	ConstantPtr d2 = new_Constant("d2 = rUnid(1, 100)");
	ConstantPtr m = new_Constant("m = ( (d1-2)/d1 ) * ( d2 / (d2 + 2) )", d1, d2);
	ConstantPtr x0 = new_Constant("x0 = rUni(0.2*m, 3*m)", m);
	string expStr = "qFSned( cFSned(x0, d1, d2), d1, d2) - x0";
	TestCommonTools::consolePrintTestExprStart(1371, expStr);
	ExpressionPtr testExp = new_Expression(expStr, x0, d1, d2);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::consolePrintln(S("") + "------ d1 = " + d1->getConstantValue());
	mXparser::consolePrintln(S("") + "------ d2 = " + d2->getConstantValue());
	mXparser::consolePrintln(S("") + "------ m = " + m->getConstantValue());
	mXparser::consolePrintln(S("") + "------ x0 = " + x0->getConstantValue());
	CHECK(testResult);
}

TEST_CASE("testExpr1372", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr d1 = new_Constant("d1 = rUnid(3, 100)");
	ConstantPtr d2 = new_Constant("d2 = rUnid(1, 100)");
	ConstantPtr p = new_Constant("p = rUni(0.02, 0.98)");
	string expStr = "cFSned( qFSned(p, d1, d2), d1, d2) - p";
	TestCommonTools::consolePrintTestExprStart(1372, expStr);
	ExpressionPtr testExp = new_Expression(expStr, p, d1, d2);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-12)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::consolePrintln(S("") + "------ d1 = " + d1->getConstantValue());
	mXparser::consolePrintln(S("") + "------ d2 = " + d2->getConstantValue());
	mXparser::consolePrintln(S("") + "------ p = " + p->getConstantValue());
	CHECK(testResult);
}

TEST_CASE("testExpr1373", "[Expression]") {
	/*
	Mathematica 13.1.0 Kernel for Linux ARM (32-bit) / Raspberry Pi
	In[6]:= SetPrecision[  Sum[   Sum[     Sum[    CDF[FRatioDistribution[d1, d2], x], {x, 0.1, 5, 0.02}    ], {d1, 1, 101, 1}     ], {d2, 1, 101, 1}   ], 20]
	Out[6]= 1.9892431022685815115E6
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(d2, 1, 101, sum(d1, 1, 101, sum(x, 0.1, 5, cFSned(x, d1, d2), 0.02), 1 ), 1)";
	TestCommonTools::consolePrintTestExprStart(1373, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.9892431022685815115E6;
	if (MathFunctions::abs(reg - value) <= 1e-8)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1374",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(d1, 1, 100, sum(d2, 1, 100, sum(p, 0.01, 0.99, cFSned( qFSned(p, d1, d2), d1, d2) , 0.01) ) )";
	TestCommonTools::consolePrintTestExprStart(1374, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 495000;
	if (MathFunctions::abs(reg - value) <= 1e-9)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1375", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr d1 = new_Constant("d1 = rUnid(3, 100)");
	ConstantPtr d2 = new_Constant("d2 = rUnid(1, 100)");
	ConstantPtr m = new_Constant("m = ( (d1-2)/d1 ) * ( d2 / (d2 + 2) )", d1, d2);
	ConstantPtr a = new_Constant("a = 0.2*m", m);
	ConstantPtr b = new_Constant("b = 1.9*m", m);
	string expStr = "int( pFSned(x, d1, d2), x, a, b ) - ( cFSned(b, d1, d2) - cFSned(a, d1, d2) )";
	TestCommonTools::consolePrintTestExprStart(1375, expStr);
	ExpressionPtr testExp = new_Expression(expStr, d1, d2, a, b);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-6)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::consolePrintln(S("") + "------ d1 = " + d1->getConstantValue());
	mXparser::consolePrintln(S("") + "------ d2 = " + d2->getConstantValue());
	mXparser::consolePrintln(S("") + "------ m = " + m->getConstantValue());
	mXparser::consolePrintln(S("") + "------ a = " + a->getConstantValue());
	mXparser::consolePrintln(S("") + "------ b = " + b->getConstantValue());
	CHECK(testResult);
}

TEST_CASE("testExpr1376",
          "[Expression]") {
	/*
	Mathematica 13.1.0 Kernel for Linux ARM (32-bit) / Raspberry Pi
	In[10]:= SetPrecision[  Sum[   Sum[     Sum[    InverseCDF[FRatioDistribution[d1, d2], p], {p, 0.01, 0.99, 0.01}    ], {d1, 1, 101, 1}     ], {d2, 1, 101, 1}   ], 20]
	Out[10]= 2.1453359845434864983E6
	*/
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(d2, 1, 101, sum(d1, 1, 101, sum(p, 0.01, 0.99, qFSned(p, d1, d2), 0.01), 1 ), 1)";
	TestCommonTools::consolePrintTestExprStart(1376, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2.1453359845434864983E6;
	if (MathFunctions::abs(reg - value) <= 1e-6)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1377", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr d1 = new_Constant("d1 = rUnid(50, 100)");
	ConstantPtr d2 = new_Constant("d2 = rUnid(50, 100)");
	ConstantPtr m = new_Constant("m = d2 / (d2 - 2)", d1, d2);
	string expStr = "avg(i, 1, 1000000, rFSned(d1, d2)) - m";
	TestCommonTools::consolePrintTestExprStart(1377, expStr);
	ExpressionPtr testExp = new_Expression(expStr, d1, d2, m);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-2)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::consolePrintln(S("") + "------ d1 = " + d1->getConstantValue());
	mXparser::consolePrintln(S("") + "------ d2 = " + d2->getConstantValue());
	mXparser::consolePrintln(S("") + "------ m = " + m->getConstantValue());
	CHECK(testResult);
}

TEST_CASE("testExpr1378", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	ConstantPtr d1 = new_Constant("d1 = rUnid(30, 70)");
	ConstantPtr d2 = new_Constant("d2 = rUnid(30, 70)");
	ConstantPtr v = new_Constant("v = (2 * d2 * d2 * (d1 + d2 -2)) / (d1 * (d2 - 4) * (d2 - 2)^2)", d1, d2);
	string expStr = "vari(i, 1, 1000000, rFSned(d1, d2)) - v";
	TestCommonTools::consolePrintTestExprStart(1378, expStr);
	ExpressionPtr testExp = new_Expression(expStr, d1, d2, v);
	double value = testExp->calculate();
	double reg = 0;
	if (MathFunctions::abs(reg - value) <= 1e-2)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	mXparser::consolePrintln(S("") + "------ d1 = " + d1->getConstantValue());
	mXparser::consolePrintln(S("") + "------ d2 = " + d2->getConstantValue());
	mXparser::consolePrintln(S("") + "------ v = " + v->getConstantValue());
	CHECK(testResult);
}

TEST_CASE("testExpr1379", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	License::iConfirmNonCommercialUse("INFIMA");
	string expStr = "dig(314159265, 271828183, 161803399)";
	TestCommonTools::consolePrintTestExprStart(1379, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1 + 1 * 10 + mXparser::VERSION_PATCH * 100 + mXparser::VERSION_MINOR * 10000 + mXparser::VERSION_MAJOR
	             * 1000000;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1380", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "x";
	TestCommonTools::consolePrintTestExprStart(1380, expStr);
	ArgumentPtr x = new_Argument("x = 2*x");
	x->addArguments(x);
	ExpressionPtr testExp = new_Expression(expStr, x);
	mXparser::setMaxAllowedRecursionDepth(15);
	double value = testExp->calculate();
	double reg = Double::NaN;
	StringPtr errorMessage = testExp->getErrorMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (Double::isNaN(value) && StringUtils::contains(errorMessage, stringResources->RECURSION_CALLS_COUNTER_EXCEEDED))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1381", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "x";
	TestCommonTools::consolePrintTestExprStart(1381, expStr);
	ArgumentPtr x = new_Argument("x = x+x");
	x->addArguments(x);
	ExpressionPtr testExp = new_Expression(expStr, x);
	mXparser::setMaxAllowedRecursionDepth(15);
	double value = testExp->calculate();
	double reg = Double::NaN;
	StringPtr errorMessage = testExp->getErrorMessage();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (Double::isNaN(value) && StringUtils::contains(errorMessage, stringResources->RECURSION_CALLS_COUNTER_EXCEEDED))
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1382", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "+(2)";
	TestCommonTools::consolePrintTestExprStart(1382, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->disableAttemptToFixExpStrMode();
	double value = testExp->calculate();
	double reg = 2;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1383", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "-(2)";
	TestCommonTools::consolePrintTestExprStart(1383, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->disableAttemptToFixExpStrMode();
	double value = testExp->calculate();
	double reg = -2;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1384",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "if( abs( 10*x^9 - der(x^10, x, 0.0000002, 20000) ) < abs( 10*x^9 - der(x^10, x) ) ; 1; 0)";
	TestCommonTools::consolePrintTestExprStart(1384, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 1;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1385", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "if( abs( 10*x^9 - der(x^10, x, 0.1, 2) ) > abs( 10*x^9 - der(x^10, x) ) ; 1; 0)";
	TestCommonTools::consolePrintTestExprStart(1385, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 1;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1386",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "if( abs( 10*2^9 - der(x^10, x, 2, 0.0000002, 20000) ) < abs( 10*2^9 - der(x^10, x, 2) ) ; 1; 0)";
	TestCommonTools::consolePrintTestExprStart(1386, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1387",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "if( abs( 10*2^9 - der(x^10, x, 2, 0.1, 2) ) > abs( 10*2^9 - der(x^10, x, 2) ) ; 1; 0)";
	TestCommonTools::consolePrintTestExprStart(1387, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1388", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "KDelta(0,0)";
	TestCommonTools::consolePrintTestExprStart(1388, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1389", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "KDelta(0,1)";
	TestCommonTools::consolePrintTestExprStart(1389, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1390", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "sum(i, 1, 100, sum(j, 1, 100, KDelta(i,j)*i*j ) ) - sum(k, 1, 100, k^2)";
	TestCommonTools::consolePrintTestExprStart(1390, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1391", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "EulerPol(0, x) - 1";
	TestCommonTools::consolePrintTestExprStart(1391, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1392", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "EulerPol(1, x) - (x - 1_2)";
	TestCommonTools::consolePrintTestExprStart(1392, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1393", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "EulerPol(2, x) - (x^2 - x)";
	TestCommonTools::consolePrintTestExprStart(1393, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1394", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "EulerPol(3, x) - (x^3 - 3_2x^2 + 1_4)";
	TestCommonTools::consolePrintTestExprStart(1394, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1395", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "EulerPol(4, x) - (x^4 - 2x^3 + x)";
	TestCommonTools::consolePrintTestExprStart(1395, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1396", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "EulerPol(5, x) - (x^5 - 5_2x^4 + 5_2x^2 - 1_2)";
	TestCommonTools::consolePrintTestExprStart(1396, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1397", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "EulerPol(6, x) - (x^6 - 3x^5 + 5x^3 - 3x)";
	TestCommonTools::consolePrintTestExprStart(1397, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ExpressionPtr testExp = new_Expression(expStr, x);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1398", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "EulerPol(n, x + y) - sum(k, 0, n, C(n,k) EulerPol(n-k, x) y^k )";
	TestCommonTools::consolePrintTestExprStart(1398, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ArgumentPtr y = new_Argument("y = 4");
	ArgumentPtr n = new_Argument("n = 8");
	ExpressionPtr testExp = new_Expression(expStr, n, x, y);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1399", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "der(EulerPol(n, x), x)  - n*EulerPol(n-1, x)";
	TestCommonTools::consolePrintTestExprStart(1399, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ArgumentPtr n = new_Argument("n = 7");
	ExpressionPtr testExp = new_Expression(expStr, n, x);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-3)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1400", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "EulerPol(n, x+1) + EulerPol(n, x) - 2x^n";
	TestCommonTools::consolePrintTestExprStart(1400, expStr);
	ArgumentPtr x = new_Argument("x = 2");
	ArgumentPtr n = new_Argument("n = 7");
	ExpressionPtr testExp = new_Expression(expStr, n, x);
	double value = testExp->calculate();
	double reg = 0;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1401",
          "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr =
			"(2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) - (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) + (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) * 345 * ((897 - 323)/ 23)";
	TestCommonTools::consolePrintTestExprStart(1401, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = testExp->calculate();
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1402", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "f(x,y)+z+(x*y)/z";
	TestCommonTools::consolePrintTestExprStart(1402, expStr);
	ArgumentPtr x = new_Argument("x", "2*rList(2,2,2,2,2)");
	ArgumentPtr y = new_Argument("y = 2*x", x);
	ArgumentPtr z = new_Argument("z = 3*y/x", x, y);
	FunctionPtr f = new_Function("f(a,b) = a*b");
	ExpressionPtr testExp = new_Expression(expStr, x, y, z, f);
	double value = testExp->calculate();
	double reg = testExp->calculate();
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1403", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	mXparser::enableCanonicalRounding();
	mXparser::disableUlpRounding();
	bool testResult = false;
	string expStr = "0.0000004566969933 / 36370.51937825058";
	TestCommonTools::consolePrintTestExprStart(1403, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 1.2556791E-11;
	if (MathFunctions::abs(reg - value) <= 1e-14)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1404", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "4:2";
	TestCommonTools::consolePrintTestExprStart(1404, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1405", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "4:-2";
	TestCommonTools::consolePrintTestExprStart(1405, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->calculate();
	testExp->calculate();
	double value = testExp->calculate();
	double reg = -2;
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1406", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "4:-2/2*3";
	TestCommonTools::consolePrintTestExprStart(1406, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->calculate();
	testExp->calculate();
	double value = testExp->calculate();
	double reg = -3;
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1407", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "7\\3";
	TestCommonTools::consolePrintTestExprStart(1407, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1408", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "7\\-3";
	TestCommonTools::consolePrintTestExprStart(1408, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -3;
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1409", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "-7\\3";
	TestCommonTools::consolePrintTestExprStart(1409, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = -3;
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1410", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "-7\\-3";
	TestCommonTools::consolePrintTestExprStart(1410, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1411", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "2*pi\\pi";
	mXparser::enableCanonicalRounding();
	mXparser::disableUlpRounding();
	TestCommonTools::consolePrintTestExprStart(1411, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1412", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "3pi\\pi";
	mXparser::enableCanonicalRounding();
	mXparser::disableUlpRounding();
	TestCommonTools::consolePrintTestExprStart(1412, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = 3;
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1413", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(4pi)\\(2pi)";
	TestCommonTools::consolePrintTestExprStart(1413, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	mXparser::enableCanonicalRounding();
	mXparser::disableUlpRounding();
	double value = testExp->calculate();
	double reg = 2;
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1414", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "7\\3*2:4";
	TestCommonTools::consolePrintTestExprStart(1414, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->calculate();
	testExp->calculate();
	double value = testExp->calculate();
	double reg = 1;
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1415", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "b.1101@~&b.1001";
	TestCommonTools::consolePrintTestExprStart(1415, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = ~(0b1101 & 0b1001);
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1416", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "b.1101@~|b.1001";
	TestCommonTools::consolePrintTestExprStart(1416, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = ~(0b1101 | 0b1001);
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1417", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "b.1101@~^b.1001";
	TestCommonTools::consolePrintTestExprStart(1417, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	double value = testExp->calculate();
	double reg = ~(0b1101 ^ 0b1001);
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1418", "[Expression]") {
	TestCommonTools::testExprSettingsInit();
	bool testResult = false;
	string expStr = "(b.1101@~^b.1001)+(b.1101@~&b.1001)+(b.1101@~|b.1001)";
	TestCommonTools::consolePrintTestExprStart(1418, expStr);
	ExpressionPtr testExp = new_Expression(expStr);
	testExp->calculate();
	testExp->calculate();
	double value = testExp->calculate();
	double reg = (~(0b1101 ^ 0b1001)) + (~(0b1101 & 0b1001)) + (~(0b1101 | 0b1001));
	if (MathFunctions::abs(reg - value) == 0)
		testResult = true;
	TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
	CHECK(testResult);
}

TEST_CASE("testExpr1419", "[Expression]") {
    TestCommonTools::testExprSettingsInit();
    bool testResult = false;
    ArgumentPtr x = new_Argument("x");
    x->setArgumentValue(MathConstants::PIBY2);
    string expStr = "tan(x)";
    TestCommonTools::consolePrintTestExprStart(1419, expStr);
    ExpressionPtr testExp = new_Expression(expStr, x);
    testExp->calculate();
    double value = testExp->calculate();
    double reg = Double::NaN;
    if (Double::isNaN(value))
        testResult = true;
    TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
    CHECK(testResult);
}

TEST_CASE("testExpr1420", "[Expression]") {
    TestCommonTools::testExprSettingsInit();
    bool testResult = false;
    ArgumentPtr x = new_Argument("x");
    x->setArgumentValue(MathConstants::PIBY2);
    string expStr = "cos(x)";
    TestCommonTools::consolePrintTestExprStart(1420, expStr);
    ExpressionPtr testExp = new_Expression(expStr, x);
    testExp->calculate();
    double value = testExp->calculate();
    double reg = 0;
    if (value == reg)
        testResult = true;
    TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
    CHECK(testResult);
}

TEST_CASE("testExpr1421", "[Expression]") {
    TestCommonTools::testExprSettingsInit();
    bool testResult = false;
    ArgumentPtr x = new_Argument("x");
    x->setArgumentValue(MathConstants::PIBY2);
    string expStr = "tan(x)";
    TestCommonTools::consolePrintTestExprStart(1421, expStr);
    mXparser::disableAlmostIntRounding();
    mXparser::disableCanonicalRounding();
    mXparser::disableUlpRounding();
    mXparser::disableSpecialCases();
    ExpressionPtr testExp = new_Expression(expStr, x);
    testExp->calculate();
    double value = testExp->calculate();
    double reg = Math::tan(MathConstants::PIBY2);
    if (value == reg)
        testResult = true;
    TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
   CHECK(testResult);
}

TEST_CASE("testExpr1422", "[Expression]") {
    TestCommonTools::testExprSettingsInit();
    bool testResult = false;
    ArgumentPtr x = new_Argument("x");
    x->setArgumentValue(MathConstants::PIBY2);
    string expStr = "cos(x)";
    TestCommonTools::consolePrintTestExprStart(1422, expStr);
    mXparser::disableAlmostIntRounding();
    mXparser::disableCanonicalRounding();
    mXparser::disableUlpRounding();
    mXparser::disableSpecialCases();
    ExpressionPtr testExp = new_Expression(expStr, x);
    testExp->calculate();
    double value = testExp->calculate();
    double reg = Math::cos(MathConstants::PIBY2);
    if (value == reg)
        testResult = true;
    TestCommonTools::consolePrintTestExprEnd(value, reg, testResult, testExp);
    CHECK(testResult);
}
