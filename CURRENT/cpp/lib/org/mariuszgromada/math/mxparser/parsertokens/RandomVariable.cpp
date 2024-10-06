/*
 * @(#)RandomVariable.cpp        6.1.0    2024-10-06
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

#include "org/mariuszgromada/math/mxparser/parsertokens/RandomVariable.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {
	API_VISIBLE StringPtr RandomVariable::TYPE_DESC = nullptr;

	/*
	 * RandomVariable - tokens key words.
	 */
	API_VISIBLE StringPtr RandomVariable::UNIFORM_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT1_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT2_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT3_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT4_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT5_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT6_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT7_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT8_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT9_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_1_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_2_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_3_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_4_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_5_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_6_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_7_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_8_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_9_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_1_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_2_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_3_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_4_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_5_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_6_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_7_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_8_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_9_STR = nullptr;
	API_VISIBLE StringPtr RandomVariable::NOR_STR = nullptr;
	/*
	 * RandomVariable - syntax.
	 */
	API_VISIBLE StringPtr RandomVariable::UNIFORM_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT1_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT2_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT3_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT4_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT5_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT6_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT7_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT8_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT9_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_1_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_2_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_3_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_4_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_5_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_6_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_7_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_8_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_9_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_1_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_2_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_3_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_4_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_5_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_6_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_7_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_8_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_9_SYN = nullptr;
	API_VISIBLE StringPtr RandomVariable::NOR_SYN = nullptr;
	/*
	 * RandomVariable - tokens description.
	 */
	API_VISIBLE StringPtr RandomVariable::UNIFORM_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT1_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT2_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT3_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT4_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT5_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT6_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT7_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT8_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT9_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_1_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_2_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_3_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_4_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_5_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_6_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_7_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_8_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_9_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_1_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_2_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_3_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_4_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_5_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_6_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_7_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_8_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_9_DESC = nullptr;
	API_VISIBLE StringPtr RandomVariable::NOR_DESC = nullptr;
	/*
	 * RandomVariable - since.
	 */
	API_VISIBLE StringPtr RandomVariable::UNIFORM_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT1_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT2_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT3_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT4_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT5_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT6_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT7_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT8_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::INT9_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_1_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_2_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_3_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_4_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_5_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_6_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_7_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_8_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT0_9_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_1_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_2_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_3_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_4_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_5_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_6_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_7_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_8_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NAT1_9_SINCE = nullptr;
	API_VISIBLE StringPtr RandomVariable::NOR_SINCE = nullptr;

	STATIC_VARS_INITI_CPP(RandomVariable,

		STATIC_VARS_INITI_DEPENDENCY(mXparser);
		STATIC_VARS_INITI_DEPENDENCY(ParserSymbol);

		INIT_WITH_NA(TYPE_DESC);

		/*
		* RandomVariable - tokens key words.
		*/
		UNIFORM_STR = S(UTF("[Uni]"));
		INT_STR = S(UTF("[Int]"));
		INT1_STR = S(UTF("[Int1]"));
		INT2_STR = S(UTF("[Int2]"));
		INT3_STR = S(UTF("[Int3]"));
		INT4_STR = S(UTF("[Int4]"));
		INT5_STR = S(UTF("[Int5]"));
		INT6_STR = S(UTF("[Int6]"));
		INT7_STR = S(UTF("[Int7]"));
		INT8_STR = S(UTF("[Int8]"));
		INT9_STR = S(UTF("[Int9]"));
		NAT0_STR = S(UTF("[nat]"));
		NAT0_1_STR = S(UTF("[nat1]"));
		NAT0_2_STR = S(UTF("[nat2]"));
		NAT0_3_STR = S(UTF("[nat3]"));
		NAT0_4_STR = S(UTF("[nat4]"));
		NAT0_5_STR = S(UTF("[nat5]"));
		NAT0_6_STR = S(UTF("[nat6]"));
		NAT0_7_STR = S(UTF("[nat7]"));
		NAT0_8_STR = S(UTF("[nat8]"));
		NAT0_9_STR = S(UTF("[nat9]"));
		NAT1_STR = S(UTF("[Nat]"));
		NAT1_1_STR = S(UTF("[Nat1]"));
		NAT1_2_STR = S(UTF("[Nat2]"));
		NAT1_3_STR = S(UTF("[Nat3]"));
		NAT1_4_STR = S(UTF("[Nat4]"));
		NAT1_5_STR = S(UTF("[Nat5]"));
		NAT1_6_STR = S(UTF("[Nat6]"));
		NAT1_7_STR = S(UTF("[Nat7]"));
		NAT1_8_STR = S(UTF("[Nat8]"));
		NAT1_9_STR = S(UTF("[Nat9]"));
		NOR_STR = S(UTF("[Nor]"));
		/*
		* RandomVariable - syntax.
		*/
		UNIFORM_SYN = UNIFORM_STR;
		INT_SYN = INT_STR;
		INT1_SYN = INT1_STR;
		INT2_SYN = INT2_STR;
		INT3_SYN = INT3_STR;
		INT4_SYN = INT4_STR;
		INT5_SYN = INT5_STR;
		INT6_SYN = INT6_STR;
		INT7_SYN = INT7_STR;
		INT8_SYN = INT8_STR;
		INT9_SYN = INT9_STR;
		NAT0_SYN = NAT0_STR;
		NAT0_1_SYN = NAT0_1_STR;
		NAT0_2_SYN = NAT0_2_STR;
		NAT0_3_SYN = NAT0_3_STR;
		NAT0_4_SYN = NAT0_4_STR;
		NAT0_5_SYN = NAT0_5_STR;
		NAT0_6_SYN = NAT0_6_STR;
		NAT0_7_SYN = NAT0_7_STR;
		NAT0_8_SYN = NAT0_8_STR;
		NAT0_9_SYN = NAT0_9_STR;
		NAT1_SYN = NAT1_STR;
		NAT1_1_SYN = NAT1_1_STR;
		NAT1_2_SYN = NAT1_2_STR;
		NAT1_3_SYN = NAT1_3_STR;
		NAT1_4_SYN = NAT1_4_STR;
		NAT1_5_SYN = NAT1_5_STR;
		NAT1_6_SYN = NAT1_6_STR;
		NAT1_7_SYN = NAT1_7_STR;
		NAT1_8_SYN = NAT1_8_STR;
		NAT1_9_SYN = NAT1_9_STR;
		NOR_SYN = NOR_STR;
		/*
		* RandomVariable - tokens description.
		*/
		INIT_WITH_NA(UNIFORM_DESC);
		INIT_WITH_NA(INT_DESC);
		INIT_WITH_NA(INT1_DESC);
		INIT_WITH_NA(INT2_DESC);
		INIT_WITH_NA(INT3_DESC);
		INIT_WITH_NA(INT4_DESC);
		INIT_WITH_NA(INT5_DESC);
		INIT_WITH_NA(INT6_DESC);
		INIT_WITH_NA(INT7_DESC);
		INIT_WITH_NA(INT8_DESC);
		INIT_WITH_NA(INT9_DESC);
		INIT_WITH_NA(NAT0_DESC);
		INIT_WITH_NA(NAT0_1_DESC);
		INIT_WITH_NA(NAT0_2_DESC);
		INIT_WITH_NA(NAT0_3_DESC);
		INIT_WITH_NA(NAT0_4_DESC);
		INIT_WITH_NA(NAT0_5_DESC);
		INIT_WITH_NA(NAT0_6_DESC);
		INIT_WITH_NA(NAT0_7_DESC);
		INIT_WITH_NA(NAT0_8_DESC);
		INIT_WITH_NA(NAT0_9_DESC);
		INIT_WITH_NA(NAT1_DESC);
		INIT_WITH_NA(NAT1_1_DESC);
		INIT_WITH_NA(NAT1_2_DESC);
		INIT_WITH_NA(NAT1_3_DESC);
		INIT_WITH_NA(NAT1_4_DESC);
		INIT_WITH_NA(NAT1_5_DESC);
		INIT_WITH_NA(NAT1_6_DESC);
		INIT_WITH_NA(NAT1_7_DESC);
		INIT_WITH_NA(NAT1_8_DESC);
		INIT_WITH_NA(NAT1_9_DESC);
		INIT_WITH_NA(NOR_DESC);
		/*
		* RandomVariable - since.
		*/
		UNIFORM_SINCE = mXparser::NAMEv30;
		INT_SINCE = mXparser::NAMEv30;
		INT1_SINCE = mXparser::NAMEv30;
		INT2_SINCE = mXparser::NAMEv30;
		INT3_SINCE = mXparser::NAMEv30;
		INT4_SINCE = mXparser::NAMEv30;
		INT5_SINCE = mXparser::NAMEv30;
		INT6_SINCE = mXparser::NAMEv30;
		INT7_SINCE = mXparser::NAMEv30;
		INT8_SINCE = mXparser::NAMEv30;
		INT9_SINCE = mXparser::NAMEv30;
		NAT0_SINCE = mXparser::NAMEv30;
		NAT0_1_SINCE = mXparser::NAMEv30;
		NAT0_2_SINCE = mXparser::NAMEv30;
		NAT0_3_SINCE = mXparser::NAMEv30;
		NAT0_4_SINCE = mXparser::NAMEv30;
		NAT0_5_SINCE = mXparser::NAMEv30;
		NAT0_6_SINCE = mXparser::NAMEv30;
		NAT0_7_SINCE = mXparser::NAMEv30;
		NAT0_8_SINCE = mXparser::NAMEv30;
		NAT0_9_SINCE = mXparser::NAMEv30;
		NAT1_SINCE = mXparser::NAMEv30;
		NAT1_1_SINCE = mXparser::NAMEv30;
		NAT1_2_SINCE = mXparser::NAMEv30;
		NAT1_3_SINCE = mXparser::NAMEv30;
		NAT1_4_SINCE = mXparser::NAMEv30;
		NAT1_5_SINCE = mXparser::NAMEv30;
		NAT1_6_SINCE = mXparser::NAMEv30;
		NAT1_7_SINCE = mXparser::NAMEv30;
		NAT1_8_SINCE = mXparser::NAMEv30;
		NAT1_9_SINCE = mXparser::NAMEv30;
		NOR_SINCE = mXparser::NAMEv30;
	);
} // namespace org::mariuszgromada::math::mxparser::parsertokens