/*
 * @(#)Function1Arg.cs        3.0.0    2016-05-07
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
using System;

namespace org.mariuszgromada.math.mxparser.parsertokens {
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
	[CLSCompliant(true)]
	public sealed class Function1Arg {
		/*
		 * UnaryFunction - token type id.
		 */
		public const int TYPE_ID					= 4;
		public const String TYPE_DESC				= "Unary Function";
		/*
		 * UnaryFunction - tokens id.
		 */
		public const int SIN_ID						= 1;
		public const int COS_ID						= 2;
		public const int TAN_ID						= 3;
		public const int CTAN_ID					= 4;
		public const int SEC_ID						= 5;
		public const int COSEC_ID					= 6;
		public const int ASIN_ID					= 7;
		public const int ACOS_ID					= 8;
		public const int ATAN_ID					= 9;
		public const int ACTAN_ID					= 10;
		public const int LN_ID						= 11;
		public const int LOG2_ID					= 12;
		public const int LOG10_ID					= 13;
		public const int RAD_ID						= 14;
		public const int EXP_ID						= 15;
		public const int SQRT_ID					= 16;
		public const int SINH_ID					= 17;
		public const int COSH_ID					= 18;
		public const int TANH_ID					= 19;
		public const int COTH_ID					= 20;
		public const int SECH_ID					= 21;
		public const int CSCH_ID					= 22;
		public const int DEG_ID						= 23;
		public const int ABS_ID						= 24;
		public const int SGN_ID						= 25;
		public const int FLOOR_ID					= 26;
		public const int CEIL_ID					= 27;
		public const int NOT_ID						= 29;
		public const int ARSINH_ID					= 30;
		public const int ARCOSH_ID					= 31;
		public const int ARTANH_ID					= 32;
		public const int ARCOTH_ID					= 33;
		public const int ARSECH_ID					= 34;
		public const int ARCSCH_ID					= 35;
		public const int SA_ID						= 36;
		public const int SINC_ID					= 37;
		public const int BELL_NUMBER_ID				= 38;
		public const int LUCAS_NUMBER_ID			= 39;
		public const int FIBONACCI_NUMBER_ID		= 40;
		public const int HARMONIC_NUMBER_ID			= 41;
		public const int IS_PRIME_ID				= 42;
		public const int PRIME_COUNT_ID				= 43;
		public const int EXP_INT_ID					= 44;
		public const int LOG_INT_ID					= 45;
		public const int OFF_LOG_INT_ID				= 46;
		public const int GAUSS_ERF_ID				= 47;
		public const int GAUSS_ERFC_ID				= 48;
		public const int GAUSS_ERF_INV_ID			= 49;
		public const int GAUSS_ERFC_INV_ID			= 50;
		public const int ULP_ID						= 51;

		/*
		 * UnaryFunction - tokens key words.
		 */
		public const String SIN_STR 				= "sin";
		public const String COS_STR 				= "cos";
		public const String TAN_STR					= "tan";
		public const String TG_STR					= "tg";
		public const String CTAN_STR 				= "ctan";
		public const String CTG_STR 				= "ctg";
		public const String COT_STR 				= "cot";
		public const String SEC_STR 				= "sec";
		public const String COSEC_STR 				= "cosec";
		public const String CSC_STR 				= "csc";
		public const String ASIN_STR 				= "asin";
		public const String ARSIN_STR 				= "arsin";
		public const String ARCSIN_STR 				= "arcsin";
		public const String ACOS_STR 				= "acos";
		public const String ARCOS_STR 				= "arcos";
		public const String ARCCOS_STR 				= "arccos";
		public const String ATAN_STR 				= "atan";
		public const String ARCTAN_STR 				= "arctan";
		public const String ATG_STR 				= "atg";
		public const String ARCTG_STR 				= "arctg";
		public const String ACTAN_STR 				= "actan";
		public const String ARCCTAN_STR 			= "arcctan";
		public const String ACTG_STR 				= "actg";
		public const String ARCCTG_STR 				= "arcctg";
		public const String ACOT_STR 				= "acot";
		public const String ARCCOT_STR 				= "arccot";
		public const String LN_STR 					= "ln";
		public const String LOG2_STR 				= "log2";
		public const String LOG10_STR 				= "log10";
		public const String RAD_STR 				= "rad";
		public const String EXP_STR 				= "exp";
		public const String SQRT_STR 				= "sqrt";
		public const String SINH_STR 				= "sinh";
		public const String COSH_STR 				= "cosh";
		public const String TANH_STR 				= "tanh";
		public const String TGH_STR 				= "tgh";
		public const String CTANH_STR 				= "ctanh";
		public const String COTH_STR 				= "coth";
		public const String CTGH_STR 				= "ctgh";
		public const String SECH_STR 				= "sech";
		public const String CSCH_STR 				= "csch";
		public const String COSECH_STR 				= "cosech";
		public const String DEG_STR 				= "deg";
		public const String ABS_STR 				= "abs";
		public const String SGN_STR					= "sgn";
		public const String FLOOR_STR				= "floor";
		public const String CEIL_STR				= "ceil";
		public const String NOT_STR					= "not";
		public const String ASINH_STR 				= "asinh";
		public const String ARSINH_STR 				= "arsinh";
		public const String ARCSINH_STR 			= "arcsinh";
		public const String ACOSH_STR 				= "acosh";
		public const String ARCOSH_STR 				= "arcosh";
		public const String ARCCOSH_STR 			= "arccosh";
		public const String ATANH_STR 				= "atanh";
		public const String ARCTANH_STR 			= "arctanh";
		public const String ATGH_STR 				= "atgh";
		public const String ARCTGH_STR 				= "arctgh";
		public const String ACTANH_STR 				= "actanh";
		public const String ARCCTANH_STR 			= "arcctanh";
		public const String ACOTH_STR 				= "acoth";
		public const String ARCOTH_STR 				= "arcoth";
		public const String ARCCOTH_STR 			= "arccoth";
		public const String ACTGH_STR 				= "actgh";
		public const String ARCCTGH_STR 			= "arcctgh";
		public const String ASECH_STR 				= "asech";
		public const String ARSECH_STR 				= "arsech";
		public const String ARCSECH_STR 			= "arcsech";
		public const String ACSCH_STR 				= "acsch";
		public const String ARCSCH_STR 				= "arcsch";
		public const String ARCCSCH_STR 			= "arccsch";
		public const String ACOSECH_STR 			= "acosech";
		public const String ARCOSECH_STR 			= "arcosech";
		public const String ARCCOSECH_STR 			= "arccosech";
		public const String SA_STR					= "sinc";
		public const String SA1_STR					= "Sa";
		public const String SINC_STR				= "Sinc";
		public const String BELL_NUMBER_STR			= "Bell";
		public const String LUCAS_NUMBER_STR		= "Luc";
		public const String FIBONACCI_NUMBER_STR	= "Fib";
		public const String HARMONIC_NUMBER_STR		= "harm";
		public const String IS_PRIME_STR			= "ispr";
		public const String PRIME_COUNT_STR			= "Pi";
		public const String EXP_INT_STR				= "Ei";
		public const String LOG_INT_STR				= "li";
		public const String OFF_LOG_INT_STR			= "Li";
		public const String GAUSS_ERF_STR			= "erf";
		public const String GAUSS_ERFC_STR			= "erfc";
		public const String GAUSS_ERF_INV_STR		= "erfInv";
		public const String GAUSS_ERFC_INV_STR		= "erfcInv";
		public const String ULP_STR					= "ulp";

		/*
		 * UnaryFunction - tokens description.
		 */
		public const String SIN_DESC 				= "trigonometric sine function";
		public const String COS_DESC 				= "trigonometric cosine function";
		public const String TAN_DESC				= "trigonometric tangent function";
		public const String CTAN_DESC 				= "trigonometric cotangent function";
		public const String SEC_DESC 				= "trigonometric secant function";
		public const String COSEC_DESC 				= "trigonometric cosecant function";
		public const String ASIN_DESC 				= "inverse trigonometric sine function";
		public const String ACOS_DESC 				= "inverse trigonometric cosine function";
		public const String ATAN_DESC 				= "inverse trigonometric tangent function";
		public const String ACTAN_DESC 				= "inverse trigonometric cotangent function";
		public const String LN_DESC 				= "natural logarithm function (base e)";
		public const String LOG2_DESC 				= "binary logarithm function (base 2)";
		public const String LOG10_DESC 				= "common logarithm function (base 10)";
		public const String RAD_DESC 				= "degrees to radians function";
		public const String EXP_DESC 				= "exponential function";
		public const String SQRT_DESC 				= "squre root function";
		public const String SINH_DESC 				= "hyperbolic sine function";
		public const String COSH_DESC 				= "hyperbolic cosine function";
		public const String TANH_DESC 				= "hyperbolic tangent function";
		public const String COTH_DESC 				= "hyperbolic cotangent function";
		public const String SECH_DESC 				= "hyperbolic secant function";
		public const String CSCH_DESC 				= "hyperbolic cosecant function";
		public const String DEG_DESC 				= "radians to degrees function";
		public const String ABS_DESC 				= "absolut value function";
		public const String SGN_DESC				= "signum function";
		public const String FLOOR_DESC				= "floor function";
		public const String CEIL_DESC				= "ceiling function";
		public const String NOT_DESC				= "negation function";
		public const String ARSINH_DESC				= "inverse hyperbolic sine function";
		public const String ARCOSH_DESC				= "inverse hyperbolic cosine function";
		public const String ARTANH_DESC				= "inverse hyperbolic tangent function";
		public const String ARCOTH_DESC				= "inverse hyperbolic cotangent function";
		public const String ARSECH_DESC				= "inverse hyperbolic secant function";
		public const String ARCSCH_DESC				= "inverse hyperbolic cosecant function";
		public const String SA_DESC					= "sinc function (normalized)";
		public const String SINC_DESC				= "sinc function (unnormalized)";
		public const String BELL_NUMBER_DESC		= "Bell number";
		public const String LUCAS_NUMBER_DESC		= "Lucas number";
		public const String FIBONACCI_NUMBER_DESC	= "Fionacci number";
		public const String HARMONIC_NUMBER_DESC	= "Harmonic number";
		public const String IS_PRIME_DESC			= "(2.3) Prime number test (is number a prime?)";
		public const String PRIME_COUNT_DESC		= "(2.3) Prime-counting function - Pi(x)";
		public const String EXP_INT_DESC			= "(2.3) Exponential integral function (non-elementary special function) - usage example: Ei(x)";
		public const String LOG_INT_DESC			= "(2.3) Logarithmic integral function (non-elementary special function) - usage example: li(x)";
		public const String OFF_LOG_INT_DESC		= "(2.3) Offset logarithmic integral function (non-elementary special function) - usage example: Li(x)";
		public const String GAUSS_ERF_DESC			= "(3.0) Gauss error function (non-elementary special function) - usage example: 2 + erf(x)";
		public const String GAUSS_ERFC_DESC			= "(3.0) Gauss complementary error function (non-elementary special function) - usage example: 1 - erfc(x)";
		public const String GAUSS_ERF_INV_DESC		= "(3.0) Inverse Gauss error function (non-elementary special function) - usage example: erfInv(x)";
		public const String GAUSS_ERFC_INV_DESC		= "(3.0) Inverse Gauss complementary error function (non-elementary special function) - usage example: erfcInv(x)";
		public const String ULP_DESC				= "(3.0) Unit in The Last Place - ulp(0.1)";
	}
}
