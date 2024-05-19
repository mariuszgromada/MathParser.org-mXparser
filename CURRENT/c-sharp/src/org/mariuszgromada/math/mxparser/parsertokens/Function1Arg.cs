/*
 * @(#)Function1Arg.cs        6.0.0    2024-05-19
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2024 Mariusz Gromada - All rights reserved
 * PUBLISHER: INFIMA - https://payhip.com/infima
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 * PRODUCT: MathParser.org-mXparser SOFTWARE
 * LICENSE: DUAL LICENSE AGREEMENT
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * The AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
 * model designed to meet the needs of both non-commercial use and commercial
 * use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. Examples of NON-COMMERCIAL USE
 * include:
 *
 * 1. Non-commercial open-source software.
 * 2. Non-commercial mobile applications.
 * 3. Non-commercial desktop software.
 * 4. Non-commercial web applications/solutions.
 * 5. Non-commercial use in research, scholarly and educational context.
 *
 * The above list is non-exhaustive and illustrative only.
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
 * The above list is non-exhaustive and illustrative only.
 *
 * IN CASE YOU WANT TO USE THE PRODUCT COMMERCIALLY, YOU MUST PURCHASE THE
 * APPROPRIATE LICENSE FROM "INFIMA" ONLINE STORE, STORE ADDRESS:
 *
 * 1. https://mathparser.org/order-commercial-license
 * 2. https://payhip.com/infima
 *
 * NON-COMMERCIAL LICENSE
 *
 * Redistribution and use of the PRODUCT in source and/or binary forms,
 * with or without modification, are permitted provided that the following
 * conditions are met:
 *
 * 1. Redistributions of source code must retain the unmodified content of
 *    the entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
 *    the definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE,
 *    the NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
 *    and/or other materials provided with the distribution, including the
 *    definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE, the
 *    NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 3. Any form of redistribution requires confirmation and signature of
 *    the NON-COMMERCIAL USE by successfully calling the method:
 *       License.iConfirmNonCommercialUse(...)
 *    The method call is used only internally for logging purposes, and
 *    there is no connection with other external services, and no data is
 *    sent or collected. The lack of a method call (or its successful call)
 *    does not affect the operation of the PRODUCT in any way. Please see
 *    the API documentation.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, the AUTHOR & PUBLISHER allow
 *     you to download, install, and use up to three copies of the PRODUCT to
 *     perform integration tests, confirm the quality of the PRODUCT, and
 *     its suitability. The testing period should be limited to fourteen
 *     days. Tests should be performed under the test environments conditions
 *     and not for profit generation.
 *  2. Provided that you purchased a license from "INFIMA" online store
 *     (store address: https://mathparser.org/order-commercial-license or
 *     https://payhip.com/infima), and you comply with all terms and
 *     conditions below, and you have acknowledged and understood the
 *     following DISCLAIMER, the AUTHOR & PUBLISHER grant you a nonexclusive
 *     license with the following rights:
 *  3. The license is granted only to you, the person or entity that made
 *     the purchase, identified and confirmed by the data provided during
 *     the purchase.
 *  4. If you purchased a license in the "ONE-TIME PURCHASE" model, the
 *     license is granted only for the PRODUCT version specified in the
 *     purchase. The upgrade policy gives you additional rights, described
 *     in the dedicated section below.
 *  5. If you purchased a license in the "SUBSCRIPTION" model, you may
 *     install and use any version of the PRODUCT during the subscription
 *     validity period.
 *  6. If you purchased a "SINGLE LICENSE" you may install and use the
 *     PRODUCT on/from one workstation that is located/accessible at/from
 *     any of your premises.
 *  7. Additional copies of the PRODUCT may be installed and used on/from
 *     more than one workstation, limited to the number of workstations
 *     purchased per order.
 *  8. If you purchased a "SITE LICENSE", the PRODUCT may be installed
 *     and used on/from all workstations located/accessible at/from any
 *     of your premises.
 *  9. You may incorporate the unmodified PRODUCT into your own products
 *     and software.
 * 10. If you purchased a license with the "SOURCE CODE" option, you may
 *     modify the PRODUCT's source code and incorporate the modified source
 *     code into your own products and/or software.
 * 11. Provided that the license validity period has not expired, you may
 *     distribute your product and/or software with the incorporated
 *     PRODUCT royalty-free.
 * 12. You may make copies of the PRODUCT for backup and archival purposes.
 * 13. Any form of redistribution requires confirmation and signature of
 *     the COMMERCIAL USE by successfully calling the method:
 *        License.iConfirmCommercialUse(...)
 *     The method call is used only internally for logging purposes, and
 *     there is no connection with other external services, and no data is
 *     sent or collected. The lack of a method call (or its successful call)
 *     does not affect the operation of the PRODUCT in any way. Please see
 *     the API documentation.
 * 14. The AUTHOR & PUBLISHER reserve all rights not expressly granted to
 *     you in this agreement.
 *
 * ADDITIONAL CLARIFICATION ON WORKSTATION
 *
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned
 * tasks. For example, the number of workstations may refer to the number
 * of software developers, engineers, architects, scientists, and other
 * professionals who use the PRODUCT on your behalf. The number of
 * workstations is not the number of copies of your end-product that you
 * distribute to your end-users.
 *
 * By purchasing the COMMERCIAL LICENSE, you only pay for the number of
 * workstations, while the number of copies/users of your final product
 * (delivered to your end-users) is not limited.
 *
 * Below are some examples to help you select the right license size:
 *
 * Example 1: Single Workstation License
 * Only one developer works on the development of your application. You do
 * not use separate environments for testing, meaning you design, create,
 * test, and compile your final application on one environment. In this
 * case, you need a license for a single workstation.
 *
 * Example 2: Up to 5 Workstations License
 * Two developers are working on the development of your application.
 * Additionally, one tester conducts tests in a separate environment.
 * You use three workstations in total, so you need a license for up to
 * five workstations.
 *
 * Example 3: Up to 20 Workstations License
 * Ten developers are working on the development of your application.
 * Additionally, five testers conduct tests in separate environments.
 * You use fifteen workstations in total, so you need a license for
 * up to twenty workstations.
 *
 * Example 4: Site License
 * Several dozen developers and testers work on the development of your
 * application using multiple environments. You have a large,
 * multi-disciplinary team involved in creating your solution. As your team
 * is growing and you want to avoid licensing limitations, the best choice
 * would be a site license.
 *
 * UPGRADE POLICY
 *
 * The PRODUCT is versioned according to the following convention:
 *
 *    [MAJOR].[MINOR].[PATCH]
 *
 * 1. COMMERCIAL LICENSE holders can install and use the updated version
 *    for bug fixes free of charge, i.e. if you have purchased a license
 *    for the [MAJOR].[MINOR] version (e.g., 5.0), you can freely install
 *    all releases specified in the [PATCH] version (e.g., 5.0.2).
 *    The license terms remain unchanged after the update.
 * 2. COMMERCIAL LICENSE holders for the [MAJOR].[MINOR] version (e.g., 5.0)
 *    can install and use the updated version [MAJOR].[MINOR + 1] free of
 *    charge, i.e., plus one release in the [MINOR] range (e.g., 5.1). The
 *    license terms remain unchanged after the update.
 * 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
 *    not eligible for the free upgrade, can claim a discount when
 *    purchasing the upgrade. For this purpose, please contact us via e-mail.
 *
 * DISCLAIMER
 *
 * THIS PRODUCT IS PROVIDED BY THE AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL AUTHOR OR PUBLISHER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS PRODUCT, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VIEWS AND CONCLUSIONS CONTAINED IN THE PRODUCT AND DOCUMENTATION ARE
 * THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING
 * OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF THE AUTHOR OR PUBLISHER.
 *
 * CONTACT
 *
 * - e-mail: info@mathparser.org
 * - website: https://mathparser.org
 * - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
 * - online store: https://mathparser.org/order-commercial-license
 * - online store: https://payhip.com/infima
 */
