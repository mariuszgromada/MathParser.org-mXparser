/*
 * @(#)BindingParserBorrowedTokens.hpp        6.2.0    2026-11-04
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
#include "org/mariuszgromada/math/mxparser/syntaxchecker/JavaCCToken.hpp"
#include "BindingSupport.hpp"

namespace mx_binding {
    // Must precede nondependent JavaToken conversions in BindingOwnedSyntax.hpp.
    template<>
    inline std::shared_ptr<syntaxchecker::JavaCCToken>
    factoryOwner(const std::shared_ptr<syntaxchecker::JavaCCToken> &);
}

#include "BindingParserTokenState.hpp"
#include "BindingBorrowedLexerHandler.hpp"
#include "BindingSyntaxDependencyFields.hpp"

namespace mx_binding {
    struct BorrowedParserTokenLease {
        std::weak_ptr<void> generation;
        std::weak_ptr<BoundSyntaxChecker> parser;
    };

    using BorrowedParserTokenDelete = RetainedSyntaxFactoryDelete<JavaToken, BorrowedParserTokenLease>;

    template<>
    inline JavaTokenPtr factoryOwner(const JavaTokenPtr &pointer) {
        const auto deleter = std::get_deleter<BorrowedParserTokenDelete>(pointer);
        if (!deleter)return pointer;
        const auto &lease = deleter->owner->dependency;
        const auto parser = lease ? lease->parser.lock() : std::shared_ptr<BoundSyntaxChecker>{};
        if (!lease || lease->generation.expired() || !parser || !(parser.get()->*SyntaxLookaheadAccess::headMember()))
            throw std::invalid_argument("Native borrowed parser token was invalidated by clear or ReInit");
        return pointer;
    }

    inline JavaTokenPtr borrowParserToken(std::shared_ptr<BoundSyntaxChecker> self, JavaToken *pointer) {
        if (!pointer)return nullptr;
        requireParserTokenState(*self);
        auto &owner = syntaxLifetimeOwner<BoundSyntaxChecker, BoundSyntaxManager>(self);
        if (!owner.borrowedTokenGeneration)owner.borrowedTokenGeneration = std::make_shared<unsigned char>(0);
        auto lease = std::make_shared<BorrowedParserTokenLease>(BorrowedParserTokenLease{
            owner.borrowedTokenGeneration, self
        });
        return retainSyntaxDependency(JavaTokenPtr(self, pointer), std::move(lease));
    }

    inline JavaTokenPtr parserCurrentToken(std::shared_ptr<BoundSyntaxChecker> self) {
        if (!self)throw std::invalid_argument("Native token field requires its parser");
        requireParserTokenState(*self);
        return borrowParserToken(self, self->token);
    }

    // Original cached pointer, validated against the actual currently owned native
    // chain before any dereference. No copied state, synthetic null or token cache.
    inline JavaTokenPtr parserCachedNextToken(std::shared_ptr<BoundSyntaxChecker> self) {
        if (!self)throw std::invalid_argument("Native jj_nt requires its parser");
        requireParserTokenState(*self);
        const auto pointer = self->jj_nt;
        if (!pointer)return nullptr;
        for (auto *current = self.get()->*SyntaxLookaheadAccess::headMember(); current; current = current->next)
            if (current == pointer)return borrowParserToken(self, pointer);
        throw std::invalid_argument(
            "Native jj_nt is outside the current parser token chain; cached pointer not present in its currently owned chain");
    }

    inline JavaTokenPtr linkedJavaToken(JavaTokenPtr self, bool special) {
        self = factoryOwner(self);
        if (!self)throw std::invalid_argument("Native token link requires its source token");
        auto *pointer = special ? self->specialToken : self->next;
        if (!pointer)return nullptr;
        const auto deleter = std::get_deleter<BorrowedParserTokenDelete>(self);
        if (deleter) {
            const auto &lease = deleter->owner->dependency;
            return retainSyntaxDependency(JavaTokenPtr(lease->parser.lock(), pointer), lease);
        }
        const auto exception = std::get_deleter<RetainedParseExceptionDelete>(self);
        if (exception && exception->owner->dependency->token) {
            const auto source = factoryOwner(exception->owner->dependency->token);
            if (pointer != (special ? source->specialToken : source->next))
                throw std::invalid_argument("Native ParseException copied token link is outside its retained source");
            return linkedJavaToken(source, special);
        }
        // The original standalone token deletes specialToken,but never owns next.
        if (special)return JavaTokenPtr(self, pointer);
        throw std::invalid_argument("Native non-owning next link requires its parser-owned token chain");
    }

    inline JavaTokenPtr javaTokenNext(JavaTokenPtr self) { return linkedJavaToken(std::move(self), false); }
    inline JavaTokenPtr javaTokenSpecial(JavaTokenPtr self) { return linkedJavaToken(std::move(self), true); }

    inline CharStreamPtr parserInputField(std::shared_ptr<BoundSyntaxChecker> self) {
        if (!self)throw std::invalid_argument("Native jj_input_stream requires its parser");
        if (!self->jj_input_stream)return nullptr;
        const auto &owner = syntaxLifetimeOwner<BoundSyntaxChecker, BoundSyntaxManager>(self);
        if (owner.dependency) {
            auto stream = syntaxManagerInput(owner.dependency);
            if (stream.get() == self->jj_input_stream)return stream;
        }
        throw std::invalid_argument("Native jj_input_stream is outside its retained factory dependency");
    }

    inline void validateBorrowedParserToken(val object) { (void) Conversion<JavaTokenPtr>::read(object); }

    inline void clearBorrowedParserTokens(std::shared_ptr<BoundSyntaxChecker> self, val) {
        if (!self)throw std::invalid_argument("Native clear requires its parser");
        syntaxLifetimeOwner<BoundSyntaxChecker, BoundSyntaxManager>(self).borrowedTokenGeneration.reset();
        self->clear();
    }

    template<auto Field>
    struct BorrowedJavaTokenFieldAccess {
        static val get(JavaTokenPtr self) { return FieldAccess<Field>::get(factoryOwner(self)); }
        static void set(JavaTokenPtr self, val value) { FieldAccess<Field>::set(factoryOwner(self), value); }
    };

    template<auto Method>
    struct BorrowedJavaTokenMemberCall {
        static val call(JavaTokenPtr self, val values) { return MemberCall<Method>::call(factoryOwner(self), values); }
    };

    inline void requireParserTokenFetch(BoundSyntaxChecker &self, int index) {
        requireParserTokenState(self);
        auto *token = self.token;
        for (int i = 0; i < index; i++) {
            if (!token->next) {
                SyntaxLookaheadDomain::check(self, 0);
                return;
            }
            token = token->next;
        }
    }

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::getToken> {
        static void check(BoundSyntaxChecker &self, int index) { requireParserTokenFetch(self, index); }
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::getNextToken> {
        static void check(BoundSyntaxChecker &self) { requireParserTokenFetch(self, 1); }
    };

    template<>
    struct NativeMemberDomain<&BoundSyntaxChecker::jj_consume_token> {
        static void check(BoundSyntaxChecker &self, int kind) {
            requireParserTokenFetch(self, 1);
            constexpr auto count = std::extent_v<decltype(syntaxchecker::tokenImage)>;
            if (kind >= static_cast<int>(count) && (!self.token->next || self.token->next->kind != kind))
                throw std::out_of_range("Native mismatched consume token kind exceeds the original token image array");
        }
    };

    template<auto Method>
    struct BorrowedParserTokenCall;

    template<class... A, JavaToken*(BoundSyntaxChecker::*Method)(A...)>
    struct BorrowedParserTokenCall<Method> {
        static val call(std::shared_ptr<BoundSyntaxChecker> self, val values) {
            auto converted = arguments<A...>(values, std::index_sequence_for<A...>{});
            auto *token = std::apply([&](auto &... args) {
                NativeMemberDomain<Method>::check(*self, args...);
                return std::invoke(Method, *self, args...);
            }, converted);
            return Conversion<JavaTokenPtr>::write(borrowParserToken(std::move(self), token));
        }
    };

    template<class... A, JavaToken*(BoundSyntaxChecker::*Method)(A...) const>
    struct BorrowedParserTokenCall<Method> {
        static val call(std::shared_ptr<BoundSyntaxChecker> self, val values) {
            auto converted = arguments<A...>(values, std::index_sequence_for<A...>{});
            auto *token = std::apply([&](auto &... args) {
                NativeMemberDomain<Method>::check(*self, args...);
                return std::invoke(Method, *self, args...);
            }, converted);
            return Conversion<JavaTokenPtr>::write(borrowParserToken(std::move(self), token));
        }
    };
}
