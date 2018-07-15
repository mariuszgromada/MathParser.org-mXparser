/*
 * @(#)RegTestExpression.java        4.2.0   2018-07-15
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
import org.mariuszgromada.math.mxparser.RecursiveArgument;
import org.mariuszgromada.math.mxparser.mXparser;
import org.mariuszgromada.math.mxparser.mathcollection.BooleanAlgebra;
import org.mariuszgromada.math.mxparser.mathcollection.MathConstants;
import org.mariuszgromada.math.mxparser.mathcollection.MathFunctions;
import org.mariuszgromada.math.mxparser.mathcollection.NumberTheory;

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
 * @version        4.2.0
 *
 * @see Expression
 */
public class RegTestExpression {
	private static Expression[] exp;
	private static boolean runTest_00000_00100(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		double sum = 0;
		String expStr = "";
		Argument x, y, d, n, i, k, m, s, r;
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
		}
		if (testResult == true)
			mXparser.consolePrint("OK");
		else
			mXparser.consolePrint("ERROR");
		return testResult;
	}
	private static boolean runTest_00101_00200(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		boolean syn1;
		double value = 0;
		double reg = 0;
		String expStr = "";
		Argument x, y, n, k, m, t;
		Function f, g, h;
		switch (testId) {
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
			expStr = "pi+e+[gam]+[phi]+[PN]+[B*]+[F'd]+[F'a]+[C2]+[M1]+[B2]+[B4]+[BN'L]+[Kat]+[K*]+[K.]+[B'L]+[RS'm]+[EB'e]+[Bern]+[GKW'l]+[HSM's]+[lm]+[Cah]+[Ll]+[AG]+[L*]+[L.]+[Dz3]+[A3n]+[Bh]+[Pt]+[L2]+[Nv]+[Ks]+[Kh]+[FR]+[La]+[P2]+[Om]+[MRB]+[li2]+[EG]";
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
			expStr = "sinh(ln([phi])) - 0.5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 169:
			expStr = "cosh(ln([phi])) - 0.5*sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 170:
			expStr = "tanh(ln([phi])) - 1/sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 171:
			expStr = "tgh(ln([phi])) - 1/sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 172:
			expStr = "ctanh(ln([phi])) - sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 173:
			expStr = "coth(ln([phi])) - sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 174:
			expStr = "ctgh(ln([phi])) - sqrt(5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 175:
			expStr = "sech(ln([phi])) - 1/(0.5*sqrt(5))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 176:
			expStr = "csch(ln([phi])) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 177:
			expStr = "cosech(ln([phi])) - 2";
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
			expStr = "asinh(0.5) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 189:
			expStr = "arsinh(0.5) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 190:
			expStr = "acosh(0.5*sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 191:
			expStr = "arcosh(0.5*sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 192:
			expStr = "arccosh(0.5*sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 193:
			expStr = "atanh(1/sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 194:
			expStr = "arctanh(1/sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 195:
			expStr = "atgh(1/sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 196:
			expStr = "arctgh(1/sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 197:
			expStr = "actanh(sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 198:
			expStr = "arcctanh(sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 199:
			expStr = "acoth(sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 200:
			expStr = "arcoth(sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
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
	private static boolean runTest_00201_00300(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		String expStr = "";
		Argument x, n, k, m;
		Function f;
		switch (testId) {
		case 201:
			expStr = "arccoth(sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 202:
			expStr = "actgh(sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 203:
			expStr = "arcctgh(sqrt(5)) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 204:
			expStr = "asech(1/(0.5*sqrt(5))) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 205:
			expStr = "arsech(1/(0.5*sqrt(5))) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 206:
			expStr = "arcsech(1/(0.5*sqrt(5))) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 207:
			expStr = "acsch(2) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 208:
			expStr = "arcsch(2) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 209:
			expStr = "arccsch(2) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 210:
			expStr = "acosech(2) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 211:
			expStr = "arcosech(2) - ln([phi])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(value - reg) < 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 212:
			expStr = "arccosech(2) - ln([phi])";
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
			expStr = "2 + 10#7 + 3";
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
			expStr = "p --> q";
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
			expStr = "p <-- q";
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
			expStr = "p <-- q";
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
			expStr = "(p --> q) <-> (~q --> ~p)";
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
			expStr = "( (p --> q) /\\ (q --> r) ) --> (p --> r)";
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
			expStr = "( (p \\/ q) /\\ (p --> r) /\\ (q --> r) ) --> r";
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
			Function IsFactor = new Function("IsFactor", "if( a>b, 0, if( n#a = 0, 1, IsFactor(n, a+1, b) ) )", "n", "a", "b");
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
		}
		if (testResult == true)
			mXparser.consolePrint("OK");
		else
			mXparser.consolePrint("ERROR");
		return testResult;
	}
	private static boolean runTest_00301_00400(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		String expStr = "";
		Argument x;
		switch (testId) {
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
			expStr = "Ei( ln([RS'm]) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) < 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 307:
			expStr = "-e*Ei(-1) - [EG]";
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
			expStr = "sum(x; -11; 11; [gam] + ln(abs(x)) + sum(k, 1, 50, x^k / (k*k!)) - Ei(x), 2)";
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
		}
		if (testResult == true)
			mXparser.consolePrint("OK");
		else
			mXparser.consolePrint("ERROR");
		return testResult;
	}
	private static boolean runTest_00401_00500(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		String expStr = "";
		Argument x, y;
		switch (testId) {
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
		}
		if (testResult == true)
			mXparser.consolePrint("OK");
		else
			mXparser.consolePrint("ERROR");
		return testResult;
	}
	private static boolean runTest_00501_00600(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		String expStr = "";
		switch (testId) {
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
		case 508:
			mXparser.setExactComparison();
			Argument a = new Argument("a");
			Argument b = new Argument("b");
			a.setArgumentValue(1);
			b.setArgumentValue(5);
			expStr = "if(a=6,-b,15)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, a, b);
			value = exp[testId].calculate();
			reg = 15;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 509:
			mXparser.setExactComparison();
			expStr = "5!^2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 14400;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 510:
			mXparser.setExactComparison();
			expStr = "5!-3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 117;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 511:
			mXparser.setExactComparison();
			expStr = "5!+3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 123;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 512:
			mXparser.setExactComparison();
			expStr = "10/5-(5!)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -118;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 513:
			mXparser.setExactComparison();
			expStr = "10/5+(5!)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 122;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 514:
			mXparser.setExactComparison();
			expStr = "10/5+5!";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 122;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 515:
			mXparser.setExactComparison();
			expStr = "1<-2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 516:
			mXparser.setExactComparison();
			expStr = "1e1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 517:
			mXparser.setEpsilonComparison();
			expStr = "100*[%]-1000*[%%]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 518:
			mXparser.setEpsilonComparison();
			expStr = "[Y]-[sept]+( [Y]/[Z]-1000 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 519:
			mXparser.setEpsilonComparison();
			expStr = "[Z]-[sext]+( [Z]/[E]-1000 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 520:
			mXparser.setEpsilonComparison();
			expStr = "[E]-[quint]+( [E]/[P]-1000 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 521:
			mXparser.setEpsilonComparison();
			expStr = "[P]-[quad]+( [P]/[T]-1000 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 522:
			mXparser.setEpsilonComparison();
			expStr = "[T]-[tril]+( [T]/[G]-1000 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 523:
			mXparser.setEpsilonComparison();
			expStr = "[G]-[bil]+( [G]/[M]-1000 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 524:
			mXparser.setEpsilonComparison();
			expStr = "[M]-[mil]+( [M]/[k]-1000 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 525:
			mXparser.setEpsilonComparison();
			expStr = "[k]-[th]+( [k]/[hecto]-10 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 526:
			mXparser.setEpsilonComparison();
			expStr = "[hecto]-[hund]+( [hecto]/[deca]-10 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 527:
			mXparser.setEpsilonComparison();
			expStr = "[deca]-[ten]+( [deca]-10 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 528:
			mXparser.setEpsilonComparison();
			expStr = "[deci]^2-[%]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 529:
			mXparser.setEpsilonComparison();
			expStr = "[deci]/[centi]-10";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 530:
			mXparser.setEpsilonComparison();
			expStr = "[centi]/[milli]-10";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 531:
			mXparser.setEpsilonComparison();
			expStr = "[milli]/[mic]-1000";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 532:
			mXparser.setEpsilonComparison();
			expStr = "[mic]/[n]-1000";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 533:
			mXparser.setEpsilonComparison();
			expStr = "[n]/[p]-1000";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 534:
			mXparser.setEpsilonComparison();
			expStr = "[p]/[f]-1000";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 535:
			mXparser.setEpsilonComparison();
			expStr = "[f]/[a]-1000";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 536:
			mXparser.setEpsilonComparison();
			expStr = "[a]/[z]-1000";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 537:
			mXparser.setEpsilonComparison();
			expStr = "[z]/[y]-1000";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 538:
			mXparser.setEpsilonComparison();
			expStr = "1000*[m]-[km]+(10*[mm]-[cm])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 539:
			mXparser.setEpsilonComparison();
			expStr = "([inch]-2.54*[cm])+([ft]-0.3048*[m])+([yd]-0.9144*[m])+([mile]-1.609344*[km])+([nmi]-1.852*[km])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 540:
			mXparser.setEpsilonComparison();
			expStr = "[m2]-100*[cm]*100*[cm]+[m2]-10000*[cm2]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 541:
			mXparser.setEpsilonComparison();
			expStr = "[cm2]-10*[mm]*10*[mm]+[cm2]-100*[mm2]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 542:
			mXparser.setEpsilonComparison();
			expStr = "[are]-10*[m]*10*[m]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 543:
			mXparser.setEpsilonComparison();
			expStr = "[ha]-100*[m]*100*[m]+[ha]-100*[are]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 544:
			mXparser.setEpsilonComparison();
			expStr = "[acre]-66*[ft]*660*[ft]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 545:
			mXparser.setEpsilonComparison();
			expStr = "[km2]-100*[ha]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 546:
			mXparser.setEpsilonComparison();
			expStr = "[cm3]-10*[mm]*10*[mm]*10*[mm]+[cm3]-1000*[mm3]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 547:
			mXparser.setEpsilonComparison();
			expStr = "[m3]-1000*[l]+[m3]-[m]*[m]*[m]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 548:
			mXparser.setEpsilonComparison();
			expStr = "[km3]-[bil]*[m3]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 549:
			mXparser.setEpsilonComparison();
			expStr = "[l]-[th]*[ml]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 550:
			mXparser.setEpsilonComparison();
			expStr = "[gall]-3.78541178*[l]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 551:
			mXparser.setEpsilonComparison();
			expStr = "[pint]-473.176473*[ml]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 552:
			mXparser.setEpsilonComparison();
			expStr = "[min]-60*[s]+[h]-60*[min]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 553:
			mXparser.setEpsilonComparison();
			expStr = "[day]-24*[h]+[week]-7*[day]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 554:
			mXparser.setEpsilonComparison();
			expStr = "[yearj]-365.25*[day]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 555:
			mXparser.setEpsilonComparison();
			expStr = "[kg]-1000*[gr]+[kg]-100*[dag]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 556:
			mXparser.setEpsilonComparison();
			expStr = "[dag]-10*[gr]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 557:
			mXparser.setEpsilonComparison();
			expStr = "[gr]-[th]*[mg]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 558:
			mXparser.setEpsilonComparison();
			expStr = "[t]-1000*[kg]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 559:
			mXparser.setEpsilonComparison();
			expStr = "[oz]-28.3495231*[gr]+[lb]-453.59237*[gr]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 560:
			mXparser.setEpsilonComparison();
			expStr = "[b]-1+[kb]/[b]-1024";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 561:
			mXparser.setEpsilonComparison();
			expStr = "( [Mb]/[kb]-1024 ) + ( [Gb]/[Mb]-1024 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 562:
			mXparser.setEpsilonComparison();
			expStr = "( [Tb]/[Gb]-1024 ) + ( [Pb]/[Tb]-1024 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 563:
			mXparser.setEpsilonComparison();
			expStr = "( [Eb]/[Pb]-1024 ) + ( [Zb]/[Eb]-1024 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 564:
			mXparser.setEpsilonComparison();
			expStr = "[Yb]/[Zb]-1024";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 565:
			mXparser.setEpsilonComparison();
			expStr = "[B]-8*[b]+[kB]/[B]-1024";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 566:
			mXparser.setEpsilonComparison();
			expStr = "( [MB]/[kB]-1024 ) + ( [GB]/[MB]-1024 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 567:
			mXparser.setEpsilonComparison();
			expStr = "( [TB]/[GB]-1024 ) + ( [PB]/[TB]-1024 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 568:
			mXparser.setEpsilonComparison();
			expStr = "( [EB]/[PB]-1024 ) + ( [ZB]/[EB]-1024 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 569:
			mXparser.setEpsilonComparison();
			expStr = "[YB]/[ZB]-1024";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 570:
			mXparser.setEpsilonComparison();
			expStr = "[J] - ( [kg]*[m2] ) / ( [s]*[s] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 571:
			mXparser.setEpsilonComparison();
			expStr = "[eV]-1.60217662*[a]*[deci]*[J]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 572:
			mXparser.setEpsilonComparison();
			expStr = "( [keV]/[eV]-1000 ) + ( [MeV]/[keV]-1000 ) + ( [GeV]/[MeV]-1000 ) + ( [TeV]/[GeV]-1000 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 573:
			mXparser.setEpsilonComparison();
			expStr = "[m/s] - ([m]/[s])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 574:
			mXparser.setEpsilonComparison();
			expStr = "[km/h] - ([km]/[h])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 575:
			mXparser.setEpsilonComparison();
			expStr = "[mi/h] - ([mile]/[h])";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 576:
			mXparser.setEpsilonComparison();
			expStr = "[knot] - 0.514444444*[m/s]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 577:
			mXparser.setEpsilonComparison();
			expStr = "[m/s2]-[m]/([s]^2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 578:
			mXparser.setEpsilonComparison();
			expStr = "[km/h2]-[km]/[h]^2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 579:
			mXparser.setEpsilonComparison();
			expStr = "[mi/h2]-[mile]/[h]^2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 580:
			mXparser.setEpsilonComparison();
			expStr = "2*pi*[rad]-360*[deg]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 581:
			mXparser.setEpsilonComparison();
			expStr = "( [deg]/[']-60 ) + ( [']/[''] - 60 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 582:
			mXparser.setEpsilonComparison();
			expStr = "[c] - 299792458*[m]/[s]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 583:
			mXparser.setEpsilonComparison();
			expStr = "[hP] - [h-]*2*pi";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 584:
			mXparser.setEpsilonComparison();
			expStr = "( [lP] - 1.616229*[y]*[p]*10*[m]) + ( [mP] - 2.176470*[n]*10*[kg] ) + ( [tP] - 5.39116*[y]*[z]*10*[s] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 585:
			mXparser.setEpsilonComparison();
			expStr = "[ly]-[c]*[yearj]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 586:
			mXparser.setEpsilonComparison();
			expStr = "[pc]/(3.08567758*[P]*10*[m])-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 587:
			mXparser.setEpsilonComparison();
			expStr = "[kpc]/[pc]-1000";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 588:
			mXparser.setEpsilonComparison();
			expStr = "( [Earth-R-eq]-[Earth-R-po] ) / ( 6378.1370*[km]-6356.7523*[km] ) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 589:
			mXparser.setEpsilonComparison();
			expStr = "( ( [G.] * [Earth-M] ) / [Earth-R]^2 ) / [g] - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 590:
			mXparser.setEpsilonComparison();
			expStr = "( ( [G.] * [Solar-M] ) / [Solar-R]^2 ) / ( 28.2*[g] ) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 591:
			mXparser.setEpsilonComparison();
			expStr = "( ( [G.] * [Mercury-M] ) / [Mercury-R]^2 ) / ( 0.38*[g] ) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 592:
			mXparser.setEpsilonComparison();
			expStr = "( ( [G.] * [Venus-M] ) / [Venus-R]^2 ) / ( 0.904*[g] ) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 593:
			mXparser.setEpsilonComparison();
			expStr = "( ( [G.] * [Moon-M] ) / [Moon-R]^2 ) / ( 0.1654*[g] ) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 594:
			mXparser.setEpsilonComparison();
			expStr = "( ( [G.] * [Mars-M] ) / [Mars-R]^2 ) / ( 0.376*[g] ) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 595:
			mXparser.setEpsilonComparison();
			expStr = "( ( [G.] * [Jupiter-M] ) / [Jupiter-R]^2 ) / ( 2.527876492*[g] ) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.1 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 596:
			mXparser.setEpsilonComparison();
			expStr = "( ( [G.] * [Saturn-M] ) / [Saturn-R]^2 ) / ( 1.065*[g] ) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.1 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 597:
			mXparser.setEpsilonComparison();
			expStr = "( ( [G.] * [Uranus-M] ) / [Uranus-R]^2 ) / ( 0.886*[g] ) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.1 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 598:
			mXparser.setEpsilonComparison();
			expStr = "( ( [G.] * [Neptune-M] ) / [Neptune-R]^2 ) / ( 1.14*[g] ) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 599:
			mXparser.setEpsilonComparison();
			expStr = "[Earth-D]/[au]-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 600:
			mXparser.setEpsilonComparison();
			expStr = "[Mercury-D] / ( 57909050*[km] )-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
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
	private static boolean runTest_00601_00700(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		String expStr = "";
		Function ff;
		switch (testId) {
		case 601:
			mXparser.setEpsilonComparison();
			expStr = "[Venus-D] / ( 108208000*[km] )-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 602:
			mXparser.setEpsilonComparison();
			expStr = "[Mars-D] / ( 1.523679*[au] )-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 603:
			mXparser.setEpsilonComparison();
			expStr = "[Jupiter-D] / ( 5.20260*[au] )-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 604:
			mXparser.setEpsilonComparison();
			expStr = "[Saturn-D] / ( 1.429*[bil]*[km] )-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 605:
			mXparser.setEpsilonComparison();
			expStr = "[Uranus-D] / ( 19.2184*[au] )-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 606:
			mXparser.setEpsilonComparison();
			expStr = "[Neptune-D] / ( 30.110387*[au] )-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 607:
			mXparser.setEpsilonComparison();
			expStr = "@~100";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = ~((long)(100.0));
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 608:
			mXparser.setEpsilonComparison();
			expStr = "-100 @^ 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = ((long)(-100.0)) ^ ((long)(2.0));
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 609:
			mXparser.setEpsilonComparison();
			expStr = "-100 @| 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = ((long)(-100.0)) | ((long)(2.0));
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 610:
			mXparser.setEpsilonComparison();
			expStr = "-100 @& 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = ((long)(-100.0)) & ((long)(2.0));
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 611:
			mXparser.setEpsilonComparison();
			expStr = "-100 @>> 4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = ((long)(-100.0)) >> ((int)(4.0));
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 612:
			mXparser.setEpsilonComparison();
			expStr = "-100 @<< 4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = ((long)(-100.0)) << ((int)(4.0));
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 613:
			mXparser.setEpsilonComparison();
			expStr = "pi+1.23e-10";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = MathConstants.PI + 1.23e-10;
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 614:
			mXparser.setEpsilonComparison();
			expStr = "sin(pi+1.23e-10)+e^1.1e1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = MathFunctions.sin(MathConstants.PI + 1.23e-10)+MathFunctions.power(MathConstants.E, 1.1e1);
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 615:
			mXparser.setEpsilonComparison();
			expStr = "2e-2+2E+2+3.1e4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2e-2+2E+2+3.1e4;
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 616:
			mXparser.setEpsilonComparison();
			expStr = "123.34344e-16*0.00001E-2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 123.34344e-16*0.00001E-2;
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 617:
			mXparser.setEpsilonComparison();
			expStr = "-123.34344e-16*(-0.00001E-2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -123.34344e-16*(-0.00001E-2);
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 618:
			mXparser.setEpsilonComparison();
			ff = new Function("ff", new FunExt());
			expStr = "5*6-ff(5,6)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, ff);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 619:
			mXparser.setEpsilonComparison();
			expStr = "solve(2*x-4, x, -10, 10)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 620:
			mXparser.setEpsilonComparison();
			Argument x = new Argument("x=0");
			expStr = "solve( der(sin(x), x), x, 0, pi )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = MathConstants.PI / 2.0;
			if ( MathFunctions.abs(reg - value) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 621:
			mXparser.setEpsilonComparison();
			expStr = "solve( sin(x), x, -pi-1, 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			if
				( 	( MathFunctions.abs(-MathConstants.PI - value) <= 0.000001 ) ||
					( MathFunctions.abs(0 - value) <= 0.000001 )	)
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + 0 + " or " + (MathConstants.PI) + " --> ");
			break;
		case 622:
			mXparser.setEpsilonComparison();
			expStr = "if( [true] && ([false] || ([false] && [true])) = [false], 1, 0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 623:
			mXparser.setEpsilonComparison();
			expStr = "if( isNaN(3/0) = [true], 1, 0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 624:
			mXparser.setEpsilonComparison();
			expStr = "if( isNaN(3/1) = [false], 1, 0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 625:
			mXparser.setEpsilonComparison();
			expStr = "if( isNaN([NaN]) = [true], 1, 0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 626:
			mXparser.setEpsilonComparison();
			expStr = "coalesce( 1, 2, 3 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 627:
			mXparser.setEpsilonComparison();
			expStr = "coalesce( [NaN], 2, 3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 628:
			mXparser.setEpsilonComparison();
			expStr = "coalesce( [NaN], [NaN], 3, 5, 6)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 3;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 629:
			mXparser.setEpsilonComparison();
			expStr = "coalesce( [NaN], 3/0, [NaN], 5, 6)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 5;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 630:
			mXparser.setEpsilonComparison();
			expStr = "coalesce( [NaN], 3/0, [NaN], 5/0, 6)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 6;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 631:
			mXparser.setEpsilonComparison();
			expStr = "if( isNaN( coalesce( [NaN], 3/0, [NaN], 5/0, [NaN]) ) = [true], 1, 0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 632:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 2*y");
			Argument y = new Argument("y = 2*x");
			x.addDefinitions(y);
			y.addDefinitions(x);
			expStr = "x+y";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x, y);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 633:
			mXparser.setEpsilonComparison();
			Function f = new Function("f(x) = 2*g(x)");
			Function g = new Function("g(x) = 2*f(x)");
			f.addDefinitions(g);
			g.addDefinitions(f);
			expStr = "f(1)+g(1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f, g);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 634:
			mXparser.setEpsilonComparison();
			f = new Function("f(n) = f(n-1)");
			expStr = "f(10)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 635:
			mXparser.setEpsilonComparison();
			x = new Argument("x = x + 2");
			x.addDefinitions(x);
			expStr = "x-3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 636:
			mXparser.setEpsilonComparison();
			y = new Argument("y = 2");
			x = new Argument("x = 2*y + x");
			f = new Function("f(x) = 2*g(x)+y");
			g = new Function("g(x) = 2*f(x)+x+y");
			x.addDefinitions(x, y);
			f.addDefinitions(g, y);
			g.addDefinitions(f, y);
			expStr = "2*sin(x)+2*x-3*y+f(x)-g(y)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x, y, f, g);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 637:
			mXparser.setEpsilonComparison();
			expStr = "00000001";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 00000001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 638:
			mXparser.setEpsilonComparison();
			expStr = "-00000001";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -00000001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 639:
			mXparser.setEpsilonComparison();
			expStr = "+00000001";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = +00000001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 640:
			mXparser.setEpsilonComparison();
			expStr = "00000001.001";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 00000001.001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 641:
			mXparser.setEpsilonComparison();
			expStr = "-00000001.0002";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -00000001.0002;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 642:
			mXparser.setEpsilonComparison();
			expStr = "+00000001.123";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = +00000001.123;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 643:
			mXparser.setEpsilonComparison();
			expStr = "00000001.001e001";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 00000001.001e001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 644:
			mXparser.setEpsilonComparison();
			expStr = "-00000001.0002e0002";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -00000001.0002e0002;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 645:
			mXparser.setEpsilonComparison();
			expStr = "+00000001.123e004";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = +00000001.123e004;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 646:
			mXparser.setEpsilonComparison();
			expStr = "00000001.001e+001";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 00000001.001e+001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 647:
			mXparser.setEpsilonComparison();
			expStr = "-00000001.0002e+0002";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -00000001.0002e+0002;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 648:
			mXparser.setEpsilonComparison();
			expStr = "+00000001.123e+004";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = +00000001.123e+004;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 649:
			mXparser.setEpsilonComparison();
			expStr = "00000001.001e-001";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 00000001.001e-001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 650:
			mXparser.setEpsilonComparison();
			expStr = "-00000001.0002e-0002";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -00000001.0002e-0002;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 651:
			mXparser.setEpsilonComparison();
			expStr = "+00000001.123e-004";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = +00000001.123e-004;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 652:
			mXparser.setEpsilonComparison();
			expStr = "+000001.001e+0000000";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = +000001.001e+0000000;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 653:
			mXparser.setEpsilonComparison();
			expStr = "00000001-(-00000001)+(+00000001)-00000001.001-(-00000001.0002)-(+00000001.123)+00000001.001e001+(-00000001.0002e0002)-(+00000001.123e004)-00000001.001e+001+00000001.0002e+0002+(+00000001.123e+004)-00000001.001e-001-(-00000001.0002e-0002)-(+00000001.123e-004)-(+00000001.123e-004)-(+000001.001e+0000000)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 00000001-(-00000001)+(+00000001)-00000001.001-(-00000001.0002)-(+00000001.123)+00000001.001e001+(-00000001.0002e0002)-(+00000001.123e004)-00000001.001e+001+00000001.0002e+0002+(+00000001.123e+004)-00000001.001e-001-(-00000001.0002e-0002)-(+00000001.123e-004)-(+00000001.123e-004)-(+000001.001e+0000000);
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 654:
			mXparser.setEpsilonComparison();
			expStr = "2%";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.02;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 655:
			mXparser.setEpsilonComparison();
			expStr = "-2%";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -0.02;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 656:
			mXparser.setEpsilonComparison();
			expStr = "100%+2%";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.02;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 657:
			mXparser.setEpsilonComparison();
			expStr = "100%-2%";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.98;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 658:
			mXparser.setEpsilonComparison();
			expStr = "((1%)%)%";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.000001;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 659:
			mXparser.setEpsilonComparison();
			expStr = "2!+(3!)%";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2.06;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 660:
			mXparser.setEpsilonComparison();
			expStr = "2*[%]-2%";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 661:
			mXparser.setEpsilonComparison();
			mXparser.setToOverrideBuiltinTokens();
			Function sin = new Function("sin(x,y) = 2*x + y");
			Argument ee = new Argument("e = 5");
			Constant pi = new Constant("pi = 2");
			expStr = "sin(e,pi)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, sin, ee, pi);
			value = exp[testId].calculate();
			reg = 12;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 662:
			mXparser.setEpsilonComparison();
			expStr = "or( [false] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setNotToOverrideBuiltinTokens();
			break;
		case 663:
			mXparser.setEpsilonComparison();
			expStr = "or( [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 664:
			mXparser.setEpsilonComparison();
			expStr = "or( [NaN] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 665:
			mXparser.setEpsilonComparison();
			expStr = "or( [false], 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 666:
			mXparser.setEpsilonComparison();
			expStr = "or( [false], [NaN] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 667:
			mXparser.setEpsilonComparison();
			expStr = "or( [false], 0, 0, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 668:
			mXparser.setEpsilonComparison();
			expStr = "or( [false], 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 669:
			mXparser.setEpsilonComparison();
			expStr = "or( 1, 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 670:
			mXparser.setEpsilonComparison();
			expStr = "or( 0, 1, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 671:
			mXparser.setEpsilonComparison();
			expStr = "or( 1, 2, 3, 4, [true], -10, -0.5, 2, 0.01 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 672:
			mXparser.setEpsilonComparison();
			expStr = "and( [false] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 673:
			mXparser.setEpsilonComparison();
			expStr = "and( [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 674:
			mXparser.setEpsilonComparison();
			expStr = "and( [NaN] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 675:
			mXparser.setEpsilonComparison();
			expStr = "and( [false], 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 676:
			mXparser.setEpsilonComparison();
			expStr = "and( [false], [NaN] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 677:
			mXparser.setEpsilonComparison();
			expStr = "and( [false], 0, 0, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 678:
			mXparser.setEpsilonComparison();
			expStr = "and( [false], 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 679:
			mXparser.setEpsilonComparison();
			expStr = "and( 1, 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 680:
			mXparser.setEpsilonComparison();
			expStr = "and( 0, 1, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 681:
			mXparser.setEpsilonComparison();
			expStr = "and( 1, 2, 3, 4, [true], -10, -0.5, 2, 0.01 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 682:
			mXparser.setEpsilonComparison();
			expStr = "xor( [false] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 683:
			mXparser.setEpsilonComparison();
			expStr = "xor( [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 684:
			mXparser.setEpsilonComparison();
			expStr = "xor( [NaN] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 685:
			mXparser.setEpsilonComparison();
			expStr = "xor( [false], 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 686:
			mXparser.setEpsilonComparison();
			expStr = "xor( [false], [NaN] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 687:
			mXparser.setEpsilonComparison();
			expStr = "xor( [false], 0, 0, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 688:
			mXparser.setEpsilonComparison();
			expStr = "xor( [false], 0, [NaN], 0, 0, [false], 0, 0, 0, 0, 0, 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = Double.NaN;
			if ( Double.isNaN(value) )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 689:
			mXparser.setEpsilonComparison();
			expStr = "xor( 1, 0, [false], 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.TRUE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 690:
			mXparser.setEpsilonComparison();
			expStr = "xor( 0, 1, 1, 0, 0, [false], 0, 0, 0, 0, 0, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 691:
			mXparser.setEpsilonComparison();
			expStr = "xor( 1, 2, 3, 4, [true], -10, -0.5, 2, 0.01 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = BooleanAlgebra.FALSE;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 692:
			mXparser.setEpsilonComparison();
			expStr = "-b1.+0+b1.-2*B1.";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 693:
			mXparser.setEpsilonComparison();
			expStr = "(-b1.111+3)-B1.111+3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 694:
			mXparser.setEpsilonComparison();
			expStr = "(-b2.101+5)-B2.00101+5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 695:
			mXparser.setEpsilonComparison();
			expStr = "(-b3.121+16)-B3.00121+16";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 696:
			mXparser.setEpsilonComparison();
			expStr = "(-b4.123+27)-B4.00123+27";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 697:
			mXparser.setEpsilonComparison();
			expStr = "(-b5.341+96)-B5.00341+96";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 698:
			mXparser.setEpsilonComparison();
			expStr = "(-b6.352+140)-B6.00352+140";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 699:
			mXparser.setEpsilonComparison();
			expStr = "(-b7.256+139)-B7.00256+139";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 700:
			mXparser.setEpsilonComparison();
			expStr = "(-b8.376+254)-B8.00376+254";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
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
	private static boolean runTest_00701_00800(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		String expStr = "";
		switch (testId) {
		case 701:
			mXparser.setEpsilonComparison();
			expStr = "(-o.376+254)-O.00376+254";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 702:
			mXparser.setEpsilonComparison();
			expStr = "(-b.101+5)-B.00101+5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 703:
			mXparser.setEpsilonComparison();
			expStr = "(-b9.821+667)-B9.00821+667";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 704:
			mXparser.setEpsilonComparison();
			expStr = "(-b10.394+394)-B10.00394+394";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 705:
			mXparser.setEpsilonComparison();
			expStr = "(-b11.3A7+480)-B11.003a7+480";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 706:
			mXparser.setEpsilonComparison();
			expStr = "(-b12.A5B+1511)-B12.00a5b+1511";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 707:
			mXparser.setEpsilonComparison();
			expStr = "(-b13.ACB+1857)-B13.00acb+1857";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 708:
			mXparser.setEpsilonComparison();
			expStr = "(-b14.2AD+545)-B14.002ad+545";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 709:
			mXparser.setEpsilonComparison();
			expStr = "(-b15.BE4+2689)-B15.00be4+2689";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 710:
			mXparser.setEpsilonComparison();
			expStr = "(-b16.FA2+4002)-B16.00fa2+4002";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 711:
			mXparser.setEpsilonComparison();
			expStr = "(-h.FA2+4002)-H.00fa2+4002";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 712:
			mXparser.setEpsilonComparison();
			expStr = "(-b17.AG6+3168)-B17.00ag6+3168";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 713:
			mXparser.setEpsilonComparison();
			expStr = "(-b18.FGH+5165)-B18.00fgh+5165";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 714:
			mXparser.setEpsilonComparison();
			expStr = "(-b19.2I3+1067)-B19.002i3+1067";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 715:
			mXparser.setEpsilonComparison();
			expStr = "(-b20.9CJ+3859)-B20.009cj+3859";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 716:
			mXparser.setEpsilonComparison();
			expStr = "(-b21.K5F+8940)-B21.00k5f+8940";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 717:
			mXparser.setEpsilonComparison();
			expStr = "(-b22.FL5+7727)-B22.00fl5+7727";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 718:
			mXparser.setEpsilonComparison();
			expStr = "(-b23.1AM+781)-B23.001am+781";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 719:
			mXparser.setEpsilonComparison();
			expStr = "(-b24.5ND+3445)-B24.005nd+3445";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 720:
			mXparser.setEpsilonComparison();
			expStr = "(-b25.5ND5C+2320762)-B25.005nd5c+2320762";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 721:
			mXparser.setEpsilonComparison();
			expStr = "(-b26.3KPB5+1739639)-B26.003kpb5+1739639";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 722:
			mXparser.setEpsilonComparison();
			expStr = "(-b27.IQH67+10090258)-B27.00iqh67+10090258";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 723:
			mXparser.setEpsilonComparison();
			expStr = "(-b28.RKHB2+17048390)-B28.00rkhb2+17048390";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 724:
			mXparser.setEpsilonComparison();
			expStr = "(-b29.8BIFS+5942128)-B29.008bifs+5942128";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 725:
			mXparser.setEpsilonComparison();
			expStr = "(-b30.2TGJB+2417981)-B30.002tgjb+2417981";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 726:
			mXparser.setEpsilonComparison();
			expStr = "(-b31.6PUC0+6315103)-B31.006puc0+6315103";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 727:
			mXparser.setEpsilonComparison();
			expStr = "(-b32.C0PV0+12609504)-B32.00c0pv0+12609504";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 728:
			mXparser.setEpsilonComparison();
			expStr = "(-b33.V000W+36763583)-B33.00v000w+36763583";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 729:
			mXparser.setEpsilonComparison();
			expStr = "(-b34.NP2XW+31721794)-B34.00np2xw+31721794";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 730:
			mXparser.setEpsilonComparison();
			expStr = "(-b35.120Y0+1587565)-B35.00120y0+1587565";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 731:
			mXparser.setEpsilonComparison();
			expStr = "(-b36.ZZZZZ+60466175)-B36.00zzzzz+60466175";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 732:
			mXparser.setEpsilonComparison();
			expStr = "base(1)-0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 733:
			mXparser.setEpsilonComparison();
			expStr = "base(1,1)-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 734:
			mXparser.setEpsilonComparison();
			expStr = "base(1,1,1,1,1,1,1,1,1,1,1)-10";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 735:
			mXparser.setEpsilonComparison();
			expStr = "base(2,0,0,1)-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 736:
			mXparser.setEpsilonComparison();
			expStr = "base(2,1,0,1)-5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 737:
			mXparser.setEpsilonComparison();
			expStr = "base(10,1,2,3,4,5,6,7,8,9,0)-1234567890";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 738:
			mXparser.setEpsilonComparison();
			expStr = "base(35,b35.0,b35.0,b35.1,b35.2,b35.0,b35.y,b35.0)-B35.00120y0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 739:
			mXparser.setEpsilonComparison();
			expStr = "isNaN( base(-1,0,1,2) ) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 740:
			mXparser.setEpsilonComparison();
			expStr = "isNaN( base(1,0,1) ) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 741:
			mXparser.setEpsilonComparison();
			expStr = "isNaN( base(2) ) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 742:
			mXparser.setEpsilonComparison();
			expStr = "isNaN( base(2,2,1) ) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 743:
			mXparser.setEpsilonComparison();
			expStr = "isNaN( base(2,-1,1) ) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 744:
			mXparser.setEpsilonComparison();
			expStr = "( ndig10(-10)-2 ) + ( ndig10(1234)-4 ) + ( ndig10(0)-1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 745:
			mXparser.setEpsilonComparison();
			expStr = "sum(i, -1000000, 1000000, ndig10(i) - floor( log10( abs(i) ) ) - 1, 3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 746:
			mXparser.setEpsilonComparison();
			expStr = "isNaN( ndig10( [NaN] ) ) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 747:
			mXparser.setEpsilonComparison();
			expStr = "sum( i, -1000000, 1000000, ndig10(i) - ndig(i, 10) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 748:
			mXparser.setEpsilonComparison();
			expStr = "(ndig(5, 2) - 3) + (ndig(-5, 2) - 3) + (ndig( b35.124abcdefg,  35) - 10) + (ndig(0, 1) - 0) + (ndig(123, 1) - 123)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 749:
			mXparser.setEpsilonComparison();
			expStr = "( isNaN( ndig( [NaN], 10) ) - [true] ) + ( isNaN( ndig( 100, [NaN]) ) - [true] ) + ( isNaN( ndig( 10, -10) ) - [true] ) + ( isNaN( ndig( 10, 0) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 750:
			mXparser.setEpsilonComparison();
			expStr = "( dig10(1234567890, 1) - 1 ) + ( dig10(1234567890, 2) - 2 ) + ( dig10(1234567890, 3) - 3 ) + ( dig10(1234567890, 4) - 4 ) + ( dig10(1234567890, 5) - 5 ) + ( dig10(1234567890, 6) - 6 ) + ( dig10(1234567890, 7) - 7 ) + ( dig10(1234567890, 8) - 8 ) + ( dig10(1234567890, 9) - 9 ) + ( dig10(1234567890, 10) - 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 751:
			mXparser.setEpsilonComparison();
			expStr = "( dig(1234567890, 1, 10) - 1 ) + ( dig(1234567890, 2, 10) - 2 ) + ( dig(1234567890, 3, 10) - 3 ) + ( dig(1234567890, 4, 10) - 4 ) + ( dig(1234567890, 5, 10) - 5 ) + ( dig(1234567890, 6, 10) - 6 ) + ( dig(1234567890, 7, 10) - 7 ) + ( dig(1234567890, 8, 10) - 8 ) + ( dig(1234567890, 9, 10) - 9 ) + ( dig(1234567890, 10, 10) - 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 752:
			mXparser.setEpsilonComparison();
			expStr = "( dig10(1234567890, 0) - 0 ) + ( dig10(1234567890, -1) - 9 ) + ( dig10(1234567890, -2) - 8 ) + ( dig10(1234567890, -3) - 7 ) + ( dig10(1234567890, -4) - 6 ) + ( dig10(1234567890, -5) - 5 ) + ( dig10(1234567890, -6) - 4 ) + ( dig10(1234567890, -7) - 3 ) + ( dig10(1234567890, -8) - 2 ) + ( dig10(1234567890, -9) - 1 ) + ( dig10(1234567890, -10) - 0 ) + ( dig10(1234567890, -11) - 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 753:
			mXparser.setEpsilonComparison();
			expStr = "( dig(1234567890, 0, 10) - 0 ) + ( dig(1234567890, -1, 10) - 9 ) + ( dig(1234567890, -2, 10) - 8 ) + ( dig(1234567890, -3, 10) - 7 ) + ( dig(1234567890, -4, 10) - 6 ) + ( dig(1234567890, -5, 10) - 5 ) + ( dig(1234567890, -6, 10) - 4 ) + ( dig(1234567890, -7, 10) - 3 ) + ( dig(1234567890, -8, 10) - 2 ) + ( dig(1234567890, -9, 10) - 1 ) + ( dig(1234567890, -10, 10) - 0 ) + ( dig(1234567890, -11, 10) - 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 754:
			mXparser.setEpsilonComparison();
			expStr = "( dig(b35.124abcdefg, 0, 35) - b35.g ) + ( dig(b35.124abcdefg, -1, 35) - b35.f ) + ( dig(b35.124abcdefg, 1, 35) - 1 ) + ( dig(b35.124abcdefg, 2, 35) - 2 ) + ( dig(b35.124abcdefg, 3, 35) - 4 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 755:
			mXparser.setEpsilonComparison();
			expStr = "( dig(b1.11111, 1, 1) - 1 ) + ( dig(b1.11111, 2, 1) - 1 ) + ( dig(b1.11111, 3, 1) - 1 ) + ( dig(b1.11111, 4, 1) - 1 ) + ( dig(b1.11111, 5, 1) - 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 756:
			mXparser.setEpsilonComparison();
			expStr = "( dig(b1.11111, 0, 1) - 1 ) + ( dig(b1.11111, -1, 1) - 1 ) + ( dig(b1.11111, -2, 1) - 1 ) + ( dig(b1.11111, -3, 1) - 1 ) + ( dig(b1.11111, -4, 1) - 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 757:
			mXparser.setEpsilonComparison();
			expStr = "( dig(b2.10101, 1, 2) - 1 ) + ( dig(b2.10101, 2, 2) - 0 ) + ( dig(b2.10101, 3, 2) - 1 ) + ( dig(b2.10101, 4, 2) - 0 ) + ( dig(b2.10101, 5, 2) - 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 758:
			mXparser.setEpsilonComparison();
			expStr = "( dig(b2.10101, 0, 2) - 1 ) + ( dig(b2.10101, -1, 2) - 0 ) + ( dig(b2.10101, -2, 2) - 1 ) + ( dig(b2.10101, -3, 2) - 0 ) + ( dig(b2.10101, -4, 2) - 1 ) + ( dig(b2.10101, -5, 2) - 0 ) + ( dig(b2.10101, -6, 2) - 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 759:
			mXparser.setEpsilonComparison();
			expStr = "sum(d, 1, ndig10(123456789), dig10(123456789, d) ) - sum(d, 1, ndig10(123456789), d)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 760:
			mXparser.setEpsilonComparison();
			expStr = "sum(d, -2*ndig10(123456789), 0, dig10(123456789, d) ) - sum(d, 1, ndig10(123456789), d)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 761:
			mXparser.setEpsilonComparison();
			expStr = "sum(d, 1, ndig(123456789, 10), dig(123456789, d, 10) ) - sum(d, 1, ndig(123456789, 10), d)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 762:
			mXparser.setEpsilonComparison();
			expStr = "sum(d, -2*ndig(123456789, 10), 0, dig(123456789, d, 10) ) - sum(d, 1, ndig(123456789, 10), d)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 763:
			mXparser.setEpsilonComparison();
			expStr = "sum(p, 1, ndig(1234, 1), dig(1234, p, 1) ) - 1234";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 764:
			mXparser.setEpsilonComparison();
			expStr = "sum(p, -ndig(1234, 1)+1, 0, dig(1234, p, 1) ) - 1234";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 765:
			mXparser.setEpsilonComparison();
			expStr = "( isNaN( dig10( [NaN], 2 ) ) - [true] ) + ( isNaN( dig10( 10, [NaN] ) ) - [true] ) + ( isNaN( dig10( 10, 20 ) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 766:
			mXparser.setEpsilonComparison();
			expStr = "( isNaN( dig( 0, 2, 1 ) ) - [true] ) + ( isNaN( dig( 10, -20, 1 ) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 767:
			mXparser.setEpsilonComparison();
			expStr = "( isNaN( dig( 100, 1, 0 ) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 768:
			mXparser.setEpsilonComparison();
			expStr = "( med(1)-1 ) + ( med(1,2)-1.5 ) + ( med(2,1)-1.5 ) + ( med(2,3,1)-2 ) + ( med(1,2,3)-2 ) + ( med(1,2,3,4)-2.5 ) + ( med(2,3,1,4)-2.5 ) + ( med(1,2,2,3)-2 ) + ( med(5,4,3,2,1)-3 ) + ( med(-5,-4,-3,-2,-1)+3 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 769:
			mXparser.setEpsilonComparison();
			expStr = "isNaN( med(1,2,[NaN] ) ) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 770:
			mXparser.setEpsilonComparison();
			expStr = "( mode(-1)+1 ) + ( mode(1)-1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 771:
			mXparser.setEpsilonComparison();
			expStr = "( mode(1,2)-1 ) + ( mode(2,1)-2 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 772:
			mXparser.setEpsilonComparison();
			expStr = "( mode(1,2,3)-1 ) + ( mode(2,1,3)-2 ) + ( mode(3,2,1)-3 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 773:
			mXparser.setEpsilonComparison();
			expStr = "mode(1,1,1,1,1,1)-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 774:
			mXparser.setEpsilonComparison();
			expStr = "mode(1,2,1,2,1,2,1,2)-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 775:
			mXparser.setEpsilonComparison();
			expStr = "mode(1,2,1,2,1,2,1,2,2)-2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 776:
			mXparser.setEpsilonComparison();
			expStr = "mode(2,3,1,4,7,5,6,5,8,9)-5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 777:
			mXparser.setEpsilonComparison();
			expStr = "mode(2,3,1,4,7,5,6,5,8,9,4)-4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 778:
			mXparser.setEpsilonComparison();
			expStr = "isNaN( mode(1,2,[NaN] ) ) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 779:
			mXparser.setEpsilonComparison();
			expStr = "( ndist(1) - 1 ) + ( ndist(1, 2) - 2 ) + ( ndist(1,2,3) - 3 ) + ( ndist(1,1,2) - 2 ) + ( ndist(1,2,1,2) - 2 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 780:
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			expStr = "ndist(1, 2, 1.000001, 1.0001, 3) - 4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 781:
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			expStr = "isNaN( ndist(1,2,3,[NaN]) ) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 782:
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			expStr = "( argmin(1) - 1 ) + ( argmin(1,2) - 1 ) + ( argmin(2,1) - 2 ) + ( argmin(2,2,2,1,3,-1) - 6 ) + ( argmin(1,2,3,-6,2,3,2) - 4 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 783:
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			expStr = "( argmax(-1) - 1 ) + ( argmax(1,2) - 2 ) + ( argmax(2,1) - 1 ) + ( argmax(-1,2,3,2,5) - 5 ) + ( argmax(2,4,1,2,3,10,8,1) - 6 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 784:
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			expStr = "argmax(4, 2, 4.000001, 3) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 785:
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			expStr = "argmin(2, 1.000001, 3, 1) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 786:
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			expStr = "isNaN( argmin(1,2,3,[NaN]) ) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 787:
			mXparser.setEpsilonComparison();
			mXparser.setEpsilon(0.00001);
			expStr = "isNaN( argmax(1,2,3,[NaN]) ) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 788:
			mXparser.setEpsilonComparison();
			expStr = "2^3 - 8";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 789:
			mXparser.setEpsilonComparison();
			expStr = "-2^3 + 8";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 790:
			mXparser.setEpsilonComparison();
			expStr = "8^(1/3) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 791:
			mXparser.setEpsilonComparison();
			expStr = "-8^(1/3) + 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 792:
			mXparser.setEpsilonComparison();
			expStr = "125^(1/3) - 5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 793:
			mXparser.setEpsilonComparison();
			expStr = "-125^(1/3) + 5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 794:
			mXparser.setEpsilonComparison();
			expStr = "128^(1/7) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 795:
			mXparser.setEpsilonComparison();
			expStr = "-128^(1/7) + 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 796:
			mXparser.setEpsilonComparison();
			expStr = "128^0 - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 797:
			mXparser.setEpsilonComparison();
			expStr = "-128^0 - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 798:
			mXparser.setEpsilonComparison();
			expStr = "(1/125)^(-1/3) - 5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 799:
			mXparser.setEpsilonComparison();
			expStr = "(-1/125)^(-1/3) + 5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 800:
			mXparser.setEpsilonComparison();
			expStr = "( nfact(74) - 2 ) + ( factval(74, 1) - 2 ) + ( factval(74, 2) - 37 ) + ( factexp(74, 1) - 1 ) + ( factexp(74, 2) - 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		}
		if (testResult == true)
			mXparser.consolePrint("OK");
		else
			mXparser.consolePrint("ERROR");
		return testResult;
	}
	private static boolean runTest_00801_00900(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		String expStr = "";
		Argument x;
		Function f;
		switch (testId) {
		case 801:
			mXparser.setEpsilonComparison();
			expStr = "( nfact(5632) - 2 ) + ( factval(5632, 1) - 2 ) + ( factval(5632, 2) - 11 ) + ( factexp(5632, 1) - 9 ) + ( factexp(5632, 2) - 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 802:
			mXparser.setEpsilonComparison();
			expStr = "( factval(123456789, 0) - 1 ) + ( factval(123456789, -1) - 1 ) + ( factval(123456789, 4) - 1 ) + ( factval(123456789, 5) - 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 803:
			mXparser.setEpsilonComparison();
			expStr = "( factexp(123456789, 0) - 0 ) + ( factexp(123456789, -1) - 0 ) + ( factexp(123456789, 4) - 0 ) + ( factexp(123456789, 5) - 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 804:
			mXparser.setEpsilonComparison();
			expStr = "( factval(123456789, 1) - 3 ) + ( factval(123456789, 2) - 3607 ) + ( factval(123456789, 3) - 3803 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 805:
			mXparser.setEpsilonComparison();
			expStr = "( factexp(123456789, 1) - 2 ) + ( factexp(123456789, 2) - 1 ) + ( factexp(123456789, 3) - 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 806:
			mXparser.setEpsilonComparison();
			expStr = "nfact(123456789) - 3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 807:
			mXparser.setEpsilonComparison();
			expStr = "( nfact(0) - 0 ) + ( isNaN( factval(0,1) ) - [true] ) + ( isNaN( factexp(0,1) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 808:
			mXparser.setEpsilonComparison();
			expStr = "( isNaN( nfact([NaN]) ) - [true] ) + ( isNaN( factval([NaN],1) ) - [true] ) + ( isNaN( factexp([NaN],1) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 809:
			mXparser.setEpsilonComparison();
			expStr = "( isNaN( factval(10,[NaN]) ) - [true] ) + ( isNaN( factexp(10,[NaN]) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 810:
			mXparser.setEpsilonComparison();
			expStr = "sum(n, -100000, 100000,  sgn(n)*prod( id, -10, nfact(n) + 10, factval(n, id)^factexp(n, id) ) - n , 3 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 811:
			mXparser.setEpsilonComparison();
			expStr = "( root(7,128) - 2 ) + ( root(7,-128) + 2 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 812:
			mXparser.setEpsilonComparison();
			expStr = "( root(3,125) - 5 ) + ( root(3,-125) + 5 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 813:
			mXparser.setEpsilonComparison();
			expStr = "( root(3,8) - 2 ) + ( root(3,-8) + 2 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 814:
			mXparser.setEpsilonComparison();
			expStr = "( root(1,1) - 1 ) + ( root(1,2) - 2 ) + ( root(1,0) - 0) + ( root(1,-2) +2 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 815:
			mXparser.setEpsilonComparison();
			expStr = "( root(0,1) - 1 ) + ( root(0,0) - 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 816:
			mXparser.setEpsilonComparison();
			expStr = "( isNaN( root(-2,3) ) - [true]  ) + ( isNaN( root(4,-10) ) - [true]  )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 817:
			mXparser.setEpsilonComparison();
			expStr = "( isNaN( root([NaN],3) ) - [true]  ) + ( isNaN( root(3,[NaN]) ) - [true]  )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 818:
			mXparser.setEpsilonComparison();
			expStr = "der( sin(x), x, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 819:
			mXparser.setEpsilonComparison();
			expStr = "der+( sin(x), x, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 820:
			mXparser.setEpsilonComparison();
			expStr = "der-( sin(x), x, 0 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 821:
			mXparser.setEpsilonComparison();
			x = new Argument("x = pi");
			expStr = "der( sin(x), x, x )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = -1;
			if ( MathFunctions.abs(reg - value) <= 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 822:
			mXparser.setEpsilonComparison();
			x = new Argument("x = pi");
			expStr = "der( sin(x), x, 2*x )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 823:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 2");
			expStr = "pi-arcsec(x)-arcsec(-x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 824:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 3");
			expStr = "arccsc(-x)+arccsc(x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 825:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 5");
			expStr = "der( arcsec(x), x ) - 1 / ( x^2 * sqrt(1 - 1 / x^2) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 826:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 6");
			expStr = "der( arcsec(x), x ) - 1 / ( abs(x) * sqrt(x^2 - 1) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 827:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 7");
			expStr = "der( arccsc(x), x ) + 1 / ( x^2 * sqrt(1 - 1 / x^2) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 828:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 8");
			expStr = "der( arccsc(x), x ) + 1 / ( abs(x) * sqrt(x^2 - 1) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 829:
			mXparser.setEpsilonComparison();
			Function Ackermann = new Function("Ackermann(m,n) = iff( m = 0, n+1; (m>0) & (n=0), Ackermann(m-1,1); (m>0) & (n>0), Ackermann(m-1, Ackermann(m,n-1)) )");
			expStr = "Ackermann(3,4)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, Ackermann);
			value = exp[testId].calculate();
			reg = 125;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 830:
			mXparser.setEpsilonComparison();
			Function Tetration = new Function("Tetration(x,n) = if(n > 1, x^Tetration(x,n-1), x)");
			expStr = "Tetration(sqrt(2),80)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, Tetration);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 831:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 3.5");
			expStr = "Gamma(x+1)-x*Gamma(x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 832:
			mXparser.setEpsilonComparison();
			x = new Argument("x = -3.5");
			expStr = "Gamma(x+1)-x*Gamma(x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 833:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 1.7");
			expStr = "Gamma(x)*Gamma(x+1/2) - ( sqrt(pi) / 2^(2*x-1) ) * Gamma(2*x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 834:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 0.7");
			expStr = "Gamma(x)*Gamma(1-x) - pi / sin(pi * x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 835:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 0.7");
			expStr = "Gamma(x+1/2)*Gamma(1/2-x) - pi / cos(pi * x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 836:
			mXparser.setEpsilonComparison();
			x = new Argument("x = 0.7");
			expStr = "Gamma(x+1/2)*Gamma(1/2-x) - pi / cos(pi * x)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 837:
			mXparser.setEpsilonComparison();
			expStr = "Gamma(-3/2) - 4/3 *sqrt(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 838:
			mXparser.setEpsilonComparison();
			expStr = "Gamma(-1/2) + 2 *sqrt(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 839:
			mXparser.setEpsilonComparison();
			expStr = "Gamma(1/2) - sqrt(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 840:
			mXparser.setEpsilonComparison();
			expStr = "Gamma(3/2) - sqrt(pi)/2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 841:
			mXparser.setEpsilonComparison();
			expStr = "Gamma(5/2) - 3/4 * sqrt(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 842:
			mXparser.setEpsilonComparison();
			expStr = "Gamma(7/2) - 15/8 * sqrt(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 843:
			mXparser.setEpsilonComparison();
			expStr = "sum(n, 1, 10, Gamma(n) - (n-1)! )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 844:
			mXparser.setEpsilonComparison();
			expStr = "sum(n, -100, 0, isNaN( Gamma(n) ) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 845:
			mXparser.setEpsilonComparison();
			Argument x0 = new Argument("x0 = 1.3");
			expStr = "der( Gamma(x), x, x0 ) - ( -[gam] + sum(n, 0, 10000000, 1/(n+1) - 1/(n+x0) ) ) * Gamma(x0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x0);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 846:
			mXparser.setEpsilonComparison();
			Function V = new Function("V(R,n) = if( n > 1, int( V( R/2, n-1 ), x, -R, R ), 1 )");
			expStr = "V(1,1) + V(1,2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, V);
			value = exp[testId].calculate();
			reg = 3;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 847:
			mXparser.setEpsilonComparison();
			Function uniSum = new Function("uniSum(n, x) = if( x >= 1, n, uniSum(n+1, x + rUni(0,1) ) )");
			expStr = "avg( i, 1, 100000, uniSum(0,0) ) - e";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, uniSum);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 848:
			mXparser.setEpsilonComparison();
			Argument n = new Argument("n = 100000");
			expStr = "sqrt( 6 / (sum( i, 1, n, if( gcd( [Nat], [Nat] ) = 1, 1, 0) ) / n) ) - pi";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, n);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 849:
			mXparser.setEpsilonComparison();
			expStr = "root( 3, 7 + sqrt(50) ) + root( 3, 7 - sqrt(50) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 850:
			mXparser.setEpsilonComparison();
			expStr = "root( 3, 7 + root(2,50) ) + root( 3, 7 - root(2,50) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 851:
			mXparser.setEpsilonComparison();
			expStr = "(7 + sqrt(50))^(1/3) + (7 - sqrt(50))^(1/3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 852:
			mXparser.setEpsilonComparison();
			expStr = "(7 + 50^(1/2))^(1/3) + (7 - 50^(1/2))^(1/3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 853:
			mXparser.setEpsilonComparison();
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
			expStr = "(EN1 - e) + (EN2 - (e^2 - e)) + (EN3 - (e^3 - 2*e^2 + e/2)) + (EN4 - (e^4 - 3*e^3 + 2*e^2 - e/6)) + (EN5 - (e^5 - 4*e^4 + 9/2 * e^3 - 4/3 * e^2 + e/24))";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, EN1, EN2, EN3, EN4, EN5);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.1 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 854:
			mXparser.setEpsilonComparison();
			expStr = "stdi(i, 1, 100000, X)";
			f = new Function("f(x) = pNor(x,2,4)");
			Function RejectSampling = new Function("RejectSampling(a,b,M,x) = if( rUni(0,M) <= f(x), x, RejectSampling(a,b,M, rUni(a,b) ) )", f);
			Argument X = new Argument("X = RejectSampling( -22, 26, pNor(2,2,4) , rUni(-22, 26) )", RejectSampling);
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, X);
			value = exp[testId].calculate();
			reg = 4;
			if ( MathFunctions.abs(reg - value) <= 0.05 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 855:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, -3, 3, pNor(x, 0, 1) - f(x, 30), 0.1)";
			f = new Function("f(x,n) = if( (x*sqrt(n/12)+n/2) >= 0 , ( 1 / (n-1)! ) * sum(k, 0, floor((x*sqrt(n/12)+n/2)), (-1)^k * C(n,k) * (x*sqrt(n/12)+n/2-k)^(n-1) )*sqrt(n/12) ; 0)");
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 856:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, -20, 20, sin(x)/x - prod(k,1, 10000 , 1 - (x/(k*pi))^2 ) , 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 857:
			mXparser.setEpsilonComparison();
			f = new Function("f(x,a,n) = (sqrt(pi)/2) * sum(k, 0, n, ( a^(1/2 - k) / ( Gamma(3/2 - k) * k! ) ) * (x-a)^k   )");
			expStr = "sum(x, 1, 3, sqrt(x) - f(x,2,50) , 0.001)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 858:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "sin(90)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 859:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "asin(-1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -90;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 860:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "cos(90)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 861:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "acos(0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 90;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 862:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "tan(-45)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 863:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "atan(1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 45;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 864:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "ctan(45)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 865:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "actan(1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 45;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 866:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "sec(60)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 867:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "arcsec(2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 60;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 868:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "csc(30)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 869:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "arccsc(2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 30;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 870:
			mXparser.setEpsilonComparison();
			mXparser.setDegreesMode();
			expStr = "Sinc(90)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1.0 / 90.0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setRadiansMode();
			mXparser.setDefaultEpsilon();
			break;
		case 871:
			mXparser.setEpsilonComparison();
			expStr = "gcd(3333333333333330.0,10000000000000000.0)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 10;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 872:
			mXparser.setEpsilonComparison();
			expStr = "gcd(58333333333333, 100000000000000)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 873:
			mXparser.setEpsilonComparison();
			expStr = "2.0+2.0/3.0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = (new Expression(NumberTheory.toMixedFractionString(2.0+2.0/3.0))).calculate();
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 874:
			mXparser.setEpsilonComparison();
			expStr = "-2.0-2.0/3.0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = (new Expression(NumberTheory.toMixedFractionString(-2.0-2.0/3.0))).calculate();
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 875:
			mXparser.setEpsilonComparison();
			expStr = "17.0/3.0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = (new Expression(NumberTheory.toMixedFractionString(17.0/3.0))).calculate();
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 876:
			mXparser.setEpsilonComparison();
			expStr = "-17.0/3.0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = (new Expression(NumberTheory.toMixedFractionString(-17.0/3.0))).calculate();
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 877:
			mXparser.setEpsilonComparison();
			expStr = "(1_2 - 1/2) + (-1_3 + 1/3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 878:
			mXparser.setEpsilonComparison();
			expStr = "(11_3 - 11/3) + (-11_3 + 11/3)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 879:
			mXparser.setEpsilonComparison();
			expStr = "(123121_71 - 123121/71) + (-123121_71 + 123121/71)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 880:
			mXparser.setEpsilonComparison();
			expStr = "( 1_1_2 - (1+1/2) ) + (-1_1_2 + (1+1/2) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 881:
			mXparser.setEpsilonComparison();
			expStr = "( 110_5_2 - (110+5/2) ) + (-110_5_2 + (110+5/2) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 882:
			mXparser.setEpsilonComparison();
			expStr = "( 1234_12345_123456 - (1234+12345/123456) ) + (-1234_12345_123456 + (1234+12345/123456) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 883:
			mXparser.setEpsilonComparison();
			expStr = "0_0_1 - 0_0_2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 884:
			mXparser.setEpsilonComparison();
			expStr = "0_1 - 0_234";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 885:
			mXparser.setEpsilonComparison();
			expStr = "isNaN(0_0_0) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 886:
			mXparser.setEpsilonComparison();
			expStr = "isNaN(1_2_0) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 887:
			mXparser.setEpsilonComparison();
			expStr = "isNaN(1_0_0) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 888:
			mXparser.setEpsilonComparison();
			expStr = "isNaN(0_2_0) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 889:
			mXparser.setEpsilonComparison();
			expStr = "isNaN(1_0) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 890:
			mXparser.setEpsilonComparison();
			expStr = "isNaN(0_0) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 891:
			mXparser.setEpsilonComparison();
			expStr = "isNaN(100_0) - [true]";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 892:
			mXparser.setEpsilonComparison();
			expStr = "2^0 - 2^^0";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 893:
			mXparser.setEpsilonComparison();
			expStr = "2^1 - 2^^1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 894:
			mXparser.setEpsilonComparison();
			expStr = "2^2 - 2^^2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 895:
			mXparser.setEpsilonComparison();
			expStr = "2^2^2 - 2^^3";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 896:
			mXparser.setEpsilonComparison();
			expStr = "2^2^2^2 - 2^^4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 897:
			mXparser.setEpsilonComparison();
			expStr = "(e^(-e))^^100000000 - 1/e";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 898:
			mXparser.setEpsilonComparison();
			expStr = "(e^(1/e))^^10000000 - e";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 899:
			mXparser.setEpsilonComparison();
			expStr = "sqrt(2)^^100 - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 900:
			mXparser.setEpsilonComparison();
			expStr = "( (-1)^^10 + 1 ) + ( (-1)^^0 - 1 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		}
		if (testResult == true)
			mXparser.consolePrint("OK");
		else
			mXparser.consolePrint("ERROR");
		return testResult;
	}
	private static boolean runTest_00901_01000(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		String expStr = "";
		Argument x, y, n;
		switch (testId) {
		case 901:
			mXparser.setEpsilonComparison();
			expStr = "0^^1234";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 902:
			mXparser.setEpsilonComparison();
			expStr = "(-2)^^(2) - 1_4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 903:
			mXparser.setEpsilonComparison();
			expStr = "sum( x, e^(-e), e^(1/e), LambW0( -ln(x) ) / (-ln(x) ) - solve(y - x^y, y, 1/e, e) , 0.001 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 904:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, -1/e + 0.1, 100, der( 0.5 * ( 1 + LambW0(x) )^2 , x, x) - LambW0(x)/x, 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 905:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, -1/e, 100, e^LambW0(x) - x / LambW0(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 906:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, -1/e, -0.01, e^LambW1(x) - x / LambW1(x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 907:
			mXparser.setEpsilonComparison();
			expStr = "int( LambW0(x), x, 0, e) - e + 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 908:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, -0.3, 0.3, LambW0(x) - sum(n, 1, 100, ( ( (-n)^(n-1) ) / n! ) * x^n ) , 0.001)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 909:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, 0, 200, LambW0(x * e^x) - x, 0.001)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 910:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, -1, 0, LambW0(x * e^x) - x, 0.001)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 911:
			mXparser.setEpsilonComparison();
			expStr = "avg(x, -10, -1, abs(x - LambW1(x * e^x))/abs(x), 0.001)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 912:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, 0.01, 200, ln( LambW0(x) ) - ln(x) + LambW0(x), 0.001)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 913:
			mXparser.setEpsilonComparison();
			n = new Argument("n = 4");
			expStr = "sum(x, 0.01, 200, LambW0( (n*x^n) / LambW0(x)^(n-1) ) - n*LambW0(x), 0.001)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, n);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 914:
			mXparser.setEpsilonComparison();
			x = new Argument("x = rUni(0,100)");
			y = new Argument("y = rUni(0,100)");
			expStr = "LambW0(x) + LambW0(y) - LambW0( x*y*( 1/LambW0(x) + 1/LambW0(y) ) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, x, y);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 915:
			mXparser.setEpsilonComparison();
			expStr = "int( LambW0(2 * cot(x)^2) * sec(x)^2, x, 0.001182, pi-0.008 ) - 4*sqrt(pi)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.1 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 916:
			mXparser.setEpsilonComparison();
			expStr = "int( LambW0( 1/x^2  ), x, 0.0000000804, 300 )/sqrt(2*pi)-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 917:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, 1/e, e, LambW0(-ln(x)/x) + ln(x), 0.001)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 918:
			mXparser.setEpsilonComparison();
			expStr = "( LambW0(-1/e) + 1 ) + ( LambW0(0) - 0 ) + ( LambW0(1) - [Om] ) + ( LambW0(1) + ln( LambW0(1) )  ) + ( LambW0(e) - 1 ) + ( LambW0(-ln(sqrt(2))) + 2*ln(sqrt(2)) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 919:
			mXparser.setEpsilonComparison();
			expStr = "LambW1(-1/e) + 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.00000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 920:
			mXparser.setEpsilonComparison();
			expStr = "der( LambW0(x), x, 0) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 921:
			mXparser.setEpsilonComparison();
			expStr = "int( LambW0(x)/( x*sqrt(x) ), x, 0.01 , 240000) - 2*sqrt(2*pi)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.01 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 922:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, 0.001, 6, x^x - ( e^LambW0( ln(x^x) ) )^( e^LambW0( ln(x^x) ) ), 0.001)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 923:
			mXparser.setEpsilonComparison();
			expStr = "( isNaN( LambW0(-10) ) - [true] ) + ( isNaN( LambW1(-10) ) - [true] ) + ( isNaN( LambW1(10) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 924:
			mXparser.setEpsilonComparison();
			expStr = "( isNaN( 2^^[NaN] ) - [true] ) + ( isNaN( [NaN]^^2 ) - [true] ) + ( isNaN( 2^^(-1) ) - [true] ) + ( isNaN( 0^^0 ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 925:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, 1, 10, sgnGamma(x)) + sum(x, 0.5, 9.5, sgnGamma(x)) - 20";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 926:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, -99, 0, isNaN( sgnGamma(x) ) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 927:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, -98.5, -0.5, sgnGamma(x), 2) + 50 + sum(x, -99.5, -1.5, sgnGamma(x), 2) - 50";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 928:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, 0.5, 50, logGamma(x) - ( -[gam]*x - ln(x) + sum(k, 1, 10000+x^3, x/k - ln(1 + x/k) ) ), 0.5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 929:
			mXparser.setEpsilonComparison();
			expStr = "sum(x, -99, 0, isNaN( logGamma(x) ) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 0.0000000001 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 930:
			mXparser.setEpsilonComparison();
			expStr = "sum(s, -50.5, -50.5, sum(x, 0.5, 50.5, GammaL(s,x) + GammaU(s,x) - Gamma(s) ) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.setDefaultEpsilon();
			break;
		case 931:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 0.1, 1, 0.001}], 16] = 2114.212208108448
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 1, Gamma(x), 0.001) - 2114.212208108448 ) / 2114.212208108448";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 932:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 1.1, 2, 0.001}], 16] = 826.2989620272716
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 1.1, 2, Gamma(x), 0.001) - 826.2989620272716 ) / 826.2989620272716";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 933:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 2.1, 3, 0.001}], 16] = 1284.551346724549
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 2.1, 3, Gamma(x), 0.001) - 1284.551346724549 ) / 1284.551346724549";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 934:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 3.1, 4, 0.001}], 16] = 3338.776475304076
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 3.1, 4, Gamma(x), 0.001) - 3338.776475304076 ) / 3338.776475304076";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 935:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 4.1, 5, 0.001}], 16] = 12102.99996568467
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 4.1, 5, Gamma(x), 0.001) - 12102.99996568467 ) / 12102.99996568467";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 936:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 5.1, 6, 0.001}], 16] = 56192.71972868672
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 5.1, 6, Gamma(x), 0.001) - 56192.71972868672 ) / 56192.71972868672";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 937:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 6.1, 7, 0.001}], 16] = 317850.3398689155
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 6.1, 7, Gamma(x), 0.001) - 317850.3398689155 ) / 317850.3398689155";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 938:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 7.1, 8, 0.001}], 16] = 2119192.458453365
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 7.1, 8, Gamma(x), 0.001) - 2119192.458453365 ) / 2119192.458453365";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 939:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 8.1, 9, 0.001}], 16] = 1.626741828826147E7
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 8.1, 9, Gamma(x), 0.001) - 1.626741828826147E7 ) / 1.626741828826147E7";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 940:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 9.1, 10, 0.001}], 16] = 1.412638999378844E8
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 9.1, 10, Gamma(x), 0.001) - 1.412638999378844E8 ) / 1.412638999378844E8";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 941:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 10.1, 20, 0.1}], 16] = 4.758039372588876E17
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 10.1, 20, Gamma(x), 0.1) - 4.758039372588876E17 ) / 4.758039372588876E17";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 942:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 20.1, 100, 0.1}], 16] = 2.532008062312612E156
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 20.1, 100, Gamma(x), 0.1) - 2.532008062312612E156 ) / 2.532008062312612E156";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 943:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, -0.9, -0.1, 0.001}], 16] = -4033.861662372823
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -0.9, -0.1, Gamma(x), 0.001) - (-4033.861662372823) ) / (-4033.861662372823)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 944:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, -1.9, -1.1, 0.001}], 16] = 2779.242455572773
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -1.9, -1.1, Gamma(x), 0.001) - 2779.242455572773 ) / 2779.242455572773";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 945:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, -2.9, -2.1, 0.001}], 16] = -1146.484828532192
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -2.9, -2.1, Gamma(x), 0.001) - (-1146.484828532192) ) / (-1146.484828532192)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 946:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, -3.9, -3.1, 0.001}], 16] = 336.6702016774144
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -3.9, -3.1, Gamma(x), 0.001) - 336.6702016774144 ) / 336.6702016774144";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 947:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, 0.1, 1, 0.001}], 16] = -76.66832811614711
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -4.9, -4.1, Gamma(x), 0.001) - (-76.66832811614711) ) / (-76.66832811614711)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 948:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, -5.9, -5.1, 0.001}], 16] = 14.25043511683485
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -5.9, -5.1, Gamma(x), 0.001) - 14.25043511683485 ) / 14.25043511683485";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 949:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, -6.9, -6.1, 0.001}], 16] = -2.236810549400713
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -6.9, -6.1, Gamma(x), 0.001) - (-2.236810549400713) ) / (-2.236810549400713)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 950:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, -7.9, -7.1, 0.001}], 16] = 0.3037861166613209
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -7.9, -7.1, Gamma(x), 0.001) - 0.3037861166613209 ) / 0.3037861166613209";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 951:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, -8.9, -8.1, 0.001}], 16] = -0.03635359758623678
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -8.9, -8.1, Gamma(x), 0.001) - (-0.03635359758623678) ) / (-0.03635359758623678)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 952:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, -9.9, -9.1, 0.001}], 16] = 0.003887845100640342
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -9.9, -9.1, Gamma(x), 0.001) - 0.003887845100640342 ) / 0.003887845100640342";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 953:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[Gamma[x], {x, -30.95, -10.05, 0.1}], 16] = -8.376548071082549E-6
			 */
			mXparser.disableUlpRounding();
			mXparser.disableAlmostIntRounding();
			expStr = "( sum(x, -30.95, -10.05, Gamma(x), 0.1) - (-8.376548071082549E-6) ) / (-8.376548071082549E-6)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			break;
		case 954:
			mXparser.disableUlpRounding();
			expStr = "sum(x, -90.95, 100.05, abs(ln(abs(Gamma(x))) - logGamma(x)), 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 955:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 6870.775811214982
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaU(s, x), 0.001), 0.1) - 6870.775811214982 ) / 6870.775811214982";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 956:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 9785.880306439629
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaU(s, x), 0.001), 0.1) - 9785.880306439629 ) / 9785.880306439629";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 957:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 21205.70354995280
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaU(s, x), 0.001), 0.1) - 21205.70354995280 ) / 21205.70354995280";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 958:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 62496.08447233523
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaU(s, x), 0.001), 0.1) - 62496.08447233523 ) / 62496.08447233523";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 959:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 237127.0905587526
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaU(s, x), 0.001), 0.1) - 237127.0905587526 ) / 237127.0905587526";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 960:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 12659.04924160019
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaU(s, x), 0.1), 0.1) - 12659.04924160019 ) / 12659.04924160019";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 961:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 72192.46327984912
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaU(s, x), 0.1), 0.1) - 72192.46327984912 ) / 72192.46327984912";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-8 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 962:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 483608.0262675140
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaU(s, x), 0.1), 0.1) - 483608.0262675140 ) / 483608.0262675140";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-5 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 963:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 8224.880733100714
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaU(s, x), 0.001), 0.1) - 8224.880733100714 ) / 8224.880733100714";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 964:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 23629.12458493255
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaU(s, x), 0.001), 0.1) - 23629.12458493255 ) / 23629.12458493255";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 965:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 117364.35585450924
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaU(s, x), 0.001), 0.1) - 117364.35585450924 ) / 117364.35585450924";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 966:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 771195.4772567508
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaU(s, x), 0.001), 0.1) - 771195.4772567508 ) / 771195.4772567508";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 967:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 5800247.185711337
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaU(s, x), 0.001), 0.1) - 5800247.185711337 ) / 5800247.185711337";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 968:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4.685905102859140E7
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaU(s, x), 0.001), 0.1) - 4.685905102859140E7 ) / 4.685905102859140E7";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 969:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3.949477860591464E8
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaU(s, x), 0.001), 0.1) - 3.949477860591464E8 ) / 3.949477860591464E8";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 970:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3.421898375421077E9
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaU(s, x), 0.001), 0.1) - 3.421898375421077E9 ) / 3.421898375421077E9";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 971:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 35413.46835095401
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaL(s, x), 0.001), 0.1) - 35413.46835095401 ) / 35413.46835095401";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 972:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 6740.098934105806
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaL(s, x), 0.001), 0.1) - 6740.098934105806 ) / 6740.098934105806";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 973:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4485.323384538212
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaL(s, x), 0.001), 0.1) - 4485.323384538212 ) / 4485.323384538212";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 974:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4279.445033746266
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaL(s, x), 0.001), 0.1) - 4279.445033746266 ) / 4279.445033746266";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 975:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4932.908754940856
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaL(s, x), 0.001), 0.1) - 4932.908754940856 ) / 4932.908754940856";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 976:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 71.00936681198708
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaL(s, x), 0.1), 0.1) - 71.00936681198708 ) / 71.00936681198708";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 977:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 99.53718099344381
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaL(s, x), 0.1), 0.1) - 99.53718099344381 ) / 99.53718099344381";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 978:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 147.6273237932475
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaL(s, x), 0.1), 0.1) - 147.6273237932475 ) / 147.6273237932475";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 979:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -88902.11398055719
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaL(s, x), 0.001), 0.1) - (-88902.11398055719) ) / (-88902.11398055719)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 980:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 31955.72452652288
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaL(s, x), 0.001), 0.1) - 31955.72452652288 ) / 31955.72452652288";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 981:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -140294.05242515303
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaL(s, x), 0.001), 0.1) - (-140294.05242515303) ) / (-140294.05242515303)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 982:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -764462.0732232045
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaL(s, x), 0.001), 0.1) - (-764462.0732232045) ) / (-764462.0732232045)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 983:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -5.801780552273669E6
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaL(s, x), 0.001), 0.1) - (-5.801780552273669E6) ) / (-5.801780552273669E6)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 984:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -4.685876601988902E7
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaL(s, x), 0.001), 0.1) - (-4.685876601988902E7) ) / (-4.685876601988902E7)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 985:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -3.949478307953569E8
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaL(s, x), 0.001), 0.1) - (-3.949478307953569E8) ) / (-3.949478307953569E8)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 986:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[Gamma[s, 0, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -3.421898369345358E9
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaL(s, x), 0.001), 0.1) - (-3.421898369345358E9) ) / (-3.421898369345358E9)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 987:
			mXparser.disableUlpRounding();
			expStr = "sum(x, -2.95, 2.95, GammaU(0,x) - ( -Ei(-x) ), 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-16 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 988:
			mXparser.disableUlpRounding();
			expStr = "sum(s, -2.95, 2.95, GammaL(s,0), 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-16 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 989:
			mXparser.disableUlpRounding();
			expStr = "sum(s, -2.95, 2.95, GammaU(s,0) - Gamma(s), 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-16 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 990:
			mXparser.disableUlpRounding();
			expStr = "sum(s, 1, 5, sum(x, 0.5, 3.5, GammaU(s, x) - ((s-1)!) * e^(-x) * sum(k, 0, s-1, x^k / k! ) , 0.01) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 991:
			mXparser.disableUlpRounding();
			expStr = "sum(x, -5, 5, GammaU(1,x) - e^(-x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 992:
			mXparser.disableUlpRounding();
			expStr = "sum(x, -5, 5, GammaL(1,x) - ( 1 - e^(-x) ), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 993:
			mXparser.disableUlpRounding();
			expStr = "sum(x, 0.1, 8, GammaU(0.5, x) - sqrt(pi) * erfc( sqrt(x) ), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 994:
			mXparser.disableUlpRounding();
			expStr = "sum(x, 0.1, 8, GammaL(0.5, x) - sqrt(pi) * erf( sqrt(x) ), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 995:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 4128.619249122392
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaRegU(s, x), 0.001), 0.1) - 4128.619249122392 ) / 4128.619249122392";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 996:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 10648.33231753313
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaRegU(s, x), 0.001), 0.1) - 10648.33231753313 ) / 10648.33231753313";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 997:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 14732.67120032403
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaRegU(s, x), 0.001), 0.1) - 14732.67120032403 ) / 14732.67120032403";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 998:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 16769.95611832584
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaRegU(s, x), 0.001), 0.1) - 16769.95611832584 ) / 16769.95611832584";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 999:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 17609.29585783721
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaRegU(s, x), 0.001), 0.1) - 17609.29585783721 ) / 17609.29585783721";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1000:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 198.6732618854221
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaRegU(s, x), 0.1), 0.1) - 198.6732618854221 ) / 198.6732618854221";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		}
		if (testResult == true)
			mXparser.consolePrint("OK");
		else
			mXparser.consolePrint("ERROR");
		return testResult;
	}
	private static boolean runTest_01001_01100(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		String expStr = "";
		Function f;
		switch (testId) {
		case 1001:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 199.6608252491266
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaRegU(s, x), 0.1), 0.1) - 199.6608252491266 ) / 199.6608252491266";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-8 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1002:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 199.9222940005033
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaRegU(s, x), 0.1), 0.1) - 199.9222940005033 ) / 199.9222940005033";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-6 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1003:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -1776.380588210588
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaRegU(s, x), 0.001), 0.1) - (-1776.380588210588) ) / (-1776.380588210588)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1004:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 7890.923829786565
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaRegU(s, x), 0.001), 0.1) - 7890.923829786565 ) / 7890.923829786565";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1005:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -102249.9066253191
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaRegU(s, x), 0.001), 0.1) - (-102249.9066253191) ) / (-102249.9066253191)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1006:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 2.440576583013389E6
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaRegU(s, x), 0.001), 0.1) - 2.440576583013389E6 ) / 2.440576583013389E6";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1007:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -8.522034351730967E7
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaRegU(s, x), 0.001), 0.1) - (-8.522034351730967E7) ) / (-8.522034351730967E7)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1008:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3.889240488572830E9
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaRegU(s, x), 0.001), 0.1) - 3.889240488572830E9 ) / 3.889240488572830E9";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1009:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -2.181166295073751E11
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaRegU(s, x), 0.001), 0.1) - (-2.181166295073751E11) ) / (-2.181166295073751E11)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1010:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 1.447213822212101E13
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaRegU(s, x), 0.001), 0.1) - 1.447213822212101E13 ) / 1.447213822212101E13";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1011:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 0.1, 1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 13891.38075087760
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 0.1, 1, GammaRegL(s, x), 0.001), 0.1) - 13891.38075087760 ) / 13891.38075087760";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1012:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 1.1, 2, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 7371.667682466868
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 1.1, 2, GammaRegL(s, x), 0.001), 0.1) - 7371.667682466868 ) / 7371.667682466868";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1013:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 2.1, 3, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 3287.328799675970
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 2.1, 3, GammaRegL(s, x), 0.001), 0.1) - 3287.328799675970 ) / 3287.328799675970";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1014:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 3.1, 4, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 1250.043881674157
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 3.1, 4, GammaRegL(s, x), 0.001), 0.1) - 1250.043881674157 ) / 1250.043881674157";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1015:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 4.1, 5, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 410.7041421627869
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 4.1, 5, GammaRegL(s, x), 0.001), 0.1) - 410.7041421627869 ) / 410.7041421627869";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1016:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 5.1, 6, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 1.326738114577891
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 5.1, 6, GammaRegL(s, x), 0.1), 0.1) - 1.326738114577891 ) / 1.326738114577891";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1017:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 6.1, 7, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 0.3391747508734272
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 6.1, 7, GammaRegL(s, x), 0.1), 0.1) - 0.3391747508734272 ) / 0.3391747508734272";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1018:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, 7.1, 8, 0.1}], {x, 0.1, 2, 0.1} ], 16] = 0.07770599949669701
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, 7.1, 8, GammaRegL(s, x), 0.1), 0.1) - 0.07770599949669701 ) / 0.07770599949669701";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1019:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -0.9, -0.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 17796.38058821059
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -0.9, -0.1, GammaRegL(s, x), 0.001), 0.1) - 17796.38058821059 ) / 17796.38058821059";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1020:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -1.9, -1.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 8129.076170213447
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -1.9, -1.1, GammaRegL(s, x), 0.001), 0.1) - 8129.076170213447 ) / 8129.076170213447";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1021:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -2.9, -2.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 118269.9066253191
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -2.9, -2.1, GammaRegL(s, x), 0.001), 0.1) - 118269.9066253191 ) / 118269.9066253191";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1022:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -3.9, -3.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -2.424556583013388E6
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -3.9, -3.1, GammaRegL(s, x), 0.001), 0.1) - (-2.424556583013388E6) ) / (-2.424556583013388E6)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1023:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -4.9, -4.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 8.523636351730967E7
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -4.9, -4.1, GammaRegL(s, x), 0.001), 0.1) - 8.523636351730967E7 ) / 8.523636351730967E7";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1024:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -5.9, -5.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -3.889224468572830E9
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -5.9, -5.1, GammaRegL(s, x), 0.001), 0.1) - (-3.889224468572830E9) ) / (-3.889224468572830E9)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1025:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -6.9, -6.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = 2.181166455273751E11
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -6.9, -6.1, GammaRegL(s, x), 0.001), 0.1) - 2.181166455273751E11 ) / 2.181166455273751E11";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1026:
			/* Wolfram Language (Raspberry Pi Pilot Release)
			 * SetPrecision[Sum[ Sum[GammaRegularized[s, 0, x], {s, -7.9, -7.1, 0.001}], {x, 0.1, 2, 0.1} ], 16] = -1.447213820610101E13
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.1, 2, sum(s, -7.9, -7.1, GammaRegL(s, x), 0.001), 0.1) - (-1.447213820610101E13) ) / (-1.447213820610101E13)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1027:
			mXparser.disableUlpRounding();
			expStr = "sum(x, -2.95, 2.95, GammaRegU(0,x) - ( -Ei(-x) )/[gam], 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1028:
			mXparser.disableUlpRounding();
			expStr = "sum(s, -2.95, 2.95, GammaRegL(s,0), 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1029:
			mXparser.disableUlpRounding();
			expStr = "sum(s, -2.95, 2.95, GammaRegU(s,0) - 1, 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1030:
			mXparser.disableUlpRounding();
			expStr = "sum(s, 1, 5, sum(x, 0.5, 3.5, GammaRegU(s, x) - ((s-1)!) * e^(-x) * sum(k, 0, s-1, x^k / k! ) / Gamma(s) , 0.01) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1031:
			mXparser.disableUlpRounding();
			expStr = "sum(x, -5, 5, GammaRegU(1,x) - e^(-x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1032:
			mXparser.disableUlpRounding();
			expStr = "sum(x, -5, 5, GammaRegL(1,x) - ( 1 - e^(-x) ), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-11 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1033:
			mXparser.disableUlpRounding();
			expStr = "sum(x, 0.1, 8, GammaRegU(0.5, x) - erfc( sqrt(x) ), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1034:
			mXparser.disableUlpRounding();
			expStr = "sum(x, 0.1, 8, GammaRegL(0.5, x) - erf( sqrt(x) ), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1035:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 0.01, 0.5, 0.001}], 16] = -4079.209360654330
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.01, 0.5, diGamma(x), 0.001) - (-4079.209360654330) ) / (-4079.209360654330)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-15 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1036:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 0.5, 1, 0.001}], 16] = -573.6355799257133
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 0.5, 1, diGamma(x), 0.001) - (-573.6355799257133) ) / (-573.6355799257133)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1037:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 1, 2, 0.001}], 16] = -0.07729899822650133
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 1, 2, diGamma(x), 0.001) - (-0.07729899822650133) ) / (-0.07729899822650133)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-9 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1038:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 2, 3, 0.001}], 16] = 693.8199440617115
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 2, 3, diGamma(x), 0.001) - 693.8199440617115 ) / 693.8199440617115";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1039:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 3, 4, 0.001}], 16] = 1099.701730410615
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 3, 4, diGamma(x), 0.001) - 1099.701730410615 ) / 1099.701730410615";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1040:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 4, 5, 0.001}], 16] = 1387.675473579989
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 4, 5, diGamma(x), 0.001) - 1387.675473579989 ) / 1387.675473579989";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1041:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 5, 6, 0.001}], 16] = 1611.044026769199
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 5, 6, diGamma(x), 0.001) - 1611.044026769199 ) / 1611.044026769199";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1042:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 6, 7, 0.001}], 16] = 1793.548917915007
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 6, 7, diGamma(x), 0.001) - 1793.548917915007 ) / 1793.548917915007";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1043:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 7, 8, 0.001}], 16] = 1947.854360261161
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 7, 8, diGamma(x), 0.001) - 1947.854360261161 ) / 1947.854360261161";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1044:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 8, 9, 0.001}], 16] = 2081.519681855709
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 8, 9, diGamma(x), 0.001) - 2081.519681855709 ) / 2081.519681855709";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1045:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 9, 10, 0.001}], 16] = 2199.420773340920
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 9, 10, diGamma(x), 0.001) - 2199.420773340920 ) / 2199.420773340920";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1046:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 10, 100, 0.01}], 16] = 34636.66366690680
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 10, 100, diGamma(x), 0.01) - 34636.66366690680 ) / 34636.66366690680";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1047:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, 100, 1000, 0.1}], 16] = 55466.61581150640
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, 100, 1000, diGamma(x), 0.1) - 55466.61581150640 ) / 55466.61581150640";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1048:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, -0.99, -0.01, 0.001}], 16] = 1.422412463589325
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -0.99, -0.01, diGamma(x), 0.001) - 1.422412463589325 ) / 1.422412463589325";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1049:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, -1.99, -1.01, 0.001}], 16] = 680.3530867812680
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -1.99, -1.01, diGamma(x), 0.001) - 680.3530867812680 ) / 680.3530867812680";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1050:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, -2.99, -2.01, 0.001}], 16] = 1077.907743717255
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -2.99, -2.01, diGamma(x), 0.001) - 1077.907743717255 ) / 1077.907743717255";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1051:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, -3.99, -3.01, 0.001}], 16] = 1360.050326061623
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -3.99, -3.01, diGamma(x), 0.001) - 1360.050326061623 ) / 1360.050326061623";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1052:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, -4.99, -4.01, 0.001}], 16] = 1578.919885022366
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -4.99, -4.01, diGamma(x), 0.001) - 1578.919885022366 ) / 1578.919885022366";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1053:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, -5.99, -5.01, 0.001}], 16] = 1757.758655903731
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -5.99, -5.01, diGamma(x), 0.001) - 1757.758655903731 ) / 1757.758655903731";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1054:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, -6.99, -6.01, 0.001}], 16] = 1908.969189637675
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -6.99, -6.01, diGamma(x), 0.001) - 1908.969189637675 ) / 1908.969189637675";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1055:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, -7.99, -7.01, 0.001}], 16] = 2039.956153658795
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -7.99, -7.01, diGamma(x), 0.001) - 2039.956153658795 ) / 2039.956153658795";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1056:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, -8.99, -8.01, 0.001}], 16] = 2155.496280654945
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -8.99, -8.01, diGamma(x), 0.001) - 2155.496280654945 ) / 2155.496280654945";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1057:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, -9.99, -9.01, 0.001}], 16] = 2258.851345832401
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -9.99, -9.01, diGamma(x), 0.001) - 2258.851345832401 ) / 2258.851345832401";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1058:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[PolyGamma[x], {x, -10.99, -10.01, 0.001}], 16] = 2352.347967017835
			 */
			mXparser.disableUlpRounding();
			expStr = "( sum(x, -10.99, -10.01, diGamma(x), 0.001) - 2352.347967017835 ) / 2352.347967017835";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-10 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1059:
			mXparser.disableUlpRounding();
			expStr = "sum(x0, 0.1, 2, diGamma(x0) - der( Gamma(x), x, x0) / Gamma(x0), 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-7 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1060:
			mXparser.disableUlpRounding();
			expStr = "sum(x, 0.01, 0.99, diGamma(1-x)-diGamma(x) - pi * cot(pi*x), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1061:
			mXparser.disableUlpRounding();
			expStr = "sum(x, 0.01, 0.99, diGamma(x+1)-diGamma(x) - 1/x, 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1062:
			mXparser.disableUlpRounding();
			expStr = "sum(x, 0.01, 0.99, diGamma(x+1) - ( -[gam] + sum(k, 1, 10000, 1/k - 1/(x+k) ) ), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-2 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1063:
			mXparser.disableUlpRounding();
			expStr = "sum(x, 0.01, 0.99, sum(N, 1, 10, diGamma(x+N) - diGamma(x) - sum(k, 0, N-1, 1/(x+k)) ), 0.01)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1064:
			mXparser.disableUlpRounding();
			expStr = "sum(m, 3, 20, sum(r, 1, m-1, diGamma(r/m) - ( -[gam] - ln(2*m) - (pi/2)*cot( r * pi/m ) + 2 * sum(n, 1, floor( (m-1)/2 ), cos(2*pi*n*r / m) * ln( sin(pi*n / m) ) ) ) ) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-12 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1065:
			expStr = "sum(n, 1, 10, 1) - 10";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1066:
			expStr = "sum(n, 10, 1, 1) - 10";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1067:
			expStr = "sum(n, 10, 10, 1) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1068:
			expStr = "prod(n, 1, 10, 2) - 2^10";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1069:
			expStr = "prod(n, 10, 1, 2) - 2^10";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1070:
			expStr = "prod(n, 10, 10, 2) - 2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1071:
			expStr = "avg(n, 1, 10, n) - 5.5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1072:
			expStr = "avg(n, 10, 1, n) - 5.5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1073:
			expStr = "avg(n, 10, 10, 1) - 1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1074:
			f = new Function("f(x) = par(0) + par(1) + par(-1) + [npar]");
			expStr = "f(1) - (1 + 1 + 1 + 1) + f(2) - (1 + 2 + 2 + 1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1075:
			f = new Function("f(x, y) = par(0) + par(1) + par(2) + par(-1) + par(-2) + [npar]");
			expStr = "f(1, 2) - (2 + 1 + 2 + 2 + 1 + 2) + f(-2,-1) - (2 + (-2) + (-1) + (-1) + (-2) + 2)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1076:
			f = new Function("f(x1, x2, x3, x4, x5) = prod(i, 1, [npar], par(i) )");
			expStr = "f(1,2,3,4,5) - 5!";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1077:
			f = new Function("f(x1, x2, x3, x4, x5) = prod(i, 1, [npar], par(-i) )");
			expStr = "f(1,2,3,4,5) - 5!";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1078:
			f = new Function("f(x1, x2, x3, x4, x5) = prod(i, -1, -[npar], par(i) )");
			expStr = "f(1,2,3,4,5) - 5!";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1079:
			f = new Function("f(...) = maxi(i, 1, [npar], par(i) )");
			expStr = "( f(1) - 1 ) + ( f(-1) + 1 ) + ( f(1,2,3,4,5) - 5 ) + ( f(1,2,6,10,4,5) - 10 ) + ( f(20, 1,2,3,4,5) - 20 )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1080:
			f = new Function("f(...) = sum(i, 1, par(0), sum(k, 1, [npar], par(i) + par(k)) )");
			expStr = "(f(1)-2)+(f(1,2)-12)+(f(1,2,3)-36)+(f(1,2,3,4)-80)+(f(1,2,3,4,5)-150)+(f(1,2,3,4,5,6)-252)+(f(1,2,3,4,5,6,7)-392)+(f(1,2,3,4,5,6,7,8)-576)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1081:
			f = new Function("f(...) = iff( [npar]>5, f(par(1),par(2),par(3),par(4),par(5)); [npar]=5, par(5)*f(par(1),par(2),par(3),par(4)); [npar]=4, par(4)*f(par(1),par(2),par(3)); [npar]=3, par(3)*f(par(1),par(2)); [npar]=2, par(2)*f(par(1)); [npar]=1, par(1) )");
			expStr = "f(1,2,3,4,5) - 1*2*3*4*5 + f(1,2,3,4,5,6) - 1*2*3*4*5 + f(1,2,3) - 1*2*3 + f(5,4,3,2,1) - 5*4*3*2*1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1082:
			f = new Function("sumv(...) = sum( i, 1, [npar], par(i) )");
			expStr = "( sumv(1) - add(1) ) + ( sumv(1,2) - add(1,2) ) + ( sumv(1,2,3) - add(1,2,3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1083:
			f = new Function("multiv(...) = prod( i, 1, [npar], par(i) )");
			expStr = "( multiv(1) - multi(1) ) + ( multiv(1,2) - multi(1,2) ) + ( multiv(1,2,3) - multi(1,2,3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1084:
			f = new Function("meanv(...) = avg( i, 1, [npar], par(i) )");
			expStr = "( meanv(1) - mean(1) ) + ( meanv(1,2) - mean(1,2) ) + ( meanv(1,2,3) - mean(1,2,3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1085:
			f = new Function("varv(...) = vari( i, 1, [npar], par(i) )");
			expStr = "( varv(1) - var(1) ) + ( varv(1,2) - var(1,2) ) + ( varv(1,2,3) - var(1,2,3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1086:
			f = new Function("stdv(...) = stdi( i, 1, [npar], par(i) )");
			expStr = "( stdv(1) - std(1) ) + ( stdv(1,2) - std(1,2) ) + ( stdv(1,2,3) - std(1,2,3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1087:
			f = new Function("minv(...) = mini( i, 1, [npar], par(i) )");
			expStr = "( minv(1) - min(1) ) + ( minv(1,2) - min(1,2) ) + ( minv(1,2,3) - min(1,2,3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1088:
			f = new Function("maxv(...) = maxi( i, 1, [npar], par(i) )");
			expStr = "( maxv(1) - max(1) ) + ( maxv(1,2) - max(1,2) ) + ( maxv(1,2,3) - max(1,2,3) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1089:
			FunExtVar fx = new FunExtVar();
			f = new Function("fx", fx);
			expStr = "( fx(1) - add(1) ) + ( fx(1,2) - add(1,2) ) + ( fx(1,2,3) - add(1,2,3) ) + ( fx(1,2,3,4) - add(1,2,3,4) ) +  ( fx(1,2,3,4,5) - add(1,2,3,4,5) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr, f);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1090:
			mXparser.disableUlpRounding();
			mXparser.disableAlmostIntRounding();
			expStr = "1 + 1e-14";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1 + 1e-14;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1091:
			mXparser.disableUlpRounding();
			mXparser.disableAlmostIntRounding();
			expStr = "-1 - 1e-14";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -1 - 1e-14;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1092:
			mXparser.disableUlpRounding();
			mXparser.enableAlmostIntRounding();
			expStr = "1 + 1e-14";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1093:
			mXparser.disableUlpRounding();
			mXparser.enableAlmostIntRounding();
			expStr = "-1 - 1e-14";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = -1;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			break;
		case 1094:
			expStr = "sum(n, -10, 10, sum(k, 0, abs(n), C(n,k) ) ) - sum(n, -10, 10, sum(k, 0, abs(n), nCk(n,k) ) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1095:
			expStr = "sum(n, -10, 10, sum(k, 0, abs(n), nPk(n,k) ) ) - sum(n, -10, 10, sum(k, 0, abs(n), nCk(n,k) * k! ) )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-50 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1096:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[Beta[x, y], {x, 0.1, 1, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 156045.8382688423
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 0.1, 10, sum(x, 0.1, 1, Beta(x,y), 0.01) , 0.01) - 156045.8382688423 ) / 156045.8382688423";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1097:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[Beta[x, y], {x, 1, 2, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 32015.62331640863
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 0.1, 10, sum(x, 1, 2, Beta(x,y), 0.01) , 0.01) - 32015.62331640863 ) / 32015.62331640863";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1098:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[Beta[x, y], {x, 2, 3, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 20432.57249276379
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 0.1, 10, sum(x, 2, 3, Beta(x,y), 0.01) , 0.01) - 20432.57249276379 ) / 20432.57249276379";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1099:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[Beta[x, y], {x, 3, 4, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 16648.09228879020
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 0.1, 10, sum(x, 3, 4, Beta(x,y), 0.01) , 0.01) - 16648.09228879020 ) / 16648.09228879020";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1100:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[Beta[x, y], {x, 4, 5, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 14709.95317941022
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 0.1, 10, sum(x, 4, 5, Beta(x,y), 0.01) , 0.01) - 14709.95317941022 ) / 14709.95317941022";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		}
		if (testResult == true)
			mXparser.consolePrint("OK");
		else
			mXparser.consolePrint("ERROR");
		return testResult;
	}
	private static boolean runTest_01101_01200(int testId) {
		mXparser.consolePrint("[" + testId + "] ");
		boolean testResult = false;
		double value = 0;
		double reg = 0;
		String expStr = "";
		switch (testId) {
		case 1101:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[Beta[x, y], {x, 5, 6, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 13491.02099096915
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 0.1, 10, sum(x, 5, 6, Beta(x,y), 0.01) , 0.01) - 13491.02099096915 ) / 13491.02099096915";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1102:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[Beta[x, y], {x, 6, 7, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 12632.76303747905
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 0.1, 10, sum(x, 6, 7, Beta(x,y), 0.01) , 0.01) - 12632.76303747905 ) / 12632.76303747905";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1103:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[Beta[x, y], {x, 7, 8, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 11984.64820297520
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 0.1, 10, sum(x, 7, 8, Beta(x,y), 0.01) , 0.01) - 11984.64820297520 ) / 11984.64820297520";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1104:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[Beta[x, y], {x, 8, 9, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 11471.56326266911
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 0.1, 10, sum(x, 8, 9, Beta(x,y), 0.01) , 0.01) - 11471.56326266911 ) / 11471.56326266911";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1105:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[Beta[x, y], {x, 9, 10, 0.01}], {y, 0.1, 10, 0.01} ], 16] = 11051.38593753202
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 0.1, 10, sum(x, 9, 10, Beta(x,y), 0.01) , 0.01) - 11051.38593753202 ) / 11051.38593753202";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1106:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[Beta[x, y], {x, 10, 100, 0.1}], {y, 10, 100, 0.1} ], 16] = 0.0002504318934669270
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 10, 100, sum(x, 10, 100, Beta(x,y), 0.1) , 0.1) - 0.0002504318934669270 ) / 0.0002504318934669270";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1107:
			expStr = "( isNaN( Beta(-1, 10 ) ) - [true] ) + ( isNaN( Beta(10, -1 ) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1108:
			expStr = "( isNaN( Beta(0, 10 ) ) - [true] ) + ( isNaN( Beta(10, 0 ) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1109:
			expStr = "( isNaN( Beta([NaN], 10 ) ) - [true] ) + ( isNaN( Beta(10, [NaN] ) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1110:
			expStr = "sum(x, 1, 10,  sum(y, 1, 10, der( Beta(x, y), x, x) - Beta(x,y) * ( diGamma(x) - diGamma(x+y) ) , 0.1), 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-4 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1111:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 0.1, 10, 0.1}], {y, 0.1, 10, 0.1} ], 16] = -52463.38489346371
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 0.1, 10, sum(x, 0.1, 10, logBeta(x,y), 0.1) , 0.1) - (-52463.38489346371) ) / (-52463.38489346371)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1112:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 10, 30, 0.1}], {y, 10, 30, 0.1} ], 16] = -1.092606400417545E6
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 10, 30, sum(x, 10, 30, logBeta(x,y), 0.1) , 0.1) - (-1.092606400417545E6) ) / (-1.092606400417545E6)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1113:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 30, 60, 0.1}], {y, 30, 60, 0.1} ], 16] = -5.631010749308205E6
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 30, 60, sum(x, 30, 60, logBeta(x,y), 0.1) , 0.1) - (-5.631010749308205E6) ) / (-5.631010749308205E6)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1114:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[Sum[ Sum[ Log[ Beta[x, y] ], {x, 60, 100, 0.1}], {y, 60, 100, 0.1} ], 16] = -1.784485348348011E7
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(y, 60, 100, sum(x, 60, 100, logBeta(x,y), 0.1) , 0.1) - (-1.784485348348011E7) ) / (-1.784485348348011E7)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1115:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 0.1, 1, 0.01} ], {b, 0.1, 1, 0.01} ], 16] = 196515.9203818563
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(b, 0.1, 1, sum(a, 0.1, 1, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 196515.9203818563 ) / 196515.9203818563";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1116:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 1, 2, 0.01} ], {b, 1, 2, 0.01} ], 16] = 24722.41740481695
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(b, 1, 2, sum(a, 1, 2, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 24722.41740481695 ) / 24722.41740481695";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1117:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 2, 3, 0.01} ], {b, 2, 3, 0.01} ], 16] = 4464.859252111892
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(b, 2, 3, sum(a, 2, 3, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 4464.859252111892 ) / 4464.859252111892";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1118:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 3, 4, 0.01} ], {b, 3, 4, 0.01} ], 16] = 918.5527313884891
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(b, 3, 4, sum(a, 3, 4, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 918.5527313884891 ) / 918.5527313884891";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1119:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 4, 5, 0.01} ], {b, 4, 5, 0.01} ], 16] = 199.6846597371872
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(b, 4, 5, sum(a, 4, 5, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 199.6846597371872 ) / 199.6846597371872";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1120:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 5, 6, 0.01} ], {b, 5, 6, 0.01} ], 16] = 44.76264323950131
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(b, 5, 6, sum(a, 5, 6, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 44.76264323950131 ) / 44.76264323950131";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1121:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 6, 7, 0.01} ], {b, 6, 7, 0.01} ], 16] = 10.23292155881704
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(b, 6, 7, sum(a, 6, 7, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 10.23292155881704 ) / 10.23292155881704";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1122:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 7, 8, 0.01} ], {b, 7, 8, 0.01} ], 16] = 2.371353239618641
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(b, 7, 8, sum(a, 7, 8, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 2.371353239618641 ) / 2.371353239618641";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1123:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 8, 9, 0.01} ], {b, 8, 9, 0.01} ], 16] = 0.5550610613543622
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(b, 8, 9, sum(a, 8, 9, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 0.5550610613543622 ) / 0.5550610613543622";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1124:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 9, 10, 0.01} ], {b, 9, 10, 0.01} ], 16] = 0.1309235541230968
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(b, 9, 10, sum(a, 9, 10, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.01) , 0.01) - 0.1309235541230968 ) / 0.1309235541230968";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-13 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1125:
			/* Wolfram Language 11.0.1 Engine for Linux ARM (32-bit)
			 * SetPrecision[  Sum[ Sum[ Sum[ Beta[x, a, b], {x, 0, 1, 0.1}], {a, 10, 80, 0.25} ], {b, 10, 80, 0.25} ], 16] = 0.0.0002449250611436628
			 */
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( sum(b, 10, 80, sum(a, 10, 80, sum(x, 0, 1, BetaInc(x, a, b) ,0.1) , 0.25) , 0.25) - 0.0002449250611436628 ) / 0.0002449250611436628";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1126:
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "sum(b, 1, 10, sum(a, 1, 10, sum(x, 0.1, 0.9, der( BetaInc(x, a, b), x, x ) - ( (1-x)^(b-1) ) * ( x^(a-1) ) ,0.1) , 0.1) , 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-4 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1127:
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaInc(1, a, b) - Beta(a,b) , 0.1) , 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1128:
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaInc(0, a, b) , 0.1) , 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1129:
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( isNaN( BetaInc(-1,1,1) ) - [true] ) + ( isNaN( BetaInc(2,1,1) ) - [true] ) + ( isNaN( BetaInc( [NaN] ,1,1) ) - [true] ) + ( isNaN( BetaInc(0.5, [NaN], 1) ) - [true] ) + ( isNaN( BetaInc(0.5, 1 , [NaN]) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1130:
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( isNaN( BetaInc(0.5,-1,1) ) - [true] ) + ( isNaN( BetaInc(0.5,1,-1) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1131:
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaI(1, a, b) - 1 , 0.1) , 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1132:
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "sum(b, 0.1, 10, sum(a, 0.1, 10, BetaI(0, a, b) , 0.1) , 0.1)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1133:
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( isNaN( BetaI(-1,1,1) ) - [true] ) + ( isNaN( BetaI(2,1,1) ) - [true] ) + ( isNaN( BetaI( [NaN] ,1,1) ) - [true] ) + ( isNaN( BetaI(0.5, [NaN], 1) ) - [true] ) + ( isNaN( BetaI(0.5, 1 , [NaN]) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1134:
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "( isNaN( BetaI(0.5,-1,1) ) - [true] ) + ( isNaN( BetaI(0.5,1,-1) ) - [true] )";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1135:
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "sum(b, 0.1, 80, sum(a, 0.1, 80, sum(x, 0, 1, BetaI(x, a, b) * Beta(a,b) - BetaInc(x,a,b) ,0.1) , 0.25) , 0.25)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1136:
			mXparser.disableAlmostIntRounding();
			mXparser.disableUlpRounding();
			expStr = "sum(b, 0.1, 80, sum(a, 0.1, 80, sum(x, 0, 1, BetaI(x, a, b) - BetaReg(x,a,b) ,0.1) , 0.25) , 0.25)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			mXparser.enableUlpRounding();
			mXparser.enableAlmostIntRounding();
			break;
		case 1137:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "5! = 120";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1138:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "5! == 120";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 1;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1139:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "5!=5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1140:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "5 != 5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1141:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = ".2-0.2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1142:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "-.2+0.2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1143:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "0.2-.2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1144:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "-0.2+.2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1145:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "4^.5";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1146:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "4^(-.5)";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 0.5;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1147:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "2+0.2+.4";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2.6;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1148:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "2+.4+0.2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2.6;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1149:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = ".4+2+0.2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2.6;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1150:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "2+0.2-.2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1151:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "2-.2+0.2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1152:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "-.2+2+0.2";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 2;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1153:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "12+.2e-1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 12.02;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
				testResult = true;
			mXparser.consolePrint(value + " reg ... " + reg + " --> ");
			break;
		case 1154:
			mXparser.enableAlmostIntRounding();
			mXparser.enableUlpRounding();
			expStr = "12+.2e+1";
			mXparser.consolePrint(expStr + " ...... ");
			exp[testId] = new Expression(expStr);
			value = exp[testId].calculate();
			reg = 14;
			if ( MathFunctions.abs(reg - value) <= 1e-14 )
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
		int numberOfTests = 1154;
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
			if (testId <= 100) test = runTest_00000_00100(testId);
			else if (testId <=   200) test = runTest_00101_00200(testId);
			else if (testId <=   300) test = runTest_00201_00300(testId);
			else if (testId <=   400) test = runTest_00301_00400(testId);
			else if (testId <=   500) test = runTest_00401_00500(testId);
			else if (testId <=   600) test = runTest_00501_00600(testId);
			else if (testId <=   700) test = runTest_00601_00700(testId);
			else if (testId <=   800) test = runTest_00701_00800(testId);
			else if (testId <=   900) test = runTest_00801_00900(testId);
			else if (testId <=  1000) test = runTest_00901_01000(testId);
			else if (testId <=  1100) test = runTest_01001_01100(testId);
			else if (testId <=  1200) test = runTest_01101_01200(testId);
			else test = false;
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
