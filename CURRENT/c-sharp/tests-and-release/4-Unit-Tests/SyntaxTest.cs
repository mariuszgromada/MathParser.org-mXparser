/*
 * @(#)SyntaxTest.cs        5.0.0    2022-02-12
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2022 MARIUSZ GROMADA. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY <MARIUSZ GROMADA> ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of MARIUSZ GROMADA.
 *
 * If you have any questions/bugs feel free to contact:
 *
 *     Mariusz Gromada
 *     mariuszgromada.org@gmail.com
 *     http://mathparser.org
 *     http://mathspace.pl
 *     http://janetsudoku.mariuszgromada.org
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://mariuszgromada.github.io/MathParser.org-mXparser
 *     http://mxparser.sourceforge.net
 *     http://bitbucket.org/mariuszgromada/mxparser
 *     http://mxparser.codeplex.com
 *     http://github.com/mariuszgromada/Janet-Sudoku
 *     http://janetsudoku.codeplex.com
 *     http://sourceforge.net/projects/janetsudoku
 *     http://bitbucket.org/mariuszgromada/janet-sudoku
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */

using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using org.mariuszgromada.math.mxparser;

namespace org.mariuszgromada.math.mxparser.test {
    [TestClass]
    public class SyntaxTest {
		[TestMethod]
		public void TestSyn0000() {
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
		public void TestSyn0001() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "1++";
			TestCommonTools.consolePrintTestSynStart(1, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0002() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "1+1-";
			TestCommonTools.consolePrintTestSynStart(2, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0003() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "+-1";
			TestCommonTools.consolePrintTestSynStart(3, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0004() {
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
		public void TestSyn0005() {
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
		public void TestSyn0006() {
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
		public void TestSyn0007() {
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
		public void TestSyn0008() {
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
		public void TestSyn0009() {
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
		public void TestSyn0010() {
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
		public void TestSyn0011() {
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
		public void TestSyn0012() {
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
		public void TestSyn0013() {
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
		public void TestSyn0014() {
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
		public void TestSyn0015() {
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
		public void TestSyn0016() {
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
		public void TestSyn0017() {
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
		public void TestSyn0018() {
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
		public void TestSyn0019() {
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
		public void TestSyn0020() {
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
		public void TestSyn0021() {
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
		public void TestSyn0022() {
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
		public void TestSyn0023() {
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
		public void TestSyn0024() {
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
		public void TestSyn0025() {
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
		public void TestSyn0026() {
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
		public void TestSyn0027() {
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
		public void TestSyn0028() {
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
		public void TestSyn0029() {
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
		public void TestSyn0030() {
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
		public void TestSyn0031() {
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
		public void TestSyn0032() {
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
		public void TestSyn0033() {
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
		public void TestSyn0034() {
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
		public void TestSyn0035() {
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
		public void TestSyn0036() {
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
		public void TestSyn0037() {
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
		public void TestSyn0038() {
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
		public void TestSyn0039() {
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
		public void TestSyn0040() {
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
		public void TestSyn0041() {
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
		public void TestSyn0042() {
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
		public void TestSyn0043() {
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
		public void TestSyn0044() {
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
		public void TestSyn0045() {
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
		public void TestSyn0046() {
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
		public void TestSyn0047() {
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
		public void TestSyn0048() {
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
		public void TestSyn0049() {
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
		public void TestSyn0050() {
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
		public void TestSyn0051() {
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
		public void TestSyn0052() {
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
		public void TestSyn0053() {
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
		public void TestSyn0054() {
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
		public void TestSyn0055() {
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
		public void TestSyn0056() {
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
		public void TestSyn0057() {
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
		public void TestSyn0058() {
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
		public void TestSyn0059() {
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
		public void TestSyn0060() {
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
		public void TestSyn0061() {
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
		public void TestSyn0062() {
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
		public void TestSyn0063() {
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
		public void TestSyn0064() {
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
		public void TestSyn0065() {
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
		public void TestSyn0066() {
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
		public void TestSyn0067() {
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
		public void TestSyn0068() {
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
		public void TestSyn0069() {
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
		public void TestSyn0070() {
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
		public void TestSyn0071() {
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
		public void TestSyn0072() {
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
		public void TestSyn0073() {
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
		public void TestSyn0074() {
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
		public void TestSyn0075() {
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
		public void TestSyn0076() {
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
		public void TestSyn0077() {
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
		public void TestSyn0078() {
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
		public void TestSyn0079() {
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
		public void TestSyn0080() {
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
		public void TestSyn0081() {
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
		public void TestSyn0082() {
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
		public void TestSyn0083() {
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
		public void TestSyn0084() {
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
		public void TestSyn0085() {
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
		public void TestSyn0086() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f()=x+y";
			TestCommonTools.consolePrintTestSynStart(86, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("pattern not mathes") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0087() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(1,x,y)=x+y";
			TestCommonTools.consolePrintTestSynStart(87, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("pattern not mathes") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0088() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(1)=x+y";
			TestCommonTools.consolePrintTestSynStart(88, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("pattern not mathes") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0089() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(x,)=x+y";
			TestCommonTools.consolePrintTestSynStart(89, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("pattern not mathes") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0090() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(x,  a, x, )=x+y";
			TestCommonTools.consolePrintTestSynStart(90, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f", f);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("pattern not mathes") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0091() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "  f   (x ,   y,    z   )  = x +  y  +z  ";
			TestCommonTools.consolePrintTestSynStart(91, expStr);
			Function f = new Function(expStr);
			String msg = f.getErrorMessage();
			Expression e = new Expression("f(1,2,3)", f);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (
			(msg.IndexOf("pattern not mathes") == -1) &&
			(reg == syn)
			)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0092() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x()=y+z";
			TestCommonTools.consolePrintTestSynStart(92, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("Invalid argument definition") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0093() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(1,a,b)=a+b";
			TestCommonTools.consolePrintTestSynStart(93, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("Invalid argument definition") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0094() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(1)=a+b";
			TestCommonTools.consolePrintTestSynStart(94, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("Invalid argument definition") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0095() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(a,)=a+b";
			TestCommonTools.consolePrintTestSynStart(95, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("Invalid argument definition") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0096() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(a, b, c,)=a+c";
			TestCommonTools.consolePrintTestSynStart(96, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("Invalid argument definition") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0097() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "  x (  a, b   , c  ) = a+b+c";
			TestCommonTools.consolePrintTestSynStart(97, expStr);
			Argument x = new Argument(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (
			(msg.IndexOf("Invalid argument definition") == -1) &&
			(reg == syn) &&
			(e.calculate() == 6)
			)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0098() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x 5";
			TestCommonTools.consolePrintTestSynStart(98, expStr);
			Argument x = new Argument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("Invalid argument definition") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0099() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "  x = 5 + 1 + 2";
			TestCommonTools.consolePrintTestSynStart(99, expStr);
			Argument x = new Argument(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (
			(msg.IndexOf("Invalid argument definition") == -1) &&
			(reg == syn) &&
			(e.calculate() == 8)
			)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0100() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "f(n,m)=n*f(n-1)";
			TestCommonTools.consolePrintTestSynStart(100, expStr);
			Argument x = new RecursiveArgument(expStr);
			String msg = x.getErrorMessage();
			Expression e = new Expression("x", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("Invalid argument definition") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0101() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "RecursiveArgument name    1fa";
			TestCommonTools.consolePrintTestSynStart(101, expStr);
			Argument x = new RecursiveArgument("1fa","f(n-1)", "n");
			String msg = x.getErrorMessage();
			Expression e = new Expression("x(1)", x);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("Invalid argument name") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0102() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x()=y+z";
			TestCommonTools.consolePrintTestSynStart(102, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("pattern not mathes") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0103() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(1,a,b)=a+b";
			TestCommonTools.consolePrintTestSynStart(103, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("pattern not mathes") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0104() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(1)=a+b";
			TestCommonTools.consolePrintTestSynStart(104, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("pattern not mathes") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0105() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(a,)=a+b";
			TestCommonTools.consolePrintTestSynStart(105, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("pattern not mathes") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0106() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x(a, b, c,)=a+c";
			TestCommonTools.consolePrintTestSynStart(106, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("pattern not mathes") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0107() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "  x = a+b+c";
			TestCommonTools.consolePrintTestSynStart(107, expStr);
			Constant c1 = new Constant(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (
			(msg.IndexOf("pattern not mathes") == -1) &&
			(reg == syn) &&
			(e.calculate() == 6)
			)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0108() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "x 5";
			TestCommonTools.consolePrintTestSynStart(108, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("pattern not mathes") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0109() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "  x = 5 + 1 + 2";
			TestCommonTools.consolePrintTestSynStart(109, expStr);
			Constant c1 = new Constant(expStr);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("x", c1);
			bool reg = true;
			bool syn = e.checkSyntax();
			if (
			(msg.IndexOf("pattern not mathes") == -1) &&
			(reg == syn) &&
			(e.calculate() == 8)
			)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0110() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "Constant name    1fa";
			TestCommonTools.consolePrintTestSynStart(110, expStr);
			Constant c1 = new Constant("1fa",1);
			String msg = c1.getErrorMessage();
			Expression e = new Expression("1fa", c1);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (msg.IndexOf("invalid constant name") >= 0)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0111() {
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
		public void TestSyn0112() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			Function ff = new Function("ff", new FunExt());
			String expStr = "ff(4,5,6)";
			TestCommonTools.consolePrintTestSynStart(112, expStr);
			Expression e = new Expression(expStr, ff);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0113() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "solve(2*x - 4, x+y, -10, 10)";
			TestCommonTools.consolePrintTestSynStart(113, expStr);
			Expression e = new Expression(expStr);
			bool reg = false;
			bool syn = e.checkSyntax();
			if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0114() {
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
			if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0115() {
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
			if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0116() {
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
		public void TestSyn0117() {
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
		public void TestSyn0118() {
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
		public void TestSyn0119() {
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
		public void TestSyn0120() {
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
		public void TestSyn0121() {
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
		public void TestSyn0122() {
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
		public void TestSyn0123() {
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
		public void TestSyn0124() {
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
		public void TestSyn0125() {
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
		public void TestSyn0126() {
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
		public void TestSyn0127() {
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
		public void TestSyn0128() {
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
		public void TestSyn0129() {
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
		public void TestSyn0130() {
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
		public void TestSyn0131() {
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
		public void TestSyn0132() {
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
		public void TestSyn0133() {
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
		public void TestSyn0134() {
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
		public void TestSyn0135() {
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
		public void TestSyn0136() {
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
		public void TestSyn0137() {
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
		public void TestSyn0138() {
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
		public void TestSyn0139() {
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
		public void TestSyn0140() {
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
		public void TestSyn0141() {
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
		public void TestSyn0142() {
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
		public void TestSyn0143() {
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
		public void TestSyn0144() {
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
		public void TestSyn0145() {
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
		public void TestSyn0146() {
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
		public void TestSyn0147() {
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
		public void TestSyn0148() {
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
		public void TestSyn0149() {
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
		public void TestSyn0150() {
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
		public void TestSyn0151() {
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
		public void TestSyn0152() {
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
		public void TestSyn0153() {
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
		public void TestSyn0154() {
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
		public void TestSyn0155() {
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
		public void TestSyn0156() {
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
		public void TestSyn0157() {
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
		public void TestSyn0158() {
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
		public void TestSyn0159() {
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
		public void TestSyn0160() {
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
		public void TestSyn0161() {
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
		public void TestSyn0162() {
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
		public void TestSyn0163() {
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
		public void TestSyn0164() {
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
		public void TestSyn0165() {
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
		public void TestSyn0166() {
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
		public void TestSyn0167() {
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
		public void TestSyn0168() {
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
		public void TestSyn0169() {
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
		public void TestSyn0170() {
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
		public void TestSyn0171() {
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
		public void TestSyn0172() {
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
		public void TestSyn0173() {
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
		public void TestSyn0174() {
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
		public void TestSyn0175() {
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
		public void TestSyn0176() {
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
		public void TestSyn0177() {
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
		public void TestSyn0178() {
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
		public void TestSyn0179() {
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
		public void TestSyn0180() {
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
		public void TestSyn0181() {
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
		public void TestSyn0182() {
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
		public void TestSyn0183() {
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
		public void TestSyn0184() {
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
		public void TestSyn0185() {
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
		public void TestSyn0186() {
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
		public void TestSyn0187() {
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
		public void TestSyn0188() {
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
		public void TestSyn0189() {
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
		public void TestSyn0190() {
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
		public void TestSyn0191() {
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
		public void TestSyn0192() {
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
		public void TestSyn0193() {
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
		public void TestSyn0194() {
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
		public void TestSyn0195() {
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
		public void TestSyn0196() {
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
		public void TestSyn0197() {
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
		public void TestSyn0198() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "b36.0123456789abcdefghijklmnopqrstuvwxyz� + B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ";
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
		public void TestSyn0199() {
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
		public void TestSyn0200() {
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
		public void TestSyn0201() {
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
		public void TestSyn0202() {
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
		public void TestSyn0203() {
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
		public void TestSyn0204() {
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
		public void TestSyn0205() {
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
		public void TestSyn0206() {
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
		public void TestSyn0207() {
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
		public void TestSyn0208() {
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
		public void TestSyn0209() {
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
		public void TestSyn0210() {
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
		public void TestSyn0211() {
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
		public void TestSyn0212() {
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
		public void TestSyn0213() {
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
		public void TestSyn0214() {
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
		public void TestSyn0215() {
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
		public void TestSyn0216() {
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
		public void TestSyn0217() {
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
		public void TestSyn0218() {
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
		public void TestSyn0219() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "10*(350.0/5) + 60.0 + + (180/3)*5";
			TestCommonTools.consolePrintTestSynStart(219, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0220() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "10*(350.0/5) + 60.0 + - (180/3)*5";
			TestCommonTools.consolePrintTestSynStart(220, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0221() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "10*(350.0/5) + 60.0 -  + (180/3)*5";
			TestCommonTools.consolePrintTestSynStart(221, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0222() {
			TestCommonTools.testSynSettingsInit();
			bool testResult = false;
			String expStr = "10*(350.0/5) + 60.0 -   - (180/3)*5";
			TestCommonTools.consolePrintTestSynStart(222, expStr);
			Expression e = new Expression(expStr);
			bool syn = e.checkSyntax();
			bool reg = false;
			if (syn == reg)
				testResult = true;
			TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
			Assert.IsTrue(testResult);
		}
		[TestMethod]
		public void TestSyn0223() {
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
		public void TestSyn0224() {
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
		public void TestSyn0225() {
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
		public void TestSyn0226() {
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
		public void TestSyn0227() {
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
		public void TestSyn0228() {
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
		public void TestSyn0229() {
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
		public void TestSyn0230() {
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
		public void TestSyn0231() {
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
		public void TestSyn0232() {
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
		public void TestSyn0233() {
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
		public void TestSyn0234() {
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
		public void TestSyn0235() {
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
		public void TestSyn0236() {
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
		public void TestSyn0237() {
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
		public void TestSyn0238() {
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
		public void TestSyn0239() {
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
		public void TestSyn0240() {
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
		public void TestSyn0241() {
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
		public void TestSyn0242() {
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
		public void TestSyn0243() {
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
		public void TestSyn0244() {
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
		public void TestSyn0245() {
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
		public void TestSyn0246() {
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
		public void TestSyn0247() {
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
		public void TestSyn0248() {
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
		public void TestSyn0249() {
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
		public void TestSyn0250() {
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
		public void TestSyn0251() {
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
		public void TestSyn0252() {
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
		public void TestSyn0253() {
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
		public void TestSyn0254() {
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
		public void TestSyn0255() {
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
		public void TestSyn0256() {
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
		public void TestSyn0257() {
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
		public void TestSyn0258() {
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
		public void TestSyn0259() {
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
		public void TestSyn0260() {
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
		public void TestSyn0261() {
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
		public void TestSyn0262() {
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

    }
}
