/*
 * @(#)SyntaxCheckerTokenManager.cpp        6.1.0    2024-10-06
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

#include "org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerTokenManager.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/syntaxchecker/TokenMgrError.hpp"

namespace org::mariuszgromada::math::mxparser::syntaxchecker {
	static const unsigned long long jjbitVec0[] = {
		0x0ULL, 0x0ULL, 0x0ULL, 0x800000ULL
	};
	static const unsigned long long jjbitVec1[] = {
		0x2000000ULL, 0x0ULL, 0x0ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec2[] = {
		0x200ULL, 0x0ULL, 0x0ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec3[] = {
		0x0ULL, 0x0ULL, 0x0ULL, 0x80000000000000ULL
	};
	static const unsigned long long jjbitVec4[] = {
		0x0ULL, 0x100000000ULL, 0x0ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec5[] = {
		0x0ULL, 0x1000000000ULL, 0x0ULL, 0x10000000ULL
	};
	static const unsigned long long jjbitVec6[] = {
		0x0ULL, 0x2000000000ULL, 0x0ULL, 0x20000000ULL
	};
	static const unsigned long long jjbitVec7[] = {
		0x10000000000ULL, 0x0ULL, 0x0ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec8[] = {
		0x8000000000ULL, 0x0ULL, 0x0ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec9[] = {
		0x1c000000ULL, 0x0ULL, 0x0ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec10[] = {
		0x0ULL, 0x0ULL, 0x0ULL, 0x40000ULL
	};
	static const unsigned long long jjbitVec11[] = {
		0x0ULL, 0x0ULL, 0x0ULL, 0x10000ULL
	};
	static const unsigned long long jjbitVec12[] = {
		0x0ULL, 0x0ULL, 0x0ULL, 0x8000ULL
	};
	static const unsigned long long jjbitVec13[] = {
		0x0ULL, 0x0ULL, 0x0ULL, 0x2000ULL
	};
	static const unsigned long long jjbitVec14[] = {
		0x0ULL, 0x0ULL, 0x1000000000000000ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec15[] = {
		0x0ULL, 0x0ULL, 0x0ULL, 0x100000ULL
	};
	static const unsigned long long jjbitVec16[] = {
		0x0ULL, 0x0ULL, 0x2000000000000000ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec17[] = {
		0x0ULL, 0x0ULL, 0x800000000000000ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec18[] = {
		0x0ULL, 0x0ULL, 0xfffe03fbfffe0000ULL, 0x3ffULL
	};
	static const unsigned long long jjbitVec19[] = {
		0x9000800000000080ULL, 0x80ULL, 0x0ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec20[] = {
		0x800000280c4ULL, 0x0ULL, 0x0ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec21[] = {
		0x4ULL, 0x0ULL, 0x0ULL, 0x0ULL
	};
	static const unsigned long long jjbitVec22[] = {
		0x0ULL, 0x0ULL, 0x100000000000ULL, 0x0ULL
	};
	static const int jjnextStates[] = {
		272, 0, 273, 2, 274, 275, 276, 277, 268, 270, 247, 248, 250, 252, 254, 56,
		57, 58, 59, 61, 59, 62, 57, 51, 50, 256, 258, 260, 261, 263, 265, 72,
		73, 74, 75, 76, 77, 79, 81, 66, 69, 83, 86, 89, 92, 95, 98, 101,
		104, 107, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232,
		233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 83, 86, 89,
		92, 95, 98, 101, 104, 107, 113, 117, 121, 125, 129, 133, 137, 141, 145, 149,
		153, 157, 161, 165, 169, 173, 177, 181, 185, 189, 193, 197, 201, 205, 209, 213,
		217, 3, 4, 50, 51, 52, 64, 67,
	};
	static JJChar jjstrLiteralChars_0[] = {0};
	static JJChar jjstrLiteralChars_1[] = {0};
	static JJChar jjstrLiteralChars_2[] = {0};
	static JJChar jjstrLiteralChars_3[] = {0};
	static JJChar jjstrLiteralChars_4[] = {0};
	static JJChar jjstrLiteralChars_5[] = {0};
	static JJChar jjstrLiteralChars_6[] = {0};

	static JJChar jjstrLiteralChars_7[] = {0};
	static JJChar jjstrLiteralChars_8[] = {0};
	static JJChar jjstrLiteralChars_9[] = {0};
	static JJChar jjstrLiteralChars_10[] = {0};
	static JJChar jjstrLiteralChars_11[] = {0};
	static JJChar jjstrLiteralChars_12[] = {0};
	static JJChar jjstrLiteralChars_13[] = {0};
	static JJChar jjstrLiteralChars_14[] = {0};
	static JJChar jjstrLiteralChars_15[] = {0};
	static JJChar jjstrLiteralChars_16[] = {0};
	static JJChar jjstrLiteralChars_17[] = {0};
	static JJChar jjstrLiteralChars_18[] = {0};
	static JJChar jjstrLiteralChars_19[] = {0};
	static JJChar jjstrLiteralChars_20[] = {0};

	static JJChar jjstrLiteralChars_21[] = {0};
	static JJChar jjstrLiteralChars_22[] = {0};
	static JJChar jjstrLiteralChars_23[] = {0};
	static JJChar jjstrLiteralChars_24[] = {0};
	static JJChar jjstrLiteralChars_25[] = {0};
	static JJChar jjstrLiteralChars_26[] = {0};
	static JJChar jjstrLiteralChars_27[] = {0};
	static JJChar jjstrLiteralChars_28[] = {0};
	static JJChar jjstrLiteralChars_29[] = {0};
	static JJChar jjstrLiteralChars_30[] = {0};
	static JJChar jjstrLiteralChars_31[] = {0};
	static JJChar jjstrLiteralChars_32[] = {0};
	static JJChar jjstrLiteralChars_33[] = {0};
	static JJChar jjstrLiteralChars_34[] = {0};

	static JJChar jjstrLiteralChars_35[] = {0};
	static JJChar jjstrLiteralChars_36[] = {0};
	static JJChar jjstrLiteralChars_37[] = {0};
	static JJChar jjstrLiteralChars_38[] = {0};
	static JJChar jjstrLiteralChars_39[] = {0};
	static JJChar jjstrLiteralChars_40[] = {0};
	static JJChar jjstrLiteralChars_41[] = {0};
	static JJChar jjstrLiteralChars_42[] = {0};
	static JJChar jjstrLiteralChars_43[] = {0};
	static JJChar jjstrLiteralChars_44[] = {0};
	static JJChar jjstrLiteralChars_45[] = {0};
	static JJChar jjstrLiteralChars_46[] = {0};
	static JJChar jjstrLiteralChars_47[] = {0};
	static JJChar jjstrLiteralChars_48[] = {0};

	static JJChar jjstrLiteralChars_49[] = {0};
	static JJChar jjstrLiteralChars_50[] = {0};
	static JJChar jjstrLiteralChars_51[] = {0};
	static JJChar jjstrLiteralChars_52[] = {0};
	static JJChar jjstrLiteralChars_53[] = {0};
	static JJChar jjstrLiteralChars_54[] = {0};
	static JJChar jjstrLiteralChars_55[] = {0};
	static JJChar jjstrLiteralChars_56[] = {0};
	static JJChar jjstrLiteralChars_57[] = {0};
	static JJChar jjstrLiteralChars_58[] = {0};
	static JJChar jjstrLiteralChars_59[] = {0};
	static JJChar jjstrLiteralChars_60[] = {0};
	static JJChar jjstrLiteralChars_61[] = {0};
	static JJChar jjstrLiteralChars_62[] = {0};

	static JJChar jjstrLiteralChars_63[] = {0};
	static JJChar jjstrLiteralChars_64[] = {0};
	static JJChar jjstrLiteralChars_65[] = {0};
	static JJChar jjstrLiteralChars_66[] = {0};
	static JJChar jjstrLiteralChars_67[] = {0};
	static JJChar jjstrLiteralChars_68[] = {0};
	static JJChar jjstrLiteralChars_69[] = {0};
	static JJChar jjstrLiteralChars_70[] = {0};
	static JJChar jjstrLiteralChars_71[] = {0};
	static JJChar jjstrLiteralChars_72[] = {0};
	static JJChar jjstrLiteralChars_73[] = {0};
	static JJChar jjstrLiteralChars_74[] = {0};
	static JJChar jjstrLiteralChars_75[] = {0};
	static JJChar jjstrLiteralChars_76[] = {0};

	static JJChar jjstrLiteralChars_77[] = {0};
	static JJChar jjstrLiteralChars_78[] = {0};
	static JJChar jjstrLiteralChars_79[] = {0};
	static JJChar jjstrLiteralChars_80[] = {0};
	static JJChar jjstrLiteralChars_81[] = {0};
	static JJChar jjstrLiteralChars_82[] = {0};
	static JJChar jjstrLiteralChars_83[] = {0};
	static JJChar jjstrLiteralChars_84[] = {0};
	static JJChar jjstrLiteralChars_85[] = {0};
	static JJChar jjstrLiteralChars_86[] = {0};
	static JJChar jjstrLiteralChars_87[] = {0};
	static JJChar jjstrLiteralChars_88[] = {0};

	static JJChar jjstrLiteralChars_89[] = {0x28, 0};
	static JJChar jjstrLiteralChars_90[] = {0x29, 0};

	static JJChar jjstrLiteralChars_91[] = {0x2c, 0};
	static JJChar jjstrLiteralChars_92[] = {0x3b, 0};

	static JJChar jjstrLiteralChars_93[] = {0x2b, 0};
	static JJChar jjstrLiteralChars_94[] = {0x2d, 0};
	static JJChar jjstrLiteralChars_95[] = {0};
	static JJChar jjstrLiteralChars_96[] = {0};

	static JJChar jjstrLiteralChars_97[] = {0x5e, 0};
	static JJChar jjstrLiteralChars_98[] = {0x5e, 0x5e, 0};

	static JJChar jjstrLiteralChars_99[] = {0x23, 0};
	static JJChar jjstrLiteralChars_100[] = {0x21, 0};

	static JJChar jjstrLiteralChars_101[] = {0x25, 0};
	static JJChar jjstrLiteralChars_102[] = {0};
	static JJChar jjstrLiteralChars_103[] = {0};
	static JJChar jjstrLiteralChars_104[] = {0x3c, 0};
	static JJChar jjstrLiteralChars_105[] = {0};

	static JJChar jjstrLiteralChars_106[] = {0x3e, 0};
	static JJChar jjstrLiteralChars_107[] = {0};
	static JJChar jjstrLiteralChars_108[] = {0};
	static JJChar jjstrLiteralChars_109[] = {0};
	static JJChar jjstrLiteralChars_110[] = {0};
	static JJChar jjstrLiteralChars_111[] = {0};

	static JJChar jjstrLiteralChars_112[] = {0x40, 0x7e, 0};
	static JJChar jjstrLiteralChars_113[] = {0};
	static JJChar jjstrLiteralChars_114[] = {0};
	static JJChar jjstrLiteralChars_115[] = {0};
	static JJChar jjstrLiteralChars_116[] = {0};
	static JJChar jjstrLiteralChars_117[] = {0};
	static JJChar jjstrLiteralChars_118[] = {0};
	static JJChar jjstrLiteralChars_119[] = {0};
	static JJChar jjstrLiteralChars_120[] = {0};
	static JJChar jjstrLiteralChars_121[] = {0};
	static JJChar jjstrLiteralChars_122[] = {0};
	static JJChar jjstrLiteralChars_123[] = {0};
	static JJChar jjstrLiteralChars_124[] = {0};
	static JJChar jjstrLiteralChars_125[] = {0};

	static JJChar jjstrLiteralChars_126[] = {0x5b, 0x25, 0x5d, 0};
	static JJChar jjstrLiteralChars_127[] = {0x5b, 0x25, 0x25, 0x5d, 0};

	static JJChar jjstrLiteralChars_128[] = {0x5b, 0};
	static JJChar jjstrLiteralChars_129[] = {0x5d, 0};
	static JJChar jjstrLiteralChars_130[] = {0};
	static JJChar jjstrLiteralChars_131[] = {0};
	static const JJString jjstrLiteralImages[] = {
		jjstrLiteralChars_0,
		jjstrLiteralChars_1,
		jjstrLiteralChars_2,
		jjstrLiteralChars_3,
		jjstrLiteralChars_4,
		jjstrLiteralChars_5,
		jjstrLiteralChars_6,
		jjstrLiteralChars_7,
		jjstrLiteralChars_8,
		jjstrLiteralChars_9,
		jjstrLiteralChars_10,
		jjstrLiteralChars_11,
		jjstrLiteralChars_12,
		jjstrLiteralChars_13,
		jjstrLiteralChars_14,
		jjstrLiteralChars_15,
		jjstrLiteralChars_16,
		jjstrLiteralChars_17,
		jjstrLiteralChars_18,
		jjstrLiteralChars_19,
		jjstrLiteralChars_20,
		jjstrLiteralChars_21,
		jjstrLiteralChars_22,
		jjstrLiteralChars_23,
		jjstrLiteralChars_24,
		jjstrLiteralChars_25,
		jjstrLiteralChars_26,
		jjstrLiteralChars_27,
		jjstrLiteralChars_28,
		jjstrLiteralChars_29,
		jjstrLiteralChars_30,
		jjstrLiteralChars_31,
		jjstrLiteralChars_32,
		jjstrLiteralChars_33,
		jjstrLiteralChars_34,
		jjstrLiteralChars_35,
		jjstrLiteralChars_36,
		jjstrLiteralChars_37,
		jjstrLiteralChars_38,
		jjstrLiteralChars_39,
		jjstrLiteralChars_40,
		jjstrLiteralChars_41,
		jjstrLiteralChars_42,
		jjstrLiteralChars_43,
		jjstrLiteralChars_44,
		jjstrLiteralChars_45,
		jjstrLiteralChars_46,
		jjstrLiteralChars_47,
		jjstrLiteralChars_48,
		jjstrLiteralChars_49,
		jjstrLiteralChars_50,
		jjstrLiteralChars_51,
		jjstrLiteralChars_52,
		jjstrLiteralChars_53,
		jjstrLiteralChars_54,
		jjstrLiteralChars_55,
		jjstrLiteralChars_56,
		jjstrLiteralChars_57,
		jjstrLiteralChars_58,
		jjstrLiteralChars_59,
		jjstrLiteralChars_60,
		jjstrLiteralChars_61,
		jjstrLiteralChars_62,
		jjstrLiteralChars_63,
		jjstrLiteralChars_64,
		jjstrLiteralChars_65,
		jjstrLiteralChars_66,
		jjstrLiteralChars_67,
		jjstrLiteralChars_68,
		jjstrLiteralChars_69,
		jjstrLiteralChars_70,
		jjstrLiteralChars_71,
		jjstrLiteralChars_72,
		jjstrLiteralChars_73,
		jjstrLiteralChars_74,
		jjstrLiteralChars_75,
		jjstrLiteralChars_76,
		jjstrLiteralChars_77,
		jjstrLiteralChars_78,
		jjstrLiteralChars_79,
		jjstrLiteralChars_80,
		jjstrLiteralChars_81,
		jjstrLiteralChars_82,
		jjstrLiteralChars_83,
		jjstrLiteralChars_84,
		jjstrLiteralChars_85,
		jjstrLiteralChars_86,
		jjstrLiteralChars_87,
		jjstrLiteralChars_88,
		jjstrLiteralChars_89,
		jjstrLiteralChars_90,
		jjstrLiteralChars_91,
		jjstrLiteralChars_92,
		jjstrLiteralChars_93,
		jjstrLiteralChars_94,
		jjstrLiteralChars_95,
		jjstrLiteralChars_96,
		jjstrLiteralChars_97,
		jjstrLiteralChars_98,
		jjstrLiteralChars_99,
		jjstrLiteralChars_100,
		jjstrLiteralChars_101,
		jjstrLiteralChars_102,
		jjstrLiteralChars_103,
		jjstrLiteralChars_104,
		jjstrLiteralChars_105,
		jjstrLiteralChars_106,
		jjstrLiteralChars_107,
		jjstrLiteralChars_108,
		jjstrLiteralChars_109,
		jjstrLiteralChars_110,
		jjstrLiteralChars_111,
		jjstrLiteralChars_112,
		jjstrLiteralChars_113,
		jjstrLiteralChars_114,
		jjstrLiteralChars_115,
		jjstrLiteralChars_116,
		jjstrLiteralChars_117,
		jjstrLiteralChars_118,
		jjstrLiteralChars_119,
		jjstrLiteralChars_120,
		jjstrLiteralChars_121,
		jjstrLiteralChars_122,
		jjstrLiteralChars_123,
		jjstrLiteralChars_124,
		jjstrLiteralChars_125,
		jjstrLiteralChars_126,
		jjstrLiteralChars_127,
		jjstrLiteralChars_128,
		jjstrLiteralChars_129,
		jjstrLiteralChars_130,
		jjstrLiteralChars_131,
	};

	/** Lexer state names. */
	static const JJChar lexStateNames_arr_0[] =
			{0x44, 0x45, 0x46, 0x41, 0x55, 0x4c, 0x54, 0};
	static const JJString lexStateNames[] = {
		lexStateNames_arr_0,
	};
	static const unsigned long long jjtoToken[] = {
		0xffff000000000001ULL, 0xffffffffffffffffULL, 0xfULL,
	};
	static const unsigned long long jjtoSkip[] = {
		0x1eULL, 0x0ULL, 0x0ULL,
	};

	void SyntaxCheckerTokenManager::setDebugStream(FILE *ds) { debugStream = ds; }

	int SyntaxCheckerTokenManager::jjStopStringLiteralDfa_0(int pos, unsigned long long active0,
	                                                        unsigned long long active1, unsigned long long active2) {
		switch (pos) {
			case 0:
				if ((active1 & 0x40000000ULL) != 0L)
					return 268;
				if ((active1 & 0x2000000ULL) != 0L)
					return 46;
				if ((active1 & 0x40000000000ULL) != 0L)
					return 24;
				if ((active1 & 0x20000000ULL) != 0L)
					return 279;
				if ((active1 & 0x1000000000000ULL) != 0L) {
					jjmatchedKind = 125;
					return 73;
				}
				if ((active1 & 0x10000000000ULL) != 0L)
					return 247;
				if ((active1 & 0x1000000000ULL) != 0L)
					return 19;
				return -1;
			case 1:
				if ((active1 & 0x1000000000000ULL) != 0L)
					return 280;
				return -1;
			default:
				return -1;
		}
	}

	int SyntaxCheckerTokenManager::jjStartNfa_0(int pos, unsigned long long active0, unsigned long long active1,
	                                            unsigned long long active2) {
		return jjMoveNfa_0(jjStopStringLiteralDfa_0(pos, active0, active1, active2), pos + 1);
	}

	int SyntaxCheckerTokenManager::jjStopAtPos(int pos, int kind) {
		jjmatchedKind = kind;
		jjmatchedPos = pos;
		return pos + 1;
	}

	int SyntaxCheckerTokenManager::jjMoveStringLiteralDfa0_0() {
		switch (curChar) {
			case 33:
				return jjStartNfaWithStates_0(0, 100, 19);
			case 35:
				return jjStopAtPos(0, 99);
			case 37:
				return jjStopAtPos(0, 101);
			case 40:
				return jjStartNfaWithStates_0(0, 89, 46);
			case 41:
				return jjStopAtPos(0, 90);
			case 43:
				return jjStartNfaWithStates_0(0, 93, 279);
			case 44:
				return jjStopAtPos(0, 91);
			case 45:
				return jjStartNfaWithStates_0(0, 94, 268);
			case 59:
				return jjStopAtPos(0, 92);
			case 60:
				return jjStartNfaWithStates_0(0, 104, 247);
			case 62:
				return jjStartNfaWithStates_0(0, 106, 24);
			case 64:
				return jjMoveStringLiteralDfa1_0(0x1000000000000ULL);
			case 91:
				jjmatchedKind = 128;
				return jjMoveStringLiteralDfa1_0(0xc000000000000000ULL);
			case 93:
				return jjStopAtPos(0, 129);
			case 94:
				jjmatchedKind = 97;
				return jjMoveStringLiteralDfa1_0(0x400000000ULL);
			default:
				return jjMoveNfa_0(5, 0);
		}
	}

	int SyntaxCheckerTokenManager::jjMoveStringLiteralDfa1_0(unsigned long long active1) {
		if (input_stream->endOfInput()) {
			jjStopStringLiteralDfa_0(0, 0L, active1, 0L);
			return 1;
		}
		curChar = input_stream->readChar();
		switch (curChar) {
			case 37:
				return jjMoveStringLiteralDfa2_0(active1, 0xc000000000000000ULL);
			case 94:
				if ((active1 & 0x400000000ULL) != 0L)
					return jjStopAtPos(1, 98);
				break;
			case 126:
				if ((active1 & 0x1000000000000ULL) != 0L)
					return jjStartNfaWithStates_0(1, 112, 280);
				break;
			default:
				break;
		}
		return jjStartNfa_0(0, 0L, active1, 0L);
	}

	int SyntaxCheckerTokenManager::jjMoveStringLiteralDfa2_0(unsigned long long old1, unsigned long long active1) {
		if (((active1 &= old1)) == 0L)
			return jjStartNfa_0(0, 0L, old1, 0L);
		if (input_stream->endOfInput()) {
			jjStopStringLiteralDfa_0(1, 0L, active1, 0L);
			return 2;
		}
		curChar = input_stream->readChar();
		switch (curChar) {
			case 37:
				return jjMoveStringLiteralDfa3_0(active1, 0x8000000000000000ULL);
			case 93:
				if ((active1 & 0x4000000000000000ULL) != 0L)
					return jjStopAtPos(2, 126);
				break;
			default:
				break;
		}
		return jjStartNfa_0(1, 0L, active1, 0L);
	}

	int SyntaxCheckerTokenManager::jjMoveStringLiteralDfa3_0(unsigned long long old1, unsigned long long active1) {
		if (((active1 &= old1)) == 0L)
			return jjStartNfa_0(1, 0L, old1, 0L);
		if (input_stream->endOfInput()) {
			jjStopStringLiteralDfa_0(2, 0L, active1, 0L);
			return 3;
		}
		curChar = input_stream->readChar();
		switch (curChar) {
			case 93:
				if ((active1 & 0x8000000000000000ULL) != 0L)
					return jjStopAtPos(3, 127);
				break;
			default:
				break;
		}
		return jjStartNfa_0(2, 0L, active1, 0L);
	}

	int SyntaxCheckerTokenManager::jjStartNfaWithStates_0(int pos, int kind, int state) {
		jjmatchedKind = kind;
		jjmatchedPos = pos;
		if (input_stream->endOfInput()) { return pos + 1; }
		curChar = input_stream->readChar();
		return jjMoveNfa_0(state, pos + 1);
	}

	int SyntaxCheckerTokenManager::jjMoveNfa_0(int startState, int curPos) {
		int startsAt = 0;
		jjnewStateCnt = 279;
		int i = 1;
		jjstateSet[0] = startState;
		int kind = 0x7fffffff;
		for (;;) {
			if (++jjround == 0x7fffffff)
				ReInitRounds();
			if (curChar < 64) {
				unsigned long long l = 1ULL << curChar;
				(void) l;
				do {
					switch (jjstateSet[--i]) {
						case 280:
						case 72:
							if (curChar == 38 && kind > 120)
								kind = 120;
							break;
						case 73:
							if (curChar == 62)
								jjstateSet[jjnewStateCnt++] = 80;
							else if (curChar == 60)
								jjstateSet[jjnewStateCnt++] = 78;
							else if (curChar == 38) {
								if (kind > 120)
									kind = 120;
							}
							break;
						case 5:
							if ((0x3ff000000000000ULL & l) != 0L) {
								if (kind > 48)
									kind = 48; {
									jjCheckNAddStates(0, 7);
								}
							} else if ((0x8c00c09800000000ULL & l) != 0L) {
								if (kind > 125)
									kind = 125;
							} else if (curChar == 45) { jjAddStates(8, 9); } else if (curChar == 60) {
								jjAddStates(10, 14);
							} else if (curChar == 43) { jjCheckNAddStates(15, 18); } else if (curChar == 40)
								jjstateSet[jjnewStateCnt++] = 46;
							else if (curChar == 38)
								jjstateSet[jjnewStateCnt++] = 33;
							else if (curChar == 62)
								jjstateSet[jjnewStateCnt++] = 24;
							else if (curChar == 33)
								jjstateSet[jjnewStateCnt++] = 19;
							else if (curChar == 61)
								jjstateSet[jjnewStateCnt++] = 17;
							else if (curChar == 42) {
								if (kind > 95)
									kind = 95;
							}
							if ((0x400800000000000ULL & l) != 0L) {
								if (kind > 96)
									kind = 96;
							} else if (curChar == 45) { jjCheckNAddStates(19, 22); } else if (curChar == 38) {
								if (kind > 109)
									kind = 109;
							} else if (curChar == 61) {
								if (kind > 102)
									kind = 102;
							} else if (curChar == 46) { jjCheckNAdd(1); }
							if (curChar == 47)
								jjstateSet[jjnewStateCnt++] = 35;
							break;
						case 279:
							if ((0x100002600ULL & l) != 0L) { jjCheckNAddTwoStates(58, 59); } else if (curChar == 45) {
								if (kind > 130)
									kind = 130;
							} else if (curChar == 43) {
								if (kind > 130)
									kind = 130;
							}
							if ((0x100002600ULL & l) != 0L) { jjCheckNAddTwoStates(56, 57); }
							break;
						case 268:
							if ((0x100002600ULL & l) != 0L) { jjCheckNAddTwoStates(62, 57); } else if (curChar == 43) {
								if (kind > 130)
									kind = 130;
							} else if (curChar == 45) {
								if (kind > 130)
									kind = 130;
							} else if (curChar == 47)
								jjstateSet[jjnewStateCnt++] = 269;
							if ((0x100002600ULL & l) != 0L) { jjCheckNAddTwoStates(61, 59); } else if (curChar == 45)
								jjstateSet[jjnewStateCnt++] = 267;
							break;
						case 247:
							if (curChar == 45)
								jjstateSet[jjnewStateCnt++] = 253;
							else if (curChar == 47)
								jjstateSet[jjnewStateCnt++] = 251;
							else if (curChar == 61) {
								if (kind > 105)
									kind = 105;
							} else if (curChar == 62) {
								if (kind > 103)
									kind = 103;
							}
							if (curChar == 45)
								jjstateSet[jjnewStateCnt++] = 249;
							break;
						case 0:
							if (curChar == 46) { jjCheckNAdd(1); }
							break;
						case 1:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 48)
								kind = 48; {
								jjCheckNAddTwoStates(1, 2);
							}
							break;
						case 3:
							if ((0x280000000000ULL & l) != 0L) { jjCheckNAdd(4); }
							break;
						case 4:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 48)
								kind = 48; {
								jjCheckNAdd(4);
							}
							break;
						case 6:
							if (curChar == 46) { jjCheckNAdd(7); }
							break;
						case 7:
							if ((0x3000000000000ULL & l) == 0L)
								break;
							if (kind > 85)
								kind = 85; {
								jjCheckNAdd(7);
							}
							break;
						case 9:
							if (curChar == 46) { jjCheckNAdd(10); }
							break;
						case 10:
							if ((0xff000000000000ULL & l) == 0L)
								break;
							if (kind > 86)
								kind = 86; {
								jjCheckNAdd(10);
							}
							break;
						case 12:
							if (curChar == 46) { jjCheckNAdd(13); }
							break;
						case 13:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 87)
								kind = 87; {
								jjCheckNAdd(13);
							}
							break;
						case 14:
							if (curChar == 42)
								kind = 95;
							break;
						case 15:
							if ((0x400800000000000ULL & l) != 0L && kind > 96)
								kind = 96;
							break;
						case 16:
						case 17:
							if (curChar == 61 && kind > 102)
								kind = 102;
							break;
						case 18:
							if (curChar == 61)
								jjstateSet[jjnewStateCnt++] = 17;
							break;
						case 19:
							if (curChar == 61 && kind > 103)
								kind = 103;
							break;
						case 20:
							if (curChar == 33)
								jjstateSet[jjnewStateCnt++] = 19;
							break;
						case 24:
							if (curChar == 61 && kind > 107)
								kind = 107;
							break;
						case 25:
							if (curChar == 62)
								jjstateSet[jjnewStateCnt++] = 24;
							break;
						case 30:
							if (curChar == 47 && kind > 108)
								kind = 108;
							break;
						case 32:
						case 33:
							if (curChar == 38 && kind > 109)
								kind = 109;
							break;
						case 34:
							if (curChar == 38)
								jjstateSet[jjnewStateCnt++] = 33;
							break;
						case 36:
							if (curChar == 47)
								jjstateSet[jjnewStateCnt++] = 35;
							break;
						case 45:
							if (curChar == 41)
								kind = 121;
							break;
						case 46:
							if (curChar == 43)
								jjstateSet[jjnewStateCnt++] = 45;
							break;
						case 47:
							if (curChar == 40)
								jjstateSet[jjnewStateCnt++] = 46;
							break;
						case 50:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 122)
								kind = 122; {
								jjAddStates(23, 24);
							}
							break;
						case 54:
							if ((0x8c00c09800000000ULL & l) != 0L && kind > 125)
								kind = 125;
							break;
						case 55:
							if (curChar == 43) { jjCheckNAddStates(15, 18); }
							break;
						case 56:
							if ((0x100002600ULL & l) != 0L) { jjCheckNAddTwoStates(56, 57); }
							break;
						case 57:
							if (curChar == 43 && kind > 130)
								kind = 130;
							break;
						case 58:
							if ((0x100002600ULL & l) != 0L) { jjCheckNAddTwoStates(58, 59); }
							break;
						case 59:
							if (curChar == 45 && kind > 130)
								kind = 130;
							break;
						case 60:
							if (curChar == 45) { jjCheckNAddStates(19, 22); }
							break;
						case 61:
							if ((0x100002600ULL & l) != 0L) { jjCheckNAddTwoStates(61, 59); }
							break;
						case 62:
							if ((0x100002600ULL & l) != 0L) { jjCheckNAddTwoStates(62, 57); }
							break;
						case 64:
							if (curChar == 43 && kind > 123)
								kind = 123;
							break;
						case 67:
							if (curChar == 45 && kind > 123)
								kind = 123;
							break;
						case 78:
							if (curChar == 60 && kind > 120)
								kind = 120;
							break;
						case 79:
							if (curChar == 60)
								jjstateSet[jjnewStateCnt++] = 78;
							break;
						case 80:
							if (curChar == 62 && kind > 120)
								kind = 120;
							break;
						case 81:
							if (curChar == 62)
								jjstateSet[jjnewStateCnt++] = 80;
							break;
						case 83:
							if (curChar == 49)
								jjstateSet[jjnewStateCnt++] = 84;
							break;
						case 84:
							if (curChar != 46)
								break;
							if (kind > 49)
								kind = 49; {
								jjCheckNAdd(85);
							}
							break;
						case 85:
							if (curChar != 49)
								break;
							if (kind > 49)
								kind = 49; {
								jjCheckNAdd(85);
							}
							break;
						case 86:
							if (curChar == 50)
								jjstateSet[jjnewStateCnt++] = 87;
							break;
						case 87:
							if (curChar == 46) { jjCheckNAdd(88); }
							break;
						case 88:
							if ((0x3000000000000ULL & l) == 0L)
								break;
							if (kind > 50)
								kind = 50; {
								jjCheckNAdd(88);
							}
							break;
						case 89:
							if (curChar == 51)
								jjstateSet[jjnewStateCnt++] = 90;
							break;
						case 90:
							if (curChar == 46) { jjCheckNAdd(91); }
							break;
						case 91:
							if ((0x7000000000000ULL & l) == 0L)
								break;
							if (kind > 51)
								kind = 51; {
								jjCheckNAdd(91);
							}
							break;
						case 92:
							if (curChar == 52)
								jjstateSet[jjnewStateCnt++] = 93;
							break;
						case 93:
							if (curChar == 46) { jjCheckNAdd(94); }
							break;
						case 94:
							if ((0xf000000000000ULL & l) == 0L)
								break;
							if (kind > 52)
								kind = 52; {
								jjCheckNAdd(94);
							}
							break;
						case 95:
							if (curChar == 53)
								jjstateSet[jjnewStateCnt++] = 96;
							break;
						case 96:
							if (curChar == 46) { jjCheckNAdd(97); }
							break;
						case 97:
							if ((0x1f000000000000ULL & l) == 0L)
								break;
							if (kind > 53)
								kind = 53; {
								jjCheckNAdd(97);
							}
							break;
						case 98:
							if (curChar == 54)
								jjstateSet[jjnewStateCnt++] = 99;
							break;
						case 99:
							if (curChar == 46) { jjCheckNAdd(100); }
							break;
						case 100:
							if ((0x3f000000000000ULL & l) == 0L)
								break;
							if (kind > 54)
								kind = 54; {
								jjCheckNAdd(100);
							}
							break;
						case 101:
							if (curChar == 55)
								jjstateSet[jjnewStateCnt++] = 102;
							break;
						case 102:
							if (curChar == 46) { jjCheckNAdd(103); }
							break;
						case 103:
							if ((0x7f000000000000ULL & l) == 0L)
								break;
							if (kind > 55)
								kind = 55; {
								jjCheckNAdd(103);
							}
							break;
						case 104:
							if (curChar == 56)
								jjstateSet[jjnewStateCnt++] = 105;
							break;
						case 105:
							if (curChar == 46) { jjCheckNAdd(106); }
							break;
						case 106:
							if ((0xff000000000000ULL & l) == 0L)
								break;
							if (kind > 56)
								kind = 56; {
								jjCheckNAdd(106);
							}
							break;
						case 107:
							if (curChar == 57)
								jjstateSet[jjnewStateCnt++] = 108;
							break;
						case 108:
							if (curChar == 46) { jjCheckNAdd(109); }
							break;
						case 109:
							if ((0x1ff000000000000ULL & l) == 0L)
								break;
							if (kind > 57)
								kind = 57; {
								jjCheckNAdd(109);
							}
							break;
						case 110:
							if (curChar == 48)
								jjstateSet[jjnewStateCnt++] = 111;
							break;
						case 111:
							if (curChar == 46) { jjCheckNAdd(112); }
							break;
						case 112:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 58)
								kind = 58; {
								jjCheckNAdd(112);
							}
							break;
						case 113:
						case 219:
							if (curChar == 49) { jjCheckNAdd(110); }
							break;
						case 114:
							if (curChar == 49)
								jjstateSet[jjnewStateCnt++] = 115;
							break;
						case 115:
							if (curChar == 46) { jjCheckNAdd(116); }
							break;
						case 116:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 59)
								kind = 59; {
								jjCheckNAdd(116);
							}
							break;
						case 117:
						case 220:
							if (curChar == 49) { jjCheckNAdd(114); }
							break;
						case 118:
							if (curChar == 50)
								jjstateSet[jjnewStateCnt++] = 119;
							break;
						case 119:
							if (curChar == 46) { jjCheckNAdd(120); }
							break;
						case 120:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 60)
								kind = 60; {
								jjCheckNAdd(120);
							}
							break;
						case 121:
						case 221:
							if (curChar == 49) { jjCheckNAdd(118); }
							break;
						case 122:
							if (curChar == 51)
								jjstateSet[jjnewStateCnt++] = 123;
							break;
						case 123:
							if (curChar == 46) { jjCheckNAdd(124); }
							break;
						case 124:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 61)
								kind = 61; {
								jjCheckNAdd(124);
							}
							break;
						case 125:
						case 222:
							if (curChar == 49) { jjCheckNAdd(122); }
							break;
						case 126:
							if (curChar == 52)
								jjstateSet[jjnewStateCnt++] = 127;
							break;
						case 127:
							if (curChar == 46) { jjCheckNAdd(128); }
							break;
						case 128:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 62)
								kind = 62; {
								jjCheckNAdd(128);
							}
							break;
						case 129:
						case 223:
							if (curChar == 49) { jjCheckNAdd(126); }
							break;
						case 130:
							if (curChar == 53)
								jjstateSet[jjnewStateCnt++] = 131;
							break;
						case 131:
							if (curChar == 46) { jjCheckNAdd(132); }
							break;
						case 132:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 63)
								kind = 63; {
								jjCheckNAdd(132);
							}
							break;
						case 133:
						case 224:
							if (curChar == 49) { jjCheckNAdd(130); }
							break;
						case 134:
							if (curChar == 54)
								jjstateSet[jjnewStateCnt++] = 135;
							break;
						case 135:
							if (curChar == 46) { jjCheckNAdd(136); }
							break;
						case 136:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 64)
								kind = 64; {
								jjCheckNAdd(136);
							}
							break;
						case 137:
						case 225:
							if (curChar == 49) { jjCheckNAdd(134); }
							break;
						case 138:
							if (curChar == 55)
								jjstateSet[jjnewStateCnt++] = 139;
							break;
						case 139:
							if (curChar == 46) { jjCheckNAdd(140); }
							break;
						case 140:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 65)
								kind = 65; {
								jjCheckNAdd(140);
							}
							break;
						case 141:
						case 226:
							if (curChar == 49) { jjCheckNAdd(138); }
							break;
						case 142:
							if (curChar == 56)
								jjstateSet[jjnewStateCnt++] = 143;
							break;
						case 143:
							if (curChar == 46) { jjCheckNAdd(144); }
							break;
						case 144:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 66)
								kind = 66; {
								jjCheckNAdd(144);
							}
							break;
						case 145:
						case 227:
							if (curChar == 49) { jjCheckNAdd(142); }
							break;
						case 146:
							if (curChar == 57)
								jjstateSet[jjnewStateCnt++] = 147;
							break;
						case 147:
							if (curChar == 46) { jjCheckNAdd(148); }
							break;
						case 148:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 67)
								kind = 67; {
								jjCheckNAdd(148);
							}
							break;
						case 149:
						case 228:
							if (curChar == 49) { jjCheckNAdd(146); }
							break;
						case 150:
							if (curChar == 48)
								jjstateSet[jjnewStateCnt++] = 151;
							break;
						case 151:
							if (curChar == 46) { jjCheckNAdd(152); }
							break;
						case 152:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 68)
								kind = 68; {
								jjCheckNAdd(152);
							}
							break;
						case 153:
						case 229:
							if (curChar == 50) { jjCheckNAdd(150); }
							break;
						case 154:
							if (curChar == 49)
								jjstateSet[jjnewStateCnt++] = 155;
							break;
						case 155:
							if (curChar == 46) { jjCheckNAdd(156); }
							break;
						case 156:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 69)
								kind = 69; {
								jjCheckNAdd(156);
							}
							break;
						case 157:
						case 230:
							if (curChar == 50) { jjCheckNAdd(154); }
							break;
						case 158:
							if (curChar == 50)
								jjstateSet[jjnewStateCnt++] = 159;
							break;
						case 159:
							if (curChar == 46) { jjCheckNAdd(160); }
							break;
						case 160:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 70)
								kind = 70; {
								jjCheckNAdd(160);
							}
							break;
						case 161:
						case 231:
							if (curChar == 50) { jjCheckNAdd(158); }
							break;
						case 162:
							if (curChar == 51)
								jjstateSet[jjnewStateCnt++] = 163;
							break;
						case 163:
							if (curChar == 46) { jjCheckNAdd(164); }
							break;
						case 164:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 71)
								kind = 71; {
								jjCheckNAdd(164);
							}
							break;
						case 165:
						case 232:
							if (curChar == 50) { jjCheckNAdd(162); }
							break;
						case 166:
							if (curChar == 52)
								jjstateSet[jjnewStateCnt++] = 167;
							break;
						case 167:
							if (curChar == 46) { jjCheckNAdd(168); }
							break;
						case 168:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 72)
								kind = 72; {
								jjCheckNAdd(168);
							}
							break;
						case 169:
						case 233:
							if (curChar == 50) { jjCheckNAdd(166); }
							break;
						case 170:
							if (curChar == 53)
								jjstateSet[jjnewStateCnt++] = 171;
							break;
						case 171:
							if (curChar == 46) { jjCheckNAdd(172); }
							break;
						case 172:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 73)
								kind = 73; {
								jjCheckNAdd(172);
							}
							break;
						case 173:
						case 234:
							if (curChar == 50) { jjCheckNAdd(170); }
							break;
						case 174:
							if (curChar == 54)
								jjstateSet[jjnewStateCnt++] = 175;
							break;
						case 175:
							if (curChar == 46) { jjCheckNAdd(176); }
							break;
						case 176:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 74)
								kind = 74; {
								jjCheckNAdd(176);
							}
							break;
						case 177:
						case 235:
							if (curChar == 50) { jjCheckNAdd(174); }
							break;
						case 178:
							if (curChar == 55)
								jjstateSet[jjnewStateCnt++] = 179;
							break;
						case 179:
							if (curChar == 46) { jjCheckNAdd(180); }
							break;
						case 180:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 75)
								kind = 75; {
								jjCheckNAdd(180);
							}
							break;
						case 181:
						case 236:
							if (curChar == 50) { jjCheckNAdd(178); }
							break;
						case 182:
							if (curChar == 56)
								jjstateSet[jjnewStateCnt++] = 183;
							break;
						case 183:
							if (curChar == 46) { jjCheckNAdd(184); }
							break;
						case 184:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 76)
								kind = 76; {
								jjCheckNAdd(184);
							}
							break;
						case 185:
						case 237:
							if (curChar == 50) { jjCheckNAdd(182); }
							break;
						case 186:
							if (curChar == 57)
								jjstateSet[jjnewStateCnt++] = 187;
							break;
						case 187:
							if (curChar == 46) { jjCheckNAdd(188); }
							break;
						case 188:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 77)
								kind = 77; {
								jjCheckNAdd(188);
							}
							break;
						case 189:
						case 238:
							if (curChar == 50) { jjCheckNAdd(186); }
							break;
						case 190:
							if (curChar == 48)
								jjstateSet[jjnewStateCnt++] = 191;
							break;
						case 191:
							if (curChar == 46) { jjCheckNAdd(192); }
							break;
						case 192:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 78)
								kind = 78; {
								jjCheckNAdd(192);
							}
							break;
						case 193:
						case 239:
							if (curChar == 51) { jjCheckNAdd(190); }
							break;
						case 194:
							if (curChar == 49)
								jjstateSet[jjnewStateCnt++] = 195;
							break;
						case 195:
							if (curChar == 46) { jjCheckNAdd(196); }
							break;
						case 196:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 79)
								kind = 79; {
								jjCheckNAdd(196);
							}
							break;
						case 197:
						case 240:
							if (curChar == 51) { jjCheckNAdd(194); }
							break;
						case 198:
							if (curChar == 50)
								jjstateSet[jjnewStateCnt++] = 199;
							break;
						case 199:
							if (curChar == 46) { jjCheckNAdd(200); }
							break;
						case 200:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 80)
								kind = 80; {
								jjCheckNAdd(200);
							}
							break;
						case 201:
						case 241:
							if (curChar == 51) { jjCheckNAdd(198); }
							break;
						case 202:
							if (curChar == 51)
								jjstateSet[jjnewStateCnt++] = 203;
							break;
						case 203:
							if (curChar == 46) { jjCheckNAdd(204); }
							break;
						case 204:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 81)
								kind = 81; {
								jjCheckNAdd(204);
							}
							break;
						case 205:
						case 242:
							if (curChar == 51) { jjCheckNAdd(202); }
							break;
						case 206:
							if (curChar == 52)
								jjstateSet[jjnewStateCnt++] = 207;
							break;
						case 207:
							if (curChar == 46) { jjCheckNAdd(208); }
							break;
						case 208:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 82)
								kind = 82; {
								jjCheckNAdd(208);
							}
							break;
						case 209:
						case 243:
							if (curChar == 51) { jjCheckNAdd(206); }
							break;
						case 210:
							if (curChar == 53)
								jjstateSet[jjnewStateCnt++] = 211;
							break;
						case 211:
							if (curChar == 46) { jjCheckNAdd(212); }
							break;
						case 212:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 83)
								kind = 83; {
								jjCheckNAdd(212);
							}
							break;
						case 213:
						case 244:
							if (curChar == 51) { jjCheckNAdd(210); }
							break;
						case 214:
							if (curChar == 54)
								jjstateSet[jjnewStateCnt++] = 215;
							break;
						case 215:
							if (curChar == 46) { jjCheckNAdd(216); }
							break;
						case 216:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 84)
								kind = 84; {
								jjCheckNAdd(216);
							}
							break;
						case 217:
						case 245:
							if (curChar == 51) { jjCheckNAdd(214); }
							break;
						case 246:
							if (curChar == 60) { jjAddStates(10, 14); }
							break;
						case 248:
							if (curChar == 61 && kind > 105)
								kind = 105;
							break;
						case 249:
							if (curChar == 45 && kind > 114)
								kind = 114;
							break;
						case 250:
							if (curChar == 45)
								jjstateSet[jjnewStateCnt++] = 249;
							break;
						case 251:
							if (curChar == 45 && kind > 116)
								kind = 116;
							break;
						case 252:
							if (curChar == 47)
								jjstateSet[jjnewStateCnt++] = 251;
							break;
						case 253:
							if (curChar == 62 && kind > 118)
								kind = 118;
							break;
						case 254:
							if (curChar == 45)
								jjstateSet[jjnewStateCnt++] = 253;
							break;
						case 256:
						case 257:
							if (curChar == 38 && kind > 117)
								kind = 117;
							break;
						case 258:
							if (curChar == 38)
								jjstateSet[jjnewStateCnt++] = 257;
							break;
						case 260:
							if (curChar == 47)
								jjstateSet[jjnewStateCnt++] = 259;
							break;
						case 264:
							if (curChar == 47 && kind > 119)
								kind = 119;
							break;
						case 266:
							if (curChar == 45) { jjAddStates(8, 9); }
							break;
						case 267:
							if (curChar == 62 && kind > 113)
								kind = 113;
							break;
						case 269:
							if (curChar == 62 && kind > 115)
								kind = 115;
							break;
						case 270:
							if (curChar == 47)
								jjstateSet[jjnewStateCnt++] = 269;
							break;
						case 271:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 48)
								kind = 48; {
								jjCheckNAddStates(0, 7);
							}
							break;
						case 272:
							if ((0x3ff000000000000ULL & l) != 0L) { jjCheckNAddTwoStates(272, 0); }
							break;
						case 273:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 48)
								kind = 48; {
								jjCheckNAddTwoStates(273, 2);
							}
							break;
						case 274:
							if ((0x3ff000000000000ULL & l) != 0L) { jjCheckNAddTwoStates(274, 275); }
							break;
						case 276:
							if ((0x3ff000000000000ULL & l) != 0L) { jjCheckNAddTwoStates(276, 277); }
							break;
						case 278:
							if ((0x3ff000000000000ULL & l) == 0L)
								break;
							if (kind > 88)
								kind = 88;
							jjstateSet[jjnewStateCnt++] = 278;
							break;
						default: break;
					}
				} while (i != startsAt);
			} else if (curChar < 128) {
				unsigned long long l = 1ULL << (curChar & 077);
				(void) l;
				do {
					switch (jjstateSet[--i]) {
						case 280:
							if (curChar == 124) {
								if (kind > 120)
									kind = 120;
							} else if (curChar == 94) {
								if (kind > 120)
									kind = 120;
							}
							break;
						case 73:
							if (curChar == 126) { jjCheckNAdd(76); } else if (curChar == 124) {
								if (kind > 120)
									kind = 120;
							} else if (curChar == 94) {
								if (kind > 120)
									kind = 120;
							}
							if (curChar == 126) { jjCheckNAdd(74); }
							if (curChar == 126) { jjCheckNAdd(72); }
							break;
						case 5:
							if ((0x7fffffe87fffffeULL & l) != 0L) {
								if (kind > 122)
									kind = 122; {
									jjCheckNAddTwoStates(50, 52);
								}
							} else if ((0x110000001ULL & l) != 0L) {
								if (kind > 125)
									kind = 125;
							} else if (curChar == 126) {
								if (kind > 110)
									kind = 110; {
									jjAddStates(25, 30);
								}
							} else if (curChar == 124)
								jjstateSet[jjnewStateCnt++] = 28;
							if ((0x10000000100ULL & l) != 0L)
								jjstateSet[jjnewStateCnt++] = 12;
							else if ((0x800000008000ULL & l) != 0L)
								jjstateSet[jjnewStateCnt++] = 9;
							else if ((0x400000004ULL & l) != 0L)
								jjstateSet[jjnewStateCnt++] = 6;
							else if (curChar == 64) { jjCheckNAddStates(31, 38); } else if (curChar == 100) {
								jjAddStates(39, 40);
							} else if (curChar == 92)
								jjstateSet[jjnewStateCnt++] = 30;
							else if (curChar == 124) {
								if (kind > 108)
									kind = 108;
							} else if (curChar == 126)
								jjstateSet[jjnewStateCnt++] = 19;
							if (curChar == 66) { jjCheckNAddStates(41, 76); } else if (curChar == 98) {
								jjCheckNAddStates(77, 112);
							} else if (curChar == 92) {
								if (kind > 96)
									kind = 96;
							}
							break;
						case 2:
							if ((0x2000000020ULL & l) != 0L) { jjAddStates(113, 114); }
							break;
						case 8:
							if ((0x800000008000ULL & l) != 0L)
								jjstateSet[jjnewStateCnt++] = 9;
							break;
						case 11:
							if ((0x10000000100ULL & l) != 0L)
								jjstateSet[jjnewStateCnt++] = 12;
							break;
						case 13:
							if ((0x7e0000007eULL & l) == 0L)
								break;
							if (kind > 87)
								kind = 87;
							jjstateSet[jjnewStateCnt++] = 13;
							break;
						case 15:
							if (curChar == 92 && kind > 96)
								kind = 96;
							break;
						case 21:
							if (curChar == 126)
								jjstateSet[jjnewStateCnt++] = 19;
							break;
						case 27:
						case 28:
							if (curChar == 124 && kind > 108)
								kind = 108;
							break;
						case 29:
							if (curChar == 124)
								jjstateSet[jjnewStateCnt++] = 28;
							break;
						case 31:
							if (curChar == 92)
								jjstateSet[jjnewStateCnt++] = 30;
							break;
						case 35:
							if (curChar == 92 && kind > 109)
								kind = 109;
							break;
						case 49:
							if ((0x7fffffe87fffffeULL & l) == 0L)
								break;
							if (kind > 122)
								kind = 122; {
								jjCheckNAddTwoStates(50, 52);
							}
							break;
						case 51:
							if ((0x7fffffe87fffffeULL & l) == 0L)
								break;
							if (kind > 122)
								kind = 122; {
								jjCheckNAddTwoStates(50, 51);
							}
							break;
						case 52:
							if ((0x7fffffe87fffffeULL & l) == 0L)
								break;
							if (kind > 122)
								kind = 122; {
								jjCheckNAddStates(115, 117);
							}
							break;
						case 54:
							if ((0x110000001ULL & l) != 0L && kind > 125)
								kind = 125;
							break;
						case 63:
							if (curChar == 100) { jjAddStates(39, 40); }
							break;
						case 65:
							if (curChar == 114)
								jjstateSet[jjnewStateCnt++] = 64;
							break;
						case 66:
							if (curChar == 101)
								jjstateSet[jjnewStateCnt++] = 65;
							break;
						case 68:
							if (curChar == 114)
								jjstateSet[jjnewStateCnt++] = 67;
							break;
						case 69:
							if (curChar == 101)
								jjstateSet[jjnewStateCnt++] = 68;
							break;
						case 71:
							if (curChar == 64) { jjCheckNAddStates(31, 38); }
							break;
						case 74:
							if (curChar == 94)
								kind = 120;
							break;
						case 75:
							if (curChar == 126) { jjCheckNAdd(74); }
							break;
						case 76:
							if (curChar == 124 && kind > 120)
								kind = 120;
							break;
						case 77:
							if (curChar == 126) { jjCheckNAdd(76); }
							break;
						case 82:
							if (curChar == 98) { jjCheckNAddStates(77, 112); }
							break;
						case 116:
							if ((0x200000002ULL & l) == 0L)
								break;
							if (kind > 59)
								kind = 59;
							jjstateSet[jjnewStateCnt++] = 116;
							break;
						case 120:
							if ((0x600000006ULL & l) == 0L)
								break;
							if (kind > 60)
								kind = 60;
							jjstateSet[jjnewStateCnt++] = 120;
							break;
						case 124:
							if ((0xe0000000eULL & l) == 0L)
								break;
							if (kind > 61)
								kind = 61;
							jjstateSet[jjnewStateCnt++] = 124;
							break;
						case 128:
							if ((0x1e0000001eULL & l) == 0L)
								break;
							if (kind > 62)
								kind = 62;
							jjstateSet[jjnewStateCnt++] = 128;
							break;
						case 132:
							if ((0x3e0000003eULL & l) == 0L)
								break;
							if (kind > 63)
								kind = 63;
							jjstateSet[jjnewStateCnt++] = 132;
							break;
						case 136:
							if ((0x7e0000007eULL & l) == 0L)
								break;
							if (kind > 64)
								kind = 64;
							jjstateSet[jjnewStateCnt++] = 136;
							break;
						case 140:
							if ((0xfe000000feULL & l) == 0L)
								break;
							if (kind > 65)
								kind = 65;
							jjstateSet[jjnewStateCnt++] = 140;
							break;
						case 144:
							if ((0x1fe000001feULL & l) == 0L)
								break;
							if (kind > 66)
								kind = 66;
							jjstateSet[jjnewStateCnt++] = 144;
							break;
						case 148:
							if ((0x3fe000003feULL & l) == 0L)
								break;
							if (kind > 67)
								kind = 67;
							jjstateSet[jjnewStateCnt++] = 148;
							break;
						case 152:
							if ((0x7fe000007feULL & l) == 0L)
								break;
							if (kind > 68)
								kind = 68;
							jjstateSet[jjnewStateCnt++] = 152;
							break;
						case 156:
							if ((0xffe00000ffeULL & l) == 0L)
								break;
							if (kind > 69)
								kind = 69;
							jjstateSet[jjnewStateCnt++] = 156;
							break;
						case 160:
							if ((0x1ffe00001ffeULL & l) == 0L)
								break;
							if (kind > 70)
								kind = 70;
							jjstateSet[jjnewStateCnt++] = 160;
							break;
						case 164:
							if ((0x3ffe00003ffeULL & l) == 0L)
								break;
							if (kind > 71)
								kind = 71;
							jjstateSet[jjnewStateCnt++] = 164;
							break;
						case 168:
							if ((0x7ffe00007ffeULL & l) == 0L)
								break;
							if (kind > 72)
								kind = 72;
							jjstateSet[jjnewStateCnt++] = 168;
							break;
						case 172:
							if ((0xfffe0000fffeULL & l) == 0L)
								break;
							if (kind > 73)
								kind = 73;
							jjstateSet[jjnewStateCnt++] = 172;
							break;
						case 176:
							if ((0x1fffe0001fffeULL & l) == 0L)
								break;
							if (kind > 74)
								kind = 74;
							jjstateSet[jjnewStateCnt++] = 176;
							break;
						case 180:
							if ((0x3fffe0003fffeULL & l) == 0L)
								break;
							if (kind > 75)
								kind = 75;
							jjstateSet[jjnewStateCnt++] = 180;
							break;
						case 184:
							if ((0x7fffe0007fffeULL & l) == 0L)
								break;
							if (kind > 76)
								kind = 76;
							jjstateSet[jjnewStateCnt++] = 184;
							break;
						case 188:
							if ((0xffffe000ffffeULL & l) == 0L)
								break;
							if (kind > 77)
								kind = 77;
							jjstateSet[jjnewStateCnt++] = 188;
							break;
						case 192:
							if ((0x1ffffe001ffffeULL & l) == 0L)
								break;
							if (kind > 78)
								kind = 78;
							jjstateSet[jjnewStateCnt++] = 192;
							break;
						case 196:
							if ((0x3ffffe003ffffeULL & l) == 0L)
								break;
							if (kind > 79)
								kind = 79;
							jjstateSet[jjnewStateCnt++] = 196;
							break;
						case 200:
							if ((0x7ffffe007ffffeULL & l) == 0L)
								break;
							if (kind > 80)
								kind = 80;
							jjstateSet[jjnewStateCnt++] = 200;
							break;
						case 204:
							if ((0xfffffe00fffffeULL & l) == 0L)
								break;
							if (kind > 81)
								kind = 81;
							jjstateSet[jjnewStateCnt++] = 204;
							break;
						case 208:
							if ((0x1fffffe01fffffeULL & l) == 0L)
								break;
							if (kind > 82)
								kind = 82;
							jjstateSet[jjnewStateCnt++] = 208;
							break;
						case 212:
							if ((0x3fffffe03fffffeULL & l) == 0L)
								break;
							if (kind > 83)
								kind = 83;
							jjstateSet[jjnewStateCnt++] = 212;
							break;
						case 216:
							if ((0x7fffffe07fffffeULL & l) == 0L)
								break;
							if (kind > 84)
								kind = 84;
							jjstateSet[jjnewStateCnt++] = 216;
							break;
						case 218:
							if (curChar == 66) { jjCheckNAddStates(41, 76); }
							break;
						case 255:
							if (curChar != 126)
								break;
							if (kind > 110)
								kind = 110; {
								jjAddStates(25, 30);
							}
							break;
						case 259:
							if (curChar == 92 && kind > 117)
								kind = 117;
							break;
						case 261:
						case 262:
							if (curChar == 124 && kind > 119)
								kind = 119;
							break;
						case 263:
							if (curChar == 124)
								jjstateSet[jjnewStateCnt++] = 262;
							break;
						case 265:
							if (curChar == 92)
								jjstateSet[jjnewStateCnt++] = 264;
							break;
						case 275:
							if (curChar == 95)
								jjstateSet[jjnewStateCnt++] = 276;
							break;
						case 277:
							if (curChar == 95)
								jjstateSet[jjnewStateCnt++] = 278;
							break;
						default: break;
					}
				} while (i != startsAt);
			} else {
				int hiByte = (curChar >> 8);
				int i1 = hiByte >> 6;
				unsigned long long l1 = 1ULL << (hiByte & 077);
				int i2 = (curChar & 0xff) >> 6;
				unsigned long long l2 = 1ULL << (curChar & 077);
				do {
					switch (jjstateSet[--i]) {
						case 5:
							if (jjCanMove_0(hiByte, i1, i2, l1, l2)) {
								if (kind > 95)
									kind = 95;
							}
							if (jjCanMove_1(hiByte, i1, i2, l1, l2)) {
								if (kind > 96)
									kind = 96;
							}
							if (jjCanMove_2(hiByte, i1, i2, l1, l2)) {
								if (kind > 103)
									kind = 103;
							}
							if (jjCanMove_3(hiByte, i1, i2, l1, l2)) {
								if (kind > 105)
									kind = 105;
							}
							if (jjCanMove_4(hiByte, i1, i2, l1, l2)) {
								if (kind > 107)
									kind = 107;
							}
							if (jjCanMove_5(hiByte, i1, i2, l1, l2)) {
								if (kind > 108)
									kind = 108;
							}
							if (jjCanMove_6(hiByte, i1, i2, l1, l2)) {
								if (kind > 109)
									kind = 109;
							}
							if (jjCanMove_7(hiByte, i1, i2, l1, l2)) {
								if (kind > 111)
									kind = 111;
							}
							if (jjCanMove_8(hiByte, i1, i2, l1, l2)) {
								if (kind > 113)
									kind = 113;
							}
							if (jjCanMove_9(hiByte, i1, i2, l1, l2)) {
								if (kind > 114)
									kind = 114;
							}
							if (jjCanMove_10(hiByte, i1, i2, l1, l2)) {
								if (kind > 115)
									kind = 115;
							}
							if (jjCanMove_11(hiByte, i1, i2, l1, l2)) {
								if (kind > 116)
									kind = 116;
							}
							if (jjCanMove_12(hiByte, i1, i2, l1, l2)) {
								if (kind > 117)
									kind = 117;
							}
							if (jjCanMove_13(hiByte, i1, i2, l1, l2)) {
								if (kind > 118)
									kind = 118;
							}
							if (jjCanMove_14(hiByte, i1, i2, l1, l2)) {
								if (kind > 119)
									kind = 119;
							}
							if (jjCanMove_15(hiByte, i1, i2, l1, l2)) {
								if (kind > 121)
									kind = 121;
							}
							if (jjCanMove_16(hiByte, i1, i2, l1, l2)) {
								if (kind > 124)
									kind = 124;
							}
							if (jjCanMove_17(hiByte, i1, i2, l1, l2)) { jjAddStates(118, 119); }
							if (jjCanMove_18(hiByte, i1, i2, l1, l2)) {
								if (kind > 110)
									kind = 110; {
									jjAddStates(25, 30);
								}
							}
							break;
						case 14:
							if (jjCanMove_0(hiByte, i1, i2, l1, l2) && kind > 95)
								kind = 95;
							break;
						case 15:
							if (jjCanMove_1(hiByte, i1, i2, l1, l2) && kind > 96)
								kind = 96;
							break;
						case 22:
							if (jjCanMove_2(hiByte, i1, i2, l1, l2) && kind > 103)
								kind = 103;
							break;
						case 23:
							if (jjCanMove_3(hiByte, i1, i2, l1, l2) && kind > 105)
								kind = 105;
							break;
						case 26:
							if (jjCanMove_4(hiByte, i1, i2, l1, l2) && kind > 107)
								kind = 107;
							break;
						case 27:
							if (jjCanMove_5(hiByte, i1, i2, l1, l2) && kind > 108)
								kind = 108;
							break;
						case 32:
							if (jjCanMove_6(hiByte, i1, i2, l1, l2) && kind > 109)
								kind = 109;
							break;
						case 37:
							if (jjCanMove_7(hiByte, i1, i2, l1, l2) && kind > 111)
								kind = 111;
							break;
						case 38:
							if (jjCanMove_8(hiByte, i1, i2, l1, l2) && kind > 113)
								kind = 113;
							break;
						case 39:
							if (jjCanMove_9(hiByte, i1, i2, l1, l2) && kind > 114)
								kind = 114;
							break;
						case 40:
							if (jjCanMove_10(hiByte, i1, i2, l1, l2) && kind > 115)
								kind = 115;
							break;
						case 41:
							if (jjCanMove_11(hiByte, i1, i2, l1, l2) && kind > 116)
								kind = 116;
							break;
						case 42:
							if (jjCanMove_12(hiByte, i1, i2, l1, l2) && kind > 117)
								kind = 117;
							break;
						case 43:
							if (jjCanMove_13(hiByte, i1, i2, l1, l2) && kind > 118)
								kind = 118;
							break;
						case 44:
							if (jjCanMove_14(hiByte, i1, i2, l1, l2) && kind > 119)
								kind = 119;
							break;
						case 48:
							if (jjCanMove_15(hiByte, i1, i2, l1, l2) && kind > 121)
								kind = 121;
							break;
						case 53:
							if (jjCanMove_16(hiByte, i1, i2, l1, l2) && kind > 124)
								kind = 124;
							break;
						case 70:
							if (jjCanMove_17(hiByte, i1, i2, l1, l2)) { jjAddStates(118, 119); }
							break;
						case 255:
							if (!jjCanMove_18(hiByte, i1, i2, l1, l2))
								break;
							if (kind > 110)
								kind = 110; {
								jjAddStates(25, 30);
							}
							break;
						case 256:
							if (jjCanMove_6(hiByte, i1, i2, l1, l2) && kind > 117)
								kind = 117;
							break;
						case 261:
							if (jjCanMove_5(hiByte, i1, i2, l1, l2) && kind > 119)
								kind = 119;
							break;
						default: if (i1 == 0 || l1 == 0 || i2 == 0 || l2 == 0) break;
							else break;
					}
				} while (i != startsAt);
			}
			if (kind != 0x7fffffff) {
				jjmatchedKind = kind;
				jjmatchedPos = curPos;
				kind = 0x7fffffff;
			}
			++curPos;
			if ((i = jjnewStateCnt), (jjnewStateCnt = startsAt), (i == (startsAt = 279 - startsAt)))
				return curPos;
			if (input_stream->endOfInput()) { return curPos; }
			curChar = input_stream->readChar();
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_0(int hiByte, int i1, int i2, unsigned long long l1,
	                                            unsigned long long l2) {
		switch (hiByte) {
			case 0:
				return ((jjbitVec0[i2] & l2) != 0L);
			case 34:
				return ((jjbitVec1[i2] & l2) != 0L);
			case 42:
				return ((jjbitVec2[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_1(int hiByte, int i1, int i2, unsigned long long l1,
	                                            unsigned long long l2) {
		switch (hiByte) {
			case 0:
				return ((jjbitVec3[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_2(int hiByte, int i1, int i2, unsigned long long l1,
	                                            unsigned long long l2) {
		switch (hiByte) {
			case 34:
				return ((jjbitVec4[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_3(int hiByte, int i1, int i2, unsigned long long l1,
	                                            unsigned long long l2) {
		switch (hiByte) {
			case 34:
				return ((jjbitVec5[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_4(int hiByte, int i1, int i2, unsigned long long l1,
	                                            unsigned long long l2) {
		switch (hiByte) {
			case 34:
				return ((jjbitVec6[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_5(int hiByte, int i1, int i2, unsigned long long l1,
	                                            unsigned long long l2) {
		switch (hiByte) {
			case 34:
				return ((jjbitVec7[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_6(int hiByte, int i1, int i2, unsigned long long l1,
	                                            unsigned long long l2) {
		switch (hiByte) {
			case 34:
				return ((jjbitVec8[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_7(int hiByte, int i1, int i2, unsigned long long l1,
	                                            unsigned long long l2) {
		switch (hiByte) {
			case 34:
				return ((jjbitVec9[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_8(int hiByte, int i1, int i2, unsigned long long l1,
	                                            unsigned long long l2) {
		switch (hiByte) {
			case 33:
				return ((jjbitVec10[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_9(int hiByte, int i1, int i2, unsigned long long l1,
	                                            unsigned long long l2) {
		switch (hiByte) {
			case 33:
				return ((jjbitVec11[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_10(int hiByte, int i1, int i2, unsigned long long l1,
	                                             unsigned long long l2) {
		switch (hiByte) {
			case 33:
				return ((jjbitVec12[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_11(int hiByte, int i1, int i2, unsigned long long l1,
	                                             unsigned long long l2) {
		switch (hiByte) {
			case 33:
				return ((jjbitVec13[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_12(int hiByte, int i1, int i2, unsigned long long l1,
	                                             unsigned long long l2) {
		switch (hiByte) {
			case 34:
				return ((jjbitVec14[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_13(int hiByte, int i1, int i2, unsigned long long l1,
	                                             unsigned long long l2) {
		switch (hiByte) {
			case 33:
				return ((jjbitVec15[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_14(int hiByte, int i1, int i2, unsigned long long l1,
	                                             unsigned long long l2) {
		switch (hiByte) {
			case 34:
				return ((jjbitVec16[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_15(int hiByte, int i1, int i2, unsigned long long l1,
	                                             unsigned long long l2) {
		switch (hiByte) {
			case 34:
				return ((jjbitVec17[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_16(int hiByte, int i1, int i2, unsigned long long l1,
	                                             unsigned long long l2) {
		switch (hiByte) {
			case 3:
				return ((jjbitVec18[i2] & l2) != 0L);
			case 33:
				return ((jjbitVec19[i2] & l2) != 0L);
			case 34:
				return ((jjbitVec20[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_17(int hiByte, int i1, int i2, unsigned long long l1,
	                                             unsigned long long l2) {
		switch (hiByte) {
			case 34:
				return ((jjbitVec21[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	bool SyntaxCheckerTokenManager::jjCanMove_18(int hiByte, int i1, int i2, unsigned long long l1,
	                                             unsigned long long l2) {
		switch (hiByte) {
			case 0:
				return ((jjbitVec22[i2] & l2) != 0L);
			default:
				return false;
		}
	}

	/** Token literal values. */

	JavaCCToken *SyntaxCheckerTokenManager::jjFillToken() const {
		JavaCCToken *t;
		JJString curTokenImage;
		int beginLine = -1;
		int endLine = -1;
		int beginColumn = -1;
		int endColumn = -1;
		JJString im = jjstrLiteralImages[jjmatchedKind];
		curTokenImage = (im.empty()) ? input_stream->GetImage() : im;
		if (input_stream->getTrackLineColumn()) {
			beginLine = input_stream->getBeginLine();
			beginColumn = input_stream->getBeginColumn();
			endLine = input_stream->getEndLine();
			endColumn = input_stream->getEndColumn();
		}
		t = JavaCCToken::newToken(jjmatchedKind, curTokenImage);
		t->specialToken = nullptr;
		t->next = nullptr;

		if (input_stream->getTrackLineColumn()) {
			t->beginLine = beginLine;
			t->endLine = endLine;
			t->beginColumn = beginColumn;
			t->endColumn = endColumn;
		}

		return t;
	}

	const int defaultLexState = 0;
	/** Get the next Token. */

	JavaCCToken *SyntaxCheckerTokenManager::getNextToken() {
		JavaCCToken *matchedToken = nullptr;
		int curPos = 0;

		for (;;) {
		EOFLoop:
			if (input_stream->endOfInput()) {
				jjmatchedKind = 0;
				jjmatchedPos = -1;
				matchedToken = jjFillToken();
				return matchedToken;
			}
			curChar = input_stream->BeginToken(); {
				input_stream->backup(0);
				while (curChar <= 32 && (0x100002600ULL & (1ULL << curChar)) != 0L) {
					if (input_stream->endOfInput()) { goto EOFLoop; }
					curChar = input_stream->BeginToken();
				}
			}
			jjmatchedKind = 0x7fffffff;
			jjmatchedPos = 0;
			curPos = jjMoveStringLiteralDfa0_0();
			if (jjmatchedPos == 0 && jjmatchedKind > 131) {
				jjmatchedKind = 131;
			}
			if (jjmatchedKind != 0x7fffffff) {
				if (jjmatchedPos + 1 < curPos)
					input_stream->backup(curPos - jjmatchedPos - 1);
				if ((jjtoToken[jjmatchedKind >> 6] & (1ULL << (jjmatchedKind & 077))) != 0L) {
					matchedToken = jjFillToken();
					return matchedToken;
				} else {
					goto EOFLoop;
				}
			}
			int error_line = input_stream->getEndLine();
			int error_column = input_stream->getEndColumn();
			JJString error_after;
			bool EOFSeen = false;
			if (input_stream->endOfInput()) {
				EOFSeen = true;
				error_after = curPos <= 1 ? EMPTY : input_stream->GetImage();
				if (curChar == '\n' || curChar == '\r') {
					error_line++;
					error_column = 0;
				} else
					error_column++;
			}
			if (!EOFSeen) {
				error_after = curPos <= 1 ? EMPTY : input_stream->GetImage();
			}
			errorHandler->lexicalError(EOFSeen, curLexState, error_line, error_column, error_after, curChar, this);
		}
	}

	/** Reinitialise parser. */
	void SyntaxCheckerTokenManager::ReInit(JAVACC_CHARSTREAM *stream, int lexState) {
		clear();
		jjmatchedPos = jjnewStateCnt = 0;
		curLexState = lexState;
		input_stream = stream;
		ReInitRounds();
		debugStream = stdout; // init
		SwitchTo(lexState);
		errorHandler = new TokenManagerErrorHandler();
	}

	void SyntaxCheckerTokenManager::ReInitRounds() {
		int i;
		jjround = 0x80000001;
		for (i = 279; i-- > 0;)
			jjrounds[i] = 0x80000000;
	}

	/** Switch to specified lex state. */
	void SyntaxCheckerTokenManager::SwitchTo(int lexState) {
		if (lexState >= 1 || lexState < 0) {
			JJString message;
#ifdef WIDE_CHAR
	  message += L"Error: Ignoring invalid lexical state : ";
	  message += lexState; message += L". State unchanged.";
#else
			message += "Error: Ignoring invalid lexical state : ";
			message += lexState;
			message += ". State unchanged.";
#endif
			throw new TokenMgrError(message, INVALID_LEXICAL_STATE);
		} else
			curLexState = lexState;
	}

	/** Constructor. */
	SyntaxCheckerTokenManager::SyntaxCheckerTokenManager(JAVACC_CHARSTREAM *stream, int lexState) {
		input_stream = nullptr;
		ReInit(stream, lexState);
	}

	// Destructor
	SyntaxCheckerTokenManager::~SyntaxCheckerTokenManager() {
		clear();
	}

	// clear
	void SyntaxCheckerTokenManager::clear() {
		//Since input_stream was generated outside of TokenManager
		//TokenManager should not take care of deleting it
		//if (input_stream) delete input_stream;
		if (errorHandler) delete errorHandler, errorHandler = nullptr;
	}
} // namespace org::mariuszgromada::math::mxparser::syntaxchecker

/* Generated By:JavaCC: Do not edit this line. ParseException.h Version 7.0 */
/* JavaCCOptions:STATIC=false,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */