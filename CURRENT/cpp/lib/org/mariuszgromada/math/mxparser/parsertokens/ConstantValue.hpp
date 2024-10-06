/*
 * @(#)ConstantValue.hpp        6.1.0    2024-10-06
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_CONSTANTVALUE_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_CONSTANTVALUE_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {

	class API_VISIBLE ConstantValue {
	public:
		ConstantValue() = delete;

		static constexpr int TYPE_ID = 9;
		static StringPtr TYPE_DESC ;

		/* Math Constants */
		static constexpr int PI_ID = 1;
		static constexpr int EULER_ID = 2;
		static constexpr int EULER_MASCHERONI_ID = 3;
		static constexpr int GOLDEN_RATIO_ID = 4;
		static constexpr int PLASTIC_ID = 5;
		static constexpr int EMBREE_TREFETHEN_ID = 6;
		static constexpr int FEIGENBAUM_DELTA_ID = 7;
		static constexpr int FEIGENBAUM_ALPHA_ID = 8;
		static constexpr int TWIN_PRIME_ID = 9;
		static constexpr int MEISSEL_MERTEENS_ID = 10;
		static constexpr int BRAUN_TWIN_PRIME_ID = 11;
		static constexpr int BRAUN_PRIME_QUADR_ID = 12;
		static constexpr int BRUIJN_NEWMAN_ID = 13;
		static constexpr int CATALAN_ID = 14;
		static constexpr int LANDAU_RAMANUJAN_ID = 15;
		static constexpr int VISWANATH_ID = 16;
		static constexpr int LEGENDRE_ID = 17;
		static constexpr int RAMANUJAN_SOLDNER_ID = 18;
		static constexpr int ERDOS_BORWEIN_ID = 19;
		static constexpr int BERNSTEIN_ID = 20;
		static constexpr int GAUSS_KUZMIN_WIRSING_ID = 21;
		static constexpr int HAFNER_SARNAK_MCCURLEY_ID = 22;
		static constexpr int GOLOMB_DICKMAN_ID = 23;
		static constexpr int CAHEN_ID = 24;
		static constexpr int LAPLACE_LIMIT_ID = 25;
		static constexpr int ALLADI_GRINSTEAD_ID = 26;
		static constexpr int LENGYEL_ID = 27;
		static constexpr int LEVY_ID = 28;
		static constexpr int APERY_ID = 29;
		static constexpr int MILLS_ID = 30;
		static constexpr int BACKHOUSE_ID = 31;
		static constexpr int PORTER_ID = 32;
		static constexpr int LIEB_QUARE_ICE_ID = 33;
		static constexpr int NIVEN_ID = 34;
		static constexpr int SIERPINSKI_ID = 35;
		static constexpr int KHINCHIN_ID = 36;
		static constexpr int FRANSEN_ROBINSON_ID = 37;
		static constexpr int LANDAU_ID = 38;
		static constexpr int PARABOLIC_ID = 39;
		static constexpr int OMEGA_ID = 40;
		static constexpr int MRB_ID = 41;
		static constexpr int LI2_ID = 42;
		static constexpr int GOMPERTZ_ID = 43;
		/* Physical Constants */
		static constexpr int LIGHT_SPEED_ID = 101;
		static constexpr int GRAVITATIONAL_CONSTANT_ID = 102;
		static constexpr int GRAVIT_ACC_EARTH_ID = 103;
		static constexpr int PLANCK_CONSTANT_ID = 104;
		static constexpr int PLANCK_CONSTANT_REDUCED_ID = 105;
		static constexpr int PLANCK_LENGTH_ID = 106;
		static constexpr int PLANCK_MASS_ID = 107;
		static constexpr int PLANCK_TIME_ID = 108;
		/* Astronomical Constants */
		static constexpr int LIGHT_YEAR_ID = 201;
		static constexpr int ASTRONOMICAL_UNIT_ID = 202;
		static constexpr int PARSEC_ID = 203;
		static constexpr int KILOPARSEC_ID = 204;
		static constexpr int EARTH_RADIUS_EQUATORIAL_ID = 205;
		static constexpr int EARTH_RADIUS_POLAR_ID = 206;
		static constexpr int EARTH_RADIUS_MEAN_ID = 207;
		static constexpr int EARTH_MASS_ID = 208;
		static constexpr int EARTH_SEMI_MAJOR_AXIS_ID = 209;
		static constexpr int MOON_RADIUS_MEAN_ID = 210;
		static constexpr int MOON_MASS_ID = 211;
		static constexpr int MONN_SEMI_MAJOR_AXIS_ID = 212;
		static constexpr int SOLAR_RADIUS_ID = 213;
		static constexpr int SOLAR_MASS_ID = 214;
		static constexpr int MERCURY_RADIUS_MEAN_ID = 215;
		static constexpr int MERCURY_MASS_ID = 216;
		static constexpr int MERCURY_SEMI_MAJOR_AXIS_ID = 217;
		static constexpr int VENUS_RADIUS_MEAN_ID = 218;
		static constexpr int VENUS_MASS_ID = 219;
		static constexpr int VENUS_SEMI_MAJOR_AXIS_ID = 220;
		static constexpr int MARS_RADIUS_MEAN_ID = 221;
		static constexpr int MARS_MASS_ID = 222;
		static constexpr int MARS_SEMI_MAJOR_AXIS_ID = 223;
		static constexpr int JUPITER_RADIUS_MEAN_ID = 224;
		static constexpr int JUPITER_MASS_ID = 225;
		static constexpr int JUPITER_SEMI_MAJOR_AXIS_ID = 226;
		static constexpr int SATURN_RADIUS_MEAN_ID = 227;
		static constexpr int SATURN_MASS_ID = 228;
		static constexpr int SATURN_SEMI_MAJOR_AXIS_ID = 229;
		static constexpr int URANUS_RADIUS_MEAN_ID = 230;
		static constexpr int URANUS_MASS_ID = 231;
		static constexpr int URANUS_SEMI_MAJOR_AXIS_ID = 232;
		static constexpr int NEPTUNE_RADIUS_MEAN_ID = 233;
		static constexpr int NEPTUNE_MASS_ID = 234;
		static constexpr int NEPTUNE_SEMI_MAJOR_AXIS_ID = 235;
		/* boolean values */
		static constexpr int TRUE_ID = 301;
		static constexpr int FALSE_ID = 302;
		/* automatic values */
		static constexpr int NPAR_ID = 303;
		/* other values */
		static constexpr int NAN_ID = 999;
		static constexpr int NaN = -1;

		/*
		 * ConstantValue - tokens key words.
		 */
		static StringPtr PI_STR ;
		static StringPtr PI_STR_UNI_1 ;
		static StringPtr PI_STR_UNI_2 ;
		static StringPtr EULER_STR ;
		static StringPtr EULER_STR_UNI_1 ;
		static StringPtr EULER_STR_UNI_2 ;
		static StringPtr EULER_MASCHERONI_STR ;
		static StringPtr GOLDEN_RATIO_STR ;
		static StringPtr PLASTIC_STR ;
		static StringPtr EMBREE_TREFETHEN_STR ;
		static StringPtr FEIGENBAUM_DELTA_STR ;
		static StringPtr FEIGENBAUM_ALPHA_STR ;
		static StringPtr TWIN_PRIME_STR ;
		static StringPtr MEISSEL_MERTEENS_STR ;
		static StringPtr BRAUN_TWIN_PRIME_STR ;
		static StringPtr BRAUN_PRIME_QUADR_STR ;
		static StringPtr BRUIJN_NEWMAN_STR ;
		static StringPtr CATALAN_STR ;
		static StringPtr LANDAU_RAMANUJAN_STR ;
		static StringPtr VISWANATH_STR ;
		static StringPtr LEGENDRE_STR ;
		static StringPtr RAMANUJAN_SOLDNER_STR ;
		static StringPtr ERDOS_BORWEIN_STR ;
		static StringPtr BERNSTEIN_STR ;
		static StringPtr GAUSS_KUZMIN_WIRSING_STR ;
		static StringPtr HAFNER_SARNAK_MCCURLEY_STR ;
		static StringPtr GOLOMB_DICKMAN_STR ;
		static StringPtr CAHEN_STR ;
		static StringPtr LAPLACE_LIMIT_STR ;
		static StringPtr ALLADI_GRINSTEAD_STR ;
		static StringPtr LENGYEL_STR ;
		static StringPtr LEVY_STR ;
		static StringPtr APERY_STR ;
		static StringPtr MILLS_STR ;
		static StringPtr BACKHOUSE_STR ;
		static StringPtr PORTER_STR ;
		static StringPtr LIEB_QUARE_ICE_STR ;
		static StringPtr NIVEN_STR ;
		static StringPtr SIERPINSKI_STR ;
		static StringPtr KHINCHIN_STR ;
		static StringPtr FRANSEN_ROBINSON_STR ;
		static StringPtr LANDAU_STR ;
		static StringPtr PARABOLIC_STR ;
		static StringPtr OMEGA_STR ;
		static StringPtr MRB_STR ;
		static StringPtr LI2_STR ;
		static StringPtr GOMPERTZ_STR ;
		/* Physical Constants */
		static StringPtr LIGHT_SPEED_STR ;
		static StringPtr GRAVITATIONAL_CONSTANT_STR ;
		static StringPtr GRAVIT_ACC_EARTH_STR ;
		static StringPtr PLANCK_CONSTANT_STR ;
		static StringPtr PLANCK_CONSTANT_REDUCED_STR ;
		static StringPtr PLANCK_LENGTH_STR ;
		static StringPtr PLANCK_MASS_STR ;
		static StringPtr PLANCK_TIME_STR ;
		/* AstronomicalConstants */
		static StringPtr LIGHT_YEAR_STR ;
		static StringPtr ASTRONOMICAL_UNIT_STR ;
		static StringPtr PARSEC_STR ;
		static StringPtr KILOPARSEC_STR ;
		static StringPtr EARTH_RADIUS_EQUATORIAL_STR ;
		static StringPtr EARTH_RADIUS_POLAR_STR ;
		static StringPtr EARTH_RADIUS_MEAN_STR ;
		static StringPtr EARTH_MASS_STR ;
		static StringPtr EARTH_SEMI_MAJOR_AXIS_STR ;
		static StringPtr MOON_RADIUS_MEAN_STR ;
		static StringPtr MOON_MASS_STR ;
		static StringPtr MONN_SEMI_MAJOR_AXIS_STR ;
		static StringPtr SOLAR_RADIUS_STR ;
		static StringPtr SOLAR_MASS_STR ;
		static StringPtr MERCURY_RADIUS_MEAN_STR ;
		static StringPtr MERCURY_MASS_STR ;
		static StringPtr MERCURY_SEMI_MAJOR_AXIS_STR ;
		static StringPtr VENUS_RADIUS_MEAN_STR ;
		static StringPtr VENUS_MASS_STR ;
		static StringPtr VENUS_SEMI_MAJOR_AXIS_STR ;
		static StringPtr MARS_RADIUS_MEAN_STR ;
		static StringPtr MARS_MASS_STR ;
		static StringPtr MARS_SEMI_MAJOR_AXIS_STR ;
		static StringPtr JUPITER_RADIUS_MEAN_STR ;
		static StringPtr JUPITER_MASS_STR ;
		static StringPtr JUPITER_SEMI_MAJOR_AXIS_STR ;
		static StringPtr SATURN_RADIUS_MEAN_STR ;
		static StringPtr SATURN_MASS_STR ;
		static StringPtr SATURN_SEMI_MAJOR_AXIS_STR ;
		static StringPtr URANUS_RADIUS_MEAN_STR ;
		static StringPtr URANUS_MASS_STR ;
		static StringPtr URANUS_SEMI_MAJOR_AXIS_STR ;
		static StringPtr NEPTUNE_RADIUS_MEAN_STR ;
		static StringPtr NEPTUNE_MASS_STR ;
		static StringPtr NEPTUNE_SEMI_MAJOR_AXIS_STR ;
		/* boolean values */
		static StringPtr TRUE_STR ;
		static StringPtr FALSE_STR ;
		/* automatic values */
		static StringPtr NPAR_STR ;
		/* other values */
		static StringPtr NAN_STR ;
		/*
		 * ConstantValue - syntax.
		 */
		static StringPtr PI_SYN ;
		static StringPtr PI_SYN_UNI_1 ;
		static StringPtr PI_SYN_UNI_2 ;
		static StringPtr EULER_SYN ;
		static StringPtr EULER_SYN_UNI_1 ;
		static StringPtr EULER_SYN_UNI_2 ;
		static StringPtr EULER_MASCHERONI_SYN ;
		static StringPtr GOLDEN_RATIO_SYN ;
		static StringPtr PLASTIC_SYN ;
		static StringPtr EMBREE_TREFETHEN_SYN ;
		static StringPtr FEIGENBAUM_DELTA_SYN ;
		static StringPtr FEIGENBAUM_ALPHA_SYN ;
		static StringPtr TWIN_PRIME_SYN ;
		static StringPtr MEISSEL_MERTEENS_SYN ;
		static StringPtr BRAUN_TWIN_PRIME_SYN ;
		static StringPtr BRAUN_PRIME_QUADR_SYN ;
		static StringPtr BRUIJN_NEWMAN_SYN ;
		static StringPtr CATALAN_SYN ;
		static StringPtr LANDAU_RAMANUJAN_SYN ;
		static StringPtr VISWANATH_SYN ;
		static StringPtr LEGENDRE_SYN ;
		static StringPtr RAMANUJAN_SOLDNER_SYN ;
		static StringPtr ERDOS_BORWEIN_SYN ;
		static StringPtr BERNSTEIN_SYN ;
		static StringPtr GAUSS_KUZMIN_WIRSING_SYN ;
		static StringPtr HAFNER_SARNAK_MCCURLEY_SYN ;
		static StringPtr GOLOMB_DICKMAN_SYN ;
		static StringPtr CAHEN_SYN ;
		static StringPtr LAPLACE_LIMIT_SYN ;
		static StringPtr ALLADI_GRINSTEAD_SYN ;
		static StringPtr LENGYEL_SYN ;
		static StringPtr LEVY_SYN ;
		static StringPtr APERY_SYN ;
		static StringPtr MILLS_SYN ;
		static StringPtr BACKHOUSE_SYN ;
		static StringPtr PORTER_SYN ;
		static StringPtr LIEB_QUARE_ICE_SYN ;
		static StringPtr NIVEN_SYN ;
		static StringPtr SIERPINSKI_SYN ;
		static StringPtr KHINCHIN_SYN ;
		static StringPtr FRANSEN_ROBINSON_SYN ;
		static StringPtr LANDAU_SYN ;
		static StringPtr PARABOLIC_SYN ;
		static StringPtr OMEGA_SYN ;
		static StringPtr MRB_SYN ;
		static StringPtr LI2_SYN ;
		static StringPtr GOMPERTZ_SYN ;
		/* Physical Constants */
		static StringPtr LIGHT_SPEED_SYN ;
		static StringPtr GRAVITATIONAL_CONSTANT_SYN ;
		static StringPtr GRAVIT_ACC_EARTH_SYN ;
		static StringPtr PLANCK_CONSTANT_SYN ;
		static StringPtr PLANCK_CONSTANT_REDUCED_SYN ;
		static StringPtr PLANCK_LENGTH_SYN ;
		static StringPtr PLANCK_MASS_SYN ;
		static StringPtr PLANCK_TIME_SYN ;
		/* AstronomicalConstants */
		static StringPtr LIGHT_YEAR_SYN ;
		static StringPtr ASTRONOMICAL_UNIT_SYN ;
		static StringPtr PARSEC_SYN ;
		static StringPtr KILOPARSEC_SYN ;
		static StringPtr EARTH_RADIUS_EQUATORIAL_SYN ;
		static StringPtr EARTH_RADIUS_POLAR_SYN ;
		static StringPtr EARTH_RADIUS_MEAN_SYN ;
		static StringPtr EARTH_MASS_SYN ;
		static StringPtr EARTH_SEMI_MAJOR_AXIS_SYN ;
		static StringPtr MOON_RADIUS_MEAN_SYN ;
		static StringPtr MOON_MASS_SYN ;
		static StringPtr MONN_SEMI_MAJOR_AXIS_SYN ;
		static StringPtr SOLAR_RADIUS_SYN ;
		static StringPtr SOLAR_MASS_SYN ;
		static StringPtr MERCURY_RADIUS_MEAN_SYN ;
		static StringPtr MERCURY_MASS_SYN ;
		static StringPtr MERCURY_SEMI_MAJOR_AXIS_SYN ;
		static StringPtr VENUS_RADIUS_MEAN_SYN ;
		static StringPtr VENUS_MASS_SYN ;
		static StringPtr VENUS_SEMI_MAJOR_AXIS_SYN ;
		static StringPtr MARS_RADIUS_MEAN_SYN ;
		static StringPtr MARS_MASS_SYN ;
		static StringPtr MARS_SEMI_MAJOR_AXIS_SYN ;
		static StringPtr JUPITER_RADIUS_MEAN_SYN ;
		static StringPtr JUPITER_MASS_SYN ;
		static StringPtr JUPITER_SEMI_MAJOR_AXIS_SYN ;
		static StringPtr SATURN_RADIUS_MEAN_SYN ;
		static StringPtr SATURN_MASS_SYN ;
		static StringPtr SATURN_SEMI_MAJOR_AXIS_SYN ;
		static StringPtr URANUS_RADIUS_MEAN_SYN ;
		static StringPtr URANUS_MASS_SYN ;
		static StringPtr URANUS_SEMI_MAJOR_AXIS_SYN ;
		static StringPtr NEPTUNE_RADIUS_MEAN_SYN ;
		static StringPtr NEPTUNE_MASS_SYN ;
		static StringPtr NEPTUNE_SEMI_MAJOR_AXIS_SYN ;
		/* boolean values */
		static StringPtr TRUE_SYN ;
		static StringPtr FALSE_SYN ;
		/* automatic values */
		static StringPtr NPAR_SYN ;
		/* other values */
		static StringPtr NAN_SYN ;
		/*
		 * ConstantValue - tokens description.
		 */
		static StringPtr PI_DESC ;
		static StringPtr EULER_DESC ;
		static StringPtr EULER_MASCHERONI_DESC ;
		static StringPtr GOLDEN_RATIO_DESC ;
		static StringPtr PLASTIC_DESC ;
		static StringPtr EMBREE_TREFETHEN_DESC ;
		static StringPtr FEIGENBAUM_DELTA_DESC ;
		static StringPtr FEIGENBAUM_ALPHA_DESC ;
		static StringPtr TWIN_PRIME_DESC ;
		static StringPtr MEISSEL_MERTEENS_DESC ;
		static StringPtr BRAUN_TWIN_PRIME_DESC ;
		static StringPtr BRAUN_PRIME_QUADR_DESC ;
		static StringPtr BRUIJN_NEWMAN_DESC ;
		static StringPtr CATALAN_DESC ;
		static StringPtr LANDAU_RAMANUJAN_DESC ;
		static StringPtr VISWANATH_DESC ;
		static StringPtr LEGENDRE_DESC ;
		static StringPtr RAMANUJAN_SOLDNER_DESC ;
		static StringPtr ERDOS_BORWEIN_DESC ;
		static StringPtr BERNSTEIN_DESC ;
		static StringPtr GAUSS_KUZMIN_WIRSING_DESC ;
		static StringPtr HAFNER_SARNAK_MCCURLEY_DESC ;
		static StringPtr GOLOMB_DICKMAN_DESC ;
		static StringPtr CAHEN_DESC ;
		static StringPtr LAPLACE_LIMIT_DESC ;
		static StringPtr ALLADI_GRINSTEAD_DESC ;
		static StringPtr LENGYEL_DESC ;
		static StringPtr LEVY_DESC ;
		static StringPtr APERY_DESC ;
		static StringPtr MILLS_DESC ;
		static StringPtr BACKHOUSE_DESC ;
		static StringPtr PORTER_DESC ;
		static StringPtr LIEB_QUARE_ICE_DESC ;
		static StringPtr NIVEN_DESC ;
		static StringPtr SIERPINSKI_DESC ;
		static StringPtr KHINCHIN_DESC ;
		static StringPtr FRANSEN_ROBINSON_DESC ;
		static StringPtr LANDAU_DESC ;
		static StringPtr PARABOLIC_DESC ;
		static StringPtr OMEGA_DESC ;
		static StringPtr MRB_DESC ;
		static StringPtr LI2_DESC ;
		static StringPtr GOMPERTZ_DESC ;
		static StringPtr LIGHT_SPEED_DESC ;
		static StringPtr GRAVITATIONAL_CONSTANT_DESC ;
		static StringPtr GRAVIT_ACC_EARTH_DESC ;
		static StringPtr PLANCK_CONSTANT_DESC ;
		static StringPtr PLANCK_CONSTANT_REDUCED_DESC ;
		static StringPtr PLANCK_LENGTH_DESC ;
		static StringPtr PLANCK_MASS_DESC ;
		static StringPtr PLANCK_TIME_DESC ;
		static StringPtr LIGHT_YEAR_DESC ;
		static StringPtr ASTRONOMICAL_UNIT_DESC ;
		static StringPtr PARSEC_DESC ;
		static StringPtr KILOPARSEC_DESC ;
		static StringPtr EARTH_RADIUS_EQUATORIAL_DESC ;
		static StringPtr EARTH_RADIUS_POLAR_DESC ;
		static StringPtr EARTH_RADIUS_MEAN_DESC ;
		static StringPtr EARTH_MASS_DESC ;
		static StringPtr EARTH_SEMI_MAJOR_AXIS_DESC ;
		static StringPtr MOON_RADIUS_MEAN_DESC ;
		static StringPtr MOON_MASS_DESC ;
		static StringPtr MOON_SEMI_MAJOR_AXIS_DESC ;
		static StringPtr SOLAR_RADIUS_DESC ;
		static StringPtr SOLAR_MASS_DESC ;
		static StringPtr MERCURY_RADIUS_MEAN_DESC ;
		static StringPtr MERCURY_MASS_DESC ;
		static StringPtr MERCURY_SEMI_MAJOR_AXIS_DESC ;
		static StringPtr VENUS_RADIUS_MEAN_DESC ;
		static StringPtr VENUS_MASS_DESC ;
		static StringPtr VENUS_SEMI_MAJOR_AXIS_DESC ;
		static StringPtr MARS_RADIUS_MEAN_DESC ;
		static StringPtr MARS_MASS_DESC ;
		static StringPtr MARS_SEMI_MAJOR_AXIS_DESC ;
		static StringPtr JUPITER_RADIUS_MEAN_DESC ;
		static StringPtr JUPITER_MASS_DESC ;
		static StringPtr JUPITER_SEMI_MAJOR_AXIS_DESC ;
		static StringPtr SATURN_RADIUS_MEAN_DESC ;
		static StringPtr SATURN_MASS_DESC ;
		static StringPtr SATURN_SEMI_MAJOR_AXIS_DESC ;
		static StringPtr URANUS_RADIUS_MEAN_DESC ;
		static StringPtr URANUS_MASS_DESC ;
		static StringPtr URANUS_SEMI_MAJOR_AXIS_DESC ;
		static StringPtr NEPTUNE_RADIUS_MEAN_DESC ;
		static StringPtr NEPTUNE_MASS_DESC ;
		static StringPtr NEPTUNE_SEMI_MAJOR_AXIS_DESC ;
		static StringPtr TRUE_DESC ;
		static StringPtr FALSE_DESC ;
		static StringPtr NPAR_DESC ;
		static StringPtr NAN_DESC ;
		/*
		 * ConstantValue - since.
		 */
		static StringPtr PI_SINCE ;
		static StringPtr PI_SINCE_UNI_1 ;
		static StringPtr PI_SINCE_UNI_2 ;
		static StringPtr EULER_SINCE ;
		static StringPtr EULER_SINCE_UNI_1 ;
		static StringPtr EULER_SINCE_UNI_2 ;
		static StringPtr EULER_MASCHERONI_SINCE ;
		static StringPtr GOLDEN_RATIO_SINCE ;
		static StringPtr PLASTIC_SINCE ;
		static StringPtr EMBREE_TREFETHEN_SINCE ;
		static StringPtr FEIGENBAUM_DELTA_SINCE ;
		static StringPtr FEIGENBAUM_ALPHA_SINCE ;
		static StringPtr TWIN_PRIME_SINCE ;
		static StringPtr MEISSEL_MERTEENS_SINCE ;
		static StringPtr BRAUN_TWIN_PRIME_SINCE ;
		static StringPtr BRAUN_PRIME_QUADR_SINCE ;
		static StringPtr BRUIJN_NEWMAN_SINCE ;
		static StringPtr CATALAN_SINCE ;
		static StringPtr LANDAU_RAMANUJAN_SINCE ;
		static StringPtr VISWANATH_SINCE ;
		static StringPtr LEGENDRE_SINCE ;
		static StringPtr RAMANUJAN_SOLDNER_SINCE ;
		static StringPtr ERDOS_BORWEIN_SINCE ;
		static StringPtr BERNSTEIN_SINCE ;
		static StringPtr GAUSS_KUZMIN_WIRSING_SINCE ;
		static StringPtr HAFNER_SARNAK_MCCURLEY_SINCE ;
		static StringPtr GOLOMB_DICKMAN_SINCE ;
		static StringPtr CAHEN_SINCE ;
		static StringPtr LAPLACE_LIMIT_SINCE ;
		static StringPtr ALLADI_GRINSTEAD_SINCE ;
		static StringPtr LENGYEL_SINCE ;
		static StringPtr LEVY_SINCE ;
		static StringPtr APERY_SINCE ;
		static StringPtr MILLS_SINCE ;
		static StringPtr BACKHOUSE_SINCE ;
		static StringPtr PORTER_SINCE ;
		static StringPtr LIEB_QUARE_ICE_SINCE ;
		static StringPtr NIVEN_SINCE ;
		static StringPtr SIERPINSKI_SINCE ;
		static StringPtr KHINCHIN_SINCE ;
		static StringPtr FRANSEN_ROBINSON_SINCE ;
		static StringPtr LANDAU_SINCE ;
		static StringPtr PARABOLIC_SINCE ;
		static StringPtr OMEGA_SINCE ;
		static StringPtr MRB_SINCE ;
		static StringPtr LI2_SINCE ;
		static StringPtr GOMPERTZ_SINCE ;
		/* Physical Constants */
		static StringPtr LIGHT_SPEED_SINCE ;
		static StringPtr GRAVITATIONAL_CONSTANT_SINCE ;
		static StringPtr GRAVIT_ACC_EARTH_SINCE ;
		static StringPtr PLANCK_CONSTANT_SINCE ;
		static StringPtr PLANCK_CONSTANT_REDUCED_SINCE ;
		static StringPtr PLANCK_LENGTH_SINCE ;
		static StringPtr PLANCK_MASS_SINCE ;
		static StringPtr PLANCK_TIME_SINCE ;
		/* AstronomicalConstants */
		static StringPtr LIGHT_YEAR_SINCE ;
		static StringPtr ASTRONOMICAL_UNIT_SINCE ;
		static StringPtr PARSEC_SINCE ;
		static StringPtr KILOPARSEC_SINCE ;
		static StringPtr EARTH_RADIUS_EQUATORIAL_SINCE ;
		static StringPtr EARTH_RADIUS_POLAR_SINCE ;
		static StringPtr EARTH_RADIUS_MEAN_SINCE ;
		static StringPtr EARTH_MASS_SINCE ;
		static StringPtr EARTH_SEMI_MAJOR_AXIS_SINCE ;
		static StringPtr MOON_RADIUS_MEAN_SINCE ;
		static StringPtr MOON_MASS_SINCE ;
		static StringPtr MONN_SEMI_MAJOR_AXIS_SINCE ;
		static StringPtr SOLAR_RADIUS_SINCE ;
		static StringPtr SOLAR_MASS_SINCE ;
		static StringPtr MERCURY_RADIUS_MEAN_SINCE ;
		static StringPtr MERCURY_MASS_SINCE ;
		static StringPtr MERCURY_SEMI_MAJOR_AXIS_SINCE ;
		static StringPtr VENUS_RADIUS_MEAN_SINCE ;
		static StringPtr VENUS_MASS_SINCE ;
		static StringPtr VENUS_SEMI_MAJOR_AXIS_SINCE ;
		static StringPtr MARS_RADIUS_MEAN_SINCE ;
		static StringPtr MARS_MASS_SINCE ;
		static StringPtr MARS_SEMI_MAJOR_AXIS_SINCE ;
		static StringPtr JUPITER_RADIUS_MEAN_SINCE ;
		static StringPtr JUPITER_MASS_SINCE ;
		static StringPtr JUPITER_SEMI_MAJOR_AXIS_SINCE ;
		static StringPtr SATURN_RADIUS_MEAN_SINCE ;
		static StringPtr SATURN_MASS_SINCE ;
		static StringPtr SATURN_SEMI_MAJOR_AXIS_SINCE ;
		static StringPtr URANUS_RADIUS_MEAN_SINCE ;
		static StringPtr URANUS_MASS_SINCE ;
		static StringPtr URANUS_SEMI_MAJOR_AXIS_SINCE ;
		static StringPtr NEPTUNE_RADIUS_MEAN_SINCE ;
		static StringPtr NEPTUNE_MASS_SINCE ;
		static StringPtr NEPTUNE_SEMI_MAJOR_AXIS_SINCE ;
		/* boolean values */
		static StringPtr TRUE_SINCE ;
		static StringPtr FALSE_SINCE ;
		/* automatic values */
		static StringPtr NPAR_SINCE ;
		/* other values */
		static StringPtr NAN_SINCE ;

		STATIC_VARS_INITI_H;
		
	};
} // namespace org::mariuszgromada::math::mxparser::parsertokens

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_CONSTANTVALUE_H