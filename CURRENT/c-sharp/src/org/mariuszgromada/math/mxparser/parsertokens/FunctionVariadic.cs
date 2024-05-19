/*
 * @(#)FunctionVariadic.cs        6.0.0    2024-05-19
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
	 * Variadic functions (n parameters)- mXparser tokens definition.
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
	public sealed class FunctionVariadic {
		/*
		 * BooleanOperator - token type id.
		 */
		public const int TYPE_ID = 7;
        public static String TYPE_DESC = ParserSymbol.NA;
        /*
		 * BooleanOperator - tokens id.
		 */
        public const int IFF_ID						= 1;
		public const int MIN_ID						= 2;
		public const int MAX_ID						= 3;
		public const int CONT_FRAC_ID				= 4;
		public const int CONT_POL_ID				= 5;
		public const int GCD_ID						= 6;
		public const int LCM_ID						= 7;
		public const int SUM_ID						= 8;
		public const int PROD_ID					= 9;
		public const int AVG_ID						= 10;
		public const int VAR_ID						= 11;
		public const int STD_ID						= 12;
		public const int RND_LIST_ID				= 13;
		public const int COALESCE_ID				= 14;
		public const int OR_ID						= 15;
		public const int AND_ID						= 16;
		public const int XOR_ID						= 17;
		public const int ARGMIN_ID					= 18;
		public const int ARGMAX_ID					= 19;
		public const int MEDIAN_ID					= 20;
		public const int MODE_ID					= 21;
		public const int BASE_ID					= 22;
		public const int NDIST_ID					= 23;
		/*
		 * BooleanOperator - tokens key words.
		 */
		public const String IFF_STR 				= "iff";
		public const String MIN_STR					= "min";
		public const String MAX_STR					= "max";
		public const String CONT_FRAC_STR			= "ConFrac";
		public const String CONT_POL_STR			= "ConPol";
		public const String GCD_STR					= "gcd";
		public const String LCM_STR					= "lcm";
		public const String SUM_STR					= "add";
		public const String PROD_STR				= "multi";
		public const String AVG_STR					= "mean";
		public const String VAR_STR					= "var";
		public const String STD_STR					= "std";
		public const String RND_LIST_STR			= "rList";
		public const String COALESCE_STR			= "coalesce";
		public const String OR_STR					= "or";
		public const String AND_STR					= "and";
		public const String XOR_STR					= "xor";
		public const String ARGMIN_STR				= "argmin";
		public const String ARGMAX_STR				= "argmax";
		public const String MEDIAN_STR				= "med";
		public const String MODE_STR				= "mode";
		public const String BASE_STR				= "base";
		public const String NDIST_STR				= "ndist";
		/*
		 * FunctionVariadic - syntax.
		 */
		public static readonly String IFF_SYN 				= SyntaxStringBuilder.functionVariadicCond(IFF_STR);
		public static readonly String MIN_SYN				= SyntaxStringBuilder.functionVariadicA(MIN_STR);
		public static readonly String MAX_SYN				= SyntaxStringBuilder.functionVariadicA(MAX_STR);
		public static readonly String CONT_FRAC_SYN			= SyntaxStringBuilder.functionVariadicA(CONT_FRAC_STR);
		public static readonly String CONT_POL_SYN			= SyntaxStringBuilder.functionVariadicA(CONT_POL_STR);
		public static readonly String GCD_SYN				= SyntaxStringBuilder.functionVariadicA(GCD_STR);
		public static readonly String LCM_SYN				= SyntaxStringBuilder.functionVariadicA(LCM_STR);
		public static readonly String SUM_SYN				= SyntaxStringBuilder.functionVariadicA(SUM_STR);
		public static readonly String PROD_SYN				= SyntaxStringBuilder.functionVariadicA(PROD_STR);
		public static readonly String AVG_SYN				= SyntaxStringBuilder.functionVariadicA(AVG_STR);
		public static readonly String VAR_SYN				= SyntaxStringBuilder.functionVariadicA(VAR_STR);
		public static readonly String STD_SYN				= SyntaxStringBuilder.functionVariadicA(STD_STR);
		public static readonly String RND_LIST_SYN			= SyntaxStringBuilder.functionVariadicA(RND_LIST_STR);
		public static readonly String COALESCE_SYN			= SyntaxStringBuilder.functionVariadicA(COALESCE_STR);
		public static readonly String OR_SYN				= SyntaxStringBuilder.functionVariadicA(OR_STR);
		public static readonly String AND_SYN				= SyntaxStringBuilder.functionVariadicA(AND_STR);
		public static readonly String XOR_SYN				= SyntaxStringBuilder.functionVariadicA(XOR_STR);
		public static readonly String ARGMIN_SYN			= SyntaxStringBuilder.functionVariadicA(ARGMIN_STR);
		public static readonly String ARGMAX_SYN			= SyntaxStringBuilder.functionVariadicA(ARGMAX_STR);
		public static readonly String MEDIAN_SYN			= SyntaxStringBuilder.functionVariadicA(MEDIAN_STR);
		public static readonly String MODE_SYN				= SyntaxStringBuilder.functionVariadicA(MODE_STR);
		public static readonly String BASE_SYN				= SyntaxStringBuilder.functionVariadicBD(BASE_STR);
		public static readonly String NDIST_SYN				= SyntaxStringBuilder.functionVariadicV(NDIST_STR);
        /*
		 * FunctionVariadic - tokens description.
		 */
        public static String IFF_DESC = ParserSymbol.NA;
        public static String MIN_DESC = ParserSymbol.NA;
        public static String MAX_DESC = ParserSymbol.NA;
        public static String CONT_FRAC_DESC = ParserSymbol.NA;
        public static String CONT_POL_DESC = ParserSymbol.NA;
        public static String GCD_DESC = ParserSymbol.NA;
        public static String LCM_DESC = ParserSymbol.NA;
        public static String SUM_DESC = ParserSymbol.NA;
        public static String PROD_DESC = ParserSymbol.NA;
        public static String AVG_DESC = ParserSymbol.NA;
        public static String VAR_DESC = ParserSymbol.NA;
        public static String STD_DESC = ParserSymbol.NA;
        public static String RND_LIST_DESC = ParserSymbol.NA;
        public static String COALESCE_DESC = ParserSymbol.NA;
        public static String OR_DESC = ParserSymbol.NA;
        public static String AND_DESC = ParserSymbol.NA;
        public static String XOR_DESC = ParserSymbol.NA;
        public static String ARGMIN_DESC = ParserSymbol.NA;
        public static String ARGMAX_DESC = ParserSymbol.NA;
        public static String MEDIAN_DESC = ParserSymbol.NA;
        public static String MODE_DESC = ParserSymbol.NA;
        public static String BASE_DESC = ParserSymbol.NA;
        public static String NDIST_DESC = ParserSymbol.NA;
        /*
		 * FunctionVariadic - since.
		 */
        public const String IFF_SINCE 				= mXparser.NAMEv10;
		public const String MIN_SINCE 				= mXparser.NAMEv10;
		public const String MAX_SINCE 				= mXparser.NAMEv10;
		public const String CONT_FRAC_SINCE			= mXparser.NAMEv10;
		public const String CONT_POL_SINCE			= mXparser.NAMEv10;
		public const String GCD_SINCE				= mXparser.NAMEv10;
		public const String LCM_SINCE				= mXparser.NAMEv10;
		public const String SUM_SINCE				= mXparser.NAMEv24;
		public const String PROD_SINCE				= mXparser.NAMEv24;
		public const String AVG_SINCE				= mXparser.NAMEv24;
		public const String VAR_SINCE				= mXparser.NAMEv24;
		public const String STD_SINCE				= mXparser.NAMEv24;
		public const String RND_LIST_SINCE			= mXparser.NAMEv30;
		public const String COALESCE_SINCE			= mXparser.NAMEv41;
		public const String OR_SINCE				= mXparser.NAMEv41;
		public const String AND_SINCE				= mXparser.NAMEv41;
		public const String XOR_SINCE				= mXparser.NAMEv41;
		public const String ARGMIN_SINCE			= mXparser.NAMEv41;
		public const String ARGMAX_SINCE			= mXparser.NAMEv41;
		public const String MEDIAN_SINCE			= mXparser.NAMEv41;
		public const String MODE_SINCE				= mXparser.NAMEv41;
		public const String BASE_SINCE				= mXparser.NAMEv41;
		public const String NDIST_SINCE				= mXparser.NAMEv41;
	}
}