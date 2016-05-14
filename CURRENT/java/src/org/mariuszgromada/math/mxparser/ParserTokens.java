/*
 * @(#)ParserTokens.java        3.0.0    2016-05-07
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
package org.mariuszgromada.math.mxparser;

/**
 * ParserSymbol
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
final class ParserSymbol {
	/**
	 * ParserSymbol - reg exp patterns.
	 */
	static final String Digits     = "(\\p{Digit}+)";
	static final String HexDigits  = "(\\p{XDigit}+)";
	static final String Exp        = "[eE][+-]?"+Digits;
	static final String fpRegex    =
	        ("[\\x00-\\x20]*"+  // Optional leading "whitespace"
	        "[+-]?(" + // Optional sign character
	        "NaN|" +           // "NaN" string
	        "Infinity|" +      // "Infinity" string
	        "((("+Digits+"(\\.)?("+Digits+"?)("+Exp+")?)|"+
	        "(\\.("+Digits+")("+Exp+")?)|"+
	        "((" +
	        // 0[xX] HexDigits ._opt BinaryExponent FloatTypeSuffix_opt
	        "(0[xX]" + HexDigits + "(\\.)?)|" +
	        // 0[xX] HexDigits_opt . HexDigits BinaryExponent FloatTypeSuffix_opt
	        "(0[xX]" + HexDigits + "?(\\.)" + HexDigits + ")" +
	        ")[pP][+-]?" + Digits + "))" +
	        "[fFdD]?))" +
	        "[\\x00-\\x20]*");
	static final String nameOnlyTokenRegExp = "([a-zA-Z_])+([a-zA-Z0-9_])*";
	static final String nameTokenRegExp = "(\\s)*" + nameOnlyTokenRegExp + "(\\s)*";
	static final String paramsTokenRegeExp = "(\\s)*\\(" + "(" + nameTokenRegExp + ",(\\s)*)*" + nameTokenRegExp + "\\)(\\s)*";
	static final String constArgDefStrRegExp = nameTokenRegExp + "=" + "(\\s)*(.)+(\\s)*";
	static final String functionDefStrRegExp = nameTokenRegExp + paramsTokenRegeExp + "=" + "(\\s)*(.)+(\\s)*";
	static final String function1ArgDefStrRegExp = nameTokenRegExp + "(\\s)*\\(" + nameTokenRegExp + "(\\s)*\\)(\\s)*" + "=" + "(\\s)*(.)+(\\s)*";

	/**
	 * ParserSymbol - token type id.
	 */
	static final int TYPE_ID 						= 20;
	static final String TYPE_DESC					= "Parser Symbol";
	/**
	 * ParserSymbol - tokens id.
	 */
	static final int LEFT_PARENTHESES_ID 			= 1;
	static final int RIGHT_PARENTHESES_ID			= 2;
	static final int COMMA_ID						= 3;
	static final int NUMBER_ID						= 1;
	static final int NUMBER_TYPE_ID					= 0;
	/**
	 * ParserSymbol - tokens key words.
	 */
	static final String LEFT_PARENTHESES_STR 		= "(";
	static final String RIGHT_PARENTHESES_STR		= ")";
	static final String COMMA_STR					= ",";
	static final String SEMI_STR					= ";";
	static final String NUMBER_STR					= "_num_";
	static final String NUMBER_REG_EXP				= fpRegex;

	/**
	 * ParserSymbol - tokens description.
	 */
	static final String LEFT_PARENTHESES_DESC 		= "left parentheses";
	static final String RIGHT_PARENTHESES_DESC		= "right parentheses";
	static final String COMMA_DESC					= "comma (function parameters)";
	static final String SEMI_DESC					= "semicolon (function parameters)";
	static final String NUMBER_DESC					= "decimal number";
	static final String NUMBER_REG_DESC				= "regullar expression for decimal numbers";
}
/**
 * Operator
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
final class Operator {
	/**
	 * Operator - token type id.
	 */
	static final int TYPE_ID 			= 1;
	static final String TYPE_DESC		= "Operator";
	/**
	 * Operator - tokens id.
	 */
	static final int PLUS_ID 			= 1;
	static final int MINUS_ID 			= 2;
	static final int MULTIPLY_ID 		= 3;
	static final int DIVIDE_ID 			= 4;
	static final int POWER_ID 			= 5;
	static final int FACT_ID			= 6;
	static final int MOD_ID				= 7;
	/**
	 * Operator - tokens key words.
	 */
	static final String PLUS_STR 			= "+";
	static final String MINUS_STR 			= "-";
	static final String MULTIPLY_STR 		= "*";
	static final String DIVIDE_STR 			= "/";
	static final String POWER_STR 			= "^";
	static final String FACT_STR 			= "!";
	static final String MOD_STR				= "%";
	/**
	 * Operator - tokens description.
	 */
	static final String PLUS_DESC 			= "addition";
	static final String MINUS_DESC 			= "subtraction";
	static final String MULTIPLY_DESC 		= "multiplication";
	static final String DIVIDE_DESC 		= "division";
	static final String POWER_DESC 			= "exponentiation";
	static final String FACT_DESC			= "factorial";
	static final String MOD_DESC			= "modulo function";
}
/**
 * Boolean Operators
 */
