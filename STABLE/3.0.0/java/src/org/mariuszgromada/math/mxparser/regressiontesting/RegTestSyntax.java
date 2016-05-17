/*
 * @(#)RegTestSyntax.java        3.0.0    2016-05-07
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
 * @version        3.0.0
 *
 * @see Expression
 */
public class RegTestSyntax {
	private static Expression[] exp;
	private static boolean runTest(int testId) {
		mXparser.consolePrintln("[" + testId + "] ----------------------------------------------");
		boolean testResult = false;
		boolean syn;
		boolean reg;
		String expStr = "";
		String msg = "";
		Argument x = new Argument("x");
		Constant c1;
		Expression e;
		Function f;
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
		int numberOfTests = 110;
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
			mXparser.consolePrintln("\n");
			mXparser.consolePrintln(exp[testId].getErrorMessage());
			mXparser.consolePrintln(", time: " + exp[testId].getComputingTime() + " s.");
			mXparser.consolePrintln("---------------------------------------------- [" + testId + "]");
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
