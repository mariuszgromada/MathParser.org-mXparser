/*
 * @(#)StringInvariant.hpp        6.1.0    2024-10-06
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_STRINGINVARIANT_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_STRINGINVARIANT_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"

namespace org::mariuszgromada::math::mxparser::stringutils {

	class API_VISIBLE StringInvariant {
	public:
		StringInvariant() = delete;

		static StringPtr EMPTY;
		static StringPtr ARGUMENT_DEFINITION_EXAMPLES;
		static StringPtr CONSTANT_DEFINITION_EXAMPLES;
		static StringPtr ARGUMENT_NAME_EXAMPLES;
		static StringPtr CONSTANT_NAME_EXAMPLES;
		static StringPtr FUNCTION_NAME_EXAMPLES;
		static StringPtr FUNCTION_DEFINITION_EXAMPLES;
		static StringPtr RECURSIVE_ARGUMENT_DEFINITION_EXAMPLES;
		static StringPtr NEW_LINE;
		static StringPtr INTERNAL;
		static StringPtr BODY_EXTENDED;
		static StringPtr BODY_EXTENDED_VARIADIC;
		static StringPtr SPACE;
		static StringPtr TAB_AS_SPACES;
		static StringPtr APOSTROPHE;
		static StringPtr QUOTE;
		static StringPtr LEFT_SQUARE_BRACKET;
		static StringPtr RIGHT_SQUARE_BRACKET;
		static StringPtr RIGHT_SQUARE_BRACKET_SPACE;
		static StringPtr LEFT_BRACKET;
		static StringPtr RIGHT_BRACKET;
		static StringPtr LEFT_CURLY_BRACKET;
		static StringPtr RIGHT_CURLY_BRACKET;
		static StringPtr EQUAL;
		static StringPtr SPACE_EQUAL_SPACE;
		static StringPtr COLON;
		static StringPtr COLON_SPACE;
		static StringPtr SEMICOLON;
		static StringPtr SEMICOLON_SPACE;
		static StringPtr COMMA;
		static StringPtr COMMA_SPACE;
		static StringPtr DOT;
		static StringPtr DOT_SPACE;
		static StringPtr DOTS;
		static StringPtr DOTS_SPACE;
		static StringPtr AND_CONTINUE;
		static StringPtr LOWER;
		static StringPtr GREATER;
		static StringPtr RIGHT_ARROW;
		static StringPtr LONG_RIGHT_ARROW;
		static StringPtr LONG_RIGHT_ARROW_SPACE;
		static StringPtr RIGHT_ARROW_SPACE;
		// -------------------------------------------------
		static StringPtr METER_UNIT;
		static StringPtr SQUARE_METER_UNIT;
		static StringPtr CUBIC_METER_UNIT;
		static StringPtr SECOND_UNIT;
		static StringPtr KILOGRAM_UNIT;
		static StringPtr BIT_UNIT;
		static StringPtr JOULE_UNIT;
		static StringPtr RADIAN_UNIT;
		static StringPtr METER_DEFINITION;
		static StringPtr SECOND_DEFINITION;
		static StringPtr KILOGRAM_DEFINITION;
		static StringPtr BIT_DEFINITION;
		static StringPtr RADIAN_DEFINITION;
		static StringPtr TRUE_DEFINITION;
		static StringPtr FALSE_DEFINITION;
		// -------------------------------------------------
		static StringPtr METER_PER_SECOND_UNIT;
		static StringPtr METER_PER_SECOND_SQUARED_UNIT;
		// -------------------------------------------------
		static StringPtr TRUE_AND_FALSE_DEFINITION;
		static StringPtr METER_AND_SECOND_DEFINITION;
		static StringPtr METER_AND_KILOGRAM_AND_SECOND_DEFINITION;
		// -------------------------------------------------
		static StringPtr NORMAL_NMS_SYMBOL;
		static StringPtr NORMAL_N01_SYMBOL;
		static StringPtr UNIFORM_UAB_SYMBOL;
		static StringPtr UNIFORM_UDAB_SYMBOL;
		static StringPtr UNIFORM_U01_SYMBOL;
		static StringPtr BETA_XY_SYMBOL;
		static StringPtr LOG_BETA_XY_SYMBOL;
		static StringPtr INCOMPLETE_BETA_XAB_SYMBOL;
		static StringPtr REGULARIZED_INCOMPLETE_BETA_XAB_SYMBOL;
		static StringPtr GAMMA_S_SYMBOL;
		static StringPtr LOWER_GAMMA_SX_SYMBOL;
		static StringPtr UPPER_GAMMA_SX_SYMBOL;
		static StringPtr REGULARIZED_GAMMA_P_SX_SYMBOL;
		static StringPtr REGULARIZED_GAMMA_Q_SX_SYMBOL;
		static StringPtr LOG_GAMMA_S_SYMBOL;
		static StringPtr DIGAMMA_X_SYMBOL;
		static StringPtr EXPONENTIAL_INTEGRAL_X_SYMBOL;
		static StringPtr LOGARITHMIC_INTEGRAL_X_SYMBOL;
		static StringPtr LOGARITHMIC_INTEGRAL_2_SYMBOL;
		static StringPtr OFFSET_LOGARITHMIC_INTEGRAL_X_SYMBOL;
		static StringPtr GAUSS_ERROR_X_SYMBOL;
		static StringPtr INVERSE_GAUSS_ERROR_Y_SYMBOL;
		static StringPtr GAUSS_ERROR_COMPLEMENTARY_X_SYMBOL;
		static StringPtr INVERSE_GAUSS_ERROR_COMPLEMENTARY_Y_SYMBOL;
		static StringPtr LAMBERT_W0_X_SYMBOL;
		static StringPtr LAMBERT_W_1_X_SYMBOL;
		static StringPtr PRIME_COUNTING_N_SYMBOL;
		// -------------------------------------------------
		static StringPtr PI_SYMBOL;
		static StringPtr E_SYMBOL;
		static StringPtr MASCHERONI_SYMBOL;
		static StringPtr GOLDEN_RATIO_SYMBOL;
		static StringPtr PLASTICS_SYMBOL;
		static StringPtr EMBREE_TREFETHEN_SYMBOL;
		static StringPtr FEIGENBAUM_DELTA_SYMBOL;
		static StringPtr FEIGENBAUM_ALPHA_SYMBOL;
		static StringPtr MEISSEL_MERTEENS_SYMBOL;
		static StringPtr BRAUN_TWIN_PRIME_SYMBOL;
		static StringPtr BRAUN_PRIME_QUADR_SYMBOL;
		static StringPtr TWIN_PRIME_SYMBOL;
		static StringPtr BRUIJN_NEWMAN_SYMBOL;
		static StringPtr CATALAN_SYMBOL;
		static StringPtr LANDAU_RAMANUJAN_SYMBOL;
		static StringPtr VISWANATH_SYMBOL;
		static StringPtr LEGENDRE_SYMBOL;
		static StringPtr RAMANUJAN_SOLDNER_SYMBOL;
		static StringPtr ERDOS_BORWEIN_SYMBOL;
		static StringPtr BERNSTEIN_SYMBOL;
		static StringPtr GAUSS_KUZMIN_WIRSING_SYMBOL;
		static StringPtr HAFNER_SARNAK_MCCURLEY_SYMBOL;
		static StringPtr GOLOMB_DICKMAN_SYMBOL;
		static StringPtr CAHEN_SYMBOL;
		static StringPtr LENGYEL_SYMBOL;
		static StringPtr APERY_SYMBOL;
		static StringPtr MILLS_SYMBOL;
		static StringPtr BACKHOUSE_SYMBOL;
		static StringPtr PORTER_SYMBOL;
		static StringPtr NIVEN_SYMBOL;
		static StringPtr SIERPINSKI_SYMBOL;
		static StringPtr KHINCHIN_SYMBOL;
		static StringPtr FRANSEN_ROBINSON_SYMBOL;
		static StringPtr LANDAU_SYMBOL;
		static StringPtr PARABOLIC_SYMBOL;
		static StringPtr OMEGA_SYMBOL;
		static StringPtr MRB_SYMBOL;
		static StringPtr GOMPERTZ_SYMBOL;
		static StringPtr LIGHT_SPEED_SYMBOL;
		static StringPtr GRAVITATIONAL_CONSTANT_SYMBOL;
		static StringPtr GRAVIT_ACC_EARTH_SYMBOL;
		static StringPtr PLANCK_CONSTANT_SYMBOL;
		static StringPtr PLANCK_CONSTANT_REDUCED_SYMBOL;
		static StringPtr PLANCK_LENGTH_SYMBOL;
		static StringPtr PLANCK_MASS_SYMBOL;
		static StringPtr PLANCK_TIME_SYMBOL;
		static StringPtr LIGHT_YEAR_SYMBOL;
		static StringPtr ASTRONOMICAL_UNIT_SYMBOL;
		static StringPtr PARSEC_SYMBOL;
		static StringPtr KILOPARSEC_SYMBOL;
		static StringPtr EARTH_MASS_SYMBOL;
		static StringPtr EARTH_RADIUS_EQUATORIAL_SYMBOL;
		static StringPtr EARTH_RADIUS_POLAR_SYMBOL;
		static StringPtr EARTH_RADIUS_MEAN_SYMBOL;
		static StringPtr SOLAR_RADIUS_SYMBOL;
		static StringPtr SOLAR_MASS_SYMBOL;
		// -------------------------------------------------
		static StringPtr SUM_SYMBOL;
		static StringPtr PROD_SYMBOL;
		static StringPtr INT_SYMBOL;
		static StringPtr DER_SYMBOL;
		static StringPtr DER_LEFT_SYMBOL;
		static StringPtr DER_RIGHT_SYMBOL;
		static StringPtr DERN_SYMBOL;
		static StringPtr FORW_DIFF_SYMBOL;
		static StringPtr BACKW_DIFF_SYMBOL;
		// -------------------------------------------------
		static StringPtr SOLVE_SYMBOL;
		static StringPtr AND_SYMBOL;
		static StringPtr NAND_SYMBOL;
		static StringPtr OR_SYMBOL;
		static StringPtr NOR_SYMBOL;
		static StringPtr XOR_SYMBOL;
		static StringPtr IMP_SYMBOL;
		static StringPtr CIMP_SYMBOL;
		static StringPtr NIMP_SYMBOL;
		static StringPtr CNIMP_SYMBOL;
		static StringPtr EQV_SYMBOL;
		// -------------------------------------------------
		static StringPtr RANDOM_VARIABLE_INT1_SYMBOL;
		static StringPtr RANDOM_VARIABLE_INT2_SYMBOL;
		static StringPtr RANDOM_VARIABLE_INT3_SYMBOL;
		static StringPtr RANDOM_VARIABLE_INT4_SYMBOL;
		static StringPtr RANDOM_VARIABLE_INT5_SYMBOL;
		static StringPtr RANDOM_VARIABLE_INT6_SYMBOL;
		static StringPtr RANDOM_VARIABLE_INT7_SYMBOL;
		static StringPtr RANDOM_VARIABLE_INT8_SYMBOL;
		static StringPtr RANDOM_VARIABLE_INT9_SYMBOL;

		static StringPtr RANDOM_VARIABLE_NAT0_1_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT0_2_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT0_3_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT0_4_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT0_5_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT0_6_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT0_7_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT0_8_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT0_9_SYMBOL;

		static StringPtr RANDOM_VARIABLE_NAT1_1_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT1_2_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT1_3_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT1_4_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT1_5_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT1_6_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT1_7_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT1_8_SYMBOL;
		static StringPtr RANDOM_VARIABLE_NAT1_9_SYMBOL;
		// -------------------------------------------------
		static StringPtr UNIT_PERC_SYMBOL;
		static StringPtr UNIT_PERM_SYMBOL;
		static StringPtr UNIT_YOTTA_SYMBOL;
		static StringPtr UNIT_ZETTA_SYMBOL;
		static StringPtr UNIT_EXA_SYMBOL;
		static StringPtr UNIT_PETA_SYMBOL;
		static StringPtr UNIT_TERA_SYMBOL;
		static StringPtr UNIT_GIGA_SYMBOL;
		static StringPtr UNIT_MEGA_SYMBOL;
		static StringPtr UNIT_KILO_SYMBOL;
		static StringPtr UNIT_HECTO_SYMBOL;
		static StringPtr UNIT_DECA_SYMBOL;
		static StringPtr UNIT_DECI_SYMBOL;
		static StringPtr UNIT_CENTI_SYMBOL;
		static StringPtr UNIT_MILLI_SYMBOL;
		static StringPtr UNIT_MICRO_SYMBOL;
		static StringPtr UNIT_NANO_SYMBOL;
		static StringPtr UNIT_PICO_SYMBOL;
		static StringPtr UNIT_FEMTO_SYMBOL;
		static StringPtr UNIT_ATTO_SYMBOL;
		static StringPtr UNIT_ZEPTO_SYMBOL;
		static StringPtr UNIT_YOCTO_SYMBOL;
		// -------------------------------------------------
		static StringPtr PARSER_SYMBOL_NUMBER_INTEGER_EXAMPLE;
		static StringPtr PARSER_SYMBOL_NUMBER_DECIMAL_EXAMPLE;
		static StringPtr PARSER_SYMBOL_NUMBER_LEADING_ZERO_EXAMPLE;
		static StringPtr PARSER_SYMBOL_NUMBER_SCI_NOTATION_EXAMPLE;
		static StringPtr PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO_EXAMPLE;
		static StringPtr PARSER_SYMBOL_NUMBER_FRACTIONS_EXAMPLE;
		static StringPtr PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS_EXAMPLE;
		// -------------------------------------------------
		static StringPtr SEPARATOR;

		STATIC_VARS_INITI_H;
	};
} // namespace org::mariuszgromada::math::mxparser::stringutils

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_STRINGINVARIANT_H