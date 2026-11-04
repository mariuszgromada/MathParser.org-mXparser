/*
 * @(#)BindingCString.hpp        6.2.0    2026-11-04
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
#include "BindingSupport.hpp"
#pragma push_macro("null")
#undef null
namespace mx_binding {
    // Argument storage only: const C-string pointers stay valid for the native
    // call. The ORIGINAL C++ functions apply NUL termination and UTF-8 decoding.
    template<class Character>
    class OwnedCStringArgument {
        bool nullValue;
        std::basic_string<Character> storage;

    public:
        explicit OwnedCStringArgument(const val &value) : nullValue(value.isNull()) {
            if (nullValue)return;
            if constexpr (std::is_same_v<Character, char>) {
                if (value.isString()) {
                    const String wide = value.as<String>();
                    // SC(const Char*) takes the native prefix before encoding;
                    // invalid text AFTER NUL must not affect a C-string call.
                    storage = UTF16toUTF8(SC(wide.c_str()));
                } else {
                    const auto length = value["length"].as<unsigned>();
                    storage.resize(length);
                    for (unsigned i = 0; i < length; i++)storage[i] = static_cast<char>(value[i].as<unsigned char>());
                }
            } else storage = value.as<String>();
        }

        operator const Character *() const { return nullValue ? nullptr : storage.c_str(); }
    };

    // The two original S(pointer-reference) functions do not mutate the pointer.
    // Recompute its lvalue after tuple moves, so short-string storage stays valid.
    template<class Character>
    class OwnedCStringReferenceArgument {
        OwnedCStringArgument<Character> value;
        const Character *pointer = nullptr;

    public:
        explicit OwnedCStringReferenceArgument(const val &input) : value(input) {
        }

        operator const Character *&() {
            pointer = value;
            return pointer;
        }
    };

    template<class T>
    using CStringArgument = std::conditional_t<std::is_same_v<T, const Char *&>, OwnedCStringReferenceArgument<Char>,
        std::conditional_t<std::is_same_v<T, const char *&>, OwnedCStringReferenceArgument<char>, std::conditional_t<
            std::is_same_v<Value<T>, const Char *>, OwnedCStringArgument<Char>, std::conditional_t<std::is_same_v<Value<
                T>, const char *>, OwnedCStringArgument<char>, Value<T> > > > >;
    static_assert(std::is_same_v<CStringArgument<const Char *>, OwnedCStringArgument<Char> >);
    static_assert(std::is_same_v<CStringArgument<const char *>, OwnedCStringArgument<char> >);
    static_assert(std::is_same_v<CStringArgument<const Char *&>, OwnedCStringReferenceArgument<Char> >);
    static_assert(std::is_same_v<CStringArgument<const char *&>, OwnedCStringReferenceArgument<char> >);

    template<class T>
    CStringArgument<T> readCStringArgument(const val &value) {
        if constexpr (std::is_same_v<Value<T>, const Char *> || std::is_same_v<Value<T>, const char *>)return
                CStringArgument<T>(value);
        else return Conversion<Value<T> >::read(value);
    }

    template<class... A, size_t... I>
    auto cstringArguments(const val &values, std::index_sequence<I...>) {
        return std::tuple<CStringArgument<A>...>{readCStringArgument<A>(values[I])...};
    }

    // getNumeralSystemBase forwards its input to regexMatch, which dereferences
    // StringPtr unconditionally. Only this undefined null domain is rejected.
    template<>
    struct NumericUtilityDomain<static_cast<int(*)(const Char *)>(&NumberTheory::getNumeralSystemBase)> {
        static void check(const Char *input) {
            if (!input)throw std::invalid_argument("Native numeral-base recognition requires non-null C-string input");
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<int(*)(const char *)>(&NumberTheory::getNumeralSystemBase)> {
        static void check(const char *input) {
            if (!input)throw std::invalid_argument("Native numeral-base recognition requires non-null C-string input");
        }
    };

    // Reuse the native locale selector only for the existing undefined null-NEW_LINE domain.
    template<>
    struct NumericUtilityDomain<static_cast<StringResourcesPtr(*)(const Char *)>(&
                StringResources::bestMatchingLanguage)> {
        static void check(const Char *language) {
            if (!StringInvariant::NEW_LINE)checkResourceLocaleNewLine(SC(language));
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringResourcesPtr(*)(const char *)>(&
                StringResources::bestMatchingLanguage)> {
        static void check(const char *language) {
            if (!StringInvariant::NEW_LINE)checkResourceLocaleNewLine(SC(language));
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<void(*)(const char *)>(&mXparser::changeLanguageTo)> {
        static void check(const char *language) {
            if (!StringInvariant::NEW_LINE)checkResourceLocaleNewLine(S(language));
        }
    };

    template<class Character>
    struct CStringRegexOperandsDomain {
        static void check(const Character *text, const Character *pattern) {
            if (text && pattern)return;
            RequiredRegexOperandsDomain::check(S(text), S(pattern));
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(const Char *, const Char *)>(&
                mXparser::regexMatch)> : CStringRegexOperandsDomain<Char> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(const char *&, const char *&)>(&
                mXparser::regexMatch)> : CStringRegexOperandsDomain<char> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(const StringPtr &, const char *)>(&
                stringutils::StringUtils::contains)> {
        static void check(const StringPtr &text, const char *part) {
            if (!text) {
                (void) SC(part);
                RequiredContainsOperandsDomain::reject();
            }
        }
    };

    template<auto Function>
    struct CStringStaticCall;

    template<class R, class... A, R(*Function)(A...)>
    struct CStringStaticCall<Function> {
        static val call(val values) {
            auto converted = cstringArguments<A...>(values, std::index_sequence_for<A...>{});
            return std::apply([&](auto &... args) {
                NumericUtilityDomain<Function>::check(args...);
                return result<R>([&]()-> R { return std::invoke(Function, args...); });
            }, converted);
        }
    };

    // Only undefined stored-name / validation-pattern dereferences. Preserve
    // native nullable input and equality returns before the pattern is used.
    template<class C, auto Getter, StringPtr * Pattern>
    struct NameSetterDomain {
        static bool ordinary(C &self) { return std::invoke(Getter, self) && *Pattern; }

        static void check(C &self, const StringPtr &input) {
            if (!input)return;
            const StringPtr previous = std::invoke(Getter, self);
            if (!previous)throw std::invalid_argument("Native name setter requires a non-null stored name");
            if (*Pattern)return;
            const StringPtr trimmed = stringutils::StringUtils::trim(input);
            if (*previous == *trimmed)return;
            throw std::invalid_argument("Native name setter requires a non-null validation pattern");
        }

        static void check(C &self, const String &input) {
            if (ordinary(self))return;
            check(self, S(input));
        }
    };

    using ArgumentNameSetterDomain = NameSetterDomain<Argument, &Argument::getArgumentName, &
        ParserSymbol::nameOnlyTokenRegExp>;

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const StringPtr &)>(&
                Argument::setArgumentName)> : ArgumentNameSetterDomain {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const String &)>(&
                Argument::setArgumentName)> : ArgumentNameSetterDomain {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const Char *)>(&Argument::setArgumentName)> {
        static void check(Argument &self, const Char *input) {
            if (ArgumentNameSetterDomain::ordinary(self))return;
            ArgumentNameSetterDomain::check(self, S(input));
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const char *)>(&Argument::setArgumentName)> {
        static void check(Argument &self, const char *input) {
            if (ArgumentNameSetterDomain::ordinary(self))return;
            ArgumentNameSetterDomain::check(self, S(input));
        }
    };

    using ConstantNameSetterDomain = NameSetterDomain<Constant, &Constant::getConstantName, &
        ParserSymbol::nameOnlyTokenOptBracketsRegExp>;

    template<>
    struct NativeMemberDomain<static_cast<void(Constant::*)(const StringPtr &)>(&
                Constant::setConstantName)> : ConstantNameSetterDomain {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Constant::*)(const String &)>(&
                Constant::setConstantName)> : ConstantNameSetterDomain {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Constant::*)(const Char *)>(&Constant::setConstantName)> {
        static void check(Constant &self, const Char *input) {
            if (ConstantNameSetterDomain::ordinary(self))return;
            ConstantNameSetterDomain::check(self, S(SC(input)));
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Constant::*)(const char *)>(&Constant::setConstantName)> {
        static void check(Constant &self, const char *input) {
            if (ConstantNameSetterDomain::ordinary(self))return;
            ConstantNameSetterDomain::check(self, S(SC(input)));
        }
    };

    using FunctionNameSetterDomain = NameSetterDomain<Function, &Function::getFunctionName, &
        ParserSymbol::nameOnlyTokenRegExp>;

    template<>
    struct NativeMemberDomain<static_cast<void(Function::*)(const StringPtr &)>(&
                Function::setFunctionName)> : FunctionNameSetterDomain {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Function::*)(const String &)>(&
                Function::setFunctionName)> : FunctionNameSetterDomain {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Function::*)(const Char *)>(&Function::setFunctionName)> {
        static void check(Function &self, const Char *input) {
            if (FunctionNameSetterDomain::ordinary(self))return;
            FunctionNameSetterDomain::check(self, S(SC(input)));
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Function::*)(const char *)>(&Function::setFunctionName)> {
        static void check(Function &self, const char *input) {
            if (FunctionNameSetterDomain::ordinary(self))return;
            FunctionNameSetterDomain::check(self, S(SC(input)));
        }
    };

    template<class Character, class Numeric>
    struct ConstantCStringConstructionDomain {
        static void check(const Character *name, Numeric value) {
            if (ParserSymbol::nameOnlyTokenOptBracketsRegExp || !name)return;
            ConstantConstructionPatternDomain::check(S(name), value);
        }

        static void check(const Character *name, Numeric value, const Character *description) {
            if (ParserSymbol::nameOnlyTokenOptBracketsRegExp || !name || !description)return;
            ConstantConstructionPatternDomain::check(S(name), value, S(description));
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const Char *, double)>(&
                new_Constant)> : ConstantCStringConstructionDomain<Char, double> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const char *, double)>(&
                new_Constant)> : ConstantCStringConstructionDomain<char, double> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const Char *, int)>(&
                new_Constant)> : ConstantCStringConstructionDomain<Char, int> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const char *, int)>(&
                new_Constant)> : ConstantCStringConstructionDomain<char, int> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const Char *, int, const Char *)>(&
                new_Constant)> : ConstantCStringConstructionDomain<Char, int> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const char *, int, const char *)>(&
                new_Constant)> : ConstantCStringConstructionDomain<char, int> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const Char *, double, const Char *)>(&
                new_Constant)> : ConstantCStringConstructionDomain<Char, double> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const char *, double, const char *)>(&
                new_Constant)> : ConstantCStringConstructionDomain<char, double> {
    };

    template<class Character, class Numeric>
    struct ArgumentCStringConstructionDomain {
        static void check(const Character *name, Numeric value) {
            if (ParserSymbol::nameOnlyTokenRegExp || !name)return;
            ArgumentConstructionPatternDomain::check(S(name), value);
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<ArgumentPtr(*)(const Char *, double)>(&
                new_Argument)> : ArgumentCStringConstructionDomain<Char, double> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ArgumentPtr(*)(const char *, double)>(&
                new_Argument)> : ArgumentCStringConstructionDomain<char, double> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ArgumentPtr(*)(const Char *, int)>(&
                new_Argument)> : ArgumentCStringConstructionDomain<Char, int> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ArgumentPtr(*)(const char *, int)>(&
                new_Argument)> : ArgumentCStringConstructionDomain<char, int> {
    };

    // Expression dereferences a null lookup name only after a non-empty list.
    // Argument uses S + its own null return; Function uses SC + native body guards.
    template<auto Count, class Character>
    struct NullableExpressionCStringNameDomain {
        static void check(const Expression &self, const Character *name) {
            if (!name && std::invoke(Count, self) > 0)
                throw std::invalid_argument(
                    "Native Expression name lookup requires non-null text for a non-empty definition list");
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<ArgumentPtr(Expression::*)(const Char *) const>(&
                Expression::getArgument)> : NullableExpressionCStringNameDomain<&Expression::getArgumentsNumber, Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<ArgumentPtr(Expression::*)(const char *) const>(&
                Expression::getArgument)> : NullableExpressionCStringNameDomain<&Expression::getArgumentsNumber, char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<ConstantPtr(Expression::*)(const Char *) const>(&
                Expression::getConstant)> : NullableExpressionCStringNameDomain<&Expression::getConstantsNumber, Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<ConstantPtr(Expression::*)(const char *) const>(&
                Expression::getConstant)> : NullableExpressionCStringNameDomain<&Expression::getConstantsNumber, char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<FunctionPtr(Expression::*)(const Char *) const>(&
                Expression::getFunction)> : NullableExpressionCStringNameDomain<&Expression::getFunctionsNumber, Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<FunctionPtr(Expression::*)(const char *) const>(&
                Expression::getFunction)> : NullableExpressionCStringNameDomain<&Expression::getFunctionsNumber, char> {
    };

    // Native index lookups share the original empty-list/null-name boundary.
    template<>
    struct NativeMemberDomain<static_cast<int(Expression::*)(const Char *) const>(&
                Expression::getArgumentIndex)> : NullableExpressionCStringNameDomain<&Expression::getArgumentsNumber,
                Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<int(Expression::*)(const char *) const>(&
                Expression::getArgumentIndex)> : NullableExpressionCStringNameDomain<&Expression::getArgumentsNumber,
                char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<int(Expression::*)(const Char *) const>(&
                Expression::getConstantIndex)> : NullableExpressionCStringNameDomain<&Expression::getConstantsNumber,
                Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<int(Expression::*)(const char *) const>(&
                Expression::getConstantIndex)> : NullableExpressionCStringNameDomain<&Expression::getConstantsNumber,
                char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<int(Expression::*)(const Char *) const>(&
                Expression::getFunctionIndex)> : NullableExpressionCStringNameDomain<&Expression::getFunctionsNumber,
                Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<int(Expression::*)(const char *) const>(&
                Expression::getFunctionIndex)> : NullableExpressionCStringNameDomain<&Expression::getFunctionsNumber,
                char> {
    };

    // Additional numeric argument is intentionally ignored by the name-domain guard.
    template<class Character>
    struct NullableExpressionCStringValueDomain {
        static void check(const Expression &self, const Character *name, double) {
            NullableExpressionCStringNameDomain<&Expression::getArgumentsNumber, Character>::check(self, name);
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<double(Expression::*)(const Char *)>(&
                Expression::getArgumentValue)> : NullableExpressionCStringNameDomain<&Expression::getArgumentsNumber,
                Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const Char *, double)>(&
                Expression::setArgumentValue)> : NullableExpressionCStringValueDomain<Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<double(Expression::*)(const char *)>(&
                Expression::getArgumentValue)> : NullableExpressionCStringNameDomain<&Expression::getArgumentsNumber,
                char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const char *, double)>(&
                Expression::setArgumentValue)> : NullableExpressionCStringValueDomain<char> {
    };

    template<class C, class Character, template<class,class>class Domain>
    struct CStringDefinitionConstructionDomain {
        static void check(C &, const Character *name, double value) {
            Domain<Character, double>::check(name, value);
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const Char *, double)>(&
                Argument::defineArgument)> : CStringDefinitionConstructionDomain<Argument, Char,
                ArgumentCStringConstructionDomain> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const char *, double)>(&
                Argument::defineArgument)> : CStringDefinitionConstructionDomain<Argument, char,
                ArgumentCStringConstructionDomain> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const Char *, double)>(&
                Argument::defineConstant)> : CStringDefinitionConstructionDomain<Argument, Char,
                ConstantCStringConstructionDomain> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const char *, double)>(&
                Argument::defineConstant)> : CStringDefinitionConstructionDomain<Argument, char,
                ConstantCStringConstructionDomain> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const Char *, double)>(&
                Expression::defineArgument)> : CStringDefinitionConstructionDomain<Expression, Char,
                ArgumentCStringConstructionDomain> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const char *, double)>(&
                Expression::defineArgument)> : CStringDefinitionConstructionDomain<Expression, char,
                ArgumentCStringConstructionDomain> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const Char *, double)>(&
                Expression::defineConstant)> : CStringDefinitionConstructionDomain<Expression, Char,
                ConstantCStringConstructionDomain> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const char *, double)>(&
                Expression::defineConstant)> : CStringDefinitionConstructionDomain<Expression, char,
                ConstantCStringConstructionDomain> {
    };

    template<class Character>
    struct CStringOccurrenceCountEmptyDomain {
        static void check(const Character *text, const Character *needle) {
            if (StringInvariant::EMPTY)return;
            OccurrenceCountEmptyDomain::check(S(text), S(needle));
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<int(*)(const Char *, const Char *)>(&
                StringUtils::countOccurrences)> : CStringOccurrenceCountEmptyDomain<Char> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<int(*)(const char *, const char *)>(&
                StringUtils::countOccurrences)> : CStringOccurrenceCountEmptyDomain<char> {
    };

    template<class C, class Character>
    struct CStringSingleArgumentDefinitionPatternDomain {
        static void check(C &self, const Character *definition) {
            if (SingleArgumentDefinitionPatternDomain<C>::ordinary())return;
            SingleArgumentDefinitionPatternDomain<C>::check(self, S(definition));
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const Char *)>(&
                Argument::defineArguments)> : CStringSingleArgumentDefinitionPatternDomain<Argument, Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const char *)>(&
                Argument::defineArguments)> : CStringSingleArgumentDefinitionPatternDomain<Argument, char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const Char *)>(&
                Expression::defineArguments)> : CStringSingleArgumentDefinitionPatternDomain<Expression, Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const char *)>(&
                Expression::defineArguments)> : CStringSingleArgumentDefinitionPatternDomain<Expression, char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Function::*)(const Char *)>(&
                Function::defineArguments)> : CStringSingleArgumentDefinitionPatternDomain<Function, Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Function::*)(const char *)>(&
                Function::defineArguments)> : CStringSingleArgumentDefinitionPatternDomain<Function, char> {
    };

    template<class Character>
    struct CStringStringBuilderAppendDomain {
        static void check(const wrapper::StringBuilder &, const Character *text) {
            if (!text)throw std::invalid_argument("Native StringBuilder pointer append requires non-null text");
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(wrapper::StringBuilder::*)(const Char *) const>(&
                wrapper::StringBuilder::append)> : CStringStringBuilderAppendDomain<Char> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(wrapper::StringBuilder::*)(const char *) const>(&
                wrapper::StringBuilder::append)> : CStringStringBuilderAppendDomain<char> {
    };

    template<auto Member>
    struct CStringMemberCall;

    template<class R, class C, class... A, R(C::*Member)(A...)>
    struct CStringMemberCall<Member> {
        static val call(std::shared_ptr<C> self, val values) {
            auto converted = cstringArguments<A...>(values, std::index_sequence_for<A...>{});
            return std::apply([&](auto &... args) {
                NativeMemberDomain<Member>::check(*self, args...);
                return result<R>([&]()-> R { return std::invoke(Member, *self, args...); });
            }, converted);
        }
    };

    // Const qualification follows the original member-function pointer type.
    template<class R, class C, class... A, R(C::*Member)(A...) const>
    struct CStringMemberCall<Member> {
        static val call(std::shared_ptr<C> self, val values) {
            auto converted = cstringArguments<A...>(values, std::index_sequence_for<A...>{});
            return std::apply([&](auto &... args) {
                NativeMemberDomain<Member>::check(*self, args...);
                return result<R>([&]()-> R { return std::invoke(Member, *self, args...); });
            }, converted);
        }
    };
}
#pragma pop_macro("null")
