/*
 * @(#)Function1Arg.java        5.0.0    2022-04-10
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

import org.mariuszgromada.math.mxparser.mXparser;
/**
 * Unary functions (1 argument) - mXparser tokens definition.
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
 * @version        5.0.0
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
	public static final int GAMMA_ID					= 57;
	public static final int LAMBERT_W0_ID				= 58;
	public static final int LAMBERT_W1_ID				= 59;
	public static final int SGN_GAMMA_ID				= 60;
	public static final int LOG_GAMMA_ID				= 61;
	public static final int DI_GAMMA_ID					= 62;
	public static final int PARAM_ID					= 63;
	public static final int RND_STUDENT_T_ID			= 64;
	public static final int RND_CHI2_ID					= 65;
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
	public static final String LOG10_STR_LG				= "lg";
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
	public static final String GAMMA_STR				= "Gamma";
	public static final String LAMBERT_W0_STR			= "LambW0";
	public static final String LAMBERT_W1_STR			= "LambW1";
	public static final String SGN_GAMMA_STR			= "sgnGamma";
	public static final String LOG_GAMMA_STR			= "logGamma";
	public static final String DI_GAMMA_STR				= "diGamma";
	public static final String PARAM_STR				= "par";
	public static final String RND_STUDENT_T_STR		= "rStud";
	public static final String RND_CHI2_STR				= "rChi2";
	/*
	 * UnaryFunction - syntax.
	 */
	public static final String SIN_SYN 					= SyntaxStringBuilder.unaryFunctionX(SIN_STR);
	public static final String COS_SYN 					= SyntaxStringBuilder.unaryFunctionX(COS_STR);
	public static final String TAN_SYN					= SyntaxStringBuilder.unaryFunctionX(TAN_STR);
	public static final String TG_SYN					= SyntaxStringBuilder.unaryFunctionX(TG_STR);
	public static final String CTAN_SYN 				= SyntaxStringBuilder.unaryFunctionX(CTAN_STR);
	public static final String CTG_SYN 					= SyntaxStringBuilder.unaryFunctionX(CTG_STR);
	public static final String COT_SYN 					= SyntaxStringBuilder.unaryFunctionX(COT_STR);
	public static final String SEC_SYN 					= SyntaxStringBuilder.unaryFunctionX(SEC_STR);
	public static final String COSEC_SYN 				= SyntaxStringBuilder.unaryFunctionX(COSEC_STR);
	public static final String CSC_SYN 					= SyntaxStringBuilder.unaryFunctionX(CSC_STR);
	public static final String ASIN_SYN 				= SyntaxStringBuilder.unaryFunctionX(ASIN_STR);
	public static final String ARSIN_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARSIN_STR);
	public static final String ARCSIN_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCSIN_STR);
	public static final String ACOS_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACOS_STR);
	public static final String ARCOS_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCOS_STR);
	public static final String ARCCOS_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCCOS_STR);
	public static final String ATAN_SYN 				= SyntaxStringBuilder.unaryFunctionX(ATAN_STR);
	public static final String ARCTAN_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCTAN_STR);
	public static final String ATG_SYN 					= SyntaxStringBuilder.unaryFunctionX(ATG_STR);
	public static final String ARCTG_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCTG_STR);
	public static final String ACTAN_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACTAN_STR);
	public static final String ARCCTAN_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCCTAN_STR);
	public static final String ACTG_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACTG_STR);
	public static final String ARCCTG_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCCTG_STR);
	public static final String ACOT_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACOT_STR);
	public static final String ARCCOT_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCCOT_STR);
	public static final String LN_SYN 					= SyntaxStringBuilder.unaryFunctionX(LN_STR);
	public static final String LOG2_SYN 				= SyntaxStringBuilder.unaryFunctionX(LOG2_STR);
	public static final String LOG10_SYN 				= SyntaxStringBuilder.unaryFunctionX(LOG10_STR);
	public static final String LOG10_SYN_LG				= SyntaxStringBuilder.unaryFunctionX(LOG10_STR_LG);
	public static final String RAD_SYN 					= SyntaxStringBuilder.unaryFunctionX(RAD_STR);
	public static final String EXP_SYN 					= SyntaxStringBuilder.unaryFunctionX(EXP_STR);
	public static final String SQRT_SYN 				= SyntaxStringBuilder.unaryFunctionX(SQRT_STR);
	public static final String SINH_SYN 				= SyntaxStringBuilder.unaryFunctionX(SINH_STR);
	public static final String COSH_SYN 				= SyntaxStringBuilder.unaryFunctionX(COSH_STR);
	public static final String TANH_SYN 				= SyntaxStringBuilder.unaryFunctionX(TANH_STR);
	public static final String TGH_SYN 					= SyntaxStringBuilder.unaryFunctionX(TGH_STR);
	public static final String CTANH_SYN 				= SyntaxStringBuilder.unaryFunctionX(CTANH_STR);
	public static final String COTH_SYN 				= SyntaxStringBuilder.unaryFunctionX(COTH_STR);
	public static final String CTGH_SYN 				= SyntaxStringBuilder.unaryFunctionX(CTGH_STR);
	public static final String SECH_SYN 				= SyntaxStringBuilder.unaryFunctionX(SECH_STR);
	public static final String CSCH_SYN 				= SyntaxStringBuilder.unaryFunctionX(CSCH_STR);
	public static final String COSECH_SYN 				= SyntaxStringBuilder.unaryFunctionX(COSECH_STR);
	public static final String DEG_SYN 					= SyntaxStringBuilder.unaryFunctionX(DEG_STR);
	public static final String ABS_SYN 					= SyntaxStringBuilder.unaryFunctionX(ABS_STR);
	public static final String SGN_SYN					= SyntaxStringBuilder.unaryFunctionX(SGN_STR);
	public static final String FLOOR_SYN				= SyntaxStringBuilder.unaryFunctionX(FLOOR_STR);
	public static final String CEIL_SYN					= SyntaxStringBuilder.unaryFunctionX(CEIL_STR);
	public static final String NOT_SYN					= SyntaxStringBuilder.unaryFunctionX(NOT_STR);
	public static final String ASINH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ASINH_STR);
	public static final String ARSINH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARSINH_STR);
	public static final String ARCSINH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCSINH_STR);
	public static final String ACOSH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACOSH_STR);
	public static final String ARCOSH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCOSH_STR);
	public static final String ARCCOSH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCCOSH_STR);
	public static final String ATANH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ATANH_STR);
	public static final String ARCTANH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCTANH_STR);
	public static final String ATGH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ATGH_STR);
	public static final String ARCTGH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCTGH_STR);
	public static final String ACTANH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACTANH_STR);
	public static final String ARCCTANH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCCTANH_STR);
	public static final String ACOTH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACOTH_STR);
	public static final String ARCOTH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCOTH_STR);
	public static final String ARCCOTH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCCOTH_STR);
	public static final String ACTGH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACTGH_STR);
	public static final String ARCCTGH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCCTGH_STR);
	public static final String ASECH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ASECH_STR);
	public static final String ARSECH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARSECH_STR);
	public static final String ARCSECH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCSECH_STR);
	public static final String ACSCH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACSCH_STR);
	public static final String ARCSCH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCSCH_STR);
	public static final String ARCCSCH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ARCCSCH_STR);
	public static final String ACOSECH_SYN 				= SyntaxStringBuilder.unaryFunctionX(ACOSECH_STR);
	public static final String ARCOSECH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCOSECH_STR);
	public static final String ARCCOSECH_SYN 			= SyntaxStringBuilder.unaryFunctionX(ARCCOSECH_STR);
	public static final String SA_SYN					= SyntaxStringBuilder.unaryFunctionX(SA_STR);
	public static final String SA1_SYN					= SyntaxStringBuilder.unaryFunctionX(SA1_STR);
	public static final String SINC_SYN					= SyntaxStringBuilder.unaryFunctionX(SINC_STR);
	public static final String BELL_NUMBER_SYN			= SyntaxStringBuilder.unaryFunctionN(BELL_NUMBER_STR);
	public static final String LUCAS_NUMBER_SYN			= SyntaxStringBuilder.unaryFunctionN(LUCAS_NUMBER_STR);
	public static final String FIBONACCI_NUMBER_SYN		= SyntaxStringBuilder.unaryFunctionN(FIBONACCI_NUMBER_STR);
	public static final String HARMONIC_NUMBER_SYN		= SyntaxStringBuilder.unaryFunctionN(HARMONIC_NUMBER_STR);
	public static final String IS_PRIME_SYN				= SyntaxStringBuilder.unaryFunctionN(IS_PRIME_STR);
	public static final String PRIME_COUNT_SYN			= SyntaxStringBuilder.unaryFunctionN(PRIME_COUNT_STR);
	public static final String EXP_INT_SYN				= SyntaxStringBuilder.unaryFunctionX(EXP_INT_STR);
	public static final String LOG_INT_SYN				= SyntaxStringBuilder.unaryFunctionX(LOG_INT_STR);
	public static final String OFF_LOG_INT_SYN			= SyntaxStringBuilder.unaryFunctionX(OFF_LOG_INT_STR);
	public static final String GAUSS_ERF_SYN			= SyntaxStringBuilder.unaryFunctionX(GAUSS_ERF_STR);
	public static final String GAUSS_ERFC_SYN			= SyntaxStringBuilder.unaryFunctionX(GAUSS_ERFC_STR);
	public static final String GAUSS_ERF_INV_SYN		= SyntaxStringBuilder.unaryFunctionX(GAUSS_ERF_INV_STR);
	public static final String GAUSS_ERFC_INV_SYN		= SyntaxStringBuilder.unaryFunctionX(GAUSS_ERFC_INV_STR);
	public static final String ULP_SYN					= SyntaxStringBuilder.unaryFunctionX(ULP_STR);
	public static final String ISNAN_SYN				= SyntaxStringBuilder.unaryFunctionX(ISNAN_STR);
	public static final String NDIG10_SYN				= SyntaxStringBuilder.unaryFunctionX(NDIG10_STR);
	public static final String NFACT_SYN				= SyntaxStringBuilder.unaryFunctionX(NFACT_STR);
	public static final String ARCSEC_SYN				= SyntaxStringBuilder.unaryFunctionX(ARCSEC_STR);
	public static final String ARCCSC_SYN				= SyntaxStringBuilder.unaryFunctionX(ARCCSC_STR);
	public static final String GAMMA_SYN				= SyntaxStringBuilder.unaryFunctionX(GAMMA_STR);
	public static final String LAMBERT_W0_SYN			= SyntaxStringBuilder.unaryFunctionX(LAMBERT_W0_STR);
	public static final String LAMBERT_W1_SYN			= SyntaxStringBuilder.unaryFunctionX(LAMBERT_W1_STR);
	public static final String SGN_GAMMA_SYN			= SyntaxStringBuilder.unaryFunctionX(SGN_GAMMA_STR);
	public static final String LOG_GAMMA_SYN			= SyntaxStringBuilder.unaryFunctionX(LOG_GAMMA_STR);
	public static final String DI_GAMMA_SYN				= SyntaxStringBuilder.unaryFunctionX(DI_GAMMA_STR);
	public static final String PARAM_SYN				= SyntaxStringBuilder.unaryFunctionI(PARAM_STR);
	public static final String RND_STUDENT_T_SYN		= SyntaxStringBuilder.unaryFunctionV(RND_STUDENT_T_STR);
	public static final String RND_CHI2_SYN				= SyntaxStringBuilder.unaryFunctionK(RND_CHI2_STR);
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
	public static final String GAMMA_DESC				= "Gamma special function Γ(s)";
	public static final String LAMBERT_W0_DESC			= "Lambert-W special function, principal branch 0, also called the omega function or product logarithm";
	public static final String LAMBERT_W1_DESC			= "Lambert-W special function, branch -1, also called the omega function or product logarithm";
	public static final String SGN_GAMMA_DESC			= "Signum of Gamma special function, Γ(s)";
	public static final String LOG_GAMMA_DESC			= "Log Gamma special function, lnΓ(s)";
	public static final String DI_GAMMA_DESC			= "Digamma function as the logarithmic derivative of the Gamma special function, ψ(x)";
	public static final String PARAM_DESC				= "Automatically generated function for user defined functions, returns function parameter value at index 'i'";
	public static final String RND_STUDENT_T_DESC		= "Random variable - Student's t-distribution";
	public static final String RND_CHI2_DESC			= "Random variable - Chi-squared distribution";
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
	public static final String LOG10_SINCE_LG			= mXparser.NAMEv50;
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
	public static final String GAMMA_SINCE				= mXparser.NAMEv42;
	public static final String LAMBERT_W0_SINCE			= mXparser.NAMEv42;
	public static final String LAMBERT_W1_SINCE			= mXparser.NAMEv42;
	public static final String SGN_GAMMA_SINCE			= mXparser.NAMEv42;
	public static final String LOG_GAMMA_SINCE			= mXparser.NAMEv42;
	public static final String DI_GAMMA_SINCE			= mXparser.NAMEv42;
	public static final String PARAM_SINCE				= mXparser.NAMEv42;
	public static final String RND_STUDENT_T_SINCE		= mXparser.NAMEv50;
	public static final String RND_CHI2_SINCE			= mXparser.NAMEv50;
}
