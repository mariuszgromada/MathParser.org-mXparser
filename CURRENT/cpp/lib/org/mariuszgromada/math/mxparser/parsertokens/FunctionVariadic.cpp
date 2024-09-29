/*
 * @(#)FunctionVariadic.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/parsertokens/FunctionVariadic.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/SyntaxStringBuilder.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {
	using namespace syntaxstringbuilder;

	API_VISIBLE StringPtr FunctionVariadic::TYPE_DESC = nullptr;

	/*
	 * FunctionVariadic - tokens key words.
	 */
	API_VISIBLE StringPtr FunctionVariadic::IFF_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MIN_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MAX_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::CONT_FRAC_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::CONT_POL_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::GCD_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::LCM_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::SUM_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::PROD_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::AVG_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::VAR_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::STD_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::RND_LIST_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::COALESCE_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::OR_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::AND_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::XOR_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::ARGMIN_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::ARGMAX_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MEDIAN_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MODE_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::BASE_STR = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::NDIST_STR = nullptr;
	/*
	 * FunctionVariadic - syntax.
	 */
	API_VISIBLE StringPtr FunctionVariadic::IFF_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MIN_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MAX_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::CONT_FRAC_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::CONT_POL_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::GCD_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::LCM_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::SUM_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::PROD_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::AVG_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::VAR_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::STD_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::RND_LIST_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::COALESCE_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::OR_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::AND_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::XOR_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::ARGMIN_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::ARGMAX_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MEDIAN_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MODE_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::BASE_SYN = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::NDIST_SYN = nullptr;
	/*
	 * FunctionVariadic - tokens description.
	 */
	API_VISIBLE StringPtr FunctionVariadic::IFF_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MIN_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MAX_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::CONT_FRAC_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::CONT_POL_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::GCD_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::LCM_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::SUM_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::PROD_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::AVG_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::VAR_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::STD_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::RND_LIST_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::COALESCE_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::OR_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::AND_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::XOR_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::ARGMIN_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::ARGMAX_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MEDIAN_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MODE_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::BASE_DESC = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::NDIST_DESC = nullptr;
	/*
	 * FunctionVariadic - since.
	 */
	API_VISIBLE StringPtr FunctionVariadic::IFF_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MIN_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MAX_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::CONT_FRAC_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::CONT_POL_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::GCD_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::LCM_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::SUM_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::PROD_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::AVG_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::VAR_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::STD_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::RND_LIST_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::COALESCE_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::OR_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::AND_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::XOR_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::ARGMIN_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::ARGMAX_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MEDIAN_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::MODE_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::BASE_SINCE = nullptr;
	API_VISIBLE StringPtr FunctionVariadic::NDIST_SINCE = nullptr;

	STATIC_VARS_INITI_CPP(FunctionVariadic,

		STATIC_VARS_INITI_DEPENDENCY(mXparser);
		STATIC_VARS_INITI_DEPENDENCY(ParserSymbol);
		STATIC_VARS_INITI_DEPENDENCY(SyntaxStringBuilder);

		INIT_WITH_NA(TYPE_DESC);

		/*
		* FunctionVariadic - tokens key words.
		*/
		IFF_STR = S(UTF("iff"));
		MIN_STR = S(UTF("min"));
		MAX_STR = S(UTF("max"));
		CONT_FRAC_STR = S(UTF("ConFrac"));
		CONT_POL_STR = S(UTF("ConPol"));
		GCD_STR = S(UTF("gcd"));
		LCM_STR = S(UTF("lcm"));
		SUM_STR = S(UTF("add"));
		PROD_STR = S(UTF("multi"));
		AVG_STR = S(UTF("mean"));
		VAR_STR = S(UTF("var"));
		STD_STR = S(UTF("std"));
		RND_LIST_STR = S(UTF("rList"));
		COALESCE_STR = S(UTF("coalesce"));
		OR_STR = S(UTF("or"));
		AND_STR = S(UTF("and"));
		XOR_STR = S(UTF("xor"));
		ARGMIN_STR = S(UTF("argmin"));
		ARGMAX_STR = S(UTF("argmax"));
		MEDIAN_STR = S(UTF("med"));
		MODE_STR = S(UTF("mode"));
		BASE_STR = S(UTF("base"));
		NDIST_STR = S(UTF("ndist"));
		/*
		* FunctionVariadic - syntax.
		*/
		IFF_SYN = SyntaxStringBuilder::functionVariadicCond(IFF_STR);
		MIN_SYN = SyntaxStringBuilder::functionVariadicA(MIN_STR);
		MAX_SYN = SyntaxStringBuilder::functionVariadicA(MAX_STR);
		CONT_FRAC_SYN = SyntaxStringBuilder::functionVariadicA(CONT_FRAC_STR);
		CONT_POL_SYN = SyntaxStringBuilder::functionVariadicA(CONT_POL_STR);
		GCD_SYN = SyntaxStringBuilder::functionVariadicA(GCD_STR);
		LCM_SYN = SyntaxStringBuilder::functionVariadicA(LCM_STR);
		SUM_SYN = SyntaxStringBuilder::functionVariadicA(SUM_STR);
		PROD_SYN = SyntaxStringBuilder::functionVariadicA(PROD_STR);
		AVG_SYN = SyntaxStringBuilder::functionVariadicA(AVG_STR);
		VAR_SYN = SyntaxStringBuilder::functionVariadicA(VAR_STR);
		STD_SYN = SyntaxStringBuilder::functionVariadicA(STD_STR);
		RND_LIST_SYN = SyntaxStringBuilder::functionVariadicA(RND_LIST_STR);
		COALESCE_SYN = SyntaxStringBuilder::functionVariadicA(COALESCE_STR);
		OR_SYN = SyntaxStringBuilder::functionVariadicA(OR_STR);
		AND_SYN = SyntaxStringBuilder::functionVariadicA(AND_STR);
		XOR_SYN = SyntaxStringBuilder::functionVariadicA(XOR_STR);
		ARGMIN_SYN = SyntaxStringBuilder::functionVariadicA(ARGMIN_STR);
		ARGMAX_SYN = SyntaxStringBuilder::functionVariadicA(ARGMAX_STR);
		MEDIAN_SYN = SyntaxStringBuilder::functionVariadicA(MEDIAN_STR);
		MODE_SYN = SyntaxStringBuilder::functionVariadicA(MODE_STR);
		BASE_SYN = SyntaxStringBuilder::functionVariadicBD(BASE_STR);
		NDIST_SYN = SyntaxStringBuilder::functionVariadicV(NDIST_STR);
		/*
		* FunctionVariadic - tokens description.
		*/
		INIT_WITH_NA(IFF_DESC);
		INIT_WITH_NA(MIN_DESC);
		INIT_WITH_NA(MAX_DESC);
		INIT_WITH_NA(CONT_FRAC_DESC);
		INIT_WITH_NA(CONT_POL_DESC);
		INIT_WITH_NA(GCD_DESC);
		INIT_WITH_NA(LCM_DESC);
		INIT_WITH_NA(SUM_DESC);
		INIT_WITH_NA(PROD_DESC);
		INIT_WITH_NA(AVG_DESC);
		INIT_WITH_NA(VAR_DESC);
		INIT_WITH_NA(STD_DESC);
		INIT_WITH_NA(RND_LIST_DESC);
		INIT_WITH_NA(COALESCE_DESC);
		INIT_WITH_NA(OR_DESC);
		INIT_WITH_NA(AND_DESC);
		INIT_WITH_NA(XOR_DESC);
		INIT_WITH_NA(ARGMIN_DESC);
		INIT_WITH_NA(ARGMAX_DESC);
		INIT_WITH_NA(MEDIAN_DESC);
		INIT_WITH_NA(MODE_DESC);
		INIT_WITH_NA(BASE_DESC);
		INIT_WITH_NA(NDIST_DESC);
		/*
		* FunctionVariadic - since.
		*/
		IFF_SINCE = mXparser::NAMEv10;
		MIN_SINCE = mXparser::NAMEv10;
		MAX_SINCE = mXparser::NAMEv10;
		CONT_FRAC_SINCE = mXparser::NAMEv10;
		CONT_POL_SINCE = mXparser::NAMEv10;
		GCD_SINCE = mXparser::NAMEv10;
		LCM_SINCE = mXparser::NAMEv10;
		SUM_SINCE = mXparser::NAMEv24;
		PROD_SINCE = mXparser::NAMEv24;
		AVG_SINCE = mXparser::NAMEv24;
		VAR_SINCE = mXparser::NAMEv24;
		STD_SINCE = mXparser::NAMEv24;
		RND_LIST_SINCE = mXparser::NAMEv30;
		COALESCE_SINCE = mXparser::NAMEv41;
		OR_SINCE = mXparser::NAMEv41;
		AND_SINCE = mXparser::NAMEv41;
		XOR_SINCE = mXparser::NAMEv41;
		ARGMIN_SINCE = mXparser::NAMEv41;
		ARGMAX_SINCE = mXparser::NAMEv41;
		MEDIAN_SINCE = mXparser::NAMEv41;
		MODE_SINCE = mXparser::NAMEv41;
		BASE_SINCE = mXparser::NAMEv41;
		NDIST_SINCE = mXparser::NAMEv41;
	);

} // namespace org::mariuszgromada::math::mxparser::parsertokens
