/*
 * @(#)StringInvariant.java        6.0.0    2024-05-19
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
package org.mariuszgromada.math.mxparser;

/**
 * A class containing definitions of text strings that are invariant with respect to the user's language.
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
final class StringInvariant {
    static final String EMPTY = "";
    static final String ARGUMENT_DEFINITION_EXAMPLES = "'x', 'x=5', 'x=5+3/2', 'x=2*y', ...";
    static final String CONSTANT_DEFINITION_EXAMPLES = "'x', 'x=5', 'x=5+3/2', '[x]=2*y', ...";
    static final String ARGUMENT_NAME_EXAMPLES = "'x', 'x_y', 'x1', 'x_1', 'abc', ...";
    static final String CONSTANT_NAME_EXAMPLES = "'x', 'x_y', 'x1', 'x_1', 'abc', [abc], ...";
    static final String FUNCTION_NAME_EXAMPLES = "'f', 'f_y', 'f1', 'xf1', 'fxy', ...";
    static final String FUNCTION_DEFINITION_EXAMPLES = "'f(x)=2*x', 'f(x,y)=y*sin(x)', 'f(n)=if(n>1,n*f(n-1),1)', 'f(...)=sum(i,1,[npar],par(i))', ...";
    static final String RECURSIVE_ARGUMENT_DEFINITION_EXAMPLES = "'f(n)=n*f(n-1)', 'f(n)=f(n-1)+f(n-2)'";
    static final String NEW_LINE = System.lineSeparator();
    static final String INTERNAL = "{internal}";
    static final String BODY_EXTENDED = "{body-ext}";
    static final String BODY_EXTENDED_VARIADIC = "{body-ext-var}";
    static final String SPACE = " ";
    static final String TAB_AS_SPACES = "    ";
    static final String APOSTROPHE = "'";
    static final String QUOTE = "\"";
    static final String LEFT_SQUARE_BRACKET = "[";
    static final String RIGHT_SQUARE_BRACKET = "]";
    static final String RIGHT_SQUARE_BRACKET_SPACE = RIGHT_SQUARE_BRACKET + SPACE;
    static final String LEFT_BRACKET = "(";
    static final String RIGHT_BRACKET = ")";
    static final String LEFT_CURLY_BRACKET = "{";
    static final String RIGHT_CURLY_BRACKET = "}";
    static final String EQUAL = "=";
    static final String SPACE_EQUAL_SPACE = SPACE + EQUAL + SPACE;
    static final String COLON = ":";
    static final String COLON_SPACE = COLON + SPACE;
    static final String SEMICOLON = ";";
    static final String SEMICOLON_SPACE = SEMICOLON + SPACE;
    static final String COMMA = ",";
    static final String COMMA_SPACE = COMMA + SPACE;
    static final String DOT = ".";
    static final String DOT_SPACE = DOT + SPACE;
    static final String DOTS = "...";
    static final String DOTS_SPACE = DOTS + SPACE;
    static final String AND_CONTINUE = NEW_LINE + TAB_AS_SPACES + DOTS + NEW_LINE + TAB_AS_SPACES + DOTS;
    static final String LOWER = "<";
    static final String GREATER = ">";
    static final String RIGHT_ARROW = "->";
    static final String LONG_RIGHT_ARROW = "--->";
    static final String LONG_RIGHT_ARROW_SPACE = LONG_RIGHT_ARROW + SPACE;
    static final String RIGHT_ARROW_SPACE = RIGHT_ARROW + SPACE;
    // -------------------------------------------------
    static final String METER_UNIT = "[m]";
    static final String SQUARE_METER_UNIT = "[m²]";
    static final String CUBIC_METER_UNIT = "[m³]";
    static final String SECOND_UNIT = "[s]";
    static final String KILOGRAM_UNIT = "[kg]";
    static final String BIT_UNIT = "[bit]";
    static final String JOULE_UNIT = "[J]";
    static final String RADIAN_UNIT = "[rad]";
    static final String METER_DEFINITION = "(m=1)";
    static final String SECOND_DEFINITION = "(s=1)";
    static final String KILOGRAM_DEFINITION = "(kg=1)";
    static final String BIT_DEFINITION = "(bit=1)";
    static final String RADIAN_DEFINITION = "(rad=1)";
    static final String TRUE_DEFINITION = "(true=1)";
    static final String FALSE_DEFINITION = "(false=0)";
    // -------------------------------------------------
    static final String METER_PER_SECOND_UNIT = "[m/s]";
    static final String METER_PER_SECOND_SQUARED_UNIT = "[m/s²]";
    // -------------------------------------------------
    static final String TRUE_AND_FALSE_DEFINITION = "(true=1, false=1)";
    static final String METER_AND_SECOND_DEFINITION = "(m=1, s=1)";
    static final String METER_AND_KILOGRAM_AND_SECOND_DEFINITION = "(m=1, kg=1, s=1)";
    // -------------------------------------------------
    static final String NORMAL_NMS_SYMBOL = "N(μ,σ)";
    static final String NORMAL_N01_SYMBOL = "N(0,1)";
    static final String UNIFORM_UAB_SYMBOL = "U(a,b)";
    static final String UNIFORM_UDAB_SYMBOL = "U{a,b}";
    static final String UNIFORM_U01_SYMBOL = "U(0,1)";
    static final String BETA_XY_SYMBOL = "B(x,y)";
    static final String LOG_BETA_XY_SYMBOL = "lnB(x,y)";
    static final String INCOMPLETE_BETA_XAB_SYMBOL = "B(x,a,b)";
    static final String REGULARIZED_INCOMPLETE_BETA_XAB_SYMBOL = "I(x,a,b)";
    static final String GAMMA_S_SYMBOL = "Γ(s)";
    static final String LOWER_GAMMA_SX_SYMBOL = "γ(s,x)";
    static final String UPPER_GAMMA_SX_SYMBOL = "Γ(s,x)";
    static final String REGULARIZED_GAMMA_P_SX_SYMBOL = "P(s,x)";
    static final String REGULARIZED_GAMMA_Q_SX_SYMBOL = "Q(s,x)";
    static final String LOG_GAMMA_S_SYMBOL = "lnΓ(s)";
    static final String DIGAMMA_X_SYMBOL = "ψ(x)";
    static final String EXPONENTIAL_INTEGRAL_X_SYMBOL = "Ei(x)";
    static final String LOGARITHMIC_INTEGRAL_X_SYMBOL = "li(x)";
    static final String LOGARITHMIC_INTEGRAL_2_SYMBOL = "li(2)";
    static final String OFFSET_LOGARITHMIC_INTEGRAL_X_SYMBOL = "Li(x)";
    static final String GAUSS_ERROR_X_SYMBOL = "erf(x)";
    static final String INVERSE_GAUSS_ERROR_Y_SYMBOL = "erf⁻¹(y)";
    static final String GAUSS_ERROR_COMPLEMENTARY_X_SYMBOL = "erfc(x)";
    static final String INVERSE_GAUSS_ERROR_COMPLEMENTARY_Y_SYMBOL = "erfc⁻¹(x)";
    static final String LAMBERT_W0_X_SYMBOL = "W₀(x)";
    static final String LAMBERT_W_1_X_SYMBOL = "W₋₁(x)";
    static final String PRIME_COUNTING_N_SYMBOL = "π(n)";
    // -------------------------------------------------
    static final String PI_SYMBOL = "π";
    static final String E_SYMBOL = "e";
    static final String MASCHERONI_SYMBOL = "γ";
    static final String GOLDEN_RATIO_SYMBOL = "φ";
    static final String PLASTICS_SYMBOL = "ρ";
    static final String EMBREE_TREFETHEN_SYMBOL = "β*";
    static final String FEIGENBAUM_DELTA_SYMBOL = "δ";
    static final String FEIGENBAUM_ALPHA_SYMBOL = "α";
    static final String MEISSEL_MERTEENS_SYMBOL = "M₁, B₁";
    static final String BRAUN_TWIN_PRIME_SYMBOL = "B₂";
    static final String BRAUN_PRIME_QUADR_SYMBOL = "B₄";
    static final String TWIN_PRIME_SYMBOL = "∏₂";
    static final String BRUIJN_NEWMAN_SYMBOL = "Λ";
    static final String CATALAN_SYMBOL = "G";
    static final String LANDAU_RAMANUJAN_SYMBOL = "b";
    static final String VISWANATH_SYMBOL = "V";
    static final String LEGENDRE_SYMBOL = "B";
    static final String RAMANUJAN_SOLDNER_SYMBOL = "μ";
    static final String ERDOS_BORWEIN_SYMBOL = "E";
    static final String BERNSTEIN_SYMBOL = "β";
    static final String GAUSS_KUZMIN_WIRSING_SYMBOL = "λ";
    static final String HAFNER_SARNAK_MCCURLEY_SYMBOL = "σ";
    static final String GOLOMB_DICKMAN_SYMBOL = "λ";
    static final String CAHEN_SYMBOL = "C";
    static final String LENGYEL_SYMBOL = "Λ";
    static final String APERY_SYMBOL = "ζ(3)";
    static final String MILLS_SYMBOL = "A";
    static final String BACKHOUSE_SYMBOL = "B";
    static final String PORTER_SYMBOL = "C";
    static final String NIVEN_SYMBOL = "C";
    static final String SIERPINSKI_SYMBOL = "K";
    static final String KHINCHIN_SYMBOL = "K₀";
    static final String FRANSEN_ROBINSON_SYMBOL = "F";
    static final String LANDAU_SYMBOL = "L";
    static final String PARABOLIC_SYMBOL = "P";
    static final String OMEGA_SYMBOL = "Ω";
    static final String MRB_SYMBOL = "S";
    static final String GOMPERTZ_SYMBOL = "δ";
    static final String LIGHT_SPEED_SYMBOL = "c";
    static final String GRAVITATIONAL_CONSTANT_SYMBOL = "G";
    static final String GRAVIT_ACC_EARTH_SYMBOL = "g";
    static final String PLANCK_CONSTANT_SYMBOL = "h";
    static final String PLANCK_CONSTANT_REDUCED_SYMBOL = "ħ";
    static final String PLANCK_LENGTH_SYMBOL = "lᵖ";
    static final String PLANCK_MASS_SYMBOL = "mᵖ";
    static final String PLANCK_TIME_SYMBOL = "tᵖ";
    static final String LIGHT_YEAR_SYMBOL = "ly";
    static final String ASTRONOMICAL_UNIT_SYMBOL = "au, AU";
    static final String PARSEC_SYMBOL = "pc";
    static final String KILOPARSEC_SYMBOL = "kpc";
    static final String EARTH_MASS_SYMBOL = "M⊕";
    static final String EARTH_RADIUS_EQUATORIAL_SYMBOL = "Rª⊕";
    static final String EARTH_RADIUS_POLAR_SYMBOL = "Rᵇ⊕";
    static final String EARTH_RADIUS_MEAN_SYMBOL = "R⊕";
    static final String SOLAR_RADIUS_SYMBOL = "R☉";
    static final String SOLAR_MASS_SYMBOL = "M☉";
    // -------------------------------------------------
    static final String SUM_SYMBOL = "Σ";
    static final String PROD_SYMBOL = "∏";
    static final String INT_SYMBOL = "∫";
    static final String DER_SYMBOL = "∂";
    static final String DER_LEFT_SYMBOL = "∂-";
    static final String DER_RIGHT_SYMBOL = "∂+";
    static final String DERN_SYMBOL = "∂ⁿ";
    static final String FORW_DIFF_SYMBOL = "∆";
    static final String BACKW_DIFF_SYMBOL = "∇";
    // -------------------------------------------------
    static final String SOLVE_SYMBOL = "f(x)=0";
    static final String AND_SYMBOL = "AND";
    static final String NAND_SYMBOL = "NAND";
    static final String OR_SYMBOL = "OR";
    static final String NOR_SYMBOL = "NOR";
    static final String XOR_SYMBOL = "XOR";
    static final String IMP_SYMBOL = "IMP";
    static final String CIMP_SYMBOL = "CIMP";
    static final String NIMP_SYMBOL = "NIMP";
    static final String CNIMP_SYMBOL = "CNIMP";
    static final String EQV_SYMBOL = "EQV";
    // -------------------------------------------------
    static final String RANDOM_VARIABLE_INT1_SYMBOL = "U{-10¹,10¹}";
    static final String RANDOM_VARIABLE_INT2_SYMBOL = "U{-10²,10²}";
    static final String RANDOM_VARIABLE_INT3_SYMBOL = "U{-10³,10³}";
    static final String RANDOM_VARIABLE_INT4_SYMBOL = "U{-10⁴,10⁴}";
    static final String RANDOM_VARIABLE_INT5_SYMBOL = "U{-10⁵,10⁵}";
    static final String RANDOM_VARIABLE_INT6_SYMBOL = "U{-10⁶,10⁶}";
    static final String RANDOM_VARIABLE_INT7_SYMBOL = "U{-10⁷,10⁷}";
    static final String RANDOM_VARIABLE_INT8_SYMBOL = "U{-10⁸,10⁸}";
    static final String RANDOM_VARIABLE_INT9_SYMBOL = "U{-10⁹,10⁹}";

    static final String RANDOM_VARIABLE_NAT0_1_SYMBOL = "U{0,10¹}";
    static final String RANDOM_VARIABLE_NAT0_2_SYMBOL = "U{0,10²}";
    static final String RANDOM_VARIABLE_NAT0_3_SYMBOL = "U{0,10³}";
    static final String RANDOM_VARIABLE_NAT0_4_SYMBOL = "U{0,10⁴}";
    static final String RANDOM_VARIABLE_NAT0_5_SYMBOL = "U{0,10⁵}";
    static final String RANDOM_VARIABLE_NAT0_6_SYMBOL = "U{0,10⁶}";
    static final String RANDOM_VARIABLE_NAT0_7_SYMBOL = "U{0,10⁷}";
    static final String RANDOM_VARIABLE_NAT0_8_SYMBOL = "U{0,10⁸}";
    static final String RANDOM_VARIABLE_NAT0_9_SYMBOL = "U{0,10⁹}";

    static final String RANDOM_VARIABLE_NAT1_1_SYMBOL = "U{1,10¹}";
    static final String RANDOM_VARIABLE_NAT1_2_SYMBOL = "U{1,10²}";
    static final String RANDOM_VARIABLE_NAT1_3_SYMBOL = "U{1,10³}";
    static final String RANDOM_VARIABLE_NAT1_4_SYMBOL = "U{1,10⁴}";
    static final String RANDOM_VARIABLE_NAT1_5_SYMBOL = "U{1,10⁵}";
    static final String RANDOM_VARIABLE_NAT1_6_SYMBOL = "U{1,10⁶}";
    static final String RANDOM_VARIABLE_NAT1_7_SYMBOL = "U{1,10⁷}";
    static final String RANDOM_VARIABLE_NAT1_8_SYMBOL = "U{1,10⁸}";
    static final String RANDOM_VARIABLE_NAT1_9_SYMBOL = "U{1,10⁹}";
    // -------------------------------------------------
    static final String UNIT_PERC_SYMBOL = "= 0.01";
    static final String UNIT_PERM_SYMBOL = "= 0.001";
    static final String UNIT_YOTTA_SYMBOL = "= 10²⁴";
    static final String UNIT_ZETTA_SYMBOL = "= 10²¹";
    static final String UNIT_EXA_SYMBOL = "= 10¹⁸";
    static final String UNIT_PETA_SYMBOL = "= 10¹⁵";
    static final String UNIT_TERA_SYMBOL = "= 10¹²";
    static final String UNIT_GIGA_SYMBOL = "= 10⁹";
    static final String UNIT_MEGA_SYMBOL = "= 10⁶";
    static final String UNIT_KILO_SYMBOL = "= 10³";
    static final String UNIT_HECTO_SYMBOL = "= 10²";
    static final String UNIT_DECA_SYMBOL = "= 10";
    static final String UNIT_DECI_SYMBOL = "= 10⁻¹";
    static final String UNIT_CENTI_SYMBOL = "= 10⁻²";
    static final String UNIT_MILLI_SYMBOL = "= 10⁻³";
    static final String UNIT_MICRO_SYMBOL = "= 10⁻⁶";
    static final String UNIT_NANO_SYMBOL = "= 10⁻⁹";
    static final String UNIT_PICO_SYMBOL = "= 10⁻¹²";
    static final String UNIT_FEMTO_SYMBOL = "= 10⁻¹⁵";
    static final String UNIT_ATTO_SYMBOL = "= 10⁻¹⁸";
    static final String UNIT_ZEPTO_SYMBOL = "= 10⁻²¹";
    static final String UNIT_YOCTO_SYMBOL = "= 10⁻²⁴";
    // -------------------------------------------------
    static final String PARSER_SYMBOL_NUMBER_INTEGER_EXAMPLE = "1, -2";
    static final String PARSER_SYMBOL_NUMBER_DECIMAL_EXAMPLE = "0.2, -0.3, 1.2";
    static final String PARSER_SYMBOL_NUMBER_LEADING_ZERO_EXAMPLE = "001, -002.1";
    static final String PARSER_SYMBOL_NUMBER_SCI_NOTATION_EXAMPLE = "1.2e-10, 1.2e+10, 2.3E10";
    static final String PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO_EXAMPLE = ".2, -.212";
    static final String PARSER_SYMBOL_NUMBER_FRACTIONS_EXAMPLE = "1_2, 2_1_3, -14_3";
    static final String PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS_EXAMPLE = "b1.111, b2.1001, b3.12021, -b16.af12, h.af1, -b.1001, o.0127";
    // -------------------------------------------------
    static final String SEPARATOR = " - ";
}