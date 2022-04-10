/*
 * @(#)SyntaxStringBuilder.java        5.0.0    2022-04-10
 *
 * Copyright 2010 - 2022 MARIUSZ GROMADA. All rights reserved.
 *
 * PRODUCT: MathParser.org-mXparser
 * LICENSE: DUAL LICENSE
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE SOFTWARE, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * MARIUSZ GROMADA provides MathParser.org-mXparser SOFTWARE under the
 * DUAL LICENSE model designed to meet the needs of both Non-Commercial Use
 * as well as Commercial Use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. NON-COMMERCIAL USE examples:
 *
 * 1. Free Open-Source Software ("FOSS").
 * 2. Non-commercial use in research, scholarly and education.
 *
 * COMMERCIAL USE means any use or activity where a fee is charged or the
 * purpose is the sale of a good or service, or the use or activity is
 * intended to produce a profit. COMMERCIAL USE examples:
 *
 * 1. OEMs (Original Equipment Manufacturers).
 * 2. ISVs (Independent Software Vendors).
 * 3. VARs (Value Added Resellers).
 * 4. Other distributors that combine and distribute commercially licensed
 *    software.
 *
 * IN CASE YOU WANT TO USE THE SOFTWARE COMMERCIALLY, YOU MUST PURCHASE
 * THE APPROPRIATE LICENSE FROM "INFIMA IWONA GLOWACKA-GROMADA", ONLINE
 * STORE ADDRESS: HTTPS://PAYHIP.COM/INFIMA
 *
 * NON-COMMERCIAL LICENSE
 *
 * Redistribution and use of the PRODUCT in source and/or binary forms, with
 * or without modification, are permitted provided that the following
 * conditions are met:
 *
 * 1. Redistributions of source code must retain unmodified content of the
 *    entire MathParser.org-mXparser DUAL LICENSE, including definition of
 *    NON-COMMERCIAL USE, definition of COMMERCIAL USE, NON-COMMERCIAL
 *    LICENSE conditions, COMMERCIAL LICENSE conditions, and the following
 *    DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE in the documentation and/or other
 *    materials provided with the distribution, including definition of
 *    NON-COMMERCIAL USE, definition of COMMERCIAL USE, NON-COMMERCIAL
 *    LICENSE conditions, COMMERCIAL LICENSE conditions, and the following
 *    DISCLAIMER.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, MARIUSZ GROMADA allows you to
 *     download, install and use up to three copies of the PRODUCT to perform
 *     integration tests, confirm the quality of the PRODUCT and its
 *     suitability. The testing period should be limited to one month. Tests
 *     should take place via test environments. The purpose of the tests must
 *     not be to generate profit.
 *  2. Provided that you purchased a license from "INFIMA IWONA GLOWACKA-GROMADA"
 *     (online store address: https://payhip.com/INFIMA), you comply with all
 *     below terms and conditions, and you have acknowledged and understood the
 *     following DISCLAIMER, MARIUSZ GROMADA grants you a nonexclusive license
 *     including the following rights:
 *  3. In case you purchased a "Single License" You can install and use the
 *     PRODUCT from one workstation.
 *  4. Additional copies of the PRODUCT can be installed and used from more
 *     than one workstation; however, this number is limited to the number of
 *     copies purchased as per order.
 *  5. In case you purchased a "Site License", the PRODUCT can be installed
 *     and used from all workstations located at your premises.
 *  6. You may incorporate the unmodified PRODUCT into your own products and
 *     software.
 *  7. If you purchased a license with the "Source Code" option, you may modify
 *     the PRODUCT's source code and incorporate the modified source code into
 *     your own products and / or software.
 *  8. You may distribute your product and / or software with the incorporated
 *     PRODUCT royalty-free.
 *  9. You may make copies of the PRODUCT for backup and archival purposes.
 * 10. MARIUSZ GROMADA reserves all rights not expressly granted to you in
 *     this agreement.
 *
 * CONTACT
 * - e-mail: info@mathparser.org
 * - website: https://mathparser.org
 * - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
 * - online store: https://payhip.com/INFIMA
 *
 * DISCLAIMER
 *
 * THIS SOFTWARE IS PROVIDED BY MARIUSZ GROMADA "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL MATHPARSER.ORG MARIUSZ GROMADA OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VIEWS AND CONCLUSIONS CONTAINED IN THE SOFTWARE AND DOCUMENTATION ARE
 * THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING OFFICIAL
 * POLICIES, EITHER EXPRESSED OR IMPLIED, OF MARIUSZ GROMADA.
 */
package org.mariuszgromada.math.mxparser.parsertokens;
/**
 * Syntax String Builder - rules used by parser token classes.
 *
 * @author         <b>Mariusz Gromada</b><br>
 *                 <a href="https://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="https://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="https://payhip.com/INFIMA" target="_blank">INFIMA place to purchase a commercial MathParser.org-mXparser software license</a><br>
 *                 <a href="mailto:info@mathparser.org">info@mathparser.org</a><br>
 *                 <a href="https://scalarmath.org/" target="_blank">ScalarMath.org - a powerful math engine and math scripting language</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Lite</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
 *                 <a href="https://mathspace.pl" target="_blank">MathSpace.pl</a><br>
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
    static final String kInParentheses = parentheses(k);
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
    static String unaryFunctionK(String fun) {
        return fun + kInParentheses;
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
