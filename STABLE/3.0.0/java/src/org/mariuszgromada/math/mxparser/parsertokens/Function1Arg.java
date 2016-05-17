/*
 * @(#)Function1Arg.java        3.0.0    2016-05-07
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
package org.mariuszgromada.math.mxparser.parsertokens;

/**
 * Unary functions (1 argument) - mXparser tokens definition.
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
 */
public final class Function1Arg {
	/*
	 * UnaryFunction - token type id.
	 */
	public static final int TYPE_ID 					= 4;
	public static final String TYPE_DESC				= "Unary Function";
	/*
	 * UnaryFunction - tokens id.
	 */
	public static final int SIN_ID 						= 1;
	public static final int COS_ID 						= 2;
	public static final int TAN_ID						= 3;
	public static final int CTAN_ID 					= 4;
	public static final int SEC_ID 						= 5;
	public static final int COSEC_ID 					= 6;
	public static final int ASIN_ID 					= 7;
	public static final int ACOS_ID 					= 8;
	public static final int ATAN_ID 					= 9;
	public static final int ACTAN_ID 					= 10;
	public static final int LN_ID 						= 11;
	public static final int LOG2_ID 					= 12;
	public static final int LOG10_ID 					= 13;
	public static final int RAD_ID 						= 14;
	public static final int EXP_ID 						= 15;
	public static final int SQRT_ID 					= 16;
	public static final int SINH_ID 					= 17;
	public static final int COSH_ID 					= 18;
	public static final int TANH_ID 					= 19;
	public static final int COTH_ID 					= 20;
	public static final int SECH_ID 					= 21;
	public static final int CSCH_ID 					= 22;
	public static final int DEG_ID 						= 23;
	public static final int ABS_ID 						= 24;
	public static final int SGN_ID						= 25;
	public static final int FLOOR_ID					= 26;
	public static final int CEIL_ID						= 27;
	public static final int NOT_ID						= 29;
	public static final int ARSINH_ID					= 30;
	public static final int ARCOSH_ID					= 31;
	public static final int ARTANH_ID					= 32;
	public static final int ARCOTH_ID					= 33;
	public static final int ARSECH_ID					= 34;
	public static final int ARCSCH_ID					= 35;
	public static final int SA_ID						= 36;
	public static final int SINC_ID						= 37;
	public static final int BELL_NUMBER_ID				= 38;
	public static final int LUCAS_NUMBER_ID				= 39;
	public static final int FIBONACCI_NUMBER_ID			= 40;
	public static final int HARMONIC_NUMBER_ID			= 41;
	public static final int IS_PRIME_ID					= 42;
	public static final int PRIME_COUNT_ID				= 43;
	public static final int EXP_INT_ID					= 44;
	public static final int LOG_INT_ID					= 45;
	public static final int OFF_LOG_INT_ID				= 46;
	public static final int GAUSS_ERF_ID				= 47;
	public static final int GAUSS_ERFC_ID				= 48;
	public static final int GAUSS_ERF_INV_ID			= 49;
	public static final int GAUSS_ERFC_INV_ID			= 50;
	public static final int ULP_ID						= 51;
	/*
	 * UnaryFunction - tokens key words.
	 */
	public static final String SIN_STR 					= "sin";
	public static final String COS_STR 					= "cos";
	public static final String TAN_STR					= "tan";
	public static final String TG_STR					= "tg";
	public static final String CTAN_STR 				= "ctan";
	public static final String CTG_STR 					= "ctg";
	public static final String COT_STR 					= "cot";
	public static final String SEC_STR 					= "sec";
	public static final String COSEC_STR 				= "cosec";
	public static final String CSC_STR 					= "csc";
	public static final String ASIN_STR 				= "asin";
	public static final String ARSIN_STR 				= "arsin";
	public static final String ARCSIN_STR 				= "arcsin";
	public static final String ACOS_STR 				= "acos";
	public static final String ARCOS_STR 				= "arcos";
	public static final String ARCCOS_STR 				= "arccos";
	public static final String ATAN_STR 				= "atan";
	public static final String ARCTAN_STR 				= "arctan";
	public static final String ATG_STR 					= "atg";
	public static final String ARCTG_STR 				= "arctg";
	public static final String ACTAN_STR 				= "actan";
	public static final String ARCCTAN_STR 				= "arcctan";
	public static final String ACTG_STR 				= "actg";
	public static final String ARCCTG_STR 				= "arcctg";
	public static final String ACOT_STR 				= "acot";
	public static final String ARCCOT_STR 				= "arccot";
	public static final String LN_STR 					= "ln";
	public static final String LOG2_STR 				= "log2";
	public static final String LOG10_STR 				= "log10";
	public static final String RAD_STR 					= "rad";
	public static final String EXP_STR 					= "exp";
	public static final String SQRT_STR 				= "sqrt";
	public static final String SINH_STR 				= "sinh";
	public static final String COSH_STR 				= "cosh";
	public static final String TANH_STR 				= "tanh";
	public static final String TGH_STR 					= "tgh";
	public static final String CTANH_STR 				= "ctanh";
	public static final String COTH_STR 				= "coth";
	public static final String CTGH_STR 				= "ctgh";
	public static final String SECH_STR 				= "sech";
	public static final String CSCH_STR 				= "csch";
	public static final String COSECH_STR 				= "cosech";
	public static final String DEG_STR 					= "deg";
	public static final String ABS_STR 					= "abs";
	public static final String SGN_STR					= "sgn";
	public static final String FLOOR_STR				= "floor";
	public static final String CEIL_STR					= "ceil";
	public static final String NOT_STR					= "not";
	public static final String ASINH_STR 				= "asinh";
	public static final String ARSINH_STR 				= "arsinh";
	public static final String ARCSINH_STR 				= "arcsinh";
	public static final String ACOSH_STR 				= "acosh";
	public static final String ARCOSH_STR 				= "arcosh";
	public static final String ARCCOSH_STR 				= "arccosh";
	public static final String ATANH_STR 				= "atanh";
	public static final String ARCTANH_STR 				= "arctanh";
	public static final String ATGH_STR 				= "atgh";
	public static final String ARCTGH_STR 				= "arctgh";
	public static final String ACTANH_STR 				= "actanh";
	public static final String ARCCTANH_STR 			= "arcctanh";
	public static final String ACOTH_STR 				= "acoth";
	public static final String ARCOTH_STR 				= "arcoth";
	public static final String ARCCOTH_STR 				= "arccoth";
	public static final String ACTGH_STR 				= "actgh";
	public static final String ARCCTGH_STR 				= "arcctgh";
	public static final String ASECH_STR 				= "asech";
	public static final String ARSECH_STR 				= "arsech";
	public static final String ARCSECH_STR 				= "arcsech";
	public static final String ACSCH_STR 				= "acsch";
	public static final String ARCSCH_STR 				= "arcsch";
	public static final String ARCCSCH_STR 				= "arccsch";
	public static final String ACOSECH_STR 				= "acosech";
	public static final String ARCOSECH_STR 			= "arcosech";
	public static final String ARCCOSECH_STR 			= "arccosech";
	public static final String SA_STR					= "sinc";
	public static final String SA1_STR					= "Sa";
	public static final String SINC_STR					= "Sinc";
	public static final String BELL_NUMBER_STR			= "Bell";
	public static final String LUCAS_NUMBER_STR			= "Luc";
	public static final String FIBONACCI_NUMBER_STR		= "Fib";
	public static final String HARMONIC_NUMBER_STR		= "harm";
	public static final String IS_PRIME_STR				= "ispr";
	public static final String PRIME_COUNT_STR			= "Pi";
	public static final String EXP_INT_STR				= "Ei";
	public static final String LOG_INT_STR				= "li";
	public static final String OFF_LOG_INT_STR			= "Li";
	public static final String GAUSS_ERF_STR			= "erf";
	public static final String GAUSS_ERFC_STR			= "erfc";
	public static final String GAUSS_ERF_INV_STR		= "erfInv";
	public static final String GAUSS_ERFC_INV_STR		= "erfcInv";
	public static final String ULP_STR					= "ulp";
	/*
	 * UnaryFunction - tokens description.
	 */
	public static final String SIN_DESC 				= "trigonometric sine function";
	public static final String COS_DESC 				= "trigonometric cosine function";
	public static final String TAN_DESC					= "trigonometric tangent function";
	public static final String CTAN_DESC 				= "trigonometric cotangent function";
	public static final String SEC_DESC 				= "trigonometric secant function";
	public static final String COSEC_DESC 				= "trigonometric cosecant function";
	public static final String ASIN_DESC 				= "inverse trigonometric sine function";
	public static final String ACOS_DESC 				= "inverse trigonometric cosine function";
	public static final String ATAN_DESC 				= "inverse trigonometric tangent function";
	public static final String ACTAN_DESC 				= "inverse trigonometric cotangent function";
	public static final String LN_DESC 					= "natural logarithm function (base e)";
	public static final String LOG2_DESC 				= "binary logarithm function (base 2)";
	public static final String LOG10_DESC 				= "common logarithm function (base 10)";
	public static final String RAD_DESC 				= "degrees to radians function";
	public static final String EXP_DESC 				= "exponential function";
	public static final String SQRT_DESC 				= "squre root function";
	public static final String SINH_DESC 				= "hyperbolic sine function";
	public static final String COSH_DESC 				= "hyperbolic cosine function";
	public static final String TANH_DESC 				= "hyperbolic tangent function";
	public static final String COTH_DESC 				= "hyperbolic cotangent function";
	public static final String SECH_DESC 				= "hyperbolic secant function";
	public static final String CSCH_DESC 				= "hyperbolic cosecant function";
	public static final String DEG_DESC 				= "radians to degrees function";
	public static final String ABS_DESC 				= "absolut value function";
	public static final String SGN_DESC					= "signum function";
	public static final String FLOOR_DESC				= "floor function";
	public static final String CEIL_DESC				= "ceiling function";
	public static final String NOT_DESC					= "negation function";
	public static final String ARSINH_DESC				= "inverse hyperbolic sine function";
	public static final String ARCOSH_DESC				= "inverse hyperbolic cosine function";
	public static final String ARTANH_DESC				= "inverse hyperbolic tangent function";
	public static final String ARCOTH_DESC				= "inverse hyperbolic cotangent function";
	public static final String ARSECH_DESC				= "inverse hyperbolic secant function";
	public static final String ARCSCH_DESC				= "inverse hyperbolic cosecant function";
	public static final String SA_DESC					= "sinc function (normalized)";
	public static final String SINC_DESC				= "sinc function (unnormalized)";
	public static final String BELL_NUMBER_DESC			= "Bell number";
	public static final String LUCAS_NUMBER_DESC		= "Lucas number";
	public static final String FIBONACCI_NUMBER_DESC	= "Fionacci number";
	public static final String HARMONIC_NUMBER_DESC		= "Harmonic number";
	public static final String IS_PRIME_DESC			= "(2.3) Prime number test (is number a prime?)";
	public static final String PRIME_COUNT_DESC			= "(2.3) Prime-counting function - Pi(x)";
	public static final String EXP_INT_DESC				= "(2.3) Exponential integral function (non-elementary special function) - usage example: Ei(x)";
	public static final String LOG_INT_DESC				= "(2.3) Logarithmic integral function (non-elementary special function) - usage example: li(x)";
	public static final String OFF_LOG_INT_DESC			= "(2.3) Offset logarithmic integral function (non-elementary special function) - usage example: Li(x)";
	public static final String GAUSS_ERF_DESC			= "(3.0) Gauss error function (non-elementary special function) - usage example: 2 + erf(x)";
	public static final String GAUSS_ERFC_DESC			= "(3.0) Gauss complementary error function (non-elementary special function) - usage example: 1 - erfc(x)";
	public static final String GAUSS_ERF_INV_DESC		= "(3.0) Inverse Gauss error function (non-elementary special function) - usage example: erfInv(x)";
	public static final String GAUSS_ERFC_INV_DESC		= "(3.0) Inverse Gauss complementary error function (non-elementary special function) - usage example: erfcInv(x)";
	public static final String ULP_DESC					= "(3.0) Unit in The Last Place - ulp(0.1)";
}

