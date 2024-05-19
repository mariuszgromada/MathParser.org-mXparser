/*
 * @(#)ConstantValue.cs        6.0.0    2024-05-19
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
	[CLSCompliant(true)]
	public sealed class ConstantValue {
		/*
		 * ConstantValue - token type id.
		 */
		public const int TYPE_ID							= 9;
        public static String TYPE_DESC = ParserSymbol.NA;
        /*
		 * ConstantValue - tokens id.
		 */
        /* Math Constants */
        public const int PI_ID								= 1;
		public const int EULER_ID							= 2;
		public const int EULER_MASCHERONI_ID				= 3;
		public const int GOLDEN_RATIO_ID					= 4;
		public const int PLASTIC_ID							= 5;
		public const int EMBREE_TREFETHEN_ID				= 6;
		public const int FEIGENBAUM_DELTA_ID				= 7;
		public const int FEIGENBAUM_ALPHA_ID				= 8;
		public const int TWIN_PRIME_ID						= 9;
		public const int MEISSEL_MERTEENS_ID				= 10;
		public const int BRAUN_TWIN_PRIME_ID				= 11;
		public const int BRAUN_PRIME_QUADR_ID				= 12;
		public const int BRUIJN_NEWMAN_ID					= 13;
		public const int CATALAN_ID							= 14;
		public const int LANDAU_RAMANUJAN_ID				= 15;
		public const int VISWANATH_ID						= 16;
		public const int LEGENDRE_ID						= 17;
		public const int RAMANUJAN_SOLDNER_ID				= 18;
		public const int ERDOS_BORWEIN_ID					= 19;
		public const int BERNSTEIN_ID						= 20;
		public const int GAUSS_KUZMIN_WIRSING_ID			= 21;
		public const int HAFNER_SARNAK_MCCURLEY_ID			= 22;
		public const int GOLOMB_DICKMAN_ID					= 23;
		public const int CAHEN_ID							= 24;
		public const int LAPLACE_LIMIT_ID					= 25;
		public const int ALLADI_GRINSTEAD_ID				= 26;
		public const int LENGYEL_ID							= 27;
		public const int LEVY_ID							= 28;
		public const int APERY_ID							= 29;
		public const int MILLS_ID							= 30;
		public const int BACKHOUSE_ID						= 31;
		public const int PORTER_ID							= 32;
		public const int LIEB_QUARE_ICE_ID					= 33;
		public const int NIVEN_ID							= 34;
		public const int SIERPINSKI_ID						= 35;
		public const int KHINCHIN_ID						= 36;
		public const int FRANSEN_ROBINSON_ID				= 37;
		public const int LANDAU_ID							= 38;
		public const int PARABOLIC_ID						= 39;
		public const int OMEGA_ID							= 40;
		public const int MRB_ID								= 41;
		public const int LI2_ID								= 42;
		public const int GOMPERTZ_ID						= 43;
		/* Physical Constants */
		public const int LIGHT_SPEED_ID						= 101;
		public const int GRAVITATIONAL_CONSTANT_ID			= 102;
		public const int GRAVIT_ACC_EARTH_ID				= 103;
		public const int PLANCK_CONSTANT_ID					= 104;
		public const int PLANCK_CONSTANT_REDUCED_ID			= 105;
		public const int PLANCK_LENGTH_ID					= 106;
		public const int PLANCK_MASS_ID						= 107;
		public const int PLANCK_TIME_ID						= 108;
		/* Astronomical Constants */
		public const int LIGHT_YEAR_ID						= 201;
		public const int ASTRONOMICAL_UNIT_ID				= 202;
		public const int PARSEC_ID							= 203;
		public const int KILOPARSEC_ID						= 204;
		public const int EARTH_RADIUS_EQUATORIAL_ID			= 205;
		public const int EARTH_RADIUS_POLAR_ID				= 206;
		public const int EARTH_RADIUS_MEAN_ID				= 207;
		public const int EARTH_MASS_ID						= 208;
		public const int EARTH_SEMI_MAJOR_AXIS_ID			= 209;
		public const int MOON_RADIUS_MEAN_ID				= 210;
		public const int MOON_MASS_ID						= 211;
		public const int MOO_SEMI_MAJOR_AXIS_ID				= 212;
		public const int SOLAR_RADIUS_ID					= 213;
		public const int SOLAR_MASS_ID						= 214;
		public const int MERCURY_RADIUS_MEAN_ID				= 215;
		public const int MERCURY_MASS_ID					= 216;
		public const int MERCURY_SEMI_MAJOR_AXIS_ID			= 217;
		public const int VENUS_RADIUS_MEAN_ID				= 218;
		public const int VENUS_MASS_ID						= 219;
		public const int VENUS_SEMI_MAJOR_AXIS_ID			= 220;
		public const int MARS_RADIUS_MEAN_ID				= 221;
		public const int MARS_MASS_ID						= 222;
		public const int MARS_SEMI_MAJOR_AXIS_ID			= 223;
		public const int JUPITER_RADIUS_MEAN_ID				= 224;
		public const int JUPITER_MASS_ID					= 225;
		public const int JUPITER_SEMI_MAJOR_AXIS_ID			= 226;
		public const int SATURN_RADIUS_MEAN_ID				= 227;
		public const int SATURN_MASS_ID						= 228;
		public const int SATURN_SEMI_MAJOR_AXIS_ID			= 229;
		public const int URANUS_RADIUS_MEAN_ID				= 230;
		public const int URANUS_MASS_ID						= 231;
		public const int URANUS_SEMI_MAJOR_AXIS_ID			= 232;
		public const int NEPTUNE_RADIUS_MEAN_ID				= 233;
		public const int NEPTUNE_MASS_ID					= 234;
		public const int NEPTUNE_SEMI_MAJOR_AXIS_ID			= 235;
		/* boolean values */
		public const int TRUE_ID							= 301;
		public const int FALSE_ID							= 302;
		/* automatic values */
		public const int NPAR_ID							= 303;
		/* other values */
		public const int NAN_ID								= 999;
		public const int NaN								= -1;
		/*
		 * ConstantValue - tokens key words.
		 */
		public const String PI_STR 							= "pi";
		public const String PI_STR_UNI_1					= "π";
		public const String PI_STR_UNI_2					= "ℼ";
		public const String EULER_STR 						= "e";
		public const String EULER_STR_UNI_1					= "ℯ";
		public const String EULER_STR_UNI_2					= "ⅇ";
		public const String EULER_MASCHERONI_STR			= "[gam]";
		public const String GOLDEN_RATIO_STR				= "[phi]";
		public const String PLASTIC_STR						= "[PN]";
		public const String EMBREE_TREFETHEN_STR			= "[B*]";
		public const String FEIGENBAUM_DELTA_STR			= "[F'd]";
		public const String FEIGENBAUM_ALPHA_STR			= "[F'a]";
		public const String TWIN_PRIME_STR					= "[C2]";
		public const String MEISSEL_MERTEENS_STR			= "[M1]";
		public const String BRAUN_TWIN_PRIME_STR			= "[B2]";
		public const String BRAUN_PRIME_QUADR_STR			= "[B4]";
		public const String BRUIJN_NEWMAN_STR				= "[BN'L]";
		public const String CATALAN_STR						= "[Kat]";
		public const String LANDAU_RAMANUJAN_STR			= "[K*]";
		public const String VISWANATH_STR					= "[K.]";
		public const String LEGENDRE_STR					= "[B'L]";
		public const String RAMANUJAN_SOLDNER_STR			= "[RS'm]";
		public const String ERDOS_BORWEIN_STR				= "[EB'e]";
		public const String BERNSTEIN_STR					= "[Bern]";
		public const String GAUSS_KUZMIN_WIRSING_STR		= "[GKW'l]";
		public const String HAFNER_SARNAK_MCCURLEY_STR		= "[HSM's]";
		public const String GOLOMB_DICKMAN_STR				= "[lm]";
		public const String CAHEN_STR						= "[Cah]";
		public const String LAPLACE_LIMIT_STR				= "[Ll]";
		public const String ALLADI_GRINSTEAD_STR			= "[AG]";
		public const String LENGYEL_STR						= "[L*]";
		public const String LEVY_STR						= "[L.]";
		public const String APERY_STR						= "[Dz3]";
		public const String MILLS_STR						= "[A3n]";
		public const String BACKHOUSE_STR					= "[Bh]";
		public const String PORTER_STR						= "[Pt]";
		public const String LIEB_QUARE_ICE_STR				= "[L2]";
		public const String NIVEN_STR						= "[Nv]";
		public const String SIERPINSKI_STR					= "[Ks]";
		public const String KHINCHIN_STR					= "[Kh]";
		public const String FRANSEN_ROBINSON_STR			= "[FR]";
		public const String LANDAU_STR						= "[La]";
		public const String PARABOLIC_STR					= "[P2]";
		public const String OMEGA_STR						= "[Om]";
		public const String MRB_STR							= "[MRB]";
		public const String LI2_STR							= "[li2]";
		public const String GOMPERTZ_STR					= "[EG]";
		/* Physical Constants */
		public const String LIGHT_SPEED_STR					= "[c]";
		public const String GRAVITATIONAL_CONSTANT_STR		= "[G.]";
		public const String GRAVIT_ACC_EARTH_STR			= "[g]";
		public const String PLANCK_CONSTANT_STR				= "[hP]";
		public const String PLANCK_CONSTANT_REDUCED_STR		= "[h-]";
		public const String PLANCK_LENGTH_STR				= "[lP]";
		public const String PLANCK_MASS_STR					= "[mP]";
		public const String PLANCK_TIME_STR					= "[tP]";
		/* AstronomicalConstants */
		public const String LIGHT_YEAR_STR					= "[ly]";
		public const String ASTRONOMICAL_UNIT_STR			= "[au]";
		public const String PARSEC_STR						= "[pc]";
		public const String KILOPARSEC_STR					= "[kpc]";
		public const String EARTH_RADIUS_EQUATORIAL_STR		= "[Earth-R-eq]";
		public const String EARTH_RADIUS_POLAR_STR			= "[Earth-R-po]";
		public const String EARTH_RADIUS_MEAN_STR			= "[Earth-R]";
		public const String EARTH_MASS_STR					= "[Earth-M]";
		public const String EARTH_SEMI_MAJOR_AXIS_STR		= "[Earth-D]";
		public const String MOON_RADIUS_MEAN_STR			= "[Moon-R]";
		public const String MOON_MASS_STR					= "[Moon-M]";
		public const String MONN_SEMI_MAJOR_AXIS_STR		= "[Moon-D]";
		public const String SOLAR_RADIUS_STR				= "[Solar-R]";
		public const String SOLAR_MASS_STR					= "[Solar-M]";
		public const String MERCURY_RADIUS_MEAN_STR			= "[Mercury-R]";
		public const String MERCURY_MASS_STR				= "[Mercury-M]";
		public const String MERCURY_SEMI_MAJOR_AXIS_STR		= "[Mercury-D]";
		public const String VENUS_RADIUS_MEAN_STR			= "[Venus-R]";
		public const String VENUS_MASS_STR					= "[Venus-M]";
		public const String VENUS_SEMI_MAJOR_AXIS_STR		= "[Venus-D]";
		public const String MARS_RADIUS_MEAN_STR			= "[Mars-R]";
		public const String MARS_MASS_STR					= "[Mars-M]";
		public const String MARS_SEMI_MAJOR_AXIS_STR		= "[Mars-D]";
		public const String JUPITER_RADIUS_MEAN_STR			= "[Jupiter-R]";
		public const String JUPITER_MASS_STR				= "[Jupiter-M]";
		public const String JUPITER_SEMI_MAJOR_AXIS_STR		= "[Jupiter-D]";
		public const String SATURN_RADIUS_MEAN_STR			= "[Saturn-R]";
		public const String SATURN_MASS_STR					= "[Saturn-M]";
		public const String SATURN_SEMI_MAJOR_AXIS_STR		= "[Saturn-D]";
		public const String URANUS_RADIUS_MEAN_STR			= "[Uranus-R]";
		public const String URANUS_MASS_STR					= "[Uranus-M]";
		public const String URANUS_SEMI_MAJOR_AXIS_STR		= "[Uranus-D]";
		public const String NEPTUNE_RADIUS_MEAN_STR			= "[Neptune-R]";
		public const String NEPTUNE_MASS_STR				= "[Neptune-M]";
		public const String NEPTUNE_SEMI_MAJOR_AXIS_STR		= "[Neptune-D]";
		/* boolean values */
		public const String TRUE_STR						= "[true]";
		public const String FALSE_STR						= "[false]";
		/* automatic values */
		public const String NPAR_STR						= "[npar]";
		/* other values */
		public const String NAN_STR							= "[NaN]";
		/*
		 * ConstantValue - syntax.
		 */
		public const String PI_SYN							= PI_STR;
		public const String PI_SYN_UNI_1					= PI_STR_UNI_1;
		public const String PI_SYN_UNI_2					= PI_STR_UNI_2;
		public const String EULER_SYN						= EULER_STR;
		public const String EULER_SYN_UNI_1					= EULER_STR_UNI_1;
		public const String EULER_SYN_UNI_2					= EULER_STR_UNI_2;
		public const String EULER_MASCHERONI_SYN			= EULER_MASCHERONI_STR;
		public const String GOLDEN_RATIO_SYN				= GOLDEN_RATIO_STR;
		public const String PLASTIC_SYN						= PLASTIC_STR;
		public const String EMBREE_TREFETHEN_SYN			= EMBREE_TREFETHEN_STR;
		public const String FEIGENBAUM_DELTA_SYN			= FEIGENBAUM_DELTA_STR;
		public const String FEIGENBAUM_ALPHA_SYN			= FEIGENBAUM_ALPHA_STR;
		public const String TWIN_PRIME_SYN					= TWIN_PRIME_STR;
		public const String MEISSEL_MERTEENS_SYN			= MEISSEL_MERTEENS_STR;
		public const String BRAUN_TWIN_PRIME_SYN			= BRAUN_TWIN_PRIME_STR;
		public const String BRAUN_PRIME_QUADR_SYN			= BRAUN_PRIME_QUADR_STR;
		public const String BRUIJN_NEWMAN_SYN				= BRUIJN_NEWMAN_STR;
		public const String CATALAN_SYN						= CATALAN_STR;
		public const String LANDAU_RAMANUJAN_SYN			= LANDAU_RAMANUJAN_STR;
		public const String VISWANATH_SYN					= VISWANATH_STR;
		public const String LEGENDRE_SYN					= LEGENDRE_STR;
		public const String RAMANUJAN_SOLDNER_SYN			= RAMANUJAN_SOLDNER_STR;
		public const String ERDOS_BORWEIN_SYN				= ERDOS_BORWEIN_STR;
		public const String BERNSTEIN_SYN					= BERNSTEIN_STR;
		public const String GAUSS_KUZMIN_WIRSING_SYN		= GAUSS_KUZMIN_WIRSING_STR;
		public const String HAFNER_SARNAK_MCCURLEY_SYN		= HAFNER_SARNAK_MCCURLEY_STR;
		public const String GOLOMB_DICKMAN_SYN				= GOLOMB_DICKMAN_STR;
		public const String CAHEN_SYN						= CAHEN_STR;
		public const String LAPLACE_LIMIT_SYN				= LAPLACE_LIMIT_STR;
		public const String ALLADI_GRINSTEAD_SYN			= ALLADI_GRINSTEAD_STR;
		public const String LENGYEL_SYN						= LENGYEL_STR;
		public const String LEVY_SYN						= LEVY_STR;
		public const String APERY_SYN						= APERY_STR;
		public const String MILLS_SYN						= MILLS_STR;
		public const String BACKHOUSE_SYN					= BACKHOUSE_STR;
		public const String PORTER_SYN						= PORTER_STR;
		public const String LIEB_QUARE_ICE_SYN				= LIEB_QUARE_ICE_STR;
		public const String NIVEN_SYN						= NIVEN_STR;
		public const String SIERPINSKI_SYN					= SIERPINSKI_STR;
		public const String KHINCHIN_SYN					= KHINCHIN_STR;
		public const String FRANSEN_ROBINSON_SYN			= FRANSEN_ROBINSON_STR;
		public const String LANDAU_SYN						= LANDAU_STR;
		public const String PARABOLIC_SYN					= PARABOLIC_STR;
		public const String OMEGA_SYN						= OMEGA_STR;
		public const String MRB_SYN							= MRB_STR;
		public const String LI2_SYN							= LI2_STR;
		public const String GOMPERTZ_SYN					= GOMPERTZ_STR;
		/* Physical Constants */
		public const String LIGHT_SPEED_SYN					= LIGHT_SPEED_STR;
		public const String GRAVITATIONAL_CONSTANT_SYN		= GRAVITATIONAL_CONSTANT_STR;
		public const String GRAVIT_ACC_EARTH_SYN			= GRAVIT_ACC_EARTH_STR;
		public const String PLANCK_CONSTANT_SYN				= PLANCK_CONSTANT_STR;
		public const String PLANCK_CONSTANT_REDUCED_SYN		= PLANCK_CONSTANT_REDUCED_STR;
		public const String PLANCK_LENGTH_SYN				= PLANCK_LENGTH_STR;
		public const String PLANCK_MASS_SYN					= PLANCK_MASS_STR;
		public const String PLANCK_TIME_SYN					= PLANCK_TIME_STR;
		/* AstronomicalConstants */
		public const String LIGHT_YEAR_SYN					= LIGHT_YEAR_STR;
		public const String ASTRONOMICAL_UNIT_SYN			= ASTRONOMICAL_UNIT_STR;
		public const String PARSEC_SYN						= PARSEC_STR;
		public const String KILOPARSEC_SYN					= KILOPARSEC_STR;
		public const String EARTH_RADIUS_EQUATORIAL_SYN		= EARTH_RADIUS_EQUATORIAL_STR;
		public const String EARTH_RADIUS_POLAR_SYN			= EARTH_RADIUS_POLAR_STR;
		public const String EARTH_RADIUS_MEAN_SYN			= EARTH_RADIUS_MEAN_STR;
		public const String EARTH_MASS_SYN					= EARTH_MASS_STR;
		public const String EARTH_SEMI_MAJOR_AXIS_SYN		= EARTH_SEMI_MAJOR_AXIS_STR;
		public const String MOON_RADIUS_MEAN_SYN			= MOON_RADIUS_MEAN_STR;
		public const String MOON_MASS_SYN					= MOON_MASS_STR;
		public const String MONN_SEMI_MAJOR_AXIS_SYN		= MONN_SEMI_MAJOR_AXIS_STR;
		public const String SOLAR_RADIUS_SYN				= SOLAR_RADIUS_STR;
		public const String SOLAR_MASS_SYN					= SOLAR_MASS_STR;
		public const String MERCURY_RADIUS_MEAN_SYN			= MERCURY_RADIUS_MEAN_STR;
		public const String MERCURY_MASS_SYN				= MERCURY_MASS_STR;
		public const String MERCURY_SEMI_MAJOR_AXIS_SYN		= MERCURY_SEMI_MAJOR_AXIS_STR;
		public const String VENUS_RADIUS_MEAN_SYN			= VENUS_RADIUS_MEAN_STR;
		public const String VENUS_MASS_SYN					= VENUS_MASS_STR;
		public const String VENUS_SEMI_MAJOR_AXIS_SYN		= VENUS_SEMI_MAJOR_AXIS_STR;
		public const String MARS_RADIUS_MEAN_SYN			= MARS_RADIUS_MEAN_STR;
		public const String MARS_MASS_SYN					= MARS_MASS_STR;
		public const String MARS_SEMI_MAJOR_AXIS_SYN		= MARS_SEMI_MAJOR_AXIS_STR;
		public const String JUPITER_RADIUS_MEAN_SYN			= JUPITER_RADIUS_MEAN_STR;
		public const String JUPITER_MASS_SYN				= JUPITER_MASS_STR;
		public const String JUPITER_SEMI_MAJOR_AXIS_SYN		= JUPITER_SEMI_MAJOR_AXIS_STR;
		public const String SATURN_RADIUS_MEAN_SYN			= SATURN_RADIUS_MEAN_STR;
		public const String SATURN_MASS_SYN					= SATURN_MASS_STR;
		public const String SATURN_SEMI_MAJOR_AXIS_SYN		= SATURN_SEMI_MAJOR_AXIS_STR;
		public const String URANUS_RADIUS_MEAN_SYN			= URANUS_RADIUS_MEAN_STR;
		public const String URANUS_MASS_SYN					= URANUS_MASS_STR;
		public const String URANUS_SEMI_MAJOR_AXIS_SYN		= URANUS_SEMI_MAJOR_AXIS_STR;
		public const String NEPTUNE_RADIUS_MEAN_SYN			= NEPTUNE_RADIUS_MEAN_STR;
		public const String NEPTUNE_MASS_SYN				= NEPTUNE_MASS_STR;
		public const String NEPTUNE_SEMI_MAJOR_AXIS_SYN		= NEPTUNE_SEMI_MAJOR_AXIS_STR;
		/* boolean values */
		public const String TRUE_SYN						= TRUE_STR;
		public const String FALSE_SYN						= FALSE_STR;
		/* automatic values */
		public const String NPAR_SYN						= NPAR_STR;
		/* other values */
		public const String NAN_SYN							= NAN_STR;
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
        public const String PI_SINCE						= mXparser.NAMEv10;
		public const String PI_SINCE_UNI_1					= mXparser.NAMEv50;
		public const String PI_SINCE_UNI_2					= mXparser.NAMEv50;
		public const String EULER_SINCE						= mXparser.NAMEv10;
		public const String EULER_SINCE_UNI_1				= mXparser.NAMEv50;
		public const String EULER_SINCE_UNI_2				= mXparser.NAMEv50;
		public const String EULER_MASCHERONI_SINCE			= mXparser.NAMEv10;
		public const String GOLDEN_RATIO_SINCE				= mXparser.NAMEv10;
		public const String PLASTIC_SINCE					= mXparser.NAMEv10;
		public const String EMBREE_TREFETHEN_SINCE			= mXparser.NAMEv10;
		public const String FEIGENBAUM_DELTA_SINCE			= mXparser.NAMEv10;
		public const String FEIGENBAUM_ALPHA_SINCE			= mXparser.NAMEv10;
		public const String TWIN_PRIME_SINCE				= mXparser.NAMEv10;
		public const String MEISSEL_MERTEENS_SINCE			= mXparser.NAMEv10;
		public const String BRAUN_TWIN_PRIME_SINCE			= mXparser.NAMEv10;
		public const String BRAUN_PRIME_QUADR_SINCE			= mXparser.NAMEv10;
		public const String BRUIJN_NEWMAN_SINCE				= mXparser.NAMEv10;
		public const String CATALAN_SINCE					= mXparser.NAMEv10;
		public const String LANDAU_RAMANUJAN_SINCE			= mXparser.NAMEv10;
		public const String VISWANATH_SINCE					= mXparser.NAMEv10;
		public const String LEGENDRE_SINCE					= mXparser.NAMEv10;
		public const String RAMANUJAN_SOLDNER_SINCE			= mXparser.NAMEv10;
		public const String ERDOS_BORWEIN_SINCE				= mXparser.NAMEv10;
		public const String BERNSTEIN_SINCE					= mXparser.NAMEv10;
		public const String GAUSS_KUZMIN_WIRSING_SINCE		= mXparser.NAMEv10;
		public const String HAFNER_SARNAK_MCCURLEY_SINCE	= mXparser.NAMEv10;
		public const String GOLOMB_DICKMAN_SINCE			= mXparser.NAMEv10;
		public const String CAHEN_SINCE						= mXparser.NAMEv10;
		public const String LAPLACE_LIMIT_SINCE				= mXparser.NAMEv10;
		public const String ALLADI_GRINSTEAD_SINCE			= mXparser.NAMEv10;
		public const String LENGYEL_SINCE					= mXparser.NAMEv10;
		public const String LEVY_SINCE						= mXparser.NAMEv10;
		public const String APERY_SINCE						= mXparser.NAMEv10;
		public const String MILLS_SINCE						= mXparser.NAMEv10;
		public const String BACKHOUSE_SINCE					= mXparser.NAMEv10;
		public const String PORTER_SINCE					= mXparser.NAMEv10;
		public const String LIEB_QUARE_ICE_SINCE			= mXparser.NAMEv10;
		public const String NIVEN_SINCE						= mXparser.NAMEv10;
		public const String SIERPINSKI_SINCE				= mXparser.NAMEv10;
		public const String KHINCHIN_SINCE					= mXparser.NAMEv10;
		public const String FRANSEN_ROBINSON_SINCE			= mXparser.NAMEv10;
		public const String LANDAU_SINCE					= mXparser.NAMEv10;
		public const String PARABOLIC_SINCE					= mXparser.NAMEv10;
		public const String OMEGA_SINCE						= mXparser.NAMEv10;
		public const String MRB_SINCE						= mXparser.NAMEv10;
		public const String LI2_SINCE						= mXparser.NAMEv23;
		public const String GOMPERTZ_SINCE					= mXparser.NAMEv23;
		/* Physical Constants */
		public const String LIGHT_SPEED_SINCE				= mXparser.NAMEv40;
		public const String GRAVITATIONAL_CONSTANT_SINCE	= mXparser.NAMEv40;
		public const String GRAVIT_ACC_EARTH_SINCE			= mXparser.NAMEv40;
		public const String PLANCK_CONSTANT_SINCE			= mXparser.NAMEv40;
		public const String PLANCK_CONSTANT_REDUCED_SINCE	= mXparser.NAMEv40;
		public const String PLANCK_LENGTH_SINCE				= mXparser.NAMEv40;
		public const String PLANCK_MASS_SINCE				= mXparser.NAMEv40;
		public const String PLANCK_TIME_SINCE				= mXparser.NAMEv40;
		/* AstronomicalConstants */
		public const String LIGHT_YEAR_SINCE				= mXparser.NAMEv40;
		public const String ASTRONOMICAL_UNIT_SINCE			= mXparser.NAMEv40;
		public const String PARSEC_SINCE					= mXparser.NAMEv40;
		public const String KILOPARSEC_SINCE				= mXparser.NAMEv40;
		public const String EARTH_RADIUS_EQUATORIAL_SINCE	= mXparser.NAMEv40;
		public const String EARTH_RADIUS_POLAR_SINCE		= mXparser.NAMEv40;
		public const String EARTH_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
		public const String EARTH_MASS_SINCE				= mXparser.NAMEv40;
		public const String EARTH_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
		public const String MOON_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
		public const String MOON_MASS_SINCE					= mXparser.NAMEv40;
		public const String MONN_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
		public const String SOLAR_RADIUS_SINCE				= mXparser.NAMEv40;
		public const String SOLAR_MASS_SINCE				= mXparser.NAMEv40;
		public const String MERCURY_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
		public const String MERCURY_MASS_SINCE				= mXparser.NAMEv40;
		public const String MERCURY_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
		public const String VENUS_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
		public const String VENUS_MASS_SINCE				= mXparser.NAMEv40;
		public const String VENUS_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
		public const String MARS_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
		public const String MARS_MASS_SINCE					= mXparser.NAMEv40;
		public const String MARS_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
		public const String JUPITER_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
		public const String JUPITER_MASS_SINCE				= mXparser.NAMEv40;
		public const String JUPITER_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
		public const String SATURN_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
		public const String SATURN_MASS_SINCE				= mXparser.NAMEv40;
		public const String SATURN_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
		public const String URANUS_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
		public const String URANUS_MASS_SINCE				= mXparser.NAMEv40;
		public const String URANUS_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
		public const String NEPTUNE_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
		public const String NEPTUNE_MASS_SINCE				= mXparser.NAMEv40;
		public const String NEPTUNE_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
		/* boolean values */
		public const String TRUE_SINCE						= mXparser.NAMEv41;
		public const String FALSE_SINCE						= mXparser.NAMEv41;
		/* automatic values */
		public const String NPAR_SINCE						= mXparser.NAMEv42;
		/* other values */
		public const String NAN_SINCE						= mXparser.NAMEv41;
	}
}