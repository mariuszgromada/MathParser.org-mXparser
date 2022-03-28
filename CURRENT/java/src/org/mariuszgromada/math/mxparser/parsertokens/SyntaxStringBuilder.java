/*
 * @(#)SyntaxStringBuilder.java        5.0.0    2022-03-28
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
package org.mariuszgromada.math.mxparser.parsertokens;
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
final class SyntaxStringBuilder {
    static final String space = " ";
    static final String one = "1";
    static final String dash = "-";
    static final String x = "x";
    static final String y = "y";
    static final String d = "d";
    static final String a = "a";
    static final String b = "b";
    static final String k = "k";
    static final String m = "m";
    static final String n = "n";
    static final String p = "p";
    static final String q = "q";
    static final String i = "i";
    static final String j = "j";
    static final String s = "s";
    static final String v = "v";
    static final String dots = "...";
    static final String comma = ",";
    static final String semicolon = ";";
    static final String from = "from";
    static final String to = "to";
    static final String expr = "expr";
    static final String by = "by";
    static final String arg = "arg";
    static final String point = "point";
    static final String delta = "delta";
    static final String number = "number";
    static final String factorid = "factorid";
    static final String mean = "mean";
    static final String stdv = "stdv";
    static final String basestr = "base";
    static final String num = "num";
    static final String pos = "pos";
    static final String rootorder = "rootorder";
    static final String cond = "cond";
    static final String exprIfTrue = "expr-if-true";
    static final String exprIfFalse = "expr-if-false";

    static final String iInParentheses = parentheses(i);
    static final String nInParentheses = parentheses(n);
    static final String xInParentheses = parentheses(x);
    static final String vInParentheses = parentheses(v);
    static final String optBy = optionalParameter(by);
    static final String optPoint = optionalParameter(point);
    static final String optDelta = optionalParameter(delta);
    static final String iFromToExprOptByInParentheses = parentheses(i + comma + space + from + comma + space + to + comma + space + expr + comma + space + optBy);
    static final String exprArgFromToInParentheses = parentheses(expr + comma + space + arg + comma + space + from + comma + space + to);
    static final String exprArgOptPointInParentheses = parentheses(expr + comma + space + arg + comma + space + optPoint);
    static final String exprArgOptDeltaInParentheses = parentheses(expr + comma + space + arg + comma + space + optDelta);
    static final String exprNArgInParentheses = parentheses(expr + comma + space + n + comma + space + arg);
    static final String a1aNInParentheses = parentheses(a + one + comma + space + dots + comma + space + a + n);
    static final String v1vNInParentheses = parentheses(v + one + comma + space + dots + comma + space + v + n);
    static final String bd1dNInParentheses = parentheses(b + comma + space + d + one + comma + space + dots + comma + space + d + n);
    static final String cond1expr1condNexprNInParentheses = parentheses(cond + dash + one + comma + space + expr + dash + one + semicolon + space + dots + space + semicolon + space + cond + dash + n + comma + space + expr + dash + n);

    static String binaryOperator(String oper) {
        return binaryOperator(a, oper, b);
    }
    static String binaryOperatorNoSpace(String oper) {
        return binaryOperatorNoSpace(a, oper, b);
    }
    static String binaryRelation(String oper) {
        return binaryOperator(a, oper, b);
    }
    static String binaryBitwiseOperator(String oper) {
        return binaryOperator(a, oper, b);
    }
    static String binaryBooleanOperator(String oper) {
        return binaryOperator(p, oper, q);
    }
    static String unaryLeftBitwiseOperator(String oper) {
        return unaryLeftOperator(oper, a);
    }
    static String unaryLeftOperator(String oper) {
        return unaryLeftOperator(oper, x);
    }
    static String unaryLeftBooleanOperator(String oper) {
        return unaryLeftOperator(oper, p);
    }
    static String unaryRightOperator(String oper) {
        return unaryRightOperator(n, oper);
    }
    static String calculusIFromToExprOptBy(String oper) {
        return oper + iFromToExprOptByInParentheses;
    }
    static String calculusExprArgFromTo(String oper) {
        return oper + exprArgFromToInParentheses;
    }
    static String calculusExprArgOptPoint(String oper) {
        return oper + exprArgOptPointInParentheses;
    }
    static String calculusExprArgOptDelta(String oper) {
        return oper + exprArgOptDeltaInParentheses;
    }
    static String exprNArg(String oper) {
        return oper + exprNArgInParentheses;
    }
    static String unaryFunctionX(String fun) {
        return fun + xInParentheses;
    }
    static String unaryFunctionN(String fun) {
        return fun + nInParentheses;
    }
    static String unaryFunctionI(String fun) {
        return fun + iInParentheses;
    }
    static String unaryFunctionV(String fun) {
        return fun + vInParentheses;
    }
    static String binaryFunction(String fun, String x1, String x2) {
        return fun + parentheses(x1 + comma + space + x2);
    }
    static String function3Arg(String fun, String x1, String x2, String x3) {
        return fun + parentheses(x1 + comma + space + x2 + comma + space + x3);
    }
    static String functionVariadicA(String fun) {
        return fun + a1aNInParentheses;
    }
    static String functionVariadicV(String fun) {
        return fun + v1vNInParentheses;
    }
    static String functionVariadicBD(String fun) {
        return fun + bd1dNInParentheses;
    }
    static String functionVariadicCond(String fun) {
        return fun + cond1expr1condNexprNInParentheses;
    }

    private static String binaryOperator(String left, String oper, String right) {
        return left + space + oper + space + right;
    }
    private static String binaryOperatorNoSpace(String left, String oper, String right) {
        return left + oper + right;
    }
    private static String unaryLeftOperator(String oper, String var) {
        return  oper + var;
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
