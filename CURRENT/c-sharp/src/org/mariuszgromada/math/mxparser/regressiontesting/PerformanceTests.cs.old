/*
 * @(#)PerformanceTests.cs        2.2.0    2016-01-09
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2016 MARIUSZ GROMADA. All rights reserved.
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
 *     mariusz.gromada@mathspace.pl
 *     http://mathspace.pl/
 *     http://mathparser.org/
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://mariuszgromada.github.io/MathParser.org-mXparser/
 *     http://mxparser.sourceforge.net/
 *     http://bitbucket.org/mariuszgromada/mxparser/
 *     http://mxparser.codeplex.com/
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
using System;

namespace org.mariuszgromada.math.mxparser.regressiontesting {
	/**
	 * PerformanceTests - mXparser performance tests
	 *
	 * @author         <b>Mariusz Gromada</b><br/>
	 *                 <a href="mailto:mariusz.gromada@mathspace.pl">mariusz.gromada@mathspace.pl</a><br>
	 *                 <a href="http://mathspace.pl/" target="_blank">MathSpace.pl</a><br>
	 *                 <a href="http://mathparser.org/" target="_blank">MathParser.org - mXparser project page</a><br>
	 *                 <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
	 *                 <a href="http://mariuszgromada.github.io/MathParser.org-mXparser/" target="_blank">mXparser on GitHub pages</a><br>
	 *                 <a href="http://mxparser.sourceforge.net/" target="_blank">mXparser on SourceForge/</a><br>
	 *                 <a href="http://bitbucket.org/mariuszgromada/mxparser/" target="_blank">mXparser on Bitbucket/</a><br>
	 *                 <a href="http://mxparser.codeplex.com/" target="_blank">mXparser on CodePlex/</a><br>
	 *
	 * @version        2.2.0
	 *
	 * @see Expression
	 */
	[CLSCompliant(true)]
	public class PerformanceTests {
		private static PerformanceTestResult[] tests;
		/**
		 * Performance test: Simple calculations - addition.
		 * Expression created once. Iteration: repeatedly
		 * recalculated same expression.
		 *
		 * @param test
		 * @param testId
		 */
		static void test000(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Simple calculations - addition. Expression created once. Iteration: repeatedly recalculated same expression.";
			test.iterNum = 20000000;
			test.exprStr = "2+3";
			Expression e = new Expression(test.exprStr);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Simple calculations - multiplication.
		 * Expression created once. Iteration: repeatedly recalculated
		 * same expression.
		 *
		 * @param test
		 * @param testId
		 */
		static void test001(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Simple calculations - multiplication. Expression created once. Iteration: repeatedly recalculated same expression.";
			test.iterNum = 20000000;
			test.exprStr = "2*3";
			Expression e = new Expression(test.exprStr);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Simple calculations - division. Expression
		 * created once. Iteration: repeatedly recalculated same
		 * expression.
		 *
		 * @param test
		 * @param testId
		 */
		static void test002(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Simple calculations - division. Expression created once. Iteration: repeatedly recalculated same expression.";
			test.iterNum = 20000000;
			test.exprStr = "2/3";
			Expression e = new Expression(test.exprStr);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Simple calculations - power. Expression
		 * created once. Iteration: repeatedly recalculated same
		 * expression.
		 *
		 * @param test
		 * @param testId
		 */
		static void test003(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Simple calculations - power. Expression created once. Iteration: repeatedly recalculated same expression.";
			test.iterNum = 20000000;
			test.exprStr = "2^3";
			Expression e = new Expression(test.exprStr);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Simple calculations - sinus. Expression
		 * created once. Iteration: repeatedly recalculated same
		 * expression.
		 *
		 * @param test
		 * @param testId
		 */
		static void test004(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Simple calculations - sinus. Expression created once. Iteration: repeatedly recalculated same expression.";
			test.iterNum = 20000000;
			test.exprStr = "sin(3)";
			Expression e = new Expression(test.exprStr);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Simple calculations - 2 additions.
		 * Expression created once. Iteration: repeatedly recalculated
		 * same expression.
		 *
		 * @param test
		 * @param testId
		 */
		static void test005(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Simple calculations - 2 additions. Expression created once. Iteration: repeatedly recalculated same expression.";
			test.iterNum = 20000000;
			test.exprStr = "2+3+4";
			Expression e = new Expression(test.exprStr);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Simple calculations - 3 additions.
		 * Expression created once. Iteration: repeatedly
		 * recalculated same expression.
		 *
		 * @param test
		 * @param testId
		 */
		static void test006(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Simple calculations - 3 additions. Expression created once. Iteration: repeatedly recalculated same expression.";
			test.iterNum = 20000000;
			test.exprStr = "2+3+4+5";
			Expression e = new Expression(test.exprStr);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Simple calculations - 3 additions +
		 * 1 parenthesis. Expression created once. Iteration:
		 * repeatedly recalculated same expression.
		 *
		 * @param test
		 * @param testId
		 */
		static void test007(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Simple calculations - 3 additions + 1 parenthesis. Expression created once. Iteration: repeatedly recalculated same expression.";
			test.iterNum = 20000000;
			test.exprStr = "2+(3+4)+5";
			Expression e = new Expression(test.exprStr);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Simple calculations - 3 additions +
		 * 2 brackets. Expression created once. Iteration:
		 * repeatedly recalculated same expression.
		 *
		 * @param test
		 * @param testId
		 */
		static void test008(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Simple calculations - 3 additions + 2 brackets. Expression created once. Iteration: repeatedly recalculated same expression.";
			test.iterNum = 20000000;
			test.exprStr = "(2+3)+(4+5)";
			Expression e = new Expression(test.exprStr);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Simple calculations - 3 additions + 2
		 * brackets. Expression created once. Iteration:
		 * repeatedly recalculated same expression.
		 *
		 * @param test
		 * @param testId
		 */
		static void test009(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Simple calculations - 3 additions + 2 brackets. Expression created once. Iteration: repeatedly recalculated same expression.";
			test.iterNum = 20000000;
			test.exprStr = "2+(3+(4+5))";
			Expression e = new Expression(test.exprStr);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Combination of different operations.
		 * Expression created once. Iteration: repeatedly
		 * recalculated same expression.
		 *
		 * @param test
		 * @param testId
		 */
		static void test010(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Combination of different operations. Expression created once. Iteration: repeatedly recalculated same expression.";
			test.iterNum = 20000000;
			test.exprStr = "sin(2+(3*4)^2)/10";
			Expression e = new Expression(test.exprStr);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Simple calculations - addition with
		 * argument. Expression created once, containing argument
		 * 'x'. Iteration: argument value is being modified
		 * (increased), then expression is recalculated
		 *
		 * @param test
		 * @param testId
		 */
		static void test011(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Simple calculations - addition with argument. Expression created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated";
			test.iterNum = 20000000;
			test.exprStr = "2+x";
			Argument x = new Argument("x");
			Expression e = new Expression(test.exprStr, x);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				x.setArgumentValue(i);
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: User defined function f(x,y)=3x+4y.
		 * Expression &Function created once, containing argument 'x'.
		 * Iteration: argument value is being modified (increased),
		 * then expression is recalculated
		 *
		 * @param test
		 * @param testId
		 */
		static void test012(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "User defined function f(x,y)=3*x+4*y. Expression &Function created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated";
			test.iterNum = 2000000;
			test.exprStr = "3*f(x,y)-(2*x+3*y)";
			Argument x = new Argument("x");
			Argument y = new Argument("y");
			Function f = new Function("f(x,y)=3*x+4*y");
			Expression e = new Expression(test.exprStr, f, x, y);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				x.setArgumentValue(i);
				y.setArgumentValue(i);
				e.calculate();
			}
			test.testClose();
		}
		/**
		 * Performance test: Creating constants: Iteration:
		 * Constant c = new Constant("c", 5)
		 *
		 * @param test
		 * @param testId
		 */
		static void test013(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Creating constants: Iteration: Constant c = new Constant(\"c\", 5)";
			test.iterNum = 1000000;
			test.exprStr = "Constant c = new Constant(\"c\", 5)";
			Constant c = new Constant("c", 5);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				c = new Constant("c", 5);
			}
			test.testClose();
			c.getConstantValue();
		}
		/**
		 * Performance test: Creating constants: Iteration:
		 * Constant c = new Constant("c=5")
		 *
		 * @param test
		 * @param testId
		 */
		static void test014(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Creating constants: Iteration: Constant c = new Constant(\"c=5\")";
			test.iterNum = 100000;
			test.exprStr = "Constant c = new Constant(\"c=5\")";
			Constant c = new Constant("c", 5);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				c = new Constant("c=5");
			}
			test.testClose();
			c.getConstantValue();
		}
		/**
		 * Performance test: Creating arguments: Iteration:
		 * Argument x = new Argument("x", 5)
		 *
		 * @param test
		 * @param testId
		 */
		static void test015(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Creating arguments: Iteration: Argument x = new Argument(\"x\", 5)";
			test.iterNum = 1000000;
			test.exprStr = "Argument x = new Argument(\"x\", 5)";
			Argument x = new Argument("x", 2);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				x = new Argument("x", 5);
			}
			test.testClose();
			x.getArgumentValue();
		}
		/**
		 * Performance test: Creating arguments: Iteration:
		 * Argument x = new Argument("x", 5)
		 *
		 * @param test
		 * @param testId
		 */
		static void test016(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Creating arguments: Iteration: Argument x = new Argument(\"x=5\")";
			test.iterNum = 100000;
			test.exprStr = "Argument x = new Argument(\"x=5\")";
			Argument x = new Argument("x", 2);
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				x = new Argument("x=5");
			}
			x.getArgumentValue();
			test.testClose();
		}
		/**
		 * Performance test: Creating functions: Iteration:
		 * Function f = new Function("f", "x+y", "x", "y")
		 *
		 * @param test
		 * @param testId
		 */
		static void test017(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Creating functions: Iteration: Function f = new Function(\"f\", \"x+y\", \"x\", \"y\")";
			test.iterNum = 1000000;
			test.exprStr = "Function f = new Function(\"f\", \"x+y\", \"x\", \"y\")";
			Function f = new Function("f", "x", "x");
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				f = new Function("f", "x+y", "x", "y");
			}
			test.testClose();
			f.calculate(1);
		}
		/**
		 * Performance test: Creating functions: Iteration:
		 * Function f = new Function("f(x,y)=x+y")
		 *
		 * @param test
		 * @param testId
		 */
		static void test018(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Creating functions: Iteration: Function f = new Function(\"f(x,y)=x+y\")";
			test.iterNum = 100000;
			test.exprStr = "Function f = new Function(\"f(x,y)=x+y\")";
			Function f = new Function("f", "x", "x");
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				f = new Function("f(x,y)=x+y");
			}
			test.testClose();
			f.calculate(1);
		}
		/**
		 * Performance test: Creating expressions: Iteration:
		 * Expression e = new Expression("sin(2+(3*4)^2)/10")
		 *
		 * @param test
		 * @param testId
		 */
		static void test019(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Creating expressions: Iteration: Expression e = new Expression(\"sin(2+(3*4)^2)/10\")";
			test.iterNum = 1000000;
			test.exprStr = "Expression e = new Expression(\"sin(2+(3*4)^2)/10\")";
			Expression e = new Expression("");
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e = new Expression("sin(2+(3*4)^2)/10");
			}
			test.testClose();
			e.calculate();
		}
		/**
		 * Performance test: Creating expressions + checking syntax:
		 * Iteration:
		 * Expression e = new Expression("sin(2+(3*4)^2)/10")
		 *
		 * @param test
		 * @param testId
		 */
		static void test020(PerformanceTestResult test, int testId) {
			test.Id = testId;
			test.description = "Creating expressions + checking syntax: Iteration: Expression e = new Expression(\"sin(2+(3*4)^2)/10\")";
			test.iterNum = 100000;
			test.exprStr = "Expression e = new Expression(\"sin(2+(3*4)^2)/10\")";
			Expression e = new Expression("");
			test.testInit();
			for (int i = 0; i <= test.iterNum; i++) {
				e = new Expression("sin(2+(3*4)^2)/10");
				e.checkSyntax();
			}
			test.testClose();
			e.calculate();
		}
		/**
		 * Starts mXparser performance tests. List of performed tests:
		 *
		 * <ul>
		 * <li>00. Simple calculations - addition. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>01. Simple calculations - multiplication. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>02. Simple calculations - division. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>03. Simple calculations - power. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>04. Simple calculations - sinus. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>05. Simple calculations - 2 additions. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>06. Simple calculations - 3 additions. Expression created once. Iteration: repeatedlyrecalculated same expression.
		 * <li>07. Simple calculations - 3 additions + 1 parenthesis. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>08. Simple calculations - 3 additions + 2 brackets. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>09. Simple calculations - 3 additions + 2 brackets. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>10. Combination of different operations. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>11. Simple calculations - addition with argument. Expression created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated
		 * <li>12. User defined function f(x,y)=3x+4y. Expression &Function created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated
		 * <li>13. Creating constants: Iteration: Constant c = new Constant("c", 5)
		 * <li>14. Creating constants: Iteration: Constant c = new Constant("c=5")
		 * <li>15. Creating arguments: Iteration: Argument x = new Argument("x", 5)
		 * <li>16. Creating arguments: Iteration: Argument x = new Argument("x=5")
		 * <li>17. Creating functions: Iteration: Function f = new Function("f", "x+y", "x", "y")
		 * <li>18. Creating functions: Iteration: Function f = new Function("f(x,y)=x+y")
		 * <li>19. Creating expressions: Iteration: Expression e = new Expression("sin(2+(3*4)^2)/10")
		 * <li>20. Creating expressions + checking syntax: Iteration: Expression e = new Expression("sin(2+(3*4)^2)/10")
		 * </ul>
		 *
		 * @return Number of tests that were not performed.
		 */
		public static int Start() {
			tests = new PerformanceTestResult[100];
			int testId = -1;
			int lastTestId = 20;
			tests[++testId] = new PerformanceTestResult(); test000(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test001(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test002(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test003(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test004(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test005(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test006(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test007(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test008(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test009(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test010(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test011(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test012(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test013(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test014(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test015(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test016(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test017(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test018(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test019(tests[testId], testId);
			tests[++testId] = new PerformanceTestResult(); test020(tests[testId], testId);
			return lastTestId - testId;
		}
		/**
		 * Starts mXparser performance tests. List of performed tests:
		 *
		 * <ul>
		 * <li>00. Simple calculations - addition. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>01. Simple calculations - multiplication. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>02. Simple calculations - division. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>03. Simple calculations - power. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>04. Simple calculations - sinus. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>05. Simple calculations - 2 additions. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>06. Simple calculations - 3 additions. Expression created once. Iteration: repeatedlyrecalculated same expression.
		 * <li>07. Simple calculations - 3 additions + 1 parenthesis. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>08. Simple calculations - 3 additions + 2 brackets. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>09. Simple calculations - 3 additions + 2 brackets. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>10. Combination of different operations. Expression created once. Iteration: repeatedly recalculated same expression.
		 * <li>11. Simple calculations - addition with argument. Expression created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated
		 * <li>12. User defined function f(x,y)=3x+4y. Expression &Function created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated
		 * <li>13. Creating constants: Iteration: Constant c = new Constant("c", 5)
		 * <li>14. Creating constants: Iteration: Constant c = new Constant("c=5")
		 * <li>15. Creating arguments: Iteration: Argument x = new Argument("x", 5)
		 * <li>16. Creating arguments: Iteration: Argument x = new Argument("x=5")
		 * <li>17. Creating functions: Iteration: Function f = new Function("f", "x+y", "x", "y")
		 * <li>18. Creating functions: Iteration: Function f = new Function("f(x,y)=x+y")
		 * <li>19. Creating expressions: Iteration: Expression e = new Expression("sin(2+(3*4)^2)/10")
		 * <li>20. Creating expressions + checking syntax: Iteration: Expression e = new Expression("sin(2+(3*4)^2)/10")
		 * </ul>
		 */
		public static void Main(string[] args) {
			Start();
		}
	}
	/**
	 * Package level class to keep
	 * performance test result/
	 */
	public class PerformanceTestResult {
		internal long startTime;
		internal long endTime;
		internal int iterNum;
		internal double computingTimeSec;
		internal long iterPerSec;
		internal int Id;
		internal String description;
		internal String exprStr;
		internal PerformanceTestResult() {
		}
		internal void testInit() {
			startTime = mXparser.currentTimeMillis();
		}
		internal void testClose() {
			endTime = mXparser.currentTimeMillis();
			computingTimeSec = (endTime - startTime) / 1000.0;
			iterPerSec = (long)Math.Round(iterNum / computingTimeSec);
			mXparser.consolePrintln(Id + "; " + exprStr + "; " + iterPerSec + "; " + computingTimeSec + "; " + iterNum + "; " + description);
		}
	}
}