/*
 * @(#)PerformanceTests.java       3.0.0    2016-05-07
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
package org.mariuszgromada.math.mxparser.regressiontesting;

import org.mariuszgromada.math.mxparser.Argument;
import org.mariuszgromada.math.mxparser.Constant;
import org.mariuszgromada.math.mxparser.Expression;
import org.mariuszgromada.math.mxparser.Function;
import org.mariuszgromada.math.mxparser.mXparser;

/**
 * PerformanceTests - mXparser performance tests
 *
 * @author         <b>Mariusz Gromada</b><br>
 *                 <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 *                 <a href="http://mathspace.pl" target="_blank">MathSpace.pl</a><br>
 *                 <a href="http://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="http://mxparser.sourceforge.net" target="_blank">mXparser on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/mxparser" target="_blank">mXparser on Bitbucket</a><br>
 *                 <a href="http://mxparser.codeplex.com" target="_blank">mXparser on CodePlex</a><br>
 *                 <a href="http://janetsudoku.mariuszgromada.org" target="_blank">Janet Sudoku - project web page</a><br>
 *                 <a href="http://github.com/mariuszgromada/Janet-Sudoku" target="_blank">Janet Sudoku on GitHub</a><br>
 *                 <a href="http://janetsudoku.codeplex.com" target="_blank">Janet Sudoku on CodePlex</a><br>
 *                 <a href="http://sourceforge.net/projects/janetsudoku" target="_blank">Janet Sudoku on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/janet-sudoku" target="_blank">Janet Sudoku on BitBucket</a><br>
 *
 * @version        3.0.0
 *
 * @see Expression
 */
