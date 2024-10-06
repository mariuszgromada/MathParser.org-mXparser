/*
 * @(#)Function1Arg.cpp        6.1.0    2024-10-06
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

#include "org/mariuszgromada/math/mxparser/parsertokens/Function1Arg.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/SyntaxStringBuilder.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {
	using namespace syntaxstringbuilder;

	API_VISIBLE StringPtr Function1Arg::TYPE_DESC = nullptr;

	/*
	 * UnaryFunction - tokens key words.
	 */
	API_VISIBLE StringPtr Function1Arg::SIN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::COS_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::TAN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::TG_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::CTAN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::CTG_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::COT_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::SEC_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::COSEC_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::CSC_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ASIN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARSIN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSIN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOS_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOS_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCOS_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ATAN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCTAN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ATG_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCTG_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACTAN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCTAN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACTG_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCTG_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOT_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCOT_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::LN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG2_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG10_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG10_STR_LG = nullptr;
	API_VISIBLE StringPtr Function1Arg::RAD_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::EXP_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::SQRT_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::SINH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::COSH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::TANH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::TGH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::CTANH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::COTH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::CTGH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::SECH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::CSCH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::COSECH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::DEG_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ABS_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::SGN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::FLOOR_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::CEIL_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::NOT_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ASINH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARSINH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSINH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOSH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOSH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCOSH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ATANH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCTANH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ATGH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCTGH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACTANH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCTANH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOTH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOTH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCOTH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACTGH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCTGH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ASECH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARSECH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSECH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACSCH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSCH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCSCH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOSECH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOSECH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCOSECH_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::SA_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::SA1_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::SINC_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::BELL_NUMBER_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::LUCAS_NUMBER_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::FIBONACCI_NUMBER_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::HARMONIC_NUMBER_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::IS_PRIME_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::PRIME_COUNT_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::EXP_INT_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG_INT_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::OFF_LOG_INT_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERF_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERFC_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERF_INV_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERFC_INV_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ULP_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ISNAN_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::NDIG10_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::NFACT_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSEC_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCSC_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAMMA_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::LAMBERT_W0_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::LAMBERT_W1_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::SGN_GAMMA_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG_GAMMA_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::DI_GAMMA_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::PARAM_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::RND_STUDENT_T_STR = nullptr;
	API_VISIBLE StringPtr Function1Arg::RND_CHI2_STR = nullptr;
	/*
	 * UnaryFunction - syntax.
	 */
	API_VISIBLE StringPtr Function1Arg::SIN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::COS_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::TAN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::TG_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::CTAN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::CTG_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::COT_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::SEC_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::COSEC_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::CSC_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ASIN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARSIN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSIN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOS_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOS_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCOS_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ATAN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCTAN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ATG_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCTG_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACTAN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCTAN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACTG_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCTG_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOT_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCOT_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::LN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG2_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG10_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG10_SYN_LG = nullptr;
	API_VISIBLE StringPtr Function1Arg::RAD_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::EXP_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::SQRT_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::SINH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::COSH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::TANH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::TGH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::CTANH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::COTH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::CTGH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::SECH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::CSCH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::COSECH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::DEG_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ABS_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::SGN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::FLOOR_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::CEIL_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::NOT_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ASINH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARSINH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSINH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOSH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOSH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCOSH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ATANH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCTANH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ATGH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCTGH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACTANH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCTANH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOTH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOTH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCOTH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACTGH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCTGH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ASECH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARSECH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSECH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACSCH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSCH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCSCH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOSECH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOSECH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCOSECH_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::SA_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::SA1_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::SINC_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::BELL_NUMBER_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::LUCAS_NUMBER_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::FIBONACCI_NUMBER_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::HARMONIC_NUMBER_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::IS_PRIME_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::PRIME_COUNT_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::EXP_INT_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG_INT_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::OFF_LOG_INT_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERF_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERFC_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERF_INV_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERFC_INV_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ULP_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ISNAN_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::NDIG10_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::NFACT_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSEC_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCSC_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAMMA_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::LAMBERT_W0_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::LAMBERT_W1_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::SGN_GAMMA_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG_GAMMA_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::DI_GAMMA_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::PARAM_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::RND_STUDENT_T_SYN = nullptr;
	API_VISIBLE StringPtr Function1Arg::RND_CHI2_SYN = nullptr;
	/*
	 * UnaryFunction - tokens description.
	 */
	API_VISIBLE StringPtr Function1Arg::SIN_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::COS_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::TAN_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::CTAN_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::SEC_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::COSEC_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ASIN_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOS_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ATAN_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACTAN_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::LN_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG2_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG10_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::RAD_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::EXP_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::SQRT_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::SINH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::COSH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::TANH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::COTH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::SECH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::CSCH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::DEG_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ABS_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::SGN_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::FLOOR_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::CEIL_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::NOT_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARSINH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOSH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARTANH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOTH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARSECH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSCH_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::SA_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::SINC_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::BELL_NUMBER_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::LUCAS_NUMBER_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::FIBONACCI_NUMBER_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::HARMONIC_NUMBER_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::IS_PRIME_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::PRIME_COUNT_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::EXP_INT_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG_INT_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::OFF_LOG_INT_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERF_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERFC_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERF_INV_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERFC_INV_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ULP_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ISNAN_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::NDIG10_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::NFACT_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSEC_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCSC_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAMMA_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::LAMBERT_W0_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::LAMBERT_W1_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::SGN_GAMMA_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG_GAMMA_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::DI_GAMMA_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::PARAM_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::RND_STUDENT_T_DESC = nullptr;
	API_VISIBLE StringPtr Function1Arg::RND_CHI2_DESC = nullptr;
	/*
	 * UnaryFunction - tokens description.
	 */
	API_VISIBLE StringPtr Function1Arg::SIN_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::COS_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::TAN_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::CTAN_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::SEC_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::COSEC_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ASIN_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACOS_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ATAN_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ACTAN_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::LN_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG2_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG10_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG10_SINCE_LG = nullptr;
	API_VISIBLE StringPtr Function1Arg::RAD_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::EXP_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::SQRT_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::SINH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::COSH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::TANH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::COTH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::SECH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::CSCH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::DEG_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ABS_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::SGN_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::FLOOR_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::CEIL_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::NOT_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARSINH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOSH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARTANH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCOTH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARSECH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSCH_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::SA_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::SINC_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::BELL_NUMBER_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::LUCAS_NUMBER_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::FIBONACCI_NUMBER_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::HARMONIC_NUMBER_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::IS_PRIME_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::PRIME_COUNT_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::EXP_INT_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG_INT_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::OFF_LOG_INT_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERF_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERFC_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERF_INV_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAUSS_ERFC_INV_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ULP_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ISNAN_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::NDIG10_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::NFACT_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCSEC_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::ARCCSC_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::GAMMA_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::LAMBERT_W0_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::LAMBERT_W1_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::SGN_GAMMA_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::LOG_GAMMA_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::DI_GAMMA_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::PARAM_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::RND_STUDENT_T_SINCE = nullptr;
	API_VISIBLE StringPtr Function1Arg::RND_CHI2_SINCE = nullptr;

	STATIC_VARS_INITI_CPP(Function1Arg,

		STATIC_VARS_INITI_DEPENDENCY(mXparser);
		STATIC_VARS_INITI_DEPENDENCY(ParserSymbol);
		STATIC_VARS_INITI_DEPENDENCY(SyntaxStringBuilder);

		INIT_WITH_NA(TYPE_DESC);

		/*
		* UnaryFunction - tokens key words.
		*/
		SIN_STR = S(UTF("sin"));
		COS_STR = S(UTF("cos"));
		TAN_STR = S(UTF("tan"));
		TG_STR = S(UTF("tg"));
		CTAN_STR = S(UTF("ctan"));
		CTG_STR = S(UTF("ctg"));
		COT_STR = S(UTF("cot"));
		SEC_STR = S(UTF("sec"));
		COSEC_STR = S(UTF("cosec"));
		CSC_STR = S(UTF("csc"));
		ASIN_STR = S(UTF("asin"));
		ARSIN_STR = S(UTF("arsin"));
		ARCSIN_STR = S(UTF("arcsin"));
		ACOS_STR = S(UTF("acos"));
		ARCOS_STR = S(UTF("arcos"));
		ARCCOS_STR = S(UTF("arccos"));
		ATAN_STR = S(UTF("atan"));
		ARCTAN_STR = S(UTF("arctan"));
		ATG_STR = S(UTF("atg"));
		ARCTG_STR = S(UTF("arctg"));
		ACTAN_STR = S(UTF("actan"));
		ARCCTAN_STR = S(UTF("arcctan"));
		ACTG_STR = S(UTF("actg"));
		ARCCTG_STR = S(UTF("arcctg"));
		ACOT_STR = S(UTF("acot"));
		ARCCOT_STR = S(UTF("arccot"));
		LN_STR = S(UTF("ln"));
		LOG2_STR = S(UTF("log2"));
		LOG10_STR = S(UTF("log10"));
		LOG10_STR_LG = S(UTF("lg"));
		RAD_STR = S(UTF("rad"));
		EXP_STR = S(UTF("exp"));
		SQRT_STR = S(UTF("sqrt"));
		SINH_STR = S(UTF("sinh"));
		COSH_STR = S(UTF("cosh"));
		TANH_STR = S(UTF("tanh"));
		TGH_STR = S(UTF("tgh"));
		CTANH_STR = S(UTF("ctanh"));
		COTH_STR = S(UTF("coth"));
		CTGH_STR = S(UTF("ctgh"));
		SECH_STR = S(UTF("sech"));
		CSCH_STR = S(UTF("csch"));
		COSECH_STR = S(UTF("cosech"));
		DEG_STR = S(UTF("deg"));
		ABS_STR = S(UTF("abs"));
		SGN_STR = S(UTF("sgn"));
		FLOOR_STR = S(UTF("floor"));
		CEIL_STR = S(UTF("ceil"));
		NOT_STR = S(UTF("not"));
		ASINH_STR = S(UTF("asinh"));
		ARSINH_STR = S(UTF("arsinh"));
		ARCSINH_STR = S(UTF("arcsinh"));
		ACOSH_STR = S(UTF("acosh"));
		ARCOSH_STR = S(UTF("arcosh"));
		ARCCOSH_STR = S(UTF("arccosh"));
		ATANH_STR = S(UTF("atanh"));
		ARCTANH_STR = S(UTF("arctanh"));
		ATGH_STR = S(UTF("atgh"));
		ARCTGH_STR = S(UTF("arctgh"));
		ACTANH_STR = S(UTF("actanh"));
		ARCCTANH_STR = S(UTF("arcctanh"));
		ACOTH_STR = S(UTF("acoth"));
		ARCOTH_STR = S(UTF("arcoth"));
		ARCCOTH_STR = S(UTF("arccoth"));
		ACTGH_STR = S(UTF("actgh"));
		ARCCTGH_STR = S(UTF("arcctgh"));
		ASECH_STR = S(UTF("asech"));
		ARSECH_STR = S(UTF("arsech"));
		ARCSECH_STR = S(UTF("arcsech"));
		ACSCH_STR = S(UTF("acsch"));
		ARCSCH_STR = S(UTF("arcsch"));
		ARCCSCH_STR = S(UTF("arccsch"));
		ACOSECH_STR = S(UTF("acosech"));
		ARCOSECH_STR = S(UTF("arcosech"));
		ARCCOSECH_STR = S(UTF("arccosech"));
		SA_STR = S(UTF("sinc"));
		SA1_STR = S(UTF("Sa"));
		SINC_STR = S(UTF("Sinc"));
		BELL_NUMBER_STR = S(UTF("Bell"));
		LUCAS_NUMBER_STR = S(UTF("Luc"));
		FIBONACCI_NUMBER_STR = S(UTF("Fib"));
		HARMONIC_NUMBER_STR = S(UTF("harm"));
		IS_PRIME_STR = S(UTF("ispr"));
		PRIME_COUNT_STR = S(UTF("Pi"));
		EXP_INT_STR = S(UTF("Ei"));
		LOG_INT_STR = S(UTF("li"));
		OFF_LOG_INT_STR = S(UTF("Li"));
		GAUSS_ERF_STR = S(UTF("erf"));
		GAUSS_ERFC_STR = S(UTF("erfc"));
		GAUSS_ERF_INV_STR = S(UTF("erfInv"));
		GAUSS_ERFC_INV_STR = S(UTF("erfcInv"));
		ULP_STR = S(UTF("ulp"));
		ISNAN_STR = S(UTF("isNaN"));
		NDIG10_STR = S(UTF("ndig10"));
		NFACT_STR = S(UTF("nfact"));
		ARCSEC_STR = S(UTF("arcsec"));
		ARCCSC_STR = S(UTF("arccsc"));
		GAMMA_STR = S(UTF("Gamma"));
		LAMBERT_W0_STR = S(UTF("LambW0"));
		LAMBERT_W1_STR = S(UTF("LambW1"));
		SGN_GAMMA_STR = S(UTF("sgnGamma"));
		LOG_GAMMA_STR = S(UTF("logGamma"));
		DI_GAMMA_STR = S(UTF("diGamma"));
		PARAM_STR = S(UTF("par"));
		RND_STUDENT_T_STR = S(UTF("rStud"));
		RND_CHI2_STR = S(UTF("rChi2"));
		/*
		* UnaryFunction - syntax.
		*/
		SIN_SYN = SyntaxStringBuilder::unaryFunctionX(SIN_STR);
		COS_SYN = SyntaxStringBuilder::unaryFunctionX(COS_STR);
		TAN_SYN = SyntaxStringBuilder::unaryFunctionX(TAN_STR);
		TG_SYN = SyntaxStringBuilder::unaryFunctionX(TG_STR);
		CTAN_SYN = SyntaxStringBuilder::unaryFunctionX(CTAN_STR);
		CTG_SYN = SyntaxStringBuilder::unaryFunctionX(CTG_STR);
		COT_SYN = SyntaxStringBuilder::unaryFunctionX(COT_STR);
		SEC_SYN = SyntaxStringBuilder::unaryFunctionX(SEC_STR);
		COSEC_SYN = SyntaxStringBuilder::unaryFunctionX(COSEC_STR);
		CSC_SYN = SyntaxStringBuilder::unaryFunctionX(CSC_STR);
		ASIN_SYN = SyntaxStringBuilder::unaryFunctionX(ASIN_STR);
		ARSIN_SYN = SyntaxStringBuilder::unaryFunctionX(ARSIN_STR);
		ARCSIN_SYN = SyntaxStringBuilder::unaryFunctionX(ARCSIN_STR);
		ACOS_SYN = SyntaxStringBuilder::unaryFunctionX(ACOS_STR);
		ARCOS_SYN = SyntaxStringBuilder::unaryFunctionX(ARCOS_STR);
		ARCCOS_SYN = SyntaxStringBuilder::unaryFunctionX(ARCCOS_STR);
		ATAN_SYN = SyntaxStringBuilder::unaryFunctionX(ATAN_STR);
		ARCTAN_SYN = SyntaxStringBuilder::unaryFunctionX(ARCTAN_STR);
		ATG_SYN = SyntaxStringBuilder::unaryFunctionX(ATG_STR);
		ARCTG_SYN = SyntaxStringBuilder::unaryFunctionX(ARCTG_STR);
		ACTAN_SYN = SyntaxStringBuilder::unaryFunctionX(ACTAN_STR);
		ARCCTAN_SYN = SyntaxStringBuilder::unaryFunctionX(ARCCTAN_STR);
		ACTG_SYN = SyntaxStringBuilder::unaryFunctionX(ACTG_STR);
		ARCCTG_SYN = SyntaxStringBuilder::unaryFunctionX(ARCCTG_STR);
		ACOT_SYN = SyntaxStringBuilder::unaryFunctionX(ACOT_STR);
		ARCCOT_SYN = SyntaxStringBuilder::unaryFunctionX(ARCCOT_STR);
		LN_SYN = SyntaxStringBuilder::unaryFunctionX(LN_STR);
		LOG2_SYN = SyntaxStringBuilder::unaryFunctionX(LOG2_STR);
		LOG10_SYN = SyntaxStringBuilder::unaryFunctionX(LOG10_STR);
		LOG10_SYN_LG = SyntaxStringBuilder::unaryFunctionX(LOG10_STR_LG);
		RAD_SYN = SyntaxStringBuilder::unaryFunctionX(RAD_STR);
		EXP_SYN = SyntaxStringBuilder::unaryFunctionX(EXP_STR);
		SQRT_SYN = SyntaxStringBuilder::unaryFunctionX(SQRT_STR);
		SINH_SYN = SyntaxStringBuilder::unaryFunctionX(SINH_STR);
		COSH_SYN = SyntaxStringBuilder::unaryFunctionX(COSH_STR);
		TANH_SYN = SyntaxStringBuilder::unaryFunctionX(TANH_STR);
		TGH_SYN = SyntaxStringBuilder::unaryFunctionX(TGH_STR);
		CTANH_SYN = SyntaxStringBuilder::unaryFunctionX(CTANH_STR);
		COTH_SYN = SyntaxStringBuilder::unaryFunctionX(COTH_STR);
		CTGH_SYN = SyntaxStringBuilder::unaryFunctionX(CTGH_STR);
		SECH_SYN = SyntaxStringBuilder::unaryFunctionX(SECH_STR);
		CSCH_SYN = SyntaxStringBuilder::unaryFunctionX(CSCH_STR);
		COSECH_SYN = SyntaxStringBuilder::unaryFunctionX(COSECH_STR);
		DEG_SYN = SyntaxStringBuilder::unaryFunctionX(DEG_STR);
		ABS_SYN = SyntaxStringBuilder::unaryFunctionX(ABS_STR);
		SGN_SYN = SyntaxStringBuilder::unaryFunctionX(SGN_STR);
		FLOOR_SYN = SyntaxStringBuilder::unaryFunctionX(FLOOR_STR);
		CEIL_SYN = SyntaxStringBuilder::unaryFunctionX(CEIL_STR);
		NOT_SYN = SyntaxStringBuilder::unaryFunctionX(NOT_STR);
		ASINH_SYN = SyntaxStringBuilder::unaryFunctionX(ASINH_STR);
		ARSINH_SYN = SyntaxStringBuilder::unaryFunctionX(ARSINH_STR);
		ARCSINH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCSINH_STR);
		ACOSH_SYN = SyntaxStringBuilder::unaryFunctionX(ACOSH_STR);
		ARCOSH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCOSH_STR);
		ARCCOSH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCCOSH_STR);
		ATANH_SYN = SyntaxStringBuilder::unaryFunctionX(ATANH_STR);
		ARCTANH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCTANH_STR);
		ATGH_SYN = SyntaxStringBuilder::unaryFunctionX(ATGH_STR);
		ARCTGH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCTGH_STR);
		ACTANH_SYN = SyntaxStringBuilder::unaryFunctionX(ACTANH_STR);
		ARCCTANH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCCTANH_STR);
		ACOTH_SYN = SyntaxStringBuilder::unaryFunctionX(ACOTH_STR);
		ARCOTH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCOTH_STR);
		ARCCOTH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCCOTH_STR);
		ACTGH_SYN = SyntaxStringBuilder::unaryFunctionX(ACTGH_STR);
		ARCCTGH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCCTGH_STR);
		ASECH_SYN = SyntaxStringBuilder::unaryFunctionX(ASECH_STR);
		ARSECH_SYN = SyntaxStringBuilder::unaryFunctionX(ARSECH_STR);
		ARCSECH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCSECH_STR);
		ACSCH_SYN = SyntaxStringBuilder::unaryFunctionX(ACSCH_STR);
		ARCSCH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCSCH_STR);
		ARCCSCH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCCSCH_STR);
		ACOSECH_SYN = SyntaxStringBuilder::unaryFunctionX(ACOSECH_STR);
		ARCOSECH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCOSECH_STR);
		ARCCOSECH_SYN = SyntaxStringBuilder::unaryFunctionX(ARCCOSECH_STR);
		SA_SYN = SyntaxStringBuilder::unaryFunctionX(SA_STR);
		SA1_SYN = SyntaxStringBuilder::unaryFunctionX(SA1_STR);
		SINC_SYN = SyntaxStringBuilder::unaryFunctionX(SINC_STR);
		BELL_NUMBER_SYN = SyntaxStringBuilder::unaryFunctionN(BELL_NUMBER_STR);
		LUCAS_NUMBER_SYN = SyntaxStringBuilder::unaryFunctionN(LUCAS_NUMBER_STR);
		FIBONACCI_NUMBER_SYN = SyntaxStringBuilder::unaryFunctionN(FIBONACCI_NUMBER_STR);
		HARMONIC_NUMBER_SYN = SyntaxStringBuilder::unaryFunctionN(HARMONIC_NUMBER_STR);
		IS_PRIME_SYN = SyntaxStringBuilder::unaryFunctionN(IS_PRIME_STR);
		PRIME_COUNT_SYN = SyntaxStringBuilder::unaryFunctionN(PRIME_COUNT_STR);
		EXP_INT_SYN = SyntaxStringBuilder::unaryFunctionX(EXP_INT_STR);
		LOG_INT_SYN = SyntaxStringBuilder::unaryFunctionX(LOG_INT_STR);
		OFF_LOG_INT_SYN = SyntaxStringBuilder::unaryFunctionX(OFF_LOG_INT_STR);
		GAUSS_ERF_SYN = SyntaxStringBuilder::unaryFunctionX(GAUSS_ERF_STR);
		GAUSS_ERFC_SYN = SyntaxStringBuilder::unaryFunctionX(GAUSS_ERFC_STR);
		GAUSS_ERF_INV_SYN = SyntaxStringBuilder::unaryFunctionX(GAUSS_ERF_INV_STR);
		GAUSS_ERFC_INV_SYN = SyntaxStringBuilder::unaryFunctionX(GAUSS_ERFC_INV_STR);
		ULP_SYN = SyntaxStringBuilder::unaryFunctionX(ULP_STR);
		ISNAN_SYN = SyntaxStringBuilder::unaryFunctionX(ISNAN_STR);
		NDIG10_SYN = SyntaxStringBuilder::unaryFunctionX(NDIG10_STR);
		NFACT_SYN = SyntaxStringBuilder::unaryFunctionX(NFACT_STR);
		ARCSEC_SYN = SyntaxStringBuilder::unaryFunctionX(ARCSEC_STR);
		ARCCSC_SYN = SyntaxStringBuilder::unaryFunctionX(ARCCSC_STR);
		GAMMA_SYN = SyntaxStringBuilder::unaryFunctionX(GAMMA_STR);
		LAMBERT_W0_SYN = SyntaxStringBuilder::unaryFunctionX(LAMBERT_W0_STR);
		LAMBERT_W1_SYN = SyntaxStringBuilder::unaryFunctionX(LAMBERT_W1_STR);
		SGN_GAMMA_SYN = SyntaxStringBuilder::unaryFunctionX(SGN_GAMMA_STR);
		LOG_GAMMA_SYN = SyntaxStringBuilder::unaryFunctionX(LOG_GAMMA_STR);
		DI_GAMMA_SYN = SyntaxStringBuilder::unaryFunctionX(DI_GAMMA_STR);
		PARAM_SYN = SyntaxStringBuilder::unaryFunctionI(PARAM_STR);
		RND_STUDENT_T_SYN = SyntaxStringBuilder::unaryFunctionV(RND_STUDENT_T_STR);
		RND_CHI2_SYN = SyntaxStringBuilder::unaryFunctionK(RND_CHI2_STR);
		/*
		* UnaryFunction - tokens description.
		*/
		INIT_WITH_NA(SIN_DESC);
		INIT_WITH_NA(COS_DESC);
		INIT_WITH_NA(TAN_DESC);
		INIT_WITH_NA(CTAN_DESC);
		INIT_WITH_NA(SEC_DESC);
		INIT_WITH_NA(COSEC_DESC);
		INIT_WITH_NA(ASIN_DESC);
		INIT_WITH_NA(ACOS_DESC);
		INIT_WITH_NA(ATAN_DESC);
		INIT_WITH_NA(ACTAN_DESC);
		INIT_WITH_NA(LN_DESC);
		INIT_WITH_NA(LOG2_DESC);
		INIT_WITH_NA(LOG10_DESC);
		INIT_WITH_NA(RAD_DESC);
		INIT_WITH_NA(EXP_DESC);
		INIT_WITH_NA(SQRT_DESC);
		INIT_WITH_NA(SINH_DESC);
		INIT_WITH_NA(COSH_DESC);
		INIT_WITH_NA(TANH_DESC);
		INIT_WITH_NA(COTH_DESC);
		INIT_WITH_NA(SECH_DESC);
		INIT_WITH_NA(CSCH_DESC);
		INIT_WITH_NA(DEG_DESC);
		INIT_WITH_NA(ABS_DESC);
		INIT_WITH_NA(SGN_DESC);
		INIT_WITH_NA(FLOOR_DESC);
		INIT_WITH_NA(CEIL_DESC);
		INIT_WITH_NA(NOT_DESC);
		INIT_WITH_NA(ARSINH_DESC);
		INIT_WITH_NA(ARCOSH_DESC);
		INIT_WITH_NA(ARTANH_DESC);
		INIT_WITH_NA(ARCOTH_DESC);
		INIT_WITH_NA(ARSECH_DESC);
		INIT_WITH_NA(ARCSCH_DESC);
		INIT_WITH_NA(SA_DESC);
		INIT_WITH_NA(SINC_DESC);
		INIT_WITH_NA(BELL_NUMBER_DESC);
		INIT_WITH_NA(LUCAS_NUMBER_DESC);
		INIT_WITH_NA(FIBONACCI_NUMBER_DESC);
		INIT_WITH_NA(HARMONIC_NUMBER_DESC);
		INIT_WITH_NA(IS_PRIME_DESC);
		INIT_WITH_NA(PRIME_COUNT_DESC);
		INIT_WITH_NA(EXP_INT_DESC);
		INIT_WITH_NA(LOG_INT_DESC);
		INIT_WITH_NA(OFF_LOG_INT_DESC);
		INIT_WITH_NA(GAUSS_ERF_DESC);
		INIT_WITH_NA(GAUSS_ERFC_DESC);
		INIT_WITH_NA(GAUSS_ERF_INV_DESC);
		INIT_WITH_NA(GAUSS_ERFC_INV_DESC);
		INIT_WITH_NA(ULP_DESC);
		INIT_WITH_NA(ISNAN_DESC);
		INIT_WITH_NA(NDIG10_DESC);
		INIT_WITH_NA(NFACT_DESC);
		INIT_WITH_NA(ARCSEC_DESC);
		INIT_WITH_NA(ARCCSC_DESC);
		INIT_WITH_NA(GAMMA_DESC);
		INIT_WITH_NA(LAMBERT_W0_DESC);
		INIT_WITH_NA(LAMBERT_W1_DESC);
		INIT_WITH_NA(SGN_GAMMA_DESC);
		INIT_WITH_NA(LOG_GAMMA_DESC);
		INIT_WITH_NA(DI_GAMMA_DESC);
		INIT_WITH_NA(PARAM_DESC);
		INIT_WITH_NA(RND_STUDENT_T_DESC);
		INIT_WITH_NA(RND_CHI2_DESC);
		/*
		* UnaryFunction - tokens description.
		*/
		SIN_SINCE = mXparser::NAMEv10;
		COS_SINCE = mXparser::NAMEv10;
		TAN_SINCE = mXparser::NAMEv10;
		CTAN_SINCE = mXparser::NAMEv10;
		SEC_SINCE = mXparser::NAMEv10;
		COSEC_SINCE = mXparser::NAMEv10;
		ASIN_SINCE = mXparser::NAMEv10;
		ACOS_SINCE = mXparser::NAMEv10;
		ATAN_SINCE = mXparser::NAMEv10;
		ACTAN_SINCE = mXparser::NAMEv10;
		LN_SINCE = mXparser::NAMEv10;
		LOG2_SINCE = mXparser::NAMEv10;
		LOG10_SINCE = mXparser::NAMEv10;
		LOG10_SINCE_LG = mXparser::NAMEv50;
		RAD_SINCE = mXparser::NAMEv10;
		EXP_SINCE = mXparser::NAMEv10;
		SQRT_SINCE = mXparser::NAMEv10;
		SINH_SINCE = mXparser::NAMEv10;
		COSH_SINCE = mXparser::NAMEv10;
		TANH_SINCE = mXparser::NAMEv10;
		COTH_SINCE = mXparser::NAMEv10;
		SECH_SINCE = mXparser::NAMEv10;
		CSCH_SINCE = mXparser::NAMEv10;
		DEG_SINCE = mXparser::NAMEv10;
		ABS_SINCE = mXparser::NAMEv10;
		SGN_SINCE = mXparser::NAMEv10;
		FLOOR_SINCE = mXparser::NAMEv10;
		CEIL_SINCE = mXparser::NAMEv10;
		NOT_SINCE = mXparser::NAMEv10;
		ARSINH_SINCE = mXparser::NAMEv10;
		ARCOSH_SINCE = mXparser::NAMEv10;
		ARTANH_SINCE = mXparser::NAMEv10;
		ARCOTH_SINCE = mXparser::NAMEv10;
		ARSECH_SINCE = mXparser::NAMEv10;
		ARCSCH_SINCE = mXparser::NAMEv10;
		SA_SINCE = mXparser::NAMEv10;
		SINC_SINCE = mXparser::NAMEv10;
		BELL_NUMBER_SINCE = mXparser::NAMEv10;
		LUCAS_NUMBER_SINCE = mXparser::NAMEv10;
		FIBONACCI_NUMBER_SINCE = mXparser::NAMEv10;
		HARMONIC_NUMBER_SINCE = mXparser::NAMEv10;
		IS_PRIME_SINCE = mXparser::NAMEv23;
		PRIME_COUNT_SINCE = mXparser::NAMEv23;
		EXP_INT_SINCE = mXparser::NAMEv23;
		LOG_INT_SINCE = mXparser::NAMEv23;
		OFF_LOG_INT_SINCE = mXparser::NAMEv23;
		GAUSS_ERF_SINCE = mXparser::NAMEv30;
		GAUSS_ERFC_SINCE = mXparser::NAMEv30;
		GAUSS_ERF_INV_SINCE = mXparser::NAMEv30;
		GAUSS_ERFC_INV_SINCE = mXparser::NAMEv30;
		ULP_SINCE = mXparser::NAMEv30;
		ISNAN_SINCE = mXparser::NAMEv41;
		NDIG10_SINCE = mXparser::NAMEv41;
		NFACT_SINCE = mXparser::NAMEv41;
		ARCSEC_SINCE = mXparser::NAMEv41;
		ARCCSC_SINCE = mXparser::NAMEv41;
		GAMMA_SINCE = mXparser::NAMEv42;
		LAMBERT_W0_SINCE = mXparser::NAMEv42;
		LAMBERT_W1_SINCE = mXparser::NAMEv42;
		SGN_GAMMA_SINCE = mXparser::NAMEv42;
		LOG_GAMMA_SINCE = mXparser::NAMEv42;
		DI_GAMMA_SINCE = mXparser::NAMEv42;
		PARAM_SINCE = mXparser::NAMEv42;
		RND_STUDENT_T_SINCE = mXparser::NAMEv50;
		RND_CHI2_SINCE = mXparser::NAMEv50;
	);
} // namespace org::mariuszgromada::math::mxparser::parsertokens