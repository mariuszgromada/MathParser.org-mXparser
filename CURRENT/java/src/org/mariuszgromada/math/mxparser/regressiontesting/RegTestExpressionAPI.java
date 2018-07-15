/*
 * @(#)RegTestExpressionAPI.java        4.2.0   2018-07-15
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

import java.util.List;

import org.mariuszgromada.math.mxparser.Argument;
import org.mariuszgromada.math.mxparser.Constant;
import org.mariuszgromada.math.mxparser.Expression;
import org.mariuszgromada.math.mxparser.Function;
import org.mariuszgromada.math.mxparser.RecursiveArgument;
import org.mariuszgromada.math.mxparser.mXparser;
import org.mariuszgromada.math.mxparser.mathcollection.MathFunctions;
import org.mariuszgromada.math.mxparser.mathcollection.NumberTheory;
import org.mariuszgromada.math.mxparser.parsertokens.*;

/**
 * RegTestExpressionAPI - regression tests for the expression API
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
public class RegTestExpressionAPI {
	/**
	 * Runs API regression tests.
	 *
	 * @return Number of tests with error result.
	 */
	public static int start() {
        long start =  System.currentTimeMillis();
		boolean syn1, syn2, syn3, syn4, syn5, syn6, syn7, syn8, b1, b2, b3;
		String s1, s2;
		int i1, i2, n1, n2, n3, n4, n5, n6;
		Argument A1, A2, A3, A4, A5;
		Function F1, F2, F3, F4, F5;
		Constant C1, C2, C3, C4, C5;
		double d1, d2, d3;
		Constant c1 = new Constant("c1",1);
		Constant c2 = new Constant("c2",2);
		Constant c3 = new Constant("c3",3);
		//Constant c4 = new Constant("c4",4);
		Constant c5 = new Constant("c5",5);
		Constant c6 = new Constant("c6",6);
		Function f1 = new Function("f1","1","x");
		Function f2 = new Function("f2","2","x");
		Function f3 = new Function("f3","3","x");
		Function f4 = new Function("f4","4","x");
		//Function f5 = new Function("f5","5","x");
		Function f6 = new Function("f6","6","x");
		Function f7 = new Function("f7","7","x");
		Argument a1 = new Argument("a1",1);
		Argument a2 = new Argument("a2",2);
		Argument a3 = new Argument("a3",3);
		Argument a4 = new Argument("a4",4);
		Argument a5 = new Argument("a5",5);
		Argument a6 = new Argument("a6",6);
		Argument a7 = new Argument("a7",7);
		//Argument a8 = new Argument("a8",8);
		boolean[] test = new boolean[100];
		for (int i = 0; i < 100; i++)
			test[i] = false;
		Expression e;
		int testId = -1;
		/*
		 * 0. public Expression()
		 */
		testId++;
		e = new Expression();
		if (	e.getExpressionString().equals("")
				&& e.getArgumentsNumber() == 0
				&& e.getConstantsNumber() == 0
				&& e.getFunctionsNumber() == 0	)
			test[testId] = true;
		/*
		 * 1.
		 */
		testId++;
		e = new Expression("a1+c2", a1, a2, a3, a4, a5);
		if (	e.getExpressionString().equals("a1+c2")
				&& e.getArgumentsNumber() == 5
				&& e.getConstantsNumber() == 0
				&& e.getFunctionsNumber() == 0	)
			test[testId] = true;
		/*
		 * 2.
		 */
		testId++;
		e = new Expression("a1+c2", a1, f1, a2, f2, a3, a4, f3, a5, f4);
		if (	e.getExpressionString().equals("a1+c2")
				&& e.getArgumentsNumber() == 5
				&& e.getConstantsNumber() == 0
				&& e.getFunctionsNumber() == 4	)
			test[testId] = true;
		/*
		 * 3
		 */
		testId++;
		e = new Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
		if (	e.getExpressionString().equals("a1+c2")
				&& e.getArgumentsNumber() == 5
				&& e.getConstantsNumber() == 3
				&& e.getFunctionsNumber() == 4	)
			test[testId] = true;
		/*
		 * 4. void setExpressionString(String expressionString), String getExpressionString(), void clearExpressionString()
		 */
		testId++;
		syn1 = e.checkSyntax();
		e.setExpressionString("c2+a1");
		syn2 = e.getSyntaxStatus();
		syn3 = e.checkSyntax();
		s1 = e.getExpressionString();
		syn4 = e.getSyntaxStatus();
		syn5 = e.checkSyntax();
		e.clearExpressionString();
		syn6 = e.getSyntaxStatus();
		syn7 = e.checkSyntax();
		s2 = e.getExpressionString();
		syn8 = e.getSyntaxStatus();
		if (	s1.equals("c2+a1")
				&& s2.equals("")
				&& syn1 == Expression.NO_SYNTAX_ERRORS
				&& syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				&& syn3 == Expression.NO_SYNTAX_ERRORS
				&& syn4 == Expression.NO_SYNTAX_ERRORS
				&& syn5 == Expression.NO_SYNTAX_ERRORS
				&& syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				&& syn7 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				&& syn8 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				)
			test[testId] = true;
		/*
		 * 5. void setDescription(String description), String getDescription(), void clearDescription()
		 */
		testId++;
		e.setExpressionString("c1+a2");
		syn1 = e.checkSyntax();
		e.setDescription("opis");
		s1 = e.getDescription();
		e.clearDescription();
		s2 = e.getDescription();
		syn2 = e.getSyntaxStatus();
		if (	s1.equals("opis")
				&& s2.equals("")
				&& syn1 == Expression.NO_SYNTAX_ERRORS
				&& syn2 == Expression.NO_SYNTAX_ERRORS
				)
			test[testId] = true;
		/*
		 * 6. void setVerboseMode(), boolean getVerboseMode(), void setSilentMode()
		 */
		testId++;
		syn1 = e.checkSyntax();
		b1 = e.getVerboseMode();
		e.setVerboseMode();
		b2 = e.getVerboseMode();
		e.setSilentMode();
		b3 = e.getVerboseMode();
		syn2 = e.getSyntaxStatus();
		if (	b1 == false
				&& b2 == true
				&& b3 == false
				&& syn1 == Expression.NO_SYNTAX_ERRORS
				&& syn2 == Expression.NO_SYNTAX_ERRORS
				)
			test[testId] = true;
		/*
		 * 7.
		 * public boolean getRecursiveMode()
		 */
		Function fa = new Function("f(x,y)=sin(x)+cos(y)");
		Function fb = new Function("f(x,y)=sin(x)+cos(y)+f(1,2)");
		testId++;
		syn1=fa.checkSyntax();
		syn2=fb.checkSyntax();
		b1 = fa.getRecursiveMode();
		b2 = fb.getRecursiveMode();
		if (	b1 == false
				&& b2 == true
				&& syn1 == Expression.NO_SYNTAX_ERRORS
				&& syn2 == Expression.NO_SYNTAX_ERRORS
				)
			test[testId] = true;
		/*
		 * 8.
		 * Expression(String expressionString)
		 */
		testId++;
		e = new Expression("1+2");
		if (	e.getExpressionString().equals("1+2")
				&& e.getArgumentsNumber() == 0
				&& e.getConstantsNumber() == 0
				&& e.getFunctionsNumber() == 0	)
			test[testId] = true;
		/*
		 * 9.
		 * Expression(String expressionString)
		 */
		testId++;
		e = new Expression("1+2", a1, a2, a3);
		if (	e.getExpressionString().equals("1+2")
				&& e.getArgumentsNumber() == 3
				&& e.getConstantsNumber() == 0
				&& e.getFunctionsNumber() == 0	)
			test[testId] = true;
		/*
		 * 10.
		 * void addArguments(Argument... arguments)
		 * void addArguments( List<Argument> argumentsList)
		 * defineArguments(String... argumentsNames)
		 * defineArgument(String argumentName, double argumentValue)
		 */
		testId++;
		e = new Expression("1+2");
		syn1 = e.checkSyntax();
		e.addDefinitions(a6, a7);
		syn2 = e.getSyntaxStatus();
		syn3 = e.checkSyntax();
		e.addDefinitions(a1, a2, a3, a4, a5);
		syn4 = e.getSyntaxStatus();
		syn5 = e.checkSyntax();
		e.defineArguments("x1", "x2", "x3");
		syn6 = e.getSyntaxStatus();
		syn7 = e.checkSyntax();
		e.defineArgument("x", 1);
		syn8 = e.getSyntaxStatus();
		if (	e.getExpressionString().equals("1+2")
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
			test[testId] = true;
		/*
		 * 11.
		 * int getArgumentIndex(String argumentName)
		 * Argument getArgument(String argumentName)
		 * Argument getArgument(int argumentIndex)
		 * int getArgumentsNumber()
		 */
		testId++;
		syn1 = e.checkSyntax();
		i1 = e.getArgumentIndex("asdsa"); //-1
		i2 = e.getArgumentIndex("x1"); //7
		A1 = e.getArgument("asasas"); //null
		A2 = e.getArgument("a2"); //a2
		A3 = e.getArgument(-1); //null
		A4 = e.getArgument(23);//null
		A5 = e.getArgument(1);//a7
		n1 = e.getArgumentsNumber();//11
		syn2 = e.getSyntaxStatus();
		if (	i1 == -1
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
			test[testId] = true;
		/*
		 * 12.
		 * void setArgumentValue
		 * double getArgumentValue
		 */
		testId++;
		syn1 = e.checkSyntax();
		d1 = e.getArgumentValue("a1");
		syn2 = e.getSyntaxStatus();
		e.setArgumentValue("asds", 1);
		syn3 = e.getSyntaxStatus();
		syn4 = e.checkSyntax();
		e.setArgumentValue("a1", 10);
		syn4 = e.getSyntaxStatus();
		d2 = e.getArgumentValue("asdfasdf");
		d3 = e.getArgumentValue("a1");
		syn5 = e.getSyntaxStatus();
		if (	d1 == 1
				&& Double.isNaN(d2)
				&& d3 == 10
				&& syn1 == Expression.NO_SYNTAX_ERRORS
				&& syn2 == Expression.NO_SYNTAX_ERRORS
				&& syn3 == Expression.NO_SYNTAX_ERRORS
				&& syn4 == Expression.NO_SYNTAX_ERRORS
				&& syn5 == Expression.NO_SYNTAX_ERRORS
				)
			test[testId] = true;
		/*
		 * 13.
		 * void removeArguments(String... argumentsNames)
		 * void removeArguments(Argument... arguments)
		 * void removeAllArguments()
		 */
		testId++;
		e.setExpressionString("1+2");
		syn1 = e.checkSyntax();
		n1 = e.getArgumentsNumber();
		e.removeArguments("asfdf");
		syn2 = e.getSyntaxStatus();
		n2 = e.getArgumentsNumber();
		e.removeArguments("x1","x2");
		n3 = e.getArgumentsNumber();
		syn3 = e.checkSyntax();
		e.removeArguments(a3);
		n4 = e.getArgumentsNumber();
		e.removeArguments(a1,a2);
		syn4 = e.getSyntaxStatus();
		n5 = e.getArgumentsNumber();
		syn5 = e.checkSyntax();
		e.removeAllArguments();
		n6 = e.getArgumentsNumber();
		syn6 = e.getSyntaxStatus();
		if (	n2 == n1
				&& n2-n3 == 2
				&& n3-n4 == 1
				&& n4-n5 == 2
				&& n6 == 0
				&& syn1 == Expression.NO_SYNTAX_ERRORS
				&& syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				&& syn3 == Expression.NO_SYNTAX_ERRORS
				&& syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				&& syn5 == Expression.NO_SYNTAX_ERRORS
				&& syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				)
			test[testId] = true;
		/*
		 * 14.
		 * void addConstants(Constant... constants)
		 * void addConstants( List<Constant> constantsList)
		 * void defineConstant(String constantName, double constantValue)
		 */
		testId++;
		e = new Expression("1+2", new Constant("a=5"));
		syn1 = e.checkSyntax();
		e.addDefinitions(c5, c6);
		syn2 = e.getSyntaxStatus();
		syn3 = e.checkSyntax();
		e.addDefinitions(c1, c2, c3, c5, c6);
		syn4 = e.getSyntaxStatus();
		syn5 = e.checkSyntax();
		e.defineConstant("cx1",1);
		e.removeDefinitions(c5, c6);
		syn6 = e.checkSyntax();
		e.removeDefinitions(c5, c6);
		if (	e.getExpressionString().equals("1+2")
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
			test[testId] = true;
		/*
		 * 15.
		 * int getConstantIndex(String constantName)
		 * Constant getConstant(String constantName)
		 * Constant getConstant(int constantIndex)
		 * int getConstantsNumber()
		 */
		testId++;
		syn1 = e.checkSyntax();
		i1 = e.getConstantIndex("asdsa"); //-1
		i2 = e.getConstantIndex("c6"); //-1
		C1 = e.getConstant("asasas"); //null
		C2 = e.getConstant("c1"); //c1
		C3 = e.getConstant(-1); //null
		C4 = e.getConstant(23);//null
		C5 = e.getConstant(1);//c1
		n1 = e.getConstantsNumber();//5
		syn2 = e.getSyntaxStatus();
		if (	i1 == -1
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
			test[testId] = true;
		/*
		 * 16.
		 * void removeConstants(String... constantsNames)
		 * void removeConstants(Constant... constants)
		 * void removeAllConstants()
		 */
		testId++;
		e.defineConstant("cx2",1);
		e.setExpressionString("1+2");
		syn1 = e.checkSyntax();
		n1 = e.getConstantsNumber();
		e.removeConstants("asfdf");
		syn2 = e.getSyntaxStatus();
		n2 = e.getConstantsNumber();
		e.removeConstants("cx1","cx2");
		n3 = e.getConstantsNumber();
		syn3 = e.checkSyntax();
		e.removeConstants(c1);
		n4 = e.getConstantsNumber();
		e.removeConstants(c2,c3);
		syn4 = e.getSyntaxStatus();
		n5 = e.getConstantsNumber();
		syn5 = e.checkSyntax();
		e.removeAllConstants();
		n6 = e.getConstantsNumber();
		syn6 = e.getSyntaxStatus();
		if (	n2 == n1
				&& n2-n3 == 2
				&& n3-n4 == 1
				&& n4-n5 == 2
				&& n6 == 0
				&& syn1 == Expression.NO_SYNTAX_ERRORS
				&& syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				&& syn3 == Expression.NO_SYNTAX_ERRORS
				&& syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				&& syn5 == Expression.NO_SYNTAX_ERRORS
				&& syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				)
			test[testId] = true;
		/*
		 * 17.
		 * void addFunctions(Function... functions)
		 * void addFunctions( List<Function> functionsList)
		 * void defineFunction(String functionName, String  functionExpressionString,...
		 */
		testId++;
		e = new Expression("1+2");
		syn1 = e.checkSyntax();
		e.addDefinitions(f6, f7);
		syn2 = e.getSyntaxStatus();
		syn3 = e.checkSyntax();
		e.addDefinitions(f1, f2, f3, f4, f6);
		syn4 = e.getSyntaxStatus();
		e.removeDefinitions(f6);
		syn5 = e.checkSyntax();
		e.defineFunction("ff1", "1", "x");
		syn6 = e.getSyntaxStatus();
		if (	e.getExpressionString().equals("1+2")
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
			test[testId] = true;
		/*
		 * 18.
		 * int getFunctionIndex(String functionName)
		 * Function getFunction(String functionName)
		 * Function getFunction(int functionIndex)
		 * int getFunctionsNumber()
		 */
		testId++;
		syn1 = e.checkSyntax();
		i1 = e.getFunctionIndex("asdsa"); //-1
		i2 = e.getFunctionIndex("f7"); //0
		F1 = e.getFunction("asasas"); //null
		F2 = e.getFunction("f1"); //f1
		F3 = e.getFunction(-1); //null
		F4 = e.getFunction(23);//null
		F5 = e.getFunction(0);//f7
		n1 = e.getFunctionsNumber();//7
		syn2 = e.getSyntaxStatus();
		if (	i1 == -1
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
			test[testId] = true;
		/*
		 * 19.
		 * void removeFunctions(String... functionsNames)
		 * void removeFunctions(Function... functions)
		 * void removeAllFunctions()
		 */
		testId++;
		e.setExpressionString("1+2");
		syn1 = e.checkSyntax();
		n1 = e.getFunctionsNumber();
		e.removeFunctions("asfdf");
		syn2 = e.getSyntaxStatus();
		n2 = e.getFunctionsNumber();
		e.removeFunctions("f1","f2");
		n3 = e.getFunctionsNumber();
		syn3 = e.checkSyntax();
		e.removeFunctions(f3);
		n4 = e.getFunctionsNumber();
		e.removeFunctions(f6,f7);
		syn4 = e.getSyntaxStatus();
		n5 = e.getFunctionsNumber();
		syn5 = e.checkSyntax();
		e.removeAllFunctions();
		n6 = e.getFunctionsNumber();
		syn6 = e.getSyntaxStatus();
		if (	n2 == n1
				&& n2-n3 == 2
				&& n3-n4 == 1
				&& n4-n5 == 2
				&& n6 == 0
				&& syn1 == Expression.NO_SYNTAX_ERRORS
				&& syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				&& syn3 == Expression.NO_SYNTAX_ERRORS
				&& syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				&& syn5 == Expression.NO_SYNTAX_ERRORS
				&& syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
				)
			test[testId] = true;
		/*
		 * 20.
		 * double calculate()
		 * String getHelp()
		 * String getHelp(String word)
		 * String getLicense()
		 */
		testId++;
		syn1 = e.checkSyntax();
		d1 = e.calculate();
		syn2 = e.getSyntaxStatus();
		if (	syn1 == Expression.NO_SYNTAX_ERRORS
				&& syn2 == Expression.NO_SYNTAX_ERRORS
				&& d1 == 3)
			test[testId] = true;
		/*
		 * 21. Tokens
		 */
		testId++;
		e = new Expression("1+(2+3)-sin(10)");
		List<Token> tokens = e.getCopyOfInitialTokens();
		mXparser.consolePrintTokens(tokens);
		if (
				(tokens.get(0).tokenStr.equals("1")) &&
				(tokens.get(1).tokenStr.equals("+")) &&
				(tokens.get(2).tokenStr.equals("(")) &&
				(tokens.get(3).tokenStr.equals("2")) &&
				(tokens.get(4).tokenStr.equals("+")) &&
				(tokens.get(5).tokenStr.equals("3")) &&
				(tokens.get(6).tokenStr.equals(")")) &&
				(tokens.get(7).tokenStr.equals("-")) &&
				(tokens.get(8).tokenStr.equals("sin")) &&
				(tokens.get(9).tokenStr.equals("(")) &&
				(tokens.get(10).tokenStr.equals("10")) &&
				(tokens.get(11).tokenStr.equals(")")) &&

				(tokens.get(0).tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
				(tokens.get(1).tokenTypeId == Operator.TYPE_ID) &&
				(tokens.get(2).tokenTypeId == ParserSymbol.TYPE_ID) &&
				(tokens.get(3).tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
				(tokens.get(4).tokenTypeId == Operator.TYPE_ID) &&
				(tokens.get(5).tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
				(tokens.get(6).tokenTypeId == ParserSymbol.TYPE_ID) &&
				(tokens.get(7).tokenTypeId == Operator.TYPE_ID) &&
				(tokens.get(8).tokenTypeId == Function1Arg.TYPE_ID) &&
				(tokens.get(9).tokenTypeId == ParserSymbol.TYPE_ID) &&
				(tokens.get(10).tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
				(tokens.get(11).tokenTypeId == ParserSymbol.TYPE_ID) &&

				(tokens.get(0).tokenLevel == 0) &&
				(tokens.get(1).tokenLevel == 0) &&
				(tokens.get(2).tokenLevel == 1) &&
				(tokens.get(3).tokenLevel == 1) &&
				(tokens.get(4).tokenLevel == 1) &&
				(tokens.get(5).tokenLevel == 1) &&
				(tokens.get(6).tokenLevel == 1) &&
				(tokens.get(7).tokenLevel == 0) &&
				(tokens.get(8).tokenLevel == 1) &&
				(tokens.get(9).tokenLevel == 2) &&
				(tokens.get(10).tokenLevel == 2) &&
				(tokens.get(11).tokenLevel == 2)

		) test[testId] = true;
		/*
		 * 22. Invalid tokens
		 */
		testId++;
		e = new Expression("token1+toke2n*sin(token3-t3^t5)^t45+pi-pie+e");
		tokens = e.getCopyOfInitialTokens();
		mXparser.consolePrintTokens(tokens);
		if (
				(tokens.get(0).tokenStr.equals("token1")) &&
				(tokens.get(1).tokenStr.equals("+")) &&
				(tokens.get(2).tokenStr.equals("toke2n")) &&
				(tokens.get(3).tokenStr.equals("*")) &&
				(tokens.get(4).tokenStr.equals("sin")) &&
				(tokens.get(5).tokenStr.equals("(")) &&
				(tokens.get(6).tokenStr.equals("token3")) &&
				(tokens.get(7).tokenStr.equals("-")) &&
				(tokens.get(8).tokenStr.equals("t3")) &&
				(tokens.get(9).tokenStr.equals("^")) &&
				(tokens.get(10).tokenStr.equals("t5")) &&
				(tokens.get(11).tokenStr.equals(")")) &&
				(tokens.get(12).tokenStr.equals("^")) &&
				(tokens.get(13).tokenStr.equals("t45")) &&
				(tokens.get(14).tokenStr.equals("+")) &&
				(tokens.get(15).tokenStr.equals("pi")) &&
				(tokens.get(16).tokenStr.equals("-")) &&
				(tokens.get(17).tokenStr.equals("pie")) &&
				(tokens.get(18).tokenStr.equals("+")) &&
				(tokens.get(19).tokenStr.equals("e")) &&

				(tokens.get(0).tokenTypeId == Token.NOT_MATCHED) &&
				(tokens.get(1).tokenTypeId == Operator.TYPE_ID) &&
				(tokens.get(2).tokenTypeId == Token.NOT_MATCHED) &&
				(tokens.get(3).tokenTypeId == Operator.TYPE_ID) &&
				(tokens.get(4).tokenTypeId == Function1Arg.TYPE_ID) &&
				(tokens.get(5).tokenTypeId == ParserSymbol.TYPE_ID) &&
				(tokens.get(6).tokenTypeId == Token.NOT_MATCHED) &&
				(tokens.get(7).tokenTypeId == Operator.TYPE_ID) &&
				(tokens.get(8).tokenTypeId == Token.NOT_MATCHED) &&
				(tokens.get(9).tokenTypeId == Operator.TYPE_ID) &&
				(tokens.get(10).tokenTypeId == Token.NOT_MATCHED) &&
				(tokens.get(11).tokenTypeId == ParserSymbol.TYPE_ID) &&
				(tokens.get(12).tokenTypeId == Operator.TYPE_ID) &&
				(tokens.get(13).tokenTypeId == Token.NOT_MATCHED) &&
				(tokens.get(14).tokenTypeId == Operator.TYPE_ID) &&
				(tokens.get(15).tokenTypeId == ConstantValue.TYPE_ID) &&
				(tokens.get(16).tokenTypeId == Operator.TYPE_ID) &&
				(tokens.get(17).tokenTypeId == Token.NOT_MATCHED) &&
				(tokens.get(18).tokenTypeId == Operator.TYPE_ID) &&
				(tokens.get(19).tokenTypeId == ConstantValue.TYPE_ID) &&

				(tokens.get(0).tokenLevel == 0) &&
				(tokens.get(1).tokenLevel == 0) &&
				(tokens.get(2).tokenLevel == 0) &&
				(tokens.get(3).tokenLevel == 0) &&
				(tokens.get(4).tokenLevel == 1) &&
				(tokens.get(5).tokenLevel == 2) &&
				(tokens.get(6).tokenLevel == 2) &&
				(tokens.get(7).tokenLevel == 2) &&
				(tokens.get(8).tokenLevel == 2) &&
				(tokens.get(9).tokenLevel == 2) &&
				(tokens.get(10).tokenLevel == 2) &&
				(tokens.get(11).tokenLevel == 2) &&
				(tokens.get(12).tokenLevel == 0) &&
				(tokens.get(13).tokenLevel == 0) &&
				(tokens.get(14).tokenLevel == 0) &&
				(tokens.get(15).tokenLevel == 0) &&
				(tokens.get(16).tokenLevel == 0) &&
				(tokens.get(17).tokenLevel == 0) &&
				(tokens.get(18).tokenLevel == 0) &&
				(tokens.get(19).tokenLevel == 0)

		) test[testId] = true;
		/*
		 * 23. Function Extension - calculate()
		 */
		testId++;
		Function ff = new Function("ff", new FunExt());
		if (ff.calculate(2,3) == 6) test[testId] = true;
		/*
		 * 24. Function Extension - setArgumentValue - calculate
		 */
		testId++;
		ff = new Function("ff", new FunExt());
		ff.setArgumentValue(0, 3);
		ff.setArgumentValue(1, 4);
		if (ff.calculate() == 12) test[testId] = true;
		/*
		 * 25. Function Extension - parameters
		 */
		testId++;
		ff = new Function("ff", new FunExt());
		if (
				(ff.getParametersNumber() == 2) &&
				(ff.getFunctionBodyType() == Function.BODY_EXTENDED) &&
				(ff.checkSyntax() == Function.NO_SYNTAX_ERRORS)
			) test[testId] = true;
		/*
		 * 26. Function Extension - calculate
		 */
		testId++;
		ff = new Function("ff", new FunExt());
		Argument x = new Argument("x = 5");
		Argument y = new Argument("y = 6");
		if (ff.calculate(x, y) == 30) test[testId] = true;
		/*
		 * 27. Invalid tokens looks like
		 */
		testId++;
		e = new Expression("1pi+2pi3+((_d1(a)+(_d^_g)))))");
		tokens = e.getCopyOfInitialTokens();
		mXparser.consolePrintTokens(tokens);
		if (
				(tokens.get(0).tokenStr.equals("1pi")) &&
				(tokens.get(1).tokenStr.equals("+")) &&
				(tokens.get(2).tokenStr.equals("2pi3")) &&
				(tokens.get(3).tokenStr.equals("+")) &&
				(tokens.get(4).tokenStr.equals("(")) &&
				(tokens.get(5).tokenStr.equals("(")) &&
				(tokens.get(6).tokenStr.equals("_d1")) &&
				(tokens.get(7).tokenStr.equals("(")) &&
				(tokens.get(8).tokenStr.equals("a")) &&
				(tokens.get(9).tokenStr.equals(")")) &&
				(tokens.get(10).tokenStr.equals("+")) &&
				(tokens.get(11).tokenStr.equals("(")) &&
				(tokens.get(12).tokenStr.equals("_d")) &&
				(tokens.get(13).tokenStr.equals("^")) &&
				(tokens.get(14).tokenStr.equals("_g")) &&
				(tokens.get(15).tokenStr.equals(")")) &&
				(tokens.get(16).tokenStr.equals(")")) &&
				(tokens.get(17).tokenStr.equals(")")) &&
				(tokens.get(18).tokenStr.equals(")")) &&
				(tokens.get(19).tokenStr.equals(")")) &&

				(tokens.get(0).looksLike.equals("error")) &&
				(tokens.get(2).looksLike.equals("error")) &&
				(tokens.get(6).looksLike.equals("function")) &&
				(tokens.get(8).looksLike.equals("argument")) &&
				(tokens.get(12).looksLike.equals("argument")) &&
				(tokens.get(14).looksLike.equals("argument"))
			) test[testId] = true;
		/*
		 * 28. Check Lex Syntax
		 */
		testId++;
		e = new Expression("1+2+3+(4+5)+a+b");
		if (
				(e.checkSyntax() == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN) &&
				(e.checkLexSyntax() == Expression.NO_SYNTAX_ERRORS)
			) test[testId] = true;
		/*
		 * 29. Check Lex Syntax
		 */
		testId++;
		e = new Expression("1+2+3+(4+5)+a)+b");
		if (
				(e.checkSyntax() == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN) &&
				(e.checkLexSyntax() == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
			) test[testId] = true;
		/*
		 * 30. Tokens to remove
		 */
		testId++;
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
				(tokensToRemove1.length == 1) &&
				(tokensToRemove1[0].equals("cos")) &&
				(tokensToRemove2.length == 0)
			) test[testId] = true;
		/*
		 * 31. Tokens to modify
		 */
		String u = null;
		testId++;
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
		String[][] tokensToModify1 = mXparser.getBuiltinTokensToModify();
		mXparser.unmodifyBuiltinTokens("", u, "SIN", "tg");
		String[][] tokensToModify2 = mXparser.getBuiltinTokensToModify();
		mXparser.unmodifyAllBuiltinTokens();
		String[][] tokensToModify3 = mXparser.getBuiltinTokensToModify();
		if (
				( tokensToModify1.length == 3 ) && (tokensToModify1[0].length == 3) &&
				( tokensToModify2.length == 1 ) && (tokensToModify2[0].length == 3) &&
				( tokensToModify3.length == 0 ) &&
				( tokensToModify1[0][0].equals("sin") ) &&
				( tokensToModify1[0][1].equals("SIN") ) &&
				( tokensToModify1[0][2] == null ) &&
				( tokensToModify1[1][0].equals("tg") ) &&
				( tokensToModify1[1][1].equals("TG") ) &&
				( tokensToModify1[1][2].equals("NEW TG") ) &&
				( tokensToModify1[2][0].equals("cos") ) &&
				( tokensToModify1[2][1].equals("COS") ) &&
				( tokensToModify1[2][2].equals("NEW COS") ) &&
				( tokensToModify2[0][0].equals("cos") ) &&
				( tokensToModify2[0][1].equals("COS") ) &&
				( tokensToModify2[0][2].equals("NEW COS") ) &&
				( help.contains("COS(x)") )
				) test[testId] = true;
		/*
		 * 32. Recursion counter
		 */
		testId++;
		mXparser.setMaxAllowedRecursionDepth(100);
		int rc100 = mXparser.getMaxAllowedRecursionDepth();
		mXparser.setMaxAllowedRecursionDepth(200);
		int rc200 = mXparser.getMaxAllowedRecursionDepth();
		if ( (rc100 == 100) && (rc200 == 200) )
			test[testId] = true;
		/*
		 * 33. Override built-in tokens
		 */
		testId++;
		mXparser.setToOverrideBuiltinTokens();
		boolean over1 = mXparser.checkIfsetToOverrideBuiltinTokens();
		mXparser.setNotToOverrideBuiltinTokens();
		boolean over2 = mXparser.checkIfsetToOverrideBuiltinTokens();
		mXparser.setToOverrideBuiltinTokens();
		boolean over3 = mXparser.checkIfsetToOverrideBuiltinTokens();
		mXparser.setNotToOverrideBuiltinTokens();
		boolean over4 = mXparser.checkIfsetToOverrideBuiltinTokens();
		if ( (over1 == true) && (over2 == false) && (over3 == true) && (over4 == false) )
			test[testId] = true;
		/*
		 * 34. mXparser.getKeyWords
		 */
		testId++;
		List<KeyWord> keyWords = mXparser.getKeyWords("sin ");
		if (	(keyWords.size() == 4) &&
				(keyWords.get(0).wordString.equals("sin")) &&
				(keyWords.get(1).wordString.equals("asin")) &&
				(keyWords.get(2).wordString.equals("arsin")) &&
				(keyWords.get(3).wordString.equals("arcsin"))
				)
			test[testId] = true;
		/*
		 * 35. mXparser.getTokenType
		 */
		testId++;
		if (	(mXparser.getTokenTypeDescription(BinaryRelation.TYPE_ID).equals(BinaryRelation.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(BitwiseOperator.TYPE_ID).equals(BitwiseOperator.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(BooleanOperator.TYPE_ID).equals(BooleanOperator.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(CalculusOperator.TYPE_ID).equals(CalculusOperator.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(ConstantValue.TYPE_ID).equals(ConstantValue.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(Function1Arg.TYPE_ID).equals(Function1Arg.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(Function2Arg.TYPE_ID).equals(Function2Arg.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(Function3Arg.TYPE_ID).equals(Function3Arg.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(FunctionVariadic.TYPE_ID).equals(FunctionVariadic.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(Operator.TYPE_ID).equals(Operator.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(ParserSymbol.TYPE_ID).equals(ParserSymbol.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(RandomVariable.TYPE_ID).equals(RandomVariable.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(Unit.TYPE_ID).equals(Unit.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(Argument.TYPE_ID).equals(Argument.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(Constant.TYPE_ID).equals(Constant.TYPE_DESC)) &&
				(mXparser.getTokenTypeDescription(RecursiveArgument.TYPE_ID_RECURSIVE).equals(RecursiveArgument.TYPE_DESC_RECURSIVE)) &&
				(mXparser.getTokenTypeDescription(Function.TYPE_ID).equals(Function.TYPE_DESC))
				)
			test[testId] = true;
		/*
		 * 36. mXparser.convert2Decimal
		 */
		testId++;
		if (
				( NumberTheory.convOthBase2Decimal("11",  2) == 3.0 ) &&
				( NumberTheory.convOthBase2Decimal("011",  2) == 3.0 ) &&
				( NumberTheory.convOthBase2Decimal("000011",  2) == 3.0 ) &&
				( NumberTheory.convOthBase2Decimal("12",  3) == 5.0 ) &&
				( NumberTheory.convOthBase2Decimal("012",  3) == 5.0 ) &&
				( NumberTheory.convOthBase2Decimal("0012",  3) == 5.0 ) &&
				( NumberTheory.convOthBase2Decimal("123",  4) == 27.0 ) &&
				( NumberTheory.convOthBase2Decimal("0123",  4) == 27.0 ) &&
				( NumberTheory.convOthBase2Decimal("00123",  4) == 27.0 ) &&
				( NumberTheory.convOthBase2Decimal("1234",  5) == 194.0 ) &&
				( NumberTheory.convOthBase2Decimal("01234",  5) == 194.0 ) &&
				( NumberTheory.convOthBase2Decimal("001234",  5) == 194.0 ) &&
				( NumberTheory.convOthBase2Decimal("12345",  6) == 1865.0 ) &&
				( NumberTheory.convOthBase2Decimal("012345",  6) == 1865.0 ) &&
				( NumberTheory.convOthBase2Decimal("0012345",  6) == 1865.0 ) &&
				( NumberTheory.convOthBase2Decimal("123456",  7) == 22875.0 ) &&
				( NumberTheory.convOthBase2Decimal("0123456",  7) == 22875.0 ) &&
				( NumberTheory.convOthBase2Decimal("00123456",  7) == 22875.0 ) &&
				( NumberTheory.convOthBase2Decimal("1234567",  8) == 342391.0 ) &&
				( NumberTheory.convOthBase2Decimal("01234567",  8) == 342391.0 ) &&
				( NumberTheory.convOthBase2Decimal("01234567",  8) == 342391.0 ) &&
				( NumberTheory.convOthBase2Decimal("12345678",  9) == 6053444.0 ) &&
				( NumberTheory.convOthBase2Decimal("012345678",  9) == 6053444.0 ) &&
				( NumberTheory.convOthBase2Decimal("0012345678",  9) == 6053444.0 ) &&
				( NumberTheory.convOthBase2Decimal("123456789",  10) == 123456789.0 ) &&
				( NumberTheory.convOthBase2Decimal("0123456789",  10) == 123456789.0 ) &&
				( NumberTheory.convOthBase2Decimal("00123456789",  10) == 123456789.0 ) &&
				( NumberTheory.convOthBase2Decimal("123456789A",  11) == 2853116705.0 ) &&
				( NumberTheory.convOthBase2Decimal("0123456789A",  11) == 2853116705.0 ) &&
				( NumberTheory.convOthBase2Decimal("00123456789A",  11) == 2853116705.0 ) &&
				( NumberTheory.convOthBase2Decimal("123456789Ab",  12) == 73686780563.0 ) &&
				( NumberTheory.convOthBase2Decimal("0123456789Ab",  12) == 73686780563.0 ) &&
				( NumberTheory.convOthBase2Decimal("00123456789Ab",  12) == 73686780563.0 ) &&
				( NumberTheory.convOthBase2Decimal("123456789AbC",  13) == 2103299351334.0 ) &&
				( NumberTheory.convOthBase2Decimal("0123456789AbC",  13) == 2103299351334.0 ) &&
				( NumberTheory.convOthBase2Decimal("00123456789AbC",  13) == 2103299351334.0 ) &&
				( NumberTheory.convOthBase2Decimal("123456789AbCd",  14) == 65751519677857.0 ) &&
				( NumberTheory.convOthBase2Decimal("0123456789AbCd",  14) == 65751519677857.0 ) &&
				( NumberTheory.convOthBase2Decimal("00123456789AbCd",  14) == 65751519677857.0 )
			) test[testId] = true;
		/*
		 * 37. mXparser.convert2Decimal - loop
		 */
		testId++;
		test[testId] = true;
		for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
			for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase ++)
				if ( NumberTheory.convOthBase2Decimal( NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase), numeralSystemBase ) != decimalNumber) {
					test[testId] = false;
					break;
				}
		/*
		 * 38. mXparser.convert2Decimal and other - special cases
		 */
		testId++;
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
		if (	(dc_1 == '?') &&
				(dc37 == '?') &&
				(di == -1) &&
				(dec1 == 0) &&
				(Double.isNaN(decNaN1)) &&
				(Double.isNaN(decNaN2)) &&
				(Double.isNaN(decNaN3)) &&
				(Double.isNaN(decNaN4)) &&
				(Double.isNaN(decNaN5)) &&
				(strNaN1.equals("NaN")) &&
				(strNaN2.equals("NaN")) &&
				(strNaN3.equals("NaN"))
				)
			test[testId] = true;
		/*
		 * 39. mXparser.convert2Decimal - loop
		 */
		testId++;
		test[testId] = true;
		for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
			for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase ++)
				if ( NumberTheory.convOthBase2Decimal( NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase, 1) ) != decimalNumber) {
					test[testId] = false;
					break;
				}
		/*
		 * 40. mXparser.convert2Decimal - loop
		 */
		testId++;
		test[testId] = true;
		for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
			for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase ++)
				if ( NumberTheory.convOthBase2Decimal( NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase, 2) ) != decimalNumber) {
					test[testId] = false;
					break;
				}
		/*
		 * 41. mXparser.convert2Decimal - loop
		 */
		testId++;
		test[testId] = true;
		for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
			for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase ++)
				if ( NumberTheory.convOthBase2Decimal( NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase, 0), numeralSystemBase ) != decimalNumber) {
					test[testId] = false;
					break;
				}
		/*
		 * 42. mXparser.get base
		 */
		testId++;
		if (
				( NumberTheory.getNumeralSystemBase( "h.1234567890aBcDeF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "o.12345670" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "b.101010" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "b1." ) == 1 ) &&
				( NumberTheory.getNumeralSystemBase( "b2.01" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "b3.012" ) == 3 ) &&
				( NumberTheory.getNumeralSystemBase( "b4.0123" ) == 4 ) &&
				( NumberTheory.getNumeralSystemBase( "b5.01234" ) == 5 ) &&
				( NumberTheory.getNumeralSystemBase( "b6.012345" ) == 6 ) &&
				( NumberTheory.getNumeralSystemBase( "b7.0123456" ) == 7 ) &&
				( NumberTheory.getNumeralSystemBase( "b8.01234567" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "b9.012345678" ) == 9 ) &&
				( NumberTheory.getNumeralSystemBase( "b10.0123456789" ) == 10 ) &&
				( NumberTheory.getNumeralSystemBase( "b11.0123456789a" ) == 11 ) &&
				( NumberTheory.getNumeralSystemBase( "b12.0123456789ab" ) == 12 ) &&
				( NumberTheory.getNumeralSystemBase( "b13.0123456789abc" ) == 13 ) &&
				( NumberTheory.getNumeralSystemBase( "b14.0123456789abcd" ) == 14 ) &&
				( NumberTheory.getNumeralSystemBase( "b15.0123456789abcde" ) == 15 ) &&
				( NumberTheory.getNumeralSystemBase( "b16.0123456789abcdef" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "b16.0123456789abcdef" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "b17.0123456789abcdefg" ) == 17 ) &&
				( NumberTheory.getNumeralSystemBase( "b18.0123456789abcdefgh" ) == 18 ) &&
				( NumberTheory.getNumeralSystemBase( "b19.0123456789abcdefghi" ) == 19 ) &&
				( NumberTheory.getNumeralSystemBase( "b20.0123456789abcdefghij" ) == 20 ) &&
				( NumberTheory.getNumeralSystemBase( "b21.0123456789abcdefghijk" ) == 21 ) &&
				( NumberTheory.getNumeralSystemBase( "b22.0123456789abcdefghijkl" ) == 22 ) &&
				( NumberTheory.getNumeralSystemBase( "b23.0123456789abcdefghijklm" ) == 23 ) &&
				( NumberTheory.getNumeralSystemBase( "b24.0123456789abcdefghijklmn" ) == 24 ) &&
				( NumberTheory.getNumeralSystemBase( "b25.0123456789abcdefghijklmno" ) == 25 ) &&
				( NumberTheory.getNumeralSystemBase( "b26.0123456789abcdefghijklmnop" ) == 26 ) &&
				( NumberTheory.getNumeralSystemBase( "b27.0123456789abcdefghijklmnopq" ) == 27 ) &&
				( NumberTheory.getNumeralSystemBase( "b28.0123456789abcdefghijklmnopqr" ) == 28 ) &&
				( NumberTheory.getNumeralSystemBase( "b29.0123456789abcdefghijklmnopqrs" ) == 29 ) &&
				( NumberTheory.getNumeralSystemBase( "b30.0123456789abcdefghijklmnopqrst" ) == 30 ) &&
				( NumberTheory.getNumeralSystemBase( "b31.0123456789abcdefghijklmnopqrstu" ) == 31 ) &&
				( NumberTheory.getNumeralSystemBase( "b32.0123456789abcdefghijklmnopqrstuv" ) == 32 ) &&
				( NumberTheory.getNumeralSystemBase( "b33.0123456789abcdefghijklmnopqrstuvw" ) == 33 ) &&
				( NumberTheory.getNumeralSystemBase( "b34.0123456789abcdefghijklmnopqrstuvwx" ) == 34 ) &&
				( NumberTheory.getNumeralSystemBase( "b35.0123456789abcdefghijklmnopqrstuvwxy" ) == 35 ) &&
				( NumberTheory.getNumeralSystemBase( "b36.0123456789abcdefghijklmnopqrstuvwxyz" ) == 36 ) &&
				( NumberTheory.getNumeralSystemBase( "H.001234567890aBcDeF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "O.0012345670" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "B.000101010" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "B1.111" ) == 1 ) &&
				( NumberTheory.getNumeralSystemBase( "B2.0101" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "B3.0012" ) == 3 ) &&
				( NumberTheory.getNumeralSystemBase( "B4.00123" ) == 4 ) &&
				( NumberTheory.getNumeralSystemBase( "B5.001234" ) == 5 ) &&
				( NumberTheory.getNumeralSystemBase( "B6.0012345" ) == 6 ) &&
				( NumberTheory.getNumeralSystemBase( "B7.00123456" ) == 7 ) &&
				( NumberTheory.getNumeralSystemBase( "B8.001234567" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "B9.0012345678" ) == 9 ) &&
				( NumberTheory.getNumeralSystemBase( "B10.00123456789" ) == 10 ) &&
				( NumberTheory.getNumeralSystemBase( "B11.00123456789A" ) == 11 ) &&
				( NumberTheory.getNumeralSystemBase( "B12.00123456789AB" ) == 12 ) &&
				( NumberTheory.getNumeralSystemBase( "B13.00123456789ABC" ) == 13 ) &&
				( NumberTheory.getNumeralSystemBase( "B14.00123456789ABCD" ) == 14 ) &&
				( NumberTheory.getNumeralSystemBase( "B15.00123456789ABCDE" ) == 15 ) &&
				( NumberTheory.getNumeralSystemBase( "B16.00123456789ABCDEF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "B16.00123456789ABCDEF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "B17.00123456789ABCDEFG" ) == 17 ) &&
				( NumberTheory.getNumeralSystemBase( "B18.00123456789ABCDEFGH" ) == 18 ) &&
				( NumberTheory.getNumeralSystemBase( "B19.00123456789ABCDEFGI" ) == 19 ) &&
				( NumberTheory.getNumeralSystemBase( "B20.00123456789ABCDEFGIJ" ) == 20 ) &&
				( NumberTheory.getNumeralSystemBase( "B21.00123456789ABCDEFGIJK" ) == 21 ) &&
				( NumberTheory.getNumeralSystemBase( "B22.00123456789ABCDEFGIJKL" ) == 22 ) &&
				( NumberTheory.getNumeralSystemBase( "B23.00123456789ABCDEFGIJKLM" ) == 23 ) &&
				( NumberTheory.getNumeralSystemBase( "B24.00123456789ABCDEFGIJKLMN" ) == 24 ) &&
				( NumberTheory.getNumeralSystemBase( "B25.00123456789ABCDEFGIJKLMNO" ) == 25 ) &&
				( NumberTheory.getNumeralSystemBase( "B26.00123456789ABCDEFGIJKLMNOP" ) == 26 ) &&
				( NumberTheory.getNumeralSystemBase( "B27.00123456789ABCDEFGIJKLMNOPQ" ) == 27 ) &&
				( NumberTheory.getNumeralSystemBase( "B28.00123456789ABCDEFGIJKLMNOPQR" ) == 28 ) &&
				( NumberTheory.getNumeralSystemBase( "B29.00123456789ABCDEFGIJKLMNOPQRS" ) == 29 ) &&
				( NumberTheory.getNumeralSystemBase( "B30.00123456789ABCDEFGIJKLMNOPQRST" ) == 30 ) &&
				( NumberTheory.getNumeralSystemBase( "B31.00123456789ABCDEFGIJKLMNOPQRSTU" ) == 31 ) &&
				( NumberTheory.getNumeralSystemBase( "B32.00123456789ABCDEFGIJKLMNOPQRSTUV" ) == 32 ) &&
				( NumberTheory.getNumeralSystemBase( "B33.00123456789ABCDEFGIJKLMNOPQRSTUVW" ) == 33 ) &&
				( NumberTheory.getNumeralSystemBase( "B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX" ) == 34 ) &&
				( NumberTheory.getNumeralSystemBase( "B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY" ) == 35 ) &&
				( NumberTheory.getNumeralSystemBase( "B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ" ) == 36 ) &&
				( NumberTheory.getNumeralSystemBase( "-h.1234567890aBcDeF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "-o.12345670" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "-b.101010" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "-b1." ) == 1 ) &&
				( NumberTheory.getNumeralSystemBase( "-b2.01" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "-b3.012" ) == 3 ) &&
				( NumberTheory.getNumeralSystemBase( "-b4.0123" ) == 4 ) &&
				( NumberTheory.getNumeralSystemBase( "-b5.01234" ) == 5 ) &&
				( NumberTheory.getNumeralSystemBase( "-b6.012345" ) == 6 ) &&
				( NumberTheory.getNumeralSystemBase( "-b7.0123456" ) == 7 ) &&
				( NumberTheory.getNumeralSystemBase( "-b8.01234567" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "-b9.012345678" ) == 9 ) &&
				( NumberTheory.getNumeralSystemBase( "-b10.0123456789" ) == 10 ) &&
				( NumberTheory.getNumeralSystemBase( "-b11.0123456789a" ) == 11 ) &&
				( NumberTheory.getNumeralSystemBase( "-b12.0123456789ab" ) == 12 ) &&
				( NumberTheory.getNumeralSystemBase( "-b13.0123456789abc" ) == 13 ) &&
				( NumberTheory.getNumeralSystemBase( "-b14.0123456789abcd" ) == 14 ) &&
				( NumberTheory.getNumeralSystemBase( "-b15.0123456789abcde" ) == 15 ) &&
				( NumberTheory.getNumeralSystemBase( "-b16.0123456789abcdef" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "-b16.0123456789abcdef" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "-b17.0123456789abcdefg" ) == 17 ) &&
				( NumberTheory.getNumeralSystemBase( "-b18.0123456789abcdefgh" ) == 18 ) &&
				( NumberTheory.getNumeralSystemBase( "-b19.0123456789abcdefghi" ) == 19 ) &&
				( NumberTheory.getNumeralSystemBase( "-b20.0123456789abcdefghij" ) == 20 ) &&
				( NumberTheory.getNumeralSystemBase( "-b21.0123456789abcdefghijk" ) == 21 ) &&
				( NumberTheory.getNumeralSystemBase( "-b22.0123456789abcdefghijkl" ) == 22 ) &&
				( NumberTheory.getNumeralSystemBase( "-b23.0123456789abcdefghijklm" ) == 23 ) &&
				( NumberTheory.getNumeralSystemBase( "-b24.0123456789abcdefghijklmn" ) == 24 ) &&
				( NumberTheory.getNumeralSystemBase( "-b25.0123456789abcdefghijklmno" ) == 25 ) &&
				( NumberTheory.getNumeralSystemBase( "-b26.0123456789abcdefghijklmnop" ) == 26 ) &&
				( NumberTheory.getNumeralSystemBase( "-b27.0123456789abcdefghijklmnopq" ) == 27 ) &&
				( NumberTheory.getNumeralSystemBase( "-b28.0123456789abcdefghijklmnopqr" ) == 28 ) &&
				( NumberTheory.getNumeralSystemBase( "-b29.0123456789abcdefghijklmnopqrs" ) == 29 ) &&
				( NumberTheory.getNumeralSystemBase( "-b30.0123456789abcdefghijklmnopqrst" ) == 30 ) &&
				( NumberTheory.getNumeralSystemBase( "-b31.0123456789abcdefghijklmnopqrstu" ) == 31 ) &&
				( NumberTheory.getNumeralSystemBase( "-b32.0123456789abcdefghijklmnopqrstuv" ) == 32 ) &&
				( NumberTheory.getNumeralSystemBase( "-b33.0123456789abcdefghijklmnopqrstuvw" ) == 33 ) &&
				( NumberTheory.getNumeralSystemBase( "-b34.0123456789abcdefghijklmnopqrstuvwx" ) == 34 ) &&
				( NumberTheory.getNumeralSystemBase( "-b35.0123456789abcdefghijklmnopqrstuvwxy" ) == 35 ) &&
				( NumberTheory.getNumeralSystemBase( "-b36.0123456789abcdefghijklmnopqrstuvwxyz" ) == 36 ) &&
				( NumberTheory.getNumeralSystemBase( "-H.001234567890aBcDeF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "-O.0012345670" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "-B.000101010" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "-B1.111" ) == 1 ) &&
				( NumberTheory.getNumeralSystemBase( "-B2.0101" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "-B3.0012" ) == 3 ) &&
				( NumberTheory.getNumeralSystemBase( "-B4.00123" ) == 4 ) &&
				( NumberTheory.getNumeralSystemBase( "-B5.001234" ) == 5 ) &&
				( NumberTheory.getNumeralSystemBase( "-B6.0012345" ) == 6 ) &&
				( NumberTheory.getNumeralSystemBase( "-B7.00123456" ) == 7 ) &&
				( NumberTheory.getNumeralSystemBase( "-B8.001234567" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "-B9.0012345678" ) == 9 ) &&
				( NumberTheory.getNumeralSystemBase( "-B10.00123456789" ) == 10 ) &&
				( NumberTheory.getNumeralSystemBase( "-B11.00123456789A" ) == 11 ) &&
				( NumberTheory.getNumeralSystemBase( "-B12.00123456789AB" ) == 12 ) &&
				( NumberTheory.getNumeralSystemBase( "-B13.00123456789ABC" ) == 13 ) &&
				( NumberTheory.getNumeralSystemBase( "-B14.00123456789ABCD" ) == 14 ) &&
				( NumberTheory.getNumeralSystemBase( "-B15.00123456789ABCDE" ) == 15 ) &&
				( NumberTheory.getNumeralSystemBase( "-B16.00123456789ABCDEF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "-B16.00123456789ABCDEF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "-B17.00123456789ABCDEFG" ) == 17 ) &&
				( NumberTheory.getNumeralSystemBase( "-B18.00123456789ABCDEFGH" ) == 18 ) &&
				( NumberTheory.getNumeralSystemBase( "-B19.00123456789ABCDEFGI" ) == 19 ) &&
				( NumberTheory.getNumeralSystemBase( "-B20.00123456789ABCDEFGIJ" ) == 20 ) &&
				( NumberTheory.getNumeralSystemBase( "-B21.00123456789ABCDEFGIJK" ) == 21 ) &&
				( NumberTheory.getNumeralSystemBase( "-B22.00123456789ABCDEFGIJKL" ) == 22 ) &&
				( NumberTheory.getNumeralSystemBase( "-B23.00123456789ABCDEFGIJKLM" ) == 23 ) &&
				( NumberTheory.getNumeralSystemBase( "-B24.00123456789ABCDEFGIJKLMN" ) == 24 ) &&
				( NumberTheory.getNumeralSystemBase( "-B25.00123456789ABCDEFGIJKLMNO" ) == 25 ) &&
				( NumberTheory.getNumeralSystemBase( "-B26.00123456789ABCDEFGIJKLMNOP" ) == 26 ) &&
				( NumberTheory.getNumeralSystemBase( "-B27.00123456789ABCDEFGIJKLMNOPQ" ) == 27 ) &&
				( NumberTheory.getNumeralSystemBase( "-B28.00123456789ABCDEFGIJKLMNOPQR" ) == 28 ) &&
				( NumberTheory.getNumeralSystemBase( "-B29.00123456789ABCDEFGIJKLMNOPQRS" ) == 29 ) &&
				( NumberTheory.getNumeralSystemBase( "-B30.00123456789ABCDEFGIJKLMNOPQRST" ) == 30 ) &&
				( NumberTheory.getNumeralSystemBase( "-B31.00123456789ABCDEFGIJKLMNOPQRSTU" ) == 31 ) &&
				( NumberTheory.getNumeralSystemBase( "-B32.00123456789ABCDEFGIJKLMNOPQRSTUV" ) == 32 ) &&
				( NumberTheory.getNumeralSystemBase( "-B33.00123456789ABCDEFGIJKLMNOPQRSTUVW" ) == 33 ) &&
				( NumberTheory.getNumeralSystemBase( "-B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX" ) == 34 ) &&
				( NumberTheory.getNumeralSystemBase( "-B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY" ) == 35 ) &&
				( NumberTheory.getNumeralSystemBase( "-B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ" ) == 36 ) &&
				( NumberTheory.getNumeralSystemBase( "+h.1234567890aBcDeF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "+o.12345670" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "+b.101010" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "+b1." ) == 1 ) &&
				( NumberTheory.getNumeralSystemBase( "+b2.01" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "+b3.012" ) == 3 ) &&
				( NumberTheory.getNumeralSystemBase( "+b4.0123" ) == 4 ) &&
				( NumberTheory.getNumeralSystemBase( "+b5.01234" ) == 5 ) &&
				( NumberTheory.getNumeralSystemBase( "+b6.012345" ) == 6 ) &&
				( NumberTheory.getNumeralSystemBase( "+b7.0123456" ) == 7 ) &&
				( NumberTheory.getNumeralSystemBase( "+b8.01234567" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "+b9.012345678" ) == 9 ) &&
				( NumberTheory.getNumeralSystemBase( "+b10.0123456789" ) == 10 ) &&
				( NumberTheory.getNumeralSystemBase( "+b11.0123456789a" ) == 11 ) &&
				( NumberTheory.getNumeralSystemBase( "+b12.0123456789ab" ) == 12 ) &&
				( NumberTheory.getNumeralSystemBase( "+b13.0123456789abc" ) == 13 ) &&
				( NumberTheory.getNumeralSystemBase( "+b14.0123456789abcd" ) == 14 ) &&
				( NumberTheory.getNumeralSystemBase( "+b15.0123456789abcde" ) == 15 ) &&
				( NumberTheory.getNumeralSystemBase( "+b16.0123456789abcdef" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "+b16.0123456789abcdef" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "+b17.0123456789abcdefg" ) == 17 ) &&
				( NumberTheory.getNumeralSystemBase( "+b18.0123456789abcdefgh" ) == 18 ) &&
				( NumberTheory.getNumeralSystemBase( "+b19.0123456789abcdefghi" ) == 19 ) &&
				( NumberTheory.getNumeralSystemBase( "+b20.0123456789abcdefghij" ) == 20 ) &&
				( NumberTheory.getNumeralSystemBase( "+b21.0123456789abcdefghijk" ) == 21 ) &&
				( NumberTheory.getNumeralSystemBase( "+b22.0123456789abcdefghijkl" ) == 22 ) &&
				( NumberTheory.getNumeralSystemBase( "+b23.0123456789abcdefghijklm" ) == 23 ) &&
				( NumberTheory.getNumeralSystemBase( "+b24.0123456789abcdefghijklmn" ) == 24 ) &&
				( NumberTheory.getNumeralSystemBase( "+b25.0123456789abcdefghijklmno" ) == 25 ) &&
				( NumberTheory.getNumeralSystemBase( "+b26.0123456789abcdefghijklmnop" ) == 26 ) &&
				( NumberTheory.getNumeralSystemBase( "+b27.0123456789abcdefghijklmnopq" ) == 27 ) &&
				( NumberTheory.getNumeralSystemBase( "+b28.0123456789abcdefghijklmnopqr" ) == 28 ) &&
				( NumberTheory.getNumeralSystemBase( "+b29.0123456789abcdefghijklmnopqrs" ) == 29 ) &&
				( NumberTheory.getNumeralSystemBase( "+b30.0123456789abcdefghijklmnopqrst" ) == 30 ) &&
				( NumberTheory.getNumeralSystemBase( "+b31.0123456789abcdefghijklmnopqrstu" ) == 31 ) &&
				( NumberTheory.getNumeralSystemBase( "+b32.0123456789abcdefghijklmnopqrstuv" ) == 32 ) &&
				( NumberTheory.getNumeralSystemBase( "+b33.0123456789abcdefghijklmnopqrstuvw" ) == 33 ) &&
				( NumberTheory.getNumeralSystemBase( "+b34.0123456789abcdefghijklmnopqrstuvwx" ) == 34 ) &&
				( NumberTheory.getNumeralSystemBase( "+b35.0123456789abcdefghijklmnopqrstuvwxy" ) == 35 ) &&
				( NumberTheory.getNumeralSystemBase( "+b36.0123456789abcdefghijklmnopqrstuvwxyz" ) == 36 ) &&
				( NumberTheory.getNumeralSystemBase( "+H.001234567890aBcDeF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "+O.0012345670" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "+B.000101010" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "+B1.111" ) == 1 ) &&
				( NumberTheory.getNumeralSystemBase( "+B2.0101" ) == 2 ) &&
				( NumberTheory.getNumeralSystemBase( "+B3.0012" ) == 3 ) &&
				( NumberTheory.getNumeralSystemBase( "+B4.00123" ) == 4 ) &&
				( NumberTheory.getNumeralSystemBase( "+B5.001234" ) == 5 ) &&
				( NumberTheory.getNumeralSystemBase( "+B6.0012345" ) == 6 ) &&
				( NumberTheory.getNumeralSystemBase( "+B7.00123456" ) == 7 ) &&
				( NumberTheory.getNumeralSystemBase( "+B8.001234567" ) == 8 ) &&
				( NumberTheory.getNumeralSystemBase( "+B9.0012345678" ) == 9 ) &&
				( NumberTheory.getNumeralSystemBase( "+B10.00123456789" ) == 10 ) &&
				( NumberTheory.getNumeralSystemBase( "+B11.00123456789A" ) == 11 ) &&
				( NumberTheory.getNumeralSystemBase( "+B12.00123456789AB" ) == 12 ) &&
				( NumberTheory.getNumeralSystemBase( "+B13.00123456789ABC" ) == 13 ) &&
				( NumberTheory.getNumeralSystemBase( "+B14.00123456789ABCD" ) == 14 ) &&
				( NumberTheory.getNumeralSystemBase( "+B15.00123456789ABCDE" ) == 15 ) &&
				( NumberTheory.getNumeralSystemBase( "+B16.00123456789ABCDEF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "+B16.00123456789ABCDEF" ) == 16 ) &&
				( NumberTheory.getNumeralSystemBase( "+B17.00123456789ABCDEFG" ) == 17 ) &&
				( NumberTheory.getNumeralSystemBase( "+B18.00123456789ABCDEFGH" ) == 18 ) &&
				( NumberTheory.getNumeralSystemBase( "+B19.00123456789ABCDEFGI" ) == 19 ) &&
				( NumberTheory.getNumeralSystemBase( "+B20.00123456789ABCDEFGIJ" ) == 20 ) &&
				( NumberTheory.getNumeralSystemBase( "+B21.00123456789ABCDEFGIJK" ) == 21 ) &&
				( NumberTheory.getNumeralSystemBase( "+B22.00123456789ABCDEFGIJKL" ) == 22 ) &&
				( NumberTheory.getNumeralSystemBase( "+B23.00123456789ABCDEFGIJKLM" ) == 23 ) &&
				( NumberTheory.getNumeralSystemBase( "+B24.00123456789ABCDEFGIJKLMN" ) == 24 ) &&
				( NumberTheory.getNumeralSystemBase( "+B25.00123456789ABCDEFGIJKLMNO" ) == 25 ) &&
				( NumberTheory.getNumeralSystemBase( "+B26.00123456789ABCDEFGIJKLMNOP" ) == 26 ) &&
				( NumberTheory.getNumeralSystemBase( "+B27.00123456789ABCDEFGIJKLMNOPQ" ) == 27 ) &&
				( NumberTheory.getNumeralSystemBase( "+B28.00123456789ABCDEFGIJKLMNOPQR" ) == 28 ) &&
				( NumberTheory.getNumeralSystemBase( "+B29.00123456789ABCDEFGIJKLMNOPQRS" ) == 29 ) &&
				( NumberTheory.getNumeralSystemBase( "+B30.00123456789ABCDEFGIJKLMNOPQRST" ) == 30 ) &&
				( NumberTheory.getNumeralSystemBase( "+B31.00123456789ABCDEFGIJKLMNOPQRSTU" ) == 31 ) &&
				( NumberTheory.getNumeralSystemBase( "+B32.00123456789ABCDEFGIJKLMNOPQRSTUV" ) == 32 ) &&
				( NumberTheory.getNumeralSystemBase( "+B33.00123456789ABCDEFGIJKLMNOPQRSTUVW" ) == 33 ) &&
				( NumberTheory.getNumeralSystemBase( "+B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX" ) == 34 ) &&
				( NumberTheory.getNumeralSystemBase( "+B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY" ) == 35 ) &&
				( NumberTheory.getNumeralSystemBase( "+B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ" ) == 36 )
				)
			test[testId] = true;
		/*
		 * 43. mXparser. conv oth base to decimal
		 */
		testId++;
		if (
				( NumberTheory.convOthBase2Decimal( "b1." ) == 0 ) &&
				( NumberTheory.convOthBase2Decimal( "b1.111" ) == 3 ) &&
				( NumberTheory.convOthBase2Decimal( "b2.101" ) == 5 ) &&
				( NumberTheory.convOthBase2Decimal( "b3.121" ) == 16 ) &&
				( NumberTheory.convOthBase2Decimal( "b4.123" ) == 27 ) &&
				( NumberTheory.convOthBase2Decimal( "b5.341" ) == 96 ) &&
				( NumberTheory.convOthBase2Decimal( "b6.352" ) == 140 ) &&
				( NumberTheory.convOthBase2Decimal( "b7.256" ) == 139 ) &&
				( NumberTheory.convOthBase2Decimal( "b8.376" ) == 254 ) &&
				( NumberTheory.convOthBase2Decimal( "o.376" ) == 254 ) &&
				( NumberTheory.convOthBase2Decimal( "b.101" ) == 5 ) &&
				( NumberTheory.convOthBase2Decimal( "b9.821" ) == 667 ) &&
				( NumberTheory.convOthBase2Decimal( "b10.394" ) == 394 ) &&
				( NumberTheory.convOthBase2Decimal( "b11.3A7" ) == 480 ) &&
				( NumberTheory.convOthBase2Decimal( "b12.A5B" ) == 1511 ) &&
				( NumberTheory.convOthBase2Decimal( "b13.ACB" ) == 1857 ) &&
				( NumberTheory.convOthBase2Decimal( "b14.2AD" ) == 545 ) &&
				( NumberTheory.convOthBase2Decimal( "b15.BE4" ) == 2689 ) &&
				( NumberTheory.convOthBase2Decimal( "b16.FA2" ) == 4002 ) &&
				( NumberTheory.convOthBase2Decimal( "h.FA2" ) == 4002 ) &&
				( NumberTheory.convOthBase2Decimal( "b17.AG6" ) == 3168 ) &&
				( NumberTheory.convOthBase2Decimal( "b18.FGH" ) == 5165 ) &&
				( NumberTheory.convOthBase2Decimal( "b19.2I3" ) == 1067 ) &&
				( NumberTheory.convOthBase2Decimal( "b20.9CJ" ) == 3859 ) &&
				( NumberTheory.convOthBase2Decimal( "b21.K5F" ) == 8940 ) &&
				( NumberTheory.convOthBase2Decimal( "b22.FL5" ) == 7727 ) &&
				( NumberTheory.convOthBase2Decimal( "b23.1AM" ) == 781 ) &&
				( NumberTheory.convOthBase2Decimal( "b24.5ND" ) == 3445 ) &&
				( NumberTheory.convOthBase2Decimal( "b25.5ND5C" ) == 2320762 ) &&
				( NumberTheory.convOthBase2Decimal( "b26.3KPB5" ) == 1739639 ) &&
				( NumberTheory.convOthBase2Decimal( "b27.IQH67" ) == 10090258 ) &&
				( NumberTheory.convOthBase2Decimal( "b28.RKHB2" ) == 17048390 ) &&
				( NumberTheory.convOthBase2Decimal( "b29.8BIFS" ) == 5942128 ) &&
				( NumberTheory.convOthBase2Decimal( "b30.2TGJB" ) == 2417981 ) &&
				( NumberTheory.convOthBase2Decimal( "b31.6PUC0" ) == 6315103 ) &&
				( NumberTheory.convOthBase2Decimal( "b32.C0PV0" ) == 12609504 ) &&
				( NumberTheory.convOthBase2Decimal( "b33.V000W" ) == 36763583 ) &&
				( NumberTheory.convOthBase2Decimal( "b34.NP2XW" ) == 31721794 ) &&
				( NumberTheory.convOthBase2Decimal( "b35.120Y0" ) == 1587565 ) &&
				( NumberTheory.convOthBase2Decimal( "b36.ZZZZZ" ) == 60466175 ) &&
				( NumberTheory.convOthBase2Decimal( "B1." ) == 0 ) &&
				( NumberTheory.convOthBase2Decimal( "B1.111" ) == 3 ) &&
				( NumberTheory.convOthBase2Decimal( "B2.00101" ) == 5 ) &&
				( NumberTheory.convOthBase2Decimal( "B3.00121" ) == 16 ) &&
				( NumberTheory.convOthBase2Decimal( "B4.00123" ) == 27 ) &&
				( NumberTheory.convOthBase2Decimal( "B5.00341" ) == 96 ) &&
				( NumberTheory.convOthBase2Decimal( "B6.00352" ) == 140 ) &&
				( NumberTheory.convOthBase2Decimal( "B7.00256" ) == 139 ) &&
				( NumberTheory.convOthBase2Decimal( "B8.00376" ) == 254 ) &&
				( NumberTheory.convOthBase2Decimal( "O.00376" ) == 254 ) &&
				( NumberTheory.convOthBase2Decimal( "B.00101" ) == 5 ) &&
				( NumberTheory.convOthBase2Decimal( "B9.00821" ) == 667 ) &&
				( NumberTheory.convOthBase2Decimal( "B10.00394" ) == 394 ) &&
				( NumberTheory.convOthBase2Decimal( "B11.003a7" ) == 480 ) &&
				( NumberTheory.convOthBase2Decimal( "B12.00a5b" ) == 1511 ) &&
				( NumberTheory.convOthBase2Decimal( "B13.00acb" ) == 1857 ) &&
				( NumberTheory.convOthBase2Decimal( "B14.002ad" ) == 545 ) &&
				( NumberTheory.convOthBase2Decimal( "B15.00be4" ) == 2689 ) &&
				( NumberTheory.convOthBase2Decimal( "B16.00fa2" ) == 4002 ) &&
				( NumberTheory.convOthBase2Decimal( "H.00fa2" ) == 4002 ) &&
				( NumberTheory.convOthBase2Decimal( "B17.00ag6" ) == 3168 ) &&
				( NumberTheory.convOthBase2Decimal( "B18.00fgh" ) == 5165 ) &&
				( NumberTheory.convOthBase2Decimal( "B19.002i3" ) == 1067 ) &&
				( NumberTheory.convOthBase2Decimal( "B20.009cj" ) == 3859 ) &&
				( NumberTheory.convOthBase2Decimal( "B21.00k5f" ) == 8940 ) &&
				( NumberTheory.convOthBase2Decimal( "B22.00fl5" ) == 7727 ) &&
				( NumberTheory.convOthBase2Decimal( "B23.001am" ) == 781 ) &&
				( NumberTheory.convOthBase2Decimal( "B24.005nd" ) == 3445 ) &&
				( NumberTheory.convOthBase2Decimal( "B25.005nd5c" ) == 2320762 ) &&
				( NumberTheory.convOthBase2Decimal( "B26.003kpb5" ) == 1739639 ) &&
				( NumberTheory.convOthBase2Decimal( "B27.00iqh67" ) == 10090258 ) &&
				( NumberTheory.convOthBase2Decimal( "B28.00rkhb2" ) == 17048390 ) &&
				( NumberTheory.convOthBase2Decimal( "B29.008bifs" ) == 5942128 ) &&
				( NumberTheory.convOthBase2Decimal( "B30.002tgjb" ) == 2417981 ) &&
				( NumberTheory.convOthBase2Decimal( "B31.006puc0" ) == 6315103 ) &&
				( NumberTheory.convOthBase2Decimal( "B32.00c0pv0" ) == 12609504 ) &&
				( NumberTheory.convOthBase2Decimal( "B33.00v000w" ) == 36763583 ) &&
				( NumberTheory.convOthBase2Decimal( "B34.00np2xw" ) == 31721794 ) &&
				( NumberTheory.convOthBase2Decimal( "B35.00120y0" ) == 1587565 ) &&
				( NumberTheory.convOthBase2Decimal( "B36.00zzzzz" ) == 60466175 ) &&
				( NumberTheory.convOthBase2Decimal( "+b1." ) == 0 ) &&
				( NumberTheory.convOthBase2Decimal( "+b1.111" ) == 3 ) &&
				( NumberTheory.convOthBase2Decimal( "+b2.101" ) == 5 ) &&
				( NumberTheory.convOthBase2Decimal( "+b3.121" ) == 16 ) &&
				( NumberTheory.convOthBase2Decimal( "+b4.123" ) == 27 ) &&
				( NumberTheory.convOthBase2Decimal( "+b5.341" ) == 96 ) &&
				( NumberTheory.convOthBase2Decimal( "+b6.352" ) == 140 ) &&
				( NumberTheory.convOthBase2Decimal( "+b7.256" ) == 139 ) &&
				( NumberTheory.convOthBase2Decimal( "+b8.376" ) == 254 ) &&
				( NumberTheory.convOthBase2Decimal( "+o.376" ) == 254 ) &&
				( NumberTheory.convOthBase2Decimal( "+b.101" ) == 5 ) &&
				( NumberTheory.convOthBase2Decimal( "+b9.821" ) == 667 ) &&
				( NumberTheory.convOthBase2Decimal( "+b10.394" ) == 394 ) &&
				( NumberTheory.convOthBase2Decimal( "+b11.3A7" ) == 480 ) &&
				( NumberTheory.convOthBase2Decimal( "+b12.A5B" ) == 1511 ) &&
				( NumberTheory.convOthBase2Decimal( "+b13.ACB" ) == 1857 ) &&
				( NumberTheory.convOthBase2Decimal( "+b14.2AD" ) == 545 ) &&
				( NumberTheory.convOthBase2Decimal( "+b15.BE4" ) == 2689 ) &&
				( NumberTheory.convOthBase2Decimal( "+b16.FA2" ) == 4002 ) &&
				( NumberTheory.convOthBase2Decimal( "+h.FA2" ) == 4002 ) &&
				( NumberTheory.convOthBase2Decimal( "+b17.AG6" ) == 3168 ) &&
				( NumberTheory.convOthBase2Decimal( "+b18.FGH" ) == 5165 ) &&
				( NumberTheory.convOthBase2Decimal( "+b19.2I3" ) == 1067 ) &&
				( NumberTheory.convOthBase2Decimal( "+b20.9CJ" ) == 3859 ) &&
				( NumberTheory.convOthBase2Decimal( "+b21.K5F" ) == 8940 ) &&
				( NumberTheory.convOthBase2Decimal( "+b22.FL5" ) == 7727 ) &&
				( NumberTheory.convOthBase2Decimal( "+b23.1AM" ) == 781 ) &&
				( NumberTheory.convOthBase2Decimal( "+b24.5ND" ) == 3445 ) &&
				( NumberTheory.convOthBase2Decimal( "+b25.5ND5C" ) == 2320762 ) &&
				( NumberTheory.convOthBase2Decimal( "+b26.3KPB5" ) == 1739639 ) &&
				( NumberTheory.convOthBase2Decimal( "+b27.IQH67" ) == 10090258 ) &&
				( NumberTheory.convOthBase2Decimal( "+b28.RKHB2" ) == 17048390 ) &&
				( NumberTheory.convOthBase2Decimal( "+b29.8BIFS" ) == 5942128 ) &&
				( NumberTheory.convOthBase2Decimal( "+b30.2TGJB" ) == 2417981 ) &&
				( NumberTheory.convOthBase2Decimal( "+b31.6PUC0" ) == 6315103 ) &&
				( NumberTheory.convOthBase2Decimal( "+b32.C0PV0" ) == 12609504 ) &&
				( NumberTheory.convOthBase2Decimal( "+b33.V000W" ) == 36763583 ) &&
				( NumberTheory.convOthBase2Decimal( "+b34.NP2XW" ) == 31721794 ) &&
				( NumberTheory.convOthBase2Decimal( "+b35.120Y0" ) == 1587565 ) &&
				( NumberTheory.convOthBase2Decimal( "+b36.ZZZZZ" ) == 60466175 ) &&
				( NumberTheory.convOthBase2Decimal( "+B1." ) == 0 ) &&
				( NumberTheory.convOthBase2Decimal( "+B1.111" ) == 3 ) &&
				( NumberTheory.convOthBase2Decimal( "+B2.00101" ) == 5 ) &&
				( NumberTheory.convOthBase2Decimal( "+B3.00121" ) == 16 ) &&
				( NumberTheory.convOthBase2Decimal( "+B4.00123" ) == 27 ) &&
				( NumberTheory.convOthBase2Decimal( "+B5.00341" ) == 96 ) &&
				( NumberTheory.convOthBase2Decimal( "+B6.00352" ) == 140 ) &&
				( NumberTheory.convOthBase2Decimal( "+B7.00256" ) == 139 ) &&
				( NumberTheory.convOthBase2Decimal( "+B8.00376" ) == 254 ) &&
				( NumberTheory.convOthBase2Decimal( "+O.00376" ) == 254 ) &&
				( NumberTheory.convOthBase2Decimal( "+B.00101" ) == 5 ) &&
				( NumberTheory.convOthBase2Decimal( "+B9.00821" ) == 667 ) &&
				( NumberTheory.convOthBase2Decimal( "+B10.00394" ) == 394 ) &&
				( NumberTheory.convOthBase2Decimal( "+B11.003a7" ) == 480 ) &&
				( NumberTheory.convOthBase2Decimal( "+B12.00a5b" ) == 1511 ) &&
				( NumberTheory.convOthBase2Decimal( "+B13.00acb" ) == 1857 ) &&
				( NumberTheory.convOthBase2Decimal( "+B14.002ad" ) == 545 ) &&
				( NumberTheory.convOthBase2Decimal( "+B15.00be4" ) == 2689 ) &&
				( NumberTheory.convOthBase2Decimal( "+B16.00fa2" ) == 4002 ) &&
				( NumberTheory.convOthBase2Decimal( "+H.00fa2" ) == 4002 ) &&
				( NumberTheory.convOthBase2Decimal( "+B17.00ag6" ) == 3168 ) &&
				( NumberTheory.convOthBase2Decimal( "+B18.00fgh" ) == 5165 ) &&
				( NumberTheory.convOthBase2Decimal( "+B19.002i3" ) == 1067 ) &&
				( NumberTheory.convOthBase2Decimal( "+B20.009cj" ) == 3859 ) &&
				( NumberTheory.convOthBase2Decimal( "+B21.00k5f" ) == 8940 ) &&
				( NumberTheory.convOthBase2Decimal( "+B22.00fl5" ) == 7727 ) &&
				( NumberTheory.convOthBase2Decimal( "+B23.001am" ) == 781 ) &&
				( NumberTheory.convOthBase2Decimal( "+B24.005nd" ) == 3445 ) &&
				( NumberTheory.convOthBase2Decimal( "+B25.005nd5c" ) == 2320762 ) &&
				( NumberTheory.convOthBase2Decimal( "+B26.003kpb5" ) == 1739639 ) &&
				( NumberTheory.convOthBase2Decimal( "+B27.00iqh67" ) == 10090258 ) &&
				( NumberTheory.convOthBase2Decimal( "+B28.00rkhb2" ) == 17048390 ) &&
				( NumberTheory.convOthBase2Decimal( "+B29.008bifs" ) == 5942128 ) &&
				( NumberTheory.convOthBase2Decimal( "+B30.002tgjb" ) == 2417981 ) &&
				( NumberTheory.convOthBase2Decimal( "+B31.006puc0" ) == 6315103 ) &&
				( NumberTheory.convOthBase2Decimal( "+B32.00c0pv0" ) == 12609504 ) &&
				( NumberTheory.convOthBase2Decimal( "+B33.00v000w" ) == 36763583 ) &&
				( NumberTheory.convOthBase2Decimal( "+B34.00np2xw" ) == 31721794 ) &&
				( NumberTheory.convOthBase2Decimal( "+B35.00120y0" ) == 1587565 ) &&
				( NumberTheory.convOthBase2Decimal( "+B36.00zzzzz" ) == 60466175 ) &&
				( NumberTheory.convOthBase2Decimal( "-b1." ) == -0 ) &&
				( NumberTheory.convOthBase2Decimal( "-b1.111" ) == -3 ) &&
				( NumberTheory.convOthBase2Decimal( "-b2.101" ) == -5 ) &&
				( NumberTheory.convOthBase2Decimal( "-b3.121" ) == -16 ) &&
				( NumberTheory.convOthBase2Decimal( "-b4.123" ) == -27 ) &&
				( NumberTheory.convOthBase2Decimal( "-b5.341" ) == -96 ) &&
				( NumberTheory.convOthBase2Decimal( "-b6.352" ) == -140 ) &&
				( NumberTheory.convOthBase2Decimal( "-b7.256" ) == -139 ) &&
				( NumberTheory.convOthBase2Decimal( "-b8.376" ) == -254 ) &&
				( NumberTheory.convOthBase2Decimal( "-o.376" ) == -254 ) &&
				( NumberTheory.convOthBase2Decimal( "-b.101" ) == -5 ) &&
				( NumberTheory.convOthBase2Decimal( "-b9.821" ) == -667 ) &&
				( NumberTheory.convOthBase2Decimal( "-b10.394" ) == -394 ) &&
				( NumberTheory.convOthBase2Decimal( "-b11.3A7" ) == -480 ) &&
				( NumberTheory.convOthBase2Decimal( "-b12.A5B" ) == -1511 ) &&
				( NumberTheory.convOthBase2Decimal( "-b13.ACB" ) == -1857 ) &&
				( NumberTheory.convOthBase2Decimal( "-b14.2AD" ) == -545 ) &&
				( NumberTheory.convOthBase2Decimal( "-b15.BE4" ) == -2689 ) &&
				( NumberTheory.convOthBase2Decimal( "-b16.FA2" ) == -4002 ) &&
				( NumberTheory.convOthBase2Decimal( "-h.FA2" ) == -4002 ) &&
				( NumberTheory.convOthBase2Decimal( "-b17.AG6" ) == -3168 ) &&
				( NumberTheory.convOthBase2Decimal( "-b18.FGH" ) == -5165 ) &&
				( NumberTheory.convOthBase2Decimal( "-b19.2I3" ) == -1067 ) &&
				( NumberTheory.convOthBase2Decimal( "-b20.9CJ" ) == -3859 ) &&
				( NumberTheory.convOthBase2Decimal( "-b21.K5F" ) == -8940 ) &&
				( NumberTheory.convOthBase2Decimal( "-b22.FL5" ) == -7727 ) &&
				( NumberTheory.convOthBase2Decimal( "-b23.1AM" ) == -781 ) &&
				( NumberTheory.convOthBase2Decimal( "-b24.5ND" ) == -3445 ) &&
				( NumberTheory.convOthBase2Decimal( "-b25.5ND5C" ) == -2320762 ) &&
				( NumberTheory.convOthBase2Decimal( "-b26.3KPB5" ) == -1739639 ) &&
				( NumberTheory.convOthBase2Decimal( "-b27.IQH67" ) == -10090258 ) &&
				( NumberTheory.convOthBase2Decimal( "-b28.RKHB2" ) == -17048390 ) &&
				( NumberTheory.convOthBase2Decimal( "-b29.8BIFS" ) == -5942128 ) &&
				( NumberTheory.convOthBase2Decimal( "-b30.2TGJB" ) == -2417981 ) &&
				( NumberTheory.convOthBase2Decimal( "-b31.6PUC0" ) == -6315103 ) &&
				( NumberTheory.convOthBase2Decimal( "-b32.C0PV0" ) == -12609504 ) &&
				( NumberTheory.convOthBase2Decimal( "-b33.V000W" ) == -36763583 ) &&
				( NumberTheory.convOthBase2Decimal( "-b34.NP2XW" ) == -31721794 ) &&
				( NumberTheory.convOthBase2Decimal( "-b35.120Y0" ) == -1587565 ) &&
				( NumberTheory.convOthBase2Decimal( "-b36.ZZZZZ" ) == -60466175 ) &&
				( NumberTheory.convOthBase2Decimal( "-B1." ) == -0 ) &&
				( NumberTheory.convOthBase2Decimal( "-B1.111" ) == -3 ) &&
				( NumberTheory.convOthBase2Decimal( "-B2.00101" ) == -5 ) &&
				( NumberTheory.convOthBase2Decimal( "-B3.00121" ) == -16 ) &&
				( NumberTheory.convOthBase2Decimal( "-B4.00123" ) == -27 ) &&
				( NumberTheory.convOthBase2Decimal( "-B5.00341" ) == -96 ) &&
				( NumberTheory.convOthBase2Decimal( "-B6.00352" ) == -140 ) &&
				( NumberTheory.convOthBase2Decimal( "-B7.00256" ) == -139 ) &&
				( NumberTheory.convOthBase2Decimal( "-B8.00376" ) == -254 ) &&
				( NumberTheory.convOthBase2Decimal( "-O.00376" ) == -254 ) &&
				( NumberTheory.convOthBase2Decimal( "-B.00101" ) == -5 ) &&
				( NumberTheory.convOthBase2Decimal( "-B9.00821" ) == -667 ) &&
				( NumberTheory.convOthBase2Decimal( "-B10.00394" ) == -394 ) &&
				( NumberTheory.convOthBase2Decimal( "-B11.003a7" ) == -480 ) &&
				( NumberTheory.convOthBase2Decimal( "-B12.00a5b" ) == -1511 ) &&
				( NumberTheory.convOthBase2Decimal( "-B13.00acb" ) == -1857 ) &&
				( NumberTheory.convOthBase2Decimal( "-B14.002ad" ) == -545 ) &&
				( NumberTheory.convOthBase2Decimal( "-B15.00be4" ) == -2689 ) &&
				( NumberTheory.convOthBase2Decimal( "-B16.00fa2" ) == -4002 ) &&
				( NumberTheory.convOthBase2Decimal( "-H.00fa2" ) == -4002 ) &&
				( NumberTheory.convOthBase2Decimal( "-B17.00ag6" ) == -3168 ) &&
				( NumberTheory.convOthBase2Decimal( "-B18.00fgh" ) == -5165 ) &&
				( NumberTheory.convOthBase2Decimal( "-B19.002i3" ) == -1067 ) &&
				( NumberTheory.convOthBase2Decimal( "-B20.009cj" ) == -3859 ) &&
				( NumberTheory.convOthBase2Decimal( "-B21.00k5f" ) == -8940 ) &&
				( NumberTheory.convOthBase2Decimal( "-B22.00fl5" ) == -7727 ) &&
				( NumberTheory.convOthBase2Decimal( "-B23.001am" ) == -781 ) &&
				( NumberTheory.convOthBase2Decimal( "-B24.005nd" ) == -3445 ) &&
				( NumberTheory.convOthBase2Decimal( "-B25.005nd5c" ) == -2320762 ) &&
				( NumberTheory.convOthBase2Decimal( "-B26.003kpb5" ) == -1739639 ) &&
				( NumberTheory.convOthBase2Decimal( "-B27.00iqh67" ) == -10090258 ) &&
				( NumberTheory.convOthBase2Decimal( "-B28.00rkhb2" ) == -17048390 ) &&
				( NumberTheory.convOthBase2Decimal( "-B29.008bifs" ) == -5942128 ) &&
				( NumberTheory.convOthBase2Decimal( "-B30.002tgjb" ) == -2417981 ) &&
				( NumberTheory.convOthBase2Decimal( "-B31.006puc0" ) == -6315103 ) &&
				( NumberTheory.convOthBase2Decimal( "-B32.00c0pv0" ) == -12609504 ) &&
				( NumberTheory.convOthBase2Decimal( "-B33.00v000w" ) == -36763583 ) &&
				( NumberTheory.convOthBase2Decimal( "-B34.00np2xw" ) == -31721794 ) &&
				( NumberTheory.convOthBase2Decimal( "-B35.00120y0" ) == -1587565 ) &&
				( NumberTheory.convOthBase2Decimal( "-B36.00zzzzz" ) == -60466175 )
				)
			test[testId] = true;
		/*
		 * 44. mXparser. conv decimal to oth base
		 */
		testId++;
		if (
				( NumberTheory.convDecimal2OthBase( 0, 1 ).equals( "" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3, 1 ).equals( "111" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5, 2 ).equals( "101" ) ) &&
				( NumberTheory.convDecimal2OthBase( 16, 3 ).equals( "121" ) ) &&
				( NumberTheory.convDecimal2OthBase( 27, 4 ).equals( "123" ) ) &&
				( NumberTheory.convDecimal2OthBase( 96, 5 ).equals( "341" ) ) &&
				( NumberTheory.convDecimal2OthBase( 140, 6 ).equals( "352" ) ) &&
				( NumberTheory.convDecimal2OthBase( 139, 7 ).equals( "256" ) ) &&
				( NumberTheory.convDecimal2OthBase( 254, 8 ).equals( "376" ) ) &&
				( NumberTheory.convDecimal2OthBase( 667, 9 ).equals( "821" ) ) &&
				( NumberTheory.convDecimal2OthBase( 394, 10 ).equals( "394" ) ) &&
				( NumberTheory.convDecimal2OthBase( 480, 11 ).equals( "3A7" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1511, 12 ).equals( "A5B" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1857, 13 ).equals( "ACB" ) ) &&
				( NumberTheory.convDecimal2OthBase( 545, 14 ).equals( "2AD" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2689, 15 ).equals( "BE4" ) ) &&
				( NumberTheory.convDecimal2OthBase( 4002, 16 ).equals( "FA2" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3168, 17 ).equals( "AG6" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5165, 18 ).equals( "FGH" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1067, 19 ).equals( "2I3" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3859, 20 ).equals( "9CJ" ) ) &&
				( NumberTheory.convDecimal2OthBase( 8940, 21 ).equals( "K5F" ) ) &&
				( NumberTheory.convDecimal2OthBase( 7727, 22 ).equals( "FL5" ) ) &&
				( NumberTheory.convDecimal2OthBase( 781, 23 ).equals( "1AM" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3445, 24 ).equals( "5ND" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2320762, 25 ).equals( "5ND5C" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1739639, 26 ).equals( "3KPB5" ) ) &&
				( NumberTheory.convDecimal2OthBase( 10090258, 27 ).equals( "IQH67" ) ) &&
				( NumberTheory.convDecimal2OthBase( 17048390, 28 ).equals( "RKHB2" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5942128, 29 ).equals( "8BIFS" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2417981, 30 ).equals( "2TGJB" ) ) &&
				( NumberTheory.convDecimal2OthBase( 6315103, 31 ).equals( "6PUC0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 12609504, 32 ).equals( "C0PV0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 36763583, 33 ).equals( "V000W" ) ) &&
				( NumberTheory.convDecimal2OthBase( 31721794, 34 ).equals( "NP2XW" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1587565, 35 ).equals( "120Y0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 60466175, 36 ).equals( "ZZZZZ" ) ) &&
				( NumberTheory.convDecimal2OthBase( -0, 1 ).equals( "" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3, 1 ).equals( "-111" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5, 2 ).equals( "-101" ) ) &&
				( NumberTheory.convDecimal2OthBase( -16, 3 ).equals( "-121" ) ) &&
				( NumberTheory.convDecimal2OthBase( -27, 4 ).equals( "-123" ) ) &&
				( NumberTheory.convDecimal2OthBase( -96, 5 ).equals( "-341" ) ) &&
				( NumberTheory.convDecimal2OthBase( -140, 6 ).equals( "-352" ) ) &&
				( NumberTheory.convDecimal2OthBase( -139, 7 ).equals( "-256" ) ) &&
				( NumberTheory.convDecimal2OthBase( -254, 8 ).equals( "-376" ) ) &&
				( NumberTheory.convDecimal2OthBase( -667, 9 ).equals( "-821" ) ) &&
				( NumberTheory.convDecimal2OthBase( -394, 10 ).equals( "-394" ) ) &&
				( NumberTheory.convDecimal2OthBase( -480, 11 ).equals( "-3A7" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1511, 12 ).equals( "-A5B" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1857, 13 ).equals( "-ACB" ) ) &&
				( NumberTheory.convDecimal2OthBase( -545, 14 ).equals( "-2AD" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2689, 15 ).equals( "-BE4" ) ) &&
				( NumberTheory.convDecimal2OthBase( -4002, 16 ).equals( "-FA2" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3168, 17 ).equals( "-AG6" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5165, 18 ).equals( "-FGH" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1067, 19 ).equals( "-2I3" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3859, 20 ).equals( "-9CJ" ) ) &&
				( NumberTheory.convDecimal2OthBase( -8940, 21 ).equals( "-K5F" ) ) &&
				( NumberTheory.convDecimal2OthBase( -7727, 22 ).equals( "-FL5" ) ) &&
				( NumberTheory.convDecimal2OthBase( -781, 23 ).equals( "-1AM" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3445, 24 ).equals( "-5ND" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2320762, 25 ).equals( "-5ND5C" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1739639, 26 ).equals( "-3KPB5" ) ) &&
				( NumberTheory.convDecimal2OthBase( -10090258, 27 ).equals( "-IQH67" ) ) &&
				( NumberTheory.convDecimal2OthBase( -17048390, 28 ).equals( "-RKHB2" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5942128, 29 ).equals( "-8BIFS" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2417981, 30 ).equals( "-2TGJB" ) ) &&
				( NumberTheory.convDecimal2OthBase( -6315103, 31 ).equals( "-6PUC0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -12609504, 32 ).equals( "-C0PV0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -36763583, 33 ).equals( "-V000W" ) ) &&
				( NumberTheory.convDecimal2OthBase( -31721794, 34 ).equals( "-NP2XW" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1587565, 35 ).equals( "-120Y0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -60466175, 36 ).equals( "-ZZZZZ" ) )				)
			test[testId] = true;
		/*
		 * 45. mXparser. conv decimal to oth base - format 0
		 */
		testId++;
		if (
				( NumberTheory.convDecimal2OthBase( 0, 1, 0 ).equals( "" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3, 1, 0 ).equals( "111" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5, 2, 0 ).equals( "101" ) ) &&
				( NumberTheory.convDecimal2OthBase( 16, 3, 0 ).equals( "121" ) ) &&
				( NumberTheory.convDecimal2OthBase( 27, 4, 0 ).equals( "123" ) ) &&
				( NumberTheory.convDecimal2OthBase( 96, 5, 0 ).equals( "341" ) ) &&
				( NumberTheory.convDecimal2OthBase( 140, 6, 0 ).equals( "352" ) ) &&
				( NumberTheory.convDecimal2OthBase( 139, 7, 0 ).equals( "256" ) ) &&
				( NumberTheory.convDecimal2OthBase( 254, 8, 0 ).equals( "376" ) ) &&
				( NumberTheory.convDecimal2OthBase( 667, 9, 0 ).equals( "821" ) ) &&
				( NumberTheory.convDecimal2OthBase( 394, 10, 0 ).equals( "394" ) ) &&
				( NumberTheory.convDecimal2OthBase( 480, 11, 0 ).equals( "3A7" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1511, 12, 0 ).equals( "A5B" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1857, 13, 0 ).equals( "ACB" ) ) &&
				( NumberTheory.convDecimal2OthBase( 545, 14, 0 ).equals( "2AD" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2689, 15, 0 ).equals( "BE4" ) ) &&
				( NumberTheory.convDecimal2OthBase( 4002, 16, 0 ).equals( "FA2" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3168, 17, 0 ).equals( "AG6" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5165, 18, 0 ).equals( "FGH" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1067, 19, 0 ).equals( "2I3" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3859, 20, 0 ).equals( "9CJ" ) ) &&
				( NumberTheory.convDecimal2OthBase( 8940, 21, 0 ).equals( "K5F" ) ) &&
				( NumberTheory.convDecimal2OthBase( 7727, 22, 0 ).equals( "FL5" ) ) &&
				( NumberTheory.convDecimal2OthBase( 781, 23, 0 ).equals( "1AM" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3445, 24, 0 ).equals( "5ND" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2320762, 25, 0 ).equals( "5ND5C" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1739639, 26, 0 ).equals( "3KPB5" ) ) &&
				( NumberTheory.convDecimal2OthBase( 10090258, 27, 0 ).equals( "IQH67" ) ) &&
				( NumberTheory.convDecimal2OthBase( 17048390, 28, 0 ).equals( "RKHB2" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5942128, 29, 0 ).equals( "8BIFS" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2417981, 30, 0 ).equals( "2TGJB" ) ) &&
				( NumberTheory.convDecimal2OthBase( 6315103, 31, 0 ).equals( "6PUC0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 12609504, 32, 0 ).equals( "C0PV0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 36763583, 33, 0 ).equals( "V000W" ) ) &&
				( NumberTheory.convDecimal2OthBase( 31721794, 34, 0 ).equals( "NP2XW" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1587565, 35, 0 ).equals( "120Y0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 60466175, 36, 0 ).equals( "ZZZZZ" ) ) &&
				( NumberTheory.convDecimal2OthBase( -0, 1, 0 ).equals( "" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3, 1, 0 ).equals( "-111" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5, 2, 0 ).equals( "-101" ) ) &&
				( NumberTheory.convDecimal2OthBase( -16, 3, 0 ).equals( "-121" ) ) &&
				( NumberTheory.convDecimal2OthBase( -27, 4, 0 ).equals( "-123" ) ) &&
				( NumberTheory.convDecimal2OthBase( -96, 5, 0 ).equals( "-341" ) ) &&
				( NumberTheory.convDecimal2OthBase( -140, 6, 0 ).equals( "-352" ) ) &&
				( NumberTheory.convDecimal2OthBase( -139, 7, 0 ).equals( "-256" ) ) &&
				( NumberTheory.convDecimal2OthBase( -254, 8, 0 ).equals( "-376" ) ) &&
				( NumberTheory.convDecimal2OthBase( -667, 9, 0 ).equals( "-821" ) ) &&
				( NumberTheory.convDecimal2OthBase( -394, 10, 0 ).equals( "-394" ) ) &&
				( NumberTheory.convDecimal2OthBase( -480, 11, 0 ).equals( "-3A7" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1511, 12, 0 ).equals( "-A5B" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1857, 13, 0 ).equals( "-ACB" ) ) &&
				( NumberTheory.convDecimal2OthBase( -545, 14, 0 ).equals( "-2AD" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2689, 15, 0 ).equals( "-BE4" ) ) &&
				( NumberTheory.convDecimal2OthBase( -4002, 16, 0 ).equals( "-FA2" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3168, 17, 0 ).equals( "-AG6" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5165, 18, 0 ).equals( "-FGH" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1067, 19, 0 ).equals( "-2I3" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3859, 20, 0 ).equals( "-9CJ" ) ) &&
				( NumberTheory.convDecimal2OthBase( -8940, 21, 0 ).equals( "-K5F" ) ) &&
				( NumberTheory.convDecimal2OthBase( -7727, 22, 0 ).equals( "-FL5" ) ) &&
				( NumberTheory.convDecimal2OthBase( -781, 23, 0 ).equals( "-1AM" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3445, 24, 0 ).equals( "-5ND" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2320762, 25, 0 ).equals( "-5ND5C" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1739639, 26, 0 ).equals( "-3KPB5" ) ) &&
				( NumberTheory.convDecimal2OthBase( -10090258, 27, 0 ).equals( "-IQH67" ) ) &&
				( NumberTheory.convDecimal2OthBase( -17048390, 28, 0 ).equals( "-RKHB2" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5942128, 29, 0 ).equals( "-8BIFS" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2417981, 30, 0 ).equals( "-2TGJB" ) ) &&
				( NumberTheory.convDecimal2OthBase( -6315103, 31, 0 ).equals( "-6PUC0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -12609504, 32, 0 ).equals( "-C0PV0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -36763583, 33, 0 ).equals( "-V000W" ) ) &&
				( NumberTheory.convDecimal2OthBase( -31721794, 34, 0 ).equals( "-NP2XW" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1587565, 35, 0 ).equals( "-120Y0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -60466175, 36, 0 ).equals( "-ZZZZZ" ) )				)
			test[testId] = true;
		/*
		 * 46. mXparser. conv decimal to oth base - format 1
		 */
		testId++;
		if (
				( NumberTheory.convDecimal2OthBase( 0, 1, 1 ).equals( "b1." ) ) &&
				( NumberTheory.convDecimal2OthBase( 3, 1, 1 ).equals( "b1.111" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5, 2, 1 ).equals( "b2.101" ) ) &&
				( NumberTheory.convDecimal2OthBase( 16, 3, 1 ).equals( "b3.121" ) ) &&
				( NumberTheory.convDecimal2OthBase( 27, 4, 1 ).equals( "b4.123" ) ) &&
				( NumberTheory.convDecimal2OthBase( 96, 5, 1 ).equals( "b5.341" ) ) &&
				( NumberTheory.convDecimal2OthBase( 140, 6, 1 ).equals( "b6.352" ) ) &&
				( NumberTheory.convDecimal2OthBase( 139, 7, 1 ).equals( "b7.256" ) ) &&
				( NumberTheory.convDecimal2OthBase( 254, 8, 1 ).equals( "b8.376" ) ) &&
				( NumberTheory.convDecimal2OthBase( 667, 9, 1 ).equals( "b9.821" ) ) &&
				( NumberTheory.convDecimal2OthBase( 394, 10, 1 ).equals( "b10.394" ) ) &&
				( NumberTheory.convDecimal2OthBase( 480, 11, 1 ).equals( "b11.3A7" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1511, 12, 1 ).equals( "b12.A5B" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1857, 13, 1 ).equals( "b13.ACB" ) ) &&
				( NumberTheory.convDecimal2OthBase( 545, 14, 1 ).equals( "b14.2AD" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2689, 15, 1 ).equals( "b15.BE4" ) ) &&
				( NumberTheory.convDecimal2OthBase( 4002, 16, 1 ).equals( "b16.FA2" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3168, 17, 1 ).equals( "b17.AG6" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5165, 18, 1 ).equals( "b18.FGH" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1067, 19, 1 ).equals( "b19.2I3" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3859, 20, 1 ).equals( "b20.9CJ" ) ) &&
				( NumberTheory.convDecimal2OthBase( 8940, 21, 1 ).equals( "b21.K5F" ) ) &&
				( NumberTheory.convDecimal2OthBase( 7727, 22, 1 ).equals( "b22.FL5" ) ) &&
				( NumberTheory.convDecimal2OthBase( 781, 23, 1 ).equals( "b23.1AM" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3445, 24, 1 ).equals( "b24.5ND" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2320762, 25, 1 ).equals( "b25.5ND5C" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1739639, 26, 1 ).equals( "b26.3KPB5" ) ) &&
				( NumberTheory.convDecimal2OthBase( 10090258, 27, 1 ).equals( "b27.IQH67" ) ) &&
				( NumberTheory.convDecimal2OthBase( 17048390, 28, 1 ).equals( "b28.RKHB2" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5942128, 29, 1 ).equals( "b29.8BIFS" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2417981, 30, 1 ).equals( "b30.2TGJB" ) ) &&
				( NumberTheory.convDecimal2OthBase( 6315103, 31, 1 ).equals( "b31.6PUC0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 12609504, 32, 1 ).equals( "b32.C0PV0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 36763583, 33, 1 ).equals( "b33.V000W" ) ) &&
				( NumberTheory.convDecimal2OthBase( 31721794, 34, 1 ).equals( "b34.NP2XW" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1587565, 35, 1 ).equals( "b35.120Y0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 60466175, 36, 1 ).equals( "b36.ZZZZZ" ) ) &&
				( NumberTheory.convDecimal2OthBase( -0, 1, 1 ).equals( "b1." ) ) &&
				( NumberTheory.convDecimal2OthBase( -3, 1, 1 ).equals( "-b1.111" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5, 2, 1 ).equals( "-b2.101" ) ) &&
				( NumberTheory.convDecimal2OthBase( -16, 3, 1 ).equals( "-b3.121" ) ) &&
				( NumberTheory.convDecimal2OthBase( -27, 4, 1 ).equals( "-b4.123" ) ) &&
				( NumberTheory.convDecimal2OthBase( -96, 5, 1 ).equals( "-b5.341" ) ) &&
				( NumberTheory.convDecimal2OthBase( -140, 6, 1 ).equals( "-b6.352" ) ) &&
				( NumberTheory.convDecimal2OthBase( -139, 7, 1 ).equals( "-b7.256" ) ) &&
				( NumberTheory.convDecimal2OthBase( -254, 8, 1 ).equals( "-b8.376" ) ) &&
				( NumberTheory.convDecimal2OthBase( -667, 9, 1 ).equals( "-b9.821" ) ) &&
				( NumberTheory.convDecimal2OthBase( -394, 10, 1 ).equals( "-b10.394" ) ) &&
				( NumberTheory.convDecimal2OthBase( -480, 11, 1 ).equals( "-b11.3A7" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1511, 12, 1 ).equals( "-b12.A5B" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1857, 13, 1 ).equals( "-b13.ACB" ) ) &&
				( NumberTheory.convDecimal2OthBase( -545, 14, 1 ).equals( "-b14.2AD" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2689, 15, 1 ).equals( "-b15.BE4" ) ) &&
				( NumberTheory.convDecimal2OthBase( -4002, 16, 1 ).equals( "-b16.FA2" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3168, 17, 1 ).equals( "-b17.AG6" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5165, 18, 1 ).equals( "-b18.FGH" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1067, 19, 1 ).equals( "-b19.2I3" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3859, 20, 1 ).equals( "-b20.9CJ" ) ) &&
				( NumberTheory.convDecimal2OthBase( -8940, 21, 1 ).equals( "-b21.K5F" ) ) &&
				( NumberTheory.convDecimal2OthBase( -7727, 22, 1 ).equals( "-b22.FL5" ) ) &&
				( NumberTheory.convDecimal2OthBase( -781, 23, 1 ).equals( "-b23.1AM" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3445, 24, 1 ).equals( "-b24.5ND" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2320762, 25, 1 ).equals( "-b25.5ND5C" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1739639, 26, 1 ).equals( "-b26.3KPB5" ) ) &&
				( NumberTheory.convDecimal2OthBase( -10090258, 27, 1 ).equals( "-b27.IQH67" ) ) &&
				( NumberTheory.convDecimal2OthBase( -17048390, 28, 1 ).equals( "-b28.RKHB2" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5942128, 29, 1 ).equals( "-b29.8BIFS" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2417981, 30, 1 ).equals( "-b30.2TGJB" ) ) &&
				( NumberTheory.convDecimal2OthBase( -6315103, 31, 1 ).equals( "-b31.6PUC0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -12609504, 32, 1 ).equals( "-b32.C0PV0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -36763583, 33, 1 ).equals( "-b33.V000W" ) ) &&
				( NumberTheory.convDecimal2OthBase( -31721794, 34, 1 ).equals( "-b34.NP2XW" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1587565, 35, 1 ).equals( "-b35.120Y0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -60466175, 36, 1 ).equals( "-b36.ZZZZZ" ) )
				)
			test[testId] = true;
		/*
		 * 47. mXparser. conv decimal to oth base - format 2
		 */
		testId++;
		if (
				( NumberTheory.convDecimal2OthBase( 0, 1, 2 ).equals( "b1." ) ) &&
				( NumberTheory.convDecimal2OthBase( 3, 1, 2 ).equals( "b1.111" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5, 2, 2 ).equals( "b.101" ) ) &&
				( NumberTheory.convDecimal2OthBase( 16, 3, 2 ).equals( "b3.121" ) ) &&
				( NumberTheory.convDecimal2OthBase( 27, 4, 2 ).equals( "b4.123" ) ) &&
				( NumberTheory.convDecimal2OthBase( 96, 5, 2 ).equals( "b5.341" ) ) &&
				( NumberTheory.convDecimal2OthBase( 140, 6, 2 ).equals( "b6.352" ) ) &&
				( NumberTheory.convDecimal2OthBase( 139, 7, 2 ).equals( "b7.256" ) ) &&
				( NumberTheory.convDecimal2OthBase( 254, 8, 2 ).equals( "o.376" ) ) &&
				( NumberTheory.convDecimal2OthBase( 667, 9, 2 ).equals( "b9.821" ) ) &&
				( NumberTheory.convDecimal2OthBase( 394, 10, 2 ).equals( "b10.394" ) ) &&
				( NumberTheory.convDecimal2OthBase( 480, 11, 2 ).equals( "b11.3A7" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1511, 12, 2 ).equals( "b12.A5B" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1857, 13, 2 ).equals( "b13.ACB" ) ) &&
				( NumberTheory.convDecimal2OthBase( 545, 14, 2 ).equals( "b14.2AD" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2689, 15, 2 ).equals( "b15.BE4" ) ) &&
				( NumberTheory.convDecimal2OthBase( 4002, 16, 2 ).equals( "h.FA2" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3168, 17, 2 ).equals( "b17.AG6" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5165, 18, 2 ).equals( "b18.FGH" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1067, 19, 2 ).equals( "b19.2I3" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3859, 20, 2 ).equals( "b20.9CJ" ) ) &&
				( NumberTheory.convDecimal2OthBase( 8940, 21, 2 ).equals( "b21.K5F" ) ) &&
				( NumberTheory.convDecimal2OthBase( 7727, 22, 2 ).equals( "b22.FL5" ) ) &&
				( NumberTheory.convDecimal2OthBase( 781, 23, 2 ).equals( "b23.1AM" ) ) &&
				( NumberTheory.convDecimal2OthBase( 3445, 24, 2 ).equals( "b24.5ND" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2320762, 25, 2 ).equals( "b25.5ND5C" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1739639, 26, 2 ).equals( "b26.3KPB5" ) ) &&
				( NumberTheory.convDecimal2OthBase( 10090258, 27, 2 ).equals( "b27.IQH67" ) ) &&
				( NumberTheory.convDecimal2OthBase( 17048390, 28, 2 ).equals( "b28.RKHB2" ) ) &&
				( NumberTheory.convDecimal2OthBase( 5942128, 29, 2 ).equals( "b29.8BIFS" ) ) &&
				( NumberTheory.convDecimal2OthBase( 2417981, 30, 2 ).equals( "b30.2TGJB" ) ) &&
				( NumberTheory.convDecimal2OthBase( 6315103, 31, 2 ).equals( "b31.6PUC0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 12609504, 32, 2 ).equals( "b32.C0PV0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 36763583, 33, 2 ).equals( "b33.V000W" ) ) &&
				( NumberTheory.convDecimal2OthBase( 31721794, 34, 2 ).equals( "b34.NP2XW" ) ) &&
				( NumberTheory.convDecimal2OthBase( 1587565, 35, 2 ).equals( "b35.120Y0" ) ) &&
				( NumberTheory.convDecimal2OthBase( 60466175, 36, 2 ).equals( "b36.ZZZZZ" ) ) &&
				( NumberTheory.convDecimal2OthBase( -0, 1, 2 ).equals( "b1." ) ) &&
				( NumberTheory.convDecimal2OthBase( -3, 1, 2 ).equals( "-b1.111" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5, 2, 2 ).equals( "-b.101" ) ) &&
				( NumberTheory.convDecimal2OthBase( -16, 3, 2 ).equals( "-b3.121" ) ) &&
				( NumberTheory.convDecimal2OthBase( -27, 4, 2 ).equals( "-b4.123" ) ) &&
				( NumberTheory.convDecimal2OthBase( -96, 5, 2 ).equals( "-b5.341" ) ) &&
				( NumberTheory.convDecimal2OthBase( -140, 6, 2 ).equals( "-b6.352" ) ) &&
				( NumberTheory.convDecimal2OthBase( -139, 7, 2 ).equals( "-b7.256" ) ) &&
				( NumberTheory.convDecimal2OthBase( -254, 8, 2 ).equals( "-o.376" ) ) &&
				( NumberTheory.convDecimal2OthBase( -667, 9, 2 ).equals( "-b9.821" ) ) &&
				( NumberTheory.convDecimal2OthBase( -394, 10, 2 ).equals( "-b10.394" ) ) &&
				( NumberTheory.convDecimal2OthBase( -480, 11, 2 ).equals( "-b11.3A7" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1511, 12, 2 ).equals( "-b12.A5B" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1857, 13, 2 ).equals( "-b13.ACB" ) ) &&
				( NumberTheory.convDecimal2OthBase( -545, 14, 2 ).equals( "-b14.2AD" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2689, 15, 2 ).equals( "-b15.BE4" ) ) &&
				( NumberTheory.convDecimal2OthBase( -4002, 16, 2 ).equals( "-h.FA2" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3168, 17, 2 ).equals( "-b17.AG6" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5165, 18, 2 ).equals( "-b18.FGH" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1067, 19, 2 ).equals( "-b19.2I3" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3859, 20, 2 ).equals( "-b20.9CJ" ) ) &&
				( NumberTheory.convDecimal2OthBase( -8940, 21, 2 ).equals( "-b21.K5F" ) ) &&
				( NumberTheory.convDecimal2OthBase( -7727, 22, 2 ).equals( "-b22.FL5" ) ) &&
				( NumberTheory.convDecimal2OthBase( -781, 23, 2 ).equals( "-b23.1AM" ) ) &&
				( NumberTheory.convDecimal2OthBase( -3445, 24, 2 ).equals( "-b24.5ND" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2320762, 25, 2 ).equals( "-b25.5ND5C" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1739639, 26, 2 ).equals( "-b26.3KPB5" ) ) &&
				( NumberTheory.convDecimal2OthBase( -10090258, 27, 2 ).equals( "-b27.IQH67" ) ) &&
				( NumberTheory.convDecimal2OthBase( -17048390, 28, 2 ).equals( "-b28.RKHB2" ) ) &&
				( NumberTheory.convDecimal2OthBase( -5942128, 29, 2 ).equals( "-b29.8BIFS" ) ) &&
				( NumberTheory.convDecimal2OthBase( -2417981, 30, 2 ).equals( "-b30.2TGJB" ) ) &&
				( NumberTheory.convDecimal2OthBase( -6315103, 31, 2 ).equals( "-b31.6PUC0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -12609504, 32, 2 ).equals( "-b32.C0PV0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -36763583, 33, 2 ).equals( "-b33.V000W" ) ) &&
				( NumberTheory.convDecimal2OthBase( -31721794, 34, 2 ).equals( "-b34.NP2XW" ) ) &&
				( NumberTheory.convDecimal2OthBase( -1587565, 35, 2 ).equals( "-b35.120Y0" ) ) &&
				( NumberTheory.convDecimal2OthBase( -60466175, 36, 2 ).equals( "-b36.ZZZZZ" ) )
				)
			test[testId] = true;
		/*
		 * 48. mXparser. conv oth to decimal - special cases
		 */
		testId++;
		double potNaN1 = NumberTheory.convOthBase2Decimal((String)null);
		double potNaN2 = NumberTheory.convOthBase2Decimal("1");
		double potNaN3 = NumberTheory.convOthBase2Decimal("12");
		double potNaN4 = NumberTheory.convOthBase2Decimal("b1.123");
		double potNaN5 = NumberTheory.convOthBase2Decimal("b37.123");
		if (
				( Double.isNaN(potNaN1) ) &&
				( Double.isNaN(potNaN2) ) &&
				( Double.isNaN(potNaN3) ) &&
				( Double.isNaN(potNaN4) ) &&
				( Double.isNaN(potNaN5) )
				)
			test[testId] = true;
		/*
		 * 49. missing user defined arguments
		 */
		testId++;
		e = new Expression("sin(x) + cos(x) + f(x,y) + x + y / z + 2*pi");
		String[] misArgs = e.getMissingUserDefinedArguments();
		if (
				( misArgs[0].equals("x") ) &&
				( misArgs[1].equals("y") ) &&
				( misArgs[2].equals("z") ) &&
				( misArgs.length == 3 )
				)
			test[testId] = true;
		/*
		 * 50. missing user defined functions
		 */
		testId++;
		e = new Expression("sin(x) + cos(x) + f(x,y) + x + y / z + 2*pi");
		String[] misFun = e.getMissingUserDefinedFunctions();
		if (
				( misFun[0].equals("f") ) &&
				( misFun.length == 1 )
				)
			test[testId] = true;
		/*
		 * 51. Default radian / degrees mode
		 */
		testId++;
		if ( (mXparser.checkIfRadiansMode() == true) && (mXparser.checkIfDegreesMode() == false) )
			test[testId] = true;
		/*
		 * 52. Set to degrees mode
		 */
		testId++;
		mXparser.setDegreesMode();
		if ( (mXparser.checkIfRadiansMode() == false) && (mXparser.checkIfDegreesMode() == true) )
			test[testId] = true;
		/*
		 * 53. Set to degrees mode
		 */
		testId++;
		mXparser.setRadiansMode();
		if ( (mXparser.checkIfRadiansMode() == true) && (mXparser.checkIfDegreesMode() == false) )
			test[testId] = true;
		/*
		 * 54. roundHalfUp
		 */
		testId++;
		if (
				( MathFunctions.roundHalfUp( 0.0, 0 ) == 0.0) &&
				( MathFunctions.roundHalfUp( 0.0, 1 ) == 0.0) &&
				( MathFunctions.roundHalfUp( 0.0, 2 ) == 0.0) &&
				( MathFunctions.roundHalfUp( 0.0, 100 ) == 0.0) &&
				( Double.isNaN( MathFunctions.roundHalfUp( 0.0, -1 ) ) ) &&
				( MathFunctions.roundHalfUp( 1.0, 0 ) == 1.0) &&
				( MathFunctions.roundHalfUp( 1.0, 1 ) == 1.0) &&
				( MathFunctions.roundHalfUp( 1.0, 2 ) == 1.0) &&
				( MathFunctions.roundHalfUp( 1.0, 100 ) == 1.0) &&
				( Double.isNaN( MathFunctions.roundHalfUp( 1.0, -1 ) ) ) &&
				( MathFunctions.roundHalfUp( 9856.0, 0 ) == 9856.0) &&
				( MathFunctions.roundHalfUp( 9856.0, 1 ) == 9856.0) &&
				( MathFunctions.roundHalfUp( 9856.0, 2 ) == 9856.0) &&
				( MathFunctions.roundHalfUp( 9856.0, 100 ) == 9856.0) &&
				( Double.isNaN( MathFunctions.roundHalfUp( 9856.0, -1 ) ) ) &&
				( MathFunctions.roundHalfUp( 9.856E303, 0 ) == 9.856E303) &&
				( MathFunctions.roundHalfUp( 9.856E303, 1 ) == 9.856E303) &&
				( MathFunctions.roundHalfUp( 9.856E303, 2 ) == 9.856E303) &&
				( MathFunctions.roundHalfUp( 9.856E303, 100 ) == 9.856E303) &&
				( Double.isNaN( MathFunctions.roundHalfUp( 9.856E303, -1 ) ) ) &&
				( MathFunctions.roundHalfUp( -1.0, 0 ) == -1.0) &&
				( MathFunctions.roundHalfUp( -1.0, 1 ) == -1.0) &&
				( MathFunctions.roundHalfUp( -1.0, 2 ) == -1.0) &&
				( MathFunctions.roundHalfUp( -1.0, 100 ) == -1.0) &&
				( Double.isNaN( MathFunctions.roundHalfUp( -1.0, -1 ) ) ) &&
				( MathFunctions.roundHalfUp( -9856.0, 0 ) == -9856.0) &&
				( MathFunctions.roundHalfUp( -9856.0, 1 ) == -9856.0) &&
				( MathFunctions.roundHalfUp( -9856.0, 2 ) == -9856.0) &&
				( MathFunctions.roundHalfUp( -9856.0, 100 ) == -9856.0) &&
				( Double.isNaN( MathFunctions.roundHalfUp( -9856.0, -1 ) ) ) &&
				( MathFunctions.roundHalfUp( -9.856E303, 0 ) == -9.856E303) &&
				( MathFunctions.roundHalfUp( -9.856E303, 1 ) == -9.856E303) &&
				( MathFunctions.roundHalfUp( -9.856E303, 2 ) == -9.856E303) &&
				( MathFunctions.roundHalfUp( -9.856E303, 100 ) == -9.856E303) &&
				( Double.isNaN( MathFunctions.roundHalfUp( -9.856E303, -1 ) ) ) &&
				( MathFunctions.roundHalfUp( 1.0E-5, 5 ) == 1.0E-5) &&
				( MathFunctions.roundHalfUp( 1.0E-5, 6 ) == 1.0E-5) &&
				( MathFunctions.roundHalfUp( 1.0E-5, 100 ) == 1.0E-5) &&
				( MathFunctions.roundHalfUp( 1.0E-5, 500 ) == 1.0E-5) &&
				( MathFunctions.roundHalfUp( 1.0E-5, 4 ) == 0.0) &&
				( MathFunctions.roundHalfUp( 1.0E-5, 3 ) == 0.0) &&
				( MathFunctions.roundHalfUp( 1.0E-5, 2 ) == 0.0) &&
				( MathFunctions.roundHalfUp( 1.0E-5, 1 ) == 0.0) &&
				( MathFunctions.roundHalfUp( 1.0E-5, 0 ) == 0.0) &&
				( MathFunctions.roundHalfUp( -1.0E-5, 5 ) == -1.0E-5) &&
				( MathFunctions.roundHalfUp( -1.0E-5, 6 ) == -1.0E-5) &&
				( MathFunctions.roundHalfUp( -1.0E-5, 100 ) == -1.0E-5) &&
				( MathFunctions.roundHalfUp( -1.0E-5, 500 ) == -1.0E-5) &&
				( MathFunctions.roundHalfUp( -1.0E-5, 4 ) == -0.0) &&
				( MathFunctions.roundHalfUp( -1.0E-5, 3 ) == -0.0) &&
				( MathFunctions.roundHalfUp( -1.0E-5, 2 ) == -0.0) &&
				( MathFunctions.roundHalfUp( -1.0E-5, 1 ) == -0.0) &&
				( MathFunctions.roundHalfUp( -1.0E-5, 0 ) == -0.0) &&
				( MathFunctions.roundHalfUp( 10.000000000123, 14 ) == 10.000000000123) &&
				( MathFunctions.roundHalfUp( 10.000000000123, 13 ) == 10.000000000123) &&
				( MathFunctions.roundHalfUp( 10.000000000123, 12 ) == 10.000000000123) &&
				( MathFunctions.roundHalfUp( 10.000000000123, 11 ) == 10.00000000012) &&
				( MathFunctions.roundHalfUp( 10.000000000123, 10 ) == 10.0000000001) &&
				( MathFunctions.roundHalfUp( 10.000000000123, 9 ) == 10.0) &&
				( MathFunctions.roundHalfUp( 10.000000000123, 3 ) == 10.0) &&
				( MathFunctions.roundHalfUp( 10.000000000123, 0 ) == 10.0) &&
				( MathFunctions.roundHalfUp( -10.000000000123, 14 ) == -10.000000000123) &&
				( MathFunctions.roundHalfUp( -10.000000000123, 13 ) == -10.000000000123) &&
				( MathFunctions.roundHalfUp( -10.000000000123, 12 ) == -10.000000000123) &&
				( MathFunctions.roundHalfUp( -10.000000000123, 11 ) == -10.00000000012) &&
				( MathFunctions.roundHalfUp( -10.000000000123, 10 ) == -10.0000000001) &&
				( MathFunctions.roundHalfUp( -10.000000000123, 9 ) == -10.0) &&
				( MathFunctions.roundHalfUp( -10.000000000123, 3 ) == -10.0) &&
				( MathFunctions.roundHalfUp( -10.000000000123, 0 ) == -10.0) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 200 ) == 100.444444444445) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 14 ) == 100.444444444445) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 13 ) == 100.444444444445) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 12 ) == 100.444444444445) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 11 ) == 100.44444444445) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 10 ) == 100.4444444444) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 9 ) == 100.444444444) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 8 ) == 100.44444444) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 7 ) == 100.4444444) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 6 ) == 100.444444) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 5 ) == 100.44444) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 4 ) == 100.4444) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 3 ) == 100.444) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 2 ) == 100.44) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 1 ) == 100.4) &&
				( MathFunctions.roundHalfUp( 100.444444444445, 0 ) == 100.0) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 200 ) == -100.444444444445) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 14 ) == -100.444444444445) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 13 ) == -100.444444444445) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 12 ) == -100.444444444445) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 11 ) == -100.44444444445) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 10 ) == -100.4444444444) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 9 ) == -100.444444444) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 8 ) == -100.44444444) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 7 ) == -100.4444444) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 6 ) == -100.444444) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 5 ) == -100.44444) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 4 ) == -100.4444) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 3 ) == -100.444) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 2 ) == -100.44) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 1 ) == -100.4) &&
				( MathFunctions.roundHalfUp( -100.444444444445, 0 ) == -100.0) &&
				( MathFunctions.roundHalfUp( 1.2345678907654321E9, 100 ) == 1.2345678907654321E9) &&
				( MathFunctions.roundHalfUp( 1.2345678907654321E9, 8 ) == 1.2345678907654321E9) &&
				( MathFunctions.roundHalfUp( 1.2345678907654321E9, 7 ) == 1.2345678907654321E9) &&
				( MathFunctions.roundHalfUp( 1.2345678907654321E9, 6 ) == 1.234567890765432E9) &&
				( MathFunctions.roundHalfUp( 1.2345678907654321E9, 5 ) == 1.23456789076543E9) &&
				( MathFunctions.roundHalfUp( 1.2345678907654321E9, 4 ) == 1.2345678907654E9) &&
				( MathFunctions.roundHalfUp( 1.2345678907654321E9, 3 ) == 1.234567890765E9) &&
				( MathFunctions.roundHalfUp( 1.2345678907654321E9, 2 ) == 1.23456789077E9) &&
				( MathFunctions.roundHalfUp( 1.2345678907654321E9, 1 ) == 1.2345678908E9) &&
				( MathFunctions.roundHalfUp( 1.2345678907654321E9, 0 ) == 1.234567891E9) &&
				( MathFunctions.roundHalfUp( -1.2345678907654321E9, 100 ) == -1.2345678907654321E9) &&
				( MathFunctions.roundHalfUp( -1.2345678907654321E9, 8 ) == -1.2345678907654321E9) &&
				( MathFunctions.roundHalfUp( -1.2345678907654321E9, 7 ) == -1.2345678907654321E9) &&
				( MathFunctions.roundHalfUp( -1.2345678907654321E9, 6 ) == -1.234567890765432E9) &&
				( MathFunctions.roundHalfUp( -1.2345678907654321E9, 5 ) == -1.23456789076543E9) &&
				( MathFunctions.roundHalfUp( -1.2345678907654321E9, 4 ) == -1.2345678907654E9) &&
				( MathFunctions.roundHalfUp( -1.2345678907654321E9, 3 ) == -1.234567890765E9) &&
				( MathFunctions.roundHalfUp( -1.2345678907654321E9, 2 ) == -1.23456789077E9) &&
				( MathFunctions.roundHalfUp( -1.2345678907654321E9, 1 ) == -1.2345678908E9) &&
				( MathFunctions.roundHalfUp( -1.2345678907654321E9, 0 ) == -1.234567891E9) &&
				( MathFunctions.roundHalfUp( 5.9999999999, 11 ) == 5.9999999999) &&
				( MathFunctions.roundHalfUp( 5.9999999999, 10 ) == 5.9999999999) &&
				( MathFunctions.roundHalfUp( 5.9999999999, 9 ) == 6.0) &&
				( MathFunctions.roundHalfUp( 5.9999999999, 3 ) == 6.0) &&
				( MathFunctions.roundHalfUp( 5.9999999999, 0 ) == 6.0) &&
				( MathFunctions.roundHalfUp( -5.9999999999, 11 ) == -5.9999999999) &&
				( MathFunctions.roundHalfUp( -5.9999999999, 10 ) == -5.9999999999) &&
				( MathFunctions.roundHalfUp( -5.9999999999, 9 ) == -6.0) &&
				( MathFunctions.roundHalfUp( -5.9999999999, 3 ) == -6.0) &&
				( MathFunctions.roundHalfUp( -5.9999999999, 0 ) == -6.0) &&
				( MathFunctions.roundHalfUp( 1.2300000000000001E305, 307 ) == 1.2300000000000001E305) &&
				( MathFunctions.roundHalfUp( 1.2300000000000001E305, 10 ) == 1.2300000000000001E305) &&
				( MathFunctions.roundHalfUp( 1.2300000000000001E305, 1 ) == 1.2300000000000001E305) &&
				( MathFunctions.roundHalfUp( 1.2300000000000001E305, 0 ) == 1.2300000000000001E305) &&
				( MathFunctions.roundHalfUp( -1.2300000000000001E305, 307 ) == -1.2300000000000001E305) &&
				( MathFunctions.roundHalfUp( -1.2300000000000001E305, 10 ) == -1.2300000000000001E305) &&
				( MathFunctions.roundHalfUp( -1.2300000000000001E305, 1 ) == -1.2300000000000001E305) &&
				( MathFunctions.roundHalfUp( -1.2300000000000001E305, 0 ) == -1.2300000000000001E305) &&
				( Double.isNaN( MathFunctions.roundHalfUp( Double.NaN, 0 ) ) ) &&
				( MathFunctions.roundHalfUp( Double.POSITIVE_INFINITY, 100 ) == Double.POSITIVE_INFINITY ) &&
				( MathFunctions.roundHalfUp( Double.NEGATIVE_INFINITY, 100 ) == Double.NEGATIVE_INFINITY )
			) test[testId] = true;
		/*
		 * 55. To Mixed fraction
		 */
		testId++;
		if (
				(NumberTheory.toMixedFractionString(0.0).equals("0")) &&
				(NumberTheory.toMixedFractionString(1.0).equals("1")) &&
				(NumberTheory.toMixedFractionString(2.0).equals("2")) &&
				(NumberTheory.toMixedFractionString(1234567890.0).equals("1234567890")) &&
				(NumberTheory.toMixedFractionString(-1.0).equals("-1")) &&
				(NumberTheory.toMixedFractionString(-2.0).equals("-2")) &&
				(NumberTheory.toMixedFractionString(-1234567890.0).equals("-1234567890")) &&
				(NumberTheory.toMixedFractionString(1.0/2.0).equals("1/2")) &&
				(NumberTheory.toMixedFractionString(-1.0/2.0).equals("-1/2")) &&
				(NumberTheory.toMixedFractionString(2.0/3.0).equals("2/3")) &&
				(NumberTheory.toMixedFractionString(-2.0/3.0).equals("-2/3")) &&
				(NumberTheory.toMixedFractionString(263.0/326.0).equals("263/326")) &&
				(NumberTheory.toMixedFractionString(-263.0/326.0).equals("-263/326")) &&
				(NumberTheory.toMixedFractionString(2.0+5.0/6.0).equals("2+5/6")) &&
				(NumberTheory.toMixedFractionString(-2.0-5.0/6.0).equals("-2-5/6")) &&
				(NumberTheory.toMixedFractionString(2+263.0/326.0).equals("2+263/326")) &&
				(NumberTheory.toMixedFractionString(-2-263.0/326.0).equals("-2-263/326")) &&
				(NumberTheory.toMixedFractionString(20+263.0/326.0).equals("20+263/326")) &&
				(NumberTheory.toMixedFractionString(-20-263.0/326.0).equals("-20-263/326")) &&
				(NumberTheory.toMixedFractionString(200+263.0/326.0).equals("200+263/326")) &&
				(NumberTheory.toMixedFractionString(-200-263.0/326.0).equals("-200-263/326")) &&
				(NumberTheory.toMixedFractionString(2000+263.0/326.0).equals("2000+263/326")) &&
				(NumberTheory.toMixedFractionString(-2000-263.0/326.0).equals("-2000-263/326")) &&
				(NumberTheory.toMixedFractionString(20000+263.0/326.0).equals("20000+263/326")) &&
				(NumberTheory.toMixedFractionString(-20000-263.0/326.0).equals("-20000-263/326")) &&
				(NumberTheory.toMixedFractionString(200000+263.0/326.0).equals("200000+263/326")) &&
				(NumberTheory.toMixedFractionString(-200000-263.0/326.0).equals("-200000-263/326")) &&
				(NumberTheory.toMixedFractionString(2000000+263.0/326.0).equals("2000000+263/326")) &&
				(NumberTheory.toMixedFractionString(-2000000-263.0/326.0).equals("-2000000-263/326")) &&
				(NumberTheory.toMixedFractionString(20000000+263.0/326.0).equals("20000000+263/326")) &&
				(NumberTheory.toMixedFractionString(-20000000-263.0/326.0).equals("-20000000-263/326")) &&
				(NumberTheory.toMixedFractionString(200000000+263.0/326.0).equals("200000000+263/326")) &&
				(NumberTheory.toMixedFractionString(-200000000-263.0/326.0).equals("-200000000-263/326")) &&
				(NumberTheory.toMixedFractionString(2000000000+263.0/326.0).equals("2000000000+263/326")) &&
				(NumberTheory.toMixedFractionString(-2000000000-263.0/326.0).equals("-2000000000-263/326")) &&
				(NumberTheory.toMixedFractionString(20000000000.0+263.0/326.0).equals("20000000000+263/326")) &&
				(NumberTheory.toMixedFractionString(-20000000000.0-263.0/326.0).equals("-20000000000-263/326"))
				) test[testId] = true;
		/*
		 * 56. To fraction
		 */
		testId++;
		if (
				(NumberTheory.toFractionString(0.0).equals("0")) &&
				(NumberTheory.toFractionString(1.0).equals("1")) &&
				(NumberTheory.toFractionString(2.0).equals("2")) &&
				(NumberTheory.toFractionString(1234567890.0).equals("1234567890")) &&
				(NumberTheory.toFractionString(-1.0).equals("-1")) &&
				(NumberTheory.toFractionString(-2.0).equals("-2")) &&
				(NumberTheory.toFractionString(-1234567890.0).equals("-1234567890")) &&
				(NumberTheory.toFractionString(1.0/2.0).equals("1/2")) &&
				(NumberTheory.toFractionString(-1.0/2.0).equals("-1/2")) &&
				(NumberTheory.toFractionString(2.0/3.0).equals("2/3")) &&
				(NumberTheory.toFractionString(-2.0/3.0).equals("-2/3")) &&
				(NumberTheory.toFractionString(263.0/326.0).equals("263/326")) &&
				(NumberTheory.toFractionString(-263.0/326.0).equals("-263/326")) &&
				(NumberTheory.toFractionString(17.0/6.0).equals("17/6")) &&
				(NumberTheory.toFractionString(-17.0/6.0).equals("-17/6")) &&
				(NumberTheory.toFractionString(915.0/326.0).equals("915/326")) &&
				(NumberTheory.toFractionString(-915.0/326.0).equals("-915/326")) &&
				(NumberTheory.toFractionString(6783.0/326.0).equals("6783/326")) &&
				(NumberTheory.toFractionString(-6783.0/326.0).equals("-6783/326")) &&
				(NumberTheory.toFractionString(65463.0/326.0).equals("65463/326")) &&
				(NumberTheory.toFractionString(-65463.0/326.0).equals("-65463/326")) &&
				(NumberTheory.toFractionString(652263.0/326.0).equals("652263/326")) &&
				(NumberTheory.toFractionString(-652263.0/326.0).equals("-652263/326")) &&
				(NumberTheory.toFractionString(6520263.0/326.0).equals("6520263/326")) &&
				(NumberTheory.toFractionString(-6520263.0/326.0).equals("-6520263/326")) &&
				(NumberTheory.toFractionString(65200263.0/326.0).equals("65200263/326")) &&
				(NumberTheory.toFractionString(-65200263.0/326.0).equals("-65200263/326")) &&
				(NumberTheory.toFractionString(652000263.0/326.0).equals("652000263/326")) &&
				(NumberTheory.toFractionString(-652000263.0/326.0).equals("-652000263/326")) &&
				(NumberTheory.toFractionString(6520000263.0/326.0).equals("6520000263/326")) &&
				(NumberTheory.toFractionString(-6520000263.0/326.0).equals("-6520000263/326")) &&
				(NumberTheory.toFractionString(65200000263.0/326.0).equals("65200000263/326")) &&
				(NumberTheory.toFractionString(-65200000263.0/326.0).equals("-65200000263/326")) &&
				(NumberTheory.toFractionString(652000000263.0/326.0).equals("652000000263/326")) &&
				(NumberTheory.toFractionString(-652000000263.0/326.0).equals("-652000000263/326")) &&
				(NumberTheory.toFractionString(6520000000263.0/326.0).equals("6520000000263/326")) &&
				(NumberTheory.toFractionString(-6520000000263.0/326.0).equals("-6520000000263/326"))
				) test[testId] = true;
		/*
		 * 57. Variadic user function
		 */
		testId++;
		Function f = new Function("f(...) = sum( i, 1, [npar], par(i) )");
		if (
				(f.calculate(1) == 1) &&
				(f.calculate(1,2) == 3) &&
				(f.calculate(1,2,3) == 6) &&
				(f.calculate(1,2,3,4) == 10) &&
				(f.calculate(1,2,3,4,5) == 15)
			) test[testId] = true;
		/*
		 * 58. Variadic user function with extension
		 */
		testId++;
		FunExtVar gx = new FunExtVar();
		Function g = new Function("g", gx);
		if (
				(g.calculate(1) == 1) &&
				(g.calculate(1,2) == 3) &&
				(g.calculate(1,2,3) == 6) &&
				(g.calculate(1,2,3,4) == 10) &&
				(g.calculate(1,2,3,4,5) == 15)
			) test[testId] = true;
		/*
		 * 59. Almost int rounding disable / enable
		 */
		testId++;
		boolean u1 = mXparser.checkIfAlmostIntRounding();
		mXparser.disableAlmostIntRounding();
		boolean u2 = mXparser.checkIfAlmostIntRounding();
		mXparser.enableAlmostIntRounding();
		boolean u3 = mXparser.checkIfAlmostIntRounding();
		if ( (u1 == true) && (u2 == false) && (u3 == true))
			test[testId] = true;
		/*
		 * 60. StringIndexOutOfBoundsException asking for tokens of empty expression #135
		 */
		testId++;
		e = new Expression("");
		tokens = e.getCopyOfInitialTokens();
		if (tokens.size() == 0)
			test[testId] = true;
		/*
		 * 61. Argument check syntax #145
		 */
		testId++;
		x = new Argument("AAAAA", 730000000);
		if (x.checkSyntax() == Argument.NO_SYNTAX_ERRORS)
			test[testId] = true;
		/*
		 * 62. Argument check syntax #145
		 */
		testId++;
		x = new Argument("AAAAA = 730000000");
		if (x.checkSyntax() == Argument.NO_SYNTAX_ERRORS)
			test[testId] = true;
		/*
		 * 63. Argument check syntax #145
		 */
		testId++;
		x = new Argument("AAAAA = y*730000000");
		if (x.checkSyntax() == Argument.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
			test[testId] = true;
		/*
		 * 64. Argument check syntax #145
		 */
		testId++;
		y = new Argument("y", 2);
		x = new Argument("AAAAA = y*730000000", y);
		if (x.checkSyntax() == Argument.NO_SYNTAX_ERRORS)
			test[testId] = true;
		/* ============================================= */
        long end =  System.currentTimeMillis();
		int nOk = 0;
		int nError = 0;
		for (int i = 0; i <= testId; i++) {
			if (test[i]) {
				nOk++;
				mXparser.consolePrintln("[" + i + "] " + "OK");
			} else {
				nError++;
				mXparser.consolePrintln("[" + i + "] " + "ERROR");
			}
		}
		mXparser.consolePrintln("OK : " + nOk + ", ERRORs: " + nError + ", total time: " + (end-start)/1000.0 + " s.");
		for (int i = 0; i <= testId; i++) {
			if (!test[i])
				mXparser.consolePrintln("ERROR: " + i);
		}
		return nError;
	}
	/**
	 * Runs API regression tests.
	 *
	 * @param args  Not used.
	 */
	public static void main(String[] args) {
		start();
	}
}