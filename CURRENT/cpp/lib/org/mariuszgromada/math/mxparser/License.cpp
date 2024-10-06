/*
 * @(#)License.cpp        6.1.0    2024-10-06
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

#include "org/mariuszgromada/math/mxparser/License.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/StringInvariant.hpp"
#include "org/mariuszgromada/math/mxparser/StringUtils.hpp"

namespace org::mariuszgromada::math::mxparser {

	using namespace org::mariuszgromada::math::mxparser::stringutils;

	API_VISIBLE License::UseType License::typeOfUse = UseType::Null;
	API_VISIBLE StringPtr License::signature = nullptr;
	API_VISIBLE int License::numberOfConfirmationAttempts = 0;
	API_VISIBLE StringPtr License::message = nullptr;
	API_VISIBLE StringPtr License::errorMessage = nullptr;
	API_VISIBLE const StringPtr License::ERROR_NOT_CONFIRMED = S(UTF(
		"The type of use has not been confirmed. You can test the software, but its distribution does not comply with the License::geTermsOfAgreement()."));
	API_VISIBLE const int License::MAXIMUM_NUMBER_OF_WARNING_DISPLAY = 1000;

	API_VISIBLE int License::numberOfWarningDisplay = 0;

	API_VISIBLE StringPtr License::MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT = nullptr;

	STATIC_VARS_INITI_CPP(License,
		STATIC_VARS_INITI_DEPENDENCY(StringInvariant);

		MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT =
			StringInvariant::EMPTY + UTF("MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19\n")
			+ UTF("The most up-to-date license is available at the below link:\n")
			+ UTF("- https://mathparser.org/mxparser-license\n")
			+ UTF("\n")
			+ UTF("AUTHOR: Copyright 2010 - 2024 Mariusz Gromada - All rights reserved\n")
			+ UTF("PUBLISHER: INFIMA - https://payhip.com/infima\n")
			+ UTF("\n")
			+ UTF("SOFTWARE means source code and/or binary form and/or documentation.\n")
			+ UTF("PRODUCT: MathParser.org-mXparser SOFTWARE\n")
			+ UTF("LICENSE: DUAL LICENSE AGREEMENT\n")
			+ UTF("\n")
			+ UTF("BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE\n")
			+ UTF("BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.\n")
			+ UTF("\n")
			+ UTF("The AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT\n")
			+ UTF("model designed to meet the needs of both non-commercial use and commercial\n")
			+ UTF("use.\n")
			+ UTF("\n")
			+ UTF("NON-COMMERCIAL USE means any use or activity where a fee is not charged\n")
			+ UTF("and the purpose is not the sale of a good or service, and the use or\n")
			+ UTF("activity is not intended to produce a profit. Examples of NON-COMMERCIAL USE\n")
			+ UTF("include:\n")
			+ UTF("\n")
			+ UTF("1. Non-commercial open-source software.\n")
			+ UTF("2. Non-commercial mobile applications.\n")
			+ UTF("3. Non-commercial desktop software.\n")
			+ UTF("4. Non-commercial web applications/solutions.\n")
			+ UTF("5. Non-commercial use in research, scholarly and educational context.\n")
			+ UTF("\n")
			+ UTF("The above list is non-exhaustive and illustrative only.\n")
			+ UTF("\n")
			+ UTF("COMMERCIAL USE means any use or activity where a fee is charged or the\n")
			+ UTF("purpose is the sale of a good or service, or the use or activity is\n")
			+ UTF("intended to produce a profit. COMMERCIAL USE examples:\n")
			+ UTF("\n")
			+ UTF("1. OEMs (Original Equipment Manufacturers).\n")
			+ UTF("2. ISVs (Independent Software Vendors).\n")
			+ UTF("3. VARs (Value Added Resellers).\n")
			+ UTF("4. Other distributors that combine and distribute commercially licensed\n")
			+ UTF("   software.\n")
			+ UTF("\n")
			+ UTF("The above list is non-exhaustive and illustrative only.\n")
			+ UTF("\n")
			+ UTF("IN CASE YOU WANT TO USE THE PRODUCT COMMERCIALLY, YOU MUST PURCHASE THE\n")
			+ UTF("APPROPRIATE LICENSE FROM \"INFIMA\" ONLINE STORE, STORE ADDRESS:\n")
			+ UTF("\n")
			+ UTF("1. https://mathparser.org/order-commercial-license\n")
			+ UTF("2. https://payhip.com/infima\n")
			+ UTF("\n")
			+ UTF("NON-COMMERCIAL LICENSE\n")
			+ UTF("\n")
			+ UTF("Redistribution and use of the PRODUCT in source and/or binary forms,\n")
			+ UTF("with or without modification, are permitted provided that the following\n")
			+ UTF("conditions are met:\n")
			+ UTF("\n")
			+ UTF("1. Redistributions of source code must retain the unmodified content of\n")
			+ UTF("   the entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including\n")
			+ UTF("   the definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE,\n")
			+ UTF("   the NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,\n")
			+ UTF("   and the following DISCLAIMER.\n")
			+ UTF("2. Redistributions in binary form must reproduce the entire content of\n")
			+ UTF("   MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation\n")
			+ UTF("   and/or other materials provided with the distribution, including the\n")
			+ UTF("   definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE, the\n")
			+ UTF("   NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,\n")
			+ UTF("   and the following DISCLAIMER.\n")
			+ UTF("3. Any form of redistribution requires confirmation and signature of\n")
			+ UTF("   the NON-COMMERCIAL USE by successfully calling the method:\n")
			+ UTF("      License::iConfirmNonCommercialUse(...)\n")
			+ UTF("   The method call is used only internally for logging purposes, and\n")
			+ UTF("   there is no connection with other external services, and no data is\n")
			+ UTF("   sent or collected. The lack of a method call (or its successful call)\n")
			+ UTF("   does not affect the operation of the PRODUCT in any way. Please see\n")
			+ UTF("   the API documentation.\n")
			+ UTF("\n")
			+ UTF("COMMERCIAL LICENSE\n")
			+ UTF("\n")
			+ UTF(" 1. Before purchasing a commercial license, the AUTHOR & PUBLISHER allow\n")
			+ UTF("    you to download, install, and use up to three copies of the PRODUCT to\n")
			+ UTF("    perform integration tests, confirm the quality of the PRODUCT, and\n")
			+ UTF("    its suitability. The testing period should be limited to fourteen\n")
			+ UTF("    days. Tests should be performed under the test environments conditions\n")
			+ UTF("    and not for profit generation.\n")
			+ UTF(" 2. Provided that you purchased a license from \"INFIMA\" online store\n")
			+ UTF("    (store address: https://mathparser.org/order-commercial-license or\n")
			+ UTF("    https://payhip.com/infima), and you comply with all terms and\n")
			+ UTF("    conditions below, and you have acknowledged and understood the\n")
			+ UTF("    following DISCLAIMER, the AUTHOR & PUBLISHER grant you a nonexclusive\n")
			+ UTF("    license with the following rights:\n")
			+ UTF(" 3. The license is granted only to you, the person or entity that made\n")
			+ UTF("    the purchase, identified and confirmed by the data provided during\n")
			+ UTF("    the purchase.\n")
			+ UTF(" 4. If you purchased a license in the \"ONE-TIME PURCHASE\" model, the\n")
			+ UTF("    license is granted only for the PRODUCT version specified in the\n")
			+ UTF("    purchase. The upgrade policy gives you additional rights, described\n")
			+ UTF("    in the dedicated section below.\n")
			+ UTF(" 5. If you purchased a license in the \"SUBSCRIPTION\" model, you may\n")
			+ UTF("    install and use any version of the PRODUCT during the subscription\n")
			+ UTF("    validity period.\n")
			+ UTF(" 6. If you purchased a \"SINGLE LICENSE\" you may install and use the\n")
			+ UTF("    PRODUCT on/from one workstation that is located/accessible at/from\n")
			+ UTF("    any of your premises.\n")
			+ UTF(" 7. Additional copies of the PRODUCT may be installed and used on/from\n")
			+ UTF("    more than one workstation, limited to the number of workstations\n")
			+ UTF("    purchased per order.\n")
			+ UTF(" 8. If you purchased a \"SITE LICENSE\", the PRODUCT may be installed\n")
			+ UTF("    and used on/from all workstations located/accessible at/from any\n")
			+ UTF("    of your premises.\n")
			+ UTF(" 9. You may incorporate the unmodified PRODUCT into your own products\n")
			+ UTF("    and software.\n")
			+ UTF("10. If you purchased a license with the \"SOURCE CODE\" option, you may\n")
			+ UTF("    modify the PRODUCT's source code and incorporate the modified source\n")
			+ UTF("    code into your own products and/or software.\n")
			+ UTF("11. Provided that the license validity period has not expired, you may\n")
			+ UTF("    distribute your product and/or software with the incorporated\n")
			+ UTF("    PRODUCT royalty-free.\n")
			+ UTF("12. You may make copies of the PRODUCT for backup and archival purposes.\n")
			+ UTF("13. Any form of redistribution requires confirmation and signature of\n")
			+ UTF("    the COMMERCIAL USE by successfully calling the method:\n")
			+ UTF("       License::iConfirmCommercialUse(...)\n")
			+ UTF("    The method call is used only internally for logging purposes, and\n")
			+ UTF("    there is no connection with other external services, and no data is\n")
			+ UTF("    sent or collected. The lack of a method call (or its successful call)\n")
			+ UTF("    does not affect the operation of the PRODUCT in any way. Please see\n")
			+ UTF("    the API documentation.\n")
			+ UTF("14. The AUTHOR & PUBLISHER reserve all rights not expressly granted to\n")
			+ UTF("    you in this agreement.\n")
			+ UTF("\n")
			+ UTF("ADDITIONAL CLARIFICATION ON WORKSTATION\n")
			+ UTF("\n")
			+ UTF("A workstation is a device, a remote device, or a virtual device, used by\n")
			+ UTF("you, your employees, or other entities to whom you have commissioned\n")
			+ UTF("tasks. For example, the number of workstations may refer to the number\n")
			+ UTF("of software developers, engineers, architects, scientists, and other\n")
			+ UTF("professionals who use the PRODUCT on your behalf. The number of\n")
			+ UTF("workstations is not the number of copies of your end-product that you\n")
			+ UTF("distribute to your end-users.\n")
			+ UTF("\n")
			+ UTF("By purchasing the COMMERCIAL LICENSE, you only pay for the number of\n")
			+ UTF("workstations, while the number of copies/users of your final product\n")
			+ UTF("(delivered to your end-users) is not limited.\n")
			+ UTF("\n")
			+ UTF("Below are some examples to help you select the right license size:\n")
			+ UTF("\n")
			+ UTF("Example 1: Single Workstation License\n")
			+ UTF("Only one developer works on the development of your application. You do\n")
			+ UTF("not use separate environments for testing, meaning you design, create,\n")
			+ UTF("test, and compile your final application on one environment. In this\n")
			+ UTF("case, you need a license for a single workstation.\n")
			+ UTF("\n")
			+ UTF("Example 2: Up to 5 Workstations License\n")
			+ UTF("Two developers are working on the development of your application.\n")
			+ UTF("Additionally, one tester conducts tests in a separate environment.\n")
			+ UTF("You use three workstations in total, so you need a license for up to\n")
			+ UTF("five workstations.\n")
			+ UTF("\n")
			+ UTF("Example 3: Up to 20 Workstations License\n")
			+ UTF("Ten developers are working on the development of your application.\n")
			+ UTF("Additionally, five testers conduct tests in separate environments.\n")
			+ UTF("You use fifteen workstations in total, so you need a license for\n")
			+ UTF("up to twenty workstations.\n")
			+ UTF("\n")
			+ UTF("Example 4: Site License\n")
			+ UTF("Several dozen developers and testers work on the development of your\n")
			+ UTF("application using multiple environments. You have a large,\n")
			+ UTF("multi-disciplinary team involved in creating your solution. As your team\n")
			+ UTF("is growing and you want to avoid License::licensing limitations, the best choice\n")
			+ UTF("would be a site license.\n")
			+ UTF("\n")
			+ UTF("UPGRADE POLICY\n")
			+ UTF("\n")
			+ UTF("The PRODUCT is versioned according to the following convention:\n")
			+ UTF("\n")
			+ UTF("   [MAJOR].[MINOR].[PATCH]\n")
			+ UTF("\n")
			+ UTF("1. COMMERCIAL LICENSE holders can install and use the updated version\n")
			+ UTF("   for bug fixes free of charge, i.e. if you have purchased a license\n")
			+ UTF("   for the [MAJOR].[MINOR] version (e.g., 5.0), you can freely install\n")
			+ UTF("   all releases specified in the [PATCH] version (e.g., 5.0.2).\n")
			+ UTF("   The license terms remain unchanged after the update.\n")
			+ UTF("2. COMMERCIAL LICENSE holders for the [MAJOR].[MINOR] version (e.g., 5.0)\n")
			+ UTF("   can install and use the updated version [MAJOR].[MINOR + 1] free of\n")
			+ UTF("   charge, i.e., plus one release in the [MINOR] range (e.g., 5.1). The\n")
			+ UTF("   license terms remain unchanged after the update.\n")
			+ UTF("3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are\n")
			+ UTF("   not eligible for the free upgrade, can claim a discount when\n")
			+ UTF("   purchasing the upgrade. For this purpose, please contact us via e-mail.\n")
			+ UTF("\n")
			+ UTF("DISCLAIMER\n")
			+ UTF("\n")
			+ UTF("THIS PRODUCT IS PROVIDED BY THE AUTHOR & PUBLISHER \"AS IS\" AND ANY EXPRESS\n")
			+ UTF("OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED\n")
			+ UTF("WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE\n")
			+ UTF("DISCLAIMED. IN NO EVENT SHALL AUTHOR OR PUBLISHER OR CONTRIBUTORS BE\n")
			+ UTF("LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR\n")
			+ UTF("CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF\n")
			+ UTF("SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS\n")
			+ UTF("INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN\n")
			+ UTF("CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)\n")
			+ UTF("ARISING IN ANY WAY OUT OF THE USE OF THIS PRODUCT, EVEN IF ADVISED OF\n")
			+ UTF("THE POSSIBILITY OF SUCH DAMAGE.\n")
			+ UTF("\n")
			+ UTF("THE VIEWS AND CONCLUSIONS CONTAINED IN THE PRODUCT AND DOCUMENTATION ARE\n")
			+ UTF("THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING\n")
			+ UTF("OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF THE AUTHOR OR PUBLISHER.\n")
			+ UTF("\n")
			+ UTF("CONTACT\n")
			+ UTF("\n")
			+ UTF("- e-mail: info@mathparser.org\n")
			+ UTF("- website: https://mathparser.org\n")
			+ UTF("- source code: https://github.com/mariuszgromada/MathParser.org-mXparser\n")
			+ UTF("- online store: https://mathparser.org/order-commercial-license\n")
			+ UTF("- online store: https://payhip.com/infima\n");

			message = StringInvariant::EMPTY;
			errorMessage = StringInvariant::EMPTY;

	);

	API_VISIBLE void License::displayWarning() {
		numberOfWarningDisplay++;
		if (numberOfWarningDisplay > MAXIMUM_NUMBER_OF_WARNING_DISPLAY)
			return;
		StringUtils::errorPrintln();
		StringUtils::errorPrintln(UTF("WARNING: MathParser.org-mXparser License - use type not confirmed!"));
		StringUtils::errorPrintln(UTF("WARNING: ") + ERROR_NOT_CONFIRMED);
		StringUtils::errorPrintln(UTF("WARNING: Please call one of the following methods:"));
		StringUtils::errorPrintln(UTF("WARNING:    License::iConfirmNonCommercialUse(...)"));
		StringUtils::errorPrintln(UTF("WARNING:    License::iConfirmCommercialUse(...)"));
		StringUtils::errorPrintln(UTF("WARNING: Read more at:"));
		StringUtils::errorPrintln(UTF("WARNING:    https://mathparser.org"));
		StringUtils::errorPrintln(
			UTF("WARNING:    https://mathparser.org/mxparser-tutorial/confirming-non-commercial-commercial-use"));
		StringUtils::errorPrintln();
	}

	API_VISIBLE void License::checkLicense() {
		if (numberOfConfirmationAttempts == 0 || typeOfUse == UseType::Null || signature == nullptr)
			displayWarning();
	}

	API_VISIBLE StringPtr License::toString(const UseType &useType) {
		switch (useType) {
			case UseType::NonCommercial:
				return S(UTF("NonCommercial"));
			case UseType::Commercial:
				return S(UTF("Commercial"));
			case UseType::Null:
				return S(UTF("Null"));
			default:
				return S(UTF("Unknown"));
		}
	}

	API_VISIBLE StringPtr License::toString(const MessageType &messageType) {
		switch (messageType) {
			case MessageType::ERROR:
				return S(UTF("ERROR"));
			case MessageType::WARNING:
				return S(UTF("WARNING"));
			default:
				return S(UTF("UNKNOWN"));
		}
	}


	API_VISIBLE int License::getUseType() {
		if (typeOfUse == UseType::Null) return 0;
		if (typeOfUse == UseType::NonCommercial) return 1;
		if (typeOfUse == UseType::Commercial) return 2;
		return 3;
	}

	API_VISIBLE void License::setErrorMessage(const MessageType &type, const StringPtr &errorMessage) {
		License::errorMessage = toString(type) + UTF(": ") + errorMessage;
		StringUtils::errorPrintln(License::errorMessage);
	}

	API_VISIBLE void License::setMessageConfirmedCommercial() {
		message = UTF("You \"") + signature + UTF(
			          "\" have confirmed the commercial use according to the License::geTermsOfAgreement(). Thank you.");
	}

	API_VISIBLE void License::setMessageConfirmedNonCommercial() {
		message = UTF("You \"") + signature + UTF(
			          "\" have confirmed the non-commercial use according to the License::geTermsOfAgreement(). Thank you.");
	}

	API_VISIBLE bool License::checkIfProperSignature(const StringPtr &providedSignature) {
		if (providedSignature == nullptr) {
			setErrorMessage(MessageType::ERROR, S(UTF("The signature cannot be nullptr.")));
			return false;
		}
		if (StringUtils::trim(providedSignature)->length() < 5) {
			setErrorMessage(MessageType::ERROR, S(UTF("The signature cannot be shorter than 5 characters.")));
			return false;
		}
		return true;
	}

	API_VISIBLE bool License::checkIfNoPreviousConfirmationAttempts() {
		if (numberOfConfirmationAttempts == 0)
			return true;
		setErrorMessage(MessageType::ERROR,
		                S(UTF(
			                "Only one attempt of use type confirmation can be made. If you want to modify the confirmed use type, you should identify the previous call and change it.")));
		return false;
	}

	API_VISIBLE bool License::checkLackOfPreviousConfirmation() {
		if (typeOfUse == UseType::Null || signature == nullptr)
			return true;
		setErrorMessage(MessageType::WARNING,
		                UTF("You cannot change a previously signed confirmation. ") + message + UTF(
			                " If you want to modify the confirmed use type, you should identify the previous call and change it."));
		return false;
	}

	/**
	 * By successfully calling this method, you confirm and sign that you use MathParser.org-mXparser
	 * commercially according to the License::geTermsOfAgreement(). The confirmation can only be
	 * called once. The method call takes place only internally for logging purposes and there is no
	 * connection with other external services and no data is sent or collected. The lack of a method
	 * call (or its successful call) does not affect the operation of the PRODUCT in any way.
	 *
	 * @param mySignature    Your first and last name or your e-mail address or your company name.
	 *                       At least 5 non-blank characters.
	 * @return   Logs commercial use and returns true if this was the first attempt to register
	 *           a use type and the signature met the conditions specified for it. Otherwise, returns
	 *           false and does not log use type.
	 *
	 * @see #iConfirmNonCommercialUse(String)
	 * @see #getUseTypeConfirmationMessage()
	 * @see #checkIfUseTypeConfirmed()
	 * @see #geTermsOfAgreement()
	 */
	API_VISIBLE bool License::iConfirmCommercialUse(const StringPtr &mySignature) {
		if (!checkLackOfPreviousConfirmation())
			return false;
		if (!checkIfNoPreviousConfirmationAttempts())
			return false;
		numberOfConfirmationAttempts++;
		if (!checkIfProperSignature(mySignature))
			return false;
		signature = StringUtils::trim(mySignature);
		typeOfUse = UseType::Commercial;
		setMessageConfirmedCommercial();
		return true;
	}

	/**
	 * By successfully calling this method, you confirm and sign that you use MathParser.org-mXparser
	 * non-commercially according to the License::geTermsOfAgreement(). The confirmation can only be
	 * called once. The method call takes place only internally for logging purposes and there is no
	 * connection with other external services and no data is sent or collected. The lack of a method
	 * call (or its successful call) does not affect the operation of the PRODUCT in any way.
	 *
	 * @param mySignature    Your first and last name or your e-mail address or your company name.
	 *                       At least 5 non-blank characters.
	 * @return   Logs non-commercial use and returns true if this was the first attempt to register
	 *           a use type and the signature met the conditions specified for it. Otherwise, returns
	 *           false and does not log use type.
	 *
	 * @see #iConfirmNonCommercialUse(String)
	 * @see #getUseTypeConfirmationMessage()
	 * @see #checkIfUseTypeConfirmed()
	 * @see #geTermsOfAgreement()
	 */
	API_VISIBLE bool License::iConfirmNonCommercialUse(const StringPtr &mySignature) {
		if (!checkLackOfPreviousConfirmation())
			return false;
		if (!checkIfNoPreviousConfirmationAttempts())
			return false;
		numberOfConfirmationAttempts++;
		if (!checkIfProperSignature(mySignature))
			return false;
		signature = StringUtils::trim(mySignature);
		typeOfUse = UseType::NonCommercial;
		setMessageConfirmedNonCommercial();
		return true;
	}

	/**
	 * Verifies whether the use type has been successfully confirmed and signed.
	 *
	 * @return   True in case commercial or non-commercial user type has been confirmed and signed.
	 *           Otherwise, returns false.
	 */
	API_VISIBLE bool License::checkIfUseTypeConfirmed() {
		if (numberOfConfirmationAttempts == 0) {
			setErrorMessage(MessageType::WARNING, ERROR_NOT_CONFIRMED);
			return false;
		}
		if (typeOfUse == UseType::Null || signature == nullptr) {
			setErrorMessage(MessageType::ERROR, ERROR_NOT_CONFIRMED);
			return false;
		}
		if (typeOfUse == UseType::NonCommercial)
			setMessageConfirmedNonCommercial();
		if (typeOfUse == UseType::Commercial)
			setMessageConfirmedCommercial();
		return true;
	}

	/**
	 * Verifies whether the use type has been successfully confirmed and signed.
	 *
	 * @return   Confirmation message in case commercial or non-commercial user type has been
	 *           confirmed and signed. Otherwise, returns error / warning message.
	 *
	 * @see #iConfirmNonCommercialUse(String)
	 * @see #iConfirmNonCommercialUse(String)
	 */
	API_VISIBLE StringPtr License::getUseTypeConfirmationMessage() {
		if (!checkIfUseTypeConfirmed())
			return errorMessage;
		return message;
	}

	/**
	 * Information about the problem encountered when calling methods:
	 * License::iConfirmNonCommercialUse(...), License::iConfirmCommercialUse(...)
	 *
	 * @return Error message if an error occurred,
	 *         empty string if no error.
	 *
	 * @see #iConfirmNonCommercialUse(String)
	 * @see #iConfirmNonCommercialUse(String)
	 */
	API_VISIBLE StringPtr License::getErrorMessage() {
		return errorMessage;
	}

	/**
	 * Return the terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT.
	 *
	 * @return   The terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT as string.
	 */
	API_VISIBLE StringPtr License::geTermsOfAgreement() {
		return MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT;
	}

	/**
	 * Prints to the console the terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT
	 */
	API_VISIBLE void License::consolePrintLicense() {
		mXparser::consolePrint(UTF("\n\n"));
		mXparser::consolePrint(MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT);
		mXparser::consolePrintln();
	}
} // org::mariuszgromada::math::mxparser