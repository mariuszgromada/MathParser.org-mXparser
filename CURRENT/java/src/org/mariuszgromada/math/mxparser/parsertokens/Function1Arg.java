/*
 * @(#)Function1Arg.java        4.1.0    2017-06-29
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2017 MARIUSZ GROMADA. All rights reserved.
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

import org.mariuszgromada.math.mxparser.mXparser;
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
 * @version        4.1.0
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
	public static final int ISNAN_ID					= 52;
	public static final int NDIG10_ID					= 53;
	public static final int NFACT_ID					= 54;
	public static final int ARCSEC_ID					= 55;
	public static final int ARCCSC_ID					= 56;
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
	public static final String ISNAN_STR				= "isNaN";
	public static final String NDIG10_STR				= "ndig10";
	public static final String NFACT_STR				= "nfact";
	public static final String ARCSEC_STR				= "arcsec";
	public static final String ARCCSC_STR				= "arccsc";
	/*
	 * UnaryFunction - syntax.
	 */
	public static final String SIN_SYN 					= SIN_STR + "(x)";
	public static final String COS_SYN 					= COS_STR + "(x)";
	public static final String TAN_SYN					= TAN_STR + "(x)";
	public static final String TG_SYN					= TG_STR + "(x)";
	public static final String CTAN_SYN 				= CTAN_STR + "(x)";
	public static final String CTG_SYN 					= CTG_STR + "(x)";
	public static final String COT_SYN 					= COT_STR + "(x)";
	public static final String SEC_SYN 					= SEC_STR + "(x)";
	public static final String COSEC_SYN 				= COSEC_STR + "(x)";
	public static final String CSC_SYN 					= CSC_STR + "(x)";
	public static final String ASIN_SYN 				= ASIN_STR + "(x)";
	public static final String ARSIN_SYN 				= ARSIN_STR + "(x)";
	public static final String ARCSIN_SYN 				= ARCSIN_STR + "(x)";
	public static final String ACOS_SYN 				= ACOS_STR + "(x)";
	public static final String ARCOS_SYN 				= ARCOS_STR + "(x)";
	public static final String ARCCOS_SYN 				= ARCCOS_STR + "(x)";
	public static final String ATAN_SYN 				= ATAN_STR + "(x)";
	public static final String ARCTAN_SYN 				= ARCTAN_STR + "(x)";
	public static final String ATG_SYN 					= ATG_STR + "(x)";
	public static final String ARCTG_SYN 				= ARCTG_STR + "(x)";
	public static final String ACTAN_SYN 				= ACTAN_STR + "(x)";
	public static final String ARCCTAN_SYN 				= ARCCTAN_STR + "(x)";
	public static final String ACTG_SYN 				= ACTG_STR + "(x)";
	public static final String ARCCTG_SYN 				= ARCCTG_STR + "(x)";
	public static final String ACOT_SYN 				= ACOT_STR + "(x)";
	public static final String ARCCOT_SYN 				= ARCCOT_STR + "(x)";
	public static final String LN_SYN 					= LN_STR + "(x)";
	public static final String LOG2_SYN 				= LOG2_STR + "(x)";
	public static final String LOG10_SYN 				= LOG10_STR + "(x)";
	public static final String RAD_SYN 					= RAD_STR + "(x)";
	public static final String EXP_SYN 					= EXP_STR + "(x)";
	public static final String SQRT_SYN 				= SQRT_STR + "(x)";
	public static final String SINH_SYN 				= SINH_STR + "(x)";
	public static final String COSH_SYN 				= COSH_STR + "(x)";
	public static final String TANH_SYN 				= TANH_STR + "(x)";
	public static final String TGH_SYN 					= TGH_STR + "(x)";
	public static final String CTANH_SYN 				= CTANH_STR + "(x)";
	public static final String COTH_SYN 				= COTH_STR + "(x)";
	public static final String CTGH_SYN 				= CTGH_STR + "(x)";
	public static final String SECH_SYN 				= SECH_STR + "(x)";
	public static final String CSCH_SYN 				= CSCH_STR + "(x)";
	public static final String COSECH_SYN 				= COSECH_STR + "(x)";
	public static final String DEG_SYN 					= DEG_STR + "(x)";
	public static final String ABS_SYN 					= ABS_STR + "(x)";
	public static final String SGN_SYN					= SGN_STR + "(x)";
	public static final String FLOOR_SYN				= FLOOR_STR + "(x)";
	public static final String CEIL_SYN					= CEIL_STR + "(x)";
	public static final String NOT_SYN					= NOT_STR + "(x)";
	public static final String ASINH_SYN 				= ASINH_STR + "(x)";
	public static final String ARSINH_SYN 				= ARSINH_STR + "(x)";
	public static final String ARCSINH_SYN 				= ARCSINH_STR + "(x)";
	public static final String ACOSH_SYN 				= ACOSH_STR + "(x)";
	public static final String ARCOSH_SYN 				= ARCOSH_STR + "(x)";
	public static final String ARCCOSH_SYN 				= ARCCOSH_STR + "(x)";
	public static final String ATANH_SYN 				= ATANH_STR + "(x)";
	public static final String ARCTANH_SYN 				= ARCTANH_STR + "(x)";
	public static final String ATGH_SYN 				= ATGH_STR + "(x)";
	public static final String ARCTGH_SYN 				= ARCTGH_STR + "(x)";
	public static final String ACTANH_SYN 				= ACTANH_STR + "(x)";
	public static final String ARCCTANH_SYN 			= ARCCTANH_STR + "(x)";
	public static final String ACOTH_SYN 				= ACOTH_STR + "(x)";
	public static final String ARCOTH_SYN 				= ARCOTH_STR + "(x)";
	public static final String ARCCOTH_SYN 				= ARCCOTH_STR + "(x)";
	public static final String ACTGH_SYN 				= ACTGH_STR + "(x)";
	public static final String ARCCTGH_SYN 				= ARCCTGH_STR + "(x)";
	public static final String ASECH_SYN 				= ASECH_STR + "(x)";
	public static final String ARSECH_SYN 				= ARSECH_STR + "(x)";
	public static final String ARCSECH_SYN 				= ARCSECH_STR + "(x)";
	public static final String ACSCH_SYN 				= ACSCH_STR + "(x)";
	public static final String ARCSCH_SYN 				= ARCSCH_STR + "(x)";
	public static final String ARCCSCH_SYN 				= ARCCSCH_STR + "(x)";
	public static final String ACOSECH_SYN 				= ACOSECH_STR + "(x)";
	public static final String ARCOSECH_SYN 			= ARCOSECH_STR + "(x)";
	public static final String ARCCOSECH_SYN 			= ARCCOSECH_STR + "(x)";
	public static final String SA_SYN					= SA_STR + "(x)";
	public static final String SA1_SYN					= SA1_STR + "(x)";
	public static final String SINC_SYN					= SINC_STR + "(x)";
	public static final String BELL_NUMBER_SYN			= BELL_NUMBER_STR + "(n)";
	public static final String LUCAS_NUMBER_SYN			= LUCAS_NUMBER_STR + "(n)";
	public static final String FIBONACCI_NUMBER_SYN		= FIBONACCI_NUMBER_STR + "(n)";
	public static final String HARMONIC_NUMBER_SYN		= HARMONIC_NUMBER_STR + "(n)";
	public static final String IS_PRIME_SYN				= IS_PRIME_STR + "(n)";
	public static final String PRIME_COUNT_SYN			= PRIME_COUNT_STR + "(n)";
	public static final String EXP_INT_SYN				= EXP_INT_STR + "(x)";
	public static final String LOG_INT_SYN				= LOG_INT_STR + "(x)";
	public static final String OFF_LOG_INT_SYN			= OFF_LOG_INT_STR + "(x)";
	public static final String GAUSS_ERF_SYN			= GAUSS_ERF_STR + "(x)";
	public static final String GAUSS_ERFC_SYN			= GAUSS_ERFC_STR + "(x)";
	public static final String GAUSS_ERF_INV_SYN		= GAUSS_ERF_INV_STR + "(x)";
	public static final String GAUSS_ERFC_INV_SYN		= GAUSS_ERFC_INV_STR + "(x)";
	public static final String ULP_SYN					= ULP_STR + "(x)";
	public static final String ISNAN_SYN				= ISNAN_STR + "(x)";
	public static final String NDIG10_SYN				= NDIG10_STR + "(x)";
	public static final String NFACT_SYN				= NFACT_STR + "(x)";
	public static final String ARCSEC_SYN				= ARCSEC_STR + "(x)";
	public static final String ARCCSC_SYN				= ARCCSC_STR + "(x)";
	/*
	 * UnaryFunction - tokens description.
	 */
	public static final String SIN_DESC 				= "Trigonometric sine function";
	public static final String COS_DESC 				= "Trigonometric cosine function";
	public static final String TAN_DESC					= "Trigonometric tangent function";
	public static final String CTAN_DESC 				= "Trigonometric cotangent function";
	public static final String SEC_DESC 				= "Trigonometric secant function";
	public static final String COSEC_DESC 				= "Trigonometric cosecant function";
	public static final String ASIN_DESC 				= "Inverse trigonometric sine function";
	public static final String ACOS_DESC 				= "Inverse trigonometric cosine function";
	public static final String ATAN_DESC 				= "Inverse trigonometric tangent function";
	public static final String ACTAN_DESC 				= "Inverse trigonometric cotangent function";
	public static final String LN_DESC 					= "Natural logarithm function (base e)";
	public static final String LOG2_DESC 				= "Binary logarithm function (base 2)";
	public static final String LOG10_DESC 				= "Common logarithm function (base 10)";
	public static final String RAD_DESC 				= "Degrees to radians function";
	public static final String EXP_DESC 				= "Exponential function";
	public static final String SQRT_DESC 				= "Squre root function";
	public static final String SINH_DESC 				= "Hyperbolic sine function";
	public static final String COSH_DESC 				= "Hyperbolic cosine function";
	public static final String TANH_DESC 				= "Hyperbolic tangent function";
	public static final String COTH_DESC 				= "Hyperbolic cotangent function";
	public static final String SECH_DESC 				= "Hyperbolic secant function";
	public static final String CSCH_DESC 				= "Hyperbolic cosecant function";
	public static final String DEG_DESC 				= "Radians to degrees function";
	public static final String ABS_DESC 				= "Absolut value function";
	public static final String SGN_DESC					= "Signum function";
	public static final String FLOOR_DESC				= "Floor function";
	public static final String CEIL_DESC				= "Ceiling function";
	public static final String NOT_DESC					= "Negation function";
	public static final String ARSINH_DESC				= "Inverse hyperbolic sine function";
	public static final String ARCOSH_DESC				= "Inverse hyperbolic cosine function";
	public static final String ARTANH_DESC				= "Inverse hyperbolic tangent function";
	public static final String ARCOTH_DESC				= "Inverse hyperbolic cotangent function";
	public static final String ARSECH_DESC				= "Inverse hyperbolic secant function";
	public static final String ARCSCH_DESC				= "Inverse hyperbolic cosecant function";
	public static final String SA_DESC					= "Sinc function (normalized)";
	public static final String SINC_DESC				= "Sinc function (unnormalized)";
	public static final String BELL_NUMBER_DESC			= "Bell number";
	public static final String LUCAS_NUMBER_DESC		= "Lucas number";
	public static final String FIBONACCI_NUMBER_DESC	= "Fibonacci number";
	public static final String HARMONIC_NUMBER_DESC		= "Harmonic number";
	public static final String IS_PRIME_DESC			= "Prime number test (is number a prime?)";
	public static final String PRIME_COUNT_DESC			= "Prime-counting function - Pi(x)";
	public static final String EXP_INT_DESC				= "Exponential integral function (non-elementary special function) - usage example: Ei(x)";
	public static final String LOG_INT_DESC				= "Logarithmic integral function (non-elementary special function) - usage example: li(x)";
	public static final String OFF_LOG_INT_DESC			= "Offset logarithmic integral function (non-elementary special function) - usage example: Li(x)";
	public static final String GAUSS_ERF_DESC			= "Gauss error function (non-elementary special function) - usage example: 2 + erf(x)";
	public static final String GAUSS_ERFC_DESC			= "Gauss complementary error function (non-elementary special function) - usage example: 1 - erfc(x)";
	public static final String GAUSS_ERF_INV_DESC		= "Inverse Gauss error function (non-elementary special function) - usage example: erfInv(x)";
	public static final String GAUSS_ERFC_INV_DESC		= "Inverse Gauss complementary error function (non-elementary special function) - usage example: erfcInv(x)";
	public static final String ULP_DESC					= "Unit in The Last Place - ulp(0.1)";
	public static final String ISNAN_DESC				= "Returns true = 1 if value is a Not-a-Number (NaN), false = 0 otherwise - usage example: isNaN(x)";
	public static final String NDIG10_DESC				= "Number of digits in numeral system with base 10";
	public static final String NFACT_DESC				= "Prime decomposition - number of distinct prime factors";
	public static final String ARCSEC_DESC				= "Inverse trigonometric secant";
	public static final String ARCCSC_DESC				= "Inverse trigonometric cosecant";
	/*
	 * UnaryFunction - tokens description.
	 */
	public static final String SIN_SINCE 				= mXparser.NAMEv10;
	public static final String COS_SINCE 				= mXparser.NAMEv10;
	public static final String TAN_SINCE				= mXparser.NAMEv10;
	public static final String CTAN_SINCE 				= mXparser.NAMEv10;
	public static final String SEC_SINCE 				= mXparser.NAMEv10;
	public static final String COSEC_SINCE 				= mXparser.NAMEv10;
	public static final String ASIN_SINCE 				= mXparser.NAMEv10;
	public static final String ACOS_SINCE 				= mXparser.NAMEv10;
	public static final String ATAN_SINCE 				= mXparser.NAMEv10;
	public static final String ACTAN_SINCE 				= mXparser.NAMEv10;
	public static final String LN_SINCE 				= mXparser.NAMEv10;
	public static final String LOG2_SINCE 				= mXparser.NAMEv10;
	public static final String LOG10_SINCE 				= mXparser.NAMEv10;
	public static final String RAD_SINCE 				= mXparser.NAMEv10;
	public static final String EXP_SINCE 				= mXparser.NAMEv10;
	public static final String SQRT_SINCE 				= mXparser.NAMEv10;
	public static final String SINH_SINCE 				= mXparser.NAMEv10;
	public static final String COSH_SINCE 				= mXparser.NAMEv10;
	public static final String TANH_SINCE 				= mXparser.NAMEv10;
	public static final String COTH_SINCE 				= mXparser.NAMEv10;
	public static final String SECH_SINCE 				= mXparser.NAMEv10;
	public static final String CSCH_SINCE 				= mXparser.NAMEv10;
	public static final String DEG_SINCE 				= mXparser.NAMEv10;
	public static final String ABS_SINCE 				= mXparser.NAMEv10;
	public static final String SGN_SINCE				= mXparser.NAMEv10;
	public static final String FLOOR_SINCE				= mXparser.NAMEv10;
	public static final String CEIL_SINCE				= mXparser.NAMEv10;
	public static final String NOT_SINCE				= mXparser.NAMEv10;
	public static final String ARSINH_SINCE				= mXparser.NAMEv10;
	public static final String ARCOSH_SINCE				= mXparser.NAMEv10;
	public static final String ARTANH_SINCE				= mXparser.NAMEv10;
	public static final String ARCOTH_SINCE				= mXparser.NAMEv10;
	public static final String ARSECH_SINCE				= mXparser.NAMEv10;
	public static final String ARCSCH_SINCE				= mXparser.NAMEv10;
	public static final String SA_SINCE					= mXparser.NAMEv10;
	public static final String SINC_SINCE				= mXparser.NAMEv10;
	public static final String BELL_NUMBER_SINCE		= mXparser.NAMEv10;
	public static final String LUCAS_NUMBER_SINCE		= mXparser.NAMEv10;
	public static final String FIBONACCI_NUMBER_SINCE	= mXparser.NAMEv10;
	public static final String HARMONIC_NUMBER_SINCE	= mXparser.NAMEv10;
	public static final String IS_PRIME_SINCE			= mXparser.NAMEv23;
	public static final String PRIME_COUNT_SINCE		= mXparser.NAMEv23;
	public static final String EXP_INT_SINCE			= mXparser.NAMEv23;
	public static final String LOG_INT_SINCE			= mXparser.NAMEv23;
	public static final String OFF_LOG_INT_SINCE		= mXparser.NAMEv23;
	public static final String GAUSS_ERF_SINCE			= mXparser.NAMEv30;
	public static final String GAUSS_ERFC_SINCE			= mXparser.NAMEv30;
	public static final String GAUSS_ERF_INV_SINCE		= mXparser.NAMEv30;
	public static final String GAUSS_ERFC_INV_SINCE		= mXparser.NAMEv30;
	public static final String ULP_SINCE				= mXparser.NAMEv30;
	public static final String ISNAN_SINCE				= mXparser.NAMEv41;
	public static final String NDIG10_SINCE				= mXparser.NAMEv41;
	public static final String NFACT_SINCE				= mXparser.NAMEv41;
	public static final String ARCSEC_SINCE				= mXparser.NAMEv41;
	public static final String ARCCSC_SINCE				= mXparser.NAMEv41;
}
