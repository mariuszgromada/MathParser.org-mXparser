/*
 * @(#)RegTestSyntax.java        4.2.0   2018-07-15
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2018 MARIUSZ GROMADA. All rights reserved.
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
import org.mariuszgromada.math.mxparser.FunctionExtension;
import org.mariuszgromada.math.mxparser.FunctionExtensionVariadic;
import org.mariuszgromada.math.mxparser.RecursiveArgument;
import org.mariuszgromada.math.mxparser.mXparser;

/**
 * RegTestSyntax - regression tests for the expression syntax checking
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
 * @version        4.2.0
 *
 * @see Expression
 */
public class RegTestSyntax {
	private static Expression[] exp;
	private static boolean runTest(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		boolean syn;
		boolean reg;
		String expStr = "";
		String msg = "";
		Argument x = new Argument("x");
		Constant c1;
		Expression e;
		Function f;
		Function ff;
		switch (testId) {
		case 0:
			expStr = "";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr, x);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 1:
			expStr = "1++";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 2:
			expStr = "1+1-";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 3:
			expStr = "+-1";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 4:
			expStr = "1-(2))";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 5:
			expStr = "1id";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 6:
			expStr = "(1,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 7:
			expStr = "f(1,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 8:
			expStr = "sin";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 9:
			expStr = "sin()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 10:
			expStr = "cos(1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 11:
			expStr = "log";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 12:
			expStr = "log()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 13:
			expStr = "log(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 14:
			expStr = "log(1,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 15:
			expStr = "if";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 16:
			expStr = "if()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 17:
			expStr = "if(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 18:
			expStr = "if(1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 19:
			expStr = "if(1,2,3,4)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 20:
			expStr = "pi()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 21:
			expStr = "pi(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 22:
			expStr = "[K*]()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 23:
			expStr = "[K*](12)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 24:
			expStr = "min";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 25:
			expStr = "min()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 26:
			expStr = "max";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 27:
			expStr = "max()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 28:
			expStr = "iff";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 29:
			expStr = "iff()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 30:
			expStr = "iff(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 31:
			expStr = "iff(1,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 32:
			expStr = "iff(1,2,3,4,5)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 33:
			expStr = "sum";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 34:
			expStr = "sum()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 35:
			expStr = "sum(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 36:
			expStr = "sum(1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 37:
			expStr = "sum(1,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 38:
			expStr = "sum(1,2,3,4,5,6)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 39:
			expStr = "prod()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 40:
			expStr = "prod(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 41:
			expStr = "prod(1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 42:
			expStr = "prod(1,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 43:
			expStr = "prod(1,2,3,4,5,6)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 44:
			expStr = "sum(1,2,3,4)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 45:
			expStr = "sum(a*b,2,3,4)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 46:
			expStr = "sum(i,1,a,4)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 47:
			expStr = "prod(1,2,3,4)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 48:
			expStr = "prod(a*b,2,3,4)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 49:
			expStr = "prod(i,1,a,4)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 50:
			expStr = "int";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 51:
			expStr = "int()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 52:
			expStr = "int(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 53:
			expStr = "int(1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 54:
			expStr = "int(1,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 55:
			expStr = "int(1,2,3,4,5)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 56:
			x = new Argument("x", 5);
			expStr = "int(,2,3,4)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 57:
			expStr = "int(1,2,0,1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 58:
			expStr = "der";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 59:
			expStr = "der()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 60:
			expStr = "der(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 61:
			expStr = "der(1,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 62:
			expStr = "der(1,2,3,4,5)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 63:
			expStr = "der(1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 64:
			expStr = "der+";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 65:
			expStr = "der+()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 66:
			expStr = "der+(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 67:
			expStr = "der+(1,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 68:
			expStr = "der+(1,2,3,4,5)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 69:
			expStr = "der+(1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 70:
			expStr = "der-";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 71:
			expStr = "der-()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 72:
			expStr = "der-(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 73:
			expStr = "der-(1,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 74:
			expStr = "der-(1,2,3,4,5)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 75:
			expStr = "der-(1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 76:
			expStr = "diff";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 77:
			expStr = "diff()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 78:
			expStr = "diff(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 79:
			expStr = "diff(1,2,3,4)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 80:
			expStr = "diff(1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 81:
			expStr = "difb";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 82:
			expStr = "difb()";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 83:
			expStr = "difb(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 84:
			expStr = "difb(1,2,3,4)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 85:
			expStr = "difb(1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> ");
			break;
		case 86:
			expStr = "f()=x+y";
			mXparser.consolePrint(expStr + " ...... ");
			f = new Function(expStr);
			msg = f.getErrorMessage();
			e = new Expression("f", f);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("pattern not mathes") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 87:
			expStr = "f(1,x,y)=x+y";
			mXparser.consolePrint(expStr + " ...... ");
			f = new Function(expStr);
			msg = f.getErrorMessage();
			e = new Expression("f", f);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("pattern not mathes") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 88:
			expStr = "f(1)=x+y";
			mXparser.consolePrint(expStr + " ...... ");
			f = new Function(expStr);
			msg = f.getErrorMessage();
			e = new Expression("f", f);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("pattern not mathes") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 89:
			expStr = "f(x,)=x+y";
			mXparser.consolePrint(expStr + " ...... ");
			f = new Function(expStr);
			msg = f.getErrorMessage();
			e = new Expression("f", f);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("pattern not mathes") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 90:
			expStr = "f(x,  a, x, )=x+y";
			mXparser.consolePrint(expStr + " ...... ");
			f = new Function(expStr);
			msg = f.getErrorMessage();
			e = new Expression("f", f);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("pattern not mathes") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 91:
			expStr = "  f   (x ,   y,    z   )  = x +  y  +z  ";
			mXparser.consolePrint(expStr + " ...... ");
			f = new Function(expStr);
			msg = f.getErrorMessage();
			e = new Expression("f(1,2,3)", f);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (
			    (msg.indexOf("pattern not mathes") == -1) &&
			    (reg == syn)
			    )
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 92:
			expStr = "x()=y+z";
			mXparser.consolePrint(expStr + " ...... ");
			x = new Argument(expStr);
			msg = x.getErrorMessage();
			e = new Expression("x", x);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("Invalid argument definition") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 93:
			expStr = "x(1,a,b)=a+b";
			mXparser.consolePrint(expStr + " ...... ");
			x = new Argument(expStr);
			msg = x.getErrorMessage();
			e = new Expression("x", x);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("Invalid argument definition") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 94:
			expStr = "x(1)=a+b";
			mXparser.consolePrint(expStr + " ...... ");
			x = new Argument(expStr);
			msg = x.getErrorMessage();
			e = new Expression("x", x);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("Invalid argument definition") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 95:
			expStr = "x(a,)=a+b";
			mXparser.consolePrint(expStr + " ...... ");
			x = new Argument(expStr);
			msg = x.getErrorMessage();
			e = new Expression("x", x);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("Invalid argument definition") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 96:
			expStr = "x(a, b, c,)=a+c";
			mXparser.consolePrint(expStr + " ...... ");
			x = new Argument(expStr);
			msg = x.getErrorMessage();
			e = new Expression("x", x);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("Invalid argument definition") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 97:
			expStr = "  x (  a, b   , c  ) = a+b+c";
			mXparser.consolePrint(expStr + " ...... ");
			x = new Argument(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
			msg = x.getErrorMessage();
			e = new Expression("x", x);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (
			    (msg.indexOf("Invalid argument definition") == -1) &&
			    (reg == syn) &&
			    (e.calculate() == 6)
			    )
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + e.calculate() + " " + msg);
			break;
		case 98:
			expStr = "x 5";
			mXparser.consolePrint(expStr + " ...... ");
			x = new Argument(expStr);
			msg = x.getErrorMessage();
			e = new Expression("x", x);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("Invalid argument definition") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 99:
			expStr = "  x = 5 + 1 + 2";
			mXparser.consolePrint(expStr + " ...... ");
			x = new Argument(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
			msg = x.getErrorMessage();
			e = new Expression("x", x);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (
			    (msg.indexOf("Invalid argument definition") == -1) &&
			    (reg == syn) &&
			    (e.calculate() == 8)
			    )
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + e.calculate() + " " + msg);
			break;
		case 100:
			expStr = "f(n,m)=n*f(n-1)";
			mXparser.consolePrint(expStr + " ...... ");
			x = new RecursiveArgument(expStr);
			msg = x.getErrorMessage();
			e = new Expression("x", x);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("Invalid argument definition") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 101:
			expStr = "RecursiveArgument name    1fa";
			mXparser.consolePrint(expStr + " ...... ");
			x = new RecursiveArgument("1fa","f(n-1)", "n");
			msg = x.getErrorMessage();
			e = new Expression("x(1)", x);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("Invalid argument name") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 102:
			expStr = "x()=y+z";
			mXparser.consolePrint(expStr + " ...... ");
			c1 = new Constant(expStr);
			msg = c1.getErrorMessage();
			e = new Expression("x", c1);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("pattern not mathes") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 103:
			expStr = "x(1,a,b)=a+b";
			mXparser.consolePrint(expStr + " ...... ");
			c1 = new Constant(expStr);
			msg = c1.getErrorMessage();
			e = new Expression("x", c1);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("pattern not mathes") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 104:
			expStr = "x(1)=a+b";
			mXparser.consolePrint(expStr + " ...... ");
			c1 = new Constant(expStr);
			msg = c1.getErrorMessage();
			e = new Expression("x", c1);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("pattern not mathes") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 105:
			expStr = "x(a,)=a+b";
			mXparser.consolePrint(expStr + " ...... ");
			c1 = new Constant(expStr);
			msg = c1.getErrorMessage();
			e = new Expression("x", c1);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("pattern not mathes") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 106:
			expStr = "x(a, b, c,)=a+c";
			mXparser.consolePrint(expStr + " ...... ");
			c1 = new Constant(expStr);
			msg = c1.getErrorMessage();
			e = new Expression("x", c1);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("pattern not mathes") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 107:
			expStr = "  x = a+b+c";
			mXparser.consolePrint(expStr + " ...... ");
			c1 = new Constant(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
			msg = c1.getErrorMessage();
			e = new Expression("x", c1);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (
			    (msg.indexOf("pattern not mathes") == -1) &&
			    (reg == syn) &&
			    (e.calculate() == 6)
			    )
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + e.calculate() + " " + msg);
			break;
		case 108:
			expStr = "x 5";
			mXparser.consolePrint(expStr + " ...... ");
			c1 = new Constant(expStr);
			msg = c1.getErrorMessage();
			e = new Expression("x", c1);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("pattern not mathes") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 109:
			expStr = "  x = 5 + 1 + 2";
			mXparser.consolePrint(expStr + " ...... ");
			c1 = new Constant(expStr);
			msg = c1.getErrorMessage();
			e = new Expression("x", c1);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (
			    (msg.indexOf("pattern not mathes") == -1) &&
			    (reg == syn) &&
			    (e.calculate() == 8)
			    )
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + e.calculate() + " " + msg);
			break;
		case 110:
			expStr = "Constant name    1fa";
			mXparser.consolePrint(expStr + " ...... ");
			c1 = new Constant("1fa",1);
			msg = c1.getErrorMessage();
			e = new Expression("1fa", c1);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (msg.indexOf("invalid constant name") >= 0)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 111:
			ff = new Function("ff", new FunExt());
			expStr = "ff(4,5)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr, ff);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == Expression.NO_SYNTAX_ERRORS)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 112:
			ff = new Function("ff", new FunExt());
			expStr = "ff(4,5,6)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr, ff);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 113:
			expStr = "solve(2*x - 4, x+y, -10, 10)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 114:
			mXparser.unremoveAllBuiltinTokens();
			mXparser.removeBuiltinTokens("sin");
			expStr = "sin(2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			mXparser.unremoveAllBuiltinTokens();
			if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 115:
			mXparser.unmodifyAllBuiltinTokens();
			mXparser.modifyBuiltinToken("sin", "sinos");
			expStr = "sin(2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			mXparser.unmodifyAllBuiltinTokens();
			if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 116:
			mXparser.unmodifyAllBuiltinTokens();
			mXparser.modifyBuiltinToken("sin", "sinos");
			expStr = "sinos(2)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			mXparser.unmodifyAllBuiltinTokens();
			if (syn == Expression.NO_SYNTAX_ERRORS)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 117:
			mXparser.setNotToOverrideBuiltinTokens();
			Function sin = new Function("sin(x,y) = 2*x + y");
			Argument ee = new Argument("e = 5");
			Constant pi = new Constant("pi = 2");
			expStr = "sin(e,pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr, sin, ee, pi);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 118:
			mXparser.setToOverrideBuiltinTokens();
			sin = new Function("sin(x,y) = 2*x + y");
			ee = new Argument("e = 5");
			pi = new Constant("pi = 2");
			expStr = "sin(e,pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr, sin, ee, pi);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 119:
			expStr = "h.1234567890aBcDeF + H.001234567890aBcDeF";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 120:
			expStr = "o.12345670 + O.0012345670";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 121:
			expStr = "b.101010 + B.000101010";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 122:
			expStr = "h.1234567890aBcDeFu + y.001234567890aBcDeF";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 123:
			expStr = "o.123456708 + O.00123456709";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 124:
			expStr = "b.2101010 + B.0001010103";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 125:
			expStr = "b1. + B1.111";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 126:
			expStr = "b1.111 + B1.1101";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 127:
			expStr = "b2.01 + B2.0101";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 128:
			expStr = "b2.012 + B2.0101";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 129:
			expStr = "b3.012 + B3.0012";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 130:
			expStr = "b3.012 + B3.00123";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 131:
			expStr = "b4.0123 + B4.00123";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 132:
			expStr = "b4.01234 + B4.00123";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 133:
			expStr = "b5.01234 + B5.001234";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 134:
			expStr = "b5.012345 + B5.001234";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 135:
			expStr = "b6.012345 + B6.0012345";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 136:
			expStr = "b6.012345 + B6.00123456";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 137:
			expStr = "b7.0123456 + B7.00123456";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 138:
			expStr = "b7.0123456 + B7.001234568";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 139:
			expStr = "b8.01234567 + B8.001234567";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 140:
			expStr = "b8.01234567 + B8.0012345679";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 141:
			expStr = "b9.012345678 + B9.0012345678";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 142:
			expStr = "b9.0123456789 + B9.0012345678";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 143:
			expStr = "b10.0123456789 + B10.00123456789";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 144:
			expStr = "b10.0123456789 + B10.00123456789a";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 145:
			expStr = "b11.0123456789a + B11.00123456789A";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 146:
			expStr = "b11.0123456789a + B11.00123456789Ab";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 147:
			expStr = "b12.0123456789ab + B12.00123456789AB";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 148:
			expStr = "b12.0123456789abC + B12.00123456789AB";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 149:
			expStr = "b13.0123456789abc + B13.00123456789ABC";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 150:
			expStr = "b13.0123456789abc + B13.00123456789ABCd";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 151:
			expStr = "b14.0123456789abcd + B14.00123456789ABCD";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 152:
			expStr = "b14.0123456789abcdE + B14.00123456789ABCD";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 153:
			expStr = "b15.0123456789abcde + B15.00123456789ABCDE";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 154:
			expStr = "b15.0123456789abcde + B15.00123456789ABCDEf";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 155:
			expStr = "b16.0123456789abcdef + B16.00123456789ABCDEF";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 156:
			expStr = "b16.0123456789abcdefg + B16.00123456789ABCDEF";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 157:
			expStr = "b16.0123456789abcdef + B16.00123456789ABCDEF";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 158:
			expStr = "b16.0123456789abcdefg + B16.00123456789ABCDEF";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 159:
			expStr = "b17.0123456789abcdefg + B17.00123456789ABCDEFG";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 160:
			expStr = "b17.0123456789abcdefg + B17.00123456789ABCDEFGh";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 161:
			expStr = "b18.0123456789abcdefgh + B18.00123456789ABCDEFGH";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 162:
			expStr = "b18.0123456789abcdefghI + B18.00123456789ABCDEFGH";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 163:
			expStr = "b19.0123456789abcdefghi + B19.00123456789ABCDEFGI";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 164:
			expStr = "b19.0123456789abcdefghi + B19.00123456789ABCDEFGIj";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 165:
			expStr = "b20.0123456789abcdefghij + B20.00123456789ABCDEFGIJ";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 166:
			expStr = "b20.0123456789abcdefghijK + B20.00123456789ABCDEFGIJ";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 167:
			expStr = "b21.0123456789abcdefghijk + B21.00123456789ABCDEFGIJK";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 168:
			expStr = "b21.0123456789abcdefghijk + B21.00123456789ABCDEFGIJKl";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 169:
			expStr = "b22.0123456789abcdefghijkl + B22.00123456789ABCDEFGIJKL";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 170:
			expStr = "b22.0123456789abcdefghijklM + B22.00123456789ABCDEFGIJKL";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 171:
			expStr = "b23.0123456789abcdefghijklm + B23.00123456789ABCDEFGIJKLM";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 172:
			expStr = "b23.0123456789abcdefghijklm + B23.00123456789ABCDEFGIJKLMn";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 173:
			expStr = "b24.0123456789abcdefghijklmn + B24.00123456789ABCDEFGIJKLMN";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 174:
			expStr = "b24.0123456789abcdefghijklmnO + B24.00123456789ABCDEFGIJKLMN";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 175:
			expStr = "b25.0123456789abcdefghijklmno + B25.00123456789ABCDEFGIJKLMNO";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 176:
			expStr = "b25.0123456789abcdefghijklmno + B25.00123456789ABCDEFGIJKLMNOp";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 177:
			expStr = "b26.0123456789abcdefghijklmnop + B26.00123456789ABCDEFGIJKLMNOP";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 178:
			expStr = "b26.0123456789abcdefghijklmnop + B26.00123456789ABCDEFGIJKLMNOPq";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 179:
			expStr = "b27.0123456789abcdefghijklmnopq + B27.00123456789ABCDEFGIJKLMNOPQ";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 180:
			expStr = "b27.0123456789abcdefghijklmnopqR + B27.00123456789ABCDEFGIJKLMNOPQ";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 181:
			expStr = "b28.0123456789abcdefghijklmnopqr + B28.00123456789ABCDEFGIJKLMNOPQR";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 182:
			expStr = "b28.0123456789abcdefghijklmnopqr + B28.00123456789ABCDEFGIJKLMNOPQRs";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 183:
			expStr = "b29.0123456789abcdefghijklmnopqrs + B29.00123456789ABCDEFGIJKLMNOPQRS";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 184:
			expStr = "b29.0123456789abcdefghijklmnopqrsT + B29.00123456789ABCDEFGIJKLMNOPQRS";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 185:
			expStr = "b30.0123456789abcdefghijklmnopqrst + B30.00123456789ABCDEFGIJKLMNOPQRST";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 186:
			expStr = "b30.0123456789abcdefghijklmnopqrst + B30.00123456789ABCDEFGIJKLMNOPQRSTu";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 187:
			expStr = "b31.0123456789abcdefghijklmnopqrstu + B31.00123456789ABCDEFGIJKLMNOPQRSTU";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 188:
			expStr = "b31.0123456789abcdefghijklmnopqrstuV + B31.00123456789ABCDEFGIJKLMNOPQRSTU";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 189:
			expStr = "b32.0123456789abcdefghijklmnopqrstuv + B32.00123456789ABCDEFGIJKLMNOPQRSTUV";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 190:
			expStr = "b32.0123456789abcdefghijklmnopqrstuv + B32.00123456789ABCDEFGIJKLMNOPQRSTUVw";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 191:
			expStr = "b33.0123456789abcdefghijklmnopqrstuvw + B33.00123456789ABCDEFGIJKLMNOPQRSTUVW";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 192:
			expStr = "b33.0123456789abcdefghijklmnopqrstuvwX + B33.00123456789ABCDEFGIJKLMNOPQRSTUVW";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 193:
			expStr = "b34.0123456789abcdefghijklmnopqrstuvwx + B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 194:
			expStr = "b34.0123456789abcdefghijklmnopqrstuvwx + B34.00123456789ABCDEFGIJKLMNOPQRSTUVWXy";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 195:
			expStr = "b35.0123456789abcdefghijklmnopqrstuvwxy + B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 196:
			expStr = "b35.0123456789abcdefghijklmnopqrstuvwxyZ + B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 197:
			expStr = "b36.0123456789abcdefghijklmnopqrstuvwxyz + B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 198:
			expStr = "b36.0123456789abcdefghijklmnopqrstuvwxyzą + B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 199:
			x = new Argument("x = pi");
			expStr = "der( sin(x), x )";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr, x);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 200:
			x = new Argument("x = pi");
			expStr = "der( sin(x), x, 0.01, 100 )";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr, x);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 201:
			expStr = "der( sin(x), x , pi )";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 202:
			expStr = "der( sin(x), x , pi )";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr, x);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 203:
			expStr = "der( sin(x), x , pi, 0.01, 100 )";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 204:
			expStr = "der( sin(x), x , pi, 0.01, 100 )";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr, x);
			exp[testId] = e;
			reg = true;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 205:
			expStr = "der( sin(x), x )";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 206:
			expStr = "der( sin(x), x, 0.1, 100 )";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 207:
			expStr = "sin(pi)+cos(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			mXparser.unremoveAllBuiltinTokens();
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 208:
			expStr = "sin(pi)+cos(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			mXparser.unremoveAllBuiltinTokens();
			syn = e.checkSyntax();
			mXparser.removeBuiltinTokens("sin", "cos");
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			mXparser.unremoveAllBuiltinTokens();
			break;
		case 209:
			expStr = "sin(pi)+cos(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			mXparser.unremoveAllBuiltinTokens();
			syn = e.checkSyntax();
			mXparser.removeBuiltinTokens("sin", "cos");
			syn = e.checkSyntax();
			mXparser.unremoveBuiltinTokens("cos");
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			mXparser.unremoveAllBuiltinTokens();
			break;
		case 210:
			expStr = "sin(pi)+cos(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			mXparser.unremoveAllBuiltinTokens();
			syn = e.checkSyntax();
			mXparser.removeBuiltinTokens("sin", "cos");
			syn = e.checkSyntax();
			mXparser.unremoveBuiltinTokens("cos");
			syn = e.checkSyntax();
			mXparser.unremoveAllBuiltinTokens();
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 211:
			expStr = "sine(pi)+cosine(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			mXparser.unmodifyAllBuiltinTokens();
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 212:
			expStr = "sine(pi)+cosine(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			mXparser.unmodifyAllBuiltinTokens();
			syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("sin", "sine");
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			mXparser.unmodifyAllBuiltinTokens();
			break;
		case 213:
			expStr = "sine(pi)+cosine(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			mXparser.unmodifyAllBuiltinTokens();
			syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("sin", "sine");
			syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("cos", "cosine", "My new cosine token");
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			mXparser.unmodifyAllBuiltinTokens();
			break;
		case 214:
			expStr = "sine(pi)+cosine(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			mXparser.unmodifyAllBuiltinTokens();
			syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("sin", "sine");
			syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("cos", "cosine", "My new cosine token");
			syn = e.checkSyntax();
			mXparser.unmodifyBuiltinTokens("sin");
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			mXparser.unmodifyAllBuiltinTokens();
			break;
		case 215:
			expStr = "sine(pi)+cosine(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			mXparser.unmodifyAllBuiltinTokens();
			syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("sin", "sine");
			syn = e.checkSyntax();
			mXparser.modifyBuiltinToken("cos", "cosine", "My new cosine token");
			syn = e.checkSyntax();
			mXparser.unmodifyAllBuiltinTokens();
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 216:
			expStr = "sin(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			sin = new Function("sin(x) = 2*x");
			pi = new Constant("pi = 1");
			e = new Expression(expStr, sin, pi);
			exp[testId] = e;
			mXparser.setNotToOverrideBuiltinTokens();
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 217:
			expStr = "sin(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			sin = new Function("sin(x) = 2*x");
			pi = new Constant("pi = 1");
			e = new Expression(expStr, sin, pi);
			exp[testId] = e;
			mXparser.setNotToOverrideBuiltinTokens();
			syn = e.checkSyntax();
			mXparser.setToOverrideBuiltinTokens();
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			mXparser.setNotToOverrideBuiltinTokens();
			break;
		case 218:
			expStr = "sin(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			sin = new Function("sin(x) = 2*x");
			pi = new Constant("pi = 1");
			e = new Expression(expStr, sin, pi);
			exp[testId] = e;
			mXparser.setNotToOverrideBuiltinTokens();
			syn = e.checkSyntax();
			mXparser.setToOverrideBuiltinTokens();
			syn = e.checkSyntax();
			mXparser.setNotToOverrideBuiltinTokens();
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 219:
			expStr = "10*(350.0/5) + 60.0 + + (180/3)*5";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 220:
			expStr = "10*(350.0/5) + 60.0 + - (180/3)*5";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 221:
			expStr = "10*(350.0/5) + 60.0 -  + (180/3)*5";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 222:
			expStr = "10*(350.0/5) + 60.0 -   - (180/3)*5";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 223:
			expStr = "10*2_3_5";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 224:
			expStr = "10*(-2_3_5)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 225:
			expStr = "-2_3_5+5_2";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 226:
			expStr = "sin(-2_3_5+5_2*b5.12)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 227:
			expStr = "sin(101_102_103+2653_123*b5.12)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 228:
			expStr = "2^^3+2^3+2^2^^2";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 229:
			expStr = "pi^^sin(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 230:
			expStr = "f(x) = (3 + 5*x";
			mXparser.consolePrint(expStr + " ...... ");
			f = new Function(expStr);
			exp[testId] = new Expression("");
			syn = f.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 231:
			expStr = "f(x) = (3 + 5*x)";
			mXparser.consolePrint(expStr + " ...... ");
			f = new Function(expStr);
			exp[testId] = new Expression("");
			syn = f.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 232:
			expStr = "[npar]";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 233:
			expStr = "par(1)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 234:
			expStr = "f(x) = [npar] + par(1)";
			mXparser.consolePrint(expStr + " ...... ");
			f = new Function(expStr);
			exp[testId] = new Expression("");
			syn = f.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 235:
			expStr = "f(...) = [npar] + par(1)";
			mXparser.consolePrint(expStr + " ...... ");
			f = new Function(expStr);
			exp[testId] = new Expression("");
			syn = f.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 236:
			expStr = "f(... = [npar] + par(1)";
			mXparser.consolePrint(expStr + " ...... ");
			f = new Function(expStr);
			exp[testId] = new Expression("");
			syn = f.checkSyntax();
			reg = false;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 237:
			expStr = "{fun-ext-var}";
			mXparser.consolePrint(expStr + " ...... ");
			FunExtVar fx = new FunExtVar();
			f = new Function("f", fx);
			exp[testId] = new Expression("");
			syn = f.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 238:
			FunExtVar gx = new FunExtVar();
			f = new Function("f(...) = sum(i, 1, [npar], par(i) )");
			Function g = new Function("g", gx);
			expStr = "f(1) + f(1,2) + f(1,2,3) + g(1) + g(1,2) + g(1,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr, f, g);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 239:
			expStr = ".2";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 240:
			expStr = "+.2";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 241:
			expStr = "-.2";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 242:
			expStr = "-.2^.3";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 243:
			expStr = ".2 ^ .3";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		case 244:
			expStr = "-2 + 3 - .2 + 1.5 - .2^.3 + (2/.3)";
			mXparser.consolePrint(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			syn = e.checkSyntax();
			reg = true;
			if (syn == reg)
				testResult = true;
			mXparser.consolePrint(syn + " reg ... " + reg + " --> " + " -----> " + msg);
			break;
		}
		if (testResult == true)
			mXparser.consolePrint("OK");
		else
			mXparser.consolePrint("ERROR");
		return testResult;
	}
	/**
	 * Runs syntax checking regression test.
	 *
	 * @return Number of errors.
	 */
	public static int start() {
		int numberOfTests = 244;
		int nOk = 0;
		int nError = 0;
		exp = new Expression[numberOfTests+1];
		boolean[] tests = new boolean[numberOfTests+1];
		boolean test;
        long start =  System.currentTimeMillis();
		for (int testId = 0; testId <= numberOfTests; testId++) {
			test = runTest(testId);
			tests[testId] = test;
			if (test == true)
				nOk++;
			else
				nError++;
			mXparser.consolePrintln(", time: " + exp[testId].getComputingTime() + " s.");
		}
        long end =  System.currentTimeMillis();
		mXparser.consolePrintln("OK : " + nOk + ", ERRORs: " + nError + ", total time: " + (end-start)/1000.0 + " s.");
		for (int testId = 0; testId <= numberOfTests; testId++) {
			if (!tests[testId])
				mXparser.consolePrintln("ERROR: " + testId);
		}
		return nError;
	}
	/**
	 * Runs syntax checking regression test.
	 *
	 * @param args no parameters are being considered
	 */
	public static void main(String[] args) {
		start();
	}
}
/**
 * Example of implementation
 * FunctionExtension interface
 * @see FunctionExtension
 */
class FunExt implements FunctionExtension {
	double x;
	double y;
	FunExt() {
		x = Double.NaN;
		y = Double.NaN;
	}
	FunExt(double x, double y) {
		this.x = x;
		this.y = y;
	}
	public int getParametersNumber() {
		return 2;
	}
	public void setParameterValue(int parameterIndex, double parameterValue) {
		if (parameterIndex == 0) x = parameterValue;
		if (parameterIndex == 1) y = parameterValue;
	}
	public String getParameterName(int parameterIndex) {
		if (parameterIndex == 0) return "x";
		if (parameterIndex == 1) return "y";
		return "";
	}
	public double calculate() {
		return x*y;
	}
	public FunExt clone() {
		return new FunExt(x, y);
	}
}
/**
 * Example of implementation
 * FunctionExtensionVariadic interface
 * @see FunctionExtensionVariadic
 */
class FunExtVar implements FunctionExtensionVariadic {
	public double calculate(double... parameters) {
		if (parameters == null) return Double.NaN;
		if (parameters.length == 0) return Double.NaN;
		double result = 0;
		for (double x : parameters)
			result+=x;
		return result;
	}
	public FunExtVar clone() {
		return new FunExtVar();
	}
}