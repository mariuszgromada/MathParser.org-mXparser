/*
 * @(#)ConstantValue.java        6.0.0    2024-05-19
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
package org.mariuszgromada.math.mxparser.parsertokens;

import org.mariuszgromada.math.mxparser.mXparser;
/**
 * Constant Values - mXparser tokens definition.
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
 * @version        6.0.0
 */
public final class ConstantValue {
	/*
	 * ConstantValue - token type id.
	 */
	public static final int TYPE_ID 							= 9;
	public static String TYPE_DESC = ParserSymbol.NA;
	/*
	 * ConstantValue - tokens id.
	 */
	/* Math Constants */
	public static final int PI_ID 								= 1;
	public static final int EULER_ID 							= 2;
	public static final int EULER_MASCHERONI_ID					= 3;
	public static final int GOLDEN_RATIO_ID						= 4;
	public static final int PLASTIC_ID							= 5;
	public static final int EMBREE_TREFETHEN_ID					= 6;
	public static final int FEIGENBAUM_DELTA_ID					= 7;
	public static final int FEIGENBAUM_ALPHA_ID 				= 8;
	public static final int TWIN_PRIME_ID						= 9;
	public static final int MEISSEL_MERTEENS_ID					= 10;
	public static final int BRAUN_TWIN_PRIME_ID					= 11;
	public static final int BRAUN_PRIME_QUADR_ID				= 12;
	public static final int BRUIJN_NEWMAN_ID					= 13;
	public static final int CATALAN_ID							= 14;
	public static final int LANDAU_RAMANUJAN_ID					= 15;
	public static final int VISWANATH_ID						= 16;
	public static final int LEGENDRE_ID							= 17;
	public static final int RAMANUJAN_SOLDNER_ID				= 18;
	public static final int ERDOS_BORWEIN_ID					= 19;
	public static final int BERNSTEIN_ID						= 20;
	public static final int GAUSS_KUZMIN_WIRSING_ID				= 21;
	public static final int HAFNER_SARNAK_MCCURLEY_ID			= 22;
	public static final int GOLOMB_DICKMAN_ID					= 23;
	public static final int CAHEN_ID							= 24;
	public static final int LAPLACE_LIMIT_ID					= 25;
	public static final int ALLADI_GRINSTEAD_ID					= 26;
	public static final int LENGYEL_ID							= 27;
	public static final int LEVY_ID								= 28;
	public static final int APERY_ID							= 29;
	public static final int MILLS_ID							= 30;
	public static final int BACKHOUSE_ID						= 31;
	public static final int PORTER_ID							= 32;
	public static final int LIEB_QUARE_ICE_ID					= 33;
	public static final int NIVEN_ID							= 34;
	public static final int SIERPINSKI_ID						= 35;
	public static final int KHINCHIN_ID							= 36;
	public static final int FRANSEN_ROBINSON_ID					= 37;
	public static final int LANDAU_ID							= 38;
	public static final int PARABOLIC_ID						= 39;
	public static final int OMEGA_ID							= 40;
	public static final int MRB_ID								= 41;
	public static final int LI2_ID								= 42;
	public static final int GOMPERTZ_ID							= 43;
	/* Physical Constants */
	public static final int LIGHT_SPEED_ID						= 101;
	public static final int GRAVITATIONAL_CONSTANT_ID			= 102;
	public static final int GRAVIT_ACC_EARTH_ID					= 103;
	public static final int PLANCK_CONSTANT_ID					= 104;
	public static final int PLANCK_CONSTANT_REDUCED_ID			= 105;
	public static final int PLANCK_LENGTH_ID					= 106;
	public static final int PLANCK_MASS_ID						= 107;
	public static final int PLANCK_TIME_ID						= 108;
	/* Astronomical Constants */
	public static final int LIGHT_YEAR_ID						= 201;
	public static final int ASTRONOMICAL_UNIT_ID				= 202;
	public static final int PARSEC_ID							= 203;
	public static final int KILOPARSEC_ID						= 204;
	public static final int EARTH_RADIUS_EQUATORIAL_ID			= 205;
	public static final int EARTH_RADIUS_POLAR_ID				= 206;
	public static final int EARTH_RADIUS_MEAN_ID				= 207;
	public static final int EARTH_MASS_ID						= 208;
	public static final int EARTH_SEMI_MAJOR_AXIS_ID			= 209;
	public static final int MOON_RADIUS_MEAN_ID					= 210;
	public static final int MOON_MASS_ID						= 211;
	public static final int MONN_SEMI_MAJOR_AXIS_ID				= 212;
	public static final int SOLAR_RADIUS_ID						= 213;
	public static final int SOLAR_MASS_ID						= 214;
	public static final int MERCURY_RADIUS_MEAN_ID				= 215;
	public static final int MERCURY_MASS_ID						= 216;
	public static final int MERCURY_SEMI_MAJOR_AXIS_ID			= 217;
	public static final int VENUS_RADIUS_MEAN_ID				= 218;
	public static final int VENUS_MASS_ID						= 219;
	public static final int VENUS_SEMI_MAJOR_AXIS_ID			= 220;
	public static final int MARS_RADIUS_MEAN_ID					= 221;
	public static final int MARS_MASS_ID						= 222;
	public static final int MARS_SEMI_MAJOR_AXIS_ID				= 223;
	public static final int JUPITER_RADIUS_MEAN_ID				= 224;
	public static final int JUPITER_MASS_ID						= 225;
	public static final int JUPITER_SEMI_MAJOR_AXIS_ID			= 226;
	public static final int SATURN_RADIUS_MEAN_ID				= 227;
	public static final int SATURN_MASS_ID						= 228;
	public static final int SATURN_SEMI_MAJOR_AXIS_ID			= 229;
	public static final int URANUS_RADIUS_MEAN_ID				= 230;
	public static final int URANUS_MASS_ID						= 231;
	public static final int URANUS_SEMI_MAJOR_AXIS_ID			= 232;
	public static final int NEPTUNE_RADIUS_MEAN_ID				= 233;
	public static final int NEPTUNE_MASS_ID						= 234;
	public static final int NEPTUNE_SEMI_MAJOR_AXIS_ID			= 235;
	/* boolean values */
	public static final int TRUE_ID								= 301;
	public static final int FALSE_ID							= 302;
	/* automatic values */
	public static final int NPAR_ID								= 303;
	/* other values */
	public static final int NAN_ID								= 999;
	public static final int NaN									= -1;
	/*
	 * ConstantValue - tokens key words.
	 */
	public static final String PI_STR 							= "pi";
	public static final String PI_STR_UNI_1						= "π";
	public static final String PI_STR_UNI_2						= "ℼ";
	public static final String EULER_STR 						= "e";
	public static final String EULER_STR_UNI_1					= "ℯ";
	public static final String EULER_STR_UNI_2					= "ⅇ";
	public static final String EULER_MASCHERONI_STR				= "[gam]";
	public static final String GOLDEN_RATIO_STR					= "[phi]";
	public static final String PLASTIC_STR						= "[PN]";
	public static final String EMBREE_TREFETHEN_STR				= "[B*]";
	public static final String FEIGENBAUM_DELTA_STR				= "[F'd]";
	public static final String FEIGENBAUM_ALPHA_STR				= "[F'a]";
	public static final String TWIN_PRIME_STR					= "[C2]";
	public static final String MEISSEL_MERTEENS_STR				= "[M1]";
	public static final String BRAUN_TWIN_PRIME_STR				= "[B2]";
	public static final String BRAUN_PRIME_QUADR_STR			= "[B4]";
	public static final String BRUIJN_NEWMAN_STR				= "[BN'L]";
	public static final String CATALAN_STR						= "[Kat]";
	public static final String LANDAU_RAMANUJAN_STR				= "[K*]";
	public static final String VISWANATH_STR					= "[K.]";
	public static final String LEGENDRE_STR						= "[B'L]";
	public static final String RAMANUJAN_SOLDNER_STR			= "[RS'm]";
	public static final String ERDOS_BORWEIN_STR				= "[EB'e]";
	public static final String BERNSTEIN_STR					= "[Bern]";
	public static final String GAUSS_KUZMIN_WIRSING_STR			= "[GKW'l]";
	public static final String HAFNER_SARNAK_MCCURLEY_STR		= "[HSM's]";
	public static final String GOLOMB_DICKMAN_STR				= "[lm]";
	public static final String CAHEN_STR						= "[Cah]";
	public static final String LAPLACE_LIMIT_STR				= "[Ll]";
	public static final String ALLADI_GRINSTEAD_STR				= "[AG]";
	public static final String LENGYEL_STR						= "[L*]";
	public static final String LEVY_STR							= "[L.]";
	public static final String APERY_STR						= "[Dz3]";
	public static final String MILLS_STR						= "[A3n]";
	public static final String BACKHOUSE_STR					= "[Bh]";
	public static final String PORTER_STR						= "[Pt]";
	public static final String LIEB_QUARE_ICE_STR				= "[L2]";
	public static final String NIVEN_STR						= "[Nv]";
	public static final String SIERPINSKI_STR					= "[Ks]";
	public static final String KHINCHIN_STR						= "[Kh]";
	public static final String FRANSEN_ROBINSON_STR				= "[FR]";
	public static final String LANDAU_STR						= "[La]";
	public static final String PARABOLIC_STR					= "[P2]";
	public static final String OMEGA_STR						= "[Om]";
	public static final String MRB_STR							= "[MRB]";
	public static final String LI2_STR							= "[li2]";
	public static final String GOMPERTZ_STR						= "[EG]";
	/* Physical Constants */
	public static final String LIGHT_SPEED_STR					= "[c]";
	public static final String GRAVITATIONAL_CONSTANT_STR		= "[G.]";
	public static final String GRAVIT_ACC_EARTH_STR				= "[g]";
	public static final String PLANCK_CONSTANT_STR				= "[hP]";
	public static final String PLANCK_CONSTANT_REDUCED_STR		= "[h-]";
	public static final String PLANCK_LENGTH_STR				= "[lP]";
	public static final String PLANCK_MASS_STR					= "[mP]";
	public static final String PLANCK_TIME_STR					= "[tP]";
	/* AstronomicalConstants */
	public static final String LIGHT_YEAR_STR					= "[ly]";
	public static final String ASTRONOMICAL_UNIT_STR			= "[au]";
	public static final String PARSEC_STR						= "[pc]";
	public static final String KILOPARSEC_STR					= "[kpc]";
	public static final String EARTH_RADIUS_EQUATORIAL_STR		= "[Earth-R-eq]";
	public static final String EARTH_RADIUS_POLAR_STR			= "[Earth-R-po]";
	public static final String EARTH_RADIUS_MEAN_STR			= "[Earth-R]";
	public static final String EARTH_MASS_STR					= "[Earth-M]";
	public static final String EARTH_SEMI_MAJOR_AXIS_STR		= "[Earth-D]";
	public static final String MOON_RADIUS_MEAN_STR				= "[Moon-R]";
	public static final String MOON_MASS_STR					= "[Moon-M]";
	public static final String MONN_SEMI_MAJOR_AXIS_STR			= "[Moon-D]";
	public static final String SOLAR_RADIUS_STR					= "[Solar-R]";
	public static final String SOLAR_MASS_STR					= "[Solar-M]";
	public static final String MERCURY_RADIUS_MEAN_STR			= "[Mercury-R]";
	public static final String MERCURY_MASS_STR					= "[Mercury-M]";
	public static final String MERCURY_SEMI_MAJOR_AXIS_STR		= "[Mercury-D]";
	public static final String VENUS_RADIUS_MEAN_STR			= "[Venus-R]";
	public static final String VENUS_MASS_STR					= "[Venus-M]";
	public static final String VENUS_SEMI_MAJOR_AXIS_STR		= "[Venus-D]";
	public static final String MARS_RADIUS_MEAN_STR				= "[Mars-R]";
	public static final String MARS_MASS_STR					= "[Mars-M]";
	public static final String MARS_SEMI_MAJOR_AXIS_STR			= "[Mars-D]";
	public static final String JUPITER_RADIUS_MEAN_STR			= "[Jupiter-R]";
	public static final String JUPITER_MASS_STR					= "[Jupiter-M]";
	public static final String JUPITER_SEMI_MAJOR_AXIS_STR		= "[Jupiter-D]";
	public static final String SATURN_RADIUS_MEAN_STR			= "[Saturn-R]";
	public static final String SATURN_MASS_STR					= "[Saturn-M]";
	public static final String SATURN_SEMI_MAJOR_AXIS_STR		= "[Saturn-D]";
	public static final String URANUS_RADIUS_MEAN_STR			= "[Uranus-R]";
	public static final String URANUS_MASS_STR					= "[Uranus-M]";
	public static final String URANUS_SEMI_MAJOR_AXIS_STR		= "[Uranus-D]";
	public static final String NEPTUNE_RADIUS_MEAN_STR			= "[Neptune-R]";
	public static final String NEPTUNE_MASS_STR					= "[Neptune-M]";
	public static final String NEPTUNE_SEMI_MAJOR_AXIS_STR		= "[Neptune-D]";
	/* boolean values */
	public static final String TRUE_STR							= "[true]";
	public static final String FALSE_STR						= "[false]";
	/* automatic values */
	public static final String NPAR_STR							= "[npar]";
	/* other values */
	public static final String NAN_STR							= "[NaN]";
	/*
	 * ConstantValue - syntax.
	 */
	public static final String PI_SYN							= PI_STR;
	public static final String PI_SYN_UNI_1						= PI_STR_UNI_1;
	public static final String PI_SYN_UNI_2						= PI_STR_UNI_2;
	public static final String EULER_SYN						= EULER_STR;
	public static final String EULER_SYN_UNI_1					= EULER_STR_UNI_1;
	public static final String EULER_SYN_UNI_2					= EULER_STR_UNI_2;
	public static final String EULER_MASCHERONI_SYN				= EULER_MASCHERONI_STR;
	public static final String GOLDEN_RATIO_SYN					= GOLDEN_RATIO_STR;
	public static final String PLASTIC_SYN						= PLASTIC_STR;
	public static final String EMBREE_TREFETHEN_SYN				= EMBREE_TREFETHEN_STR;
	public static final String FEIGENBAUM_DELTA_SYN				= FEIGENBAUM_DELTA_STR;
	public static final String FEIGENBAUM_ALPHA_SYN				= FEIGENBAUM_ALPHA_STR;
	public static final String TWIN_PRIME_SYN					= TWIN_PRIME_STR;
	public static final String MEISSEL_MERTEENS_SYN				= MEISSEL_MERTEENS_STR;
	public static final String BRAUN_TWIN_PRIME_SYN				= BRAUN_TWIN_PRIME_STR;
	public static final String BRAUN_PRIME_QUADR_SYN			= BRAUN_PRIME_QUADR_STR;
	public static final String BRUIJN_NEWMAN_SYN				= BRUIJN_NEWMAN_STR;
	public static final String CATALAN_SYN						= CATALAN_STR;
	public static final String LANDAU_RAMANUJAN_SYN				= LANDAU_RAMANUJAN_STR;
	public static final String VISWANATH_SYN					= VISWANATH_STR;
	public static final String LEGENDRE_SYN						= LEGENDRE_STR;
	public static final String RAMANUJAN_SOLDNER_SYN			= RAMANUJAN_SOLDNER_STR;
	public static final String ERDOS_BORWEIN_SYN				= ERDOS_BORWEIN_STR;
	public static final String BERNSTEIN_SYN					= BERNSTEIN_STR;
	public static final String GAUSS_KUZMIN_WIRSING_SYN			= GAUSS_KUZMIN_WIRSING_STR;
	public static final String HAFNER_SARNAK_MCCURLEY_SYN		= HAFNER_SARNAK_MCCURLEY_STR;
	public static final String GOLOMB_DICKMAN_SYN				= GOLOMB_DICKMAN_STR;
	public static final String CAHEN_SYN						= CAHEN_STR;
	public static final String LAPLACE_LIMIT_SYN				= LAPLACE_LIMIT_STR;
	public static final String ALLADI_GRINSTEAD_SYN				= ALLADI_GRINSTEAD_STR;
	public static final String LENGYEL_SYN						= LENGYEL_STR;
	public static final String LEVY_SYN							= LEVY_STR;
	public static final String APERY_SYN						= APERY_STR;
	public static final String MILLS_SYN						= MILLS_STR;
	public static final String BACKHOUSE_SYN					= BACKHOUSE_STR;
	public static final String PORTER_SYN						= PORTER_STR;
	public static final String LIEB_QUARE_ICE_SYN				= LIEB_QUARE_ICE_STR;
	public static final String NIVEN_SYN						= NIVEN_STR;
	public static final String SIERPINSKI_SYN					= SIERPINSKI_STR;
	public static final String KHINCHIN_SYN						= KHINCHIN_STR;
	public static final String FRANSEN_ROBINSON_SYN				= FRANSEN_ROBINSON_STR;
	public static final String LANDAU_SYN						= LANDAU_STR;
	public static final String PARABOLIC_SYN					= PARABOLIC_STR;
	public static final String OMEGA_SYN						= OMEGA_STR;
	public static final String MRB_SYN							= MRB_STR;
	public static final String LI2_SYN							= LI2_STR;
	public static final String GOMPERTZ_SYN						= GOMPERTZ_STR;
	/* Physical Constants */
	public static final String LIGHT_SPEED_SYN					= LIGHT_SPEED_STR;
	public static final String GRAVITATIONAL_CONSTANT_SYN		= GRAVITATIONAL_CONSTANT_STR;
	public static final String GRAVIT_ACC_EARTH_SYN				= GRAVIT_ACC_EARTH_STR;
	public static final String PLANCK_CONSTANT_SYN				= PLANCK_CONSTANT_STR;
	public static final String PLANCK_CONSTANT_REDUCED_SYN		= PLANCK_CONSTANT_REDUCED_STR;
	public static final String PLANCK_LENGTH_SYN				= PLANCK_LENGTH_STR;
	public static final String PLANCK_MASS_SYN					= PLANCK_MASS_STR;
	public static final String PLANCK_TIME_SYN					= PLANCK_TIME_STR;
	/* AstronomicalConstants */
	public static final String LIGHT_YEAR_SYN					= LIGHT_YEAR_STR;
	public static final String ASTRONOMICAL_UNIT_SYN			= ASTRONOMICAL_UNIT_STR;
	public static final String PARSEC_SYN						= PARSEC_STR;
	public static final String KILOPARSEC_SYN					= KILOPARSEC_STR;
	public static final String EARTH_RADIUS_EQUATORIAL_SYN		= EARTH_RADIUS_EQUATORIAL_STR;
	public static final String EARTH_RADIUS_POLAR_SYN			= EARTH_RADIUS_POLAR_STR;
	public static final String EARTH_RADIUS_MEAN_SYN			= EARTH_RADIUS_MEAN_STR;
	public static final String EARTH_MASS_SYN					= EARTH_MASS_STR;
	public static final String EARTH_SEMI_MAJOR_AXIS_SYN		= EARTH_SEMI_MAJOR_AXIS_STR;
	public static final String MOON_RADIUS_MEAN_SYN				= MOON_RADIUS_MEAN_STR;
	public static final String MOON_MASS_SYN					= MOON_MASS_STR;
	public static final String MONN_SEMI_MAJOR_AXIS_SYN			= MONN_SEMI_MAJOR_AXIS_STR;
	public static final String SOLAR_RADIUS_SYN					= SOLAR_RADIUS_STR;
	public static final String SOLAR_MASS_SYN					= SOLAR_MASS_STR;
	public static final String MERCURY_RADIUS_MEAN_SYN			= MERCURY_RADIUS_MEAN_STR;
	public static final String MERCURY_MASS_SYN					= MERCURY_MASS_STR;
	public static final String MERCURY_SEMI_MAJOR_AXIS_SYN		= MERCURY_SEMI_MAJOR_AXIS_STR;
	public static final String VENUS_RADIUS_MEAN_SYN			= VENUS_RADIUS_MEAN_STR;
	public static final String VENUS_MASS_SYN					= VENUS_MASS_STR;
	public static final String VENUS_SEMI_MAJOR_AXIS_SYN		= VENUS_SEMI_MAJOR_AXIS_STR;
	public static final String MARS_RADIUS_MEAN_SYN				= MARS_RADIUS_MEAN_STR;
	public static final String MARS_MASS_SYN					= MARS_MASS_STR;
	public static final String MARS_SEMI_MAJOR_AXIS_SYN			= MARS_SEMI_MAJOR_AXIS_STR;
	public static final String JUPITER_RADIUS_MEAN_SYN			= JUPITER_RADIUS_MEAN_STR;
	public static final String JUPITER_MASS_SYN					= JUPITER_MASS_STR;
	public static final String JUPITER_SEMI_MAJOR_AXIS_SYN		= JUPITER_SEMI_MAJOR_AXIS_STR;
	public static final String SATURN_RADIUS_MEAN_SYN			= SATURN_RADIUS_MEAN_STR;
	public static final String SATURN_MASS_SYN					= SATURN_MASS_STR;
	public static final String SATURN_SEMI_MAJOR_AXIS_SYN		= SATURN_SEMI_MAJOR_AXIS_STR;
	public static final String URANUS_RADIUS_MEAN_SYN			= URANUS_RADIUS_MEAN_STR;
	public static final String URANUS_MASS_SYN					= URANUS_MASS_STR;
	public static final String URANUS_SEMI_MAJOR_AXIS_SYN		= URANUS_SEMI_MAJOR_AXIS_STR;
	public static final String NEPTUNE_RADIUS_MEAN_SYN			= NEPTUNE_RADIUS_MEAN_STR;
	public static final String NEPTUNE_MASS_SYN					= NEPTUNE_MASS_STR;
	public static final String NEPTUNE_SEMI_MAJOR_AXIS_SYN		= NEPTUNE_SEMI_MAJOR_AXIS_STR;
	/* boolean values */
	public static final String TRUE_SYN							= TRUE_STR;
	public static final String FALSE_SYN						= FALSE_STR;
	/* automatic values */
	public static final String NPAR_SYN							= NPAR_STR;
	/* other values */
	public static final String NAN_SYN							= NAN_STR;
	/*
	 * ConstantValue - tokens description.
	 */
	public static String PI_DESC = ParserSymbol.NA;
	public static String EULER_DESC = ParserSymbol.NA;
	public static String EULER_MASCHERONI_DESC = ParserSymbol.NA;
	public static String GOLDEN_RATIO_DESC = ParserSymbol.NA;
	public static String PLASTIC_DESC = ParserSymbol.NA;
	public static String EMBREE_TREFETHEN_DESC = ParserSymbol.NA;
	public static String FEIGENBAUM_DELTA_DESC = ParserSymbol.NA;
	public static String FEIGENBAUM_ALPHA_DESC = ParserSymbol.NA;
	public static String TWIN_PRIME_DESC = ParserSymbol.NA;
	public static String MEISSEL_MERTEENS_DESC = ParserSymbol.NA;
	public static String BRAUN_TWIN_PRIME_DESC = ParserSymbol.NA;
	public static String BRAUN_PRIME_QUADR_DESC = ParserSymbol.NA;
	public static String BRUIJN_NEWMAN_DESC = ParserSymbol.NA;
	public static String CATALAN_DESC = ParserSymbol.NA;
	public static String LANDAU_RAMANUJAN_DESC = ParserSymbol.NA;
	public static String VISWANATH_DESC = ParserSymbol.NA;
	public static String LEGENDRE_DESC = ParserSymbol.NA;
	public static String RAMANUJAN_SOLDNER_DESC = ParserSymbol.NA;
	public static String ERDOS_BORWEIN_DESC = ParserSymbol.NA;
	public static String BERNSTEIN_DESC = ParserSymbol.NA;
	public static String GAUSS_KUZMIN_WIRSING_DESC = ParserSymbol.NA;
	public static String HAFNER_SARNAK_MCCURLEY_DESC = ParserSymbol.NA;
	public static String GOLOMB_DICKMAN_DESC = ParserSymbol.NA;
	public static String CAHEN_DESC = ParserSymbol.NA;
	public static String LAPLACE_LIMIT_DESC = ParserSymbol.NA;
	public static String ALLADI_GRINSTEAD_DESC = ParserSymbol.NA;
	public static String LENGYEL_DESC = ParserSymbol.NA;
	public static String LEVY_DESC = ParserSymbol.NA;
	public static String APERY_DESC = ParserSymbol.NA;
	public static String MILLS_DESC = ParserSymbol.NA;
	public static String BACKHOUSE_DESC = ParserSymbol.NA;
	public static String PORTER_DESC = ParserSymbol.NA;
	public static String LIEB_QUARE_ICE_DESC = ParserSymbol.NA;
	public static String NIVEN_DESC = ParserSymbol.NA;
	public static String SIERPINSKI_DESC = ParserSymbol.NA;
	public static String KHINCHIN_DESC = ParserSymbol.NA;
	public static String FRANSEN_ROBINSON_DESC = ParserSymbol.NA;
	public static String LANDAU_DESC = ParserSymbol.NA;
	public static String PARABOLIC_DESC = ParserSymbol.NA;
	public static String OMEGA_DESC = ParserSymbol.NA;
	public static String MRB_DESC = ParserSymbol.NA;
	public static String LI2_DESC = ParserSymbol.NA;
	public static String GOMPERTZ_DESC = ParserSymbol.NA;
	public static String LIGHT_SPEED_DESC = ParserSymbol.NA;
	public static String GRAVITATIONAL_CONSTANT_DESC = ParserSymbol.NA;
	public static String GRAVIT_ACC_EARTH_DESC = ParserSymbol.NA;
	public static String PLANCK_CONSTANT_DESC = ParserSymbol.NA;
	public static String PLANCK_CONSTANT_REDUCED_DESC = ParserSymbol.NA;
	public static String PLANCK_LENGTH_DESC = ParserSymbol.NA;
	public static String PLANCK_MASS_DESC = ParserSymbol.NA;
	public static String PLANCK_TIME_DESC = ParserSymbol.NA;
	public static String LIGHT_YEAR_DESC = ParserSymbol.NA;
	public static String ASTRONOMICAL_UNIT_DESC = ParserSymbol.NA;
	public static String PARSEC_DESC = ParserSymbol.NA;
	public static String KILOPARSEC_DESC = ParserSymbol.NA;
	public static String EARTH_RADIUS_EQUATORIAL_DESC = ParserSymbol.NA;
	public static String EARTH_RADIUS_POLAR_DESC = ParserSymbol.NA;
	public static String EARTH_RADIUS_MEAN_DESC = ParserSymbol.NA;
	public static String EARTH_MASS_DESC = ParserSymbol.NA;
	public static String EARTH_SEMI_MAJOR_AXIS_DESC = ParserSymbol.NA;
	public static String MOON_RADIUS_MEAN_DESC = ParserSymbol.NA;
	public static String MOON_MASS_DESC = ParserSymbol.NA;
	public static String MOON_SEMI_MAJOR_AXIS_DESC = ParserSymbol.NA;
	public static String SOLAR_RADIUS_DESC = ParserSymbol.NA;
	public static String SOLAR_MASS_DESC = ParserSymbol.NA;
	public static String MERCURY_RADIUS_MEAN_DESC = ParserSymbol.NA;
	public static String MERCURY_MASS_DESC = ParserSymbol.NA;
	public static String MERCURY_SEMI_MAJOR_AXIS_DESC = ParserSymbol.NA;
	public static String VENUS_RADIUS_MEAN_DESC = ParserSymbol.NA;
	public static String VENUS_MASS_DESC = ParserSymbol.NA;
	public static String VENUS_SEMI_MAJOR_AXIS_DESC = ParserSymbol.NA;
	public static String MARS_RADIUS_MEAN_DESC = ParserSymbol.NA;
	public static String MARS_MASS_DESC = ParserSymbol.NA;
	public static String MARS_SEMI_MAJOR_AXIS_DESC = ParserSymbol.NA;
	public static String JUPITER_RADIUS_MEAN_DESC = ParserSymbol.NA;
	public static String JUPITER_MASS_DESC = ParserSymbol.NA;
	public static String JUPITER_SEMI_MAJOR_AXIS_DESC = ParserSymbol.NA;
	public static String SATURN_RADIUS_MEAN_DESC = ParserSymbol.NA;
	public static String SATURN_MASS_DESC = ParserSymbol.NA;
	public static String SATURN_SEMI_MAJOR_AXIS_DESC = ParserSymbol.NA;
	public static String URANUS_RADIUS_MEAN_DESC = ParserSymbol.NA;
	public static String URANUS_MASS_DESC = ParserSymbol.NA;
	public static String URANUS_SEMI_MAJOR_AXIS_DESC = ParserSymbol.NA;
	public static String NEPTUNE_RADIUS_MEAN_DESC = ParserSymbol.NA;
	public static String NEPTUNE_MASS_DESC = ParserSymbol.NA;
	public static String NEPTUNE_SEMI_MAJOR_AXIS_DESC = ParserSymbol.NA;
	public static String TRUE_DESC = ParserSymbol.NA;
	public static String FALSE_DESC = ParserSymbol.NA;
	public static String NPAR_DESC = ParserSymbol.NA;
	public static String NAN_DESC = ParserSymbol.NA;
	/*
	 * ConstantValue - since.
	 */
	public static final String PI_SINCE							= mXparser.NAMEv10;
	public static final String PI_SINCE_UNI_1					= mXparser.NAMEv50;
	public static final String PI_SINCE_UNI_2					= mXparser.NAMEv50;
	public static final String EULER_SINCE						= mXparser.NAMEv10;
	public static final String EULER_SINCE_UNI_1				= mXparser.NAMEv50;
	public static final String EULER_SINCE_UNI_2				= mXparser.NAMEv50;
	public static final String EULER_MASCHERONI_SINCE			= mXparser.NAMEv10;
	public static final String GOLDEN_RATIO_SINCE				= mXparser.NAMEv10;
	public static final String PLASTIC_SINCE					= mXparser.NAMEv10;
	public static final String EMBREE_TREFETHEN_SINCE			= mXparser.NAMEv10;
	public static final String FEIGENBAUM_DELTA_SINCE			= mXparser.NAMEv10;
	public static final String FEIGENBAUM_ALPHA_SINCE			= mXparser.NAMEv10;
	public static final String TWIN_PRIME_SINCE					= mXparser.NAMEv10;
	public static final String MEISSEL_MERTEENS_SINCE			= mXparser.NAMEv10;
	public static final String BRAUN_TWIN_PRIME_SINCE			= mXparser.NAMEv10;
	public static final String BRAUN_PRIME_QUADR_SINCE			= mXparser.NAMEv10;
	public static final String BRUIJN_NEWMAN_SINCE				= mXparser.NAMEv10;
	public static final String CATALAN_SINCE					= mXparser.NAMEv10;
	public static final String LANDAU_RAMANUJAN_SINCE			= mXparser.NAMEv10;
	public static final String VISWANATH_SINCE					= mXparser.NAMEv10;
	public static final String LEGENDRE_SINCE					= mXparser.NAMEv10;
	public static final String RAMANUJAN_SOLDNER_SINCE			= mXparser.NAMEv10;
	public static final String ERDOS_BORWEIN_SINCE				= mXparser.NAMEv10;
	public static final String BERNSTEIN_SINCE					= mXparser.NAMEv10;
	public static final String GAUSS_KUZMIN_WIRSING_SINCE		= mXparser.NAMEv10;
	public static final String HAFNER_SARNAK_MCCURLEY_SINCE		= mXparser.NAMEv10;
	public static final String GOLOMB_DICKMAN_SINCE				= mXparser.NAMEv10;
	public static final String CAHEN_SINCE						= mXparser.NAMEv10;
	public static final String LAPLACE_LIMIT_SINCE				= mXparser.NAMEv10;
	public static final String ALLADI_GRINSTEAD_SINCE			= mXparser.NAMEv10;
	public static final String LENGYEL_SINCE					= mXparser.NAMEv10;
	public static final String LEVY_SINCE						= mXparser.NAMEv10;
	public static final String APERY_SINCE						= mXparser.NAMEv10;
	public static final String MILLS_SINCE						= mXparser.NAMEv10;
	public static final String BACKHOUSE_SINCE					= mXparser.NAMEv10;
	public static final String PORTER_SINCE						= mXparser.NAMEv10;
	public static final String LIEB_QUARE_ICE_SINCE				= mXparser.NAMEv10;
	public static final String NIVEN_SINCE						= mXparser.NAMEv10;
	public static final String SIERPINSKI_SINCE					= mXparser.NAMEv10;
	public static final String KHINCHIN_SINCE					= mXparser.NAMEv10;
	public static final String FRANSEN_ROBINSON_SINCE			= mXparser.NAMEv10;
	public static final String LANDAU_SINCE						= mXparser.NAMEv10;
	public static final String PARABOLIC_SINCE					= mXparser.NAMEv10;
	public static final String OMEGA_SINCE						= mXparser.NAMEv10;
	public static final String MRB_SINCE						= mXparser.NAMEv10;
	public static final String LI2_SINCE						= mXparser.NAMEv23;
	public static final String GOMPERTZ_SINCE					= mXparser.NAMEv23;
	/* Physical Constants */
	public static final String LIGHT_SPEED_SINCE				= mXparser.NAMEv40;
	public static final String GRAVITATIONAL_CONSTANT_SINCE		= mXparser.NAMEv40;
	public static final String GRAVIT_ACC_EARTH_SINCE			= mXparser.NAMEv40;
	public static final String PLANCK_CONSTANT_SINCE			= mXparser.NAMEv40;
	public static final String PLANCK_CONSTANT_REDUCED_SINCE	= mXparser.NAMEv40;
	public static final String PLANCK_LENGTH_SINCE				= mXparser.NAMEv40;
	public static final String PLANCK_MASS_SINCE				= mXparser.NAMEv40;
	public static final String PLANCK_TIME_SINCE				= mXparser.NAMEv40;
	/* AstronomicalConstants */
	public static final String LIGHT_YEAR_SINCE					= mXparser.NAMEv40;
	public static final String ASTRONOMICAL_UNIT_SINCE			= mXparser.NAMEv40;
	public static final String PARSEC_SINCE						= mXparser.NAMEv40;
	public static final String KILOPARSEC_SINCE					= mXparser.NAMEv40;
	public static final String EARTH_RADIUS_EQUATORIAL_SINCE	= mXparser.NAMEv40;
	public static final String EARTH_RADIUS_POLAR_SINCE			= mXparser.NAMEv40;
	public static final String EARTH_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String EARTH_MASS_SINCE					= mXparser.NAMEv40;
	public static final String EARTH_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String MOON_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String MOON_MASS_SINCE					= mXparser.NAMEv40;
	public static final String MONN_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String SOLAR_RADIUS_SINCE				= mXparser.NAMEv40;
	public static final String SOLAR_MASS_SINCE					= mXparser.NAMEv40;
	public static final String MERCURY_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
	public static final String MERCURY_MASS_SINCE				= mXparser.NAMEv40;
	public static final String MERCURY_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
	public static final String VENUS_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String VENUS_MASS_SINCE					= mXparser.NAMEv40;
	public static final String VENUS_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String MARS_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String MARS_MASS_SINCE					= mXparser.NAMEv40;
	public static final String MARS_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String JUPITER_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
	public static final String JUPITER_MASS_SINCE				= mXparser.NAMEv40;
	public static final String JUPITER_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
	public static final String SATURN_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String SATURN_MASS_SINCE				= mXparser.NAMEv40;
	public static final String SATURN_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String URANUS_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String URANUS_MASS_SINCE				= mXparser.NAMEv40;
	public static final String URANUS_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String NEPTUNE_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
	public static final String NEPTUNE_MASS_SINCE				= mXparser.NAMEv40;
	public static final String NEPTUNE_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
	/* boolean values */
	public static final String TRUE_SINCE						= mXparser.NAMEv41;
	public static final String FALSE_SINCE						= mXparser.NAMEv41;
	/* automatic values */
	public static final String NPAR_SINCE						= mXparser.NAMEv42;
	/* other values */
	public static final String NAN_SINCE						= mXparser.NAMEv41;
}