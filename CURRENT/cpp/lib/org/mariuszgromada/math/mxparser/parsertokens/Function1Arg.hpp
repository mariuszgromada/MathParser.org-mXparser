/*
 * @(#)Function1Arg.hpp        6.1.0    2024-10-06
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_FUNCTION1ARG_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_FUNCTION1ARG_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {

	class API_VISIBLE Function1Arg {
	public:
		Function1Arg() = delete;

		static constexpr int TYPE_ID = 4;
		static StringPtr TYPE_DESC;

		static constexpr int SIN_ID = 1;
		static constexpr int COS_ID = 2;
		static constexpr int TAN_ID = 3;
		static constexpr int CTAN_ID = 4;
		static constexpr int SEC_ID = 5;
		static constexpr int COSEC_ID = 6;
		static constexpr int ASIN_ID = 7;
		static constexpr int ACOS_ID = 8;
		static constexpr int ATAN_ID = 9;
		static constexpr int ACTAN_ID = 10;
		static constexpr int LN_ID = 11;
		static constexpr int LOG2_ID = 12;
		static constexpr int LOG10_ID = 13;
		static constexpr int RAD_ID = 14;
		static constexpr int EXP_ID = 15;
		static constexpr int SQRT_ID = 16;
		static constexpr int SINH_ID = 17;
		static constexpr int COSH_ID = 18;
		static constexpr int TANH_ID = 19;
		static constexpr int COTH_ID = 20;
		static constexpr int SECH_ID = 21;
		static constexpr int CSCH_ID = 22;
		static constexpr int DEG_ID = 23;
		static constexpr int ABS_ID = 24;
		static constexpr int SGN_ID = 25;
		static constexpr int FLOOR_ID = 26;
		static constexpr int CEIL_ID = 27;
		static constexpr int NOT_ID = 29;
		static constexpr int ARSINH_ID = 30;
		static constexpr int ARCOSH_ID = 31;
		static constexpr int ARTANH_ID = 32;
		static constexpr int ARCOTH_ID = 33;
		static constexpr int ARSECH_ID = 34;
		static constexpr int ARCSCH_ID = 35;
		static constexpr int SA_ID = 36;
		static constexpr int SINC_ID = 37;
		static constexpr int BELL_NUMBER_ID = 38;
		static constexpr int LUCAS_NUMBER_ID = 39;
		static constexpr int FIBONACCI_NUMBER_ID = 40;
		static constexpr int HARMONIC_NUMBER_ID = 41;
		static constexpr int IS_PRIME_ID = 42;
		static constexpr int PRIME_COUNT_ID = 43;
		static constexpr int EXP_INT_ID = 44;
		static constexpr int LOG_INT_ID = 45;
		static constexpr int OFF_LOG_INT_ID = 46;
		static constexpr int GAUSS_ERF_ID = 47;
		static constexpr int GAUSS_ERFC_ID = 48;
		static constexpr int GAUSS_ERF_INV_ID = 49;
		static constexpr int GAUSS_ERFC_INV_ID = 50;
		static constexpr int ULP_ID = 51;
		static constexpr int ISNAN_ID = 52;
		static constexpr int NDIG10_ID = 53;
		static constexpr int NFACT_ID = 54;
		static constexpr int ARCSEC_ID = 55;
		static constexpr int ARCCSC_ID = 56;
		static constexpr int GAMMA_ID = 57;
		static constexpr int LAMBERT_W0_ID = 58;
		static constexpr int LAMBERT_W1_ID = 59;
		static constexpr int SGN_GAMMA_ID = 60;
		static constexpr int LOG_GAMMA_ID = 61;
		static constexpr int DI_GAMMA_ID = 62;
		static constexpr int PARAM_ID = 63;
		static constexpr int RND_STUDENT_T_ID = 64;
		static constexpr int RND_CHI2_ID = 65;

		/*
		 * UnaryFunction - tokens key words.
		 */
		static StringPtr SIN_STR;
		static StringPtr COS_STR;
		static StringPtr TAN_STR;
		static StringPtr TG_STR;
		static StringPtr CTAN_STR;
		static StringPtr CTG_STR;
		static StringPtr COT_STR;
		static StringPtr SEC_STR;
		static StringPtr COSEC_STR;
		static StringPtr CSC_STR;
		static StringPtr ASIN_STR;
		static StringPtr ARSIN_STR;
		static StringPtr ARCSIN_STR;
		static StringPtr ACOS_STR;
		static StringPtr ARCOS_STR;
		static StringPtr ARCCOS_STR;
		static StringPtr ATAN_STR;
		static StringPtr ARCTAN_STR;
		static StringPtr ATG_STR;
		static StringPtr ARCTG_STR;
		static StringPtr ACTAN_STR;
		static StringPtr ARCCTAN_STR;
		static StringPtr ACTG_STR;
		static StringPtr ARCCTG_STR;
		static StringPtr ACOT_STR;
		static StringPtr ARCCOT_STR;
		static StringPtr LN_STR;
		static StringPtr LOG2_STR;
		static StringPtr LOG10_STR;
		static StringPtr LOG10_STR_LG;
		static StringPtr RAD_STR;
		static StringPtr EXP_STR;
		static StringPtr SQRT_STR;
		static StringPtr SINH_STR;
		static StringPtr COSH_STR;
		static StringPtr TANH_STR;
		static StringPtr TGH_STR;
		static StringPtr CTANH_STR;
		static StringPtr COTH_STR;
		static StringPtr CTGH_STR;
		static StringPtr SECH_STR;
		static StringPtr CSCH_STR;
		static StringPtr COSECH_STR;
		static StringPtr DEG_STR;
		static StringPtr ABS_STR;
		static StringPtr SGN_STR;
		static StringPtr FLOOR_STR;
		static StringPtr CEIL_STR;
		static StringPtr NOT_STR;
		static StringPtr ASINH_STR;
		static StringPtr ARSINH_STR;
		static StringPtr ARCSINH_STR;
		static StringPtr ACOSH_STR;
		static StringPtr ARCOSH_STR;
		static StringPtr ARCCOSH_STR;
		static StringPtr ATANH_STR;
		static StringPtr ARCTANH_STR;
		static StringPtr ATGH_STR;
		static StringPtr ARCTGH_STR;
		static StringPtr ACTANH_STR;
		static StringPtr ARCCTANH_STR;
		static StringPtr ACOTH_STR;
		static StringPtr ARCOTH_STR;
		static StringPtr ARCCOTH_STR;
		static StringPtr ACTGH_STR;
		static StringPtr ARCCTGH_STR;
		static StringPtr ASECH_STR;
		static StringPtr ARSECH_STR;
		static StringPtr ARCSECH_STR;
		static StringPtr ACSCH_STR;
		static StringPtr ARCSCH_STR;
		static StringPtr ARCCSCH_STR;
		static StringPtr ACOSECH_STR;
		static StringPtr ARCOSECH_STR;
		static StringPtr ARCCOSECH_STR;
		static StringPtr SA_STR;
		static StringPtr SA1_STR;
		static StringPtr SINC_STR;
		static StringPtr BELL_NUMBER_STR;
		static StringPtr LUCAS_NUMBER_STR;
		static StringPtr FIBONACCI_NUMBER_STR;
		static StringPtr HARMONIC_NUMBER_STR;
		static StringPtr IS_PRIME_STR;
		static StringPtr PRIME_COUNT_STR;
		static StringPtr EXP_INT_STR;
		static StringPtr LOG_INT_STR;
		static StringPtr OFF_LOG_INT_STR;
		static StringPtr GAUSS_ERF_STR;
		static StringPtr GAUSS_ERFC_STR;
		static StringPtr GAUSS_ERF_INV_STR;
		static StringPtr GAUSS_ERFC_INV_STR;
		static StringPtr ULP_STR;
		static StringPtr ISNAN_STR;
		static StringPtr NDIG10_STR;
		static StringPtr NFACT_STR;
		static StringPtr ARCSEC_STR;
		static StringPtr ARCCSC_STR;
		static StringPtr GAMMA_STR;
		static StringPtr LAMBERT_W0_STR;
		static StringPtr LAMBERT_W1_STR;
		static StringPtr SGN_GAMMA_STR;
		static StringPtr LOG_GAMMA_STR;
		static StringPtr DI_GAMMA_STR;
		static StringPtr PARAM_STR;
		static StringPtr RND_STUDENT_T_STR;
		static StringPtr RND_CHI2_STR;
		/*
		 * UnaryFunction - syntax.
		 */
		static StringPtr SIN_SYN;
		static StringPtr COS_SYN;
		static StringPtr TAN_SYN;
		static StringPtr TG_SYN;
		static StringPtr CTAN_SYN;
		static StringPtr CTG_SYN;
		static StringPtr COT_SYN;
		static StringPtr SEC_SYN;
		static StringPtr COSEC_SYN;
		static StringPtr CSC_SYN;
		static StringPtr ASIN_SYN;
		static StringPtr ARSIN_SYN;
		static StringPtr ARCSIN_SYN;
		static StringPtr ACOS_SYN;
		static StringPtr ARCOS_SYN;
		static StringPtr ARCCOS_SYN;
		static StringPtr ATAN_SYN;
		static StringPtr ARCTAN_SYN;
		static StringPtr ATG_SYN;
		static StringPtr ARCTG_SYN;
		static StringPtr ACTAN_SYN;
		static StringPtr ARCCTAN_SYN;
		static StringPtr ACTG_SYN;
		static StringPtr ARCCTG_SYN;
		static StringPtr ACOT_SYN;
		static StringPtr ARCCOT_SYN;
		static StringPtr LN_SYN;
		static StringPtr LOG2_SYN;
		static StringPtr LOG10_SYN;
		static StringPtr LOG10_SYN_LG;
		static StringPtr RAD_SYN;
		static StringPtr EXP_SYN;
		static StringPtr SQRT_SYN;
		static StringPtr SINH_SYN;
		static StringPtr COSH_SYN;
		static StringPtr TANH_SYN;
		static StringPtr TGH_SYN;
		static StringPtr CTANH_SYN;
		static StringPtr COTH_SYN;
		static StringPtr CTGH_SYN;
		static StringPtr SECH_SYN;
		static StringPtr CSCH_SYN;
		static StringPtr COSECH_SYN;
		static StringPtr DEG_SYN;
		static StringPtr ABS_SYN;
		static StringPtr SGN_SYN;
		static StringPtr FLOOR_SYN;
		static StringPtr CEIL_SYN;
		static StringPtr NOT_SYN;
		static StringPtr ASINH_SYN;
		static StringPtr ARSINH_SYN;
		static StringPtr ARCSINH_SYN;
		static StringPtr ACOSH_SYN;
		static StringPtr ARCOSH_SYN;
		static StringPtr ARCCOSH_SYN;
		static StringPtr ATANH_SYN;
		static StringPtr ARCTANH_SYN;
		static StringPtr ATGH_SYN;
		static StringPtr ARCTGH_SYN;
		static StringPtr ACTANH_SYN;
		static StringPtr ARCCTANH_SYN;
		static StringPtr ACOTH_SYN;
		static StringPtr ARCOTH_SYN;
		static StringPtr ARCCOTH_SYN;
		static StringPtr ACTGH_SYN;
		static StringPtr ARCCTGH_SYN;
		static StringPtr ASECH_SYN;
		static StringPtr ARSECH_SYN;
		static StringPtr ARCSECH_SYN;
		static StringPtr ACSCH_SYN;
		static StringPtr ARCSCH_SYN;
		static StringPtr ARCCSCH_SYN;
		static StringPtr ACOSECH_SYN;
		static StringPtr ARCOSECH_SYN;
		static StringPtr ARCCOSECH_SYN;
		static StringPtr SA_SYN;
		static StringPtr SA1_SYN;
		static StringPtr SINC_SYN;
		static StringPtr BELL_NUMBER_SYN;
		static StringPtr LUCAS_NUMBER_SYN;
		static StringPtr FIBONACCI_NUMBER_SYN;
		static StringPtr HARMONIC_NUMBER_SYN;
		static StringPtr IS_PRIME_SYN;
		static StringPtr PRIME_COUNT_SYN;
		static StringPtr EXP_INT_SYN;
		static StringPtr LOG_INT_SYN;
		static StringPtr OFF_LOG_INT_SYN;
		static StringPtr GAUSS_ERF_SYN;
		static StringPtr GAUSS_ERFC_SYN;
		static StringPtr GAUSS_ERF_INV_SYN;
		static StringPtr GAUSS_ERFC_INV_SYN;
		static StringPtr ULP_SYN;
		static StringPtr ISNAN_SYN;
		static StringPtr NDIG10_SYN;
		static StringPtr NFACT_SYN;
		static StringPtr ARCSEC_SYN;
		static StringPtr ARCCSC_SYN;
		static StringPtr GAMMA_SYN;
		static StringPtr LAMBERT_W0_SYN;
		static StringPtr LAMBERT_W1_SYN;
		static StringPtr SGN_GAMMA_SYN;
		static StringPtr LOG_GAMMA_SYN;
		static StringPtr DI_GAMMA_SYN;
		static StringPtr PARAM_SYN;
		static StringPtr RND_STUDENT_T_SYN;
		static StringPtr RND_CHI2_SYN;
		/*
		 * UnaryFunction - tokens description.
		 */
		static StringPtr SIN_DESC;
		static StringPtr COS_DESC;
		static StringPtr TAN_DESC;
		static StringPtr CTAN_DESC;
		static StringPtr SEC_DESC;
		static StringPtr COSEC_DESC;
		static StringPtr ASIN_DESC;
		static StringPtr ACOS_DESC;
		static StringPtr ATAN_DESC;
		static StringPtr ACTAN_DESC;
		static StringPtr LN_DESC;
		static StringPtr LOG2_DESC;
		static StringPtr LOG10_DESC;
		static StringPtr RAD_DESC;
		static StringPtr EXP_DESC;
		static StringPtr SQRT_DESC;
		static StringPtr SINH_DESC;
		static StringPtr COSH_DESC;
		static StringPtr TANH_DESC;
		static StringPtr COTH_DESC;
		static StringPtr SECH_DESC;
		static StringPtr CSCH_DESC;
		static StringPtr DEG_DESC;
		static StringPtr ABS_DESC;
		static StringPtr SGN_DESC;
		static StringPtr FLOOR_DESC;
		static StringPtr CEIL_DESC;
		static StringPtr NOT_DESC;
		static StringPtr ARSINH_DESC;
		static StringPtr ARCOSH_DESC;
		static StringPtr ARTANH_DESC;
		static StringPtr ARCOTH_DESC;
		static StringPtr ARSECH_DESC;
		static StringPtr ARCSCH_DESC;
		static StringPtr SA_DESC;
		static StringPtr SINC_DESC;
		static StringPtr BELL_NUMBER_DESC;
		static StringPtr LUCAS_NUMBER_DESC;
		static StringPtr FIBONACCI_NUMBER_DESC;
		static StringPtr HARMONIC_NUMBER_DESC;
		static StringPtr IS_PRIME_DESC;
		static StringPtr PRIME_COUNT_DESC;
		static StringPtr EXP_INT_DESC;
		static StringPtr LOG_INT_DESC;
		static StringPtr OFF_LOG_INT_DESC;
		static StringPtr GAUSS_ERF_DESC;
		static StringPtr GAUSS_ERFC_DESC;
		static StringPtr GAUSS_ERF_INV_DESC;
		static StringPtr GAUSS_ERFC_INV_DESC;
		static StringPtr ULP_DESC;
		static StringPtr ISNAN_DESC;
		static StringPtr NDIG10_DESC;
		static StringPtr NFACT_DESC;
		static StringPtr ARCSEC_DESC;
		static StringPtr ARCCSC_DESC;
		static StringPtr GAMMA_DESC;
		static StringPtr LAMBERT_W0_DESC;
		static StringPtr LAMBERT_W1_DESC;
		static StringPtr SGN_GAMMA_DESC;
		static StringPtr LOG_GAMMA_DESC;
		static StringPtr DI_GAMMA_DESC;
		static StringPtr PARAM_DESC;
		static StringPtr RND_STUDENT_T_DESC;
		static StringPtr RND_CHI2_DESC;
		/*
		 * UnaryFunction - tokens description.
		 */
		static StringPtr SIN_SINCE;
		static StringPtr COS_SINCE;
		static StringPtr TAN_SINCE;
		static StringPtr CTAN_SINCE;
		static StringPtr SEC_SINCE;
		static StringPtr COSEC_SINCE;
		static StringPtr ASIN_SINCE;
		static StringPtr ACOS_SINCE;
		static StringPtr ATAN_SINCE;
		static StringPtr ACTAN_SINCE;
		static StringPtr LN_SINCE;
		static StringPtr LOG2_SINCE;
		static StringPtr LOG10_SINCE;
		static StringPtr LOG10_SINCE_LG;
		static StringPtr RAD_SINCE;
		static StringPtr EXP_SINCE;
		static StringPtr SQRT_SINCE;
		static StringPtr SINH_SINCE;
		static StringPtr COSH_SINCE;
		static StringPtr TANH_SINCE;
		static StringPtr COTH_SINCE;
		static StringPtr SECH_SINCE;
		static StringPtr CSCH_SINCE;
		static StringPtr DEG_SINCE;
		static StringPtr ABS_SINCE;
		static StringPtr SGN_SINCE;
		static StringPtr FLOOR_SINCE;
		static StringPtr CEIL_SINCE;
		static StringPtr NOT_SINCE;
		static StringPtr ARSINH_SINCE;
		static StringPtr ARCOSH_SINCE;
		static StringPtr ARTANH_SINCE;
		static StringPtr ARCOTH_SINCE;
		static StringPtr ARSECH_SINCE;
		static StringPtr ARCSCH_SINCE;
		static StringPtr SA_SINCE;
		static StringPtr SINC_SINCE;
		static StringPtr BELL_NUMBER_SINCE;
		static StringPtr LUCAS_NUMBER_SINCE;
		static StringPtr FIBONACCI_NUMBER_SINCE;
		static StringPtr HARMONIC_NUMBER_SINCE;
		static StringPtr IS_PRIME_SINCE;
		static StringPtr PRIME_COUNT_SINCE;
		static StringPtr EXP_INT_SINCE;
		static StringPtr LOG_INT_SINCE;
		static StringPtr OFF_LOG_INT_SINCE;
		static StringPtr GAUSS_ERF_SINCE;
		static StringPtr GAUSS_ERFC_SINCE;
		static StringPtr GAUSS_ERF_INV_SINCE;
		static StringPtr GAUSS_ERFC_INV_SINCE;
		static StringPtr ULP_SINCE;
		static StringPtr ISNAN_SINCE;
		static StringPtr NDIG10_SINCE;
		static StringPtr NFACT_SINCE;
		static StringPtr ARCSEC_SINCE;
		static StringPtr ARCCSC_SINCE;
		static StringPtr GAMMA_SINCE;
		static StringPtr LAMBERT_W0_SINCE;
		static StringPtr LAMBERT_W1_SINCE;
		static StringPtr SGN_GAMMA_SINCE;
		static StringPtr LOG_GAMMA_SINCE;
		static StringPtr DI_GAMMA_SINCE;
		static StringPtr PARAM_SINCE;
		static StringPtr RND_STUDENT_T_SINCE;
		static StringPtr RND_CHI2_SINCE;

		STATIC_VARS_INITI_H;

	};
} // namespace org::mariuszgromada::math::mxparser::parsertokens

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_FUNCTION1ARG_H