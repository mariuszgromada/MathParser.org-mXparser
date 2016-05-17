/*
 * @(#)RegTestExpression.java        3.0.0    2016-05-07
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
import org.mariuszgromada.math.mxparser.mathcollection.MathFunctions;

/**
 * RegTestExpression - regression tests for the expression calculation
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
public class RegTestExpression {
	private static Expression[] exp;
	private static boolean runTest1(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		boolean syn1;
		double value = 0;
		double reg = 0;
		double sum = 0;
		String expStr = "";
		Argument x, y, d, n, i, k, m, s, r, t;
		Function f, g, h;
		switch (testId) {
		/*
		 * Test 0
		 */
		case 0:
			expStr = "";
			mXparser.consolePrint("Empty expression string ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " --> ");
			break;
		case 1:
			expStr = "2+1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2+1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 2:
			expStr = "1-2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1-2;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 3:
			expStr = "2*5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2*5;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 4:
			expStr = "20/4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 20.0/4.0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 5:
			expStr = "-2+22";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -2+22;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 6:
			expStr = "3-(-5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3-(-5);
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 7:
			expStr = "+5-(+7)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = +5-(+7);
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 8:
			expStr = "-5+(-7)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -5+(-7);
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 9:
			expStr = "-2*(3-5)+7";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -2*(3-5)+7;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 10:
			expStr = "5.5*(2-3 + (5.3-7.89)/2)/2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -6.31125;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 11:
			expStr = "2-(32-4)/(23+(4)/(5))-(2-4)*(4+6-98.2)+4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -171.5764705882353;
			if ( MathFunctions.abs(value - reg) < 0.000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 12:
			expStr = "2^3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Math.pow(2, 3);
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 13:
			expStr = "2^(-3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Math.pow(2, -3);
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 14:
			expStr = "2^0.7";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Math.pow(2, 0.7);
			if ( MathFunctions.abs(value - reg) < 0.00000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 15:
			expStr = "4^3^2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Math.pow(4, Math.pow(3,2));
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 16:
			expStr = "(4^3)^2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Math.pow( Math.pow(4, 3), 2);
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 17:
			expStr = "0.9^0.8^0.7^0.6^0.5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.914888338607593;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 18:
			expStr = "2=2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 19:
			expStr = "2=3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 20:
			expStr = "2<>3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 21:
			expStr = "2<>2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 22:
			expStr = "3>2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 23:
			expStr = "2>2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 24:
			expStr = "3>2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 25:
			expStr = "2<3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 26:
			expStr = "2<2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 27:
			expStr = "3<2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 28:
			expStr = "2>=2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 29:
			expStr = "3>=2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 30:
			expStr = "1>=2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 31:
			expStr = "1<=2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 32:
			expStr = "1<=1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 33:
			expStr = "1<=0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 34:
			expStr = "1 & 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 35:
			expStr = "1 & -1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 36:
			expStr = "1 & 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 37:
			expStr = "0 & 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 38:
			expStr = "0 & 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 39:
			expStr = "1 | -1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 40:
			expStr = "0 | -1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 41:
			expStr = "1 | 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 42:
			expStr = "0 | 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 43:
			expStr = "3>2 | 2>3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 44:
			expStr = "3>5 | 2>3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 45:
			expStr = "not((3>4) & (2>=2))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 46:
			expStr = "not(-5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 47:
			expStr = "not(0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 48:
			expStr = "if(0,1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 49:
			expStr = "if(5,1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 50:
			expStr = "sum(n,1,10,n)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 55;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 51:
			expStr = "prod(n,1,5,n)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 120;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 52:
			x = new Argument("x",5);
			expStr = "sin(x)-sum(n,0,10,(-1)^n*(x^(2*n+1))/(2*n+1)!)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 53:
			d = new Argument("d",0.01);
			expStr = "pi-2*sum(x,-1,1,d*sqrt(1-x^2),d)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,d);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 54:
			x = new Argument("x",1);
			expStr = "1 - ( sin(x)^2+cos(x)^2 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 55:
			x = new Argument("x",1);
			expStr = "1 - ( sec(x)^2 - tan(x)^2 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 56:
			x = new Argument("x",1);
			expStr = "1 - ( cosec(x)^2 - ctan(x)^2 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 57:
			x = new Argument("x",1);
			expStr = "1 - ( cosec(x)^2 - ctan(x)^2 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 58:
			x = new Argument("x",1);
			expStr = "1 - ( csc(x)^2 - ctg(x)^2 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 59:
			x = new Argument("x",1);
			expStr = "1 - ( sec(x)^2 - tg(x)^2 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 60:
			x = new Argument("x",1);
			expStr = "tan(x) - sin(x)/cos(x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 61:
			x = new Argument("x",2);
			y = new Argument("y",3);
			expStr = "sin(x+y) - (sin(x)*cos(y)+cos(x)*sin(y))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x,y);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 62:
			x = new Argument("x",2);
			y = new Argument("y",3);
			expStr = "sin(x-y) - (sin(x)*cos(y)-cos(x)*sin(y))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x,y);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 63:
			x = new Argument("x",2);
			y = new Argument("y",3);
			expStr = "cos(x+y) - (cos(x)*cos(y)-sin(x)*sin(y))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x,y);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 64:
			x = new Argument("x",2);
			y = new Argument("y",3);
			expStr = "cos(x-y) - (cos(x)*cos(y)+sin(x)*sin(y))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x,y);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 65:
			x = new Argument("x",2);
			y = new Argument("y",3);
			expStr = "tg(x+y) - (tg(x)+tg(y)) / (1 - tg(x)*tg(y))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x,y);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 66:
			x = new Argument("x",2);
			y = new Argument("y",3);
			expStr = "tg(x-y) - (tg(x)-tg(y)) / (1 + tg(x)*tg(y))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x,y);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 67:
			x = new Argument("x",2);
			y = new Argument("y",3);
			expStr = "ctg(x+y) - (ctg(x)*ctg(y)-1) / (ctg(y)+ctg(x))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x,y);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 68:
			x = new Argument("x",2);
			n = new Argument("n",10);
			expStr = "sin(n*x) - sum(i,0,n,(-1)^i*C(n,2*i+1)*(cos(x)^(n-2*i-1))*(sin(x)^(2*i+1))) ";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x,n);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 69:
			n = new Argument("n",50);
			expStr = "n*2^(n-1) - sum(i,1,n,i*C(n,i))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 70:
			expStr = "prod(i,2,6,1+1/i)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 7.0/2.0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 71:
			expStr = "prod(i,1,6,10)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Math.pow(10,6);
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 72:
			expStr = "prod(i,1,6,i,0.5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			for (double ii=1; ii<6; ii+=0.5)
				reg*=ii;
			reg*=6;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 73:
			expStr = "sum(n,1,5,prod(i,1,n,n*i))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			sum = 0;
			for (double nn=1; nn<=5; nn++) {
				reg=1;
				for (double ii=1; ii<=nn; ii++)
					reg*=nn*ii;
				sum+=reg;
			}
			reg=sum;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 74:
			n = new Argument("n");
			RecursiveArgument fib = new RecursiveArgument("fib","fib(n-1)+fib(n-2)",n);
			fib.addBaseCase(0, 0);
			fib.addBaseCase(1, 1);
			expStr = "sum(n,0,5,fib(n))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,fib);
			value = exp[testId].calculate();
			reg = 12;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 75:
			n = new Argument("n");
			RecursiveArgument fact = new RecursiveArgument("fact","n*fact(n-1)",n);
			fact.addBaseCase(0, 1);
			expStr = "5!-fact(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,fact);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 76:
			x = new Argument("x",2);
			expStr = "cos(x)-der(sin(x),x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 77:
			x = new Argument("x",2);
			y = new Argument("y",3);
			expStr = "-sin(x+y)-der(der(sin(x+y),x),y)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x,y);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 78:
			x = new Argument("x",2);
			y = new Argument("y",3);
			expStr = "cos(x*y)-x*y*sin(x*y)-der(der(sin(x*y),x),y)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x,y);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 79:
			n = new Argument("n",-5);
			expStr = "C(n,2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n);
			value = exp[testId].calculate();
			reg = 15;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 80:
			x = new Argument("x",0);
			expStr = "der+(abs(x),x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 1;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 81:
			x = new Argument("x",0);
			expStr = "der-(abs(x),x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = -1;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 82:
			x = new Argument("x",4);
			expStr = "cos(x)-der(sum(n,0,10,(-1)^n*(x^(2*n+1))/(2*n+1)!),x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if (MathFunctions.abs(value - reg) < 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 83:
			n = new Argument("n",7);
			k = new Argument("k",4);
			expStr = "C(n,k) - ( C(n-1,k-1)+C(n-1,k) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,k);
			value = exp[testId].calculate();
			reg = 0;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 84:
			n = new Argument("n",13);
			k = new Argument("k",6);
			expStr = "C(n,k) - prod(i,1,k,n-i+1) / prod(i,1,k,i)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,k);
			value = exp[testId].calculate();
			reg = 0;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 85:
			n = new Argument("n",13);
			k = new Argument("k",6);
			expStr = "C(n,k) - prod(i,1,k,(n-i+1)/i)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,k);
			value = exp[testId].calculate();
			reg = 0;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 86:
			n = new Argument("n",13);
			k = new Argument("k",6);
			expStr = "C(n,k) - C(n,n-k)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,k);
			value = exp[testId].calculate();
			reg = 0;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 87:
			n = new Argument("n",13);
			k = new Argument("k",6);
			expStr = "C(n,0)+C(n,n)+C(0,0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,k);
			value = exp[testId].calculate();
			reg = 3;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 88:
			n = new Argument("n",13);
			k = new Argument("k",6);
			expStr = "C(n,k+1)-C(n,k)*(n-k)/(k+1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,k);
			value = exp[testId].calculate();
			reg = 0;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 89:
			n = new Argument("n",13);
			expStr = "2^n-sum(k,0,n,C(n,k))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n);
			value = exp[testId].calculate();
			reg = 0;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 90:
			n = new Argument("n",13);
			expStr = "C(2*n,n)-sum(k,0,n,C(n,k)^2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n);
			value = exp[testId].calculate();
			reg = 0;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 91:
			n = new Argument("n",13);
			expStr = "sum(k,0,n,(-1)^k*C(n,k))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n);
			value = exp[testId].calculate();
			reg = 0;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 92:
			n = new Argument("n",13);
			m = new Argument("m",3);
			s = new Argument("s",5);
			r = new Argument("r",4);
			expStr = "C(r+s,m+n)-sum(k,0,n,C(r,m+k)*C(s,n-k))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,m,r,s);
			value = exp[testId].calculate();
			reg = 0;
			if (value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 93:
			n = new Argument("n",13);
			k = new Argument("k",6);
			expStr = "C(n,k)-(n/k)*C(n-1,k-1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,k);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 94:
			n = new Argument("n",13);
			k = new Argument("k",6);
			expStr = "(n-k)*C(n,k)-n*C(n-1,k)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,k);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg)
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 95:
			n = new Argument("n",13);
			k = new Argument("k",6);
			expStr = "C(n,k) <= n^k/k!";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,k);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg)
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 96:
			n = new Argument("n",13);
			k = new Argument("k",6);
			expStr = "C(n,k) <= (n*e/k)^k";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,k);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg)
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 97:
			n = new Argument("n",13);
			k = new Argument("k",6);
			expStr = "C(n,k) >= (n/k)^k";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,n,k);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg)
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 98:
			x = new Argument("x",3);
			expStr = "sin(3)-sin(2)-int(cos(x),x,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value-reg) <= 0.00001)
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 99:
			i = new Argument("i", 5);
			expStr = "2*i+sum(i,1,10,i)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,i);
			value = exp[testId].calculate();
			reg = 65;
			if ( value == reg)
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 100:
			x = new Argument("x",3);
			expStr = "sin(x)-sin(x-1)-int(cos(x),x,2,3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value-reg) <= 0.00001)
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 101:
			f = new Function("mg", "sin(x)+cos(y)", "x", "y");
			x = new Argument("x", 3);
			y = new Argument("y", 2);
			expStr = "sin(x)+cos(y)-mg(x,y)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,x, y);
			exp[testId].addDefinitions(f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000000000001)
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 102:
			f = new Function("mg", "sin(x)+cos(y)", "x", "y");
			expStr = "der(sin(x)+cos(y),x)-der(mg(x,y),x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr,new Argument("x", 3), new Argument("y", 2));
			exp[testId].addDefinitions(f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.00000001)
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 103:
			f = new Function("f", "x^2", "x");
			g = new Function("g", "f(x)^2", "x");
			g.addDefinitions(f);
			expStr = "g(x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, new Argument("x", 3));
			exp[testId].addDefinitions(g);
			value = exp[testId].calculate();
			reg = 81;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 104:
			f = new Function("f", "sin(x)", "x");
			g = new Function("g", "cos(x)", "x");
			expStr = "der( f(x)*g(x), x) - ( der(f(x), x)*g(x) + f(x)*der(g(x), x) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, new Argument("x", 3));
			exp[testId].addDefinitions(f, g);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 105:
			f = new Function("f", "sin(x)", "x");
			g = new Function("g", "cos(x)", "x");
			expStr = "der( f(x)/g(x), x) - ( der(f(x), x)*g(x) - f(x)*der(g(x), x) )/g(x)^2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, new Argument("x", 3));
			exp[testId].addDefinitions(f, g);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 106:
			f = new Function("f", "sin(x)", "x");
			expStr = "der( int(f(t), t, 0, x), x) - f(x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, new Argument("x", 3));
			exp[testId].addDefinitions(f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 107:
			f = new Function("f", "sin(x)", "x");
			g = new Function("g", "cos(x)", "x");
			expStr = "der(f(x)+g(x), x) - ( der(f(x), x) + der(g(x),x) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, new Argument("x", 3));
			exp[testId].addDefinitions(f, g);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 108:
			Argument a = new Argument("a",2);
			Argument b = new Argument("b",2);
			f = new Function("f", "sin(x)", "x");
			g = new Function("g", "cos(x)", "x");
			expStr = "der(a*f(x)+b*g(x), x) - ( a*der(f(x), x) + b*der(g(x),x) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, new Argument("x", 3), a, b);
			exp[testId].addDefinitions(f, g);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 109:
			f = new Function("f", "sin(x)", "x");
			g = new Function("g", "cos(x)", "x");
			h = new Function("h", "x^2", "x");
			expStr = "der(f(x)*g(x)*h(x), x) - ( der(f(x), x)*g(x)*h(x) + f(x)*der(g(x), x)*h(x) + f(x)*g(x)*der(h(x), x))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, new Argument("x", 3));
			exp[testId].addDefinitions(f, g, h);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 110:
			f = new Function("f", "sin(x)", "x");
			expStr = "der(ln(f(x)), x) - der(f(x), x) / f(x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, new Argument("x", 3));
			exp[testId].addDefinitions(f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 111:
			f = new Function("f", "sin(x)", "x");
			a = new Argument("a",Math.PI);
			expStr = "der( f(x)^a, x) - a*f(x)^(a-1)*der(f(x), x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, new Argument("x", 3),a);
			exp[testId].addDefinitions(f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 112:
			f = new Function("f", "sin(x)^2", "x");
			g = new Function("g", "cos(x)^2", "x");
			expStr = "der( f(x)^g(x), x) - f(x)^g(x)*( der(f(x), x)*g(x)/f(x) + der(g(x), x)*ln(f(x)) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, new Argument("x", 3));
			exp[testId].addDefinitions(f, g);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 113:
			f = new Function("f", "sin(x)", "x");
			g = new Function("g", "cos(x)", "x");
			h = new Function("h", "int(f(t),t,0,x)", "x");
			h.addDefinitions(f);
			a = new Argument("a", 2);
			b = new Argument("b", 4);
			x = new Argument("x", 3);
			expStr = "int(f(x)*g(x),x,a,b) - ( h(b)*g(b)-h(a)*g(a) - int( h(x)*der(g(x),x), x, a, b) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x, a, b);
			exp[testId].addDefinitions(f, g, h);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 114:
			f = new Function("f", "ln(x)", "x");
			g = new Function("g", "x^2+2", "x");
			x = new Argument("x", 10);
			t = new Argument("t", "g(x)", x);
			t.addDefinitions(g);
			expStr = "der( f(g(x)), x) - der( f(t), t)*der( g(x), x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x, t);
			exp[testId].addDefinitions(f, g);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 115:
			n = new Argument("n");
			RecursiveArgument fact1 = new RecursiveArgument("fact1", "n*fact1(n-1)", n);
			fact1.addBaseCase(0, 1);
			RecursiveArgument fact2 = new RecursiveArgument("fact2", "if(n>0, n*fact2(n-1), 1)", n);
			expStr = "sum(i,0,10,fact1(i)-fact2(i))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, fact1, fact2);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 116:
			n = new Argument("n");
			RecursiveArgument fib1 = new RecursiveArgument("fib1", "fib1(n-1)+fib1(n-2)", n);
			fib1.addBaseCase(0, 0);
			fib1.addBaseCase(1, 1);
			RecursiveArgument fib2 = new RecursiveArgument("fib2", "if( n>1, fib2(n-1)+fib2(n-2), if(n=1,1,0) )", n);
			expStr = "sum(i,0,10,fib1(i)-fib2(i))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, fib1, fib2);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 117:
			Function Cnk = new Function("Cnk","if( k>0, if( k<n, Cnk(n-1,k-1)+Cnk(n-1,k), 1), 1)","n", "k");
			expStr = "C(10,5)-Cnk(10,5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(Cnk);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 118:
			n = new Argument("n");
			fib1 = new RecursiveArgument("fib1", "fib1(n-1)+fib1(n-2)", n);
			fib1.addBaseCase(0, 0);
			fib1.addBaseCase(1, 1);
			fib2 = new RecursiveArgument("fib2", "if( n>1, fib2(n-1)+fib2(n-2), if(n>0,1,0) )", n);
			Function fib3 = new Function("fib3","if(n>1, fib3(n-1)+fib3(n-2), if(n>0,1,0))","n");
			expStr = "sum(i,1,10,(fib1(i) = fib2(i)) & (fib2(i) = fib3(i)) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, fib1, fib2);
			exp[testId].addDefinitions(fib3);
			value = exp[testId].calculate();
			reg = 10;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 119:
			m = new Argument("m");
			n = new Argument("n", "m-1", m);
			x = new Argument("x",3);
			Function H = new Function("H","if(m>1, 2*x*H(n,x)-2*n*H(n-1,x), if(m>0, 2*x, 1) )", m, x, n);
			H.setParametersNumber(2);
			expStr = "H(0,x) + H(1,x) + H(2,x) + H(3,x) - ( (1) + (2*x) + (4*x^2-2) + (8*x^3-12*x) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			exp[testId].addDefinitions(H);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 120:
			m = new Argument("m",4);
			n = new Argument("n", "m-1", m);
			x = new Argument("x",3);
			H = new Function("H","if(m>1, 2*x*H(n,x)-2*n*H(n-1,x), if(m>0, 2*x, 1) )", m, x, n);
			H.setParametersNumber(2);
			k = new Argument("k",5);
			expStr = "der( H(k,x), x) - 2*k*H(k-1,x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x,k );
			exp[testId].addDefinitions(H);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 121:
			Function T = new Function("T","if(k>1, 2*x*T(k-1,x)-T(k-2,x), if(k>0, x, 1) )", "k", "x");
			k = new Argument("k",5);
			x = new Argument("x",3);
			expStr = "T(k,x) - ( (x + sqrt(x^2-1))^k + (x - sqrt(x^2-1))^k)/2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x,k );
			exp[testId].addDefinitions(T);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 122:
			Function T1 = new Function("T1","if(k>1, 2*x*T1(k-1,x)-T1(k-2,x), if(k>0, x, 1) )", "k", "x");
			Function T2 = new Function("T2","if(x >= 1, cosh(k*arcosh(x)), if(x <= -1, ((-1)^k)*cosh(k*arcosh(-x)), cos(k*acos(x))) )", "k", "x");
			k = new Argument("k",5);
			expStr = "T1(k,3)-T2(k,3) + T1(k,-3)-T2(k,-3) + T1(k,-0.5)-T2(k,-0.5) + T1(k,0.5)-T2(k,0.5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, k);
			exp[testId].addDefinitions(T1, T2);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) <= 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 123:
			expStr = "pi+e+[g]+[p]+[r]+[B*]+[D]+[a]+[C2]+[M1]+[B2]+[B4]+[L]+[K]+[K*]+[K.]+[B'L]+[m]+[EB]+[B]+[l]+[s]+[lm]+[C]+[Ll]+[AG]+[L*]+[L.]+[Dz3]+[T]+[Bh]+[Pt]+[L2]+[Nv]+[Ks]+[Kh]+[F]+[La]+[P2]+[O]+[M]+[li2]+[G]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3.14159265358979323846264338327950288 + /*Pi,Archimedes'constantorLudolph'snumber*/
				2.71828182845904523536028747135266249 + /*Napier'sconstant,orEuler'snumber,baseofNaturallogarithm*/
				0.57721566490153286060651209008240243 + /*Euler-Mascheroniconstant*/
				1.61803398874989484820458683436563811 + /*Goldenratio*/
				1.32471795724474602596090885447809734 + /*Plasticconstant*/
				0.70258 + /*Embree-Trefethenconstant*/
				4.66920160910299067185320382046620161 + /*Feigenbaumconstant*/
				2.50290787509589282228390287321821578 + /*Feigenbaumconstant*/
				0.66016181584686957392781211001455577 + /*Twinprimeconstant*/
				0.26149721284764278375542683860869585 + /*Meissel-Mertensconstant*/
				1.9021605823 + /*Brun'sconstantfortwinpr imes*/
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
				0.5 + /*Landau'sconstant*/
				2.29558714939263807403429804918949039 + /*Parabolicconstant*/
				0.56714329040978387299996866221035555 + /*Omegaconstant*/
				0.187859 + /*MRBconstant*/
				1.045163780117492784844588889194613136522615578151 + /* l2(2) */
				0.596347362323194074341078499369279376074 /* Gompertz Constant */
			;
			if ( MathFunctions.abs(value - reg) <= 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 124:
			m = new Argument("m",4);
			n = new Argument("n", "m-1", m);
			x = new Argument("x",3);
			H = new Function("H","if(m>1, 2*x*H(n,x)-2*n*H(n-1,x), if(m>0, 2*x, 1) )", m, x, n);
			H.setParametersNumber(2);
			k = new Argument("k",5);
			expStr = "der( H(k,x), x) - 2*k*H(k-1,x)";
			exp[testId] = new Expression(expStr, x,k );
			exp[testId].addDefinitions(H);
			syn1 = exp[testId].checkSyntax();
			m.setArgumentName("m");
			if ((syn1) && (exp[testId].getSyntaxStatus() == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN))
				testResult = true;
			mXparser.consolePrint(exp[testId].getErrorMessage() + " reg ... " + "Syntax status unknown." + " --> ");
			break;
		case 125:
			expStr = "2==2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 126:
			expStr = "2 != 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 127:
			expStr = "2 ~= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 128:
			expStr = "1 && 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 129:
			expStr = "1 || -1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
		case 130:
			expStr = "~1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 131:
			expStr = "2+~(1-1)!";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 132:
			x = new Argument("x",2);
			expStr = "if( int(2*x,x,0,pi) > 0 , 1, 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 133:
			x = new Argument("x",2);
			expStr = "if( -int(2*x,x,0,pi) > 0 , 1, 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 134:
			mXparser.setEpsilon(0.00000001);
			expStr = "sum(n, 0, 10, if ( if( sin(n*pi/2) > 0, 1, 2) >= 2, 4, 2) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 38;
			if ( value == reg )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 135:
			expStr = "sin(0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 136:
			expStr = "cos(0) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 137:
			expStr = "tan(0) - 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 138:
			expStr = "tg(0) - 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 139:
			expStr = "ctan(pi/2) - 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 140:
			expStr = "ctg(pi/2) - 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 141:
			expStr = "cot(pi/2) - 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 142:
			expStr = "sec(0) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 143:
			expStr = "cosec(pi/2) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 144:
			expStr = "csc(pi/2) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 145:
			expStr = "asin(0.5) - pi/6";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 146:
			expStr = "arsin(0) - 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 147:
			expStr = "arcsin(1) - pi/2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 148:
			expStr = "acos(0) - pi/2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 149:
			expStr = "arcos(0.5) - pi/3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 150:
			expStr = "arccos(-1) - pi";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 151:
			expStr = "atan(0) - 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 152:
			expStr = "arctan(1) - pi/4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 153:
			expStr = "atg(1) - pi/4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 154:
			expStr = "arctg(1) - pi/4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 155:
			expStr = "actan(0) - pi/2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 156:
			expStr = "arcctan(1) - pi/4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 157:
			expStr = "actg(1) - pi/4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 158:
			expStr = "arcctg(1) - pi/4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 159:
			expStr = "acot(1) - pi/4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 160:
			expStr = "arccot(1) - pi/4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 161:
			expStr = "ln(e) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 162:
			expStr = "ln(e^2) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 163:
			expStr = "log2(8) - 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 164:
			expStr = "log10(1000) - 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 165:
			expStr = "rad(180) - pi";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 166:
			expStr = "exp(2) - e^2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 167:
			expStr = "sqrt(25) - 5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 168:
			expStr = "sinh(ln([p])) - 0.5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 169:
			expStr = "cosh(ln([p])) - 0.5*sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 170:
			expStr = "tanh(ln([p])) - 1/sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 171:
			expStr = "tgh(ln([p])) - 1/sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 172:
			expStr = "ctanh(ln([p])) - sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 173:
			expStr = "coth(ln([p])) - sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 174:
			expStr = "ctgh(ln([p])) - sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 175:
			expStr = "sech(ln([p])) - 1/(0.5*sqrt(5))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 176:
			expStr = "csch(ln([p])) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 177:
			expStr = "cosech(ln([p])) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 178:
			expStr = "deg(pi) - 180";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 179:
			expStr = "abs(-1) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 180:
			expStr = "sgn(1) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 181:
			expStr = "sgn(0) - 0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 182:
			expStr = "floor(1.2) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 183:
			expStr = "floor(1.9) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 184:
			expStr = "floor(-1.9) - (-2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 185:
			expStr = "ceil(1.2) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 186:
			expStr = "ceil(1.9) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 187:
			expStr = "ceil(-1.2) - (-1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 188:
			expStr = "asinh(0.5) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 189:
			expStr = "arsinh(0.5) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 190:
			expStr = "acosh(0.5*sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 191:
			expStr = "arcosh(0.5*sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 192:
			expStr = "arccosh(0.5*sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 193:
			expStr = "atanh(1/sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 194:
			expStr = "arctanh(1/sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 195:
			expStr = "atgh(1/sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 196:
			expStr = "arctgh(1/sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 197:
			expStr = "actanh(sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 198:
			expStr = "arcctanh(sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 199:
			expStr = "acoth(sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 200:
			expStr = "arcoth(sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 201:
			expStr = "arccoth(sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 202:
			expStr = "actgh(sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 203:
			expStr = "arcctgh(sqrt(5)) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 204:
			expStr = "asech(1/(0.5*sqrt(5))) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 205:
			expStr = "arsech(1/(0.5*sqrt(5))) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 206:
			expStr = "arcsech(1/(0.5*sqrt(5))) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 207:
			expStr = "acsch(2) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 208:
			expStr = "arcsch(2) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 209:
			expStr = "arccsch(2) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 210:
			expStr = "acosech(2) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 211:
			expStr = "arcosech(2) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 212:
			expStr = "arccosech(2) - ln([p])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 213:
			expStr = "log(2,8) - 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 214:
			expStr = "min(2,3) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 215:
			expStr = "max(2,3) - 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 216:
			expStr = "mod(10,6) - 4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 217:
			expStr = "if(1,2,3) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 218:
			expStr = "if(0,2,3) - 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 219:
			expStr = "iff(1, 2) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 220:
			expStr = "iff(0, 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 221:
			expStr = "iff(0, 2, 1, 2) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 222:
			expStr = "iff(0, 2, 1, 2, 3, 4) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 223:
			expStr = "iff(0, 2, 1, 2, 0, 4) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 224:
			expStr = "iff(0, 2, 0, 2, 1, 4) - 4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 225:
			expStr = "iff(0, 2, 0, 2, 0, 4)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 226:
			x = new Argument("x", 2);
			expStr = "Sinc(x) - prod(n, 1, 16, cos(x / 2^n) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 227:
			x = new Argument("x", 2);
			expStr = "sinc(x) - prod(n, 1, 100, (1 - x^2 / n^2) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 228:
			x = new Argument("x", 2);
			expStr = "Sa(x) - prod(n, 1, 100, (1 - x^2 / n^2) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 229:
			n = new Argument("n", 10);
			expStr = "Bell(n) - sum(k, 0, n, Stirl2(n,k) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, n);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 230:
			n = new Argument("n", 10);
			k = new Argument("k", 5);
			expStr = "Worp(n, k) - k! * Stirl2(n+1, k+1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, n, k);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 231:
			n = new Argument("n", 10);
			expStr = "Bern(n,0) - sum(k, 0, n, ( (-1)^k )* ( Worp(n, k) / ( k+1 ) ) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, n);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 232:
			n = new Argument("n", 15);
			k = new Argument("k", 5);
			expStr = "sum(p, k, n, Stirl1(n, p) * C(p,k)) - Stirl1(n+1, k+1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, n, k);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 233:
			expStr =
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
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 8;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 234:
			expStr = "2 + 10%7 + 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 8;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 235:
			x = new Argument("x", 5);
			expStr = "int( chi(t, 0, x), t, 0, x) - x";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 236:
			x = new Argument("x", 5);
			expStr = "int( CHi(t, 0, x), t, 0, x) - x";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 237:
			x = new Argument("x", 5);
			expStr = "int( Chi(t, 0, x), t, 0, x) - x";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 238:
			x = new Argument("x", 5);
			expStr = "int( cHi(t, 0, x), t, 0, x) - x";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 239:
			expStr = "ConFrac(1,2,3,5,6,7) - ConPol(1,2,3,4,5,6,7) / ConPol(2,3,4,5,6,7)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 240:
			expStr = "min(1,2,3,4,5,-5,343,3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -5;
			if ( MathFunctions.abs(reg - value) < 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 241:
			expStr = "max(1,2,3,4,5,-5,343,3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 343;
			if ( MathFunctions.abs(reg - value) < 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 242:
			x = new Argument("x", 0.5);
			expStr = "ConPol(x,x,x,x,x,x) - sum(k, 0, 6, C(6-k, k) * x^(6-2*k))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 243:
			m = new Argument("m", 5);
			n = new Argument("n", 10);
			expStr = "Euler(n,m) -  sum(k,0,m, C(n+1,k)*((m+1-k)^n)*(-1)^k)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, n, m);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 244:
			x = new Argument("x", 2);
			f = new Function("f", "sin(x)+cos(x)", "x");
			expStr = "diff(f(x), x) - ( f(x+1)-f(x) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			exp[testId].addDefinitions(f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 245:
			x = new Argument("x", 2);
			Argument dh = new Argument("h", 1);
			f = new Function("f", "sin(x)+cos(x)", "x");
			expStr = "diff(f(x), x, h/2) - ( f(x+h/2)-f(x) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x, dh);
			exp[testId].addDefinitions(f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 246:
			x = new Argument("x", 2);
			f = new Function("f", "sin(x)+cos(x)", "x");
			expStr = "difb(f(x), x) - ( f(x)-f(x-1) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			exp[testId].addDefinitions(f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 247:
			x = new Argument("x", 2);
			dh = new Argument("h", 1);
			f = new Function("f", "sin(x)+cos(x)", "x");
			expStr = "difb(f(x), x, h/2) - ( f(x)-f(x-h/2) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x, dh);
			exp[testId].addDefinitions(f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 248:
			Function fibr = new Function("fib","if(n>1, fib(n-1)+fib(n-2), if(n>0,1,0))","n");
			expStr = "sum(i,0,10,Fib(i) - fib(i))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(fibr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 249:
			Function luc = new Function("luc","if(n>1, luc(n-1)+luc(n-2), if(n>0,1,2))","n");
			expStr = "sum(i,0,10,Luc(i) - luc(i))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(luc);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 250:
			expStr = "sum(i,1,10,harm(i)) - sum(i,1,10,sum(k,1,i,1/k))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 251:
			Constant p = new Constant("p",0);
			Constant q = new Constant("q",1);
			expStr = "p -> q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 252:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p <- q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 253:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p <- q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 254:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p <-> q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 255:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p (+) q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 256:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p /\\ q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 257:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p \\/ q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 258:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p ~& q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 259:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p ~&& q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 260:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p ~/\\ q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 261:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p ~| q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 262:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p ~|| q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 263:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "p ~\\/ q";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 264:
			p = new Constant("p",0);
			q = new Constant("q",1);
			Constant rr = new Constant("r",1);
			expStr = "(p /\\ q) \\/ (~p) \\/ (~q)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q, rr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 265:
			p = new Constant("p",0);
			q = new Constant("q",1);
			rr = new Constant("r",1);
			expStr = "(p -> q) <-> (~q -> ~p)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q, rr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 266:
			p = new Constant("p",0);
			q = new Constant("q",1);
			rr = new Constant("r",1);
			expStr = "( (p -> q) /\\ (q -> r) ) -> (p -> r)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q, rr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 267:
			p = new Constant("p",0);
			q = new Constant("q",1);
			rr = new Constant("r",1);
			expStr = "( (p \\/ q) /\\ (p -> r) /\\ (q -> r) ) -> r";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q, rr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 268:
			p = new Constant("p",0);
			q = new Constant("q",1);
			expStr = "~(p /\\ q) <-> (~p \\/ ~q)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(p, q);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 269:
			expStr = "gcd(1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 270:
			expStr = "gcd(12,9)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 271:
			expStr = "gcd(12,6,18)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 6;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 272:
			expStr = "lcm(1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 273:
			expStr = "lcm(12,9)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 36;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 274:
			expStr = "lcm(12,6,18)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 36;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 275:
			expStr = "sum(i,1,10,harm(i)) - sum(i,1,10,Harm(1,i))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 276:
			expStr = "1/4*2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.5;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 277:
			expStr = "n1_geq_2(0)";
			Constant c1 = new Constant("c1", 0.25+0.01);
			RecursiveArgument z1 = new RecursiveArgument("z1","z1(n-1)^2+c1", "n");
			z1.addDefinitions(c1);
			z1.addBaseCase(0, 0);
			Function n1_geq_2 = new Function("n1_geq_2", "if( z1(k) > 2, k, n1_geq_2(k+1) )", "k");
			n1_geq_2.addDefinitions(z1);
			mXparser.consolePrint(c1.getConstantName() + " = " + c1.getConstantValue() + " ; " + z1.getArgumentName() + " = " + z1.getArgumentExpressionString() + " ; " + n1_geq_2.getFunctionName() + " = " + n1_geq_2.getFunctionExpressionString() + " ; " + expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(n1_geq_2);
			value = exp[testId].calculate();
			reg = 30;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 278:
			expStr = "n2_geq_2(0)";
			Constant c2 = new Constant("c2", 0.25+0.01);
			Function z2 = new Function("z2","if( n>0, z2(n-1)^2+c2, 0)", "n");
			z2.addDefinitions(c2);
			Function n2_geq_2 = new Function("n2_geq_2", "if( z2(k) > 2, k, n2_geq_2(k+1) )", "k");
			n2_geq_2.addDefinitions(z2);
			mXparser.consolePrint(c2.getConstantName() + " = " + c2.getConstantValue() + " ; " + z2.getFunctionName() + " = " + z2.getFunctionExpressionString() + " ; " + n2_geq_2.getFunctionName() + " = " + n2_geq_2.getFunctionExpressionString() + " ; " + expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(n2_geq_2);
			value = exp[testId].calculate();
			reg = 30;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 279:
			expStr = "n1_geq_2(0) - n2_geq_2(0)";
			c1 = new Constant("c1", 0.25+0.01);
			z1 = new RecursiveArgument("z1","z1(n-1)^2+c1", "n");
			z1.addDefinitions(c1);
			z1.addBaseCase(0, 0);
			n1_geq_2 = new Function("n1_geq_2", "if( z1(k) > 2, k, n1_geq_2(k+1) )", "k");
			n1_geq_2.addDefinitions(z1);
			c2 = new Constant("c2", 0.25+0.01);
			z2 = new Function("z2","if( n>0, z2(n-1)^2+c2, 0)", "n");
			z2.addDefinitions(c2);
			n2_geq_2 = new Function("n2_geq_2", "if( z2(k) > 2, k, n2_geq_2(k+1) )", "k");
			n2_geq_2.addDefinitions(z2);
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(n1_geq_2, n2_geq_2);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 280:
			expStr = "sum(i, 1, 20, IsPrime(i) )";
			Function IsFactor = new Function("IsFactor", "if( a>b, 0, if( n%a = 0, 1, IsFactor(n, a+1, b) ) )", "n", "a", "b");
			Function IsPrime = new Function("IsPrime", "if( n<2, 0, ~IsFactor(n, 2, sqrt(n)) )", "n");
			IsPrime.addDefinitions(IsFactor);
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(IsPrime);
			value = exp[testId].calculate();
			reg = 8;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 281:
			expStr = "abs( sin(0.5)-s(0.5))+abs( cos(0.7)-c(0.7) )";
			Constant aa = new Constant("a", 0.00001);
			Function ss = new Function("s", "if( abs(x) < a, x, 2*s(x/2)*c(x/2) )", "x");
			Function cc = new Function("c", "if( abs(x) < a, 1, c(x/2)^2 - s(x/2)^2 )", "x");
			ss.addDefinitions(aa);
			ss.addDefinitions(cc);
			cc.addDefinitions(aa);
			cc.addDefinitions(ss);
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(ss, cc);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 282:
			expStr = "f1(1,2)-f2(1,2)";
			Function f1 = new Function("f1", "sin(x)+cos(y)", "x", "y");
			Function f2 = new Function("f2(x,y) = sin(x)+cos(y)");
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			exp[testId].addDefinitions(f1, f2);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 283:
			expStr = "a = 5.1, expr = 2*a";
			Constant a1 = new Constant("a = 5.1");
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression("2*a");
			exp[testId].addDefinitions(a1);
			value = exp[testId].calculate();
			reg = 10.2;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 284:
			expStr = "a = sin(pi/2), expr = a";
			Constant a2 = new Constant("a = sin(pi/2)");
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression("a");
			exp[testId].addDefinitions(a2);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 285:
			expStr = "fib(n)= fib(n-1)+fib(n-2), fib(10) = ";
			mXparser.consolePrint(expStr + " ...... ");
			RecursiveArgument fib10 = new RecursiveArgument("fib(n)= fib(n-1)+fib(n-2)");
			fib10.addBaseCase(0, 0);
			fib10.addBaseCase(1, 1);
			exp[testId] = new Expression("fib(10)", fib10);
			value = exp[testId].calculate();
			reg = 55;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 286:
			expStr = "fib(n) = if(n>1, fib(n-1) + fib(n-2), if(n = 1, 1, 0)), fib(10) = ";
			mXparser.consolePrint(expStr + " ...... ");
			Function fibb = new Function("fib(n) = if(n>1, fib(n-1) + fib(n-2), if(n = 1, 1, 0))");
			exp[testId] = new Expression("fib(10)", fibb);
			value = exp[testId].calculate();
			reg = 55;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 287:
			expStr = "5^2 * 7^3 * 11^1 * 67^1 * 49201^1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			String hello = mXparser.numberToAsciiString(exp[testId].calculate());
			String regHello = "Hello";
			if ( regHello.equals(hello) )
				testResult = true;
			mXparser.consolePrint(hello + " reg ... " + regHello + " --> ");
			break;
		case 288:
			expStr = "71^1 * 218549^1 * 6195547^1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			String world = mXparser.numberToAsciiString(exp[testId].calculate());
			String regWorld = "World!";
			if ( regWorld.equals(world) )
				testResult = true;
			mXparser.consolePrint(world + " reg ... " + regWorld + " --> ");
			break;
		case 289:
			expStr = "min(3,4)+max(-2,-1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 290:
			expStr = "sum(i, 0, 1000, ispr(i) )";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 291:
			mXparser.initPrimesCache(50);
			expStr = "sum(i, 0, 1000, ispr(i) )";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 292:
			mXparser.initPrimesCache(55);
			expStr = "sum(i, 0, 1000, ispr(i) )";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 293:
			mXparser.initPrimesCache(97);
			expStr = "sum(i, 0, 1000, ispr(i) )";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 294:
			mXparser.initPrimesCache(99);
			expStr = "sum(i, 0, 1000, ispr(i) )";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 295:
			mXparser.initPrimesCache(101);
			expStr = "sum(i, 0, 1000, ispr(i) )";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 296:
			mXparser.initPrimesCache(999);
			expStr = "sum(i, 0, 1000, ispr(i) )";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 297:
			mXparser.initPrimesCache(2000);
			expStr = "sum(i, 0, 1000, ispr(i) )";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 298:
			mXparser.setNoPrimesCache();
			expStr = "Pi(1000)";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 299:
			mXparser.initPrimesCache(50);
			expStr = "Pi(1000)";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 300:
			mXparser.initPrimesCache(55);
			expStr = "Pi(1000)";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 301:
			mXparser.initPrimesCache(97);
			expStr = "Pi(1000)";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 302:
			mXparser.initPrimesCache(99);
			expStr = "Pi(1000)";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 303:
			mXparser.initPrimesCache(101);
			expStr = "Pi(1000)";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 304:
			mXparser.initPrimesCache(999);
			expStr = "Pi(1000)";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 305:
			mXparser.initPrimesCache(2000);
			expStr = "Pi(1000)";
			mXparser.consolePrint(expStr + " primes cache size: " + mXparser.getMaxNumInPrimesCache() + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 168;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 306:
			expStr = "Ei( ln([m]) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 307:
			expStr = "-e*Ei(-1) - [G]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 308:
			expStr =	"abs( Ei(-1)  / (0.219383934395520274 * 10^0 ) ) + " +
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
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 309:
			expStr = "sum(x; -11; 11; [g] + ln(abs(x)) + sum(k, 1, 50, x^k / (k*k!)) - Ei(x), 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 310:
			expStr = "Li(0) + [li2]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 311:
			mXparser.initPrimesCache(10000000);
			expStr = "Pi(10000000) / Li(10000000)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 312:
			x = new Argument("x = 100000000");
			expStr = "( ( x / ln(x) ) * sum(k, 0, 20, k! / ln(x)^k ) ) / li(x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 313:
			Function fefe = new Function("fefe(x)=2*x");
			expStr = "fefe(2) + fefe(3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, fefe);
			value = exp[testId].calculate();
			reg = 10;
			if ( MathFunctions.abs(reg - value) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 314:
			expStr = "add(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 55;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 315:
			expStr = "multi(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3628800;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 316:
			expStr = "mean(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 5.5;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 317:
			expStr = "var(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 9.166666667;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 318:
			expStr = "std(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3.027650354;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 319:
			expStr = "avg(i, 1, 10, i)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 5.5;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 320:
			expStr = "vari(i, 1, 10, i)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 9.166666667;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 321:
			expStr = "stdi(i, 1, 10, i)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3.027650354;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 322:
			expStr = "mini(i, -10, 10, i)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -10;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 323:
			expStr = "maxi(i, -10, 10, i)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 324:
			expStr = "maxi(i, 1, 100000, [Uni])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 325:
			expStr = "mini(i, 1, 100000, [Uni])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 326:
			expStr = "avg(i, 1, 100000, [Uni])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.5;
			if ( MathFunctions.abs(reg - value) < 1 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 327:
			expStr = "vari(i, 1, 100000, [Uni])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0/12.0;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 328:
			expStr = "stdi(i, 1, 100000, [Uni])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = MathFunctions.sqrt(1.0/12.0);
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 329:
			expStr = "maxi(i, 1, 100000, [Int1])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 330:
			expStr = "mini(i, 1, 100000, [Int1])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -10;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 331:
			expStr = "avg(i, 1, 100000, [Int1])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 1 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 332:
			expStr = "vari(i, 1, 100000, [Int1])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = (MathFunctions.power(21.0, 2)-1)/12.0;
			if ( MathFunctions.abs(reg - value) < 1 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 333:
			expStr = "stdi(i, 1, 100000, [Int1])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = MathFunctions.sqrt( (MathFunctions.power(21.0, 2)-1)/12.0 );
			if ( MathFunctions.abs(reg - value) < 0.1 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 334:
			expStr = "maxi(i, 1, 100000, [Int2])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 100;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 335:
			expStr = "mini(i, 1, 100000, [Int2])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -100;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 336:
			expStr = "maxi(i, 1, 1000000, [Int3])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1000;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 337:
			expStr = "mini(i, 1, 1000000, [Int3])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -1000;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 338:
			expStr = "maxi(i, 1, 10000000, [Int4])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10000;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 339:
			expStr = "mini(i, 1, 10000000, [Int4])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -10000;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 340:
			expStr = "maxi(i, 1, 10000000, [Int5])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 100000;
			if ( MathFunctions.abs(reg - value) <= 10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 341:
			expStr = "mini(i, 1, 10000000, [Int5])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -100000;
			if ( MathFunctions.abs(reg - value) <= 10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 342:
			expStr = "maxi(i, 1, 10000000, [Int6])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1000000;
			if ( MathFunctions.abs(reg - value) <= 100 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 343:
			expStr = "mini(i, 1, 10000000, [Int6])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -1000000;
			if ( MathFunctions.abs(reg - value) <= 100 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 344:
			expStr = "maxi(i, 1, 10000000, [Int7])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10000000;
			if ( MathFunctions.abs(reg - value) <= 1000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 345:
			expStr = "mini(i, 1, 10000000, [Int7])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -10000000;
			if ( MathFunctions.abs(reg - value) <= 1000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 346:
			expStr = "maxi(i, 1, 10000000, [Int8])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 100000000;
			if ( MathFunctions.abs(reg - value) <= 10000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 347:
			expStr = "mini(i, 1, 10000000, [Int8])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -100000000;
			if ( MathFunctions.abs(reg - value) <= 10000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 348:
			expStr = "maxi(i, 1, 10000000, [Int9])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1000000000;
			if ( MathFunctions.abs(reg - value) <= 100000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 349:
			expStr = "mini(i, 1, 10000000, [Int9])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -1000000000;
			if ( MathFunctions.abs(reg - value) <= 100000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 350:
			expStr = "maxi(i, 1, 10000000, [Int])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2147483647;
			if ( MathFunctions.abs(reg - value) <= 214748 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 351:
			expStr = "mini(i, 1, 10000000, [Int])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -2147483648;
			if ( MathFunctions.abs(reg - value) <= 214748 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 352:
			expStr = "maxi(i, 1, 100000, [nat1])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 353:
			expStr = "mini(i, 1, 100000, [nat1])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 354:
			expStr = "maxi(i, 1, 100000, [nat2])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 100;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 355:
			expStr = "mini(i, 1, 100000, [nat2])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 356:
			expStr = "maxi(i, 1, 100000, [nat3])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1000;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 357:
			expStr = "mini(i, 1, 100000, [nat3])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 358:
			expStr = "maxi(i, 1, 1000000, [nat3])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1000;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 359:
			expStr = "mini(i, 1, 1000000, [nat3])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 360:
			expStr = "maxi(i, 1, 10000000, [nat4])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10000;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 361:
			expStr = "mini(i, 1, 10000000, [nat4])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 362:
			expStr = "maxi(i, 1, 10000000, [nat5])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 100000;
			if ( MathFunctions.abs(reg - value) <= 5 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 363:
			expStr = "mini(i, 1, 10000000, [nat5])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 5 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 364:
			expStr = "maxi(i, 1, 10000000, [nat6])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1000000;
			if ( MathFunctions.abs(reg - value) <= 50 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 365:
			expStr = "mini(i, 1, 10000000, [nat6])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 50 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 366:
			expStr = "maxi(i, 1, 10000000, [nat7])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10000000;
			if ( MathFunctions.abs(reg - value) <= 500 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 367:
			expStr = "mini(i, 1, 10000000, [nat7])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 500 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 368:
			expStr = "maxi(i, 1, 10000000, [nat8])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 100000000;
			if ( MathFunctions.abs(reg - value) <= 5000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 369:
			expStr = "mini(i, 1, 10000000, [nat8])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 5000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 370:
			expStr = "maxi(i, 1, 10000000, [nat9])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1000000000;
			if ( MathFunctions.abs(reg - value) <= 50000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 371:
			expStr = "mini(i, 1, 10000000, [nat9])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 50000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 372:
			expStr = "maxi(i, 1, 10000000, [nat])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2147483647;
			if ( MathFunctions.abs(reg - value) <= 112374 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 373:
			expStr = "mini(i, 1, 10000000, [nat])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 112374 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 374:
			expStr = "maxi(i, 1, 100000, [Nat1])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 375:
			expStr = "mini(i, 1, 100000, [Nat1])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 376:
			expStr = "maxi(i, 1, 100000, [Nat2])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 100;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 377:
			expStr = "mini(i, 1, 100000, [Nat2])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 378:
			expStr = "maxi(i, 1, 100000, [Nat3])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1000;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 379:
			expStr = "mini(i, 1, 100000, [Nat3])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 380:
			expStr = "maxi(i, 1, 1000000, [Nat3])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1000;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 381:
			expStr = "mini(i, 1, 1000000, [Nat3])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 382:
			expStr = "maxi(i, 1, 10000000, [Nat4])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10000;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 383:
			expStr = "mini(i, 1, 10000000, [Nat4])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) < 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 384:
			expStr = "maxi(i, 1, 10000000, [Nat5])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 100000;
			if ( MathFunctions.abs(reg - value) <= 5 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 385:
			expStr = "mini(i, 1, 10000000, [Nat5])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 5 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 386:
			expStr = "maxi(i, 1, 10000000, [Nat6])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1000000;
			if ( MathFunctions.abs(reg - value) <= 50 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 387:
			expStr = "mini(i, 1, 10000000, [Nat6])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 50 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 388:
			expStr = "maxi(i, 1, 10000000, [Nat7])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10000000;
			if ( MathFunctions.abs(reg - value) <= 500 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 389:
			expStr = "mini(i, 1, 10000000, [Nat7])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 500 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 390:
			expStr = "maxi(i, 1, 10000000, [Nat8])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 100000000;
			if ( MathFunctions.abs(reg - value) <= 5000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 391:
			expStr = "mini(i, 1, 10000000, [Nat8])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 5000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 392:
			expStr = "maxi(i, 1, 10000000, [Nat9])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1000000000;
			if ( MathFunctions.abs(reg - value) <= 50000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 393:
			expStr = "mini(i, 1, 10000000, [Nat9])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 50000 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 394:
			expStr = "maxi(i, 1, 10000000, [Nat])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2147483647;
			if ( MathFunctions.abs(reg - value) <= 112374 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 395:
			expStr = "mini(i, 1, 10000000, [Nat])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 112374 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 396:
			expStr = "int( pUni(x, -1, 3), x, -1, 3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 397:
			x = new Argument("x = rUni(-1, 3)");
			expStr = "der( cUni(x, -1, 3), x) - pUni(x, -1, 3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 398:
			x = new Argument("x = rUni(-1, 3)");
			expStr = "x - qUni( cUni(x, -1, 3), -1, 3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 399:
			expStr = "mini(i, 1, 1000000, rUni(-1, 3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -1;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 400:
			expStr = "maxi(i, 1, 1000000, rUni(-1, 3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 401:
			expStr = "mini(i, 1, 1000000, pUni( rUni(-10, 10), -1, 3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 402:
			expStr = "maxi(i, 1, 1000000, pUni( rUni(-10, 10), -1, 3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0 / 4.0;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 403:
			expStr = "mini(i, 1, 1000000, cUni( rUni(-10, 10), -1, 3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 404:
			expStr = "maxi(i, 1, 1000000, cUni( rUni(-10, 10), -1, 3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 405:
			x = new Argument("x = rUni(-2,4)");
			y = new Argument("y = rUni(-2,4)");
			expStr = "cUni( min(x, y), -1, 3) <= cUni( max(x, y), -1, 3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x, y);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 406:
			expStr = "round(2.2, 0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 407:
			expStr = "round(2.6, 0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 408:
			expStr = "round(2.66, 1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2.7;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 409:
			expStr = "round(2.123456, 5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2.12346;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 410:
			expStr = "avg(i, 1, 1000000, [Nor])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 411:
			expStr = "stdi(i, 1, 1000000, [Nor])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 412:
			expStr = "vari(i, 1, 1000000, [Nor])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 413:
			expStr = "avg(i, 1, 1000000, rNor(1,5) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 414:
			expStr = "stdi(i, 1, 1000000, rNor(3,3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 415:
			expStr = "vari(i, 1, 1000000, rNor(-10, 5) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 25;
			if ( MathFunctions.abs(reg - value) <= 0.2 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 416:
			expStr = "int( pNor(x, 0, 1), x, -10, 0.5) - cNor( 0.5, 0, 1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 417:
			x = new Argument("x = 0.5");
			expStr = "der( cNor(x, 1, 2), x) - pNor(x, 1, 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 418:
			expStr = "int( pNor(x, 1, 2), x, 0.5, 1.5) - ( cNor(1.5, 1, 2) - cNor(0.5, 1, 2) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 419:
			x = new Argument("x = [Nor]");
			expStr = "pNor(x, 0, 1) - pNor(-x, 0, 1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 420:
			x = new Argument("x = [Uni]");
			expStr = "cNor(2-x, 2, 2) - ( 1 - cNor(2+x, 2, 2) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 421:
			x = new Argument("x = [Nor]");
			expStr = "qNor(0.5, -4, 5) + 4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 422:
			x = new Argument("x = rUni(-10,10)");
			y = new Argument("y = rUni(-10,10)");
			expStr = "cNor( min(x, y), -1, 3) <= cNor( max(x, y), -1, 3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x, y);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.002 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 423:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * Information & help: wolfram.com/raspi
			 *
			 * In[5]:= SetPrecision[Sum[ExpIntegralEi[x], {x, 0.01, 10, 0.01}], 20]
			 * Out[5]= 290933.27886809571646
			 */
			expStr = "290933.27886809571646 - sum(x, 0.01, 10, Ei(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 424:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * Information & help: wolfram.com/raspi
			 *
			 * In[12]:= SetPrecision[Sum[ExpIntegralEi[x], {x, -10, -0.01, 0.01}], 20]
			 * Out[12]= -97.065869924036363159
			 */
			expStr = "-97.065869924036363159 - sum(x, -10, -0.01, Ei(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.00000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 425:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * Information & help: wolfram.com/raspi
			 *
			 * In[26]:= SetPrecision[Sum[Erf[x], {x, 0, 2, 0.01}], 20]
			 * Out[26]= 144.17558195220803441
			 */
			expStr = "144.17558195220803441 - sum(x, 0, 2, erf(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.00000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 426:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * Information & help: wolfram.com/raspi
			 *
			 * In[27]:= SetPrecision[Sum[Erf[x], {x, -2, 0, 0.01}], 20]
			 * Out[27]= -144.17558195220797757
			 */
			expStr = "-144.17558195220797757 - sum(x, -2, 0, erf(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.00000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 427:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * Information & help: wolfram.com/raspi
			 *
			 * In[37]:= SetPrecision[Sum[Erfc[x], {x, 0, 2, 0.01}], 20]
			 * Out[37]= 56.824418047792065067
			 */
			expStr = "56.824418047792065067 - sum(x, 0, 2, erfc(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.00000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 428:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * Information & help: wolfram.com/raspi
			 *
			 * In[36]:= SetPrecision[Sum[Erfc[x], {x, -2, 0, 0.01}], 20]
			 * Out[36]= 345.17558195220811967
			 */
			expStr = "345.17558195220811967 - sum(x, -2, 0, erfc(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.00000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 429:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * Information & help: wolfram.com/raspi
			 *
			 * In[38]:= SetPrecision[Sum[InverseErf[x], {x, 0, 0.9, 0.01}], 20]
			 * Out[38]= 42.417037259662720317
			 */
			expStr = "42.417037259662720317 - sum(x, 0, 0.9, erfInv(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.00000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 430:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * Information & help: wolfram.com/raspi
			 *
			 * In[39]:= SetPrecision[Sum[InverseErf[x], {x, -0.9, 0, 0.01}], 20]
			 * Out[39]= -42.417037259662699000
			 */
			expStr = "-42.417037259662699000 - sum(x, -0.9, 0, erfInv(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.00000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 431:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * Information & help: wolfram.com/raspi
			 *
			 * In[40]:= SetPrecision[Sum[InverseErfc[x], {x, 0.01, 1, 0.01}], 20]
			 * Out[40]= 55.303894660741931943
			 */
			expStr = "55.303894660741931943 - sum(x, 0.01, 1, erfcInv(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.00000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 432:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * Information & help: wolfram.com/raspi
			 *
			 * In[41]:= SetPrecision[Sum[InverseErfc[x], {x, 1, 1.99, 0.01}], 20]
			 * Out[41]= -55.303894660741946154
			 */
			expStr = "-55.303894660741946154 - sum(x, 1, 1.99, erfcInv(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.00000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 433:
			expStr = "round(2.125, 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2.13;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 434:
			expStr = "round(2.135, 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2.14;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 435:
			expStr = "round(2.145, 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2.15;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 436:
			expStr = "round(3.125, 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3.13;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 437:
			expStr = "round(3.135, 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3.14;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 438:
			expStr = "round(3.145, 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3.15;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 439:
			expStr = "rList(1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 440:
			expStr = "rList(1, 1, 1, 1, 1, 1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 441:
			expStr = "mini(i, 1, 10000, rList(3, 2, 7, 6, 10, 15, 12) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 442:
			expStr = "maxi(i, 1, 10000, rList(3, 2, 7, 6, 10, 15, 12) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 15;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
	}
		if (testResult == true)
			mXparser.consolePrint("OK");
		else
			mXparser.consolePrint("ERROR");
		return testResult;
	}
	private static boolean runTest2(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		String expStr = "";
		switch (testId) {
		case 443:
			mXparser.disableUlpRounding();
			mXparser.setExactComparison();
			expStr = "0.1+0.1+0.1 <> 0.3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 444:
			mXparser.disableUlpRounding();
			mXparser.setEpsilonComparison();;
			expStr = "0.1+0.1+0.1 = 0.3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 445:
			mXparser.enableUlpRounding();
			mXparser.setExactComparison();
			expStr = "0.1+0.1+0.1 = 0.3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 446:
			mXparser.setEpsilon(0.5);
			expStr = "2 < 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 447:
			mXparser.setEpsilon(0.5);
			expStr = "2.5 < 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 448:
			mXparser.setEpsilon(0.5);
			expStr = "2.7 < 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 449:
			mXparser.setEpsilon(0.5);
			expStr = "3 < 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 450:
			mXparser.setEpsilon(0.5);
			expStr = "3.2 < 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 451:
			mXparser.setEpsilon(0.5);
			expStr = "3.5 < 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 452:
			mXparser.setEpsilon(0.5);
			expStr = "4 < 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 453:
			mXparser.setEpsilon(0.5);
			expStr = "2 <= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 454:
			mXparser.setEpsilon(0.5);
			expStr = "2.5 <= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 455:
			mXparser.setEpsilon(0.5);
			expStr = "2.7 <= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 456:
			mXparser.setEpsilon(0.5);
			expStr = "3 <= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 457:
			mXparser.setEpsilon(0.5);
			expStr = "3.2 <= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 458:
			mXparser.setEpsilon(0.5);
			expStr = "3.5 <= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 459:
			mXparser.setEpsilon(0.5);
			expStr = "4 <= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 460:
			mXparser.setEpsilon(0.5);
			expStr = "2 > 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 461:
			mXparser.setEpsilon(0.5);
			expStr = "2.5 > 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 462:
			mXparser.setEpsilon(0.5);
			expStr = "2.7 > 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 463:
			mXparser.setEpsilon(0.5);
			expStr = "3 > 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 464:
			mXparser.setEpsilon(0.5);
			expStr = "3.2 > 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 465:
			mXparser.setEpsilon(0.5);
			expStr = "3.5 > 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 466:
			mXparser.setEpsilon(0.5);
			expStr = "4 > 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 467:
			mXparser.setEpsilon(0.5);
			expStr = "2 >= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 468:
			mXparser.setEpsilon(0.5);
			expStr = "2.5 >= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 469:
			mXparser.setEpsilon(0.5);
			expStr = "2.7 >= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 470:
			mXparser.setEpsilon(0.5);
			expStr = "3 >= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 471:
			mXparser.setEpsilon(0.5);
			expStr = "3.2 >= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 472:
			mXparser.setEpsilon(0.5);
			expStr = "3.5 >= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 473:
			mXparser.setEpsilon(0.5);
			expStr = "4 >= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 474:
			mXparser.setEpsilon(0.5);
			expStr = "2 = 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 475:
			mXparser.setEpsilon(0.5);
			expStr = "2.5 = 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 476:
			mXparser.setEpsilon(0.5);
			expStr = "2.7 = 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 477:
			mXparser.setEpsilon(0.5);
			expStr = "3 = 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 478:
			mXparser.setEpsilon(0.5);
			expStr = "3.2 = 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 479:
			mXparser.setEpsilon(0.5);
			expStr = "3.5 = 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 480:
			mXparser.setEpsilon(0.5);
			expStr = "4 = 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 481:
			mXparser.setEpsilon(0.5);
			expStr = "2 <> 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 482:
			mXparser.setEpsilon(0.5);
			expStr = "2.5 <> 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 483:
			mXparser.setEpsilon(0.5);
			expStr = "2.7 <> 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 484:
			mXparser.setEpsilon(0.5);
			expStr = "3 <> 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 485:
			mXparser.setEpsilon(0.5);
			expStr = "3.2 <> 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 486:
			mXparser.setEpsilon(0.5);
			expStr = "3.5 <> 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 487:
			mXparser.setEpsilon(0.5);
			expStr = "4 <> 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 488:
			mXparser.setExactComparison();
			expStr = "2 < 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 489:
			mXparser.setExactComparison();
			expStr = "3 < 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 490:
			mXparser.setExactComparison();
			expStr = "4 < 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 491:
			mXparser.setExactComparison();
			expStr = "2 <= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 492:
			mXparser.setExactComparison();
			expStr = "3 <= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 493:
			mXparser.setExactComparison();
			expStr = "4 <= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 494:
			mXparser.setExactComparison();
			expStr = "2 > 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 495:
			mXparser.setExactComparison();
			expStr = "3 > 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 496:
			mXparser.setExactComparison();
			expStr = "4 > 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 497:
			mXparser.setExactComparison();
			expStr = "2 >= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 498:
			mXparser.setExactComparison();
			expStr = "3 >= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 499:
			mXparser.setExactComparison();
			expStr = "4 >= 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 500:
			mXparser.setExactComparison();
			expStr = "2 = 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 501:
			mXparser.setExactComparison();
			expStr = "3 = 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 502:
			mXparser.setExactComparison();
			expStr = "4 = 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 503:
			mXparser.setExactComparison();
			expStr = "2 <> 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 504:
			mXparser.setExactComparison();
			expStr = "3 <> 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 505:
			mXparser.setExactComparison();
			expStr = "4 <> 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 506:
			expStr = "ulp(0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.3877787807814457E-17;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 507:
			mXparser.setExactComparison();
			expStr = "sum(i, 1, 3, 0.1) = 0.3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		}
		if (testResult == true)
			mXparser.consolePrint("OK");
		else
			mXparser.consolePrint("ERROR");
		return testResult;
	}

	/**
	 * Runs main regression tests in the field of calculation.
	 *
	 * @return Number of tests with error result.
	 */
	public static int start() {
		int numberOfTests = 506;
		int nOk = 0;
		int nError = 0;
		exp = new Expression[numberOfTests+1];
		boolean[] tests = new boolean[numberOfTests+1];
		boolean test;
        long start =  System.currentTimeMillis();
		for (int testId = 0; testId <= numberOfTests; testId++) {
			mXparser.setEpsilonComparison();
			mXparser.setDefaultEpsilon();
			mXparser.enableUlpRounding();
			if (testId < 443)
				test = runTest1(testId);
			else
				test = runTest2(testId);
			tests[testId] = test;
			if (test == true)
				nOk++;
			else
				nError++;
			if (!exp[testId].checkSyntax())
				mXparser.consolePrintln(exp[testId].getErrorMessage());
			mXparser.consolePrintln(", time: " + exp[testId].getComputingTime() + " s.");
		}
        long end =  System.currentTimeMillis();
		mXparser.consolePrintln("OK : " + nOk + ", ERRORs: " + nError + ", total time: " + (end-start)/1000.0 + " s.");
		for (int testId = 0; testId <= numberOfTests; testId++) {
			if (!tests[testId]) {
				mXparser.consolePrintln("ERROR: " + testId);
				mXparser.consolePrintln(exp[testId].getErrorMessage());
			}
		}
		return nError;
	}
	/**
	 * Runs main regression tests in the field of calculation.
	 *
	 * @param args no parameters are being considered
	 */
	public static void main(String[] args) {
		start();
	}
}
