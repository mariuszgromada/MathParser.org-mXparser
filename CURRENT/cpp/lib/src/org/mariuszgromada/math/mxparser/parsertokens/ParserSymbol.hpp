/*
 * @(#)ParserSymbol.hpp        6.1.0    2024-09-08
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_PARSERSYMBOL_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_PARSERSYMBOL_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {

	class API_VISIBLE ParserSymbol {
	public:
		ParserSymbol() = delete;

		static StringPtr NA;
		static StringPtr EMPTY;

		/*
		 * ParserSymbol - reg exp patterns.
		 */
		static StringPtr DIGIT;
		static StringPtr DIGIT_B1;
		static StringPtr DIGIT_B2;
		static StringPtr DIGIT_B3;
		static StringPtr DIGIT_B4;
		static StringPtr DIGIT_B5;
		static StringPtr DIGIT_B6;
		static StringPtr DIGIT_B7;
		static StringPtr DIGIT_B8;
		static StringPtr DIGIT_B9;
		static StringPtr DIGIT_B10;
		static StringPtr DIGIT_B11;
		static StringPtr DIGIT_B12;
		static StringPtr DIGIT_B13;
		static StringPtr DIGIT_B14;
		static StringPtr DIGIT_B15;
		static StringPtr DIGIT_B16;
		static StringPtr DIGIT_B17;
		static StringPtr DIGIT_B18;
		static StringPtr DIGIT_B19;
		static StringPtr DIGIT_B20;
		static StringPtr DIGIT_B21;
		static StringPtr DIGIT_B22;
		static StringPtr DIGIT_B23;
		static StringPtr DIGIT_B24;
		static StringPtr DIGIT_B25;
		static StringPtr DIGIT_B26;
		static StringPtr DIGIT_B27;
		static StringPtr DIGIT_B28;
		static StringPtr DIGIT_B29;
		static StringPtr DIGIT_B30;
		static StringPtr DIGIT_B31;
		static StringPtr DIGIT_B32;
		static StringPtr DIGIT_B33;
		static StringPtr DIGIT_B34;
		static StringPtr DIGIT_B35;
		static StringPtr DIGIT_B36;
		static StringPtr INTEGER;
		static StringPtr DEC_FRACT;
		static StringPtr DEC_FRACT_OR_INT;
		static StringPtr DECIMAL_REG_EXP;
		static StringPtr BASE1_REG_EXP;
		static StringPtr BASE2_REG_EXP;
		static StringPtr BASE3_REG_EXP;
		static StringPtr BASE4_REG_EXP;
		static StringPtr BASE5_REG_EXP;
		static StringPtr BASE6_REG_EXP;
		static StringPtr BASE7_REG_EXP;
		static StringPtr BASE8_REG_EXP;
		static StringPtr BASE9_REG_EXP;
		static StringPtr BASE10_REG_EXP;
		static StringPtr BASE11_REG_EXP;
		static StringPtr BASE12_REG_EXP;
		static StringPtr BASE13_REG_EXP;
		static StringPtr BASE14_REG_EXP;
		static StringPtr BASE15_REG_EXP;
		static StringPtr BASE16_REG_EXP;
		static StringPtr BASE17_REG_EXP;
		static StringPtr BASE18_REG_EXP;
		static StringPtr BASE19_REG_EXP;
		static StringPtr BASE20_REG_EXP;
		static StringPtr BASE21_REG_EXP;
		static StringPtr BASE22_REG_EXP;
		static StringPtr BASE23_REG_EXP;
		static StringPtr BASE24_REG_EXP;
		static StringPtr BASE25_REG_EXP;
		static StringPtr BASE26_REG_EXP;
		static StringPtr BASE27_REG_EXP;
		static StringPtr BASE28_REG_EXP;
		static StringPtr BASE29_REG_EXP;
		static StringPtr BASE30_REG_EXP;
		static StringPtr BASE31_REG_EXP;
		static StringPtr BASE32_REG_EXP;
		static StringPtr BASE33_REG_EXP;
		static StringPtr BASE34_REG_EXP;
		static StringPtr BASE35_REG_EXP;
		static StringPtr BASE36_REG_EXP;
		static StringPtr BASE_OTHER_REG_EXP;

		static StringPtr UNICODE_NAME_REG_EXP;

		static StringPtr FRACTION;
		static StringPtr nameOnlyTokenRegExp;
		static StringPtr unitOnlyTokenRegExp;
		static StringPtr nameOnlyTokenOptBracketsRegExp;
		static StringPtr nameTokenRegExp;
		static StringPtr nameTokenOptBracketsRegExp;
		static StringPtr paramsTokenRegeExp;
		static StringPtr constArgDefStrRegExp;
		static StringPtr constUnitgDefStrRegExp;
		static StringPtr functionDefStrRegExp;
		static StringPtr function1ArgDefStrRegExp;
		static StringPtr functionVariadicDefStrRegExp;
		static StringPtr ANY_NUMBER_LITERAL_REG_EXP;
		static StringPtr NUMBER_NAME_IMPL_MULTI_REG_EXP;

		static constexpr int TYPE_ID = 20;
		static StringPtr TYPE_DESC;

		static constexpr int LEFT_PARENTHESES_ID = 1;
		static constexpr int RIGHT_PARENTHESES_ID = 2;
		static constexpr int COMMA_ID = 3;
		static constexpr int BLANK_ID = 4;
		static constexpr int NUMBER_ID = 1;
		static constexpr int NUMBER_TYPE_ID = 0;

		/*
		 * ParserSymbol - tokens key words.
		 */
		static StringPtr LEFT_PARENTHESES_STR;
		static StringPtr RIGHT_PARENTHESES_STR;
		static StringPtr COMMA_STR;
		static StringPtr SEMI_STR;
		static StringPtr BLANK_STR;
		static StringPtr NUMBER_STR;
		/*
		 * ParserSymbol - syntax.
		 */
		static StringPtr LEFT_PARENTHESES_SYN;
		static StringPtr RIGHT_PARENTHESES_SYN;
		static StringPtr COMMA_SYN;
		static StringPtr SEMI_SYN;
		static StringPtr BLANK_SYN;
		static StringPtr NUMBER_SYN;

		/*
		 * ParserSymbol - tokens description.
		 */
		static StringPtr LEFT_PARENTHESES_DESC;
		static StringPtr RIGHT_PARENTHESES_DESC;
		static StringPtr COMMA_DESC;
		static StringPtr SEMI_DESC;
		static StringPtr BLANK_DESC;
		static StringPtr UNICODE_MATH_DESC;
		static StringPtr NUMBER_LITERAL_STR;
		static StringPtr NUMBER_LITERAL_DESC;

		/*
		 * ParserSymbol - since.
		 */
		static StringPtr LEFT_PARENTHESES_SINCE;
		static StringPtr RIGHT_PARENTHESES_SINCE;
		static StringPtr COMMA_SINCE;
		static StringPtr BLANK_SINCE;
		static StringPtr NUMBER_SINCE;

		STATIC_VARS_INITI_H;

	};
} // namespace org::mariuszgromada::math::mxparser::parsertokens

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_PARSERSYMBOL_H
