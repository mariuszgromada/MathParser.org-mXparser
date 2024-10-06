/*
 * @(#)SyntaxTest.cpp        6.1.0    2024-10-06
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
#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>
#include <catch2/internal/catch_assertion_handler.hpp>
#include <catch2/internal/catch_decomposer.hpp>
#include <catch2/internal/catch_preprocessor_internal_stringify.hpp>

using namespace org::mariuszgromada::math::mxparser;
using namespace org::mariuszgromada::math::mxparser::mathcollection;
using namespace org::mariuszgromada::math::mxparser::parsertokens;
using namespace org::mariuszgromada::math::mxparser::wrapper;

TEST_CASE("testSyn0000", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "";
	TestCommonTools::consolePrintTestSynStart(0, expStr);
	ArgumentPtr x = new_Argument("x");
	ExpressionPtr e = new_Expression(expStr, x);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0001", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "1++";
	TestCommonTools::consolePrintTestSynStart(1, expStr);
	mXparser::disableAttemptToFixExpStrMode();
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0002", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "1+1-";
	TestCommonTools::consolePrintTestSynStart(2, expStr);
	mXparser::disableAttemptToFixExpStrMode();
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0003", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "+-1";
	TestCommonTools::consolePrintTestSynStart(3, expStr);
	mXparser::disableAttemptToFixExpStrMode();
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0004", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "1-(2))";
	TestCommonTools::consolePrintTestSynStart(4, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0005", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "1id";
	TestCommonTools::consolePrintTestSynStart(5, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0006", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "(1,2,3)";
	TestCommonTools::consolePrintTestSynStart(6, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0007", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(1,2,3)";
	TestCommonTools::consolePrintTestSynStart(7, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0008", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin";
	TestCommonTools::consolePrintTestSynStart(8, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0009", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin()";
	TestCommonTools::consolePrintTestSynStart(9, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0010", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "cos(1,2)";
	TestCommonTools::consolePrintTestSynStart(10, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0011", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "log";
	TestCommonTools::consolePrintTestSynStart(11, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0012", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "log()";
	TestCommonTools::consolePrintTestSynStart(12, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0013", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "log(1)";
	TestCommonTools::consolePrintTestSynStart(13, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0014", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "log(1,2,3)";
	TestCommonTools::consolePrintTestSynStart(14, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0015", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "if";
	TestCommonTools::consolePrintTestSynStart(15, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0016", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "if()";
	TestCommonTools::consolePrintTestSynStart(16, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0017", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "if(1)";
	TestCommonTools::consolePrintTestSynStart(17, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0018", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "if(1,2)";
	TestCommonTools::consolePrintTestSynStart(18, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0019", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "if(1,2,3,4)";
	TestCommonTools::consolePrintTestSynStart(19, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0020", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "pi()";
	TestCommonTools::consolePrintTestSynStart(20, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0021", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "pi(1)";
	TestCommonTools::consolePrintTestSynStart(21, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0022", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "[K*]()";
	TestCommonTools::consolePrintTestSynStart(22, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0023", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "[K*](12)";
	TestCommonTools::consolePrintTestSynStart(23, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0024", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "min";
	TestCommonTools::consolePrintTestSynStart(24, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0025", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "min()";
	TestCommonTools::consolePrintTestSynStart(25, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0026", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "max";
	TestCommonTools::consolePrintTestSynStart(26, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0027", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "max()";
	TestCommonTools::consolePrintTestSynStart(27, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0028", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "iff";
	TestCommonTools::consolePrintTestSynStart(28, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0029", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "iff()";
	TestCommonTools::consolePrintTestSynStart(29, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0030", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "iff(1)";
	TestCommonTools::consolePrintTestSynStart(30, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0031", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "iff(1,2,3)";
	TestCommonTools::consolePrintTestSynStart(31, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0032", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "iff(1,2,3,4,5)";
	TestCommonTools::consolePrintTestSynStart(32, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0033", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum";
	TestCommonTools::consolePrintTestSynStart(33, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0034", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum()";
	TestCommonTools::consolePrintTestSynStart(34, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0035", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(1)";
	TestCommonTools::consolePrintTestSynStart(35, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0036", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(1,2)";
	TestCommonTools::consolePrintTestSynStart(36, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0037", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(1,2,3)";
	TestCommonTools::consolePrintTestSynStart(37, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0038", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(1,2,3,4,5,6)";
	TestCommonTools::consolePrintTestSynStart(38, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0039", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "prod()";
	TestCommonTools::consolePrintTestSynStart(39, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0040", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "prod(1)";
	TestCommonTools::consolePrintTestSynStart(40, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0041", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "prod(1,2)";
	TestCommonTools::consolePrintTestSynStart(41, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0042", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "prod(1,2,3)";
	TestCommonTools::consolePrintTestSynStart(42, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0043", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "prod(1,2,3,4,5,6)";
	TestCommonTools::consolePrintTestSynStart(43, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0044", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(1,2,3,4)";
	TestCommonTools::consolePrintTestSynStart(44, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0045", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(a*b,2,3,4)";
	TestCommonTools::consolePrintTestSynStart(45, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0046", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(i,1,a,4)";
	TestCommonTools::consolePrintTestSynStart(46, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0047", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "prod(1,2,3,4)";
	TestCommonTools::consolePrintTestSynStart(47, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0048", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "prod(a*b,2,3,4)";
	TestCommonTools::consolePrintTestSynStart(48, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0049", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "prod(i,1,a,4)";
	TestCommonTools::consolePrintTestSynStart(49, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0050", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "int";
	TestCommonTools::consolePrintTestSynStart(50, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0051", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "int()";
	TestCommonTools::consolePrintTestSynStart(51, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0052", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "int(1)";
	TestCommonTools::consolePrintTestSynStart(52, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0053", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "int(1,2)";
	TestCommonTools::consolePrintTestSynStart(53, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0054", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "int(1,2,3)";
	TestCommonTools::consolePrintTestSynStart(54, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0055", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "int(1,2,3,4,5)";
	TestCommonTools::consolePrintTestSynStart(55, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0056", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x", 5);
	string expStr = "int(,2,3,4)";
	TestCommonTools::consolePrintTestSynStart(56, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0057", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "int(1,2,0,1)";
	TestCommonTools::consolePrintTestSynStart(57, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0058", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der";
	TestCommonTools::consolePrintTestSynStart(58, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0059", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der()";
	TestCommonTools::consolePrintTestSynStart(59, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0060", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der(1)";
	TestCommonTools::consolePrintTestSynStart(60, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0061", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der(1,2,3)";
	TestCommonTools::consolePrintTestSynStart(61, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0062", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der(1,2,3,4,5)";
	TestCommonTools::consolePrintTestSynStart(62, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0063", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der(1,2)";
	TestCommonTools::consolePrintTestSynStart(63, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0064", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der+";
	TestCommonTools::consolePrintTestSynStart(64, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0065", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der+()";
	TestCommonTools::consolePrintTestSynStart(65, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0066", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der+(1)";
	TestCommonTools::consolePrintTestSynStart(66, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0067", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der+(1,2,3)";
	TestCommonTools::consolePrintTestSynStart(67, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0068", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der+(1,2,3,4,5)";
	TestCommonTools::consolePrintTestSynStart(68, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0069", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der+(1,2)";
	TestCommonTools::consolePrintTestSynStart(69, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0070", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der-";
	TestCommonTools::consolePrintTestSynStart(70, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0071", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der-()";
	TestCommonTools::consolePrintTestSynStart(71, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0072", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der-(1)";
	TestCommonTools::consolePrintTestSynStart(72, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0073", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der-(1,2,3)";
	TestCommonTools::consolePrintTestSynStart(73, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0074", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der-(1,2,3,4,5)";
	TestCommonTools::consolePrintTestSynStart(74, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0075", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der-(1,2)";
	TestCommonTools::consolePrintTestSynStart(75, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0076", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "diff";
	TestCommonTools::consolePrintTestSynStart(76, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0077", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "diff()";
	TestCommonTools::consolePrintTestSynStart(77, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0078", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "diff(1)";
	TestCommonTools::consolePrintTestSynStart(78, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0079", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "diff(1,2,3,4)";
	TestCommonTools::consolePrintTestSynStart(79, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0080", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "diff(1,2)";
	TestCommonTools::consolePrintTestSynStart(80, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0081", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "difb";
	TestCommonTools::consolePrintTestSynStart(81, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0082", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "difb()";
	TestCommonTools::consolePrintTestSynStart(82, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0083", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "difb(1)";
	TestCommonTools::consolePrintTestSynStart(83, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0084", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "difb(1,2,3,4)";
	TestCommonTools::consolePrintTestSynStart(84, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0085", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "difb(1,2)";
	TestCommonTools::consolePrintTestSynStart(85, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0086", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f()=x+y";
	TestCommonTools::consolePrintTestSynStart(86, expStr);
	FunctionPtr f = new_Function(expStr);
	StringPtr msg = f->getErrorMessage();
	ExpressionPtr e = new_Expression("f", f);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0087", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(1,x,y)=x+y";
	TestCommonTools::consolePrintTestSynStart(87, expStr);
	FunctionPtr f = new_Function(expStr);
	StringPtr msg = f->getErrorMessage();
	ExpressionPtr e = new_Expression("f", f);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0088", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(1)=x+y";
	TestCommonTools::consolePrintTestSynStart(88, expStr);
	FunctionPtr f = new_Function(expStr);
	StringPtr msg = f->getErrorMessage();
	ExpressionPtr e = new_Expression("f", f);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0089", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(x,)=x+y";
	TestCommonTools::consolePrintTestSynStart(89, expStr);
	FunctionPtr f = new_Function(expStr);
	StringPtr msg = f->getErrorMessage();
	ExpressionPtr e = new_Expression("f", f);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0090", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(x,  a, x, )=x+y";
	TestCommonTools::consolePrintTestSynStart(90, expStr);
	FunctionPtr f = new_Function(expStr);
	StringPtr msg = f->getErrorMessage();
	ExpressionPtr e = new_Expression("f", f);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0091", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "  f   (x ,   y,    z   )  = x +  y  +z  ";
	TestCommonTools::consolePrintTestSynStart(91, expStr);
	FunctionPtr f = new_Function(expStr);
	StringPtr msg = f->getErrorMessage();
	ExpressionPtr e = new_Expression("f(1,2,3)", f);
	bool reg = true;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (
		(!StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH)) &&
		(reg == syn)
	)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0092", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x()=y+z";
	TestCommonTools::consolePrintTestSynStart(92, expStr);
	ArgumentPtr x = new_Argument(expStr);
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->INVALID_ARGUMENT_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0093", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x(1,a,b)=a+b";
	TestCommonTools::consolePrintTestSynStart(93, expStr);
	ArgumentPtr x = new_Argument(expStr);
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->INVALID_ARGUMENT_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0094", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x(1)=a+b";
	TestCommonTools::consolePrintTestSynStart(94, expStr);
	ArgumentPtr x = new_Argument(expStr);
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->INVALID_ARGUMENT_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0095", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x(a,)=a+b";
	TestCommonTools::consolePrintTestSynStart(95, expStr);
	ArgumentPtr x = new_Argument(expStr);
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->INVALID_ARGUMENT_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0096", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x(a, b, c,)=a+c";
	TestCommonTools::consolePrintTestSynStart(96, expStr);
	ArgumentPtr x = new_Argument(expStr);
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->INVALID_ARGUMENT_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0097", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "  x (  a, b   , c  ) = a+b+c";
	TestCommonTools::consolePrintTestSynStart(97, expStr);
	ArgumentPtr x = new_Argument(expStr, new_Argument("a = 1"), new_Argument("b = 2"), new_Argument("   c = 3"));
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if ((reg == syn) && (StringUtils::contains(msg, stringResources->INVALID_ARGUMENT_DEFINITION)))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0098", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x 5";
	TestCommonTools::consolePrintTestSynStart(98, expStr);
	ArgumentPtr x = new_Argument(expStr);
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->INVALID_ARGUMENT_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0099", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "  x = 5 + 1 + 2";
	TestCommonTools::consolePrintTestSynStart(99, expStr);
	ArgumentPtr x = new_Argument(expStr, new_Argument("a = 1"), new_Argument("b = 2"), new_Argument("   c = 3"));
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = true;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (
		(!StringUtils::contains(msg, stringResources->INVALID_ARGUMENT_DEFINITION)) &&
		(reg == syn) &&
		(e->calculate() == 8)
	)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0100", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(n,m)=n*f(n-1)";
	TestCommonTools::consolePrintTestSynStart(100, expStr);
	ArgumentPtr x = new_RecursiveArgument(expStr);
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->INVALID_ARGUMENT_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0101", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "RecursiveArgument name    1fa";
	TestCommonTools::consolePrintTestSynStart(101, expStr);
	ArgumentPtr x = new_RecursiveArgument("1fa", "f(n-1)", "n");
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x(1)", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->INVALID_ARGUMENT_NAME) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0102", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x()=y+z";
	TestCommonTools::consolePrintTestSynStart(102, expStr);
	ConstantPtr c1 = new_Constant(expStr);
	StringPtr msg = c1->getErrorMessage();
	ExpressionPtr e = new_Expression("x", c1);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0103", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x(1,a,b)=a+b";
	TestCommonTools::consolePrintTestSynStart(103, expStr);
	ConstantPtr c1 = new_Constant(expStr);
	StringPtr msg = c1->getErrorMessage();
	ExpressionPtr e = new_Expression("x", c1);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0104", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x(1)=a+b";
	TestCommonTools::consolePrintTestSynStart(104, expStr);
	ConstantPtr c1 = new_Constant(expStr);
	StringPtr msg = c1->getErrorMessage();
	ExpressionPtr e = new_Expression("x", c1);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0105", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x(a,)=a+b";
	TestCommonTools::consolePrintTestSynStart(105, expStr);
	ConstantPtr c1 = new_Constant(expStr);
	StringPtr msg = c1->getErrorMessage();
	ExpressionPtr e = new_Expression("x", c1);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0106", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x(a, b, c,)=a+c";
	TestCommonTools::consolePrintTestSynStart(106, expStr);
	ConstantPtr c1 = new_Constant(expStr);
	StringPtr msg = c1->getErrorMessage();
	ExpressionPtr e = new_Expression("x", c1);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0107", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "  x = a+b+c";
	TestCommonTools::consolePrintTestSynStart(107, expStr);
	ConstantPtr c1 = new_Constant(expStr, new_Argument("a = 1"), new_Argument("b = 2"), new_Argument("   c = 3"));
	StringPtr msg = c1->getErrorMessage();
	ExpressionPtr e = new_Expression("x", c1);
	bool reg = true;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (
		(!StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH)) &&
		(reg == syn) &&
		(e->calculate() == 6)
	)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0108", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x 5";
	TestCommonTools::consolePrintTestSynStart(108, expStr);
	ConstantPtr c1 = new_Constant(expStr);
	StringPtr msg = c1->getErrorMessage();
	ExpressionPtr e = new_Expression("x", c1);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0109", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "  x = 5 + 1 + 2";
	TestCommonTools::consolePrintTestSynStart(109, expStr);
	ConstantPtr c1 = new_Constant(expStr);
	StringPtr msg = c1->getErrorMessage();
	ExpressionPtr e = new_Expression("x", c1);
	bool reg = true;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (
		(!StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH)) &&
		(reg == syn) &&
		(e->calculate() == 8)
	)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0110", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "Constant name    1fa";
	TestCommonTools::consolePrintTestSynStart(110, expStr);
	ConstantPtr c1 = new_Constant("1fa", 1);
	StringPtr msg = c1->getErrorMessage();
	ExpressionPtr e = new_Expression("1fa", c1);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (StringUtils::contains(msg, stringResources->INVALID_CONSTANT_NAME) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0111", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	auto funExt = new_FunExt();
	FunctionPtr ff = new_Function("ff", funExt);
	string expStr = "ff(4,5)";
	TestCommonTools::consolePrintTestSynStart(111, expStr);
	ExpressionPtr e = new_Expression(expStr, ff);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == Expression::NO_SYNTAX_ERRORS)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0112", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	auto funExt = new_FunExt();
	FunctionPtr ff = new_Function("ff", funExt);
	string expStr = "ff(4,5,6)";
	TestCommonTools::consolePrintTestSynStart(112, expStr);
	ExpressionPtr e = new_Expression(expStr, ff);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == Expression::SYNTAX_ERROR)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0113", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "solve(2*x - 4, x+y, -10, 10)";
	TestCommonTools::consolePrintTestSynStart(113, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == Expression::SYNTAX_ERROR)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0114", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	mXparser::unremoveAllBuiltinTokens();
	mXparser::removeBuiltinTokens("sin");
	string expStr = "sin(2)";
	TestCommonTools::consolePrintTestSynStart(114, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	mXparser::unremoveAllBuiltinTokens();
	if (syn == Expression::SYNTAX_ERROR)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0115", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	mXparser::unmodifyAllBuiltinTokens();
	mXparser::modifyBuiltinToken("sin", "sinos");
	string expStr = "sin(2)";
	TestCommonTools::consolePrintTestSynStart(115, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	mXparser::unmodifyAllBuiltinTokens();
	if (syn == Expression::SYNTAX_ERROR)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0116", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	mXparser::unmodifyAllBuiltinTokens();
	mXparser::modifyBuiltinToken("sin", "sinos");
	string expStr = "sinos(2)";
	TestCommonTools::consolePrintTestSynStart(116, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	mXparser::unmodifyAllBuiltinTokens();
	if (syn == Expression::NO_SYNTAX_ERRORS)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0117", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	mXparser::setNotToOverrideBuiltinTokens();
	FunctionPtr sin = new_Function("sin(x,y) = 2*x + y");
	ArgumentPtr ee = new_Argument("e = 5");
	ConstantPtr pi = new_Constant("pi = 2");
	string expStr = "sin(e,pi)";
	TestCommonTools::consolePrintTestSynStart(117, expStr);
	ExpressionPtr e = new_Expression(expStr, sin, ee, pi);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0118", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	mXparser::setToOverrideBuiltinTokens();
	FunctionPtr sin = new_Function("sin(x,y) = 2*x + y");
	ArgumentPtr ee = new_Argument("e = 5");
	ConstantPtr pi = new_Constant("pi = 2");
	string expStr = "sin(e,pi)";
	TestCommonTools::consolePrintTestSynStart(118, expStr);
	ExpressionPtr e = new_Expression(expStr, sin, ee, pi);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0119", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "h.1234567890aBcDeF + H.001234567890aBcDeF";
	TestCommonTools::consolePrintTestSynStart(119, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0120", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "o.12345670 + O.0012345670";
	TestCommonTools::consolePrintTestSynStart(120, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0121", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b.101010 + B.000101010";
	TestCommonTools::consolePrintTestSynStart(121, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0122", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "h.1234567890aBcDeFu + y.001234567890aBcDeF";
	TestCommonTools::consolePrintTestSynStart(122, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0123", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "o.123456708 + O.00123456709";
	TestCommonTools::consolePrintTestSynStart(123, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0124", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b.2101010 + B.0001010103";
	TestCommonTools::consolePrintTestSynStart(124, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0125", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b1. + B1.111";
	TestCommonTools::consolePrintTestSynStart(125, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0126", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b1.111 + B1.1101";
	TestCommonTools::consolePrintTestSynStart(126, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0127", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b2.01 + B2.0101";
	TestCommonTools::consolePrintTestSynStart(127, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0128", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b2.012 + B2.0101";
	TestCommonTools::consolePrintTestSynStart(128, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0129", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b3.012 + B3.0012";
	TestCommonTools::consolePrintTestSynStart(129, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0130", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b3.012 + B3.00123";
	TestCommonTools::consolePrintTestSynStart(130, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0131", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b4.0123 + B4.00123";
	TestCommonTools::consolePrintTestSynStart(131, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0132", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b4.01234 + B4.00123";
	TestCommonTools::consolePrintTestSynStart(132, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0133", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b5.01234 + B5.001234";
	TestCommonTools::consolePrintTestSynStart(133, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0134", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b5.012345 + B5.001234";
	TestCommonTools::consolePrintTestSynStart(134, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0135", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b6.012345 + B6.0012345";
	TestCommonTools::consolePrintTestSynStart(135, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0136", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b6.012345 + B6.00123456";
	TestCommonTools::consolePrintTestSynStart(136, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0137", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b7.0123456 + B7.00123456";
	TestCommonTools::consolePrintTestSynStart(137, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0138", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b7.0123456 + B7.001234568";
	TestCommonTools::consolePrintTestSynStart(138, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0139", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b8.01234567 + B8.001234567";
	TestCommonTools::consolePrintTestSynStart(139, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0140", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b8.01234567 + B8.0012345679";
	TestCommonTools::consolePrintTestSynStart(140, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0141", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b9.012345678 + B9.0012345678";
	TestCommonTools::consolePrintTestSynStart(141, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0142", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b9.0123456789 + B9.0012345678";
	TestCommonTools::consolePrintTestSynStart(142, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0143", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b10.0123456789 + B10.00123456789";
	TestCommonTools::consolePrintTestSynStart(143, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0144", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b10.0123456789 + B10.00123456789a";
	TestCommonTools::consolePrintTestSynStart(144, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0145", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b11.0123456789a + B11.00123456789A";
	TestCommonTools::consolePrintTestSynStart(145, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0146", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b11.0123456789a + B11.00123456789Ab";
	TestCommonTools::consolePrintTestSynStart(146, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0147", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b12.0123456789ab + B12.00123456789AB";
	TestCommonTools::consolePrintTestSynStart(147, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0148", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b12.0123456789abC + B12.00123456789AB";
	TestCommonTools::consolePrintTestSynStart(148, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0149", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b13.0123456789abc + B13.00123456789ABC";
	TestCommonTools::consolePrintTestSynStart(149, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0150", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b13.0123456789abc + B13.00123456789ABCd";
	TestCommonTools::consolePrintTestSynStart(150, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0151", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b14.0123456789abcd + B14.00123456789ABCD";
	TestCommonTools::consolePrintTestSynStart(151, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0152", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b14.0123456789abcdE + B14.00123456789ABCD";
	TestCommonTools::consolePrintTestSynStart(152, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0153", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b15.0123456789abcde + B15.00123456789ABCDE";
	TestCommonTools::consolePrintTestSynStart(153, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0154", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b15.0123456789abcde + B15.00123456789ABCDEf";
	TestCommonTools::consolePrintTestSynStart(154, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0155", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b16.0123456789abcdef + B16.00123456789ABCDEF";
	TestCommonTools::consolePrintTestSynStart(155, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0156", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b16.0123456789abcdefg + B16.00123456789ABCDEF";
	TestCommonTools::consolePrintTestSynStart(156, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0157", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b16.0123456789abcdef + B16.00123456789ABCDEF";
	TestCommonTools::consolePrintTestSynStart(157, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0158", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b16.0123456789abcdefg + B16.00123456789ABCDEF";
	TestCommonTools::consolePrintTestSynStart(158, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0159", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b17.0123456789abcdefg + B17.00123456789ABCDEFG";
	TestCommonTools::consolePrintTestSynStart(159, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0160", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b17.0123456789abcdefg + B17.00123456789ABCDEFGh";
	TestCommonTools::consolePrintTestSynStart(160, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0161", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b18.0123456789abcdefgh + B18.00123456789ABCDEFGH";
	TestCommonTools::consolePrintTestSynStart(161, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0162", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b18.0123456789abcdefghI + B18.00123456789ABCDEFGH";
	TestCommonTools::consolePrintTestSynStart(162, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0163", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b19.0123456789abcdefghi + B19.00123456789ABCDEFGI";
	TestCommonTools::consolePrintTestSynStart(163, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0164", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b19.0123456789abcdefghi + B19.00123456789ABCDEFGIj";
	TestCommonTools::consolePrintTestSynStart(164, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0165", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b20.0123456789abcdefghij + B20.00123456789ABCDEFGIJ";
	TestCommonTools::consolePrintTestSynStart(165, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0166", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b20.0123456789abcdefghijK + B20.00123456789ABCDEFGIJ";
	TestCommonTools::consolePrintTestSynStart(166, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0167", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b21.0123456789abcdefghijk + B21.00123456789ABCDEFGIJK";
	TestCommonTools::consolePrintTestSynStart(167, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0168", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b21.0123456789abcdefghijk + B21.00123456789ABCDEFGIJKl";
	TestCommonTools::consolePrintTestSynStart(168, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0169", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b22.0123456789abcdefghijkl + B22.00123456789ABCDEFGIJKL";
	TestCommonTools::consolePrintTestSynStart(169, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0170", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b22.0123456789abcdefghijklM + B22.00123456789ABCDEFGIJKL";
	TestCommonTools::consolePrintTestSynStart(170, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0171", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b23.0123456789abcdefghijklm + B23.00123456789ABCDEFGIJKLM";
	TestCommonTools::consolePrintTestSynStart(171, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0172", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b23.0123456789abcdefghijklm + B23.00123456789ABCDEFGIJKLMn";
	TestCommonTools::consolePrintTestSynStart(172, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0173", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b24.0123456789abcdefghijklmn + B24.00123456789ABCDEFGIJKLMN";
	TestCommonTools::consolePrintTestSynStart(173, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0174", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b24.0123456789abcdefghijklmnO + B24.00123456789ABCDEFGIJKLMN";
	TestCommonTools::consolePrintTestSynStart(174, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0175", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b25.0123456789abcdefghijklmno + B25.00123456789ABCDEFGIJKLMNO";
	TestCommonTools::consolePrintTestSynStart(175, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0176", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b25.0123456789abcdefghijklmno + B25.00123456789ABCDEFGIJKLMNOp";
	TestCommonTools::consolePrintTestSynStart(176, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0177", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b26.0123456789abcdefghijklmnop + B26.00123456789ABCDEFGIJKLMNOP";
	TestCommonTools::consolePrintTestSynStart(177, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0178", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b26.0123456789abcdefghijklmnop + B26.00123456789ABCDEFGIJKLMNOPq";
	TestCommonTools::consolePrintTestSynStart(178, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0179", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b27.0123456789abcdefghijklmnopq + B27.00123456789ABCDEFGIJKLMNOPQ";
	TestCommonTools::consolePrintTestSynStart(179, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0180", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b27.0123456789abcdefghijklmnopqR + B27.00123456789ABCDEFGIJKLMNOPQ";
	TestCommonTools::consolePrintTestSynStart(180, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0181", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b28.0123456789abcdefghijklmnopqr + B28.00123456789ABCDEFGIJKLMNOPQR";
	TestCommonTools::consolePrintTestSynStart(181, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0182", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b28.0123456789abcdefghijklmnopqr + B28.00123456789ABCDEFGIJKLMNOPQRs";
	TestCommonTools::consolePrintTestSynStart(182, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0183", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b29.0123456789abcdefghijklmnopqrs + B29.00123456789ABCDEFGIJKLMNOPQRS";
	TestCommonTools::consolePrintTestSynStart(183, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0184", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b29.0123456789abcdefghijklmnopqrsT + B29.00123456789ABCDEFGIJKLMNOPQRS";
	TestCommonTools::consolePrintTestSynStart(184, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0185", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b30.0123456789abcdefghijklmnopqrst + B30.00123456789ABCDEFGIJKLMNOPQRST";
	TestCommonTools::consolePrintTestSynStart(185, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0186", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b30.0123456789abcdefghijklmnopqrst + B30.00123456789ABCDEFGIJKLMNOPQRSTu";
	TestCommonTools::consolePrintTestSynStart(186, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0187", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b31.0123456789abcdefghijklmnopqrstu + B31.00123456789ABCDEFGIJKLMNOPQRSTU";
	TestCommonTools::consolePrintTestSynStart(187, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0188", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b31.0123456789abcdefghijklmnopqrstuV + B31.00123456789ABCDEFGIJKLMNOPQRSTU";
	TestCommonTools::consolePrintTestSynStart(188, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0189", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b32.0123456789abcdefghijklmnopqrstuv + B32.00123456789ABCDEFGIJKLMNOPQRSTUV";
	TestCommonTools::consolePrintTestSynStart(189, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0190", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b32.0123456789abcdefghijklmnopqrstuv + B32.00123456789ABCDEFGIJKLMNOPQRSTUVw";
	TestCommonTools::consolePrintTestSynStart(190, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0191", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b33.0123456789abcdefghijklmnopqrstuvw + B33.00123456789ABCDEFGIJKLMNOPQRSTUVW";
	TestCommonTools::consolePrintTestSynStart(191, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0192", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b33.0123456789abcdefghijklmnopqrstuvwX + B33.00123456789ABCDEFGIJKLMNOPQRSTUVW";
	TestCommonTools::consolePrintTestSynStart(192, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0193", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b34.0123456789abcdefghijklmnopqrstuvwx + B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX";
	TestCommonTools::consolePrintTestSynStart(193, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0194", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b34.0123456789abcdefghijklmnopqrstuvwx + B34.00123456789ABCDEFGIJKLMNOPQRSTUVWXy";
	TestCommonTools::consolePrintTestSynStart(194, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0195", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b35.0123456789abcdefghijklmnopqrstuvwxy + B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY";
	TestCommonTools::consolePrintTestSynStart(195, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0196", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b35.0123456789abcdefghijklmnopqrstuvwxyZ + B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY";
	TestCommonTools::consolePrintTestSynStart(196, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0197", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b36.0123456789abcdefghijklmnopqrstuvwxyz + B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ";
	TestCommonTools::consolePrintTestSynStart(197, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0198", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "b36.0123456789abcdefghijklmnopqrstuvwxyzą + B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ";
	TestCommonTools::consolePrintTestSynStart(198, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0199", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = pi");
	string expStr = "der( sin(x), x )";
	TestCommonTools::consolePrintTestSynStart(199, expStr);
	ExpressionPtr e = new_Expression(expStr, x);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0200", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = pi");
	string expStr = "der( sin(x), x, 0.01, 100 )";
	TestCommonTools::consolePrintTestSynStart(200, expStr);
	ExpressionPtr e = new_Expression(expStr, x);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0201", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der( sin(x), x , pi )";
	TestCommonTools::consolePrintTestSynStart(201, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0202", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der( sin(x), x , pi )";
	TestCommonTools::consolePrintTestSynStart(202, expStr);
	ArgumentPtr x = new_Argument("x");
	ExpressionPtr e = new_Expression(expStr, x);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0203", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der( sin(x), x , pi, 0.01, 100 )";
	TestCommonTools::consolePrintTestSynStart(203, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0204", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der( sin(x), x , pi, 0.01, 100 )";
	TestCommonTools::consolePrintTestSynStart(204, expStr);
	ArgumentPtr x = new_Argument("x");
	ExpressionPtr e = new_Expression(expStr, x);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0205", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der( sin(x), x )";
	TestCommonTools::consolePrintTestSynStart(205, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0206", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "der( sin(x), x, 0.1, 100 )";
	TestCommonTools::consolePrintTestSynStart(206, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool reg = false;
	bool syn = e->checkSyntax();
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0207", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin(pi)+cos(pi)";
	TestCommonTools::consolePrintTestSynStart(207, expStr);
	ExpressionPtr e = new_Expression(expStr);
	mXparser::unremoveAllBuiltinTokens();
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0208", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin(pi)+cos(pi)";
	TestCommonTools::consolePrintTestSynStart(208, expStr);
	ExpressionPtr e = new_Expression(expStr);
	mXparser::unremoveAllBuiltinTokens();
	bool syn = e->checkSyntax();
	mXparser::removeBuiltinTokens("sin", "cos");
	syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	mXparser::unremoveAllBuiltinTokens();
	CHECK(testResult);
}

TEST_CASE("testSyn0209", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin(pi)+cos(pi)";
	TestCommonTools::consolePrintTestSynStart(209, expStr);
	ExpressionPtr e = new_Expression(expStr);
	mXparser::unremoveAllBuiltinTokens();
	bool syn = e->checkSyntax();
	mXparser::removeBuiltinTokens("sin", "cos");
	syn = e->checkSyntax();
	mXparser::unremoveBuiltinTokens("cos");
	syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	mXparser::unremoveAllBuiltinTokens();
	CHECK(testResult);
}

TEST_CASE("testSyn0210", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin(pi)+cos(pi)";
	TestCommonTools::consolePrintTestSynStart(210, expStr);
	ExpressionPtr e = new_Expression(expStr);
	mXparser::unremoveAllBuiltinTokens();
	bool syn = e->checkSyntax();
	mXparser::removeBuiltinTokens("sin", "cos");
	syn = e->checkSyntax();
	mXparser::unremoveBuiltinTokens("cos");
	syn = e->checkSyntax();
	mXparser::unremoveAllBuiltinTokens();
	syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0211", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sine(pi)+cosine(pi)";
	TestCommonTools::consolePrintTestSynStart(211, expStr);
	ExpressionPtr e = new_Expression(expStr);
	mXparser::unmodifyAllBuiltinTokens();
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0212", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sine(pi)+cosine(pi)";
	TestCommonTools::consolePrintTestSynStart(212, expStr);
	ExpressionPtr e = new_Expression(expStr);
	mXparser::unmodifyAllBuiltinTokens();
	bool syn = e->checkSyntax();
	mXparser::modifyBuiltinToken("sin", "sine");
	syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	mXparser::unmodifyAllBuiltinTokens();
	CHECK(testResult);
}

TEST_CASE("testSyn0213", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sine(pi)+cosine(pi)";
	TestCommonTools::consolePrintTestSynStart(213, expStr);
	ExpressionPtr e = new_Expression(expStr);
	mXparser::unmodifyAllBuiltinTokens();
	bool syn = e->checkSyntax();
	mXparser::modifyBuiltinToken("sin", "sine");
	syn = e->checkSyntax();
	mXparser::modifyBuiltinToken("cos", "cosine", "My new cosine token");
	syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	mXparser::unmodifyAllBuiltinTokens();
	CHECK(testResult);
}

TEST_CASE("testSyn0214", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sine(pi)+cosine(pi)";
	TestCommonTools::consolePrintTestSynStart(214, expStr);
	ExpressionPtr e = new_Expression(expStr);
	mXparser::unmodifyAllBuiltinTokens();
	bool syn = e->checkSyntax();
	mXparser::modifyBuiltinToken("sin", "sine");
	syn = e->checkSyntax();
	mXparser::modifyBuiltinToken("cos", "cosine", "My new cosine token");
	syn = e->checkSyntax();
	mXparser::unmodifyBuiltinTokens("sin");
	syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	mXparser::unmodifyAllBuiltinTokens();
	CHECK(testResult);
}

TEST_CASE("testSyn0215", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sine(pi)+cosine(pi)";
	TestCommonTools::consolePrintTestSynStart(215, expStr);
	ExpressionPtr e = new_Expression(expStr);
	mXparser::unmodifyAllBuiltinTokens();
	bool syn = e->checkSyntax();
	mXparser::modifyBuiltinToken("sin", "sine");
	syn = e->checkSyntax();
	mXparser::modifyBuiltinToken("cos", "cosine", "My new cosine token");
	syn = e->checkSyntax();
	mXparser::unmodifyAllBuiltinTokens();
	syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0216", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin(pi)";
	TestCommonTools::consolePrintTestSynStart(216, expStr);
	FunctionPtr sin = new_Function("sin(x) = 2*x");
	ConstantPtr pi = new_Constant("pi = 1");
	ExpressionPtr e = new_Expression(expStr, sin, pi);
	mXparser::setNotToOverrideBuiltinTokens();
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0217", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin(pi)";
	TestCommonTools::consolePrintTestSynStart(217, expStr);
	FunctionPtr sin = new_Function("sin(x) = 2*x");
	ConstantPtr pi = new_Constant("pi = 1");
	ExpressionPtr e = new_Expression(expStr, sin, pi);
	mXparser::setNotToOverrideBuiltinTokens();
	bool syn = e->checkSyntax();
	mXparser::setToOverrideBuiltinTokens();
	syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	mXparser::setNotToOverrideBuiltinTokens();
	CHECK(testResult);
}

TEST_CASE("testSyn0218", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin(pi)";
	TestCommonTools::consolePrintTestSynStart(218, expStr);
	FunctionPtr sin = new_Function("sin(x) = 2*x");
	ConstantPtr pi = new_Constant("pi = 1");
	ExpressionPtr e = new_Expression(expStr, sin, pi);
	mXparser::setNotToOverrideBuiltinTokens();
	bool syn = e->checkSyntax();
	mXparser::setToOverrideBuiltinTokens();
	syn = e->checkSyntax();
	mXparser::setNotToOverrideBuiltinTokens();
	syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0219", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "10*(350.0/5) + 60.0 + + (180/3)*5";
	TestCommonTools::consolePrintTestSynStart(219, expStr);
	mXparser::disableAttemptToFixExpStrMode();
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0220", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "10*(350.0/5) + 60.0 + - (180/3)*5";
	TestCommonTools::consolePrintTestSynStart(220, expStr);
	mXparser::disableAttemptToFixExpStrMode();
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0221", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "10*(350.0/5) + 60.0 -  + (180/3)*5";
	TestCommonTools::consolePrintTestSynStart(221, expStr);
	mXparser::disableAttemptToFixExpStrMode();
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0222", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "10*(350.0/5) + 60.0 -   - (180/3)*5";
	TestCommonTools::consolePrintTestSynStart(222, expStr);
	mXparser::disableAttemptToFixExpStrMode();
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0223", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "10*2_3_5";
	TestCommonTools::consolePrintTestSynStart(223, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0224", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "10*(-2_3_5)";
	TestCommonTools::consolePrintTestSynStart(224, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0225", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "-2_3_5+5_2";
	TestCommonTools::consolePrintTestSynStart(225, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0226", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin(-2_3_5+5_2*b5.12)";
	TestCommonTools::consolePrintTestSynStart(226, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0227", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin(101_102_103+2653_123*b5.12)";
	TestCommonTools::consolePrintTestSynStart(227, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0228", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2^^3+2^3+2^2^^2";
	TestCommonTools::consolePrintTestSynStart(228, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0229", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "pi^^sin(pi)";
	TestCommonTools::consolePrintTestSynStart(229, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0230", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(x) = (3 + 5*x";
	TestCommonTools::consolePrintTestSynStart(230, expStr);
	FunctionPtr f = new_Function(expStr);
	ExpressionPtr e = new_Expression("");
	bool syn = f->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0231", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(x) = (3 + 5*x)";
	TestCommonTools::consolePrintTestSynStart(231, expStr);
	FunctionPtr f = new_Function(expStr);
	ExpressionPtr e = new_Expression("");
	bool syn = f->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0232", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "[npar]";
	TestCommonTools::consolePrintTestSynStart(232, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0233", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "par(1)";
	TestCommonTools::consolePrintTestSynStart(233, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0234", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(x) = [npar] + par(1)";
	TestCommonTools::consolePrintTestSynStart(234, expStr);
	FunctionPtr f = new_Function(expStr);
	ExpressionPtr e = new_Expression("");
	bool syn = f->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0235", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(...) = [npar] + par(1)";
	TestCommonTools::consolePrintTestSynStart(235, expStr);
	FunctionPtr f = new_Function(expStr);
	ExpressionPtr e = new_Expression("");
	bool syn = f->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0236", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(... = [npar] + par(1)";
	TestCommonTools::consolePrintTestSynStart(236, expStr);
	FunctionPtr f = new_Function(expStr);
	ExpressionPtr e = new_Expression("");
	bool syn = f->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0237", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "{fun-ext-var}";
	TestCommonTools::consolePrintTestSynStart(237, expStr);
	FunctionExtensionVariadicPtr fx = new_FunExtVar();
	FunctionPtr f = new_Function("f", fx);
	ExpressionPtr e = new_Expression("");
	bool syn = f->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0238", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	FunctionExtensionVariadicPtr gx = new_FunExtVar();
	FunctionPtr f = new_Function("f(...) = sum(i, 1, [npar], par(i) )");
	FunctionPtr g = new_Function("g", gx);
	string expStr = "f(1) + f(1,2) + f(1,2,3) + g(1) + g(1,2) + g(1,2,3)";
	TestCommonTools::consolePrintTestSynStart(238, expStr);
	ExpressionPtr e = new_Expression(expStr, f, g);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0239", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = ".2";
	TestCommonTools::consolePrintTestSynStart(239, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0240", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "+.2";
	TestCommonTools::consolePrintTestSynStart(240, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0241", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "-.2";
	TestCommonTools::consolePrintTestSynStart(241, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0242", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "-.2^.3";
	TestCommonTools::consolePrintTestSynStart(242, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0243", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = ".2 ^ .3";
	TestCommonTools::consolePrintTestSynStart(243, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0244", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "-2 + 3 - .2 + 1.5 - .2^.3 + (2/.3)";
	TestCommonTools::consolePrintTestSynStart(244, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0245", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	ArgumentPtr fun = new_Argument("fun");
	ArgumentPtr x = new_Argument("x");
	string expStr = "fun(x)";
	TestCommonTools::consolePrintTestSynStart(245, expStr);
	ExpressionPtr e = new_Expression(expStr, fun, x);
	bool lex = e->checkLexSyntax();
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg && lex == true)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0246", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2(3)";
	TestCommonTools::consolePrintTestSynStart(246, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0247", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "(3)2";
	TestCommonTools::consolePrintTestSynStart(247, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0248", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2(3)2";
	TestCommonTools::consolePrintTestSynStart(248, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0249", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2(3+4)2";
	TestCommonTools::consolePrintTestSynStart(249, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0250", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2(3+4)2(3)(3)2cos(pi)2sin(pi)2pi";
	TestCommonTools::consolePrintTestSynStart(250, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0251", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "-2(3+4)2(3)(3)-2cos(pi)+2sin(pi)2-pi";
	TestCommonTools::consolePrintTestSynStart(251, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0252", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2(3+4)2 - 2*(3+4)*2";
	TestCommonTools::consolePrintTestSynStart(252, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0253", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2e-2*e";
	TestCommonTools::consolePrintTestSynStart(253, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0254", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = ".01e-0.01*e";
	TestCommonTools::consolePrintTestSynStart(254, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0255", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "e[h-]sin(.1pi)";
	TestCommonTools::consolePrintTestSynStart(255, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0256", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2[h-]2[h-]2[h-]";
	TestCommonTools::consolePrintTestSynStart(256, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0257", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "[h-](1)";
	TestCommonTools::consolePrintTestSynStart(257, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0258", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "[h-](1,2)";
	TestCommonTools::consolePrintTestSynStart(258, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0259", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
	TestCommonTools::consolePrintTestSynStart(259, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0260", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2.1a2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
	TestCommonTools::consolePrintTestSynStart(260, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->addArguments(new_Argument("a = 2"));
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0261", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2.1a2.1e2(.3+0.4)[h-].01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
	TestCommonTools::consolePrintTestSynStart(261, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->addArguments(new_Argument("a = 2"));
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0262", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2.1a[h-]2.1e2(.3+0.4)[h-].01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
	TestCommonTools::consolePrintTestSynStart(262, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->addArguments(new_Argument("a = 2"));
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0263", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2×4";
	TestCommonTools::consolePrintTestSynStart(263, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0264", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2⨉4";
	TestCommonTools::consolePrintTestSynStart(264, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0265", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2∙4";
	TestCommonTools::consolePrintTestSynStart(265, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0266", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2÷4";
	TestCommonTools::consolePrintTestSynStart(266, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0267", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "¬1+1∧0+0∨1";
	TestCommonTools::consolePrintTestSynStart(267, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0268", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "(1⇒1) + (0⇐1) + (1⇏0) + (0⇍0) + (1⇔1)";
	TestCommonTools::consolePrintTestSynStart(268, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0269", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "(1~∧1) + (1¬&1) + (1¬&&1) + (1¬/\\1) + (1¬∧1)";
	TestCommonTools::consolePrintTestSynStart(269, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0270", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "(1~∨1) + (1¬|1) + (1¬||1) + (1¬\\/1) + (1¬∨1)";
	TestCommonTools::consolePrintTestSynStart(270, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0271", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "1 ≠ 2";
	TestCommonTools::consolePrintTestSynStart(271, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0272", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "(1 ≤ 2) & (1 ⋜ 2)";
	TestCommonTools::consolePrintTestSynStart(272, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0273", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "(2 ≥ 1) & (2 ⋝ 1)";
	TestCommonTools::consolePrintTestSynStart(273, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0274", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "√4+2*√8+√(3+3)+√e";
	TestCommonTools::consolePrintTestSynStart(274, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0275", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∛4+2*∛8+∛(3+3)+∛e";
	TestCommonTools::consolePrintTestSynStart(275, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0276", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∜4+2*∜8+∜(3+3)+∜e";
	TestCommonTools::consolePrintTestSynStart(276, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0277", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "pi+π+ℼ";
	TestCommonTools::consolePrintTestSynStart(277, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0278", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "e+ℯ+ⅇ";
	TestCommonTools::consolePrintTestSynStart(278, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0279", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∑(i, 1, 10, i^2) + Σ(i, 1, 10, i^2)";
	TestCommonTools::consolePrintTestSynStart(279, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0280", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∏(i, 1, 10, i^2) + ℿ(i, 1, 10, i^2) + Π(i, 1, 10, i^2)";
	TestCommonTools::consolePrintTestSynStart(280, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0281", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∫(x^2, x, 0, 1)";
	TestCommonTools::consolePrintTestSynStart(281, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0282", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∂(x^2, x, 1)";
	TestCommonTools::consolePrintTestSynStart(282, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0283", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∂+(x^2, x, 0)";
	TestCommonTools::consolePrintTestSynStart(283, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0284", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∂-(x^2, x, 0)";
	TestCommonTools::consolePrintTestSynStart(284, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0285", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = 2");
	string expStr = "∆(x^2, x) + Δ(x^2, x)";
	TestCommonTools::consolePrintTestSynStart(285, expStr);
	ExpressionPtr e = new_Expression(expStr, x);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0286", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	ArgumentPtr x = new_Argument("x = 2");
	string expStr = "∇(x^2, x)";
	TestCommonTools::consolePrintTestSynStart(286, expStr);
	ExpressionPtr e = new_Expression(expStr, x);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0287", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "√√√4+√√4+2√4";
	TestCommonTools::consolePrintTestSynStart(287, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0288", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∛∛∛4+∛∛4+2∛4";
	TestCommonTools::consolePrintTestSynStart(288, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0289", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∜∜∜4+∜∜4+2∜4";
	TestCommonTools::consolePrintTestSynStart(289, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0290", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∜∛√4+∜∛√4+2√4";
	TestCommonTools::consolePrintTestSynStart(290, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0291", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∜2∛3√4+∜2∛√4+2√4";
	TestCommonTools::consolePrintTestSynStart(291, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0292", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sin(pi)∜2∛3√4+∜2∛√4+pi√4";
	TestCommonTools::consolePrintTestSynStart(292, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0293", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∜∛+4";
	TestCommonTools::consolePrintTestSynStart(293, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0294", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∜∛-4";
	TestCommonTools::consolePrintTestSynStart(294, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0295", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "5+∜";
	TestCommonTools::consolePrintTestSynStart(295, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0296", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∜∜*4";
	TestCommonTools::consolePrintTestSynStart(296, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0297", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "∜∜pi";
	TestCommonTools::consolePrintTestSynStart(297, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0298", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2∜∛*4+√pi*sin(√4)∛4";
	TestCommonTools::consolePrintTestSynStart(298, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0299", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "pi√pi";
	TestCommonTools::consolePrintTestSynStart(299, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0300", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2pi√pi";
	TestCommonTools::consolePrintTestSynStart(300, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0301", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2pi√√pi";
	TestCommonTools::consolePrintTestSynStart(301, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0302", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2pi2√√pi";
	TestCommonTools::consolePrintTestSynStart(302, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkLexSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0303", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2pi2√√pi";
	TestCommonTools::consolePrintTestSynStart(303, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0304", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2pi√√2pi";
	TestCommonTools::consolePrintTestSynStart(304, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0305", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2pi+3e";
	TestCommonTools::consolePrintTestSynStart(305, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->enableImpliedMultiplicationMode();
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0306", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2pi+3e";
	TestCommonTools::consolePrintTestSynStart(306, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0307", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2(3+4)5";
	TestCommonTools::consolePrintTestSynStart(307, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->enableImpliedMultiplicationMode();
	bool syn = e->checkSyntax();
	bool reg = true;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0308", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "2(3+4)5";
	TestCommonTools::consolePrintTestSynStart(308, expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0309", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(i, 1, 10, 2*xi)";
	TestCommonTools::consolePrintTestSynStart(309, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0310", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(i, 1, 10, xi*2)";
	TestCommonTools::consolePrintTestSynStart(310, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0311", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(i, 1, 10, 2*ix)";
	TestCommonTools::consolePrintTestSynStart(311, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0312", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(i, 1, 10, ix*2)";
	TestCommonTools::consolePrintTestSynStart(312, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0313", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(i, 1, 10, 2*xpi)";
	TestCommonTools::consolePrintTestSynStart(313, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0314", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(i, 1, 10, xpi*2)";
	TestCommonTools::consolePrintTestSynStart(314, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0315", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(i, 1, 10, 2*pix)";
	TestCommonTools::consolePrintTestSynStart(315, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0316", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "sum(i, 1, 10, pix*2)";
	TestCommonTools::consolePrintTestSynStart(316, expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0317", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ALREADY_CHECKED_NO_ERRORS";
	string expStr = "2+2";
	TestCommonTools::consolePrintTestSynStart(317, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->checkSyntax();
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->ALREADY_CHECKED_NO_ERRORS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0318", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS";
	string expStr = "f(2,2)";
	TestCommonTools::consolePrintTestSynStart(318, testDescr + " " + expStr);
	auto funExt = new_FunExt();
	FunctionPtr f = new_Function("f", funExt);
	ExpressionPtr e = new_Expression(expStr, f);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0319", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS";
	string expStr = "g(2,2,2) + f(2,2)";
	TestCommonTools::consolePrintTestSynStart(319, testDescr + " " + expStr);
	auto funExt = new_FunExt();
	FunctionPtr f = new_Function("f", funExt);
	FunctionPtr g = new_Function("g(x,y,z)=z*f(x,y)", f);
	ExpressionPtr e = new_Expression(expStr, g, f);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0320", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "EXPRESSION_STRING_IS_EMPTY";
	string expStr = "";
	TestCommonTools::consolePrintTestSynStart(320, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->EXPRESSION_STRING_IS_EMPTY))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0321", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE";
	string expStr = "sin(pi)2";
	TestCommonTools::consolePrintTestSynStart(321, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0322", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "INVALID_TOKEN";
	string expStr = "2.5sisn(pi)";
	TestCommonTools::consolePrintTestSynStart(322, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->INVALID_TOKEN))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0323", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR";
	string expStr = "2.5sisn(pi)";
	TestCommonTools::consolePrintTestSynStart(323, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0324", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DUPLICATED_KEYWORD";
	string expStr = "sin(pi)";
	TestCommonTools::consolePrintTestSynStart(324, testDescr + " " + expStr);
	ArgumentPtr pi = new_Argument("pi=3");
	ExpressionPtr e = new_Expression(expStr, pi);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->DUPLICATED_KEYWORD))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0325", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE + ARGUMENT_WAS_EXPECTED";
	string expStr = "2+x(3)";
	TestCommonTools::consolePrintTestSynStart(325, testDescr + " " + expStr);
	ArgumentPtr x = new_Argument("x=3");
	ExpressionPtr e = new_Expression(expStr, x);
	e->disableImpliedMultiplicationMode();
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE) &&
	    StringUtils::contains(errorMessage, stringResources->ARGUMENT_WAS_EXPECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0326", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT";
	string expStr = "2*y";
	TestCommonTools::consolePrintTestSynStart(326, testDescr + " " + expStr);
	ArgumentPtr x = new_Argument("x=3");
	ArgumentPtr y = new_Argument("y = 2*x", x);
	ExpressionPtr e = new_Expression(expStr, y);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0327", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS";
	string expStr = "2*x";
	TestCommonTools::consolePrintTestSynStart(327, testDescr + " " + expStr);
	auto piMultArgExt = new_PiMultArgExt();
	ArgumentPtr x = new_Argument("x", piMultArgExt) ;
	ExpressionPtr e = new_Expression(expStr, x);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0328", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER";
	string expStr = "2*a";
	TestCommonTools::consolePrintTestSynStart(328, testDescr + " " + expStr);
	RecursiveArgumentPtr a = new_RecursiveArgument("a(n) = n*a(n-1)");
	a->addBaseCase(1, 1);
	ExpressionPtr e = new_Expression(expStr, a);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0329", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT";
	string expStr = "2+a(2)";
	TestCommonTools::consolePrintTestSynStart(329, testDescr + " " + expStr);
	RecursiveArgumentPtr a = new_RecursiveArgument("a(n) = n*a(n-1)");
	a->addBaseCase(1, 1);
	ExpressionPtr e = new_Expression(expStr, a);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0330", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT";
	string expStr = "2*f";
	TestCommonTools::consolePrintTestSynStart(330, testDescr + " " + expStr);
	FunctionPtr f = new_Function("f(x,y) = 2*x+3*y");
	ExpressionPtr e = new_Expression(expStr, f);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0331", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION";
	string expStr = "2*f(1,2,3,4)";
	TestCommonTools::consolePrintTestSynStart(331, testDescr + " " + expStr);
	FunctionPtr f = new_Function("f(x,y) = 2*x+3*y");
	ExpressionPtr e = new_Expression(expStr, f);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0332", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION";
	string expStr = "2*f(1,2)";
	TestCommonTools::consolePrintTestSynStart(332, testDescr + " " + expStr);
	FunctionPtr f = new_Function("f(...) = [npar]");
	ExpressionPtr e = new_Expression(expStr, f);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0333", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE + USER_CONSTANT_WAS_EXPECTED";
	string expStr = "2+a(3)";
	TestCommonTools::consolePrintTestSynStart(333, testDescr + " " + expStr);
	ConstantPtr a = new_Constant("a = 2");
	ExpressionPtr e = new_Expression(expStr, a);
	e->disableImpliedMultiplicationMode();
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE) &&
	    StringUtils::contains(errorMessage, stringResources->USER_CONSTANT_WAS_EXPECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0334", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "UNARY_FUNCTION_EXPECTS_1_PARAMETER";
	string expStr = "sin(1,2)";
	TestCommonTools::consolePrintTestSynStart(334, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->UNARY_FUNCTION_EXPECTS_1_PARAMETER))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0335", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "BINARY_FUNCTION_EXPECTS_2_PARAMETERS";
	string expStr = "C(1)";
	TestCommonTools::consolePrintTestSynStart(335, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->BINARY_FUNCTION_EXPECTS_2_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0336", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "TERNARY_FUNCTION_EXPECTS_3_PARAMETERS";
	string expStr = "if(1,2)";
	TestCommonTools::consolePrintTestSynStart(336, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->TERNARY_FUNCTION_EXPECTS_3_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0337", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED";
	string expStr = "2*min";
	TestCommonTools::consolePrintTestSynStart(337, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0338", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS";
	string expStr = "2*der(1)";
	TestCommonTools::consolePrintTestSynStart(338, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0339", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS";
	string expStr = "2*der(1,2,3,4,5,6)";
	TestCommonTools::consolePrintTestSynStart(339, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0340", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION + INVALID_TOKEN";
	string expStr = "der(sin(x), x)";
	TestCommonTools::consolePrintTestSynStart(340, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION)
	    && StringUtils::contains(errorMessage, stringResources->INVALID_TOKEN))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0341", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
	string expStr = "sum(pi, 1, 10, pi*2)";
	TestCommonTools::consolePrintTestSynStart(341, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0342", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
	string expStr = "2*int(sin(pi), pi, 1, 10)";
	TestCommonTools::consolePrintTestSynStart(342, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0343", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
	string expStr = "2*solve(sin(pi), pi, 1, 10)";
	TestCommonTools::consolePrintTestSynStart(343, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0344", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
	string expStr = "prod(pi, 1, 10, pi)";
	TestCommonTools::consolePrintTestSynStart(344, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0345", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
	string expStr = "mini(pi, 1, 10, pi)";
	TestCommonTools::consolePrintTestSynStart(345, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0346", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
	string expStr = "maxi(pi, 1, 10, pi)";
	TestCommonTools::consolePrintTestSynStart(346, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0347", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
	string expStr = "vari(pi, 1, 10, pi)";
	TestCommonTools::consolePrintTestSynStart(347, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0348", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
	string expStr = "avg(pi, 1, 10, pi)";
	TestCommonTools::consolePrintTestSynStart(348, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0349", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
	string expStr = "stdi(pi, 1, 10, pi)";
	TestCommonTools::consolePrintTestSynStart(349, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0350", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
	string expStr = "sum(2+x, 1, 10, pi*2)";
	TestCommonTools::consolePrintTestSynStart(350, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION)
	    && StringUtils::contains(errorMessage, stringResources->INVALID_TOKEN))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0351", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
	string expStr = "int(2, 2+x, 1, 10)";
	TestCommonTools::consolePrintTestSynStart(351, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION)
	    && StringUtils::contains(errorMessage, stringResources->INVALID_TOKEN))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0352", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
	string expStr = "solve(2, 2+x, 1, 10)";
	TestCommonTools::consolePrintTestSynStart(352, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION)
	    && StringUtils::contains(errorMessage, stringResources->INVALID_TOKEN))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0353", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
	string expStr = "prod(2+x, 1, 10, pi*2)";
	TestCommonTools::consolePrintTestSynStart(353, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION)
	    && StringUtils::contains(errorMessage, stringResources->INVALID_TOKEN))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0354", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
	string expStr = "mini(2+x, 1, 10, pi*2)";
	TestCommonTools::consolePrintTestSynStart(354, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION)
	    && StringUtils::contains(errorMessage, stringResources->INVALID_TOKEN))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0355", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
	string expStr = "maxi(2+x, 1, 10, pi*2)";
	TestCommonTools::consolePrintTestSynStart(355, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION)
	    && StringUtils::contains(errorMessage, stringResources->INVALID_TOKEN))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0356", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
	string expStr = "vari(2+x, 1, 10, pi*2)";
	TestCommonTools::consolePrintTestSynStart(356, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION)
	    && StringUtils::contains(errorMessage, stringResources->INVALID_TOKEN))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0357", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
	string expStr = "avg(2+x, 1, 10, pi*2)";
	TestCommonTools::consolePrintTestSynStart(357, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION)
	    && StringUtils::contains(errorMessage, stringResources->INVALID_TOKEN))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0358", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
	string expStr = "stdi(2+x, 1, 10, pi*2)";
	TestCommonTools::consolePrintTestSynStart(358, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION)
	    && StringUtils::contains(errorMessage, stringResources->INVALID_TOKEN))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0359", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS";
	string expStr = "dern(1, 2)*2";
	TestCommonTools::consolePrintTestSynStart(359, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0360", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS";
	string expStr = "dern(1, 2, 3, 4)*2";
	TestCommonTools::consolePrintTestSynStart(360, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0361", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS";
	string expStr = "dern(1, 2, 3, 4, 5, 6)*2";
	TestCommonTools::consolePrintTestSynStart(361, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0362", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION";
	string expStr = "dern(sin(pi), 2, pi)*2";
	TestCommonTools::consolePrintTestSynStart(362, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0363", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS";
	string expStr = "2*int(1,2)";
	TestCommonTools::consolePrintTestSynStart(363, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0364", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS";
	string expStr = "2*solve(1,2)";
	TestCommonTools::consolePrintTestSynStart(364, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0365", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
	string expStr = "diff(sin(x))";
	TestCommonTools::consolePrintTestSynStart(365, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0366", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
	string expStr = "difb(sin(x))";
	TestCommonTools::consolePrintTestSynStart(366, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0367", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
	string expStr = "diff(sin(x),2,3,4)";
	TestCommonTools::consolePrintTestSynStart(367, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0368", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
	string expStr = "difb(sin(x),2,3,4)";
	TestCommonTools::consolePrintTestSynStart(368, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0369", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED";
	string expStr = "diff(sin(2), pi, 2)";
	TestCommonTools::consolePrintTestSynStart(369, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0370", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED";
	string expStr = "difb(sin(2), pi, 2)";
	TestCommonTools::consolePrintTestSynStart(370, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0371", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "LEXICAL_ERROR_HAS_BEEN_FOUND + ERRORS_HAVE_BEEN_FOUND + WAS_EXPECTING";
	string expStr = "sin(";
	TestCommonTools::consolePrintTestSynStart(371, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->LEXICAL_ERROR_HAS_BEEN_FOUND) &&
	    StringUtils::contains(errorMessage, stringResources->ERRORS_HAVE_BEEN_FOUND) && StringUtils::contains(
		    errorMessage, stringResources->WAS_EXPECTING))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0372", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "NO_ERRORS_DETECTED";
	string expStr = "sin(pi)";
	TestCommonTools::consolePrintTestSynStart(372, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0373", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "ERRORS_HAVE_BEEN_FOUND";
	string expStr = "sin(2,3)";
	TestCommonTools::consolePrintTestSynStart(373, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->ERRORS_HAVE_BEEN_FOUND))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0374", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "Function name    1fa";
	TestCommonTools::consolePrintTestSynStart(374, expStr);
	FunctionPtr f = new_Function("1fa", "2*x", "x");
	StringPtr msg = f->getErrorMessage();
	ExpressionPtr e = new_Expression("f(1)", f);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (syn == reg && StringUtils::contains(msg, stringResources->INVALID_FUNCTION_NAME) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0375", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x()=y+z";
	TestCommonTools::consolePrintTestSynStart(375, expStr);
	ConstantPtr x = new_Constant(expStr);
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (syn == reg && StringUtils::contains(msg, stringResources->INVALID_CONSTANT_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0376", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x(1,2,3)=y+z";
	TestCommonTools::consolePrintTestSynStart(376, expStr);
	ConstantPtr x = new_Constant(expStr);
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (syn == reg && StringUtils::contains(msg, stringResources->INVALID_CONSTANT_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0377", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "x(=y+z";
	TestCommonTools::consolePrintTestSynStart(377, expStr);
	ConstantPtr x = new_Constant(expStr);
	StringPtr msg = x->getErrorMessage();
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (syn == reg && StringUtils::contains(msg, stringResources->INVALID_CONSTANT_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0378", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f=y+z";
	TestCommonTools::consolePrintTestSynStart(378, expStr);
	FunctionPtr f = new_Function(expStr);
	StringPtr msg = f->getErrorMessage();
	ExpressionPtr e = new_Expression("f", f);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (syn == reg && StringUtils::contains(msg, stringResources->INVALID_FUNCTION_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0379", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f()=y+z";
	TestCommonTools::consolePrintTestSynStart(379, expStr);
	FunctionPtr f = new_Function(expStr);
	StringPtr msg = f->getErrorMessage();
	ExpressionPtr e = new_Expression("f", f);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (syn == reg && StringUtils::contains(msg, stringResources->INVALID_FUNCTION_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0380", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string expStr = "f(1,2,3)=y+z";
	TestCommonTools::consolePrintTestSynStart(380, expStr);
	FunctionPtr f = new_Function(expStr);
	StringPtr msg = f->getErrorMessage();
	ExpressionPtr e = new_Expression("f", f);
	bool reg = false;
	bool syn = e->checkSyntax();
	StringResourcesPtr stringResources = StringModel::getStringResources();
	if (syn == reg && StringUtils::contains(msg, stringResources->INVALID_FUNCTION_DEFINITION) &&
	    StringUtils::contains(msg, stringResources->PATTERN_DOES_NOT_MATCH) && StringUtils::contains(
		    msg, stringResources->PATTERN_EXAMPLES))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0381", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Argument forceDependent = true - #1";
	string expStr = "x";
	TestCommonTools::consolePrintTestSynStart(380, testDescr + " " + expStr);
	ArgumentPtr x = new_Argument(expStr, true);
	ExpressionPtr e = new_Expression("x", x);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg && *x->getArgumentName() == UTF("x") && x->getArgumentType() == Argument::FREE_ARGUMENT)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0382", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Argument forceDependent = true - #2";
	string expStr = "x = 2";
	TestCommonTools::consolePrintTestSynStart(381, testDescr + " " + expStr);
	ArgumentPtr x = new_Argument(expStr, true);
	ExpressionPtr e = new_Expression("x", x);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg && *x->getArgumentName() == UTF("x") && x->getArgumentType() == Argument::DEPENDENT_ARGUMENT && x->
	    getArgumentValue() == 2)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0383", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Argument forceDependent = false - #1";
	string expStr = "x = 2";
	TestCommonTools::consolePrintTestSynStart(382, testDescr + " " + expStr);
	ArgumentPtr x = new_Argument(expStr, false);
	ExpressionPtr e = new_Expression("x", x);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg && *x->getArgumentName() == UTF("x") && x->getArgumentType() == Argument::FREE_ARGUMENT && x->
	    getArgumentValue() == 2)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0384", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Argument forceDependent = false - #2";
	string expStr = "x = 2*y";
	TestCommonTools::consolePrintTestSynStart(383, testDescr + " " + expStr);
	ArgumentPtr y = new_Argument("y = 1");
	ArgumentPtr x = new_Argument(expStr, false, y);
	ExpressionPtr e = new_Expression("x", x);
	bool reg = true;
	bool syn = e->checkSyntax();
	if (syn == reg && *x->getArgumentName() == UTF("x") && x->getArgumentType() == Argument::DEPENDENT_ARGUMENT && x->
	    getArgumentValue() == 2)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0385", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Argument forceDependent = true - #3";
	string expStr = "x( = 2)";
	TestCommonTools::consolePrintTestSynStart(384, testDescr + " " + expStr);
	ArgumentPtr x = new_Argument(expStr);
	ExpressionPtr e = new_Expression("x", x);
	bool reg = false;
	bool syn = x->checkSyntax();
	mXparser::consolePrintln(x->getErrorMessage() + " = " + syn);
	if (syn == reg)
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0386", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE";
	string expStr = "2 pi*sin(pi)";
	TestCommonTools::consolePrintTestSynStart(386, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->disableImpliedMultiplicationMode();
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage,
	                                        stringResources->
	                                        MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0387", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Implied Multiplication with blank spaces";
	string expStr = "2 pi*sin(pi)";
	TestCommonTools::consolePrintTestSynStart(387, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	e->enableImpliedMultiplicationMode();
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0388", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Division symbol, Central and Eastern Europe";
	string expStr = "4:2";
	TestCommonTools::consolePrintTestSynStart(388, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0389", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Division symbol, Central and Eastern Europe";
	string expStr = "4.0:-2";
	TestCommonTools::consolePrintTestSynStart(389, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0390", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Division symbol, Central and Eastern Europe";
	string expStr = "pi:e";
	TestCommonTools::consolePrintTestSynStart(390, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0391", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Division symbol, Central and Eastern Europe";
	string expStr = "sin(pi:e)";
	TestCommonTools::consolePrintTestSynStart(391, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0392", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Division symbol, Central and Eastern Europe";
	string expStr = "sin(pi:)";
	TestCommonTools::consolePrintTestSynStart(392, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->LEXICAL_ERROR_HAS_BEEN_FOUND))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0393", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Division symbol, Central and Eastern Europe";
	string expStr = "sin(:e)";
	TestCommonTools::consolePrintTestSynStart(392, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->LEXICAL_ERROR_HAS_BEEN_FOUND))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0394", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NAND";
	string expStr = "4@~&2";
	TestCommonTools::consolePrintTestSynStart(394, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0395", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NAND";
	string expStr = "4.0@~&-2";
	TestCommonTools::consolePrintTestSynStart(395, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0396", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NAND";
	string expStr = "pi@~&e";
	TestCommonTools::consolePrintTestSynStart(396, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0397", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NAND";
	string expStr = "sin(pi@~&e)";
	TestCommonTools::consolePrintTestSynStart(397, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0398", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NAND";
	string expStr = "sin(pi@~&)";
	TestCommonTools::consolePrintTestSynStart(398, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->LEXICAL_ERROR_HAS_BEEN_FOUND))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0399", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NAND";
	string expStr = "sin(@~&e)";
	TestCommonTools::consolePrintTestSynStart(399, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->LEXICAL_ERROR_HAS_BEEN_FOUND))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0400", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NOR";
	string expStr = "4@~|2";
	TestCommonTools::consolePrintTestSynStart(400, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0401", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NOR";
	string expStr = "4.0@~|-2";
	TestCommonTools::consolePrintTestSynStart(401, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0402", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NOR";
	string expStr = "pi@~|e";
	TestCommonTools::consolePrintTestSynStart(402, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0403", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NOR";
	string expStr = "sin(pi@~|e)";
	TestCommonTools::consolePrintTestSynStart(403, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn404", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NOR";
	string expStr = "sin(pi@~|)";
	TestCommonTools::consolePrintTestSynStart(404, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->LEXICAL_ERROR_HAS_BEEN_FOUND))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0405", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise NOR";
	string expStr = "sin(@~|e)";
	TestCommonTools::consolePrintTestSynStart(405, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->LEXICAL_ERROR_HAS_BEEN_FOUND))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0406", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise XNOR";
	string expStr = "4@~^2";
	TestCommonTools::consolePrintTestSynStart(406, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0407", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise XNOR";
	string expStr = "4.0@~^-2";
	TestCommonTools::consolePrintTestSynStart(407, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0408", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise XNOR";
	string expStr = "pi@~^e";
	TestCommonTools::consolePrintTestSynStart(408, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0409", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise XNOR";
	string expStr = "sin(pi@~^e)";
	TestCommonTools::consolePrintTestSynStart(409, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn410", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise XNOR";
	string expStr = "sin(pi@~^)";
	TestCommonTools::consolePrintTestSynStart(410, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->LEXICAL_ERROR_HAS_BEEN_FOUND))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0411", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Bitwise XNOR";
	string expStr = "sin(@~^e)";
	TestCommonTools::consolePrintTestSynStart(411, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->LEXICAL_ERROR_HAS_BEEN_FOUND))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0412", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Integer division";
	string expStr = "4\\2";
	TestCommonTools::consolePrintTestSynStart(412, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0413", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Integer division";
	string expStr = "4.0\\-2";
	TestCommonTools::consolePrintTestSynStart(413, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0414", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Integer division";
	string expStr = "pi\\e";
	TestCommonTools::consolePrintTestSynStart(414, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0415", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Integer division";
	string expStr = "sin(pi\\e)";
	TestCommonTools::consolePrintTestSynStart(415, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = true;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->NO_ERRORS_DETECTED))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn416", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Integer division";
	string expStr = "sin(pi\\)";
	TestCommonTools::consolePrintTestSynStart(416, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->LEXICAL_ERROR_HAS_BEEN_FOUND))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}

TEST_CASE("testSyn0417", "[Syntax]") {
	TestCommonTools::testSynSettingsInit();
	bool testResult = false;
	string testDescr = "Integer division";
	string expStr = "sin(\\e)";
	TestCommonTools::consolePrintTestSynStart(417, testDescr + " " + expStr);
	ExpressionPtr e = new_Expression(expStr);
	bool syn = e->checkSyntax();
	bool reg = false;
	StringResourcesPtr stringResources = StringModel::getStringResources();
	StringPtr errorMessage = e->getErrorMessage();
	if (syn == reg && StringUtils::contains(errorMessage, stringResources->LEXICAL_ERROR_HAS_BEEN_FOUND))
		testResult = true;
	TestCommonTools::consolePrintTestSynEnd(syn, reg, testResult, e);
	CHECK(testResult);
}