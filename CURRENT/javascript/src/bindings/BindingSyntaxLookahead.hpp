/*
 * @(#)BindingSyntaxLookahead.hpp        6.2.0    2026-11-04
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
#include "BindingSyntaxFactories.hpp"
#pragma push_macro("null")
#undef null
namespace mx_binding {
    struct SyntaxLookaheadAccess : BoundSyntaxChecker {
        static auto headMember() { return &SyntaxLookaheadAccess::head; }
    };

    // D1 pointer/index preconditions only. No parser state or token stream is copied.
    struct SyntaxLookaheadDomain {
        static void check(BoundSyntaxChecker &self, int count) {
            if (count < 0)throw std::out_of_range("Native lookahead token count must be nonnegative");
            if (!(self.*SyntaxLookaheadAccess::headMember()) || !self.token || !self.token_source)
                throw std::invalid_argument("Native lookahead requires an initialized parser and token manager");
            const auto manager = dynamic_cast<BoundSyntaxManager *>(self.token_source);
            if (!manager || !manager->input_stream || !manager->errorHandler)
                throw std::invalid_argument(
                    "Native lookahead requires an initialized concrete token manager and character stream");
            const auto stream = manager->input_stream;
            if (!(stream->*CharStreamDomainAccess::data()))
                throw std::invalid_argument("Native lookahead requires allocated character buffers");
            if (!stream->endOfInput())requireCharStreamRead(*stream);
        }
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_1> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_2> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_3> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_4> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_5> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_6> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_7> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_8> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_9> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_10> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_11> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_12> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_13> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_14> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_15> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_16> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_17> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_18> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_19> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_20> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_21> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_22> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_23> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_24> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_25> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_26> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_27> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_28> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_29> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_30> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_31> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_32> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_33> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_34> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_35> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_36> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_37> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_38> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_39> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_40> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_41> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_42> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_43> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_44> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_45> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_46> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_47> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_48> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_49> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_50> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_51> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_52> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_53> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_54> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_55> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_56> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_57> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_58> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_59> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_60> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_61> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_62> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_63> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_64> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_65> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_66> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_67> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_68> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_69> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_70> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_71> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_72> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_73> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_74> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_75> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_76> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_77> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_78> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_79> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_80> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_81> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_82> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_83> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_84> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_85> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_86> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_87> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_88> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_89> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_90> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_91> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_92> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_93> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_94> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_95> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_96> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_97> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_98> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_99> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_100> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_101> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_102> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_103> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_104> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_105> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_106> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_107> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_108> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_109> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_110> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_111> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_112> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_113> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_114> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_115> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_116> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_117> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_118> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_119> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_120> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_121> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_122> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_123> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_124> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_125> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_126> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_127> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_128> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_129> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_130> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_131> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_132> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_133> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_134> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_135> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_136> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_137> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_138> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_139> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_140> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_141> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_142> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_143> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_144> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_145> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_146> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_147> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_148> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_149> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_150> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_151> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_152> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_153> : SyntaxLookaheadDomain {
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_2_154> : SyntaxLookaheadDomain {
    };
}
#pragma pop_macro("null")
