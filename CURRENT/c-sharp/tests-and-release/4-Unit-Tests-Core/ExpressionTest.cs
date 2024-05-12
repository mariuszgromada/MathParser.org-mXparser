/*
 * @(#)ExpressionTest.cs        5.2.1    2023-02-06
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2023-01-29
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2023 Mariusz Gromada - All rights reserved
 * PUBLISHER: INFIMA - https://payhip.com/infima
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 * PRODUCT: MathParser.org-mXparser SOFTWARE
 * LICENSE: DUAL LICENSE AGREEMENT
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
 * model designed to meet the needs of both non-commercial use as well as
 * commercial use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. NON-COMMERCIAL USE examples:
 *
 * 1. Free Open-Source Software ("FOSS").
 * 2. Non-commercial use in research, scholarly and education.
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
 * 1. Redistributions of source code must retain unmodified content of the
 *    entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
 *    definition of NON-COMMERCIAL USE, definition of COMMERCIAL USE,
 *    NON-COMMERCIAL LICENSE conditions, COMMERCIAL LICENSE conditions, and
 *    the following DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
 *    and/or other materials provided with the distribution, including
 *    definition of NON-COMMERCIAL USE, definition of COMMERCIAL USE,
 *    NON-COMMERCIAL LICENSE conditions, COMMERCIAL LICENSE conditions, and
 *    the following DISCLAIMER.
 * 3. Any form of redistribution requires confirmation and signature of
 *    the NON-COMMERCIAL USE by successfully calling the method:
 *       License.iConfirmNonCommercialUse(...)
 *    The method call takes place only internally for logging purposes and
 *    there is no connection with other external services and no data is
 *    sent or collected. The lack of a method call (or its successful call)
 *    does not affect the operation of the PRODUCT in any way. Please see
 *    the API documentation.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, AUTHOR & PUBLISHER allow you
 *     to download, install and use up to three copies of the PRODUCT to
 *     perform integration tests, confirm the quality of the PRODUCT and
 *     its suitability. The testing period should be limited to fourteen
 *     days. Tests should be performed under the conditions of test
 *     environments. The purpose of the tests must not be to generate profit.
 *  2. Provided that you purchased a license from "INFIMA" online store
 *     (store address: https://mathparser.org/order-commercial-license or
 *     https://payhip.com/infima), and you comply with all below terms and
 *     conditions, and you have acknowledged and understood the following
 *     DISCLAIMER, AUTHOR & PUBLISHER grant you a nonexclusive license
 *     including the following rights:
 *  3. The license has been granted only to you, i.e., the person or entity
 *     that made the purchase, who is identified and confirmed by the data
 *     provided during the purchase.
 *  4. In case you purchased a license in the "ONE-TIME PURCHASE" model,
 *     the license has been granted only for the PRODUCT version specified
 *     in the purchase. The upgrade policy gives you additional rights and
 *     is described in the dedicated section below.
 *  5. In case you purchased a license in the "SUBSCRIPTION" model, you can
 *     install and use any version of the PRODUCT, but only during the
 *     subscription validity period.
 *  6. In case you purchased a "SINGLE LICENSE" you can install and use the
 *     PRODUCT from one workstation.
 *  7. Additional copies of the PRODUCT can be installed and used from more
 *     than one workstation; however, this number is limited to the number
 *     of workstations purchased as per order.
 *  8. In case you purchased a "SITE LICENSE ", the PRODUCT can be installed
 *     and used from all workstations located at your premises.
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
 *     The method call takes place only internally for logging purposes and
 *     there is no connection with other external services and no data is
 *     sent or collected. The lack of a method call (or its successful call)
 *     does not affect the operation of the PRODUCT in any way. Please see
 *     the API documentation.
 * 14. AUTHOR & PUBLISHER reserve all rights not expressly granted to you
 *     in this agreement.
 *
 * ADDITIONAL CLARIFICATION ON WORKSTATION
 *
 * The number of workstations does not relate to the final distribution of
 * your end-product to your end-users. In typical cases the number of
 * workstations is a way to measure the scale of the process of design
 * and/or development and/or creation and/or manufacturing of your product.
 *
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned the
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
 * UPGRADE POLICY
 *
 * The PRODUCT is versioned according to the following convention:
 *
 *    [MAJOR].[MINOR].[PATCH]
 *
 * 1. COMMERCIAL LICENSE holders can install and use the updated version
 *    for bug fixes free of charge, i.e. if you have purchased a license
 *    for the [MAJOR].[MINOR] version (e.g.: 5.0), you can freely install
 *    all the various releases specified in the [PATCH] version (e.g.: 5.0.2).
 *    The license terms remain unchanged after the update.
 * 2. COMMERCIAL LICENSE holders for [MAJOR].[MINOR] version (e.g.: 5.0)
 *    can install and use the updated version [MAJOR].[MINOR + 1] free of
 *    charge, i.e., plus one release in the [MINOR] range (e.g.: 5.1). The
 *    license terms remain unchanged after the update.
 * 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
 *    not eligible for the free upgrade, can claim a discount when
 *    purchasing the upgrade. For this purpose, please contact us via e-mail.
 *
 * DISCLAIMER
 *
 * THIS PRODUCT IS PROVIDED BY AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
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
 * OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF AUTHOR OR PUBLISHER.
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
using Microsoft.VisualStudio.TestTools.UnitTesting;
using org.mariuszgromada.math.mxparser;
using org.mariuszgromada.math.mxparser.mathcollection;
using static org.mariuszgromada.math.mxparser.mathcollection.MathConstants;

namespace org.mariuszgromada.math.mxparser.test {
	/**
	 *  Unit tests covering calculations
	 *
	 * @author         <b>Mariusz Gromada</b><br>
	 *                 <a href="https://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
	 *                 <a href="https://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
	 *                 <a href="https://payhip.com/INFIMA" target="_blank">INFIMA place to purchase a commercial MathParser.org-mXparser software license</a><br>
	 *                 <a href="mailto:info@mathparser.org">info@mathparser.org</a><br>
	 *                 <a href="https://scalarmath.org/" target="_blank">ScalarMath.org - a powerful math engine and math scripting language</a><br>
	 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Lite</a><br>
	 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
	 *                 <a href="https://mathspace.pl" target="_blank">MathSpace.pl</a><br>
	 *
	 * @version        5.2.1
	 *
	 */
	[TestClass]
    public class ExpressionTest {
		[TestMethod]
		public void testExpr0000() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "";
			mXparser.consolePrint("Empty expression string ...... ");
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0001() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2+1";
			TestCommonTools.consolePrintTestExprStart(1, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2+1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0002() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1-2";
			TestCommonTools.consolePrintTestExprStart(2, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1-2;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0003() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2*5";
			TestCommonTools.consolePrintTestExprStart(3, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2*5;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0004() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "20/4";
			TestCommonTools.consolePrintTestExprStart(4, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 20.0/4.0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0005() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "-2+22";
			TestCommonTools.consolePrintTestExprStart(5, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -2+22;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0006() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "3-(-5)";
			TestCommonTools.consolePrintTestExprStart(6, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3-(-5);
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0007() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "+5-(+7)";
			TestCommonTools.consolePrintTestExprStart(7, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = +5-(+7);
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0008() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "-5+(-7)";
			TestCommonTools.consolePrintTestExprStart(8, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -5+(-7);
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0009() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "-2*(3-5)+7";
			TestCommonTools.consolePrintTestExprStart(9, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -2*(3-5)+7;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0010() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "5.5*(2-3 + (5.3-7.89)/2)/2";
			TestCommonTools.consolePrintTestExprStart(10, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -6.31125;
			if ( MathFunctions.abs(value - reg) < 0.00000000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0011() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2-(32-4)/(23+(4)/(5))-(2-4)*(4+6-98.2)+4";
			TestCommonTools.consolePrintTestExprStart(11, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -171.5764705882353;
			if ( MathFunctions.abs(value - reg) < 0.000000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0012() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2^3";
			TestCommonTools.consolePrintTestExprStart(12, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Pow(2, 3);
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0013() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2^(-3)";
			TestCommonTools.consolePrintTestExprStart(13, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Pow(2, -3);
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0014() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2^0.7";
			TestCommonTools.consolePrintTestExprStart(14, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Pow(2, 0.7);
			if ( MathFunctions.abs(value - reg) < 0.00000000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0015() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "4^3^2";
			TestCommonTools.consolePrintTestExprStart(15, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Pow(4, Math.Pow(3,2));
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0016() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(4^3)^2";
			TestCommonTools.consolePrintTestExprStart(16, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Pow( Math.Pow(4, 3), 2);
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0017() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "0.9^0.8^0.7^0.6^0.5";
			TestCommonTools.consolePrintTestExprStart(17, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.914888338607593;
			if (MathFunctions.abs(value - reg) < 0.00000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0018() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2=2";
			TestCommonTools.consolePrintTestExprStart(18, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0019() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2=3";
			TestCommonTools.consolePrintTestExprStart(19, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0020() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2<>3";
			TestCommonTools.consolePrintTestExprStart(20, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0021() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2<>2";
			TestCommonTools.consolePrintTestExprStart(21, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0022() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "3>2";
			TestCommonTools.consolePrintTestExprStart(22, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0023() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2>2";
			TestCommonTools.consolePrintTestExprStart(23, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0024() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "3>2";
			TestCommonTools.consolePrintTestExprStart(24, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0025() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2<3";
			TestCommonTools.consolePrintTestExprStart(25, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0026() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2<2";
			TestCommonTools.consolePrintTestExprStart(26, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0027() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "3<2";
			TestCommonTools.consolePrintTestExprStart(27, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0028() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2>=2";
			TestCommonTools.consolePrintTestExprStart(28, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0029() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "3>=2";
			TestCommonTools.consolePrintTestExprStart(29, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0030() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1>=2";
			TestCommonTools.consolePrintTestExprStart(30, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0031() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1<=2";
			TestCommonTools.consolePrintTestExprStart(31, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0032() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1<=1";
			TestCommonTools.consolePrintTestExprStart(32, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0033() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1<=0";
			TestCommonTools.consolePrintTestExprStart(33, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0034() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1 & 1";
			TestCommonTools.consolePrintTestExprStart(34, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0035() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1 & -1";
			TestCommonTools.consolePrintTestExprStart(35, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0036() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1 & 0";
			TestCommonTools.consolePrintTestExprStart(36, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0037() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "0 & 1";
			TestCommonTools.consolePrintTestExprStart(37, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0038() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "0 & 0";
			TestCommonTools.consolePrintTestExprStart(38, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0039() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1 | -1";
			TestCommonTools.consolePrintTestExprStart(39, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0040() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "0 | -1";
			TestCommonTools.consolePrintTestExprStart(40, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0041() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1 | 0";
			TestCommonTools.consolePrintTestExprStart(41, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0042() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "0 | 0";
			TestCommonTools.consolePrintTestExprStart(42, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0043() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "3>2 | 2>3";
			TestCommonTools.consolePrintTestExprStart(43, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0044() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "3>5 | 2>3";
			TestCommonTools.consolePrintTestExprStart(44, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0045() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "not((3>4) & (2>=2))";
			TestCommonTools.consolePrintTestExprStart(45, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0046() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "not(-5)";
			TestCommonTools.consolePrintTestExprStart(46, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0047() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "not(0)";
			TestCommonTools.consolePrintTestExprStart(47, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0048() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "if(0,1,2)";
			TestCommonTools.consolePrintTestExprStart(48, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0049() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "if(5,1,2)";
			TestCommonTools.consolePrintTestExprStart(49, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0050() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(n,1,10,n)";
			TestCommonTools.consolePrintTestExprStart(50, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 55;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0051() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "prod(n,1,5,n)";
			TestCommonTools.consolePrintTestExprStart(51, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 120;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0052() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",5);
			String expStr = "sin(x)-sum(n,0,10,(-1)^n*(x^(2*n+1))/(2*n+1)!)";
			TestCommonTools.consolePrintTestExprStart(52, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0053() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument d = new Argument("d",0.01);
			String expStr = "pi-2*sum(x,-1,1,d*sqrt(1-x^2),d)";
			TestCommonTools.consolePrintTestExprStart(53, expStr);
			Expression testExp = new Expression(expStr,d);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.01 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0054() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",1);
			String expStr = "1 - ( sin(x)^2+cos(x)^2 )";
			TestCommonTools.consolePrintTestExprStart(54, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0055() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",1);
			String expStr = "1 - ( sec(x)^2 - tan(x)^2 )";
			TestCommonTools.consolePrintTestExprStart(55, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0056() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",1);
			String expStr = "1 - ( cosec(x)^2 - ctan(x)^2 )";
			TestCommonTools.consolePrintTestExprStart(56, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0057() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",1);
			String expStr = "1 - ( cosec(x)^2 - ctan(x)^2 )";
			TestCommonTools.consolePrintTestExprStart(57, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0058() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",1);
			String expStr = "1 - ( csc(x)^2 - ctg(x)^2 )";
			TestCommonTools.consolePrintTestExprStart(58, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0059() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",1);
			String expStr = "1 - ( sec(x)^2 - tg(x)^2 )";
			TestCommonTools.consolePrintTestExprStart(59, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0060() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",1);
			String expStr = "tan(x) - sin(x)/cos(x)";
			TestCommonTools.consolePrintTestExprStart(60, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0061() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			Argument y = new Argument("y",3);
			String expStr = "sin(x+y) - (sin(x)*cos(y)+cos(x)*sin(y))";
			TestCommonTools.consolePrintTestExprStart(61, expStr);
			Expression testExp = new Expression(expStr,x,y);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0062() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			Argument y = new Argument("y",3);
			String expStr = "sin(x-y) - (sin(x)*cos(y)-cos(x)*sin(y))";
			TestCommonTools.consolePrintTestExprStart(62, expStr);
			Expression testExp = new Expression(expStr,x,y);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0063() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			Argument y = new Argument("y",3);
			String expStr = "cos(x+y) - (cos(x)*cos(y)-sin(x)*sin(y))";
			TestCommonTools.consolePrintTestExprStart(63, expStr);
			Expression testExp = new Expression(expStr,x,y);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0064() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			Argument y = new Argument("y",3);
			String expStr = "cos(x-y) - (cos(x)*cos(y)+sin(x)*sin(y))";
			TestCommonTools.consolePrintTestExprStart(64, expStr);
			Expression testExp = new Expression(expStr,x,y);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0065() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			Argument y = new Argument("y",3);
			String expStr = "tg(x+y) - (tg(x)+tg(y)) / (1 - tg(x)*tg(y))";
			TestCommonTools.consolePrintTestExprStart(65, expStr);
			Expression testExp = new Expression(expStr,x,y);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0066() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			Argument y = new Argument("y",3);
			String expStr = "tg(x-y) - (tg(x)-tg(y)) / (1 + tg(x)*tg(y))";
			TestCommonTools.consolePrintTestExprStart(66, expStr);
			Expression testExp = new Expression(expStr,x,y);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0067() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			Argument y = new Argument("y",3);
			String expStr = "ctg(x+y) - (ctg(x)*ctg(y)-1) / (ctg(y)+ctg(x))";
			TestCommonTools.consolePrintTestExprStart(67, expStr);
			Expression testExp = new Expression(expStr,x,y);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0068() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			Argument n = new Argument("n",10);
			String expStr = "sin(n*x) - sum(i,0,n,(-1)^i*C(n,2*i+1)*(cos(x)^(n-2*i-1))*(sin(x)^(2*i+1))) ";
			TestCommonTools.consolePrintTestExprStart(68, expStr);
			Expression testExp = new Expression(expStr,x,n);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0069() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",50);
			String expStr = "n*2^(n-1) - sum(i,1,n,i*C(n,i))";
			TestCommonTools.consolePrintTestExprStart(69, expStr);
			Expression testExp = new Expression(expStr,n);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0070() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "prod(i,2,6,1+1/i)";
			TestCommonTools.consolePrintTestExprStart(70, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 7.0/2.0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0071() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "prod(i,1,6,10)";
			TestCommonTools.consolePrintTestExprStart(71, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Pow(10,6);
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0072() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "prod(i,1,6,i,0.5)";
			TestCommonTools.consolePrintTestExprStart(72, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			for (double ii=1; ii<6; ii+=0.5)
				reg*=ii;
			reg*=6;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0073() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(n,1,5,prod(i,1,n,n*i))";
			TestCommonTools.consolePrintTestExprStart(73, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double sum = 0;
			for (double nn=1; nn<=5; nn++) {
				double regr=1;
				for (double ii=1; ii<=nn; ii++)
					regr*=nn*ii;
				sum+=regr;
			}
			double reg=sum;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0074() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n");
			RecursiveArgument fib = new RecursiveArgument("fib","fib(n-1)+fib(n-2)",n);
			fib.addBaseCase(0, 0);
			fib.addBaseCase(1, 1);
			String expStr = "sum(n,0,5,fib(n))";
			TestCommonTools.consolePrintTestExprStart(74, expStr);
			Expression testExp = new Expression(expStr,fib);
			double value = testExp.calculate();
			double reg = 12;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0075() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n");
			RecursiveArgument fact = new RecursiveArgument("fact","n*fact(n-1)",n);
			fact.addBaseCase(0, 1);
			String expStr = "5!-fact(5)";
			TestCommonTools.consolePrintTestExprStart(75, expStr);
			Expression testExp = new Expression(expStr,fact);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0076() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			String expStr = "cos(x)-der(sin(x),x)";
			TestCommonTools.consolePrintTestExprStart(76, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0077() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			Argument y = new Argument("y",3);
			String expStr = "-sin(x+y)-der(der(sin(x+y),x),y)";
			TestCommonTools.consolePrintTestExprStart(77, expStr);
			Expression testExp = new Expression(expStr,x,y);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0078() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			Argument y = new Argument("y",3);
			String expStr = "cos(x*y)-x*y*sin(x*y)-der(der(sin(x*y),x),y)";
			TestCommonTools.consolePrintTestExprStart(78, expStr);
			Expression testExp = new Expression(expStr,x,y);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0079() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",-5);
			String expStr = "C(n,2)";
			TestCommonTools.consolePrintTestExprStart(79, expStr);
			Expression testExp = new Expression(expStr,n);
			double value = testExp.calculate();
			double reg = 15;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0080() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",0);
			String expStr = "der+(abs(x),x)";
			TestCommonTools.consolePrintTestExprStart(80, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 1;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0081() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",0);
			String expStr = "der-(abs(x),x)";
			TestCommonTools.consolePrintTestExprStart(81, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = -1;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0082() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",4);
			String expStr = "cos(x)-der(sum(n,0,10,(-1)^n*(x^(2*n+1))/(2*n+1)!),x)";
			TestCommonTools.consolePrintTestExprStart(82, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(value - reg) < 0.0001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0083() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",7);
			Argument k = new Argument("k",4);
			String expStr = "C(n,k) - ( C(n-1,k-1)+C(n-1,k) )";
			TestCommonTools.consolePrintTestExprStart(83, expStr);
			Expression testExp = new Expression(expStr,n,k);
			double value = testExp.calculate();
			double reg = 0;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0084() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			Argument k = new Argument("k",6);
			String expStr = "C(n,k) - prod(i,1,k,n-i+1) / prod(i,1,k,i)";
			TestCommonTools.consolePrintTestExprStart(84, expStr);
			Expression testExp = new Expression(expStr,n,k);
			double value = testExp.calculate();
			double reg = 0;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0085() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			Argument k = new Argument("k",6);
			String expStr = "C(n,k) - prod(i,1,k,(n-i+1)/i)";
			TestCommonTools.consolePrintTestExprStart(85, expStr);
			Expression testExp = new Expression(expStr,n,k);
			double value = testExp.calculate();
			double reg = 0;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0086() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			Argument k = new Argument("k",6);
			String expStr = "C(n,k) - C(n,n-k)";
			TestCommonTools.consolePrintTestExprStart(86, expStr);
			Expression testExp = new Expression(expStr,n,k);
			double value = testExp.calculate();
			double reg = 0;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0087() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			Argument k = new Argument("k",6);
			String expStr = "C(n,0)+C(n,n)+C(0,0)";
			TestCommonTools.consolePrintTestExprStart(87, expStr);
			Expression testExp = new Expression(expStr,n,k);
			double value = testExp.calculate();
			double reg = 3;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0088() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			Argument k = new Argument("k",6);
			String expStr = "C(n,k+1)-C(n,k)*(n-k)/(k+1)";
			TestCommonTools.consolePrintTestExprStart(88, expStr);
			Expression testExp = new Expression(expStr,n,k);
			double value = testExp.calculate();
			double reg = 0;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0089() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			String expStr = "2^n-sum(k,0,n,C(n,k))";
			TestCommonTools.consolePrintTestExprStart(89, expStr);
			Expression testExp = new Expression(expStr,n);
			double value = testExp.calculate();
			double reg = 0;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0090() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			String expStr = "C(2*n,n)-sum(k,0,n,C(n,k)^2)";
			TestCommonTools.consolePrintTestExprStart(90, expStr);
			Expression testExp = new Expression(expStr,n);
			double value = testExp.calculate();
			double reg = 0;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0091() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			String expStr = "sum(k,0,n,(-1)^k*C(n,k))";
			TestCommonTools.consolePrintTestExprStart(91, expStr);
			Expression testExp = new Expression(expStr,n);
			double value = testExp.calculate();
			double reg = 0;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0092() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			Argument m = new Argument("m",3);
			Argument s = new Argument("s",5);
			Argument r = new Argument("r",4);
			String expStr = "C(r+s,m+n)-sum(k,0,n,C(r,m+k)*C(s,n-k))";
			TestCommonTools.consolePrintTestExprStart(92, expStr);
			Expression testExp = new Expression(expStr,n,m,r,s);
			double value = testExp.calculate();
			double reg = 0;
			if (value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0093() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			Argument k = new Argument("k",6);
			String expStr = "C(n,k)-(n/k)*C(n-1,k-1)";
			TestCommonTools.consolePrintTestExprStart(93, expStr);
			Expression testExp = new Expression(expStr,n,k);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0094() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			Argument k = new Argument("k",6);
			String expStr = "(n-k)*C(n,k)-n*C(n-1,k)";
			TestCommonTools.consolePrintTestExprStart(94, expStr);
			Expression testExp = new Expression(expStr,n,k);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0095() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			Argument k = new Argument("k",6);
			String expStr = "C(n,k) <= n^k/k!";
			TestCommonTools.consolePrintTestExprStart(95, expStr);
			Expression testExp = new Expression(expStr,n,k);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0096() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			Argument k = new Argument("k",6);
			String expStr = "C(n,k) <= (n*e/k)^k";
			TestCommonTools.consolePrintTestExprStart(96, expStr);
			Expression testExp = new Expression(expStr,n,k);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0097() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n",13);
			Argument k = new Argument("k",6);
			String expStr = "C(n,k) >= (n/k)^k";
			TestCommonTools.consolePrintTestExprStart(97, expStr);
			Expression testExp = new Expression(expStr,n,k);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0098() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",3);
			String expStr = "sin(3)-sin(2)-int(cos(x),x,2,3)";
			TestCommonTools.consolePrintTestExprStart(98, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value-reg) <= 0.00001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0099() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument i = new Argument("i", 5);
			String expStr = "2*i+sum(i,1,10,i)";
			TestCommonTools.consolePrintTestExprStart(99, expStr);
			Expression testExp = new Expression(expStr,i);
			double value = testExp.calculate();
			double reg = 65;
			if ( value == reg)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0100() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",3);
			String expStr = "sin(x)-sin(x-1)-int(cos(x),x,2,3)";
			TestCommonTools.consolePrintTestExprStart(100, expStr);
			Expression testExp = new Expression(expStr,x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value-reg) <= 0.00001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0101() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("mg", "sin(x)+cos(y)", "x", "y");
			Argument x = new Argument("x", 3);
			Argument y = new Argument("y", 2);
			String expStr = "sin(x)+cos(y)-mg(x,y)";
			TestCommonTools.consolePrintTestExprStart(101, expStr);
			Expression testExp = new Expression(expStr,x, y);
			testExp.addDefinitions(f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0102() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("mg", "sin(x)+cos(y)", "x", "y");
			String expStr = "der(sin(x)+cos(y),x)-der(mg(x,y),x)";
			TestCommonTools.consolePrintTestExprStart(102, expStr);
			Expression testExp = new Expression(expStr,new Argument("x", 3), new Argument("y", 2));
			testExp.addDefinitions(f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.00000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0103() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f", "x^2", "x");
			Function g = new Function("g", "f(x)^2", "x");
			g.addDefinitions(f);
			String expStr = "g(x)";
			TestCommonTools.consolePrintTestExprStart(103, expStr);
			Expression testExp = new Expression(expStr, new Argument("x", 3));
			testExp.addDefinitions(g);
			double value = testExp.calculate();
			double reg = 81;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0104() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f", "sin(x)", "x");
			Function g = new Function("g", "cos(x)", "x");
			String expStr = "der( f(x)*g(x), x) - ( der(f(x), x)*g(x) + f(x)*der(g(x), x) )";
			TestCommonTools.consolePrintTestExprStart(104, expStr);
			Expression testExp = new Expression(expStr, new Argument("x", 3));
			testExp.addDefinitions(f, g);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0105() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f", "sin(x)", "x");
			Function g = new Function("g", "cos(x)", "x");
			String expStr = "der( f(x)/g(x), x) - ( der(f(x), x)*g(x) - f(x)*der(g(x), x) )/g(x)^2";
			TestCommonTools.consolePrintTestExprStart(105, expStr);
			Expression testExp = new Expression(expStr, new Argument("x", 3));
			testExp.addDefinitions(f, g);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0106() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f", "sin(x)", "x");
			String expStr = "der( int(f(t), t, 0, x), x) - f(x)";
			TestCommonTools.consolePrintTestExprStart(106, expStr);
			Expression testExp = new Expression(expStr, new Argument("x", 3));
			testExp.addDefinitions(f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.0001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0107() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f", "sin(x)", "x");
			Function g = new Function("g", "cos(x)", "x");
			String expStr = "der(f(x)+g(x), x) - ( der(f(x), x) + der(g(x),x) )";
			TestCommonTools.consolePrintTestExprStart(107, expStr);
			Expression testExp = new Expression(expStr, new Argument("x", 3));
			testExp.addDefinitions(f, g);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0108() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument a = new Argument("a",2);
			Argument b = new Argument("b",2);
			Function f = new Function("f", "sin(x)", "x");
			Function g = new Function("g", "cos(x)", "x");
			String expStr = "der(a*f(x)+b*g(x), x) - ( a*der(f(x), x) + b*der(g(x),x) )";
			TestCommonTools.consolePrintTestExprStart(108, expStr);
			Expression testExp = new Expression(expStr, new Argument("x", 3), a, b);
			testExp.addDefinitions(f, g);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0109() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f", "sin(x)", "x");
			Function g = new Function("g", "cos(x)", "x");
			Function h = new Function("h", "x^2", "x");
			String expStr = "der(f(x)*g(x)*h(x), x) - ( der(f(x), x)*g(x)*h(x) + f(x)*der(g(x), x)*h(x) + f(x)*g(x)*der(h(x), x))";
			TestCommonTools.consolePrintTestExprStart(109, expStr);
			Expression testExp = new Expression(expStr, new Argument("x", 3));
			testExp.addDefinitions(f, g, h);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0110() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f", "sin(x)", "x");
			String expStr = "der(ln(f(x)), x) - der(f(x), x) / f(x)";
			TestCommonTools.consolePrintTestExprStart(110, expStr);
			Expression testExp = new Expression(expStr, new Argument("x", 3));
			testExp.addDefinitions(f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0111() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f", "sin(x)", "x");
			Argument a = new Argument("a",Math.PI);
			String expStr = "der( f(x)^a, x) - a*f(x)^(a-1)*der(f(x), x)";
			TestCommonTools.consolePrintTestExprStart(111, expStr);
			Expression testExp = new Expression(expStr, new Argument("x", 3),a);
			testExp.addDefinitions(f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0112() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f", "sin(x)^2", "x");
			Function g = new Function("g", "cos(x)^2", "x");
			String expStr = "der( f(x)^g(x), x) - f(x)^g(x)*( der(f(x), x)*g(x)/f(x) + der(g(x), x)*ln(f(x)) )";
			TestCommonTools.consolePrintTestExprStart(112, expStr);
			Expression testExp = new Expression(expStr, new Argument("x", 3));
			testExp.addDefinitions(f, g);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0113() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			Function f = new Function("f", "sin(x)", "x");
			Function g = new Function("g", "cos(x)", "x");
			Function h = new Function("h", "int(f(t),t,0,x)", "x");
			h.addDefinitions(f);
			Argument a = new Argument("a", 2);
			Argument b = new Argument("b", 4);
			Argument x = new Argument("x", 3);
			String expStr = "int(f(x)*g(x),x,a,b) - ( h(b)*g(b)-h(a)*g(a) - int( h(x)*der(g(x),x), x, a, b) )";
			TestCommonTools.consolePrintTestExprStart(113, expStr);
			Expression testExp = new Expression(expStr, x, a, b);
			testExp.addDefinitions(f, g, h);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0114() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f", "ln(x)", "x");
			Function g = new Function("g", "x^2+2", "x");
			Argument x = new Argument("x", 10);
			Argument t = new Argument("t", "g(x)", x);
			t.addDefinitions(g);
			String expStr = "der( f(g(x)), x) - der( f(t), t)*der( g(x), x)";
			TestCommonTools.consolePrintTestExprStart(114, expStr);
			Expression testExp = new Expression(expStr, x, t);
			testExp.addDefinitions(f, g);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0115() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n");
			RecursiveArgument fact1 = new RecursiveArgument("fact1", "n*fact1(n-1)", n);
			fact1.addBaseCase(0, 1);
			RecursiveArgument fact2 = new RecursiveArgument("fact2", "if(n>0, n*fact2(n-1), 1)", n);
			String expStr = "sum(i,0,10,fact1(i)-fact2(i))";
			TestCommonTools.consolePrintTestExprStart(115, expStr);
			Expression testExp = new Expression(expStr, fact1, fact2);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0116() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n");
			RecursiveArgument fib1 = new RecursiveArgument("fib1", "fib1(n-1)+fib1(n-2)", n);
			fib1.addBaseCase(0, 0);
			fib1.addBaseCase(1, 1);
			RecursiveArgument fib2 = new RecursiveArgument("fib2", "if( n>1, fib2(n-1)+fib2(n-2), if(n=1,1,0) )", n);
			String expStr = "sum(i,0,10,fib1(i)-fib2(i))";
			TestCommonTools.consolePrintTestExprStart(116, expStr);
			Expression testExp = new Expression(expStr, fib1, fib2);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0117() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function Cnk = new Function("Cnk","if( k>0, if( k<n, Cnk(n-1,k-1)+Cnk(n-1,k), 1), 1)","n", "k");
			String expStr = "C(10,5)-Cnk(10,5)";
			TestCommonTools.consolePrintTestExprStart(117, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(Cnk);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0118() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n");
			RecursiveArgument fib1 = new RecursiveArgument("fib1", "fib1(n-1)+fib1(n-2)", n);
			fib1.addBaseCase(0, 0);
			fib1.addBaseCase(1, 1);
			RecursiveArgument fib2 = new RecursiveArgument("fib2", "if( n>1, fib2(n-1)+fib2(n-2), if(n>0,1,0) )", n);
			Function fib3 = new Function("fib3","if(n>1, fib3(n-1)+fib3(n-2), if(n>0,1,0))","n");
			String expStr = "sum(i,1,10,(fib1(i) = fib2(i)) & (fib2(i) = fib3(i)) )";
			TestCommonTools.consolePrintTestExprStart(118, expStr);
			Expression testExp = new Expression(expStr, fib1, fib2);
			testExp.addDefinitions(fib3);
			double value = testExp.calculate();
			double reg = 10;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0119() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument m = new Argument("m");
			Argument n = new Argument("n", "m-1", m);
			Argument x = new Argument("x",3);
			Function H = new Function("H","if(m>1, 2*x*H(n,x)-2*n*H(n-1,x), if(m>0, 2*x, 1) )", m, x, n);
			H.setParametersNumber(2);
			String expStr = "H(0,x) + H(1,x) + H(2,x) + H(3,x) - ( (1) + (2*x) + (4*x^2-2) + (8*x^3-12*x) )";
			TestCommonTools.consolePrintTestExprStart(119, expStr);
			Expression testExp = new Expression(expStr, x);
			testExp.addDefinitions(H);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0120() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument m = new Argument("m",4);
			Argument n = new Argument("n", "m-1", m);
			Argument x = new Argument("x",3);
			Function H = new Function("H","if(m>1, 2*x*H(n,x)-2*n*H(n-1,x), if(m>0, 2*x, 1) )", m, x, n);
			H.setParametersNumber(2);
			Argument k = new Argument("k",5);
			String expStr = "der( H(k,x), x) - 2*k*H(k-1,x)";
			TestCommonTools.consolePrintTestExprStart(120, expStr);
			Expression testExp = new Expression(expStr, x,k );
			testExp.addDefinitions(H);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.0001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0121() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function T = new Function("T","if(k>1, 2*x*T(k-1,x)-T(k-2,x), if(k>0, x, 1) )", "k", "x");
			Argument k = new Argument("k",5);
			Argument x = new Argument("x",3);
			String expStr = "T(k,x) - ( (x + sqrt(x^2-1))^k + (x - sqrt(x^2-1))^k)/2";
			TestCommonTools.consolePrintTestExprStart(121, expStr);
			Expression testExp = new Expression(expStr, x,k );
			testExp.addDefinitions(T);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0122() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function T1 = new Function("T1","if(k>1, 2*x*T1(k-1,x)-T1(k-2,x), if(k>0, x, 1) )", "k", "x");
			Function T2 = new Function("T2","if(x >= 1, cosh(k*arcosh(x)), if(x <= -1, ((-1)^k)*cosh(k*arcosh(-x)), cos(k*acos(x))) )", "k", "x");
			Argument k = new Argument("k",5);
			String expStr = "T1(k,3)-T2(k,3) + T1(k,-3)-T2(k,-3) + T1(k,-0.5)-T2(k,-0.5) + T1(k,0.5)-T2(k,0.5)";
			TestCommonTools.consolePrintTestExprStart(122, expStr);
			Expression testExp = new Expression(expStr, k);
			testExp.addDefinitions(T1, T2);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0123() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "pi+e+[gam]+[phi]+[PN]+[B*]+[F'd]+[F'a]+[C2]+[M1]+[B2]+[B4]+[BN'L]+[Kat]+[K*]+[K.]+[B'L]+[RS'm]+[EB'e]+[Bern]+[GKW'l]+[HSM's]+[lm]+[Cah]+[Ll]+[AG]+[L*]+[L.]+[Dz3]+[A3n]+[Bh]+[Pt]+[L2]+[Nv]+[Ks]+[Kh]+[FR]+[La]+[P2]+[Om]+[MRB]+[li2]+[EG]";
			TestCommonTools.consolePrintTestExprStart(123, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
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
			if ( MathFunctions.abs(value - reg) <= 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0124() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument m = new Argument("m",4);
			Argument n = new Argument("n", "m-1", m);
			Argument x = new Argument("x",3);
			Function H = new Function("H","if(m>1, 2*x*H(n,x)-2*n*H(n-1,x), if(m>0, 2*x, 1) )", m, x, n);
			H.setParametersNumber(2);
			Argument k = new Argument("k",5);
			String expStr = "der( H(k,x), x) - 2*k*H(k-1,x)";
			Expression testExp = new Expression(expStr, x,k );
			testExp.addDefinitions(H);
			bool syn1 = testExp.checkSyntax();
			m.setArgumentName("m1");
			bool syn2 = testExp.getSyntaxStatus();
			if ((syn1) && (!syn2))
				testResult = true;
			double value= 0; if (syn2)  value = 1;
			double reg = 0;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0125() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2==2";
			TestCommonTools.consolePrintTestExprStart(125, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0126() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2 != 3";
			TestCommonTools.consolePrintTestExprStart(126, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0127() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2 ~= 3";
			TestCommonTools.consolePrintTestExprStart(127, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0128() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1 && 1";
			TestCommonTools.consolePrintTestExprStart(128, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0129() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1 || -1";
			TestCommonTools.consolePrintTestExprStart(129, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0130() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "~1";
			TestCommonTools.consolePrintTestExprStart(130, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0131() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2+~(1-1)!";
			TestCommonTools.consolePrintTestExprStart(131, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0132() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			String expStr = "if( int(2*x,x,0,pi) > 0 , 1, 2)";
			TestCommonTools.consolePrintTestExprStart(132, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0133() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x",2);
			String expStr = "if( -int(2*x,x,0,pi) > 0 , 1, 2)";
			TestCommonTools.consolePrintTestExprStart(133, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0134() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.00000001);
			String expStr = "sum(n, 0, 10, if ( if( sin(n*pi/2) > 0, 1, 2) >= 2, 4, 2) )";
			TestCommonTools.consolePrintTestExprStart(134, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 38;
			if ( value == reg )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0135() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sin(0)";
			TestCommonTools.consolePrintTestExprStart(135, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0136() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "cos(0) - 1";
			TestCommonTools.consolePrintTestExprStart(136, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0137() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "tan(0) - 0";
			TestCommonTools.consolePrintTestExprStart(137, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0138() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "tg(0) - 0";
			TestCommonTools.consolePrintTestExprStart(138, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0139() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ctan(pi/2) - 0";
			TestCommonTools.consolePrintTestExprStart(139, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0140() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ctg(pi/2) - 0";
			TestCommonTools.consolePrintTestExprStart(140, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0141() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "cot(pi/2) - 0";
			TestCommonTools.consolePrintTestExprStart(141, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0142() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sec(0) - 1";
			TestCommonTools.consolePrintTestExprStart(142, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0143() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "cosec(pi/2) - 1";
			TestCommonTools.consolePrintTestExprStart(143, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0144() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "csc(pi/2) - 1";
			TestCommonTools.consolePrintTestExprStart(144, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0145() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "asin(0.5) - pi/6";
			TestCommonTools.consolePrintTestExprStart(145, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0146() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arsin(0) - 0";
			TestCommonTools.consolePrintTestExprStart(146, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0147() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcsin(1) - pi/2";
			TestCommonTools.consolePrintTestExprStart(147, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0148() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "acos(0) - pi/2";
			TestCommonTools.consolePrintTestExprStart(148, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0149() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcos(0.5) - pi/3";
			TestCommonTools.consolePrintTestExprStart(149, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0150() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arccos(-1) - pi";
			TestCommonTools.consolePrintTestExprStart(150, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0151() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "atan(0) - 0";
			TestCommonTools.consolePrintTestExprStart(151, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0152() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arctan(1) - pi/4";
			TestCommonTools.consolePrintTestExprStart(152, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0153() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "atg(1) - pi/4";
			TestCommonTools.consolePrintTestExprStart(153, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0154() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arctg(1) - pi/4";
			TestCommonTools.consolePrintTestExprStart(154, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0155() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "actan(0) - pi/2";
			TestCommonTools.consolePrintTestExprStart(155, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0156() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcctan(1) - pi/4";
			TestCommonTools.consolePrintTestExprStart(156, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0157() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "actg(1) - pi/4";
			TestCommonTools.consolePrintTestExprStart(157, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0158() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcctg(1) - pi/4";
			TestCommonTools.consolePrintTestExprStart(158, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0159() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "acot(1) - pi/4";
			TestCommonTools.consolePrintTestExprStart(159, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0160() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arccot(1) - pi/4";
			TestCommonTools.consolePrintTestExprStart(160, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0161() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ln(e) - 1";
			TestCommonTools.consolePrintTestExprStart(161, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0162() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ln(e^2) - 2";
			TestCommonTools.consolePrintTestExprStart(162, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0163() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "log2(8) - 3";
			TestCommonTools.consolePrintTestExprStart(163, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0164() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "log10(1000) - 3";
			TestCommonTools.consolePrintTestExprStart(164, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0165() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "rad(180) - pi";
			TestCommonTools.consolePrintTestExprStart(165, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0166() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "exp(2) - e^2";
			TestCommonTools.consolePrintTestExprStart(166, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0167() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sqrt(25) - 5";
			TestCommonTools.consolePrintTestExprStart(167, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0168() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sinh(ln([phi])) - 0.5";
			TestCommonTools.consolePrintTestExprStart(168, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0169() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "cosh(ln([phi])) - 0.5*sqrt(5)";
			TestCommonTools.consolePrintTestExprStart(169, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0170() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "tanh(ln([phi])) - 1/sqrt(5)";
			TestCommonTools.consolePrintTestExprStart(170, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0171() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "tgh(ln([phi])) - 1/sqrt(5)";
			TestCommonTools.consolePrintTestExprStart(171, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0172() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ctanh(ln([phi])) - sqrt(5)";
			TestCommonTools.consolePrintTestExprStart(172, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0173() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "coth(ln([phi])) - sqrt(5)";
			TestCommonTools.consolePrintTestExprStart(173, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0174() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ctgh(ln([phi])) - sqrt(5)";
			TestCommonTools.consolePrintTestExprStart(174, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0175() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sech(ln([phi])) - 1/(0.5*sqrt(5))";
			TestCommonTools.consolePrintTestExprStart(175, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0176() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "csch(ln([phi])) - 2";
			TestCommonTools.consolePrintTestExprStart(176, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0177() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "cosech(ln([phi])) - 2";
			TestCommonTools.consolePrintTestExprStart(177, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0178() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "deg(pi) - 180";
			TestCommonTools.consolePrintTestExprStart(178, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0179() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "abs(-1) - 1";
			TestCommonTools.consolePrintTestExprStart(179, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0180() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sgn(1) - 1";
			TestCommonTools.consolePrintTestExprStart(180, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0181() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sgn(0) - 0";
			TestCommonTools.consolePrintTestExprStart(181, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0182() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "floor(1.2) - 1";
			TestCommonTools.consolePrintTestExprStart(182, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0183() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "floor(1.9) - 1";
			TestCommonTools.consolePrintTestExprStart(183, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0184() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "floor(-1.9) - (-2)";
			TestCommonTools.consolePrintTestExprStart(184, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0185() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ceil(1.2) - 2";
			TestCommonTools.consolePrintTestExprStart(185, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0186() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ceil(1.9) - 2";
			TestCommonTools.consolePrintTestExprStart(186, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0187() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ceil(-1.2) - (-1)";
			TestCommonTools.consolePrintTestExprStart(187, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0188() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "asinh(0.5) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(188, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0189() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arsinh(0.5) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(189, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0190() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "acosh(0.5*sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(190, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0191() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcosh(0.5*sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(191, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0192() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arccosh(0.5*sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(192, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0193() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "atanh(1/sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(193, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0194() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arctanh(1/sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(194, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0195() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "atgh(1/sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(195, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0196() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arctgh(1/sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(196, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0197() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "actanh(sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(197, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0198() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcctanh(sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(198, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0199() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "acoth(sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(199, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0200() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcoth(sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(200, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0201() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arccoth(sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(201, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0202() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "actgh(sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(202, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0203() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcctgh(sqrt(5)) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(203, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0204() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "asech(1/(0.5*sqrt(5))) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(204, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0205() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arsech(1/(0.5*sqrt(5))) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(205, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0206() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcsech(1/(0.5*sqrt(5))) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(206, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0207() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "acsch(2) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(207, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0208() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcsch(2) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(208, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0209() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arccsch(2) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(209, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0210() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "acosech(2) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(210, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0211() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcosech(2) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(211, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0212() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arccosech(2) - ln([phi])";
			TestCommonTools.consolePrintTestExprStart(212, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0213() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "log(2,8) - 3";
			TestCommonTools.consolePrintTestExprStart(213, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0214() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "min(2,3) - 2";
			TestCommonTools.consolePrintTestExprStart(214, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0215() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "max(2,3) - 3";
			TestCommonTools.consolePrintTestExprStart(215, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0216() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mod(10,6) - 4";
			TestCommonTools.consolePrintTestExprStart(216, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0217() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "if(1,2,3) - 2";
			TestCommonTools.consolePrintTestExprStart(217, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0218() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "if(0,2,3) - 3";
			TestCommonTools.consolePrintTestExprStart(218, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0219() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "iff(1, 2) - 2";
			TestCommonTools.consolePrintTestExprStart(219, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0220() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "iff(0, 2)";
			TestCommonTools.consolePrintTestExprStart(220, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0221() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "iff(0, 2, 1, 2) - 2";
			TestCommonTools.consolePrintTestExprStart(221, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0222() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "iff(0, 2, 1, 2, 3, 4) - 2";
			TestCommonTools.consolePrintTestExprStart(222, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0223() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "iff(0, 2, 1, 2, 0, 4) - 2";
			TestCommonTools.consolePrintTestExprStart(223, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0224() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "iff(0, 2, 0, 2, 1, 4) - 4";
			TestCommonTools.consolePrintTestExprStart(224, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0225() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "iff(0, 2, 0, 2, 0, 4)";
			TestCommonTools.consolePrintTestExprStart(225, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0226() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 2);
			String expStr = "Sinc(x) - prod(n, 1, 16, cos(x / 2^n) )";
			TestCommonTools.consolePrintTestExprStart(226, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0227() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 2);
			String expStr = "sinc(x) - prod(n, 1, 100, (1 - x^2 / n^2) )";
			TestCommonTools.consolePrintTestExprStart(227, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0228() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 2);
			String expStr = "Sa(x) - prod(n, 1, 100, (1 - x^2 / n^2) )";
			TestCommonTools.consolePrintTestExprStart(228, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0229() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n", 10);
			String expStr = "Bell(n) - sum(k, 0, n, Stirl2(n,k) )";
			TestCommonTools.consolePrintTestExprStart(229, expStr);
			Expression testExp = new Expression(expStr, n);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0230() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n", 10);
			Argument k = new Argument("k", 5);
			String expStr = "Worp(n, k) - k! * Stirl2(n+1, k+1)";
			TestCommonTools.consolePrintTestExprStart(230, expStr);
			Expression testExp = new Expression(expStr, n, k);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0231() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n", 10);
			String expStr = "Bern(n,0) - sum(k, 0, n, ( (-1)^k )* ( Worp(n, k) / ( k+1 ) ) )";
			TestCommonTools.consolePrintTestExprStart(231, expStr);
			Expression testExp = new Expression(expStr, n);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0232() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument n = new Argument("n", 15);
			Argument k = new Argument("k", 5);
			String expStr = "sum(p, k, n, Stirl1(n, p) * C(p,k)) - Stirl1(n+1, k+1)";
			TestCommonTools.consolePrintTestExprStart(232, expStr);
			Expression testExp = new Expression(expStr, n, k);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0233() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr =
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
			"cHi(2, 0, 2)"
			;
			TestCommonTools.consolePrintTestExprStart(233, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 8;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0234() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2 + 10#7 + 3";
			TestCommonTools.consolePrintTestExprStart(234, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 8;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0235() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 5);
			String expStr = "int( chi(t, 0, x), t, 0, x) - x";
			TestCommonTools.consolePrintTestExprStart(235, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0236() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 5);
			String expStr = "int( CHi(t, 0, x), t, 0, x) - x";
			TestCommonTools.consolePrintTestExprStart(236, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0237() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 5);
			String expStr = "int( Chi(t, 0, x), t, 0, x) - x";
			TestCommonTools.consolePrintTestExprStart(237, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0238() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 5);
			String expStr = "int( cHi(t, 0, x), t, 0, x) - x";
			TestCommonTools.consolePrintTestExprStart(238, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0239() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ConFrac(1,2,3,5,6,7) - ConPol(1,2,3,4,5,6,7) / ConPol(2,3,4,5,6,7)";
			TestCommonTools.consolePrintTestExprStart(239, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0240() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "min(1,2,3,4,5,-5,343,3)";
			TestCommonTools.consolePrintTestExprStart(240, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -5;
			if ( MathFunctions.abs(reg - value) < 0.0001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0241() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "max(1,2,3,4,5,-5,343,3)";
			TestCommonTools.consolePrintTestExprStart(241, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 343;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0242() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 0.5);
			String expStr = "ConPol(x,x,x,x,x,x) - sum(k, 0, 6, C(6-k, k) * x^(6-2*k))";
			TestCommonTools.consolePrintTestExprStart(242, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0243() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument m = new Argument("m", 5);
			Argument n = new Argument("n", 10);
			String expStr = "Euler(n,m) -  sum(k,0,m, C(n+1,k)*((m+1-k)^n)*(-1)^k)";
			TestCommonTools.consolePrintTestExprStart(243, expStr);
			Expression testExp = new Expression(expStr, n, m);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0244() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 2);
			Function f = new Function("f", "sin(x)+cos(x)", "x");
			String expStr = "diff(f(x), x) - ( f(x+1)-f(x) )";
			TestCommonTools.consolePrintTestExprStart(244, expStr);
			Expression testExp = new Expression(expStr, x);
			testExp.addDefinitions(f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0245() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 2);
			Argument dh = new Argument("h", 1);
			Function f = new Function("f", "sin(x)+cos(x)", "x");
			String expStr = "diff(f(x), x, h/2) - ( f(x+h/2)-f(x) )";
			TestCommonTools.consolePrintTestExprStart(245, expStr);
			Expression testExp = new Expression(expStr, x, dh);
			testExp.addDefinitions(f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0246() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 2);
			Function f = new Function("f", "sin(x)+cos(x)", "x");
			String expStr = "difb(f(x), x) - ( f(x)-f(x-1) )";
			TestCommonTools.consolePrintTestExprStart(246, expStr);
			Expression testExp = new Expression(expStr, x);
			testExp.addDefinitions(f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0247() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 2);
			Argument dh = new Argument("h", 1);
			Function f = new Function("f", "sin(x)+cos(x)", "x");
			String expStr = "difb(f(x), x, h/2) - ( f(x)-f(x-h/2) )";
			TestCommonTools.consolePrintTestExprStart(247, expStr);
			Expression testExp = new Expression(expStr, x, dh);
			testExp.addDefinitions(f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0248() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function fibr = new Function("fib","if(n>1, fib(n-1)+fib(n-2), if(n>0,1,0))","n");
			String expStr = "sum(i,0,10,Fib(i) - fib(i))";
			TestCommonTools.consolePrintTestExprStart(248, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(fibr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0249() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function luc = new Function("luc","if(n>1, luc(n-1)+luc(n-2), if(n>0,1,2))","n");
			String expStr = "sum(i,0,10,Luc(i) - luc(i))";
			TestCommonTools.consolePrintTestExprStart(249, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(luc);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0250() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(i,1,10,harm(i)) - sum(i,1,10,sum(k,1,i,1/k))";
			TestCommonTools.consolePrintTestExprStart(250, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0251() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p --> q";
			TestCommonTools.consolePrintTestExprStart(251, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0252() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p <-- q";
			TestCommonTools.consolePrintTestExprStart(252, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0253() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p <-- q";
			TestCommonTools.consolePrintTestExprStart(253, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0254() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p <-> q";
			TestCommonTools.consolePrintTestExprStart(254, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0255() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p (+) q";
			TestCommonTools.consolePrintTestExprStart(255, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0256() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p /\\ q";
			TestCommonTools.consolePrintTestExprStart(256, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0257() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p \\/ q";
			TestCommonTools.consolePrintTestExprStart(257, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0258() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p ~& q";
			TestCommonTools.consolePrintTestExprStart(258, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0259() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p ~&& q";
			TestCommonTools.consolePrintTestExprStart(259, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0260() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p ~/\\ q";
			TestCommonTools.consolePrintTestExprStart(260, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0261() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p ~| q";
			TestCommonTools.consolePrintTestExprStart(261, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0262() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p ~|| q";
			TestCommonTools.consolePrintTestExprStart(262, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0263() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "p ~\\/ q";
			TestCommonTools.consolePrintTestExprStart(263, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0264() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			Constant rr = new Constant("r",1);
			String expStr = "(p /\\ q) \\/ (~p) \\/ (~q)";
			TestCommonTools.consolePrintTestExprStart(264, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q, rr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0265() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			Constant rr = new Constant("r",1);
			String expStr = "(p --> q) <-> (~q --> ~p)";
			TestCommonTools.consolePrintTestExprStart(265, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q, rr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0266() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			Constant rr = new Constant("r",1);
			String expStr = "( (p --> q) /\\ (q --> r) ) --> (p --> r)";
			TestCommonTools.consolePrintTestExprStart(266, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q, rr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0267() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			Constant rr = new Constant("r",1);
			String expStr = "( (p \\/ q) /\\ (p --> r) /\\ (q --> r) ) --> r";
			TestCommonTools.consolePrintTestExprStart(267, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q, rr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0268() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			String expStr = "~(p /\\ q) <-> (~p \\/ ~q)";
			TestCommonTools.consolePrintTestExprStart(268, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(p, q);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0269() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "gcd(1)";
			TestCommonTools.consolePrintTestExprStart(269, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0270() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "gcd(12,9)";
			TestCommonTools.consolePrintTestExprStart(270, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0271() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "gcd(12,6,18)";
			TestCommonTools.consolePrintTestExprStart(271, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 6;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0272() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "lcm(1)";
			TestCommonTools.consolePrintTestExprStart(272, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0273() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "lcm(12,9)";
			TestCommonTools.consolePrintTestExprStart(273, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 36;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0274() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "lcm(12,6,18)";
			TestCommonTools.consolePrintTestExprStart(274, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 36;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0275() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(i,1,10,harm(i)) - sum(i,1,10,Harm(1,i))";
			TestCommonTools.consolePrintTestExprStart(275, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0276() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1/4*2";
			TestCommonTools.consolePrintTestExprStart(276, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.5;
			if (MathFunctions.abs(reg - value) < 0.00001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0277() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "n1_geq_2(0)";
			Constant c1 = new Constant("c1", 0.25+0.01);
			RecursiveArgument z1 = new RecursiveArgument("z1","z1(n-1)^2+c1", "n");
			z1.addDefinitions(c1);
			z1.addBaseCase(0, 0);
			Function n1_geq_2 = new Function("n1_geq_2", "if( z1(k) > 2, k, n1_geq_2(k+1) )", "k");
			n1_geq_2.addDefinitions(z1);
			mXparser.consolePrint(c1.getConstantName() + " = " + c1.getConstantValue() + " ; " + z1.getArgumentName() + " = " + z1.getArgumentExpressionString() + " ; " + n1_geq_2.getFunctionName() + " = " + n1_geq_2.getFunctionExpressionString() + " ; " + expStr + " ...... ");
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(n1_geq_2);
			double value = testExp.calculate();
			double reg = 30;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0278() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "n2_geq_2(0)";
			Constant c2 = new Constant("c2", 0.25+0.01);
			Function z2 = new Function("z2","if( n>0, z2(n-1)^2+c2, 0)", "n");
			z2.addDefinitions(c2);
			Function n2_geq_2 = new Function("n2_geq_2", "if( z2(k) > 2, k, n2_geq_2(k+1) )", "k");
			n2_geq_2.addDefinitions(z2);
			mXparser.consolePrint(c2.getConstantName() + " = " + c2.getConstantValue() + " ; " + z2.getFunctionName() + " = " + z2.getFunctionExpressionString() + " ; " + n2_geq_2.getFunctionName() + " = " + n2_geq_2.getFunctionExpressionString() + " ; " + expStr + " ...... ");
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(n2_geq_2);
			double value = testExp.calculate();
			double reg = 30;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0279() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "n1_geq_2(0) - n2_geq_2(0)";
			Constant c1 = new Constant("c1", 0.25+0.01);
			RecursiveArgument z1 = new RecursiveArgument("z1","z1(n-1)^2+c1", "n");
			z1.addDefinitions(c1);
			z1.addBaseCase(0, 0);
			Function n1_geq_2 = new Function("n1_geq_2", "if( z1(k) > 2, k, n1_geq_2(k+1) )", "k");
			n1_geq_2.addDefinitions(z1);
			Constant c2 = new Constant("c2", 0.25+0.01);
			Function z2 = new Function("z2","if( n>0, z2(n-1)^2+c2, 0)", "n");
			z2.addDefinitions(c2);
			Function n2_geq_2 = new Function("n2_geq_2", "if( z2(k) > 2, k, n2_geq_2(k+1) )", "k");
			n2_geq_2.addDefinitions(z2);
			TestCommonTools.consolePrintTestExprStart(279, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(n1_geq_2, n2_geq_2);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0280() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(i, 1, 20, IsPrime(i) )";
			Function IsFactor = new Function("IsFactor", "if( a>b, 0, if( n#a = 0, 1, IsFactor(n, a+1, b) ) )", "n", "a", "b");
			Function IsPrime = new Function("IsPrime", "if( n<2, 0, ~IsFactor(n, 2, sqrt(n)) )", "n");
			IsPrime.addDefinitions(IsFactor);
			TestCommonTools.consolePrintTestExprStart(280, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(IsPrime);
			double value = testExp.calculate();
			double reg = 8;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0281() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			String expStr = "abs( sin(0.5)-s(0.5))+abs( cos(0.7)-c(0.7) )";
			Constant aa = new Constant("a", 0.00001);
			Function ss = new Function("s", "if( abs(x) < a, x, 2*s(x/2)*c(x/2) )", "x");
			Function cc = new Function("c", "if( abs(x) < a, 1, c(x/2)^2 - s(x/2)^2 )", "x");
			ss.addDefinitions(aa);
			ss.addDefinitions(cc);
			cc.addDefinitions(aa);
			cc.addDefinitions(ss);
			TestCommonTools.consolePrintTestExprStart(281, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(ss, cc);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0282() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "f1(1,2)-f2(1,2)";
			Function f1 = new Function("f1", "sin(x)+cos(y)", "x", "y");
			Function f2 = new Function("f2(x,y) = sin(x)+cos(y)");
			TestCommonTools.consolePrintTestExprStart(282, expStr);
			Expression testExp = new Expression(expStr);
			testExp.addDefinitions(f1, f2);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0283() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "a = 5.1, expr = 2*a";
			Constant a1 = new Constant("a = 5.1");
			TestCommonTools.consolePrintTestExprStart(283, expStr);
			Expression testExp = new Expression("2*a");
			testExp.addDefinitions(a1);
			double value = testExp.calculate();
			double reg = 10.2;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0284() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "a = sin(pi/2), expr = a";
			Constant a2 = new Constant("a = sin(pi/2)");
			TestCommonTools.consolePrintTestExprStart(284, expStr);
			Expression testExp = new Expression("a");
			testExp.addDefinitions(a2);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0285() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "fib(n)= fib(n-1)+fib(n-2), fib(10) = ";
			TestCommonTools.consolePrintTestExprStart(285, expStr);
			RecursiveArgument fib10 = new RecursiveArgument("fib(n)= fib(n-1)+fib(n-2)");
			fib10.addBaseCase(0, 0);
			fib10.addBaseCase(1, 1);
			Expression testExp = new Expression("fib(10)", fib10);
			double value = testExp.calculate();
			double reg = 55;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0286() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "fib(n) = if(n>1, fib(n-1) + fib(n-2), if(n = 1, 1, 0)), fib(10) = ";
			TestCommonTools.consolePrintTestExprStart(286, expStr);
			Function fibb = new Function("fib(n) = if(n>1, fib(n-1) + fib(n-2), if(n = 1, 1, 0))");
			Expression testExp = new Expression("fib(10)", fibb);
			double value = testExp.calculate();
			double reg = 55;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0287() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "5^2 * 7^3 * 11^1 * 67^1 * 49201^1";
			TestCommonTools.consolePrintTestExprStart(287, expStr);
			Expression testExp = new Expression(expStr);
			String hello = StringUtils.numberToAsciiString(testExp.calculate());
			String regHello = "Hello";
			if ( regHello.Equals(hello) )
				testResult = true;
			mXparser.consolePrint(hello + " reg ... " + regHello + " --> ");
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0288() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "71^1 * 218549^1 * 6195547^1";
			TestCommonTools.consolePrintTestExprStart(288, expStr);
			Expression testExp = new Expression(expStr);
			String world = StringUtils.numberToAsciiString(testExp.calculate());
			String regWorld = "World!";
			if ( regWorld.Equals(world) )
				testResult = true;
			mXparser.consolePrint(world + " reg ... " + regWorld + " --> ");
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0289() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "min(3,4)+max(-2,-1)";
			TestCommonTools.consolePrintTestExprStart(289, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0290() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(i, 0, 1000, ispr(i) )";
			TestCommonTools.consolePrintTestExprStart(290, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0291() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(50);
			String expStr = "sum(i, 0, 1000, ispr(i) )";
			TestCommonTools.consolePrintTestExprStart(291, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0292() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(55);
			String expStr = "sum(i, 0, 1000, ispr(i) )";
			TestCommonTools.consolePrintTestExprStart(292, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0293() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(97);
			String expStr = "sum(i, 0, 1000, ispr(i) )";
			TestCommonTools.consolePrintTestExprStart(293, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0294() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(99);
			String expStr = "sum(i, 0, 1000, ispr(i) )";
			TestCommonTools.consolePrintTestExprStart(294, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0295() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(101);
			String expStr = "sum(i, 0, 1000, ispr(i) )";
			TestCommonTools.consolePrintTestExprStart(295, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0296() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(999);
			String expStr = "sum(i, 0, 1000, ispr(i) )";
			TestCommonTools.consolePrintTestExprStart(296, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0297() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(2000);
			String expStr = "sum(i, 0, 1000, ispr(i) )";
			TestCommonTools.consolePrintTestExprStart(297, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0298() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setNoPrimesCache();
			String expStr = "Pi(1000)";
			TestCommonTools.consolePrintTestExprStart(298, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0299() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(50);
			String expStr = "Pi(1000)";
			TestCommonTools.consolePrintTestExprStart(299, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0300() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(55);
			String expStr = "Pi(1000)";
			TestCommonTools.consolePrintTestExprStart(300, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0301() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(97);
			String expStr = "Pi(1000)";
			TestCommonTools.consolePrintTestExprStart(301, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0302() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(99);
			String expStr = "Pi(1000)";
			TestCommonTools.consolePrintTestExprStart(302, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0303() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(101);
			String expStr = "Pi(1000)";
			TestCommonTools.consolePrintTestExprStart(303, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0304() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(999);
			String expStr = "Pi(1000)";
			TestCommonTools.consolePrintTestExprStart(304, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0305() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(2000);
			String expStr = "Pi(1000)";
			TestCommonTools.consolePrintTestExprStart(305, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0306() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Ei( ln([RS'm]) )";
			TestCommonTools.consolePrintTestExprStart(306, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0307() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "-e*Ei(-1) - [EG]";
			TestCommonTools.consolePrintTestExprStart(307, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0308() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			String expStr =	"abs( Ei(-1)  / (0.219383934395520274 * 10^0 ) ) + " +
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
			"abs( Ei(50) / (0.105856368971316910 * 10^21 ) ) - 26"
			;
			TestCommonTools.consolePrintTestExprStart(308, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0309() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x; -11; 11; [gam] + ln(abs(x)) + sum(k, 1, 50, x^k / (k*k!)) - Ei(x), 2)";
			TestCommonTools.consolePrintTestExprStart(309, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0310() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Li(0) + [li2]";
			TestCommonTools.consolePrintTestExprStart(310, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0311() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.initPrimesCache(10000000);
			String expStr = "Pi(10000000) / Li(10000000)";
			TestCommonTools.consolePrintTestExprStart(311, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0312() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = 100000000");
			String expStr = "( ( x / ln(x) ) * sum(k, 0, 20, k! / ln(x)^k ) ) / li(x)";
			TestCommonTools.consolePrintTestExprStart(312, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0313() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function fefe = new Function("fefe(x)=2*x");
			String expStr = "fefe(2) + fefe(3)";
			TestCommonTools.consolePrintTestExprStart(313, expStr);
			Expression testExp = new Expression(expStr, fefe);
			double value = testExp.calculate();
			double reg = 10;
			if (MathFunctions.abs(reg - value) < 0.00001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0314() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "add(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
			TestCommonTools.consolePrintTestExprStart(314, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 55;
			if (MathFunctions.abs(reg - value) < 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0315() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "multi(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
			TestCommonTools.consolePrintTestExprStart(315, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3628800;
			if (MathFunctions.abs(reg - value) < 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0316() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mean(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
			TestCommonTools.consolePrintTestExprStart(316, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 5.5;
			if (MathFunctions.abs(reg - value) < 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0317() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "var(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
			TestCommonTools.consolePrintTestExprStart(317, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 9.166666667;
			if (MathFunctions.abs(reg - value) < 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0318() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "std(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
			TestCommonTools.consolePrintTestExprStart(318, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3.027650354;
			if (MathFunctions.abs(reg - value) < 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0319() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "avg(i, 1, 10, i)";
			TestCommonTools.consolePrintTestExprStart(319, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 5.5;
			if (MathFunctions.abs(reg - value) < 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0320() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "vari(i, 1, 10, i)";
			TestCommonTools.consolePrintTestExprStart(320, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 9.166666667;
			if (MathFunctions.abs(reg - value) < 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0321() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "stdi(i, 1, 10, i)";
			TestCommonTools.consolePrintTestExprStart(321, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3.027650354;
			if (MathFunctions.abs(reg - value) < 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0322() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, -10, 10, i)";
			TestCommonTools.consolePrintTestExprStart(322, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -10;
			if (MathFunctions.abs(reg - value) < 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0323() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, -10, 10, i)";
			TestCommonTools.consolePrintTestExprStart(323, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10;
			if (MathFunctions.abs(reg - value) < 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0324() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 100000, [Uni])";
			TestCommonTools.consolePrintTestExprStart(324, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0325() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 100000, [Uni])";
			TestCommonTools.consolePrintTestExprStart(325, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0326() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "avg(i, 1, 100000, [Uni])";
			TestCommonTools.consolePrintTestExprStart(326, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.5;
			if (MathFunctions.abs(reg - value) < 1)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0327() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "vari(i, 1, 100000, [Uni])";
			TestCommonTools.consolePrintTestExprStart(327, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0 / 12.0;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0328() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "stdi(i, 1, 100000, [Uni])";
			TestCommonTools.consolePrintTestExprStart(328, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathFunctions.sqrt(1.0 / 12.0);
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0329() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 100000, [Int1])";
			TestCommonTools.consolePrintTestExprStart(329, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0330() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 100000, [Int1])";
			TestCommonTools.consolePrintTestExprStart(330, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -10;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0331() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "avg(i, 1, 100000, [Int1])";
			TestCommonTools.consolePrintTestExprStart(331, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) < 1)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0332() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "vari(i, 1, 100000, [Int1])";
			TestCommonTools.consolePrintTestExprStart(332, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = (Math.Pow(21.0, 2) - 1) / 12.0;
			if (MathFunctions.abs(reg - value) < 1)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0333() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "stdi(i, 1, 100000, [Int1])";
			TestCommonTools.consolePrintTestExprStart(333, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathFunctions.sqrt((Math.Pow(21.0, 2) - 1) / 12.0);
			if (MathFunctions.abs(reg - value) < 0.1)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0334() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 100000, [Int2])";
			TestCommonTools.consolePrintTestExprStart(334, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 100;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0335() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 100000, [Int2])";
			TestCommonTools.consolePrintTestExprStart(335, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -100;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0336() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 1000000, [Int3])";
			TestCommonTools.consolePrintTestExprStart(336, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1000;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0337() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 1000000, [Int3])";
			TestCommonTools.consolePrintTestExprStart(337, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -1000;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0338() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Int4])";
			TestCommonTools.consolePrintTestExprStart(338, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10000;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0339() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Int4])";
			TestCommonTools.consolePrintTestExprStart(339, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -10000;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0340() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Int5])";
			TestCommonTools.consolePrintTestExprStart(340, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 100000;
			if (MathFunctions.abs(reg - value) <= 10)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0341() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Int5])";
			TestCommonTools.consolePrintTestExprStart(341, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -100000;
			if (MathFunctions.abs(reg - value) <= 10)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0342() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Int6])";
			TestCommonTools.consolePrintTestExprStart(342, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1000000;
			if (MathFunctions.abs(reg - value) <= 100)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0343() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Int6])";
			TestCommonTools.consolePrintTestExprStart(343, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -1000000;
			if (MathFunctions.abs(reg - value) <= 100)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0344() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Int7])";
			TestCommonTools.consolePrintTestExprStart(344, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10000000;
			if (MathFunctions.abs(reg - value) <= 1000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0345() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Int7])";
			TestCommonTools.consolePrintTestExprStart(345, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -10000000;
			if (MathFunctions.abs(reg - value) <= 1000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0346() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Int8])";
			TestCommonTools.consolePrintTestExprStart(346, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 100000000;
			if (MathFunctions.abs(reg - value) <= 10000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0347() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Int8])";
			TestCommonTools.consolePrintTestExprStart(347, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -100000000;
			if (MathFunctions.abs(reg - value) <= 10000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0348() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Int9])";
			TestCommonTools.consolePrintTestExprStart(348, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1000000000;
			if (MathFunctions.abs(reg - value) <= 100000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0349() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Int9])";
			TestCommonTools.consolePrintTestExprStart(349, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -1000000000;
			if (MathFunctions.abs(reg - value) <= 100000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0350() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Int])";
			TestCommonTools.consolePrintTestExprStart(350, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2147483647;
			if (MathFunctions.abs(reg - value) <= 214748)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0351() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Int])";
			TestCommonTools.consolePrintTestExprStart(351, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -2147483648;
			if (MathFunctions.abs(reg - value) <= 214748)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0352() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 100000, [nat1])";
			TestCommonTools.consolePrintTestExprStart(352, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0353() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 100000, [nat1])";
			TestCommonTools.consolePrintTestExprStart(353, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0354() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 100000, [nat2])";
			TestCommonTools.consolePrintTestExprStart(354, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 100;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0355() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 100000, [nat2])";
			TestCommonTools.consolePrintTestExprStart(355, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0356() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 100000, [nat3])";
			TestCommonTools.consolePrintTestExprStart(356, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1000;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0357() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 100000, [nat3])";
			TestCommonTools.consolePrintTestExprStart(357, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0358() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 1000000, [nat3])";
			TestCommonTools.consolePrintTestExprStart(358, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1000;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0359() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 1000000, [nat3])";
			TestCommonTools.consolePrintTestExprStart(359, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0360() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [nat4])";
			TestCommonTools.consolePrintTestExprStart(360, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10000;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0361() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [nat4])";
			TestCommonTools.consolePrintTestExprStart(361, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0362() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [nat5])";
			TestCommonTools.consolePrintTestExprStart(362, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 100000;
			if (MathFunctions.abs(reg - value) <= 5)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0363() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [nat5])";
			TestCommonTools.consolePrintTestExprStart(363, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 5)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0364() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [nat6])";
			TestCommonTools.consolePrintTestExprStart(364, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1000000;
			if (MathFunctions.abs(reg - value) <= 50)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0365() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [nat6])";
			TestCommonTools.consolePrintTestExprStart(365, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 50)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0366() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [nat7])";
			TestCommonTools.consolePrintTestExprStart(366, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10000000;
			if (MathFunctions.abs(reg - value) <= 500)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0367() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [nat7])";
			TestCommonTools.consolePrintTestExprStart(367, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 500)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0368() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [nat8])";
			TestCommonTools.consolePrintTestExprStart(368, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 100000000;
			if (MathFunctions.abs(reg - value) <= 5000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0369() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [nat8])";
			TestCommonTools.consolePrintTestExprStart(369, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 5000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0370() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [nat9])";
			TestCommonTools.consolePrintTestExprStart(370, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1000000000;
			if (MathFunctions.abs(reg - value) <= 50000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0371() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [nat9])";
			TestCommonTools.consolePrintTestExprStart(371, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 50000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0372() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [nat])";
			TestCommonTools.consolePrintTestExprStart(372, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2147483647;
			if (MathFunctions.abs(reg - value) <= 112374)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0373() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [nat])";
			TestCommonTools.consolePrintTestExprStart(373, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 112374)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0374() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 100000, [Nat1])";
			TestCommonTools.consolePrintTestExprStart(374, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0375() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 100000, [Nat1])";
			TestCommonTools.consolePrintTestExprStart(375, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0376() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 100000, [Nat2])";
			TestCommonTools.consolePrintTestExprStart(376, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 100;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0377() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 100000, [Nat2])";
			TestCommonTools.consolePrintTestExprStart(377, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0378() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 100000, [Nat3])";
			TestCommonTools.consolePrintTestExprStart(378, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1000;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0379() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 100000, [Nat3])";
			TestCommonTools.consolePrintTestExprStart(379, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0380() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 1000000, [Nat3])";
			TestCommonTools.consolePrintTestExprStart(380, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1000;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0381() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 1000000, [Nat3])";
			TestCommonTools.consolePrintTestExprStart(381, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0382() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Nat4])";
			TestCommonTools.consolePrintTestExprStart(382, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10000;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0383() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Nat4])";
			TestCommonTools.consolePrintTestExprStart(383, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) < 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0384() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Nat5])";
			TestCommonTools.consolePrintTestExprStart(384, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 100000;
			if (MathFunctions.abs(reg - value) <= 5)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0385() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Nat5])";
			TestCommonTools.consolePrintTestExprStart(385, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 5)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0386() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Nat6])";
			TestCommonTools.consolePrintTestExprStart(386, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1000000;
			if (MathFunctions.abs(reg - value) <= 50)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0387() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Nat6])";
			TestCommonTools.consolePrintTestExprStart(387, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 50)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0388() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Nat7])";
			TestCommonTools.consolePrintTestExprStart(388, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10000000;
			if (MathFunctions.abs(reg - value) <= 500)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0389() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Nat7])";
			TestCommonTools.consolePrintTestExprStart(389, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 500)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0390() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Nat8])";
			TestCommonTools.consolePrintTestExprStart(390, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 100000000;
			if (MathFunctions.abs(reg - value) <= 5000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0391() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Nat8])";
			TestCommonTools.consolePrintTestExprStart(391, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 5000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0392() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Nat9])";
			TestCommonTools.consolePrintTestExprStart(392, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1000000000;
			if (MathFunctions.abs(reg - value) <= 50000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0393() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Nat9])";
			TestCommonTools.consolePrintTestExprStart(393, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 50000)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0394() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000000, [Nat])";
			TestCommonTools.consolePrintTestExprStart(394, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2147483647;
			if (MathFunctions.abs(reg - value) <= 112374)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0395() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000000, [Nat])";
			TestCommonTools.consolePrintTestExprStart(395, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 112374)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0396() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "int( pUni(x, -1, 3), x, -1, 3)";
			TestCommonTools.consolePrintTestExprStart(396, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0397() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = rUni(-1, 3)");
			String expStr = "der( cUni(x, -1, 3), x) - pUni(x, -1, 3)";
			TestCommonTools.consolePrintTestExprStart(397, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0398() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = rUni(-1, 3)");
			String expStr = "x - qUni( cUni(x, -1, 3), -1, 3)";
			TestCommonTools.consolePrintTestExprStart(398, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0399() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 1000000, rUni(-1, 3) )";
			TestCommonTools.consolePrintTestExprStart(399, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -1;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0400() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 1000000, rUni(-1, 3) )";
			TestCommonTools.consolePrintTestExprStart(400, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0401() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 1000000, pUni( rUni(-10, 10), -1, 3) )";
			TestCommonTools.consolePrintTestExprStart(401, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0402() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 1000000, pUni( rUni(-10, 10), -1, 3) )";
			TestCommonTools.consolePrintTestExprStart(402, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0 / 4.0;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0403() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 1000000, cUni( rUni(-10, 10), -1, 3) )";
			TestCommonTools.consolePrintTestExprStart(403, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0404() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 1000000, cUni( rUni(-10, 10), -1, 3) )";
			TestCommonTools.consolePrintTestExprStart(404, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0405() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = rUni(-2,4)");
			Argument y = new Argument("y = rUni(-2,4)");
			String expStr = "cUni( min(x, y), -1, 3) <= cUni( max(x, y), -1, 3)";
			TestCommonTools.consolePrintTestExprStart(405, expStr);
			Expression testExp = new Expression(expStr, x, y);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0406() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "round(2.2, 0)";
			TestCommonTools.consolePrintTestExprStart(406, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0407() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "round(2.6, 0)";
			TestCommonTools.consolePrintTestExprStart(407, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0408() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "round(2.66, 1)";
			TestCommonTools.consolePrintTestExprStart(408, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2.7;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0409() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "round(2.123456, 5)";
			TestCommonTools.consolePrintTestExprStart(409, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2.12346;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0410() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "avg(i, 1, 1000000, [Nor])";
			TestCommonTools.consolePrintTestExprStart(410, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0411() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "stdi(i, 1, 1000000, [Nor])";
			TestCommonTools.consolePrintTestExprStart(411, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0412() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "vari(i, 1, 1000000, [Nor])";
			TestCommonTools.consolePrintTestExprStart(412, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0413() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "avg(i, 1, 1000000, rNor(1,5) )";
			TestCommonTools.consolePrintTestExprStart(413, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0414() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "stdi(i, 1, 1000000, rNor(3,3) )";
			TestCommonTools.consolePrintTestExprStart(414, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0415() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "vari(i, 1, 1000000, rNor(-10, 5) )";
			TestCommonTools.consolePrintTestExprStart(415, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 25;
			if (MathFunctions.abs(reg - value) <= 0.2)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0416() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "int( pNor(x, 0, 1), x, -10, 0.5) - cNor( 0.5, 0, 1)";
			TestCommonTools.consolePrintTestExprStart(416, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0417() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = 0.5");
			String expStr = "der( cNor(x, 1, 2), x) - pNor(x, 1, 2)";
			TestCommonTools.consolePrintTestExprStart(417, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0418() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "int( pNor(x, 1, 2), x, 0.5, 1.5) - ( cNor(1.5, 1, 2) - cNor(0.5, 1, 2) )";
			TestCommonTools.consolePrintTestExprStart(418, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0419() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = [Nor]");
			String expStr = "pNor(x, 0, 1) - pNor(-x, 0, 1)";
			TestCommonTools.consolePrintTestExprStart(419, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0420() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = [Uni]");
			String expStr = "cNor(2-x, 2, 2) - ( 1 - cNor(2+x, 2, 2) )";
			TestCommonTools.consolePrintTestExprStart(420, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0421() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = [Nor]");
			String expStr = "qNor(0.5, -4, 5) + 4";
			TestCommonTools.consolePrintTestExprStart(421, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0422() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = rUni(-10,10)");
			Argument y = new Argument("y = rUni(-10,10)");
			String expStr = "cNor( min(x, y), -1, 3) <= cNor( max(x, y), -1, 3)";
			TestCommonTools.consolePrintTestExprStart(422, expStr);
			Expression testExp = new Expression(expStr, x, y);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.002)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0423() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* Information & help: wolfram.com/raspi
			*
			* In[5]:= SetPrecision[Sum[ExpIntegralEi[x], {x, 0.01, 10, 0.01}], 20]
			* Out[5]= 290933.27886809571646
			*/
			String expStr = "290933.27886809571646 - sum(x, 0.01, 10, Ei(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(423, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0424() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* Information & help: wolfram.com/raspi
			*
			* In[12]:= SetPrecision[Sum[ExpIntegralEi[x], {x, -10, -0.01, 0.01}], 20]
			* Out[12]= -97.065869924036363159
			*/
			String expStr = "-97.065869924036363159 - sum(x, -10, -0.01, Ei(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(424, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.00000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0425() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* Information & help: wolfram.com/raspi
			*
			* In[26]:= SetPrecision[Sum[Erf[x], {x, 0, 2, 0.01}], 20]
			* Out[26]= 144.17558195220803441
			*/
			String expStr = "144.17558195220803441 - sum(x, 0, 2, erf(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(425, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.00000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0426() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* Information & help: wolfram.com/raspi
			*
			* In[27]:= SetPrecision[Sum[Erf[x], {x, -2, 0, 0.01}], 20]
			* Out[27]= -144.17558195220797757
			*/
			String expStr = "-144.17558195220797757 - sum(x, -2, 0, erf(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(426, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.00000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0427() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* Information & help: wolfram.com/raspi
			*
			* In[37]:= SetPrecision[Sum[Erfc[x], {x, 0, 2, 0.01}], 20]
			* Out[37]= 56.824418047792065067
			*/
			String expStr = "56.824418047792065067 - sum(x, 0, 2, erfc(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(427, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.00000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0428() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* Information & help: wolfram.com/raspi
			*
			* In[36]:= SetPrecision[Sum[Erfc[x], {x, -2, 0, 0.01}], 20]
			* Out[36]= 345.17558195220811967
			*/
			String expStr = "345.17558195220811967 - sum(x, -2, 0, erfc(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(428, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.00000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0429() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* Information & help: wolfram.com/raspi
			*
			* In[38]:= SetPrecision[Sum[InverseErf[x], {x, 0, 0.9, 0.01}], 20]
			* Out[38]= 42.417037259662720317
			*/
			String expStr = "42.417037259662720317 - sum(x, 0, 0.9, erfInv(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(429, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.00000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0430() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* Information & help: wolfram.com/raspi
			*
			* In[39]:= SetPrecision[Sum[InverseErf[x], {x, -0.9, 0, 0.01}], 20]
			* Out[39]= -42.417037259662699000
			*/
			String expStr = "-42.417037259662699000 - sum(x, -0.9, 0, erfInv(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(430, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.00000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0431() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* Information & help: wolfram.com/raspi
			*
			* In[40]:= SetPrecision[Sum[InverseErfc[x], {x, 0.01, 1, 0.01}], 20]
			* Out[40]= 55.303894660741931943
			*/
			String expStr = "55.303894660741931943 - sum(x, 0.01, 1, erfcInv(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(431, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.00000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0432() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* Information & help: wolfram.com/raspi
			*
			* In[41]:= SetPrecision[Sum[InverseErfc[x], {x, 1, 1.99, 0.01}], 20]
			* Out[41]= -55.303894660741946154
			*/
			String expStr = "-55.303894660741946154 - sum(x, 1, 1.99, erfcInv(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(432, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.00000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0433() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "round(2.125, 2)";
			TestCommonTools.consolePrintTestExprStart(433, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2.13;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0434() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "round(2.135, 2)";
			TestCommonTools.consolePrintTestExprStart(434, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2.14;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0435() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "round(2.145, 2)";
			TestCommonTools.consolePrintTestExprStart(435, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2.15;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0436() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "round(3.125, 2)";
			TestCommonTools.consolePrintTestExprStart(436, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3.13;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0437() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "round(3.135, 2)";
			TestCommonTools.consolePrintTestExprStart(437, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3.14;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0438() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "round(3.145, 2)";
			TestCommonTools.consolePrintTestExprStart(438, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3.15;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0439() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "rList(1)";
			TestCommonTools.consolePrintTestExprStart(439, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0440() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "rList(1, 1, 1, 1, 1, 1)";
			TestCommonTools.consolePrintTestExprStart(440, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0441() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "mini(i, 1, 10000, rList(3, 2, 7, 6, 10, 15, 12) )";
			TestCommonTools.consolePrintTestExprStart(441, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0442() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "maxi(i, 1, 10000, rList(3, 2, 7, 6, 10, 15, 12) )";
			TestCommonTools.consolePrintTestExprStart(442, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 15;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0443() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.setExactComparison();
			String expStr = "0.1+0.1+0.1 <> 0.3";
			TestCommonTools.consolePrintTestExprStart(443, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0444() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.setEpsilonComparison(); ;
			String expStr = "0.1+0.1+0.1 = 0.3";
			TestCommonTools.consolePrintTestExprStart(444, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0445() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableUlpRounding();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.setExactComparison();
			String expStr = "0.1+0.1+0.1 = 0.3";
			TestCommonTools.consolePrintTestExprStart(445, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0446() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2 < 3";
			TestCommonTools.consolePrintTestExprStart(446, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0447() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.5 < 3";
			TestCommonTools.consolePrintTestExprStart(447, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0448() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.7 < 3";
			TestCommonTools.consolePrintTestExprStart(448, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0449() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3 < 3";
			TestCommonTools.consolePrintTestExprStart(449, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0450() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.2 < 3";
			TestCommonTools.consolePrintTestExprStart(450, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0451() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.5 < 3";
			TestCommonTools.consolePrintTestExprStart(451, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0452() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "4 < 3";
			TestCommonTools.consolePrintTestExprStart(452, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0453() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2 <= 3";
			TestCommonTools.consolePrintTestExprStart(453, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0454() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.5 <= 3";
			TestCommonTools.consolePrintTestExprStart(454, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0455() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.7 <= 3";
			TestCommonTools.consolePrintTestExprStart(455, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0456() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3 <= 3";
			TestCommonTools.consolePrintTestExprStart(456, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0457() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.2 <= 3";
			TestCommonTools.consolePrintTestExprStart(457, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0458() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.5 <= 3";
			TestCommonTools.consolePrintTestExprStart(458, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0459() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "4 <= 3";
			TestCommonTools.consolePrintTestExprStart(459, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0460() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2 > 3";
			TestCommonTools.consolePrintTestExprStart(460, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0461() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.5 > 3";
			TestCommonTools.consolePrintTestExprStart(461, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0462() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.7 > 3";
			TestCommonTools.consolePrintTestExprStart(462, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0463() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3 > 3";
			TestCommonTools.consolePrintTestExprStart(463, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0464() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.2 > 3";
			TestCommonTools.consolePrintTestExprStart(464, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0465() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.5 > 3";
			TestCommonTools.consolePrintTestExprStart(465, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0466() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "4 > 3";
			TestCommonTools.consolePrintTestExprStart(466, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0467() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2 >= 3";
			TestCommonTools.consolePrintTestExprStart(467, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0468() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.5 >= 3";
			TestCommonTools.consolePrintTestExprStart(468, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0469() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.7 >= 3";
			TestCommonTools.consolePrintTestExprStart(469, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0470() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3 >= 3";
			TestCommonTools.consolePrintTestExprStart(470, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0471() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.2 >= 3";
			TestCommonTools.consolePrintTestExprStart(471, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0472() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.5 >= 3";
			TestCommonTools.consolePrintTestExprStart(472, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0473() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "4 >= 3";
			TestCommonTools.consolePrintTestExprStart(473, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0474() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2 = 3";
			TestCommonTools.consolePrintTestExprStart(474, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0475() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.5 = 3";
			TestCommonTools.consolePrintTestExprStart(475, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0476() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.7 = 3";
			TestCommonTools.consolePrintTestExprStart(476, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0477() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3 = 3";
			TestCommonTools.consolePrintTestExprStart(477, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0478() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.2 = 3";
			TestCommonTools.consolePrintTestExprStart(478, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0479() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.5 = 3";
			TestCommonTools.consolePrintTestExprStart(479, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0480() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "4 = 3";
			TestCommonTools.consolePrintTestExprStart(480, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0481() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2 <> 3";
			TestCommonTools.consolePrintTestExprStart(481, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0482() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.5 <> 3";
			TestCommonTools.consolePrintTestExprStart(482, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0483() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "2.7 <> 3";
			TestCommonTools.consolePrintTestExprStart(483, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0484() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3 <> 3";
			TestCommonTools.consolePrintTestExprStart(484, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0485() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.2 <> 3";
			TestCommonTools.consolePrintTestExprStart(485, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0486() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "3.5 <> 3";
			TestCommonTools.consolePrintTestExprStart(486, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0487() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilon(0.5);
			String expStr = "4 <> 3";
			TestCommonTools.consolePrintTestExprStart(487, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0488() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "2 < 3";
			TestCommonTools.consolePrintTestExprStart(488, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0489() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "3 < 3";
			TestCommonTools.consolePrintTestExprStart(489, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0490() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "4 < 3";
			TestCommonTools.consolePrintTestExprStart(490, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0491() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "2 <= 3";
			TestCommonTools.consolePrintTestExprStart(491, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0492() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "3 <= 3";
			TestCommonTools.consolePrintTestExprStart(492, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0493() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "4 <= 3";
			TestCommonTools.consolePrintTestExprStart(493, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0494() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "2 > 3";
			TestCommonTools.consolePrintTestExprStart(494, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0495() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "3 > 3";
			TestCommonTools.consolePrintTestExprStart(495, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0496() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "4 > 3";
			TestCommonTools.consolePrintTestExprStart(496, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0497() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "2 >= 3";
			TestCommonTools.consolePrintTestExprStart(497, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0498() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "3 >= 3";
			TestCommonTools.consolePrintTestExprStart(498, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0499() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "4 >= 3";
			TestCommonTools.consolePrintTestExprStart(499, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0500() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "2 = 3";
			TestCommonTools.consolePrintTestExprStart(500, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0501() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "3 = 3";
			TestCommonTools.consolePrintTestExprStart(501, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0502() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "4 = 3";
			TestCommonTools.consolePrintTestExprStart(502, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0503() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "2 <> 3";
			TestCommonTools.consolePrintTestExprStart(503, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0504() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "3 <> 3";
			TestCommonTools.consolePrintTestExprStart(504, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0505() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "4 <> 3";
			TestCommonTools.consolePrintTestExprStart(505, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0506() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ulp(0.1)";
			TestCommonTools.consolePrintTestExprStart(506, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.3877787807814457E-17;
			if (MathFunctions.abs(reg - value) <= 0.0000000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0507() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "sum(i, 1, 3, 0.1) = 0.3";
			TestCommonTools.consolePrintTestExprStart(507, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 0.0000000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0508() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			Argument a = new Argument("a");
			Argument b = new Argument("b");
			a.setArgumentValue(1);
			b.setArgumentValue(5);
			String expStr = "if(a=6,-b,15)";
			TestCommonTools.consolePrintTestExprStart(508, expStr);
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 15;
			if (MathFunctions.abs(reg - value) <= 0.0000000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0509() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "5!^2";
			TestCommonTools.consolePrintTestExprStart(509, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 14400;
			if (MathFunctions.abs(reg - value) <= 0.0000000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0510() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "5!-3";
			TestCommonTools.consolePrintTestExprStart(510, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 117;
			if (MathFunctions.abs(reg - value) <= 0.0000000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0511() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "5!+3";
			TestCommonTools.consolePrintTestExprStart(511, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 123;
			if (MathFunctions.abs(reg - value) <= 0.0000000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0512() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "10/5-(5!)";
			TestCommonTools.consolePrintTestExprStart(512, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -118;
			if (MathFunctions.abs(reg - value) <= 0.0000000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0513() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "10/5+(5!)";
			TestCommonTools.consolePrintTestExprStart(513, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 122;
			if (MathFunctions.abs(reg - value) <= 0.0000000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0514() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "10/5+5!";
			TestCommonTools.consolePrintTestExprStart(514, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 122;
			if (MathFunctions.abs(reg - value) <= 0.0000000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0515() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "1<-2";
			TestCommonTools.consolePrintTestExprStart(515, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0516() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setExactComparison();
			String expStr = "1e1";
			TestCommonTools.consolePrintTestExprStart(516, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10;
			if (MathFunctions.abs(reg - value) <= 0.0000000000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0517() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "100*[%]-1000*[%%]";
			TestCommonTools.consolePrintTestExprStart(517, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0518() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[Y]-[sept]+( [Y]/[Z]-1000 )";
			TestCommonTools.consolePrintTestExprStart(518, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0519() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[Z]-[sext]+( [Z]/[E]-1000 )";
			TestCommonTools.consolePrintTestExprStart(519, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0520() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[E]-[quint]+( [E]/[P]-1000 )";
			TestCommonTools.consolePrintTestExprStart(520, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0521() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[P]-[quad]+( [P]/[T]-1000 )";
			TestCommonTools.consolePrintTestExprStart(521, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0522() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[T]-[tril]+( [T]/[G]-1000 )";
			TestCommonTools.consolePrintTestExprStart(522, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0523() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[G]-[bil]+( [G]/[M]-1000 )";
			TestCommonTools.consolePrintTestExprStart(523, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0524() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[M]-[mil]+( [M]/[k]-1000 )";
			TestCommonTools.consolePrintTestExprStart(524, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0525() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[k]-[th]+( [k]/[hecto]-10 )";
			TestCommonTools.consolePrintTestExprStart(525, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0526() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[hecto]-[hund]+( [hecto]/[deca]-10 )";
			TestCommonTools.consolePrintTestExprStart(526, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0527() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[deca]-[ten]+( [deca]-10 )";
			TestCommonTools.consolePrintTestExprStart(527, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0528() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[deci]^2-[%]";
			TestCommonTools.consolePrintTestExprStart(528, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0529() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[deci]/[centi]-10";
			TestCommonTools.consolePrintTestExprStart(529, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0530() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[centi]/[milli]-10";
			TestCommonTools.consolePrintTestExprStart(530, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0531() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[milli]/[mic]-1000";
			TestCommonTools.consolePrintTestExprStart(531, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0532() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[mic]/[n]-1000";
			TestCommonTools.consolePrintTestExprStart(532, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0533() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[n]/[p]-1000";
			TestCommonTools.consolePrintTestExprStart(533, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0534() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[p]/[f]-1000";
			TestCommonTools.consolePrintTestExprStart(534, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0535() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[f]/[a]-1000";
			TestCommonTools.consolePrintTestExprStart(535, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0536() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[a]/[z]-1000";
			TestCommonTools.consolePrintTestExprStart(536, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0537() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[z]/[y]-1000";
			TestCommonTools.consolePrintTestExprStart(537, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0538() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "1000*[m]-[km]+(10*[mm]-[cm])";
			TestCommonTools.consolePrintTestExprStart(538, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0539() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "([inch]-2.54*[cm])+([ft]-0.3048*[m])+([yd]-0.9144*[m])+([mile]-1.609344*[km])+([nmi]-1.852*[km])";
			TestCommonTools.consolePrintTestExprStart(539, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0540() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[m2]-100*[cm]*100*[cm]+[m2]-10000*[cm2]";
			TestCommonTools.consolePrintTestExprStart(540, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0541() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[cm2]-10*[mm]*10*[mm]+[cm2]-100*[mm2]";
			TestCommonTools.consolePrintTestExprStart(541, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0542() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[are]-10*[m]*10*[m]";
			TestCommonTools.consolePrintTestExprStart(542, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0543() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[ha]-100*[m]*100*[m]+[ha]-100*[are]";
			TestCommonTools.consolePrintTestExprStart(543, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0544() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[acre]-66*[ft]*660*[ft]";
			TestCommonTools.consolePrintTestExprStart(544, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0545() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[km2]-100*[ha]";
			TestCommonTools.consolePrintTestExprStart(545, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0546() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[cm3]-10*[mm]*10*[mm]*10*[mm]+[cm3]-1000*[mm3]";
			TestCommonTools.consolePrintTestExprStart(546, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0547() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[m3]-1000*[l]+[m3]-[m]*[m]*[m]";
			TestCommonTools.consolePrintTestExprStart(547, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0548() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[km3]-[bil]*[m3]";
			TestCommonTools.consolePrintTestExprStart(548, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0549() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[l]-[th]*[ml]";
			TestCommonTools.consolePrintTestExprStart(549, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0550() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[gall]-3.78541178*[l]";
			TestCommonTools.consolePrintTestExprStart(550, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0551() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[pint]-473.176473*[ml]";
			TestCommonTools.consolePrintTestExprStart(551, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0552() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[min]-60*[s]+[h]-60*[min]";
			TestCommonTools.consolePrintTestExprStart(552, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0553() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[day]-24*[h]+[week]-7*[day]";
			TestCommonTools.consolePrintTestExprStart(553, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0554() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[yearj]-365.25*[day]";
			TestCommonTools.consolePrintTestExprStart(554, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0555() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[kg]-1000*[gr]+[kg]-100*[dag]";
			TestCommonTools.consolePrintTestExprStart(555, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0556() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[dag]-10*[gr]";
			TestCommonTools.consolePrintTestExprStart(556, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0557() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[gr]-[th]*[mg]";
			TestCommonTools.consolePrintTestExprStart(557, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0558() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[t]-1000*[kg]";
			TestCommonTools.consolePrintTestExprStart(558, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0559() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[oz]-28.3495231*[gr]+[lb]-453.59237*[gr]";
			TestCommonTools.consolePrintTestExprStart(559, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0560() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[b]-1+[kb]/[b]-1024";
			TestCommonTools.consolePrintTestExprStart(560, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0561() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( [Mb]/[kb]-1024 ) + ( [Gb]/[Mb]-1024 )";
			TestCommonTools.consolePrintTestExprStart(561, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0562() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( [Tb]/[Gb]-1024 ) + ( [Pb]/[Tb]-1024 )";
			TestCommonTools.consolePrintTestExprStart(562, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0563() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( [Eb]/[Pb]-1024 ) + ( [Zb]/[Eb]-1024 )";
			TestCommonTools.consolePrintTestExprStart(563, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0564() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[Yb]/[Zb]-1024";
			TestCommonTools.consolePrintTestExprStart(564, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0565() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[B]-8*[b]+[kB]/[B]-1024";
			TestCommonTools.consolePrintTestExprStart(565, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0566() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( [MB]/[kB]-1024 ) + ( [GB]/[MB]-1024 )";
			TestCommonTools.consolePrintTestExprStart(566, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0567() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( [TB]/[GB]-1024 ) + ( [PB]/[TB]-1024 )";
			TestCommonTools.consolePrintTestExprStart(567, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0568() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( [EB]/[PB]-1024 ) + ( [ZB]/[EB]-1024 )";
			TestCommonTools.consolePrintTestExprStart(568, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0569() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[YB]/[ZB]-1024";
			TestCommonTools.consolePrintTestExprStart(569, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0570() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[J] - ( [kg]*[m2] ) / ( [s]*[s] )";
			TestCommonTools.consolePrintTestExprStart(570, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0571() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[eV]-1.60217662*[a]*[deci]*[J]";
			TestCommonTools.consolePrintTestExprStart(571, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0572() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( [keV]/[eV]-1000 ) + ( [MeV]/[keV]-1000 ) + ( [GeV]/[MeV]-1000 ) + ( [TeV]/[GeV]-1000 )";
			TestCommonTools.consolePrintTestExprStart(572, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0573() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[m/s] - ([m]/[s])";
			TestCommonTools.consolePrintTestExprStart(573, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0574() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[km/h] - ([km]/[h])";
			TestCommonTools.consolePrintTestExprStart(574, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0575() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[mi/h] - ([mile]/[h])";
			TestCommonTools.consolePrintTestExprStart(575, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0576() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[knot] - 0.514444444*[m/s]";
			TestCommonTools.consolePrintTestExprStart(576, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0577() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[m/s2]-[m]/([s]^2)";
			TestCommonTools.consolePrintTestExprStart(577, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0578() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[km/h2]-[km]/[h]^2";
			TestCommonTools.consolePrintTestExprStart(578, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0579() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[mi/h2]-[mile]/[h]^2";
			TestCommonTools.consolePrintTestExprStart(579, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0580() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2*pi*[rad]-360*[deg]";
			TestCommonTools.consolePrintTestExprStart(580, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0581() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( [deg]/[']-60 ) + ( [']/[''] - 60 )";
			TestCommonTools.consolePrintTestExprStart(581, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0582() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[c] - 299792458*[m]/[s]";
			TestCommonTools.consolePrintTestExprStart(582, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0583() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[hP] - [h-]*2*pi";
			TestCommonTools.consolePrintTestExprStart(583, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0584() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( [lP] - 1.616229*[y]*[p]*10*[m]) + ( [mP] - 2.176470*[n]*10*[kg] ) + ( [tP] - 5.39116*[y]*[z]*10*[s] )";
			TestCommonTools.consolePrintTestExprStart(584, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0585() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[ly]-[c]*[yearj]";
			TestCommonTools.consolePrintTestExprStart(585, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0586() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[pc]/(3.08567758*[P]*10*[m])-1";
			TestCommonTools.consolePrintTestExprStart(586, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0587() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[kpc]/[pc]-1000";
			TestCommonTools.consolePrintTestExprStart(587, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0588() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( [Earth-R-eq]-[Earth-R-po] ) / ( 6378.1370*[km]-6356.7523*[km] ) - 1";
			TestCommonTools.consolePrintTestExprStart(588, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.0000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0589() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ( [G.] * [Earth-M] ) / [Earth-R]^2 ) / [g] - 1";
			TestCommonTools.consolePrintTestExprStart(589, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0590() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ( [G.] * [Solar-M] ) / [Solar-R]^2 ) / ( 28.2*[g] ) - 1";
			TestCommonTools.consolePrintTestExprStart(590, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0591() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ( [G.] * [Mercury-M] ) / [Mercury-R]^2 ) / ( 0.38*[g] ) - 1";
			TestCommonTools.consolePrintTestExprStart(591, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0592() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ( [G.] * [Venus-M] ) / [Venus-R]^2 ) / ( 0.904*[g] ) - 1";
			TestCommonTools.consolePrintTestExprStart(592, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0593() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ( [G.] * [Moon-M] ) / [Moon-R]^2 ) / ( 0.1654*[g] ) - 1";
			TestCommonTools.consolePrintTestExprStart(593, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0594() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ( [G.] * [Mars-M] ) / [Mars-R]^2 ) / ( 0.376*[g] ) - 1";
			TestCommonTools.consolePrintTestExprStart(594, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0595() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ( [G.] * [Jupiter-M] ) / [Jupiter-R]^2 ) / ( 2.527876492*[g] ) - 1";
			TestCommonTools.consolePrintTestExprStart(595, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.1)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0596() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ( [G.] * [Saturn-M] ) / [Saturn-R]^2 ) / ( 1.065*[g] ) - 1";
			TestCommonTools.consolePrintTestExprStart(596, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.1)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0597() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ( [G.] * [Uranus-M] ) / [Uranus-R]^2 ) / ( 0.886*[g] ) - 1";
			TestCommonTools.consolePrintTestExprStart(597, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.1)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0598() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ( [G.] * [Neptune-M] ) / [Neptune-R]^2 ) / ( 1.14*[g] ) - 1";
			TestCommonTools.consolePrintTestExprStart(598, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0599() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[Earth-D]/[au]-1";
			TestCommonTools.consolePrintTestExprStart(599, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0600() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[Mercury-D] / ( 57909050*[km] )-1";
			TestCommonTools.consolePrintTestExprStart(600, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0601() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[Venus-D] / ( 108208000*[km] )-1";
			TestCommonTools.consolePrintTestExprStart(601, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0602() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[Mars-D] / ( 1.523679*[au] )-1";
			TestCommonTools.consolePrintTestExprStart(602, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0603() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[Jupiter-D] / ( 5.20260*[au] )-1";
			TestCommonTools.consolePrintTestExprStart(603, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0604() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[Saturn-D] / ( 1.429*[bil]*[km] )-1";
			TestCommonTools.consolePrintTestExprStart(604, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0605() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[Uranus-D] / ( 19.2184*[au] )-1";
			TestCommonTools.consolePrintTestExprStart(605, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0606() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "[Neptune-D] / ( 30.110387*[au] )-1";
			TestCommonTools.consolePrintTestExprStart(606, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0607() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "@~100";
			TestCommonTools.consolePrintTestExprStart(607, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = ~((long)(100.0));
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0608() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-100 @^ 2";
			TestCommonTools.consolePrintTestExprStart(608, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = ((long)(-100.0)) ^ ((long)(2.0));
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0609() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-100 @| 2";
			TestCommonTools.consolePrintTestExprStart(609, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = ((long)(-100.0)) | ((long)(2.0));
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0610() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-100 @& 2";
			TestCommonTools.consolePrintTestExprStart(610, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = ((long)(-100.0)) & ((long)(2.0));
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0611() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-100 @>> 4";
			TestCommonTools.consolePrintTestExprStart(611, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = ((long)(-100.0)) >> ((int)(4.0));
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0612() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-100 @<< 4";
			TestCommonTools.consolePrintTestExprStart(612, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = ((long)(-100.0)) << ((int)(4.0));
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0613() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "pi+1.23e-10";
			TestCommonTools.consolePrintTestExprStart(613, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathConstants.PI + 1.23e-10;
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0614() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.setEpsilonComparison();
			String expStr = "sin(pi+1.23e-10)+e^1.1e1";
			TestCommonTools.consolePrintTestExprStart(614, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathFunctions.sin(MathConstants.PI + 1.23e-10) + Math.Pow(MathConstants.E, 1.1e1);
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0615() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2e-2+2E+2+3.1e4";
			TestCommonTools.consolePrintTestExprStart(615, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2e-2 + 2E+2 + 3.1e4;
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0616() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "123.34344e-16*0.00001E-2";
			TestCommonTools.consolePrintTestExprStart(616, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 123.34344e-16 * 0.00001E-2;
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0617() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-123.34344e-16*(-0.00001E-2)";
			TestCommonTools.consolePrintTestExprStart(617, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -123.34344e-16 * (-0.00001E-2);
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0618() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Function ff = new Function("ff", new FunExt());
			String expStr = "5*6-ff(5,6)";
			TestCommonTools.consolePrintTestExprStart(618, expStr);
			Expression testExp = new Expression(expStr, ff);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.000000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0619() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "solve(2*x-4, x, -10, 10)";
			TestCommonTools.consolePrintTestExprStart(619, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 0.000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0620() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x=0");
			String expStr = "solve( der(sin(x), x), x, 0, pi )";
			TestCommonTools.consolePrintTestExprStart(620, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = MathConstants.PI / 2.0;
			if (MathFunctions.abs(reg - value) <= 0.000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0621() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "solve( sin(x), x, -pi-1, 1 )";
			TestCommonTools.consolePrintTestExprStart(621, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -MathConstants.PI;
			if
			((MathFunctions.abs(-MathConstants.PI - value) <= 0.000001) ||
			(MathFunctions.abs(0 - value) <= 0.000001))
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0622() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "if( [true] && ([false] || ([false] && [true])) = [false], 1, 0)";
			TestCommonTools.consolePrintTestExprStart(622, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0623() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "if( isNaN(3/0) = [true], 1, 0)";
			TestCommonTools.consolePrintTestExprStart(623, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0624() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "if( isNaN(3/1) = [false], 1, 0)";
			TestCommonTools.consolePrintTestExprStart(624, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0625() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "if( isNaN([NaN]) = [true], 1, 0)";
			TestCommonTools.consolePrintTestExprStart(625, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0626() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "coalesce( 1, 2, 3 )";
			TestCommonTools.consolePrintTestExprStart(626, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0627() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "coalesce( [NaN], 2, 3)";
			TestCommonTools.consolePrintTestExprStart(627, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0628() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "coalesce( [NaN], [NaN], 3, 5, 6)";
			TestCommonTools.consolePrintTestExprStart(628, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0629() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "coalesce( [NaN], 3/0, [NaN], 5, 6)";
			TestCommonTools.consolePrintTestExprStart(629, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 5;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0630() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "coalesce( [NaN], 3/0, [NaN], 5/0, 6)";
			TestCommonTools.consolePrintTestExprStart(630, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 6;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0631() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "if( isNaN( coalesce( [NaN], 3/0, [NaN], 5/0, [NaN]) ) = [true], 1, 0)";
			TestCommonTools.consolePrintTestExprStart(631, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0632() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 2*y");
			Argument y = new Argument("y = 2*x");
			x.addDefinitions(y);
			y.addDefinitions(x);
			String expStr = "x+y";
			TestCommonTools.consolePrintTestExprStart(632, expStr);
			Expression testExp = new Expression(expStr, x, y);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0633() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Function f = new Function("f(x) = 2*g(x)");
			Function g = new Function("g(x) = 2*f(x)");
			f.addDefinitions(g);
			g.addDefinitions(f);
			String expStr = "f(1)+g(1)";
			TestCommonTools.consolePrintTestExprStart(633, expStr);
			Expression testExp = new Expression(expStr, f, g);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0634() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Function f = new Function("f(n) = f(n-1)");
			String expStr = "f(10)";
			TestCommonTools.consolePrintTestExprStart(634, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0635() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = x + 2");
			x.addDefinitions(x);
			String expStr = "x-3";
			TestCommonTools.consolePrintTestExprStart(635, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0636() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument y = new Argument("y = 2");
			Argument x = new Argument("x = 2*y + x");
			Function f = new Function("f(x) = 2*g(x)+y");
			Function g = new Function("g(x) = 2*f(x)+x+y");
			x.addDefinitions(x, y);
			f.addDefinitions(g, y);
			g.addDefinitions(f, y);
			String expStr = "2*sin(x)+2*x-3*y+f(x)-g(y)";
			TestCommonTools.consolePrintTestExprStart(636, expStr);
			Expression testExp = new Expression(expStr, x, y, f, g);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0637() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "00000001";
			TestCommonTools.consolePrintTestExprStart(637, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 00000001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0638() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-00000001";
			TestCommonTools.consolePrintTestExprStart(638, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -00000001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0639() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "+00000001";
			TestCommonTools.consolePrintTestExprStart(639, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = +00000001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0640() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "00000001.001";
			TestCommonTools.consolePrintTestExprStart(640, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 00000001.001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0641() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-00000001.0002";
			TestCommonTools.consolePrintTestExprStart(641, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -00000001.0002;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0642() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "+00000001.123";
			TestCommonTools.consolePrintTestExprStart(642, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = +00000001.123;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0643() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "00000001.001e001";
			TestCommonTools.consolePrintTestExprStart(643, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 00000001.001e001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0644() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-00000001.0002e0002";
			TestCommonTools.consolePrintTestExprStart(644, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -00000001.0002e0002;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0645() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "+00000001.123e004";
			TestCommonTools.consolePrintTestExprStart(645, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = +00000001.123e004;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0646() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "00000001.001e+001";
			TestCommonTools.consolePrintTestExprStart(646, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 00000001.001e+001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0647() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-00000001.0002e+0002";
			TestCommonTools.consolePrintTestExprStart(647, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -00000001.0002e+0002;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0648() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "+00000001.123e+004";
			TestCommonTools.consolePrintTestExprStart(648, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = +00000001.123e+004;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0649() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "00000001.001e-001";
			TestCommonTools.consolePrintTestExprStart(649, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 00000001.001e-001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0650() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
            mXparser.disableCanonicalRounding();
            mXparser.disableAlmostIntRounding();
            mXparser.disableUlpRounding();
            String expStr = "-00000001.0002e-0002";
			TestCommonTools.consolePrintTestExprStart(650, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -00000001.0002e-0002;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0651() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "+00000001.123e-004";
			TestCommonTools.consolePrintTestExprStart(651, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = +00000001.123e-004;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0652() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "+000001.001e+0000000";
			TestCommonTools.consolePrintTestExprStart(652, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = +000001.001e+0000000;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0653() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "00000001-(-00000001)+(+00000001)-00000001.001-(-00000001.0002)-(+00000001.123)+00000001.001e001+(-00000001.0002e0002)-(+00000001.123e004)-00000001.001e+001+00000001.0002e+0002+(+00000001.123e+004)-00000001.001e-001-(-00000001.0002e-0002)-(+00000001.123e-004)-(+00000001.123e-004)-(+000001.001e+0000000)";
			TestCommonTools.consolePrintTestExprStart(653, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 00000001-(-00000001)+(+00000001)-00000001.001-(-00000001.0002)-(+00000001.123)+00000001.001e001+(-00000001.0002e0002)-(+00000001.123e004)-00000001.001e+001+00000001.0002e+0002+(+00000001.123e+004)-00000001.001e-001-(-00000001.0002e-0002)-(+00000001.123e-004)-(+00000001.123e-004)-(+000001.001e+0000000);
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0654() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2%";
			TestCommonTools.consolePrintTestExprStart(654, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.02;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0655() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-2%";
			TestCommonTools.consolePrintTestExprStart(655, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -0.02;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0656() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "100%+2%";
			TestCommonTools.consolePrintTestExprStart(656, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.02;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0657() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "100%-2%";
			TestCommonTools.consolePrintTestExprStart(657, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.98;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0658() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "((1%)%)%";
            mXparser.disableCanonicalRounding();
            mXparser.disableAlmostIntRounding();
            mXparser.disableUlpRounding();
            TestCommonTools.consolePrintTestExprStart(658, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.000001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0659() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2!+(3!)%";
			TestCommonTools.consolePrintTestExprStart(659, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2.06;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0660() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2*[%]-2%";
			TestCommonTools.consolePrintTestExprStart(660, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0661() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setToOverrideBuiltinTokens();
			Function sin = new Function("sin(x,y) = 2*x + y");
			Argument ee = new Argument("e = 5");
			Constant pi = new Constant("pi = 2");
			String expStr = "sin(e,pi)";
			TestCommonTools.consolePrintTestExprStart(661, expStr);
			Expression testExp = new Expression(expStr, sin, ee, pi);
			double value = testExp.calculate();
			double reg = 12;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setNotToOverrideBuiltinTokens();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0662() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "or( [false] )";
			TestCommonTools.consolePrintTestExprStart(662, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0663() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "or( [true] )";
			TestCommonTools.consolePrintTestExprStart(663, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0664() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "or( [NaN] )";
			TestCommonTools.consolePrintTestExprStart(664, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0665() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "or( [false], 0 )";
			TestCommonTools.consolePrintTestExprStart(665, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0666() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "or( [false], [NaN] )";
			TestCommonTools.consolePrintTestExprStart(666, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0667() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "or( [false], 0, 0, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			TestCommonTools.consolePrintTestExprStart(667, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0668() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "or( [false], 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 1 )";
			TestCommonTools.consolePrintTestExprStart(668, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0669() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "or( 1, 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			TestCommonTools.consolePrintTestExprStart(669, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0670() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "or( 0, 1, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			TestCommonTools.consolePrintTestExprStart(670, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0671() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "or( 1, 2, 3, 4, [true], -10, -0.5, 2, 0.01 )";
			TestCommonTools.consolePrintTestExprStart(671, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0672() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "and( [false] )";
			TestCommonTools.consolePrintTestExprStart(672, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0673() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "and( [true] )";
			TestCommonTools.consolePrintTestExprStart(673, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0674() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "and( [NaN] )";
			TestCommonTools.consolePrintTestExprStart(674, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0675() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "and( [false], 0 )";
			TestCommonTools.consolePrintTestExprStart(675, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0676() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "and( [false], [NaN] )";
			TestCommonTools.consolePrintTestExprStart(676, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0677() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "and( [false], 0, 0, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			TestCommonTools.consolePrintTestExprStart(677, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0678() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "and( [false], 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 1 )";
			TestCommonTools.consolePrintTestExprStart(678, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0679() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "and( 1, 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			TestCommonTools.consolePrintTestExprStart(679, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0680() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "and( 0, 1, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			TestCommonTools.consolePrintTestExprStart(680, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0681() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "and( 1, 2, 3, 4, [true], -10, -0.5, 2, 0.01 )";
			TestCommonTools.consolePrintTestExprStart(681, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0682() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "xor( [false] )";
			TestCommonTools.consolePrintTestExprStart(682, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0683() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "xor( [true] )";
			TestCommonTools.consolePrintTestExprStart(683, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0684() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "xor( [NaN] )";
			TestCommonTools.consolePrintTestExprStart(684, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0685() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "xor( [false], 0 )";
			TestCommonTools.consolePrintTestExprStart(685, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0686() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "xor( [false], [NaN] )";
			TestCommonTools.consolePrintTestExprStart(686, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0687() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "xor( [false], 0, 0, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			TestCommonTools.consolePrintTestExprStart(687, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0688() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "xor( [false], 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 1 )";
			TestCommonTools.consolePrintTestExprStart(688, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if ( Double.IsNaN(value) )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0689() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "xor( 1, 0, [false], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			TestCommonTools.consolePrintTestExprStart(689, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0690() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "xor( 0, 1, 1, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			TestCommonTools.consolePrintTestExprStart(690, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0691() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "xor( 1, 2, 3, 4, [true], -10, -0.5, 2, 0.01 )";
			TestCommonTools.consolePrintTestExprStart(691, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0692() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-b1.+0+b1.-2*B1.";
			TestCommonTools.consolePrintTestExprStart(692, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0693() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b1.111+3)-B1.111+3";
			TestCommonTools.consolePrintTestExprStart(693, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0694() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b2.101+5)-B2.00101+5";
			TestCommonTools.consolePrintTestExprStart(694, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0695() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b3.121+16)-B3.00121+16";
			TestCommonTools.consolePrintTestExprStart(695, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0696() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b4.123+27)-B4.00123+27";
			TestCommonTools.consolePrintTestExprStart(696, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0697() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b5.341+96)-B5.00341+96";
			TestCommonTools.consolePrintTestExprStart(697, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0698() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b6.352+140)-B6.00352+140";
			TestCommonTools.consolePrintTestExprStart(698, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0699() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b7.256+139)-B7.00256+139";
			TestCommonTools.consolePrintTestExprStart(699, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0700() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b8.376+254)-B8.00376+254";
			TestCommonTools.consolePrintTestExprStart(700, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0701() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-o.376+254)-O.00376+254";
			TestCommonTools.consolePrintTestExprStart(701, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0702() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b.101+5)-B.00101+5";
			TestCommonTools.consolePrintTestExprStart(702, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0703() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b9.821+667)-B9.00821+667";
			TestCommonTools.consolePrintTestExprStart(703, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0704() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b10.394+394)-B10.00394+394";
			TestCommonTools.consolePrintTestExprStart(704, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0705() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b11.3A7+480)-B11.003a7+480";
			TestCommonTools.consolePrintTestExprStart(705, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0706() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b12.A5B+1511)-B12.00a5b+1511";
			TestCommonTools.consolePrintTestExprStart(706, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0707() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b13.ACB+1857)-B13.00acb+1857";
			TestCommonTools.consolePrintTestExprStart(707, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0708() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b14.2AD+545)-B14.002ad+545";
			TestCommonTools.consolePrintTestExprStart(708, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0709() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b15.BE4+2689)-B15.00be4+2689";
			TestCommonTools.consolePrintTestExprStart(709, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0710() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b16.FA2+4002)-B16.00fa2+4002";
			TestCommonTools.consolePrintTestExprStart(710, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0711() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-h.FA2+4002)-H.00fa2+4002";
			TestCommonTools.consolePrintTestExprStart(711, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0712() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b17.AG6+3168)-B17.00ag6+3168";
			TestCommonTools.consolePrintTestExprStart(712, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0713() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b18.FGH+5165)-B18.00fgh+5165";
			TestCommonTools.consolePrintTestExprStart(713, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0714() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b19.2I3+1067)-B19.002i3+1067";
			TestCommonTools.consolePrintTestExprStart(714, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0715() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b20.9CJ+3859)-B20.009cj+3859";
			TestCommonTools.consolePrintTestExprStart(715, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0716() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b21.K5F+8940)-B21.00k5f+8940";
			TestCommonTools.consolePrintTestExprStart(716, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0717() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b22.FL5+7727)-B22.00fl5+7727";
			TestCommonTools.consolePrintTestExprStart(717, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0718() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b23.1AM+781)-B23.001am+781";
			TestCommonTools.consolePrintTestExprStart(718, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0719() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b24.5ND+3445)-B24.005nd+3445";
			TestCommonTools.consolePrintTestExprStart(719, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0720() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b25.5ND5C+2320762)-B25.005nd5c+2320762";
			TestCommonTools.consolePrintTestExprStart(720, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0721() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b26.3KPB5+1739639)-B26.003kpb5+1739639";
			TestCommonTools.consolePrintTestExprStart(721, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0722() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b27.IQH67+10090258)-B27.00iqh67+10090258";
			TestCommonTools.consolePrintTestExprStart(722, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0723() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b28.RKHB2+17048390)-B28.00rkhb2+17048390";
			TestCommonTools.consolePrintTestExprStart(723, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0724() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b29.8BIFS+5942128)-B29.008bifs+5942128";
			TestCommonTools.consolePrintTestExprStart(724, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0725() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b30.2TGJB+2417981)-B30.002tgjb+2417981";
			TestCommonTools.consolePrintTestExprStart(725, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0726() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b31.6PUC0+6315103)-B31.006puc0+6315103";
			TestCommonTools.consolePrintTestExprStart(726, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0727() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b32.C0PV0+12609504)-B32.00c0pv0+12609504";
			TestCommonTools.consolePrintTestExprStart(727, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0728() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b33.V000W+36763583)-B33.00v000w+36763583";
			TestCommonTools.consolePrintTestExprStart(728, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0729() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b34.NP2XW+31721794)-B34.00np2xw+31721794";
			TestCommonTools.consolePrintTestExprStart(729, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0730() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b35.120Y0+1587565)-B35.00120y0+1587565";
			TestCommonTools.consolePrintTestExprStart(730, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0731() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-b36.ZZZZZ+60466175)-B36.00zzzzz+60466175";
			TestCommonTools.consolePrintTestExprStart(731, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0732() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "base(1)-0";
			TestCommonTools.consolePrintTestExprStart(732, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0733() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "base(1,1)-1";
			TestCommonTools.consolePrintTestExprStart(733, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0734() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "base(1,1,1,1,1,1,1,1,1,1,1)-10";
			TestCommonTools.consolePrintTestExprStart(734, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0735() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "base(2,0,0,1)-1";
			TestCommonTools.consolePrintTestExprStart(735, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0736() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "base(2,1,0,1)-5";
			TestCommonTools.consolePrintTestExprStart(736, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0737() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "base(10,1,2,3,4,5,6,7,8,9,0)-1234567890";
			TestCommonTools.consolePrintTestExprStart(737, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0738() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "base(35,b35.0,b35.0,b35.1,b35.2,b35.0,b35.y,b35.0)-B35.00120y0";
			TestCommonTools.consolePrintTestExprStart(738, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0739() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN( base(-1,0,1,2) ) - [true]";
			TestCommonTools.consolePrintTestExprStart(739, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0740() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN( base(1,0,1) ) - [true]";
			TestCommonTools.consolePrintTestExprStart(740, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0741() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN( base(2) ) - [true]";
			TestCommonTools.consolePrintTestExprStart(741, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0742() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN( base(2,2,1) ) - [true]";
			TestCommonTools.consolePrintTestExprStart(742, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0743() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN( base(2,-1,1) ) - [true]";
			TestCommonTools.consolePrintTestExprStart(743, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0744() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ndig10(-10)-2 ) + ( ndig10(1234)-4 ) + ( ndig10(0)-1 )";
			TestCommonTools.consolePrintTestExprStart(744, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0745() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			String expStr = "sum(i, -1000000, 1000000, ndig10(i) - floor( log10( abs(i) ) ) - 1, 3)";
			TestCommonTools.consolePrintTestExprStart(745, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0746() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN( ndig10( [NaN] ) ) - [true]";
			TestCommonTools.consolePrintTestExprStart(746, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0747() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			String expStr = "sum( i, -1000000, 1000000, ndig10(i) - ndig(i, 10) )";
			TestCommonTools.consolePrintTestExprStart(747, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0748() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(ndig(5, 2) - 3) + (ndig(-5, 2) - 3) + (ndig( b35.124abcdefg,  35) - 10) + (ndig(0, 1) - 0) + (ndig(123, 1) - 123)";
			TestCommonTools.consolePrintTestExprStart(748, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0749() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( isNaN( ndig( [NaN], 10) ) - [true] ) + ( isNaN( ndig( 100, [NaN]) ) - [true] ) + ( isNaN( ndig( 10, -10) ) - [true] ) + ( isNaN( ndig( 10, 0) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(749, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0750() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( dig10(1234567890, 1) - 1 ) + ( dig10(1234567890, 2) - 2 ) + ( dig10(1234567890, 3) - 3 ) + ( dig10(1234567890, 4) - 4 ) + ( dig10(1234567890, 5) - 5 ) + ( dig10(1234567890, 6) - 6 ) + ( dig10(1234567890, 7) - 7 ) + ( dig10(1234567890, 8) - 8 ) + ( dig10(1234567890, 9) - 9 ) + ( dig10(1234567890, 10) - 0 )";
			TestCommonTools.consolePrintTestExprStart(750, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0751() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( dig(1234567890, 1, 10) - 1 ) + ( dig(1234567890, 2, 10) - 2 ) + ( dig(1234567890, 3, 10) - 3 ) + ( dig(1234567890, 4, 10) - 4 ) + ( dig(1234567890, 5, 10) - 5 ) + ( dig(1234567890, 6, 10) - 6 ) + ( dig(1234567890, 7, 10) - 7 ) + ( dig(1234567890, 8, 10) - 8 ) + ( dig(1234567890, 9, 10) - 9 ) + ( dig(1234567890, 10, 10) - 0 )";
			TestCommonTools.consolePrintTestExprStart(751, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0752() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( dig10(1234567890, 0) - 0 ) + ( dig10(1234567890, -1) - 9 ) + ( dig10(1234567890, -2) - 8 ) + ( dig10(1234567890, -3) - 7 ) + ( dig10(1234567890, -4) - 6 ) + ( dig10(1234567890, -5) - 5 ) + ( dig10(1234567890, -6) - 4 ) + ( dig10(1234567890, -7) - 3 ) + ( dig10(1234567890, -8) - 2 ) + ( dig10(1234567890, -9) - 1 ) + ( dig10(1234567890, -10) - 0 ) + ( dig10(1234567890, -11) - 0 )";
			TestCommonTools.consolePrintTestExprStart(752, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0753() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( dig(1234567890, 0, 10) - 0 ) + ( dig(1234567890, -1, 10) - 9 ) + ( dig(1234567890, -2, 10) - 8 ) + ( dig(1234567890, -3, 10) - 7 ) + ( dig(1234567890, -4, 10) - 6 ) + ( dig(1234567890, -5, 10) - 5 ) + ( dig(1234567890, -6, 10) - 4 ) + ( dig(1234567890, -7, 10) - 3 ) + ( dig(1234567890, -8, 10) - 2 ) + ( dig(1234567890, -9, 10) - 1 ) + ( dig(1234567890, -10, 10) - 0 ) + ( dig(1234567890, -11, 10) - 0 )";
			TestCommonTools.consolePrintTestExprStart(753, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0754() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( dig(b35.124abcdefg, 0, 35) - b35.g ) + ( dig(b35.124abcdefg, -1, 35) - b35.f ) + ( dig(b35.124abcdefg, 1, 35) - 1 ) + ( dig(b35.124abcdefg, 2, 35) - 2 ) + ( dig(b35.124abcdefg, 3, 35) - 4 )";
			TestCommonTools.consolePrintTestExprStart(754, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0755() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( dig(b1.11111, 1, 1) - 1 ) + ( dig(b1.11111, 2, 1) - 1 ) + ( dig(b1.11111, 3, 1) - 1 ) + ( dig(b1.11111, 4, 1) - 1 ) + ( dig(b1.11111, 5, 1) - 1 )";
			TestCommonTools.consolePrintTestExprStart(755, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0756() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( dig(b1.11111, 0, 1) - 1 ) + ( dig(b1.11111, -1, 1) - 1 ) + ( dig(b1.11111, -2, 1) - 1 ) + ( dig(b1.11111, -3, 1) - 1 ) + ( dig(b1.11111, -4, 1) - 1 )";
			TestCommonTools.consolePrintTestExprStart(756, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0757() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( dig(b2.10101, 1, 2) - 1 ) + ( dig(b2.10101, 2, 2) - 0 ) + ( dig(b2.10101, 3, 2) - 1 ) + ( dig(b2.10101, 4, 2) - 0 ) + ( dig(b2.10101, 5, 2) - 1 )";
			TestCommonTools.consolePrintTestExprStart(757, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0758() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( dig(b2.10101, 0, 2) - 1 ) + ( dig(b2.10101, -1, 2) - 0 ) + ( dig(b2.10101, -2, 2) - 1 ) + ( dig(b2.10101, -3, 2) - 0 ) + ( dig(b2.10101, -4, 2) - 1 ) + ( dig(b2.10101, -5, 2) - 0 ) + ( dig(b2.10101, -6, 2) - 0 )";
			TestCommonTools.consolePrintTestExprStart(758, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0759() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(d, 1, ndig10(123456789), dig10(123456789, d) ) - sum(d, 1, ndig10(123456789), d)";
			TestCommonTools.consolePrintTestExprStart(759, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0760() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(d, -2*ndig10(123456789), 0, dig10(123456789, d) ) - sum(d, 1, ndig10(123456789), d)";
			TestCommonTools.consolePrintTestExprStart(760, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0761() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(d, 1, ndig(123456789, 10), dig(123456789, d, 10) ) - sum(d, 1, ndig(123456789, 10), d)";
			TestCommonTools.consolePrintTestExprStart(761, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0762() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(d, -2*ndig(123456789, 10), 0, dig(123456789, d, 10) ) - sum(d, 1, ndig(123456789, 10), d)";
			TestCommonTools.consolePrintTestExprStart(762, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0763() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(p, 1, ndig(1234, 1), dig(1234, p, 1) ) - 1234";
			TestCommonTools.consolePrintTestExprStart(763, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0764() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(p, -ndig(1234, 1)+1, 0, dig(1234, p, 1) ) - 1234";
			TestCommonTools.consolePrintTestExprStart(764, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0765() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( isNaN( dig10( [NaN], 2 ) ) - [true] ) + ( isNaN( dig10( 10, [NaN] ) ) - [true] ) + ( isNaN( dig10( 10, 20 ) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(765, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0766() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( isNaN( dig( 0, 2, 1 ) ) - [true] ) + ( isNaN( dig( 10, -20, 1 ) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(766, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0767() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( isNaN( dig( 100, 1, 0 ) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(767, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0768() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( med(1)-1 ) + ( med(1,2)-1.5 ) + ( med(2,1)-1.5 ) + ( med(2,3,1)-2 ) + ( med(1,2,3)-2 ) + ( med(1,2,3,4)-2.5 ) + ( med(2,3,1,4)-2.5 ) + ( med(1,2,2,3)-2 ) + ( med(5,4,3,2,1)-3 ) + ( med(-5,-4,-3,-2,-1)+3 )";
			TestCommonTools.consolePrintTestExprStart(768, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0769() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN( med(1,2,[NaN] ) ) - [true]";
			TestCommonTools.consolePrintTestExprStart(769, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0770() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( mode(-1)+1 ) + ( mode(1)-1 )";
			TestCommonTools.consolePrintTestExprStart(770, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0771() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( mode(1,2)-1 ) + ( mode(2,1)-2 )";
			TestCommonTools.consolePrintTestExprStart(771, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0772() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( mode(1,2,3)-1 ) + ( mode(2,1,3)-2 ) + ( mode(3,2,1)-3 )";
			TestCommonTools.consolePrintTestExprStart(772, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0773() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "mode(1,1,1,1,1,1)-1";
			TestCommonTools.consolePrintTestExprStart(773, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0774() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "mode(1,2,1,2,1,2,1,2)-1";
			TestCommonTools.consolePrintTestExprStart(774, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0775() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "mode(1,2,1,2,1,2,1,2,2)-2";
			TestCommonTools.consolePrintTestExprStart(775, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0776() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "mode(2,3,1,4,7,5,6,5,8,9)-5";
			TestCommonTools.consolePrintTestExprStart(776, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0777() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "mode(2,3,1,4,7,5,6,5,8,9,4)-4";
			TestCommonTools.consolePrintTestExprStart(777, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0778() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN( mode(1,2,[NaN] ) ) - [true]";
			TestCommonTools.consolePrintTestExprStart(778, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0779() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( ndist(1) - 1 ) + ( ndist(1, 2) - 2 ) + ( ndist(1,2,3) - 3 ) + ( ndist(1,1,2) - 2 ) + ( ndist(1,2,1,2) - 2 )";
			TestCommonTools.consolePrintTestExprStart(779, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0780() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			String expStr = "ndist(1, 2, 1.000001, 1.0001, 3) - 4";
			TestCommonTools.consolePrintTestExprStart(780, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0781() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			String expStr = "isNaN( ndist(1,2,3,[NaN]) ) - [true]";
			TestCommonTools.consolePrintTestExprStart(781, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0782() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			String expStr = "( argmin(1) - 1 ) + ( argmin(1,2) - 1 ) + ( argmin(2,1) - 2 ) + ( argmin(2,2,2,1,3,-1) - 6 ) + ( argmin(1,2,3,-6,2,3,2) - 4 )";
			TestCommonTools.consolePrintTestExprStart(782, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0783() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			String expStr = "( argmax(-1) - 1 ) + ( argmax(1,2) - 2 ) + ( argmax(2,1) - 1 ) + ( argmax(-1,2,3,2,5) - 5 ) + ( argmax(2,4,1,2,3,10,8,1) - 6 )";
			TestCommonTools.consolePrintTestExprStart(783, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0784() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			String expStr = "argmax(4, 2, 4.000001, 3) - 1";
			TestCommonTools.consolePrintTestExprStart(784, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0785() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			String expStr = "argmin(2, 1.000001, 3, 1) - 2";
			TestCommonTools.consolePrintTestExprStart(785, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0786() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			String expStr = "isNaN( argmin(1,2,3,[NaN]) ) - [true]";
			TestCommonTools.consolePrintTestExprStart(786, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0787() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			String expStr = "isNaN( argmax(1,2,3,[NaN]) ) - [true]";
			TestCommonTools.consolePrintTestExprStart(787, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0788() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2^3 - 8";
			TestCommonTools.consolePrintTestExprStart(788, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0789() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-2^3 + 8";
			TestCommonTools.consolePrintTestExprStart(789, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0790() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "8^(1/3) - 2";
			TestCommonTools.consolePrintTestExprStart(790, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0791() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-8^(1/3) + 2";
			TestCommonTools.consolePrintTestExprStart(791, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0792() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "125^(1/3) - 5";
			TestCommonTools.consolePrintTestExprStart(792, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0793() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-125^(1/3) + 5";
			TestCommonTools.consolePrintTestExprStart(793, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0794() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "128^(1/7) - 2";
			TestCommonTools.consolePrintTestExprStart(794, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0795() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-128^(1/7) + 2";
			TestCommonTools.consolePrintTestExprStart(795, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0796() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "128^0 - 1";
			TestCommonTools.consolePrintTestExprStart(796, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0797() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-128^0 - 1";
			TestCommonTools.consolePrintTestExprStart(797, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0798() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(1/125)^(-1/3) - 5";
			TestCommonTools.consolePrintTestExprStart(798, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0799() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-1/125)^(-1/3) + 5";
			TestCommonTools.consolePrintTestExprStart(799, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0800() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( nfact(74) - 2 ) + ( factval(74, 1) - 2 ) + ( factval(74, 2) - 37 ) + ( factexp(74, 1) - 1 ) + ( factexp(74, 2) - 1 )";
			TestCommonTools.consolePrintTestExprStart(800, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0801() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( nfact(5632) - 2 ) + ( factval(5632, 1) - 2 ) + ( factval(5632, 2) - 11 ) + ( factexp(5632, 1) - 9 ) + ( factexp(5632, 2) - 1 )";
			TestCommonTools.consolePrintTestExprStart(801, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0802() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( factval(123456789, 0) - 1 ) + ( factval(123456789, -1) - 1 ) + ( factval(123456789, 4) - 1 ) + ( factval(123456789, 5) - 1 )";
			TestCommonTools.consolePrintTestExprStart(802, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0803() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( factexp(123456789, 0) - 0 ) + ( factexp(123456789, -1) - 0 ) + ( factexp(123456789, 4) - 0 ) + ( factexp(123456789, 5) - 0 )";
			TestCommonTools.consolePrintTestExprStart(803, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0804() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( factval(123456789, 1) - 3 ) + ( factval(123456789, 2) - 3607 ) + ( factval(123456789, 3) - 3803 )";
			TestCommonTools.consolePrintTestExprStart(804, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0805() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( factexp(123456789, 1) - 2 ) + ( factexp(123456789, 2) - 1 ) + ( factexp(123456789, 3) - 1 )";
			TestCommonTools.consolePrintTestExprStart(805, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0806() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "nfact(123456789) - 3";
			TestCommonTools.consolePrintTestExprStart(806, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0807() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( nfact(0) - 0 ) + ( isNaN( factval(0,1) ) - [true] ) + ( isNaN( factexp(0,1) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(807, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0808() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( isNaN( nfact([NaN]) ) - [true] ) + ( isNaN( factval([NaN],1) ) - [true] ) + ( isNaN( factexp([NaN],1) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(808, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0809() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( isNaN( factval(10,[NaN]) ) - [true] ) + ( isNaN( factexp(10,[NaN]) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(809, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0810() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			String expStr = "sum(n, -100000, 100000,  sgn(n)*prod( id, -10, nfact(n) + 10, factval(n, id)^factexp(n, id) ) - n , 3 )";
			TestCommonTools.consolePrintTestExprStart(810, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0811() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( root(7,128) - 2 ) + ( root(7,-128) + 2 )";
			TestCommonTools.consolePrintTestExprStart(811, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0812() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( root(3,125) - 5 ) + ( root(3,-125) + 5 )";
			TestCommonTools.consolePrintTestExprStart(812, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0813() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( root(3,8) - 2 ) + ( root(3,-8) + 2 )";
			TestCommonTools.consolePrintTestExprStart(813, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0814() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( root(1,1) - 1 ) + ( root(1,2) - 2 ) + ( root(1,0) - 0) + ( root(1,-2) +2 )";
			TestCommonTools.consolePrintTestExprStart(814, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0815() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( root(0,1) - 1 ) + ( root(0,0) - 0 )";
			TestCommonTools.consolePrintTestExprStart(815, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0816() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( isNaN( root(-2,3) ) - [true]  ) + ( isNaN( root(4,-10) ) - [true]  )";
			TestCommonTools.consolePrintTestExprStart(816, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0817() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( isNaN( root([NaN],3) ) - [true]  ) + ( isNaN( root(3,[NaN]) ) - [true]  )";
			TestCommonTools.consolePrintTestExprStart(817, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0818() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "der( sin(x), x, 0 )";
			TestCommonTools.consolePrintTestExprStart(818, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0819() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "der+( sin(x), x, 0 )";
			TestCommonTools.consolePrintTestExprStart(819, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0820() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "der-( sin(x), x, 0 )";
			TestCommonTools.consolePrintTestExprStart(820, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0821() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = pi");
			String expStr = "der( sin(x), x, x )";
			TestCommonTools.consolePrintTestExprStart(821, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = -1;
			if ( MathFunctions.abs(reg - value) <= 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0822() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = pi");
			String expStr = "der( sin(x), x, 2*x )";
			TestCommonTools.consolePrintTestExprStart(822, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0823() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 2");
			String expStr = "pi-arcsec(x)-arcsec(-x)";
			TestCommonTools.consolePrintTestExprStart(823, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0824() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 3");
			String expStr = "arccsc(-x)+arccsc(x)";
			TestCommonTools.consolePrintTestExprStart(824, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0825() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 5");
			String expStr = "der( arcsec(x), x ) - 1 / ( x^2 * sqrt(1 - 1 / x^2) )";
			TestCommonTools.consolePrintTestExprStart(825, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0826() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 6");
			String expStr = "der( arcsec(x), x ) - 1 / ( abs(x) * sqrt(x^2 - 1) )";
			TestCommonTools.consolePrintTestExprStart(826, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0827() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 7");
			String expStr = "der( arccsc(x), x ) + 1 / ( x^2 * sqrt(1 - 1 / x^2) )";
			TestCommonTools.consolePrintTestExprStart(827, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0828() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 8");
			String expStr = "der( arccsc(x), x ) + 1 / ( abs(x) * sqrt(x^2 - 1) )";
			TestCommonTools.consolePrintTestExprStart(828, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0829() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Function Ackermann = new Function("Ackermann(m,n) = iff( m = 0, n+1; (m>0) & (n=0), Ackermann(m-1,1); (m>0) & (n>0), Ackermann(m-1, Ackermann(m,n-1)) )");
			String expStr = "Ackermann(3,4)";
			TestCommonTools.consolePrintTestExprStart(829, expStr);
			Expression testExp = new Expression(expStr, Ackermann);
			double value = testExp.calculate();
			double reg = 125;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0830() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Function Tetration = new Function("Tetration(x,n) = if(n > 1, x^Tetration(x,n-1), x)");
			String expStr = "Tetration(sqrt(2),80)";
			TestCommonTools.consolePrintTestExprStart(830, expStr);
			Expression testExp = new Expression(expStr, Tetration);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0831() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 3.5");
			String expStr = "Gamma(x+1)-x*Gamma(x)";
			TestCommonTools.consolePrintTestExprStart(831, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0832() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = -3.5");
			String expStr = "Gamma(x+1)-x*Gamma(x)";
			TestCommonTools.consolePrintTestExprStart(832, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0833() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 1.7");
			String expStr = "Gamma(x)*Gamma(x+1/2) - ( sqrt(pi) / 2^(2*x-1) ) * Gamma(2*x)";
			TestCommonTools.consolePrintTestExprStart(833, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0834() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 0.7");
			String expStr = "Gamma(x)*Gamma(1-x) - pi / sin(pi * x)";
			TestCommonTools.consolePrintTestExprStart(834, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0835() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 0.7");
			String expStr = "Gamma(x+1/2)*Gamma(1/2-x) - pi / cos(pi * x)";
			TestCommonTools.consolePrintTestExprStart(835, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0836() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = 0.7");
			String expStr = "Gamma(x+1/2)*Gamma(1/2-x) - pi / cos(pi * x)";
			TestCommonTools.consolePrintTestExprStart(836, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0837() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "Gamma(-3/2) - 4/3 *sqrt(pi)";
			TestCommonTools.consolePrintTestExprStart(837, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0838() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "Gamma(-1/2) + 2 *sqrt(pi)";
			TestCommonTools.consolePrintTestExprStart(838, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0839() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "Gamma(1/2) - sqrt(pi)";
			TestCommonTools.consolePrintTestExprStart(839, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0840() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "Gamma(3/2) - sqrt(pi)/2";
			TestCommonTools.consolePrintTestExprStart(840, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0841() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "Gamma(5/2) - 3/4 * sqrt(pi)";
			TestCommonTools.consolePrintTestExprStart(841, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0842() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "Gamma(7/2) - 15/8 * sqrt(pi)";
			TestCommonTools.consolePrintTestExprStart(842, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0843() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(n, 1, 10, Gamma(n) - (n-1)! )";
			TestCommonTools.consolePrintTestExprStart(843, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0844() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(n, -100, 0, isNaN( Gamma(n) ) )";
			TestCommonTools.consolePrintTestExprStart(844, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0845() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.setEpsilonComparison();
			Argument x0 = new Argument("x0 = 1.3");
			String expStr = "der( Gamma(x), x, x0 ) - ( -[gam] + sum(n, 0, 10000000, 1/(n+1) - 1/(n+x0) ) ) * Gamma(x0)";
			TestCommonTools.consolePrintTestExprStart(845, expStr);
			Expression testExp = new Expression(expStr, x0);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0846() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Function V = new Function("V(R,n) = if( n > 1, int( V( R/2, n-1 ), x, -R, R ), 1 )");
			String expStr = "V(1,1) + V(1,2)";
			TestCommonTools.consolePrintTestExprStart(846, expStr);
			Expression testExp = new Expression(expStr, V);
			double value = testExp.calculate();
			double reg = 3;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0847() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Function uniSum = new Function("uniSum(n, x) = if( x >= 1, n, uniSum(n+1, x + rUni(0,1) ) )");
			String expStr = "avg( i, 1, 100000, uniSum(0,0) ) - e";
			TestCommonTools.consolePrintTestExprStart(847, expStr);
			Expression testExp = new Expression(expStr, uniSum);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0848() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument n = new Argument("n = 100000");
			String expStr = "sqrt( 6 / (sum( i, 1, n, if( gcd( [Nat], [Nat] ) = 1, 1, 0) ) / n) ) - pi";
			TestCommonTools.consolePrintTestExprStart(848, expStr);
			Expression testExp = new Expression(expStr, n);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0849() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "root( 3, 7 + sqrt(50) ) + root( 3, 7 - sqrt(50) )";
			TestCommonTools.consolePrintTestExprStart(849, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.000000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0850() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "root( 3, 7 + root(2,50) ) + root( 3, 7 - root(2,50) )";
			TestCommonTools.consolePrintTestExprStart(850, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.000000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0851() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(7 + sqrt(50))^(1/3) + (7 - sqrt(50))^(1/3)";
			TestCommonTools.consolePrintTestExprStart(851, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.000000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0852() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(7 + 50^(1/2))^(1/3) + (7 - 50^(1/2))^(1/3)";
			TestCommonTools.consolePrintTestExprStart(852, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.000000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0853() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			Function Nrec = new Function("Nrec(a, s, k) = if( s >= a, k, Nrec( a, s + [Uni], k+1 ) )");
			Argument N1 = new Argument("N1 = Nrec(1,0,0)", Nrec);
			Argument N2 = new Argument("N2 = Nrec(2,0,0)", Nrec);
			Argument N3 = new Argument("N3 = Nrec(3,0,0)", Nrec);
			Argument N4 = new Argument("N4 = Nrec(4,0,0)", Nrec);
			Argument N5 = new Argument("N5 = Nrec(5,0,0)", Nrec);
			Argument EN1 = new Argument("EN1 = avg( i, 1, 100000, N1 )", N1);
			Argument EN2 = new Argument("EN2 = avg( i, 1, 100000, N2 )", N2);
			Argument EN3 = new Argument("EN3 = avg( i, 1, 100000, N3 )", N3);
			Argument EN4 = new Argument("EN4 = avg( i, 1, 100000, N4 )", N4);
			Argument EN5 = new Argument("EN5 = avg( i, 1, 100000, N5 )", N5);
			String expStr = "(EN1 - e) + (EN2 - (e^2 - e)) + (EN3 - (e^3 - 2*e^2 + e/2)) + (EN4 - (e^4 - 3*e^3 + 2*e^2 - e/6)) + (EN5 - (e^5 - 4*e^4 + 9/2 * e^3 - 4/3 * e^2 + e/24))";
			TestCommonTools.consolePrintTestExprStart(853, expStr);
			Expression testExp = new Expression(expStr, EN1, EN2, EN3, EN4, EN5);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.1 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0854() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "stdi(i, 1, 100000, X)";
			Function f = new Function("f(x) = pNor(x,2,4)");
			Function RejectSampling = new Function("RejectSampling(a,b,M,x) = if( rUni(0,M) <= f(x), x, RejectSampling(a,b,M, rUni(a,b) ) )", f);
			Argument X = new Argument("X = RejectSampling( -22, 26, pNor(2,2,4) , rUni(-22, 26) )", RejectSampling);
			TestCommonTools.consolePrintTestExprStart(854, expStr);
			Expression testExp = new Expression(expStr, X);
			double value = testExp.calculate();
			double reg = 4;
			if ( MathFunctions.abs(reg - value) <= 0.05 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0855() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, -3, 3, pNor(x, 0, 1) - f(x, 30), 0.1)";
			Function f = new Function("f(x,n) = if( (x*sqrt(n/12)+n/2) >= 0 , ( 1 / (n-1)! ) * sum(k, 0, floor((x*sqrt(n/12)+n/2)), (-1)^k * C(n,k) * (x*sqrt(n/12)+n/2-k)^(n-1) )*sqrt(n/12) ; 0)");
			TestCommonTools.consolePrintTestExprStart(855, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0856() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			String expStr = "sum(x, -20.05, 20.05, sin(x)/x - prod(k,1, 10000 , 1 - (x/(k*pi))^2 ) , 0.1)";
			TestCommonTools.consolePrintTestExprStart(856, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0857() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
            mXparser.disableCanonicalRounding();
            mXparser.disableAlmostIntRounding();
            mXparser.disableUlpRounding();
            Function f = new Function("f(x,a,n) = (sqrt(pi)/2) * sum(k, 0, n, ( a^(1/2 - k) / ( Gamma(3/2 - k) * k! ) ) * (x-a)^k   )");
			String expStr = "sum(x, 1, 3, sqrt(x) - f(x,2,50) , 0.001)";
			TestCommonTools.consolePrintTestExprStart(857, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0858() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "sin(90)";
			TestCommonTools.consolePrintTestExprStart(858, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0859() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "asin(-1)";
			TestCommonTools.consolePrintTestExprStart(859, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -90;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0860() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "cos(90)";
			TestCommonTools.consolePrintTestExprStart(860, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0861() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "acos(0)";
			TestCommonTools.consolePrintTestExprStart(861, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 90;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0862() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "tan(-45)";
			TestCommonTools.consolePrintTestExprStart(862, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0863() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "atan(1)";
			TestCommonTools.consolePrintTestExprStart(863, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 45;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0864() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "ctan(45)";
			TestCommonTools.consolePrintTestExprStart(864, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0865() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "actan(1)";
			TestCommonTools.consolePrintTestExprStart(865, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 45;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0866() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "sec(60)";
			TestCommonTools.consolePrintTestExprStart(866, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0867() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "arcsec(2)";
			TestCommonTools.consolePrintTestExprStart(867, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 60;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0868() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "csc(30)";
			TestCommonTools.consolePrintTestExprStart(868, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0869() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "arccsc(2)";
			TestCommonTools.consolePrintTestExprStart(869, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0870() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			String expStr = "Sinc(90)";
			TestCommonTools.consolePrintTestExprStart(870, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0 / 90.0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0871() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "gcd(3333333333333330.0,10000000000000000.0)";
			TestCommonTools.consolePrintTestExprStart(871, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0872() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "gcd(58333333333333, 100000000000000)";
			TestCommonTools.consolePrintTestExprStart(872, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0873() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2.0+2.0/3.0";
			TestCommonTools.consolePrintTestExprStart(873, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = (new Expression(NumberTheory.toMixedFractionString(2.0+2.0/3.0))).calculate();
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0874() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-2.0-2.0/3.0";
			TestCommonTools.consolePrintTestExprStart(874, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = (new Expression(NumberTheory.toMixedFractionString(-2.0-2.0/3.0))).calculate();
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0875() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "17.0/3.0";
			TestCommonTools.consolePrintTestExprStart(875, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = (new Expression(NumberTheory.toMixedFractionString(17.0/3.0))).calculate();
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0876() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "-17.0/3.0";
			TestCommonTools.consolePrintTestExprStart(876, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = (new Expression(NumberTheory.toMixedFractionString(-17.0/3.0))).calculate();
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0877() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(1_2 - 1/2) + (-1_3 + 1/3)";
			TestCommonTools.consolePrintTestExprStart(877, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0878() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(11_3 - 11/3) + (-11_3 + 11/3)";
			TestCommonTools.consolePrintTestExprStart(878, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0879() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(123121_71 - 123121/71) + (-123121_71 + 123121/71)";
			TestCommonTools.consolePrintTestExprStart(879, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0880() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( 1_1_2 - (1+1/2) ) + (-1_1_2 + (1+1/2) )";
			TestCommonTools.consolePrintTestExprStart(880, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0881() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( 110_5_2 - (110+5/2) ) + (-110_5_2 + (110+5/2) )";
			TestCommonTools.consolePrintTestExprStart(881, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0882() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( 1234_12345_123456 - (1234+12345/123456) ) + (-1234_12345_123456 + (1234+12345/123456) )";
			TestCommonTools.consolePrintTestExprStart(882, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0883() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "0_0_1 - 0_0_2";
			TestCommonTools.consolePrintTestExprStart(883, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0884() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "0_1 - 0_234";
			TestCommonTools.consolePrintTestExprStart(884, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0885() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN(0_0_0) - [true]";
			TestCommonTools.consolePrintTestExprStart(885, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0886() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN(1_2_0) - [true]";
			TestCommonTools.consolePrintTestExprStart(886, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0887() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN(1_0_0) - [true]";
			TestCommonTools.consolePrintTestExprStart(887, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0888() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN(0_2_0) - [true]";
			TestCommonTools.consolePrintTestExprStart(888, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0889() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN(1_0) - [true]";
			TestCommonTools.consolePrintTestExprStart(889, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0890() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN(0_0) - [true]";
			TestCommonTools.consolePrintTestExprStart(890, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0891() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "isNaN(100_0) - [true]";
			TestCommonTools.consolePrintTestExprStart(891, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0892() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2^0 - 2^^0";
			TestCommonTools.consolePrintTestExprStart(892, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0893() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2^1 - 2^^1";
			TestCommonTools.consolePrintTestExprStart(893, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0894() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2^2 - 2^^2";
			TestCommonTools.consolePrintTestExprStart(894, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0895() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2^2^2 - 2^^3";
			TestCommonTools.consolePrintTestExprStart(895, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0896() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "2^2^2^2 - 2^^4";
			TestCommonTools.consolePrintTestExprStart(896, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0897() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(e^(-e))^^100000000 - 1/e";
			TestCommonTools.consolePrintTestExprStart(897, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0898() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(e^(1/e))^^10000000 - e";
			TestCommonTools.consolePrintTestExprStart(898, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000001)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0899() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sqrt(2)^^100 - 2";
			TestCommonTools.consolePrintTestExprStart(899, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0900() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( (-1)^^10 + 1 ) + ( (-1)^^0 - 1 )";
			TestCommonTools.consolePrintTestExprStart(900, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0901() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "0^^1234";
			TestCommonTools.consolePrintTestExprStart(901, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0902() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "(-2)^^(2) - 1_4";
			TestCommonTools.consolePrintTestExprStart(902, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0903() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum( x, e^(-e), e^(1/e), LambW0( -ln(x) ) / (-ln(x) ) - solve(y - x^y, y, 1/e, e) , 0.001 )";
			TestCommonTools.consolePrintTestExprStart(903, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0904() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, -1/e + 0.1, 100, der( 0.5 * ( 1 + LambW0(x) )^2 , x, x) - LambW0(x)/x, 0.01)";
			TestCommonTools.consolePrintTestExprStart(904, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0905() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, -1/e, 100, e^LambW0(x) - x / LambW0(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(905, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0906() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, -1/e, -0.01, e^LambW1(x) - x / LambW1(x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(906, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0907() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "int( LambW0(x), x, 0, e) - e + 1";
			TestCommonTools.consolePrintTestExprStart(907, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0908() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, -0.3, 0.3, LambW0(x) - sum(n, 1, 100, ( ( (-n)^(n-1) ) / n! ) * x^n ) , 0.001)";
			TestCommonTools.consolePrintTestExprStart(908, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0909() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, 0, 200, LambW0(x * e^x) - x, 0.001)";
			TestCommonTools.consolePrintTestExprStart(909, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0910() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, -1, 0, LambW0(x * e^x) - x, 0.001)";
			TestCommonTools.consolePrintTestExprStart(910, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0911() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "avg(x, -10, -1, abs(x - LambW1(x * e^x))/abs(x), 0.001)";
			TestCommonTools.consolePrintTestExprStart(911, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0912() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, 0.01, 200, ln( LambW0(x) ) - ln(x) + LambW0(x), 0.001)";
			TestCommonTools.consolePrintTestExprStart(912, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0913() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument n = new Argument("n = 4");
			String expStr = "sum(x, 0.01, 200, LambW0( (n*x^n) / LambW0(x)^(n-1) ) - n*LambW0(x), 0.001)";
			TestCommonTools.consolePrintTestExprStart(913, expStr);
			Expression testExp = new Expression(expStr, n);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0914() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x = rUni(0,100)");
			Argument y = new Argument("y = rUni(0,100)");
			String expStr = "LambW0(x) + LambW0(y) - LambW0( x*y*( 1/LambW0(x) + 1/LambW0(y) ) )";
			TestCommonTools.consolePrintTestExprStart(914, expStr);
			Expression testExp = new Expression(expStr, x, y);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0915() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "int( LambW0(2 * cot(x)^2) * sec(x)^2, x, 0.001182, pi-0.008 ) - 4*sqrt(pi)";
			TestCommonTools.consolePrintTestExprStart(915, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.1 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0916() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "int( LambW0( 1/x^2  ), x, 0.0000000804, 300 )/sqrt(2*pi)-1";
			TestCommonTools.consolePrintTestExprStart(916, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0917() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, 1/e, e, LambW0(-ln(x)/x) + ln(x), 0.001)";
			TestCommonTools.consolePrintTestExprStart(917, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0918() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( LambW0(-1/e) + 1 ) + ( LambW0(0) - 0 ) + ( LambW0(1) - [Om] ) + ( LambW0(1) + ln( LambW0(1) )  ) + ( LambW0(e) - 1 ) + ( LambW0(-ln(sqrt(2))) + 2*ln(sqrt(2)) )";
			TestCommonTools.consolePrintTestExprStart(918, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0919() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "LambW1(-1/e) + 1";
			TestCommonTools.consolePrintTestExprStart(919, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0920() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "der( LambW0(x), x, 0) - 1";
			TestCommonTools.consolePrintTestExprStart(920, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0921() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			String expStr = "int( LambW0(x)/( x*sqrt(x) ), x, 0.01 , 240000) - 2*sqrt(2*pi)";
			TestCommonTools.consolePrintTestExprStart(921, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0922() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, 0.001, 6, x^x - ( e^LambW0( ln(x^x) ) )^( e^LambW0( ln(x^x) ) ), 0.001)";
			TestCommonTools.consolePrintTestExprStart(922, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0923() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( isNaN( LambW0(-10) ) - [true] ) + ( isNaN( LambW1(-10) ) - [true] ) + ( isNaN( LambW1(10) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(923, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0924() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "( isNaN( 2^^[NaN] ) - [true] ) + ( isNaN( [NaN]^^2 ) - [true] ) + ( isNaN( 2^^(-1) ) - [true] ) + ( isNaN( 0^^0 ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(924, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0925() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, 1, 10, sgnGamma(x)) + sum(x, 0.5, 9.5, sgnGamma(x)) - 20";
			TestCommonTools.consolePrintTestExprStart(925, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0926() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, -99, 0, isNaN( sgnGamma(x) ) )";
			TestCommonTools.consolePrintTestExprStart(926, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0927() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, -98.5, -0.5, sgnGamma(x), 2) + 50 + sum(x, -99.5, -1.5, sgnGamma(x), 2) - 50";
			TestCommonTools.consolePrintTestExprStart(927, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0928() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			String expStr = "sum(x, 0.5, 50, logGamma(x) - ( -[gam]*x - ln(x) + sum(k, 1, 10000+x^3, x/k - ln(1 + x/k) ) ), 0.5)";
			TestCommonTools.consolePrintTestExprStart(928, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0929() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(x, -99, 0, isNaN( logGamma(x) ) )";
			TestCommonTools.consolePrintTestExprStart(929, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0930() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.setEpsilonComparison();
			String expStr = "sum(s, -50.5, -50.5, sum(x, 0.5, 50.5, GammaL(s,x) + GammaU(s,x) - Gamma(s) ) )";
			TestCommonTools.consolePrintTestExprStart(930, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setDefaultEpsilon();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0931() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 0.1, 1, 0.001}], 16] = 2114.212208108448
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 1, Gamma(x), 0.001) - 2114.212208108448 ) / 2114.212208108448";
			TestCommonTools.consolePrintTestExprStart(931, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0932() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 1.1, 2, 0.001}], 16] = 826.2989620272716
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 1.1, 2, Gamma(x), 0.001) - 826.2989620272716 ) / 826.2989620272716";
			TestCommonTools.consolePrintTestExprStart(932, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0933() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 2.1, 3, 0.001}], 16] = 1284.551346724549
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 2.1, 3, Gamma(x), 0.001) - 1284.551346724549 ) / 1284.551346724549";
			TestCommonTools.consolePrintTestExprStart(933, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0934() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 3.1, 4, 0.001}], 16] = 3338.776475304076
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 3.1, 4, Gamma(x), 0.001) - 3338.776475304076 ) / 3338.776475304076";
			TestCommonTools.consolePrintTestExprStart(934, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0935() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 4.1, 5, 0.001}], 16] = 12102.99996568467
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 4.1, 5, Gamma(x), 0.001) - 12102.99996568467 ) / 12102.99996568467";
			TestCommonTools.consolePrintTestExprStart(935, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0936() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 5.1, 6, 0.001}], 16] = 56192.71972868672
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 5.1, 6, Gamma(x), 0.001) - 56192.71972868672 ) / 56192.71972868672";
			TestCommonTools.consolePrintTestExprStart(936, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0937() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 6.1, 7, 0.001}], 16] = 317850.3398689155
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 6.1, 7, Gamma(x), 0.001) - 317850.3398689155 ) / 317850.3398689155";
			TestCommonTools.consolePrintTestExprStart(937, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0938() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 7.1, 8, 0.001}], 16] = 2119192.458453365
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 7.1, 8, Gamma(x), 0.001) - 2119192.458453365 ) / 2119192.458453365";
			TestCommonTools.consolePrintTestExprStart(938, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0939() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 8.1, 9, 0.001}], 16] = 1.626741828826147E7
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 8.1, 9, Gamma(x), 0.001) - 1.626741828826147E7 ) / 1.626741828826147E7";
			TestCommonTools.consolePrintTestExprStart(939, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0940() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 9.1, 10, 0.001}], 16] = 1.412638999378844E8
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 9.1, 10, Gamma(x), 0.001) - 1.412638999378844E8 ) / 1.412638999378844E8";
			TestCommonTools.consolePrintTestExprStart(940, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0941() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 10.1, 20, 0.1}], 16] = 4.758039372588876E17
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 10.1, 20, Gamma(x), 0.1) - 4.758039372588876E17 ) / 4.758039372588876E17";
			TestCommonTools.consolePrintTestExprStart(941, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0942() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 20.1, 100, 0.1}], 16] = 2.532008062312612E156
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 20.1, 100, Gamma(x), 0.1) - 2.532008062312612E156 ) / 2.532008062312612E156";
			TestCommonTools.consolePrintTestExprStart(942, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0943() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, -0.9, -0.1, 0.001}], 16] = -4033.861662372823
			*/
			mXparser.disableUlpRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			String expStr = "( sum(x, -0.9, -0.1, Gamma(x), 0.001) - (-4033.861662372823) ) / (-4033.861662372823)";
			TestCommonTools.consolePrintTestExprStart(943, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0944() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, -1.9, -1.1, 0.001}], 16] = 2779.242455572773
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -1.9, -1.1, Gamma(x), 0.001) - 2779.242455572773 ) / 2779.242455572773";
			TestCommonTools.consolePrintTestExprStart(944, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0945() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, -2.9, -2.1, 0.001}], 16] = -1146.484828532192
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -2.9, -2.1, Gamma(x), 0.001) - (-1146.484828532192) ) / (-1146.484828532192)";
			TestCommonTools.consolePrintTestExprStart(945, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0946() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, -3.9, -3.1, 0.001}], 16] = 336.6702016774144
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -3.9, -3.1, Gamma(x), 0.001) - 336.6702016774144 ) / 336.6702016774144";
			TestCommonTools.consolePrintTestExprStart(946, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0947() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, 0.1, 1, 0.001}], 16] = -76.66832811614711
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -4.9, -4.1, Gamma(x), 0.001) - (-76.66832811614711) ) / (-76.66832811614711)";
			TestCommonTools.consolePrintTestExprStart(947, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0948() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, -5.9, -5.1, 0.001}], 16] = 14.25043511683485
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -5.9, -5.1, Gamma(x), 0.001) - 14.25043511683485 ) / 14.25043511683485";
			TestCommonTools.consolePrintTestExprStart(948, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0949() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, -6.9, -6.1, 0.001}], 16] = -2.236810549400713
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -6.9, -6.1, Gamma(x), 0.001) - (-2.236810549400713) ) / (-2.236810549400713)";
			TestCommonTools.consolePrintTestExprStart(949, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0950() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, -7.9, -7.1, 0.001}], 16] = 0.3037861166613209
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -7.9, -7.1, Gamma(x), 0.001) - 0.3037861166613209 ) / 0.3037861166613209";
			TestCommonTools.consolePrintTestExprStart(950, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0951() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, -8.9, -8.1, 0.001}], 16] = -0.03635359758623678
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -8.9, -8.1, Gamma(x), 0.001) - (-0.03635359758623678) ) / (-0.03635359758623678)";
			TestCommonTools.consolePrintTestExprStart(951, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0952() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, -9.9, -9.1, 0.001}], 16] = 0.003887845100640342
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -9.9, -9.1, Gamma(x), 0.001) - 0.003887845100640342 ) / 0.003887845100640342";
			TestCommonTools.consolePrintTestExprStart(952, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0953() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[Gamma[x], {x, -30.95, -10.05, 0.1}], 16] = -8.376548071082549E-6
			*/
			mXparser.disableUlpRounding();
			mXparser.disableAlmostIntRounding();
			String expStr = "( sum(x, -30.95, -10.05, Gamma(x), 0.1) - (-8.376548071082549E-6) ) / (-8.376548071082549E-6)";
			TestCommonTools.consolePrintTestExprStart(953, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0954() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, -90.95, 100.05, abs(ln(abs(Gamma(x))) - logGamma(x)), 0.1)";
			TestCommonTools.consolePrintTestExprStart(954, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0955() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 6870.775811214982
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaU(s, x), 0.001), 0.1) - 6870.775811214982 ) / 6870.775811214982";
			TestCommonTools.consolePrintTestExprStart(955, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0956() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 9785.880306439629
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaU(s, x), 0.001), 0.1) - 9785.880306439629 ) / 9785.880306439629";
			TestCommonTools.consolePrintTestExprStart(956, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0957() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 21205.70354995280
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaU(s, x), 0.001), 0.1) - 21205.70354995280 ) / 21205.70354995280";
			TestCommonTools.consolePrintTestExprStart(957, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0958() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 62496.08447233523
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaU(s, x), 0.001), 0.1) - 62496.08447233523 ) / 62496.08447233523";
			TestCommonTools.consolePrintTestExprStart(958, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0959() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 237127.0905587526
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaU(s, x), 0.001), 0.1) - 237127.0905587526 ) / 237127.0905587526";
			TestCommonTools.consolePrintTestExprStart(959, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0960() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 12659.04924160019
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaU(s, x), 0.1), 0.1) - 12659.04924160019 ) / 12659.04924160019";
			TestCommonTools.consolePrintTestExprStart(960, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0961() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 72192.46327984912
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaU(s, x), 0.1), 0.1) - 72192.46327984912 ) / 72192.46327984912";
			TestCommonTools.consolePrintTestExprStart(961, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-8 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0962() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 483608.0262675140
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaU(s, x), 0.1), 0.1) - 483608.0262675140 ) / 483608.0262675140";
			TestCommonTools.consolePrintTestExprStart(962, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-5 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0963() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 8224.880733100714
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaU(s, x), 0.001), 0.1) - 8224.880733100714 ) / 8224.880733100714";
			TestCommonTools.consolePrintTestExprStart(963, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0964() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 23629.12458493255
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaU(s, x), 0.001), 0.1) - 23629.12458493255 ) / 23629.12458493255";
			TestCommonTools.consolePrintTestExprStart(964, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0965() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 117364.35585450924
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaU(s, x), 0.001), 0.1) - 117364.35585450924 ) / 117364.35585450924";
			TestCommonTools.consolePrintTestExprStart(965, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0966() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 771195.4772567508
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaU(s, x), 0.001), 0.1) - 771195.4772567508 ) / 771195.4772567508";
			TestCommonTools.consolePrintTestExprStart(966, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0967() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 5800247.185711337
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaU(s, x), 0.001), 0.1) - 5800247.185711337 ) / 5800247.185711337";
			TestCommonTools.consolePrintTestExprStart(967, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0968() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4.685905102859140E7
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaU(s, x), 0.001), 0.1) - 4.685905102859140E7 ) / 4.685905102859140E7";
			TestCommonTools.consolePrintTestExprStart(968, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0969() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3.949477860591464E8
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaU(s, x), 0.001), 0.1) - 3.949477860591464E8 ) / 3.949477860591464E8";
			TestCommonTools.consolePrintTestExprStart(969, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0970() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3.421898375421077E9
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaU(s, x), 0.001), 0.1) - 3.421898375421077E9 ) / 3.421898375421077E9";
			TestCommonTools.consolePrintTestExprStart(970, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0971() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 35413.46835095401
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaL(s, x), 0.001), 0.1) - 35413.46835095401 ) / 35413.46835095401";
			TestCommonTools.consolePrintTestExprStart(971, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			#if NET20 || NET35
			double eps = 1e-13;
			#else
			double eps = 1e-15;
			#endif
			if ( MathFunctions.abs(reg - value) <= eps )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0972() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 6740.098934105806
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaL(s, x), 0.001), 0.1) - 6740.098934105806 ) / 6740.098934105806";
			TestCommonTools.consolePrintTestExprStart(972, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0973() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4485.323384538212
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaL(s, x), 0.001), 0.1) - 4485.323384538212 ) / 4485.323384538212";
			TestCommonTools.consolePrintTestExprStart(973, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0974() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4279.445033746266
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaL(s, x), 0.001), 0.1) - 4279.445033746266 ) / 4279.445033746266";
			TestCommonTools.consolePrintTestExprStart(974, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0975() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4932.908754940856
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaL(s, x), 0.001), 0.1) - 4932.908754940856 ) / 4932.908754940856";
			TestCommonTools.consolePrintTestExprStart(975, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0976() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 71.00936681198708
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaL(s, x), 0.1), 0.1) - 71.00936681198708 ) / 71.00936681198708";
			TestCommonTools.consolePrintTestExprStart(976, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0977() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 99.53718099344381
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaL(s, x), 0.1), 0.1) - 99.53718099344381 ) / 99.53718099344381";
			TestCommonTools.consolePrintTestExprStart(977, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0978() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 147.6273237932475
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaL(s, x), 0.1), 0.1) - 147.6273237932475 ) / 147.6273237932475";
			TestCommonTools.consolePrintTestExprStart(978, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0979() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -88902.11398055719
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaL(s, x), 0.001), 0.1) - (-88902.11398055719) ) / (-88902.11398055719)";
			TestCommonTools.consolePrintTestExprStart(979, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0980() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 31955.72452652288
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaL(s, x), 0.001), 0.1) - 31955.72452652288 ) / 31955.72452652288";
			TestCommonTools.consolePrintTestExprStart(980, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0981() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -140294.05242515303
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaL(s, x), 0.001), 0.1) - (-140294.05242515303) ) / (-140294.05242515303)";
			TestCommonTools.consolePrintTestExprStart(981, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			#if NET20 || NET35
			double eps = 1e-13;
			#else
			double eps = 1e-14;
			#endif
			if ( MathFunctions.abs(reg - value) <= eps )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0982() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -764462.0732232045
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaL(s, x), 0.001), 0.1) - (-764462.0732232045) ) / (-764462.0732232045)";
			TestCommonTools.consolePrintTestExprStart(982, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0983() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -5.801780552273669E6
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaL(s, x), 0.001), 0.1) - (-5.801780552273669E6) ) / (-5.801780552273669E6)";
			TestCommonTools.consolePrintTestExprStart(983, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0984() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -4.685876601988902E7
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaL(s, x), 0.001), 0.1) - (-4.685876601988902E7) ) / (-4.685876601988902E7)";
			TestCommonTools.consolePrintTestExprStart(984, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0985() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -3.949478307953569E8
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaL(s, x), 0.001), 0.1) - (-3.949478307953569E8) ) / (-3.949478307953569E8)";
			TestCommonTools.consolePrintTestExprStart(985, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0986() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -3.421898369345358E9
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaL(s, x), 0.001), 0.1) - (-3.421898369345358E9) ) / (-3.421898369345358E9)";
			TestCommonTools.consolePrintTestExprStart(986, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0987() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, -2.95, 2.95, GammaU(0,x) - ( -Ei(-x) ), 0.1)";
			TestCommonTools.consolePrintTestExprStart(987, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-16 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0988() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(s, -2.95, 2.95, GammaL(s,0), 0.1)";
			TestCommonTools.consolePrintTestExprStart(988, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-16 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0989() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(s, -2.95, 2.95, GammaU(s,0) - Gamma(s), 0.1)";
			TestCommonTools.consolePrintTestExprStart(989, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-16 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0990() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(s, 1, 5, sum(x, 0.5, 3.5, GammaU(s, x) - ((s-1)!) * e^(-x) * sum(k, 0, s-1, x^k / k! ) , 0.01) )";
			TestCommonTools.consolePrintTestExprStart(990, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0991() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, -5, 5, GammaU(1,x) - e^(-x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(991, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0992() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, -5, 5, GammaL(1,x) - ( 1 - e^(-x) ), 0.01)";
			TestCommonTools.consolePrintTestExprStart(992, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0993() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, 0.1, 8, GammaU(0.5, x) - sqrt(pi) * erfc( sqrt(x) ), 0.01)";
			TestCommonTools.consolePrintTestExprStart(993, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0994() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, 0.1, 8, GammaL(0.5, x) - sqrt(pi) * erf( sqrt(x) ), 0.01)";
			TestCommonTools.consolePrintTestExprStart(994, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0995() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4128.619249122392
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaRegU(s, x), 0.001), 0.1) - 4128.619249122392 ) / 4128.619249122392";
			TestCommonTools.consolePrintTestExprStart(995, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0996() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 10648.33231753313
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaRegU(s, x), 0.001), 0.1) - 10648.33231753313 ) / 10648.33231753313";
			TestCommonTools.consolePrintTestExprStart(996, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0997() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 14732.67120032403
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaRegU(s, x), 0.001), 0.1) - 14732.67120032403 ) / 14732.67120032403";
			TestCommonTools.consolePrintTestExprStart(997, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0998() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 16769.95611832584
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaRegU(s, x), 0.001), 0.1) - 16769.95611832584 ) / 16769.95611832584";
			TestCommonTools.consolePrintTestExprStart(998, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr0999() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 17609.29585783721
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaRegU(s, x), 0.001), 0.1) - 17609.29585783721 ) / 17609.29585783721";
			TestCommonTools.consolePrintTestExprStart(999, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1000() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 198.6732618854221
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaRegU(s, x), 0.1), 0.1) - 198.6732618854221 ) / 198.6732618854221";
			TestCommonTools.consolePrintTestExprStart(1000, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1001() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 199.6608252491266
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaRegU(s, x), 0.1), 0.1) - 199.6608252491266 ) / 199.6608252491266";
			TestCommonTools.consolePrintTestExprStart(1001, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-8 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1002() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 199.9222940005033
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaRegU(s, x), 0.1), 0.1) - 199.9222940005033 ) / 199.9222940005033";
			TestCommonTools.consolePrintTestExprStart(1002, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-6 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1003() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -1776.380588210588
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaRegU(s, x), 0.001), 0.1) - (-1776.380588210588) ) / (-1776.380588210588)";
			TestCommonTools.consolePrintTestExprStart(1003, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1004() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 7890.923829786565
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaRegU(s, x), 0.001), 0.1) - 7890.923829786565 ) / 7890.923829786565";
			TestCommonTools.consolePrintTestExprStart(1004, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1005() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -102249.9066253191
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaRegU(s, x), 0.001), 0.1) - (-102249.9066253191) ) / (-102249.9066253191)";
			TestCommonTools.consolePrintTestExprStart(1005, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1006() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 2.440576583013389E6
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaRegU(s, x), 0.001), 0.1) - 2.440576583013389E6 ) / 2.440576583013389E6";
			TestCommonTools.consolePrintTestExprStart(1006, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1007() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -8.522034351730967E7
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaRegU(s, x), 0.001), 0.1) - (-8.522034351730967E7) ) / (-8.522034351730967E7)";
			TestCommonTools.consolePrintTestExprStart(1007, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1008() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3.889240488572830E9
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaRegU(s, x), 0.001), 0.1) - 3.889240488572830E9 ) / 3.889240488572830E9";
			TestCommonTools.consolePrintTestExprStart(1008, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1009() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -2.181166295073751E11
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaRegU(s, x), 0.001), 0.1) - (-2.181166295073751E11) ) / (-2.181166295073751E11)";
			TestCommonTools.consolePrintTestExprStart(1009, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1010() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 1.447213822212101E13
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaRegU(s, x), 0.001), 0.1) - 1.447213822212101E13 ) / 1.447213822212101E13";
			TestCommonTools.consolePrintTestExprStart(1010, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1011() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 13891.38075087760
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaRegL(s, x), 0.001), 0.1) - 13891.38075087760 ) / 13891.38075087760";
			TestCommonTools.consolePrintTestExprStart(1011, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1012() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 7371.667682466868
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaRegL(s, x), 0.001), 0.1) - 7371.667682466868 ) / 7371.667682466868";
			TestCommonTools.consolePrintTestExprStart(1012, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1013() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3287.328799675970
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaRegL(s, x), 0.001), 0.1) - 3287.328799675970 ) / 3287.328799675970";
			TestCommonTools.consolePrintTestExprStart(1013, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1014() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 1250.043881674157
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaRegL(s, x), 0.001), 0.1) - 1250.043881674157 ) / 1250.043881674157";
			TestCommonTools.consolePrintTestExprStart(1014, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1015() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 410.7041421627869
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaRegL(s, x), 0.001), 0.1) - 410.7041421627869 ) / 410.7041421627869";
			TestCommonTools.consolePrintTestExprStart(1015, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1016() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 1.326738114577891
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaRegL(s, x), 0.1), 0.1) - 1.326738114577891 ) / 1.326738114577891";
			TestCommonTools.consolePrintTestExprStart(1016, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1017() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 0.3391747508734272
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaRegL(s, x), 0.1), 0.1) - 0.3391747508734272 ) / 0.3391747508734272";
			TestCommonTools.consolePrintTestExprStart(1017, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1018() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 0.07770599949669701
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaRegL(s, x), 0.1), 0.1) - 0.07770599949669701 ) / 0.07770599949669701";
			TestCommonTools.consolePrintTestExprStart(1018, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1019() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 17796.38058821059
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaRegL(s, x), 0.001), 0.1) - 17796.38058821059 ) / 17796.38058821059";
			TestCommonTools.consolePrintTestExprStart(1019, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			#if NET20 || NET35
			double eps = 1e-13;
			#else
			double eps = 1e-15;
			#endif
			if ( MathFunctions.abs(reg - value) <= eps )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1020() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 8129.076170213447
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaRegL(s, x), 0.001), 0.1) - 8129.076170213447 ) / 8129.076170213447";
			TestCommonTools.consolePrintTestExprStart(1020, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1021() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 118269.9066253191
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaRegL(s, x), 0.001), 0.1) - 118269.9066253191 ) / 118269.9066253191";
			TestCommonTools.consolePrintTestExprStart(1021, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1022() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -2.424556583013388E6
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaRegL(s, x), 0.001), 0.1) - (-2.424556583013388E6) ) / (-2.424556583013388E6)";
			TestCommonTools.consolePrintTestExprStart(1022, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1023() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 8.523636351730967E7
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaRegL(s, x), 0.001), 0.1) - 8.523636351730967E7 ) / 8.523636351730967E7";
			TestCommonTools.consolePrintTestExprStart(1023, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1024() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -3.889224468572830E9
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaRegL(s, x), 0.001), 0.1) - (-3.889224468572830E9) ) / (-3.889224468572830E9)";
			TestCommonTools.consolePrintTestExprStart(1024, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1025() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 2.181166455273751E11
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaRegL(s, x), 0.001), 0.1) - 2.181166455273751E11 ) / 2.181166455273751E11";
			TestCommonTools.consolePrintTestExprStart(1025, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1026() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language (Raspberry Pi Pilot Release)
			* SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -1.447213820610101E13
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaRegL(s, x), 0.001), 0.1) - (-1.447213820610101E13) ) / (-1.447213820610101E13)";
			TestCommonTools.consolePrintTestExprStart(1026, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1027() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, -2.95, 2.95, GammaRegU(0,x) - ( -Ei(-x) )/[gam], 0.1)";
			TestCommonTools.consolePrintTestExprStart(1027, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1028() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(s, -2.95, 2.95, GammaRegL(s,0), 0.1)";
			TestCommonTools.consolePrintTestExprStart(1028, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1029() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(s, -2.95, 2.95, GammaRegU(s,0) - 1, 0.1)";
			TestCommonTools.consolePrintTestExprStart(1029, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1030() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(s, 1, 5, sum(x, 0.5, 3.5, GammaRegU(s, x) - ((s-1)!) * e^(-x) * sum(k, 0, s-1, x^k / k! ) / Gamma(s) , 0.01) )";
			TestCommonTools.consolePrintTestExprStart(1030, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1031() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, -5, 5, GammaRegU(1,x) - e^(-x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1031, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1032() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, -5, 5, GammaRegL(1,x) - ( 1 - e^(-x) ), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1032, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1033() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, 0.1, 8, GammaRegU(0.5, x) - erfc( sqrt(x) ), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1033, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1034() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, 0.1, 8, GammaRegL(0.5, x) - erf( sqrt(x) ), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1034, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1035() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 0.01, 0.5, 0.001}], 16] = -4079.209360654330
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.01, 0.5, diGamma(x), 0.001) - (-4079.209360654330) ) / (-4079.209360654330)";
			TestCommonTools.consolePrintTestExprStart(1035, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			#if NET20 || NET35
			double eps = 1e-13;
			#else
			double eps = 1e-15;
			#endif
			if ( MathFunctions.abs(reg - value) <= eps )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1036() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 0.5, 1, 0.001}], 16] = -573.6355799257133
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 0.5, 1, diGamma(x), 0.001) - (-573.6355799257133) ) / (-573.6355799257133)";
			TestCommonTools.consolePrintTestExprStart(1036, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1037() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 1, 2, 0.001}], 16] = -0.07729899822650133
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 1, 2, diGamma(x), 0.001) - (-0.07729899822650133) ) / (-0.07729899822650133)";
			TestCommonTools.consolePrintTestExprStart(1037, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-9 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1038() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 2, 3, 0.001}], 16] = 693.8199440617115
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 2, 3, diGamma(x), 0.001) - 693.8199440617115 ) / 693.8199440617115";
			TestCommonTools.consolePrintTestExprStart(1038, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1039() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 3, 4, 0.001}], 16] = 1099.701730410615
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 3, 4, diGamma(x), 0.001) - 1099.701730410615 ) / 1099.701730410615";
			TestCommonTools.consolePrintTestExprStart(1039, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1040() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 4, 5, 0.001}], 16] = 1387.675473579989
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 4, 5, diGamma(x), 0.001) - 1387.675473579989 ) / 1387.675473579989";
			TestCommonTools.consolePrintTestExprStart(1040, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1041() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 5, 6, 0.001}], 16] = 1611.044026769199
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 5, 6, diGamma(x), 0.001) - 1611.044026769199 ) / 1611.044026769199";
			TestCommonTools.consolePrintTestExprStart(1041, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1042() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 6, 7, 0.001}], 16] = 1793.548917915007
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 6, 7, diGamma(x), 0.001) - 1793.548917915007 ) / 1793.548917915007";
			TestCommonTools.consolePrintTestExprStart(1042, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1043() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 7, 8, 0.001}], 16] = 1947.854360261161
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 7, 8, diGamma(x), 0.001) - 1947.854360261161 ) / 1947.854360261161";
			TestCommonTools.consolePrintTestExprStart(1043, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1044() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 8, 9, 0.001}], 16] = 2081.519681855709
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 8, 9, diGamma(x), 0.001) - 2081.519681855709 ) / 2081.519681855709";
			TestCommonTools.consolePrintTestExprStart(1044, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1045() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 9, 10, 0.001}], 16] = 2199.420773340920
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 9, 10, diGamma(x), 0.001) - 2199.420773340920 ) / 2199.420773340920";
			TestCommonTools.consolePrintTestExprStart(1045, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1046() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 10, 100, 0.01}], 16] = 34636.66366690680
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 10, 100, diGamma(x), 0.01) - 34636.66366690680 ) / 34636.66366690680";
			TestCommonTools.consolePrintTestExprStart(1046, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			#if NET20 || NET35
			double eps = 1e-12;
			#else
			double eps = 1e-14;
			#endif
			if ( MathFunctions.abs(reg - value) <= eps )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1047() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, 100, 1000, 0.1}], 16] = 55466.61581150640
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, 100, 1000, diGamma(x), 0.1) - 55466.61581150640 ) / 55466.61581150640";
			TestCommonTools.consolePrintTestExprStart(1047, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1048() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, -0.99, -0.01, 0.001}], 16] = 1.422412463589325
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -0.99, -0.01, diGamma(x), 0.001) - 1.422412463589325 ) / 1.422412463589325";
			TestCommonTools.consolePrintTestExprStart(1048, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1049() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, -1.99, -1.01, 0.001}], 16] = 680.3530867812680
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -1.99, -1.01, diGamma(x), 0.001) - 680.3530867812680 ) / 680.3530867812680";
			TestCommonTools.consolePrintTestExprStart(1049, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1050() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, -2.99, -2.01, 0.001}], 16] = 1077.907743717255
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -2.99, -2.01, diGamma(x), 0.001) - 1077.907743717255 ) / 1077.907743717255";
			TestCommonTools.consolePrintTestExprStart(1050, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1051() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, -3.99, -3.01, 0.001}], 16] = 1360.050326061623
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -3.99, -3.01, diGamma(x), 0.001) - 1360.050326061623 ) / 1360.050326061623";
			TestCommonTools.consolePrintTestExprStart(1051, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1052() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, -4.99, -4.01, 0.001}], 16] = 1578.919885022366
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -4.99, -4.01, diGamma(x), 0.001) - 1578.919885022366 ) / 1578.919885022366";
			TestCommonTools.consolePrintTestExprStart(1052, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1053() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, -5.99, -5.01, 0.001}], 16] = 1757.758655903731
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -5.99, -5.01, diGamma(x), 0.001) - 1757.758655903731 ) / 1757.758655903731";
			TestCommonTools.consolePrintTestExprStart(1053, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1054() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, -6.99, -6.01, 0.001}], 16] = 1908.969189637675
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -6.99, -6.01, diGamma(x), 0.001) - 1908.969189637675 ) / 1908.969189637675";
			TestCommonTools.consolePrintTestExprStart(1054, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1055() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, -7.99, -7.01, 0.001}], 16] = 2039.956153658795
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -7.99, -7.01, diGamma(x), 0.001) - 2039.956153658795 ) / 2039.956153658795";
			TestCommonTools.consolePrintTestExprStart(1055, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1056() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, -8.99, -8.01, 0.001}], 16] = 2155.496280654945
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -8.99, -8.01, diGamma(x), 0.001) - 2155.496280654945 ) / 2155.496280654945";
			TestCommonTools.consolePrintTestExprStart(1056, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1057() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, -9.99, -9.01, 0.001}], 16] = 2258.851345832401
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -9.99, -9.01, diGamma(x), 0.001) - 2258.851345832401 ) / 2258.851345832401";
			TestCommonTools.consolePrintTestExprStart(1057, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1058() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[PolyGamma[x], {x, -10.99, -10.01, 0.001}], 16] = 2352.347967017835
			*/
			mXparser.disableUlpRounding();
			String expStr = "( sum(x, -10.99, -10.01, diGamma(x), 0.001) - 2352.347967017835 ) / 2352.347967017835";
			TestCommonTools.consolePrintTestExprStart(1058, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1059() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x0, 0.1, 2, diGamma(x0) - der( Gamma(x), x, x0) / Gamma(x0), 0.1)";
			TestCommonTools.consolePrintTestExprStart(1059, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-7 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1060() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			String expStr = "sum(x, 0.01, 0.99, diGamma(1-x)-diGamma(x) - pi * cot(pi*x), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1060, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.setCanonicalRounding(tmp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1061() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(x, 0.01, 0.99, diGamma(x+1)-diGamma(x) - 1/x, 0.01)";
			TestCommonTools.consolePrintTestExprStart(1061, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1062() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			String expStr = "sum(x, 0.01, 0.99, diGamma(x+1) - ( -[gam] + sum(k, 1, 10000, 1/k - 1/(x+k) ) ), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1062, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-2 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1063() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableUlpRounding();
			String expStr = "sum(x, 0.01, 0.99, sum(N, 1, 10, diGamma(x+N) - diGamma(x) - sum(k, 0, N-1, 1/(x+k)) ), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1063, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1064() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			String expStr = "sum(m, 3, 20, sum(r, 1, m-1, diGamma(r/m) - ( -[gam] - ln(2*m) - (pi/2)*cot( r * pi/m ) + 2 * sum(n, 1, floor( (m-1)/2 ), cos(2*pi*n*r / m) * ln( sin(pi*n / m) ) ) ) ) )";
			TestCommonTools.consolePrintTestExprStart(1064, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1065() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(n, 1, 10, 1) - 10";
			TestCommonTools.consolePrintTestExprStart(1065, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1066() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(n, 10, 1, 1) - 10";
			TestCommonTools.consolePrintTestExprStart(1066, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1067() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(n, 10, 10, 1) - 1";
			TestCommonTools.consolePrintTestExprStart(1067, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1068() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "prod(n, 1, 10, 2) - 2^10";
			TestCommonTools.consolePrintTestExprStart(1068, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1069() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "prod(n, 10, 1, 2) - 2^10";
			TestCommonTools.consolePrintTestExprStart(1069, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1070() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "prod(n, 10, 10, 2) - 2";
			TestCommonTools.consolePrintTestExprStart(1070, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1071() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "avg(n, 1, 10, n) - 5.5";
			TestCommonTools.consolePrintTestExprStart(1071, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1072() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "avg(n, 10, 1, n) - 5.5";
			TestCommonTools.consolePrintTestExprStart(1072, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1073() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "avg(n, 10, 10, 1) - 1";
			TestCommonTools.consolePrintTestExprStart(1073, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1074() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f(x) = par(0) + par(1) + par(-1) + [npar]");
			String expStr = "f(1) - (1 + 1 + 1 + 1) + f(2) - (1 + 2 + 2 + 1)";
			TestCommonTools.consolePrintTestExprStart(1074, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1075() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f(x, y) = par(0) + par(1) + par(2) + par(-1) + par(-2) + [npar]");
			String expStr = "f(1, 2) - (2 + 1 + 2 + 2 + 1 + 2) + f(-2,-1) - (2 + (-2) + (-1) + (-1) + (-2) + 2)";
			TestCommonTools.consolePrintTestExprStart(1075, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1076() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f(x1, x2, x3, x4, x5) = prod(i, 1, [npar], par(i) )");
			String expStr = "f(1,2,3,4,5) - 5!";
			TestCommonTools.consolePrintTestExprStart(1076, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1077() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f(x1, x2, x3, x4, x5) = prod(i, 1, [npar], par(-i) )");
			String expStr = "f(1,2,3,4,5) - 5!";
			TestCommonTools.consolePrintTestExprStart(1077, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1078() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f(x1, x2, x3, x4, x5) = prod(i, -1, -[npar], par(i) )");
			String expStr = "f(1,2,3,4,5) - 5!";
			TestCommonTools.consolePrintTestExprStart(1078, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1079() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f(...) = maxi(i, 1, [npar], par(i) )");
			String expStr = "( f(1) - 1 ) + ( f(-1) + 1 ) + ( f(1,2,3,4,5) - 5 ) + ( f(1,2,6,10,4,5) - 10 ) + ( f(20, 1,2,3,4,5) - 20 )";
			TestCommonTools.consolePrintTestExprStart(1079, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1080() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f(...) = sum(i, 1, par(0), sum(k, 1, [npar], par(i) + par(k)) )");
			String expStr = "(f(1)-2)+(f(1,2)-12)+(f(1,2,3)-36)+(f(1,2,3,4)-80)+(f(1,2,3,4,5)-150)+(f(1,2,3,4,5,6)-252)+(f(1,2,3,4,5,6,7)-392)+(f(1,2,3,4,5,6,7,8)-576)";
			TestCommonTools.consolePrintTestExprStart(1080, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1081() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("f(...) = iff( [npar]>5, f(par(1),par(2),par(3),par(4),par(5)); [npar]=5, par(5)*f(par(1),par(2),par(3),par(4)); [npar]=4, par(4)*f(par(1),par(2),par(3)); [npar]=3, par(3)*f(par(1),par(2)); [npar]=2, par(2)*f(par(1)); [npar]=1, par(1) )");
			String expStr = "f(1,2,3,4,5) - 1*2*3*4*5 + f(1,2,3,4,5,6) - 1*2*3*4*5 + f(1,2,3) - 1*2*3 + f(5,4,3,2,1) - 5*4*3*2*1";
			TestCommonTools.consolePrintTestExprStart(1081, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1082() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("sumv(...) = sum( i, 1, [npar], par(i) )");
			String expStr = "( sumv(1) - add(1) ) + ( sumv(1,2) - add(1,2) ) + ( sumv(1,2,3) - add(1,2,3) )";
			TestCommonTools.consolePrintTestExprStart(1082, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1083() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("multiv(...) = prod( i, 1, [npar], par(i) )");
			String expStr = "( multiv(1) - multi(1) ) + ( multiv(1,2) - multi(1,2) ) + ( multiv(1,2,3) - multi(1,2,3) )";
			TestCommonTools.consolePrintTestExprStart(1083, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1084() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("meanv(...) = avg( i, 1, [npar], par(i) )");
			String expStr = "( meanv(1) - mean(1) ) + ( meanv(1,2) - mean(1,2) ) + ( meanv(1,2,3) - mean(1,2,3) )";
			TestCommonTools.consolePrintTestExprStart(1084, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1085() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("varv(...) = vari( i, 1, [npar], par(i) )");
			String expStr = "( varv(1) - var(1) ) + ( varv(1,2) - var(1,2) ) + ( varv(1,2,3) - var(1,2,3) )";
			TestCommonTools.consolePrintTestExprStart(1085, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1086() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("stdv(...) = stdi( i, 1, [npar], par(i) )");
			String expStr = "( stdv(1) - std(1) ) + ( stdv(1,2) - std(1,2) ) + ( stdv(1,2,3) - std(1,2,3) )";
			TestCommonTools.consolePrintTestExprStart(1086, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1087() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("minv(...) = mini( i, 1, [npar], par(i) )");
			String expStr = "( minv(1) - min(1) ) + ( minv(1,2) - min(1,2) ) + ( minv(1,2,3) - min(1,2,3) )";
			TestCommonTools.consolePrintTestExprStart(1087, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1088() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Function f = new Function("maxv(...) = maxi( i, 1, [npar], par(i) )");
			String expStr = "( maxv(1) - max(1) ) + ( maxv(1,2) - max(1,2) ) + ( maxv(1,2,3) - max(1,2,3) )";
			TestCommonTools.consolePrintTestExprStart(1088, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1089() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			FunExtVar fx = new FunExtVar();
			Function f = new Function("fx", fx);
			String expStr = "( fx(1) - add(1) ) + ( fx(1,2) - add(1,2) ) + ( fx(1,2,3) - add(1,2,3) ) + ( fx(1,2,3,4) - add(1,2,3,4) ) +  ( fx(1,2,3,4,5) - add(1,2,3,4,5) )";
			TestCommonTools.consolePrintTestExprStart(1089, expStr);
			Expression testExp = new Expression(expStr, f);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1090() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			mXparser.disableAlmostIntRounding();
            mXparser.disableCanonicalRounding();
            String expStr = "1 + 1e-14";
			TestCommonTools.consolePrintTestExprStart(1090, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1 + 1e-14;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1091() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			mXparser.disableAlmostIntRounding();
            mXparser.disableCanonicalRounding();
            String expStr = "-1 - 1e-14";
			TestCommonTools.consolePrintTestExprStart(1091, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -1 - 1e-14;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1092() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			mXparser.enableAlmostIntRounding();
			String expStr = "1 + 1e-14";
			TestCommonTools.consolePrintTestExprStart(1092, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1093() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableUlpRounding();
			mXparser.enableAlmostIntRounding();
			String expStr = "-1 - 1e-14";
			TestCommonTools.consolePrintTestExprStart(1093, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -1;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1094() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(n, -10, 10, sum(k, 0, abs(n), C(n,k) ) ) - sum(n, -10, 10, sum(k, 0, abs(n), nCk(n,k) ) )";
			TestCommonTools.consolePrintTestExprStart(1094, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1095() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(n, -10, 10, sum(k, 0, abs(n), nPk(n,k) ) ) - sum(n, -10, 10, sum(k, 0, abs(n), nCk(n,k) * k! ) )";
			TestCommonTools.consolePrintTestExprStart(1095, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1096() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[Beta[x, y], {x, 0.1, 1, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 156045.8382688423
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 0.1, 10, sum(x, 0.1, 1, Beta(x,y), 0.01) , 0.01) - 156045.8382688423 ) / 156045.8382688423";
			TestCommonTools.consolePrintTestExprStart(1096, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1097() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[Beta[x, y], {x, 1, 2, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 32015.62331640863
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 0.1, 10, sum(x, 1, 2, Beta(x,y), 0.01) , 0.01) - 32015.62331640863 ) / 32015.62331640863";
			TestCommonTools.consolePrintTestExprStart(1097, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1098() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[Beta[x, y], {x, 2, 3, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 20432.57249276379
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 0.1, 10, sum(x, 2, 3, Beta(x,y), 0.01) , 0.01) - 20432.57249276379 ) / 20432.57249276379";
			TestCommonTools.consolePrintTestExprStart(1098, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1099() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[Beta[x, y], {x, 3, 4, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 16648.09228879020
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 0.1, 10, sum(x, 3, 4, Beta(x,y), 0.01) , 0.01) - 16648.09228879020 ) / 16648.09228879020";
			TestCommonTools.consolePrintTestExprStart(1099, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1100() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[Beta[x, y], {x, 4, 5, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 14709.95317941022
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 0.1, 10, sum(x, 4, 5, Beta(x,y), 0.01) , 0.01) - 14709.95317941022 ) / 14709.95317941022";
			TestCommonTools.consolePrintTestExprStart(1100, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1101() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[Beta[x, y], {x, 5, 6, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 13491.02099096915
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 0.1, 10, sum(x, 5, 6, Beta(x,y), 0.01) , 0.01) - 13491.02099096915 ) / 13491.02099096915";
			TestCommonTools.consolePrintTestExprStart(1101, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1102() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[Beta[x, y], {x, 6, 7, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 12632.76303747905
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 0.1, 10, sum(x, 6, 7, Beta(x,y), 0.01) , 0.01) - 12632.76303747905 ) / 12632.76303747905";
			TestCommonTools.consolePrintTestExprStart(1102, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1103() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[Beta[x, y], {x, 7, 8, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 11984.64820297520
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 0.1, 10, sum(x, 7, 8, Beta(x,y), 0.01) , 0.01) - 11984.64820297520 ) / 11984.64820297520";
			TestCommonTools.consolePrintTestExprStart(1103, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1104() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[Beta[x, y], {x, 8, 9, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 11471.56326266911
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 0.1, 10, sum(x, 8, 9, Beta(x,y), 0.01) , 0.01) - 11471.56326266911 ) / 11471.56326266911";
			TestCommonTools.consolePrintTestExprStart(1104, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1105() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[Beta[x, y], {x, 9, 10, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 11051.38593753202
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 0.1, 10, sum(x, 9, 10, Beta(x,y), 0.01) , 0.01) - 11051.38593753202 ) / 11051.38593753202";
			TestCommonTools.consolePrintTestExprStart(1105, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1106() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[Beta[x, y], {x, 10, 100, 0.1}], {y, 10, 100, 0.1} ], 16] = 0.0002504318934669270
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 10, 100, sum(x, 10, 100, Beta(x,y), 0.1) , 0.1) - 0.0002504318934669270 ) / 0.0002504318934669270";
			TestCommonTools.consolePrintTestExprStart(1106, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1107() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "( isNaN( Beta(-1, 10 ) ) - [true] ) + ( isNaN( Beta(10, -1 ) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(1107, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1108() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "( isNaN( Beta(0, 10 ) ) - [true] ) + ( isNaN( Beta(10, 0 ) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(1108, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1109() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "( isNaN( Beta([NaN], 10 ) ) - [true] ) + ( isNaN( Beta(10, [NaN] ) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(1109, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1110() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, 1, 10,  sum(y, 1, 10, der( Beta(x, y), x, x) - Beta(x,y) * ( diGamma(x) - diGamma(x+y) ) , 0.1), 0.1)";
			TestCommonTools.consolePrintTestExprStart(1110, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-4 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1111() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 0.1, 10, 0.1}], {y, 0.1, 10, 0.1} ], 16] = -52463.38489346371
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 0.1, 10, sum(x, 0.1, 10, logBeta(x,y), 0.1) , 0.1) - (-52463.38489346371) ) / (-52463.38489346371)";
			TestCommonTools.consolePrintTestExprStart(1111, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1112() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 10, 30, 0.1}], {y, 10, 30, 0.1} ], 16] = -1.092606400417545E6
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 10, 30, sum(x, 10, 30, logBeta(x,y), 0.1) , 0.1) - (-1.092606400417545E6) ) / (-1.092606400417545E6)";
			TestCommonTools.consolePrintTestExprStart(1112, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1113() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 30, 60, 0.1}], {y, 30, 60, 0.1} ], 16] = -5.631010749308205E6
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 30, 60, sum(x, 30, 60, logBeta(x,y), 0.1) , 0.1) - (-5.631010749308205E6) ) / (-5.631010749308205E6)";
			TestCommonTools.consolePrintTestExprStart(1113, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1114() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 60, 100, 0.1}], {y, 60, 100, 0.1} ], 16] = -1.784485348348011E7
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(y, 60, 100, sum(x, 60, 100, logBeta(x,y), 0.1) , 0.1) - (-1.784485348348011E7) ) / (-1.784485348348011E7)";
			TestCommonTools.consolePrintTestExprStart(1114, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1115() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 0.1, 1, 0.01} ], {b, 0.1, 1, 0.01} ], 16] = 196515.9203818563
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(b, 0.1, 1, sum(a, 0.1, 1, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 196515.9203818563 ) / 196515.9203818563";
			TestCommonTools.consolePrintTestExprStart(1115, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1116() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 1, 2, 0.01} ], {b, 1, 2, 0.01} ], 16] = 24722.41740481695
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(b, 1, 2, sum(a, 1, 2, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 24722.41740481695 ) / 24722.41740481695";
			TestCommonTools.consolePrintTestExprStart(1116, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1117() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 2, 3, 0.01} ], {b, 2, 3, 0.01} ], 16] = 4464.859252111892
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(b, 2, 3, sum(a, 2, 3, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 4464.859252111892 ) / 4464.859252111892";
			TestCommonTools.consolePrintTestExprStart(1117, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1118() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 3, 4, 0.01} ], {b, 3, 4, 0.01} ], 16] = 918.5527313884891
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(b, 3, 4, sum(a, 3, 4, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 918.5527313884891 ) / 918.5527313884891";
			TestCommonTools.consolePrintTestExprStart(1118, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1119() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 4, 5, 0.01} ], {b, 4, 5, 0.01} ], 16] = 199.6846597371872
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(b, 4, 5, sum(a, 4, 5, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 199.6846597371872 ) / 199.6846597371872";
			TestCommonTools.consolePrintTestExprStart(1119, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1120() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 5, 6, 0.01} ], {b, 5, 6, 0.01} ], 16] = 44.76264323950131
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(b, 5, 6, sum(a, 5, 6, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 44.76264323950131 ) / 44.76264323950131";
			TestCommonTools.consolePrintTestExprStart(1120, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1121() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 6, 7, 0.01} ], {b, 6, 7, 0.01} ], 16] = 10.23292155881704
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(b, 6, 7, sum(a, 6, 7, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 10.23292155881704 ) / 10.23292155881704";
			TestCommonTools.consolePrintTestExprStart(1121, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1122() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 7, 8, 0.01} ], {b, 7, 8, 0.01} ], 16] = 2.371353239618641
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(b, 7, 8, sum(a, 7, 8, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 2.371353239618641 ) / 2.371353239618641";
			TestCommonTools.consolePrintTestExprStart(1122, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1123() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 8, 9, 0.01} ], {b, 8, 9, 0.01} ], 16] = 0.5550610613543622
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(b, 8, 9, sum(a, 8, 9, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 0.5550610613543622 ) / 0.5550610613543622";
			TestCommonTools.consolePrintTestExprStart(1123, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1124() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 9, 10, 0.01} ], {b, 9, 10, 0.01} ], 16] = 0.1309235541230968
			*/
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(b, 9, 10, sum(a, 9, 10, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 0.1309235541230968 ) / 0.1309235541230968";
			TestCommonTools.consolePrintTestExprStart(1124, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1125() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			* SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 10, 80, 0.25} ], {b, 10, 80, 0.25} ], 16] = 0.0.0002449250611436628
			*/
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( sum(b, 10, 80, sum(a, 10, 80, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.25) , 0.25) - 0.0002449250611436628 ) / 0.0002449250611436628";
			TestCommonTools.consolePrintTestExprStart(1125, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1126() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			String expStr = "sum(b, 1, 10, sum(a, 1, 10, sum(x, 0.1, 0.9, der( BetaInc(x, a, b), x, x ) - ( (1-x)^(b-1) ) * ( x^(a-1) ) ,0.1) , 0.1) , 0.1)";
			TestCommonTools.consolePrintTestExprStart(1126, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-4 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1127() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaInc(1, a, b) - Beta(a,b) , 0.1) , 0.1)";
			TestCommonTools.consolePrintTestExprStart(1127, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1128() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaInc(0, a, b) , 0.1) , 0.1)";
			TestCommonTools.consolePrintTestExprStart(1128, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1129() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( isNaN( BetaInc(-1,1,1) ) - [true] ) + ( isNaN( BetaInc(2,1,1) ) - [true] ) + ( isNaN( BetaInc( [NaN] ,1,1) ) - [true] ) + ( isNaN( BetaInc(0.5, [NaN], 1) ) - [true] ) + ( isNaN( BetaInc(0.5, 1 , [NaN]) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(1129, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1130() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( isNaN( BetaInc(0.5,-1,1) ) - [true] ) + ( isNaN( BetaInc(0.5,1,-1) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(1130, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1131() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaI(1, a, b) - 1 , 0.1) , 0.1)";
			TestCommonTools.consolePrintTestExprStart(1131, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1132() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaI(0, a, b) , 0.1) , 0.1)";
			TestCommonTools.consolePrintTestExprStart(1132, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1133() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( isNaN( BetaI(-1,0,1) ) - [true] ) + ( isNaN( BetaI(2,1,0) ) - [true] ) + ( isNaN( BetaI( [NaN] ,1,1) ) - [true] ) + ( isNaN( BetaI(0.5, [NaN], 1) ) - [true] ) + ( isNaN( BetaI(0.5, 1 , [NaN]) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(1133, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1134() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			String expStr = "( isNaN( BetaI(0.5,-1,1) ) - [true] ) + ( isNaN( BetaI(0.5,1,-1) ) - [true] )";
			TestCommonTools.consolePrintTestExprStart(1134, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1135() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableUlpRounding();
			String expStr = "sum(b, 0.1, 80, sum(a, 0.1, 80, sum(x, 0, 1, BetaI(x, a, b) * Beta(a,b) - BetaInc(x,a,b) ,0.1) , 0.25) , 0.25)";
			TestCommonTools.consolePrintTestExprStart(1135, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1136() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableUlpRounding();
			String expStr = "sum(b, 0.1, 80, sum(a, 0.1, 80, sum(x, 0, 1, BetaI(x, a, b) - BetaReg(x,a,b) ,0.1) , 0.25) , 0.25)";
			TestCommonTools.consolePrintTestExprStart(1136, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1137() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "5! = 120";
			TestCommonTools.consolePrintTestExprStart(1137, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1138() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "5! == 120";
			TestCommonTools.consolePrintTestExprStart(1138, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1139() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "5!=5";
			TestCommonTools.consolePrintTestExprStart(1139, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1140() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "5 != 5";
			TestCommonTools.consolePrintTestExprStart(1140, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1141() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = ".2-0.2";
			TestCommonTools.consolePrintTestExprStart(1141, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1142() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "-.2+0.2";
			TestCommonTools.consolePrintTestExprStart(1142, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1143() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "0.2-.2";
			TestCommonTools.consolePrintTestExprStart(1143, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1144() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "-0.2+.2";
			TestCommonTools.consolePrintTestExprStart(1144, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1145() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "4^.5";
			TestCommonTools.consolePrintTestExprStart(1145, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1146() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "4^(-.5)";
			TestCommonTools.consolePrintTestExprStart(1146, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.5;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1147() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "2+0.2+.4";
			TestCommonTools.consolePrintTestExprStart(1147, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2.6;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1148() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "2+.4+0.2";
			TestCommonTools.consolePrintTestExprStart(1148, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2.6;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1149() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = ".4+2+0.2";
			TestCommonTools.consolePrintTestExprStart(1149, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2.6;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1150() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "2+0.2-.2";
			TestCommonTools.consolePrintTestExprStart(1150, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1151() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "2-.2+0.2";
			TestCommonTools.consolePrintTestExprStart(1151, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1152() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "-.2+2+0.2";
			TestCommonTools.consolePrintTestExprStart(1152, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1153() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "12+.2e-1";
			TestCommonTools.consolePrintTestExprStart(1153, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 12.02;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1154() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "12+.2e+1";
			TestCommonTools.consolePrintTestExprStart(1154, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 14;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1155() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "+ 5";
			TestCommonTools.consolePrintTestExprStart(1155, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 5;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1156() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "- 5";
			TestCommonTools.consolePrintTestExprStart(1156, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -5;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1157() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "+sqrt(1)";
			TestCommonTools.consolePrintTestExprStart(1157, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1158() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "-sqrt(1)";
			TestCommonTools.consolePrintTestExprStart(1158, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -1;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1159() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "sin(+(1.2))";
			TestCommonTools.consolePrintTestExprStart(1159, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Sin(1.2);
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1160() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "+(1)";
			TestCommonTools.consolePrintTestExprStart(1160, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1161() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "-(1)";
			TestCommonTools.consolePrintTestExprStart(1161, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -1;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1162() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "2 * [xyz], [xyz] = 3";
			Constant xyz = new Constant("[xyz] = 3");
			TestCommonTools.consolePrintTestExprStart(1162, expStr);
			Expression testExp = new Expression("2 * [xyz]", xyz);
			double value = testExp.calculate();
			double reg = 6;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1163() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			String expStr = "2 * [abc], [abc] = -3";
			Constant abc = new Constant("[abc]", -3);
			TestCommonTools.consolePrintTestExprStart(1163, expStr);
			Expression testExp = new Expression("2 * [abc]", abc);
			double value = testExp.calculate();
			double reg = -6;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1164() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "sin(0) + sin(2*pi) + sin(-2*pi) + sin(4*pi) + sin(-4*pi)";
			TestCommonTools.consolePrintTestExprStart(1164, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Sin(0) + Math.Sin(2.0 * PI) + Math.Sin(-2.0 * PI) + Math.Sin(4.0 * PI) + Math.Sin(-4.0 * PI);
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1165() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "cos(0) + cos(2*pi) + cos(-2*pi) + cos(4*pi) + cos(-4*pi)";
			TestCommonTools.consolePrintTestExprStart(1165, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Cos(0) + Math.Cos(2.0 * PI) + Math.Cos(-2.0 * PI) + Math.Cos(4.0 * PI) + Math.Cos(-4.0 * PI);
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1166() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "tan(0) + tan(2*pi) + tan(-2*pi) + tan(4*pi) + tan(-4*pi)";
			TestCommonTools.consolePrintTestExprStart(1166, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Tan(0) + Math.Tan(2.0 * PI) + Math.Tan(-2.0 * PI) + Math.Tan(4.0 * PI) + Math.Tan(-4.0 * PI);
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1167() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "sec(0) + sec(2*pi) + sec(-2*pi) + sec(4*pi) + sec(-4*pi)";
			TestCommonTools.consolePrintTestExprStart(1167, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0/Math.Cos(0) + 1.0/Math.Cos(2.0 * PI) + 1.0/Math.Cos(-2.0 * PI) + 1.0/Math.Cos(4.0 * PI) + 1.0/Math.Cos(-4.0 * PI);
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1168() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "sin(0) + sin(2*pi) + sin(-2*pi) + sin(4*pi) + sin(-4*pi)";
			TestCommonTools.consolePrintTestExprStart(1168, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.SIN_0 + SpecialValueTrigonometric.SIN_0 + SpecialValueTrigonometric.SIN_0 + SpecialValueTrigonometric.SIN_0 + SpecialValueTrigonometric.SIN_0;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1169() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "cos(0) + cos(2*pi) + cos(-2*pi) + cos(4*pi) + cos(-4*pi)";
			TestCommonTools.consolePrintTestExprStart(1169, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.COS_0 + SpecialValueTrigonometric.COS_0 + SpecialValueTrigonometric.COS_0 + SpecialValueTrigonometric.COS_0 + SpecialValueTrigonometric.COS_0;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1170() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "tan(0) + tan(2*pi) + tan(-2*pi) + tan(4*pi) + tan(-4*pi)";
			TestCommonTools.consolePrintTestExprStart(1170, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.TAN_0 + SpecialValueTrigonometric.TAN_0 + SpecialValueTrigonometric.TAN_0 + SpecialValueTrigonometric.TAN_0 + SpecialValueTrigonometric.TAN_0;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1171() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "sec(0) + sec(2*pi) + sec(-2*pi) + sec(4*pi) + sec(-4*pi)";
			TestCommonTools.consolePrintTestExprStart(1171, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.SEC_0 + SpecialValueTrigonometric.SEC_0 + SpecialValueTrigonometric.SEC_0 + SpecialValueTrigonometric.SEC_0 + SpecialValueTrigonometric.SEC_0;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1172() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "isNaN(ctan(0)) + isNaN(ctan(2*pi)) + isNaN(ctan(-2*pi)) + isNaN(ctan(4*pi)) + isNaN(ctan(-4*pi))";
			TestCommonTools.consolePrintTestExprStart(1172, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.T + BooleanAlgebra.T + BooleanAlgebra.T + BooleanAlgebra.T + BooleanAlgebra.T;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1173() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "isNaN(csc(0)) + isNaN(csc(2*pi)) + isNaN(csc(-2*pi)) + isNaN(csc(4*pi)) + isNaN(csc(-4*pi))";
			TestCommonTools.consolePrintTestExprStart(1173, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = BooleanAlgebra.T + BooleanAlgebra.T + BooleanAlgebra.T + BooleanAlgebra.T + BooleanAlgebra.T;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1174() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "sin((1/6)*pi) + sin((13/6)*pi) + sin((-11/6)*pi) + sin((25/6)*pi) + sin((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1174, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Sin((1.0/6.0)*PI) + Math.Sin((13.0/6.0) * PI) + Math.Sin((-11.0/6.0) * PI) + Math.Sin((25.0/6.0) * PI) + Math.Sin((-23.0/6) * PI);
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1175() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "cos((1/6)*pi) + cos((13/6)*pi) + cos((-11/6)*pi) + cos((25/6)*pi) + cos((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1175, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Cos((1.0/6.0)*PI) + Math.Cos((13.0/6.0) * PI) + Math.Cos((-11.0/6.0) * PI) + Math.Cos((25.0/6.0) * PI) + Math.Cos((-23.0/6) * PI);
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1176() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "tan((1/6)*pi) + tan((13/6)*pi) + tan((-11/6)*pi) + tan((25/6)*pi) + tan((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1176, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Math.Tan((1.0/6.0)*PI) + Math.Tan((13.0/6.0) * PI) + Math.Tan((-11.0/6.0) * PI) + Math.Tan((25.0/6.0) * PI) + Math.Tan((-23.0/6) * PI);
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1177() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "ctan((1/6)*pi) + ctan((13/6)*pi) + ctan((-11/6)*pi) + ctan((25/6)*pi) + ctan((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1177, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0/Math.Tan((1.0/6.0)*PI) + 1.0/Math.Tan((13.0/6.0) * PI) + 1.0/Math.Tan((-11.0/6.0) * PI) + 1.0/Math.Tan((25.0/6.0) * PI) + 1.0/Math.Tan((-23.0/6) * PI);
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1178() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "sec((1/6)*pi) + sec((13/6)*pi) + sec((-11/6)*pi) + sec((25/6)*pi) + sec((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1178, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0/Math.Cos((1.0/6.0) * PI) + 1.0/Math.Cos((13.0/6.0) * PI) + 1.0/Math.Cos((-11.0/6.0) * PI) + 1.0/Math.Cos((25.0/6.0) * PI) + 1.0/Math.Cos((-23.0/6) * PI);
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1179() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "csc((1/6)*pi) + csc((13/6)*pi) + csc((-11/6)*pi) + csc((25/6)*pi) + csc((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1179, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.0/Math.Sin((1.0/6.0) * PI) + 1.0/Math.Sin((13.0/6.0) * PI) + 1.0/Math.Sin((-11.0/6.0) * PI) + 1.0/Math.Sin((25.0/6.0) * PI) + 1.0/Math.Sin((-23.0/6) * PI);
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1180() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "sin((1/6)*pi) + sin((13/6)*pi) + sin((-11/6)*pi) + sin((25/6)*pi) + sin((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1180, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.SIN_30 + SpecialValueTrigonometric.SIN_30 + SpecialValueTrigonometric.SIN_30 + SpecialValueTrigonometric.SIN_30 + SpecialValueTrigonometric.SIN_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1181() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "cos((1/6)*pi) + cos((13/6)*pi) + cos((-11/6)*pi) + cos((25/6)*pi) + cos((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1181, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.COS_30 + SpecialValueTrigonometric.COS_30 + SpecialValueTrigonometric.COS_30 + SpecialValueTrigonometric.COS_30 + SpecialValueTrigonometric.COS_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1182() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "tan((1/6)*pi) + tan((13/6)*pi) + tan((-11/6)*pi) + tan((25/6)*pi) + tan((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1182, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.TAN_30 + SpecialValueTrigonometric.TAN_30 + SpecialValueTrigonometric.TAN_30 + SpecialValueTrigonometric.TAN_30 + SpecialValueTrigonometric.TAN_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1183() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "ctan((1/6)*pi) + ctan((13/6)*pi) + ctan((-11/6)*pi) + ctan((25/6)*pi) + ctan((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1183, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.CTAN_30 + SpecialValueTrigonometric.CTAN_30 + SpecialValueTrigonometric.CTAN_30 + SpecialValueTrigonometric.CTAN_30 + SpecialValueTrigonometric.CTAN_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1184() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "sec((1/6)*pi) + sec((13/6)*pi) + sec((-11/6)*pi) + sec((25/6)*pi) + sec((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1184, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.SEC_30 + SpecialValueTrigonometric.SEC_30 + SpecialValueTrigonometric.SEC_30 + SpecialValueTrigonometric.SEC_30 + SpecialValueTrigonometric.SEC_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1185() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "csc((1/6)*pi) + csc((13/6)*pi) + csc((-11/6)*pi) + csc((25/6)*pi) + csc((-23/6)*pi)";
			TestCommonTools.consolePrintTestExprStart(1185, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.CSC_30 + SpecialValueTrigonometric.CSC_30 + SpecialValueTrigonometric.CSC_30 + SpecialValueTrigonometric.CSC_30 + SpecialValueTrigonometric.CSC_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1186() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "sin(asin(sin(asin(sin(asin(sin((1/6)*pi)))))))";
			TestCommonTools.consolePrintTestExprStart(1186, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.SIN_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1187() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "cos(acos(cos(acos(cos(acos(cos((1/6)*pi)))))))";
			TestCommonTools.consolePrintTestExprStart(1187, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.COS_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1188() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "tan(atan(tan(atan(tan(atan(tan((1/6)*pi)))))))";
			TestCommonTools.consolePrintTestExprStart(1188, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.TAN_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1189() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "ctan(actan(ctan(actan(ctan(actan(ctan((1/6)*pi)))))))";
			TestCommonTools.consolePrintTestExprStart(1189, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.CTAN_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1190() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			bool tmp = mXparser.checkIfCanonicalRounding();
			mXparser.disableCanonicalRounding();
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "sec(arcsec(sec(arcsec(sec(arcsec(sec((1/6)*pi)))))))";
			TestCommonTools.consolePrintTestExprStart(1190, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.SEC_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setCanonicalRounding(tmp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1191() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setRadiansMode();
			String expStr = "csc(arccsc(csc(arccsc(csc(arccsc(csc((1/6)*pi)))))))";
			TestCommonTools.consolePrintTestExprStart(1191, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = SpecialValueTrigonometric.CSC_30;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1192() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setDegreesMode();
			String expStr = "asin(sin(asin(sin(30))))";
			TestCommonTools.consolePrintTestExprStart(1192, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.0;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1193() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setDegreesMode();
			String expStr = "acos(cos(acos(cos(30))))";
			TestCommonTools.consolePrintTestExprStart(1193, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.0;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1194() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setDegreesMode();
			String expStr = "atan(tan(atan(tan(30))))";
			TestCommonTools.consolePrintTestExprStart(1194, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.0;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1195() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setDegreesMode();
			String expStr = "actan(ctan(actan(ctan(30))))";
			TestCommonTools.consolePrintTestExprStart(1195, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.0;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1196() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setDegreesMode();
			String expStr = "arcsec(sec(arcsec(sec(30))))";
			TestCommonTools.consolePrintTestExprStart(1196, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.0;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1197() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setDegreesMode();
			String expStr = "arccsc(csc(arccsc(csc(30))))";
			TestCommonTools.consolePrintTestExprStart(1197, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.0;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1198() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.setDegreesMode();
			String expStr = "asin(sin(31)) + acos(cos(32)) + atan(tan(33)) + actan(ctan(34)) + arcsec(sec(35)) + arccsc(csc(36))";
			TestCommonTools.consolePrintTestExprStart(1198, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 31.0 + 32.0 + 33.0 + 34.0 + 35.0 + 36.0;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1199() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "0.1 + 0.1 + 0.1";
			TestCommonTools.consolePrintTestExprStart(1199, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.3;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1200() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "2.5 - 2.3";
			TestCommonTools.consolePrintTestExprStart(1200, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.2;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1201() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "2.53 + 2.0";
			TestCommonTools.consolePrintTestExprStart(1201, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 4.53;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1202() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "2.53 * 2.675";
			TestCommonTools.consolePrintTestExprStart(1202, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 6.76775;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1203() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "-2.53 * 2.675";
			TestCommonTools.consolePrintTestExprStart(1203, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -6.76775;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1204() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "5.55 / 5";
			TestCommonTools.consolePrintTestExprStart(1204, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.11;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1205() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "-5.55 / 5";
			TestCommonTools.consolePrintTestExprStart(1205, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -1.11;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1206() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "6.2^2";
			TestCommonTools.consolePrintTestExprStart(1206, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 38.44;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1207() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "-6.2^3";
			TestCommonTools.consolePrintTestExprStart(1207, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -238.328;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1208() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "(1/6.2)^(-2)";
			TestCommonTools.consolePrintTestExprStart(1208, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 38.44;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1209() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "(1/6.2)^(-3)";
			TestCommonTools.consolePrintTestExprStart(1209, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 238.328;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1210() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "(-1/6.2)^(-3)";
			TestCommonTools.consolePrintTestExprStart(1210, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -238.328;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1211() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "sum(i, 1, 1000, 0.1)";
			TestCommonTools.consolePrintTestExprStart(1211, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 100;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1212() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "sum(i, 1, 1000, -0.1)";
			TestCommonTools.consolePrintTestExprStart(1212, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -100;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1213() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "sum(i, -1000, -1, 0.1)";
			TestCommonTools.consolePrintTestExprStart(1213, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 100;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1214() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "sum(i, -1000, -1, -0.1)";
			TestCommonTools.consolePrintTestExprStart(1214, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -100;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1215() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "prod(i, 1, 3, 0.1)";
			TestCommonTools.consolePrintTestExprStart(1215, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.001;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1216() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "prod(i, 1, 3, -0.1)";
			TestCommonTools.consolePrintTestExprStart(1216, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -0.001;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1217() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "prod(i, -3, -1, 0.1)";
			TestCommonTools.consolePrintTestExprStart(1217, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.001;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1218() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "prod(i, -3, -1, -0.1)";
			TestCommonTools.consolePrintTestExprStart(1218, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -0.001;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1219() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "prod(i, 1, 2, 6.2)";
			TestCommonTools.consolePrintTestExprStart(1219, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 38.44;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1220() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "prod(i, 1, 3, 6.2)";
			TestCommonTools.consolePrintTestExprStart(1220, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 238.328;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1221() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "add(0.1, 0.1, 0.1)";
			TestCommonTools.consolePrintTestExprStart(1221, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.3;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1222() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "add(-0.1, -0.1, -0.1)";
			TestCommonTools.consolePrintTestExprStart(1222, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -0.3;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1223() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "multi(0.1, 0.1, 0.1)";
			TestCommonTools.consolePrintTestExprStart(1223, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.001;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1224() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			mXparser.enableCanonicalRounding();
			String expStr = "multi(-0.1, -0.1, -0.1)";
			TestCommonTools.consolePrintTestExprStart(1224, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -0.001;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.enableAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			mXparser.setRadiansMode();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1225() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(0 & 1) | (1 & 1) | 1 & 0";
			TestCommonTools.consolePrintTestExprStart(1225, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1226() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1 | 0 & 0";
			TestCommonTools.consolePrintTestExprStart(1226, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1227() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1 | ~1 --> ~0 & 1";
			TestCommonTools.consolePrintTestExprStart(1227, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1228() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = 20");
			String expStr = "x + 4 * - 2";
			TestCommonTools.consolePrintTestExprStart(1228, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 12;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1229() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = 20");
			String expStr = "x + 4* - 2";
			TestCommonTools.consolePrintTestExprStart(1229, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 12;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1230() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = 20");
			String expStr = "x + 4*- 2";
			TestCommonTools.consolePrintTestExprStart(1230, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 12;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1231() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = 20");
			String expStr = "x + 4*-2";
			TestCommonTools.consolePrintTestExprStart(1231, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 12;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1232() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = 20");
			String expStr = "x + 4  *    -      2";
			TestCommonTools.consolePrintTestExprStart(1232, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 12;
			if ( MathFunctions.abs(reg - value) <= 1e-100 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1233() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", new PiMultArgExt());
			String expStr = "x + x + x + x";
			TestCommonTools.consolePrintTestExprStart(1233, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 10 * MathConstants.PI;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1234() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2(3) - 2*(3)";
			TestCommonTools.consolePrintTestExprStart(1234, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1235() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(3)2 - (3)*2";
			TestCommonTools.consolePrintTestExprStart(1235, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1236() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2(3)2 - 2*(3)*2";
			TestCommonTools.consolePrintTestExprStart(1236, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1237() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "4×2";
			TestCommonTools.consolePrintTestExprStart(1237, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 8;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1238() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "4⨉2";
			TestCommonTools.consolePrintTestExprStart(1238, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 8;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1239() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "4∙2";
			TestCommonTools.consolePrintTestExprStart(1239, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 8;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1240() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "4÷2";
			TestCommonTools.consolePrintTestExprStart(1240, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1241() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "10+¬1";
			TestCommonTools.consolePrintTestExprStart(1241, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1242() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1∧0";
			TestCommonTools.consolePrintTestExprStart(1242, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1243() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1∨0";
			TestCommonTools.consolePrintTestExprStart(1243, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1244() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(1~∧1) + (1¬&1) + (1¬&&1) + (1¬/\\1) + (1¬∧1) + (1⊼1)";
			TestCommonTools.consolePrintTestExprStart(1244, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1245() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(0~∨0) + (0¬|0) + (0¬||0) + (0¬\\/0) + (0¬∨0) + (0⊽0)";
			TestCommonTools.consolePrintTestExprStart(1245, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 6;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1246() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(0⊻0) + (0⊻1) + (1⊻0) + (1⊻1)";
			TestCommonTools.consolePrintTestExprStart(1246, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1247() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(0⇍1) + (1⇍1)";
			TestCommonTools.consolePrintTestExprStart(1247, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1248() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(0⇐0) + (0⇐1) + (1⇐0)";
			TestCommonTools.consolePrintTestExprStart(1248, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1249() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(0⇒0) + (0⇒1) + (1⇒0)";
			TestCommonTools.consolePrintTestExprStart(1249, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1250() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(1⇏0) + (1⇏1)";
			TestCommonTools.consolePrintTestExprStart(1250, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1251() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(0⇔0) + (1⇔1)";
			TestCommonTools.consolePrintTestExprStart(1251, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1252() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(1≠2)+(1≠1)";
			TestCommonTools.consolePrintTestExprStart(1252, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1253() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(1≤2)+(1≤1)+(2≤1)";
			TestCommonTools.consolePrintTestExprStart(1253, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1254() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(1⋜2)+(1⋜1)+(2⋜1)";
			TestCommonTools.consolePrintTestExprStart(1254, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1255() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(2≥1)+(2≥2)+(1≥2)";
			TestCommonTools.consolePrintTestExprStart(1255, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1256() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(2⋝1)+(2⋝2)+(1⋝2)";
			TestCommonTools.consolePrintTestExprStart(1256, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1257() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "√4+√(6+3)+√16*2";
			TestCommonTools.consolePrintTestExprStart(1257, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 13;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1258() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∛1+∛(6+2)+∛27*2";
			TestCommonTools.consolePrintTestExprStart(1258, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 9;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1259() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∜1+∜(14+2)+∜81*2";
			TestCommonTools.consolePrintTestExprStart(1259, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 9;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1260() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "pi+π+ℼ";
			TestCommonTools.consolePrintTestExprStart(1260, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3 * MathConstants.PI;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1261() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "e+ℯ+ⅇ";
			TestCommonTools.consolePrintTestExprStart(1261, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 3 * MathConstants.E;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1262() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∑(i, 1, 10, i) + Σ(i, 11, 20, i)";
			TestCommonTools.consolePrintTestExprStart(1262, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 210;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1263() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∏(i, 1, 3, i) + ℿ(i, 4, 6, i) + Π(i, 7, 9, i)";
			TestCommonTools.consolePrintTestExprStart(1263, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 630;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1264() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2*∫( √abs(x^2-1), x, -1, 1)";
			TestCommonTools.consolePrintTestExprStart(1264, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathConstants.PI;
			if (MathFunctions.abs(reg - value) <= 1e-04)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1265() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∂(x^2, x, 2)";
			TestCommonTools.consolePrintTestExprStart(1265, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 4;
			if (MathFunctions.abs(reg - value) <= 1e-04)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1266() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∂+( abs(x), x, 0)";
			TestCommonTools.consolePrintTestExprStart(1266, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 1e-04)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1267() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∂-( abs(x), x, 0)";
			TestCommonTools.consolePrintTestExprStart(1267, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -1;
			if (MathFunctions.abs(reg - value) <= 1e-04)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1268() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = 2");
			String expStr = "∆(x^2, x) + Δ(x^2, x)";
			TestCommonTools.consolePrintTestExprStart(1268, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 10;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1269() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = 2");
			String expStr = "∇(x^2, x)";
			TestCommonTools.consolePrintTestExprStart(1269, expStr);
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 3;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1270() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "α+β+γ+δ+ε";
			TestCommonTools.consolePrintTestExprStart(1270, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("α", 1);
			Argument u2 = new Argument("β = 2");
			Constant u3 = new Constant("γ", 3);
			Constant u4 = new Constant("δ = 4");
			Argument u5 = new Argument("ε = α+β+γ+δ", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1271() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ζ+η+θ+ι+κ";
			TestCommonTools.consolePrintTestExprStart(1271, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("ζ", 1);
			Argument u2 = new Argument("η = 2");
			Constant u3 = new Constant("θ", 3);
			Constant u4 = new Constant("ι = 4");
			Argument u5 = new Argument("κ = ζ+η+θ+ι", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1272() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "λ+μ+ν+ξ+ο";
			TestCommonTools.consolePrintTestExprStart(1272, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("λ", 1);
			Argument u2 = new Argument("μ = 2");
			Constant u3 = new Constant("ν", 3);
			Constant u4 = new Constant("ξ = 4");
			Argument u5 = new Argument("ο = λ+μ+ν+ξ", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1273() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "π+ρ+ς+σ+τ";
			TestCommonTools.consolePrintTestExprStart(1273, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("π", 1);
			Argument u2 = new Argument("ρ = 2");
			Constant u3 = new Constant("ς", 3);
			Constant u4 = new Constant("σ = 4");
			Argument u5 = new Argument("τ = π+ρ+ς+σ", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1274() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "υ+φ+χ+ψ+ω";
			TestCommonTools.consolePrintTestExprStart(1274, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("υ", 1);
			Argument u2 = new Argument("φ = 2");
			Constant u3 = new Constant("χ", 3);
			Constant u4 = new Constant("ψ = 4");
			Argument u5 = new Argument("ω = υ+φ+χ+ψ", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1275() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Α+Β+Γ+Δ+Ε";
			TestCommonTools.consolePrintTestExprStart(1275, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("Α", 1);
			Argument u2 = new Argument("Β = 2");
			Constant u3 = new Constant("Γ", 3);
			Constant u4 = new Constant("Δ = 4");
			Argument u5 = new Argument("Ε = Α+Β+Γ+Δ", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1276() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Ζ+Η+Θ+Ι+Κ";
			TestCommonTools.consolePrintTestExprStart(1276, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("Ζ", 1);
			Argument u2 = new Argument("Η = 2");
			Constant u3 = new Constant("Θ", 3);
			Constant u4 = new Constant("Ι = 4");
			Argument u5 = new Argument("Κ = Ζ+Η+Θ+Ι", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1277() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Λ+Μ+Ν+Ξ+Ο";
			TestCommonTools.consolePrintTestExprStart(1277, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("Λ", 1);
			Argument u2 = new Argument("Μ = 2");
			Constant u3 = new Constant("Ν", 3);
			Constant u4 = new Constant("Ξ = 4");
			Argument u5 = new Argument("Ο = Λ+Μ+Ν+Ξ", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1278() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Π+Ρ+Σ+Τ+Υ";
			TestCommonTools.consolePrintTestExprStart(1278, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("Π", 1);
			Argument u2 = new Argument("Ρ = 2");
			Constant u3 = new Constant("Σ", 3);
			Constant u4 = new Constant("Τ = 4");
			Argument u5 = new Argument("Υ = Π+Ρ+Σ+Τ", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1279() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Φ+Χ+Ψ+Ω+∑";
			TestCommonTools.consolePrintTestExprStart(1279, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("Φ", 1);
			Argument u2 = new Argument("Χ = 2");
			Constant u3 = new Constant("Ψ", 3);
			Constant u4 = new Constant("Ω = 4");
			Argument u5 = new Argument("∑ = Φ+Χ+Ψ+Ω", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1280() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∏+ℿ+∆+∇+∫";
			TestCommonTools.consolePrintTestExprStart(1280, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("∏", 1);
			Argument u2 = new Argument("ℿ = 2");
			Constant u3 = new Constant("∆", 3);
			Constant u4 = new Constant("∇ = 4");
			Argument u5 = new Argument("∫ = ∏+ℿ+∆+∇", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1281() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ℼ+ℇ+ⅇ+ℯ+∂";
			TestCommonTools.consolePrintTestExprStart(1281, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Argument u1 = new Argument("ℼ", 1);
			Argument u2 = new Argument("ℇ = 2");
			Constant u3 = new Constant("ⅇ", 3);
			Constant u4 = new Constant("ℯ = 4");
			Argument u5 = new Argument("∂ = ℼ+ℇ+ⅇ+ℯ", u1, u2, u3, u4);
			Expression testExp = new Expression(expStr, u1, u2, u3, u4, u5);
			double value = testExp.calculate();
			double reg = 20;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1282() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "α(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1282, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("α(β,γ,δ,ε) = β^2+γ^2+δ^2+ε^2");
			Expression testExp = new Expression(expStr, a);
			double value = testExp.calculate();
			double reg = 30;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1283() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "α(1,2,3,4) + β(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1283, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("α(β,γ,δ,ε) = β^2+γ^2+δ^2+ε^2");
			Function b = new Function("β", "α^2+γ^2+δ^2+ε^2", "α", "γ", "δ", "ε");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1284() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ζ(1,2,3,4) + η(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1284, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("ζ(η,θ,ι,κ) = η^2+θ^2+ι^2+κ^2");
			Function b = new Function("η", "ζ^2+θ^2+ι^2+κ^2", "ζ", "θ", "ι", "κ");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1285() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "λ(1,2,3,4) + μ(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1285, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("λ(μ,ν,ξ,ο) = μ^2+ν^2+ξ^2+ο^2");
			Function b = new Function("μ", "λ^2+ν^2+ξ^2+ο^2", "λ", "ν", "ξ", "ο");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1286() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "π(1,2,3,4) + ρ(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1286, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("π(ρ,ς,σ,τ) = ρ^2+ς^2+σ^2+τ^2");
			Function b = new Function("ρ", "π^2+ς^2+σ^2+τ^2", "π", "ς", "σ", "τ");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1287() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "υ(1,2,3,4) + φ(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1287, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("υ(φ,χ,ψ,ω) = φ^2+χ^2+ψ^2+ω^2");
			Function b = new Function("φ", "υ^2+χ^2+ψ^2+ω^2", "υ", "χ", "ψ", "ω");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1288() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Α(1,2,3,4) + Β(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1288, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("Α(Β,Γ,Δ,Ε) = Β^2+Γ^2+Δ^2+Ε^2");
			Function b = new Function("Β", "Α^2+Γ^2+Δ^2+Ε^2", "Α", "Γ", "Δ", "Ε");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1289() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Ζ(1,2,3,4) + Η(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1289, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("Ζ(Η,Θ,Ι,Κ) = Η^2+Θ^2+Ι^2+Κ^2");
			Function b = new Function("Η", "Ζ^2+Θ^2+Ι^2+Κ^2", "Ζ", "Θ", "Ι", "Κ");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1290() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Λ(1,2,3,4) + Μ(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1290, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("Λ(Μ,Ν,Ξ,Ο) = Μ^2+Ν^2+Ξ^2+Ο^2");
			Function b = new Function("Μ", "Λ^2+Ν^2+Ξ^2+Ο^2", "Λ", "Ν", "Ξ", "Ο");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1291() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Π(1,2,3,4) + Ρ(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1291, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("Π(Ρ,Σ,Τ,Υ) = Ρ^2+Σ^2+Τ^2+Υ^2");
			Function b = new Function("Ρ", "Π^2+Σ^2+Τ^2+Υ^2", "Π", "Σ", "Τ", "Υ");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1292() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Φ(1,2,3,4) + Χ(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1292, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("Φ(Χ,Ψ,Ω,∑) = Χ^2+Ψ^2+Ω^2+∑^2");
			Function b = new Function("Χ", "Φ^2+Ψ^2+Ω^2+∑^2", "Φ", "Ψ", "Ω", "∑");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1293() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∏(1,2,3,4) + ℿ(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1293, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("∏(ℿ,∆,∇,∫) = ℿ^2+∆^2+∇^2+∫^2");
			Function b = new Function("ℿ", "∏^2+∆^2+∇^2+∫^2", "∏", "∆", "∇", "∫");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1294() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "ℼ(1,2,3,4) + ℇ(1,2,3,4)";
			TestCommonTools.consolePrintTestExprStart(1294, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Function a = new Function("ℼ(ℇ,ⅇ,ℯ,∂) = ℇ^2+ⅇ^2+ℯ^2+∂^2");
			Function b = new Function("ℇ", "ℼ^2+ⅇ^2+ℯ^2+∂^2", "ℼ", "ⅇ", "ℯ", "∂");
			Expression testExp = new Expression(expStr, a, b);
			double value = testExp.calculate();
			double reg = 60;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1295() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "[α]+[β]+[γ]+[δ]+[ε]+[ζ]+[η]+[θ]+[ι]+[κ]+[λ]+[μ]+[ν]+[ξ]+[ο]+[π]+[ρ]+[ς]+[σ]+[τ]+[υ]+[φ]+[χ]+[ψ]+[ω]+[Α]+[Β]+[Γ]+[Δ]+[Ε]+[Ζ]+[Η]+[Θ]+[Ι]+[Κ]+[Λ]+[Μ]+[Ν]+[Ξ]+[Ο]+[Π]+[Ρ]+[Σ]+[Τ]+[Υ]+[Φ]+[Χ]+[Ψ]+[Ω]+[∑]+[∏]+[ℿ]+[∆]+[∇]+[∫]+[ℼ]+[ℇ]+[ⅇ]+[ℯ]+[∂]";
			TestCommonTools.consolePrintTestExprStart(1295, expStr);
			mXparser.setToOverrideBuiltinTokens();
			Constant c1 = new Constant("[α] = 1");
			Constant c2 = new Constant("[β] = 2");
			Constant c3 = new Constant("[γ] = 3");
			Constant c4 = new Constant("[δ] = 4");
			Constant c5 = new Constant("[ε] = 5");
			Constant c6 = new Constant("[ζ] = 6");
			Constant c7 = new Constant("[η] = 7");
			Constant c8 = new Constant("[θ] = 8");
			Constant c9 = new Constant("[ι] = 9");
			Constant c10 = new Constant("[κ] = 10");
			Constant c11 = new Constant("[λ] = 11");
			Constant c12 = new Constant("[μ] = 12");
			Constant c13 = new Constant("[ν] = 13");
			Constant c14 = new Constant("[ξ] = 14");
			Constant c15 = new Constant("[ο] = 15");
			Constant c16 = new Constant("[π] = 16");
			Constant c17 = new Constant("[ρ] = 17");
			Constant c18 = new Constant("[ς] = 18");
			Constant c19 = new Constant("[σ] = 19");
			Constant c20 = new Constant("[τ] = 20");
			Constant c21 = new Constant("[υ] = 21");
			Constant c22 = new Constant("[φ] = 22");
			Constant c23 = new Constant("[χ] = 23");
			Constant c24 = new Constant("[ψ] = 24");
			Constant c25 = new Constant("[ω] = 25");
			Constant c26 = new Constant("[Α] = 26");
			Constant c27 = new Constant("[Β] = 27");
			Constant c28 = new Constant("[Γ] = 28");
			Constant c29 = new Constant("[Δ] = 29");
			Constant c30 = new Constant("[Ε] = 30");
			Constant c31 = new Constant("[Ζ] = 31");
			Constant c32 = new Constant("[Η] = 32");
			Constant c33 = new Constant("[Θ] = 33");
			Constant c34 = new Constant("[Ι] = 34");
			Constant c35 = new Constant("[Κ] = 35");
			Constant c36 = new Constant("[Λ] = 36");
			Constant c37 = new Constant("[Μ] = 37");
			Constant c38 = new Constant("[Ν] = 38");
			Constant c39 = new Constant("[Ξ] = 39");
			Constant c40 = new Constant("[Ο] = 40");
			Constant c41 = new Constant("[Π] = 41");
			Constant c42 = new Constant("[Ρ] = 42");
			Constant c43 = new Constant("[Σ] = 43");
			Constant c44 = new Constant("[Τ] = 44");
			Constant c45 = new Constant("[Υ] = 45");
			Constant c46 = new Constant("[Φ] = 46");
			Constant c47 = new Constant("[Χ] = 47");
			Constant c48 = new Constant("[Ψ] = 48");
			Constant c49 = new Constant("[Ω] = 49");
			Constant c50 = new Constant("[∑] = 50");
			Constant c51 = new Constant("[∏] = 51");
			Constant c52 = new Constant("[ℿ] = 52");
			Constant c53 = new Constant("[∆] = 53");
			Constant c54 = new Constant("[∇] = 54");
			Constant c55 = new Constant("[∫] = 55");
			Constant c56 = new Constant("[ℼ] = 56");
			Constant c57 = new Constant("[ℇ] = 57");
			Constant c58 = new Constant("[ⅇ] = 58");
			Constant c59 = new Constant("[ℯ] = 59");
			Constant c60 = new Constant("[∂] = 60");
			Expression testExp = new Expression(expStr, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31, c32, c33, c34, c35, c36, c37, c38, c39, c40, c41, c42, c43, c44, c45, c46, c47, c48, c49, c50, c51, c52, c53, c54, c55, c56, c57, c58, c59, c60);
			double value = testExp.calculate();
			double reg = 1830;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1296() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "√√16";
			TestCommonTools.consolePrintTestExprStart(1296, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1297() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "√√√256";
			TestCommonTools.consolePrintTestExprStart(1297, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1298() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∛∛-19683";
			TestCommonTools.consolePrintTestExprStart(1298, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -3;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1299() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∛∛∛-7625597484987";
			TestCommonTools.consolePrintTestExprStart(1299, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -3;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1300() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "pi+pi√pi";
			TestCommonTools.consolePrintTestExprStart(1300, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathConstants.PI + MathConstants.PI * MathFunctions.sqrt(MathConstants.PI);
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1301() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "pi+pi√pipi";
			TestCommonTools.consolePrintTestExprStart(1301, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathConstants.PI + MathConstants.PI * MathFunctions.sqrt(MathConstants.PI) * MathConstants.PI;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1302() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "pi+pi∛pi";
			TestCommonTools.consolePrintTestExprStart(1302, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathConstants.PI + MathConstants.PI * MathFunctions.root(3, MathConstants.PI);
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1303() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "pi+pi∛pipi";
			TestCommonTools.consolePrintTestExprStart(1303, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathConstants.PI + MathConstants.PI * MathFunctions.root(3, MathConstants.PI) * MathConstants.PI;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1304() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "pi+pi∜pi";
			TestCommonTools.consolePrintTestExprStart(1304, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathConstants.PI + MathConstants.PI * MathFunctions.root(4, MathConstants.PI);
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1305() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "pi+pi∜pipi";
			TestCommonTools.consolePrintTestExprStart(1305, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathConstants.PI + MathConstants.PI * MathFunctions.root(4, MathConstants.PI) * MathConstants.PI;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1306() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∜∜65536";
			TestCommonTools.consolePrintTestExprStart(1306, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1307() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "∜∜∜445.791568452592";
			TestCommonTools.consolePrintTestExprStart(1307, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.1;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1308() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "pi√pi";
			TestCommonTools.consolePrintTestExprStart(1308, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = MathConstants.PI * MathFunctions.sqrt(MathConstants.PI);
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1309() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2pi√pi";
			TestCommonTools.consolePrintTestExprStart(1309, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2 * MathConstants.PI * MathFunctions.sqrt(MathConstants.PI);
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1310() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2pi√√pi";
			TestCommonTools.consolePrintTestExprStart(1310, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2 * MathConstants.PI * MathFunctions.sqrt( MathFunctions.sqrt(MathConstants.PI) );
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1311() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2pi√√2pi";
			TestCommonTools.consolePrintTestExprStart(1311, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2 * MathConstants.PI * MathFunctions.sqrt( MathFunctions.sqrt(2) ) * MathConstants.PI;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1312() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "lg(100)";
			TestCommonTools.consolePrintTestExprStart(1312, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1313() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[9]:= SetPrecision[Sum[PDF[StudentTDistribution[1], x], {x, -10, 10, 0.02}], 20]
			Out[9]= 46.830597759724916784
			 */
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -10, 10, pStud(x, 1), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1313, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 46.830597759724916784;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1314() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[10]:= SetPrecision[Sum[PDF[StudentTDistribution[2], x], {x, -10, 10, 0.02}], 20]
			Out[10]= 49.508346930021311039
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -10, 10, pStud(x, 2), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1314, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 49.508346930021311039;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1315() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[11]:= SetPrecision[Sum[PDF[StudentTDistribution[3], x], {x, -10, 10, 0.02}], 20]
			Out[11]= 49.893891451661730230
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -10, 10, pStud(x, 3), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1315, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 49.893891451661730230;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1316() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[12]:= SetPrecision[Sum[PDF[StudentTDistribution[4], x], {x, -10, 10, 0.02}], 20]
			Out[12]= 49.972008436752780369
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -10, 10, pStud(x, 4), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1316, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 49.972008436752780369;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1317() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[13]:= SetPrecision[Sum[PDF[StudentTDistribution[5], x], {x, -10, 10, 0.02}], 20]
			Out[13]= 49.991493532953654721
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -10, 10, pStud(x, 5), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1317, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 49.991493532953654721;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1318() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[17]:= SetPrecision[Sum[PDF[StudentTDistribution[7], x], {x, -10, 10, 0.02}], 20]
			Out[17]= 49.998937324212853639
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -10, 10, pStud(x, 7), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1318, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 49.998937324212853639;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1319() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[16]:= SetPrecision[Sum[PDF[StudentTDistribution[10], x], {x, -10, 10, 0.02}], 20]
			Out[16]= 49.999921248381660632
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -10, 10, pStud(x, 10), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1319, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 49.999921248381660632;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1320() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[18]:= SetPrecision[Sum[PDF[StudentTDistribution[3.5], x], {x, -10, 10, 0.02}], 20]
			Out[18]= 49.946608252637815895
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -10, 10, pStud(x, 3.5), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1320, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 49.946608252637815895;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1321() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[3]:= SetPrecision[Sum[CDF[StudentTDistribution[1], x], {x, -4, 2, 0.02}], 20]
			Out[3]= 111.04123242153693241
			 */
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -4, 2, cStud(x, 1), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1321, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 111.04123242153693241;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1322() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[4]:= SetPrecision[Sum[CDF[StudentTDistribution[2], x], {x, -4, 2, 0.02}], 20]
			Out[4]= 105.63973985365477404
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -4, 2, cStud(x, 2), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1322, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 105.63973985365477404;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1323() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[5]:= SetPrecision[Sum[CDF[StudentTDistribution[3], x], {x, -4, 2, 0.02}], 20]
			Out[5]= 103.76840911119133182
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -4, 2, cStud(x, 3), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1323, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 103.76840911119133182;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1324() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[6]:= SetPrecision[Sum[CDF[StudentTDistribution[4], x], {x, -4, 2, 0.02}], 20]
			Out[6]= 102.88505229712588118
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -4, 2, cStud(x, 4), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1324, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 102.88505229712588118;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1325() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[7]:= SetPrecision[Sum[CDF[StudentTDistribution[5], x], {x, -4, 2, 0.02}], 20]
			Out[7]= 102.39024509448005062
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -4, 2, cStud(x, 5), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1325, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 102.39024509448005062;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1326() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[8]:= SetPrecision[Sum[CDF[StudentTDistribution[7], x], {x, -4, 2, 0.02}], 20]
			Out[8]= 101.87231418516095971
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -4, 2, cStud(x, 7), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1326, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 101.87231418516095971;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1327() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[9]:= SetPrecision[Sum[CDF[StudentTDistribution[10], x], {x, -4, 2, 0.02}], 20]
			Out[9]= 101.52722288162753728
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -4, 2, cStud(x, 10), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1327, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 101.52722288162753728;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1328() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[10]:= SetPrecision[Sum[CDF[StudentTDistribution[3.5], x], {x, -4, 2, 0.02}], 20]
			Out[10]= 103.25631202978907197
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -4, 2, cStud(x, 3.5), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1328, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 103.25631202978907197;
			if (MathFunctions.abs(reg - value) <= 1e-11)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1329() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(v, 2, 10, int( pStud(x, v), x, -3, 1) - ( cStud(1, v) - cStud(-3, v)), 0.5)";
			TestCommonTools.consolePrintTestExprStart(1329, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 1e-5)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1330() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[11]:= SetPrecision[Sum[CDF[StudentTDistribution[6], x], {x, -4, 2, 0.02}], 20]
			Out[11]= 102.08096048688545920
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -4, 2, cStud(x, 6), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1330, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 102.08096048688545920;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1331() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[12]:= SetPrecision[Sum[PDF[StudentTDistribution[6], x], {x, -10, 10, 0.02}], 20]
			Out[12]= 49.997120486355342450
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, -10, 10, pStud(x, 6), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1331, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 49.997120486355342450;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1332() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[20]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[1], p], {p, 0.01, 0.3, 0.01}], 20]
			Out[20]= -122.13661350334075451
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.01, 0.3, qStud(p, 1), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1332, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -122.13661350334075451;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1333() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[21]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[2], p], {p, 0.31, 0.6, 0.01}], 20]
			Out[21]= -4.0222366861212943689
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.31, 0.6, qStud(p, 2), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1333, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -4.0222366861212943689;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1334() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[22]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[3], p], {p, 0.61, 0.99, 0.01}], 20]
			Out[22]= 49.022649438142927636
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.61, 0.99, qStud(p, 3), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1334, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 49.022649438142927636;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1335() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[23]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[4], p], {p, 0.01, 0.3, 0.01}], 20]
			Out[23]= -41.523786374754216411
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.01, 0.3, qStud(p, 4), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1335, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -41.523786374754216411;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1336() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[24]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[5], p], {p, 0.31, 0.6, 0.01}], 20]
			Out[24]= -3.6861528079308447658
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.31, 0.6, qStud(p, 5), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1336, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -3.6861528079308447658;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1337() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[25]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[6], p], {p, 0.61, 0.99, 0.01}], 20]
			Out[25]= 42.080419687579002641
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.61, 0.99, qStud(p, 6), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1337, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 42.080419687579002641;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1338() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[26]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[7], p], {p, 0.01, 0.3, 0.01}], 20]
			Out[26]= -37.636003256786395355
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.01, 0.3, qStud(p, 7), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1338, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -37.636003256786395355;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1339() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[27]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[10], p], {p, 0.31, 0.6, 0.01}], 20]
			Out[27]= -3.5794892654924845843
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.31, 0.6, qStud(p, 10), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1339, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = -3.5794892654924845843;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1340() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[28]:= SetPrecision[Sum[InverseCDF[StudentTDistribution[3.5], p], {p, 0.61, 0.99, 0.01}], 20]
			Out[28]= 46.797703078921131237
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.61, 0.99, qStud(p, 3.5), 0.01)";
			TestCommonTools.consolePrintTestExprStart(1340, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 46.797703078921131237;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1341() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "avg(i, 1, 200000, rStud(10))";
			TestCommonTools.consolePrintTestExprStart(1341, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1342() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "vari(i, 1, 200000, rStud(10))";
			TestCommonTools.consolePrintTestExprStart(1342, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10.0 / (10.0 - 2.0);
			if (MathFunctions.abs(reg - value) <= 0.01)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1343() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[12]:= SetPrecision[Sum[PDF[ChiSquareDistribution[1], x], {x, 0.1, 10, 0.02}], 20]
			Out[12]= 38.124629490372313967
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, 0.1, 10, pChi2(x, 1), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1343, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 38.124629490372313967;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1344() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[13]:= SetPrecision[Sum[PDF[ChiSquareDistribution[2], x], {x, 0.1, 10, 0.02}], 20]
			Out[13]= 47.464459255416066696
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, 0.1, 10, pChi2(x, 2), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1344, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 47.464459255416066696;
			if (MathFunctions.abs(reg - value) <= 1e-11)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1345() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[14]:= SetPrecision[Sum[PDF[ChiSquareDistribution[3], x], {x, 0.1, 10, 0.02}], 20]
			Out[14]= 48.726910690165524898
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, 0.1, 10, pChi2(x, 3), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1345, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 48.726910690165524898;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1346() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[15]:= SetPrecision[Sum[PDF[ChiSquareDistribution[10], x], {x, 0.1, 10, 0.02}], 20]
			Out[15]= 28.019187895790043541
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, 0.1, 10, pChi2(x, 10), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1346, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 28.019187895790043541;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1347() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[16]:= SetPrecision[Sum[CDF[ChiSquareDistribution[1], x], {x, 0.1, 10, 0.02}], 20]
			Out[16]= 449.93418752286316931
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, 0.1, 10, cChi2(x, 1), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1347, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 449.93418752286316931;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1348() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[17]:= SetPrecision[Sum[CDF[ChiSquareDistribution[2], x], {x, 0.1, 10, 0.02}], 20]
			Out[17]= 401.07108148916802293
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, 0.1, 10, cChi2(x, 2), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1348, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 401.07108148916802293;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1349() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[18]:= SetPrecision[Sum[CDF[ChiSquareDistribution[3], x], {x, 0.1, 10, 0.02}], 20]
			Out[18]= 352.48036614253220478
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, 0.1, 10, cChi2(x, 3), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1349, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 352.48036614253220478;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1350() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[19]:= SetPrecision[Sum[CDF[ChiSquareDistribution[10], x], {x, 0.1, 10, 0.02}], 20]
			Out[19]= 88.013584463180180251
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(x, 0.1, 10, cChi2(x, 10), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1350, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 88.013584463180180251;
			if (MathFunctions.abs(reg - value) <= 1e-11)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1351() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[21]:= SetPrecision[Sum[InverseCDF[ChiSquareDistribution[1], p], {p, 0.1, 0.9, 0.02}], 20]
			Out[21]= 29.396114192721547909
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.1, 0.9, qChi2(p, 1), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1351, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 29.396114192721547909;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1352() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[22]:= SetPrecision[Sum[InverseCDF[ChiSquareDistribution[2], p], {p, 0.1, 0.9, 0.02}], 20]
			Out[22]= 68.894126827549456493
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.1, 0.9, qChi2(p, 2), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1352, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 68.894126827549456493;
			if (MathFunctions.abs(reg - value) <= 1e-13)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1353() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[23]:= SetPrecision[Sum[InverseCDF[ChiSquareDistribution[3], p], {p, 0.1, 0.9, 0.02}], 20]
			Out[23]= 109.37661236076816351
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.1, 0.9, qChi2(p, 3), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1353, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 109.37661236076816351;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1354() {
			/*
			Wolfram 12.3 / Raspberry Pi
			In[24]:= SetPrecision[Sum[InverseCDF[ChiSquareDistribution[10], p], {p, 0.1, 0.9, 0.02}], 20]
			Out[24]= 395.71160587415465670
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(p, 0.1, 0.9, qChi2(p, 10), 0.02)";
			TestCommonTools.consolePrintTestExprStart(1354, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 395.71160587415465670;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1355() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "avg(i, 1, 100000, rChi2(10))";
			TestCommonTools.consolePrintTestExprStart(1355, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 10;
			if (MathFunctions.abs(reg - value) <= 0.1)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1356() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "1^1!^2^^2!^^2!^^92^B32.252cerf^9292";
			TestCommonTools.consolePrintTestExprStart(1356, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1357() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "6^^6^^2.116^B18.08";
			TestCommonTools.consolePrintTestExprStart(1357, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Double.PositiveInfinity;
			if (value == reg)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1358() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "3!<=3^2^9^92^9~&2";
			TestCommonTools.consolePrintTestExprStart(1358, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1359() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "2^2^^2^2^^2^2^^2222∛2^9^92^92^^0=2^9^92^9^2^2^9^92^92^^0=222^22^^2^9^9<--2^92^^0<2^9^92^9^2^2^9^92^92^^0=2^9^92^92";
			TestCommonTools.consolePrintTestExprStart(1359, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1360() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "Bell(999999*9999999)";
			TestCommonTools.consolePrintTestExprStart(1360, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = Double.NaN;
			if (Double.IsNaN(value))
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1361() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "0.035%";
			TestCommonTools.consolePrintTestExprStart(1361, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0.00035;
			if (reg == value)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1362() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "asin(sin(30.5))";
			TestCommonTools.consolePrintTestExprStart(1362, expStr);
			mXparser.setDegreesMode();
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.5;
			if (reg == value)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1363() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "acos(cos(30.5))";
			TestCommonTools.consolePrintTestExprStart(1363, expStr);
			mXparser.setDegreesMode();
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.5;
			if (reg == value)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1364() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "atan(tan(30.5))";
			TestCommonTools.consolePrintTestExprStart(1364, expStr);
			mXparser.setDegreesMode();
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.5;
			if (reg == value)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1365() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "actan(ctan(30.5))";
			TestCommonTools.consolePrintTestExprStart(1365, expStr);
			mXparser.setDegreesMode();
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.5;
			if (reg == value)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1366() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arcsec(sec(30.5))";
			TestCommonTools.consolePrintTestExprStart(1366, expStr);
			mXparser.setDegreesMode();
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.5;
			if (reg == value)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1367() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "arccsc(csc(30.5))";
			TestCommonTools.consolePrintTestExprStart(1367, expStr);
			mXparser.setDegreesMode();
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 30.5;
			if (reg == value)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1368() {
			/*
			Mathematica 13.1.0 Kernel for Linux ARM (32-bit) / Raspberry Pi
			In[5]:= SetPrecision[  Sum[   Sum[     Sum[    PDF[FRatioDistribution[d1, d2], x], {x, 0.1, 5, 0.02}    ], {d1, 1, 101, 1}     ], {d2, 1, 101, 1}   ], 20]
			Out[5]= 503760.51435908034910
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(d2, 1, 101, sum(d1, 1, 101, sum(x, 0.1, 5, pFSned(x, d1, d2), 0.02), 1 ), 1)";
			TestCommonTools.consolePrintTestExprStart(1368, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 503760.51435908034910;
			if (MathFunctions.abs(reg - value) <= 1e-8)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1369() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant d1 = new Constant("d1 = rUnid(3, 100)");
			Constant d2 = new Constant("d2 = rUnid(1, 100)");
			Constant m = new Constant("m = ( (d1-2)/d1 ) * ( d2 / (d2 + 2) )", d1, d2);
			Constant x0 = new Constant("x0 = rUni(0.7*m, 1.3*m)", m);
			String expStr = "der(cFSned(x, d1, d2), x, x0) - pFSned(x0, d1, d2)";
			TestCommonTools.consolePrintTestExprStart(1369, expStr);
			Expression testExp = new Expression(expStr, x0, d1, d2);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 1e-8)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.consolePrintln("------ d1 = " + d1.getConstantValue());
			mXparser.consolePrintln("------ d2 = " + d2.getConstantValue());
			mXparser.consolePrintln("------ m = " + m.getConstantValue());
			mXparser.consolePrintln("------ x0 = " + x0.getConstantValue());
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1370() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(d2, 1, 101, sum(d1, 1, 101, sum(x, 0.2, 5, der( cFSned(x, d1, d2), x, x) - pFSned(x, d1, d2), 0.2)))";
			TestCommonTools.consolePrintTestExprStart(1370, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 1e-3)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1371() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant d1 = new Constant("d1 = rUnid(3, 100)");
			Constant d2 = new Constant("d2 = rUnid(1, 100)");
			Constant m = new Constant("m = ( (d1-2)/d1 ) * ( d2 / (d2 + 2) )", d1, d2);
			Constant x0 = new Constant("x0 = rUni(0.2*m, 3*m)", m);
			String expStr = "qFSned( cFSned(x0, d1, d2), d1, d2) - x0";
			TestCommonTools.consolePrintTestExprStart(1371, expStr);
			Expression testExp = new Expression(expStr, x0, d1, d2);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.consolePrintln("------ d1 = " + d1.getConstantValue());
			mXparser.consolePrintln("------ d2 = " + d2.getConstantValue());
			mXparser.consolePrintln("------ m = " + m.getConstantValue());
			mXparser.consolePrintln("------ x0 = " + x0.getConstantValue());
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1372() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant d1 = new Constant("d1 = rUnid(3, 100)");
			Constant d2 = new Constant("d2 = rUnid(1, 100)");
			Constant p = new Constant("p = rUni(0.02, 0.98)");
			String expStr = "cFSned( qFSned(p, d1, d2), d1, d2) - p";
			TestCommonTools.consolePrintTestExprStart(1372, expStr);
			Expression testExp = new Expression(expStr, p, d1, d2);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 1e-12)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.consolePrintln("------ d1 = " + d1.getConstantValue());
			mXparser.consolePrintln("------ d2 = " + d2.getConstantValue());
			mXparser.consolePrintln("------ p = " + p.getConstantValue());
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1373() {
			/*
			Mathematica 13.1.0 Kernel for Linux ARM (32-bit) / Raspberry Pi
			In[6]:= SetPrecision[  Sum[   Sum[     Sum[    CDF[FRatioDistribution[d1, d2], x], {x, 0.1, 5, 0.02}    ], {d1, 1, 101, 1}     ], {d2, 1, 101, 1}   ], 20]
			Out[6]= 1.9892431022685815115E6
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(d2, 1, 101, sum(d1, 1, 101, sum(x, 0.1, 5, cFSned(x, d1, d2), 0.02), 1 ), 1)";
			TestCommonTools.consolePrintTestExprStart(1373, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1.9892431022685815115E6;
			if (MathFunctions.abs(reg - value) <= 1e-8)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1374() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(d1, 1, 100, sum(d2, 1, 100, sum(p, 0.01, 0.99, cFSned( qFSned(p, d1, d2), d1, d2) , 0.01) ) )";
			TestCommonTools.consolePrintTestExprStart(1374, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 495000;
			if (MathFunctions.abs(reg - value) <= 1e-9)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1375() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant d1 = new Constant("d1 = rUnid(3, 100)");
			Constant d2 = new Constant("d2 = rUnid(1, 100)");
			Constant m = new Constant("m = ( (d1-2)/d1 ) * ( d2 / (d2 + 2) )", d1, d2);
			Constant a = new Constant("a = 0.2*m", m);
			Constant b = new Constant("b = 1.9*m", m);
			String expStr = "int( pFSned(x, d1, d2), x, a, b ) - ( cFSned(b, d1, d2) - cFSned(a, d1, d2) )";
			TestCommonTools.consolePrintTestExprStart(1375, expStr);
			Expression testExp = new Expression(expStr, d1, d2, a, b);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 1e-6)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.consolePrintln("------ d1 = " + d1.getConstantValue());
			mXparser.consolePrintln("------ d2 = " + d2.getConstantValue());
			mXparser.consolePrintln("------ m = " + m.getConstantValue());
			mXparser.consolePrintln("------ a = " + a.getConstantValue());
			mXparser.consolePrintln("------ b = " + b.getConstantValue());
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1376() {
			/*
			Mathematica 13.1.0 Kernel for Linux ARM (32-bit) / Raspberry Pi
			In[10]:= SetPrecision[  Sum[   Sum[     Sum[    InverseCDF[FRatioDistribution[d1, d2], p], {p, 0.01, 0.99, 0.01}    ], {d1, 1, 101, 1}     ], {d2, 1, 101, 1}   ], 20]
			Out[10]= 2.1453359845434864983E6
			*/
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(d2, 1, 101, sum(d1, 1, 101, sum(p, 0.01, 0.99, qFSned(p, d1, d2), 0.01), 1 ), 1)";
			TestCommonTools.consolePrintTestExprStart(1376, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2.1453359845434864983E6;
			if (MathFunctions.abs(reg - value) <= 1e-6)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1377() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant d1 = new Constant("d1 = rUnid(50, 100)");
			Constant d2 = new Constant("d2 = rUnid(50, 100)");
			Constant m = new Constant("m = d2 / (d2 - 2)", d1, d2);
			String expStr = "avg(i, 1, 1000000, rFSned(d1, d2)) - m";
			TestCommonTools.consolePrintTestExprStart(1377, expStr);
			Expression testExp = new Expression(expStr, d1, d2, m);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 1e-2)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.consolePrintln("------ d1 = " + d1.getConstantValue());
			mXparser.consolePrintln("------ d2 = " + d2.getConstantValue());
			mXparser.consolePrintln("------ m = " + m.getConstantValue());
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1378() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			Constant d1 = new Constant("d1 = rUnid(30, 70)");
			Constant d2 = new Constant("d2 = rUnid(30, 70)");
			Constant v = new Constant("v = (2 * d2 * d2 * (d1 + d2 -2)) / (d1 * (d2 - 4) * (d2 - 2)^2)", d1, d2);
			String expStr = "vari(i, 1, 1000000, rFSned(d1, d2)) - v";
			TestCommonTools.consolePrintTestExprStart(1378, expStr);
			Expression testExp = new Expression(expStr, d1, d2, v);
			double value = testExp.calculate();
			double reg = 0;
			if (MathFunctions.abs(reg - value) <= 1e-2)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			mXparser.consolePrintln("------ d1 = " + d1.getConstantValue());
			mXparser.consolePrintln("------ d2 = " + d2.getConstantValue());
			mXparser.consolePrintln("------ v = " + v.getConstantValue());
			Assert.IsTrue(testResult);
		}
        [TestMethod]
        public void testExpr1379() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
            License.iConfirmNonCommercialUse("INFIMA");
            String expStr = "dig(314159265, 271828183, 161803399)";
			TestCommonTools.consolePrintTestExprStart(1379, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 2 + 1 * 10 + mXparser.VERSION_PATCH * 100 + mXparser.VERSION_MINOR * 10000 + mXparser.VERSION_MAJOR * 1000000;
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
            Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1380() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "x";
			TestCommonTools.consolePrintTestExprStart(1380, expStr);
			Argument x = new Argument("x = 2*x");
			x.addArguments(x);
			Expression testExp = new Expression(expStr,x);
			mXparser.setMaxAllowedRecursionDepth(15);
			double value = testExp.calculate();
			double reg = Double.NaN;
			String errorMessage = testExp.getErrorMessage();
			StringResources stringResources = StringModel.getStringResources();
			if (Double.IsNaN(value) && errorMessage.Contains(stringResources.RECURSION_CALLS_COUNTER_EXCEEDED))
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
            Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1381() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "x";
			TestCommonTools.consolePrintTestExprStart(1381, expStr);
			Argument x = new Argument("x = x+x");
			x.addArguments(x);
			Expression testExp = new Expression(expStr,x);
			mXparser.setMaxAllowedRecursionDepth(15);
			double value = testExp.calculate();
			double reg = Double.NaN;
			String errorMessage = testExp.getErrorMessage();
			StringResources stringResources = StringModel.getStringResources();
			if (Double.IsNaN(value) && errorMessage.Contains(stringResources.RECURSION_CALLS_COUNTER_EXCEEDED))
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
            Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1382() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "+(2)";
			TestCommonTools.consolePrintTestExprStart(1382, expStr);
			Expression testExp = new Expression(expStr);
			testExp.disableAttemptToFixExpStrMode();
			double value = testExp.calculate();
			double reg = 2;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1383() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "-(2)";
			TestCommonTools.consolePrintTestExprStart(1383, expStr);
			Expression testExp = new Expression(expStr);
			testExp.disableAttemptToFixExpStrMode();
			double value = testExp.calculate();
			double reg = -2;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1384() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "if( abs( 10*x^9 - der(x^10, x, 0.0000002, 20000) ) < abs( 10*x^9 - der(x^10, x) ) ; 1; 0)";
			TestCommonTools.consolePrintTestExprStart(1384, expStr);
			Argument x = new Argument("x = 2");
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 1;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1385() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "if( abs( 10*x^9 - der(x^10, x, 0.1, 2) ) > abs( 10*x^9 - der(x^10, x) ) ; 1; 0)";
			TestCommonTools.consolePrintTestExprStart(1385, expStr);
			Argument x = new Argument("x = 2");
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 1;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1386() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "if( abs( 10*2^9 - der(x^10, x, 2, 0.0000002, 20000) ) < abs( 10*2^9 - der(x^10, x, 2) ) ; 1; 0)";
			TestCommonTools.consolePrintTestExprStart(1386, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1387() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "if( abs( 10*2^9 - der(x^10, x, 2, 0.1, 2) ) > abs( 10*2^9 - der(x^10, x, 2) ) ; 1; 0)";
			TestCommonTools.consolePrintTestExprStart(1387, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1388() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "KDelta(0,0)";
			TestCommonTools.consolePrintTestExprStart(1388, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 1;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1389() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "KDelta(0,1)";
			TestCommonTools.consolePrintTestExprStart(1389, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1390() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "sum(i, 1, 100, sum(j, 1, 100, KDelta(i,j)*i*j ) ) - sum(k, 1, 100, k^2)";
			TestCommonTools.consolePrintTestExprStart(1390, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1391() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "EulerPol(0, x) - 1";
			TestCommonTools.consolePrintTestExprStart(1391, expStr);
			Argument x = new Argument("x = 2");
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1392() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "EulerPol(1, x) - (x - 1_2)";
			TestCommonTools.consolePrintTestExprStart(1392, expStr);
			Argument x = new Argument("x = 2");
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1393() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "EulerPol(2, x) - (x^2 - x)";
			TestCommonTools.consolePrintTestExprStart(1393, expStr);
			Argument x = new Argument("x = 2");
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1394() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "EulerPol(3, x) - (x^3 - 3_2x^2 + 1_4)";
			TestCommonTools.consolePrintTestExprStart(1394, expStr);
			Argument x = new Argument("x = 2");
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1395() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "EulerPol(4, x) - (x^4 - 2x^3 + x)";
			TestCommonTools.consolePrintTestExprStart(1395, expStr);
			Argument x = new Argument("x = 2");
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1396() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "EulerPol(5, x) - (x^5 - 5_2x^4 + 5_2x^2 - 1_2)";
			TestCommonTools.consolePrintTestExprStart(1396, expStr);
			Argument x = new Argument("x = 2");
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1397() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "EulerPol(6, x) - (x^6 - 3x^5 + 5x^3 - 3x)";
			TestCommonTools.consolePrintTestExprStart(1397, expStr);
			Argument x = new Argument("x = 2");
			Expression testExp = new Expression(expStr, x);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1398() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "EulerPol(n, x + y) - sum(k, 0, n, C(n,k) EulerPol(n-k, x) y^k )";
			TestCommonTools.consolePrintTestExprStart(1398, expStr);
			Argument x = new Argument("x = 2");
			Argument y = new Argument("y = 4");
			Argument n = new Argument("n = 8");
			Expression testExp = new Expression(expStr, n, x, y);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1399() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "der(EulerPol(n, x), x)  - n*EulerPol(n-1, x)";
			TestCommonTools.consolePrintTestExprStart(1399, expStr);
			Argument x = new Argument("x = 2");
			Argument n = new Argument("n = 7");
			Expression testExp = new Expression(expStr, n, x);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-4)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testExpr1400() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "EulerPol(n, x+1) + EulerPol(n, x) - 2x^n";
			TestCommonTools.consolePrintTestExprStart(1400, expStr);
			Argument x = new Argument("x = 2");
			Argument n = new Argument("n = 7");
			Expression testExp = new Expression(expStr, n, x);
			double value = testExp.calculate();
			double reg = 0;
			StringResources stringResources = StringModel.getStringResources();
			if (MathFunctions.abs(reg - value) <= 1e-14)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
			Assert.IsTrue(testResult);
		}
        [TestMethod]
        public void testExpr1401() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "(2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) - (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) + (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) * 345 * ((897 - 323)/ 23)";
			TestCommonTools.consolePrintTestExprStart(1401, expStr);
			Expression testExp = new Expression(expStr);
			double value = testExp.calculate();
			double reg = testExp.calculate();
			if (MathFunctions.abs(reg - value) == 0)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
            Assert.IsTrue(testResult);
		}
        [TestMethod]
        public void testExpr1402() {
			TestCommonTools.testExprSettingsInit();
			bool testResult = false;
			String expStr = "f(x,y)+z+(x*y)/z";
			TestCommonTools.consolePrintTestExprStart(1402, expStr);
			Argument x = new Argument("x", "2*rList(2,2,2,2,2)");
			Argument y = new Argument("y = 2*x", x);
			Argument z = new Argument("z = 3*y/x", x, y);
			Function f = new Function("f(a,b) = a*b");
			Expression testExp = new Expression(expStr, x, y, z, f);
			double value = testExp.calculate();
			double reg = testExp.calculate();
			if (MathFunctions.abs(reg - value) == 0)
				testResult = true;
			TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
            Assert.IsTrue(testResult);
        }
        [TestMethod]
        public void testExpr1403()
        {
            TestCommonTools.testExprSettingsInit();
            bool testResult = false;
            String expStr = "0.0000004566969933 / 36370.51937825058";
            TestCommonTools.consolePrintTestExprStart(1, expStr);
            Expression testExp = new Expression(expStr);
            double value = testExp.calculate();
            double reg = 0.0000004566969933 / 36370.51937825058;
            if (value == reg)
                testResult = true;
            TestCommonTools.consolePrintTestExprEnd(value, reg, testResult, testExp);
            Assert.IsTrue(testResult);
        }
    }
}