final class BooleanOperator {
	/**
	 * BooleanOperator - token type id.
	 */
	static final int TYPE_ID 				= 2;
	static final String TYPE_DESC			= "Boolean Operator";
	/**
	 * BooleanOperator - tokens id.
	 */
	static final int AND_ID					= 1;
	static final int NAND_ID				= 2;
	static final int OR_ID					= 3;
	static final int NOR_ID					= 4;
	static final int XOR_ID					= 5;
	static final int IMP_ID					= 6;
	static final int CIMP_ID				= 7;
	static final int NIMP_ID				= 8;
	static final int CNIMP_ID				= 9;
	static final int EQV_ID					= 10;
	static final int NEG_ID					= 11;
	/**
	 * BooleanOperator - tokens key words.
	 */
	static final String NEG_STR				= "~";
	static final String AND_STR				= "&";
	static final String AND1_STR			= "&&";
	static final String AND2_STR			= "/\\";
	static final String NAND_STR			= NEG_STR + AND_STR;
	static final String NAND1_STR			= NEG_STR + AND1_STR;
	static final String NAND2_STR			= NEG_STR + AND2_STR;
	static final String OR_STR				= "|";
	static final String OR1_STR				= "||";
	static final String OR2_STR				= "\\/";
	static final String NOR_STR				= NEG_STR + OR_STR;
	static final String NOR1_STR			= NEG_STR + OR1_STR;
	static final String NOR2_STR			= NEG_STR + OR2_STR;
	static final String XOR_STR				= "(+)";
	static final String IMP_STR				= "->";
	static final String CIMP_STR			= "<-";
	static final String NIMP_STR			= "-/>";
	static final String CNIMP_STR			= "</-";
	static final String EQV_STR				= "<->";
	/**
	 * BooleanOperator - tokens description.
	 */
	static final String AND_DESC			= "logical conjunction (AND)";
	static final String OR_DESC				= "logical disjunction (OR)";
	static final String NEG_DESC			= "negation";
	static final String NAND_DESC			= "NAND - Sheffer stroke";
	static final String NOR_DESC			= "logical NOR";
	static final String XOR_DESC			= "exclusive or (XOR)";
	static final String IMP_DESC			= "implication (IMP)";
	static final String CIMP_DESC			= "converse implication (CIMP)";
	static final String NIMP_DESC			= "material nonimplication (NIMP)";
	static final String CNIMP_DESC			= "converse nonimplication (CNIMP)";
	static final String EQV_DESC			= "logical biconditional (EQV)";
}
/**
 * BinaryRelation
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
final class BinaryRelation {
	/**
	 * BinaryRelation - token type id.
	 */
	static final int TYPE_ID 				= 3;
	static final String TYPE_DESC			= "Binary Relation";
	/**
	 * BinaryRelation - tokens id.
	 */
	static final int EQ_ID 					= 1;
	static final int NEQ_ID 				= 2;
	static final int LT_ID 					= 3;
	static final int GT_ID 					= 4;
	static final int LEQ_ID 				= 5;
	static final int GEQ_ID 				= 6;
	/**
	 * BinaryRelation - tokens key words.
	 */
	static final String EQ_STR 				= "=";
	static final String EQ1_STR 			= "==";
	static final String NEQ_STR 			= "<>";
	static final String NEQ1_STR 			= "~=";
	static final String NEQ2_STR 			= "!=";
	static final String LT_STR 				= "<";
	static final String GT_STR 				= ">";
	static final String LEQ_STR 			= "<=";
	static final String GEQ_STR 			= ">=";
	/**
	 * BinaryRelation - tokens description.
	 */
	static final String EQ_DESC 			= "equality";
	static final String NEQ_DESC			= "inequation";
	static final String LT_DESC 			= "lower than";
	static final String GT_DESC 			= "greater than";
	static final String LEQ_DESC 			= "lower or equal";
	static final String GEQ_DESC 			= "greater or equal";
}
/**
 * Function1Arg
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
final class Function1Arg {
	/**
	 * UnaryFunction - token type id.
	 */
	static final int TYPE_ID 				= 4;
	static final String TYPE_DESC			= "Unary Function";
	/**
	 * UnaryFunction - tokens id.
	 */
	static final int SIN_ID 					= 1;
	static final int COS_ID 					= 2;
	static final int TAN_ID						= 3;
	static final int CTAN_ID 					= 4;
	static final int SEC_ID 					= 5;
	static final int COSEC_ID 					= 6;
	static final int ASIN_ID 					= 7;
	static final int ACOS_ID 					= 8;
	static final int ATAN_ID 					= 9;
	static final int ACTAN_ID 					= 10;
	static final int LN_ID 						= 11;
	static final int LOG2_ID 					= 12;
	static final int LOG10_ID 					= 13;
	static final int RAD_ID 					= 14;
	static final int EXP_ID 					= 15;
	static final int SQRT_ID 					= 16;
	static final int SINH_ID 					= 17;
	static final int COSH_ID 					= 18;
	static final int TANH_ID 					= 19;
	static final int COTH_ID 					= 20;
	static final int SECH_ID 					= 21;
	static final int CSCH_ID 					= 22;
	static final int DEG_ID 					= 23;
	static final int ABS_ID 					= 24;
	static final int SGN_ID						= 25;
	static final int FLOOR_ID					= 26;
	static final int CEIL_ID					= 27;
	static final int NOT_ID						= 29;
	static final int ARSINH_ID					= 30;
	static final int ARCOSH_ID					= 31;
	static final int ARTANH_ID					= 32;
	static final int ARCOTH_ID					= 33;
	static final int ARSECH_ID					= 34;
	static final int ARCSCH_ID					= 35;
	static final int SA_ID						= 36;
	static final int SINC_ID					= 37;
	static final int BELL_NUMBER_ID				= 38;
	static final int LUCAS_NUMBER_ID			= 39;
	static final int FIBONACCI_NUMBER_ID		= 40;
	static final int HARMONIC_NUMBER_ID			= 41;
	static final int IS_PRIME_ID				= 42;
	static final int PRIME_COUNT_ID				= 43;
	static final int EXP_INT_ID					= 44;
	static final int LOG_INT_ID					= 45;
	static final int OFF_LOG_INT_ID				= 46;
	static final int GAUSS_ERF_ID				= 47;
	static final int GAUSS_ERFC_ID				= 48;
	static final int GAUSS_ERF_INV_ID			= 49;
	static final int GAUSS_ERFC_INV_ID			= 50;

	/**
	 * UnaryFunction - tokens key words.
	 */
	static final String SIN_STR 				= "sin";
	static final String COS_STR 				= "cos";
	static final String TAN_STR					= "tan";
	static final String TG_STR					= "tg";
	static final String CTAN_STR 				= "ctan";
	static final String CTG_STR 				= "ctg";
	static final String COT_STR 				= "cot";
	static final String SEC_STR 				= "sec";
	static final String COSEC_STR 				= "cosec";
	static final String CSC_STR 				= "csc";
	static final String ASIN_STR 				= "asin";
	static final String ARSIN_STR 				= "arsin";
	static final String ARCSIN_STR 				= "arcsin";
	static final String ACOS_STR 				= "acos";
	static final String ARCOS_STR 				= "arcos";
	static final String ARCCOS_STR 				= "arccos";
	static final String ATAN_STR 				= "atan";
	static final String ARCTAN_STR 				= "arctan";
	static final String ATG_STR 				= "atg";
	static final String ARCTG_STR 				= "arctg";
	static final String ACTAN_STR 				= "actan";
	static final String ARCCTAN_STR 			= "arcctan";
	static final String ACTG_STR 				= "actg";
	static final String ARCCTG_STR 				= "arcctg";
	static final String ACOT_STR 				= "acot";
	static final String ARCCOT_STR 				= "arccot";
	static final String LN_STR 					= "ln";
	static final String LOG2_STR 				= "log2";
	static final String LOG10_STR 				= "log10";
	static final String RAD_STR 				= "rad";
	static final String EXP_STR 				= "exp";
	static final String SQRT_STR 				= "sqrt";
	static final String SINH_STR 				= "sinh";
	static final String COSH_STR 				= "cosh";
	static final String TANH_STR 				= "tanh";
	static final String TGH_STR 				= "tgh";
	static final String CTANH_STR 				= "ctanh";
	static final String COTH_STR 				= "coth";
	static final String CTGH_STR 				= "ctgh";
	static final String SECH_STR 				= "sech";
	static final String CSCH_STR 				= "csch";
	static final String COSECH_STR 				= "cosech";
	static final String DEG_STR 				= "deg";
	static final String ABS_STR 				= "abs";
	static final String SGN_STR					= "sgn";
	static final String FLOOR_STR				= "floor";
	static final String CEIL_STR				= "ceil";
	static final String NOT_STR					= "not";
	static final String ASINH_STR 				= "asinh";
	static final String ARSINH_STR 				= "arsinh";
	static final String ARCSINH_STR 			= "arcsinh";
	static final String ACOSH_STR 				= "acosh";
	static final String ARCOSH_STR 				= "arcosh";
	static final String ARCCOSH_STR 			= "arccosh";
	static final String ATANH_STR 				= "atanh";
	static final String ARCTANH_STR 			= "arctanh";
	static final String ATGH_STR 				= "atgh";
	static final String ARCTGH_STR 				= "arctgh";
	static final String ACTANH_STR 				= "actanh";
	static final String ARCCTANH_STR 			= "arcctanh";
	static final String ACOTH_STR 				= "acoth";
	static final String ARCOTH_STR 				= "arcoth";
	static final String ARCCOTH_STR 			= "arccoth";
	static final String ACTGH_STR 				= "actgh";
	static final String ARCCTGH_STR 			= "arcctgh";
	static final String ASECH_STR 				= "asech";
	static final String ARSECH_STR 				= "arsech";
	static final String ARCSECH_STR 			= "arcsech";
	static final String ACSCH_STR 				= "acsch";
	static final String ARCSCH_STR 				= "arcsch";
	static final String ARCCSCH_STR 			= "arccsch";
	static final String ACOSECH_STR 			= "acosech";
	static final String ARCOSECH_STR 			= "arcosech";
	static final String ARCCOSECH_STR 			= "arccosech";
	static final String SA_STR					= "sinc";
	static final String SA1_STR					= "Sa";
	static final String SINC_STR				= "Sinc";
	static final String BELL_NUMBER_STR			= "Bell";
	static final String LUCAS_NUMBER_STR		= "Luc";
	static final String FIBONACCI_NUMBER_STR	= "Fib";
	static final String HARMONIC_NUMBER_STR		= "harm";
	static final String IS_PRIME_STR			= "ispr";
	static final String PRIME_COUNT_STR			= "Pi";
	static final String EXP_INT_STR				= "Ei";
	static final String LOG_INT_STR				= "li";
	static final String OFF_LOG_INT_STR			= "Li";
	static final String GAUSS_ERF_STR			= "erf";
	static final String GAUSS_ERFC_STR			= "erfc";
	static final String GAUSS_ERF_INV_STR		= "erfInv";
	static final String GAUSS_ERFC_INV_STR		= "erfcInv";

	/**
	 * UnaryFunction - tokens description.
	 */
	static final String SIN_DESC 				= "trigonometric sine function";
	static final String COS_DESC 				= "trigonometric cosine function";
	static final String TAN_DESC				= "trigonometric tangent function";
	static final String CTAN_DESC 				= "trigonometric cotangent function";
	static final String SEC_DESC 				= "trigonometric secant function";
	static final String COSEC_DESC 				= "trigonometric cosecant function";
	static final String ASIN_DESC 				= "inverse trigonometric sine function";
	static final String ACOS_DESC 				= "inverse trigonometric cosine function";
	static final String ATAN_DESC 				= "inverse trigonometric tangent function";
	static final String ACTAN_DESC 				= "inverse trigonometric cotangent function";
	static final String LN_DESC 				= "natural logarithm function (base e)";
	static final String LOG2_DESC 				= "binary logarithm function (base 2)";
	static final String LOG10_DESC 				= "common logarithm function (base 10)";
	static final String RAD_DESC 				= "degrees to radians function";
	static final String EXP_DESC 				= "exponential function";
	static final String SQRT_DESC 				= "squre root function";
	static final String SINH_DESC 				= "hyperbolic sine function";
	static final String COSH_DESC 				= "hyperbolic cosine function";
	static final String TANH_DESC 				= "hyperbolic tangent function";
	static final String COTH_DESC 				= "hyperbolic cotangent function";
	static final String SECH_DESC 				= "hyperbolic secant function";
	static final String CSCH_DESC 				= "hyperbolic cosecant function";
	static final String DEG_DESC 				= "radians to degrees function";
	static final String ABS_DESC 				= "absolut value function";
	static final String SGN_DESC				= "signum function";
	static final String FLOOR_DESC				= "floor function";
	static final String CEIL_DESC				= "ceiling function";
	static final String NOT_DESC				= "negation function";
	static final String ARSINH_DESC				= "inverse hyperbolic sine function";
	static final String ARCOSH_DESC				= "inverse hyperbolic cosine function";
	static final String ARTANH_DESC				= "inverse hyperbolic tangent function";
	static final String ARCOTH_DESC				= "inverse hyperbolic cotangent function";
	static final String ARSECH_DESC				= "inverse hyperbolic secant function";
	static final String ARCSCH_DESC				= "inverse hyperbolic cosecant function";
	static final String SA_DESC					= "sinc function (normalized)";
	static final String SINC_DESC				= "sinc function (unnormalized)";
	static final String BELL_NUMBER_DESC		= "Bell number";
	static final String LUCAS_NUMBER_DESC		= "Lucas number";
	static final String FIBONACCI_NUMBER_DESC	= "Fionacci number";
	static final String HARMONIC_NUMBER_DESC	= "Harmonic number";
	static final String IS_PRIME_DESC			= "(2.3) Prime number test (is number a prime?)";
	static final String PRIME_COUNT_DESC		= "(2.3) Prime-counting function - Pi(x)";
	static final String EXP_INT_DESC			= "(2.3) Exponential integral function (non-elementary special function) - usage example: Ei(x)";
	static final String LOG_INT_DESC			= "(2.3) Logarithmic integral function (non-elementary special function) - usage example: li(x)";
	static final String OFF_LOG_INT_DESC		= "(2.3) Offset logarithmic integral function (non-elementary special function) - usage example: Li(x)";
	static final String GAUSS_ERF_DESC			= "(3.0) Gauss error function (non-elementary special function) - usage example: 2 + erf(x)";
	static final String GAUSS_ERFC_DESC			= "(3.0) Gauss complementary error function (non-elementary special function) - usage example: 1 - erfc(x)";
	static final String GAUSS_ERF_INV_DESC		= "(3.0) Inverse Gauss error function (non-elementary special function) - usage example: erfInv(x)";
	static final String GAUSS_ERFC_INV_DESC		= "(3.0) Inverse Gauss complementary error function (non-elementary special function) - usage example: erfcInv(x)";
}
/**
 * Function2Arg
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
final class Function2Arg {
	/**
	 * BinaryFunction - token type id.
	 */
	static final int TYPE_ID 							= 5;
	static final String TYPE_DESC						= "Binary Function";
	/**
	 * BinaryFunction - tokens id.
	 */
	static final int LOG_ID 							= 1;
	static final int MOD_ID								= 2;
	static final int BINOM_COEFF_ID						= 3;
	static final int BERNOULLI_NUMBER_ID				= 4;
	static final int STIRLING1_NUMBER_ID				= 5;
	static final int STIRLING2_NUMBER_ID				= 6;
	static final int WORPITZKY_NUMBER_ID				= 7;
	static final int EULER_NUMBER_ID					= 8;
	static final int KRONECKER_DELTA_ID					= 9;
	static final int EULER_POLYNOMIAL_ID				= 10;
	static final int HARMONIC_NUMBER_ID					= 11;
	static final int RND_UNIFORM_CONT_ID				= 12;
	static final int RND_UNIFORM_DISCR_ID				= 13;
	static final int ROUND_ID							= 14;
	static final int RND_NORMAL_ID						= 15;
	/**
	 * BinaryFunction - tokens key words.
	 */
	static final String LOG_STR 						= "log";
	static final String MOD_STR 						= "mod";
	static final String BINOM_COEFF_STR					= "C";
	static final String BERNOULLI_NUMBER_STR			= "Bern";
	static final String STIRLING1_NUMBER_STR			= "Stirl1";
	static final String STIRLING2_NUMBER_STR			= "Stirl2";
	static final String WORPITZKY_NUMBER_STR			= "Worp";
	static final String EULER_NUMBER_STR				= "Euler";
	static final String KRONECKER_DELTA_STR				= "KDelta";
	static final String EULER_POLYNOMIAL_STR			= "EulerPol";
	static final String HARMONIC_NUMBER_STR				= "Harm";
	static final String RND_UNIFORM_CONT_STR 			= "rUni";
	static final String RND_UNIFORM_DISCR_STR  			= "rUnid";
	static final String ROUND_STR						= "round";
	static final String RND_NORMAL_STR					= "rNor";
	/**
	 * BinaryFunction - tokens description.
	 */
	static final String LOG_DESC 						= "logarithm function";
	static final String MOD_DESC						= "modulo function";
	static final String BINOM_COEFF_DESC				= "binomial coefficient function";
	static final String BERNOULLI_NUMBER_DESC			= "Bernoulli numbers";
	static final String STIRLING1_NUMBER_DESC			= "Stirling numbers of the first kind";
	static final String STIRLING2_NUMBER_DESC			= "Stirling numbers of the second kind";
	static final String WORPITZKY_NUMBER_DESC			= "Worpitzky number";
	static final String EULER_NUMBER_DESC				= "Euler number";
	static final String KRONECKER_DELTA_DESC			= "Kronecker delta";
	static final String EULER_POLYNOMIAL_DESC			= "EulerPol";
	static final String HARMONIC_NUMBER_DESC			= "Harmonic number";
	static final String RND_UNIFORM_CONT_DESC 			= "(3.0) Random variable - Uniform continuous distribution U(a,b), usage example: 2*rUni(2,10)";
	static final String RND_UNIFORM_DISCR_DESC  		= "(3.0) Random variable - Uniform discrete distribution U{a,b}, usage example: 2*rUnid(2,100)";
	static final String ROUND_DESC						= "(3.0) Half-up rounding, usage examples: round(2.2, 0) = 2, round(2.6, 0) = 3, round(2.66,1) = 2.7";
	static final String RND_NORMAL_DESC					= "(3.0) Random variable - Normal distribution N(m,s) m - mean, s - stddev, usage example: 3*rNor(0,1)";
}
/**
 * Function3Arg
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
final class Function3Arg {
	/**
	 * 3-args Function - token type id.
	 */
	static final int TYPE_ID 						= 6;
	static final String TYPE_DESC					= "3-args Function";
	/**
	 * 3-args Function - tokens id.
	 */
	static final int IF_CONDITION_ID				= 1;
	static final int IF_ID 							= 2;
	static final int CHI_ab_ID						= 3;
	static final int CHI_AB_ID						= 4;
	static final int CHI_Ab_ID						= 5;
	static final int CHI_aB_ID						= 6;
	static final int PDF_UNIFORM_CONT_ID			= 7;
	static final int CDF_UNIFORM_CONT_ID			= 8;
	static final int QNT_UNIFORM_CONT_ID			= 9;
	static final int PDF_NORMAL_ID					= 10;
	static final int CDF_NORMAL_ID					= 11;
	static final int QNT_NORMAL_ID					= 12;
	/**
	 * 3-args Function - tokens key words.
	 */
	static final String IF_STR 						= "if";
	static final String CHI_ab_STR					= "chi";
	static final String CHI_AB_STR					= "CHi";
	static final String CHI_Ab_STR					= "Chi";
	static final String CHI_aB_STR					= "cHi";
	static final String PDF_UNIFORM_CONT_STR		= "pUni";
	static final String CDF_UNIFORM_CONT_STR		= "cUni";
	static final String QNT_UNIFORM_CONT_STR		= "qUni";
	static final String PDF_NORMAL_STR				= "pNor";
	static final String CDF_NORMAL_STR				= "cNor";
	static final String QNT_NORMAL_STR				= "qNor";
	/**
	 * 3-args Function - tokens description.
	 */
	static final String IF_DESC 					= "if function ( if(con, if_true, if_false) )";
	static final String CHI_ab_DESC					= "Characteristic function for x in (a,b) - chi(x, a, b)";
	static final String CHI_AB_DESC					= "Characteristic function for x in [a,b] - CHi(x, a, b)";
	static final String CHI_Ab_DESC					= "Characteristic function for x in [a,b) - Chi(x, a, b)";
	static final String CHI_aB_DESC					= "Characteristic function for x in (a,b] - cHi(x, a, b)";
	static final String PDF_UNIFORM_CONT_DESC		= "(3.0) Probability distribution function - Uniform continuous distribution U(a,b), usage example: 2 * pUni(x, 2, 10)";
	static final String CDF_UNIFORM_CONT_DESC		= "(3.0) Cumulative distribution function - Uniform continuous distribution U(a,b), usage example: 2 * cUni(x, 2, 10)";
	static final String QNT_UNIFORM_CONT_DESC		= "(3.0) Quantile function (inverse cumulative distribution function) - Uniform continuous distribution U(a,b), usage example: 2 * qUni(q, 2, 10)";
	static final String PDF_NORMAL_DESC				= "(3.0) Probability distribution function - Normal distribution N(m,s) m - mean, s - stddev, usage example: 2 * pNor(x, 1, 2)";
	static final String CDF_NORMAL_DESC				= "(3.0) Cumulative distribution function - Normal distribution N(m,s) m - mean, s - stddev, usage example: 2 * cNor(x, 1, 2)";
	static final String QNT_NORMAL_DESC				= "(3.0) Quantile function (inverse cumulative distribution function) - Normal distribution N(m,s) m - mean, s - stddev, usage example: 2 * qNor(q, 1, 2)";
}
/**
 * Variadic parameters Functions
 */
