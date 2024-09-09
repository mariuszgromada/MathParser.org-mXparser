/*
 * @(#)ConstantValue.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/parsertokens/ConstantValue.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/SyntaxStringBuilder.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {
	using namespace syntaxstringbuilder;

	API_VISIBLE StringPtr ConstantValue::TYPE_DESC = nullptr;

	/*
	 * ConstantValue - tokens key words.
	 */
	API_VISIBLE StringPtr ConstantValue::PI_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::PI_STR_UNI_1 = nullptr;
	API_VISIBLE StringPtr ConstantValue::PI_STR_UNI_2 = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_STR_UNI_1 = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_STR_UNI_2 = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_MASCHERONI_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOLDEN_RATIO_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLASTIC_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::EMBREE_TREFETHEN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::FEIGENBAUM_DELTA_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::FEIGENBAUM_ALPHA_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::TWIN_PRIME_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MEISSEL_MERTEENS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRAUN_TWIN_PRIME_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRAUN_PRIME_QUADR_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRUIJN_NEWMAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::CATALAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::LANDAU_RAMANUJAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::VISWANATH_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::LEGENDRE_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::RAMANUJAN_SOLDNER_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::ERDOS_BORWEIN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::BERNSTEIN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::GAUSS_KUZMIN_WIRSING_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::HAFNER_SARNAK_MCCURLEY_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOLOMB_DICKMAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::CAHEN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::LAPLACE_LIMIT_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::ALLADI_GRINSTEAD_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::LENGYEL_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::LEVY_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::APERY_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MILLS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::BACKHOUSE_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::PORTER_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::LIEB_QUARE_ICE_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::NIVEN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::SIERPINSKI_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::KHINCHIN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::FRANSEN_ROBINSON_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::LANDAU_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::PARABOLIC_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::OMEGA_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MRB_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::LI2_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOMPERTZ_STR = nullptr;
	/* Physical Constants */
	API_VISIBLE StringPtr ConstantValue::LIGHT_SPEED_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::GRAVITATIONAL_CONSTANT_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::GRAVIT_ACC_EARTH_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_CONSTANT_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_CONSTANT_REDUCED_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_LENGTH_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_MASS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_TIME_STR = nullptr;
	/* AstronomicalConstants */
	API_VISIBLE StringPtr ConstantValue::LIGHT_YEAR_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::ASTRONOMICAL_UNIT_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::PARSEC_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::KILOPARSEC_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_EQUATORIAL_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_POLAR_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_MEAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_MASS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_SEMI_MAJOR_AXIS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MOON_RADIUS_MEAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MOON_MASS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MONN_SEMI_MAJOR_AXIS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::SOLAR_RADIUS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::SOLAR_MASS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_RADIUS_MEAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_MASS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_SEMI_MAJOR_AXIS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_RADIUS_MEAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_MASS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_SEMI_MAJOR_AXIS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_RADIUS_MEAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_MASS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_SEMI_MAJOR_AXIS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_RADIUS_MEAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_MASS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_SEMI_MAJOR_AXIS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_RADIUS_MEAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_MASS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_SEMI_MAJOR_AXIS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_RADIUS_MEAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_MASS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_SEMI_MAJOR_AXIS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_RADIUS_MEAN_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_MASS_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_STR = nullptr;
	/* boolean values */
	API_VISIBLE StringPtr ConstantValue::TRUE_STR = nullptr;
	API_VISIBLE StringPtr ConstantValue::FALSE_STR = nullptr;
	/* automatic values */
	API_VISIBLE StringPtr ConstantValue::NPAR_STR = nullptr;
	/* other values */
	API_VISIBLE StringPtr ConstantValue::NAN_STR = nullptr;
	/*
	 * ConstantValue - syntax.
	 */
	API_VISIBLE StringPtr ConstantValue::PI_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::PI_SYN_UNI_1 = nullptr;
	API_VISIBLE StringPtr ConstantValue::PI_SYN_UNI_2 = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_SYN_UNI_1 = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_SYN_UNI_2 = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_MASCHERONI_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOLDEN_RATIO_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLASTIC_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::EMBREE_TREFETHEN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::FEIGENBAUM_DELTA_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::FEIGENBAUM_ALPHA_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::TWIN_PRIME_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MEISSEL_MERTEENS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRAUN_TWIN_PRIME_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRAUN_PRIME_QUADR_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRUIJN_NEWMAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::CATALAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::LANDAU_RAMANUJAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::VISWANATH_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::LEGENDRE_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::RAMANUJAN_SOLDNER_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::ERDOS_BORWEIN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::BERNSTEIN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::GAUSS_KUZMIN_WIRSING_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::HAFNER_SARNAK_MCCURLEY_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOLOMB_DICKMAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::CAHEN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::LAPLACE_LIMIT_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::ALLADI_GRINSTEAD_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::LENGYEL_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::LEVY_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::APERY_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MILLS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::BACKHOUSE_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::PORTER_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::LIEB_QUARE_ICE_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::NIVEN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::SIERPINSKI_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::KHINCHIN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::FRANSEN_ROBINSON_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::LANDAU_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::PARABOLIC_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::OMEGA_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MRB_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::LI2_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOMPERTZ_SYN = nullptr;
	/* Physical Constants */
	API_VISIBLE StringPtr ConstantValue::LIGHT_SPEED_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::GRAVITATIONAL_CONSTANT_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::GRAVIT_ACC_EARTH_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_CONSTANT_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_CONSTANT_REDUCED_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_LENGTH_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_MASS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_TIME_SYN = nullptr;
	/* AstronomicalConstants */
	API_VISIBLE StringPtr ConstantValue::LIGHT_YEAR_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::ASTRONOMICAL_UNIT_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::PARSEC_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::KILOPARSEC_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_EQUATORIAL_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_POLAR_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_MEAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_MASS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_SEMI_MAJOR_AXIS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MOON_RADIUS_MEAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MOON_MASS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MONN_SEMI_MAJOR_AXIS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::SOLAR_RADIUS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::SOLAR_MASS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_RADIUS_MEAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_MASS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_SEMI_MAJOR_AXIS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_RADIUS_MEAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_MASS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_SEMI_MAJOR_AXIS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_RADIUS_MEAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_MASS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_SEMI_MAJOR_AXIS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_RADIUS_MEAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_MASS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_SEMI_MAJOR_AXIS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_RADIUS_MEAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_MASS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_SEMI_MAJOR_AXIS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_RADIUS_MEAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_MASS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_SEMI_MAJOR_AXIS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_RADIUS_MEAN_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_MASS_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_SYN = nullptr;
	/* boolean values */
	API_VISIBLE StringPtr ConstantValue::TRUE_SYN = nullptr;
	API_VISIBLE StringPtr ConstantValue::FALSE_SYN = nullptr;
	/* automatic values */
	API_VISIBLE StringPtr ConstantValue::NPAR_SYN = nullptr;
	/* other values */
	API_VISIBLE StringPtr ConstantValue::NAN_SYN = nullptr;
	/*
	 * ConstantValue - tokens description.
	 */
	API_VISIBLE StringPtr ConstantValue::PI_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_MASCHERONI_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOLDEN_RATIO_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLASTIC_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::EMBREE_TREFETHEN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::FEIGENBAUM_DELTA_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::FEIGENBAUM_ALPHA_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::TWIN_PRIME_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MEISSEL_MERTEENS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRAUN_TWIN_PRIME_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRAUN_PRIME_QUADR_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRUIJN_NEWMAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::CATALAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::LANDAU_RAMANUJAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::VISWANATH_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::LEGENDRE_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::RAMANUJAN_SOLDNER_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::ERDOS_BORWEIN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::BERNSTEIN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::GAUSS_KUZMIN_WIRSING_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::HAFNER_SARNAK_MCCURLEY_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOLOMB_DICKMAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::CAHEN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::LAPLACE_LIMIT_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::ALLADI_GRINSTEAD_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::LENGYEL_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::LEVY_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::APERY_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MILLS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::BACKHOUSE_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::PORTER_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::LIEB_QUARE_ICE_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::NIVEN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::SIERPINSKI_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::KHINCHIN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::FRANSEN_ROBINSON_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::LANDAU_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::PARABOLIC_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::OMEGA_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MRB_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::LI2_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOMPERTZ_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::LIGHT_SPEED_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::GRAVITATIONAL_CONSTANT_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::GRAVIT_ACC_EARTH_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_CONSTANT_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_CONSTANT_REDUCED_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_LENGTH_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_MASS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_TIME_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::LIGHT_YEAR_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::ASTRONOMICAL_UNIT_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::PARSEC_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::KILOPARSEC_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_EQUATORIAL_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_POLAR_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_MEAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_MASS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_SEMI_MAJOR_AXIS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MOON_RADIUS_MEAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MOON_MASS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MOON_SEMI_MAJOR_AXIS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::SOLAR_RADIUS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::SOLAR_MASS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_RADIUS_MEAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_MASS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_SEMI_MAJOR_AXIS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_RADIUS_MEAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_MASS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_SEMI_MAJOR_AXIS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_RADIUS_MEAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_MASS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_SEMI_MAJOR_AXIS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_RADIUS_MEAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_MASS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_SEMI_MAJOR_AXIS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_RADIUS_MEAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_MASS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_SEMI_MAJOR_AXIS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_RADIUS_MEAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_MASS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_SEMI_MAJOR_AXIS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_RADIUS_MEAN_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_MASS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::TRUE_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::FALSE_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::NPAR_DESC = nullptr;
	API_VISIBLE StringPtr ConstantValue::NAN_DESC = nullptr;
	/*
	 * ConstantValue - since.
	 */
	API_VISIBLE StringPtr ConstantValue::PI_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::PI_SINCE_UNI_1 = nullptr;
	API_VISIBLE StringPtr ConstantValue::PI_SINCE_UNI_2 = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_SINCE_UNI_1 = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_SINCE_UNI_2 = nullptr;
	API_VISIBLE StringPtr ConstantValue::EULER_MASCHERONI_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOLDEN_RATIO_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLASTIC_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::EMBREE_TREFETHEN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::FEIGENBAUM_DELTA_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::FEIGENBAUM_ALPHA_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::TWIN_PRIME_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MEISSEL_MERTEENS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRAUN_TWIN_PRIME_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRAUN_PRIME_QUADR_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::BRUIJN_NEWMAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::CATALAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::LANDAU_RAMANUJAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::VISWANATH_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::LEGENDRE_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::RAMANUJAN_SOLDNER_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::ERDOS_BORWEIN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::BERNSTEIN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::GAUSS_KUZMIN_WIRSING_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::HAFNER_SARNAK_MCCURLEY_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOLOMB_DICKMAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::CAHEN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::LAPLACE_LIMIT_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::ALLADI_GRINSTEAD_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::LENGYEL_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::LEVY_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::APERY_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MILLS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::BACKHOUSE_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::PORTER_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::LIEB_QUARE_ICE_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::NIVEN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::SIERPINSKI_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::KHINCHIN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::FRANSEN_ROBINSON_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::LANDAU_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::PARABOLIC_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::OMEGA_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MRB_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::LI2_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::GOMPERTZ_SINCE = nullptr;
	/* Physical Constants */
	API_VISIBLE StringPtr ConstantValue::LIGHT_SPEED_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::GRAVITATIONAL_CONSTANT_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::GRAVIT_ACC_EARTH_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_CONSTANT_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_CONSTANT_REDUCED_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_LENGTH_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_MASS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::PLANCK_TIME_SINCE = nullptr;
	/* AstronomicalConstants */
	API_VISIBLE StringPtr ConstantValue::LIGHT_YEAR_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::ASTRONOMICAL_UNIT_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::PARSEC_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::KILOPARSEC_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_EQUATORIAL_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_POLAR_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_RADIUS_MEAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_MASS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::EARTH_SEMI_MAJOR_AXIS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MOON_RADIUS_MEAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MOON_MASS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MONN_SEMI_MAJOR_AXIS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::SOLAR_RADIUS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::SOLAR_MASS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_RADIUS_MEAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_MASS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MERCURY_SEMI_MAJOR_AXIS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_RADIUS_MEAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_MASS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::VENUS_SEMI_MAJOR_AXIS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_RADIUS_MEAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_MASS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::MARS_SEMI_MAJOR_AXIS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_RADIUS_MEAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_MASS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::JUPITER_SEMI_MAJOR_AXIS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_RADIUS_MEAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_MASS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::SATURN_SEMI_MAJOR_AXIS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_RADIUS_MEAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_MASS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::URANUS_SEMI_MAJOR_AXIS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_RADIUS_MEAN_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_MASS_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_SINCE = nullptr;
	/* boolean values */
	API_VISIBLE StringPtr ConstantValue::TRUE_SINCE = nullptr;
	API_VISIBLE StringPtr ConstantValue::FALSE_SINCE = nullptr;
	/* automatic values */
	API_VISIBLE StringPtr ConstantValue::NPAR_SINCE = nullptr;
	/* other values */
	API_VISIBLE StringPtr ConstantValue::NAN_SINCE = nullptr;


	STATIC_VARS_INITI_CPP(ConstantValue,

		STATIC_VARS_INITI_DEPENDENCY(mXparser);
		STATIC_VARS_INITI_DEPENDENCY(ParserSymbol);

		INIT_WITH_NA(TYPE_DESC);
		/*
		* ConstantValue - tokens key words.
		*/
		PI_STR = S(UTF("pi"));
		PI_STR_UNI_1 = S(UTF("π"));
		PI_STR_UNI_2 = S(UTF("ℼ"));
		EULER_STR = S(UTF("e"));
		EULER_STR_UNI_1 = S(UTF("ℯ"));
		EULER_STR_UNI_2 = S(UTF("ⅇ"));
		EULER_MASCHERONI_STR = S(UTF("[gam]"));
		GOLDEN_RATIO_STR = S(UTF("[phi]"));
		PLASTIC_STR = S(UTF("[PN]"));
		EMBREE_TREFETHEN_STR = S(UTF("[B*]"));
		FEIGENBAUM_DELTA_STR = S(UTF("[F'd]"));
		FEIGENBAUM_ALPHA_STR = S(UTF("[F'a]"));
		TWIN_PRIME_STR = S(UTF("[C2]"));
		MEISSEL_MERTEENS_STR = S(UTF("[M1]"));
		BRAUN_TWIN_PRIME_STR = S(UTF("[B2]"));
		BRAUN_PRIME_QUADR_STR = S(UTF("[B4]"));
		BRUIJN_NEWMAN_STR = S(UTF("[BN'L]"));
		CATALAN_STR = S(UTF("[Kat]"));
		LANDAU_RAMANUJAN_STR = S(UTF("[K*]"));
		VISWANATH_STR = S(UTF("[K.]"));
		LEGENDRE_STR = S(UTF("[B'L]"));
		RAMANUJAN_SOLDNER_STR = S(UTF("[RS'm]"));
		ERDOS_BORWEIN_STR = S(UTF("[EB'e]"));
		BERNSTEIN_STR = S(UTF("[Bern]"));
		GAUSS_KUZMIN_WIRSING_STR = S(UTF("[GKW'l]"));
		HAFNER_SARNAK_MCCURLEY_STR = S(UTF("[HSM's]"));
		GOLOMB_DICKMAN_STR = S(UTF("[lm]"));
		CAHEN_STR = S(UTF("[Cah]"));
		LAPLACE_LIMIT_STR = S(UTF("[Ll]"));
		ALLADI_GRINSTEAD_STR = S(UTF("[AG]"));
		LENGYEL_STR = S(UTF("[L*]"));
		LEVY_STR = S(UTF("[L.]"));
		APERY_STR = S(UTF("[Dz3]"));
		MILLS_STR = S(UTF("[A3n]"));
		BACKHOUSE_STR = S(UTF("[Bh]"));
		PORTER_STR = S(UTF("[Pt]"));
		LIEB_QUARE_ICE_STR = S(UTF("[L2]"));
		NIVEN_STR = S(UTF("[Nv]"));
		SIERPINSKI_STR = S(UTF("[Ks]"));
		KHINCHIN_STR = S(UTF("[Kh]"));
		FRANSEN_ROBINSON_STR = S(UTF("[FR]"));
		LANDAU_STR = S(UTF("[La]"));
		PARABOLIC_STR = S(UTF("[P2]"));
		OMEGA_STR = S(UTF("[Om]"));
		MRB_STR = S(UTF("[MRB]"));
		LI2_STR = S(UTF("[li2]"));
		GOMPERTZ_STR = S(UTF("[EG]"));
		/* Physical Constants */
		LIGHT_SPEED_STR = S(UTF("[c]"));
		GRAVITATIONAL_CONSTANT_STR = S(UTF("[G.]"));
		GRAVIT_ACC_EARTH_STR = S(UTF("[g]"));
		PLANCK_CONSTANT_STR = S(UTF("[hP]"));
		PLANCK_CONSTANT_REDUCED_STR = S(UTF("[h-]"));
		PLANCK_LENGTH_STR = S(UTF("[lP]"));
		PLANCK_MASS_STR = S(UTF("[mP]"));
		PLANCK_TIME_STR = S(UTF("[tP]"));
		/* AstronomicalConstants */
		LIGHT_YEAR_STR = S(UTF("[ly]"));
		ASTRONOMICAL_UNIT_STR = S(UTF("[au]"));
		PARSEC_STR = S(UTF("[pc]"));
		KILOPARSEC_STR = S(UTF("[kpc]"));
		EARTH_RADIUS_EQUATORIAL_STR = S(UTF("[Earth-R-eq]"));
		EARTH_RADIUS_POLAR_STR = S(UTF("[Earth-R-po]"));
		EARTH_RADIUS_MEAN_STR = S(UTF("[Earth-R]"));
		EARTH_MASS_STR = S(UTF("[Earth-M]"));
		EARTH_SEMI_MAJOR_AXIS_STR = S(UTF("[Earth-D]"));
		MOON_RADIUS_MEAN_STR = S(UTF("[Moon-R]"));
		MOON_MASS_STR = S(UTF("[Moon-M]"));
		MONN_SEMI_MAJOR_AXIS_STR = S(UTF("[Moon-D]"));
		SOLAR_RADIUS_STR = S(UTF("[Solar-R]"));
		SOLAR_MASS_STR = S(UTF("[Solar-M]"));
		MERCURY_RADIUS_MEAN_STR = S(UTF("[Mercury-R]"));
		MERCURY_MASS_STR = S(UTF("[Mercury-M]"));
		MERCURY_SEMI_MAJOR_AXIS_STR = S(UTF("[Mercury-D]"));
		VENUS_RADIUS_MEAN_STR = S(UTF("[Venus-R]"));
		VENUS_MASS_STR = S(UTF("[Venus-M]"));
		VENUS_SEMI_MAJOR_AXIS_STR = S(UTF("[Venus-D]"));
		MARS_RADIUS_MEAN_STR = S(UTF("[Mars-R]"));
		MARS_MASS_STR = S(UTF("[Mars-M]"));
		MARS_SEMI_MAJOR_AXIS_STR = S(UTF("[Mars-D]"));
		JUPITER_RADIUS_MEAN_STR = S(UTF("[Jupiter-R]"));
		JUPITER_MASS_STR = S(UTF("[Jupiter-M]"));
		JUPITER_SEMI_MAJOR_AXIS_STR = S(UTF("[Jupiter-D]"));
		SATURN_RADIUS_MEAN_STR = S(UTF("[Saturn-R]"));
		SATURN_MASS_STR = S(UTF("[Saturn-M]"));
		SATURN_SEMI_MAJOR_AXIS_STR = S(UTF("[Saturn-D]"));
		URANUS_RADIUS_MEAN_STR = S(UTF("[Uranus-R]"));
		URANUS_MASS_STR = S(UTF("[Uranus-M]"));
		URANUS_SEMI_MAJOR_AXIS_STR = S(UTF("[Uranus-D]"));
		NEPTUNE_RADIUS_MEAN_STR = S(UTF("[Neptune-R]"));
		NEPTUNE_MASS_STR = S(UTF("[Neptune-M]"));
		NEPTUNE_SEMI_MAJOR_AXIS_STR = S(UTF("[Neptune-D]"));
		/* boolean values */
		TRUE_STR = S(UTF("[true]"));
		FALSE_STR = S(UTF("[false]"));
		/* automatic values */
		NPAR_STR = S(UTF("[npar]"));
		/* other values */
		NAN_STR = S(UTF("[NaN]"));
		/*
		* ConstantValue - syntax.
		*/
		PI_SYN = PI_STR;
		PI_SYN_UNI_1 = PI_STR_UNI_1;
		PI_SYN_UNI_2 = PI_STR_UNI_2;
		EULER_SYN = EULER_STR;
		EULER_SYN_UNI_1 = EULER_STR_UNI_1;
		EULER_SYN_UNI_2 = EULER_STR_UNI_2;
		EULER_MASCHERONI_SYN = EULER_MASCHERONI_STR;
		GOLDEN_RATIO_SYN = GOLDEN_RATIO_STR;
		PLASTIC_SYN = PLASTIC_STR;
		EMBREE_TREFETHEN_SYN = EMBREE_TREFETHEN_STR;
		FEIGENBAUM_DELTA_SYN = FEIGENBAUM_DELTA_STR;
		FEIGENBAUM_ALPHA_SYN = FEIGENBAUM_ALPHA_STR;
		TWIN_PRIME_SYN = TWIN_PRIME_STR;
		MEISSEL_MERTEENS_SYN = MEISSEL_MERTEENS_STR;
		BRAUN_TWIN_PRIME_SYN = BRAUN_TWIN_PRIME_STR;
		BRAUN_PRIME_QUADR_SYN = BRAUN_PRIME_QUADR_STR;
		BRUIJN_NEWMAN_SYN = BRUIJN_NEWMAN_STR;
		CATALAN_SYN = CATALAN_STR;
		LANDAU_RAMANUJAN_SYN = LANDAU_RAMANUJAN_STR;
		VISWANATH_SYN = VISWANATH_STR;
		LEGENDRE_SYN = LEGENDRE_STR;
		RAMANUJAN_SOLDNER_SYN = RAMANUJAN_SOLDNER_STR;
		ERDOS_BORWEIN_SYN = ERDOS_BORWEIN_STR;
		BERNSTEIN_SYN = BERNSTEIN_STR;
		GAUSS_KUZMIN_WIRSING_SYN = GAUSS_KUZMIN_WIRSING_STR;
		HAFNER_SARNAK_MCCURLEY_SYN = HAFNER_SARNAK_MCCURLEY_STR;
		GOLOMB_DICKMAN_SYN = GOLOMB_DICKMAN_STR;
		CAHEN_SYN = CAHEN_STR;
		LAPLACE_LIMIT_SYN = LAPLACE_LIMIT_STR;
		ALLADI_GRINSTEAD_SYN = ALLADI_GRINSTEAD_STR;
		LENGYEL_SYN = LENGYEL_STR;
		LEVY_SYN = LEVY_STR;
		APERY_SYN = APERY_STR;
		MILLS_SYN = MILLS_STR;
		BACKHOUSE_SYN = BACKHOUSE_STR;
		PORTER_SYN = PORTER_STR;
		LIEB_QUARE_ICE_SYN = LIEB_QUARE_ICE_STR;
		NIVEN_SYN = NIVEN_STR;
		SIERPINSKI_SYN = SIERPINSKI_STR;
		KHINCHIN_SYN = KHINCHIN_STR;
		FRANSEN_ROBINSON_SYN = FRANSEN_ROBINSON_STR;
		LANDAU_SYN = LANDAU_STR;
		PARABOLIC_SYN = PARABOLIC_STR;
		OMEGA_SYN = OMEGA_STR;
		MRB_SYN = MRB_STR;
		LI2_SYN = LI2_STR;
		GOMPERTZ_SYN = GOMPERTZ_STR;
		/* Physical Constants */
		LIGHT_SPEED_SYN = LIGHT_SPEED_STR;
		GRAVITATIONAL_CONSTANT_SYN = GRAVITATIONAL_CONSTANT_STR;
		GRAVIT_ACC_EARTH_SYN = GRAVIT_ACC_EARTH_STR;
		PLANCK_CONSTANT_SYN = PLANCK_CONSTANT_STR;
		PLANCK_CONSTANT_REDUCED_SYN = PLANCK_CONSTANT_REDUCED_STR;
		PLANCK_LENGTH_SYN = PLANCK_LENGTH_STR;
		PLANCK_MASS_SYN = PLANCK_MASS_STR;
		PLANCK_TIME_SYN = PLANCK_TIME_STR;
		/* AstronomicalConstants */
		LIGHT_YEAR_SYN = LIGHT_YEAR_STR;
		ASTRONOMICAL_UNIT_SYN = ASTRONOMICAL_UNIT_STR;
		PARSEC_SYN = PARSEC_STR;
		KILOPARSEC_SYN = KILOPARSEC_STR;
		EARTH_RADIUS_EQUATORIAL_SYN = EARTH_RADIUS_EQUATORIAL_STR;
		EARTH_RADIUS_POLAR_SYN = EARTH_RADIUS_POLAR_STR;
		EARTH_RADIUS_MEAN_SYN = EARTH_RADIUS_MEAN_STR;
		EARTH_MASS_SYN = EARTH_MASS_STR;
		EARTH_SEMI_MAJOR_AXIS_SYN = EARTH_SEMI_MAJOR_AXIS_STR;
		MOON_RADIUS_MEAN_SYN = MOON_RADIUS_MEAN_STR;
		MOON_MASS_SYN = MOON_MASS_STR;
		MONN_SEMI_MAJOR_AXIS_SYN = MONN_SEMI_MAJOR_AXIS_STR;
		SOLAR_RADIUS_SYN = SOLAR_RADIUS_STR;
		SOLAR_MASS_SYN = SOLAR_MASS_STR;
		MERCURY_RADIUS_MEAN_SYN = MERCURY_RADIUS_MEAN_STR;
		MERCURY_MASS_SYN = MERCURY_MASS_STR;
		MERCURY_SEMI_MAJOR_AXIS_SYN = MERCURY_SEMI_MAJOR_AXIS_STR;
		VENUS_RADIUS_MEAN_SYN = VENUS_RADIUS_MEAN_STR;
		VENUS_MASS_SYN = VENUS_MASS_STR;
		VENUS_SEMI_MAJOR_AXIS_SYN = VENUS_SEMI_MAJOR_AXIS_STR;
		MARS_RADIUS_MEAN_SYN = MARS_RADIUS_MEAN_STR;
		MARS_MASS_SYN = MARS_MASS_STR;
		MARS_SEMI_MAJOR_AXIS_SYN = MARS_SEMI_MAJOR_AXIS_STR;
		JUPITER_RADIUS_MEAN_SYN = JUPITER_RADIUS_MEAN_STR;
		JUPITER_MASS_SYN = JUPITER_MASS_STR;
		JUPITER_SEMI_MAJOR_AXIS_SYN = JUPITER_SEMI_MAJOR_AXIS_STR;
		SATURN_RADIUS_MEAN_SYN = SATURN_RADIUS_MEAN_STR;
		SATURN_MASS_SYN = SATURN_MASS_STR;
		SATURN_SEMI_MAJOR_AXIS_SYN = SATURN_SEMI_MAJOR_AXIS_STR;
		URANUS_RADIUS_MEAN_SYN = URANUS_RADIUS_MEAN_STR;
		URANUS_MASS_SYN = URANUS_MASS_STR;
		URANUS_SEMI_MAJOR_AXIS_SYN = URANUS_SEMI_MAJOR_AXIS_STR;
		NEPTUNE_RADIUS_MEAN_SYN = NEPTUNE_RADIUS_MEAN_STR;
		NEPTUNE_MASS_SYN = NEPTUNE_MASS_STR;
		NEPTUNE_SEMI_MAJOR_AXIS_SYN = NEPTUNE_SEMI_MAJOR_AXIS_STR;
		/* boolean values */
		TRUE_SYN = TRUE_STR;
		FALSE_SYN = FALSE_STR;
		/* automatic values */
		NPAR_SYN = NPAR_STR;
		/* other values */
		NAN_SYN = NAN_STR;
		/*
		* ConstantValue - tokens description.
		*/
		INIT_WITH_NA(PI_DESC);
		INIT_WITH_NA(EULER_DESC);
		INIT_WITH_NA(EULER_MASCHERONI_DESC);
		INIT_WITH_NA(GOLDEN_RATIO_DESC);
		INIT_WITH_NA(PLASTIC_DESC);
		INIT_WITH_NA(EMBREE_TREFETHEN_DESC);
		INIT_WITH_NA(FEIGENBAUM_DELTA_DESC);
		INIT_WITH_NA(FEIGENBAUM_ALPHA_DESC);
		INIT_WITH_NA(TWIN_PRIME_DESC);
		INIT_WITH_NA(MEISSEL_MERTEENS_DESC);
		INIT_WITH_NA(BRAUN_TWIN_PRIME_DESC);
		INIT_WITH_NA(BRAUN_PRIME_QUADR_DESC);
		INIT_WITH_NA(BRUIJN_NEWMAN_DESC);
		INIT_WITH_NA(CATALAN_DESC);
		INIT_WITH_NA(LANDAU_RAMANUJAN_DESC);
		INIT_WITH_NA(VISWANATH_DESC);
		INIT_WITH_NA(LEGENDRE_DESC);
		INIT_WITH_NA(RAMANUJAN_SOLDNER_DESC);
		INIT_WITH_NA(ERDOS_BORWEIN_DESC);
		INIT_WITH_NA(BERNSTEIN_DESC);
		INIT_WITH_NA(GAUSS_KUZMIN_WIRSING_DESC);
		INIT_WITH_NA(HAFNER_SARNAK_MCCURLEY_DESC);
		INIT_WITH_NA(GOLOMB_DICKMAN_DESC);
		INIT_WITH_NA(CAHEN_DESC);
		INIT_WITH_NA(LAPLACE_LIMIT_DESC);
		INIT_WITH_NA(ALLADI_GRINSTEAD_DESC);
		INIT_WITH_NA(LENGYEL_DESC);
		INIT_WITH_NA(LEVY_DESC);
		INIT_WITH_NA(APERY_DESC);
		INIT_WITH_NA(MILLS_DESC);
		INIT_WITH_NA(BACKHOUSE_DESC);
		INIT_WITH_NA(PORTER_DESC);
		INIT_WITH_NA(LIEB_QUARE_ICE_DESC);
		INIT_WITH_NA(NIVEN_DESC);
		INIT_WITH_NA(SIERPINSKI_DESC);
		INIT_WITH_NA(KHINCHIN_DESC);
		INIT_WITH_NA(FRANSEN_ROBINSON_DESC);
		INIT_WITH_NA(LANDAU_DESC);
		INIT_WITH_NA(PARABOLIC_DESC);
		INIT_WITH_NA(OMEGA_DESC);
		INIT_WITH_NA(MRB_DESC);
		INIT_WITH_NA(LI2_DESC);
		INIT_WITH_NA(GOMPERTZ_DESC);
		INIT_WITH_NA(LIGHT_SPEED_DESC);
		INIT_WITH_NA(GRAVITATIONAL_CONSTANT_DESC);
		INIT_WITH_NA(GRAVIT_ACC_EARTH_DESC);
		INIT_WITH_NA(PLANCK_CONSTANT_DESC);
		INIT_WITH_NA(PLANCK_CONSTANT_REDUCED_DESC);
		INIT_WITH_NA(PLANCK_LENGTH_DESC);
		INIT_WITH_NA(PLANCK_MASS_DESC);
		INIT_WITH_NA(PLANCK_TIME_DESC);
		INIT_WITH_NA(LIGHT_YEAR_DESC);
		INIT_WITH_NA(ASTRONOMICAL_UNIT_DESC);
		INIT_WITH_NA(PARSEC_DESC);
		INIT_WITH_NA(KILOPARSEC_DESC);
		INIT_WITH_NA(EARTH_RADIUS_EQUATORIAL_DESC);
		INIT_WITH_NA(EARTH_RADIUS_POLAR_DESC);
		INIT_WITH_NA(EARTH_RADIUS_MEAN_DESC);
		INIT_WITH_NA(EARTH_MASS_DESC);
		INIT_WITH_NA(EARTH_SEMI_MAJOR_AXIS_DESC);
		INIT_WITH_NA(MOON_RADIUS_MEAN_DESC);
		INIT_WITH_NA(MOON_MASS_DESC);
		INIT_WITH_NA(MOON_SEMI_MAJOR_AXIS_DESC);
		INIT_WITH_NA(SOLAR_RADIUS_DESC);
		INIT_WITH_NA(SOLAR_MASS_DESC);
		INIT_WITH_NA(MERCURY_RADIUS_MEAN_DESC);
		INIT_WITH_NA(MERCURY_MASS_DESC);
		INIT_WITH_NA(MERCURY_SEMI_MAJOR_AXIS_DESC);
		INIT_WITH_NA(VENUS_RADIUS_MEAN_DESC);
		INIT_WITH_NA(VENUS_MASS_DESC);
		INIT_WITH_NA(VENUS_SEMI_MAJOR_AXIS_DESC);
		INIT_WITH_NA(MARS_RADIUS_MEAN_DESC);
		INIT_WITH_NA(MARS_MASS_DESC);
		INIT_WITH_NA(MARS_SEMI_MAJOR_AXIS_DESC);
		INIT_WITH_NA(JUPITER_RADIUS_MEAN_DESC);
		INIT_WITH_NA(JUPITER_MASS_DESC);
		INIT_WITH_NA(JUPITER_SEMI_MAJOR_AXIS_DESC);
		INIT_WITH_NA(SATURN_RADIUS_MEAN_DESC);
		INIT_WITH_NA(SATURN_MASS_DESC);
		INIT_WITH_NA(SATURN_SEMI_MAJOR_AXIS_DESC);
		INIT_WITH_NA(URANUS_RADIUS_MEAN_DESC);
		INIT_WITH_NA(URANUS_MASS_DESC);
		INIT_WITH_NA(URANUS_SEMI_MAJOR_AXIS_DESC);
		INIT_WITH_NA(NEPTUNE_RADIUS_MEAN_DESC);
		INIT_WITH_NA(NEPTUNE_MASS_DESC);
		INIT_WITH_NA(NEPTUNE_SEMI_MAJOR_AXIS_DESC);
		INIT_WITH_NA(TRUE_DESC);
		INIT_WITH_NA(FALSE_DESC);
		INIT_WITH_NA(NPAR_DESC);
		INIT_WITH_NA(NAN_DESC);
		/*
		* ConstantValue - since.
		*/
		PI_SINCE = mXparser::NAMEv10;
		PI_SINCE_UNI_1 = mXparser::NAMEv50;
		PI_SINCE_UNI_2 = mXparser::NAMEv50;
		EULER_SINCE = mXparser::NAMEv10;
		EULER_SINCE_UNI_1 = mXparser::NAMEv50;
		EULER_SINCE_UNI_2 = mXparser::NAMEv50;
		EULER_MASCHERONI_SINCE = mXparser::NAMEv10;
		GOLDEN_RATIO_SINCE = mXparser::NAMEv10;
		PLASTIC_SINCE = mXparser::NAMEv10;
		EMBREE_TREFETHEN_SINCE = mXparser::NAMEv10;
		FEIGENBAUM_DELTA_SINCE = mXparser::NAMEv10;
		FEIGENBAUM_ALPHA_SINCE = mXparser::NAMEv10;
		TWIN_PRIME_SINCE = mXparser::NAMEv10;
		MEISSEL_MERTEENS_SINCE = mXparser::NAMEv10;
		BRAUN_TWIN_PRIME_SINCE = mXparser::NAMEv10;
		BRAUN_PRIME_QUADR_SINCE = mXparser::NAMEv10;
		BRUIJN_NEWMAN_SINCE = mXparser::NAMEv10;
		CATALAN_SINCE = mXparser::NAMEv10;
		LANDAU_RAMANUJAN_SINCE = mXparser::NAMEv10;
		VISWANATH_SINCE = mXparser::NAMEv10;
		LEGENDRE_SINCE = mXparser::NAMEv10;
		RAMANUJAN_SOLDNER_SINCE = mXparser::NAMEv10;
		ERDOS_BORWEIN_SINCE = mXparser::NAMEv10;
		BERNSTEIN_SINCE = mXparser::NAMEv10;
		GAUSS_KUZMIN_WIRSING_SINCE = mXparser::NAMEv10;
		HAFNER_SARNAK_MCCURLEY_SINCE = mXparser::NAMEv10;
		GOLOMB_DICKMAN_SINCE = mXparser::NAMEv10;
		CAHEN_SINCE = mXparser::NAMEv10;
		LAPLACE_LIMIT_SINCE = mXparser::NAMEv10;
		ALLADI_GRINSTEAD_SINCE = mXparser::NAMEv10;
		LENGYEL_SINCE = mXparser::NAMEv10;
		LEVY_SINCE = mXparser::NAMEv10;
		APERY_SINCE = mXparser::NAMEv10;
		MILLS_SINCE = mXparser::NAMEv10;
		BACKHOUSE_SINCE = mXparser::NAMEv10;
		PORTER_SINCE = mXparser::NAMEv10;
		LIEB_QUARE_ICE_SINCE = mXparser::NAMEv10;
		NIVEN_SINCE = mXparser::NAMEv10;
		SIERPINSKI_SINCE = mXparser::NAMEv10;
		KHINCHIN_SINCE = mXparser::NAMEv10;
		FRANSEN_ROBINSON_SINCE = mXparser::NAMEv10;
		LANDAU_SINCE = mXparser::NAMEv10;
		PARABOLIC_SINCE = mXparser::NAMEv10;
		OMEGA_SINCE = mXparser::NAMEv10;
		MRB_SINCE = mXparser::NAMEv10;
		LI2_SINCE = mXparser::NAMEv23;
		GOMPERTZ_SINCE = mXparser::NAMEv23;
		/* Physical Constants */
		LIGHT_SPEED_SINCE = mXparser::NAMEv40;
		GRAVITATIONAL_CONSTANT_SINCE = mXparser::NAMEv40;
		GRAVIT_ACC_EARTH_SINCE = mXparser::NAMEv40;
		PLANCK_CONSTANT_SINCE = mXparser::NAMEv40;
		PLANCK_CONSTANT_REDUCED_SINCE = mXparser::NAMEv40;
		PLANCK_LENGTH_SINCE = mXparser::NAMEv40;
		PLANCK_MASS_SINCE = mXparser::NAMEv40;
		PLANCK_TIME_SINCE = mXparser::NAMEv40;
		/* AstronomicalConstants */
		LIGHT_YEAR_SINCE = mXparser::NAMEv40;
		ASTRONOMICAL_UNIT_SINCE = mXparser::NAMEv40;
		PARSEC_SINCE = mXparser::NAMEv40;
		KILOPARSEC_SINCE = mXparser::NAMEv40;
		EARTH_RADIUS_EQUATORIAL_SINCE = mXparser::NAMEv40;
		EARTH_RADIUS_POLAR_SINCE = mXparser::NAMEv40;
		EARTH_RADIUS_MEAN_SINCE = mXparser::NAMEv40;
		EARTH_MASS_SINCE = mXparser::NAMEv40;
		EARTH_SEMI_MAJOR_AXIS_SINCE = mXparser::NAMEv40;
		MOON_RADIUS_MEAN_SINCE = mXparser::NAMEv40;
		MOON_MASS_SINCE = mXparser::NAMEv40;
		MONN_SEMI_MAJOR_AXIS_SINCE = mXparser::NAMEv40;
		SOLAR_RADIUS_SINCE = mXparser::NAMEv40;
		SOLAR_MASS_SINCE = mXparser::NAMEv40;
		MERCURY_RADIUS_MEAN_SINCE = mXparser::NAMEv40;
		MERCURY_MASS_SINCE = mXparser::NAMEv40;
		MERCURY_SEMI_MAJOR_AXIS_SINCE = mXparser::NAMEv40;
		VENUS_RADIUS_MEAN_SINCE = mXparser::NAMEv40;
		VENUS_MASS_SINCE = mXparser::NAMEv40;
		VENUS_SEMI_MAJOR_AXIS_SINCE = mXparser::NAMEv40;
		MARS_RADIUS_MEAN_SINCE = mXparser::NAMEv40;
		MARS_MASS_SINCE = mXparser::NAMEv40;
		MARS_SEMI_MAJOR_AXIS_SINCE = mXparser::NAMEv40;
		JUPITER_RADIUS_MEAN_SINCE = mXparser::NAMEv40;
		JUPITER_MASS_SINCE = mXparser::NAMEv40;
		JUPITER_SEMI_MAJOR_AXIS_SINCE = mXparser::NAMEv40;
		SATURN_RADIUS_MEAN_SINCE = mXparser::NAMEv40;
		SATURN_MASS_SINCE = mXparser::NAMEv40;
		SATURN_SEMI_MAJOR_AXIS_SINCE = mXparser::NAMEv40;
		URANUS_RADIUS_MEAN_SINCE = mXparser::NAMEv40;
		URANUS_MASS_SINCE = mXparser::NAMEv40;
		URANUS_SEMI_MAJOR_AXIS_SINCE = mXparser::NAMEv40;
		NEPTUNE_RADIUS_MEAN_SINCE = mXparser::NAMEv40;
		NEPTUNE_MASS_SINCE = mXparser::NAMEv40;
		NEPTUNE_SEMI_MAJOR_AXIS_SINCE = mXparser::NAMEv40;
		/* boolean values */
		TRUE_SINCE = mXparser::NAMEv41;
		FALSE_SINCE = mXparser::NAMEv41;
		/* automatic values */
		NPAR_SINCE = mXparser::NAMEv42;
		/* other values */
		NAN_SINCE = mXparser::NAMEv41;
	);

} // namespace org::mariuszgromada::math::mxparser::parsertokens
