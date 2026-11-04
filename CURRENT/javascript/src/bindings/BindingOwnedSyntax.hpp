/*
 * @(#)BindingOwnedSyntax.hpp        6.2.0    2026-11-04
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
#include "BindingConstructors.hpp"
#include "BindingParseExceptionArrays.hpp"
#include "BindingSerialization.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/JavaCCToken.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/TokenMgrError.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/ParseException.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/ErrorHandler.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerTokenManager.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxChecker.hpp"
#pragma push_macro("null")
#undef null
namespace mx_binding {
    inline std::shared_ptr<syntaxchecker::ErrorHandler> constructHelperErrorHandler(val) {
        return std::make_shared<syntaxchecker::ErrorHandler>();
    }

    inline std::shared_ptr<syntaxchecker::ReaderStream> constructHelperReaderStream(val) {
        return std::make_shared<syntaxchecker::ReaderStream>();
    }

    inline std::shared_ptr<syntaxchecker::JJCalls> constructHelperJJCalls(val) {
        return std::make_shared<syntaxchecker::JJCalls>();
    }

    // The generated predicates index a four-element table only in their listed
    // hiByte branches. Preserve default false even for otherwise out-of-range i2.
    template<int... ActiveHighBytes>
    struct SyntaxCanMoveIndexDomain {
        static void check(int hiByte, int, int i2, unsigned long long, unsigned long long) {
            if ((i2 < 0 || i2 >= 4) && ((hiByte == ActiveHighBytes) || ...))
                throw std::invalid_argument("Native jjCanMove table index must be in 0..3 for this hiByte");
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_0)> : SyntaxCanMoveIndexDomain<0, 34, 42> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_1)> : SyntaxCanMoveIndexDomain<0> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_2)> : SyntaxCanMoveIndexDomain<34> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_3)> : SyntaxCanMoveIndexDomain<34> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_4)> : SyntaxCanMoveIndexDomain<34> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_5)> : SyntaxCanMoveIndexDomain<34> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_6)> : SyntaxCanMoveIndexDomain<34> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_7)> : SyntaxCanMoveIndexDomain<34> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_8)> : SyntaxCanMoveIndexDomain<33> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_9)> : SyntaxCanMoveIndexDomain<33> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_10)> : SyntaxCanMoveIndexDomain<33> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_11)> : SyntaxCanMoveIndexDomain<33> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_12)> : SyntaxCanMoveIndexDomain<34> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_13)> : SyntaxCanMoveIndexDomain<33> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_14)> : SyntaxCanMoveIndexDomain<34> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_15)> : SyntaxCanMoveIndexDomain<34> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_16)> : SyntaxCanMoveIndexDomain<3, 33, 34> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_17)> : SyntaxCanMoveIndexDomain<34> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(int, int, int, unsigned long long, unsigned long long)>(&
                syntaxchecker::SyntaxCheckerTokenManager::jjCanMove_18)> : SyntaxCanMoveIndexDomain<0> {
    };

    using JavaToken = syntaxchecker::JavaCCToken;
    using JavaTokenPtr = std::shared_ptr<JavaToken>;
    using NativeParseException = syntaxchecker::ParseException;
    using NativeParseExceptionPtr = std::shared_ptr<NativeParseException>;
    using NativeTokenMgrError = syntaxchecker::TokenMgrError;
    using NativeTokenMgrErrorPtr = std::shared_ptr<NativeTokenMgrError>;

    inline JavaTokenPtr constructHelperJavaCCToken(val args) {
        switch (count(args)) {
            case 0: return std::make_shared<JavaToken>();
            case 1: return std::make_shared<JavaToken>(Conversion<int>::read(args[0]));
            case 2: return std::make_shared<JavaToken>(Conversion<int>::read(args[0]),
                                                       Conversion<String>::read(args[1]));
            default: throw std::invalid_argument("JavaCCToken expects zero, one or two parameters");
        }
    }

    inline NativeTokenMgrErrorPtr constructHelperTokenMgrError(val args) {
        switch (count(args)) {
            case 0: return std::make_shared<NativeTokenMgrError>();
            case 2: return std::make_shared<NativeTokenMgrError>(Conversion<String>::read(args[0]),
                                                                 Conversion<int>::read(args[1]));
            case 7: return std::make_shared<NativeTokenMgrError>(Conversion<bool>::read(args[0]),
                                                                 Conversion<int>::read(args[1]),
                                                                 Conversion<int>::read(args[2]),
                                                                 Conversion<int>::read(args[3]),
                                                                 Conversion<String>::read(args[4]),
                                                                 Conversion<Char>::read(args[5]),
                                                                 Conversion<int>::read(args[6]));
            default: throw std::invalid_argument("TokenMgrError expects zero, two or seven parameters");
        }
    }

    inline NativeParseExceptionPtr constructHelperParseException(val args) {
        auto inputs = std::make_shared<ParseExceptionInputs>();
        NativeParseExceptionPtr original;
        switch (count(args)) {
            case 0: original = std::make_shared<NativeParseException>();
                break;
            case 1: original = std::make_shared<NativeParseException>(Conversion<String>::read(args[0]));
                break;
            case 3: {
                const auto source = Conversion<JavaTokenPtr>::read(args[0]);
                if (!source || source->specialToken)
                    throw std::invalid_argument(
                        "Native ParseException requires a non-null token without an exclusive special-token child");
                inputs->sequences = readParseSequenceArray(args[1]);
                inputs->images = readParseImageArray(args[2]);
                if (source->next) {
                    auto dependency = source;
                    while (const auto valueOwner = std::get_deleter<RetainedParseExceptionDelete>(dependency)) {
                        auto originalSource = valueOwner->owner->dependency->token;
                        if (!originalSource)throw std::invalid_argument(
                            "Native ParseException copied next has no retained source");
                        originalSource = factoryOwner(originalSource);
                        if (originalSource->next != source->next)
                            throw std::invalid_argument(
                                "Native ParseException copied next no longer belongs to its source");
                        dependency = std::move(originalSource);
                    }
                    inputs->token = std::move(dependency);
                }
                original = std::make_shared<NativeParseException>(*source,
                                                                  inputs->sequences
                                                                      ? inputs->sequences->pointers.get()
                                                                      : nullptr,
                                                                  inputs->images
                                                                      ? inputs->images->values.get()
                                                                      : nullptr);
                break;
            }
            default: throw std::invalid_argument("ParseException expects zero, one or three parameters");
        }
        return retainSyntaxDependency(std::move(original), std::move(inputs));
    }

    // Original newToken returns a newly allocated owning raw pointer. Wrap that
    // result exactly once; borrowed parser/next/specialToken pointers never use it.
    template<auto Factory>
    struct OwnedJavaTokenFactoryCall;

    template<class... A, JavaToken*(*Factory)(A...)>
    struct OwnedJavaTokenFactoryCall<Factory> {
        template<size_t... I>
        static val run(val args, std::index_sequence<I...>) {
            std::tuple<Value<A>...> values{Conversion<Value<A> >::read(args[I])...};
            return val(JavaTokenPtr(std::apply(Factory, values)));
        }

        static val call(val args) { return run(args, std::index_sequence_for<A...>{}); }
    };

    template<auto Function>
    struct NullPointerStaticCall;

    template<void*(*Function)()>
    struct NullPointerStaticCall<Function> {
        static val call(val) {
            const auto value = Function();
            if (value)throw std::invalid_argument(
                "Native token attribute pointer has no registered JavaScript representation");
            return val::null();
        }
    };

    // Lossless bytes, not a UTF-8 decode: the original helper emits raw narrow
    // characters for part of its input range. Reuse existing owned byte transport.
    template<auto Function>
    struct ByteStringStaticCall;

    template<std::string(*Function)(const String &)>
    struct ByteStringStaticCall<Function> {
        static val call(val args) {
            const auto input = Conversion<String>::read(args[0]);
            const auto result = Function(input);
            return writeBytes(result.data(), result.size());
        }
    };

    template<auto Field>
    struct EmbeddedJavaTokenFieldAccess {
        static_assert(std::is_same_v<decltype(Field), JavaToken NativeParseException::*>);

        static val get(val value) {
            const auto owner = Conversion<NativeParseExceptionPtr>::read(value);
            return val(JavaTokenPtr(owner, &(owner.get()->*Field)));
        }

        static void set(val value, val token) {
            const auto owner = Conversion<NativeParseExceptionPtr>::read(value);
            const auto source = Conversion<JavaTokenPtr>::read(token);
            if (!source || source->next || source->specialToken)
                throw std::invalid_argument(
                    "Native ParseException token assignment requires a non-null unlinked token");
            owner.get()->*Field = *source;
            const auto deleter = std::get_deleter<RetainedParseExceptionDelete>(owner);
            if (deleter)deleter->owner->dependency->token.reset();
        }
    };
}
#pragma pop_macro("null")