public class PerformanceTests {
	/**
	 * Performance test definition & result
	 */
	private static PerformanceTestResult[] tests;
	/**
	 * Creates threads, executes them, then wait till
	 * each thread is finished
	 *
	 * @param test         Test definition
	 * @param classId      Class id specifying the implementation of test scenario
	 */
	static void createRunJoinThreads(PerformanceTestResult test, int classId) {
		test.testInit();
		TestThread[] runners = new TestThread[test.threadsNum];
		Thread[] threads = new Thread[test.threadsNum];
		for (int threadId = 0; threadId < test.threadsNum; threadId++) {
			switch (classId) {
			case 0:  runners[threadId] = new TestSimpleCalcThread(test); break;
			case 1:  runners[threadId] = new TestSimpleCalcThread(test); break;
			case 2:  runners[threadId] = new TestSimpleCalcThread(test); break;
			case 3:  runners[threadId] = new TestSimpleCalcThread(test); break;
			case 4:  runners[threadId] = new TestSimpleCalcThread(test); break;
			case 5:  runners[threadId] = new TestSimpleCalcThread(test); break;
			case 6:  runners[threadId] = new TestSimpleCalcThread(test); break;
			case 7:  runners[threadId] = new TestSimpleCalcThread(test); break;
			case 8:  runners[threadId] = new TestSimpleCalcThread(test); break;
			case 9:  runners[threadId] = new TestSimpleCalcThread(test); break;
			case 10: runners[threadId] = new TestSimpleCalcThread(test); break;
			case 11: runners[threadId] = new Test011Thread(test); break;
			case 12: runners[threadId] = new Test012Thread(test); break;
			case 13: runners[threadId] = new Test013Thread(test); break;
			case 14: runners[threadId] = new Test014Thread(test); break;
			case 15: runners[threadId] = new Test015Thread(test); break;
			case 16: runners[threadId] = new Test016Thread(test); break;
			case 17: runners[threadId] = new Test017Thread(test); break;
			case 18: runners[threadId] = new Test018Thread(test); break;
			case 19: runners[threadId] = new Test019Thread(test); break;
			case 20: runners[threadId] = new Test020Thread(test); break;
			}
			threads[threadId] = new Thread(runners[threadId]);
			threads[threadId].start();
		}
		for (int threadId = 0; threadId < test.threadsNum; threadId++)
			try {
				threads[threadId].join();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		test.testClose();
	}
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
		createRunJoinThreads(test, 0);
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
		createRunJoinThreads(test, 1);
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
		createRunJoinThreads(test, 2);
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
		createRunJoinThreads(test, 3);
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
		createRunJoinThreads(test, 4);
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
		createRunJoinThreads(test, 5);
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
		createRunJoinThreads(test, 6);
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
		createRunJoinThreads(test, 7);
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
		createRunJoinThreads(test, 8);
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
		createRunJoinThreads(test, 9);
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
		createRunJoinThreads(test, 10);
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
		createRunJoinThreads(test, 11);
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
		createRunJoinThreads(test, 12);
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
		createRunJoinThreads(test, 13);
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
		createRunJoinThreads(test, 14);
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
		createRunJoinThreads(test, 15);
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
		createRunJoinThreads(test, 16);
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
		createRunJoinThreads(test, 17);
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
		createRunJoinThreads(test, 18);
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
		createRunJoinThreads(test, 19);
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
		createRunJoinThreads(test, 20);
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
	 * <li>12. User defined function f(x,y)=3x+4y. Expression Function created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated
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
	 * @param  threadsNum   Number of threads
	 * @return Number of tests that were not performed.
	 */
	public static int start(int threadsNum) {
		if (threadsNum <= 0) threadsNum = mXparser.getThreadsNumber();
		tests = new PerformanceTestResult[100];
		int testId = -1;
		int lastTestId = 20;
		tests[++testId] = new PerformanceTestResult(threadsNum); test000(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test001(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test002(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test003(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test004(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test005(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test006(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test007(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test008(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test009(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test010(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test011(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test012(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test013(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test014(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test015(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test016(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test017(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test018(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test019(tests[testId], testId);
		tests[++testId] = new PerformanceTestResult(threadsNum); test020(tests[testId], testId);
		return lastTestId - testId;
	}
	/**
	 * Starts mXparser performance tests - number of threads given by the
	 * mXparser.getThreadsNumber()
	 *
	 * List of performed tests:
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
	 * <li>12. User defined function f(x,y)=3x+4y. Expression Function created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated
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
	 * @see mXparser#getThreadsNumber()
	 * @see mXparser#setThreadsNumber(int)
	 *
	 * @return Number of tests that were not performed.
	 */
	public static int start() {
		return start(mXparser.getThreadsNumber());
	}
	/**
	 * Performance test run with multithreading support.
	 *
	 * @param args If parameters are given then only the first one
	 *             is verified, and is considered as number of threads.
	 */
	public static void main(String[] args) {
		if (args.length > 0) {
			int threadsNumber = Integer.parseInt(args[0]);
			if (threadsNumber > 0) start(threadsNumber);
			else start();
		} else start();
	}
}
/**
 * Package level class to keep
 * performance test result/
 */
class PerformanceTestResult {
	long startTime;
	long endTime;
	int iterNum;
	double computingTimeSec;
	long iterPerSec;
	int Id;
	int threadsNum;
	String description;
	String exprStr;
	PerformanceTestResult(int threadsNum) {
		this.threadsNum = threadsNum;
	}
	void testInit() {
		startTime = System.currentTimeMillis();
	}
	void testClose() {
		endTime = System.currentTimeMillis();
		computingTimeSec = (endTime - startTime)/1000.0;
		iterPerSec = Math.round(iterNum / computingTimeSec);
		mXparser.consolePrintln("(threads = " + threadsNum + ") test - " + Id + "; " + exprStr + "; " + iterPerSec + "; " + computingTimeSec + "; " + iterNum + "; " + description);
	}
}
/**
 * Multithreading abstract implementation of test
 */
abstract class TestThread implements Runnable {
	/**
	 * Number of iterations for a single thread.
	 */
	protected int iterNum;
	/**
	 * Test parameters.
	 */
	protected PerformanceTestResult test;
	/**
	 * Default constructor - creates parameters
	 * for a single test thread
	 *
	 * @param test         Test parameters
	 * @param threadsNum   Number of threads
	 */
	TestThread(PerformanceTestResult test) {
		this.test = test;
		this.iterNum = test.iterNum/test.threadsNum;
	}
	/**
	 * Test scenario implementation
	 */
	protected abstract void testScenario();
	/**
	 * Test scenario execution
	 */
	@Override
	public void run () {
		testScenario();
	}
}
/**
 * Multithreading implementation of class for
 * Performance test: Simple calculations
 */
class TestSimpleCalcThread extends TestThread {
	TestSimpleCalcThread(PerformanceTestResult test) { super(test); }
	@Override
	protected void testScenario() {
		Expression e = new Expression(test.exprStr);
		for (int i = 0; i <= super.iterNum; i++)
			e.calculate();
	}
}
/**
 * Multithreading implementation of class for
 * Performance test: Simple calculations - addition with
 * argument. Expression created once, containing argument
 * 'x'. Iteration: argument value is being modified
 * (increased), then expression is recalculated
 */
class Test011Thread extends TestThread {
	Test011Thread(PerformanceTestResult test) { super(test); }
	@Override
	protected void testScenario() {
		Argument x = new Argument("x");
		Expression e = new Expression(test.exprStr, x);
		for (int i = 0; i <= super.iterNum; i++) {
			x.setArgumentValue(i);
			e.calculate();
		}
	}
}
/**
 * Multithreading implementation of class for
 * Performance test: User defined function f(x,y)=3x+4y.
 * Expression &Function created once, containing argument 'x'.
 * Iteration: argument value is being modified (increased),
 * then expression is recalculated
 */
class Test012Thread extends TestThread {
	Test012Thread(PerformanceTestResult test) { super(test); }
	@Override
	protected void testScenario() {
		Argument x = new Argument("x");
		Argument y = new Argument("y");
		Function f = new Function("f(x,y)=3*x+4*y");
		Expression e = new Expression(test.exprStr, f, x, y);
		for (int i = 0; i <= super.iterNum; i++) {
			x.setArgumentValue(i);
			y.setArgumentValue(i);
			e.calculate();
		}
	}
}
/**
 * Multithreading implementation of class for
 * Performance test: Creating constants: Iteration:
 * Constant c = new Constant("c", 5)
 */
class Test013Thread extends TestThread {
	Test013Thread(PerformanceTestResult test) { super(test); }
	@Override
	protected void testScenario() {
		Constant c = new Constant("c", 5);
		for (int i = 0; i <= super.iterNum; i++)
			c = new Constant("c", 5);
		c.getConstantValue();
	}
}
/**
 * Multithreading implementation of class for
 * Performance test: Creating constants: Iteration:
 * Constant c = new Constant("c=5")
 */
class Test014Thread extends TestThread {
	Test014Thread(PerformanceTestResult test) { super(test); }
	@Override
	protected void testScenario() {
		Constant c = new Constant("c", 5);
		for (int i = 0; i <= super.iterNum; i++)
			c = new Constant("c=5");
		c.getConstantValue();
	}
}
/**
 * Multithreading implementation of class for
 * Performance test: Creating arguments: Iteration:
 * Argument x = new Argument("x", 5)
 */
class Test015Thread extends TestThread {
	Test015Thread(PerformanceTestResult test) { super(test); }
	@Override
	protected void testScenario() {
		Argument x = new Argument("x", 2);
		for (int i = 0; i <= super.iterNum; i++)
			x = new Argument("x", 5);
		x.getArgumentValue();
	}
}
/**
 * Multithreading implementation of class for
 * Performance test: Creating arguments: Iteration:
 * Argument x = new Argument("x = 5")
 */
class Test016Thread extends TestThread {
	Test016Thread(PerformanceTestResult test) { super(test); }
	@Override
	protected void testScenario() {
		Argument x = new Argument("x", 2);
		for (int i = 0; i <= super.iterNum; i++)
			x = new Argument("x=5");
		x.getArgumentValue();
	}
}
/**
 * Multithreading implementation of class for
 * Performance test: Creating functions: Iteration:
 * Function f = new Function("f", "x+y", "x", "y")
 */
class Test017Thread extends TestThread {
	Test017Thread(PerformanceTestResult test) { super(test); }
	@Override
	protected void testScenario() {
		Function f = new Function("f", "x", "x");
		for (int i = 0; i <= super.iterNum; i++)
			f = new Function("f", "x+y", "x", "y");
		f.calculate(1);
	}
}
/**
 * Multithreading implementation of class for
 * Performance test: Creating functions: Iteration:
 * Function f = new Function("f(x,y)=x+y")
 */
class Test018Thread extends TestThread {
	Test018Thread(PerformanceTestResult test) { super(test); }
	@Override
	protected void testScenario() {
		Function f = new Function("f", "x", "x");
		for (int i = 0; i <= super.iterNum; i++)
			f = new Function("f(x,y)=x+y");
		f.calculate(1, 2);
	}
}
/**
 * Multithreading implementation of class for
 * Performance test: Creating expressions: Iteration:
 * Expression e = new Expression("sin(2+(3*4)^2)/10")
 */
class Test019Thread extends TestThread {
	Test019Thread(PerformanceTestResult test) { super(test); }
	@Override
	protected void testScenario() {
		Expression e = new Expression("");
		for (int i = 0; i <= super.iterNum; i++)
			e = new Expression("sin(2+(3*4)^2)/10");
		e.calculate();
	}
}
/**
 * Multithreading implementation of class for
 * Performance test: Creating expressions:
 * Expression e = new Expression("")
 * Iteration:
 * e.setExpressionString(sin(2+(3*4)^2)/10);
 * e.checkSyntax();
 */
class Test020Thread extends TestThread {
	Test020Thread(PerformanceTestResult test) { super(test); }
	@Override
	protected void testScenario() {
		Expression e = new Expression("");
		for (int i = 0; i <= super.iterNum; i++) {
			e.setExpressionString("sin(2+(3*4)^2)/10");
			e.checkSyntax();
		}
	}
}