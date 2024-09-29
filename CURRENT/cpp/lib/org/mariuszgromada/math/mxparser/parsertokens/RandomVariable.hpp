/*
 * @(#)RandomVariable.hpp        6.1.0    2024-09-08
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_RANDOMVARIABLE_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_RANDOMVARIABLE_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {

	class API_VISIBLE RandomVariable {
	public:
		RandomVariable() = delete;

		static constexpr int TYPE_ID = 10;
		static StringPtr TYPE_DESC;

		static constexpr int UNIFORM_ID = 1;
		static constexpr int INT_ID = 2;
		static constexpr int INT1_ID = 3;
		static constexpr int INT2_ID = 4;
		static constexpr int INT3_ID = 5;
		static constexpr int INT4_ID = 6;
		static constexpr int INT5_ID = 7;
		static constexpr int INT6_ID = 8;
		static constexpr int INT7_ID = 9;
		static constexpr int INT8_ID = 10;
		static constexpr int INT9_ID = 11;
		static constexpr int NAT0_ID = 12;
		static constexpr int NAT0_1_ID = 13;
		static constexpr int NAT0_2_ID = 14;
		static constexpr int NAT0_3_ID = 15;
		static constexpr int NAT0_4_ID = 16;
		static constexpr int NAT0_5_ID = 17;
		static constexpr int NAT0_6_ID = 18;
		static constexpr int NAT0_7_ID = 19;
		static constexpr int NAT0_8_ID = 20;
		static constexpr int NAT0_9_ID = 21;
		static constexpr int NAT1_ID = 22;
		static constexpr int NAT1_1_ID = 23;
		static constexpr int NAT1_2_ID = 24;
		static constexpr int NAT1_3_ID = 25;
		static constexpr int NAT1_4_ID = 26;
		static constexpr int NAT1_5_ID = 27;
		static constexpr int NAT1_6_ID = 28;
		static constexpr int NAT1_7_ID = 29;
		static constexpr int NAT1_8_ID = 30;
		static constexpr int NAT1_9_ID = 31;
		static constexpr int NOR_ID = 32;

		/*
		 * RandomVariable - tokens key words.
		 */
		static StringPtr UNIFORM_STR;
		static StringPtr INT_STR;
		static StringPtr INT1_STR;
		static StringPtr INT2_STR;
		static StringPtr INT3_STR;
		static StringPtr INT4_STR;
		static StringPtr INT5_STR;
		static StringPtr INT6_STR;
		static StringPtr INT7_STR;
		static StringPtr INT8_STR;
		static StringPtr INT9_STR;
		static StringPtr NAT0_STR;
		static StringPtr NAT0_1_STR;
		static StringPtr NAT0_2_STR;
		static StringPtr NAT0_3_STR;
		static StringPtr NAT0_4_STR;
		static StringPtr NAT0_5_STR;
		static StringPtr NAT0_6_STR;
		static StringPtr NAT0_7_STR;
		static StringPtr NAT0_8_STR;
		static StringPtr NAT0_9_STR;
		static StringPtr NAT1_STR;
		static StringPtr NAT1_1_STR;
		static StringPtr NAT1_2_STR;
		static StringPtr NAT1_3_STR;
		static StringPtr NAT1_4_STR;
		static StringPtr NAT1_5_STR;
		static StringPtr NAT1_6_STR;
		static StringPtr NAT1_7_STR;
		static StringPtr NAT1_8_STR;
		static StringPtr NAT1_9_STR;
		static StringPtr NOR_STR;
		/*
		 * RandomVariable - syntax.
		 */
		static StringPtr UNIFORM_SYN;
		static StringPtr INT_SYN;
		static StringPtr INT1_SYN;
		static StringPtr INT2_SYN;
		static StringPtr INT3_SYN;
		static StringPtr INT4_SYN;
		static StringPtr INT5_SYN;
		static StringPtr INT6_SYN;
		static StringPtr INT7_SYN;
		static StringPtr INT8_SYN;
		static StringPtr INT9_SYN;
		static StringPtr NAT0_SYN;
		static StringPtr NAT0_1_SYN;
		static StringPtr NAT0_2_SYN;
		static StringPtr NAT0_3_SYN;
		static StringPtr NAT0_4_SYN;
		static StringPtr NAT0_5_SYN;
		static StringPtr NAT0_6_SYN;
		static StringPtr NAT0_7_SYN;
		static StringPtr NAT0_8_SYN;
		static StringPtr NAT0_9_SYN;
		static StringPtr NAT1_SYN;
		static StringPtr NAT1_1_SYN;
		static StringPtr NAT1_2_SYN;
		static StringPtr NAT1_3_SYN;
		static StringPtr NAT1_4_SYN;
		static StringPtr NAT1_5_SYN;
		static StringPtr NAT1_6_SYN;
		static StringPtr NAT1_7_SYN;
		static StringPtr NAT1_8_SYN;
		static StringPtr NAT1_9_SYN;
		static StringPtr NOR_SYN;
		/*
		 * RandomVariable - tokens description.
		 */
		static StringPtr UNIFORM_DESC;
		static StringPtr INT_DESC;
		static StringPtr INT1_DESC;
		static StringPtr INT2_DESC;
		static StringPtr INT3_DESC;
		static StringPtr INT4_DESC;
		static StringPtr INT5_DESC;
		static StringPtr INT6_DESC;
		static StringPtr INT7_DESC;
		static StringPtr INT8_DESC;
		static StringPtr INT9_DESC;
		static StringPtr NAT0_DESC;
		static StringPtr NAT0_1_DESC;
		static StringPtr NAT0_2_DESC;
		static StringPtr NAT0_3_DESC;
		static StringPtr NAT0_4_DESC;
		static StringPtr NAT0_5_DESC;
		static StringPtr NAT0_6_DESC;
		static StringPtr NAT0_7_DESC;
		static StringPtr NAT0_8_DESC;
		static StringPtr NAT0_9_DESC;
		static StringPtr NAT1_DESC;
		static StringPtr NAT1_1_DESC;
		static StringPtr NAT1_2_DESC;
		static StringPtr NAT1_3_DESC;
		static StringPtr NAT1_4_DESC;
		static StringPtr NAT1_5_DESC;
		static StringPtr NAT1_6_DESC;
		static StringPtr NAT1_7_DESC;
		static StringPtr NAT1_8_DESC;
		static StringPtr NAT1_9_DESC;
		static StringPtr NOR_DESC;
		/*
		 * RandomVariable - since.
		 */
		static StringPtr UNIFORM_SINCE;
		static StringPtr INT_SINCE;
		static StringPtr INT1_SINCE;
		static StringPtr INT2_SINCE;
		static StringPtr INT3_SINCE;
		static StringPtr INT4_SINCE;
		static StringPtr INT5_SINCE;
		static StringPtr INT6_SINCE;
		static StringPtr INT7_SINCE;
		static StringPtr INT8_SINCE;
		static StringPtr INT9_SINCE;
		static StringPtr NAT0_SINCE;
		static StringPtr NAT0_1_SINCE;
		static StringPtr NAT0_2_SINCE;
		static StringPtr NAT0_3_SINCE;
		static StringPtr NAT0_4_SINCE;
		static StringPtr NAT0_5_SINCE;
		static StringPtr NAT0_6_SINCE;
		static StringPtr NAT0_7_SINCE;
		static StringPtr NAT0_8_SINCE;
		static StringPtr NAT0_9_SINCE;
		static StringPtr NAT1_SINCE;
		static StringPtr NAT1_1_SINCE;
		static StringPtr NAT1_2_SINCE;
		static StringPtr NAT1_3_SINCE;
		static StringPtr NAT1_4_SINCE;
		static StringPtr NAT1_5_SINCE;
		static StringPtr NAT1_6_SINCE;
		static StringPtr NAT1_7_SINCE;
		static StringPtr NAT1_8_SINCE;
		static StringPtr NAT1_9_SINCE;
		static StringPtr NOR_SINCE;

		STATIC_VARS_INITI_H;
	};
} // namespace org::mariuszgromada::math::mxparser::parsertokens

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_RANDOMVARIABLE_H
