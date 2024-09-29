/*
 * @(#)StringInvariant.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/StringInvariant.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"

namespace org::mariuszgromada::math::mxparser::stringutils {

	API_VISIBLE StringPtr StringInvariant::EMPTY = nullptr;
	API_VISIBLE StringPtr StringInvariant::ARGUMENT_DEFINITION_EXAMPLES = nullptr;
	API_VISIBLE StringPtr StringInvariant::CONSTANT_DEFINITION_EXAMPLES = nullptr;
	API_VISIBLE StringPtr StringInvariant::ARGUMENT_NAME_EXAMPLES = nullptr;
	API_VISIBLE StringPtr StringInvariant::CONSTANT_NAME_EXAMPLES = nullptr;
	API_VISIBLE StringPtr StringInvariant::FUNCTION_NAME_EXAMPLES = nullptr;
	API_VISIBLE StringPtr StringInvariant::FUNCTION_DEFINITION_EXAMPLES = nullptr;
	API_VISIBLE StringPtr StringInvariant::RECURSIVE_ARGUMENT_DEFINITION_EXAMPLES = nullptr;
	API_VISIBLE StringPtr StringInvariant::NEW_LINE = nullptr;
	API_VISIBLE StringPtr StringInvariant::INTERNAL = nullptr;
	API_VISIBLE StringPtr StringInvariant::BODY_EXTENDED = nullptr;
	API_VISIBLE StringPtr StringInvariant::BODY_EXTENDED_VARIADIC = nullptr;
	API_VISIBLE StringPtr StringInvariant::SPACE = nullptr;
	API_VISIBLE StringPtr StringInvariant::TAB_AS_SPACES = nullptr;
	API_VISIBLE StringPtr StringInvariant::APOSTROPHE = nullptr;
	API_VISIBLE StringPtr StringInvariant::QUOTE = nullptr;
	API_VISIBLE StringPtr StringInvariant::LEFT_SQUARE_BRACKET = nullptr;
	API_VISIBLE StringPtr StringInvariant::RIGHT_SQUARE_BRACKET = nullptr;
	API_VISIBLE StringPtr StringInvariant::RIGHT_SQUARE_BRACKET_SPACE = nullptr;
	API_VISIBLE StringPtr StringInvariant::LEFT_BRACKET = nullptr;
	API_VISIBLE StringPtr StringInvariant::RIGHT_BRACKET = nullptr;
	API_VISIBLE StringPtr StringInvariant::LEFT_CURLY_BRACKET = nullptr;
	API_VISIBLE StringPtr StringInvariant::RIGHT_CURLY_BRACKET = nullptr;
	API_VISIBLE StringPtr StringInvariant::EQUAL = nullptr;
	API_VISIBLE StringPtr StringInvariant::SPACE_EQUAL_SPACE = nullptr;
	API_VISIBLE StringPtr StringInvariant::COLON = nullptr;
	API_VISIBLE StringPtr StringInvariant::COLON_SPACE = nullptr;
	API_VISIBLE StringPtr StringInvariant::SEMICOLON = nullptr;
	API_VISIBLE StringPtr StringInvariant::SEMICOLON_SPACE = nullptr;
	API_VISIBLE StringPtr StringInvariant::COMMA = nullptr;
	API_VISIBLE StringPtr StringInvariant::COMMA_SPACE = nullptr;
	API_VISIBLE StringPtr StringInvariant::DOT = nullptr;
	API_VISIBLE StringPtr StringInvariant::DOT_SPACE = nullptr;
	API_VISIBLE StringPtr StringInvariant::DOTS = nullptr;
	API_VISIBLE StringPtr StringInvariant::DOTS_SPACE = nullptr;
	API_VISIBLE StringPtr StringInvariant::AND_CONTINUE = nullptr;
	API_VISIBLE StringPtr StringInvariant::LOWER = nullptr;
	API_VISIBLE StringPtr StringInvariant::GREATER = nullptr;
	API_VISIBLE StringPtr StringInvariant::RIGHT_ARROW = nullptr;
	API_VISIBLE StringPtr StringInvariant::LONG_RIGHT_ARROW = nullptr;
	API_VISIBLE StringPtr StringInvariant::LONG_RIGHT_ARROW_SPACE = nullptr;
	API_VISIBLE StringPtr StringInvariant::RIGHT_ARROW_SPACE = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringInvariant::METER_UNIT = nullptr;
	API_VISIBLE StringPtr StringInvariant::SQUARE_METER_UNIT = nullptr;
	API_VISIBLE StringPtr StringInvariant::CUBIC_METER_UNIT = nullptr;
	API_VISIBLE StringPtr StringInvariant::SECOND_UNIT = nullptr;
	API_VISIBLE StringPtr StringInvariant::KILOGRAM_UNIT = nullptr;
	API_VISIBLE StringPtr StringInvariant::BIT_UNIT = nullptr;
	API_VISIBLE StringPtr StringInvariant::JOULE_UNIT = nullptr;
	API_VISIBLE StringPtr StringInvariant::RADIAN_UNIT = nullptr;
	API_VISIBLE StringPtr StringInvariant::METER_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringInvariant::SECOND_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringInvariant::KILOGRAM_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringInvariant::BIT_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringInvariant::RADIAN_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringInvariant::TRUE_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringInvariant::FALSE_DEFINITION = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringInvariant::METER_PER_SECOND_UNIT = nullptr;
	API_VISIBLE StringPtr StringInvariant::METER_PER_SECOND_SQUARED_UNIT = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringInvariant::TRUE_AND_FALSE_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringInvariant::METER_AND_SECOND_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringInvariant::METER_AND_KILOGRAM_AND_SECOND_DEFINITION = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringInvariant::NORMAL_NMS_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::NORMAL_N01_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIFORM_UAB_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIFORM_UDAB_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIFORM_U01_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::BETA_XY_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LOG_BETA_XY_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::INCOMPLETE_BETA_XAB_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::REGULARIZED_INCOMPLETE_BETA_XAB_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::GAMMA_S_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LOWER_GAMMA_SX_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UPPER_GAMMA_SX_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::REGULARIZED_GAMMA_P_SX_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::REGULARIZED_GAMMA_Q_SX_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LOG_GAMMA_S_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::DIGAMMA_X_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::EXPONENTIAL_INTEGRAL_X_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LOGARITHMIC_INTEGRAL_X_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LOGARITHMIC_INTEGRAL_2_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::OFFSET_LOGARITHMIC_INTEGRAL_X_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::GAUSS_ERROR_X_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::INVERSE_GAUSS_ERROR_Y_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::GAUSS_ERROR_COMPLEMENTARY_X_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::INVERSE_GAUSS_ERROR_COMPLEMENTARY_Y_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LAMBERT_W0_X_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LAMBERT_W_1_X_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::PRIME_COUNTING_N_SYMBOL = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringInvariant::PI_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::E_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::MASCHERONI_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::GOLDEN_RATIO_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::PLASTICS_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::EMBREE_TREFETHEN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::FEIGENBAUM_DELTA_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::FEIGENBAUM_ALPHA_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::MEISSEL_MERTEENS_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::BRAUN_TWIN_PRIME_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::BRAUN_PRIME_QUADR_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::TWIN_PRIME_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::BRUIJN_NEWMAN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::CATALAN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LANDAU_RAMANUJAN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::VISWANATH_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LEGENDRE_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RAMANUJAN_SOLDNER_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::ERDOS_BORWEIN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::BERNSTEIN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::GAUSS_KUZMIN_WIRSING_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::HAFNER_SARNAK_MCCURLEY_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::GOLOMB_DICKMAN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::CAHEN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LENGYEL_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::APERY_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::MILLS_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::BACKHOUSE_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::PORTER_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::NIVEN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::SIERPINSKI_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::KHINCHIN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::FRANSEN_ROBINSON_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LANDAU_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::PARABOLIC_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::OMEGA_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::MRB_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::GOMPERTZ_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LIGHT_SPEED_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::GRAVITATIONAL_CONSTANT_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::GRAVIT_ACC_EARTH_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::PLANCK_CONSTANT_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::PLANCK_CONSTANT_REDUCED_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::PLANCK_LENGTH_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::PLANCK_MASS_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::PLANCK_TIME_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::LIGHT_YEAR_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::ASTRONOMICAL_UNIT_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::PARSEC_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::KILOPARSEC_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::EARTH_MASS_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::EARTH_RADIUS_EQUATORIAL_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::EARTH_RADIUS_POLAR_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::EARTH_RADIUS_MEAN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::SOLAR_RADIUS_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::SOLAR_MASS_SYMBOL = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringInvariant::SUM_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::PROD_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::INT_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::DER_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::DER_LEFT_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::DER_RIGHT_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::DERN_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::FORW_DIFF_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::BACKW_DIFF_SYMBOL = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringInvariant::SOLVE_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::AND_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::NAND_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::OR_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::NOR_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::XOR_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::IMP_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::CIMP_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::NIMP_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::CNIMP_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::EQV_SYMBOL = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_INT1_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_INT2_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_INT3_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_INT4_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_INT5_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_INT6_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_INT7_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_INT8_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_INT9_SYMBOL = nullptr;

	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT0_1_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT0_2_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT0_3_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT0_4_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT0_5_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT0_6_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT0_7_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT0_8_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT0_9_SYMBOL = nullptr;

	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT1_1_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT1_2_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT1_3_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT1_4_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT1_5_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT1_6_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT1_7_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT1_8_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::RANDOM_VARIABLE_NAT1_9_SYMBOL = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringInvariant::UNIT_PERC_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_PERM_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_YOTTA_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_ZETTA_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_EXA_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_PETA_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_TERA_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_GIGA_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_MEGA_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_KILO_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_HECTO_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_DECA_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_DECI_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_CENTI_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_MILLI_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_MICRO_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_NANO_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_PICO_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_FEMTO_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_ATTO_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_ZEPTO_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringInvariant::UNIT_YOCTO_SYMBOL = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringInvariant::PARSER_SYMBOL_NUMBER_INTEGER_EXAMPLE = nullptr;
	API_VISIBLE StringPtr StringInvariant::PARSER_SYMBOL_NUMBER_DECIMAL_EXAMPLE = nullptr;
	API_VISIBLE StringPtr StringInvariant::PARSER_SYMBOL_NUMBER_LEADING_ZERO_EXAMPLE = nullptr;
	API_VISIBLE StringPtr StringInvariant::PARSER_SYMBOL_NUMBER_SCI_NOTATION_EXAMPLE = nullptr;
	API_VISIBLE StringPtr StringInvariant::PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO_EXAMPLE = nullptr;
	API_VISIBLE StringPtr StringInvariant::PARSER_SYMBOL_NUMBER_FRACTIONS_EXAMPLE = nullptr;
	API_VISIBLE StringPtr StringInvariant::PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS_EXAMPLE = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringInvariant::SEPARATOR = nullptr;

	STATIC_VARS_INITI_CPP(StringInvariant,
		EMPTY = S(UTF(""));
		ARGUMENT_DEFINITION_EXAMPLES = S(UTF("'x', 'x=5', 'x=5+3/2', 'x=2*y', ..."));
		CONSTANT_DEFINITION_EXAMPLES = S(UTF("'x', 'x=5', 'x=5+3/2', '[x]=2*y', ..."));
		ARGUMENT_NAME_EXAMPLES = S(UTF("'x', 'x_y', 'x1', 'x_1', 'abc', ..."));
		CONSTANT_NAME_EXAMPLES = S(UTF("'x', 'x_y', 'x1', 'x_1', 'abc', [abc], ..."));
		FUNCTION_NAME_EXAMPLES = S(UTF("'f', 'f_y', 'f1', 'xf1', 'fxy', ..."));
		FUNCTION_DEFINITION_EXAMPLES = S(UTF(
			"'f(x)=2*x', 'f(x,y)=y*sin(x)', 'f(n)=if(n>1,n*f(n-1),1)', 'f(...)=sum(i,1,[npar],par(i))', ..."));
		RECURSIVE_ARGUMENT_DEFINITION_EXAMPLES = S(UTF("'f(n)=n*f(n-1)', 'f(n)=f(n-1)+f(n-2)'"));
		NEW_LINE = S(UTF("\n"));
		INTERNAL = S(UTF("{internal}"));
		BODY_EXTENDED = S(UTF("{body-ext}"));
		BODY_EXTENDED_VARIADIC = S(UTF("{body-ext-var}"));
		SPACE = S(UTF(" "));
		TAB_AS_SPACES = S(UTF("    "));
		APOSTROPHE = S(UTF("'"));
		QUOTE = S(UTF("\""));
		LEFT_SQUARE_BRACKET = S(UTF("["));
		RIGHT_SQUARE_BRACKET = S(UTF("]"));
		RIGHT_SQUARE_BRACKET_SPACE = RIGHT_SQUARE_BRACKET + SPACE;
		LEFT_BRACKET = S(UTF("("));
		RIGHT_BRACKET = S(UTF(")"));
		LEFT_CURLY_BRACKET = S(UTF("{"));
		RIGHT_CURLY_BRACKET = S(UTF("}"));
		EQUAL = S(UTF("="));
		SPACE_EQUAL_SPACE = SPACE + EQUAL + SPACE;
		COLON = S(UTF(":"));
		COLON_SPACE = COLON + SPACE;
		SEMICOLON = S(UTF(";"));
		SEMICOLON_SPACE = SEMICOLON + SPACE;
		COMMA = S(UTF(","));
		COMMA_SPACE = COMMA + SPACE;
		DOT = S(UTF("."));
		DOT_SPACE = DOT + SPACE;
		DOTS = S(UTF("..."));
		DOTS_SPACE = DOTS + SPACE;
		AND_CONTINUE = NEW_LINE + TAB_AS_SPACES + DOTS + NEW_LINE + TAB_AS_SPACES + DOTS;
		LOWER = S(UTF("<"));
		GREATER = S(UTF(">"));
		RIGHT_ARROW = S(UTF("->"));
		LONG_RIGHT_ARROW = S(UTF("--->"));
		LONG_RIGHT_ARROW_SPACE = LONG_RIGHT_ARROW + SPACE;
		RIGHT_ARROW_SPACE = RIGHT_ARROW + SPACE;
		// -------------------------------------------------
		METER_UNIT = S(UTF("[m]"));
		SQUARE_METER_UNIT = S(UTF("[m²]"));
		CUBIC_METER_UNIT = S(UTF("[m³]"));
		SECOND_UNIT = S(UTF("[s]"));
		KILOGRAM_UNIT = S(UTF("[kg]"));
		BIT_UNIT = S(UTF("[bit]"));
		JOULE_UNIT = S(UTF("[J]"));
		RADIAN_UNIT = S(UTF("[rad]"));
		METER_DEFINITION = S(UTF("(m=1)"));
		SECOND_DEFINITION = S(UTF("(s=1)"));
		KILOGRAM_DEFINITION = S(UTF("(kg=1)"));
		BIT_DEFINITION = S(UTF("(bit=1)"));
		RADIAN_DEFINITION = S(UTF("(rad=1)"));
		TRUE_DEFINITION = S(UTF("(true=1)"));
		FALSE_DEFINITION = S(UTF("(false=0)"));
		// -------------------------------------------------
		METER_PER_SECOND_UNIT = S(UTF("[m/s]"));
		METER_PER_SECOND_SQUARED_UNIT = S(UTF("[m/s²]"));
		// -------------------------------------------------
		TRUE_AND_FALSE_DEFINITION = S(UTF("(true=1, false=1)"));
		METER_AND_SECOND_DEFINITION = S(UTF("(m=1, s=1)"));
		METER_AND_KILOGRAM_AND_SECOND_DEFINITION = S(UTF("(m=1, kg=1, s=1)"));
		// -------------------------------------------------
		NORMAL_NMS_SYMBOL = S(UTF("N(μ,σ)"));
		NORMAL_N01_SYMBOL = S(UTF("N(0,1)"));
		UNIFORM_UAB_SYMBOL = S(UTF("U(a,b)"));
		UNIFORM_UDAB_SYMBOL = S(UTF("U{a,b}"));
		UNIFORM_U01_SYMBOL = S(UTF("U(0,1)"));
		BETA_XY_SYMBOL = S(UTF("B(x,y)"));
		LOG_BETA_XY_SYMBOL = S(UTF("lnB(x,y)"));
		INCOMPLETE_BETA_XAB_SYMBOL = S(UTF("B(x,a,b)"));
		REGULARIZED_INCOMPLETE_BETA_XAB_SYMBOL = S(UTF("I(x,a,b)"));
		GAMMA_S_SYMBOL = S(UTF("Γ(s)"));
		LOWER_GAMMA_SX_SYMBOL = S(UTF("γ(s,x)"));
		UPPER_GAMMA_SX_SYMBOL = S(UTF("Γ(s,x)"));
		REGULARIZED_GAMMA_P_SX_SYMBOL = S(UTF("P(s,x)"));
		REGULARIZED_GAMMA_Q_SX_SYMBOL = S(UTF("Q(s,x)"));
		LOG_GAMMA_S_SYMBOL = S(UTF("lnΓ(s)"));
		DIGAMMA_X_SYMBOL = S(UTF("ψ(x)"));
		EXPONENTIAL_INTEGRAL_X_SYMBOL = S(UTF("Ei(x)"));
		LOGARITHMIC_INTEGRAL_X_SYMBOL = S(UTF("li(x)"));
		LOGARITHMIC_INTEGRAL_2_SYMBOL = S(UTF("li(2)"));
		OFFSET_LOGARITHMIC_INTEGRAL_X_SYMBOL = S(UTF("Li(x)"));
		GAUSS_ERROR_X_SYMBOL = S(UTF("erf(x)"));
		INVERSE_GAUSS_ERROR_Y_SYMBOL = S(UTF("erf⁻¹(y)"));
		GAUSS_ERROR_COMPLEMENTARY_X_SYMBOL = S(UTF("erfc(x)"));
		INVERSE_GAUSS_ERROR_COMPLEMENTARY_Y_SYMBOL = S(UTF("erfc⁻¹(x)"));
		LAMBERT_W0_X_SYMBOL = S(UTF("W₀(x)"));
		LAMBERT_W_1_X_SYMBOL = S(UTF("W₋₁(x)"));
		PRIME_COUNTING_N_SYMBOL = S(UTF("π(n)"));
		// -------------------------------------------------
		PI_SYMBOL = S(UTF("π"));
		E_SYMBOL = S(UTF("e"));
		MASCHERONI_SYMBOL = S(UTF("γ"));
		GOLDEN_RATIO_SYMBOL = S(UTF("φ"));
		PLASTICS_SYMBOL = S(UTF("ρ"));
		EMBREE_TREFETHEN_SYMBOL = S(UTF("β*"));
		FEIGENBAUM_DELTA_SYMBOL = S(UTF("δ"));
		FEIGENBAUM_ALPHA_SYMBOL = S(UTF("α"));
		MEISSEL_MERTEENS_SYMBOL = S(UTF("M₁, B₁"));
		BRAUN_TWIN_PRIME_SYMBOL = S(UTF("B₂"));
		BRAUN_PRIME_QUADR_SYMBOL = S(UTF("B₄"));
		TWIN_PRIME_SYMBOL = S(UTF("∏₂"));
		BRUIJN_NEWMAN_SYMBOL = S(UTF("Λ"));
		CATALAN_SYMBOL = S(UTF("G"));
		LANDAU_RAMANUJAN_SYMBOL = S(UTF("b"));
		VISWANATH_SYMBOL = S(UTF("V"));
		LEGENDRE_SYMBOL = S(UTF("B"));
		RAMANUJAN_SOLDNER_SYMBOL = S(UTF("μ"));
		ERDOS_BORWEIN_SYMBOL = S(UTF("E"));
		BERNSTEIN_SYMBOL = S(UTF("β"));
		GAUSS_KUZMIN_WIRSING_SYMBOL = S(UTF("λ"));
		HAFNER_SARNAK_MCCURLEY_SYMBOL = S(UTF("σ"));
		GOLOMB_DICKMAN_SYMBOL = S(UTF("λ"));
		CAHEN_SYMBOL = S(UTF("C"));
		LENGYEL_SYMBOL = S(UTF("Λ"));
		APERY_SYMBOL = S(UTF("ζ(3)"));
		MILLS_SYMBOL = S(UTF("A"));
		BACKHOUSE_SYMBOL = S(UTF("B"));
		PORTER_SYMBOL = S(UTF("C"));
		NIVEN_SYMBOL = S(UTF("C"));
		SIERPINSKI_SYMBOL = S(UTF("K"));
		KHINCHIN_SYMBOL = S(UTF("K₀"));
		FRANSEN_ROBINSON_SYMBOL = S(UTF("F"));
		LANDAU_SYMBOL = S(UTF("L"));
		PARABOLIC_SYMBOL = S(UTF("P"));
		OMEGA_SYMBOL = S(UTF("Ω"));
		MRB_SYMBOL = S(UTF("S"));
		GOMPERTZ_SYMBOL = S(UTF("δ"));
		LIGHT_SPEED_SYMBOL = S(UTF("c"));
		GRAVITATIONAL_CONSTANT_SYMBOL = S(UTF("G"));
		GRAVIT_ACC_EARTH_SYMBOL = S(UTF("g"));
		PLANCK_CONSTANT_SYMBOL = S(UTF("h"));
		PLANCK_CONSTANT_REDUCED_SYMBOL = S(UTF("ħ"));
		PLANCK_LENGTH_SYMBOL = S(UTF("lᵖ"));
		PLANCK_MASS_SYMBOL = S(UTF("mᵖ"));
		PLANCK_TIME_SYMBOL = S(UTF("tᵖ"));
		LIGHT_YEAR_SYMBOL = S(UTF("ly"));
		ASTRONOMICAL_UNIT_SYMBOL = S(UTF("au, AU"));
		PARSEC_SYMBOL = S(UTF("pc"));
		KILOPARSEC_SYMBOL = S(UTF("kpc"));
		EARTH_MASS_SYMBOL = S(UTF("M⊕"));
		EARTH_RADIUS_EQUATORIAL_SYMBOL = S(UTF("Rª⊕"));
		EARTH_RADIUS_POLAR_SYMBOL = S(UTF("Rᵇ⊕"));
		EARTH_RADIUS_MEAN_SYMBOL = S(UTF("R⊕"));
		SOLAR_RADIUS_SYMBOL = S(UTF("R☉"));
		SOLAR_MASS_SYMBOL = S(UTF("M☉"));
		// -------------------------------------------------
		SUM_SYMBOL = S(UTF("Σ"));
		PROD_SYMBOL = S(UTF("∏"));
		INT_SYMBOL = S(UTF("∫"));
		DER_SYMBOL = S(UTF("∂"));
		DER_LEFT_SYMBOL = S(UTF("∂-"));
		DER_RIGHT_SYMBOL = S(UTF("∂+"));
		DERN_SYMBOL = S(UTF("∂ⁿ"));
		FORW_DIFF_SYMBOL = S(UTF("∆"));
		BACKW_DIFF_SYMBOL = S(UTF("∇"));
		// -------------------------------------------------
		SOLVE_SYMBOL = S(UTF("f(x)=0"));
		AND_SYMBOL = S(UTF("AND"));
		NAND_SYMBOL = S(UTF("NAND"));
		OR_SYMBOL = S(UTF("OR"));
		NOR_SYMBOL = S(UTF("NOR"));
		XOR_SYMBOL = S(UTF("XOR"));
		IMP_SYMBOL = S(UTF("IMP"));
		CIMP_SYMBOL = S(UTF("CIMP"));
		NIMP_SYMBOL = S(UTF("NIMP"));
		CNIMP_SYMBOL = S(UTF("CNIMP"));
		EQV_SYMBOL = S(UTF("EQV"));
		// -------------------------------------------------
		RANDOM_VARIABLE_INT1_SYMBOL = S(UTF("U{-10¹,10¹}"));
		RANDOM_VARIABLE_INT2_SYMBOL = S(UTF("U{-10²,10²}"));
		RANDOM_VARIABLE_INT3_SYMBOL = S(UTF("U{-10³,10³}"));
		RANDOM_VARIABLE_INT4_SYMBOL = S(UTF("U{-10⁴,10⁴}"));
		RANDOM_VARIABLE_INT5_SYMBOL = S(UTF("U{-10⁵,10⁵}"));
		RANDOM_VARIABLE_INT6_SYMBOL = S(UTF("U{-10⁶,10⁶}"));
		RANDOM_VARIABLE_INT7_SYMBOL = S(UTF("U{-10⁷,10⁷}"));
		RANDOM_VARIABLE_INT8_SYMBOL = S(UTF("U{-10⁸,10⁸}"));
		RANDOM_VARIABLE_INT9_SYMBOL = S(UTF("U{-10⁹,10⁹}"));

		RANDOM_VARIABLE_NAT0_1_SYMBOL = S(UTF("U{0,10¹}"));
		RANDOM_VARIABLE_NAT0_2_SYMBOL = S(UTF("U{0,10²}"));
		RANDOM_VARIABLE_NAT0_3_SYMBOL = S(UTF("U{0,10³}"));
		RANDOM_VARIABLE_NAT0_4_SYMBOL = S(UTF("U{0,10⁴}"));
		RANDOM_VARIABLE_NAT0_5_SYMBOL = S(UTF("U{0,10⁵}"));
		RANDOM_VARIABLE_NAT0_6_SYMBOL = S(UTF("U{0,10⁶}"));
		RANDOM_VARIABLE_NAT0_7_SYMBOL = S(UTF("U{0,10⁷}"));
		RANDOM_VARIABLE_NAT0_8_SYMBOL = S(UTF("U{0,10⁸}"));
		RANDOM_VARIABLE_NAT0_9_SYMBOL = S(UTF("U{0,10⁹}"));

		RANDOM_VARIABLE_NAT1_1_SYMBOL = S(UTF("U{1,10¹}"));
		RANDOM_VARIABLE_NAT1_2_SYMBOL = S(UTF("U{1,10²}"));
		RANDOM_VARIABLE_NAT1_3_SYMBOL = S(UTF("U{1,10³}"));
		RANDOM_VARIABLE_NAT1_4_SYMBOL = S(UTF("U{1,10⁴}"));
		RANDOM_VARIABLE_NAT1_5_SYMBOL = S(UTF("U{1,10⁵}"));
		RANDOM_VARIABLE_NAT1_6_SYMBOL = S(UTF("U{1,10⁶}"));
		RANDOM_VARIABLE_NAT1_7_SYMBOL = S(UTF("U{1,10⁷}"));
		RANDOM_VARIABLE_NAT1_8_SYMBOL = S(UTF("U{1,10⁸}"));
		RANDOM_VARIABLE_NAT1_9_SYMBOL = S(UTF("U{1,10⁹}"));
		// -------------------------------------------------
		UNIT_PERC_SYMBOL = S(UTF("= 0.01"));
		UNIT_PERM_SYMBOL = S(UTF("= 0.001"));
		UNIT_YOTTA_SYMBOL = S(UTF("= 10²⁴"));
		UNIT_ZETTA_SYMBOL = S(UTF("= 10²¹"));
		UNIT_EXA_SYMBOL = S(UTF("= 10¹⁸"));
		UNIT_PETA_SYMBOL = S(UTF("= 10¹⁵"));
		UNIT_TERA_SYMBOL = S(UTF("= 10¹²"));
		UNIT_GIGA_SYMBOL = S(UTF("= 10⁹"));
		UNIT_MEGA_SYMBOL = S(UTF("= 10⁶"));
		UNIT_KILO_SYMBOL = S(UTF("= 10³"));
		UNIT_HECTO_SYMBOL = S(UTF("= 10²"));
		UNIT_DECA_SYMBOL = S(UTF("= 10"));
		UNIT_DECI_SYMBOL = S(UTF("= 10⁻¹"));
		UNIT_CENTI_SYMBOL = S(UTF("= 10⁻²"));
		UNIT_MILLI_SYMBOL = S(UTF("= 10⁻³"));
		UNIT_MICRO_SYMBOL = S(UTF("= 10⁻⁶"));
		UNIT_NANO_SYMBOL = S(UTF("= 10⁻⁹"));
		UNIT_PICO_SYMBOL = S(UTF("= 10⁻¹²"));
		UNIT_FEMTO_SYMBOL = S(UTF("= 10⁻¹⁵"));
		UNIT_ATTO_SYMBOL = S(UTF("= 10⁻¹⁸"));
		UNIT_ZEPTO_SYMBOL = S(UTF("= 10⁻²¹"));
		UNIT_YOCTO_SYMBOL = S(UTF("= 10⁻²⁴"));
		// -------------------------------------------------
		PARSER_SYMBOL_NUMBER_INTEGER_EXAMPLE = S(UTF("1, -2"));
		PARSER_SYMBOL_NUMBER_DECIMAL_EXAMPLE = S(UTF("0.2, -0.3, 1.2"));
		PARSER_SYMBOL_NUMBER_LEADING_ZERO_EXAMPLE = S(UTF("001, -002.1"));
		PARSER_SYMBOL_NUMBER_SCI_NOTATION_EXAMPLE = S(UTF("1.2e-10, 1.2e+10, 2.3E10"));
		PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO_EXAMPLE = S(UTF(".2, -.212"));
		PARSER_SYMBOL_NUMBER_FRACTIONS_EXAMPLE = S(UTF("1_2, 2_1_3, -14_3"));
		PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS_EXAMPLE = S(UTF(
			"b1.111, b2.1001, b3.12021, -b16.af12, h.af1, -b.1001, o.0127"));
		// -------------------------------------------------
		SEPARATOR = S(UTF(" - "));
	);

} // namespace org::mariuszgromada::math::mxparser::stringutils
