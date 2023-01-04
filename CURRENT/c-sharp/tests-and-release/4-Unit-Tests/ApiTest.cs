/*
 * @(#)ApiTest.cs        5.2.0    2023-01-04
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2022-05-22
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2022 Mariusz Gromada - All rights reserved
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
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned the
 * tasks. For example, the number of workstations may refer to the number
 * of software developers, engineers, architects, scientists, and other
 * professionals who use the PRODUCT on your behalf. The number of
 * workstations is not the number of copies of your end-product that you
 * distribute to your end-users.
 *
 * By purchasing the COMMERCIAL LICENSE, you only pay for the number of
 * workstations, while the number of copies of your final product
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
using System.Collections.Generic;
using System.IO;
using System.Threading;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using org.mariuszgromada.math.mxparser.mathcollection;
using org.mariuszgromada.math.mxparser.parsertokens;

namespace org.mariuszgromada.math.mxparser.test {
	/**
	 * Unit tests covering API
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
	 * @version        5.1.0
	 *
	 */
	[TestClass]
    public class ApiTest {
		[TestMethod]
		public void testApi0000() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Expression(), getExpressionString()";
			TestCommonTools.consolePrintTestApiStart(0, testDescr);
			Expression e = new Expression();
			if (e.getExpressionString().Equals("")
			&& e.getArgumentsNumber() == 0
			&& e.getConstantsNumber() == 0
			&& e.getFunctionsNumber() == 0)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0001() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getExpressionString(), getArgumentsNumber()";
			TestCommonTools.consolePrintTestApiStart(1, testDescr);
			Argument a5 = new Argument("a5",5);
			Argument a4 = new Argument("a4",4);
			Argument a3 = new Argument("a3",3);
			Argument a2 = new Argument("a2",2);
			Argument a1 = new Argument("a1",1);
			Expression e = new Expression("a1+c2", a1, a2, a3, a4, a5);
			if (e.getExpressionString().Equals("a1+c2")
			&& e.getArgumentsNumber() == 5
			&& e.getConstantsNumber() == 0
			&& e.getFunctionsNumber() == 0)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0002() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getExpressionString(), getArgumentsNumber(), getFunctionsNumber()";
			TestCommonTools.consolePrintTestApiStart(2, testDescr);
			Argument a5 = new Argument("a5",5);
			Argument a4 = new Argument("a4",4);
			Argument a3 = new Argument("a3",3);
			Argument a2 = new Argument("a2",2);
			Argument a1 = new Argument("a1",1);
			Function f4 = new Function("f4","4","x");
			Function f3 = new Function("f3","3","x");
			Function f2 = new Function("f2","2","x");
			Function f1 = new Function("f1","1","x");
			Expression e = new Expression("a1+c2", a1, f1, a2, f2, a3, a4, f3, a5, f4);
			if (e.getExpressionString().Equals("a1+c2")
			&& e.getArgumentsNumber() == 5
			&& e.getConstantsNumber() == 0
			&& e.getFunctionsNumber() == 4)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0003() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getExpressionString(), getArgumentsNumber(), getFunctionsNumber()";
			TestCommonTools.consolePrintTestApiStart(3, testDescr);
			Argument a5 = new Argument("a5",5);
			Argument a4 = new Argument("a4",4);
			Argument a3 = new Argument("a3",3);
			Argument a2 = new Argument("a2",2);
			Argument a1 = new Argument("a1",1);
			Function f4 = new Function("f4","4","x");
			Function f3 = new Function("f3","3","x");
			Function f2 = new Function("f2","2","x");
			Function f1 = new Function("f1","1","x");
			Constant c5 = new Constant("c5",5);
			Constant c2 = new Constant("c2",2);
			Constant c1 = new Constant("c1",1);
			Expression e = new Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
			if (e.getExpressionString().Equals("a1+c2")
			&& e.getArgumentsNumber() == 5
			&& e.getConstantsNumber() == 3
			&& e.getFunctionsNumber() == 4)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0004() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "setExpressionString(), getExpressionString(), clearExpressionString()";
			TestCommonTools.consolePrintTestApiStart(4, testDescr);
			Argument a5 = new Argument("a5",5);
			Argument a4 = new Argument("a4",4);
			Argument a3 = new Argument("a3",3);
			Argument a2 = new Argument("a2",2);
			Argument a1 = new Argument("a1",1);
			Function f4 = new Function("f4","4","x");
			Function f3 = new Function("f3","3","x");
			Function f2 = new Function("f2","2","x");
			Function f1 = new Function("f1","1","x");
			Constant c5 = new Constant("c5",5);
			Constant c2 = new Constant("c2",2);
			Constant c1 = new Constant("c1",1);
			Expression e = new Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
			bool syn1 = e.checkSyntax();
			e.setExpressionString("c2+a1");
			bool syn2 = e.getSyntaxStatus();
			bool syn3 = e.checkSyntax();
			String s1 = e.getExpressionString();
			bool syn4 = e.getSyntaxStatus();
			bool syn5 = e.checkSyntax();
			e.clearExpressionString();
			bool syn6 = e.getSyntaxStatus();
			bool syn7 = e.checkSyntax();
			String s2 = e.getExpressionString();
			bool syn8 = e.getSyntaxStatus();
			if (s1.Equals("c2+a1")
			&& s2.Equals("")
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn3 == Expression.NO_SYNTAX_ERRORS
			&& syn4 == Expression.NO_SYNTAX_ERRORS
			&& syn5 == Expression.NO_SYNTAX_ERRORS
			&& syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn7 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn8 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0005() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "setDescription(), getDescription(), clearDescription()";
			TestCommonTools.consolePrintTestApiStart(5, testDescr);
			Argument a5 = new Argument("a5",5);
			Argument a4 = new Argument("a4",4);
			Argument a3 = new Argument("a3",3);
			Argument a2 = new Argument("a2",2);
			Argument a1 = new Argument("a1",1);
			Function f4 = new Function("f4","4","x");
			Function f3 = new Function("f3","3","x");
			Function f2 = new Function("f2","2","x");
			Function f1 = new Function("f1","1","x");
			Constant c5 = new Constant("c5",5);
			Constant c2 = new Constant("c2",2);
			Constant c1 = new Constant("c1",1);
			Expression e = new Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
			e.setExpressionString("c1+a2");
			bool syn1 = e.checkSyntax();
			e.setDescription("opis");
			String s1 = e.getDescription();
			e.clearDescription();
			String s2 = e.getDescription();
			bool syn2 = e.getSyntaxStatus();
			if (s1.Equals("opis")
			&& s2.Equals("")
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.NO_SYNTAX_ERRORS
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0006() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "setVerboseMode(), getVerboseMode(), setSilentMode()";
			TestCommonTools.consolePrintTestApiStart(6, testDescr);
			Argument a5 = new Argument("a5",5);
			Argument a4 = new Argument("a4",4);
			Argument a3 = new Argument("a3",3);
			Argument a2 = new Argument("a2",2);
			Argument a1 = new Argument("a1",1);
			Function f4 = new Function("f4","4","x");
			Function f3 = new Function("f3","3","x");
			Function f2 = new Function("f2","2","x");
			Function f1 = new Function("f1","1","x");
			Constant c5 = new Constant("c5",5);
			Constant c2 = new Constant("c2",2);
			Constant c1 = new Constant("c1",1);
			Expression e = new Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
			e.setExpressionString("c1+a2");
			bool syn1 = e.checkSyntax();
			bool b1 = e.getVerboseMode();
			e.setVerboseMode();
			bool b2 = e.getVerboseMode();
			e.setSilentMode();
			bool b3 = e.getVerboseMode();
			bool syn2 = e.getSyntaxStatus();
			if (b1 == false
			&& b2 == true
			&& b3 == false
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.NO_SYNTAX_ERRORS
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0007() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getRecursiveMode()";
			TestCommonTools.consolePrintTestApiStart(7, testDescr);
			Function fa = new Function("f(x,y)=sin(x)+cos(y)");
			Function fb = new Function("f(x,y)=sin(x)+cos(y)+f(1,2)");
			bool syn1 = fa.checkSyntax();
			bool syn2 = fb.checkSyntax();
			bool b1 = fa.getRecursiveMode();
			bool b2 = fb.getRecursiveMode();
			if (b1 == false
			&& b2 == true
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.NO_SYNTAX_ERRORS
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0008() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Expression(String expressionString)";
			TestCommonTools.consolePrintTestApiStart(8, testDescr);
			Expression e = new Expression("1+2");
			if (e.getExpressionString().Equals("1+2")
			&& e.getArgumentsNumber() == 0
			&& e.getConstantsNumber() == 0
			&& e.getFunctionsNumber() == 0)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0009() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Expression(String expressionString)";
			TestCommonTools.consolePrintTestApiStart(9, testDescr);
			Argument a3 = new Argument("a3",3);
			Argument a2 = new Argument("a2",2);
			Argument a1 = new Argument("a1",1);
			Expression e = new Expression("1+2", a1, a2, a3);
			if (e.getExpressionString().Equals("1+2")
			&& e.getArgumentsNumber() == 3
			&& e.getConstantsNumber() == 0
			&& e.getFunctionsNumber() == 0)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0010() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "addArguments(Argument... arguments), addArguments( List<Argument> argumentsList), defineArguments(String... argumentsNames), defineArgument(String argumentName, double argumentValue)";
			TestCommonTools.consolePrintTestApiStart(10, testDescr);
			Argument a5 = new Argument("a5",5);
			Argument a4 = new Argument("a4",4);
			Argument a3 = new Argument("a3",3);
			Argument a2 = new Argument("a2",2);
			Argument a1 = new Argument("a1",1);
			Argument a7 = new Argument("a7",7);
			Argument a6 = new Argument("a6",6);
			Expression e = new Expression("1+2");
			bool syn1 = e.checkSyntax();
			e.addDefinitions(a6, a7);
			bool syn2 = e.getSyntaxStatus();
			bool syn3 = e.checkSyntax();
			e.addDefinitions(a1, a2, a3, a4, a5);
			bool syn4 = e.getSyntaxStatus();
			bool syn5 = e.checkSyntax();
			e.defineArguments("x1", "x2", "x3");
			bool syn6 = e.getSyntaxStatus();
			bool syn7 = e.checkSyntax();
			e.defineArgument("x", 1);
			bool syn8 = e.getSyntaxStatus();
			if (e.getExpressionString().Equals("1+2")
			&& e.getArgumentsNumber() == 11
			&& e.getConstantsNumber() == 0
			&& e.getFunctionsNumber() == 0
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn3 == Expression.NO_SYNTAX_ERRORS
			&& syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn5 == Expression.NO_SYNTAX_ERRORS
			&& syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn7 == Expression.NO_SYNTAX_ERRORS
			&& syn8 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0011() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "int getArgumentIndex(String argumentName), Argument getArgument(String argumentName), getArgument(int argumentIndex), getArgumentsNumber()";
			TestCommonTools.consolePrintTestApiStart(11, testDescr);
			Argument a5 = new Argument("a5",5);
			Argument a4 = new Argument("a4",4);
			Argument a3 = new Argument("a3",3);
			Argument a2 = new Argument("a2",2);
			Argument a1 = new Argument("a1",1);
			Argument a7 = new Argument("a7",7);
			Argument a6 = new Argument("a6",6);
			Expression e = new Expression("1+2");
			e.addDefinitions(a6, a7);
			e.addDefinitions(a1, a2, a3, a4, a5);
			e.defineArguments("x1", "x2", "x3");
			e.defineArgument("x", 1);
			bool syn1 = e.checkSyntax();
			int i1 = e.getArgumentIndex("asdsa"); //-1
			int i2 = e.getArgumentIndex("x1"); //7
			Argument A1 = e.getArgument("asasas"); //null
			Argument A2 = e.getArgument("a2"); //a2
			Argument A3 = e.getArgument(-1); //null
			Argument A4 = e.getArgument(23);//null
			Argument A5 = e.getArgument(1);//a7
			int n1 = e.getArgumentsNumber();//11
			bool syn2 = e.getSyntaxStatus();
			if (i1 == -1
			&& i2 == 7
			&& A1 == null
			&& A2 == a2
			&& A3 == null
			&& A4 == null
			&& A5 == a7
			&& n1 == 11
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.NO_SYNTAX_ERRORS
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0012() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "setArgumentValue(), getArgumentValue()";
			TestCommonTools.consolePrintTestApiStart(12, testDescr);
			Argument a5 = new Argument("a5",5);
			Argument a4 = new Argument("a4",4);
			Argument a3 = new Argument("a3",3);
			Argument a2 = new Argument("a2",2);
			Argument a1 = new Argument("a1",1);
			Argument a7 = new Argument("a7",7);
			Argument a6 = new Argument("a6",6);
			Expression e = new Expression("1+2");
			e.addDefinitions(a6, a7);
			e.addDefinitions(a1, a2, a3, a4, a5);
			e.defineArguments("x1", "x2", "x3");
			e.defineArgument("x", 1);
			bool syn1 = e.checkSyntax();
			double d1 = e.getArgumentValue("a1");
			bool syn2 = e.getSyntaxStatus();
			e.setArgumentValue("asds", 1);
			bool syn3 = e.getSyntaxStatus();
			bool syn4 = e.checkSyntax();
			e.setArgumentValue("a1", 10);
			syn4 = e.getSyntaxStatus();
			double d2 = e.getArgumentValue("asdfasdf");
			double d3 = e.getArgumentValue("a1");
			bool syn5 = e.getSyntaxStatus();
			if (d1 == 1
			&& Double.IsNaN(d2)
			&& d3 == 10
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.NO_SYNTAX_ERRORS
			&& syn3 == Expression.NO_SYNTAX_ERRORS
			&& syn4 == Expression.NO_SYNTAX_ERRORS
			&& syn5 == Expression.NO_SYNTAX_ERRORS
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0013() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "removeArguments(String... argumentsNames), removeArguments(Argument... arguments), removeAllArguments()";
			TestCommonTools.consolePrintTestApiStart(13, testDescr);
			Argument a5 = new Argument("a5",5);
			Argument a4 = new Argument("a4",4);
			Argument a3 = new Argument("a3",3);
			Argument a2 = new Argument("a2",2);
			Argument a1 = new Argument("a1",1);
			Argument a7 = new Argument("a7",7);
			Argument a6 = new Argument("a6",6);
			Expression e = new Expression("1+2");
			e.addDefinitions(a6, a7);
			e.addDefinitions(a1, a2, a3, a4, a5);
			e.defineArguments("x1", "x2", "x3");
			e.defineArgument("x", 1);
			e.setExpressionString("1+2");
			bool syn1 = e.checkSyntax();
			int n1 = e.getArgumentsNumber();
			e.removeArguments("asfdf");
			bool syn2 = e.getSyntaxStatus();
			int n2 = e.getArgumentsNumber();
			e.removeArguments("x1", "x2");
			int n3 = e.getArgumentsNumber();
			bool syn3 = e.checkSyntax();
			e.removeArguments(a3);
			int n4 = e.getArgumentsNumber();
			e.removeArguments(a1, a2);
			bool syn4 = e.getSyntaxStatus();
			int n5 = e.getArgumentsNumber();
			bool syn5 = e.checkSyntax();
			e.removeAllArguments();
			int n6 = e.getArgumentsNumber();
			bool syn6 = e.getSyntaxStatus();
			if (n2 == n1
			&& n2 - n3 == 2
			&& n3 - n4 == 1
			&& n4 - n5 == 2
			&& n6 == 0
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn3 == Expression.NO_SYNTAX_ERRORS
			&& syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn5 == Expression.NO_SYNTAX_ERRORS
			&& syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0014() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "addConstants(Constant... constants), addConstants( List<Constant> constantsList), defineConstant(String constantName, double constantValue)";
			TestCommonTools.consolePrintTestApiStart(14, testDescr);
			Constant c3 = new Constant("c3",3);
			Constant c2 = new Constant("c2",2);
			Constant c1 = new Constant("c1",1);
			Constant c6 = new Constant("c6",6);
			Constant c5 = new Constant("c5",5);
			Expression e = new Expression("1+2", new Constant("a=5"));
			bool syn1 = e.checkSyntax();
			e.addDefinitions(c5, c6);
			bool syn2 = e.getSyntaxStatus();
			bool syn3 = e.checkSyntax();
			e.addDefinitions(c1, c2, c3, c5, c6);
			bool syn4 = e.getSyntaxStatus();
			bool syn5 = e.checkSyntax();
			e.defineConstant("cx1", 1);
			e.removeDefinitions(c5, c6);
			bool syn6 = e.checkSyntax();
			e.removeDefinitions(c5, c6);
			if (e.getExpressionString().Equals("1+2")
			&& e.getArgumentsNumber() == 0
			&& e.getConstantsNumber() == 5
			&& e.getFunctionsNumber() == 0
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn3 == Expression.NO_SYNTAX_ERRORS
			&& syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn5 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn6 == Expression.NO_SYNTAX_ERRORS
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0015() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getConstantIndex(String constantName), getConstant(String constantName), getConstant(int constantIndex), getConstantsNumber()";
			TestCommonTools.consolePrintTestApiStart(15, testDescr);
			Constant c3 = new Constant("c3",3);
			Constant c2 = new Constant("c2",2);
			Constant c1 = new Constant("c1",1);
			Expression e = new Expression("1+2", new Constant("a=5"));
			e.addDefinitions(c1, c2, c3);
			e.defineConstant("cx1", 1);
			bool syn1 = e.checkSyntax();
			int i1 = e.getConstantIndex("asdsa"); //-1
			int i2 = e.getConstantIndex("c6"); //-1
			Constant C1 = e.getConstant("asasas"); //null
			Constant C2 = e.getConstant("c1"); //c1
			Constant C3 = e.getConstant(-1); //null
			Constant C4 = e.getConstant(23);//null
			Constant C5 = e.getConstant(1);//c1
			int n1 = e.getConstantsNumber();//5
			bool syn2 = e.getSyntaxStatus();
			if (i1 == -1
			&& i2 == -1
			&& C1 == null
			&& C2 == c1
			&& C3 == null
			&& C4 == null
			&& C5 == c1
			&& n1 == 5
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.NO_SYNTAX_ERRORS
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0016() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "removeConstants(String... constantsNames), removeConstants(Constant... constants), removeAllConstants()";
			TestCommonTools.consolePrintTestApiStart(16, testDescr);
			Constant c3 = new Constant("c3",3);
			Constant c2 = new Constant("c2",2);
			Constant c1 = new Constant("c1",1);
			Expression e = new Expression("1+2", new Constant("a=5"));
			e.addDefinitions(c1, c2, c3);
			e.defineConstant("cx1", 1);
			e.defineConstant("cx2", 1);
			e.setExpressionString("1+2");
			bool syn1 = e.checkSyntax();
			int n1 = e.getConstantsNumber();
			e.removeConstants("asfdf");
			bool syn2 = e.getSyntaxStatus();
			int n2 = e.getConstantsNumber();
			e.removeConstants("cx1", "cx2");
			int n3 = e.getConstantsNumber();
			bool syn3 = e.checkSyntax();
			e.removeConstants(c1);
			int n4 = e.getConstantsNumber();
			e.removeConstants(c2, c3);
			bool syn4 = e.getSyntaxStatus();
			int n5 = e.getConstantsNumber();
			bool syn5 = e.checkSyntax();
			e.removeAllConstants();
			int n6 = e.getConstantsNumber();
			bool syn6 = e.getSyntaxStatus();
			if (n2 == n1
			&& n2 - n3 == 2
			&& n3 - n4 == 1
			&& n4 - n5 == 2
			&& n6 == 0
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn3 == Expression.NO_SYNTAX_ERRORS
			&& syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn5 == Expression.NO_SYNTAX_ERRORS
			&& syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0017() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "addFunctions(Function... functions), addFunctions( List<Function> functionsList), defineFunction(String functionName, String  functionExpressionString,...";
			TestCommonTools.consolePrintTestApiStart(17, testDescr);
			Function f4 = new Function("f4","4","x");
			Function f3 = new Function("f3","3","x");
			Function f2 = new Function("f2","2","x");
			Function f1 = new Function("f1","1","x");
			Function f7 = new Function("f7","7","x");
			Function f6 = new Function("f6","6","x");
			Expression e = new Expression("1+2");
			bool syn1 = e.checkSyntax();
			e.addDefinitions(f6, f7);
			bool syn2 = e.getSyntaxStatus();
			bool syn3 = e.checkSyntax();
			e.addDefinitions(f1, f2, f3, f4, f6);
			bool syn4 = e.getSyntaxStatus();
			e.removeDefinitions(f6);
			bool syn5 = e.checkSyntax();
			e.defineFunction("ff1", "1", "x");
			bool syn6 = e.getSyntaxStatus();
			if (e.getExpressionString().Equals("1+2")
			&& e.getArgumentsNumber() == 0
			&& e.getConstantsNumber() == 0
			&& e.getFunctionsNumber() == 7
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn3 == Expression.NO_SYNTAX_ERRORS
			&& syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn5 == Expression.NO_SYNTAX_ERRORS
			&& syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0018() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getFunctionIndex(String functionName), getFunction(String functionName), getFunction(int functionIndex), getFunctionsNumber()";
			TestCommonTools.consolePrintTestApiStart(18, testDescr);
			Function f4 = new Function("f4","4","x");
			Function f3 = new Function("f3","3","x");
			Function f2 = new Function("f2","2","x");
			Function f1 = new Function("f1","1","x");
			Function f7 = new Function("f7","7","x");
			Function f6 = new Function("f6","6","x");
			Expression e = new Expression("1+2");
			e.addDefinitions(f6, f7);
			e.addDefinitions(f1, f2, f3, f4, f6);
			e.removeDefinitions(f6);
			e.defineFunction("ff1", "1", "x");
			bool syn1 = e.checkSyntax();
			int i1 = e.getFunctionIndex("asdsa"); //-1
			int i2 = e.getFunctionIndex("f7"); //0
			Function F1 = e.getFunction("asasas"); //null
			Function F2 = e.getFunction("f1"); //f1
			Function F3 = e.getFunction(-1); //null
			Function F4 = e.getFunction(23);//null
			Function F5 = e.getFunction(0);//f7
			int n1 = e.getFunctionsNumber();//7
			bool syn2 = e.getSyntaxStatus();
			if (i1 == -1
			&& i2 == 0
			&& F1 == null
			&& F2 == f1
			&& F3 == null
			&& F4 == null
			&& F5 == f7
			&& n1 == 7
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.NO_SYNTAX_ERRORS
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0019() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "removeFunctions(String... functionsNames), removeFunctions(Function... functions), removeAllFunctions()";
			TestCommonTools.consolePrintTestApiStart(19, testDescr);
			Function f4 = new Function("f4","4","x");
			Function f3 = new Function("f3","3","x");
			Function f2 = new Function("f2","2","x");
			Function f1 = new Function("f1","1","x");
			Function f7 = new Function("f7","7","x");
			Function f6 = new Function("f6","6","x");
			Expression e = new Expression("1+2");
			e.addDefinitions(f6, f7);
			e.addDefinitions(f1, f2, f3, f4, f6);
			e.removeDefinitions(f6);
			e.defineFunction("ff1", "1", "x");
			e.setExpressionString("1+2");
			bool syn1 = e.checkSyntax();
			int n1 = e.getFunctionsNumber();
			e.removeFunctions("asfdf");
			bool syn2 = e.getSyntaxStatus();
			int n2 = e.getFunctionsNumber();
			e.removeFunctions("f1", "f2");
			int n3 = e.getFunctionsNumber();
			bool syn3 = e.checkSyntax();
			e.removeFunctions(f3);
			int n4 = e.getFunctionsNumber();
			e.removeFunctions(f6, f7);
			bool syn4 = e.getSyntaxStatus();
			int n5 = e.getFunctionsNumber();
			bool syn5 = e.checkSyntax();
			e.removeAllFunctions();
			int n6 = e.getFunctionsNumber();
			bool syn6 = e.getSyntaxStatus();
			if (n2 == n1
			&& n2 - n3 == 2
			&& n3 - n4 == 1
			&& n4 - n5 == 2
			&& n6 == 0
			&& syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn3 == Expression.NO_SYNTAX_ERRORS
			&& syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			&& syn5 == Expression.NO_SYNTAX_ERRORS
			&& syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0020() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "double calculate(), getHelp(), getHelp(String word), getLicense()";
			TestCommonTools.consolePrintTestApiStart(20, testDescr);
			Function f4 = new Function("f4","4","x");
			Function f3 = new Function("f3","3","x");
			Function f2 = new Function("f2","2","x");
			Function f1 = new Function("f1","1","x");
			Function f7 = new Function("f7","7","x");
			Function f6 = new Function("f6","6","x");
			Expression e = new Expression("1+2");
			e.addDefinitions(f6, f7);
			e.addDefinitions(f1, f2, f3, f4, f6);
			e.removeDefinitions(f6);
			e.defineFunction("ff1", "1", "x");
			e.setExpressionString("1+2");
			e.removeFunctions("asfdf");
			e.removeFunctions("f1", "f2");
			e.removeFunctions(f3);
			e.removeFunctions(f6, f7);
			e.removeAllFunctions();
			bool syn1 = e.checkSyntax();
			double d1 = e.calculate();
			bool syn2 = e.getSyntaxStatus();
			if (syn1 == Expression.NO_SYNTAX_ERRORS
			&& syn2 == Expression.NO_SYNTAX_ERRORS
			&& d1 == 3)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0021() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getCopyOfInitialTokens()";
			TestCommonTools.consolePrintTestApiStart(21, testDescr);
			Expression e = new Expression("1+(2+3)-sin(10)");
			List<Token> tokens = e.getCopyOfInitialTokens();
			mXparser.consolePrintTokens(tokens);
			if (
			(tokens[0].tokenStr.Equals("1")) &&
			(tokens[1].tokenStr.Equals("+")) &&
			(tokens[2].tokenStr.Equals("(")) &&
			(tokens[3].tokenStr.Equals("2")) &&
			(tokens[4].tokenStr.Equals("+")) &&
			(tokens[5].tokenStr.Equals("3")) &&
			(tokens[6].tokenStr.Equals(")")) &&
			(tokens[7].tokenStr.Equals("-")) &&
			(tokens[8].tokenStr.Equals("sin")) &&
			(tokens[9].tokenStr.Equals("(")) &&
			(tokens[10].tokenStr.Equals("10")) &&
			(tokens[11].tokenStr.Equals(")")) &&
			
			(tokens[0].tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
			(tokens[1].tokenTypeId == Operator.TYPE_ID) &&
			(tokens[2].tokenTypeId == ParserSymbol.TYPE_ID) &&
			(tokens[3].tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
			(tokens[4].tokenTypeId == Operator.TYPE_ID) &&
			(tokens[5].tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
			(tokens[6].tokenTypeId == ParserSymbol.TYPE_ID) &&
			(tokens[7].tokenTypeId == Operator.TYPE_ID) &&
			(tokens[8].tokenTypeId == Function1Arg.TYPE_ID) &&
			(tokens[9].tokenTypeId == ParserSymbol.TYPE_ID) &&
			(tokens[10].tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
			(tokens[11].tokenTypeId == ParserSymbol.TYPE_ID) &&
			
			(tokens[0].tokenLevel == 0) &&
			(tokens[1].tokenLevel == 0) &&
			(tokens[2].tokenLevel == 1) &&
			(tokens[3].tokenLevel == 1) &&
			(tokens[4].tokenLevel == 1) &&
			(tokens[5].tokenLevel == 1) &&
			(tokens[6].tokenLevel == 1) &&
			(tokens[7].tokenLevel == 0) &&
			(tokens[8].tokenLevel == 1) &&
			(tokens[9].tokenLevel == 2) &&
			(tokens[10].tokenLevel == 2) &&
			(tokens[11].tokenLevel == 2)
			
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0022() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Invalid tokens, getCopyOfInitialTokens()";
			TestCommonTools.consolePrintTestApiStart(22, testDescr);
			Expression e = new Expression("token1+toke2n*sin(token3-t3^t5)^t45+pi-pie+e");
			e.disableImpliedMultiplicationMode();
			List<Token> tokens = e.getCopyOfInitialTokens();
			mXparser.consolePrintTokens(tokens);
			if (
			(tokens[0].tokenStr.Equals("token1")) &&
			(tokens[1].tokenStr.Equals("+")) &&
			(tokens[2].tokenStr.Equals("toke2n")) &&
			(tokens[3].tokenStr.Equals("*")) &&
			(tokens[4].tokenStr.Equals("sin")) &&
			(tokens[5].tokenStr.Equals("(")) &&
			(tokens[6].tokenStr.Equals("token3")) &&
			(tokens[7].tokenStr.Equals("-")) &&
			(tokens[8].tokenStr.Equals("t3")) &&
			(tokens[9].tokenStr.Equals("^")) &&
			(tokens[10].tokenStr.Equals("t5")) &&
			(tokens[11].tokenStr.Equals(")")) &&
			(tokens[12].tokenStr.Equals("^")) &&
			(tokens[13].tokenStr.Equals("t45")) &&
			(tokens[14].tokenStr.Equals("+")) &&
			(tokens[15].tokenStr.Equals("pi")) &&
			(tokens[16].tokenStr.Equals("-")) &&
			(tokens[17].tokenStr.Equals("pie")) &&
			(tokens[18].tokenStr.Equals("+")) &&
			(tokens[19].tokenStr.Equals("e")) &&
			
			(tokens[0].tokenTypeId == Token.NOT_MATCHED) &&
			(tokens[1].tokenTypeId == Operator.TYPE_ID) &&
			(tokens[2].tokenTypeId == Token.NOT_MATCHED) &&
			(tokens[3].tokenTypeId == Operator.TYPE_ID) &&
			(tokens[4].tokenTypeId == Function1Arg.TYPE_ID) &&
			(tokens[5].tokenTypeId == ParserSymbol.TYPE_ID) &&
			(tokens[6].tokenTypeId == Token.NOT_MATCHED) &&
			(tokens[7].tokenTypeId == Operator.TYPE_ID) &&
			(tokens[8].tokenTypeId == Token.NOT_MATCHED) &&
			(tokens[9].tokenTypeId == Operator.TYPE_ID) &&
			(tokens[10].tokenTypeId == Token.NOT_MATCHED) &&
			(tokens[11].tokenTypeId == ParserSymbol.TYPE_ID) &&
			(tokens[12].tokenTypeId == Operator.TYPE_ID) &&
			(tokens[13].tokenTypeId == Token.NOT_MATCHED) &&
			(tokens[14].tokenTypeId == Operator.TYPE_ID) &&
			(tokens[15].tokenTypeId == ConstantValue.TYPE_ID) &&
			(tokens[16].tokenTypeId == Operator.TYPE_ID) &&
			(tokens[17].tokenTypeId == Token.NOT_MATCHED) &&
			(tokens[18].tokenTypeId == Operator.TYPE_ID) &&
			(tokens[19].tokenTypeId == ConstantValue.TYPE_ID) &&
			
			(tokens[0].tokenLevel == 0) &&
			(tokens[1].tokenLevel == 0) &&
			(tokens[2].tokenLevel == 0) &&
			(tokens[3].tokenLevel == 0) &&
			(tokens[4].tokenLevel == 1) &&
			(tokens[5].tokenLevel == 2) &&
			(tokens[6].tokenLevel == 2) &&
			(tokens[7].tokenLevel == 2) &&
			(tokens[8].tokenLevel == 2) &&
			(tokens[9].tokenLevel == 2) &&
			(tokens[10].tokenLevel == 2) &&
			(tokens[11].tokenLevel == 2) &&
			(tokens[12].tokenLevel == 0) &&
			(tokens[13].tokenLevel == 0) &&
			(tokens[14].tokenLevel == 0) &&
			(tokens[15].tokenLevel == 0) &&
			(tokens[16].tokenLevel == 0) &&
			(tokens[17].tokenLevel == 0) &&
			(tokens[18].tokenLevel == 0) &&
			(tokens[19].tokenLevel == 0)
			
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0023() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function Extension - calculate()";
			TestCommonTools.consolePrintTestApiStart(23, testDescr);
			Function ff = new Function("ff", new FunExt());
			if (ff.calculate(2, 3) == 6) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0024() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "FunctionExtension - setArgumentValue - calculate";
			TestCommonTools.consolePrintTestApiStart(24, testDescr);
			Function ff = new Function("ff", new FunExt());
			ff.setArgumentValue(0, 3);
			ff.setArgumentValue(1, 4);
			if (ff.calculate() == 12) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0025() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "FunctionExtension - parameters";
			TestCommonTools.consolePrintTestApiStart(25, testDescr);
			Function ff = new Function("ff", new FunExt());
			if (
			(ff.getParametersNumber() == 2) &&
			(ff.getFunctionBodyType() == Function.BODY_EXTENDED) &&
			(ff.checkSyntax() == Function.NO_SYNTAX_ERRORS)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0026() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "FunctionExtension - calculate";
			TestCommonTools.consolePrintTestApiStart(26, testDescr);
			Function ff = new Function("ff", new FunExt());
			Argument x = new Argument("x = 5");
			Argument y = new Argument("y = 6");
			if (ff.calculate(x, y) == 30) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0027() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Invalid tokens looks like, getCopyOfInitialTokens()";
			TestCommonTools.consolePrintTestApiStart(27, testDescr);
			Expression e = new Expression("1pi+2pi3+((_d1(a)+(_d^_g)))))");
			List<Token> tokens = e.getCopyOfInitialTokens();
			mXparser.consolePrintTokens(tokens);
			if (
			(tokens[0].tokenStr.Equals("1")) &&
			(tokens[1].tokenStr.Equals("*")) &&
			(tokens[2].tokenStr.Equals("pi")) &&
			(tokens[3].tokenStr.Equals("+")) &&
			(tokens[4].tokenStr.Equals("2")) &&
			(tokens[5].tokenStr.Equals("*")) &&
			(tokens[6].tokenStr.Equals("pi3")) &&
			(tokens[7].tokenStr.Equals("+")) &&
			(tokens[8].tokenStr.Equals("(")) &&
			(tokens[9].tokenStr.Equals("(")) &&
			(tokens[10].tokenStr.Equals("_d1")) &&
			(tokens[11].tokenStr.Equals("(")) &&
			(tokens[12].tokenStr.Equals("a")) &&
			(tokens[13].tokenStr.Equals(")")) &&
			(tokens[14].tokenStr.Equals("+")) &&
			(tokens[15].tokenStr.Equals("(")) &&
			(tokens[16].tokenStr.Equals("_d")) &&
			(tokens[17].tokenStr.Equals("^")) &&
			(tokens[18].tokenStr.Equals("_g")) &&
			(tokens[19].tokenStr.Equals(")")) &&
			(tokens[20].tokenStr.Equals(")")) &&
			(tokens[21].tokenStr.Equals(")")) &&
			(tokens[22].tokenStr.Equals(")")) &&
			(tokens[23].tokenStr.Equals(")")) &&
			
			
			(tokens[10].looksLike.Equals("function")) &&
			(tokens[12].looksLike.Equals("argument")) &&
			(tokens[16].looksLike.Equals("argument")) &&
			(tokens[18].looksLike.Equals("argument"))
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0028() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "checkSyntax()";
			TestCommonTools.consolePrintTestApiStart(28, testDescr);
			Expression e = new Expression("1+2+3+(4+5)+a+b");
			if (
			(e.checkSyntax() == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN) &&
			(e.checkLexSyntax() == Expression.NO_SYNTAX_ERRORS)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0029() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "checkSyntax()";
			TestCommonTools.consolePrintTestApiStart(29, testDescr);
			Expression e = new Expression("1+2+3+(4+5)+a)+b");
			if (
			(e.checkSyntax() == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN) &&
			(e.checkLexSyntax() == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0030() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Tokens to remove, removeBuiltinTokens(), unremoveBuiltinTokens(), getBuiltinTokensToRemove(),";
			TestCommonTools.consolePrintTestApiStart(30, testDescr);
			String t = null;
			mXparser.removeBuiltinTokens("sin");
			mXparser.removeBuiltinTokens("sin");
			mXparser.removeBuiltinTokens("cos");
			mXparser.removeBuiltinTokens("sin");
			mXparser.removeBuiltinTokens("sin", "cos", t, "", "tg");
			mXparser.removeBuiltinTokens(t);
			mXparser.unremoveBuiltinTokens(t);
			mXparser.unremoveBuiltinTokens(t, "");
			mXparser.unremoveBuiltinTokens("sin", "tg");
			String[] tokensToRemove1 = mXparser.getBuiltinTokensToRemove();
			mXparser.unremoveAllBuiltinTokens();
			String[] tokensToRemove2 = mXparser.getBuiltinTokensToRemove();
			if (
			(tokensToRemove1.Length == 1) &&
			(tokensToRemove1[0].Equals("cos")) &&
			(tokensToRemove2.Length == 0)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0031() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Tokens to modify, modifyBuiltinToken(), getBuiltinTokensToModify(), getHelp()";
			TestCommonTools.consolePrintTestApiStart(31, testDescr);
			String u = null;
			mXparser.modifyBuiltinToken("sin", "SIN");
			mXparser.modifyBuiltinToken("cos", "");
			mXparser.modifyBuiltinToken("tan", u);
			mXparser.modifyBuiltinToken(u, u);
			mXparser.modifyBuiltinToken(u, "TAN");
			mXparser.modifyBuiltinToken("tg", "TG", "NEW TG");
			mXparser.modifyBuiltinToken("", "TG", "NEW TG");
			mXparser.modifyBuiltinToken(u, "TG", "NEW TG");
			mXparser.modifyBuiltinToken("sin", "TG", "NEW TG");
			mXparser.modifyBuiltinToken("cos", "COS", "NEW COS");
			mXparser.modifyBuiltinToken("cos", "COS1", "NEW COS1");
			String help = mXparser.getHelp("COS");
			String[,] tokensToModify1 = mXparser.getBuiltinTokensToModify();
			mXparser.unmodifyBuiltinTokens("", u, "SIN", "tg");
			String[,] tokensToModify2 = mXparser.getBuiltinTokensToModify();
			mXparser.unmodifyAllBuiltinTokens();
			String[,] tokensToModify3 = mXparser.getBuiltinTokensToModify();
			if (
			(tokensToModify1.GetLength(0) == 3) && (tokensToModify1.GetLength(1) == 3) &&
			(tokensToModify2.GetLength(0) == 1) && (tokensToModify2.GetLength(1) == 3) &&
			(tokensToModify3.GetLength(0) == 0) &&
			(tokensToModify1[0,0].Equals("sin")) &&
			(tokensToModify1[0,1].Equals("SIN")) &&
			(tokensToModify1[0,2] == null) &&
			(tokensToModify1[1,0].Equals("tg")) &&
			(tokensToModify1[1,1].Equals("TG")) &&
			(tokensToModify1[1,2].Equals("NEW TG")) &&
			(tokensToModify1[2,0].Equals("cos")) &&
			(tokensToModify1[2,1].Equals("COS")) &&
			(tokensToModify1[2,2].Equals("NEW COS")) &&
			(tokensToModify2[0,0].Equals("cos")) &&
			(tokensToModify2[0,1].Equals("COS")) &&
			(tokensToModify2[0,2].Equals("NEW COS")) &&
			(help.Contains("COS(x)"))
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0032() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Recursion counter, setMaxAllowedRecursionDepth(), getMaxAllowedRecursionDepth()";
			TestCommonTools.consolePrintTestApiStart(32, testDescr);
			mXparser.setMaxAllowedRecursionDepth(100);
			int rc100 = mXparser.getMaxAllowedRecursionDepth();
			mXparser.setMaxAllowedRecursionDepth(200);
			int rc200 = mXparser.getMaxAllowedRecursionDepth();
			if ((rc100 == 100) && (rc200 == 200))
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0033() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Override built-in tokens, setToOverrideBuiltinTokens(), setNotToOverrideBuiltinTokens(), checkIfsetToOverrideBuiltinTokens()";
			TestCommonTools.consolePrintTestApiStart(33, testDescr);
			mXparser.setToOverrideBuiltinTokens();
			bool over1 = mXparser.checkIfsetToOverrideBuiltinTokens();
			mXparser.setNotToOverrideBuiltinTokens();
			bool over2 = mXparser.checkIfsetToOverrideBuiltinTokens();
			mXparser.setToOverrideBuiltinTokens();
			bool over3 = mXparser.checkIfsetToOverrideBuiltinTokens();
			mXparser.setNotToOverrideBuiltinTokens();
			bool over4 = mXparser.checkIfsetToOverrideBuiltinTokens();
			if ((over1 == true) && (over2 == false) && (over3 == true) && (over4 == false))
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0034() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getKeyWords()";
			TestCommonTools.consolePrintTestApiStart(34, testDescr);
			List<KeyWord> keyWords = mXparser.getKeyWords("sin ");
			if ((keyWords.Count == 4) &&
			(keyWords[0].wordString.Equals("sin")) &&
			(keyWords[1].wordString.Equals("asin")) &&
			(keyWords[2].wordString.Equals("arsin")) &&
			(keyWords[3].wordString.Equals("arcsin"))
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0035() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getTokenTypeDescription()";
			TestCommonTools.consolePrintTestApiStart(35, testDescr);
			if ((mXparser.getTokenTypeDescription(BinaryRelation.TYPE_ID).Equals(BinaryRelation.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(BitwiseOperator.TYPE_ID).Equals(BitwiseOperator.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(BooleanOperator.TYPE_ID).Equals(BooleanOperator.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(CalculusOperator.TYPE_ID).Equals(CalculusOperator.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(ConstantValue.TYPE_ID).Equals(ConstantValue.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(Function1Arg.TYPE_ID).Equals(Function1Arg.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(Function2Arg.TYPE_ID).Equals(Function2Arg.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(Function3Arg.TYPE_ID).Equals(Function3Arg.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(FunctionVariadic.TYPE_ID).Equals(FunctionVariadic.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(Operator.TYPE_ID).Equals(Operator.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(ParserSymbol.TYPE_ID).Equals(ParserSymbol.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(RandomVariable.TYPE_ID).Equals(RandomVariable.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(Unit.TYPE_ID).Equals(Unit.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(Argument.TYPE_ID).Equals(Argument.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(Constant.TYPE_ID).Equals(Constant.TYPE_DESC)) &&
			(mXparser.getTokenTypeDescription(RecursiveArgument.TYPE_ID_RECURSIVE).Equals(RecursiveArgument.TYPE_DESC_RECURSIVE)) &&
			(mXparser.getTokenTypeDescription(Function.TYPE_ID).Equals(Function.TYPE_DESC))
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0036() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convOthBase2Decimal()";
			TestCommonTools.consolePrintTestApiStart(36, testDescr);
			if (
			(NumberTheory.convOthBase2Decimal("11", 2) == 3.0) &&
			(NumberTheory.convOthBase2Decimal("011", 2) == 3.0) &&
			(NumberTheory.convOthBase2Decimal("000011", 2) == 3.0) &&
			(NumberTheory.convOthBase2Decimal("12", 3) == 5.0) &&
			(NumberTheory.convOthBase2Decimal("012", 3) == 5.0) &&
			(NumberTheory.convOthBase2Decimal("0012", 3) == 5.0) &&
			(NumberTheory.convOthBase2Decimal("123", 4) == 27.0) &&
			(NumberTheory.convOthBase2Decimal("0123", 4) == 27.0) &&
			(NumberTheory.convOthBase2Decimal("00123", 4) == 27.0) &&
			(NumberTheory.convOthBase2Decimal("1234", 5) == 194.0) &&
			(NumberTheory.convOthBase2Decimal("01234", 5) == 194.0) &&
			(NumberTheory.convOthBase2Decimal("001234", 5) == 194.0) &&
			(NumberTheory.convOthBase2Decimal("12345", 6) == 1865.0) &&
			(NumberTheory.convOthBase2Decimal("012345", 6) == 1865.0) &&
			(NumberTheory.convOthBase2Decimal("0012345", 6) == 1865.0) &&
			(NumberTheory.convOthBase2Decimal("123456", 7) == 22875.0) &&
			(NumberTheory.convOthBase2Decimal("0123456", 7) == 22875.0) &&
			(NumberTheory.convOthBase2Decimal("00123456", 7) == 22875.0) &&
			(NumberTheory.convOthBase2Decimal("1234567", 8) == 342391.0) &&
			(NumberTheory.convOthBase2Decimal("01234567", 8) == 342391.0) &&
			(NumberTheory.convOthBase2Decimal("01234567", 8) == 342391.0) &&
			(NumberTheory.convOthBase2Decimal("12345678", 9) == 6053444.0) &&
			(NumberTheory.convOthBase2Decimal("012345678", 9) == 6053444.0) &&
			(NumberTheory.convOthBase2Decimal("0012345678", 9) == 6053444.0) &&
			(NumberTheory.convOthBase2Decimal("123456789", 10) == 123456789.0) &&
			(NumberTheory.convOthBase2Decimal("0123456789", 10) == 123456789.0) &&
			(NumberTheory.convOthBase2Decimal("00123456789", 10) == 123456789.0) &&
			(NumberTheory.convOthBase2Decimal("123456789A", 11) == 2853116705.0) &&
			(NumberTheory.convOthBase2Decimal("0123456789A", 11) == 2853116705.0) &&
			(NumberTheory.convOthBase2Decimal("00123456789A", 11) == 2853116705.0) &&
			(NumberTheory.convOthBase2Decimal("123456789Ab", 12) == 73686780563.0) &&
			(NumberTheory.convOthBase2Decimal("0123456789Ab", 12) == 73686780563.0) &&
			(NumberTheory.convOthBase2Decimal("00123456789Ab", 12) == 73686780563.0) &&
			(NumberTheory.convOthBase2Decimal("123456789AbC", 13) == 2103299351334.0) &&
			(NumberTheory.convOthBase2Decimal("0123456789AbC", 13) == 2103299351334.0) &&
			(NumberTheory.convOthBase2Decimal("00123456789AbC", 13) == 2103299351334.0) &&
			(NumberTheory.convOthBase2Decimal("123456789AbCd", 14) == 65751519677857.0) &&
			(NumberTheory.convOthBase2Decimal("0123456789AbCd", 14) == 65751519677857.0) &&
			(NumberTheory.convOthBase2Decimal("00123456789AbCd", 14) == 65751519677857.0)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0037() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convOthBase2Decimal() - loop";
			TestCommonTools.consolePrintTestApiStart(37, testDescr);
			testResult = true;
			for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
				for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase++) {
					if (NumberTheory.convOthBase2Decimal(NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase), numeralSystemBase) != decimalNumber) {
						testResult = false;
						break;
					}
				}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0038() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convert2Decimal() and other - special cases";
			TestCommonTools.consolePrintTestApiStart(38, testDescr);
			char dc_1 = NumberTheory.digitChar(-1);
			char dc37 = NumberTheory.digitChar(37);
			int di = NumberTheory.digitIndex(' ');
			double dec1 = NumberTheory.convOthBase2Decimal("", 1);
			double decNaN1 = NumberTheory.convOthBase2Decimal("1101", 0);
			double decNaN2 = NumberTheory.convOthBase2Decimal("1101", 37);
			double decNaN3 = NumberTheory.convOthBase2Decimal(null, 3);
			double decNaN4 = NumberTheory.convOthBase2Decimal("", 3);
			double decNaN5 = NumberTheory.convOthBase2Decimal("1234", 4);
			String strNaN1 = NumberTheory.convDecimal2OthBase(Double.NaN, 2);
			String strNaN2 = NumberTheory.convDecimal2OthBase(2, 0);
			String strNaN3 = NumberTheory.convDecimal2OthBase(2, 37);
			if ((dc_1 == '?') &&
			(dc37 == '?') &&
			(di == -1) &&
			(dec1 == 0) &&
			(Double.IsNaN(decNaN1)) &&
			(Double.IsNaN(decNaN2)) &&
			(Double.IsNaN(decNaN3)) &&
			(Double.IsNaN(decNaN4)) &&
			(Double.IsNaN(decNaN5)) &&
			(strNaN1.Equals("NaN")) &&
			(strNaN2.Equals("NaN")) &&
			(strNaN3.Equals("NaN"))
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0039() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convert2Decimal() - loop";
			TestCommonTools.consolePrintTestApiStart(39, testDescr);
			testResult = true;
			for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
				for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase++) {
					if (NumberTheory.convOthBase2Decimal(NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase, 1)) != decimalNumber) {
						testResult = false;
						break;
					}
				}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0040() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convert2Decimal() - loop";
			TestCommonTools.consolePrintTestApiStart(40, testDescr);
			testResult = true;
			for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
				for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase++) {
					if (NumberTheory.convOthBase2Decimal(NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase, 2)) != decimalNumber) {
						testResult = false;
						break;
					}
				}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0041() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convert2Decimal() - loop";
			TestCommonTools.consolePrintTestApiStart(41, testDescr);
			testResult = true;
			for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
				for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase++) {
					if (NumberTheory.convOthBase2Decimal(NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase, 0), numeralSystemBase) != decimalNumber) {
						testResult = false;
						break;
					}
				}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0042() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getNumeralSystemBase()";
			TestCommonTools.consolePrintTestApiStart(42, testDescr);
			if (
			(NumberTheory.getNumeralSystemBase("h.1234567890aBcDeF") == 16) &&
			(NumberTheory.getNumeralSystemBase("o.12345670") == 8) &&
			(NumberTheory.getNumeralSystemBase("b.101010") == 2) &&
			(NumberTheory.getNumeralSystemBase("b1.") == 1) &&
			(NumberTheory.getNumeralSystemBase("b2.01") == 2) &&
			(NumberTheory.getNumeralSystemBase("b3.012") == 3) &&
			(NumberTheory.getNumeralSystemBase("b4.0123") == 4) &&
			(NumberTheory.getNumeralSystemBase("b5.01234") == 5) &&
			(NumberTheory.getNumeralSystemBase("b6.012345") == 6) &&
			(NumberTheory.getNumeralSystemBase("b7.0123456") == 7) &&
			(NumberTheory.getNumeralSystemBase("b8.01234567") == 8) &&
			(NumberTheory.getNumeralSystemBase("b9.012345678") == 9) &&
			(NumberTheory.getNumeralSystemBase("b10.0123456789") == 10) &&
			(NumberTheory.getNumeralSystemBase("b11.0123456789a") == 11) &&
			(NumberTheory.getNumeralSystemBase("b12.0123456789ab") == 12) &&
			(NumberTheory.getNumeralSystemBase("b13.0123456789abc") == 13) &&
			(NumberTheory.getNumeralSystemBase("b14.0123456789abcd") == 14) &&
			(NumberTheory.getNumeralSystemBase("b15.0123456789abcde") == 15) &&
			(NumberTheory.getNumeralSystemBase("b16.0123456789abcdef") == 16) &&
			(NumberTheory.getNumeralSystemBase("b16.0123456789abcdef") == 16) &&
			(NumberTheory.getNumeralSystemBase("b17.0123456789abcdefg") == 17) &&
			(NumberTheory.getNumeralSystemBase("b18.0123456789abcdefgh") == 18) &&
			(NumberTheory.getNumeralSystemBase("b19.0123456789abcdefghi") == 19) &&
			(NumberTheory.getNumeralSystemBase("b20.0123456789abcdefghij") == 20) &&
			(NumberTheory.getNumeralSystemBase("b21.0123456789abcdefghijk") == 21) &&
			(NumberTheory.getNumeralSystemBase("b22.0123456789abcdefghijkl") == 22) &&
			(NumberTheory.getNumeralSystemBase("b23.0123456789abcdefghijklm") == 23) &&
			(NumberTheory.getNumeralSystemBase("b24.0123456789abcdefghijklmn") == 24) &&
			(NumberTheory.getNumeralSystemBase("b25.0123456789abcdefghijklmno") == 25) &&
			(NumberTheory.getNumeralSystemBase("b26.0123456789abcdefghijklmnop") == 26) &&
			(NumberTheory.getNumeralSystemBase("b27.0123456789abcdefghijklmnopq") == 27) &&
			(NumberTheory.getNumeralSystemBase("b28.0123456789abcdefghijklmnopqr") == 28) &&
			(NumberTheory.getNumeralSystemBase("b29.0123456789abcdefghijklmnopqrs") == 29) &&
			(NumberTheory.getNumeralSystemBase("b30.0123456789abcdefghijklmnopqrst") == 30) &&
			(NumberTheory.getNumeralSystemBase("b31.0123456789abcdefghijklmnopqrstu") == 31) &&
			(NumberTheory.getNumeralSystemBase("b32.0123456789abcdefghijklmnopqrstuv") == 32) &&
			(NumberTheory.getNumeralSystemBase("b33.0123456789abcdefghijklmnopqrstuvw") == 33) &&
			(NumberTheory.getNumeralSystemBase("b34.0123456789abcdefghijklmnopqrstuvwx") == 34) &&
			(NumberTheory.getNumeralSystemBase("b35.0123456789abcdefghijklmnopqrstuvwxy") == 35) &&
			(NumberTheory.getNumeralSystemBase("b36.0123456789abcdefghijklmnopqrstuvwxyz") == 36) &&
			(NumberTheory.getNumeralSystemBase("H.001234567890aBcDeF") == 16) &&
			(NumberTheory.getNumeralSystemBase("O.0012345670") == 8) &&
			(NumberTheory.getNumeralSystemBase("B.000101010") == 2) &&
			(NumberTheory.getNumeralSystemBase("B1.111") == 1) &&
			(NumberTheory.getNumeralSystemBase("B2.0101") == 2) &&
			(NumberTheory.getNumeralSystemBase("B3.0012") == 3) &&
			(NumberTheory.getNumeralSystemBase("B4.00123") == 4) &&
			(NumberTheory.getNumeralSystemBase("B5.001234") == 5) &&
			(NumberTheory.getNumeralSystemBase("B6.0012345") == 6) &&
			(NumberTheory.getNumeralSystemBase("B7.00123456") == 7) &&
			(NumberTheory.getNumeralSystemBase("B8.001234567") == 8) &&
			(NumberTheory.getNumeralSystemBase("B9.0012345678") == 9) &&
			(NumberTheory.getNumeralSystemBase("B10.00123456789") == 10) &&
			(NumberTheory.getNumeralSystemBase("B11.00123456789A") == 11) &&
			(NumberTheory.getNumeralSystemBase("B12.00123456789AB") == 12) &&
			(NumberTheory.getNumeralSystemBase("B13.00123456789ABC") == 13) &&
			(NumberTheory.getNumeralSystemBase("B14.00123456789ABCD") == 14) &&
			(NumberTheory.getNumeralSystemBase("B15.00123456789ABCDE") == 15) &&
			(NumberTheory.getNumeralSystemBase("B16.00123456789ABCDEF") == 16) &&
			(NumberTheory.getNumeralSystemBase("B16.00123456789ABCDEF") == 16) &&
			(NumberTheory.getNumeralSystemBase("B17.00123456789ABCDEFG") == 17) &&
			(NumberTheory.getNumeralSystemBase("B18.00123456789ABCDEFGH") == 18) &&
			(NumberTheory.getNumeralSystemBase("B19.00123456789ABCDEFGI") == 19) &&
			(NumberTheory.getNumeralSystemBase("B20.00123456789ABCDEFGIJ") == 20) &&
			(NumberTheory.getNumeralSystemBase("B21.00123456789ABCDEFGIJK") == 21) &&
			(NumberTheory.getNumeralSystemBase("B22.00123456789ABCDEFGIJKL") == 22) &&
			(NumberTheory.getNumeralSystemBase("B23.00123456789ABCDEFGIJKLM") == 23) &&
			(NumberTheory.getNumeralSystemBase("B24.00123456789ABCDEFGIJKLMN") == 24) &&
			(NumberTheory.getNumeralSystemBase("B25.00123456789ABCDEFGIJKLMNO") == 25) &&
			(NumberTheory.getNumeralSystemBase("B26.00123456789ABCDEFGIJKLMNOP") == 26) &&
			(NumberTheory.getNumeralSystemBase("B27.00123456789ABCDEFGIJKLMNOPQ") == 27) &&
			(NumberTheory.getNumeralSystemBase("B28.00123456789ABCDEFGIJKLMNOPQR") == 28) &&
			(NumberTheory.getNumeralSystemBase("B29.00123456789ABCDEFGIJKLMNOPQRS") == 29) &&
			(NumberTheory.getNumeralSystemBase("B30.00123456789ABCDEFGIJKLMNOPQRST") == 30) &&
			(NumberTheory.getNumeralSystemBase("B31.00123456789ABCDEFGIJKLMNOPQRSTU") == 31) &&
			(NumberTheory.getNumeralSystemBase("B32.00123456789ABCDEFGIJKLMNOPQRSTUV") == 32) &&
			(NumberTheory.getNumeralSystemBase("B33.00123456789ABCDEFGIJKLMNOPQRSTUVW") == 33) &&
			(NumberTheory.getNumeralSystemBase("B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX") == 34) &&
			(NumberTheory.getNumeralSystemBase("B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY") == 35) &&
			(NumberTheory.getNumeralSystemBase("B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ") == 36) &&
			(NumberTheory.getNumeralSystemBase("-h.1234567890aBcDeF") == 16) &&
			(NumberTheory.getNumeralSystemBase("-o.12345670") == 8) &&
			(NumberTheory.getNumeralSystemBase("-b.101010") == 2) &&
			(NumberTheory.getNumeralSystemBase("-b1.") == 1) &&
			(NumberTheory.getNumeralSystemBase("-b2.01") == 2) &&
			(NumberTheory.getNumeralSystemBase("-b3.012") == 3) &&
			(NumberTheory.getNumeralSystemBase("-b4.0123") == 4) &&
			(NumberTheory.getNumeralSystemBase("-b5.01234") == 5) &&
			(NumberTheory.getNumeralSystemBase("-b6.012345") == 6) &&
			(NumberTheory.getNumeralSystemBase("-b7.0123456") == 7) &&
			(NumberTheory.getNumeralSystemBase("-b8.01234567") == 8) &&
			(NumberTheory.getNumeralSystemBase("-b9.012345678") == 9) &&
			(NumberTheory.getNumeralSystemBase("-b10.0123456789") == 10) &&
			(NumberTheory.getNumeralSystemBase("-b11.0123456789a") == 11) &&
			(NumberTheory.getNumeralSystemBase("-b12.0123456789ab") == 12) &&
			(NumberTheory.getNumeralSystemBase("-b13.0123456789abc") == 13) &&
			(NumberTheory.getNumeralSystemBase("-b14.0123456789abcd") == 14) &&
			(NumberTheory.getNumeralSystemBase("-b15.0123456789abcde") == 15) &&
			(NumberTheory.getNumeralSystemBase("-b16.0123456789abcdef") == 16) &&
			(NumberTheory.getNumeralSystemBase("-b16.0123456789abcdef") == 16) &&
			(NumberTheory.getNumeralSystemBase("-b17.0123456789abcdefg") == 17) &&
			(NumberTheory.getNumeralSystemBase("-b18.0123456789abcdefgh") == 18) &&
			(NumberTheory.getNumeralSystemBase("-b19.0123456789abcdefghi") == 19) &&
			(NumberTheory.getNumeralSystemBase("-b20.0123456789abcdefghij") == 20) &&
			(NumberTheory.getNumeralSystemBase("-b21.0123456789abcdefghijk") == 21) &&
			(NumberTheory.getNumeralSystemBase("-b22.0123456789abcdefghijkl") == 22) &&
			(NumberTheory.getNumeralSystemBase("-b23.0123456789abcdefghijklm") == 23) &&
			(NumberTheory.getNumeralSystemBase("-b24.0123456789abcdefghijklmn") == 24) &&
			(NumberTheory.getNumeralSystemBase("-b25.0123456789abcdefghijklmno") == 25) &&
			(NumberTheory.getNumeralSystemBase("-b26.0123456789abcdefghijklmnop") == 26) &&
			(NumberTheory.getNumeralSystemBase("-b27.0123456789abcdefghijklmnopq") == 27) &&
			(NumberTheory.getNumeralSystemBase("-b28.0123456789abcdefghijklmnopqr") == 28) &&
			(NumberTheory.getNumeralSystemBase("-b29.0123456789abcdefghijklmnopqrs") == 29) &&
			(NumberTheory.getNumeralSystemBase("-b30.0123456789abcdefghijklmnopqrst") == 30) &&
			(NumberTheory.getNumeralSystemBase("-b31.0123456789abcdefghijklmnopqrstu") == 31) &&
			(NumberTheory.getNumeralSystemBase("-b32.0123456789abcdefghijklmnopqrstuv") == 32) &&
			(NumberTheory.getNumeralSystemBase("-b33.0123456789abcdefghijklmnopqrstuvw") == 33) &&
			(NumberTheory.getNumeralSystemBase("-b34.0123456789abcdefghijklmnopqrstuvwx") == 34) &&
			(NumberTheory.getNumeralSystemBase("-b35.0123456789abcdefghijklmnopqrstuvwxy") == 35) &&
			(NumberTheory.getNumeralSystemBase("-b36.0123456789abcdefghijklmnopqrstuvwxyz") == 36) &&
			(NumberTheory.getNumeralSystemBase("-H.001234567890aBcDeF") == 16) &&
			(NumberTheory.getNumeralSystemBase("-O.0012345670") == 8) &&
			(NumberTheory.getNumeralSystemBase("-B.000101010") == 2) &&
			(NumberTheory.getNumeralSystemBase("-B1.111") == 1) &&
			(NumberTheory.getNumeralSystemBase("-B2.0101") == 2) &&
			(NumberTheory.getNumeralSystemBase("-B3.0012") == 3) &&
			(NumberTheory.getNumeralSystemBase("-B4.00123") == 4) &&
			(NumberTheory.getNumeralSystemBase("-B5.001234") == 5) &&
			(NumberTheory.getNumeralSystemBase("-B6.0012345") == 6) &&
			(NumberTheory.getNumeralSystemBase("-B7.00123456") == 7) &&
			(NumberTheory.getNumeralSystemBase("-B8.001234567") == 8) &&
			(NumberTheory.getNumeralSystemBase("-B9.0012345678") == 9) &&
			(NumberTheory.getNumeralSystemBase("-B10.00123456789") == 10) &&
			(NumberTheory.getNumeralSystemBase("-B11.00123456789A") == 11) &&
			(NumberTheory.getNumeralSystemBase("-B12.00123456789AB") == 12) &&
			(NumberTheory.getNumeralSystemBase("-B13.00123456789ABC") == 13) &&
			(NumberTheory.getNumeralSystemBase("-B14.00123456789ABCD") == 14) &&
			(NumberTheory.getNumeralSystemBase("-B15.00123456789ABCDE") == 15) &&
			(NumberTheory.getNumeralSystemBase("-B16.00123456789ABCDEF") == 16) &&
			(NumberTheory.getNumeralSystemBase("-B16.00123456789ABCDEF") == 16) &&
			(NumberTheory.getNumeralSystemBase("-B17.00123456789ABCDEFG") == 17) &&
			(NumberTheory.getNumeralSystemBase("-B18.00123456789ABCDEFGH") == 18) &&
			(NumberTheory.getNumeralSystemBase("-B19.00123456789ABCDEFGI") == 19) &&
			(NumberTheory.getNumeralSystemBase("-B20.00123456789ABCDEFGIJ") == 20) &&
			(NumberTheory.getNumeralSystemBase("-B21.00123456789ABCDEFGIJK") == 21) &&
			(NumberTheory.getNumeralSystemBase("-B22.00123456789ABCDEFGIJKL") == 22) &&
			(NumberTheory.getNumeralSystemBase("-B23.00123456789ABCDEFGIJKLM") == 23) &&
			(NumberTheory.getNumeralSystemBase("-B24.00123456789ABCDEFGIJKLMN") == 24) &&
			(NumberTheory.getNumeralSystemBase("-B25.00123456789ABCDEFGIJKLMNO") == 25) &&
			(NumberTheory.getNumeralSystemBase("-B26.00123456789ABCDEFGIJKLMNOP") == 26) &&
			(NumberTheory.getNumeralSystemBase("-B27.00123456789ABCDEFGIJKLMNOPQ") == 27) &&
			(NumberTheory.getNumeralSystemBase("-B28.00123456789ABCDEFGIJKLMNOPQR") == 28) &&
			(NumberTheory.getNumeralSystemBase("-B29.00123456789ABCDEFGIJKLMNOPQRS") == 29) &&
			(NumberTheory.getNumeralSystemBase("-B30.00123456789ABCDEFGIJKLMNOPQRST") == 30) &&
			(NumberTheory.getNumeralSystemBase("-B31.00123456789ABCDEFGIJKLMNOPQRSTU") == 31) &&
			(NumberTheory.getNumeralSystemBase("-B32.00123456789ABCDEFGIJKLMNOPQRSTUV") == 32) &&
			(NumberTheory.getNumeralSystemBase("-B33.00123456789ABCDEFGIJKLMNOPQRSTUVW") == 33) &&
			(NumberTheory.getNumeralSystemBase("-B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX") == 34) &&
			(NumberTheory.getNumeralSystemBase("-B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY") == 35) &&
			(NumberTheory.getNumeralSystemBase("-B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ") == 36) &&
			(NumberTheory.getNumeralSystemBase("+h.1234567890aBcDeF") == 16) &&
			(NumberTheory.getNumeralSystemBase("+o.12345670") == 8) &&
			(NumberTheory.getNumeralSystemBase("+b.101010") == 2) &&
			(NumberTheory.getNumeralSystemBase("+b1.") == 1) &&
			(NumberTheory.getNumeralSystemBase("+b2.01") == 2) &&
			(NumberTheory.getNumeralSystemBase("+b3.012") == 3) &&
			(NumberTheory.getNumeralSystemBase("+b4.0123") == 4) &&
			(NumberTheory.getNumeralSystemBase("+b5.01234") == 5) &&
			(NumberTheory.getNumeralSystemBase("+b6.012345") == 6) &&
			(NumberTheory.getNumeralSystemBase("+b7.0123456") == 7) &&
			(NumberTheory.getNumeralSystemBase("+b8.01234567") == 8) &&
			(NumberTheory.getNumeralSystemBase("+b9.012345678") == 9) &&
			(NumberTheory.getNumeralSystemBase("+b10.0123456789") == 10) &&
			(NumberTheory.getNumeralSystemBase("+b11.0123456789a") == 11) &&
			(NumberTheory.getNumeralSystemBase("+b12.0123456789ab") == 12) &&
			(NumberTheory.getNumeralSystemBase("+b13.0123456789abc") == 13) &&
			(NumberTheory.getNumeralSystemBase("+b14.0123456789abcd") == 14) &&
			(NumberTheory.getNumeralSystemBase("+b15.0123456789abcde") == 15) &&
			(NumberTheory.getNumeralSystemBase("+b16.0123456789abcdef") == 16) &&
			(NumberTheory.getNumeralSystemBase("+b16.0123456789abcdef") == 16) &&
			(NumberTheory.getNumeralSystemBase("+b17.0123456789abcdefg") == 17) &&
			(NumberTheory.getNumeralSystemBase("+b18.0123456789abcdefgh") == 18) &&
			(NumberTheory.getNumeralSystemBase("+b19.0123456789abcdefghi") == 19) &&
			(NumberTheory.getNumeralSystemBase("+b20.0123456789abcdefghij") == 20) &&
			(NumberTheory.getNumeralSystemBase("+b21.0123456789abcdefghijk") == 21) &&
			(NumberTheory.getNumeralSystemBase("+b22.0123456789abcdefghijkl") == 22) &&
			(NumberTheory.getNumeralSystemBase("+b23.0123456789abcdefghijklm") == 23) &&
			(NumberTheory.getNumeralSystemBase("+b24.0123456789abcdefghijklmn") == 24) &&
			(NumberTheory.getNumeralSystemBase("+b25.0123456789abcdefghijklmno") == 25) &&
			(NumberTheory.getNumeralSystemBase("+b26.0123456789abcdefghijklmnop") == 26) &&
			(NumberTheory.getNumeralSystemBase("+b27.0123456789abcdefghijklmnopq") == 27) &&
			(NumberTheory.getNumeralSystemBase("+b28.0123456789abcdefghijklmnopqr") == 28) &&
			(NumberTheory.getNumeralSystemBase("+b29.0123456789abcdefghijklmnopqrs") == 29) &&
			(NumberTheory.getNumeralSystemBase("+b30.0123456789abcdefghijklmnopqrst") == 30) &&
			(NumberTheory.getNumeralSystemBase("+b31.0123456789abcdefghijklmnopqrstu") == 31) &&
			(NumberTheory.getNumeralSystemBase("+b32.0123456789abcdefghijklmnopqrstuv") == 32) &&
			(NumberTheory.getNumeralSystemBase("+b33.0123456789abcdefghijklmnopqrstuvw") == 33) &&
			(NumberTheory.getNumeralSystemBase("+b34.0123456789abcdefghijklmnopqrstuvwx") == 34) &&
			(NumberTheory.getNumeralSystemBase("+b35.0123456789abcdefghijklmnopqrstuvwxy") == 35) &&
			(NumberTheory.getNumeralSystemBase("+b36.0123456789abcdefghijklmnopqrstuvwxyz") == 36) &&
			(NumberTheory.getNumeralSystemBase("+H.001234567890aBcDeF") == 16) &&
			(NumberTheory.getNumeralSystemBase("+O.0012345670") == 8) &&
			(NumberTheory.getNumeralSystemBase("+B.000101010") == 2) &&
			(NumberTheory.getNumeralSystemBase("+B1.111") == 1) &&
			(NumberTheory.getNumeralSystemBase("+B2.0101") == 2) &&
			(NumberTheory.getNumeralSystemBase("+B3.0012") == 3) &&
			(NumberTheory.getNumeralSystemBase("+B4.00123") == 4) &&
			(NumberTheory.getNumeralSystemBase("+B5.001234") == 5) &&
			(NumberTheory.getNumeralSystemBase("+B6.0012345") == 6) &&
			(NumberTheory.getNumeralSystemBase("+B7.00123456") == 7) &&
			(NumberTheory.getNumeralSystemBase("+B8.001234567") == 8) &&
			(NumberTheory.getNumeralSystemBase("+B9.0012345678") == 9) &&
			(NumberTheory.getNumeralSystemBase("+B10.00123456789") == 10) &&
			(NumberTheory.getNumeralSystemBase("+B11.00123456789A") == 11) &&
			(NumberTheory.getNumeralSystemBase("+B12.00123456789AB") == 12) &&
			(NumberTheory.getNumeralSystemBase("+B13.00123456789ABC") == 13) &&
			(NumberTheory.getNumeralSystemBase("+B14.00123456789ABCD") == 14) &&
			(NumberTheory.getNumeralSystemBase("+B15.00123456789ABCDE") == 15) &&
			(NumberTheory.getNumeralSystemBase("+B16.00123456789ABCDEF") == 16) &&
			(NumberTheory.getNumeralSystemBase("+B16.00123456789ABCDEF") == 16) &&
			(NumberTheory.getNumeralSystemBase("+B17.00123456789ABCDEFG") == 17) &&
			(NumberTheory.getNumeralSystemBase("+B18.00123456789ABCDEFGH") == 18) &&
			(NumberTheory.getNumeralSystemBase("+B19.00123456789ABCDEFGI") == 19) &&
			(NumberTheory.getNumeralSystemBase("+B20.00123456789ABCDEFGIJ") == 20) &&
			(NumberTheory.getNumeralSystemBase("+B21.00123456789ABCDEFGIJK") == 21) &&
			(NumberTheory.getNumeralSystemBase("+B22.00123456789ABCDEFGIJKL") == 22) &&
			(NumberTheory.getNumeralSystemBase("+B23.00123456789ABCDEFGIJKLM") == 23) &&
			(NumberTheory.getNumeralSystemBase("+B24.00123456789ABCDEFGIJKLMN") == 24) &&
			(NumberTheory.getNumeralSystemBase("+B25.00123456789ABCDEFGIJKLMNO") == 25) &&
			(NumberTheory.getNumeralSystemBase("+B26.00123456789ABCDEFGIJKLMNOP") == 26) &&
			(NumberTheory.getNumeralSystemBase("+B27.00123456789ABCDEFGIJKLMNOPQ") == 27) &&
			(NumberTheory.getNumeralSystemBase("+B28.00123456789ABCDEFGIJKLMNOPQR") == 28) &&
			(NumberTheory.getNumeralSystemBase("+B29.00123456789ABCDEFGIJKLMNOPQRS") == 29) &&
			(NumberTheory.getNumeralSystemBase("+B30.00123456789ABCDEFGIJKLMNOPQRST") == 30) &&
			(NumberTheory.getNumeralSystemBase("+B31.00123456789ABCDEFGIJKLMNOPQRSTU") == 31) &&
			(NumberTheory.getNumeralSystemBase("+B32.00123456789ABCDEFGIJKLMNOPQRSTUV") == 32) &&
			(NumberTheory.getNumeralSystemBase("+B33.00123456789ABCDEFGIJKLMNOPQRSTUVW") == 33) &&
			(NumberTheory.getNumeralSystemBase("+B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX") == 34) &&
			(NumberTheory.getNumeralSystemBase("+B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY") == 35) &&
			(NumberTheory.getNumeralSystemBase("+B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ") == 36)
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0043() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convOthBase2Decimal()";
			TestCommonTools.consolePrintTestApiStart(43, testDescr);
			if (
			(NumberTheory.convOthBase2Decimal("b1.") == 0) &&
			(NumberTheory.convOthBase2Decimal("b1.111") == 3) &&
			(NumberTheory.convOthBase2Decimal("b2.101") == 5) &&
			(NumberTheory.convOthBase2Decimal("b3.121") == 16) &&
			(NumberTheory.convOthBase2Decimal("b4.123") == 27) &&
			(NumberTheory.convOthBase2Decimal("b5.341") == 96) &&
			(NumberTheory.convOthBase2Decimal("b6.352") == 140) &&
			(NumberTheory.convOthBase2Decimal("b7.256") == 139) &&
			(NumberTheory.convOthBase2Decimal("b8.376") == 254) &&
			(NumberTheory.convOthBase2Decimal("o.376") == 254) &&
			(NumberTheory.convOthBase2Decimal("b.101") == 5) &&
			(NumberTheory.convOthBase2Decimal("b9.821") == 667) &&
			(NumberTheory.convOthBase2Decimal("b10.394") == 394) &&
			(NumberTheory.convOthBase2Decimal("b11.3A7") == 480) &&
			(NumberTheory.convOthBase2Decimal("b12.A5B") == 1511) &&
			(NumberTheory.convOthBase2Decimal("b13.ACB") == 1857) &&
			(NumberTheory.convOthBase2Decimal("b14.2AD") == 545) &&
			(NumberTheory.convOthBase2Decimal("b15.BE4") == 2689) &&
			(NumberTheory.convOthBase2Decimal("b16.FA2") == 4002) &&
			(NumberTheory.convOthBase2Decimal("h.FA2") == 4002) &&
			(NumberTheory.convOthBase2Decimal("b17.AG6") == 3168) &&
			(NumberTheory.convOthBase2Decimal("b18.FGH") == 5165) &&
			(NumberTheory.convOthBase2Decimal("b19.2I3") == 1067) &&
			(NumberTheory.convOthBase2Decimal("b20.9CJ") == 3859) &&
			(NumberTheory.convOthBase2Decimal("b21.K5F") == 8940) &&
			(NumberTheory.convOthBase2Decimal("b22.FL5") == 7727) &&
			(NumberTheory.convOthBase2Decimal("b23.1AM") == 781) &&
			(NumberTheory.convOthBase2Decimal("b24.5ND") == 3445) &&
			(NumberTheory.convOthBase2Decimal("b25.5ND5C") == 2320762) &&
			(NumberTheory.convOthBase2Decimal("b26.3KPB5") == 1739639) &&
			(NumberTheory.convOthBase2Decimal("b27.IQH67") == 10090258) &&
			(NumberTheory.convOthBase2Decimal("b28.RKHB2") == 17048390) &&
			(NumberTheory.convOthBase2Decimal("b29.8BIFS") == 5942128) &&
			(NumberTheory.convOthBase2Decimal("b30.2TGJB") == 2417981) &&
			(NumberTheory.convOthBase2Decimal("b31.6PUC0") == 6315103) &&
			(NumberTheory.convOthBase2Decimal("b32.C0PV0") == 12609504) &&
			(NumberTheory.convOthBase2Decimal("b33.V000W") == 36763583) &&
			(NumberTheory.convOthBase2Decimal("b34.NP2XW") == 31721794) &&
			(NumberTheory.convOthBase2Decimal("b35.120Y0") == 1587565) &&
			(NumberTheory.convOthBase2Decimal("b36.ZZZZZ") == 60466175) &&
			(NumberTheory.convOthBase2Decimal("B1.") == 0) &&
			(NumberTheory.convOthBase2Decimal("B1.111") == 3) &&
			(NumberTheory.convOthBase2Decimal("B2.00101") == 5) &&
			(NumberTheory.convOthBase2Decimal("B3.00121") == 16) &&
			(NumberTheory.convOthBase2Decimal("B4.00123") == 27) &&
			(NumberTheory.convOthBase2Decimal("B5.00341") == 96) &&
			(NumberTheory.convOthBase2Decimal("B6.00352") == 140) &&
			(NumberTheory.convOthBase2Decimal("B7.00256") == 139) &&
			(NumberTheory.convOthBase2Decimal("B8.00376") == 254) &&
			(NumberTheory.convOthBase2Decimal("O.00376") == 254) &&
			(NumberTheory.convOthBase2Decimal("B.00101") == 5) &&
			(NumberTheory.convOthBase2Decimal("B9.00821") == 667) &&
			(NumberTheory.convOthBase2Decimal("B10.00394") == 394) &&
			(NumberTheory.convOthBase2Decimal("B11.003a7") == 480) &&
			(NumberTheory.convOthBase2Decimal("B12.00a5b") == 1511) &&
			(NumberTheory.convOthBase2Decimal("B13.00acb") == 1857) &&
			(NumberTheory.convOthBase2Decimal("B14.002ad") == 545) &&
			(NumberTheory.convOthBase2Decimal("B15.00be4") == 2689) &&
			(NumberTheory.convOthBase2Decimal("B16.00fa2") == 4002) &&
			(NumberTheory.convOthBase2Decimal("H.00fa2") == 4002) &&
			(NumberTheory.convOthBase2Decimal("B17.00ag6") == 3168) &&
			(NumberTheory.convOthBase2Decimal("B18.00fgh") == 5165) &&
			(NumberTheory.convOthBase2Decimal("B19.002i3") == 1067) &&
			(NumberTheory.convOthBase2Decimal("B20.009cj") == 3859) &&
			(NumberTheory.convOthBase2Decimal("B21.00k5f") == 8940) &&
			(NumberTheory.convOthBase2Decimal("B22.00fl5") == 7727) &&
			(NumberTheory.convOthBase2Decimal("B23.001am") == 781) &&
			(NumberTheory.convOthBase2Decimal("B24.005nd") == 3445) &&
			(NumberTheory.convOthBase2Decimal("B25.005nd5c") == 2320762) &&
			(NumberTheory.convOthBase2Decimal("B26.003kpb5") == 1739639) &&
			(NumberTheory.convOthBase2Decimal("B27.00iqh67") == 10090258) &&
			(NumberTheory.convOthBase2Decimal("B28.00rkhb2") == 17048390) &&
			(NumberTheory.convOthBase2Decimal("B29.008bifs") == 5942128) &&
			(NumberTheory.convOthBase2Decimal("B30.002tgjb") == 2417981) &&
			(NumberTheory.convOthBase2Decimal("B31.006puc0") == 6315103) &&
			(NumberTheory.convOthBase2Decimal("B32.00c0pv0") == 12609504) &&
			(NumberTheory.convOthBase2Decimal("B33.00v000w") == 36763583) &&
			(NumberTheory.convOthBase2Decimal("B34.00np2xw") == 31721794) &&
			(NumberTheory.convOthBase2Decimal("B35.00120y0") == 1587565) &&
			(NumberTheory.convOthBase2Decimal("B36.00zzzzz") == 60466175) &&
			(NumberTheory.convOthBase2Decimal("+b1.") == 0) &&
			(NumberTheory.convOthBase2Decimal("+b1.111") == 3) &&
			(NumberTheory.convOthBase2Decimal("+b2.101") == 5) &&
			(NumberTheory.convOthBase2Decimal("+b3.121") == 16) &&
			(NumberTheory.convOthBase2Decimal("+b4.123") == 27) &&
			(NumberTheory.convOthBase2Decimal("+b5.341") == 96) &&
			(NumberTheory.convOthBase2Decimal("+b6.352") == 140) &&
			(NumberTheory.convOthBase2Decimal("+b7.256") == 139) &&
			(NumberTheory.convOthBase2Decimal("+b8.376") == 254) &&
			(NumberTheory.convOthBase2Decimal("+o.376") == 254) &&
			(NumberTheory.convOthBase2Decimal("+b.101") == 5) &&
			(NumberTheory.convOthBase2Decimal("+b9.821") == 667) &&
			(NumberTheory.convOthBase2Decimal("+b10.394") == 394) &&
			(NumberTheory.convOthBase2Decimal("+b11.3A7") == 480) &&
			(NumberTheory.convOthBase2Decimal("+b12.A5B") == 1511) &&
			(NumberTheory.convOthBase2Decimal("+b13.ACB") == 1857) &&
			(NumberTheory.convOthBase2Decimal("+b14.2AD") == 545) &&
			(NumberTheory.convOthBase2Decimal("+b15.BE4") == 2689) &&
			(NumberTheory.convOthBase2Decimal("+b16.FA2") == 4002) &&
			(NumberTheory.convOthBase2Decimal("+h.FA2") == 4002) &&
			(NumberTheory.convOthBase2Decimal("+b17.AG6") == 3168) &&
			(NumberTheory.convOthBase2Decimal("+b18.FGH") == 5165) &&
			(NumberTheory.convOthBase2Decimal("+b19.2I3") == 1067) &&
			(NumberTheory.convOthBase2Decimal("+b20.9CJ") == 3859) &&
			(NumberTheory.convOthBase2Decimal("+b21.K5F") == 8940) &&
			(NumberTheory.convOthBase2Decimal("+b22.FL5") == 7727) &&
			(NumberTheory.convOthBase2Decimal("+b23.1AM") == 781) &&
			(NumberTheory.convOthBase2Decimal("+b24.5ND") == 3445) &&
			(NumberTheory.convOthBase2Decimal("+b25.5ND5C") == 2320762) &&
			(NumberTheory.convOthBase2Decimal("+b26.3KPB5") == 1739639) &&
			(NumberTheory.convOthBase2Decimal("+b27.IQH67") == 10090258) &&
			(NumberTheory.convOthBase2Decimal("+b28.RKHB2") == 17048390) &&
			(NumberTheory.convOthBase2Decimal("+b29.8BIFS") == 5942128) &&
			(NumberTheory.convOthBase2Decimal("+b30.2TGJB") == 2417981) &&
			(NumberTheory.convOthBase2Decimal("+b31.6PUC0") == 6315103) &&
			(NumberTheory.convOthBase2Decimal("+b32.C0PV0") == 12609504) &&
			(NumberTheory.convOthBase2Decimal("+b33.V000W") == 36763583) &&
			(NumberTheory.convOthBase2Decimal("+b34.NP2XW") == 31721794) &&
			(NumberTheory.convOthBase2Decimal("+b35.120Y0") == 1587565) &&
			(NumberTheory.convOthBase2Decimal("+b36.ZZZZZ") == 60466175) &&
			(NumberTheory.convOthBase2Decimal("+B1.") == 0) &&
			(NumberTheory.convOthBase2Decimal("+B1.111") == 3) &&
			(NumberTheory.convOthBase2Decimal("+B2.00101") == 5) &&
			(NumberTheory.convOthBase2Decimal("+B3.00121") == 16) &&
			(NumberTheory.convOthBase2Decimal("+B4.00123") == 27) &&
			(NumberTheory.convOthBase2Decimal("+B5.00341") == 96) &&
			(NumberTheory.convOthBase2Decimal("+B6.00352") == 140) &&
			(NumberTheory.convOthBase2Decimal("+B7.00256") == 139) &&
			(NumberTheory.convOthBase2Decimal("+B8.00376") == 254) &&
			(NumberTheory.convOthBase2Decimal("+O.00376") == 254) &&
			(NumberTheory.convOthBase2Decimal("+B.00101") == 5) &&
			(NumberTheory.convOthBase2Decimal("+B9.00821") == 667) &&
			(NumberTheory.convOthBase2Decimal("+B10.00394") == 394) &&
			(NumberTheory.convOthBase2Decimal("+B11.003a7") == 480) &&
			(NumberTheory.convOthBase2Decimal("+B12.00a5b") == 1511) &&
			(NumberTheory.convOthBase2Decimal("+B13.00acb") == 1857) &&
			(NumberTheory.convOthBase2Decimal("+B14.002ad") == 545) &&
			(NumberTheory.convOthBase2Decimal("+B15.00be4") == 2689) &&
			(NumberTheory.convOthBase2Decimal("+B16.00fa2") == 4002) &&
			(NumberTheory.convOthBase2Decimal("+H.00fa2") == 4002) &&
			(NumberTheory.convOthBase2Decimal("+B17.00ag6") == 3168) &&
			(NumberTheory.convOthBase2Decimal("+B18.00fgh") == 5165) &&
			(NumberTheory.convOthBase2Decimal("+B19.002i3") == 1067) &&
			(NumberTheory.convOthBase2Decimal("+B20.009cj") == 3859) &&
			(NumberTheory.convOthBase2Decimal("+B21.00k5f") == 8940) &&
			(NumberTheory.convOthBase2Decimal("+B22.00fl5") == 7727) &&
			(NumberTheory.convOthBase2Decimal("+B23.001am") == 781) &&
			(NumberTheory.convOthBase2Decimal("+B24.005nd") == 3445) &&
			(NumberTheory.convOthBase2Decimal("+B25.005nd5c") == 2320762) &&
			(NumberTheory.convOthBase2Decimal("+B26.003kpb5") == 1739639) &&
			(NumberTheory.convOthBase2Decimal("+B27.00iqh67") == 10090258) &&
			(NumberTheory.convOthBase2Decimal("+B28.00rkhb2") == 17048390) &&
			(NumberTheory.convOthBase2Decimal("+B29.008bifs") == 5942128) &&
			(NumberTheory.convOthBase2Decimal("+B30.002tgjb") == 2417981) &&
			(NumberTheory.convOthBase2Decimal("+B31.006puc0") == 6315103) &&
			(NumberTheory.convOthBase2Decimal("+B32.00c0pv0") == 12609504) &&
			(NumberTheory.convOthBase2Decimal("+B33.00v000w") == 36763583) &&
			(NumberTheory.convOthBase2Decimal("+B34.00np2xw") == 31721794) &&
			(NumberTheory.convOthBase2Decimal("+B35.00120y0") == 1587565) &&
			(NumberTheory.convOthBase2Decimal("+B36.00zzzzz") == 60466175) &&
			(NumberTheory.convOthBase2Decimal("-b1.") == -0) &&
			(NumberTheory.convOthBase2Decimal("-b1.111") == -3) &&
			(NumberTheory.convOthBase2Decimal("-b2.101") == -5) &&
			(NumberTheory.convOthBase2Decimal("-b3.121") == -16) &&
			(NumberTheory.convOthBase2Decimal("-b4.123") == -27) &&
			(NumberTheory.convOthBase2Decimal("-b5.341") == -96) &&
			(NumberTheory.convOthBase2Decimal("-b6.352") == -140) &&
			(NumberTheory.convOthBase2Decimal("-b7.256") == -139) &&
			(NumberTheory.convOthBase2Decimal("-b8.376") == -254) &&
			(NumberTheory.convOthBase2Decimal("-o.376") == -254) &&
			(NumberTheory.convOthBase2Decimal("-b.101") == -5) &&
			(NumberTheory.convOthBase2Decimal("-b9.821") == -667) &&
			(NumberTheory.convOthBase2Decimal("-b10.394") == -394) &&
			(NumberTheory.convOthBase2Decimal("-b11.3A7") == -480) &&
			(NumberTheory.convOthBase2Decimal("-b12.A5B") == -1511) &&
			(NumberTheory.convOthBase2Decimal("-b13.ACB") == -1857) &&
			(NumberTheory.convOthBase2Decimal("-b14.2AD") == -545) &&
			(NumberTheory.convOthBase2Decimal("-b15.BE4") == -2689) &&
			(NumberTheory.convOthBase2Decimal("-b16.FA2") == -4002) &&
			(NumberTheory.convOthBase2Decimal("-h.FA2") == -4002) &&
			(NumberTheory.convOthBase2Decimal("-b17.AG6") == -3168) &&
			(NumberTheory.convOthBase2Decimal("-b18.FGH") == -5165) &&
			(NumberTheory.convOthBase2Decimal("-b19.2I3") == -1067) &&
			(NumberTheory.convOthBase2Decimal("-b20.9CJ") == -3859) &&
			(NumberTheory.convOthBase2Decimal("-b21.K5F") == -8940) &&
			(NumberTheory.convOthBase2Decimal("-b22.FL5") == -7727) &&
			(NumberTheory.convOthBase2Decimal("-b23.1AM") == -781) &&
			(NumberTheory.convOthBase2Decimal("-b24.5ND") == -3445) &&
			(NumberTheory.convOthBase2Decimal("-b25.5ND5C") == -2320762) &&
			(NumberTheory.convOthBase2Decimal("-b26.3KPB5") == -1739639) &&
			(NumberTheory.convOthBase2Decimal("-b27.IQH67") == -10090258) &&
			(NumberTheory.convOthBase2Decimal("-b28.RKHB2") == -17048390) &&
			(NumberTheory.convOthBase2Decimal("-b29.8BIFS") == -5942128) &&
			(NumberTheory.convOthBase2Decimal("-b30.2TGJB") == -2417981) &&
			(NumberTheory.convOthBase2Decimal("-b31.6PUC0") == -6315103) &&
			(NumberTheory.convOthBase2Decimal("-b32.C0PV0") == -12609504) &&
			(NumberTheory.convOthBase2Decimal("-b33.V000W") == -36763583) &&
			(NumberTheory.convOthBase2Decimal("-b34.NP2XW") == -31721794) &&
			(NumberTheory.convOthBase2Decimal("-b35.120Y0") == -1587565) &&
			(NumberTheory.convOthBase2Decimal("-b36.ZZZZZ") == -60466175) &&
			(NumberTheory.convOthBase2Decimal("-B1.") == -0) &&
			(NumberTheory.convOthBase2Decimal("-B1.111") == -3) &&
			(NumberTheory.convOthBase2Decimal("-B2.00101") == -5) &&
			(NumberTheory.convOthBase2Decimal("-B3.00121") == -16) &&
			(NumberTheory.convOthBase2Decimal("-B4.00123") == -27) &&
			(NumberTheory.convOthBase2Decimal("-B5.00341") == -96) &&
			(NumberTheory.convOthBase2Decimal("-B6.00352") == -140) &&
			(NumberTheory.convOthBase2Decimal("-B7.00256") == -139) &&
			(NumberTheory.convOthBase2Decimal("-B8.00376") == -254) &&
			(NumberTheory.convOthBase2Decimal("-O.00376") == -254) &&
			(NumberTheory.convOthBase2Decimal("-B.00101") == -5) &&
			(NumberTheory.convOthBase2Decimal("-B9.00821") == -667) &&
			(NumberTheory.convOthBase2Decimal("-B10.00394") == -394) &&
			(NumberTheory.convOthBase2Decimal("-B11.003a7") == -480) &&
			(NumberTheory.convOthBase2Decimal("-B12.00a5b") == -1511) &&
			(NumberTheory.convOthBase2Decimal("-B13.00acb") == -1857) &&
			(NumberTheory.convOthBase2Decimal("-B14.002ad") == -545) &&
			(NumberTheory.convOthBase2Decimal("-B15.00be4") == -2689) &&
			(NumberTheory.convOthBase2Decimal("-B16.00fa2") == -4002) &&
			(NumberTheory.convOthBase2Decimal("-H.00fa2") == -4002) &&
			(NumberTheory.convOthBase2Decimal("-B17.00ag6") == -3168) &&
			(NumberTheory.convOthBase2Decimal("-B18.00fgh") == -5165) &&
			(NumberTheory.convOthBase2Decimal("-B19.002i3") == -1067) &&
			(NumberTheory.convOthBase2Decimal("-B20.009cj") == -3859) &&
			(NumberTheory.convOthBase2Decimal("-B21.00k5f") == -8940) &&
			(NumberTheory.convOthBase2Decimal("-B22.00fl5") == -7727) &&
			(NumberTheory.convOthBase2Decimal("-B23.001am") == -781) &&
			(NumberTheory.convOthBase2Decimal("-B24.005nd") == -3445) &&
			(NumberTheory.convOthBase2Decimal("-B25.005nd5c") == -2320762) &&
			(NumberTheory.convOthBase2Decimal("-B26.003kpb5") == -1739639) &&
			(NumberTheory.convOthBase2Decimal("-B27.00iqh67") == -10090258) &&
			(NumberTheory.convOthBase2Decimal("-B28.00rkhb2") == -17048390) &&
			(NumberTheory.convOthBase2Decimal("-B29.008bifs") == -5942128) &&
			(NumberTheory.convOthBase2Decimal("-B30.002tgjb") == -2417981) &&
			(NumberTheory.convOthBase2Decimal("-B31.006puc0") == -6315103) &&
			(NumberTheory.convOthBase2Decimal("-B32.00c0pv0") == -12609504) &&
			(NumberTheory.convOthBase2Decimal("-B33.00v000w") == -36763583) &&
			(NumberTheory.convOthBase2Decimal("-B34.00np2xw") == -31721794) &&
			(NumberTheory.convOthBase2Decimal("-B35.00120y0") == -1587565) &&
			(NumberTheory.convOthBase2Decimal("-B36.00zzzzz") == -60466175)
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0044() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convDecimal2OthBase()";
			TestCommonTools.consolePrintTestApiStart(44, testDescr);
			if (
			(NumberTheory.convDecimal2OthBase(0, 1).Equals("")) &&
			(NumberTheory.convDecimal2OthBase(3, 1).Equals("111")) &&
			(NumberTheory.convDecimal2OthBase(5, 2).Equals("101")) &&
			(NumberTheory.convDecimal2OthBase(16, 3).Equals("121")) &&
			(NumberTheory.convDecimal2OthBase(27, 4).Equals("123")) &&
			(NumberTheory.convDecimal2OthBase(96, 5).Equals("341")) &&
			(NumberTheory.convDecimal2OthBase(140, 6).Equals("352")) &&
			(NumberTheory.convDecimal2OthBase(139, 7).Equals("256")) &&
			(NumberTheory.convDecimal2OthBase(254, 8).Equals("376")) &&
			(NumberTheory.convDecimal2OthBase(667, 9).Equals("821")) &&
			(NumberTheory.convDecimal2OthBase(394, 10).Equals("394")) &&
			(NumberTheory.convDecimal2OthBase(480, 11).Equals("3A7")) &&
			(NumberTheory.convDecimal2OthBase(1511, 12).Equals("A5B")) &&
			(NumberTheory.convDecimal2OthBase(1857, 13).Equals("ACB")) &&
			(NumberTheory.convDecimal2OthBase(545, 14).Equals("2AD")) &&
			(NumberTheory.convDecimal2OthBase(2689, 15).Equals("BE4")) &&
			(NumberTheory.convDecimal2OthBase(4002, 16).Equals("FA2")) &&
			(NumberTheory.convDecimal2OthBase(3168, 17).Equals("AG6")) &&
			(NumberTheory.convDecimal2OthBase(5165, 18).Equals("FGH")) &&
			(NumberTheory.convDecimal2OthBase(1067, 19).Equals("2I3")) &&
			(NumberTheory.convDecimal2OthBase(3859, 20).Equals("9CJ")) &&
			(NumberTheory.convDecimal2OthBase(8940, 21).Equals("K5F")) &&
			(NumberTheory.convDecimal2OthBase(7727, 22).Equals("FL5")) &&
			(NumberTheory.convDecimal2OthBase(781, 23).Equals("1AM")) &&
			(NumberTheory.convDecimal2OthBase(3445, 24).Equals("5ND")) &&
			(NumberTheory.convDecimal2OthBase(2320762, 25).Equals("5ND5C")) &&
			(NumberTheory.convDecimal2OthBase(1739639, 26).Equals("3KPB5")) &&
			(NumberTheory.convDecimal2OthBase(10090258, 27).Equals("IQH67")) &&
			(NumberTheory.convDecimal2OthBase(17048390, 28).Equals("RKHB2")) &&
			(NumberTheory.convDecimal2OthBase(5942128, 29).Equals("8BIFS")) &&
			(NumberTheory.convDecimal2OthBase(2417981, 30).Equals("2TGJB")) &&
			(NumberTheory.convDecimal2OthBase(6315103, 31).Equals("6PUC0")) &&
			(NumberTheory.convDecimal2OthBase(12609504, 32).Equals("C0PV0")) &&
			(NumberTheory.convDecimal2OthBase(36763583, 33).Equals("V000W")) &&
			(NumberTheory.convDecimal2OthBase(31721794, 34).Equals("NP2XW")) &&
			(NumberTheory.convDecimal2OthBase(1587565, 35).Equals("120Y0")) &&
			(NumberTheory.convDecimal2OthBase(60466175, 36).Equals("ZZZZZ")) &&
			(NumberTheory.convDecimal2OthBase(-0, 1).Equals("")) &&
			(NumberTheory.convDecimal2OthBase(-3, 1).Equals("-111")) &&
			(NumberTheory.convDecimal2OthBase(-5, 2).Equals("-101")) &&
			(NumberTheory.convDecimal2OthBase(-16, 3).Equals("-121")) &&
			(NumberTheory.convDecimal2OthBase(-27, 4).Equals("-123")) &&
			(NumberTheory.convDecimal2OthBase(-96, 5).Equals("-341")) &&
			(NumberTheory.convDecimal2OthBase(-140, 6).Equals("-352")) &&
			(NumberTheory.convDecimal2OthBase(-139, 7).Equals("-256")) &&
			(NumberTheory.convDecimal2OthBase(-254, 8).Equals("-376")) &&
			(NumberTheory.convDecimal2OthBase(-667, 9).Equals("-821")) &&
			(NumberTheory.convDecimal2OthBase(-394, 10).Equals("-394")) &&
			(NumberTheory.convDecimal2OthBase(-480, 11).Equals("-3A7")) &&
			(NumberTheory.convDecimal2OthBase(-1511, 12).Equals("-A5B")) &&
			(NumberTheory.convDecimal2OthBase(-1857, 13).Equals("-ACB")) &&
			(NumberTheory.convDecimal2OthBase(-545, 14).Equals("-2AD")) &&
			(NumberTheory.convDecimal2OthBase(-2689, 15).Equals("-BE4")) &&
			(NumberTheory.convDecimal2OthBase(-4002, 16).Equals("-FA2")) &&
			(NumberTheory.convDecimal2OthBase(-3168, 17).Equals("-AG6")) &&
			(NumberTheory.convDecimal2OthBase(-5165, 18).Equals("-FGH")) &&
			(NumberTheory.convDecimal2OthBase(-1067, 19).Equals("-2I3")) &&
			(NumberTheory.convDecimal2OthBase(-3859, 20).Equals("-9CJ")) &&
			(NumberTheory.convDecimal2OthBase(-8940, 21).Equals("-K5F")) &&
			(NumberTheory.convDecimal2OthBase(-7727, 22).Equals("-FL5")) &&
			(NumberTheory.convDecimal2OthBase(-781, 23).Equals("-1AM")) &&
			(NumberTheory.convDecimal2OthBase(-3445, 24).Equals("-5ND")) &&
			(NumberTheory.convDecimal2OthBase(-2320762, 25).Equals("-5ND5C")) &&
			(NumberTheory.convDecimal2OthBase(-1739639, 26).Equals("-3KPB5")) &&
			(NumberTheory.convDecimal2OthBase(-10090258, 27).Equals("-IQH67")) &&
			(NumberTheory.convDecimal2OthBase(-17048390, 28).Equals("-RKHB2")) &&
			(NumberTheory.convDecimal2OthBase(-5942128, 29).Equals("-8BIFS")) &&
			(NumberTheory.convDecimal2OthBase(-2417981, 30).Equals("-2TGJB")) &&
			(NumberTheory.convDecimal2OthBase(-6315103, 31).Equals("-6PUC0")) &&
			(NumberTheory.convDecimal2OthBase(-12609504, 32).Equals("-C0PV0")) &&
			(NumberTheory.convDecimal2OthBase(-36763583, 33).Equals("-V000W")) &&
			(NumberTheory.convDecimal2OthBase(-31721794, 34).Equals("-NP2XW")) &&
			(NumberTheory.convDecimal2OthBase(-1587565, 35).Equals("-120Y0")) &&
			(NumberTheory.convDecimal2OthBase(-60466175, 36).Equals("-ZZZZZ")))
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0045() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convDecimal2OthBase() - format 0";
			TestCommonTools.consolePrintTestApiStart(45, testDescr);
			if (
			(NumberTheory.convDecimal2OthBase(0, 1, 0).Equals("")) &&
			(NumberTheory.convDecimal2OthBase(3, 1, 0).Equals("111")) &&
			(NumberTheory.convDecimal2OthBase(5, 2, 0).Equals("101")) &&
			(NumberTheory.convDecimal2OthBase(16, 3, 0).Equals("121")) &&
			(NumberTheory.convDecimal2OthBase(27, 4, 0).Equals("123")) &&
			(NumberTheory.convDecimal2OthBase(96, 5, 0).Equals("341")) &&
			(NumberTheory.convDecimal2OthBase(140, 6, 0).Equals("352")) &&
			(NumberTheory.convDecimal2OthBase(139, 7, 0).Equals("256")) &&
			(NumberTheory.convDecimal2OthBase(254, 8, 0).Equals("376")) &&
			(NumberTheory.convDecimal2OthBase(667, 9, 0).Equals("821")) &&
			(NumberTheory.convDecimal2OthBase(394, 10, 0).Equals("394")) &&
			(NumberTheory.convDecimal2OthBase(480, 11, 0).Equals("3A7")) &&
			(NumberTheory.convDecimal2OthBase(1511, 12, 0).Equals("A5B")) &&
			(NumberTheory.convDecimal2OthBase(1857, 13, 0).Equals("ACB")) &&
			(NumberTheory.convDecimal2OthBase(545, 14, 0).Equals("2AD")) &&
			(NumberTheory.convDecimal2OthBase(2689, 15, 0).Equals("BE4")) &&
			(NumberTheory.convDecimal2OthBase(4002, 16, 0).Equals("FA2")) &&
			(NumberTheory.convDecimal2OthBase(3168, 17, 0).Equals("AG6")) &&
			(NumberTheory.convDecimal2OthBase(5165, 18, 0).Equals("FGH")) &&
			(NumberTheory.convDecimal2OthBase(1067, 19, 0).Equals("2I3")) &&
			(NumberTheory.convDecimal2OthBase(3859, 20, 0).Equals("9CJ")) &&
			(NumberTheory.convDecimal2OthBase(8940, 21, 0).Equals("K5F")) &&
			(NumberTheory.convDecimal2OthBase(7727, 22, 0).Equals("FL5")) &&
			(NumberTheory.convDecimal2OthBase(781, 23, 0).Equals("1AM")) &&
			(NumberTheory.convDecimal2OthBase(3445, 24, 0).Equals("5ND")) &&
			(NumberTheory.convDecimal2OthBase(2320762, 25, 0).Equals("5ND5C")) &&
			(NumberTheory.convDecimal2OthBase(1739639, 26, 0).Equals("3KPB5")) &&
			(NumberTheory.convDecimal2OthBase(10090258, 27, 0).Equals("IQH67")) &&
			(NumberTheory.convDecimal2OthBase(17048390, 28, 0).Equals("RKHB2")) &&
			(NumberTheory.convDecimal2OthBase(5942128, 29, 0).Equals("8BIFS")) &&
			(NumberTheory.convDecimal2OthBase(2417981, 30, 0).Equals("2TGJB")) &&
			(NumberTheory.convDecimal2OthBase(6315103, 31, 0).Equals("6PUC0")) &&
			(NumberTheory.convDecimal2OthBase(12609504, 32, 0).Equals("C0PV0")) &&
			(NumberTheory.convDecimal2OthBase(36763583, 33, 0).Equals("V000W")) &&
			(NumberTheory.convDecimal2OthBase(31721794, 34, 0).Equals("NP2XW")) &&
			(NumberTheory.convDecimal2OthBase(1587565, 35, 0).Equals("120Y0")) &&
			(NumberTheory.convDecimal2OthBase(60466175, 36, 0).Equals("ZZZZZ")) &&
			(NumberTheory.convDecimal2OthBase(-0, 1, 0).Equals("")) &&
			(NumberTheory.convDecimal2OthBase(-3, 1, 0).Equals("-111")) &&
			(NumberTheory.convDecimal2OthBase(-5, 2, 0).Equals("-101")) &&
			(NumberTheory.convDecimal2OthBase(-16, 3, 0).Equals("-121")) &&
			(NumberTheory.convDecimal2OthBase(-27, 4, 0).Equals("-123")) &&
			(NumberTheory.convDecimal2OthBase(-96, 5, 0).Equals("-341")) &&
			(NumberTheory.convDecimal2OthBase(-140, 6, 0).Equals("-352")) &&
			(NumberTheory.convDecimal2OthBase(-139, 7, 0).Equals("-256")) &&
			(NumberTheory.convDecimal2OthBase(-254, 8, 0).Equals("-376")) &&
			(NumberTheory.convDecimal2OthBase(-667, 9, 0).Equals("-821")) &&
			(NumberTheory.convDecimal2OthBase(-394, 10, 0).Equals("-394")) &&
			(NumberTheory.convDecimal2OthBase(-480, 11, 0).Equals("-3A7")) &&
			(NumberTheory.convDecimal2OthBase(-1511, 12, 0).Equals("-A5B")) &&
			(NumberTheory.convDecimal2OthBase(-1857, 13, 0).Equals("-ACB")) &&
			(NumberTheory.convDecimal2OthBase(-545, 14, 0).Equals("-2AD")) &&
			(NumberTheory.convDecimal2OthBase(-2689, 15, 0).Equals("-BE4")) &&
			(NumberTheory.convDecimal2OthBase(-4002, 16, 0).Equals("-FA2")) &&
			(NumberTheory.convDecimal2OthBase(-3168, 17, 0).Equals("-AG6")) &&
			(NumberTheory.convDecimal2OthBase(-5165, 18, 0).Equals("-FGH")) &&
			(NumberTheory.convDecimal2OthBase(-1067, 19, 0).Equals("-2I3")) &&
			(NumberTheory.convDecimal2OthBase(-3859, 20, 0).Equals("-9CJ")) &&
			(NumberTheory.convDecimal2OthBase(-8940, 21, 0).Equals("-K5F")) &&
			(NumberTheory.convDecimal2OthBase(-7727, 22, 0).Equals("-FL5")) &&
			(NumberTheory.convDecimal2OthBase(-781, 23, 0).Equals("-1AM")) &&
			(NumberTheory.convDecimal2OthBase(-3445, 24, 0).Equals("-5ND")) &&
			(NumberTheory.convDecimal2OthBase(-2320762, 25, 0).Equals("-5ND5C")) &&
			(NumberTheory.convDecimal2OthBase(-1739639, 26, 0).Equals("-3KPB5")) &&
			(NumberTheory.convDecimal2OthBase(-10090258, 27, 0).Equals("-IQH67")) &&
			(NumberTheory.convDecimal2OthBase(-17048390, 28, 0).Equals("-RKHB2")) &&
			(NumberTheory.convDecimal2OthBase(-5942128, 29, 0).Equals("-8BIFS")) &&
			(NumberTheory.convDecimal2OthBase(-2417981, 30, 0).Equals("-2TGJB")) &&
			(NumberTheory.convDecimal2OthBase(-6315103, 31, 0).Equals("-6PUC0")) &&
			(NumberTheory.convDecimal2OthBase(-12609504, 32, 0).Equals("-C0PV0")) &&
			(NumberTheory.convDecimal2OthBase(-36763583, 33, 0).Equals("-V000W")) &&
			(NumberTheory.convDecimal2OthBase(-31721794, 34, 0).Equals("-NP2XW")) &&
			(NumberTheory.convDecimal2OthBase(-1587565, 35, 0).Equals("-120Y0")) &&
			(NumberTheory.convDecimal2OthBase(-60466175, 36, 0).Equals("-ZZZZZ")))
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0046() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convDecimal2OthBase() - format 1";
			TestCommonTools.consolePrintTestApiStart(46, testDescr);
			if (
			(NumberTheory.convDecimal2OthBase(0, 1, 1).Equals("b1.")) &&
			(NumberTheory.convDecimal2OthBase(3, 1, 1).Equals("b1.111")) &&
			(NumberTheory.convDecimal2OthBase(5, 2, 1).Equals("b2.101")) &&
			(NumberTheory.convDecimal2OthBase(16, 3, 1).Equals("b3.121")) &&
			(NumberTheory.convDecimal2OthBase(27, 4, 1).Equals("b4.123")) &&
			(NumberTheory.convDecimal2OthBase(96, 5, 1).Equals("b5.341")) &&
			(NumberTheory.convDecimal2OthBase(140, 6, 1).Equals("b6.352")) &&
			(NumberTheory.convDecimal2OthBase(139, 7, 1).Equals("b7.256")) &&
			(NumberTheory.convDecimal2OthBase(254, 8, 1).Equals("b8.376")) &&
			(NumberTheory.convDecimal2OthBase(667, 9, 1).Equals("b9.821")) &&
			(NumberTheory.convDecimal2OthBase(394, 10, 1).Equals("b10.394")) &&
			(NumberTheory.convDecimal2OthBase(480, 11, 1).Equals("b11.3A7")) &&
			(NumberTheory.convDecimal2OthBase(1511, 12, 1).Equals("b12.A5B")) &&
			(NumberTheory.convDecimal2OthBase(1857, 13, 1).Equals("b13.ACB")) &&
			(NumberTheory.convDecimal2OthBase(545, 14, 1).Equals("b14.2AD")) &&
			(NumberTheory.convDecimal2OthBase(2689, 15, 1).Equals("b15.BE4")) &&
			(NumberTheory.convDecimal2OthBase(4002, 16, 1).Equals("b16.FA2")) &&
			(NumberTheory.convDecimal2OthBase(3168, 17, 1).Equals("b17.AG6")) &&
			(NumberTheory.convDecimal2OthBase(5165, 18, 1).Equals("b18.FGH")) &&
			(NumberTheory.convDecimal2OthBase(1067, 19, 1).Equals("b19.2I3")) &&
			(NumberTheory.convDecimal2OthBase(3859, 20, 1).Equals("b20.9CJ")) &&
			(NumberTheory.convDecimal2OthBase(8940, 21, 1).Equals("b21.K5F")) &&
			(NumberTheory.convDecimal2OthBase(7727, 22, 1).Equals("b22.FL5")) &&
			(NumberTheory.convDecimal2OthBase(781, 23, 1).Equals("b23.1AM")) &&
			(NumberTheory.convDecimal2OthBase(3445, 24, 1).Equals("b24.5ND")) &&
			(NumberTheory.convDecimal2OthBase(2320762, 25, 1).Equals("b25.5ND5C")) &&
			(NumberTheory.convDecimal2OthBase(1739639, 26, 1).Equals("b26.3KPB5")) &&
			(NumberTheory.convDecimal2OthBase(10090258, 27, 1).Equals("b27.IQH67")) &&
			(NumberTheory.convDecimal2OthBase(17048390, 28, 1).Equals("b28.RKHB2")) &&
			(NumberTheory.convDecimal2OthBase(5942128, 29, 1).Equals("b29.8BIFS")) &&
			(NumberTheory.convDecimal2OthBase(2417981, 30, 1).Equals("b30.2TGJB")) &&
			(NumberTheory.convDecimal2OthBase(6315103, 31, 1).Equals("b31.6PUC0")) &&
			(NumberTheory.convDecimal2OthBase(12609504, 32, 1).Equals("b32.C0PV0")) &&
			(NumberTheory.convDecimal2OthBase(36763583, 33, 1).Equals("b33.V000W")) &&
			(NumberTheory.convDecimal2OthBase(31721794, 34, 1).Equals("b34.NP2XW")) &&
			(NumberTheory.convDecimal2OthBase(1587565, 35, 1).Equals("b35.120Y0")) &&
			(NumberTheory.convDecimal2OthBase(60466175, 36, 1).Equals("b36.ZZZZZ")) &&
			(NumberTheory.convDecimal2OthBase(-0, 1, 1).Equals("b1.")) &&
			(NumberTheory.convDecimal2OthBase(-3, 1, 1).Equals("-b1.111")) &&
			(NumberTheory.convDecimal2OthBase(-5, 2, 1).Equals("-b2.101")) &&
			(NumberTheory.convDecimal2OthBase(-16, 3, 1).Equals("-b3.121")) &&
			(NumberTheory.convDecimal2OthBase(-27, 4, 1).Equals("-b4.123")) &&
			(NumberTheory.convDecimal2OthBase(-96, 5, 1).Equals("-b5.341")) &&
			(NumberTheory.convDecimal2OthBase(-140, 6, 1).Equals("-b6.352")) &&
			(NumberTheory.convDecimal2OthBase(-139, 7, 1).Equals("-b7.256")) &&
			(NumberTheory.convDecimal2OthBase(-254, 8, 1).Equals("-b8.376")) &&
			(NumberTheory.convDecimal2OthBase(-667, 9, 1).Equals("-b9.821")) &&
			(NumberTheory.convDecimal2OthBase(-394, 10, 1).Equals("-b10.394")) &&
			(NumberTheory.convDecimal2OthBase(-480, 11, 1).Equals("-b11.3A7")) &&
			(NumberTheory.convDecimal2OthBase(-1511, 12, 1).Equals("-b12.A5B")) &&
			(NumberTheory.convDecimal2OthBase(-1857, 13, 1).Equals("-b13.ACB")) &&
			(NumberTheory.convDecimal2OthBase(-545, 14, 1).Equals("-b14.2AD")) &&
			(NumberTheory.convDecimal2OthBase(-2689, 15, 1).Equals("-b15.BE4")) &&
			(NumberTheory.convDecimal2OthBase(-4002, 16, 1).Equals("-b16.FA2")) &&
			(NumberTheory.convDecimal2OthBase(-3168, 17, 1).Equals("-b17.AG6")) &&
			(NumberTheory.convDecimal2OthBase(-5165, 18, 1).Equals("-b18.FGH")) &&
			(NumberTheory.convDecimal2OthBase(-1067, 19, 1).Equals("-b19.2I3")) &&
			(NumberTheory.convDecimal2OthBase(-3859, 20, 1).Equals("-b20.9CJ")) &&
			(NumberTheory.convDecimal2OthBase(-8940, 21, 1).Equals("-b21.K5F")) &&
			(NumberTheory.convDecimal2OthBase(-7727, 22, 1).Equals("-b22.FL5")) &&
			(NumberTheory.convDecimal2OthBase(-781, 23, 1).Equals("-b23.1AM")) &&
			(NumberTheory.convDecimal2OthBase(-3445, 24, 1).Equals("-b24.5ND")) &&
			(NumberTheory.convDecimal2OthBase(-2320762, 25, 1).Equals("-b25.5ND5C")) &&
			(NumberTheory.convDecimal2OthBase(-1739639, 26, 1).Equals("-b26.3KPB5")) &&
			(NumberTheory.convDecimal2OthBase(-10090258, 27, 1).Equals("-b27.IQH67")) &&
			(NumberTheory.convDecimal2OthBase(-17048390, 28, 1).Equals("-b28.RKHB2")) &&
			(NumberTheory.convDecimal2OthBase(-5942128, 29, 1).Equals("-b29.8BIFS")) &&
			(NumberTheory.convDecimal2OthBase(-2417981, 30, 1).Equals("-b30.2TGJB")) &&
			(NumberTheory.convDecimal2OthBase(-6315103, 31, 1).Equals("-b31.6PUC0")) &&
			(NumberTheory.convDecimal2OthBase(-12609504, 32, 1).Equals("-b32.C0PV0")) &&
			(NumberTheory.convDecimal2OthBase(-36763583, 33, 1).Equals("-b33.V000W")) &&
			(NumberTheory.convDecimal2OthBase(-31721794, 34, 1).Equals("-b34.NP2XW")) &&
			(NumberTheory.convDecimal2OthBase(-1587565, 35, 1).Equals("-b35.120Y0")) &&
			(NumberTheory.convDecimal2OthBase(-60466175, 36, 1).Equals("-b36.ZZZZZ"))
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0047() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convDecimal2OthBase() - format 2";
			TestCommonTools.consolePrintTestApiStart(47, testDescr);
			if (
			(NumberTheory.convDecimal2OthBase(0, 1, 2).Equals("b1.")) &&
			(NumberTheory.convDecimal2OthBase(3, 1, 2).Equals("b1.111")) &&
			(NumberTheory.convDecimal2OthBase(5, 2, 2).Equals("b.101")) &&
			(NumberTheory.convDecimal2OthBase(16, 3, 2).Equals("b3.121")) &&
			(NumberTheory.convDecimal2OthBase(27, 4, 2).Equals("b4.123")) &&
			(NumberTheory.convDecimal2OthBase(96, 5, 2).Equals("b5.341")) &&
			(NumberTheory.convDecimal2OthBase(140, 6, 2).Equals("b6.352")) &&
			(NumberTheory.convDecimal2OthBase(139, 7, 2).Equals("b7.256")) &&
			(NumberTheory.convDecimal2OthBase(254, 8, 2).Equals("o.376")) &&
			(NumberTheory.convDecimal2OthBase(667, 9, 2).Equals("b9.821")) &&
			(NumberTheory.convDecimal2OthBase(394, 10, 2).Equals("b10.394")) &&
			(NumberTheory.convDecimal2OthBase(480, 11, 2).Equals("b11.3A7")) &&
			(NumberTheory.convDecimal2OthBase(1511, 12, 2).Equals("b12.A5B")) &&
			(NumberTheory.convDecimal2OthBase(1857, 13, 2).Equals("b13.ACB")) &&
			(NumberTheory.convDecimal2OthBase(545, 14, 2).Equals("b14.2AD")) &&
			(NumberTheory.convDecimal2OthBase(2689, 15, 2).Equals("b15.BE4")) &&
			(NumberTheory.convDecimal2OthBase(4002, 16, 2).Equals("h.FA2")) &&
			(NumberTheory.convDecimal2OthBase(3168, 17, 2).Equals("b17.AG6")) &&
			(NumberTheory.convDecimal2OthBase(5165, 18, 2).Equals("b18.FGH")) &&
			(NumberTheory.convDecimal2OthBase(1067, 19, 2).Equals("b19.2I3")) &&
			(NumberTheory.convDecimal2OthBase(3859, 20, 2).Equals("b20.9CJ")) &&
			(NumberTheory.convDecimal2OthBase(8940, 21, 2).Equals("b21.K5F")) &&
			(NumberTheory.convDecimal2OthBase(7727, 22, 2).Equals("b22.FL5")) &&
			(NumberTheory.convDecimal2OthBase(781, 23, 2).Equals("b23.1AM")) &&
			(NumberTheory.convDecimal2OthBase(3445, 24, 2).Equals("b24.5ND")) &&
			(NumberTheory.convDecimal2OthBase(2320762, 25, 2).Equals("b25.5ND5C")) &&
			(NumberTheory.convDecimal2OthBase(1739639, 26, 2).Equals("b26.3KPB5")) &&
			(NumberTheory.convDecimal2OthBase(10090258, 27, 2).Equals("b27.IQH67")) &&
			(NumberTheory.convDecimal2OthBase(17048390, 28, 2).Equals("b28.RKHB2")) &&
			(NumberTheory.convDecimal2OthBase(5942128, 29, 2).Equals("b29.8BIFS")) &&
			(NumberTheory.convDecimal2OthBase(2417981, 30, 2).Equals("b30.2TGJB")) &&
			(NumberTheory.convDecimal2OthBase(6315103, 31, 2).Equals("b31.6PUC0")) &&
			(NumberTheory.convDecimal2OthBase(12609504, 32, 2).Equals("b32.C0PV0")) &&
			(NumberTheory.convDecimal2OthBase(36763583, 33, 2).Equals("b33.V000W")) &&
			(NumberTheory.convDecimal2OthBase(31721794, 34, 2).Equals("b34.NP2XW")) &&
			(NumberTheory.convDecimal2OthBase(1587565, 35, 2).Equals("b35.120Y0")) &&
			(NumberTheory.convDecimal2OthBase(60466175, 36, 2).Equals("b36.ZZZZZ")) &&
			(NumberTheory.convDecimal2OthBase(-0, 1, 2).Equals("b1.")) &&
			(NumberTheory.convDecimal2OthBase(-3, 1, 2).Equals("-b1.111")) &&
			(NumberTheory.convDecimal2OthBase(-5, 2, 2).Equals("-b.101")) &&
			(NumberTheory.convDecimal2OthBase(-16, 3, 2).Equals("-b3.121")) &&
			(NumberTheory.convDecimal2OthBase(-27, 4, 2).Equals("-b4.123")) &&
			(NumberTheory.convDecimal2OthBase(-96, 5, 2).Equals("-b5.341")) &&
			(NumberTheory.convDecimal2OthBase(-140, 6, 2).Equals("-b6.352")) &&
			(NumberTheory.convDecimal2OthBase(-139, 7, 2).Equals("-b7.256")) &&
			(NumberTheory.convDecimal2OthBase(-254, 8, 2).Equals("-o.376")) &&
			(NumberTheory.convDecimal2OthBase(-667, 9, 2).Equals("-b9.821")) &&
			(NumberTheory.convDecimal2OthBase(-394, 10, 2).Equals("-b10.394")) &&
			(NumberTheory.convDecimal2OthBase(-480, 11, 2).Equals("-b11.3A7")) &&
			(NumberTheory.convDecimal2OthBase(-1511, 12, 2).Equals("-b12.A5B")) &&
			(NumberTheory.convDecimal2OthBase(-1857, 13, 2).Equals("-b13.ACB")) &&
			(NumberTheory.convDecimal2OthBase(-545, 14, 2).Equals("-b14.2AD")) &&
			(NumberTheory.convDecimal2OthBase(-2689, 15, 2).Equals("-b15.BE4")) &&
			(NumberTheory.convDecimal2OthBase(-4002, 16, 2).Equals("-h.FA2")) &&
			(NumberTheory.convDecimal2OthBase(-3168, 17, 2).Equals("-b17.AG6")) &&
			(NumberTheory.convDecimal2OthBase(-5165, 18, 2).Equals("-b18.FGH")) &&
			(NumberTheory.convDecimal2OthBase(-1067, 19, 2).Equals("-b19.2I3")) &&
			(NumberTheory.convDecimal2OthBase(-3859, 20, 2).Equals("-b20.9CJ")) &&
			(NumberTheory.convDecimal2OthBase(-8940, 21, 2).Equals("-b21.K5F")) &&
			(NumberTheory.convDecimal2OthBase(-7727, 22, 2).Equals("-b22.FL5")) &&
			(NumberTheory.convDecimal2OthBase(-781, 23, 2).Equals("-b23.1AM")) &&
			(NumberTheory.convDecimal2OthBase(-3445, 24, 2).Equals("-b24.5ND")) &&
			(NumberTheory.convDecimal2OthBase(-2320762, 25, 2).Equals("-b25.5ND5C")) &&
			(NumberTheory.convDecimal2OthBase(-1739639, 26, 2).Equals("-b26.3KPB5")) &&
			(NumberTheory.convDecimal2OthBase(-10090258, 27, 2).Equals("-b27.IQH67")) &&
			(NumberTheory.convDecimal2OthBase(-17048390, 28, 2).Equals("-b28.RKHB2")) &&
			(NumberTheory.convDecimal2OthBase(-5942128, 29, 2).Equals("-b29.8BIFS")) &&
			(NumberTheory.convDecimal2OthBase(-2417981, 30, 2).Equals("-b30.2TGJB")) &&
			(NumberTheory.convDecimal2OthBase(-6315103, 31, 2).Equals("-b31.6PUC0")) &&
			(NumberTheory.convDecimal2OthBase(-12609504, 32, 2).Equals("-b32.C0PV0")) &&
			(NumberTheory.convDecimal2OthBase(-36763583, 33, 2).Equals("-b33.V000W")) &&
			(NumberTheory.convDecimal2OthBase(-31721794, 34, 2).Equals("-b34.NP2XW")) &&
			(NumberTheory.convDecimal2OthBase(-1587565, 35, 2).Equals("-b35.120Y0")) &&
			(NumberTheory.convDecimal2OthBase(-60466175, 36, 2).Equals("-b36.ZZZZZ"))
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0048() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "convOthBase2Decimal() - special cases";
			TestCommonTools.consolePrintTestApiStart(48, testDescr);
			double potNaN1 = NumberTheory.convOthBase2Decimal((String)null);
			double potNaN2 = NumberTheory.convOthBase2Decimal("1");
			double potNaN3 = NumberTheory.convOthBase2Decimal("12");
			double potNaN4 = NumberTheory.convOthBase2Decimal("b1.123");
			double potNaN5 = NumberTheory.convOthBase2Decimal("b37.123");
			if (
			(Double.IsNaN(potNaN1)) &&
			(Double.IsNaN(potNaN2)) &&
			(Double.IsNaN(potNaN3)) &&
			(Double.IsNaN(potNaN4)) &&
			(Double.IsNaN(potNaN5))
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0049() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getMissingUserDefinedArguments()";
			TestCommonTools.consolePrintTestApiStart(49, testDescr);
			Expression e = new Expression("sin(x) + cos(x) + f(x,y) + x + y / z + 2*pi");
			String[] misArgs = e.getMissingUserDefinedArguments();
			if (
			(misArgs[0].Equals("x")) &&
			(misArgs[1].Equals("y")) &&
			(misArgs[2].Equals("z")) &&
			(misArgs.Length == 3)
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0050() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "getMissingUserDefinedFunctions()";
			TestCommonTools.consolePrintTestApiStart(50, testDescr);
			Expression e = new Expression("sin(x) + cos(x) + f(x,y) + x + y / z + 2*pi");
			String[] misFun = e.getMissingUserDefinedFunctions();
			if (
			(misFun[0].Equals("f")) &&
			(misFun.Length == 1)
			)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0051() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Default radian / degrees mode";
			TestCommonTools.consolePrintTestApiStart(51, testDescr);
			if ((mXparser.checkIfRadiansMode() == true) && (mXparser.checkIfDegreesMode() == false))
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0052() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Set to degrees mode";
			TestCommonTools.consolePrintTestApiStart(52, testDescr);
			mXparser.setDegreesMode();
			if ((mXparser.checkIfRadiansMode() == false) && (mXparser.checkIfDegreesMode() == true))
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0053() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Set to degrees mode";
			TestCommonTools.consolePrintTestApiStart(53, testDescr);
			mXparser.setRadiansMode();
			if ((mXparser.checkIfRadiansMode() == true) && (mXparser.checkIfDegreesMode() == false))
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0054() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "roundHalfUp";
			TestCommonTools.consolePrintTestApiStart(54, testDescr);
			if (
			(MathFunctions.roundHalfUp(0.0, 0) == 0.0) &&
			(MathFunctions.roundHalfUp(0.0, 1) == 0.0) &&
			(MathFunctions.roundHalfUp(0.0, 2) == 0.0) &&
			(MathFunctions.roundHalfUp(0.0, 100) == 0.0) &&
			(Double.IsNaN(MathFunctions.roundHalfUp(0.0, -1))) &&
			(MathFunctions.roundHalfUp(1.0, 0) == 1.0) &&
			(MathFunctions.roundHalfUp(1.0, 1) == 1.0) &&
			(MathFunctions.roundHalfUp(1.0, 2) == 1.0) &&
			(MathFunctions.roundHalfUp(1.0, 100) == 1.0) &&
			(Double.IsNaN(MathFunctions.roundHalfUp(1.0, -1))) &&
			(MathFunctions.roundHalfUp(9856.0, 0) == 9856.0) &&
			(MathFunctions.roundHalfUp(9856.0, 1) == 9856.0) &&
			(MathFunctions.roundHalfUp(9856.0, 2) == 9856.0) &&
			(MathFunctions.roundHalfUp(9856.0, 100) == 9856.0) &&
			(Double.IsNaN(MathFunctions.roundHalfUp(9856.0, -1))) &&
			(MathFunctions.roundHalfUp(9.856E303, 0) == 9.856E303) &&
			(MathFunctions.roundHalfUp(9.856E303, 1) == 9.856E303) &&
			(MathFunctions.roundHalfUp(9.856E303, 2) == 9.856E303) &&
			(MathFunctions.roundHalfUp(9.856E303, 100) == 9.856E303) &&
			(Double.IsNaN(MathFunctions.roundHalfUp(9.856E303, -1))) &&
			(MathFunctions.roundHalfUp(-1.0, 0) == -1.0) &&
			(MathFunctions.roundHalfUp(-1.0, 1) == -1.0) &&
			(MathFunctions.roundHalfUp(-1.0, 2) == -1.0) &&
			(MathFunctions.roundHalfUp(-1.0, 100) == -1.0) &&
			(Double.IsNaN(MathFunctions.roundHalfUp(-1.0, -1))) &&
			(MathFunctions.roundHalfUp(-9856.0, 0) == -9856.0) &&
			(MathFunctions.roundHalfUp(-9856.0, 1) == -9856.0) &&
			(MathFunctions.roundHalfUp(-9856.0, 2) == -9856.0) &&
			(MathFunctions.roundHalfUp(-9856.0, 100) == -9856.0) &&
			(Double.IsNaN(MathFunctions.roundHalfUp(-9856.0, -1))) &&
			(MathFunctions.roundHalfUp(-9.856E303, 0) == -9.856E303) &&
			(MathFunctions.roundHalfUp(-9.856E303, 1) == -9.856E303) &&
			(MathFunctions.roundHalfUp(-9.856E303, 2) == -9.856E303) &&
			(MathFunctions.roundHalfUp(-9.856E303, 100) == -9.856E303) &&
			(Double.IsNaN(MathFunctions.roundHalfUp(-9.856E303, -1))) &&
			(MathFunctions.roundHalfUp(1.0E-5, 5) == 1.0E-5) &&
			(MathFunctions.roundHalfUp(1.0E-5, 6) == 1.0E-5) &&
			(MathFunctions.roundHalfUp(1.0E-5, 100) == 1.0E-5) &&
			(MathFunctions.roundHalfUp(1.0E-5, 500) == 1.0E-5) &&
			(MathFunctions.roundHalfUp(1.0E-5, 4) == 0.0) &&
			(MathFunctions.roundHalfUp(1.0E-5, 3) == 0.0) &&
			(MathFunctions.roundHalfUp(1.0E-5, 2) == 0.0) &&
			(MathFunctions.roundHalfUp(1.0E-5, 1) == 0.0) &&
			(MathFunctions.roundHalfUp(1.0E-5, 0) == 0.0) &&
			(MathFunctions.roundHalfUp(-1.0E-5, 5) == -1.0E-5) &&
			(MathFunctions.roundHalfUp(-1.0E-5, 6) == -1.0E-5) &&
			(MathFunctions.roundHalfUp(-1.0E-5, 100) == -1.0E-5) &&
			(MathFunctions.roundHalfUp(-1.0E-5, 500) == -1.0E-5) &&
			(MathFunctions.roundHalfUp(-1.0E-5, 4) == -0.0) &&
			(MathFunctions.roundHalfUp(-1.0E-5, 3) == -0.0) &&
			(MathFunctions.roundHalfUp(-1.0E-5, 2) == -0.0) &&
			(MathFunctions.roundHalfUp(-1.0E-5, 1) == -0.0) &&
			(MathFunctions.roundHalfUp(-1.0E-5, 0) == -0.0) &&
			(MathFunctions.roundHalfUp(10.000000000123, 14) == 10.000000000123) &&
			(MathFunctions.roundHalfUp(10.000000000123, 13) == 10.000000000123) &&
			(MathFunctions.roundHalfUp(10.000000000123, 12) == 10.000000000123) &&
			(MathFunctions.roundHalfUp(10.000000000123, 11) == 10.00000000012) &&
			(MathFunctions.roundHalfUp(10.000000000123, 10) == 10.0000000001) &&
			(MathFunctions.roundHalfUp(10.000000000123, 9) == 10.0) &&
			(MathFunctions.roundHalfUp(10.000000000123, 3) == 10.0) &&
			(MathFunctions.roundHalfUp(10.000000000123, 0) == 10.0) &&
			(MathFunctions.roundHalfUp(-10.000000000123, 14) == -10.000000000123) &&
			(MathFunctions.roundHalfUp(-10.000000000123, 13) == -10.000000000123) &&
			(MathFunctions.roundHalfUp(-10.000000000123, 12) == -10.000000000123) &&
			(MathFunctions.roundHalfUp(-10.000000000123, 11) == -10.00000000012) &&
			(MathFunctions.roundHalfUp(-10.000000000123, 10) == -10.0000000001) &&
			(MathFunctions.roundHalfUp(-10.000000000123, 9) == -10.0) &&
			(MathFunctions.roundHalfUp(-10.000000000123, 3) == -10.0) &&
			(MathFunctions.roundHalfUp(-10.000000000123, 0) == -10.0) &&
			(MathFunctions.roundHalfUp(100.444444444445, 200) == 100.444444444445) &&
			(MathFunctions.roundHalfUp(100.444444444445, 14) == 100.444444444445) &&
			(MathFunctions.roundHalfUp(100.444444444445, 13) == 100.444444444445) &&
			(MathFunctions.roundHalfUp(100.444444444445, 12) == 100.444444444445) &&
			(MathFunctions.roundHalfUp(100.444444444445, 11) == 100.44444444445) &&
			(MathFunctions.roundHalfUp(100.444444444445, 10) == 100.4444444444) &&
			(MathFunctions.roundHalfUp(100.444444444445, 9) == 100.444444444) &&
			(MathFunctions.roundHalfUp(100.444444444445, 8) == 100.44444444) &&
			(MathFunctions.roundHalfUp(100.444444444445, 7) == 100.4444444) &&
			(MathFunctions.roundHalfUp(100.444444444445, 6) == 100.444444) &&
			(MathFunctions.roundHalfUp(100.444444444445, 5) == 100.44444) &&
			(MathFunctions.roundHalfUp(100.444444444445, 4) == 100.4444) &&
			(MathFunctions.roundHalfUp(100.444444444445, 3) == 100.444) &&
			(MathFunctions.roundHalfUp(100.444444444445, 2) == 100.44) &&
			(MathFunctions.roundHalfUp(100.444444444445, 1) == 100.4) &&
			(MathFunctions.roundHalfUp(100.444444444445, 0) == 100.0) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 200) == -100.444444444445) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 14) == -100.444444444445) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 13) == -100.444444444445) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 12) == -100.444444444445) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 11) == -100.44444444445) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 10) == -100.4444444444) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 9) == -100.444444444) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 8) == -100.44444444) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 7) == -100.4444444) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 6) == -100.444444) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 5) == -100.44444) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 4) == -100.4444) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 3) == -100.444) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 2) == -100.44) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 1) == -100.4) &&
			(MathFunctions.roundHalfUp(-100.444444444445, 0) == -100.0) &&
			(MathFunctions.roundHalfUp(1.2345678907654321E9, 100) == 1.2345678907654321E9) &&
			(MathFunctions.roundHalfUp(1.2345678907654321E9, 8) == 1.2345678907654321E9) &&
			(MathFunctions.roundHalfUp(1.2345678907654321E9, 7) == 1.2345678907654321E9) &&
			(MathFunctions.roundHalfUp(1.2345678907654321E9, 6) == 1.234567890765432E9) &&
			(MathFunctions.roundHalfUp(1.2345678907654321E9, 5) == 1.23456789076543E9) &&
			(MathFunctions.roundHalfUp(1.2345678907654321E9, 4) == 1.2345678907654E9) &&
			(MathFunctions.roundHalfUp(1.2345678907654321E9, 3) == 1.234567890765E9) &&
			(MathFunctions.roundHalfUp(1.2345678907654321E9, 2) == 1.23456789077E9) &&
			(MathFunctions.roundHalfUp(1.2345678907654321E9, 1) == 1.2345678908E9) &&
			(MathFunctions.roundHalfUp(1.2345678907654321E9, 0) == 1.234567891E9) &&
			(MathFunctions.roundHalfUp(-1.2345678907654321E9, 100) == -1.2345678907654321E9) &&
			(MathFunctions.roundHalfUp(-1.2345678907654321E9, 8) == -1.2345678907654321E9) &&
			(MathFunctions.roundHalfUp(-1.2345678907654321E9, 7) == -1.2345678907654321E9) &&
			(MathFunctions.roundHalfUp(-1.2345678907654321E9, 6) == -1.234567890765432E9) &&
			(MathFunctions.roundHalfUp(-1.2345678907654321E9, 5) == -1.23456789076543E9) &&
			(MathFunctions.roundHalfUp(-1.2345678907654321E9, 4) == -1.2345678907654E9) &&
			(MathFunctions.roundHalfUp(-1.2345678907654321E9, 3) == -1.234567890765E9) &&
			(MathFunctions.roundHalfUp(-1.2345678907654321E9, 2) == -1.23456789077E9) &&
			(MathFunctions.roundHalfUp(-1.2345678907654321E9, 1) == -1.2345678908E9) &&
			(MathFunctions.roundHalfUp(-1.2345678907654321E9, 0) == -1.234567891E9) &&
			(MathFunctions.roundHalfUp(5.9999999999, 11) == 5.9999999999) &&
			(MathFunctions.roundHalfUp(5.9999999999, 10) == 5.9999999999) &&
			(MathFunctions.roundHalfUp(5.9999999999, 9) == 6.0) &&
			(MathFunctions.roundHalfUp(5.9999999999, 3) == 6.0) &&
			(MathFunctions.roundHalfUp(5.9999999999, 0) == 6.0) &&
			(MathFunctions.roundHalfUp(-5.9999999999, 11) == -5.9999999999) &&
			(MathFunctions.roundHalfUp(-5.9999999999, 10) == -5.9999999999) &&
			(MathFunctions.roundHalfUp(-5.9999999999, 9) == -6.0) &&
			(MathFunctions.roundHalfUp(-5.9999999999, 3) == -6.0) &&
			(MathFunctions.roundHalfUp(-5.9999999999, 0) == -6.0) &&
			(MathFunctions.roundHalfUp(1.2300000000000001E305, 307) == 1.2300000000000001E305) &&
			(MathFunctions.roundHalfUp(1.2300000000000001E305, 10) == 1.2300000000000001E305) &&
			(MathFunctions.roundHalfUp(1.2300000000000001E305, 1) == 1.2300000000000001E305) &&
			(MathFunctions.roundHalfUp(1.2300000000000001E305, 0) == 1.2300000000000001E305) &&
			(MathFunctions.roundHalfUp(-1.2300000000000001E305, 307) == -1.2300000000000001E305) &&
			(MathFunctions.roundHalfUp(-1.2300000000000001E305, 10) == -1.2300000000000001E305) &&
			(MathFunctions.roundHalfUp(-1.2300000000000001E305, 1) == -1.2300000000000001E305) &&
			(MathFunctions.roundHalfUp(-1.2300000000000001E305, 0) == -1.2300000000000001E305) &&
			(Double.IsNaN(MathFunctions.roundHalfUp(Double.NaN, 0))) &&
			(MathFunctions.roundHalfUp(Double.PositiveInfinity, 100) == Double.PositiveInfinity) &&
			(MathFunctions.roundHalfUp(Double.NegativeInfinity, 100) == Double.NegativeInfinity)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0055() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "To Mixed fraction";
			TestCommonTools.consolePrintTestApiStart(55, testDescr);
			if (
			(NumberTheory.toMixedFractionString(0.0).Equals("0")) &&
			(NumberTheory.toMixedFractionString(1.0).Equals("1")) &&
			(NumberTheory.toMixedFractionString(2.0).Equals("2")) &&
			(NumberTheory.toMixedFractionString(1234567890.0).Equals("1234567890")) &&
			(NumberTheory.toMixedFractionString(-1.0).Equals("-1")) &&
			(NumberTheory.toMixedFractionString(-2.0).Equals("-2")) &&
			(NumberTheory.toMixedFractionString(-1234567890.0).Equals("-1234567890")) &&
			(NumberTheory.toMixedFractionString(1.0 / 2.0).Equals("1/2")) &&
			(NumberTheory.toMixedFractionString(-1.0 / 2.0).Equals("-1/2")) &&
			(NumberTheory.toMixedFractionString(2.0 / 3.0).Equals("2/3")) &&
			(NumberTheory.toMixedFractionString(-2.0 / 3.0).Equals("-2/3")) &&
			(NumberTheory.toMixedFractionString(263.0 / 326.0).Equals("263/326")) &&
			(NumberTheory.toMixedFractionString(-263.0 / 326.0).Equals("-263/326")) &&
			(NumberTheory.toMixedFractionString(2.0 + 5.0 / 6.0).Equals("2+5/6")) &&
			(NumberTheory.toMixedFractionString(-2.0 - 5.0 / 6.0).Equals("-2-5/6")) &&
			(NumberTheory.toMixedFractionString(2 + 263.0 / 326.0).Equals("2+263/326")) &&
			(NumberTheory.toMixedFractionString(-2 - 263.0 / 326.0).Equals("-2-263/326")) &&
			(NumberTheory.toMixedFractionString(20 + 263.0 / 326.0).Equals("20+263/326")) &&
			(NumberTheory.toMixedFractionString(-20 - 263.0 / 326.0).Equals("-20-263/326")) &&
			(NumberTheory.toMixedFractionString(200 + 263.0 / 326.0).Equals("200+263/326")) &&
			(NumberTheory.toMixedFractionString(-200 - 263.0 / 326.0).Equals("-200-263/326")) &&
			(NumberTheory.toMixedFractionString(2000 + 263.0 / 326.0).Equals("2000+263/326")) &&
			(NumberTheory.toMixedFractionString(-2000 - 263.0 / 326.0).Equals("-2000-263/326")) &&
			(NumberTheory.toMixedFractionString(20000 + 263.0 / 326.0).Equals("20000+263/326")) &&
			(NumberTheory.toMixedFractionString(-20000 - 263.0 / 326.0).Equals("-20000-263/326")) &&
			(NumberTheory.toMixedFractionString(200000 + 263.0 / 326.0).Equals("200000+263/326")) &&
			(NumberTheory.toMixedFractionString(-200000 - 263.0 / 326.0).Equals("-200000-263/326")) &&
			(NumberTheory.toMixedFractionString(2000000 + 263.0 / 326.0).Equals("2000000+263/326")) &&
			(NumberTheory.toMixedFractionString(-2000000 - 263.0 / 326.0).Equals("-2000000-263/326")) &&
			(NumberTheory.toMixedFractionString(20000000 + 263.0 / 326.0).Equals("20000000+263/326")) &&
			(NumberTheory.toMixedFractionString(-20000000 - 263.0 / 326.0).Equals("-20000000-263/326")) &&
			(NumberTheory.toMixedFractionString(200000000 + 263.0 / 326.0).Equals("200000000+263/326")) &&
			(NumberTheory.toMixedFractionString(-200000000 - 263.0 / 326.0).Equals("-200000000-263/326")) &&
			(NumberTheory.toMixedFractionString(2000000000 + 263.0 / 326.0).Equals("2000000000+263/326")) &&
			(NumberTheory.toMixedFractionString(-2000000000 - 263.0 / 326.0).Equals("-2000000000-263/326")) &&
			(NumberTheory.toMixedFractionString(20000000000.0 + 263.0 / 326.0).Equals("20000000000+263/326")) &&
			(NumberTheory.toMixedFractionString(-20000000000.0 - 263.0 / 326.0).Equals("-20000000000-263/326"))
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0056() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "To fraction";
			TestCommonTools.consolePrintTestApiStart(56, testDescr);
			if (
			(NumberTheory.toFractionString(0.0).Equals("0")) &&
			(NumberTheory.toFractionString(1.0).Equals("1")) &&
			(NumberTheory.toFractionString(2.0).Equals("2")) &&
			(NumberTheory.toFractionString(1234567890.0).Equals("1234567890")) &&
			(NumberTheory.toFractionString(-1.0).Equals("-1")) &&
			(NumberTheory.toFractionString(-2.0).Equals("-2")) &&
			(NumberTheory.toFractionString(-1234567890.0).Equals("-1234567890")) &&
			(NumberTheory.toFractionString(1.0 / 2.0).Equals("1/2")) &&
			(NumberTheory.toFractionString(-1.0 / 2.0).Equals("-1/2")) &&
			(NumberTheory.toFractionString(2.0 / 3.0).Equals("2/3")) &&
			(NumberTheory.toFractionString(-2.0 / 3.0).Equals("-2/3")) &&
			(NumberTheory.toFractionString(263.0 / 326.0).Equals("263/326")) &&
			(NumberTheory.toFractionString(-263.0 / 326.0).Equals("-263/326")) &&
			(NumberTheory.toFractionString(17.0 / 6.0).Equals("17/6")) &&
			(NumberTheory.toFractionString(-17.0 / 6.0).Equals("-17/6")) &&
			(NumberTheory.toFractionString(915.0 / 326.0).Equals("915/326")) &&
			(NumberTheory.toFractionString(-915.0 / 326.0).Equals("-915/326")) &&
			(NumberTheory.toFractionString(6783.0 / 326.0).Equals("6783/326")) &&
			(NumberTheory.toFractionString(-6783.0 / 326.0).Equals("-6783/326")) &&
			(NumberTheory.toFractionString(65463.0 / 326.0).Equals("65463/326")) &&
			(NumberTheory.toFractionString(-65463.0 / 326.0).Equals("-65463/326")) &&
			(NumberTheory.toFractionString(652263.0 / 326.0).Equals("652263/326")) &&
			(NumberTheory.toFractionString(-652263.0 / 326.0).Equals("-652263/326")) &&
			(NumberTheory.toFractionString(6520263.0 / 326.0).Equals("6520263/326")) &&
			(NumberTheory.toFractionString(-6520263.0 / 326.0).Equals("-6520263/326")) &&
			(NumberTheory.toFractionString(65200263.0 / 326.0).Equals("65200263/326")) &&
			(NumberTheory.toFractionString(-65200263.0 / 326.0).Equals("-65200263/326")) &&
			(NumberTheory.toFractionString(652000263.0 / 326.0).Equals("652000263/326")) &&
			(NumberTheory.toFractionString(-652000263.0 / 326.0).Equals("-652000263/326")) &&
			(NumberTheory.toFractionString(6520000263.0 / 326.0).Equals("6520000263/326")) &&
			(NumberTheory.toFractionString(-6520000263.0 / 326.0).Equals("-6520000263/326")) &&
			(NumberTheory.toFractionString(65200000263.0 / 326.0).Equals("65200000263/326")) &&
			(NumberTheory.toFractionString(-65200000263.0 / 326.0).Equals("-65200000263/326")) &&
			(NumberTheory.toFractionString(652000000263.0 / 326.0).Equals("652000000263/326")) &&
			(NumberTheory.toFractionString(-652000000263.0 / 326.0).Equals("-652000000263/326")) &&
			(NumberTheory.toFractionString(6520000000263.0 / 326.0).Equals("6520000000263/326")) &&
			(NumberTheory.toFractionString(-6520000000263.0 / 326.0).Equals("-6520000000263/326"))
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0057() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Variadic user function";
			TestCommonTools.consolePrintTestApiStart(57, testDescr);
			Function f = new Function("f(...) = sum( i, 1, [npar], par(i) )");
			if (
			(f.calculate(1) == 1) &&
			(f.calculate(1, 2) == 3) &&
			(f.calculate(1, 2, 3) == 6) &&
			(f.calculate(1, 2, 3, 4) == 10) &&
			(f.calculate(1, 2, 3, 4, 5) == 15)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0058() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Variadic user function with extension";
			TestCommonTools.consolePrintTestApiStart(58, testDescr);
			FunExtVar gx = new FunExtVar();
			Function g = new Function("g", gx);
			if (
			(g.calculate(1) == 1) &&
			(g.calculate(1, 2) == 3) &&
			(g.calculate(1, 2, 3) == 6) &&
			(g.calculate(1, 2, 3, 4) == 10) &&
			(g.calculate(1, 2, 3, 4, 5) == 15)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0059() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Almost int rounding disable / enable";
			TestCommonTools.consolePrintTestApiStart(59, testDescr);
			bool u1 = mXparser.checkIfAlmostIntRounding();
			mXparser.disableAlmostIntRounding();
			bool u2 = mXparser.checkIfAlmostIntRounding();
			mXparser.enableAlmostIntRounding();
			bool u3 = mXparser.checkIfAlmostIntRounding();
			if ((u1 == true) && (u2 == false) && (u3 == true))
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0060() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "StringIndexOutOfBoundsException asking for tokens of empty expression #135";
			TestCommonTools.consolePrintTestApiStart(60, testDescr);
			Expression e = new Expression("");
			List<Token> tokens = e.getCopyOfInitialTokens();
			if (tokens.Count == 0)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0061() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument check syntax #145";
			TestCommonTools.consolePrintTestApiStart(61, testDescr);
			Argument x = new Argument("AAAAA", 730000000);
			if (x.checkSyntax() == Argument.NO_SYNTAX_ERRORS)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0062() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument check syntax #145";
			TestCommonTools.consolePrintTestApiStart(62, testDescr);
			Argument x = new Argument("AAAAA = 730000000");
			if (x.checkSyntax() == Argument.NO_SYNTAX_ERRORS)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0063() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument check syntax #145";
			TestCommonTools.consolePrintTestApiStart(63, testDescr);
			Argument x = new Argument("AAAAA = y*730000000");
			if (x.checkSyntax() == Argument.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0064() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument check syntax #145";
			TestCommonTools.consolePrintTestApiStart(64, testDescr);
			Argument y = new Argument("y", 2);
			Argument x = new Argument("AAAAA = y*730000000", y);
			if (x.checkSyntax() == Argument.NO_SYNTAX_ERRORS)
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0065() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument check syntax #145";
			TestCommonTools.consolePrintTestApiStart(65, testDescr);
			Expression e = new Expression("f(2)-2 * [ww]+a+[qq1]");
			String[] units = e.getMissingUserDefinedUnits();
			String[] args = e.getMissingUserDefinedArguments();
			String[] fun = e.getMissingUserDefinedFunctions();
			if (units.Length == 2 && args.Length == 1 && fun.Length == 1)
			if (units[0].Equals("[ww]") && units[1].Equals("[qq1]"))
			if (args[0].Equals("a") && fun[0].Equals("f"))
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0066() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Trigonometric functions special values - compared to Math";
			TestCommonTools.consolePrintTestApiStart(66, testDescr);
			testResult = true;
			foreach (SpecialValueTrigonometric sv in SpecialValueTrigonometric.valuesListTrig) {
				if (Math.Abs(sv.sin - Math.Sin(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				if (Math.Abs(sv.cos - Math.Cos(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				if (!Double.IsNaN(sv.tan))
				if (Math.Abs(sv.tan - Math.Tan(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				if (!Double.IsNaN(sv.ctan))
				if (Math.Abs(sv.ctan - 1.0 / Math.Tan(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				if (!Double.IsNaN(sv.sec))
				if (Math.Abs(sv.sec - 1.0 / Math.Cos(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				if (!Double.IsNaN(sv.csc))
				if (Math.Abs(sv.csc - 1.0 / Math.Sin(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0067() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Inverse trigonometric functions special values - compared to Math";
			TestCommonTools.consolePrintTestApiStart(67, testDescr);
			testResult = true;
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListAsin) {
				if (!Double.IsNaN(sv.fv))
				if (Math.Abs(sv.fv - Math.Asin(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListAcos) {
				if (!Double.IsNaN(sv.fv))
				if (Math.Abs(sv.fv - Math.Acos(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListAtan) {
				if (!Double.IsNaN(sv.fv))
				if (Math.Abs(sv.fv - Math.Atan(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListActan) {
				if (!Double.IsNaN(sv.fv)) {
					double actan = Double.NaN;
					if (sv.x > 0) actan = Math.Atan(1.0 / sv.x);
					else if (sv.x < 0) actan = Math.Atan(1.0 / sv.x) + MathConstants.PI;
					if (Math.Abs(sv.fv - actan) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				}
			}
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListAsec) {
				if (!Double.IsNaN(sv.fv)) {
					double asec = Math.Acos(1.0 / sv.x);
					if (Math.Abs(sv.fv - asec) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				}
			}
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListAcsc) {
				if (!Double.IsNaN(sv.fv)) {
					double acsc = Math.Asin(1.0 / sv.x);
					if (Math.Abs(sv.fv - acsc) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				}
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0068() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Trigonometric functions special values - compared to MathFunctions";
			TestCommonTools.consolePrintTestApiStart(68, testDescr);
			testResult = true;
			foreach (SpecialValueTrigonometric sv in SpecialValueTrigonometric.valuesListTrig) {
				if (Math.Abs(sv.sin - MathFunctions.sin(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				if (Math.Abs(sv.cos - MathFunctions.cos(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				if (!Double.IsNaN(sv.tan))
				if (Math.Abs(sv.tan - MathFunctions.tan(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				if (!Double.IsNaN(sv.ctan))
				if (Math.Abs(sv.ctan - MathFunctions.ctan(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				if (!Double.IsNaN(sv.sec))
				if (Math.Abs(sv.sec - MathFunctions.sec(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
				if (!Double.IsNaN(sv.csc))
				if (Math.Abs(sv.csc - MathFunctions.cosec(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0069() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Inverse trigonometric functions special values - compared to MathFunctions";
			TestCommonTools.consolePrintTestApiStart(69, testDescr);
			testResult = true;
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListAsin) {
			if (!Double.IsNaN(sv.fv))
			if (Math.Abs(sv.fv - MathFunctions.asin(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListAcos) {
			if (!Double.IsNaN(sv.fv))
			if (Math.Abs(sv.fv - MathFunctions.acos(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListAtan) {
			if (!Double.IsNaN(sv.fv))
			if (Math.Abs(sv.fv - MathFunctions.atan(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListActan) {
			if (!Double.IsNaN(sv.fv)) {
			double actan = Double.NaN;
			actan = MathFunctions.actan(sv.x);
			if (Math.Abs(sv.fv - actan) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			}
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListAsec) {
			if (!Double.IsNaN(sv.fv)) {
			double asec = MathFunctions.asec(sv.x);
			if (Math.Abs(sv.fv - asec) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			}
			foreach (SpecialValue sv in SpecialValueTrigonometric.valuesListAcsc) {
			if (!Double.IsNaN(sv.fv)) {
			double acsc = MathFunctions.acosec(sv.x);
			if (Math.Abs(sv.fv - acsc) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0070() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Sine test";
			TestCommonTools.consolePrintTestApiStart(70, testDescr);
			testResult = true;
			for (double a = -6; a <= 6; a += 0.1) {
			if (Math.Abs(Math.Sin(a) - MathFunctions.sin(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0071() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Cosine test";
			TestCommonTools.consolePrintTestApiStart(71, testDescr);
			testResult = true;
			for (double a = -6; a <= 6; a += 0.1) {
			if (Math.Abs(Math.Cos(a) - MathFunctions.cos(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0072() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Tangent test";
			TestCommonTools.consolePrintTestApiStart(72, testDescr);
			testResult = true;
			for (double a = -6; a <= 6; a += 0.1) {
			if (Math.Abs(Math.Tan(a) - MathFunctions.tan(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0073() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Cotangent test";
			TestCommonTools.consolePrintTestApiStart(73, testDescr);
			testResult = true;
			for (double a = -6; a <= 6; a += 0.1) {
			if (Math.Abs(1.0 / Math.Tan(a) - MathFunctions.ctan(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0074() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Secant test";
			TestCommonTools.consolePrintTestApiStart(74, testDescr);
			testResult = true;
			for (double a = -6; a <= 6; a += 0.1) {
			if (Math.Abs(1.0 / Math.Cos(a) - MathFunctions.sec(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0075() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Cosecant test";
			TestCommonTools.consolePrintTestApiStart(75, testDescr);
			testResult = true;
			for (double a = -6; a <= 6; a += 0.1) {
			if (Math.Abs(1.0 / Math.Sin(a) - MathFunctions.cosec(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0076() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Inverse sine test";
			TestCommonTools.consolePrintTestApiStart(76, testDescr);
			testResult = true;
			for (double a = -0.9; a <= 0.9; a += 0.1) {
			if (Math.Abs(Math.Asin(a) - MathFunctions.asin(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0077() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Inverse cosine test";
			TestCommonTools.consolePrintTestApiStart(77, testDescr);
			testResult = true;
			for (double a = -0.9; a <= 0.9; a += 0.1) {
			if (Math.Abs(Math.Acos(a) - MathFunctions.acos(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0078() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Inverse tangent test";
			TestCommonTools.consolePrintTestApiStart(78, testDescr);
			testResult = true;
			for (double a = -5; a <= 5; a += 0.1) {
			if (Math.Abs(Math.Atan(a) - MathFunctions.atan(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0079() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Inverse ctangent test";
			TestCommonTools.consolePrintTestApiStart(79, testDescr);
			testResult = true;
			for (double a = -5; a <= 5; a += 0.1) {
			double atan = Double.NaN;
			if (a > 0) atan = Math.Atan(1 / a);
			else if (a < 0) atan = Math.Atan(1 / a) + MathConstants.PI;
			if (Math.Abs(atan - MathFunctions.actan(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0080() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Inverse secant test";
			TestCommonTools.consolePrintTestApiStart(80, testDescr);
			testResult = true;
			for (double a = -5.05; a <= 5.05; a += 0.1) {
			if (Math.Abs(Math.Acos(1 / a) - MathFunctions.asec(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0081() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Inverse cosecant test";
			TestCommonTools.consolePrintTestApiStart(81, testDescr);
			testResult = true;
			for (double a = -5.05; a <= 5.05; a += 0.1) {
			if (Math.Abs(Math.Asin(1 / a) - MathFunctions.acosec(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0082() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument extension test";
			TestCommonTools.consolePrintTestApiStart(82, testDescr);
			testResult = true;
			Argument pim = new Argument("pim", new PiMultArgExt());
			if (pim.getArgumentBodyType() != Argument.BODY_EXTENDED) testResult = false;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0083() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument extension test";
			TestCommonTools.consolePrintTestApiStart(83, testDescr);
			testResult = true;
			Argument pim = new Argument("pim", new PiMultArgExt());
			if (pim.getArgumentBodyType() != Argument.BODY_EXTENDED) testResult = false;
			pim.setArgumentValue(3.0);
			if (pim.getArgumentBodyType() != Argument.BODY_RUNTIME) testResult = false;
			if (pim.getArgumentValue() != 3.0) testResult = false;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0084() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument extension test";
			TestCommonTools.consolePrintTestApiStart(84, testDescr);
			testResult = true;
			Argument pim = new Argument("pim", new PiMultArgExt());
			if (pim.getArgumentBodyType() != Argument.BODY_EXTENDED) testResult = false;
			pim.setArgumentExpressionString("2+3");
			if (pim.getArgumentBodyType() != Argument.BODY_RUNTIME) testResult = false;
			if (pim.getArgumentValue() != 5.0) testResult = false;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0085() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(85, testDescr);
			testResult = true;
			Expression e = new Expression("2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi");
			if (!e.getCanonicalExpressionString().Equals("2.1e2*(.3+0.4)*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi")) testResult = false;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0086() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(86, testDescr);
			testResult = true;
			Expression e = new Expression("2.1a2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi\n");
			if (!e.getCanonicalExpressionString().Equals("2.1*a*2.1e2*(.3+0.4)*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi")) testResult = false;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0087() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(87, testDescr);
			testResult = testCanonicalString("2x", "2*x");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0088() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(88, testDescr);
			testResult = testCanonicalString("2xy", "2*xy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0089() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(89, testDescr);
			testResult = testCanonicalString("2xy", "2*x*y", "x");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0090() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(90, testDescr);
			testResult = testCanonicalString("2xyzsin(x)cos(x)2(3+4)6", "2*x*yz*sin(x)*cos(x)*2*(3+4)*6", "x");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0091() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(91, testDescr);
			testResult = testCanonicalString("2xyz2", "2*x*y*z2", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0092() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(92, testDescr);
			testResult = testCanonicalString("2xyz2", "2*x*y*z2", "x", "y", "z");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0093() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(93, testDescr);
			testResult = testCanonicalString("2xyz2.1", "2*x*y*z*2.1", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0094() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(94, testDescr);
			testResult = testCanonicalString("2xyz2.1e", "2*x*y*z*2.1*e", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0095() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(95, testDescr);
			testResult = testCanonicalString("2xyz2.1e3", "2*x*y*z*2.1e3", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0096() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(96, testDescr);
			testResult = testCanonicalString("2xyzh.1234", "2*x*y*z*h.1234", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0097() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(97, testDescr);
			testResult = testCanonicalString("2.1xyzh.1234", "2.1*x*y*z*h.1234", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0098() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(98, testDescr);
			testResult = testCanonicalString("-2.1xyzh.1234", "-2.1*x*y*z*h.1234", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0099() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(99, testDescr);
			testResult = testCanonicalString("1_2_3-2.1xyzh.1234", "1_2_3-2.1*x*y*z*h.1234", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0100() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(100, testDescr);
			testResult = testCanonicalString("1_2_3xyzh.1234", "1_2_3*x*y*z*h.1234", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0101() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(101, testDescr);
			testResult = testCanonicalString("2_3xyzh.1234", "2_3*x*y*z*h.1234", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0102() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(102, testDescr);
			testResult = testCanonicalString("b4.0123xyzh.1234", "b4.0123*x*y*z*h.1234", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0103() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(103, testDescr);
			testResult = testCanonicalString("2.1apipi[h-]2.1e2pi(.3+0.4)[h-]pi.01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi", "2.1*a*pi*pi*[h-]*2.1e2*pi*(.3+0.4)*[h-]*pi*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0104() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(104, testDescr);
			testResult = testCanonicalString("xy1_2_3zh.1234", "x*y*1_2_3*z*h.1234", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0105() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(105, testDescr);
			testResult = testCanonicalString("xyh.1234z1_2_3", "x*y*h.1234*z*1_2_3", "x", "y");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0106() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(106, testDescr);
			testResult = testCanonicalString("xyh.1234z1_2_3", "xy*h.1234*z*1_2_3");
			
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0107() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(107, testDescr);
			testResult = testCanonicalString("2xx", "2*xx");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0108() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(108, testDescr);
			testResult = testCanonicalString("2xxyy", "2*xxyy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0109() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(109, testDescr);
			testResult = testCanonicalString("2xxyy", "2*xx*yy", "xx");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0110() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(110, testDescr);
			testResult = testCanonicalString("2xxyyzsin(xx)cos(xx)2(3+4)6", "2*xx*yyz*sin(xx)*cos(xx)*2*(3+4)*6", "xx");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0111() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(111, testDescr);
			testResult = testCanonicalString("2xxyyz2", "2*xx*yy*z2", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0112() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(112, testDescr);
			testResult = testCanonicalString("2xxyyz2", "2*xx*yy*z2", "xx", "yy", "z");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0113() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(113, testDescr);
			testResult = testCanonicalString("2xxyyz2.1", "2*xx*yy*z*2.1", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0114() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(114, testDescr);
			testResult = testCanonicalString("2xxyyz2.1e", "2*xx*yy*z*2.1*e", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0115() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(115, testDescr);
			testResult = testCanonicalString("2xxyyz2.1e3", "2*xx*yy*z*2.1e3", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0116() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(116, testDescr);
			testResult = testCanonicalString("2xxyyzh.1234", "2*xx*yy*z*h.1234", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0117() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(117, testDescr);
			testResult = testCanonicalString("2.1xxyyzh.1234", "2.1*xx*yy*z*h.1234", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0118() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(118, testDescr);
			testResult = testCanonicalString("-2.1xxyyzh.1234", "-2.1*xx*yy*z*h.1234", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0119() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(119, testDescr);
			testResult = testCanonicalString("1_2_3-2.1xxyyzh.1234", "1_2_3-2.1*xx*yy*z*h.1234", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0120() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(120, testDescr);
			testResult = testCanonicalString("1_2_3xxyyzh.1234", "1_2_3*xx*yy*z*h.1234", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0121() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(121, testDescr);
			testResult = testCanonicalString("2_3xxyyzh.1234", "2_3*xx*yy*z*h.1234", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0122() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(122, testDescr);
			testResult = testCanonicalString("b4.0123xxyyzh.1234", "b4.0123*xx*yy*z*h.1234", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0123() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(123, testDescr);
			testResult = testCanonicalString("2.1apipi[h-]2.1e2pi(.3+0.4)[h-]pi.01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi", "2.1*a*pi*pi*[h-]*2.1e2*pi*(.3+0.4)*[h-]*pi*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0124() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(124, testDescr);
			testResult = testCanonicalString("xxyy1_2_3zh.1234", "xx*yy*1_2_3*z*h.1234", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0125() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(125, testDescr);
			testResult = testCanonicalString("xxyyh.1234z1_2_3", "xx*yy*h.1234*z*1_2_3", "xx", "yy");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0126() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(126, testDescr);
			testResult = testCanonicalString("xxyyh.1234z1_2_3", "xxyy*h.1234*z*1_2_3");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0127() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(127, testDescr);
			testResult = testCanonicalString("2pi2√√pi", "2*pi2*√√pi");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0128() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(128, testDescr);
			testResult = testCanonicalString("2pi2√√2pi", "2*pi2*√√2*pi");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0129() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication on/off API - global and local";
			TestCommonTools.consolePrintTestApiStart(129, testDescr);
			mXparser.enableImpliedMultiplicationMode();
			Expression e1 = new Expression("2pi");
			bool global1 = mXparser.checkIfImpliedMultiplicationMode();
			bool local1 = e1.checkIfImpliedMultiplicationMode();
			mXparser.disableImpliedMultiplicationMode();
			Expression e2 = new Expression("2pi");
			bool global2 = mXparser.checkIfImpliedMultiplicationMode();
			bool local2 = e2.checkIfImpliedMultiplicationMode();
			if (global1 && local1 && !global2 && !local2)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0130() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Unicode Parser Keywords on/off API - global and local";
			TestCommonTools.consolePrintTestApiStart(130, testDescr);
			mXparser.enableUnicodeBuiltinKeyWordsMode();
			Expression e1 = new Expression("2pi");
			bool global1 = mXparser.checkIfUnicodeBuiltinKeyWordsMode();
			bool local1 = e1.checkIfUnicodeBuiltinKeyWordsMode();
			mXparser.disableUnicodeBuiltinKeyWordsMode();
			Expression e2 = new Expression("2pi");
			bool global2 = mXparser.checkIfUnicodeBuiltinKeyWordsMode();
			bool local2 = e2.checkIfUnicodeBuiltinKeyWordsMode();
			if (global1 && local1 && !global2 && !local2)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0131() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication on/off API - global - check syntax impact";
			TestCommonTools.consolePrintTestApiStart(131, testDescr);
			mXparser.enableImpliedMultiplicationMode();
			Expression e1 = new Expression("2pi");
			bool syn1 = e1.checkSyntax();
			mXparser.disableImpliedMultiplicationMode();
			Expression e2 = new Expression("2pi");
			bool syn2 = e2.checkSyntax();
			if (syn1 && !syn2)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0132() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication on/off API - local - check syntax impact";
			TestCommonTools.consolePrintTestApiStart(132, testDescr);
			Expression e = new Expression("2pi");
			e.enableImpliedMultiplicationMode();
			bool syn1 = e.checkSyntax();
			e.disableImpliedMultiplicationMode();
			bool syn2 = e.checkSyntax();
			if (syn1 && !syn2)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0133() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Unicode Parser Keywords on/off API - global - check syntax impact";
			TestCommonTools.consolePrintTestApiStart(133, testDescr);
			mXparser.enableUnicodeBuiltinKeyWordsMode();
			Expression e1 = new Expression("√π");
			bool syn1 = e1.checkSyntax();
			mXparser.disableUnicodeBuiltinKeyWordsMode();
			Expression e2 = new Expression("√π");
			bool syn2 = e2.checkSyntax();
			if (syn1 && !syn2)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0134() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Unicode Parser Keywords on/off API - local - check syntax impact";
			TestCommonTools.consolePrintTestApiStart(134, testDescr);
			Expression e = new Expression("√π");
			e.enableUnicodeBuiltinKeyWordsMode();
			bool syn1 = e.checkSyntax();
			e.disableUnicodeBuiltinKeyWordsMode();
			bool syn2 = e.checkSyntax();
			if (syn1 && !syn2)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0135() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Unicode Parser Keywords on/off API - global - syntax help";
			TestCommonTools.consolePrintTestApiStart(135, testDescr);
			mXparser.enableUnicodeBuiltinKeyWordsMode();
			int n1 = mXparser.getKeyWords().Count;
			mXparser.disableUnicodeBuiltinKeyWordsMode();
			int n2 = mXparser.getKeyWords().Count;
			if (n1 == n2 + 49)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0136() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Unicode Parser Keywords on/off API - local - syntax help";
			TestCommonTools.consolePrintTestApiStart(136, testDescr);
			Expression e = new Expression("2pi");
			e.enableUnicodeBuiltinKeyWordsMode();
			int n1 = e.getKeyWords().Count;
			e.disableUnicodeBuiltinKeyWordsMode();
			int n2 = e.getKeyWords().Count;
			if (n1 == n2 + 49)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0137() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Attempt to fix expression string on/off API - global and local";
			TestCommonTools.consolePrintTestApiStart(137, testDescr);
			mXparser.enableAttemptToFixExpStrMode();
			Expression e1 = new Expression("-+2++3--3+-4-+5-->6<--7<->8++");
			bool global1 = mXparser.checkIfAttemptToFixExpStrMode();
			bool local1 = e1.checkIfAttemptToFixExpStrMode();
			mXparser.disableAttemptToFixExpStrMode();
			Expression e2 = new Expression("-+2++3--3+-4-+5-->6<--7<->8++");
			bool global2 = mXparser.checkIfAttemptToFixExpStrMode();
			bool local2 = e2.checkIfAttemptToFixExpStrMode();
			if (global1 && local1 && !global2 && !local2)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0138() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Attempt to fix expression string on/off API - global - check syntax impact";
			TestCommonTools.consolePrintTestApiStart(138, testDescr);
			mXparser.enableAttemptToFixExpStrMode();
			Expression e1 = new Expression("-+2++3--3+-4-+5-->6<--7<->8++");
			bool syn1 = e1.checkSyntax();
			mXparser.disableAttemptToFixExpStrMode();
			Expression e2 = new Expression("-+2++3--3+-4-+5-->6<--7<->8++");
			bool syn2 = e2.checkSyntax();
			if (syn1 && !syn2)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0139() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Attempt to fix expression string on/off API - local - check syntax impact";
			TestCommonTools.consolePrintTestApiStart(139, testDescr);
			Expression e = new Expression("-+2++3--3+-4-+5-->6<--7<->8++");
			e.enableAttemptToFixExpStrMode();
			bool syn1 = e.checkSyntax();
			e.disableAttemptToFixExpStrMode();
			bool syn2 = e.checkSyntax();
			if (syn1 && !syn2)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0140() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(140, testDescr);
			testResult = testCanonicalString("2--3", "2+3");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0141() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(141, testDescr);
			testResult = testCanonicalString("2++3", "2+3");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0142() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(142, testDescr);
			testResult = testCanonicalString("2+-3", "2-3");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0143() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(143, testDescr);
			testResult = testCanonicalString("2-+3", "2-3");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0144() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(144, testDescr);
			testResult = testCanonicalString("2--3<--4", "2+3<--4");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0145() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(145, testDescr);
			testResult = testCanonicalString("2--3-->4", "2+3-->4");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0146() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(146, testDescr);
			testResult = testCanonicalString("+2--3-->4-", "2+3-->4");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0147() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(147, testDescr);
			testResult = testCanonicalString("-2--3-->4+", "-2+3-->4");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0148() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = true;
			String testDescr = "Calc Steps Register - Expression 2*(3+4)+5";
			TestCommonTools.consolePrintTestApiStart(148, testDescr);
			Expression e = new Expression("2*(3+4)+5");
			CalcStepsRegister calcStepsRegister = new CalcStepsRegister();
			double result = e.calculate(calcStepsRegister);
			if (result != calcStepsRegister.result) testResult = false;
			if (!e.getExpressionString().Equals(calcStepsRegister.expressionStringStart)) testResult = false;
			if (calcStepsRegister.argumentNameStart.Length > 0) testResult = false;
			if (calcStepsRegister.functionNameStart.Length > 0) testResult = false;
			if (calcStepsRegister.calcStepRecords.Count != 5)  testResult = false;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0149() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = true;
			String testDescr = "Calc Steps Register - Argument x = 2*(3+4)+5";
			TestCommonTools.consolePrintTestApiStart(149, testDescr);
			Argument x = new Argument("x", "2*(3+4)+5");
			CalcStepsRegister calcStepsRegister = new CalcStepsRegister();
			double result = x.getArgumentValue(calcStepsRegister);
			if (result != calcStepsRegister.result) testResult = false;
			if (!x.getArgumentName().Equals(calcStepsRegister.argumentNameStart)) testResult = false;
			if (!x.getArgumentExpressionString().Equals(calcStepsRegister.expressionStringStart)) testResult = false;
			if (calcStepsRegister.functionNameStart.Length > 0) testResult = false;
			if (calcStepsRegister.calcStepRecords.Count != 5)  testResult = false;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0150() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = true;
			String testDescr = "Calc Steps Register - Function f(x) = 2*(3+4)+5";
			TestCommonTools.consolePrintTestApiStart(150, testDescr);
			Function f = new Function("f(x) = 2*(3+4)+5");
			CalcStepsRegister calcStepsRegister = new CalcStepsRegister();
			double result = f.calculate(calcStepsRegister);
			if (!f.getFunctionName().Equals(calcStepsRegister.functionNameStart)) testResult = false;
			if (!f.getFunctionExpressionString().Trim().Equals(calcStepsRegister.expressionStringStart)) testResult = false;
			if (calcStepsRegister.argumentNameStart.Length > 0) testResult = false;
			if (calcStepsRegister.calcStepRecords.Count != 5)  testResult = false;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0151() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = true;
			String testDescr = "Calc Steps Register - Expression f(x,y)+z+(x*y)/z";
			TestCommonTools.consolePrintTestApiStart(151, testDescr);
			CalcStepsRegister calcStepsRegister = new CalcStepsRegister();
			Argument x = new Argument("x", "2*rList(2,1,3,5,4)");
			Argument y = new Argument("y = 2*x", x);
			Argument z = new Argument("z = 3*y/x", x, y);
			Function f = new Function("f(a,b) = a*b");
			Expression e = new Expression("f(x,y)+z+(x*y)/z", x, y, z, f);
			double result = e.calculate(calcStepsRegister);
			if (result != calcStepsRegister.result) testResult = false;
			if (!e.getExpressionString().Equals(calcStepsRegister.expressionStringStart)) testResult = false;
			if (calcStepsRegister.argumentNameStart.Length > 0) testResult = false;
			if (calcStepsRegister.functionNameStart.Length > 0) testResult = false;
			if (calcStepsRegister.calcStepRecords.Count != 72)  testResult = false;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0152() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(152, testDescr);
			testResult = testCanonicalString("sum(i, 1, 10, 2*xi)", "sum(i,1,10,2*x*i)");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0153() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(153, testDescr);
			testResult = testCanonicalString("sum(i, 1, 10, xi*2)", "sum(i,1,10,x*i*2)");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0154() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(154, testDescr);
			testResult = testCanonicalString("sum(i, 1, 10, 2*ix)", "sum(i,1,10,2*i*x)");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0155() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(155, testDescr);
			testResult = testCanonicalString("sum(i, 1, 10, ix*2)", "sum(i,1,10,i*x*2)");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0156() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(156, testDescr);
			testResult = testCanonicalString("sum(i, 1, 10, 2*xpi)", "sum(i,1,10,2*x*pi)");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0157() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(157, testDescr);
			testResult = testCanonicalString("sum(i, 1, 10, xpi*2)", "sum(i,1,10,x*pi*2)");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0158() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(158, testDescr);
			testResult = testCanonicalString("sum(i, 1, 10, 2*pix)", "sum(i,1,10,2*pi*x)");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0159() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(159, testDescr);
			testResult = testCanonicalString("sum(i, 1, 10, pix*2)", "sum(i,1,10,pi*x*2)");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0160() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(160, testDescr);
			testResult = testCanonicalString("300+Caster_Attack*3", "300+Cast*e*r_Attack*3");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0161() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(161, testDescr);
			testResult = testCanonicalString("300+Caster_Attack(2)*3", "300+Cast*e*r_Attack(2)*3");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0162() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(162, testDescr);
			testResult = testCanonicalString("300+Caster_AttackC(2)*3", "300+Cast*e*r_Attack*C(2)*3");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0163() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Implied Multiplication & canonical expression string test";
			TestCommonTools.consolePrintTestApiStart(163, testDescr);
			mXparser.disableImpliedMultiplicationMode();
			testResult = testCanonicalString("300+Caster_AttackC(2)*3", "300+Caster_AttackC(2)*3");
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		private static String commentTestDescriptionAsMockup(String descr) {
#if NET8_0
			return descr + " - this is just a Mockup as Binary Serialization is not support since .NET7.0";
#else
			return descr;
#endif
		}
        [TestMethod]
        public void testApi0164() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
            String testDescr = commentTestDescriptionAsMockup("Serialization / Deserialization: Argument x Bytes");
            TestCommonTools.consolePrintTestApiStart(164, testDescr);
			Argument x = new Argument("x = 3");
			Argument y = new Argument("y = 2*x", x);
            SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            byte[] data = SerializationUtils.serializeToBytes(y);
			mXparser.consolePrintln();
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
			Argument ys = SerializationUtils.deserializeFromBytes<Argument>(data);
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
            SerializationUtils.disableBinarySerialization();
            if (ys != null)
				if (y.getArgumentName().Equals(ys.getArgumentName()) && y.getArgumentValue() == ys.getArgumentValue())
					testResult = true;
            TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0165() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Serialization / Deserialization: Function x String");
			TestCommonTools.consolePrintTestApiStart(165, testDescr);
			Constant c = new Constant("c = 3");
			Function g = new Function("g(x) = 2*x + c", c);
			Function f = new Function("f(x,y) = g(x)*g(y)", g);
            SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            String data = SerializationUtils.serializeToString(f);
			mXparser.consolePrintln();
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
			Function fs = SerializationUtils.deserializeFromString<Function>(data);
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
            SerializationUtils.disableBinarySerialization();
            if (fs != null)
				if (f.getFunctionName().Equals(fs.getFunctionName()) && f.calculate(2,3) == fs.calculate(2, 3))
					testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0166() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Serialization / Deserialization: RecursiveArgument x Bytes");
			TestCommonTools.consolePrintTestApiStart(166, testDescr);
			RecursiveArgument fib = new RecursiveArgument("fib(n)= fib(n-1)+fib(n-2)");
            SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            byte[] data = SerializationUtils.serializeToBytes(fib);
			mXparser.consolePrintln();
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
			RecursiveArgument fibs = SerializationUtils.deserializeFromBytes<RecursiveArgument>(data);
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
            SerializationUtils.disableBinarySerialization();
            fib.addBaseCase(0, 0);
			fib.addBaseCase(1, 1);
			if (fibs != null) {
				fibs.addBaseCase(0, 0);
				fibs.addBaseCase(1, 1);
				if (fib.getArgumentName().Equals(fibs.getArgumentName()) && fib.getArgumentValue(10) == fibs.getArgumentValue(10))
					testResult = true;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0167() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Serialization / Deserialization: Extended Argument x String");
			TestCommonTools.consolePrintTestApiStart(167, testDescr);
			Argument x = new Argument("x", new PiMultArgExt());
            SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            String s = SerializationUtils.serializeToString(x);
			mXparser.consolePrintln();
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
			Argument xs = SerializationUtils.deserializeFromString<Argument>(s);
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
            SerializationUtils.disableBinarySerialization();
            if (xs != null) {
				if (x.getArgumentName().Equals(xs.getArgumentName()) && x.getArgumentValue() == xs.getArgumentValue())
					testResult = true;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0168() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Serialization / Deserialization: Extended Function x Bytes");
			TestCommonTools.consolePrintTestApiStart(168, testDescr);
			Function f = new Function("f", new FunExt());
            SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            byte[] data = SerializationUtils.serializeToBytes(f);
			mXparser.consolePrintln();
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
			Function fs = SerializationUtils.deserializeFromBytes<Function>(data);
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
            SerializationUtils.disableBinarySerialization();
            if (fs != null) {
				if (f.getFunctionName().Equals(fs.getFunctionName()) && f.calculate(2, 3) == fs.calculate(2, 3))
					testResult = true;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0169() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Serialization / Deserialization: Extended Function Variadic x String");
			TestCommonTools.consolePrintTestApiStart(168, testDescr);
			Function f = new Function("f", new FunExtVar());
            SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            String data = SerializationUtils.serializeToString(f);
			mXparser.consolePrintln();
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
			Function fs = SerializationUtils.deserializeFromString<Function>(data);
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
            SerializationUtils.disableBinarySerialization();
            if (fs != null) {
				if (f.getFunctionName().Equals(fs.getFunctionName()) && f.calculate(2, 3, 4, 5) == fs.calculate(2, 3, 4, 5))
					testResult = true;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0170() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Serialization / Deserialization: Constant x Bytes");
			TestCommonTools.consolePrintTestApiStart(170, testDescr);
			Constant b = new Constant("b = 5");
			Constant a = new Constant("a = 2*b", b);
            SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            byte[] data = SerializationUtils.serializeToBytes(a);
			mXparser.consolePrintln();
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
			Constant acs = SerializationUtils.deserializeFromBytes<Constant>(data);
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
            SerializationUtils.disableBinarySerialization();
            if (acs != null) {
				if (a.getConstantName().Equals(acs.getConstantName()) && a.getConstantValue() == acs.getConstantValue())
					testResult = true;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0171() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Serialization / Deserialization: Expression x Bytes");
			TestCommonTools.consolePrintTestApiStart(171, testDescr);
			Constant a = new Constant("a = 0.0001");
			Function s = new Function("s(x) = if( abs(x) < a, x, 2*s(x/2)*c(x/2) )", a);
			Function c = new Function("c(x) = if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )", a);
			a = null;
			s.addDefinitions(c);
			c.addDefinitions(s);
			Expression e1 = new Expression("sin(5)-s(5)", s);
			Expression e2 = new Expression("cos(5)-c(5)", c);
			double v1 = e1.calculate();
			double v2 = e2.calculate();
            bool syn1 = e1.getSyntaxStatus();
            bool syn2 = e2.getSyntaxStatus();
            c = null;
			s = null;
			mXparser.consolePrintln();
            SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            byte[] data1 = SerializationUtils.serializeToBytes(e1);
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
			byte[] data2 = SerializationUtils.serializeToBytes(e2);
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
			Expression es1 = SerializationUtils.deserializeFromBytes<Expression>(data1);
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
			Expression es2 = SerializationUtils.deserializeFromBytes<Expression>(data2);
			mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
            SerializationUtils.disableBinarySerialization();
            if (es1 != null && es2 != null) {
                bool syns1 = es1.getSyntaxStatus();
                bool syns2 = es2.getSyntaxStatus();
                double vs1 = es1.calculate();
				double vs2 = es2.calculate();
                if (syn1 == syns1 && syn2 == syns2)
                    if (e1.getExpressionString().Equals(es1.getExpressionString()) && e2.getExpressionString().Equals(es2.getExpressionString()) && v1 == vs1 && v2 == vs2)
						testResult = true;
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0172() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Serialization / Deserialization: Expression x File");
			TestCommonTools.consolePrintTestApiStart(171, testDescr);
			Argument x = new Argument("x = 5");
			Function f = new Function("f(x,y) = x + 2*y");
			Expression e = new Expression("f(2,3)*x", f, x);
			double v = e.calculate();
            SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            try {
				String filePath = Path.GetTempFileName();
				mXparser.consolePrintln();
				bool serializationDone = SerializationUtils.serializeToFile(e, filePath);
				mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
				Expression es = SerializationUtils.deserializeFromFile<Expression>(filePath);
				mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
				File.Delete(filePath);
				mXparser.consolePrintln("File: " + filePath + " is deleted.");
				if (es != null) {
					double vs = es.calculate();
					if (e.getExpressionString().Equals(es.getExpressionString()) && v == vs)
						testResult = true;
				}
			} catch (Exception ex) {
				mXparser.consolePrintln(ex.Message);
                mXparser.consolePrintln(ex.StackTrace);
            }
            SerializationUtils.disableBinarySerialization();
            TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0173() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Disabled serialization: serializeToBytes");
			TestCommonTools.consolePrintTestApiStart(173, testDescr);
			Argument x = new Argument("x = 5");
			SerializationUtils.disableBinarySerialization();
			byte[] data = SerializationUtils.serializeToBytes(x);
			if (data == null && !SerializationUtils.checkLastOperationWasSuccessful())
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0174() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Disabled serialization: serializeToString");
			TestCommonTools.consolePrintTestApiStart(174, testDescr);
			Argument x = new Argument("x = 5");
			SerializationUtils.disableBinarySerialization();
			String data = SerializationUtils.serializeToString(x);
			if (data == null && !SerializationUtils.checkLastOperationWasSuccessful())
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0175() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Disabled serialization: serializeToFile");
			TestCommonTools.consolePrintTestApiStart(175, testDescr);
			Argument x = new Argument("x = 5");
			SerializationUtils.disableBinarySerialization();
			try {
                String filePath = Path.GetTempFileName();
                mXparser.consolePrintln();
				bool serializationDone = SerializationUtils.serializeToFile(x, filePath);
				if (!serializationDone && !SerializationUtils.checkLastOperationWasSuccessful())
					testResult = true;
			} catch (Exception ex) {
				mXparser.consolePrintln(ex.Message);
                mXparser.consolePrintln(ex.StackTrace);
			}
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0176() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Disabled serialization: deserializeFromBytes");
			TestCommonTools.consolePrintTestApiStart(176, testDescr);
			SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
			Argument x = new Argument("x = 5");
			byte[] data = SerializationUtils.serializeToBytes(x);
			SerializationUtils.disableBinarySerialization();
			Argument xs = SerializationUtils.deserializeFromBytes<Argument>(data);
			if (data != null && xs == null && !SerializationUtils.checkLastOperationWasSuccessful())
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0177() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Disabled serialization: deserializeFromString");
			TestCommonTools.consolePrintTestApiStart(177, testDescr);
			SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
			Argument x = new Argument("x = 5");
			String data = SerializationUtils.serializeToString(x);
			SerializationUtils.disableBinarySerialization();
			Argument xs = SerializationUtils.deserializeFromString<Argument>(data);
			if (data != null && xs == null && !SerializationUtils.checkLastOperationWasSuccessful())
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0178() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = commentTestDescriptionAsMockup("Disabled serialization: deserializeFromFile");
			TestCommonTools.consolePrintTestApiStart(178, testDescr);
			Argument x = new Argument("x = 5");
			try {
                String filePath = Path.GetTempFileName();
                mXparser.consolePrintln();
				SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
				bool serializationDone = SerializationUtils.serializeToFile(x, filePath);
				SerializationUtils.disableBinarySerialization();
				Argument xs = SerializationUtils.deserializeFromFile<Argument>(filePath);
				if (serializationDone && xs == null && !SerializationUtils.checkLastOperationWasSuccessful())
					testResult = true;
			} catch (Exception ex) {
				mXparser.consolePrintln(ex.Message);
                mXparser.consolePrintln(ex.StackTrace);
            }
			SerializationUtils.disableBinarySerialization();
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0179() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = true;
			String testDescr = "Check all descriptions of keywords - lengths";
			TestCommonTools.consolePrintTestApiStart(179, testDescr);
			List<KeyWord> keywords = mXparser.getKeyWords();
			foreach (KeyWord kw in keywords)
				if (kw.description.Length <= 5) {
					testResult = false;
					break;
				}
			TestCommonTools.consolePrintTestApiEnd(testResult);
            Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0180() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = true;
			String testDescr = "Check all descriptions of keywords - type description";
			TestCommonTools.consolePrintTestApiStart(180, testDescr);
			List<KeyWord> keywords = mXparser.getKeyWords();
			foreach (KeyWord kw in keywords)
				if (!kw.description.ToLower().Contains(mXparser.getTokenTypeDescription(kw.wordTypeId).ToLower())) {
					mXparser.consolePrintln(mXparser.getTokenTypeDescription(kw.wordTypeId));
					mXparser.consolePrintHelp(kw.description);
					testResult = false;
					break;
				}
			TestCommonTools.consolePrintTestApiEnd(testResult);
            Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0181() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Check all parser token types - descriptions";
			TestCommonTools.consolePrintTestApiStart(181, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			if (BinaryRelation.TYPE_DESC.Equals(stringResources.BINARY_RELATION)
					&& BitwiseOperator.TYPE_DESC.Equals(stringResources.BITWISE_OPERATOR)
					&& BooleanOperator.TYPE_DESC.Equals(stringResources.BOOLEAN_OPERATOR)
					&& CalculusOperator.TYPE_DESC.Equals(stringResources.CALCULUS_OPERATOR)
					&& ConstantValue.TYPE_DESC.Equals(stringResources.CONSTANT_VALUE)
					&& Function1Arg.TYPE_DESC.Equals(stringResources.FUNCTION_1_ARG)
					&& Function2Arg.TYPE_DESC.Equals(stringResources.FUNCTION_2_ARG)
					&& Function3Arg.TYPE_DESC.Equals(stringResources.FUNCTION_3_ARG)
					&& FunctionVariadic.TYPE_DESC.Equals(stringResources.FUNCTION_VARIADIC)
					&& Operator.TYPE_DESC.Equals(stringResources.OPERATOR)
					&& ParserSymbol.TYPE_DESC.Equals(stringResources.PARSER_SYMBOL)
					&& RandomVariable.TYPE_DESC.Equals(stringResources.RANDOM_VARIABLE)
					&& Unit.TYPE_DESC.Equals(stringResources.UNIT)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
            Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0182() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Check all user defined token types - descriptions";
			TestCommonTools.consolePrintTestApiStart(182, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			if (Argument.TYPE_DESC.Equals(stringResources.USER_DEFINED_ARGUMENT)
					&& Constant.TYPE_DESC.Equals(stringResources.USER_DEFINED_CONSTANT)
					&& Expression.TYPE_DESC.Equals(stringResources.USER_DEFINED_EXPRESSION)
					&& Function.TYPE_DESC.Equals(stringResources.USER_DEFINED_FUNCTION)
					&& RecursiveArgument.TYPE_DESC_RECURSIVE.Equals(stringResources.USER_DEFINED_RECURSIVE_ARGUMENT)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
            Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0183() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Check all user defined token types - descriptions";
			TestCommonTools.consolePrintTestApiStart(183, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			if (Argument.TYPE_DESC.Equals(stringResources.USER_DEFINED_ARGUMENT)
					&& Constant.TYPE_DESC.Equals(stringResources.USER_DEFINED_CONSTANT)
					&& Expression.TYPE_DESC.Equals(stringResources.USER_DEFINED_EXPRESSION)
					&& Function.TYPE_DESC.Equals(stringResources.USER_DEFINED_FUNCTION)
					&& RecursiveArgument.TYPE_DESC_RECURSIVE.Equals(stringResources.USER_DEFINED_RECURSIVE_ARGUMENT)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0184() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentDefinitionString, PrimitiveElement...elements) - argumentDefinitionString == null, elements == null";
			TestCommonTools.consolePrintTestApiStart(184, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument(null);
			Argument[] x = null;
			Argument b = new Argument("b", x);
			if (
					!a.checkSyntax()
					&& a.getErrorMessage().Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !b.checkSyntax()
					&& b.getErrorMessage().Contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0185() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentDefinitionString, PrimitiveElement...elements) - nameOnlyTokenRegExp";
			TestCommonTools.consolePrintTestApiStart(185, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument("a");
			Argument b = new Argument("   b   ");
			if (
					a.getArgumentName().Equals("a")
					&& a.checkSyntax()
					&& a.getArgumentType() == Argument.FREE_ARGUMENT
					&& a.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& b.getArgumentName().Equals("b")
					&& b.checkSyntax()
					&& b.getArgumentType() == Argument.FREE_ARGUMENT
					&& b.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0186() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentDefinitionString, PrimitiveElement...elements) - constArgDefStrRegExp";
			TestCommonTools.consolePrintTestApiStart(186, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument("a = 2*4");
			Argument b = new Argument("   b    = 2*a   ");
			Argument c = new Argument("   c    = 2*a   ");
			c.addArguments(a);
			if (
					a.getArgumentName().Equals("a")
					&& a.checkSyntax()
					&& a.getArgumentType() == Argument.FREE_ARGUMENT
					&& a.getArgumentValue() == 8
					&& a.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& b.getArgumentName().Equals("b")
					&& b.getArgumentExpressionString().Equals("2*a")
					&& b.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& b.getArgumentType() == Argument.DEPENDENT_ARGUMENT
					&& !b.checkSyntax()
					&& b.getErrorMessage().Contains(stringResources.INVALID_TOKEN)
					&& !b.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& c.getArgumentName().Equals("c")
					&& c.checkSyntax()
					&& c.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED)
					) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0187() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentDefinitionString, PrimitiveElement...elements) - incorrect definition string";
			TestCommonTools.consolePrintTestApiStart(187, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument("a+2");
			Argument b = new Argument("b( = 2   ");
			Argument c = new Argument("   c(x) = 2*x   ");
			if (
					!a.checkSyntax()
					&& a.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_DEFINITION)
					&& a.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& a.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !b.checkSyntax()
					&& b.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_DEFINITION)
					&& b.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& b.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !c.checkSyntax()
					&& c.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_DEFINITION)
					&& c.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& c.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0188() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentDefinitionString, bool forceDependent, PrimitiveElement...elements) - argumentDefinitionString == null, elements == null";
			TestCommonTools.consolePrintTestApiStart(188, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument(null, true);
			Argument[] x = null;
			Argument b = new Argument("b", true, x);
			if (
					!a.checkSyntax()
					&& a.getErrorMessage().Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !b.checkSyntax()
					&& b.getErrorMessage().Contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0189() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentDefinitionString, bool forceDependent, PrimitiveElement...elements) - nameOnlyTokenRegExp";
			TestCommonTools.consolePrintTestApiStart(189, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument("a", true);
			Argument b = new Argument("   b   ", true);
			if (
					a.getArgumentName().Equals("a")
					&& a.checkSyntax()
					&& a.getArgumentType() == Argument.FREE_ARGUMENT
					&& a.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& b.getArgumentName().Equals("b")
					&& b.checkSyntax()
					&& b.getArgumentType() == Argument.FREE_ARGUMENT
					&& b.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0190() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentDefinitionString, bool forceDependent, PrimitiveElement...elements)";
			TestCommonTools.consolePrintTestApiStart(190, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument("a = 2", false);
			Argument b = new Argument("b = 2", true);
			if (
					a.getArgumentName().Equals("a")
					&& a.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& a.checkSyntax()
					&& a.getArgumentType() == Argument.FREE_ARGUMENT
					&& b.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& b.getArgumentName().Equals("b")
					&& b.checkSyntax()
					&& b.getArgumentType() == Argument.DEPENDENT_ARGUMENT
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0191() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentName, double argumentValue) - argumentName = null";
			TestCommonTools.consolePrintTestApiStart(191, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument(null,2);
			if (a.getErrorMessage().Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !a.checkSyntax()
					&& a.getArgumentName().Length == 0
					&& Double.IsNaN(a.getArgumentValue())
					&& a.getArgumentType() == Argument.FREE_ARGUMENT
				) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0192() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentName, double argumentValue) - invalid argumentName";
			TestCommonTools.consolePrintTestApiStart(192, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument("1",2);
			Argument b = new Argument("x()",2);
			Argument c = new Argument("x(1)",2);
			Argument d = new Argument("x = ",2);
			Argument e = new Argument("1+x",2);
			Argument f = new Argument("1x",2);
			if (a.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& a.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& a.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !a.checkSyntax()
					&& b.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& b.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& b.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !b.checkSyntax()
					&& c.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& c.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& c.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !c.checkSyntax()
					&& d.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& d.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& d.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !d.checkSyntax()
					&& e.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& e.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& e.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !e.checkSyntax()
					&& f.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& f.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& f.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !f.checkSyntax()
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0193() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentName, double argumentValue)";
			TestCommonTools.consolePrintTestApiStart(193, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument("a",1);
			Argument a1 = new Argument("a1",2);
			Argument a1b = new Argument("a1b",3);
			Argument x = new Argument("   x ",4);
			if (
					a.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& a.checkSyntax()
					&& a.getArgumentType() == Argument.FREE_ARGUMENT
					&& a.getArgumentBodyType() == Argument.BODY_RUNTIME
					&& a.getArgumentName().Equals("a")
					&& a.getArgumentValue() == 1
					&& a1.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& a1.checkSyntax()
					&& a1.getArgumentType() == Argument.FREE_ARGUMENT
					&& a1.getArgumentBodyType() == Argument.BODY_RUNTIME
					&& a1.getArgumentName().Equals("a1")
					&& a1.getArgumentValue() == 2
					&& a1b.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& a1b.checkSyntax()
					&& a1b.getArgumentType() == Argument.FREE_ARGUMENT
					&& a1b.getArgumentBodyType() == Argument.BODY_RUNTIME
					&& a1b.getArgumentName().Equals("a1b")
					&& a1b.getArgumentValue() == 3
					&& x.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& x.checkSyntax()
					&& x.getArgumentType() == Argument.FREE_ARGUMENT
					&& x.getArgumentBodyType() == Argument.BODY_RUNTIME
					&& x.getArgumentName().Equals("x")
					&& x.getArgumentValue() == 4
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0194() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentName, ArgumentExtension argumentExtension) - argumentName = null, argumentExtension = null";
			TestCommonTools.consolePrintTestApiStart(194, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument(null,new PiMultArgExt());
			PiMultArgExt nullExtension = null;
			Argument b = new Argument("b", nullExtension);
			if (
					a.getErrorMessage().Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !a.checkSyntax()
					&& a.getArgumentName().Length == 0
					&& a.getArgumentType() == Argument.FREE_ARGUMENT
					&& a.getArgumentBodyType() == Argument.BODY_RUNTIME
					&& Double.IsNaN(a.getArgumentValue())
					&& b.getErrorMessage().Contains(stringResources.PROVIDED_EXTENSION_IS_NULL)
					&& !b.checkSyntax()
					&& b.getArgumentName().Length == 0
					&& b.getArgumentType() == Argument.FREE_ARGUMENT
					&& b.getArgumentBodyType() == Argument.BODY_RUNTIME
					&& Double.IsNaN(b.getArgumentValue())
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0195() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentName, ArgumentExtension argumentExtension) - invalid argumentName";
			TestCommonTools.consolePrintTestApiStart(195, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			PiMultArgExt piMultArgExt = new PiMultArgExt();
			Argument a = new Argument("1", piMultArgExt);
			Argument b = new Argument("x()", piMultArgExt);
			Argument c = new Argument("x(1)", piMultArgExt);
			Argument d = new Argument("x = ", piMultArgExt);
			Argument e = new Argument("1+x", piMultArgExt);
			Argument f = new Argument("1x", piMultArgExt);
			if (a.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& a.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& a.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !a.checkSyntax()
					&& b.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& b.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& b.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !b.checkSyntax()
					&& c.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& c.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& c.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !c.checkSyntax()
					&& d.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& d.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& d.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !d.checkSyntax()
					&& e.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& e.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& e.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !e.checkSyntax()
					&& f.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& f.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& f.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !f.checkSyntax()
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0196() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentName, ArgumentExtension argumentExtension)";
			TestCommonTools.consolePrintTestApiStart(196, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument("a",new PiMultArgExt());
			Argument b = new Argument("  b ",new PiMultArgExt());
			if (
					a.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& a.checkSyntax()
					&& a.getArgumentName().Equals("a")
					&& a.getArgumentType() == Argument.FREE_ARGUMENT
					&& a.getArgumentBodyType() == Argument.BODY_EXTENDED
					&& b.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& b.checkSyntax()
					&& b.getArgumentName().Equals("b")
					&& b.getArgumentType() == Argument.FREE_ARGUMENT
					&& b.getArgumentBodyType() == Argument.BODY_EXTENDED
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0197() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentName, String argumentExpressionString, PrimitiveElement... elements) - argumentName = null, argumentExpressionString = null, elements = null";
			TestCommonTools.consolePrintTestApiStart(197, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			String nullString = null;
			Argument[] nullElements = null;
			Argument a = new Argument(nullString, "2+3");
			Argument b = new Argument("b", nullString);
			Argument c = new Argument("b", "2+3", nullElements);
			if (
					a.getErrorMessage().Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !a.checkSyntax()
					&& a.getArgumentName().Length == 0
					&& a.getArgumentType() == Argument.FREE_ARGUMENT
					&& a.getArgumentBodyType() == Argument.BODY_RUNTIME
					&& Double.IsNaN(a.getArgumentValue())
					&& b.getErrorMessage().Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !b.checkSyntax()
					&& b.getArgumentName().Length == 0
					&& b.getArgumentType() == Argument.FREE_ARGUMENT
					&& b.getArgumentBodyType() == Argument.BODY_RUNTIME
					&& Double.IsNaN(b.getArgumentValue())
					&& c.getErrorMessage().Contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
					&& !c.checkSyntax()
					&& c.getArgumentName().Length == 0
					&& c.getArgumentType() == Argument.FREE_ARGUMENT
					&& c.getArgumentBodyType() == Argument.BODY_RUNTIME
					&& Double.IsNaN(c.getArgumentValue())
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0198() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentName, String argumentExpressionString, PrimitiveElement... elements) - invalid argumentName";
			TestCommonTools.consolePrintTestApiStart(198, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument("1", "2+3");
			Argument b = new Argument("x()", "2+3");
			Argument c = new Argument("x(1)", "2+3");
			Argument d = new Argument("x = ", "2+3");
			Argument e = new Argument("1+x", "2+3");
			Argument f = new Argument("1x", "2+3");
			if (a.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& a.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& a.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !a.checkSyntax()
					&& b.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& b.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& b.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !b.checkSyntax()
					&& c.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& c.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& c.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !c.checkSyntax()
					&& d.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& d.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& d.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !d.checkSyntax()
					&& e.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& e.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& e.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !e.checkSyntax()
					&& f.getErrorMessage().Contains(stringResources.INVALID_ARGUMENT_NAME)
					&& f.getErrorMessage().Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& f.getErrorMessage().Contains(stringResources.PATTERN_EXAMPLES)
					&& !f.checkSyntax()
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0199() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument(String argumentName, ArgumentExtension argumentExtension)";
			TestCommonTools.consolePrintTestApiStart(199, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			Argument a = new Argument("a","2+3");
			Argument b = new Argument("  b ","2*3");
			if (a.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& a.checkSyntax()
					&& a.getArgumentName().Equals("a")
					&& a.getArgumentType() == Argument.DEPENDENT_ARGUMENT
					&& a.getArgumentBodyType() == Argument.BODY_RUNTIME
					&& a.getArgumentValue() == 5
					&& b.getErrorMessage().Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& b.checkSyntax()
					&& b.getArgumentName().Equals("b")
					&& b.getArgumentType() == Argument.DEPENDENT_ARGUMENT
					&& b.getArgumentBodyType() == Argument.BODY_RUNTIME
					&& b.getArgumentValue() == 6
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0200() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - setDescription, getDescription";
			TestCommonTools.consolePrintTestApiStart(200, testDescr);
			Argument a = new Argument("a = 2");
			a.setDescription("b");
			if (a.getDescription().Equals("b"))
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0201() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - setVerboseMode, setSilentMode, getVerboseMode";
			TestCommonTools.consolePrintTestApiStart(201, testDescr);
			Argument a = new Argument("a", "2+3");
			a.setVerboseMode();
			bool v1 = a.getVerboseMode();
			a.setSilentMode();
			bool v2 = a.getVerboseMode();
			if (v1 & !v2)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0202() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Expression API - error while calculate - behaviour test";
			TestCommonTools.consolePrintTestApiStart(202, testDescr);
			Argument x = new Argument("x = if(isNaN(x) || x> 3, 100, x/2)");
			x.addArguments(x);
			String e1 = x.getErrorMessage();
			bool syn = x.checkSyntax();
			String e2 = x.getErrorMessage();
			double v = x.getArgumentValue();
			String e3 = x.getErrorMessage();
			StringResources stringResources = StringModel.getStringResources();
			if (e1.Contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
					&& syn
					&& e2.Contains(stringResources.NO_ERRORS_DETECTED)
					&& Double.IsNaN(v)
					&& e3.Contains(stringResources.RECURSION_CALLS_COUNTER_EXCEEDED)
					&& e3.Contains(stringResources.ERROR_WHILE_EXECUTING_THE_CALCULATE)
					&& e3.Contains(stringResources.EXCEPTION)
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0203() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public getComputingTime()";
			TestCommonTools.consolePrintTestApiStart(203, testDescr);
			Argument a = new Argument("a", 2);
			Argument b = new Argument("b", "sum(i, 1, 200000, i)");
			a.getArgumentValue();
			b.getArgumentValue();
			if (a.getComputingTime() == 0 && b.getComputingTime() > 0)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0204() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public void setArgumentName(String argumentName)";
			TestCommonTools.consolePrintTestApiStart(204, testDescr);
			Argument a = new Argument("a", 2);
			a.setArgumentName(null);
			Argument b = new Argument("1a2", 2);
			b.setArgumentName(null);
			Argument c = new Argument("1a2", 2);
			c.setArgumentName("c");
			c.setArgumentValue(2);
			Argument d = new Argument("d", 2);
			d.setArgumentName("1a2");
			if (a.getArgumentName().Equals("a")
					&& a.checkSyntax()
					&& b.getArgumentName().Length == 0
					&& c.getArgumentName().Equals("c")
					&& c.getArgumentValue() == 2
					&& d.getArgumentName().Equals("d")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0205() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public void setArgumentExpressionString(String argumentExpressionString)";
			TestCommonTools.consolePrintTestApiStart(205, testDescr);
			Argument a = new Argument("a = 2");
			a.setArgumentExpressionString("2+3");
			Argument b = new Argument("b = 2");
			b.setArgumentExpressionString(null);
			if (a.getArgumentType() == Argument.DEPENDENT_ARGUMENT
					&& a.getArgumentValue() == 5
					&& a.getArgumentExpressionString().Equals("2+3")
					&& b.getArgumentType() == Argument.FREE_ARGUMENT
					&& b.getArgumentValue() == 2
					&& b.getArgumentExpressionString().Equals("")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0206() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public void addDefinitions(PrimitiveElement... elements), public void addArguments(Argument... arguments)";
			TestCommonTools.consolePrintTestApiStart(206, testDescr);
			Argument x = new Argument("x = a + b + f(4)");
			Argument a = new Argument("a = 2");
			Constant b = new Constant("b = 3");
			Function f = new Function("f(x) = x");
			Argument[] nullElements = null;
			double v1 = x.getArgumentValue();
			String msg1 = x.getErrorMessage() ;
			x.addDefinitions(nullElements);
			x.addDefinitions(a, b, f);
			double v2 = x.getArgumentValue();
			String msg2 = x.getErrorMessage();
			x.removeDefinitions(a, b, f);
			x.removeDefinitions(nullElements);
			double v3 = x.getArgumentValue();
			String msg3 = x.getErrorMessage();
			StringResources stringResources = StringModel.getStringResources();
			if (Double.IsNaN(v1)
					&& msg1.Contains(stringResources.INVALID_TOKEN)
					&& msg1.Contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
					&& msg1.Contains("'a'") && msg1.Contains("'b'") && msg1.Contains("'f'") && !msg1.Contains("[f]")
					&& v2 == 9
					&& msg2.Contains(stringResources.NO_ERRORS_DETECTED)
					&& !msg2.Contains("'a'") && !msg2.Contains("'b'") && msg2.Contains("'f'") && msg2.Contains("[f]")
					&& Double.IsNaN(v3)
					&& msg3.Contains(stringResources.INVALID_TOKEN)
					&& msg3.Contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
					&& msg3.Contains("'a'") && msg3.Contains("'b'") && msg3.Contains("'f'") && !msg3.Contains("[f]")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0207() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - add/remove Arguments, add/remove Constants, add/remove Functions - objects";
			TestCommonTools.consolePrintTestApiStart(207, testDescr);
			Argument x = new Argument("x = a + b + f(4)");
			Argument a = new Argument("a = 2");
			Constant b = new Constant("b = 3");
			Function f = new Function("f(x) = x");
			Argument[] nullArg = null;
			Constant[] nullConst = null;
			Function[] nullFun = null;
			double v1 = x.getArgumentValue();
			String msg1 = x.getErrorMessage() ;
			x.addArguments(a);
			x.addArguments(nullArg);
			x.addConstants(b);
			x.addConstants(nullConst);
			x.addFunctions(f);
			x.addFunctions(nullFun);
			double v2 = x.getArgumentValue();
			String msg2 = x.getErrorMessage();
			x.removeArguments(a);
			x.removeArguments(nullArg);
			x.removeConstants(b);
			x.removeConstants(nullConst);
			x.removeFunctions(f);
			x.removeFunctions(nullFun);
			double v3 = x.getArgumentValue();
			String msg3 = x.getErrorMessage();
			StringResources stringResources = StringModel.getStringResources();
			if (Double.IsNaN(v1)
					&& msg1.Contains(stringResources.INVALID_TOKEN)
					&& msg1.Contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
					&& msg1.Contains("'a'") && msg1.Contains("'b'") && msg1.Contains("'f'") && !msg1.Contains("[f]")
					&& v2 == 9
					&& msg2.Contains(stringResources.NO_ERRORS_DETECTED)
					&& !msg2.Contains("'a'") && !msg2.Contains("'b'") && msg2.Contains("'f'") && msg2.Contains("[f]")
					&& Double.IsNaN(v3)
					&& msg3.Contains(stringResources.INVALID_TOKEN)
					&& msg3.Contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
					&& msg3.Contains("'a'") && msg3.Contains("'b'") && msg3.Contains("'f'") && !msg3.Contains("[f]")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0208() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - addConstants(List<Constant> constantsList) / getConstantIndex / getConstant / getConstantsNumber / removeAllConstants";
			TestCommonTools.consolePrintTestApiStart(208, testDescr);
			Argument x = new Argument("x = a + b + c + d");
			Constant a = new Constant("a = 1");
			Constant b = new Constant("b = 2");
			Constant c = new Constant("c = 3");
			Constant d = new Constant("d = 4");
			List<Constant> constList = new List<Constant>();
			constList.Add(a);
			constList.Add(b);
			constList.Add(c);
			constList.Add(d);

			bool syn1 = x.checkSyntax();
			String msg1 = x.getErrorMessage();
			int nconst1 = x.getConstantsNumber();
			int apos0 = x.getConstantIndex(null);
			int apos1 = x.getConstantIndex("a");
			Constant afound1 = x.getConstant(apos1);
			Constant afound11 = x.getConstant(null);

			x.addConstants(constList);

			bool syn2 = x.checkSyntax();
			String msg2 = x.getErrorMessage();
			int nconst2 = x.getConstantsNumber();
			int apos2 = x.getConstantIndex("a");
			Constant afound2 = x.getConstant(apos2);
			Constant afound21 = x.getConstant("a");

			x.removeAllConstants();

			bool syn3 = x.checkSyntax();
			String msg3 = x.getErrorMessage();
			int nconst3 = x.getConstantsNumber();
			int apos3 = x.getConstantIndex("a");
			Constant afound3 = x.getConstant(apos3);
			Constant afound31 = x.getConstant("a");

			StringResources stringResources = StringModel.getStringResources();
			if (!syn1
					&& msg1.Contains(stringResources.INVALID_TOKEN)
					&& msg1.Contains("'a'") && msg1.Contains("'b'") && msg1.Contains("'c'") && msg1.Contains("'d'")
					&& nconst1 == 0 && apos0 == -1
					&& afound1 == null & afound11 == null
					&& syn2
					&& msg2.Contains(stringResources.NO_ERRORS_DETECTED)
					&& !msg2.Contains("'a'") && !msg2.Contains("'b'") && !msg2.Contains("'c'") && !msg2.Contains("'d'")
					&& nconst2 == 4 && apos2 == 0
					&& afound2 == afound21 && afound2.getConstantName().Equals("a")
					&& !syn3
					&& msg3.Contains(stringResources.INVALID_TOKEN)
					&& msg3.Contains("'a'") && msg3.Contains("'b'") && msg3.Contains("'c'") && msg3.Contains("'d'")
					&& nconst3 == 0 && apos3 == -1
					&& afound3 == null & afound31 == null
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0209() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - defineArguments(String... argumentsNames / getArgumentIndex(String argumentName) / getArgument(String argumentName) / getArgument(int argumentIndex) / getArgumentsNumber() / removeAllArguments()";
			TestCommonTools.consolePrintTestApiStart(209, testDescr);
			Argument x = new Argument("x = a+b+c+d+e+f");
			String[] nullStr = null;
			x.defineArguments(nullStr);
			bool syn1 = x.checkSyntax();
			String msg1 = x.getErrorMessage();
			int narg1 = x.getArgumentsNumber();
			int apos0 = x.getArgumentIndex(null);
			int apos1 = x.getArgumentIndex("a");
			Argument afound1 = x.getArgument(apos1);
			Argument afound11 = x.getArgument("a");
			x.defineArguments("c", "a", "b");
			bool syn2 = x.checkSyntax();
			String msg2 = x.getErrorMessage();
			int narg2 = x.getArgumentsNumber();
			int apos2 = x.getArgumentIndex("a");
			Argument afound2 = x.getArgument(apos2);
			Argument afound21 = x.getArgument("a");
			x.defineArguments(nullStr);
			x.defineArguments("d", "f");
			bool syn3 = x.checkSyntax();
			String msg3 = x.getErrorMessage();
			int narg3 = x.getArgumentsNumber();
			int apos3 = x.getArgumentIndex("a");
			Argument afound3 = x.getArgument(apos3);
			Argument afound31 = x.getArgument("a");
			x.removeAllArguments();
			x.defineArguments(nullStr);
			bool syn4 = x.checkSyntax();
			String msg4 = x.getErrorMessage();
			int narg4 = x.getArgumentsNumber();
			int apos4 = x.getArgumentIndex("a");
			Argument afound4 = x.getArgument(apos4);
			Argument afound41 = x.getArgument("a");
			StringResources stringResources = StringModel.getStringResources();
			if (!syn1
					&& msg1.Contains(stringResources.INVALID_TOKEN)
					&& msg1.Contains("'a'") && msg1.Contains("'b'") && msg1.Contains("'c'") && msg1.Contains("'d'") && msg1.Contains("'f'")
					&& narg1 == 0 && apos0 == -1 && apos1 == -1
					&& afound1 == null && afound11 == null
					&& !syn2
					&& msg2.Contains(stringResources.INVALID_TOKEN)
					&& msg2.Contains("'d'") && msg2.Contains("'f'")
					&& narg2 == 3 && apos2 == 1
					&& afound2 == afound21 && afound2.getArgumentName().Equals("a")
					&& syn3
					&& msg3.Contains(stringResources.NO_ERRORS_DETECTED)
					&& !msg3.Contains("'a'") && !msg3.Contains("'b'") && !msg3.Contains("'c'") && !msg3.Contains("'d'") && !msg3.Contains("'f'")
					&& narg3 == 5 && apos3 == 1
					&& afound3 == afound31 && afound3.getArgumentName().Equals("a")
					&& !syn4
					&& msg4.Contains(stringResources.INVALID_TOKEN)
					&& msg4.Contains("'a'") && msg4.Contains("'b'") && msg4.Contains("'c'") && msg4.Contains("'d'") && msg4.Contains("'f'")
					&& narg4 == 0 && apos4 == -1
					&& afound4 == null && afound41 == null
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}

		[TestMethod]
		public void testApi0210() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - defineArguments(String... getFunctionIndex / getFunction / getFunctionsNumber / removeAllFunctions";
			TestCommonTools.consolePrintTestApiStart(210, testDescr);
			Argument x = new Argument("x = a(1)+b(2)+c(3)+d(4)");
			Function a = new Function("a(x) = x");
			Function b = new Function("b(x) = x");
			Function c = new Function("c(x) = x");
			Function d = new Function("d(x) = x");
			int nfun0 = x.getFunctionsNumber();
			x.addFunctions(a, b, c, d);
			bool syn1 = x.checkSyntax();
			String msg1 = x.getErrorMessage();
			int nfun1 = x.getFunctionsNumber();
			Function n1 = x.getFunction(null);
			Function n2 = x.getFunction(-1);
			Function f = x.getFunction("f");
			int bpos = x.getFunctionIndex("b");
			Function b1 = x.getFunction(bpos);
			x.removeAllFunctions();
			int nfun2 = x.getFunctionsNumber();
			bool syn2 = x.checkSyntax();
			String msg2 = x.getErrorMessage();
			StringResources stringResources = StringModel.getStringResources();
			if (nfun0 == 0
					&& syn1
					&& msg1.Contains(stringResources.NO_ERRORS_DETECTED)
					&& nfun1 == 4
					&& n1 == null
					&& n2 == null
					&& f == null
					&& bpos == 1
					&& b1 == b
					&& nfun2 == 0
					&& !syn2
					&& msg2.Contains(stringResources.INVALID_TOKEN)
					&& msg2.Contains("'a'") && msg2.Contains("'b'") && msg2.Contains("'c'") && msg2.Contains("'d'")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0211() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Argument API - public Argument clone()";
			TestCommonTools.consolePrintTestApiStart(211, testDescr);
			Argument xx = new Argument("x = a(1)+b(2)+c(3)+d(4)");
			Function a = new Function("a(x) = x");
			Function b = new Function("b(x) = x");
			Function c = new Function("c(x) = x");
			Function d = new Function("d(x) = x");
			Argument xc = xx.clone();
			if (xx.getArgumentName().Equals(xc.getArgumentName())
					&& xx.getArgumentExpressionString().Equals(xc.getArgumentExpressionString())
					&& xx.getDescription().Equals(xc.getDescription())
					&& xx.getArgumentType() == xc.getArgumentType()
					&& xx.getArgumentBodyType() == xc.getArgumentBodyType()
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0212() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - public Function(String functionName, String functionExpressionString, PrimitiveElement... elements)";
			TestCommonTools.consolePrintTestApiStart(212, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			String nullStr = null;
			Argument[] nullElements = null;
			Constant c = new Constant("c = 1");
			Function f1 = new Function(nullStr, "2+3", nullElements);
			Function f2 = new Function("f", nullStr, nullElements);
			Function f3 = new Function("f", "2+3", nullElements);
			Function f4 = new Function("1f", "2+3", c);
			Function f5 = new Function("f1(", "2+3", c);
			Function f6 = new Function("  f   ", "  2+3 ", c);
			bool syn1 = f1.checkSyntax(); String msg1 = f1.getErrorMessage();
			bool syn2 = f2.checkSyntax(); String msg2 = f2.getErrorMessage();
			bool syn3 = f3.checkSyntax(); String msg3 = f3.getErrorMessage();
			String msg4 = f4.getErrorMessage(); bool syn4 = f4.checkSyntax();
			String msg5 = f5.getErrorMessage(); bool syn5 = f5.checkSyntax();
			String msg6 = f6.getErrorMessage(); bool syn6 = f6.checkSyntax();
			if (!syn1 && msg1.Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !syn2 && msg2.Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !syn3 && msg3.Contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
					&& !syn4 && msg4.Contains(stringResources.INVALID_FUNCTION_NAME)
					&& msg4.Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& msg4.Contains(stringResources.PATTERN_EXAMPLES)
					&& !syn5 && msg5.Contains(stringResources.INVALID_FUNCTION_NAME)
					&& msg5.Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& msg5.Contains(stringResources.PATTERN_EXAMPLES)
					&& syn6 && msg6.Contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
					&& f6.getFunctionName().Equals("f")
					&& f6.getFunctionExpressionString().Equals("2+3")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0213() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - Function(String functionName, String  functionExpressionString, String... argumentsNames)";
			TestCommonTools.consolePrintTestApiStart(213, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			String nullStr = null;
			Argument[] nullElements = null;
			Function f1 = new Function(nullStr, "2+3", nullElements);
			Function f2 = new Function("f", nullStr, nullElements);
			Function f3 = new Function("f", "2+3", nullElements);
			Function f4 = new Function("1f", "2+3*x", "x");
			Function f5 = new Function("f1( ", "2+3*x", "x");
			Function f6 = new Function("  f   ", "  2+3*x  ", "x");
			bool syn1 = f1.checkSyntax(); String msg1 = f1.getErrorMessage();
			bool syn2 = f2.checkSyntax(); String msg2 = f2.getErrorMessage();
			bool syn3 = f3.checkSyntax(); String msg3 = f3.getErrorMessage();
			String msg4 = f4.getErrorMessage(); bool syn4 = f4.checkSyntax();
			String msg5 = f5.getErrorMessage(); bool syn5 = f5.checkSyntax();
			String msg6 = f6.getErrorMessage(); bool syn6 = f6.checkSyntax();
			if (!syn1 && msg1.Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !syn2 && msg2.Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !syn3 && msg3.Contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
					&& !syn4 && msg4.Contains(stringResources.INVALID_FUNCTION_NAME)
					&& msg4.Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& msg4.Contains(stringResources.PATTERN_EXAMPLES)
					&& !syn5 && msg5.Contains(stringResources.INVALID_FUNCTION_NAME)
					&& msg5.Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& msg5.Contains(stringResources.PATTERN_EXAMPLES)
					&& syn6 && msg6.Contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
					&& f6.getFunctionName().Equals("f")
					&& f6.getFunctionExpressionString().Equals("2+3*x")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0214() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - public Function(String functionDefinitionString, PrimitiveElement... elements)";
			TestCommonTools.consolePrintTestApiStart(214, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			String nullStr = null;
			Argument[] nullElements = null;
			Constant c = new Constant("c = 1");
			Function f1 = new Function(nullStr, c);
			Function f2 = new Function("f(x) = 2", nullElements);
			Function f3 = new Function(nullStr, nullElements);
			Function f4 = new Function("f = 2+3*x", c);
			Function f5 = new Function(" 2+3*x", c);
			Function f6 = new Function("  f(x)   =   2+3*x   ", c);
			Function f7 = new Function("  f(...)   =   [npar]   ", c);
			bool syn1 = f1.checkSyntax(); String msg1 = f1.getErrorMessage();
			bool syn2 = f2.checkSyntax(); String msg2 = f2.getErrorMessage();
			bool syn3 = f3.checkSyntax(); String msg3 = f3.getErrorMessage();
			String msg4 = f4.getErrorMessage(); bool syn4 = f4.checkSyntax();
			String msg5 = f5.getErrorMessage(); bool syn5 = f5.checkSyntax();
			String msg6 = f6.getErrorMessage(); bool syn6 = f6.checkSyntax();
			String msg7 = f7.getErrorMessage(); bool syn7 = f7.checkSyntax();
			if (!syn1 && msg1.Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !syn2 && msg2.Contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
					&& !syn3 && msg3.Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !syn4 && msg4.Contains(stringResources.INVALID_FUNCTION_DEFINITION)
					&& msg4.Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& msg4.Contains(stringResources.PATTERN_EXAMPLES)
					&& !syn5 && msg5.Contains(stringResources.INVALID_FUNCTION_DEFINITION)
					&& msg5.Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& msg5.Contains(stringResources.PATTERN_EXAMPLES)
					&& syn6 && msg6.Contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
					&& f6.getFunctionName().Equals("f")
					&& f6.getFunctionExpressionString().Equals("2+3*x")
					&& syn7 && msg7.Contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
					&& f7.getFunctionName().Equals("f")
					&& f7.getFunctionExpressionString().Equals("[npar]")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0215() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - public Function(String functionName, FunctionExtension functionExtension)";
			TestCommonTools.consolePrintTestApiStart(215, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			String nullStr = null;
			FunExt funExtNull = null;
			FunExt funExt = new FunExt();
			Function f1 = new Function(nullStr, funExt);
			Function f2 = new Function("f", funExtNull);
			Function f3 = new Function(nullStr, funExtNull);
			Function f4 = new Function("1f", funExt);
			Function f5 = new Function("f1(", funExt);
			Function f6 = new Function("f", funExt);
			bool syn1 = f1.checkSyntax(); String msg1 = f1.getErrorMessage();
			bool syn2 = f2.checkSyntax(); String msg2 = f2.getErrorMessage();
			bool syn3 = f3.checkSyntax(); String msg3 = f3.getErrorMessage();
			String msg4 = f4.getErrorMessage(); bool syn4 = f4.checkSyntax();
			String msg5 = f5.getErrorMessage(); bool syn5 = f5.checkSyntax();
			String msg6 = f6.getErrorMessage(); bool syn6 = f6.checkSyntax();
			if (!syn1 && msg1.Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !syn2 && msg2.Contains(stringResources.PROVIDED_EXTENSION_IS_NULL)
					&& !syn3 && msg3.Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !syn4 && msg4.Contains(stringResources.INVALID_FUNCTION_NAME)
					&& msg4.Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& msg4.Contains(stringResources.PATTERN_EXAMPLES)
					&& !syn5 && msg5.Contains(stringResources.INVALID_FUNCTION_NAME)
					&& msg5.Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& msg5.Contains(stringResources.PATTERN_EXAMPLES)
					&& syn6 && msg6.Contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
					&& f6.getFunctionName().Equals("f")
					&& f6.getFunctionBodyType() == Function.BODY_EXTENDED
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0216() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - public Function(String functionName, FunctionExtensionVariadic functionExtensionVariadic) + checkSyntax + getErrorMessage";
			TestCommonTools.consolePrintTestApiStart(216, testDescr);
			StringResources stringResources = StringModel.getStringResources();
			String nullStr = null;
			FunExtVar funExtNull = null;
			FunExtVar funExt = new FunExtVar();
			Function f1 = new Function(nullStr, funExt);
			Function f2 = new Function("f", funExtNull);
			Function f3 = new Function(nullStr, funExtNull);
			Function f4 = new Function("1f", funExt);
			Function f5 = new Function("f1(", funExt);
			Function f6 = new Function("f", funExt);
			bool syn1 = f1.checkSyntax(); String msg1 = f1.getErrorMessage();
			bool syn2 = f2.checkSyntax(); String msg2 = f2.getErrorMessage();
			bool syn3 = f3.checkSyntax(); String msg3 = f3.getErrorMessage();
			String msg4 = f4.getErrorMessage(); bool syn4 = f4.checkSyntax();
			String msg5 = f5.getErrorMessage(); bool syn5 = f5.checkSyntax();
			String msg6 = f6.getErrorMessage(); bool syn6 = f6.checkSyntax();
			if (!syn1 && msg1.Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !syn2 && msg2.Contains(stringResources.PROVIDED_EXTENSION_IS_NULL)
					&& !syn3 && msg3.Contains(stringResources.PROVIDED_STRING_IS_NULL)
					&& !syn4 && msg4.Contains(stringResources.INVALID_FUNCTION_NAME)
					&& msg4.Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& msg4.Contains(stringResources.PATTERN_EXAMPLES)
					&& !syn5 && msg5.Contains(stringResources.INVALID_FUNCTION_NAME)
					&& msg5.Contains(stringResources.PATTERN_DOES_NOT_MATCH)
					&& msg5.Contains(stringResources.PATTERN_EXAMPLES)
					&& syn6 && msg6.Contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
					&& f6.getFunctionName().Equals("f")
					&& f6.getFunctionBodyType() == Function.BODY_EXTENDED
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0217() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - setDescription /  setFunctionName / getDescription / getFunctionName / getFunctionExpressionString / getFunctionBodyType";
			TestCommonTools.consolePrintTestApiStart(217, testDescr);
			Function f = new Function("f(x,y) = 2*x+3*y");
			f.setDescription("This is a new description");
			f.setFunctionName("g");
			f.setFunctionName("1g");
			f.setFunctionName(null);
			f.setDescription(null);
			if (f.getDescription().Equals("This is a new description")
					&& f.getFunctionName().Equals("g")
					&& f.getFunctionExpressionString().Equals("2*x+3*y")
					&& f.getFunctionBodyType() == Function.BODY_RUNTIME
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0218() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - public double calculate(double... parameters) + getComputingTime";
			TestCommonTools.consolePrintTestApiStart(218, testDescr);
			Function fErr = new Function("f = 2+3");
			Function f = new Function("f(n) = sum(i, 1, n, i)");
			Function fVar = new Function("f(...) = sum(i, 1, par(1), i)");
			Function fExt = new Function("f", new LongComputingFunExt());
			Function fExtVar = new Function("f", new LongComputingFunExtVar());
			double range = 1000000;
			double result = 0;
			for (int i = 1; i <= range; i++)
				result += i;
			double[] nullParams = null;
			double[] zerLengthParams = new double[0];

			double dErr = fErr.calculate(range); double tErr = fErr.getComputingTime();
			double dNullParams = f.calculate(nullParams); double tNullParams = f.getComputingTime();
			double dZerLengthParams = f.calculate(zerLengthParams); double tZerLengthParams = f.getComputingTime();
			double df = f.calculate(range); double tf = f.getComputingTime();
			double dfVar = fVar.calculate(range); double tfVar = fVar.getComputingTime();
			double dfExt = fExt.calculate(range); double tfExt = fExt.getComputingTime();
			double dfExtVar = fExtVar.calculate(range); double tfExtVar = fExtVar.getComputingTime();

			if (Double.IsNaN(dErr) && tErr == 0
					&& Double.IsNaN(dNullParams) && tNullParams == 0
					&& Double.IsNaN(dZerLengthParams)  && tZerLengthParams == 0
					&& df == result && tf > 0
					&& dfVar == result && tfVar > 0
					&& dfExt == result && tfExt > 0
					&& dfExtVar == result && tfExtVar > 0
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0219() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - public calculate(Argument... arguments) + getComputingTime";
			TestCommonTools.consolePrintTestApiStart(219, testDescr);
			Function fErr = new Function("f = 2+3");
			Function f = new Function("f(n) = sum(i, 1, n, i)");
			Function fVar = new Function("f(...) = sum(i, 1, par(1), i)");
			Function fExt = new Function("f", new LongComputingFunExt());
			Function fExtVar = new Function("f", new LongComputingFunExtVar());
			Argument range = new Argument("range = 1000000");
			double result = 0;
			double drange = range.getArgumentValue();
			for (int i = 1; i <= drange; i++)
				result += i;
			Argument[] nullParams = null;
			Argument[] zerLengthParams = new Argument[0];

			double dErr = fErr.calculate(range); double tErr = fErr.getComputingTime();
			double dNullParams = f.calculate(nullParams); double tNullParams = f.getComputingTime();
			double dZerLengthParams = f.calculate(zerLengthParams); double tZerLengthParams = f.getComputingTime();
			double df = f.calculate(range); double tf = f.getComputingTime();
			double dfVar = fVar.calculate(range); double tfVar = fVar.getComputingTime();
			double dfExt = fExt.calculate(range); double tfExt = fExt.getComputingTime();
			double dfExtVar = fExtVar.calculate(range); double tfExtVar = fExtVar.getComputingTime();

			if (Double.IsNaN(dErr) && tErr == 0
					&& Double.IsNaN(dNullParams) && tNullParams == 0
					&& Double.IsNaN(dZerLengthParams)  && tZerLengthParams == 0
					&& df == result && tf > 0
					&& dfVar == result && tfVar > 0
					&& dfExt == result && tfExt > 0
					&& dfExtVar == result && tfExtVar > 0
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0220() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - calculate(CalcStepsRegister calcStepsRegister) + getComputingTime";
			TestCommonTools.consolePrintTestApiStart(220, testDescr);
			Argument range = new Argument("range = 1000000");
			Function fErr = new Function("f = 2+3");
			Function f = new Function("f(n) = sum(i, 1, n, i)");
			Expression e = new Expression("f(range)", range, f);
			Function fVar = new Function("f(...) = sum(i, 1, par(1), i)");
			Expression eVar = new Expression("f(range)", range, fVar);
			Function fExt = new Function("f", new LongComputingFunExt());
			Expression eExt = new Expression("f(range)", range, fExt);
			Function fExtVar = new Function("f", new LongComputingFunExtVar());
			Expression eExtVar = new Expression("f(range)", range, fExtVar);
			double result = 0;
			double drange =  range.getArgumentValue();
			for (int i = 1; i <= drange; i++)
				result += i;
			CalcStepsRegister calcStepsRegister = null;

			double dErr = fErr.calculate(calcStepsRegister); double tErr = fErr.getComputingTime();
			double df = e.calculate(calcStepsRegister); double tf = f.getComputingTime();
			double dfVar = eVar.calculate(calcStepsRegister); double tfVar = fVar.getComputingTime();
			double dfExt = eExt.calculate(calcStepsRegister); double tfExt = fExt.getComputingTime();
			double dfExtVar = eExtVar.calculate(calcStepsRegister); double tfExtVar = fExtVar.getComputingTime();

			if (Double.IsNaN(dErr) && tErr == 0
					&& df == result && tf > 0
					&& dfVar == result && tfVar > 0
					&& dfExt == result && tfExt > 0
					&& dfExtVar == result && tfExtVar > 0
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0221() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - setArgumentValue";
			TestCommonTools.consolePrintTestApiStart(221, testDescr);
			Function fErr = new Function("f = 2+3");
			Function f = new Function("f(n) = sum(i, 1, n, i)");
			Function fVar = new Function("f(...) = sum(i, 1, par(1), i)");
			Function fExt = new Function("f", new LongComputingFunExt());
			Function fExtVar = new Function("f", new LongComputingFunExtVar());
			double range = 1000000;
			double result = 0;
			for (int i = 1; i <= range; i++)
				result += i;

			fErr.setArgumentValue(0, 1);
			f.setArgumentValue(0, range);
			f.setArgumentValue(-1, -1);
			f.setArgumentValue(10, 10);
			fVar.setArgumentValue(0, range);
			fVar.setArgumentValue(-1, -1);
			fVar.setArgumentValue(10, 10);
			fExt.setArgumentValue(0, range);
			fExt.setArgumentValue(-1, -1);
			fExt.setArgumentValue(10, 10);
			fExtVar.setArgumentValue(0, range);
			fExtVar.setArgumentValue(-1, -1);
			fExtVar.setArgumentValue(10, 10);

			double df = f.calculate();
			double dfVar = fVar.calculate();
			double dfExt = fExt.calculate();
			double dfExtVar = fExtVar.calculate(range);

			if (df == result
					&& Double.IsNaN(dfVar)
					&& dfExt == result
					&& dfExtVar == result
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0222() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - setVerboseMode, setSilentMode, getVerboseMode";
			TestCommonTools.consolePrintTestApiStart(222, testDescr);
			Function a = new Function("a", "2+3", "x");
			a.setVerboseMode();
			bool v1 = a.getVerboseMode();
			a.setSilentMode();
			bool v2 = a.getVerboseMode();
			if (v1 & !v2)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0223() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - public void addDefinitions(PrimitiveElement... elements), public void addArguments(Argument... arguments)";
			TestCommonTools.consolePrintTestApiStart(206, testDescr);
			Function x = new Function("x(n) = a + b + f(n)");
			Argument a = new Argument("a = 2");
			Constant b = new Constant("b = 3");
			Function f = new Function("f(x) = x");
			Argument[] nullElements = null;
			double v1 = x.calculate(4);
			String msg1 = x.getErrorMessage() ;
			x.addDefinitions(nullElements);
			x.addDefinitions(a, b, f);
			double v2 = x.calculate(4);
			String msg2 = x.getErrorMessage();
			x.removeDefinitions(a, b, f);
			x.removeDefinitions(nullElements);
			double v3 = x.calculate(4);
			String msg3 = x.getErrorMessage();
			StringResources stringResources = StringModel.getStringResources();
			if (Double.IsNaN(v1)
					&& msg1.Contains(stringResources.INVALID_TOKEN)
					&& msg1.Contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
					&& msg1.Contains("'a'") && msg1.Contains("'b'") && msg1.Contains("'f'") && !msg1.Contains("[f]")
					&& v2 == 9
					&& msg2.Contains(stringResources.NO_ERRORS_DETECTED)
					&& !msg2.Contains("'a'") && !msg2.Contains("'b'") && msg2.Contains("'f'") && msg2.Contains("[f]")
					&& Double.IsNaN(v3)
					&& msg3.Contains(stringResources.INVALID_TOKEN)
					&& msg3.Contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
					&& msg3.Contains("'a'") && msg3.Contains("'b'") && msg3.Contains("'f'") && !msg3.Contains("[f]")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0224() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - add/remove Arguments, add/remove Constants, add/remove Functions - objects";
			TestCommonTools.consolePrintTestApiStart(224, testDescr);
			Function x = new Function("x(n) = a + b + f(n)");
			Argument a = new Argument("a = 2");
			Constant b = new Constant("b = 3");
			Function f = new Function("f(x) = x");
			Argument[] nullArg = null;
			Constant[] nullConst = null;
			Function[] nullFun = null;
			double v1 = x.calculate(4);
			String msg1 = x.getErrorMessage() ;
			x.addArguments(a);
			x.addArguments(nullArg);
			x.addConstants(b);
			x.addConstants(nullConst);
			x.addFunctions(f);
			x.addFunctions(nullFun);
			double v2 = x.calculate(4);
			String msg2 = x.getErrorMessage();
			x.removeArguments(a);
			x.removeArguments(nullArg);
			x.removeConstants(b);
			x.removeConstants(nullConst);
			x.removeFunctions(f);
			x.removeFunctions(nullFun);
			double v3 = x.calculate(4);
			String msg3 = x.getErrorMessage();
			StringResources stringResources = StringModel.getStringResources();
			if (Double.IsNaN(v1)
					&& msg1.Contains(stringResources.INVALID_TOKEN)
					&& msg1.Contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
					&& msg1.Contains("'a'") && msg1.Contains("'b'") && msg1.Contains("'f'") && !msg1.Contains("[f]")
					&& v2 == 9
					&& msg2.Contains(stringResources.NO_ERRORS_DETECTED)
					&& !msg2.Contains("'a'") && !msg2.Contains("'b'") && msg2.Contains("'f'") && msg2.Contains("[f]")
					&& Double.IsNaN(v3)
					&& msg3.Contains(stringResources.INVALID_TOKEN)
					&& msg3.Contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
					&& msg3.Contains("'a'") && msg3.Contains("'b'") && msg3.Contains("'f'") && !msg3.Contains("[f]")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0225() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - addConstants(List<Constant> constantsList) / getConstantIndex / getConstant / getConstantsNumber / removeAllConstants";
			TestCommonTools.consolePrintTestApiStart(225, testDescr);
			Function x = new Function("x(n) = a + b + c + d");
			Constant a = new Constant("a = 1");
			Constant b = new Constant("b = 2");
			Constant c = new Constant("c = 3");
			Constant d = new Constant("d = 4");
			List<Constant> constList = new List<Constant>();
			constList.Add(a);
			constList.Add(b);
			constList.Add(c);
			constList.Add(d);

			bool syn1 = x.checkSyntax();
			String msg1 = x.getErrorMessage();
			int nconst1 = x.getConstantsNumber();
			int apos0 = x.getConstantIndex(null);
			int apos1 = x.getConstantIndex("a");
			Constant afound1 = x.getConstant(apos1);
			Constant afound11 = x.getConstant(null);

			x.addConstants(constList);

			bool syn2 = x.checkSyntax();
			String msg2 = x.getErrorMessage();
			int nconst2 = x.getConstantsNumber();
			int apos2 = x.getConstantIndex("a");
			Constant afound2 = x.getConstant(apos2);
			Constant afound21 = x.getConstant("a");

			x.removeAllConstants();

			bool syn3 = x.checkSyntax();
			String msg3 = x.getErrorMessage();
			int nconst3 = x.getConstantsNumber();
			int apos3 = x.getConstantIndex("a");
			Constant afound3 = x.getConstant(apos3);
			Constant afound31 = x.getConstant("a");

			StringResources stringResources = StringModel.getStringResources();
			if (!syn1
					&& msg1.Contains(stringResources.INVALID_TOKEN)
					&& msg1.Contains("'a'") && msg1.Contains("'b'") && msg1.Contains("'c'") && msg1.Contains("'d'")
					&& nconst1 == 0 && apos0 == -1
					&& afound1 == null & afound11 == null
					&& syn2
					&& msg2.Contains(stringResources.NO_ERRORS_DETECTED)
					&& !msg2.Contains("'a'") && !msg2.Contains("'b'") && !msg2.Contains("'c'") && !msg2.Contains("'d'")
					&& nconst2 == 4 && apos2 == 0
					&& afound2 == afound21 && afound2.getConstantName().Equals("a")
					&& !syn3
					&& msg3.Contains(stringResources.INVALID_TOKEN)
					&& msg3.Contains("'a'") && msg3.Contains("'b'") && msg3.Contains("'c'") && msg3.Contains("'d'")
					&& nconst3 == 0 && apos3 == -1
					&& afound3 == null & afound31 == null
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0226() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - defineArguments(String... argumentsNames) / getArgumentIndex(String argumentName) / getArgument(String argumentName) / getArgument(int argumentIndex) / getArgumentsNumber() / removeAllArguments()";
			TestCommonTools.consolePrintTestApiStart(226, testDescr);
			Function x = new Function("x(n) = a+b+c+d+e+f");
			String[] nullStr = null;
			x.defineArguments(nullStr);
			bool syn1 = x.checkSyntax();
			String msg1 = x.getErrorMessage();
			int narg1 = x.getArgumentsNumber();
			int apos0 = x.getArgumentIndex(null);
			int apos1 = x.getArgumentIndex("a");
			Argument afound1 = x.getArgument(apos1);
			Argument afound11 = x.getArgument("a");
			x.defineArguments("c", "a", "b");
			bool syn2 = x.checkSyntax();
			String msg2 = x.getErrorMessage();
			int narg2 = x.getArgumentsNumber();
			int apos2 = x.getArgumentIndex("a");
			Argument afound2 = x.getArgument(apos2);
			Argument afound21 = x.getArgument("a");
			x.defineArguments(nullStr);
			x.defineArguments("d", "f");
			bool syn3 = x.checkSyntax();
			String msg3 = x.getErrorMessage();
			int narg3 = x.getArgumentsNumber();
			int apos3 = x.getArgumentIndex("a");
			Argument afound3 = x.getArgument(apos3);
			Argument afound31 = x.getArgument("a");
			x.removeAllArguments();
			x.defineArguments(nullStr);
			bool syn4 = x.checkSyntax();
			String msg4 = x.getErrorMessage();
			int narg4 = x.getArgumentsNumber();
			int apos4 = x.getArgumentIndex("a");
			Argument afound4 = x.getArgument(apos4);
			Argument afound41 = x.getArgument("a");
			StringResources stringResources = StringModel.getStringResources();
			if (!syn1
					&& msg1.Contains(stringResources.INVALID_TOKEN)
					&& msg1.Contains("'a'") && msg1.Contains("'b'") && msg1.Contains("'c'") && msg1.Contains("'d'") && msg1.Contains("'f'")
					&& narg1 == 1 && apos0 == -1 && apos1 == -1
					&& afound1 == null && afound11 == null
					&& !syn2
					&& msg2.Contains(stringResources.INVALID_TOKEN)
					&& msg2.Contains("'d'") && msg2.Contains("'f'")
					&& narg2 == 4 && apos2 == 2
					&& afound2 == afound21 && afound2.getArgumentName().Equals("a")
					&& syn3
					&& msg3.Contains(stringResources.NO_ERRORS_DETECTED)
					&& !msg3.Contains("'a'") && !msg3.Contains("'b'") && !msg3.Contains("'c'") && !msg3.Contains("'d'") && !msg3.Contains("'f'")
					&& narg3 == 6 && apos3 == 2
					&& afound3 == afound31 && afound3.getArgumentName().Equals("a")
					&& !syn4
					&& msg4.Contains(stringResources.INVALID_TOKEN)
					&& msg4.Contains("'a'") && msg4.Contains("'b'") && msg4.Contains("'c'") && msg4.Contains("'d'") && msg4.Contains("'f'")
					&& narg4 == 0 && apos4 == -1
					&& afound4 == null && afound41 == null
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0227() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - defineArguments(String... getFunctionIndex / getFunction / getFunctionsNumber / removeAllFunctions";
			TestCommonTools.consolePrintTestApiStart(227, testDescr);
			Function x = new Function("x(n) = a(1)+b(2)+c(3)+d(4)");
			Function a = new Function("a(x) = x");
			Function b = new Function("b(x) = x");
			Function c = new Function("c(x) = x");
			Function d = new Function("d(x) = x");
			int nfun0 = x.getFunctionsNumber();
			x.addFunctions(a, b, c, d);
			bool syn1 = x.checkSyntax();
			String msg1 = x.getErrorMessage();
			int nfun1 = x.getFunctionsNumber();
			Function n1 = x.getFunction(null);
			Function n2 = x.getFunction(-1);
			Function f = x.getFunction("f");
			int bpos = x.getFunctionIndex("b");
			Function b1 = x.getFunction(bpos);
			x.removeAllFunctions();
			int nfun2 = x.getFunctionsNumber();
			bool syn2 = x.checkSyntax();
			String msg2 = x.getErrorMessage();
			StringResources stringResources = StringModel.getStringResources();
			if (nfun0 == 0
					&& syn1
					&& msg1.Contains(stringResources.NO_ERRORS_DETECTED)
					&& nfun1 == 4
					&& n1 == null
					&& n2 == null
					&& f == null
					&& bpos == 2
					&& b1 == b
					&& nfun2 == 0
					&& !syn2
					&& msg2.Contains(stringResources.INVALID_TOKEN)
					&& msg2.Contains("'a'") && msg2.Contains("'b'") && msg2.Contains("'c'") && msg2.Contains("'d'")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0228() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - getRecursiveMode";
			TestCommonTools.consolePrintTestApiStart(228, testDescr);
			Function f1 = new Function("f1(n) = if(n > 1; n*f1(n-1); 1)");
			Function f2 = new Function("f2(n) = if(n > 1; n*sin(n-1); 1)");
			bool syn1 = f1.checkSyntax();
			bool syn2 = f2.checkSyntax();
			if (syn1 && syn2 && f1.getRecursiveMode() && !f2.getRecursiveMode())
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0229() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "Function API - getParametersNumber / setParametersNumber / getParameterName";
			TestCommonTools.consolePrintTestApiStart(229, testDescr);
			Function f1 = new Function("f1(x) = 2*x");
			Function f2 = new Function("f2(x,y) = x+y");
			Function f3 = new Function("f3(...) = [npar]");
			Function f4 = new Function("f4", new FunExt());
			Function f5 = new Function("f4", new FunExtVar());
			Function f6 = new Function("f6(x,y) = x+y");
			int n1 = f1.getParametersNumber();
			f1.calculate(1,2,3,4,5);
			int n11 = f1.getParametersNumber();
			int n2 = f2.getParametersNumber();
			f2.calculate(1,2,3,4,5);
			int n21 = f2.getParametersNumber();
			int n3 = f3.getParametersNumber();
			f3.calculate(1,2,3,4,5);
			int n31 = f3.getParametersNumber();
			int n4 = f4.getParametersNumber();
			f4.calculate(1,2,3,4,5);
			int n41 = f4.getParametersNumber();
			int n5 = f5.getParametersNumber();
			f5.calculate(1,2,3,4,5);
			int n51 = f5.getParametersNumber();

			int n6 = f6.getParametersNumber();
			f6.setParametersNumber(-1);
			int n61 = f6.getParametersNumber();
			f6.setParametersNumber(3);
			int n62 = f6.getParametersNumber();

			String x1 = f1.getParameterName(0);
			String x11 = f1.getParameterName(-1);
			String x12 = f1.getParameterName(10);

			String x2 = f2.getParameterName(0);
			String x21 = f2.getParameterName(1);
			String x22 = f2.getParameterName(10);

			String x3 = f3.getParameterName(0);
			String x31 = f3.getParameterName(-1);
			String x32 = f3.getParameterName(10);

			String x4 = f4.getParameterName(1);
			String x41 = f4.getParameterName(-1);
			String x42 = f4.getParameterName(10);

			String x5 = f5.getParameterName(1);
			String x51 = f5.getParameterName(-1);
			String x52 = f5.getParameterName(10);

			if (n1 == 1 && n11 == 1
					&& n2 == 2 && n21 == 2
					&& n3 == -1 && n31 == 5
					&& n4 == 2 && n41 == 2
					&& n5 == -1 && n51 == 5
					&& n6 == 2 && n61 == 2 && n62 == 3
					&& x1.Equals("x") && x11.Equals("") && x12.Equals("")
					&& x2.Equals("x") && x21.Equals("y") && x22.Equals("")
					&& x3.Equals("") && x31.Equals("") && x32.Equals("")
					&& x4.Equals("y") && x41.Equals("") && x42.Equals("")
					&& x5.Equals("") && x51.Equals("") && x52.Equals("")
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0230() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "console print always true test - just for API use & test coverage";
			TestCommonTools.consolePrintTestApiStart(230, testDescr);
			mXparser.consolePrintln("test");
			mXparser.consolePrintln();
			mXparser.consolePrint("test");
			mXparser.consolePrintHelp();
			mXparser.consolePrintLicense();
			mXparser.consolePrintSettings();
			mXparser.consolePrintSettings("aaa");
			String[] strArray = new String[2]; strArray[0] = "a"; strArray[1] = "b";
			String[] nullStrArray = null;
			mXparser.consolePrintln(strArray);
			mXparser.consolePrintln(nullStrArray);
			mXparser.consolePrintHelp("sin");
			Argument x = new Argument("x = 2");
			Constant c = new Constant("c  = 3");
			Function f = new Function("f(x,y,z)=x*y*z");
			RecursiveArgument r = new RecursiveArgument("r(n) = n*r(n-1)");
			r.addBaseCase(1,1);
			Expression e = new Expression("2+2 + x + c + f(1,2,3) + r(5)", x, c, f, r);
			mXparser.consolePrintTokens(e.getCopyOfInitialTokens());
			mXparser.consolePrintln(e.getCopyOfInitialTokens());
			e.consolePrintCopyOfInitialTokens();
			StringModel.getStringResources().print();
			StringModel.getStringResources().printInitSrc();
			StringModel.print();
			StringModel.printDescriptions();
			License.consolePrintLicense();
			mXparser.resetConsoleOutput();
			mXparser.setConsolePrefix("aaa");
			mXparser.setDefaultConsolePrefix();
			mXparser.setConsoleOutputPrefix("aaa");
			mXparser.setDefaultConsoleOutputPrefix();
			CalcStepsRegister calcStepsRegister = new CalcStepsRegister();
			e.setVerboseMode();
			e.calculate(calcStepsRegister);
			e.setSilentMode();
			calcStepsRegister.consolePrint();
			testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0231() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "mXparser API - consolePrintln / consolePrintln / resetConsoleOutput / getConsoleOutput / setConsoleOutputPrefix";
			TestCommonTools.consolePrintTestApiStart(231, testDescr);
			mXparser.resetConsoleOutput();
			String cleanA = mXparser.getConsoleOutput();
			mXparser.setConsoleOutputPrefix("TEST A: ");
			mXparser.consolePrintln("A1");
			mXparser.consolePrintln("A2");
			String testA = mXparser.getConsoleOutput();
			mXparser.setConsoleOutputPrefix("TEST B: ");
			mXparser.consolePrint("B1");
			mXparser.consolePrintln("B2");
			String testB = mXparser.getConsoleOutput();
			mXparser.resetConsoleOutput();
			String cleanB = mXparser.getConsoleOutput();
			mXparser.setDefaultConsoleOutputPrefix();
			mXparser.consolePrintln("C1");
			mXparser.consolePrintln("C2");
			String testC = mXparser.getConsoleOutput();
			mXparser.resetConsoleOutput();
			String cleanC = mXparser.getConsoleOutput();

			String newLine = Environment.NewLine;

			String resultA =
					"TEST A: A1" + newLine +
					"TEST A: A2" + newLine +
					"TEST A: "
					;

			String resultB =
					"TEST A: A1" + newLine +
					"TEST A: A2" + newLine +
					"TEST A: B1B2" + newLine +
					"TEST B: "
					;

			String defaultPrefix = "[mXparser-v." + mXparser.VERSION + "] ";
			String resultC =
					defaultPrefix + "C1" + newLine +
					defaultPrefix + "C2" + newLine +
					defaultPrefix
					;

			if (testA.Equals(resultA) && cleanA.Length == 0
					&& testB.Equals(resultB) && cleanB.Length == 0
					&& testC.Equals(resultC) && cleanC.Length == 0
			) testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
		   Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0232() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "mXparser API - getLicense";
			TestCommonTools.consolePrintTestApiStart(232, testDescr);
			String license1 = License.geTermsOfAgreement();
			String license2 = License.MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT;
			String license3 = mXparser.LICENSE;
			String license4 = mXparser.getLicense();

			if (license1.Equals(license2) && license1.Equals(license3) && license1.Equals(license4))
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
		   Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void testApi0233() {
			TestCommonTools.testApiSettingsInit();
			bool testResult = false;
			String testDescr = "mXparser API - mXparser.cancelCurrentCalculation / wait / resetCancelCurrentCalculationFlag";
			TestCommonTools.consolePrintTestApiStart(233, testDescr);
			mXparser.resetCancelCurrentCalculationFlag();
			bool isCancelled0 = mXparser.isCurrentCalculationCancelled();

			LongTest runner = new LongTest();
			Thread thread = new Thread(runner.run);
			bool isAlive0 = thread.IsAlive;
			thread.Start();
			mXparser.wait(300);

			bool isCancelled1 = mXparser.isCurrentCalculationCancelled();
			bool isAlive1 = thread.IsAlive;
			double v1 = runner.v;
			mXparser.wait(1000);

			bool isCancelled2 = mXparser.isCurrentCalculationCancelled();
			bool isAlive2 = thread.IsAlive;
			double v2 = runner.v;
			mXparser.wait(1000);

			double v3 = runner.v;
			bool isCancelled3 = mXparser.isCurrentCalculationCancelled();
			bool isAlive3 = thread.IsAlive;
			mXparser.cancelCurrentCalculation();

			mXparser.wait(1000);
			bool isCancelled4 = mXparser.isCurrentCalculationCancelled();
			bool isAlive4 = thread.IsAlive;
			double v4 = runner.v;

			mXparser.resetCancelCurrentCalculationFlag();
			bool isCancelled5 = mXparser.isCurrentCalculationCancelled();
			bool isAlive5 = thread.IsAlive;

			if (!isCancelled0 && !isAlive0
					&& !isCancelled1 && v1 == 0 && isAlive1
					&& !isCancelled2 && v2 == 0 && isAlive2
					&& !isCancelled3 && v3 == 0 && isAlive3
					&& isCancelled4  && Double.IsNaN(v4) && !isAlive4
					&& !isCancelled5 && !isAlive5
			)
				testResult = true;
			TestCommonTools.consolePrintTestApiEnd(testResult);
		   Assert.IsTrue(testResult);
		}
		public static bool testCanonicalString(String expStr, String expResStr, params String[] elements) {
            mXparser.consolePrintln();
            mXparser.consolePrintln("------ expStr = " + expStr);
            mXparser.consolePrintln("------ expResStr = " + expResStr);
            Expression e = new Expression(expStr);
			if (elements != null)
				if (elements.Length > 0)
					foreach (String str in elements)
						e.addArguments(new Argument(str, "0"));
            String canExprStr = e.getCanonicalExpressionString();
            mXparser.consolePrintln("------ canExprStr = " + canExprStr);
            return expResStr.Equals(canExprStr);
		}
    }
}