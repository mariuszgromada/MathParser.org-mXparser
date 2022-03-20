/*
 * @(#)SyntaxStringBuilder.cs        5.0.0    2022-03-20
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
 *     http://scalarmath.org/
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
using System;

namespace org.mariuszgromada.math.mxparser.parsertokens {
	/**
	 * Syntax String Builder - rules used by parser token classes.
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
	 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Free</a><br>
	 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
	 *                 <a href="http://scalarmath.org/" target="_blank">ScalarMath.org</a><br>
	 *
	 * @see BinaryRelation
	 * @see BitwiseOperator
	 * @see BooleanOperator
	 * @see CalculusOperator
	 * @see Function1Arg
	 * @see Function2Arg
	 * @see Function3Arg
	 * @see FunctionVariadic
	 * @see Operator
	 *
	 * @version        5.0.0
	 */
	internal sealed class SyntaxStringBuilder {
		internal const String space = " ";
		internal const String one = "1";
		internal const String dash = "-";
		internal const String x = "x";
		internal const String y = "y";
		internal const String d = "d";
		internal const String a = "a";
		internal const String b = "b";
		internal const String k = "k";
		internal const String m = "m";
		internal const String n = "n";
		internal const String p = "p";
		internal const String q = "q";
		internal const String i = "i";
		internal const String j = "j";
		internal const String s = "s";
		internal const String v = "v";
		internal const String dots = "...";
		internal const String comma = ",";
		internal const String semicolon = ";";
		internal const String from = "from";
		internal const String to = "to";
		internal const String expr = "expr";
		internal const String by = "by";
		internal const String arg = "arg";
		internal const String point = "point";
		internal const String delta = "delta";
		internal const String number = "number";
		internal const String factorid = "factorid";
		internal const String mean = "mean";
		internal const String stdv = "stdv";
		internal const String basestr = "base";
		internal const String num = "num";
		internal const String pos = "pos";
		internal const String rootorder = "rootorder";
		internal const String cond = "cond";
		internal const String exprIfTrue = "expr-if-true";
		internal const String exprIfFalse = "expr-if-false";

		internal static readonly String iInParentheses = parentheses(i);
		internal static readonly String nInParentheses = parentheses(n);
		internal static readonly String xInParentheses = parentheses(x);
		internal static readonly String optBy = optionalParameter(by);
		internal static readonly String optPoint = optionalParameter(point);
		internal static readonly String optDelta = optionalParameter(delta);
		internal static readonly String iFromToExprOptByInParentheses = parentheses(i + comma + space + from + comma + space + to + comma + space + expr + comma + space + optBy);
		internal static readonly String exprArgFromToInParentheses = parentheses(expr + comma + space + arg + comma + space + from + comma + space + to);
		internal static readonly String exprArgOptPointInParentheses = parentheses(expr + comma + space + arg + comma + space + optPoint);
		internal static readonly String exprArgOptDeltaInParentheses = parentheses(expr + comma + space + arg + comma + space + optDelta);
		internal static readonly String exprNArgInParentheses = parentheses(expr + comma + space + n + comma + space + arg);
		internal static readonly String a1aNInParentheses = parentheses(a + one + comma + space + dots + comma + space + a + n);
		internal static readonly String v1vNInParentheses = parentheses(v + one + comma + space + dots + comma + space + v + n);
		internal static readonly String bd1dNInParentheses = parentheses(b + comma + space + d + one + comma + space + dots + comma + space + d + n);
		internal static readonly String cond1expr1condNexprNInParentheses = parentheses(cond + dash + one + comma + space + expr + dash + one + semicolon + space + dots + space + semicolon + space + cond + dash + n + comma + space + expr + dash + n);

		internal static String binaryOperator(String oper) {
			return binaryOperator(a, oper, b);
		}
		internal static String binaryOperatorNoSpace(String oper) {
			return binaryOperatorNoSpace(a, oper, b);
		}
		internal static String binaryRelation(String oper) {
			return binaryOperator(a, oper, b);
		}
		internal static String binaryBitwiseOperator(String oper) {
			return binaryOperator(a, oper, b);
		}
		internal static String binaryBooleanOperator(String oper) {
			return binaryOperator(p, oper, q);
		}
		internal static String unaryLeftBitwiseOperator(String oper) {
			return unaryLeftOperator(oper, a);
		}
		internal static String unaryLeftOperator(String oper) {
			return unaryLeftOperator(oper, x);
		}
		internal static String unaryLeftBooleanOperator(String oper) {
			return unaryLeftOperator(oper, p);
		}
		internal static String unaryRightOperator(String oper) {
			return unaryRightOperator(n, oper);
		}
		internal static String calculusIFromToExprOptBy(String oper) {
			return oper + iFromToExprOptByInParentheses;
		}
		internal static String calculusExprArgFromTo(String oper) {
			return oper + exprArgFromToInParentheses;
		}
		internal static String calculusExprArgOptPoint(String oper) {
			return oper + exprArgOptPointInParentheses;
		}
		internal static String calculusExprArgOptDelta(String oper) {
			return oper + exprArgOptDeltaInParentheses;
		}
		internal static String exprNArg(String oper) {
			return oper + exprNArgInParentheses;
		}
		internal static String unaryFunctionX(String fun) {
			return fun + xInParentheses;
		}
		internal static String unaryFunctionN(String fun) {
			return fun + nInParentheses;
		}
		internal static String unaryFunctionI(String fun) {
			return fun + iInParentheses;
		}
		internal static String binaryFunction(String fun, String x1, String x2) {
			return fun + parentheses(x1 + comma + space + x2);
		}
		internal static String function3Arg(String fun, String x1, String x2, String x3) {
			return fun + parentheses(x1 + comma + space + x2 + comma + space + x3);
		}
		internal static String functionVariadicA(String fun) {
			return fun + a1aNInParentheses;
		}
		internal static String functionVariadicV(String fun) {
			return fun + v1vNInParentheses;
		}
		internal static String functionVariadicBD(String fun) {
			return fun + bd1dNInParentheses;
		}
		internal static String functionVariadicCond(String fun) {
			return fun + cond1expr1condNexprNInParentheses;
		}

		private static String binaryOperator(String left, String oper, String right) {
			return left + space + oper + space + right;
		}
		private static String binaryOperatorNoSpace(String left, String oper, String right) {
			return left + oper + right;
		}
		private static String unaryLeftOperator(String oper, String var) {
			return oper + var;
		}
		private static String unaryRightOperator(String var, String oper) {
			return var + oper;
		}
		private static String optionalParameter(String var) {
			return  "<" + var + ">";
		}
		private static String parentheses(String str) {
			return  "(" + str + ")";
		}
	}
}