using System;

namespace org.mariuszgromada.math.mxparser.parsertokens {
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
	 * @version        5.2.0
	 */
	[CLSCompliant(true)]
	public sealed class Function1Arg {
		/*
		 * UnaryFunction - token type id.
		 */
		public const int TYPE_ID					= 4;
        public static String TYPE_DESC = ParserSymbol.NA;
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
		public const int RND_CHI2_ID				= 65;
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
		public const String RND_CHI2_STR			= "rChi2";
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
		public static readonly String RND_CHI2_SYN			= SyntaxStringBuilder.unaryFunctionK(RND_CHI2_STR);
        /*
		 * UnaryFunction - tokens description.
		 */
        public static String SIN_DESC = ParserSymbol.NA;
        public static String COS_DESC = ParserSymbol.NA;
        public static String TAN_DESC = ParserSymbol.NA;
        public static String CTAN_DESC = ParserSymbol.NA;
        public static String SEC_DESC = ParserSymbol.NA;
        public static String COSEC_DESC = ParserSymbol.NA;
        public static String ASIN_DESC = ParserSymbol.NA;
        public static String ACOS_DESC = ParserSymbol.NA;
        public static String ATAN_DESC = ParserSymbol.NA;
        public static String ACTAN_DESC = ParserSymbol.NA;
        public static String LN_DESC = ParserSymbol.NA;
        public static String LOG2_DESC = ParserSymbol.NA;
        public static String LOG10_DESC = ParserSymbol.NA;
        public static String RAD_DESC = ParserSymbol.NA;
        public static String EXP_DESC = ParserSymbol.NA;
        public static String SQRT_DESC = ParserSymbol.NA;
        public static String SINH_DESC = ParserSymbol.NA;
        public static String COSH_DESC = ParserSymbol.NA;
        public static String TANH_DESC = ParserSymbol.NA;
        public static String COTH_DESC = ParserSymbol.NA;
        public static String SECH_DESC = ParserSymbol.NA;
        public static String CSCH_DESC = ParserSymbol.NA;
        public static String DEG_DESC = ParserSymbol.NA;
        public static String ABS_DESC = ParserSymbol.NA;
        public static String SGN_DESC = ParserSymbol.NA;
        public static String FLOOR_DESC = ParserSymbol.NA;
        public static String CEIL_DESC = ParserSymbol.NA;
        public static String NOT_DESC = ParserSymbol.NA;
        public static String ARSINH_DESC = ParserSymbol.NA;
        public static String ARCOSH_DESC = ParserSymbol.NA;
        public static String ARTANH_DESC = ParserSymbol.NA;
        public static String ARCOTH_DESC = ParserSymbol.NA;
        public static String ARSECH_DESC = ParserSymbol.NA;
        public static String ARCSCH_DESC = ParserSymbol.NA;
        public static String SA_DESC = ParserSymbol.NA;
        public static String SINC_DESC = ParserSymbol.NA;
        public static String BELL_NUMBER_DESC = ParserSymbol.NA;
        public static String LUCAS_NUMBER_DESC = ParserSymbol.NA;
        public static String FIBONACCI_NUMBER_DESC = ParserSymbol.NA;
        public static String HARMONIC_NUMBER_DESC = ParserSymbol.NA;
        public static String IS_PRIME_DESC = ParserSymbol.NA;
        public static String PRIME_COUNT_DESC = ParserSymbol.NA;
        public static String EXP_INT_DESC = ParserSymbol.NA;
        public static String LOG_INT_DESC = ParserSymbol.NA;
        public static String OFF_LOG_INT_DESC = ParserSymbol.NA;
        public static String GAUSS_ERF_DESC = ParserSymbol.NA;
        public static String GAUSS_ERFC_DESC = ParserSymbol.NA;
        public static String GAUSS_ERF_INV_DESC = ParserSymbol.NA;
        public static String GAUSS_ERFC_INV_DESC = ParserSymbol.NA;
        public static String ULP_DESC = ParserSymbol.NA;
        public static String ISNAN_DESC = ParserSymbol.NA;
        public static String NDIG10_DESC = ParserSymbol.NA;
        public static String NFACT_DESC = ParserSymbol.NA;
        public static String ARCSEC_DESC = ParserSymbol.NA;
        public static String ARCCSC_DESC = ParserSymbol.NA;
        public static String GAMMA_DESC = ParserSymbol.NA;
        public static String LAMBERT_W0_DESC = ParserSymbol.NA;
        public static String LAMBERT_W1_DESC = ParserSymbol.NA;
        public static String SGN_GAMMA_DESC = ParserSymbol.NA;
        public static String LOG_GAMMA_DESC = ParserSymbol.NA;
        public static String DI_GAMMA_DESC = ParserSymbol.NA;
        public static String PARAM_DESC = ParserSymbol.NA;
        public static String RND_STUDENT_T_DESC = ParserSymbol.NA;
        public static String RND_CHI2_DESC = ParserSymbol.NA;
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
		public const String RND_CHI2_SINCE			= mXparser.NAMEv50;
	}
}