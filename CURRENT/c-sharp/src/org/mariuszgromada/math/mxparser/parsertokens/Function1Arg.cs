/*
 * @(#)Function1Arg.cs        5.0.0    2022-03-28
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
	 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Free</a><br>
	 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
	 *                 <a href="http://scalarmath.org/" target="_blank">ScalarMath.org</a><br>
	 *
	 * @version        5.0.0
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
		public const int ISNAN_ID					= 52;
		public const int NDIG10_ID					= 53;
		public const int NFACT_ID					= 54;
		public const int ARCSEC_ID					= 55;
		public const int ARCCSC_ID					= 56;
		public const int GAMMA_ID					= 57;
		public const int LAMBERT_W0_ID				= 58;
		public const int LAMBERT_W1_ID				= 59;
		public const int SGN_GAMMA_ID				= 60;
		public const int LOG_GAMMA_ID				= 61;
		public const int DI_GAMMA_ID				= 62;
		public const int PARAM_ID					= 63;
		public const int RND_STUDENT_T_ID			= 64;
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
		public const String LOG10_STR_LG			= "lg";
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
		public const String ISNAN_STR				= "isNaN";
		public const String NDIG10_STR				= "ndig10";
		public const String NFACT_STR				= "nfact";
		public const String ARCSEC_STR				= "arcsec";
		public const String ARCCSC_STR				= "arccsc";
		public const String GAMMA_STR				= "Gamma";
		public const String LAMBERT_W0_STR			= "LambW0";
		public const String LAMBERT_W1_STR			= "LambW1";
		public const String SGN_GAMMA_STR			= "sgnGamma";
		public const String LOG_GAMMA_STR			= "logGamma";
		public const String DI_GAMMA_STR			= "diGamma";
		public const String PARAM_STR				= "par";
		public const String RND_STUDENT_T_STR		= "rStud";
		/*
		 * UnaryFunction - syntax.
		 */
		public static readonly String SIN_SYN 				= SyntaxStringBuilder.unaryFunctionX(SIN_STR);
		public static readonly String COS_SYN 				= SyntaxStringBuilder.unaryFunctionX(COS_STR);
		public static readonly String TAN_SYN				= SyntaxStringBuilder.unaryFunctionX(TAN_STR);
		public static readonly String TG_SYN				= SyntaxStringBuilder.unaryFunctionX(TG_STR);
		public static readonly String CTAN_SYN 				= SyntaxStringBuilder.unaryFunctionX(CTAN_STR);
		public static readonly String CTG_SYN 				= SyntaxStringBuilder.unaryFunctionX(CTG_STR);
		public static readonly String COT_SYN 				= SyntaxStringBuilder.unaryFunctionX(COT_STR);
		public static readonly String SEC_SYN 				= SyntaxStringBuilder.unaryFunctionX(SEC_STR);
		public static readonly String COSEC_SYN 			= SyntaxStringBuilder.unaryFunctionX(COSEC_STR);
		public static readonly String CSC_SYN 				= SyntaxStringBuilder.unaryFunctionX(CSC_STR);
		public static readonly String ASIN_SYN 				= SyntaxStringBuilder.unaryFunctionX(ASIN_STR);
		public static readonly String ARSIN_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARSIN_STR);
		public static readonly String ARCSIN_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCSIN_STR);
		public static readonly String ACOS_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACOS_STR);
		public static readonly String ARCOS_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCOS_STR);
		public static readonly String ARCCOS_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCCOS_STR);
		public static readonly String ATAN_SYN 				= SyntaxStringBuilder.unaryFunctionX(ATAN_STR);
		public static readonly String ARCTAN_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCTAN_STR);
		public static readonly String ATG_SYN 				= SyntaxStringBuilder.unaryFunctionX(ATG_STR);
		public static readonly String ARCTG_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCTG_STR);
		public static readonly String ACTAN_SYN 			= SyntaxStringBuilder.unaryFunctionX(ACTAN_STR);
		public static readonly String ARCCTAN_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCCTAN_STR);
		public static readonly String ACTG_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACTG_STR);
		public static readonly String ARCCTG_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCCTG_STR);
		public static readonly String ACOT_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACOT_STR);
		public static readonly String ARCCOT_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCCOT_STR);
		public static readonly String LN_SYN 				= SyntaxStringBuilder.unaryFunctionX(LN_STR);
		public static readonly String LOG2_SYN 				= SyntaxStringBuilder.unaryFunctionX(LOG2_STR);
		public static readonly String LOG10_SYN 			= SyntaxStringBuilder.unaryFunctionX(LOG10_STR);
		public static readonly String LOG10_SYN_LG			= SyntaxStringBuilder.unaryFunctionX(LOG10_STR_LG);
		public static readonly String RAD_SYN 				= SyntaxStringBuilder.unaryFunctionX(RAD_STR);
		public static readonly String EXP_SYN 				= SyntaxStringBuilder.unaryFunctionX(EXP_STR);
		public static readonly String SQRT_SYN 				= SyntaxStringBuilder.unaryFunctionX(SQRT_STR);
		public static readonly String SINH_SYN 				= SyntaxStringBuilder.unaryFunctionX(SINH_STR);
		public static readonly String COSH_SYN 				= SyntaxStringBuilder.unaryFunctionX(COSH_STR);
		public static readonly String TANH_SYN 				= SyntaxStringBuilder.unaryFunctionX(TANH_STR);
		public static readonly String TGH_SYN 				= SyntaxStringBuilder.unaryFunctionX(TGH_STR);
		public static readonly String CTANH_SYN 			= SyntaxStringBuilder.unaryFunctionX(CTANH_STR);
		public static readonly String COTH_SYN 				= SyntaxStringBuilder.unaryFunctionX(COTH_STR);
		public static readonly String CTGH_SYN 				= SyntaxStringBuilder.unaryFunctionX(CTGH_STR);
		public static readonly String SECH_SYN 				= SyntaxStringBuilder.unaryFunctionX(SECH_STR);
		public static readonly String CSCH_SYN 				= SyntaxStringBuilder.unaryFunctionX(CSCH_STR);
		public static readonly String COSECH_SYN 			= SyntaxStringBuilder.unaryFunctionX(COSECH_STR);
		public static readonly String DEG_SYN 				= SyntaxStringBuilder.unaryFunctionX(DEG_STR);
		public static readonly String ABS_SYN 				= SyntaxStringBuilder.unaryFunctionX(ABS_STR);
		public static readonly String SGN_SYN				= SyntaxStringBuilder.unaryFunctionX(SGN_STR);
		public static readonly String FLOOR_SYN				= SyntaxStringBuilder.unaryFunctionX(FLOOR_STR);
		public static readonly String CEIL_SYN				= SyntaxStringBuilder.unaryFunctionX(CEIL_STR);
		public static readonly String NOT_SYN				= SyntaxStringBuilder.unaryFunctionX(NOT_STR);
		public static readonly String ASINH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ASINH_STR);
		public static readonly String ARSINH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARSINH_STR);
		public static readonly String ARCSINH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCSINH_STR);
		public static readonly String ACOSH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ACOSH_STR);
		public static readonly String ARCOSH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCOSH_STR);
		public static readonly String ARCCOSH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCCOSH_STR);
		public static readonly String ATANH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ATANH_STR);
		public static readonly String ARCTANH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCTANH_STR);
		public static readonly String ATGH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ATGH_STR);
		public static readonly String ARCTGH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCTGH_STR);
		public static readonly String ACTANH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ACTANH_STR);
		public static readonly String ARCCTANH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCCTANH_STR);
		public static readonly String ACOTH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ACOTH_STR);
		public static readonly String ARCOTH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCOTH_STR);
		public static readonly String ARCCOTH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCCOTH_STR);
		public static readonly String ACTGH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ACTGH_STR);
		public static readonly String ARCCTGH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCCTGH_STR);
		public static readonly String ASECH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ASECH_STR);
		public static readonly String ARSECH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARSECH_STR);
		public static readonly String ARCSECH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCSECH_STR);
		public static readonly String ACSCH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ACSCH_STR);
		public static readonly String ARCSCH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCSCH_STR);
		public static readonly String ARCCSCH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCCSCH_STR);
		public static readonly String ACOSECH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ACOSECH_STR);
		public static readonly String ARCOSECH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCOSECH_STR);
		public static readonly String ARCCOSECH_SYN 		= SyntaxStringBuilder.unaryFunctionX(ARCCOSECH_STR);
		public static readonly String SA_SYN				= SyntaxStringBuilder.unaryFunctionX(SA_STR);
		public static readonly String SA1_SYN				= SyntaxStringBuilder.unaryFunctionX(SA1_STR);
		public static readonly String SINC_SYN				= SyntaxStringBuilder.unaryFunctionX(SINC_STR);
		public static readonly String BELL_NUMBER_SYN		= SyntaxStringBuilder.unaryFunctionN(BELL_NUMBER_STR);
		public static readonly String LUCAS_NUMBER_SYN		= SyntaxStringBuilder.unaryFunctionN(LUCAS_NUMBER_STR);
		public static readonly String FIBONACCI_NUMBER_SYN	= SyntaxStringBuilder.unaryFunctionN(FIBONACCI_NUMBER_STR);
		public static readonly String HARMONIC_NUMBER_SYN	= SyntaxStringBuilder.unaryFunctionN(HARMONIC_NUMBER_STR);
		public static readonly String IS_PRIME_SYN			= SyntaxStringBuilder.unaryFunctionN(IS_PRIME_STR);
		public static readonly String PRIME_COUNT_SYN		= SyntaxStringBuilder.unaryFunctionN(PRIME_COUNT_STR);
		public static readonly String EXP_INT_SYN			= SyntaxStringBuilder.unaryFunctionX(EXP_INT_STR);
		public static readonly String LOG_INT_SYN			= SyntaxStringBuilder.unaryFunctionX(LOG_INT_STR);
		public static readonly String OFF_LOG_INT_SYN		= SyntaxStringBuilder.unaryFunctionX(OFF_LOG_INT_STR);
		public static readonly String GAUSS_ERF_SYN			= SyntaxStringBuilder.unaryFunctionX(GAUSS_ERF_STR);
		public static readonly String GAUSS_ERFC_SYN		= SyntaxStringBuilder.unaryFunctionX(GAUSS_ERFC_STR);
		public static readonly String GAUSS_ERF_INV_SYN		= SyntaxStringBuilder.unaryFunctionX(GAUSS_ERF_INV_STR);
		public static readonly String GAUSS_ERFC_INV_SYN	= SyntaxStringBuilder.unaryFunctionX(GAUSS_ERFC_INV_STR);
		public static readonly String ULP_SYN				= SyntaxStringBuilder.unaryFunctionX(ULP_STR);
		public static readonly String ISNAN_SYN				= SyntaxStringBuilder.unaryFunctionX(ISNAN_STR);
		public static readonly String NDIG10_SYN			= SyntaxStringBuilder.unaryFunctionX(NDIG10_STR);
		public static readonly String NFACT_SYN				= SyntaxStringBuilder.unaryFunctionX(NFACT_STR);
		public static readonly String ARCSEC_SYN			= SyntaxStringBuilder.unaryFunctionX(ARCSEC_STR);
		public static readonly String ARCCSC_SYN			= SyntaxStringBuilder.unaryFunctionX(ARCCSC_STR);
		public static readonly String GAMMA_SYN				= SyntaxStringBuilder.unaryFunctionX(GAMMA_STR);
		public static readonly String LAMBERT_W0_SYN		= SyntaxStringBuilder.unaryFunctionX(LAMBERT_W0_STR);
		public static readonly String LAMBERT_W1_SYN		= SyntaxStringBuilder.unaryFunctionX(LAMBERT_W1_STR);
		public static readonly String SGN_GAMMA_SYN			= SyntaxStringBuilder.unaryFunctionX(SGN_GAMMA_STR);
		public static readonly String LOG_GAMMA_SYN			= SyntaxStringBuilder.unaryFunctionX(LOG_GAMMA_STR);
		public static readonly String DI_GAMMA_SYN			= SyntaxStringBuilder.unaryFunctionX(DI_GAMMA_STR);
		public static readonly String PARAM_SYN				= SyntaxStringBuilder.unaryFunctionI(PARAM_STR);
		public static readonly String RND_STUDENT_T_SYN		= SyntaxStringBuilder.unaryFunctionV(RND_STUDENT_T_STR);
		/*
		 * UnaryFunction - tokens description.
		 */
		public const String SIN_DESC 				= "Trigonometric sine function";
		public const String COS_DESC 				= "Trigonometric cosine function";
		public const String TAN_DESC				= "Trigonometric tangent function";
		public const String CTAN_DESC 				= "Trigonometric cotangent function";
		public const String SEC_DESC 				= "Trigonometric secant function";
		public const String COSEC_DESC 				= "Trigonometric cosecant function";
		public const String ASIN_DESC 				= "Inverse trigonometric sine function";
		public const String ACOS_DESC 				= "Inverse trigonometric cosine function";
		public const String ATAN_DESC 				= "Inverse trigonometric tangent function";
		public const String ACTAN_DESC 				= "Inverse trigonometric cotangent function";
		public const String LN_DESC 				= "Natural logarithm function (base e)";
		public const String LOG2_DESC 				= "Binary logarithm function (base 2)";
		public const String LOG10_DESC 				= "Common logarithm function (base 10)";
		public const String RAD_DESC 				= "Degrees to radians function";
		public const String EXP_DESC 				= "Exponential function";
		public const String SQRT_DESC 				= "Squre root function";
		public const String SINH_DESC 				= "Hyperbolic sine function";
		public const String COSH_DESC 				= "Hyperbolic cosine function";
		public const String TANH_DESC 				= "Hyperbolic tangent function";
		public const String COTH_DESC 				= "Hyperbolic cotangent function";
		public const String SECH_DESC 				= "Hyperbolic secant function";
		public const String CSCH_DESC 				= "Hyperbolic cosecant function";
		public const String DEG_DESC 				= "Radians to degrees function";
		public const String ABS_DESC 				= "Absolut value function";
		public const String SGN_DESC				= "Signum function";
		public const String FLOOR_DESC				= "Floor function";
		public const String CEIL_DESC				= "Ceiling function";
		public const String NOT_DESC				= "Negation function";
		public const String ARSINH_DESC				= "Inverse hyperbolic sine function";
		public const String ARCOSH_DESC				= "Inverse hyperbolic cosine function";
		public const String ARTANH_DESC				= "Inverse hyperbolic tangent function";
		public const String ARCOTH_DESC				= "Inverse hyperbolic cotangent function";
		public const String ARSECH_DESC				= "Inverse hyperbolic secant function";
		public const String ARCSCH_DESC				= "Inverse hyperbolic cosecant function";
		public const String SA_DESC					= "Sinc function (normalized)";
		public const String SINC_DESC				= "Sinc function (unnormalized)";
		public const String BELL_NUMBER_DESC		= "Bell number";
		public const String LUCAS_NUMBER_DESC		= "Lucas number";
		public const String FIBONACCI_NUMBER_DESC	= "Fibonacci number";
		public const String HARMONIC_NUMBER_DESC	= "Harmonic number";
		public const String IS_PRIME_DESC			= "Prime number test (is number a prime?)";
		public const String PRIME_COUNT_DESC		= "Prime-counting function - Pi(x)";
		public const String EXP_INT_DESC			= "Exponential integral function (non-elementary special function) - usage example: Ei(x)";
		public const String LOG_INT_DESC			= "Logarithmic integral function (non-elementary special function) - usage example: li(x)";
		public const String OFF_LOG_INT_DESC		= "Offset logarithmic integral function (non-elementary special function) - usage example: Li(x)";
		public const String GAUSS_ERF_DESC			= "Gauss error function (non-elementary special function) - usage example: 2 + erf(x)";
		public const String GAUSS_ERFC_DESC			= "Gauss complementary error function (non-elementary special function) - usage example: 1 - erfc(x)";
		public const String GAUSS_ERF_INV_DESC		= "Inverse Gauss error function (non-elementary special function) - usage example: erfInv(x)";
		public const String GAUSS_ERFC_INV_DESC		= "Inverse Gauss complementary error function (non-elementary special function) - usage example: erfcInv(x)";
		public const String ULP_DESC				= "Unit in The Last Place - ulp(0.1)";
		public const String ISNAN_DESC				= "Returns true = 1 if value is a Not-a-Number (NaN), false = 0 otherwise - usage example: isNaN(x)";
		public const String NDIG10_DESC				= "Number of digits in numeral system with base 10";
		public const String NFACT_DESC				= "Prime decomposition - number of distinct prime factors";
		public const String ARCSEC_DESC				= "Inverse trigonometric secant";
		public const String ARCCSC_DESC				= "Inverse trigonometric cosecant";
		public const String GAMMA_DESC				= "Gamma special function Γ(s)";
		public const String LAMBERT_W0_DESC			= "Lambert-W special function, principal branch 0, also called the omega function or product logarithm";
		public const String LAMBERT_W1_DESC			= "Lambert-W special function, branch -1, also called the omega function or product logarithm";
		public const String SGN_GAMMA_DESC			= "Signum of Gamma special function, Γ(s)";
		public const String LOG_GAMMA_DESC			= "Log Gamma special function, lnΓ(s)";
		public const String DI_GAMMA_DESC			= "Digamma function as the logarithmic derivative of the Gamma special function, ψ(x)";
		public const String PARAM_DESC				= "Automatically generated function for user defined functions, returns function parameter value at index 'i'";
		public const String RND_STUDENT_T_DESC		= "Random variable - Student's t-distribution";
		/*
		 * UnaryFunction - tokens description.
		 */
		public const String SIN_SINCE 				= mXparser.NAMEv10;
		public const String COS_SINCE 				= mXparser.NAMEv10;
		public const String TAN_SINCE				= mXparser.NAMEv10;
		public const String CTAN_SINCE 				= mXparser.NAMEv10;
		public const String SEC_SINCE 				= mXparser.NAMEv10;
		public const String COSEC_SINCE 			= mXparser.NAMEv10;
		public const String ASIN_SINCE 				= mXparser.NAMEv10;
		public const String ACOS_SINCE 				= mXparser.NAMEv10;
		public const String ATAN_SINCE 				= mXparser.NAMEv10;
		public const String ACTAN_SINCE 			= mXparser.NAMEv10;
		public const String LN_SINCE 				= mXparser.NAMEv10;
		public const String LOG2_SINCE 				= mXparser.NAMEv10;
		public const String LOG10_SINCE 			= mXparser.NAMEv10;
		public const String LOG10_SINCE_LG			= mXparser.NAMEv50;
		public const String RAD_SINCE 				= mXparser.NAMEv10;
		public const String EXP_SINCE 				= mXparser.NAMEv10;
		public const String SQRT_SINCE 				= mXparser.NAMEv10;
		public const String SINH_SINCE 				= mXparser.NAMEv10;
		public const String COSH_SINCE 				= mXparser.NAMEv10;
		public const String TANH_SINCE 				= mXparser.NAMEv10;
		public const String COTH_SINCE 				= mXparser.NAMEv10;
		public const String SECH_SINCE 				= mXparser.NAMEv10;
		public const String CSCH_SINCE 				= mXparser.NAMEv10;
		public const String DEG_SINCE 				= mXparser.NAMEv10;
		public const String ABS_SINCE 				= mXparser.NAMEv10;
		public const String SGN_SINCE				= mXparser.NAMEv10;
		public const String FLOOR_SINCE				= mXparser.NAMEv10;
		public const String CEIL_SINCE				= mXparser.NAMEv10;
		public const String NOT_SINCE				= mXparser.NAMEv10;
		public const String ARSINH_SINCE			= mXparser.NAMEv10;
		public const String ARCOSH_SINCE			= mXparser.NAMEv10;
		public const String ARTANH_SINCE			= mXparser.NAMEv10;
		public const String ARCOTH_SINCE			= mXparser.NAMEv10;
		public const String ARSECH_SINCE			= mXparser.NAMEv10;
		public const String ARCSCH_SINCE			= mXparser.NAMEv10;
		public const String SA_SINCE				= mXparser.NAMEv10;
		public const String SINC_SINCE				= mXparser.NAMEv10;
		public const String BELL_NUMBER_SINCE		= mXparser.NAMEv10;
		public const String LUCAS_NUMBER_SINCE		= mXparser.NAMEv10;
		public const String FIBONACCI_NUMBER_SINCE	= mXparser.NAMEv10;
		public const String HARMONIC_NUMBER_SINCE	= mXparser.NAMEv10;
		public const String IS_PRIME_SINCE			= mXparser.NAMEv23;
		public const String PRIME_COUNT_SINCE		= mXparser.NAMEv23;
		public const String EXP_INT_SINCE			= mXparser.NAMEv23;
		public const String LOG_INT_SINCE			= mXparser.NAMEv23;
		public const String OFF_LOG_INT_SINCE		= mXparser.NAMEv23;
		public const String GAUSS_ERF_SINCE			= mXparser.NAMEv30;
		public const String GAUSS_ERFC_SINCE		= mXparser.NAMEv30;
		public const String GAUSS_ERF_INV_SINCE		= mXparser.NAMEv30;
		public const String GAUSS_ERFC_INV_SINCE	= mXparser.NAMEv30;
		public const String ULP_SINCE				= mXparser.NAMEv30;
		public const String ISNAN_SINCE				= mXparser.NAMEv41;
		public const String NDIG10_SINCE			= mXparser.NAMEv41;
		public const String NFACT_SINCE				= mXparser.NAMEv41;
		public const String ARCSEC_SINCE			= mXparser.NAMEv41;
		public const String ARCCSC_SINCE			= mXparser.NAMEv41;
		public const String GAMMA_SINCE				= mXparser.NAMEv42;
		public const String LAMBERT_W0_SINCE		= mXparser.NAMEv42;
		public const String LAMBERT_W1_SINCE		= mXparser.NAMEv42;
		public const String SGN_GAMMA_SINCE			= mXparser.NAMEv42;
		public const String LOG_GAMMA_SINCE			= mXparser.NAMEv42;
		public const String DI_GAMMA_SINCE			= mXparser.NAMEv42;
		public const String PARAM_SINCE				= mXparser.NAMEv42;
		public const String RND_STUDENT_T_SINCE		= mXparser.NAMEv50;
	}
}