final class VariadicFunction {
	/**
	 * BooleanOperator - token type id.
	 */
	static final int TYPE_ID 					= 7;
	static final String TYPE_DESC				= "Variadic Function";
	/**
	 * BooleanOperator - tokens id.
	 */
	static final int IFF_ID 					= 1;
	static final int MIN_ID 					= 2;
	static final int MAX_ID 					= 3;
	static final int CONT_FRAC_ID				= 4;
	static final int CONT_POL_ID				= 5;
	static final int GCD_ID						= 6;
	static final int LCM_ID						= 7;
	static final int SUM_ID						= 8;
	static final int PROD_ID					= 9;
	static final int AVG_ID						= 10;
	static final int VAR_ID						= 11;
	static final int STD_ID						= 12;
	static final int RND_LIST_ID				= 13;
	/**
	 * BooleanOperator - tokens key words.
	 */
	static final String IFF_STR 				= "iff";
	static final String MIN_STR					= "min";
	static final String MAX_STR					= "max";
	static final String CONT_FRAC_STR			= "ConFrac";
	static final String CONT_POL_STR			= "ConPol";
	static final String GCD_STR					= "gcd";
	static final String LCM_STR					= "lcm";
	static final String SUM_STR					= "add";
	static final String PROD_STR				= "multi";
	static final String AVG_STR					= "mean";
	static final String VAR_STR					= "var";
	static final String STD_STR					= "std";
	static final String RND_LIST_STR			= "rList";
	/**
	 * BooleanOperator - tokens description.
	 */
	static final String IFF_DESC 				= "if function ( iff(con_1, if_true_1_exp, ..., con_n, if_true_n_exp) )";
	static final String MIN_DESC 				= "Minimum function: min(a,b,c,...)";
	static final String MAX_DESC 				= "Maximum function: max(a,b,c,...)";
	static final String CONT_FRAC_DESC			= "Continued fraction: ConFrac(a,b,c,...)";
	static final String CONT_POL_DESC			= "Continued polynomial: ConPol(a,b,c,...)";
	static final String GCD_DESC				= "Greatest common divisor: gcd(a,b,c,...)";
	static final String LCM_DESC				= "Least common multiple: lcm(a,b,c,...)";
	static final String SUM_DESC				= "(2.4) Summation operator add(a1,a2,a3,...,an)";
	static final String PROD_DESC				= "(2.4) Multiplication multi(a1,a2,a3,...,an)";
	static final String AVG_DESC				= "(2.4) Mean / average value mean(a1,a2,a3,...,an)";
	static final String VAR_DESC				= "(2.4) Bias-corrected sample variance var(a1,a2,a3,...,an)";
	static final String STD_DESC				= "(2.4) Bias-corrected sample standard deviation std(a1,a2,a3,...,an)";
	static final String RND_LIST_DESC			= "(3.0) Random number from given list of numbers rList(a1,a2,a3,...,an)";
}
/**
 * Calculus
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
final class CalculusOperator {
	/**
	 * CalculusOperator - token type id.
	 */
	static final int TYPE_ID 					= 8;
	static final String TYPE_DESC				= "Calculus Operator";
	/**
	 * CalculusOperator - tokens id.
	 */
	static final int SUM_ID 					= 1;
	static final int PROD_ID 					= 3;
	static final int INT_ID 					= 5;
	static final int DER_ID 					= 6;
	static final int DER_LEFT_ID 				= 7;
	static final int DER_RIGHT_ID				= 8;
	static final int DERN_ID					= 9;
	static final int FORW_DIFF_ID				= 10;
	static final int BACKW_DIFF_ID				= 11;
	static final int AVG_ID						= 12;
	static final int VAR_ID						= 13;
	static final int STD_ID						= 14;
	static final int MIN_ID						= 15;
	static final int MAX_ID						= 16;
	/**
	 * CalculusOperator - tokens key words.
	 */
	static final String SUM_STR					= "sum";
	static final String PROD_STR				= "prod";
	static final String INT_STR					= "int";
	static final String DER_STR					= "der";
	static final String DER_LEFT_STR			= "der-";
	static final String DER_RIGHT_STR			= "der+";
	static final String DERN_STR				= "dern";
	static final String FORW_DIFF_STR			= "diff";
	static final String BACKW_DIFF_STR			= "difb";
	static final String AVG_STR					= "avg";
	static final String VAR_STR					= "vari";
	static final String STD_STR					= "stdi";
	static final String MIN_STR					= "mini";
	static final String MAX_STR					= "maxi";
	/**
	 * CalculusOperator - tokens description.
	 */
	static final String SUM_DESC				= "summation operator (SIGMA) sum(i, from, to, f(i,...))";
	static final String PROD_DESC				= "product operator (PI) prod(i, from, to, f(i,...))";
	static final String INT_DESC				= "definite integral operator ( int(f(x,...), x, a, b) )";
	static final String DER_DESC				= "derivative operator ( der(f(x,...), x) ) ";
	static final String DER_LEFT_DESC			= "left derivative operator ( der-(f(x,...), x) ) ";
	static final String DER_RIGHT_DESC			= "right derivative operator ( der+(f(x,...), x) ) ";
	static final String DERN_DESC				= "n-th derivative operator ( dern(f(x,...), x) ) ";
	static final String FORW_DIFF_DESC			= "forward difference operator";
	static final String BACKW_DIFF_DESC			= "backward difference operator";
	static final String AVG_DESC				= "(2.4) Average operator avg(i, from, to, f(i,...))";
	static final String VAR_DESC				= "(2.4) Bias-corrected sample variance operator vari(i, from, to, f(i,...))";
	static final String STD_DESC				= "(2.4) Bias-corrected sample standard deviation operator stdi(i, from, to, f(i,...))";
	static final String MIN_DESC				= "(2.4) Minimum value mini(i, from, to, f(i,...))";
	static final String MAX_DESC				= "(2.4) Maximum valu maxi(i, from, to, f(i,...))";
}
/**
 * Const
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
final class ConstantValue {
	/**
	 * ConstantValue - token type id.
	 */
	static final int TYPE_ID 							= 9;
	static final String TYPE_DESC						= "Constant Value";
	/**
	 * ConstantValue - tokens id.
	 */
	static final int PI_ID 								= 1;
	static final int EULER_ID 							= 2;
	static final int EULER_MASCHERONI_ID				= 3;
	static final int GOLDEN_RATIO_ID					= 4;
	static final int PLASTIC_ID							= 5;
	static final int EMBREE_TREFETHEN_ID				= 6;
	static final int FEIGENBAUM_DELTA_ID				= 7;
	static final int FEIGENBAUM_ALFA_ID					= 8;
	static final int TWIN_PRIME_ID						= 9;
	static final int MEISSEL_MERTEENS_ID				= 10;
	static final int BRAUN_TWIN_PRIME_ID				= 11;
	static final int BRAUN_PRIME_QUADR_ID				= 12;
	static final int BRUIJN_NEWMAN_ID					= 13;
	static final int CATALAN_ID							= 14;
	static final int LANDAU_RAMANUJAN_ID				= 15;
	static final int VISWANATH_ID						= 16;
	static final int LEGENDRE_ID						= 17;
	static final int RAMANUJAN_SOLDNER_ID				= 18;
	static final int ERDOS_BORWEIN_ID					= 19;
	static final int BERNSTEIN_ID						= 20;
	static final int GAUSS_KUZMIN_WIRSING_ID			= 21;
	static final int HAFNER_SARNAK_MCCURLEY_ID			= 22;
	static final int GOLOMB_DICKMAN_ID					= 23;
	static final int CAHEN_ID							= 24;
	static final int LAPLACE_LIMIT_ID					= 25;
	static final int ALLADI_GRINSTEAD_ID				= 26;
	static final int LENGYEL_ID							= 27;
	static final int LEVY_ID							= 28;
	static final int APERY_ID							= 29;
	static final int MILLS_ID							= 30;
	static final int BACKHOUSE_ID						= 31;
	static final int PORTER_ID							= 32;
	static final int LIEB_QUARE_ICE_ID					= 33;
	static final int NIVEN_ID							= 34;
	static final int SIERPINSKI_ID						= 35;
	static final int KHINCHIN_ID						= 36;
	static final int FRANSEN_ROBINSON_ID				= 37;
	static final int LANDAU_ID							= 38;
	static final int PARABOLIC_ID						= 39;
	static final int OMEGA_ID							= 40;
	static final int MRB_ID								= 41;
	static final int LI2_ID								= 42;
	static final int GOMPERTZ_ID						= 43;
	static final int NaN								= -1;
	/**
	 * ConstantValue - tokens key words.
	 */
	static final String PI_STR 							= "pi";
	static final String EULER_STR 						= "e";
	static final String EULER_MASCHERONI_STR			= "[g]";
	static final String GOLDEN_RATIO_STR				= "[p]";
	static final String PLASTIC_STR						= "[r]";
	static final String EMBREE_TREFETHEN_STR			= "[B*]";
	static final String FEIGENBAUM_DELTA_STR			= "[D]";
	static final String FEIGENBAUM_ALFA_STR				= "[a]";
	static final String TWIN_PRIME_STR					= "[C2]";
	static final String MEISSEL_MERTEENS_STR			= "[M1]";
	static final String BRAUN_TWIN_PRIME_STR			= "[B2]";
	static final String BRAUN_PRIME_QUADR_STR			= "[B4]";
	static final String BRUIJN_NEWMAN_STR				= "[L]";
	static final String CATALAN_STR						= "[K]";
	static final String LANDAU_RAMANUJAN_STR			= "[K*]";
	static final String VISWANATH_STR					= "[K.]";
	static final String LEGENDRE_STR					= "[B'L]";
	static final String RAMANUJAN_SOLDNER_STR			= "[m]";
	static final String ERDOS_BORWEIN_STR				= "[EB]";
	static final String BERNSTEIN_STR					= "[B]";
	static final String GAUSS_KUZMIN_WIRSING_STR		= "[l]";
	static final String HAFNER_SARNAK_MCCURLEY_STR		= "[s]";
	static final String GOLOMB_DICKMAN_STR				= "[lm]";
	static final String CAHEN_STR						= "[C]";
	static final String LAPLACE_LIMIT_STR				= "[Ll]";
	static final String ALLADI_GRINSTEAD_STR			= "[AG]";
	static final String LENGYEL_STR						= "[L*]";
	static final String LEVY_STR						= "[L.]";
	static final String APERY_STR						= "[Dz3]";
	static final String MILLS_STR						= "[T]";
	static final String BACKHOUSE_STR					= "[Bh]";
	static final String PORTER_STR						= "[Pt]";
	static final String LIEB_QUARE_ICE_STR				= "[L2]";
	static final String NIVEN_STR						= "[Nv]";
	static final String SIERPINSKI_STR					= "[Ks]";
	static final String KHINCHIN_STR					= "[Kh]";
	static final String FRANSEN_ROBINSON_STR			= "[F]";
	static final String LANDAU_STR						= "[La]";
	static final String PARABOLIC_STR					= "[P2]";
	static final String OMEGA_STR						= "[O]";
	static final String MRB_STR							= "[M]";
	static final String LI2_STR							= "[li2]";
	static final String GOMPERTZ_STR					= "[G]";
	/**
	 * ConstantValue - tokens description.
	 */
	static final String PI_DESC 						= "Pi, Archimedes' constant or Ludolph's number";
	static final String EULER_DESC 						= "Napier's constant, or Euler's number, base of Natural logarithm";
	static final String EULER_MASCHERONI_DESC			= "Euler-Mascheroni constant";
	static final String GOLDEN_RATIO_DESC				= "Golden ratio";
	static final String PLASTIC_DESC					= "Plastic constant";
	static final String EMBREE_TREFETHEN_DESC			= "Embree-Trefethen constant";
	static final String FEIGENBAUM_DELTA_DESC			= "Feigenbaum constant alfa";
	static final String FEIGENBAUM_ALFA_DESC			= "Feigenbaum constant delta";
	static final String TWIN_PRIME_DESC					= "Twin prime constant";
	static final String MEISSEL_MERTEENS_DESC			= "Meissel-Mertens constant";
	static final String BRAUN_TWIN_PRIME_DESC			= "Brun's constant for twin primes";
	static final String BRAUN_PRIME_QUADR_DESC			= "Brun's constant for prime quadruplets";
	static final String BRUIJN_NEWMAN_DESC				= "de Bruijn-Newman constant";
	static final String CATALAN_DESC					= "Catalan's constant";
	static final String LANDAU_RAMANUJAN_DESC			= "Landau-Ramanujan constant";
	static final String VISWANATH_DESC					= "Viswanath's constant";
	static final String LEGENDRE_DESC					= "Legendre's constant";
	static final String RAMANUJAN_SOLDNER_DESC			= "Ramanujan-Soldner constant";
	static final String ERDOS_BORWEIN_DESC				= "Erdos-Borwein constant";
	static final String BERNSTEIN_DESC					= "Bernstein's constant";
	static final String GAUSS_KUZMIN_WIRSING_DESC		= "Gauss-Kuzmin-Wirsing constant";
	static final String HAFNER_SARNAK_MCCURLEY_DESC		= "Hafner-Sarnak-McCurley constant";
	static final String GOLOMB_DICKMAN_DESC				= "Golomb-Dickman constant";
	static final String CAHEN_DESC						= "Cahen's constant";
	static final String LAPLACE_LIMIT_DESC				= "Laplace limit";
	static final String ALLADI_GRINSTEAD_DESC			= "Alladi-Grinstead constant";
	static final String LENGYEL_DESC					= "Lengyel's constant";
	static final String LEVY_DESC						= "Levy's constant";
	static final String APERY_DESC						= "Apery's constant";
	static final String MILLS_DESC						= "Mills' constant";
	static final String BACKHOUSE_DESC					= "Backhouse's constant";
	static final String PORTER_DESC						= "Porter's constant";
	static final String LIEB_QUARE_ICE_DESC				= "Lieb's square ice constant";
	static final String NIVEN_DESC						= "Niven's constant";
	static final String SIERPINSKI_DESC					= "Sierpinski's constant";
	static final String KHINCHIN_DESC					= "Khinchin's constant";
	static final String FRANSEN_ROBINSON_DESC			= "Fransen-Robinson constant";
	static final String LANDAU_DESC						= "Landau's constant";
	static final String PARABOLIC_DESC					= "Parabolic constant";
	static final String OMEGA_DESC						= "Omega constant";
	static final String MRB_DESC						= "MRB constant";
	static final String LI2_DESC						= "(2.3) li(2) - logarithmic integral function at x=2";
	static final String GOMPERTZ_DESC					= "(2.3) Gompertz constant";
}

