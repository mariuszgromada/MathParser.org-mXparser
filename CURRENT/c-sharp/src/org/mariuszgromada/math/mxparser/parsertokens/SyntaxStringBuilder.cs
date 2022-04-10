/*
 * @(#)SyntaxStringBuilder.cs        5.0.0    2022-04-10
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
using System;

namespace org.mariuszgromada.math.mxparser.parsertokens {
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
		internal static readonly String vInParentheses = parentheses(v);
		internal static readonly String kInParentheses = parentheses(k);
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
		internal static String unaryFunctionV(String fun) {
			return fun + vInParentheses;
		}
		internal static String unaryFunctionK(String fun) {
			return fun + kInParentheses;
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