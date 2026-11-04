/*
 * @(#)BindingSyntaxScan.hpp        6.2.0    2026-11-04
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2026 Mariusz Gromada - All rights reserved
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

#pragma once
#include "BindingSyntaxLookahead.hpp"

namespace mx_binding {
    // C++17 explicit-instantiation access exemption: typed member pointers only.
    // These inspect native preconditions; no offsets, replacement tokens or JS state.
    struct SyntaxScanPositionTag {
        using type = syntaxchecker::JavaCCToken * BoundSyntaxChecker::*;

        friend type syntaxScanMember(SyntaxScanPositionTag);
    };

    struct SyntaxScanLastTag {
        using type = syntaxchecker::JavaCCToken * BoundSyntaxChecker::*;

        friend type syntaxScanMember(SyntaxScanLastTag);
    };

    struct SyntaxScanDoneTag {
        using type = bool BoundSyntaxChecker::*;

        friend type syntaxScanMember(SyntaxScanDoneTag);
    };

    template<class Tag, typename Tag::type Member>
    struct SyntaxScanMemberAccess {
        friend typename Tag::type syntaxScanMember(Tag) { return Member; }
    };

    template struct SyntaxScanMemberAccess<SyntaxScanPositionTag, &BoundSyntaxChecker::jj_scanpos>;
    template struct SyntaxScanMemberAccess<SyntaxScanLastTag, &BoundSyntaxChecker::jj_lastpos>;
    template struct SyntaxScanMemberAccess<SyntaxScanDoneTag, &BoundSyntaxChecker::jj_done>;

    struct SyntaxScanDomain {
        static void check(BoundSyntaxChecker &self) {
            // Every original jj_3 method returns immediately when jj_done is true.
            if (self.*syntaxScanMember(SyntaxScanDoneTag{}))return;
            SyntaxLookaheadDomain::check(self, 0);
            if (!(self.*syntaxScanMember(SyntaxScanPositionTag{})) || !(self.*syntaxScanMember(SyntaxScanLastTag{})))
                throw std::invalid_argument("Native scan requires lookahead-initialized scan positions");
        }
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_108> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_107> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_147> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_43> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_106> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_45> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_146> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_68> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_70> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_145> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_105> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_144> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_71> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_69> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_104> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_143> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_103> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_142> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_102> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_141> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_46> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_44> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_101> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_29> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_140> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_73> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_28> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_100> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_139> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_27> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_99> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_138> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_26> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_98> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_64> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_25> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_66> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_137> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_97> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_24> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_136> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_67> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_65> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_23> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_96> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_82> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_135> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_22> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_95> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_60> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_39> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_134> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_41> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_21> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_94> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_132> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_133> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_20> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_78> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_93> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_19> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_18> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_77> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_92> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_131> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_17> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_91> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_154> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_59> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_16> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_130> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_76> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_90> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_15> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_153> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_128> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_152> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_125> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_42> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_40> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_14> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_89> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_129> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_58> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_83> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_148> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_62> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_13> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_124> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_75> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_80> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_151> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_88> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_85> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_54> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_127> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_56> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_123> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_150> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_12> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_87> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_argumentList_530_9_27> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_unitOrSpecialConstant_525_9_28> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_149> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_74> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_79> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_122> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_11> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_47> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_itemName_520_9_29> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_126> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_49> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_otherBaseNumber_515_9_26> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_86> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_121> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_itemOrFunction_510_9_25> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_57> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_55> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_10> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_84> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_63> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_61> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&
                BoundSyntaxChecker::jj_3R_itemOrFunctionImpliedMultiplication_505_9_24> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_53> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_51> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_81> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_9> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_120> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_32> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_35> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&
                BoundSyntaxChecker::jj_3R_itemOrFunctionOptionalImpliedMultiplication_500_5_22> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_72> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_37> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_bracketedExpression_495_5_23> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_119> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_8> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_31> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_34> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&
                BoundSyntaxChecker::jj_3R_bracketedExpressionOptionalImpliedMultiplication_490_5_21> :
            SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_4> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_38> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_36> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_itemExpression_485_5_32> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_unaryLeftOperator_480_9_20> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_3> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_33> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_7> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_118> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_unaryRigthOperator_475_9_19> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_30> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_50> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_48> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_binaryOperator_470_9_17> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_6> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_117> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_5> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_2> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_unaryLeftExpression_465_9_31> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_unaryRigthExpression_460_9_18> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_116> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_binaryExpression_455_9_30> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3R_expression_450_9_16> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_115> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_1> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_114> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_113> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_52> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_112> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_111> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_110> : SyntaxScanDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_3_109> : SyntaxScanDomain {
    };
}