/**
 * RandomVariable
 *
 * Identifiers and strings (words) definition.
 * Used mainly by the addParserKeywords()
 */
final class RandomVariable {
	/**
	 * BooleanOperator - token type id.
	 */
	static final int TYPE_ID 						= 10;
	static final String TYPE_DESC					= "Random Variable";
	/**
	 * BooleanOperator - tokens id.
	 */
	static final int UNIFORM_ID 					= 1;
	static final int INT_ID 						= 2;
	static final int INT1_ID 						= 3;
	static final int INT2_ID 						= 4;
	static final int INT3_ID 						= 5;
	static final int INT4_ID 						= 6;
	static final int INT5_ID 						= 7;
	static final int INT6_ID 						= 8;
	static final int INT7_ID 						= 9;
	static final int INT8_ID 						= 10;
	static final int INT9_ID 						= 11;
	static final int NAT0_ID 						= 12;
	static final int NAT0_1_ID 						= 13;
	static final int NAT0_2_ID 						= 14;
	static final int NAT0_3_ID 						= 15;
	static final int NAT0_4_ID 						= 16;
	static final int NAT0_5_ID 						= 17;
	static final int NAT0_6_ID 						= 18;
	static final int NAT0_7_ID 						= 19;
	static final int NAT0_8_ID 						= 20;
	static final int NAT0_9_ID 						= 21;
	static final int NAT1_ID 						= 22;
	static final int NAT1_1_ID 						= 23;
	static final int NAT1_2_ID 						= 24;
	static final int NAT1_3_ID 						= 25;
	static final int NAT1_4_ID 						= 26;
	static final int NAT1_5_ID 						= 27;
	static final int NAT1_6_ID 						= 28;
	static final int NAT1_7_ID 						= 29;
	static final int NAT1_8_ID 						= 30;
	static final int NAT1_9_ID 						= 31;
	static final int NOR_ID							= 32;
	static final int NaN							= -1;
	/**
	 * BooleanOperator - tokens key words.
	 */
	static final String UNIFORM_STR 				= "[Uni]";
	static final String INT_STR 					= "[Int]";
	static final String INT1_STR 					= "[Int1]";
	static final String INT2_STR 					= "[Int2]";
	static final String INT3_STR 					= "[Int3]";
	static final String INT4_STR 					= "[Int4]";
	static final String INT5_STR 					= "[Int5]";
	static final String INT6_STR 					= "[Int6]";
	static final String INT7_STR 					= "[Int7]";
	static final String INT8_STR 					= "[Int8]";
	static final String INT9_STR 					= "[Int9]";
	static final String NAT0_STR 					= "[nat]";
	static final String NAT0_1_STR 					= "[nat1]";
	static final String NAT0_2_STR 					= "[nat2]";
	static final String NAT0_3_STR 					= "[nat3]";
	static final String NAT0_4_STR 					= "[nat4]";
	static final String NAT0_5_STR 					= "[nat5]";
	static final String NAT0_6_STR 					= "[nat6]";
	static final String NAT0_7_STR 					= "[nat7]";
	static final String NAT0_8_STR 					= "[nat8]";
	static final String NAT0_9_STR 					= "[nat9]";
	static final String NAT1_STR 					= "[Nat]";
	static final String NAT1_1_STR 					= "[Nat1]";
	static final String NAT1_2_STR 					= "[Nat2]";
	static final String NAT1_3_STR 					= "[Nat3]";
	static final String NAT1_4_STR 					= "[Nat4]";
	static final String NAT1_5_STR 					= "[Nat5]";
	static final String NAT1_6_STR 					= "[Nat6]";
	static final String NAT1_7_STR 					= "[Nat7]";
	static final String NAT1_8_STR 					= "[Nat8]";
	static final String NAT1_9_STR 					= "[Nat9]";
	static final String NOR_STR						= "[Nor]";
	/**
	 * BooleanOperator - tokens description.
	 */
	static final String UNIFORM_DESC				= "(3.0) Random variable - Uniform continuous distribution U(0,1), usage example: 2*[Uni]";
	static final String INT_DESC 					= "(3.0) Random variable - random integer - usage example sin( 3*[Int] )";
	static final String INT1_DESC 					= "(3.0) Random variable - random integer - Uniform discrete distribution U{-10^1, 10^1} - usage example sin( 3*[Int1] )";
	static final String INT2_DESC 					= "(3.0) Random variable - random integer - Uniform discrete distribution U{-10^2, 10^2} - usage example sin( 3*[Int2] )";
	static final String INT3_DESC 					= "(3.0) Random variable - random integer - Uniform discrete distribution U{-10^3, 10^3} - usage example sin( 3*[Int3] )";
	static final String INT4_DESC 					= "(3.0) Random variable - random integer - Uniform discrete distribution U{-10^4, 10^4} - usage example sin( 3*[Int4] )";
	static final String INT5_DESC 					= "(3.0) Random variable - random integer - Uniform discrete distribution U{-10^5, 10^5} - usage example sin( 3*[Int5] )";
	static final String INT6_DESC 					= "(3.0) Random variable - random integer - Uniform discrete distribution U{-10^6, 10^6} - usage example sin( 3*[Int6] )";
	static final String INT7_DESC 					= "(3.0) Random variable - random integer - Uniform discrete distribution U{-10^7, 10^7} - usage example sin( 3*[Int7] )";
	static final String INT8_DESC 					= "(3.0) Random variable - random integer - Uniform discrete distribution U{-10^8, 10^8} - usage example sin( 3*[Int8] )";
	static final String INT9_DESC 					= "(3.0) Random variable - random integer - Uniform discrete distribution U{-10^9, 10^9} - usage example sin( 3*[Int9] )";
	static final String NAT0_DESC 					= "(3.0) Random variable - random natural number including 0 - usage example sin( 3*[nat] )";
	static final String NAT0_1_DESC 				= "(3.0) Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^1} - usage example sin( 3*[nat1] )";
	static final String NAT0_2_DESC 				= "(3.0) Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^2} - usage example sin( 3*[nat2] )";
	static final String NAT0_3_DESC 				= "(3.0) Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^3} - usage example sin( 3*[nat3] )";
	static final String NAT0_4_DESC 				= "(3.0) Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^4} - usage example sin( 3*[nat4] )";
	static final String NAT0_5_DESC 				= "(3.0) Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^5} - usage example sin( 3*[nat5] )";
	static final String NAT0_6_DESC 				= "(3.0) Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^6} - usage example sin( 3*[nat6] )";
	static final String NAT0_7_DESC 				= "(3.0) Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^7} - usage example sin( 3*[nat7] )";
	static final String NAT0_8_DESC 				= "(3.0) Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^8} - usage example sin( 3*[nat8] )";
	static final String NAT0_9_DESC 				= "(3.0) Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^9} - usage example sin( 3*[nat9] )";
	static final String NAT1_DESC 					= "(3.0) Random variable - random natural number - usage example sin( 3*[Nat] )";
	static final String NAT1_1_DESC 				= "(3.0) Random variable - random natural number - Uniform discrete distribution U{1, 10^1} - usage example sin( 3*[Nat1] )";
	static final String NAT1_2_DESC 				= "(3.0) Random variable - random natural number - Uniform discrete distribution U{1, 10^2} - usage example sin( 3*[Nat2] )";
	static final String NAT1_3_DESC 				= "(3.0) Random variable - random natural number - Uniform discrete distribution U{1, 10^3} - usage example sin( 3*[Nat3] )";
	static final String NAT1_4_DESC 				= "(3.0) Random variable - random natural number - Uniform discrete distribution U{1, 10^4} - usage example sin( 3*[Nat4] )";
	static final String NAT1_5_DESC 				= "(3.0) Random variable - random natural number - Uniform discrete distribution U{1, 10^5} - usage example sin( 3*[Nat5] )";
	static final String NAT1_6_DESC 				= "(3.0) Random variable - random natural number - Uniform discrete distribution U{1, 10^6} - usage example sin( 3*[Nat6] )";
	static final String NAT1_7_DESC 				= "(3.0) Random variable - random natural number - Uniform discrete distribution U{1, 10^7} - usage example sin( 3*[Nat7] )";
	static final String NAT1_8_DESC 				= "(3.0) Random variable - random natural number - Uniform discrete distribution U{1, 10^8} - usage example sin( 3*[Nat8] )";
	static final String NAT1_9_DESC 				= "(3.0) Random variable - random natural number - Uniform discrete distribution U{1, 10^9} - usage example sin( 3*[Nat9] )";
	static final String NOR_DESC 					= "(3.0) Random variable - Normal distribution N(0,1) - usage example cos( 3*[Nor]+1 )";
}

