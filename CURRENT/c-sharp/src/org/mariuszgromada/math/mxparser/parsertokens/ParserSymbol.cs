/*
 * @(#)ParserSymbol.cs        6.0.0    2024-05-19
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
	 * Parser symbols - mXparser tokens definition.
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
	 * @version        5.2.0
	 */
	[CLSCompliant(true)]
	public sealed class ParserSymbol {
		/**
		* ParserSymbol - reg exp patterns.
		*/
		/*
		 * ParserSymbol - reg exp patterns.
		 */
		public const String DIGIT								= "[0-9]";
		public const String DIGIT_B1							= "1";
		public const String DIGIT_B2							= "[01]";
		public const String DIGIT_B3							= "[0-2]";
		public const String DIGIT_B4							= "[0-3]";
		public const String DIGIT_B5							= "[0-4]";
		public const String DIGIT_B6							= "[0-5]";
		public const String DIGIT_B7							= "[0-6]";
		public const String DIGIT_B8							= "[0-7]";
		public const String DIGIT_B9							= "[0-8]";
		public const String DIGIT_B10							= "[0-9]";
		public const String DIGIT_B11							= "[0-9aA]";
		public const String DIGIT_B12							= "[0-9a-bA-B]";
		public const String DIGIT_B13							= "[0-9a-cA-C]";
		public const String DIGIT_B14							= "[0-9a-dA-D]";
		public const String DIGIT_B15							= "[0-9a-eA-E]";
		public const String DIGIT_B16							= "[0-9a-fA-F]";
		public const String DIGIT_B17							= "[0-9a-gA-G]";
		public const String DIGIT_B18							= "[0-9a-hA-H]";
		public const String DIGIT_B19							= "[0-9a-iA-I]";
		public const String DIGIT_B20							= "[0-9a-jA-J]";
		public const String DIGIT_B21							= "[0-9a-kA-K]";
		public const String DIGIT_B22							= "[0-9a-lA-L]";
		public const String DIGIT_B23							= "[0-9a-mA-M]";
		public const String DIGIT_B24							= "[0-9a-nA-N]";
		public const String DIGIT_B25							= "[0-9a-oA-O]";
		public const String DIGIT_B26							= "[0-9a-pA-P]";
		public const String DIGIT_B27							= "[0-9a-qA-Q]";
		public const String DIGIT_B28							= "[0-9a-rA-R]";
		public const String DIGIT_B29							= "[0-9a-sA-S]";
		public const String DIGIT_B30							= "[0-9a-tA-T]";
		public const String DIGIT_B31							= "[0-9a-uA-U]";
		public const String DIGIT_B32							= "[0-9a-vA-V]";
		public const String DIGIT_B33							= "[0-9a-wA-W]";
		public const String DIGIT_B34							= "[0-9a-xA-X]";
		public const String DIGIT_B35							= "[0-9a-yA-Y]";
		public const String DIGIT_B36							= "[0-9a-zA-Z]";
		public const String INTEGER								= DIGIT + "(" + DIGIT + ")*";
		public const String DEC_FRACT							= "(" + INTEGER + ")?" + "\\." + INTEGER;
		public const String DEC_FRACT_OR_INT					= "(" + DEC_FRACT + "|" + INTEGER + ")";
		public const String DECIMAL_REG_EXP						= "[+-]?" + DEC_FRACT_OR_INT + "([eE][+-]?" + INTEGER + ")?";
		public const String DECIMAL_SCIENTIFIC_REG_EXP			= "[+-]?" + DEC_FRACT_OR_INT + "([eE][+-]?" + INTEGER + ")";
		public const String BASE1_REG_EXP						= "[+-]?[bB]1\\.(" + DIGIT_B1 + ")*";
		public const String BASE2_REG_EXP						= "[+-]?[bB][2]?\\." + DIGIT_B2 + "(" + DIGIT_B2 + ")*";
		public const String BASE3_REG_EXP						= "[+-]?[bB]3\\." + DIGIT_B3 + "(" + DIGIT_B3 + ")*";
		public const String BASE4_REG_EXP						= "[+-]?[bB]4\\." + DIGIT_B4 + "(" + DIGIT_B4 + ")*";
		public const String BASE5_REG_EXP						= "[+-]?[bB]5\\." + DIGIT_B5 + "(" + DIGIT_B5 + ")*";
		public const String BASE6_REG_EXP						= "[+-]?[bB]6\\." + DIGIT_B6 + "(" + DIGIT_B6 + ")*";
		public const String BASE7_REG_EXP						= "[+-]?[bB]7\\." + DIGIT_B7 + "(" + DIGIT_B7 + ")*";
		public const String BASE8_REG_EXP						= "[+-]?([bB]8|[oO])\\." + DIGIT_B8 + "(" + DIGIT_B8 + ")*";
		public const String BASE9_REG_EXP						= "[+-]?[bB]9\\." + DIGIT_B9 + "(" + DIGIT_B9 + ")*";
		public const String BASE10_REG_EXP						= "[+-]?[bB]10\\." + DIGIT_B10 + "(" + DIGIT_B10 + ")*";
		public const String BASE11_REG_EXP						= "[+-]?[bB]11\\." + DIGIT_B11 + "(" + DIGIT_B11 + ")*";
		public const String BASE12_REG_EXP						= "[+-]?[bB]12\\." + DIGIT_B12 + "(" + DIGIT_B12 + ")*";
		public const String BASE13_REG_EXP						= "[+-]?[bB]13\\." + DIGIT_B13 + "(" + DIGIT_B13 + ")*";
		public const String BASE14_REG_EXP						= "[+-]?[bB]14\\." + DIGIT_B14 + "(" + DIGIT_B14 + ")*";
		public const String BASE15_REG_EXP						= "[+-]?[bB]15\\." + DIGIT_B15 + "(" + DIGIT_B15 + ")*";
		public const String BASE16_REG_EXP						= "[+-]?([bB]16|[hH])\\." + DIGIT_B16 + "(" + DIGIT_B16 + ")*";
		public const String BASE17_REG_EXP						= "[+-]?[bB]17\\." + DIGIT_B17 + "(" + DIGIT_B17 + ")*";
		public const String BASE18_REG_EXP						= "[+-]?[bB]18\\." + DIGIT_B18 + "(" + DIGIT_B18 + ")*";
		public const String BASE19_REG_EXP						= "[+-]?[bB]19\\." + DIGIT_B19 + "(" + DIGIT_B19 + ")*";
		public const String BASE20_REG_EXP						= "[+-]?[bB]20\\." + DIGIT_B20 + "(" + DIGIT_B20 + ")*";
		public const String BASE21_REG_EXP						= "[+-]?[bB]21\\." + DIGIT_B21 + "(" + DIGIT_B21 + ")*";
		public const String BASE22_REG_EXP						= "[+-]?[bB]22\\." + DIGIT_B22 + "(" + DIGIT_B22 + ")*";
		public const String BASE23_REG_EXP						= "[+-]?[bB]23\\." + DIGIT_B23 + "(" + DIGIT_B23 + ")*";
		public const String BASE24_REG_EXP						= "[+-]?[bB]24\\." + DIGIT_B24 + "(" + DIGIT_B24 + ")*";
		public const String BASE25_REG_EXP						= "[+-]?[bB]25\\." + DIGIT_B25 + "(" + DIGIT_B25 + ")*";
		public const String BASE26_REG_EXP						= "[+-]?[bB]26\\." + DIGIT_B26 + "(" + DIGIT_B26 + ")*";
		public const String BASE27_REG_EXP						= "[+-]?[bB]27\\." + DIGIT_B27 + "(" + DIGIT_B27 + ")*";
		public const String BASE28_REG_EXP						= "[+-]?[bB]28\\." + DIGIT_B28 + "(" + DIGIT_B28 + ")*";
		public const String BASE29_REG_EXP						= "[+-]?[bB]29\\." + DIGIT_B29 + "(" + DIGIT_B29 + ")*";
		public const String BASE30_REG_EXP						= "[+-]?[bB]30\\." + DIGIT_B30 + "(" + DIGIT_B30 + ")*";
		public const String BASE31_REG_EXP						= "[+-]?[bB]31\\." + DIGIT_B31 + "(" + DIGIT_B31 + ")*";
		public const String BASE32_REG_EXP						= "[+-]?[bB]32\\." + DIGIT_B32 + "(" + DIGIT_B32 + ")*";
		public const String BASE33_REG_EXP						= "[+-]?[bB]33\\." + DIGIT_B33 + "(" + DIGIT_B33 + ")*";
		public const String BASE34_REG_EXP						= "[+-]?[bB]34\\." + DIGIT_B34 + "(" + DIGIT_B34 + ")*";
		public const String BASE35_REG_EXP						= "[+-]?[bB]35\\." + DIGIT_B35 + "(" + DIGIT_B35 + ")*";
		public const String BASE36_REG_EXP						= "[+-]?[bB]36\\." + DIGIT_B36 + "(" + DIGIT_B36 + ")*";
		public const String BASE_OTHER_REG_EXP					=
									"("
											+ BASE1_REG_EXP
											+ "|" + BASE2_REG_EXP
											+ "|" + BASE3_REG_EXP
											+ "|" + BASE4_REG_EXP
											+ "|" + BASE5_REG_EXP
											+ "|" + BASE6_REG_EXP
											+ "|" + BASE7_REG_EXP
											+ "|" + BASE8_REG_EXP
											+ "|" + BASE9_REG_EXP
											+ "|" + BASE10_REG_EXP
											+ "|" + BASE11_REG_EXP
											+ "|" + BASE12_REG_EXP
											+ "|" + BASE13_REG_EXP
											+ "|" + BASE14_REG_EXP
											+ "|" + BASE15_REG_EXP
											+ "|" + BASE16_REG_EXP
											+ "|" + BASE17_REG_EXP
											+ "|" + BASE18_REG_EXP
											+ "|" + BASE19_REG_EXP
											+ "|" + BASE20_REG_EXP
											+ "|" + BASE21_REG_EXP
											+ "|" + BASE22_REG_EXP
											+ "|" + BASE23_REG_EXP
											+ "|" + BASE24_REG_EXP
											+ "|" + BASE25_REG_EXP
											+ "|" + BASE26_REG_EXP
											+ "|" + BASE27_REG_EXP
											+ "|" + BASE28_REG_EXP
											+ "|" + BASE29_REG_EXP
											+ "|" + BASE30_REG_EXP
											+ "|" + BASE31_REG_EXP
											+ "|" + BASE32_REG_EXP
											+ "|" + BASE33_REG_EXP
											+ "|" + BASE34_REG_EXP
											+ "|" + BASE35_REG_EXP
											+ "|" + BASE36_REG_EXP
									+ ")";
		public const String UNICODE_NAME_REG_EXP = "(" +
											"\u03b1" /* α */
											+ "|" + "\u03b2" /* β */
											+ "|" + "\u03b3" /* γ */
											+ "|" + "\u03b4" /* δ */
											+ "|" + "\u03b5" /* ε */
											+ "|" + "\u03b6" /* ζ */
											+ "|" + "\u03b7" /* η */
											+ "|" + "\u03b8" /* θ */
											+ "|" + "\u03b9" /* ι */
											+ "|" + "\u03ba" /* κ */
											+ "|" + "\u03bb" /* λ */
											+ "|" + "\u03bc" /* μ */
											+ "|" + "\u03bd" /* ν */
											+ "|" + "\u03be" /* ξ */
											+ "|" + "\u03bf" /* ο */
											+ "|" + "\u03c0" /* π */
											+ "|" + "\u03c1" /* ρ */
											+ "|" + "\u03c2" /* ς */
											+ "|" + "\u03c3" /* σ */
											+ "|" + "\u03c4" /* τ */
											+ "|" + "\u03c5" /* υ */
											+ "|" + "\u03c6" /* φ */
											+ "|" + "\u03c7" /* χ */
											+ "|" + "\u03c8" /* ψ */
											+ "|" + "\u03c9" /* ω */
											+ "|" + "\u0391" /* Α */
											+ "|" + "\u0392" /* Β */
											+ "|" + "\u0393" /* Γ */
											+ "|" + "\u0394" /* Δ */
											+ "|" + "\u0395" /* Ε */
											+ "|" + "\u0396" /* Ζ */
											+ "|" + "\u0397" /* Η */
											+ "|" + "\u0398" /* Θ */
											+ "|" + "\u0399" /* Ι */
											+ "|" + "\u039a" /* Κ */
											+ "|" + "\u039b" /* Λ */
											+ "|" + "\u039c" /* Μ */
											+ "|" + "\u039d" /* Ν */
											+ "|" + "\u039e" /* Ξ */
											+ "|" + "\u039f" /* Ο */
											+ "|" + "\u03a0" /* Π */
											+ "|" + "\u03a1" /* Ρ */
											+ "|" + "\u03a3" /* Σ */
											+ "|" + "\u03a4" /* Τ */
											+ "|" + "\u03a5" /* Υ */
											+ "|" + "\u03a6" /* Φ */
											+ "|" + "\u03a7" /* Χ */
											+ "|" + "\u03a8" /* Ψ */
											+ "|" + "\u03a9" /* Ω */
											+ "|" + "\u2211" /* ∑ */
											+ "|" + "\u220f" /* ∏ */
											+ "|" + "\u213f" /* ℿ */
											+ "|" + "\u2206" /* ∆ */
											+ "|" + "\u2207" /* ∇ */
											+ "|" + "\u222b" /* ∫ */
											+ "|" + "\u213c" /* ℼ */
											+ "|" + "\u2107" /* ℇ */
											+ "|" + "\u2147" /* ⅇ */
											+ "|" + "\u212f" /* ℯ */
											+ "|" + "\u2202" /* ∂ */
									+ ")";
		public const String FRACTION							= "(" + INTEGER + "_)?" + INTEGER + "_" + INTEGER;
		public const String nameOnlyTokenRegExp					= "(" + "([a-zA-Z_])+([a-zA-Z0-9_])*" + "|" + UNICODE_NAME_REG_EXP + ")";
		public const String unitOnlyTokenRegExp					= "\\[" + nameOnlyTokenRegExp + "\\]";
		public const String nameOnlyTokenOptBracketsRegExp		= "(" +  nameOnlyTokenRegExp + "|" + unitOnlyTokenRegExp + ")";
		public const String nameTokenRegExp						= "(\\s)*" + nameOnlyTokenRegExp + "(\\s)*";
		public const String nameTokenOptBracketsRegExp			= "(\\s)*" + nameOnlyTokenOptBracketsRegExp + "(\\s)*";
		public const String paramsTokenRegeExp					= "(\\s)*\\(" + "(" + nameTokenRegExp + ",(\\s)*)*" + nameTokenRegExp + "\\)(\\s)*";
		public const String constArgDefStrRegExp				= nameTokenRegExp + "=" + "(\\s)*(.)+(\\s)*";
		public const String constUnitgDefStrRegExp				= nameTokenOptBracketsRegExp + "=" + "(\\s)*(.)+(\\s)*";
		public const String functionDefStrRegExp				= nameTokenRegExp + paramsTokenRegeExp + "=" + "(\\s)*(.)+(\\s)*";
		public const String function1ArgDefStrRegExp			= nameTokenRegExp + "(\\s)*\\(" + nameTokenRegExp + "(\\s)*\\)(\\s)*" + "=" + "(\\s)*(.)+(\\s)*";
		public const String functionVariadicDefStrRegExp		= nameTokenRegExp + "(\\s)*" + "\\(" + "(\\s)*" + "\\.\\.\\." + "(\\s)*" + "\\)" + "(\\s)*" + "=" + "(\\s)*(.)+(\\s)*";
		public const String ANY_NUMBER_LITERAL_REG_EXP			= "(" + DECIMAL_REG_EXP + "|" + BASE_OTHER_REG_EXP + "|" + FRACTION + ")";
		public const String NUMBER_NAME_IMPL_MULTI_REG_EXP		=
				"("
				+ "(" + ANY_NUMBER_LITERAL_REG_EXP + nameOnlyTokenOptBracketsRegExp + ")+" + "(" + ANY_NUMBER_LITERAL_REG_EXP + ")?"
				+ "|"
				+ "(" + nameOnlyTokenOptBracketsRegExp + ANY_NUMBER_LITERAL_REG_EXP + ")+" + "(" + nameOnlyTokenOptBracketsRegExp + ")?"
				+ ")";

		/**
		 * ParserSymbol - token type id.
		 */
		public const int TYPE_ID = 20;
		public static String TYPE_DESC = ParserSymbol.NA;
        /**
		 * ParserSymbol - tokens id.
		 */
        public const int LEFT_PARENTHESES_ID				= 1;
		public const int RIGHT_PARENTHESES_ID				= 2;
		public const int COMMA_ID							= 3;
		public const int BLANK_ID							= 4;
		public const int NUMBER_ID							= 1;
		public const int NUMBER_TYPE_ID						= 0;
		/**
		 * ParserSymbol - tokens key words.
		 */
		public const String LEFT_PARENTHESES_STR 			= "(";
		public const String RIGHT_PARENTHESES_STR			= ")";
		public const String COMMA_STR						= ",";
		public const String SEMI_STR						= ";";
		public const String BLANK_STR						= " ";
		public const String NUMBER_STR						= "_num_";
		/*
		 * ParserSymbol - syntax.
		 */
		public const String LEFT_PARENTHESES_SYN 		= "( ... )";
		public const String RIGHT_PARENTHESES_SYN		= "( ... )";
		public const String COMMA_SYN					= "(a1, ... ,an)";
		public const String SEMI_SYN					= "(a1; ... ;an)";
		public const String BLANK_SYN					= " ";
		public const String NUMBER_SYN					= "-2, 0.2, -002.1, 2.3e10, -.212, 1_2, 2_1_3, b1.111, b2.1001, h.af1,...";
		/*
		 * ParserSymbol - tokens description.
		 */
		public const String NA = "<NA>";
		public static String LEFT_PARENTHESES_DESC = ParserSymbol.NA;
		public static String RIGHT_PARENTHESES_DESC = ParserSymbol.NA;
		public static String COMMA_DESC = ParserSymbol.NA;
		public static String SEMI_DESC = ParserSymbol.NA;
		public static String BLANK_DESC = ParserSymbol.NA;
        public static String UNICODE_MATH_DESC = ParserSymbol.NA;
        public static String NUMBER_LITERAL_STR = ParserSymbol.NA;
        public static String NUMBER_LITERAL_DESC = ParserSymbol.NA;
        /*
		 * ParserSymbol - since.
		 */
        public const String LEFT_PARENTHESES_SINCE 		= mXparser.NAMEv10;
		public const String RIGHT_PARENTHESES_SINCE		= mXparser.NAMEv10;
		public const String COMMA_SINCE					= mXparser.NAMEv10;
		public const String SEMI_SINCE					= mXparser.NAMEv10;
		public const String BLANK_SINCE					= mXparser.NAMEv42;
		public const String NUMBER_SINCE				= mXparser.NAMEv10;
		public const String NUMBER_SINCE_INT			= mXparser.NAMEv10;
		public const String NUMBER_SINCE_DEC			= mXparser.NAMEv10;
		public const String NUMBER_SINCE_WITH_ZEROS		= mXparser.NAMEv41;
		public const String NUMBER_SINCE_NO_ZEROS		= mXparser.NAMEv42;
		public const String NUMBER_SINCE_SCI			= mXparser.NAMEv42;
		public const String NUMBER_SINCE_FRAC			= mXparser.NAMEv42;
		public const String NUMBER_SINCE_OTH_BASE		= mXparser.NAMEv42;
	}
}