/*
 * @(#)RegTestSyntax.java        1.0    2010-01-30
 * 
 * You may use this software under the condition of "Simplified BSD License"
 * 
 * Copyright 2010 MARIUSZ GROMADA. All rights reserved.
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
 *     mariusz.gromada@gmail.com
 *     http://multifraktal.net/
 *     http://mxparser.sourceforge.net/
 * 
 *                              Asked if he believes in one God, a mathematician answered: 
 *                              "Yes, up to isomorphism."  
 */ 
package org.mariuszgromada.math.mxparser.regressiontesting;

import org.mariuszgromada.math.mxparser.Argument;
import org.mariuszgromada.math.mxparser.Expression;


/**
 * RegTestSyntax - regression tests for the expression syntax checking
 * 
 * @author         <b>Mariusz Gromada</b><br/>
 *                 <a href="mailto:mariusz.gromada@gmail.com">mariusz.gromada@gmail.com</a><br>
 *                 <a href="http://multifraktal.net/">http://multifraktal.net/</a><br>
 *                 <a href="http://mxparser.sourceforge.net/">http://mxparser.sourceforge.net/</a><br>
 *                         
 * @version        1.0
 * 
 * @see Expression
 */
public class RegTestSyntax {

	
	private static Expression[] exp;
	
	private static boolean runTest(int testId) {
		
		System.out.println("[" + testId + "] ----------------------------------------------");
		
		boolean testResult = false;
		boolean syn;
		boolean reg;
		String expStr = "";

		Argument x = new Argument("x");
		Expression e;
		
		switch (testId) {
		
		case 0:
			
			expStr = "";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr, x);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;

		case 1:
			
			expStr = "1++";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
		
		case 2:
			
			expStr = "1+1-";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 3:
			
			expStr = "+-1";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 4:
			
			expStr = "1-(2))";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 5:
			
			expStr = "1id";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;

		case 6:
			
			expStr = "(1,2,3)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
			
		case 7:
			
			expStr = "f(1,2,3)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			

		case 8:
			
			expStr = "sin";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
			
			
		case 9:
			
			expStr = "sin()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
			
		case 10:
			
			expStr = "cos(1,2)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 11:
			
			expStr = "log";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 12:
			
			expStr = "log()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;

		case 13:
			
			expStr = "log(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
			
		case 14:
			
			expStr = "log(1,2,3)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 15:
			
			expStr = "if";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 16:
			
			expStr = "if()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 17:
			
			expStr = "if(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 18:
			
			expStr = "if(1,2)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 19:
			
			expStr = "if(1,2,3,4)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 20:
			
			expStr = "pi()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 21:
			expStr = "pi(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 22:
			
			expStr = "[K*]()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 23:
			
			expStr = "[K*](12)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 24:
			
			expStr = "min";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
			
		case 25:
			
			expStr = "min()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 26:
			
			expStr = "max";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 27:
			
			expStr = "max()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 28:
			
			expStr = "iff";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			

		case 29:
			
			expStr = "iff()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
			
		case 30:
			
			expStr = "iff(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 31:
			
			expStr = "iff(1,2,3)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
			
		case 32:
			
			expStr = "iff(1,2,3,4,5)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			

		case 33:
			
			expStr = "sum";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 34:
			
			expStr = "sum()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 35:
			
			expStr = "sum(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 36:
			
			expStr = "sum(1,2)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 37:
			
			expStr = "sum(1,2,3)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 38:
			
			expStr = "sum(1,2,3,4,5,6)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;					

		case 39:
			
			expStr = "prod()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 40:
			
			expStr = "prod(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 41:
			
			expStr = "prod(1,2)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 42:
			
			expStr = "prod(1,2,3)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 43:
			
			expStr = "prod(1,2,3,4,5,6)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;					
			
		case 44:
			
			expStr = "sum(1,2,3,4)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 45:
			
			expStr = "sum(a*b,2,3,4)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			

		case 46:
			
			expStr = "sum(i,1,a,4)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
			
		case 47:
			
			expStr = "prod(1,2,3,4)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 48:
			
			expStr = "prod(a*b,2,3,4)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			

		case 49:
			
			expStr = "prod(i,1,a,4)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			

		case 50:
			
			expStr = "int";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
						
		case 51:
			
			expStr = "int()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			

		case 52:
			
			expStr = "int(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;					
		
		case 53:
			
			expStr = "int(1,2)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;					
			
		case 54:
			
			expStr = "int(1,2,3)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 55:
			
			expStr = "int(1,2,3,4,5)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 56:
			
			x = new Argument("x", 5);
			expStr = "int(,2,3,4)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 57:
			
			expStr = "int(1,2,0,1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				
		
		case 58:
			
			expStr = "der";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;		

		case 59:
			
			expStr = "der()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
			

		case 60:
			
			expStr = "der(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				
			

		case 61:
			
			expStr = "der(1,2,3)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				

		case 62:
			
			expStr = "der(1,2,3,4,5)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
		
		case 63:
			
			expStr = "der(1,2)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				

		case 64:
			
			expStr = "der+";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;		

		case 65:
			
			expStr = "der+()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
			

		case 66:
			
			expStr = "der+(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				
			

		case 67:
			
			expStr = "der+(1,2,3)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				

		case 68:
			
			expStr = "der+(1,2,3,4,5)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
		
		case 69:
			
			expStr = "der+(1,2)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				
		
		case 70:
			
			expStr = "der-";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;		

		case 71:
			
			expStr = "der-()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
			

		case 72:
			
			expStr = "der-(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				
			

		case 73:
			
			expStr = "der-(1,2,3)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				

		case 74:
			
			expStr = "der-(1,2,3,4,5)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;			
		
		case 75:
			
			expStr = "der-(1,2)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				
		
		
		case 76:
			
			expStr = "diff";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;		
		
		case 77:
			
			expStr = "diff()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;	
			
		case 78:
			
			expStr = "diff(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;	
			
		case 79:
			
			expStr = "diff(1,2,3,4)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				
		
		case 80:
			
			expStr = "diff(1,2)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
		case 81:
			
			expStr = "difb";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;		
		
		case 82:
			
			expStr = "difb()";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;	
			
		case 83:
			
			expStr = "difb(1)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;	
			
		case 84:
			
			expStr = "difb(1,2,3,4)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;				
		
		case 85:
			
			expStr = "difb(1,2)";
			System.out.print(expStr + " ...... ");
			e = new Expression(expStr);
			exp[testId] = e;
			reg = false;
			syn = e.checkSyntax();

			
			
			if (syn == reg)
				testResult = true;
			
			System.out.print(syn + " reg ... " + reg + " --> ");
			
			break;
			
			
		}


		
		
		if (testResult == true)
			System.out.print("OK");
		else
			System.out.print("ERROR");
		
		return testResult;
		
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		int numberOfTests = 85;
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
					
			System.out.println("\n");
			
			System.out.println(exp[testId].getErrorMessage());
				
			System.out.println(", time: " + exp[testId].getComputingTime() + " s.");
			System.out.println("---------------------------------------------- [" + testId + "]");
			
			
			
		}
		
        long end =  System.currentTimeMillis();

		System.out.println("OK : " + nOk + ", ERRORs: " + nError + ", total time: " + (end-start)/1000.0 + " s.");
		
		for (int testId = 0; testId <= numberOfTests; testId++) {
			
			
			if (!tests[testId])
				System.out.println("ERROR: " + testId);
			
		}
		
	}

}
