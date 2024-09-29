/*
 * @(#)MathConstants.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/mathcollection/MathConstants.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/mathcollection/AstronomicalConstants.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/BooleanAlgebra.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/PhysicalConstants.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ConstantValue.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Double.hpp"

namespace org::mariuszgromada::math::mxparser::mathcollection {
	using namespace org::mariuszgromada::math::mxparser::parsertokens;
	using namespace org::mariuszgromada::math::mxparser::wrapper;

	/**
	 * Returns constant value, where constant is represented by the
	 * token id in the ConstantValue class
	 *
	 * @param constantValueId Please refer to the ConstantValue class.
	 * @return Returns constant value if id is known, otherwise Double.NaN is returned.
	 *
	 * @see ConstantValue
	 */
	double

#if !defined(_WIN32) || !defined(__MINGW32__)
	API_VISIBLE
#endif

	MathConstants::getConstantValue(int constantValueId) {
		switch (constantValueId) {
			case ConstantValue::PI_ID: return PI;
			case ConstantValue::EULER_ID: return E;
			case ConstantValue::EULER_MASCHERONI_ID: return EULER_MASCHERONI;
			case ConstantValue::GOLDEN_RATIO_ID: return GOLDEN_RATIO;
			case ConstantValue::PLASTIC_ID: return PLASTIC;
			case ConstantValue::EMBREE_TREFETHEN_ID: return EMBREE_TREFETHEN;
			case ConstantValue::FEIGENBAUM_DELTA_ID: return FEIGENBAUM_DELTA;
			case ConstantValue::FEIGENBAUM_ALPHA_ID: return FEIGENBAUM_ALFA;
			case ConstantValue::TWIN_PRIME_ID: return TWIN_PRIME;
			case ConstantValue::MEISSEL_MERTEENS_ID: return MEISSEL_MERTEENS;
			case ConstantValue::BRAUN_TWIN_PRIME_ID: return BRAUN_TWIN_PRIME;
			case ConstantValue::BRAUN_PRIME_QUADR_ID: return BRAUN_PRIME_QUADR;
			case ConstantValue::BRUIJN_NEWMAN_ID: return BRUIJN_NEWMAN;
			case ConstantValue::CATALAN_ID: return CATALAN;
			case ConstantValue::LANDAU_RAMANUJAN_ID: return LANDAU_RAMANUJAN;
			case ConstantValue::VISWANATH_ID: return VISWANATH;
			case ConstantValue::LEGENDRE_ID: return LEGENDRE;
			case ConstantValue::RAMANUJAN_SOLDNER_ID: return RAMANUJAN_SOLDNER;
			case ConstantValue::ERDOS_BORWEIN_ID: return ERDOS_BORWEIN;
			case ConstantValue::BERNSTEIN_ID: return BERNSTEIN;
			case ConstantValue::GAUSS_KUZMIN_WIRSING_ID: return GAUSS_KUZMIN_WIRSING;
			case ConstantValue::HAFNER_SARNAK_MCCURLEY_ID: return HAFNER_SARNAK_MCCURLEY;
			case ConstantValue::GOLOMB_DICKMAN_ID: return GOLOMB_DICKMAN;
			case ConstantValue::CAHEN_ID: return CAHEN;
			case ConstantValue::LAPLACE_LIMIT_ID: return LAPLACE_LIMIT;
			case ConstantValue::ALLADI_GRINSTEAD_ID: return ALLADI_GRINSTEAD;
			case ConstantValue::LENGYEL_ID: return LENGYEL;
			case ConstantValue::LEVY_ID: return LEVY;
			case ConstantValue::APERY_ID: return APERY;
			case ConstantValue::MILLS_ID: return MILLS;
			case ConstantValue::BACKHOUSE_ID: return BACKHOUSE;
			case ConstantValue::PORTER_ID: return PORTER;
			case ConstantValue::LIEB_QUARE_ICE_ID: return LIEB_QUARE_ICE;
			case ConstantValue::NIVEN_ID: return NIVEN;
			case ConstantValue::SIERPINSKI_ID: return SIERPINSKI;
			case ConstantValue::KHINCHIN_ID: return KHINCHIN;
			case ConstantValue::FRANSEN_ROBINSON_ID: return FRANSEN_ROBINSON;
			case ConstantValue::LANDAU_ID: return LANDAU;
			case ConstantValue::PARABOLIC_ID: return PARABOLIC;
			case ConstantValue::OMEGA_ID: return OMEGA;
			case ConstantValue::MRB_ID: return MRB;
			case ConstantValue::LI2_ID: return LI2;
			case ConstantValue::GOMPERTZ_ID: return GOMPERTZ;
			case ConstantValue::LIGHT_SPEED_ID: return PhysicalConstants::LIGHT_SPEED;
			case ConstantValue::GRAVITATIONAL_CONSTANT_ID: return PhysicalConstants::GRAVITATIONAL_CONSTANT;
			case ConstantValue::GRAVIT_ACC_EARTH_ID: return PhysicalConstants::GRAVIT_ACC_EARTH;
			case ConstantValue::PLANCK_CONSTANT_ID: return PhysicalConstants::PLANCK_CONSTANT;
			case ConstantValue::PLANCK_CONSTANT_REDUCED_ID: return PhysicalConstants::PLANCK_CONSTANT_REDUCED;
			case ConstantValue::PLANCK_LENGTH_ID: return PhysicalConstants::PLANCK_LENGTH;
			case ConstantValue::PLANCK_MASS_ID: return PhysicalConstants::PLANCK_MASS;
			case ConstantValue::PLANCK_TIME_ID: return PhysicalConstants::PLANCK_TIME;
			case ConstantValue::LIGHT_YEAR_ID: return AstronomicalConstants::LIGHT_YEAR;
			case ConstantValue::ASTRONOMICAL_UNIT_ID: return AstronomicalConstants::ASTRONOMICAL_UNIT;
			case ConstantValue::PARSEC_ID: return AstronomicalConstants::PARSEC;
			case ConstantValue::KILOPARSEC_ID: return AstronomicalConstants::KILOPARSEC;
			case ConstantValue::EARTH_RADIUS_EQUATORIAL_ID: return AstronomicalConstants::EARTH_RADIUS_EQUATORIAL;
			case ConstantValue::EARTH_RADIUS_POLAR_ID: return AstronomicalConstants::EARTH_RADIUS_POLAR;
			case ConstantValue::EARTH_RADIUS_MEAN_ID: return AstronomicalConstants::EARTH_RADIUS_MEAN;
			case ConstantValue::EARTH_MASS_ID: return AstronomicalConstants::EARTH_MASS;
			case ConstantValue::EARTH_SEMI_MAJOR_AXIS_ID: return AstronomicalConstants::EARTH_SEMI_MAJOR_AXIS;
			case ConstantValue::MOON_RADIUS_MEAN_ID: return AstronomicalConstants::MOON_RADIUS_MEAN;
			case ConstantValue::MOON_MASS_ID: return AstronomicalConstants::MOON_MASS;
			case ConstantValue::MONN_SEMI_MAJOR_AXIS_ID: return AstronomicalConstants::MOON_SEMI_MAJOR_AXIS;
			case ConstantValue::SOLAR_RADIUS_ID: return AstronomicalConstants::SOLAR_RADIUS;
			case ConstantValue::SOLAR_MASS_ID: return AstronomicalConstants::SOLAR_MASS;
			case ConstantValue::MERCURY_RADIUS_MEAN_ID: return AstronomicalConstants::MERCURY_RADIUS_MEAN;
			case ConstantValue::MERCURY_MASS_ID: return AstronomicalConstants::MERCURY_MASS;
			case ConstantValue::MERCURY_SEMI_MAJOR_AXIS_ID: return AstronomicalConstants::MERCURY_SEMI_MAJOR_AXIS;
			case ConstantValue::VENUS_RADIUS_MEAN_ID: return AstronomicalConstants::VENUS_RADIUS_MEAN;
			case ConstantValue::VENUS_MASS_ID: return AstronomicalConstants::VENUS_MASS;
			case ConstantValue::VENUS_SEMI_MAJOR_AXIS_ID: return AstronomicalConstants::VENUS_SEMI_MAJOR_AXIS;
			case ConstantValue::MARS_RADIUS_MEAN_ID: return AstronomicalConstants::MARS_RADIUS_MEAN;
			case ConstantValue::MARS_MASS_ID: return AstronomicalConstants::MARS_MASS;
			case ConstantValue::MARS_SEMI_MAJOR_AXIS_ID: return AstronomicalConstants::MARS_SEMI_MAJOR_AXIS;
			case ConstantValue::JUPITER_RADIUS_MEAN_ID: return AstronomicalConstants::JUPITER_RADIUS_MEAN;
			case ConstantValue::JUPITER_MASS_ID: return AstronomicalConstants::JUPITER_MASS;
			case ConstantValue::JUPITER_SEMI_MAJOR_AXIS_ID: return AstronomicalConstants::JUPITER_SEMI_MAJOR_AXIS;
			case ConstantValue::SATURN_RADIUS_MEAN_ID: return AstronomicalConstants::SATURN_RADIUS_MEAN;
			case ConstantValue::SATURN_MASS_ID: return AstronomicalConstants::SATURN_MASS;
			case ConstantValue::SATURN_SEMI_MAJOR_AXIS_ID: return AstronomicalConstants::SATURN_SEMI_MAJOR_AXIS;
			case ConstantValue::URANUS_RADIUS_MEAN_ID: return AstronomicalConstants::URANUS_RADIUS_MEAN;
			case ConstantValue::URANUS_MASS_ID: return AstronomicalConstants::URANUS_MASS;
			case ConstantValue::URANUS_SEMI_MAJOR_AXIS_ID: return AstronomicalConstants::URANUS_SEMI_MAJOR_AXIS;
			case ConstantValue::NEPTUNE_RADIUS_MEAN_ID: return AstronomicalConstants::NEPTUNE_RADIUS_MEAN;
			case ConstantValue::NEPTUNE_MASS_ID: return AstronomicalConstants::NEPTUNE_MASS;
			case ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_ID: return AstronomicalConstants::NEPTUNE_SEMI_MAJOR_AXIS;
			case ConstantValue::TRUE_ID: return BooleanAlgebra::TRUE;
			case ConstantValue::FALSE_ID: return BooleanAlgebra::FALSE;
			case ConstantValue::NAN_ID: return NOT_A_NUMBER;
			default: return Double::NaN;
		}
	}
} // org::mariuszgromada::math::mxparser::mathcollection
