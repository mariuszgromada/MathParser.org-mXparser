/*
 * @(#)SyntaxTest.cs        6.0.0    2024-05-19
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
using System.Linq;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using org.mariuszgromada.math.mxparser;

namespace org.mariuszgromada.math.mxparser.test {
	/**
	 * Unit tests covering syntax
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
	 * @version        6.0.0
	 *
	 */
	[TestClass]
    public class SyntaxTest {
		[TestMethod]
		public void testSyn0000() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "";
			TestCommonTools.consolePrintTestSynStart(0, expStr);
			Argument x = new Argument("x");
			Expression e = new Expression(expStr, x);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0001() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "1++";
			TestCommonTools.consolePrintTestSynStart(1, expStr);
			mXparser.disableAttemptToFixExpStrMode();
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0002() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "1+1-";
			TestCommonTools.consolePrintTestSynStart(2, expStr);
			mXparser.disableAttemptToFixExpStrMode();
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0003() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "+-1";
			TestCommonTools.consolePrintTestSynStart(3, expStr);
			mXparser.disableAttemptToFixExpStrMode();
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0004() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "1-(2))";
			TestCommonTools.consolePrintTestSynStart(4, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0005() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "1id";
			TestCommonTools.consolePrintTestSynStart(5, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0006() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "(1,2,3)";
			TestCommonTools.consolePrintTestSynStart(6, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0007() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(1,2,3)";
			TestCommonTools.consolePrintTestSynStart(7, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0008() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin";
			TestCommonTools.consolePrintTestSynStart(8, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0009() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin()";
			TestCommonTools.consolePrintTestSynStart(9, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0010() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "cos(1,2)";
			TestCommonTools.consolePrintTestSynStart(10, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0011() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "log";
			TestCommonTools.consolePrintTestSynStart(11, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0012() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "log()";
			TestCommonTools.consolePrintTestSynStart(12, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0013() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "log(1)";
			TestCommonTools.consolePrintTestSynStart(13, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0014() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "log(1,2,3)";
			TestCommonTools.consolePrintTestSynStart(14, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0015() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "if";
			TestCommonTools.consolePrintTestSynStart(15, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0016() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "if()";
			TestCommonTools.consolePrintTestSynStart(16, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0017() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "if(1)";
			TestCommonTools.consolePrintTestSynStart(17, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0018() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "if(1,2)";
			TestCommonTools.consolePrintTestSynStart(18, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0019() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "if(1,2,3,4)";
			TestCommonTools.consolePrintTestSynStart(19, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0020() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "pi()";
			TestCommonTools.consolePrintTestSynStart(20, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0021() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "pi(1)";
			TestCommonTools.consolePrintTestSynStart(21, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0022() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "[K*]()";
			TestCommonTools.consolePrintTestSynStart(22, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0023() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "[K*](12)";
			TestCommonTools.consolePrintTestSynStart(23, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0024() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "min";
			TestCommonTools.consolePrintTestSynStart(24, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0025() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "min()";
			TestCommonTools.consolePrintTestSynStart(25, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0026() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "max";
			TestCommonTools.consolePrintTestSynStart(26, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0027() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "max()";
			TestCommonTools.consolePrintTestSynStart(27, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0028() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "iff";
			TestCommonTools.consolePrintTestSynStart(28, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0029() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "iff()";
			TestCommonTools.consolePrintTestSynStart(29, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0030() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "iff(1)";
			TestCommonTools.consolePrintTestSynStart(30, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0031() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "iff(1,2,3)";
			TestCommonTools.consolePrintTestSynStart(31, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0032() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "iff(1,2,3,4,5)";
			TestCommonTools.consolePrintTestSynStart(32, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0033() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum";
			TestCommonTools.consolePrintTestSynStart(33, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0034() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum()";
			TestCommonTools.consolePrintTestSynStart(34, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0035() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(1)";
			TestCommonTools.consolePrintTestSynStart(35, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0036() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(1,2)";
			TestCommonTools.consolePrintTestSynStart(36, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0037() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(1,2,3)";
			TestCommonTools.consolePrintTestSynStart(37, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0038() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(1,2,3,4,5,6)";
			TestCommonTools.consolePrintTestSynStart(38, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0039() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "prod()";
			TestCommonTools.consolePrintTestSynStart(39, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0040() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "prod(1)";
			TestCommonTools.consolePrintTestSynStart(40, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0041() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "prod(1,2)";
			TestCommonTools.consolePrintTestSynStart(41, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0042() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "prod(1,2,3)";
			TestCommonTools.consolePrintTestSynStart(42, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0043() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "prod(1,2,3,4,5,6)";
			TestCommonTools.consolePrintTestSynStart(43, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0044() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(1,2,3,4)";
			TestCommonTools.consolePrintTestSynStart(44, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0045() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(a*b,2,3,4)";
			TestCommonTools.consolePrintTestSynStart(45, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0046() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(i,1,a,4)";
			TestCommonTools.consolePrintTestSynStart(46, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0047() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "prod(1,2,3,4)";
			TestCommonTools.consolePrintTestSynStart(47, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0048() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "prod(a*b,2,3,4)";
			TestCommonTools.consolePrintTestSynStart(48, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0049() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "prod(i,1,a,4)";
			TestCommonTools.consolePrintTestSynStart(49, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0050() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "int";
			TestCommonTools.consolePrintTestSynStart(50, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0051() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "int()";
			TestCommonTools.consolePrintTestSynStart(51, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0052() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "int(1)";
			TestCommonTools.consolePrintTestSynStart(52, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0053() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "int(1,2)";
			TestCommonTools.consolePrintTestSynStart(53, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0054() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "int(1,2,3)";
			TestCommonTools.consolePrintTestSynStart(54, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0055() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "int(1,2,3,4,5)";
			TestCommonTools.consolePrintTestSynStart(55, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0056() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x", 5);
			String expStr = "int(,2,3,4)";
			TestCommonTools.consolePrintTestSynStart(56, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0057() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "int(1,2,0,1)";
			TestCommonTools.consolePrintTestSynStart(57, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0058() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der";
			TestCommonTools.consolePrintTestSynStart(58, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0059() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der()";
			TestCommonTools.consolePrintTestSynStart(59, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0060() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der(1)";
			TestCommonTools.consolePrintTestSynStart(60, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0061() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der(1,2,3)";
			TestCommonTools.consolePrintTestSynStart(61, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0062() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der(1,2,3,4,5)";
			TestCommonTools.consolePrintTestSynStart(62, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0063() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der(1,2)";
			TestCommonTools.consolePrintTestSynStart(63, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0064() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der+";
			TestCommonTools.consolePrintTestSynStart(64, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0065() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der+()";
			TestCommonTools.consolePrintTestSynStart(65, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0066() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der+(1)";
			TestCommonTools.consolePrintTestSynStart(66, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0067() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der+(1,2,3)";
			TestCommonTools.consolePrintTestSynStart(67, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0068() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der+(1,2,3,4,5)";
			TestCommonTools.consolePrintTestSynStart(68, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0069() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der+(1,2)";
			TestCommonTools.consolePrintTestSynStart(69, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0070() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der-";
			TestCommonTools.consolePrintTestSynStart(70, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0071() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der-()";
			TestCommonTools.consolePrintTestSynStart(71, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0072() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der-(1)";
			TestCommonTools.consolePrintTestSynStart(72, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0073() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der-(1,2,3)";
			TestCommonTools.consolePrintTestSynStart(73, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0074() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der-(1,2,3,4,5)";
			TestCommonTools.consolePrintTestSynStart(74, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0075() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der-(1,2)";
			TestCommonTools.consolePrintTestSynStart(75, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0076() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "diff";
			TestCommonTools.consolePrintTestSynStart(76, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0077() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "diff()";
			TestCommonTools.consolePrintTestSynStart(77, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0078() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "diff(1)";
			TestCommonTools.consolePrintTestSynStart(78, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0079() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "diff(1,2,3,4)";
			TestCommonTools.consolePrintTestSynStart(79, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0080() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "diff(1,2)";
			TestCommonTools.consolePrintTestSynStart(80, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0081() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "difb";
			TestCommonTools.consolePrintTestSynStart(81, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0082() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "difb()";
			TestCommonTools.consolePrintTestSynStart(82, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0083() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "difb(1)";
			TestCommonTools.consolePrintTestSynStart(83, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0084() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "difb(1,2,3,4)";
			TestCommonTools.consolePrintTestSynStart(84, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0085() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "difb(1,2)";
			TestCommonTools.consolePrintTestSynStart(85, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0086() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f()=x+y";
			TestCommonTools.consolePrintTestSynStart(86, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
			if (msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0087() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(1,x,y)=x+y";
			TestCommonTools.consolePrintTestSynStart(87, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0088() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(1)=x+y";
			TestCommonTools.consolePrintTestSynStart(88, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0089() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(x,)=x+y";
			TestCommonTools.consolePrintTestSynStart(89, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0090() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(x,  a, x, )=x+y";
			TestCommonTools.consolePrintTestSynStart(90, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0091() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "  f   (x ,   y,    z   )  = x +  y  +z  ";
			TestCommonTools.consolePrintTestSynStart(91, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f(1,2,3)", f);
			bool reg = true;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (
				(!msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH)) &&
				(reg == syn)
			)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0092() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x()=y+z";
			TestCommonTools.consolePrintTestSynStart(92, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.INVALID_ARGUMENT_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0093() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(1,a,b)=a+b";
			TestCommonTools.consolePrintTestSynStart(93, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.INVALID_ARGUMENT_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0094() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(1)=a+b";
			TestCommonTools.consolePrintTestSynStart(94, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.INVALID_ARGUMENT_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0095() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(a,)=a+b";
			TestCommonTools.consolePrintTestSynStart(95, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.INVALID_ARGUMENT_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0096() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(a, b, c,)=a+c";
			TestCommonTools.consolePrintTestSynStart(96, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.INVALID_ARGUMENT_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0097() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "  x (  a, b   , c  ) = a+b+c";
			TestCommonTools.consolePrintTestSynStart(97, expStr);
			Argument x = new Argument(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			StringResources stringResources = StringModel.getStringResources();
			if ((reg == syn) && (msg.Contains(stringResources.INVALID_ARGUMENT_DEFINITION)))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0098() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x 5";
			TestCommonTools.consolePrintTestSynStart(98, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.INVALID_ARGUMENT_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0099() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "  x = 5 + 1 + 2";
			TestCommonTools.consolePrintTestSynStart(99, expStr);
			Argument x = new Argument(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = true;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (
				(!msg.Contains(stringResources.INVALID_ARGUMENT_DEFINITION)) &&
				(reg == syn) &&
				(e.calculate() == 8)
			)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0100() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(n,m)=n*f(n-1)";
			TestCommonTools.consolePrintTestSynStart(100, expStr);
			Argument x = new RecursiveArgument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.INVALID_ARGUMENT_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0101() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "RecursiveArgument name    1fa";
			TestCommonTools.consolePrintTestSynStart(101, expStr);
			Argument x = new RecursiveArgument("1fa","f(n-1)", "n");
			String msg = x.getErrorMessage();
			Expression e = new Expression("x(1)", x);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.INVALID_ARGUMENT_NAME) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0102() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x()=y+z";
			TestCommonTools.consolePrintTestSynStart(102, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0103() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(1,a,b)=a+b";
			TestCommonTools.consolePrintTestSynStart(103, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0104() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(1)=a+b";
			TestCommonTools.consolePrintTestSynStart(104, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0105() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(a,)=a+b";
			TestCommonTools.consolePrintTestSynStart(105, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0106() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(a, b, c,)=a+c";
			TestCommonTools.consolePrintTestSynStart(106, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0107() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "  x = a+b+c";
			TestCommonTools.consolePrintTestSynStart(107, expStr);
			Constant c1 = new Constant(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = true;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (
				(!msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH)) &&
				(reg == syn) &&
				(e.calculate() == 6)
			)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0108() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x 5";
			TestCommonTools.consolePrintTestSynStart(108, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0109() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "  x = 5 + 1 + 2";
			TestCommonTools.consolePrintTestSynStart(109, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = true;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (
				(!msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH)) &&
				(reg == syn) &&
				(e.calculate() == 8)
			)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0110() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "Constant name    1fa";
			TestCommonTools.consolePrintTestSynStart(110, expStr);
			Constant c1 = new Constant("1fa",1);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("1fa", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
            StringResources stringResources = StringModel.getStringResources();
            if (msg.Contains(stringResources.INVALID_CONSTANT_NAME) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
                testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0111() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			Function ff = new Function("ff", new FunExt());
			String expStr = "ff(4,5)";
			TestCommonTools.consolePrintTestSynStart(111, expStr);
			Expression e = new Expression(expStr, ff);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == Expression.NO_SYNTAX_ERRORS)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0112() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			Function ff = new Function("ff", new FunExt());
			String expStr = "ff(4,5,6)";
			TestCommonTools.consolePrintTestSynStart(112, expStr);
			Expression e = new Expression(expStr, ff);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == Expression.SYNTAX_ERROR)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0113() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "solve(2*x - 4, x+y, -10, 10)";
			TestCommonTools.consolePrintTestSynStart(113, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == Expression.SYNTAX_ERROR)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0114() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			mXparser.unremoveAllBuiltinTokens();
			mXparser.removeBuiltinTokens("sin");
			String expStr = "sin(2)";
			TestCommonTools.consolePrintTestSynStart(114, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			mXparser.unremoveAllBuiltinTokens();
			if (syn == Expression.SYNTAX_ERROR)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0115() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			mXparser.unmodifyAllBuiltinTokens();
			mXparser.modifyBuiltinToken("sin", "sinos");
			String expStr = "sin(2)";
			TestCommonTools.consolePrintTestSynStart(115, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			mXparser.unmodifyAllBuiltinTokens();
			if (syn == Expression.SYNTAX_ERROR)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0116() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			mXparser.unmodifyAllBuiltinTokens();
			mXparser.modifyBuiltinToken("sin", "sinos");
			String expStr = "sinos(2)";
			TestCommonTools.consolePrintTestSynStart(116, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			mXparser.unmodifyAllBuiltinTokens();
			if (syn == Expression.NO_SYNTAX_ERRORS)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0117() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			mXparser.setNotToOverrideBuiltinTokens();
			Function sin = new Function("sin(x,y) = 2*x + y");
			Argument ee = new Argument("e = 5");
			Constant pi = new Constant("pi = 2");
			String expStr = "sin(e,pi)";
			TestCommonTools.consolePrintTestSynStart(117, expStr);
			Expression e = new Expression(expStr, sin, ee, pi);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0118() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			mXparser.setToOverrideBuiltinTokens();
			Function sin = new Function("sin(x,y) = 2*x + y");
			Argument ee = new Argument("e = 5");
			Constant pi = new Constant("pi = 2");
			String expStr = "sin(e,pi)";
			TestCommonTools.consolePrintTestSynStart(118, expStr);
			Expression e = new Expression(expStr, sin, ee, pi);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0119() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "h.1234567890aBcDeF + H.001234567890aBcDeF";
			TestCommonTools.consolePrintTestSynStart(119, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0120() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "o.12345670 + O.0012345670";
			TestCommonTools.consolePrintTestSynStart(120, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0121() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b.101010 + B.000101010";
			TestCommonTools.consolePrintTestSynStart(121, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0122() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "h.1234567890aBcDeFu + y.001234567890aBcDeF";
			TestCommonTools.consolePrintTestSynStart(122, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0123() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "o.123456708 + O.00123456709";
			TestCommonTools.consolePrintTestSynStart(123, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0124() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b.2101010 + B.0001010103";
			TestCommonTools.consolePrintTestSynStart(124, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0125() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b1. + B1.111";
			TestCommonTools.consolePrintTestSynStart(125, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0126() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b1.111 + B1.1101";
			TestCommonTools.consolePrintTestSynStart(126, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0127() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b2.01 + B2.0101";
			TestCommonTools.consolePrintTestSynStart(127, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0128() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b2.012 + B2.0101";
			TestCommonTools.consolePrintTestSynStart(128, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0129() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b3.012 + B3.0012";
			TestCommonTools.consolePrintTestSynStart(129, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0130() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b3.012 + B3.00123";
			TestCommonTools.consolePrintTestSynStart(130, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0131() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b4.0123 + B4.00123";
			TestCommonTools.consolePrintTestSynStart(131, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0132() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b4.01234 + B4.00123";
			TestCommonTools.consolePrintTestSynStart(132, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0133() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b5.01234 + B5.001234";
			TestCommonTools.consolePrintTestSynStart(133, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0134() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b5.012345 + B5.001234";
			TestCommonTools.consolePrintTestSynStart(134, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0135() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b6.012345 + B6.0012345";
			TestCommonTools.consolePrintTestSynStart(135, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0136() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b6.012345 + B6.00123456";
			TestCommonTools.consolePrintTestSynStart(136, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0137() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b7.0123456 + B7.00123456";
			TestCommonTools.consolePrintTestSynStart(137, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0138() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b7.0123456 + B7.001234568";
			TestCommonTools.consolePrintTestSynStart(138, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0139() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b8.01234567 + B8.001234567";
			TestCommonTools.consolePrintTestSynStart(139, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0140() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b8.01234567 + B8.0012345679";
			TestCommonTools.consolePrintTestSynStart(140, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0141() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b9.012345678 + B9.0012345678";
			TestCommonTools.consolePrintTestSynStart(141, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0142() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b9.0123456789 + B9.0012345678";
			TestCommonTools.consolePrintTestSynStart(142, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0143() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b10.0123456789 + B10.00123456789";
			TestCommonTools.consolePrintTestSynStart(143, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0144() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b10.0123456789 + B10.00123456789a";
			TestCommonTools.consolePrintTestSynStart(144, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0145() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b11.0123456789a + B11.00123456789A";
			TestCommonTools.consolePrintTestSynStart(145, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0146() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b11.0123456789a + B11.00123456789Ab";
			TestCommonTools.consolePrintTestSynStart(146, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0147() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b12.0123456789ab + B12.00123456789AB";
			TestCommonTools.consolePrintTestSynStart(147, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0148() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b12.0123456789abC + B12.00123456789AB";
			TestCommonTools.consolePrintTestSynStart(148, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0149() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b13.0123456789abc + B13.00123456789ABC";
			TestCommonTools.consolePrintTestSynStart(149, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0150() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b13.0123456789abc + B13.00123456789ABCd";
			TestCommonTools.consolePrintTestSynStart(150, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0151() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b14.0123456789abcd + B14.00123456789ABCD";
			TestCommonTools.consolePrintTestSynStart(151, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0152() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b14.0123456789abcdE + B14.00123456789ABCD";
			TestCommonTools.consolePrintTestSynStart(152, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0153() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b15.0123456789abcde + B15.00123456789ABCDE";
			TestCommonTools.consolePrintTestSynStart(153, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0154() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b15.0123456789abcde + B15.00123456789ABCDEf";
			TestCommonTools.consolePrintTestSynStart(154, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0155() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b16.0123456789abcdef + B16.00123456789ABCDEF";
			TestCommonTools.consolePrintTestSynStart(155, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0156() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b16.0123456789abcdefg + B16.00123456789ABCDEF";
			TestCommonTools.consolePrintTestSynStart(156, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0157() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b16.0123456789abcdef + B16.00123456789ABCDEF";
			TestCommonTools.consolePrintTestSynStart(157, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0158() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b16.0123456789abcdefg + B16.00123456789ABCDEF";
			TestCommonTools.consolePrintTestSynStart(158, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0159() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b17.0123456789abcdefg + B17.00123456789ABCDEFG";
			TestCommonTools.consolePrintTestSynStart(159, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0160() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b17.0123456789abcdefg + B17.00123456789ABCDEFGh";
			TestCommonTools.consolePrintTestSynStart(160, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0161() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b18.0123456789abcdefgh + B18.00123456789ABCDEFGH";
			TestCommonTools.consolePrintTestSynStart(161, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0162() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b18.0123456789abcdefghI + B18.00123456789ABCDEFGH";
			TestCommonTools.consolePrintTestSynStart(162, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0163() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b19.0123456789abcdefghi + B19.00123456789ABCDEFGI";
			TestCommonTools.consolePrintTestSynStart(163, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0164() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b19.0123456789abcdefghi + B19.00123456789ABCDEFGIj";
			TestCommonTools.consolePrintTestSynStart(164, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0165() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b20.0123456789abcdefghij + B20.00123456789ABCDEFGIJ";
			TestCommonTools.consolePrintTestSynStart(165, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0166() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b20.0123456789abcdefghijK + B20.00123456789ABCDEFGIJ";
			TestCommonTools.consolePrintTestSynStart(166, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0167() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b21.0123456789abcdefghijk + B21.00123456789ABCDEFGIJK";
			TestCommonTools.consolePrintTestSynStart(167, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0168() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b21.0123456789abcdefghijk + B21.00123456789ABCDEFGIJKl";
			TestCommonTools.consolePrintTestSynStart(168, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0169() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b22.0123456789abcdefghijkl + B22.00123456789ABCDEFGIJKL";
			TestCommonTools.consolePrintTestSynStart(169, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0170() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b22.0123456789abcdefghijklM + B22.00123456789ABCDEFGIJKL";
			TestCommonTools.consolePrintTestSynStart(170, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0171() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b23.0123456789abcdefghijklm + B23.00123456789ABCDEFGIJKLM";
			TestCommonTools.consolePrintTestSynStart(171, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0172() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b23.0123456789abcdefghijklm + B23.00123456789ABCDEFGIJKLMn";
			TestCommonTools.consolePrintTestSynStart(172, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0173() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b24.0123456789abcdefghijklmn + B24.00123456789ABCDEFGIJKLMN";
			TestCommonTools.consolePrintTestSynStart(173, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0174() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b24.0123456789abcdefghijklmnO + B24.00123456789ABCDEFGIJKLMN";
			TestCommonTools.consolePrintTestSynStart(174, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0175() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b25.0123456789abcdefghijklmno + B25.00123456789ABCDEFGIJKLMNO";
			TestCommonTools.consolePrintTestSynStart(175, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0176() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b25.0123456789abcdefghijklmno + B25.00123456789ABCDEFGIJKLMNOp";
			TestCommonTools.consolePrintTestSynStart(176, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0177() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b26.0123456789abcdefghijklmnop + B26.00123456789ABCDEFGIJKLMNOP";
			TestCommonTools.consolePrintTestSynStart(177, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0178() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b26.0123456789abcdefghijklmnop + B26.00123456789ABCDEFGIJKLMNOPq";
			TestCommonTools.consolePrintTestSynStart(178, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0179() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b27.0123456789abcdefghijklmnopq + B27.00123456789ABCDEFGIJKLMNOPQ";
			TestCommonTools.consolePrintTestSynStart(179, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0180() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b27.0123456789abcdefghijklmnopqR + B27.00123456789ABCDEFGIJKLMNOPQ";
			TestCommonTools.consolePrintTestSynStart(180, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0181() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b28.0123456789abcdefghijklmnopqr + B28.00123456789ABCDEFGIJKLMNOPQR";
			TestCommonTools.consolePrintTestSynStart(181, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0182() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b28.0123456789abcdefghijklmnopqr + B28.00123456789ABCDEFGIJKLMNOPQRs";
			TestCommonTools.consolePrintTestSynStart(182, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0183() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b29.0123456789abcdefghijklmnopqrs + B29.00123456789ABCDEFGIJKLMNOPQRS";
			TestCommonTools.consolePrintTestSynStart(183, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0184() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b29.0123456789abcdefghijklmnopqrsT + B29.00123456789ABCDEFGIJKLMNOPQRS";
			TestCommonTools.consolePrintTestSynStart(184, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0185() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b30.0123456789abcdefghijklmnopqrst + B30.00123456789ABCDEFGIJKLMNOPQRST";
			TestCommonTools.consolePrintTestSynStart(185, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0186() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b30.0123456789abcdefghijklmnopqrst + B30.00123456789ABCDEFGIJKLMNOPQRSTu";
			TestCommonTools.consolePrintTestSynStart(186, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0187() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b31.0123456789abcdefghijklmnopqrstu + B31.00123456789ABCDEFGIJKLMNOPQRSTU";
			TestCommonTools.consolePrintTestSynStart(187, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0188() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b31.0123456789abcdefghijklmnopqrstuV + B31.00123456789ABCDEFGIJKLMNOPQRSTU";
			TestCommonTools.consolePrintTestSynStart(188, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0189() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b32.0123456789abcdefghijklmnopqrstuv + B32.00123456789ABCDEFGIJKLMNOPQRSTUV";
			TestCommonTools.consolePrintTestSynStart(189, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0190() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b32.0123456789abcdefghijklmnopqrstuv + B32.00123456789ABCDEFGIJKLMNOPQRSTUVw";
			TestCommonTools.consolePrintTestSynStart(190, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0191() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b33.0123456789abcdefghijklmnopqrstuvw + B33.00123456789ABCDEFGIJKLMNOPQRSTUVW";
			TestCommonTools.consolePrintTestSynStart(191, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0192() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b33.0123456789abcdefghijklmnopqrstuvwX + B33.00123456789ABCDEFGIJKLMNOPQRSTUVW";
			TestCommonTools.consolePrintTestSynStart(192, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0193() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b34.0123456789abcdefghijklmnopqrstuvwx + B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX";
			TestCommonTools.consolePrintTestSynStart(193, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0194() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b34.0123456789abcdefghijklmnopqrstuvwx + B34.00123456789ABCDEFGIJKLMNOPQRSTUVWXy";
			TestCommonTools.consolePrintTestSynStart(194, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0195() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b35.0123456789abcdefghijklmnopqrstuvwxy + B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY";
			TestCommonTools.consolePrintTestSynStart(195, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0196() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b35.0123456789abcdefghijklmnopqrstuvwxyZ + B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY";
			TestCommonTools.consolePrintTestSynStart(196, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0197() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b36.0123456789abcdefghijklmnopqrstuvwxyz + B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ";
			TestCommonTools.consolePrintTestSynStart(197, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0198() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b36.0123456789abcdefghijklmnopqrstuvwxyzą + B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ";
			TestCommonTools.consolePrintTestSynStart(198, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0199() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = pi");
			String expStr = "der( sin(x), x )";
			TestCommonTools.consolePrintTestSynStart(199, expStr);
			Expression e = new Expression(expStr, x);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0200() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = pi");
			String expStr = "der( sin(x), x, 0.01, 100 )";
			TestCommonTools.consolePrintTestSynStart(200, expStr);
			Expression e = new Expression(expStr, x);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0201() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der( sin(x), x , pi )";
			TestCommonTools.consolePrintTestSynStart(201, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0202() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der( sin(x), x , pi )";
			TestCommonTools.consolePrintTestSynStart(202, expStr);
			Argument x = new Argument("x");
			Expression e = new Expression(expStr, x);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0203() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der( sin(x), x , pi, 0.01, 100 )";
			TestCommonTools.consolePrintTestSynStart(203, expStr);
			Expression e = new Expression(expStr);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0204() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der( sin(x), x , pi, 0.01, 100 )";
			TestCommonTools.consolePrintTestSynStart(204, expStr);
			Argument x = new Argument("x");
			Expression e = new Expression(expStr, x);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0205() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der( sin(x), x )";
			TestCommonTools.consolePrintTestSynStart(205, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0206() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "der( sin(x), x, 0.1, 100 )";
			TestCommonTools.consolePrintTestSynStart(206, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0207() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin(pi)+cos(pi)";
			TestCommonTools.consolePrintTestSynStart(207, expStr);
			Expression e = new Expression(expStr);
			mXparser.unremoveAllBuiltinTokens();
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0208() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin(pi)+cos(pi)";
			TestCommonTools.consolePrintTestSynStart(208, expStr);
			Expression e = new Expression(expStr);
			mXparser.unremoveAllBuiltinTokens();
			bool syn = e.checkSyntax();
			mXparser.removeBuiltinTokens("sin", "cos");
			syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			mXparser.unremoveAllBuiltinTokens();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0209() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin(pi)+cos(pi)";
			TestCommonTools.consolePrintTestSynStart(209, expStr);
			Expression e = new Expression(expStr);
			mXparser.unremoveAllBuiltinTokens();
			bool syn = e.checkSyntax();
			mXparser.removeBuiltinTokens("sin", "cos");
			syn = e.checkSyntax();
			mXparser.unremoveBuiltinTokens("cos");
			syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			mXparser.unremoveAllBuiltinTokens();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0210() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin(pi)+cos(pi)";
			TestCommonTools.consolePrintTestSynStart(210, expStr);
			Expression e = new Expression(expStr);
			mXparser.unremoveAllBuiltinTokens();
			bool syn = e.checkSyntax();
			mXparser.removeBuiltinTokens("sin", "cos");
			syn = e.checkSyntax();
			mXparser.unremoveBuiltinTokens("cos");
			syn = e.checkSyntax();
			mXparser.unremoveAllBuiltinTokens();
			syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0211() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sine(pi)+cosine(pi)";
			TestCommonTools.consolePrintTestSynStart(211, expStr);
			Expression e = new Expression(expStr);
			mXparser.unmodifyAllBuiltinTokens();
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0212() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sine(pi)+cosine(pi)";
			TestCommonTools.consolePrintTestSynStart(212, expStr);
			Expression e = new Expression(expStr);
			mXparser.unmodifyAllBuiltinTokens();
			bool syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("sin", "sine");
			syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			mXparser.unmodifyAllBuiltinTokens();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0213() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sine(pi)+cosine(pi)";
			TestCommonTools.consolePrintTestSynStart(213, expStr);
			Expression e = new Expression(expStr);
			mXparser.unmodifyAllBuiltinTokens();
			bool syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("sin", "sine");
			syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("cos", "cosine", "My new cosine token");
			syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			mXparser.unmodifyAllBuiltinTokens();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0214() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sine(pi)+cosine(pi)";
			TestCommonTools.consolePrintTestSynStart(214, expStr);
			Expression e = new Expression(expStr);
			mXparser.unmodifyAllBuiltinTokens();
			bool syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("sin", "sine");
			syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("cos", "cosine", "My new cosine token");
			syn = e.checkSyntax();
			mXparser.unmodifyBuiltinTokens("sin");
			syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			mXparser.unmodifyAllBuiltinTokens();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0215() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sine(pi)+cosine(pi)";
			TestCommonTools.consolePrintTestSynStart(215, expStr);
			Expression e = new Expression(expStr);
			mXparser.unmodifyAllBuiltinTokens();
			bool syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("sin", "sine");
			syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("cos", "cosine", "My new cosine token");
			syn = e.checkSyntax();
			mXparser.unmodifyAllBuiltinTokens();
			syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0216() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin(pi)";
			TestCommonTools.consolePrintTestSynStart(216, expStr);
			Function sin = new Function("sin(x) = 2*x");
			Constant pi = new Constant("pi = 1");
			Expression e = new Expression(expStr, sin, pi);
			mXparser.setNotToOverrideBuiltinTokens();
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0217() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin(pi)";
			TestCommonTools.consolePrintTestSynStart(217, expStr);
			Function sin = new Function("sin(x) = 2*x");
			Constant pi = new Constant("pi = 1");
			Expression e = new Expression(expStr, sin, pi);
			mXparser.setNotToOverrideBuiltinTokens();
			bool syn = e.checkSyntax();
			mXparser.setToOverrideBuiltinTokens();
			syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			mXparser.setNotToOverrideBuiltinTokens();
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0218() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin(pi)";
			TestCommonTools.consolePrintTestSynStart(218, expStr);
			Function sin = new Function("sin(x) = 2*x");
			Constant pi = new Constant("pi = 1");
			Expression e = new Expression(expStr, sin, pi);
			mXparser.setNotToOverrideBuiltinTokens();
			bool syn = e.checkSyntax();
			mXparser.setToOverrideBuiltinTokens();
			syn = e.checkSyntax();
			mXparser.setNotToOverrideBuiltinTokens();
			syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0219() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "10*(350.0/5) + 60.0 + + (180/3)*5";
			TestCommonTools.consolePrintTestSynStart(219, expStr);
			mXparser.disableAttemptToFixExpStrMode();
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0220() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "10*(350.0/5) + 60.0 + - (180/3)*5";
			TestCommonTools.consolePrintTestSynStart(220, expStr);
			mXparser.disableAttemptToFixExpStrMode();
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0221() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "10*(350.0/5) + 60.0 -  + (180/3)*5";
			TestCommonTools.consolePrintTestSynStart(221, expStr);
			mXparser.disableAttemptToFixExpStrMode();
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0222() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "10*(350.0/5) + 60.0 -   - (180/3)*5";
			TestCommonTools.consolePrintTestSynStart(222, expStr);
			mXparser.disableAttemptToFixExpStrMode();
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0223() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "10*2_3_5";
			TestCommonTools.consolePrintTestSynStart(223, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0224() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "10*(-2_3_5)";
			TestCommonTools.consolePrintTestSynStart(224, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0225() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "-2_3_5+5_2";
			TestCommonTools.consolePrintTestSynStart(225, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0226() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin(-2_3_5+5_2*b5.12)";
			TestCommonTools.consolePrintTestSynStart(226, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0227() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin(101_102_103+2653_123*b5.12)";
			TestCommonTools.consolePrintTestSynStart(227, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0228() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2^^3+2^3+2^2^^2";
			TestCommonTools.consolePrintTestSynStart(228, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0229() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "pi^^sin(pi)";
			TestCommonTools.consolePrintTestSynStart(229, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0230() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(x) = (3 + 5*x";
			TestCommonTools.consolePrintTestSynStart(230, expStr);
			Function f = new Function(expStr);
			Expression e = new Expression("");
			bool syn = f.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0231() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(x) = (3 + 5*x)";
			TestCommonTools.consolePrintTestSynStart(231, expStr);
			Function f = new Function(expStr);
			Expression e = new Expression("");
			bool syn = f.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0232() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "[npar]";
			TestCommonTools.consolePrintTestSynStart(232, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0233() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "par(1)";
			TestCommonTools.consolePrintTestSynStart(233, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0234() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(x) = [npar] + par(1)";
			TestCommonTools.consolePrintTestSynStart(234, expStr);
			Function f = new Function(expStr);
			Expression e = new Expression("");
			bool syn = f.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0235() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(...) = [npar] + par(1)";
			TestCommonTools.consolePrintTestSynStart(235, expStr);
			Function f = new Function(expStr);
			Expression e = new Expression("");
			bool syn = f.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0236() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(... = [npar] + par(1)";
			TestCommonTools.consolePrintTestSynStart(236, expStr);
			Function f = new Function(expStr);
			Expression e = new Expression("");
			bool syn = f.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0237() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "{fun-ext-var}";
			TestCommonTools.consolePrintTestSynStart(237, expStr);
			FunExtVar fx = new FunExtVar();
			Function f = new Function("f", fx);
			Expression e = new Expression("");
			bool syn = f.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0238() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			FunExtVar gx = new FunExtVar();
			Function f = new Function("f(...) = sum(i, 1, [npar], par(i) )");
			Function g = new Function("g", gx);
			String expStr = "f(1) + f(1,2) + f(1,2,3) + g(1) + g(1,2) + g(1,2,3)";
			TestCommonTools.consolePrintTestSynStart(238, expStr);
			Expression e = new Expression(expStr, f, g);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0239() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = ".2";
			TestCommonTools.consolePrintTestSynStart(239, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0240() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "+.2";
			TestCommonTools.consolePrintTestSynStart(240, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0241() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "-.2";
			TestCommonTools.consolePrintTestSynStart(241, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0242() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "-.2^.3";
			TestCommonTools.consolePrintTestSynStart(242, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0243() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = ".2 ^ .3";
			TestCommonTools.consolePrintTestSynStart(243, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0244() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "-2 + 3 - .2 + 1.5 - .2^.3 + (2/.3)";
			TestCommonTools.consolePrintTestSynStart(244, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0245() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			Argument fun = new Argument("fun");
			Argument x = new Argument("x");
			String expStr = "fun(x)";
			TestCommonTools.consolePrintTestSynStart(245, expStr);
			Expression e = new Expression(expStr, fun, x);
			bool lex = e.checkLexSyntax();
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg && lex == true)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0246() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2(3)";
			TestCommonTools.consolePrintTestSynStart(246, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0247() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "(3)2";
			TestCommonTools.consolePrintTestSynStart(247, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0248() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2(3)2";
			TestCommonTools.consolePrintTestSynStart(248, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0249() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2(3+4)2";
			TestCommonTools.consolePrintTestSynStart(249, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0250() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2(3+4)2(3)(3)2cos(pi)2sin(pi)2pi";
			TestCommonTools.consolePrintTestSynStart(250, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0251() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "-2(3+4)2(3)(3)-2cos(pi)+2sin(pi)2-pi";
			TestCommonTools.consolePrintTestSynStart(251, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0252() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2(3+4)2 - 2*(3+4)*2";
			TestCommonTools.consolePrintTestSynStart(252, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0253() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2e-2*e";
			TestCommonTools.consolePrintTestSynStart(253, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0254() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = ".01e-0.01*e";
			TestCommonTools.consolePrintTestSynStart(254, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0255() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "e[h-]sin(.1pi)";
			TestCommonTools.consolePrintTestSynStart(255, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0256() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2[h-]2[h-]2[h-]";
			TestCommonTools.consolePrintTestSynStart(256, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0257() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "[h-](1)";
			TestCommonTools.consolePrintTestSynStart(257, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0258() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "[h-](1,2)";
			TestCommonTools.consolePrintTestSynStart(258, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0259() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
			TestCommonTools.consolePrintTestSynStart(259, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0260() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2.1a2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
			TestCommonTools.consolePrintTestSynStart(260, expStr);
			Expression e = new Expression(expStr);
			e.addArguments(new Argument("a = 2"));
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0261() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2.1a2.1e2(.3+0.4)[h-].01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
			TestCommonTools.consolePrintTestSynStart(261, expStr);
			Expression e = new Expression(expStr);
			e.addArguments(new Argument("a = 2"));
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0262() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2.1a[h-]2.1e2(.3+0.4)[h-].01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
			TestCommonTools.consolePrintTestSynStart(262, expStr);
			Expression e = new Expression(expStr);
			e.addArguments(new Argument("a = 2"));
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0263() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2×4";
			TestCommonTools.consolePrintTestSynStart(263, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0264() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2⨉4";
			TestCommonTools.consolePrintTestSynStart(264, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0265() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2∙4";
			TestCommonTools.consolePrintTestSynStart(265, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0266() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2÷4";
			TestCommonTools.consolePrintTestSynStart(266, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0267() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "¬1+1∧0+0∨1";
			TestCommonTools.consolePrintTestSynStart(267, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0268() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "(1⇒1) + (0⇐1) + (1⇏0) + (0⇍0) + (1⇔1)";
			TestCommonTools.consolePrintTestSynStart(268, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0269() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "(1~∧1) + (1¬&1) + (1¬&&1) + (1¬/\\1) + (1¬∧1)";
			TestCommonTools.consolePrintTestSynStart(269, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0270() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "(1~∨1) + (1¬|1) + (1¬||1) + (1¬\\/1) + (1¬∨1)";
			TestCommonTools.consolePrintTestSynStart(270, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0271() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "1 ≠ 2";
			TestCommonTools.consolePrintTestSynStart(271, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0272() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "(1 ≤ 2) & (1 ⋜ 2)";
			TestCommonTools.consolePrintTestSynStart(272, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0273() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "(2 ≥ 1) & (2 ⋝ 1)";
			TestCommonTools.consolePrintTestSynStart(273, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0274() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "√4+2*√8+√(3+3)+√e";
			TestCommonTools.consolePrintTestSynStart(274, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0275() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∛4+2*∛8+∛(3+3)+∛e";
			TestCommonTools.consolePrintTestSynStart(275, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0276() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∜4+2*∜8+∜(3+3)+∜e";
			TestCommonTools.consolePrintTestSynStart(276, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0277() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "pi+π+ℼ";
			TestCommonTools.consolePrintTestSynStart(277, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0278() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "e+ℯ+ⅇ";
			TestCommonTools.consolePrintTestSynStart(278, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0279() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∑(i, 1, 10, i^2) + Σ(i, 1, 10, i^2)";
			TestCommonTools.consolePrintTestSynStart(279, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0280() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∏(i, 1, 10, i^2) + ℿ(i, 1, 10, i^2) + Π(i, 1, 10, i^2)";
			TestCommonTools.consolePrintTestSynStart(280, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0281() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∫(x^2, x, 0, 1)";
			TestCommonTools.consolePrintTestSynStart(281, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0282() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∂(x^2, x, 1)";
			TestCommonTools.consolePrintTestSynStart(282, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0283() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∂+(x^2, x, 0)";
			TestCommonTools.consolePrintTestSynStart(283, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0284() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∂-(x^2, x, 0)";
			TestCommonTools.consolePrintTestSynStart(284, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0285() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = 2");
			String expStr = "∆(x^2, x) + Δ(x^2, x)";
			TestCommonTools.consolePrintTestSynStart(285, expStr);
			Expression e = new Expression(expStr, x);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0286() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			Argument x = new Argument("x = 2");
			String expStr = "∇(x^2, x)";
			TestCommonTools.consolePrintTestSynStart(286, expStr);
			Expression e = new Expression(expStr, x);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0287() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "√√√4+√√4+2√4";
			TestCommonTools.consolePrintTestSynStart(287, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0288() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∛∛∛4+∛∛4+2∛4";
			TestCommonTools.consolePrintTestSynStart(288, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0289() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∜∜∜4+∜∜4+2∜4";
			TestCommonTools.consolePrintTestSynStart(289, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0290() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∜∛√4+∜∛√4+2√4";
			TestCommonTools.consolePrintTestSynStart(290, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0291() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∜2∛3√4+∜2∛√4+2√4";
			TestCommonTools.consolePrintTestSynStart(291, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0292() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sin(pi)∜2∛3√4+∜2∛√4+pi√4";
			TestCommonTools.consolePrintTestSynStart(292, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0293() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∜∛+4";
			TestCommonTools.consolePrintTestSynStart(293, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0294() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∜∛-4";
			TestCommonTools.consolePrintTestSynStart(294, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0295() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "5+∜";
			TestCommonTools.consolePrintTestSynStart(295, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0296() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∜∜*4";
			TestCommonTools.consolePrintTestSynStart(296, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0297() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "∜∜pi";
			TestCommonTools.consolePrintTestSynStart(297, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0298() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2∜∛*4+√pi*sin(√4)∛4";
			TestCommonTools.consolePrintTestSynStart(298, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0299() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "pi√pi";
			TestCommonTools.consolePrintTestSynStart(299, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0300() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2pi√pi";
			TestCommonTools.consolePrintTestSynStart(300, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0301() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2pi√√pi";
			TestCommonTools.consolePrintTestSynStart(301, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0302() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2pi2√√pi";
			TestCommonTools.consolePrintTestSynStart(302, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkLexSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0303() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2pi2√√pi";
			TestCommonTools.consolePrintTestSynStart(303, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0304() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2pi√√2pi";
			TestCommonTools.consolePrintTestSynStart(304, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0305() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2pi+3e";
			TestCommonTools.consolePrintTestSynStart(305, expStr);
			Expression e = new Expression(expStr);
			e.enableImpliedMultiplicationMode();
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0306() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2pi+3e";
			TestCommonTools.consolePrintTestSynStart(306, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0307() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2(3+4)5";
			TestCommonTools.consolePrintTestSynStart(307, expStr);
			Expression e = new Expression(expStr);
			e.enableImpliedMultiplicationMode();
			bool syn = e.checkSyntax();
			bool reg = true;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0308() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "2(3+4)5";
			TestCommonTools.consolePrintTestSynStart(308, expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0309() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(i, 1, 10, 2*xi)";
			TestCommonTools.consolePrintTestSynStart(309, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0310() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(i, 1, 10, xi*2)";
			TestCommonTools.consolePrintTestSynStart(310, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0311() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(i, 1, 10, 2*ix)";
			TestCommonTools.consolePrintTestSynStart(311, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0312() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(i, 1, 10, ix*2)";
			TestCommonTools.consolePrintTestSynStart(310, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0313() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(i, 1, 10, 2*xpi)";
			TestCommonTools.consolePrintTestSynStart(313, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0314() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(i, 1, 10, xpi*2)";
			TestCommonTools.consolePrintTestSynStart(314, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0315() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(i, 1, 10, 2*pix)";
			TestCommonTools.consolePrintTestSynStart(315, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0316() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "sum(i, 1, 10, pix*2)";
			TestCommonTools.consolePrintTestSynStart(316, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0317() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ALREADY_CHECKED_NO_ERRORS";
			String expStr = "2+2";
			TestCommonTools.consolePrintTestSynStart(317, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			e.checkSyntax();
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ALREADY_CHECKED_NO_ERRORS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0318() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS";
			String expStr = "f(2,2)";
			TestCommonTools.consolePrintTestSynStart(318, testDescr + " " + expStr);
			Function f = new Function("f", new FunExt());
			Expression e = new Expression(expStr, f);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0319() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS";
			String expStr = "g(2,2,2) + f(2,2)";
			TestCommonTools.consolePrintTestSynStart(319, testDescr + " " + expStr);
			Function f = new Function("f", new FunExt());
			Function g = new Function("g(x,y,z)=z*f(x,y)", f);
			Expression e = new Expression(expStr, g, f);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0320() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "EXPRESSION_STRING_IS_EMPTY";
			String expStr = "";
			TestCommonTools.consolePrintTestSynStart(320, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.EXPRESSION_STRING_IS_EMPTY))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0321() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE";
			String expStr = "sin(pi)2";
			TestCommonTools.consolePrintTestSynStart(321, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0322() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "INVALID_TOKEN";
			String expStr = "2.5sisn(pi)";
			TestCommonTools.consolePrintTestSynStart(322, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.INVALID_TOKEN))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0323() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR";
			String expStr = "2.5sisn(pi)";
			TestCommonTools.consolePrintTestSynStart(323, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0324() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DUPLICATED_KEYWORD";
			String expStr = "sin(pi)";
			TestCommonTools.consolePrintTestSynStart(324, testDescr + " " + expStr);
			Argument pi = new Argument("pi=3");
			Expression e = new Expression(expStr, pi);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DUPLICATED_KEYWORD))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0325() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE + ARGUMENT_WAS_EXPECTED";
			String expStr = "2+x(3)";
			TestCommonTools.consolePrintTestSynStart(325, testDescr + " " + expStr);
			Argument x = new Argument("x=3");
			Expression e = new Expression(expStr, x);
			e.disableImpliedMultiplicationMode();
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE) && errorMessage.Contains(stringResources.ARGUMENT_WAS_EXPECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0326() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT";
			String expStr = "2*y";
			TestCommonTools.consolePrintTestSynStart(326, testDescr + " " + expStr);
			Argument x = new Argument("x=3");
			Argument y = new Argument("y = 2*x", x);
			Expression e = new Expression(expStr, y);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0327() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS";
			String expStr = "2*x";
			TestCommonTools.consolePrintTestSynStart(327, testDescr + " " + expStr);
			Argument x = new Argument("x", new PiMultArgExt());
			Expression e = new Expression(expStr, x);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0328() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER";
			String expStr = "2*a";
			TestCommonTools.consolePrintTestSynStart(328, testDescr + " " + expStr);
			RecursiveArgument a = new RecursiveArgument("a(n) = n*a(n-1)");
			a.addBaseCase(1, 1);
			Expression e = new Expression(expStr, a);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0329() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT";
			String expStr = "2+a(2)";
			TestCommonTools.consolePrintTestSynStart(329, testDescr + " " + expStr);
			RecursiveArgument a = new RecursiveArgument("a(n) = n*a(n-1)");
			a.addBaseCase(1, 1);
			Expression e = new Expression(expStr, a);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0330() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT";
			String expStr = "2*f";
			TestCommonTools.consolePrintTestSynStart(330, testDescr + " " + expStr);
			Function f = new Function("f(x,y) = 2*x+3*y");
			Expression e = new Expression(expStr, f);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0331() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION";
			String expStr = "2*f(1,2,3,4)";
			TestCommonTools.consolePrintTestSynStart(331, testDescr + " " + expStr);
			Function f = new Function("f(x,y) = 2*x+3*y");
			Expression e = new Expression(expStr, f);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0332() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION";
			String expStr = "2*f(1,2)";
			TestCommonTools.consolePrintTestSynStart(332, testDescr + " " + expStr);
			Function f = new Function("f(...) = [npar]");
			Expression e = new Expression(expStr, f);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0333() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE + USER_CONSTANT_WAS_EXPECTED";
			String expStr = "2+a(3)";
			TestCommonTools.consolePrintTestSynStart(333, testDescr + " " + expStr);
			Constant a = new Constant("a = 2");
			Expression e = new Expression(expStr, a);
			e.disableImpliedMultiplicationMode();
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE) && errorMessage.Contains(stringResources.USER_CONSTANT_WAS_EXPECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0334() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "UNARY_FUNCTION_EXPECTS_1_PARAMETER";
			String expStr = "sin(1,2)";
			TestCommonTools.consolePrintTestSynStart(334, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.UNARY_FUNCTION_EXPECTS_1_PARAMETER))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0335() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "BINARY_FUNCTION_EXPECTS_2_PARAMETERS";
			String expStr = "C(1)";
			TestCommonTools.consolePrintTestSynStart(335, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.BINARY_FUNCTION_EXPECTS_2_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0336() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "TERNARY_FUNCTION_EXPECTS_3_PARAMETERS";
			String expStr = "if(1,2)";
			TestCommonTools.consolePrintTestSynStart(336, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.TERNARY_FUNCTION_EXPECTS_3_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0337() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED";
			String expStr = "2*min";
			TestCommonTools.consolePrintTestSynStart(337, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0338() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS";
			String expStr = "2*der(1)";
			TestCommonTools.consolePrintTestSynStart(338, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0339() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS";
			String expStr = "2*der(1,2,3,4,5,6)";
			TestCommonTools.consolePrintTestSynStart(339, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0340() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION + INVALID_TOKEN";
			String expStr = "der(sin(x), x)";
			TestCommonTools.consolePrintTestSynStart(340, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION) && errorMessage.Contains(stringResources.INVALID_TOKEN))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0341() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
			String expStr = "sum(pi, 1, 10, pi*2)";
			TestCommonTools.consolePrintTestSynStart(341, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0342() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
			String expStr = "2*int(sin(pi), pi, 1, 10)";
			TestCommonTools.consolePrintTestSynStart(342, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0343() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
			String expStr = "2*solve(sin(pi), pi, 1, 10)";
			TestCommonTools.consolePrintTestSynStart(343, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0344() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
			String expStr = "prod(pi, 1, 10, pi)";
			TestCommonTools.consolePrintTestSynStart(344, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0345() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
			String expStr = "mini(pi, 1, 10, pi)";
			TestCommonTools.consolePrintTestSynStart(345, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0346() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
			String expStr = "maxi(pi, 1, 10, pi)";
			TestCommonTools.consolePrintTestSynStart(346, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0347() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
			String expStr = "vari(pi, 1, 10, pi)";
			TestCommonTools.consolePrintTestSynStart(347, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0348() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
			String expStr = "avg(pi, 1, 10, pi)";
			TestCommonTools.consolePrintTestSynStart(348, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0349() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION";
			String expStr = "stdi(pi, 1, 10, pi)";
			TestCommonTools.consolePrintTestSynStart(349, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0350() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
			String expStr = "sum(2+x, 1, 10, pi*2)";
			TestCommonTools.consolePrintTestSynStart(350, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION) && errorMessage.Contains(stringResources.INVALID_TOKEN))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0351() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
			String expStr = "int(2, 2+x, 1, 10)";
			TestCommonTools.consolePrintTestSynStart(351, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION) && errorMessage.Contains(stringResources.INVALID_TOKEN))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0352() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
			String expStr = "solve(2, 2+x, 1, 10)";
			TestCommonTools.consolePrintTestSynStart(352, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION) && errorMessage.Contains(stringResources.INVALID_TOKEN))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0353() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
			String expStr = "prod(2+x, 1, 10, pi*2)";
			TestCommonTools.consolePrintTestSynStart(353, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION) && errorMessage.Contains(stringResources.INVALID_TOKEN))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0354() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
			String expStr = "mini(2+x, 1, 10, pi*2)";
			TestCommonTools.consolePrintTestSynStart(354, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION) && errorMessage.Contains(stringResources.INVALID_TOKEN))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0355() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
			String expStr = "maxi(2+x, 1, 10, pi*2)";
			TestCommonTools.consolePrintTestSynStart(355, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION) && errorMessage.Contains(stringResources.INVALID_TOKEN))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0356() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
			String expStr = "vari(2+x, 1, 10, pi*2)";
			TestCommonTools.consolePrintTestSynStart(356, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION) && errorMessage.Contains(stringResources.INVALID_TOKEN))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0357() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
			String expStr = "avg(2+x, 1, 10, pi*2)";
			TestCommonTools.consolePrintTestSynStart(357, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION) && errorMessage.Contains(stringResources.INVALID_TOKEN))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0358() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION + INVALID_TOKEN";
			String expStr = "stdi(2+x, 1, 10, pi*2)";
			TestCommonTools.consolePrintTestSynStart(358, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION) && errorMessage.Contains(stringResources.INVALID_TOKEN))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0359() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS";
			String expStr = "dern(1, 2)*2";
			TestCommonTools.consolePrintTestSynStart(359, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0360() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS";
			String expStr = "dern(1, 2, 3, 4)*2";
			TestCommonTools.consolePrintTestSynStart(360, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0361() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS";
			String expStr = "dern(1, 2, 3, 4, 5, 6)*2";
			TestCommonTools.consolePrintTestSynStart(361, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0362() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION";
			String expStr = "dern(sin(pi), 2, pi)*2";
			TestCommonTools.consolePrintTestSynStart(362, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0363() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS";
			String expStr = "2*int(1,2)";
			TestCommonTools.consolePrintTestSynStart(363, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0364() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS";
			String expStr = "2*solve(1,2)";
			TestCommonTools.consolePrintTestSynStart(364, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0365() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
			String expStr = "diff(sin(x))";
			TestCommonTools.consolePrintTestSynStart(365, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0366() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
			String expStr = "difb(sin(x))";
			TestCommonTools.consolePrintTestSynStart(366, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0367() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
			String expStr = "diff(sin(x),2,3,4)";
			TestCommonTools.consolePrintTestSynStart(367, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0368() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS";
			String expStr = "difb(sin(x),2,3,4)";
			TestCommonTools.consolePrintTestSynStart(368, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0369() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED";
			String expStr = "diff(sin(2), pi, 2)";
			TestCommonTools.consolePrintTestSynStart(369, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0370() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED";
			String expStr = "difb(sin(2), pi, 2)";
			TestCommonTools.consolePrintTestSynStart(370, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0371() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "LEXICAL_ERROR_HAS_BEEN_FOUND + ERRORS_HAVE_BEEN_FOUND + WAS_EXPECTING";
			String expStr = "sin(";
			TestCommonTools.consolePrintTestSynStart(371, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND) && errorMessage.Contains(stringResources.ERRORS_HAVE_BEEN_FOUND) && errorMessage.Contains(stringResources.WAS_EXPECTING))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0372() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "NO_ERRORS_DETECTED";
			String expStr = "sin(pi)";
			TestCommonTools.consolePrintTestSynStart(372, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0373() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "ERRORS_HAVE_BEEN_FOUND";
			String expStr = "sin(2,3)";
			TestCommonTools.consolePrintTestSynStart(373, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.ERRORS_HAVE_BEEN_FOUND))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0374() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "Function name    1fa";
			TestCommonTools.consolePrintTestSynStart(374, expStr);
			Function f = new Function("1fa","2*x", "x");
			String msg = f.getErrorMessage();
			Expression e = new Expression("f(1)", f);
			bool reg = false;
			bool syn = e.checkSyntax();
			StringResources stringResources = StringModel.getStringResources();
			if (syn == reg && msg.Contains(stringResources.INVALID_FUNCTION_NAME) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0375() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x()=y+z";
			TestCommonTools.consolePrintTestSynStart(375, expStr);
			Constant x = new Constant(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			StringResources stringResources = StringModel.getStringResources();
			if (syn == reg && msg.Contains(stringResources.INVALID_CONSTANT_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0376() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(1,2,3)=y+z";
			TestCommonTools.consolePrintTestSynStart(376, expStr);
			Constant x = new Constant(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			StringResources stringResources = StringModel.getStringResources();
			if (syn == reg && msg.Contains(stringResources.INVALID_CONSTANT_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0377() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(=y+z";
			TestCommonTools.consolePrintTestSynStart(377, expStr);
			Constant x = new Constant(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			StringResources stringResources = StringModel.getStringResources();
			if (syn == reg && msg.Contains(stringResources.INVALID_CONSTANT_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0378() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f=y+z";
			TestCommonTools.consolePrintTestSynStart(378, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
			StringResources stringResources = StringModel.getStringResources();
			if (syn == reg && msg.Contains(stringResources.INVALID_FUNCTION_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0379() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f()=y+z";
			TestCommonTools.consolePrintTestSynStart(379, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
			StringResources stringResources = StringModel.getStringResources();
			if (syn == reg && msg.Contains(stringResources.INVALID_FUNCTION_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0380() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(1,2,3)=y+z";
			TestCommonTools.consolePrintTestSynStart(380, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
			StringResources stringResources = StringModel.getStringResources();
			if (syn == reg && msg.Contains(stringResources.INVALID_FUNCTION_DEFINITION) && msg.Contains(stringResources.PATTERN_DOES_NOT_MATCH) && msg.Contains(stringResources.PATTERN_EXAMPLES))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0381() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Argument forceDependent = true - #1";
			String expStr = "x";
			TestCommonTools.consolePrintTestSynStart(380, testDescr + " " + expStr);
			Argument x = new Argument(expStr, true);
			Expression e = new Expression("x", x);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg && x.getArgumentName().Equals("x") && x.getArgumentType() == Argument.FREE_ARGUMENT)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0382() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Argument forceDependent = true - #2";
			String expStr = "x = 2";
			TestCommonTools.consolePrintTestSynStart(381, testDescr + " " + expStr);
			Argument x = new Argument(expStr, true);
			Expression e = new Expression("x", x);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg && x.getArgumentName().Equals("x") && x.getArgumentType() == Argument.DEPENDENT_ARGUMENT && x.getArgumentValue() == 2)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0383() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Argument forceDependent = false - #1";
			String expStr = "x = 2";
			TestCommonTools.consolePrintTestSynStart(382, testDescr + " " + expStr);
			Argument x = new Argument(expStr, false);
			Expression e = new Expression("x", x);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg && x.getArgumentName().Equals("x") && x.getArgumentType() == Argument.FREE_ARGUMENT && x.getArgumentValue() == 2)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0384() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Argument forceDependent = false - #2";
			String expStr = "x = 2*y";
			TestCommonTools.consolePrintTestSynStart(383, testDescr + " " + expStr);
			Argument y = new Argument("y = 1");
			Argument x = new Argument(expStr, false, y);
			Expression e = new Expression("x", x);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (syn == reg && x.getArgumentName().Equals("x") && x.getArgumentType() == Argument.DEPENDENT_ARGUMENT && x.getArgumentValue() == 2)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0385() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Argument forceDependent = true - #3";
			String expStr = "x( = 2)";
			TestCommonTools.consolePrintTestSynStart(384, testDescr + " " + expStr);
			Argument x = new Argument(expStr);
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = x.checkSyntax();
			mXparser.consolePrintln(x.getErrorMessage() + " = " + syn);
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0386() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE";
			String expStr = "2 pi*sin(pi)";
			TestCommonTools.consolePrintTestSynStart(386, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			e.disableImpliedMultiplicationMode();
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0387() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication with blank spaces";
			String expStr = "2 pi*sin(pi)";
			TestCommonTools.consolePrintTestSynStart(387, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			e.enableImpliedMultiplicationMode();
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0388() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Division symbol, Central and Eastern Europe";
			String expStr = "4:2";
			TestCommonTools.consolePrintTestSynStart(388, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0389() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Division symbol, Central and Eastern Europe";
			String expStr = "4.0:-2";
			TestCommonTools.consolePrintTestSynStart(389, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0390() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Division symbol, Central and Eastern Europe";
			String expStr = "pi:e";
			TestCommonTools.consolePrintTestSynStart(390, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0391() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Division symbol, Central and Eastern Europe";
			String expStr = "sin(pi:e)";
			TestCommonTools.consolePrintTestSynStart(391, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0392() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Division symbol, Central and Eastern Europe";
			String expStr = "sin(pi:)";
			TestCommonTools.consolePrintTestSynStart(392, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0393() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Division symbol, Central and Eastern Europe";
			String expStr = "sin(:e)";
			TestCommonTools.consolePrintTestSynStart(392, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0394() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NAND";
			String expStr = "4@~&2";
			TestCommonTools.consolePrintTestSynStart(394, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0395() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NAND";
			String expStr = "4.0@~&-2";
			TestCommonTools.consolePrintTestSynStart(395, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0396() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NAND";
			String expStr = "pi@~&e";
			TestCommonTools.consolePrintTestSynStart(396, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0397() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NAND";
			String expStr = "sin(pi@~&e)";
			TestCommonTools.consolePrintTestSynStart(397, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0398() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NAND";
			String expStr = "sin(pi@~&)";
			TestCommonTools.consolePrintTestSynStart(398, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0399() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NAND";
			String expStr = "sin(@~&e)";
			TestCommonTools.consolePrintTestSynStart(399, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0400() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NOR";
			String expStr = "4@~|2";
			TestCommonTools.consolePrintTestSynStart(400, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0401() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NOR";
			String expStr = "4.0@~|-2";
			TestCommonTools.consolePrintTestSynStart(401, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0402() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NOR";
			String expStr = "pi@~|e";
			TestCommonTools.consolePrintTestSynStart(402, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0403() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NOR";
			String expStr = "sin(pi@~|e)";
			TestCommonTools.consolePrintTestSynStart(403, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn404() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NOR";
			String expStr = "sin(pi@~|)";
			TestCommonTools.consolePrintTestSynStart(404, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0405() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise NOR";
			String expStr = "sin(@~|e)";
			TestCommonTools.consolePrintTestSynStart(405, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0406() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise XNOR";
			String expStr = "4@~^2";
			TestCommonTools.consolePrintTestSynStart(406, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0407() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise XNOR";
			String expStr = "4.0@~^-2";
			TestCommonTools.consolePrintTestSynStart(407, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0408() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise XNOR";
			String expStr = "pi@~^e";
			TestCommonTools.consolePrintTestSynStart(408, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0409() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise XNOR";
			String expStr = "sin(pi@~^e)";
			TestCommonTools.consolePrintTestSynStart(409, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn410() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise XNOR";
			String expStr = "sin(pi@~^)";
			TestCommonTools.consolePrintTestSynStart(410, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0411() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Bitwise XNOR";
			String expStr = "sin(@~^e)";
			TestCommonTools.consolePrintTestSynStart(411, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0412() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Integer division";
			String expStr = "4\\2";
			TestCommonTools.consolePrintTestSynStart(412, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0413() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Integer division";
			String expStr = "4.0\\-2";
			TestCommonTools.consolePrintTestSynStart(413, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0414() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Integer division";
			String expStr = "pi\\e";
			TestCommonTools.consolePrintTestSynStart(414, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0415() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Integer division";
			String expStr = "sin(pi\\e)";
			TestCommonTools.consolePrintTestSynStart(415, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = true;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.NO_ERRORS_DETECTED))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn416() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Integer division";
			String expStr = "sin(pi\\)";
			TestCommonTools.consolePrintTestSynStart(416, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testSyn0417() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String testDescr = "Integer division";
			String expStr = "sin(\\e)";
			TestCommonTools.consolePrintTestSynStart(417, testDescr + " " + expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			StringResources stringResources = StringModel.getStringResources();
			String errorMessage = e.getErrorMessage();
			if (syn == reg && errorMessage.Contains(stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND))
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
    }
}