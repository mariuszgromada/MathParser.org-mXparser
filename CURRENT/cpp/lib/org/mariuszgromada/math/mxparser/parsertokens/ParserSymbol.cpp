/*
 * @(#)ParserSymbol.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {

	API_VISIBLE StringPtr ParserSymbol::NA = nullptr;
	API_VISIBLE StringPtr ParserSymbol::EMPTY = nullptr;

	/*
	 * ParserSymbol - reg exp patterns.
	 */
	API_VISIBLE StringPtr ParserSymbol::DIGIT = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B1 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B2 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B3 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B4 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B5 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B6 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B7 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B8 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B9 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B10 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B11 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B12 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B13 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B14 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B15 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B16 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B17 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B18 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B19 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B20 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B21 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B22 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B23 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B24 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B25 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B26 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B27 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B28 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B29 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B30 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B31 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B32 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B33 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B34 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B35 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DIGIT_B36 = nullptr;
	API_VISIBLE StringPtr ParserSymbol::INTEGER = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DEC_FRACT = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DEC_FRACT_OR_INT = nullptr;
	API_VISIBLE StringPtr ParserSymbol::DECIMAL_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE1_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE2_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE3_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE4_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE5_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE6_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE7_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE8_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE9_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE10_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE11_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE12_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE13_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE14_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE15_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE16_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE17_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE18_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE19_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE20_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE21_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE22_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE23_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE24_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE25_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE26_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE27_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE28_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE29_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE30_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE31_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE32_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE33_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE34_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE35_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE36_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BASE_OTHER_REG_EXP = nullptr;

	API_VISIBLE StringPtr ParserSymbol::UNICODE_NAME_REG_EXP = nullptr;

	API_VISIBLE StringPtr ParserSymbol::FRACTION = nullptr;
	API_VISIBLE StringPtr ParserSymbol::nameOnlyTokenRegExp = nullptr;
	API_VISIBLE StringPtr ParserSymbol::unitOnlyTokenRegExp = nullptr;
	API_VISIBLE StringPtr ParserSymbol::nameOnlyTokenOptBracketsRegExp = nullptr;
	API_VISIBLE StringPtr ParserSymbol::nameTokenRegExp = nullptr;
	API_VISIBLE StringPtr ParserSymbol::nameTokenOptBracketsRegExp = nullptr;
	API_VISIBLE StringPtr ParserSymbol::paramsTokenRegeExp = nullptr;
	API_VISIBLE StringPtr ParserSymbol::constArgDefStrRegExp = nullptr;
	API_VISIBLE StringPtr ParserSymbol::constUnitgDefStrRegExp = nullptr;
	API_VISIBLE StringPtr ParserSymbol::functionDefStrRegExp = nullptr;
	API_VISIBLE StringPtr ParserSymbol::function1ArgDefStrRegExp = nullptr;
	API_VISIBLE StringPtr ParserSymbol::functionVariadicDefStrRegExp = nullptr;
	API_VISIBLE StringPtr ParserSymbol::ANY_NUMBER_LITERAL_REG_EXP = nullptr;
	API_VISIBLE StringPtr ParserSymbol::NUMBER_NAME_IMPL_MULTI_REG_EXP = nullptr;

	API_VISIBLE StringPtr ParserSymbol::TYPE_DESC = nullptr;

	/*
	 * ParserSymbol - tokens key words.
	 */
	API_VISIBLE StringPtr ParserSymbol::LEFT_PARENTHESES_STR = nullptr;
	API_VISIBLE StringPtr ParserSymbol::RIGHT_PARENTHESES_STR = nullptr;
	API_VISIBLE StringPtr ParserSymbol::COMMA_STR = nullptr;
	API_VISIBLE StringPtr ParserSymbol::SEMI_STR = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BLANK_STR = nullptr;
	API_VISIBLE StringPtr ParserSymbol::NUMBER_STR = nullptr;
	/*
	 * ParserSymbol - syntax.
	 */
	API_VISIBLE StringPtr ParserSymbol::LEFT_PARENTHESES_SYN = nullptr;
	API_VISIBLE StringPtr ParserSymbol::RIGHT_PARENTHESES_SYN = nullptr;
	API_VISIBLE StringPtr ParserSymbol::COMMA_SYN = nullptr;
	API_VISIBLE StringPtr ParserSymbol::SEMI_SYN = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BLANK_SYN = nullptr;
	API_VISIBLE StringPtr ParserSymbol::NUMBER_SYN = nullptr;

	/*
	 * ParserSymbol - tokens description.
	 */
	API_VISIBLE StringPtr ParserSymbol::LEFT_PARENTHESES_DESC = nullptr;
	API_VISIBLE StringPtr ParserSymbol::RIGHT_PARENTHESES_DESC = nullptr;
	API_VISIBLE StringPtr ParserSymbol::COMMA_DESC = nullptr;
	API_VISIBLE StringPtr ParserSymbol::SEMI_DESC = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BLANK_DESC = nullptr;
	API_VISIBLE StringPtr ParserSymbol::UNICODE_MATH_DESC = nullptr;
	API_VISIBLE StringPtr ParserSymbol::NUMBER_LITERAL_STR = nullptr;
	API_VISIBLE StringPtr ParserSymbol::NUMBER_LITERAL_DESC = nullptr;

	/*
	 * ParserSymbol - since.
	 */
	API_VISIBLE StringPtr ParserSymbol::LEFT_PARENTHESES_SINCE = nullptr;
	API_VISIBLE StringPtr ParserSymbol::RIGHT_PARENTHESES_SINCE = nullptr;
	API_VISIBLE StringPtr ParserSymbol::COMMA_SINCE = nullptr;
	API_VISIBLE StringPtr ParserSymbol::BLANK_SINCE = nullptr;
	API_VISIBLE StringPtr ParserSymbol::NUMBER_SINCE = nullptr;

	STATIC_VARS_INITI_CPP(ParserSymbol,

		STATIC_VARS_INITI_DEPENDENCY(mXparser);

		NA = S("<NA>");
		EMPTY = S("");

		/*
		 * ParserSymbol - reg exp patterns.
		 */
		DIGIT = S(UTF("[0-9]"));
		DIGIT_B1 = S(UTF("1"));
		DIGIT_B2 = S(UTF("[01]"));
		DIGIT_B3 = S(UTF("[0-2]"));
		DIGIT_B4 = S(UTF("[0-3]"));
		DIGIT_B5 = S(UTF("[0-4]"));
		DIGIT_B6 = S(UTF("[0-5]"));
		DIGIT_B7 = S(UTF("[0-6]"));
		DIGIT_B8 = S(UTF("[0-7]"));
		DIGIT_B9 = S(UTF("[0-8]"));
		DIGIT_B10 = S(UTF("[0-9]"));
		DIGIT_B11 = S(UTF("[0-9aA]"));
		DIGIT_B12 = S(UTF("[0-9a-bA-B]"));
		DIGIT_B13 = S(UTF("[0-9a-cA-C]"));
		DIGIT_B14 = S(UTF("[0-9a-dA-D]"));
		DIGIT_B15 = S(UTF("[0-9a-eA-E]"));
		DIGIT_B16 = S(UTF("[0-9a-fA-F]"));
		DIGIT_B17 = S(UTF("[0-9a-gA-G]"));
		DIGIT_B18 = S(UTF("[0-9a-hA-H]"));
		DIGIT_B19 = S(UTF("[0-9a-iA-I]"));
		DIGIT_B20 = S(UTF("[0-9a-jA-J]"));
		DIGIT_B21 = S(UTF("[0-9a-kA-K]"));
		DIGIT_B22 = S(UTF("[0-9a-lA-L]"));
		DIGIT_B23 = S(UTF("[0-9a-mA-M]"));
		DIGIT_B24 = S(UTF("[0-9a-nA-N]"));
		DIGIT_B25 = S(UTF("[0-9a-oA-O]"));
		DIGIT_B26 = S(UTF("[0-9a-pA-P]"));
		DIGIT_B27 = S(UTF("[0-9a-qA-Q]"));
		DIGIT_B28 = S(UTF("[0-9a-rA-R]"));
		DIGIT_B29 = S(UTF("[0-9a-sA-S]"));
		DIGIT_B30 = S(UTF("[0-9a-tA-T]"));
		DIGIT_B31 = S(UTF("[0-9a-uA-U]"));
		DIGIT_B32 = S(UTF("[0-9a-vA-V]"));
		DIGIT_B33 = S(UTF("[0-9a-wA-W]"));
		DIGIT_B34 = S(UTF("[0-9a-xA-X]"));
		DIGIT_B35 = S(UTF("[0-9a-yA-Y]"));
		DIGIT_B36 = S(UTF("[0-9a-zA-Z]"));
		INTEGER = DIGIT + UTF("(") + DIGIT + UTF(")*");
		DEC_FRACT = UTF("(") + INTEGER + UTF(")?") + UTF("\\.") + INTEGER;
		DEC_FRACT_OR_INT = UTF("(") + DEC_FRACT + UTF("|") + INTEGER + UTF(")");
		DECIMAL_REG_EXP = UTF("[+-]?") + DEC_FRACT_OR_INT + UTF("([eE][+-]?") + INTEGER + UTF(")?");
		BASE1_REG_EXP = UTF("[+-]?[bB]1\\.(") + DIGIT_B1 + UTF(")*");
		BASE2_REG_EXP = UTF("[+-]?[bB][2]?\\.") + DIGIT_B2 + UTF("(") + DIGIT_B2 + UTF(")*");
		BASE3_REG_EXP = UTF("[+-]?[bB]3\\.") + DIGIT_B3 + UTF("(") + DIGIT_B3 + UTF(")*");
		BASE4_REG_EXP = UTF("[+-]?[bB]4\\.") + DIGIT_B4 + UTF("(") + DIGIT_B4 + UTF(")*");
		BASE5_REG_EXP = UTF("[+-]?[bB]5\\.") + DIGIT_B5 + UTF("(") + DIGIT_B5 + UTF(")*");
		BASE6_REG_EXP = UTF("[+-]?[bB]6\\.") + DIGIT_B6 + UTF("(") + DIGIT_B6 + UTF(")*");
		BASE7_REG_EXP = UTF("[+-]?[bB]7\\.") + DIGIT_B7 + UTF("(") + DIGIT_B7 + UTF(")*");
		BASE8_REG_EXP = UTF("[+-]?([bB]8|[oO])\\.") + DIGIT_B8 + UTF("(") + DIGIT_B8 + UTF(")*");
		BASE9_REG_EXP = UTF("[+-]?[bB]9\\.") + DIGIT_B9 + UTF("(") + DIGIT_B9 + UTF(")*");
		BASE10_REG_EXP = UTF("[+-]?[bB]10\\.") + DIGIT_B10 + UTF("(") + DIGIT_B10 + UTF(")*");
		BASE11_REG_EXP = UTF("[+-]?[bB]11\\.") + DIGIT_B11 + UTF("(") + DIGIT_B11 + UTF(")*");
		BASE12_REG_EXP = UTF("[+-]?[bB]12\\.") + DIGIT_B12 + UTF("(") + DIGIT_B12 + UTF(")*");
		BASE13_REG_EXP = UTF("[+-]?[bB]13\\.") + DIGIT_B13 + UTF("(") + DIGIT_B13 + UTF(")*");
		BASE14_REG_EXP = UTF("[+-]?[bB]14\\.") + DIGIT_B14 + UTF("(") + DIGIT_B14 + UTF(")*");
		BASE15_REG_EXP = UTF("[+-]?[bB]15\\.") + DIGIT_B15 + UTF("(") + DIGIT_B15 + UTF(")*");
		BASE16_REG_EXP = UTF("[+-]?([bB]16|[hH])\\.") + DIGIT_B16 + UTF("(") + DIGIT_B16 + UTF(")*");
		BASE17_REG_EXP = UTF("[+-]?[bB]17\\.") + DIGIT_B17 + UTF("(") + DIGIT_B17 + UTF(")*");
		BASE18_REG_EXP = UTF("[+-]?[bB]18\\.") + DIGIT_B18 + UTF("(") + DIGIT_B18 + UTF(")*");
		BASE19_REG_EXP = UTF("[+-]?[bB]19\\.") + DIGIT_B19 + UTF("(") + DIGIT_B19 + UTF(")*");
		BASE20_REG_EXP = UTF("[+-]?[bB]20\\.") + DIGIT_B20 + UTF("(") + DIGIT_B20 + UTF(")*");
		BASE21_REG_EXP = UTF("[+-]?[bB]21\\.") + DIGIT_B21 + UTF("(") + DIGIT_B21 + UTF(")*");
		BASE22_REG_EXP = UTF("[+-]?[bB]22\\.") + DIGIT_B22 + UTF("(") + DIGIT_B22 + UTF(")*");
		BASE23_REG_EXP = UTF("[+-]?[bB]23\\.") + DIGIT_B23 + UTF("(") + DIGIT_B23 + UTF(")*");
		BASE24_REG_EXP = UTF("[+-]?[bB]24\\.") + DIGIT_B24 + UTF("(") + DIGIT_B24 + UTF(")*");
		BASE25_REG_EXP = UTF("[+-]?[bB]25\\.") + DIGIT_B25 + UTF("(") + DIGIT_B25 + UTF(")*");
		BASE26_REG_EXP = UTF("[+-]?[bB]26\\.") + DIGIT_B26 + UTF("(") + DIGIT_B26 + UTF(")*");
		BASE27_REG_EXP = UTF("[+-]?[bB]27\\.") + DIGIT_B27 + UTF("(") + DIGIT_B27 + UTF(")*");
		BASE28_REG_EXP = UTF("[+-]?[bB]28\\.") + DIGIT_B28 + UTF("(") + DIGIT_B28 + UTF(")*");
		BASE29_REG_EXP = UTF("[+-]?[bB]29\\.") + DIGIT_B29 + UTF("(") + DIGIT_B29 + UTF(")*");
		BASE30_REG_EXP = UTF("[+-]?[bB]30\\.") + DIGIT_B30 + UTF("(") + DIGIT_B30 + UTF(")*");
		BASE31_REG_EXP = UTF("[+-]?[bB]31\\.") + DIGIT_B31 + UTF("(") + DIGIT_B31 + UTF(")*");
		BASE32_REG_EXP = UTF("[+-]?[bB]32\\.") + DIGIT_B32 + UTF("(") + DIGIT_B32 + UTF(")*");
		BASE33_REG_EXP = UTF("[+-]?[bB]33\\.") + DIGIT_B33 + UTF("(") + DIGIT_B33 + UTF(")*");
		BASE34_REG_EXP = UTF("[+-]?[bB]34\\.") + DIGIT_B34 + UTF("(") + DIGIT_B34 + UTF(")*");
		BASE35_REG_EXP = UTF("[+-]?[bB]35\\.") + DIGIT_B35 + UTF("(") + DIGIT_B35 + UTF(")*");
		BASE36_REG_EXP = UTF("[+-]?[bB]36\\.") + DIGIT_B36 + UTF("(") + DIGIT_B36 + UTF(")*");
		BASE_OTHER_REG_EXP =
		UTF("(")
		+ BASE1_REG_EXP
		+ UTF("|") + BASE2_REG_EXP
		+ UTF("|") + BASE3_REG_EXP
		+ UTF("|") + BASE4_REG_EXP
		+ UTF("|") + BASE5_REG_EXP
		+ UTF("|") + BASE6_REG_EXP
		+ UTF("|") + BASE7_REG_EXP
		+ UTF("|") + BASE8_REG_EXP
		+ UTF("|") + BASE9_REG_EXP
		+ UTF("|") + BASE10_REG_EXP
		+ UTF("|") + BASE11_REG_EXP
		+ UTF("|") + BASE12_REG_EXP
		+ UTF("|") + BASE13_REG_EXP
		+ UTF("|") + BASE14_REG_EXP
		+ UTF("|") + BASE15_REG_EXP
		+ UTF("|") + BASE16_REG_EXP
		+ UTF("|") + BASE17_REG_EXP
		+ UTF("|") + BASE18_REG_EXP
		+ UTF("|") + BASE19_REG_EXP
		+ UTF("|") + BASE20_REG_EXP
		+ UTF("|") + BASE21_REG_EXP
		+ UTF("|") + BASE22_REG_EXP
		+ UTF("|") + BASE23_REG_EXP
		+ UTF("|") + BASE24_REG_EXP
		+ UTF("|") + BASE25_REG_EXP
		+ UTF("|") + BASE26_REG_EXP
		+ UTF("|") + BASE27_REG_EXP
		+ UTF("|") + BASE28_REG_EXP
		+ UTF("|") + BASE29_REG_EXP
		+ UTF("|") + BASE30_REG_EXP
		+ UTF("|") + BASE31_REG_EXP
		+ UTF("|") + BASE32_REG_EXP
		+ UTF("|") + BASE33_REG_EXP
		+ UTF("|") + BASE34_REG_EXP
		+ UTF("|") + BASE35_REG_EXP
		+ UTF("|") + BASE36_REG_EXP
		+ UTF(")");

		UNICODE_NAME_REG_EXP = S(UTF("(")) +
		UTF("\u03b1") /* α */
		+ UTF("|") + UTF("\u03b2") /* β */
		+ UTF("|") + UTF("\u03b3") /* γ */
		+ UTF("|") + UTF("\u03b4") /* δ */
		+ UTF("|") + UTF("\u03b5") /* ε */
		+ UTF("|") + UTF("\u03b6") /* ζ */
		+ UTF("|") + UTF("\u03b7") /* η */
		+ UTF("|") + UTF("\u03b8") /* θ */
		+ UTF("|") + UTF("\u03b9") /* ι */
		+ UTF("|") + UTF("\u03ba") /* κ */
		+ UTF("|") + UTF("\u03bb") /* λ */
		+ UTF("|") + UTF("\u03bc") /* μ */
		+ UTF("|") + UTF("\u03bd") /* ν */
		+ UTF("|") + UTF("\u03be") /* ξ */
		+ UTF("|") + UTF("\u03bf") /* ο */
		+ UTF("|") + UTF("\u03c0") /* π */
		+ UTF("|") + UTF("\u03c1") /* ρ */
		+ UTF("|") + UTF("\u03c2") /* ς */
		+ UTF("|") + UTF("\u03c3") /* σ */
		+ UTF("|") + UTF("\u03c4") /* τ */
		+ UTF("|") + UTF("\u03c5") /* υ */
		+ UTF("|") + UTF("\u03c6") /* φ */
		+ UTF("|") + UTF("\u03c7") /* χ */
		+ UTF("|") + UTF("\u03c8") /* ψ */
		+ UTF("|") + UTF("\u03c9") /* ω */
		+ UTF("|") + UTF("\u0391") /* Α */
		+ UTF("|") + UTF("\u0392") /* Β */
		+ UTF("|") + UTF("\u0393") /* Γ */
		+ UTF("|") + UTF("\u0394") /* Δ */
		+ UTF("|") + UTF("\u0395") /* Ε */
		+ UTF("|") + UTF("\u0396") /* Ζ */
		+ UTF("|") + UTF("\u0397") /* Η */
		+ UTF("|") + UTF("\u0398") /* Θ */
		+ UTF("|") + UTF("\u0399") /* Ι */
		+ UTF("|") + UTF("\u039a") /* Κ */
		+ UTF("|") + UTF("\u039b") /* Λ */
		+ UTF("|") + UTF("\u039c") /* Μ */
		+ UTF("|") + UTF("\u039d") /* Ν */
		+ UTF("|") + UTF("\u039e") /* Ξ */
		+ UTF("|") + UTF("\u039f") /* Ο */
		+ UTF("|") + UTF("\u03a0") /* Π */
		+ UTF("|") + UTF("\u03a1") /* Ρ */
		+ UTF("|") + UTF("\u03a3") /* Σ */
		+ UTF("|") + UTF("\u03a4") /* Τ */
		+ UTF("|") + UTF("\u03a5") /* Υ */
		+ UTF("|") + UTF("\u03a6") /* Φ */
		+ UTF("|") + UTF("\u03a7") /* Χ */
		+ UTF("|") + UTF("\u03a8") /* Ψ */
		+ UTF("|") + UTF("\u03a9") /* Ω */
		+ UTF("|") + UTF("\u2211") /* ∑ */
		+ UTF("|") + UTF("\u220f") /* ∏ */
		+ UTF("|") + UTF("\u213f") /* ℿ */
		+ UTF("|") + UTF("\u2206") /* ∆ */
		+ UTF("|") + UTF("\u2207") /* ∇ */
		+ UTF("|") + UTF("\u222b") /* ∫ */
		+ UTF("|") + UTF("\u213c") /* ℼ */
		+ UTF("|") + UTF("\u2107") /* ℇ */
		+ UTF("|") + UTF("\u2147") /* ⅇ */
		+ UTF("|") + UTF("\u212f") /* ℯ */
		+ UTF("|") + UTF("\u2202") /* ∂ */
		+ UTF(")");

		FRACTION = UTF("(") + INTEGER + UTF("_)?") + INTEGER + UTF("_") + INTEGER;
		nameOnlyTokenRegExp = S(UTF("(")) + UTF("([a-zA-Z_])+([a-zA-Z0-9_])*") + UTF("|") + UNICODE_NAME_REG_EXP +
		UTF(")");
		unitOnlyTokenRegExp = UTF("\\[") + nameOnlyTokenRegExp + UTF("\\]");
		nameOnlyTokenOptBracketsRegExp = UTF("(") + nameOnlyTokenRegExp + UTF("|") + unitOnlyTokenRegExp + UTF(")");
		nameTokenRegExp = UTF("(\\s)*") + nameOnlyTokenRegExp + UTF("(\\s)*");
		nameTokenOptBracketsRegExp = UTF("(\\s)*") + nameOnlyTokenOptBracketsRegExp + UTF("(\\s)*");
		paramsTokenRegeExp = S(UTF("(\\s)*\\(")) + UTF("(") + nameTokenRegExp + UTF(",(\\s)*)*") + nameTokenRegExp +
		UTF("\\)(\\s)*");
		constArgDefStrRegExp = nameTokenRegExp + UTF("=") + UTF("(\\s)*(.)+(\\s)*");
		constUnitgDefStrRegExp = nameTokenOptBracketsRegExp + UTF("=") + UTF("(\\s)*(.)+(\\s)*");
		functionDefStrRegExp = nameTokenRegExp + paramsTokenRegeExp + UTF("=") + UTF("(\\s)*(.)+(\\s)*");
		function1ArgDefStrRegExp = nameTokenRegExp + UTF("(\\s)*\\(") + nameTokenRegExp + UTF("(\\s)*\\)(\\s)*") +
		UTF("=") + UTF("(\\s)*(.)+(\\s)*");
		functionVariadicDefStrRegExp = nameTokenRegExp + UTF("(\\s)*") + UTF("\\(") + UTF("(\\s)*") + UTF(
			"\\.\\.\\.") + UTF("(\\s)*") + UTF("\\)") + UTF("(\\s)*") + UTF("=") + UTF("(\\s)*(.)+(\\s)*");
		ANY_NUMBER_LITERAL_REG_EXP = UTF("(") + DECIMAL_REG_EXP + UTF("|") + BASE_OTHER_REG_EXP + UTF("|") +
		FRACTION + UTF(")");
		NUMBER_NAME_IMPL_MULTI_REG_EXP =
		S(UTF("("))
		+ UTF("(") + ANY_NUMBER_LITERAL_REG_EXP + nameOnlyTokenOptBracketsRegExp + UTF(")+") + UTF("(") +
		ANY_NUMBER_LITERAL_REG_EXP + UTF(")?")
		+ UTF("|")
		+ UTF("(") + nameOnlyTokenOptBracketsRegExp + ANY_NUMBER_LITERAL_REG_EXP + UTF(")+") + UTF("(") +
		nameOnlyTokenOptBracketsRegExp + UTF(")?")
		+ UTF(")");


		TYPE_DESC = NA;

		/*
		 * ParserSymbol - tokens key words.
		 */
		LEFT_PARENTHESES_STR = S(UTF("("));
		RIGHT_PARENTHESES_STR = S(UTF(")"));
		COMMA_STR = S(UTF(","));
		SEMI_STR= S(UTF(";"));
		BLANK_STR = S(UTF(" "));
		NUMBER_STR = S(UTF("_num_"));
		/*
		 * ParserSymbol - syntax.
		 */
		LEFT_PARENTHESES_SYN = S(UTF("( ... )"));
		RIGHT_PARENTHESES_SYN = S(UTF("( ... )"));
		COMMA_SYN = S(UTF("(a1, ... ,an)"));
		SEMI_SYN= S(UTF("(a1; ... ;an)"));
		BLANK_SYN = S(UTF(" "));
		NUMBER_SYN = S(UTF("-2, 0.2, -002.1, 2.3e10, -.212, 1_2, 2_1_3, b1.111, b2.1001, h.af1,..."));
		/*
		 * ParserSymbol - tokens description.
		 */
		LEFT_PARENTHESES_DESC = NA;
		RIGHT_PARENTHESES_DESC = NA;
		COMMA_DESC = NA;
		SEMI_DESC = NA;
		BLANK_DESC = NA;
		UNICODE_MATH_DESC = NA;
		NUMBER_LITERAL_STR = NA;
		NUMBER_LITERAL_DESC = NA;

		/*
		 * ParserSymbol - since.
		 */
		LEFT_PARENTHESES_SINCE = mXparser::NAMEv10;
		RIGHT_PARENTHESES_SINCE = mXparser::NAMEv10;
		COMMA_SINCE = mXparser::NAMEv10;
		BLANK_SINCE = mXparser::NAMEv42;
		NUMBER_SINCE = mXparser::NAMEv10;
	);

} // namespace org::mariuszgromada::math::mxparser::parsertokens