/*
 * @(#)BindingSupport.hpp        6.2.0    2026-11-04
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

#include "org/mariuszgromada/math/mxparser/mathcollection/Evaluate.hpp"
// D1 transport. All mathematical operations remain original C++ calls.
#pragma once
#include "org/mariuszgromada/math/mxparser.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/BigDecimal.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerConstants.hpp"
#pragma push_macro("null")
#undef null
#include <emscripten/bind.h>
#include <functional>
#include <algorithm>
#include <tuple>
#include <type_traits>
#include <cstring>
#include <cstdint>
#include <limits>

namespace mx_binding {
    using namespace org::mariuszgromada::math::mxparser;
    using namespace org::mariuszgromada::math::mxparser::parsertokens;
    using namespace org::mariuszgromada::math::mxparser::mathcollection;
    using emscripten::val;
    using wrapper::BigDecimal;

    // Free numeric Argument validates its name before registration/body creation.
    struct ArgumentConstructionPatternDomain {
        static void check(const StringPtr &name, double) {
            if (name && !ParserSymbol::nameOnlyTokenRegExp)
                throw std::invalid_argument("Native Argument construction requires a non-null validation pattern");
        }
    };

    // Numeric Constant constructors check null name/description before regex use.
    // Existing string conversions happen before this point, as in the factory.
    struct ConstantConstructionPatternDomain {
        static void check(const StringPtr &name, double) {
            if (name && !ParserSymbol::nameOnlyTokenOptBracketsRegExp)
                throw std::invalid_argument("Native Constant construction requires a non-null validation pattern");
        }

        static void check(const StringPtr &name, double, const StringPtr &description) {
            if (name && description && !ParserSymbol::nameOnlyTokenOptBracketsRegExp)
                throw std::invalid_argument("Native Constant construction requires a non-null validation pattern");
        }
    };

    template<class T>
    std::shared_ptr<T> factoryOwner(const std::shared_ptr<T> &pointer) {
        if constexpr (std::is_base_of_v<PrimitiveElement, std::remove_cv_t<T> >)
            return pointer ? std::dynamic_pointer_cast<T>(pointer->shared_from_this()) : nullptr;
        return pointer;
    }

    // std::string in the two original UTF helpers denotes exact bytes. Avoid
    // Embind's text decoder, which would replace malformed input before C++ sees it.
    inline val utf8BytesToWide(val arguments) {
        const val bytes = arguments[0];
        const auto length = bytes["length"].as<unsigned>();
        std::string input(length, '\0');
        for (unsigned i = 0; i < length; i++)input[i] = static_cast<char>(bytes[i].as<unsigned char>());
        return val(UTF8toUTF16(input));
    }

    inline val wideToUtf8Bytes(val arguments) {
        const auto bytes = UTF16toUTF8(arguments[0].as<std::wstring>());
        val output = val::global("Uint8Array").new_(bytes.size());
        for (size_t i = 0; i < bytes.size(); i++)output.set(i, static_cast<unsigned char>(bytes[i]));
        return output;
    }

    template<class T, class Enable=void>
    struct Conversion;

    template<class T>
    struct Conversion<T, std::enable_if_t<std::is_arithmetic_v<T> > > {
        static T read(const val &value) { return value.as<T>(); }
        static val write(T value) { return val(value); }
    };

    // D2: wasm32 long double is binary128. Number would lose native value bits.
    // Transfer only its representation; every operation remains original C++.
    template<>
    struct Conversion<long double> {
        static long double read(const val &value) {
            static_assert(sizeof(long double) == 16 && std::numeric_limits<long double>::digits == 113);
            if (!value.instanceof(val::global("Uint8Array")) || value["length"].as<unsigned>() != 16)
                throw std::invalid_argument("Expected 16 native long-double bytes");
            unsigned char bytes[16];
            for (unsigned i = 0; i < 16; i++)bytes[i] = value[i].as<unsigned char>();
            long double result;
            std::memcpy(&result, bytes, 16);
            return result;
        }

        static val write(long double value) {
            unsigned char bytes[16];
            std::memcpy(bytes, &value, 16);
            val output = val::global("Uint8Array").new_(16);
            for (unsigned i = 0; i < 16; i++)output.set(i, bytes[i]);
            return output;
        }
    };

    // Char is one native wchar_t, exposed as one JS Unicode code point. WASM
    // wchar_t is 32-bit; using the existing wide-string transport avoids narrowing.
    template<>
    struct Conversion<wchar_t> {
        static wchar_t read(const val &value) {
            const auto text = value.as<std::wstring>();
            if (text.size() != 1)throw std::invalid_argument("Expected one native wide character");
            return text[0];
        }

        static val write(wchar_t value) { return val(std::wstring(1, value)); }
    };

    // std::any parameters in the checked-out StringUtils API ignore the held
    // value and invoke the original native fallback. Carry the host value as an
    // ordinary scoped std::any holding emscripten::val, without traversing or mirroring it.
    template<>
    struct Conversion<std::any> {
        static std::any read(const val &value) { return std::any(value); }
    };

    template<class T>
    struct Conversion<T, std::enable_if_t<std::is_enum_v<T> > > {
        static T read(const val &value) { return static_cast<T>(value.as<int>()); }
        static val write(T value) { return val(static_cast<int>(value)); }
    };

    template<>
    struct Conversion<std::wstring> {
        static std::wstring read(const val &value) { return value.as<std::wstring>(); }
        static val write(const std::wstring &value) { return val(value); }
    };

    template<>
    struct Conversion<std::string> {
        static std::string read(const val &value) { return value.as<std::string>(); }
        static val write(const std::string &value) { return val(value); }
    };

    template<>
    struct Conversion<StringPtr> {
        static StringPtr read(const val &value) { return value.isNull() ? nullptr : S(value.as<std::wstring>()); }
        static val write(const StringPtr &value) { return value ? val(*value) : val::null(); }
    };

    template<class T>
    struct Conversion<std::shared_ptr<T> > {
        static std::shared_ptr<T> read(const val &value) {
            if (value.isNull())return nullptr;
            auto pointer = value.as<std::shared_ptr<T> >();
            // Embind BY_EMVAL upcasts create a temporary shared_ptr control block
            // with a JS-handle deleter. Native weak observers must refer to the
            // ORIGINAL factory control block, not that temporary one.
            return factoryOwner(pointer);
        }

        static val write(const std::shared_ptr<T> &value) { return value ? val(value) : val::null(); }
    };

    // BigDecimal is a native value type. Box return-value copies using the existing
    // BigDecimalPtr/std::shared_ptr type; const-reference operands remain native
    // values and every arithmetic operation still invokes the original method.
    template<>
    struct Conversion<BigDecimal> {
        static BigDecimal read(const val &value) {
            const auto object = Conversion<std::shared_ptr<BigDecimal> >::read(value);
            if (!object)throw std::invalid_argument("BigDecimal operand must be non-null");
            return *object;
        }

        static val write(const BigDecimal &value) { return val(std::make_shared<BigDecimal>(value)); }
    };

    // This prototype exposes collection snapshots; live-list alias review remains
    // mandatory before any affected method/field can receive public SUPPORTED.
    template<class T>
    struct Conversion<std::shared_ptr<List<T> > > {
        static ListPtr<T> read(const val &value) {
            if (value.isNull())return nullptr;
            if (!val::global("Array").call<bool>("isArray", value))return value.as<ListPtr<T> >();
            const auto result = new_List<T>();
            const auto count = value["length"].as<int>();
            for (int i = 0; i < count; i++)result->add(Conversion<T>::read(value[i]));
            return result;
        }

        static val write(const ListPtr<T> &value) {
            if (!value)return val::null();
            val result = val::array();
            for (int i = 0; i < value->size(); i++)result.call<void>("push", Conversion<T>::write(value->get(i)));
            return result;
        }
    };

    template<class T>
    struct Conversion<std::shared_ptr<std::vector<T> > > {
        static VectorPtr<T> read(const val &value) {
            if (value.isNull())return nullptr;
            if (!val::global("Array").call<bool>("isArray", value))return value.as<VectorPtr<T> >();
            const auto result = new_Vector<T>();
            const auto count = value["length"].as<int>();
            result->reserve(count);
            for (int i = 0; i < count; i++)result->push_back(Conversion<T>::read(value[i]));
            return result;
        }

        static val write(const VectorPtr<T> &value) {
            if (!value)return val::null();
            val result = val::array();
            for (const auto &element: *value)result.call<void>("push", Conversion<T>::write(element));
            return result;
        }
    };

    template<class T>
    struct Conversion<std::shared_ptr<Array<T> > > {
        static ArrayPtr<T> read(const val &value) {
            if (value.isNull())return nullptr;
            const auto length = value["length"].as<int>();
            const auto result = new_Array<T>(length);
            for (int i = 0; i < length; i++)(*result)(i) = Conversion<T>::read(value[i]);
            return result;
        }

        static val write(const ArrayPtr<T> &value) {
            if (!value)return val::null();
            val result = val::array();
            for (int row = 0; row < value->rows; row++) {
                if (value->columns > 1) {
                    val columns = val::array();
                    for (int column = 0; column < value->columns; column++)columns.call<void>(
                        "push", Conversion<T>::write((*value)(row, column)));
                    result.call<void>("push", columns);
                } else result.call<void>("push", Conversion<T>::write((*value)(row)));
            }
            return result;
        }
    };

    // Read-only native C arrays are copied as structural value snapshots.
    // Each element is read from the original field; no truth table is recreated.
    template<class T, size_t N>
    struct Conversion<T[N]> {
        static val write(const T (&value)[N]) {
            val output = val::array();
            for (size_t i = 0; i < N; i++)output.call<void>("push", Conversion<std::remove_cv_t<T> >::write(value[i]));
            return output;
        }
    };

    // Original Array<T> has standard shared-buffer copy semantics. Keep the owned
    // native factory value alive through its ordinary C++ copy; no JS owner table.
    template<class T>
    struct Conversion<Array<T> > {
        static Array<T> read(const val &value) {
            const auto owned = Conversion<ArrayPtr<T> >::read(value);
            if (!owned)throw std::invalid_argument("Native by-value arrays require non-null coefficients");
            return *owned;
        }
    };

    template<class T>
    using Value = std::remove_cv_t<std::remove_reference_t<T> >;

    template<class R, class F>
    val result(F &&function) {
        if constexpr (std::is_void_v<R>) {
            function();
            return val::undefined();
        } else return Conversion<Value<R> >::write(function());
    }

    template<class... A, size_t... I>
    auto arguments(const val &values, std::index_sequence<I...>) {
        return std::tuple<Value<A>...>{Conversion<Value<A> >::read(values[I])...};
    }

    // Native pointer preconditions only. Preserve defined empty-list branches and
    // nullable setter/getter state; never replace null text with an empty string.
    template<auto Member>
    struct NativeMemberDomain {
        template<class C, class... A>
        static void check(C &, const A &...) {
        }
    };

    // Definition helpers call the original numeric factories. The only added
    // precondition rejects their undefined non-null-name/null-regex path.
    template<class C, class PatternDomain, auto Pattern>
    struct DefinitionConstructionPatternDomain {
        static void check(C &, const StringPtr &name, double value) {
            PatternDomain::check(name, value);
        }

        static void check(C &, const String &name, double value) {
            if (*Pattern)return;
            PatternDomain::check(S(name), value);
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const StringPtr &, double)>(&Argument::defineArgument)> :
            DefinitionConstructionPatternDomain<Argument, ArgumentConstructionPatternDomain, &
                ParserSymbol::nameOnlyTokenRegExp> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const String &, double)>(&Argument::defineArgument)> :
            DefinitionConstructionPatternDomain<Argument, ArgumentConstructionPatternDomain, &
                ParserSymbol::nameOnlyTokenRegExp> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const StringPtr &, double)>(&Argument::defineConstant)> :
            DefinitionConstructionPatternDomain<Argument, ConstantConstructionPatternDomain, &
                ParserSymbol::nameOnlyTokenOptBracketsRegExp> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const String &, double)>(&Argument::defineConstant)> :
            DefinitionConstructionPatternDomain<Argument, ConstantConstructionPatternDomain, &
                ParserSymbol::nameOnlyTokenOptBracketsRegExp> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const StringPtr &, double)>(&
                Expression::defineArgument)> : DefinitionConstructionPatternDomain<Expression,
                ArgumentConstructionPatternDomain, &ParserSymbol::nameOnlyTokenRegExp> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const String &, double)>(&Expression::defineArgument)> :
            DefinitionConstructionPatternDomain<Expression, ArgumentConstructionPatternDomain, &
                ParserSymbol::nameOnlyTokenRegExp> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const StringPtr &, double)>(&
                Expression::defineConstant)> : DefinitionConstructionPatternDomain<Expression,
                ConstantConstructionPatternDomain, &ParserSymbol::nameOnlyTokenOptBracketsRegExp> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const String &, double)>(&Expression::defineConstant)> :
            DefinitionConstructionPatternDomain<Expression, ConstantConstructionPatternDomain, &
                ParserSymbol::nameOnlyTokenOptBracketsRegExp> {
    };

    template<auto Count>
    struct NullableExpressionNameDomain {
        template<class... A>
        static void check(const Expression &self, const StringPtr &name, const A &...) {
            if (!name && std::invoke(Count, self) > 0)
                throw std::invalid_argument(
                    "Native Expression name lookup requires non-null text for a non-empty definition list");
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<int(Expression::*)(const StringPtr &) const>(&Expression::getArgumentIndex)>
            : NullableExpressionNameDomain<&Expression::getArgumentsNumber> {
    };

    template<>
    struct NativeMemberDomain<static_cast<ArgumentPtr(Expression::*)(const StringPtr &) const>(&
                Expression::getArgument)>
            : NullableExpressionNameDomain<&Expression::getArgumentsNumber> {
    };

    template<>
    struct NativeMemberDomain<static_cast<double(Expression::*)(const StringPtr &)>(&Expression::getArgumentValue)>
            : NullableExpressionNameDomain<&Expression::getArgumentsNumber> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const StringPtr &, double)>(&
                Expression::setArgumentValue)>
            : NullableExpressionNameDomain<&Expression::getArgumentsNumber> {
    };

    template<>
    struct NativeMemberDomain<static_cast<int(Expression::*)(const StringPtr &) const>(&Expression::getConstantIndex)>
            : NullableExpressionNameDomain<&Expression::getConstantsNumber> {
    };

    template<>
    struct NativeMemberDomain<static_cast<ConstantPtr(Expression::*)(const StringPtr &) const>(&
                Expression::getConstant)>
            : NullableExpressionNameDomain<&Expression::getConstantsNumber> {
    };

    template<>
    struct NativeMemberDomain<static_cast<int(Expression::*)(const StringPtr &) const>(&Expression::getFunctionIndex)>
            : NullableExpressionNameDomain<&Expression::getFunctionsNumber> {
    };

    template<>
    struct NativeMemberDomain<static_cast<FunctionPtr(Expression::*)(const StringPtr &) const>(&
                Expression::getFunction)>
            : NullableExpressionNameDomain<&Expression::getFunctionsNumber> {
    };

    struct RequiredExpressionTextDomain {
        static void check(Expression &self) {
            if (!self.getExpressionString())
                throw std::invalid_argument("Native Expression operation requires non-null stored expression text");
        }
    };

    template<>
    struct NativeMemberDomain<&Expression::checkLexSyntax> : RequiredExpressionTextDomain {
    };

    template<>
    struct NativeMemberDomain<&Expression::getCanonicalExpressionString> : RequiredExpressionTextDomain {
    };

    template<>
    struct NativeMemberDomain<&Expression::getCopyOfInitialTokens> : RequiredExpressionTextDomain {
    };

    template<>
    struct NativeMemberDomain<&Expression::consolePrintCopyOfInitialTokens> : RequiredExpressionTextDomain {
    };

    template<>
    struct NativeMemberDomain<&Expression::getMissingUserDefinedArguments> : RequiredExpressionTextDomain {
    };

    template<>
    struct NativeMemberDomain<&Expression::getMissingUserDefinedUnits> : RequiredExpressionTextDomain {
    };

    template<>
    struct NativeMemberDomain<&Expression::getMissingUserDefinedFunctions> : RequiredExpressionTextDomain {
    };

    // Guard only the original setter's undefined null dereferences. Fixed and
    // variadic matches use the raw text, as in Function.cpp (no constructor trim).
    inline bool nativeFunctionSetterPatternsReady() {
        return ParserSymbol::functionDefStrRegExp && ParserSymbol::functionVariadicDefStrRegExp
               && ParserSymbol::nameOnlyTokenRegExp && ParserSymbol::constArgDefStrRegExp;
    }

    inline void checkNativeFunctionSetterDefinition(const StringPtr &definition,
                                                    const ListPtr<PrimitiveElementPtr> &elements) {
        if (!definition)throw std::invalid_argument("Native Function.setFunction requires non-null definition text");
        // The original engine now defines null-list failure in addDefinitions.
        // With intact patterns, let the actual setter run (including its state
        // mutation before that exception); retain checks for unsafe null patterns.
        if (nativeFunctionSetterPatternsReady())return;
        if (!ParserSymbol::functionDefStrRegExp)
            throw std::invalid_argument("Native Function.setFunction requires a non-null function-definition pattern");
        if (StringUtils::regexMatch(definition, ParserSymbol::functionDefStrRegExp)) {
            if (!ParserSymbol::nameOnlyTokenRegExp)
                throw std::invalid_argument(
                    "Native Function.setFunction head tokenization requires a non-null name-only pattern");
            if (!elements)return; // Native addDefinitions now throws after head tokenization.
            if (wrapper::VariadicProcessor::paramsPrimitiveElementEmpty && !ParserSymbol::constArgDefStrRegExp) {
                const auto head = new_HeadEqBody(definition);
                for (int i = 1; i < head->headTokens->size(); ++i) {
                    const auto token = head->headTokens->get(i);
                    if (token->tokenTypeId != ParserSymbol::TYPE_ID
                        && !StringUtils::regexMatch(StringUtils::trim(token->tokenStr),
                                                    ParserSymbol::nameOnlyTokenRegExp))
                        throw std::invalid_argument(
                            "Native argument definition requires a non-null constant-argument definition pattern after its name-only check");
                }
            }
        } else {
            if (!ParserSymbol::functionVariadicDefStrRegExp)
                throw std::invalid_argument(
                    "Native Function.setFunction requires a non-null variadic-function pattern after its fixed-function check");
            if (StringUtils::regexMatch(definition, ParserSymbol::functionVariadicDefStrRegExp)) {
                if (!ParserSymbol::nameOnlyTokenRegExp)
                    throw std::invalid_argument(
                        "Native Function.setFunction head tokenization requires a non-null name-only pattern");
                if (!elements)return; // Native addDefinitions now throws after head tokenization.
            }
        }
    }

    template<>
    struct NativeMemberDomain<static_cast<void(Function::*)(const StringPtr &, const ListPtr<PrimitiveElementPtr> &)>(&
                Function::setFunction)> {
        static void check(Function &, const StringPtr &definition, const ListPtr<PrimitiveElementPtr> &elements) {
            checkNativeFunctionSetterDefinition(definition, elements);
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Function::*)(const String &, const ListPtr<PrimitiveElementPtr> &)>(&
                Function::setFunction)> {
        static void check(Function &, const String &definition, const ListPtr<PrimitiveElementPtr> &elements) {
            if (elements && nativeFunctionSetterPatternsReady())return;
            checkNativeFunctionSetterDefinition(S(definition), elements);
        }
    };

    template<auto Member>
    struct MemberCall;

    template<class R, class C, class... A, R(C::*Member)(A...)>
    struct MemberCall<Member> {
        static val call(std::shared_ptr<C> self, val values) {
            auto converted = arguments<A...>(values, std::index_sequence_for<A...>{});
            return std::apply([&](auto &... args) {
                NativeMemberDomain<Member>::check(*self, args...);
                return result<R>([&]()-> R { return std::invoke(Member, *self, args...); });
            }, converted);
        }
    };

    template<class R, class C, class... A, R(C::*Member)(A...) const>
    struct MemberCall<Member> {
        static val call(std::shared_ptr<C> self, val values) {
            auto converted = arguments<A...>(values, std::index_sequence_for<A...>{});
            return std::apply([&](auto &... args) {
                NativeMemberDomain<Member>::check(*self, args...);
                return result<R>([&]()-> R { return std::invoke(Member, *self, args...); });
            }, converted);
        }
    };

    // A native byte-widened wchar_t can lie outside JS's code-point range.
    // Validate the original result before Embind allocates its wire string:
    // UTF32ToString otherwise throws before _embind_register_std_wstring frees it.
    // Do not alter append semantics, stored text, native length, or valid strings.
    template<>
    struct MemberCall<static_cast<StringPtr(wrapper::StringBuilder::*)() const>(&wrapper::StringBuilder::toString)> {
        static val call(std::shared_ptr<wrapper::StringBuilder> self, val) {
            const StringPtr text = self->toString();
            if (text)
                for (const Char ch: *text)
                    if (static_cast<std::make_unsigned_t<Char>>(ch) > 0x10ffffu)
                        throw std::range_error(
                            "Native StringBuilder text contains a wide character outside the JavaScript code point range");
            return Conversion<StringPtr>::write(text);
        }
    };

    // Native preconditions only; every defined formatting/parsing call remains original.
    template<auto Function>
    struct NumericUtilityDomain {
        template<class... A>
        static void check(const A &...) {
        }
    };


    // Only undefined native pointer/arithmetic domains are rejected. Sorting and
    // all query/tag/case matching remain the single original ExpressionUtils call.
    template<>
    struct NumericUtilityDomain<static_cast<ListPtr<KeyWordPtr>(*)(const StringPtr &, const ListPtr<KeyWordPtr> &)>(&
                expressionutils::ExpressionUtils::getKeyWords)> {
        static void check(const StringPtr &, const ListPtr<KeyWordPtr> &keywords) {
            if (!keywords)throw std::invalid_argument("Native keyword query requires a non-null keyword list");
            for (const auto &keyword: *keywords) {
                if (!keyword)throw std::invalid_argument("Native keyword query requires non-null keyword entries");
                if (!keyword->wordString || !keyword->description || !keyword->syntax || !keyword->since)
                    throw std::invalid_argument("Native keyword query requires non-null keyword text fields");
                if (keywords->size() > 1) {
                    const std::int64_t type = std::int64_t(keyword->wordTypeId) * 1000000;
                    const std::int64_t id = std::int64_t(keyword->wordId) * 1000;
                    if (type < Integer::MIN_VALUE || type > Integer::MAX_VALUE || id < Integer::MIN_VALUE || id >
                        Integer::MAX_VALUE
                        || type + id < Integer::MIN_VALUE || type + id > Integer::MAX_VALUE)
                        throw std::out_of_range(
                            "Native keyword comparator requires representable signed32 intermediates");
                }
                // StringModel's public null setter is a no-op; do not expose its
                // private field. Only the actual native type descriptor is read.
                if (!parsertokens::Token::getTokenTypeDescription(keyword->wordTypeId))
                    throw std::invalid_argument("Native keyword query requires a non-null selected type description");
            }
        }
    };


    using NativeKeywordQueryDomain = NumericUtilityDomain<static_cast<ListPtr<KeyWordPtr>(*)(
        const StringPtr &, const ListPtr<KeyWordPtr> &)>(&expressionutils::ExpressionUtils::getKeyWords)>;

    struct NativeHelpTxtDomain {
        static void check(const StringPtr &query, const ListPtr<KeyWordPtr> &keywords, bool header, bool caption,
                          const StringPtr &text) {
            const auto resources = StringModel::getStringResources();
            if (caption && (!text || text->empty())) {
                // Delegate the original earlier, defined buildHelpCaption/append exceptions.
                if (!query)return;
                if (query->empty() && !resources->ALL_HELP_CONTENT)return;
                if (!query->empty() && !resources->HELP_CONTENT_LIMITED_TO_QUERY)
                    throw std::invalid_argument("Native help caption requires non-null selected query label");
            }
            if (header && (!resources->KEYWORD || !resources->TYPE || !resources->SYNTAX || !resources->SINCE))
                throw std::invalid_argument("Native TXT spacing requires non-null selected header labels");
            NativeKeywordQueryDomain::check(query, keywords);
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, const ListPtr<KeyWordPtr> &, bool, bool,
                                                         const StringPtr &)>(&
                expressionutils::ExpressionUtils::getHelp)> : NativeHelpTxtDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, const ListPtr<KeyWordPtr> &)>(&
                expressionutils::ExpressionUtils::getHelp)> {
        static void check(const StringPtr &q, const ListPtr<KeyWordPtr> &list) {
            NativeHelpTxtDomain::check(q, list, true, true, StringInvariant::EMPTY);
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const ListPtr<KeyWordPtr> &, const StringPtr &,
                                                         const StringPtr &, bool,
                                                         const StringPtr &)>(&
                expressionutils::ExpressionUtils::getHelpAsCsv)> {
        static void check(const ListPtr<KeyWordPtr> &list, const StringPtr &, const StringPtr &, bool,
                          const StringPtr &q) { NativeKeywordQueryDomain::check(q, list); }
    };

    struct NativeHelpHtmlDomain {
        static void check(const ListPtr<KeyWordPtr> &list, bool, bool caption, bool, const StringPtr &q,
                          const StringPtr &text, const StringPtr &) {
            NativeKeywordQueryDomain::check(q, list);
            // Native HTML selects a caption even when its output flag is false.
            if ((!text || text->empty()) && q) {
                const auto r = StringModel::getStringResources();
                if ((!q->empty() && !r->HELP_CONTENT_LIMITED_TO_QUERY) || (
                        q->empty() && caption && !r->ALL_HELP_CONTENT))
                    throw std::invalid_argument("Native HTML caption concatenation requires non-null selected label");
            }
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const ListPtr<KeyWordPtr> &, bool, bool, bool,
                                                         const StringPtr &, const StringPtr &,
                                                         const StringPtr &)>(&
                expressionutils::ExpressionUtils::getHelpAsHtmlTable)> : NativeHelpHtmlDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const ListPtr<KeyWordPtr> &, bool, const StringPtr &)>(&
                expressionutils::ExpressionUtils::getHelpAsHtmlTable)> {
        static void check(const ListPtr<KeyWordPtr> &list, bool header, const StringPtr &q) {
            NativeHelpHtmlDomain::check(list, header, true, false, q, StringInvariant::EMPTY, StringInvariant::EMPTY);
        }
    };

    struct NativeHelpMarkdownDomain {
        static void check(const ListPtr<KeyWordPtr> &list, bool, bool caption, const StringPtr &q,
                          const StringPtr &text) {
            NativeKeywordQueryDomain::check(q, list);
            if (caption && (!text || text->empty()) && q) {
                const auto r = StringModel::getStringResources();
                if ((!q->empty() && !r->HELP_CONTENT_LIMITED_TO_QUERY) || (q->empty() && !r->ALL_HELP_CONTENT))
                    throw std::invalid_argument(
                        "Native Markdown caption concatenation requires non-null selected label");
            }
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const ListPtr<KeyWordPtr> &, bool, bool, const StringPtr &,
                                                         const StringPtr &)>(&
                expressionutils::ExpressionUtils::getHelpAsMarkdownTable)> : NativeHelpMarkdownDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const ListPtr<KeyWordPtr> &, const StringPtr &)>(&
                expressionutils::ExpressionUtils::getHelpAsMarkdownTable)> {
        static void check(const ListPtr<KeyWordPtr> &list, const StringPtr &q) {
            NativeHelpMarkdownDomain::check(list, true, true, q, StringInvariant::EMPTY);
        }
    };


    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const ListPtr<KeyWordPtr> &, bool, const StringPtr &,
                                                         const StringPtr &)>(&
                expressionutils::ExpressionUtils::getHelpAsJson)> {
        static void check(const ListPtr<KeyWordPtr> &list, bool caption, const StringPtr &query,
                          const StringPtr &text) {
            NativeKeywordQueryDomain::check(query, list);
            if (caption && (!text || text->empty()) && query && !query->empty() && !StringModel::getStringResources()->
                HELP_CONTENT_LIMITED_TO_QUERY)
                throw std::invalid_argument("Native JSON caption concatenation requires non-null selected query label");
            // Reached JSON key/value NULL states are handled by the repaired native
            // helper. Do not precompute filtering or reject safe filtered-empty output.
        }
    };

    // Undefined native StringPtr concatenation domains only; keyword construction stays native.
    struct ParserKeyWordConstructionDomain {
        static void require(const StringPtr &value) {
            if (!value)throw std::invalid_argument("Native Unicode keyword descriptions require non-null text");
        }

        static void check(bool parserOnly, bool, bool unicode) {
            if (!unicode)return;
            require(ParserSymbol::UNICODE_MATH_DESC);
            require(Operator::MULTIPLY_DESC);
            require(Operator::DIVIDE_DESC);
            require(Operator::SQUARE_ROOT_DESC);
            require(Operator::CUBE_ROOT_DESC);
            require(Operator::FOURTH_ROOT_DESC);
            require(BooleanOperator::NEG_DESC);
            require(BooleanOperator::AND_DESC);
            require(BooleanOperator::NAND_DESC);
            require(BooleanOperator::OR_DESC);
            require(BooleanOperator::NOR_DESC);
            require(BooleanOperator::XOR_DESC);
            require(BooleanOperator::IMP_DESC);
            require(BooleanOperator::NIMP_DESC);
            require(BooleanOperator::CIMP_DESC);
            require(BooleanOperator::CNIMP_DESC);
            require(BooleanOperator::EQV_DESC);
            require(BinaryRelation::NEQ_DESC);
            require(BinaryRelation::LEQ_DESC);
            require(BinaryRelation::GEQ_DESC);
            if (!parserOnly) {
                require(CalculusOperator::SUM_DESC);
                require(CalculusOperator::PROD_DESC);
                require(CalculusOperator::INT_DESC);
                require(CalculusOperator::DER_DESC);
                require(CalculusOperator::DER_LEFT_DESC);
                require(CalculusOperator::DER_RIGHT_DESC);
                require(CalculusOperator::FORW_DIFF_DESC);
                require(CalculusOperator::BACKW_DIFF_DESC);
                require(ConstantValue::PI_DESC);
                require(ConstantValue::EULER_DESC);
            }
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<ListPtr<KeyWordPtr>(*)(bool, bool, bool)>(&
                expressionutils::ExpressionUtils::makeParserKeyWords)> : ParserKeyWordConstructionDomain {
    };

    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::makeAllParserKeyWords> {
        static void check() { ParserKeyWordConstructionDomain::check(false, false, true); }
    };

    // Scalar defineArguments uses the original definition parser and its mutable
    // default primitive-element pack. Guard only the next undefined null regex.
    template<class C>
    struct SingleArgumentDefinitionPatternDomain {
        static bool ordinary() { return ParserSymbol::nameOnlyTokenRegExp && ParserSymbol::constArgDefStrRegExp; }

        static void check(C &self, const StringPtr &definition) {
            if (ordinary() || !definition)return;
            if constexpr (std::is_same_v<C, Function>)if (self.getFunctionBodyType() != Function::BODY_RUNTIME)return;
            if (!wrapper::VariadicProcessor::paramsPrimitiveElementEmpty)return;
            if (!ParserSymbol::nameOnlyTokenRegExp)
                throw std::invalid_argument("Native argument definition requires non-null name-only pattern");
            if (ParserSymbol::constArgDefStrRegExp)return;
            if (stringutils::StringUtils::regexMatch(stringutils::StringUtils::trim(definition),
                                                     ParserSymbol::nameOnlyTokenRegExp))return;
            throw std::invalid_argument(
                "Native argument definition requires non-null constant-argument definition pattern after its name-only check");
        }

        static void check(C &self, const String &definition) { if (!ordinary())check(self, S(definition)); }
        static void check(C &self, const std::string &definition) { if (!ordinary())check(self, S(definition)); }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const StringPtr &)>(&
                Argument::defineArguments)> : SingleArgumentDefinitionPatternDomain<Argument> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Argument::*)(const std::string &)>(&
                Argument::defineArguments)> : SingleArgumentDefinitionPatternDomain<Argument> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const StringPtr &)>(&
                Expression::defineArguments)> : SingleArgumentDefinitionPatternDomain<Expression> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Expression::*)(const String &)>(&
                Expression::defineArguments)> : SingleArgumentDefinitionPatternDomain<Expression> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Function::*)(const StringPtr &)>(&
                Function::defineArguments)> : SingleArgumentDefinitionPatternDomain<Function> {
    };

    template<>
    struct NativeMemberDomain<static_cast<void(Function::*)(const String &)>(&
                Function::defineArguments)> : SingleArgumentDefinitionPatternDomain<Function> {
    };

    // These six native resource constructors concatenate the mutable NEW_LINE
    // pointer. Guard only its undefined null domain; English/Chinese and unknown
    // locale fallbacks retain the original safe behavior. Locale normalization
    // remains the original C++ getLanguageIso, not a second JS selector.
    inline void requireResourceNewLine() {
        if (!StringInvariant::NEW_LINE)
            throw std::invalid_argument("Native localized resources require non-null StringInvariant.NEW_LINE");
    }

    inline void requireResourceNewLineForIso(const std::string &iso) {
        if (iso == "fr" || iso == "de" || iso == "it" || iso == "pl" || iso == "pt" || iso == "es")
            requireResourceNewLine();
    }

    inline void checkResourceLocaleNewLine(const StringPtr &language) {
        if (StringInvariant::NEW_LINE || !language)return;
        requireResourceNewLineForIso(StringResources::getLanguageIso(UTF16toUTF8(*language)));
    }

    inline void checkResourceLocaleNewLine(const String &language) {
        if (StringInvariant::NEW_LINE)return;
        requireResourceNewLineForIso(StringResources::getLanguageIso(UTF16toUTF8(language)));
    }

    // countOccurrences uses EMPTY only after its defined null/length returns.
    struct OccurrenceCountEmptyDomain {
        static void check(const StringPtr &text, const StringPtr &needle) {
            if (StringInvariant::EMPTY || !text || !needle)return;
            const size_t textLength = text->length(), needleLength = needle->length();
            if (textLength == 0 || needleLength == 0 || needleLength > textLength)return;
            throw std::invalid_argument("Native occurrence counting requires non-null EMPTY after its length guards");
        }

        static void check(const String &text, const String &needle) {
            if (StringInvariant::EMPTY)return;
            check(S(text), S(needle));
        }

        static void check(const std::string &text, const std::string &needle) {
            if (StringInvariant::EMPTY)return;
            check(S(text), S(needle));
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<int(*)(const StringPtr &, const StringPtr &)>(&
                StringUtils::countOccurrences)> : OccurrenceCountEmptyDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<int(*)(const String &, const String &)>(&
                StringUtils::countOccurrences)> : OccurrenceCountEmptyDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<int(*)(const std::string &, const std::string &)>(&
                StringUtils::countOccurrences)> : OccurrenceCountEmptyDomain {
    };

    struct ResourceNewLineDomain {
        static void check() { requireResourceNewLine(); }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringResourcesPtr(*)()>(&
                StringResources::languageFrench)> : ResourceNewLineDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringResourcesPtr(*)()>(&
                StringResources::languageGerman)> : ResourceNewLineDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringResourcesPtr(*)()>(&
                StringResources::languageItalian)> : ResourceNewLineDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringResourcesPtr(*)()>(&
                StringResources::languagePolish)> : ResourceNewLineDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringResourcesPtr(*)()>(&
                StringResources::languagePortuguese)> : ResourceNewLineDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringResourcesPtr(*)()>(&
                StringResources::languageSpanish)> : ResourceNewLineDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringResourcesPtr(*)(const StringPtr &)>(&
                StringResources::bestMatchingLanguage)> {
        static void check(const StringPtr &language) { checkResourceLocaleNewLine(language); }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringResourcesPtr(*)(const String &)>(&
                StringResources::bestMatchingLanguage)> {
        static void check(const String &language) { checkResourceLocaleNewLine(language); }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringResourcesPtr(*)()>(&StringResources::bestMatchingLanguage)> {
        static void check() {
            if (StringInvariant::NEW_LINE)return;
            requireResourceNewLineForIso(StringResources::getLanguageIso(wrapper::SystemUtils::getDefaultOsLanguage()));
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<void(*)(const StringPtr &)>(&mXparser::changeLanguageTo)> {
        static void check(const StringPtr &language) { checkResourceLocaleNewLine(language); }
    };

    template<>
    struct NumericUtilityDomain<static_cast<void(*)(const String &)>(&mXparser::changeLanguageTo)> {
        static void check(const String &language) { checkResourceLocaleNewLine(language); }
    };

    template<>
    struct NumericUtilityDomain<static_cast<std::string(*)(double, int, int)>(&Double::decimalFormat)> {
        static void check(double value, int, int precisionChange) {
            const std::int64_t sum = static_cast<std::int64_t>(Double::maxPossibleDecimalPrecision(value))
                                     + static_cast<std::int64_t>(precisionChange);
            if (sum < std::numeric_limits<int>::min() || sum > std::numeric_limits<int>::max())
                throw std::out_of_range("Native decimalFormat precision addition exceeds int range");
        }
    };

    struct IntegerParseBaseDomain {
        template<class T>
        static void check(const T &, int base) {
            if (base != 0 && (base < 2 || base > 36))
                throw std::invalid_argument("Native Integer.parseInt requires base 0 or 2 through 36");
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<int(*)(const String &, int)>(&Integer::parseInt)> : IntegerParseBaseDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<int(*)(const StringPtr &, int)>(&
                Integer::parseInt)> : IntegerParseBaseDomain {
    };

    // Guard only undefined native pointer dereferences. The original functions
    // still compute all strings/levels; defined native exceptions retain precedence.
    // NumberTheory forwards to regexMatch, which dereferences this pointer.
    template<>
    struct NumericUtilityDomain<static_cast<int(*)(const StringPtr &)>(&
                mathcollection::NumberTheory::getNumeralSystemBase)> {
        static void check(const StringPtr &value) {
            if (!value)throw std::invalid_argument("Native numeral-base recognition requires non-null text");
        }
    };

    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::getNumeralSystemBaseFromBaseInd> {
        static void check(const StringPtr &value) {
            if (!value)throw std::invalid_argument("Native base indicator must be non-null");
        }
    };

    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::evaluateTokensLevels> {
        static void check(const ListPtr<TokenPtr> &values) {
            if (!values)throw std::invalid_argument("Native token levels require a non-null list");
            for (int i = 0; i < values->size(); i++)
                if (!values->getRef(i))throw std::invalid_argument("Native token levels require non-null tokens");
        }
    };

    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::tokensListToString> {
        static void check(const ListPtr<TokenPtr> &values) {
            if (!values)return;
            for (int i = 0; i < values->size(); i++) {
                const TokenPtr &current = values->getRef(i);
                const TokenPtr previous = i > 0 ? values->getRef(i - 1) : nullptr;
                if (!current && previous && !Token::isLeftParenthesis(previous) &&
                    !Token::isParameterSeparator(previous) && !Token::isBinaryOperator(previous) &&
                    !Token::isUnaryLeftOperator(previous) && !Token::isUnaryRightOperator(previous) &&
                    !Token::isUnicodeRootOperator(previous) && !Token::isRightParenthesis(previous))
                    throw std::invalid_argument("Native token string would dereference a null token");
                // Original append throws here. Do not inspect a later undefined
                // pointer and replace this earlier defined native exception.
                if (current && !Token::isNumber(current) && !current->tokenStr)return;
            }
        }
    };

    // The parameter helper can terminate before later nulls. Stop preflight at
    // an earlier defined append exception so the original function reports it.
    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::getFunctionParameters> {
        static void check(int pos, const ListPtr<TokenPtr> &values) {
            if (pos > std::numeric_limits<int>::max() - 2)
                throw std::out_of_range("Native function parameter position addition exceeds int range");
            if (!values)throw std::invalid_argument("Native function parameters require a non-null list");
            const TokenPtr &opening = values->getRef(pos + 1);
            if (!opening)throw std::invalid_argument("Native function parameter level token must be non-null");
            const int level = opening->tokenLevel;
            for (int index = pos + 2;; index++) {
                const TokenPtr &current = values->getRef(index);
                if (!current)throw std::invalid_argument("Native function parameters would dereference a null token");
                const bool delimiter = current->tokenLevel == level && current->tokenTypeId == ParserSymbol::TYPE_ID;
                if (delimiter && current->tokenId == ParserSymbol::RIGHT_PARENTHESES_ID)return;
                if (!(delimiter && current->tokenId == ParserSymbol::COMMA_ID) && !current->tokenStr)return;
            }
        }
    };

    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::getCopyOfInitialTokens> {
        static void check(const StringPtr &expression, const ListPtr<TokenPtr> &values) {
            if (!expression)throw std::invalid_argument("Native token copying requires a non-null expression string");
            if (expression->empty())return;
            if (!values)throw std::invalid_argument(
                "Native token copying requires a non-null list for a nonempty string");
            for (int i = 0; i < values->size(); i++) {
                const TokenPtr &current = values->getRef(i);
                if (!current)throw std::invalid_argument(
                    "Native token copying requires non-null tokens for a nonempty string");
                if (current->tokenTypeId == Token::NOT_MATCHED && !current->tokenStr)
                    throw std::invalid_argument("Native unmatched token classification requires non-null token text");
            }
        }
    };

    // Mutating keyword helpers use the caller's native List. Null metadata fields
    // are valid except for pointers actually dereferenced by the Unicode addition.
    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::addUDFSpecificParserKeyWords> {
        static void check(const ListPtr<KeyWordPtr> &target) {
            if (!target)throw std::invalid_argument("Native UDF keyword addition requires a non-null target list");
        }
    };

    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::addKeyWord> {
        static void check(const StringPtr &, const StringPtr &, int, const StringPtr &, const StringPtr &, int,
                          const ListPtr<KeyWordPtr> &target) {
            if (!target)throw std::invalid_argument("Native keyword addition requires a non-null target list");
        }
    };

    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::addKeyWordUnicode> {
        static void check(const StringPtr &, const StringPtr &description, int, const StringPtr &, const StringPtr &,
                          int, bool enabled, const ListPtr<KeyWordPtr> &target) {
            if (!enabled)return;
            if (!description || !ParserSymbol::UNICODE_MATH_DESC)
                throw std::invalid_argument(
                    "Native Unicode keyword addition requires non-null description and Unicode suffix");
            if (!target)throw std::invalid_argument("Native Unicode keyword addition requires a non-null target list");
        }
    };

    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::addParserKeyWords> {
        static void check(bool parserOnly, bool udf, bool unicode, const ListPtr<KeyWordPtr> &target) {
            if (!target)throw std::invalid_argument("Native parser keyword addition requires a non-null target list");
            if (!expressionutils::ExpressionUtils::getBaseKeyWordsList(parserOnly, udf, unicode))
                throw std::invalid_argument("Native parser keyword addition requires a non-null selected cache list");
        }
    };

    // Empty definition lists return before the native helper touches its target.
    // The inspected getters are non-virtual field reads and do not evaluate values.
    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::addArgumentsKeyWords> {
        static void check(const ListPtr<ArgumentPtr> &source, const ListPtr<KeyWordPtr> &target) {
            if (!source)throw std::invalid_argument("Native argument keywords require a non-null source list");
            if (source->isEmpty())return;
            if (!target)throw std::invalid_argument(
                "Native argument keywords require a non-null target for nonempty source");
            for (int i = 0; i < source->size(); i++) {
                const ArgumentPtr &argument = source->get(i);
                if (!argument)throw std::invalid_argument("Native argument keywords require non-null source elements");
                if (argument->getArgumentType() == Argument::RECURSIVE_ARGUMENT && !argument->getArgumentName())
                    throw std::invalid_argument("Native recursive argument keyword syntax requires a non-null name");
            }
        }
    };

    template<>
    struct NumericUtilityDomain<&expressionutils::ExpressionUtils::addConstantsKeyWords> {
        static void check(const ListPtr<ConstantPtr> &source, const ListPtr<KeyWordPtr> &target) {
            if (!source)throw std::invalid_argument("Native constant keywords require a non-null source list");
            if (source->isEmpty())return;
            if (!target)throw std::invalid_argument(
                "Native constant keywords require a non-null target for nonempty source");
            for (int i = 0; i < source->size(); i++)
                if (!source->getRef(i))throw std::invalid_argument(
                    "Native constant keywords require non-null source elements");
        }
    };

    // Direct originalStringUtils predicates; guard only immediateundefined
    // shared-string dereferences. Original std::regex_error still propagates.
    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(const StringPtr &, const StringPtr &)>(&
                stringutils::StringUtils::regexMatch)> {
        static void check(const StringPtr &value, const StringPtr &pattern) {
            if (!value || !pattern)throw std::invalid_argument("Native regexMatch requires non-null text and pattern");
        }
    };

    // Reuse the already tested StringUtils null-regex precondition and diagnostic.
    using RequiredRegexOperandsDomain = NumericUtilityDomain<static_cast<bool(*)(const StringPtr &, const StringPtr &)>(
        &stringutils::StringUtils::regexMatch)>;

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(const StringPtr &, const StringPtr &)>(&
                mXparser::regexMatch)> : RequiredRegexOperandsDomain {
    };

    struct RequiredContainsOperandsDomain {
        static void reject() {
            throw std::invalid_argument("Native substring search requires non-null StringPtr operands");
        }

        template<class A, class B>
        static void check(const A &text, const B &part) {
            if constexpr (std::is_same_v<std::decay_t<A>, StringPtr>)if (!text)reject();
            if constexpr (std::is_same_v<std::decay_t<B>, StringPtr>)if (!part)reject();
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(const String &, const StringPtr &)>(&
                stringutils::StringUtils::contains)> : RequiredContainsOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(const StringPtr &, const String &)>(&
                stringutils::StringUtils::contains)> : RequiredContainsOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(const StringPtr &, const StringPtr &)>(&
                stringutils::StringUtils::contains)> : RequiredContainsOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<bool(*)(const StringPtr &, const std::string &)>(&
                stringutils::StringUtils::contains)> {
        static void check(const StringPtr &text, const std::string &part) {
            if (!text) {
                (void) SC(part);
                RequiredContainsOperandsDomain::reject();
            }
        }
    };

    template<>
    struct NumericUtilityDomain<&stringutils::StringUtils::charIsLeftParenthesis> {
        static void check(const StringPtr &value, int) {
            if (!value)throw std::invalid_argument("Native charIsLeftParenthesis requires non-null text");
        }
    };

    // Preserve the original empty-text return before mutableNEW_LINE is used.
    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &)>(&
                stringutils::StringUtils::cleanNewLineAtTheEnd)> {
        static void check(const StringPtr &value) {
            if (!value)throw std::invalid_argument("Native cleanNewLineAtTheEnd requires non-null text");
            if (!value->empty() && !stringutils::StringInvariant::NEW_LINE)
                throw std::invalid_argument("Native cleanNewLineAtTheEnd requires non-null NEW_LINE for nonempty text");
        }
    };

    // Original decoration/alignment functions; only undefined pointer inputs are guarded.
    template<>
    struct NumericUtilityDomain<&stringutils::StringUtils::surroundBrackets> {
        static void check(const StringPtr &text) {
            if (!text || !stringutils::StringInvariant::LEFT_BRACKET || !stringutils::StringInvariant::RIGHT_BRACKET)
                throw std::invalid_argument("Native surroundBrackets requires non-null text and delimiter values");
        }
    };

    template<>
    struct NumericUtilityDomain<&stringutils::StringUtils::surroundBracketsAddSpace> {
        static void check(const StringPtr &text) {
            if (!text || !stringutils::StringInvariant::LEFT_BRACKET || !stringutils::StringInvariant::RIGHT_BRACKET ||
                !stringutils::StringInvariant::SPACE)throw std::invalid_argument(
                "Native surroundBracketsAddSpace requires non-null text and delimiter values");
        }
    };

    template<>
    struct NumericUtilityDomain<&stringutils::StringUtils::surroundApostrophe> {
        static void check(const StringPtr &text) {
            if (!text || !stringutils::StringInvariant::APOSTROPHE)throw std::invalid_argument(
                "Native surroundApostrophe requires non-null text and delimiter values");
        }
    };

    template<>
    struct NumericUtilityDomain<&stringutils::StringUtils::surroundApostropheAddSpace> {
        static void check(const StringPtr &text) {
            if (!text || !stringutils::StringInvariant::APOSTROPHE || !stringutils::StringInvariant::SPACE)throw
                    std::invalid_argument(
                        "Native surroundApostropheAddSpace requires non-null text and delimiter values");
        }
    };

    template<>
    struct NumericUtilityDomain<&stringutils::StringUtils::surroundQuote> {
        static void check(const StringPtr &text) {
            if (!text || !stringutils::StringInvariant::QUOTE)throw std::invalid_argument(
                "Native surroundQuote requires non-null text and delimiter values");
        }
    };

    template<>
    struct NumericUtilityDomain<&stringutils::StringUtils::surroundQuoteAddSpace> {
        static void check(const StringPtr &text) {
            if (!text || !stringutils::StringInvariant::QUOTE || !stringutils::StringInvariant::SPACE)throw
                    std::invalid_argument("Native surroundQuoteAddSpace requires non-null text and delimiter values");
        }
    };

    template<>
    struct NumericUtilityDomain<&stringutils::StringUtils::getLeftSpaces> {
        static void check(const StringPtr &maxText, const StringPtr &text) {
            if (!maxText || !text)throw std::invalid_argument("Native getLeftSpaces requires non-null text arguments");
            // Preserve early return and the original StringBuilder.append exception for null SPACE.
        }
    };

    template<>
    struct NumericUtilityDomain<&stringutils::StringUtils::getRightSpaces> {
        static void check(const StringPtr &maxText, const StringPtr &text) {
            if (!maxText || !text)throw std::invalid_argument("Native getRightSpaces requires non-null text arguments");
            // Preserve early return and the original StringBuilder.append exception for null SPACE.
        }
    };

    // Exact std::string bytes, including embedded NUL and malformed UTF-8,
    // must reach the ORIGINAL native decoder. This per-call value has no retained
    // pointer, registry or host-side text conversion. Only the ten marked overloads
    // use it; established std::string conversions remain unchanged.
    template<class A>
    class OwnedNativeNarrowStringArgument {
        static_assert(std::is_same_v<A, const std::string &> || std::is_same_v<A, const std::string *>);
        bool nullValue;
        std::string storage;

    public:
        explicit OwnedNativeNarrowStringArgument(const val &input) : nullValue(input.isNull()) {
            if (nullValue)return;
            if (!input.instanceof(val::global("Uint8Array")))
                throw std::invalid_argument("Native std::string bytes require Uint8Array");
            const auto length = input["length"].as<unsigned>();
            storage.resize(length);
            for (unsigned i = 0; i < length; i++)storage[i] = static_cast<char>(input[i].as<unsigned char>());
        }

        A get() const {
            if (nullValue)throw std::invalid_argument("Native StringUtils std::string input requires non-null bytes");
            if constexpr (std::is_pointer_v<A>)return &storage;
            else return storage;
        }
    };

    template<auto Function>
    struct NativeNarrowStringStaticCall;

    template<class R, class A, R(*Function)(A)>
    struct NativeNarrowStringStaticCall<Function> {
        static val call(val values) {
            const OwnedNativeNarrowStringArgument<A> input(values[0]);
            return result<R>([&]()-> R { return std::invoke(Function, input.get()); });
        }
    };

    // Native numeric factories own all construction/post-sync behavior. Only
    // byte-to-std::string argument storage is adapted; no body/definition graph is
    // duplicated. String lvalues in the tuple select the exact reviewed overload.
    struct ArgumentNarrowFactoryDomain {
        template<class Numeric>
        static void check(const std::string &name, Numeric value) {
            if (!ParserSymbol::nameOnlyTokenRegExp)ArgumentConstructionPatternDomain::check(S(name), value);
        }
    };

    struct ConstantNarrowFactoryDomain {
        template<class Numeric>
        static void check(const std::string &name, Numeric value) {
            if (!ParserSymbol::nameOnlyTokenOptBracketsRegExp)ConstantConstructionPatternDomain::check(S(name), value);
        }

        template<class Numeric>
        static void check(const std::string &name, Numeric value, const std::string &description) {
            if (!ParserSymbol::nameOnlyTokenOptBracketsRegExp)ConstantConstructionPatternDomain::check(
                S(name), value, S(description));
        }
    };

    struct ConstantNarrowDefinitionFactoryDomain {
        template<class Numeric>
        static void check(const std::string &definition, Numeric) {
            if (!ParserSymbol::constUnitgDefStrRegExp) {
                // Preserve the original decoder's defined errors before this
                // undefined null-pattern domain. The original variadic factory
                // remains responsible for diagnostics, parsing and post-sync.
                const auto decoded = S(definition);
                if (decoded)throw std::invalid_argument(
                    "Native Constant definition construction requires a non-null constant-definition pattern");
            }
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<ArgumentPtr(*)(const std::string &, double)>(&
                new_Argument)> : ArgumentNarrowFactoryDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ArgumentPtr(*)(std::string &, double)>(&
                new_Argument)> : ArgumentNarrowFactoryDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ArgumentPtr(*)(const std::string &, int)>(&
                new_Argument)> : ArgumentNarrowFactoryDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ArgumentPtr(*)(std::string &, int)>(&
                new_Argument)> : ArgumentNarrowFactoryDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const std::string &, double)>(&
                new_Constant)> : ConstantNarrowFactoryDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(std::string &, double)>(&
                new_Constant)> : ConstantNarrowDefinitionFactoryDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const std::string &, int)>(&
                new_Constant)> : ConstantNarrowFactoryDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(std::string &, int)>(&
                new_Constant)> : ConstantNarrowDefinitionFactoryDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const std::string &, double, const std::string &)>(&
                new_Constant)> : ConstantNarrowFactoryDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(std::string &, double, std::string &)>(&
                new_Constant)> : ConstantNarrowFactoryDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(const std::string &, int, const std::string &)>(&
                new_Constant)> : ConstantNarrowFactoryDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<ConstantPtr(*)(std::string &, int, std::string &)>(&
                new_Constant)> : ConstantNarrowFactoryDomain {
    };

    template<class A>
    Value<A> readNativeNarrowFactoryArgument(const val &value) {
        if constexpr (std::is_same_v<Value<A>, std::string>) {
            const OwnedNativeNarrowStringArgument<const std::string &> input(value);
            return input.get();
        } else return Conversion<Value<A> >::read(value);
    }

    template<class... A, size_t... I>
    auto nativeNarrowFactoryArguments(const val &values, std::index_sequence<I...>) {
        return std::tuple<Value<A>...>{readNativeNarrowFactoryArgument<A>(values[I])...};
    }

    template<auto Function>
    struct NativeNarrowFactoryCall;

    template<class R, class... A, R(*Function)(A...)>
    struct NativeNarrowFactoryCall<Function> {
        static val call(val values) {
            auto converted = nativeNarrowFactoryArguments<A...>(values, std::index_sequence_for<A...>{});
            return std::apply([&](auto &... args) {
                NumericUtilityDomain<Function>::check(args...);
                return result<R>([&]()-> R { return std::invoke(Function, args...); });
            }, converted);
        }
    };

    // The original concatenation operators dereference only their StringPtr
    // operands. A null narrow C-string is defined by native SC as empty text.
    // Reject only the undefined StringPtr domain; preserve all native codecs,
    // numeric operation order, input values and fresh-result allocation.
    struct StringConcatenationOperandsDomain {
        static void checkOne(const StringPtr &text) {
            if (!text)throw std::invalid_argument("Native string concatenation requires non-null StringPtr operands");
        }

        template<class T>
        static void checkOne(const T &) {
        }

        template<class... A>
        static void check(const A &... args) { (checkOne(args), ...); }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, const StringPtr &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, const String &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const String &, const StringPtr &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, const std::string &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
        static void check(const StringPtr &a0, const std::string &a1) {
            if (!a0) {
                SC(a1);
                StringConcatenationOperandsDomain::checkOne(a0);
            }
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const std::string &, const StringPtr &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
        static void check(const std::string &a0, const StringPtr &a1) {
            if (!a1) {
                SC(a0);
                StringConcatenationOperandsDomain::checkOne(a1);
            }
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, const char *)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
        static void check(const StringPtr &a0, const char *a1) {
            if (!a0) {
                SC(a1);
                StringConcatenationOperandsDomain::checkOne(a0);
            }
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const char *&, const StringPtr &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
        static void check(const char *&a0, const StringPtr &a1) {
            if (!a1) {
                SC(a0);
                StringConcatenationOperandsDomain::checkOne(a1);
            }
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, int)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(int, const StringPtr &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, long)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(long, const StringPtr &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, long long)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(long long, const StringPtr &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, size_t)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(size_t, const StringPtr &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, float)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(float, const StringPtr &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, double)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(double, const StringPtr &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(const StringPtr &, long double)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<StringPtr(*)(long double, const StringPtr &)>(&
                org::mariuszgromada::math::mxparser::operator+)> : StringConcatenationOperandsDomain {
    };

    // Only original undefined mutable-global null dereferences are excluded.
    // The length comparison retains C++ size_t promotion of negative int limits.
    // Native contains decides whether the original early return bypasses NEW_LINE.
    template<>
    struct NumericUtilityDomain<&stringutils::StringUtils::stringConcatenateMaxLength> {
        static void check(const StringPtr &first, const StringPtr &second, int maximum) {
            const auto resources = StringModel::getStringResources();
            if (resources && resources->MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED && StringInvariant::NEW_LINE)return;
            if (first->length() + second->length() <= static_cast<size_t>(maximum))return;
            if (!resources || !resources->MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED)
                throw std::invalid_argument("Native string concatenation limit requires a non-null overflow message");
            if (!StringInvariant::NEW_LINE && !stringutils::StringUtils::contains(
                    first, resources->MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED))
                throw std::invalid_argument(
                    "Native string concatenation limit requires a non-null newline when adding an overflow message");
        }
    };

    template<auto Function>
    struct StaticCall;

    template<class R, class... A, R(*Function)(A...)>
    struct StaticCall<Function> {
        static val call(val values) {
            auto converted = arguments<A...>(values, std::index_sequence_for<A...>{});
            return std::apply([&](auto &... args) {
                NumericUtilityDomain<Function>::check(args...);
                return result<R>([&]()-> R { return std::invoke(Function, args...); });
            }, converted);
        }
    };

    // Return the original shared native List instead of a value-array snapshot.
    template<auto Function>
    struct LiveListStaticCall;

    template<class R, class... A, R(*Function)(A...)>
    struct LiveListStaticCall<Function> {
        static val call(val values) {
            auto converted = arguments<A...>(values, std::index_sequence_for<A...>{});
            return std::apply([&](auto &... args) {
                NumericUtilityDomain<Function>::check(args...);
                const R list = std::invoke(Function, args...);
                return list ? val(list) : val::null();
            }, converted);
        }
    };

    template<auto Function>
    struct StaticCallInOut;
    // Validate exposed mutable native state before methods that dereference it.
    // The original method still performs every text/configuration operation.
    template<auto Function, auto... Fields>
    struct CheckedStaticCall {
        static val call(val values) {
            if ((false || ... || (*Fields == nullptr)))
                throw std::invalid_argument("Native syntax builder requires non-null syntax state");
            return StaticCall<Function>::call(values);
        }
    };

    template<class R, class... A, R(*Function)(A...)>
    struct StaticCallInOut<Function> {
        static val call(val values) {
            auto converted = arguments<A...>(values, std::index_sequence_for<A...>{});
            val response = val::object();
            response.set("result", std::apply([&](auto &... args) {
                return result<R>([&]()-> R { return std::invoke(Function, args...); });
            }, converted));
            val updated = val::array();
            std::apply([&](auto &... args) {
                (updated.call<void>("push", Conversion<Value<decltype(args)> >::write(args)), ...);
            }, converted);
            response.set("arguments", updated);
            return response;
        }
    };

    template<auto Field>
    struct FieldAccess;

    template<class R, class C, R C::*Field>
    struct FieldAccess<Field> {
        static val get(std::shared_ptr<C> self) { return Conversion<Value<R> >::write((*self).*Field); }
        static void set(std::shared_ptr<C> self, val value) { (*self).*Field = Conversion<Value<R> >::read(value); }
    };

    // D1 value snapshots of genuinely immutable generated grammar metadata.
    // Not for reference-bearing UDF lists or mutable native array/storage APIs.
    template<auto Field>
    struct ImmutableWideArrayStaticFieldAccess {
        using Storage = std::remove_reference_t<decltype(*Field)>;
        using Slot = std::remove_extent_t<Storage>;
        using Element = std::remove_cv_t<Slot>;
        static_assert(std::is_array_v<Storage> && std::is_const_v<Slot>);
        static_assert(std::is_same_v<Element, wchar_t> || std::is_same_v<Element, const wchar_t *>);

        static val get() {
            val output = val::array();
            for (const auto &item: *Field) {
                if constexpr (std::is_same_v<Element, wchar_t>)
                    output.call<void>("push", Conversion<wchar_t>::write(item));
                else output.call<void>("push", item ? val(std::wstring(item)) : val::null());
            }
            return output;
        }
    };

    template<auto Field>
    struct StaticFieldAccess {
        using R = Value<decltype(*Field)>;
        static val get() { return Conversion<R>::write(*Field); }
        static void set(val value) { *Field = Conversion<R>::read(value); }
    };

    // Fields that retain their native List expose that same container, not a copy.
    template<auto Field>
    struct LiveListFieldAccess;

    template<class R, class C, R C::*Field>
    struct LiveListFieldAccess<Field> {
        static val get(std::shared_ptr<C> self) {
            const R value = (*self).*Field;
            return value ? val(value) : val::null();
        }

        static void set(std::shared_ptr<C> self, val value) { (*self).*Field = Conversion<Value<R> >::read(value); }
    };

    template<auto Field>
    struct LiveListStaticFieldAccess {
        using R = Value<decltype(*Field)>;
        static val get() { return *Field ? val(*Field) : val::null(); }
        static void set(val value) { *Field = Conversion<R>::read(value); }
    };

    // A public fixed C array has mutable slots but no assignable/resizable array
    // object. This view references that original static storage, without copying
    // its references or creating another engine ownership graph.
    template<class T, size_t N>
    class FixedArrayView {
        T (&elements)[N];

        static void check(int index) {
            if (index < 0 || static_cast<size_t>(index) >= N)throw std::out_of_range(
                "Native fixed array index out of range");
        }

    public:
        explicit FixedArrayView(T (&source)[N]) : elements(source) {
        }

        int size() const { return static_cast<int>(N); }

        val get(int index) const {
            check(index);
            return Conversion<T>::write(elements[index]);
        }

        void set(int index, val value) {
            check(index);
            elements[index] = Conversion<T>::read(value);
        }
    };

    template<class T, size_t N>
    void registerFixedArrayView(const char *name, const char *pointer) {
        using V = FixedArrayView<T, N>;
        emscripten::class_<V>(name).template smart_ptr<std::shared_ptr<V> >(pointer)
                .function("nativeAliasOf", emscripten::optional_override([](const V &self, const V &other) {
                    return &self == &other;
                }))
                .function("size", &V::size).function("get", &V::get).function("set", &V::set);
    }

    template<auto Field>
    struct FixedArrayStaticFieldAccess {
        using Storage = Value<decltype(*Field)>;
        using View = FixedArrayView<std::remove_extent_t<Storage>, std::extent_v<Storage> >;
        static std::shared_ptr<View> get() { return std::make_shared<View>(*Field); }
    };

    // Reject only undefined native dereferences; keep defined early returns.
    inline void requireRecordComparisonDomain(const CalcStepRecord &left, const CalcStepRecord &right) {
        if (left.description && right.description && *left.description == *right.description && (
                !left.content || !right.content))
            throw std::invalid_argument("Native record comparison requires content when both descriptions match");
    }

    inline bool checkedRecordEquals(const CalcStepRecord &left, const CalcStepRecord &right) {
        requireRecordComparisonDomain(left, right);
        return left == right;
    }

    template<class T>
    void requireListPointeeDomain(List<T> &self, const T &query) {
        for (int index = 0; index < self.size(); index++) {
            const T value = self.get(index);
            if (!value || !query)throw std::invalid_argument(
                "Native pointer-dereference comparison reached a null value");
            if constexpr (std::is_same_v<T, CalcStepRecordPtr>)requireRecordComparisonDomain(*value, *query);
            if (*value == *query)return;
        }
    }

    template<class T, bool PointeeComparable = false>
    void registerLiveList(const char *name, const char *pointerName) {
        using L = List<T>;
        auto binding = emscripten::class_<L>(name);
        binding.template smart_ptr<ListPtr<T> >(pointerName);
        binding.function("nativeAliasOf", emscripten::optional_override([](const L &self, const L &other) {
                    return &self == &other;
                }))
                .function("size", &L::size)
                .function("isEmpty", static_cast<bool(L::*)() const>(&L::isEmpty))
                .function("get", emscripten::optional_override([](const L &self, int index) {
                    return Conversion<T>::write(self.get(index));
                }))
                .function("getRef", emscripten::optional_override([](const L &self, int index) {
                    return Conversion<T>::write(self.getRef(index));
                }))
                .function("top", emscripten::optional_override([](const L &self) {
                    return Conversion<T>::write(self.top());
                }))
                .function("topRef", emscripten::optional_override([](const L &self) {
                    return Conversion<T>::write(self.topRef());
                }))
                .function("pop", &L::pop)
                .function("addValue", emscripten::optional_override([](L &self, val element) {
                    self.add(Conversion<T>::read(element));
                }))
                .function("push", emscripten::optional_override([](L &self, val element) {
                    self.push(Conversion<T>::read(element));
                }))
                .function("addAt", emscripten::optional_override([](L &self, int index, val element) {
                    self.add(index, Conversion<T>::read(element));
                }))
                .function("set", emscripten::optional_override([](L &self, int index, val element) {
                    self.set(index, Conversion<T>::read(element));
                }))
                .function("contains", emscripten::optional_override([](const L &self, val element) {
                    return self.contains(Conversion<T>::read(element));
                }))
                .function("removeIndex", static_cast<void(L::*)(int)>(&L::remove))
                .function("removeValue", emscripten::optional_override([](L &self, val element) {
                    const T value = Conversion<T>::read(element);
                    if constexpr (std::is_same_v<T, int>) {
                        // Native List<int>::remove(const int&) cannot instantiate: its
                        // internal remove(i) is ambiguous. Resolve value lookup here,
                        // then use the original native index-removal/lifetime path.
                        const auto found = std::find(self.begin(), self.end(), value);
                        if (found != self.end())std::invoke(static_cast<void(L::*)(int)>(&L::remove), self,
                                                            static_cast<int>(found - self.begin()));
                    } else std::invoke(static_cast<void(L::*)(const T &)>(&L::remove), self, value);
                }))
                .function("clearSubList", &L::clearSubList)
                .function("clear", &L::clear)
                .function("addAll", emscripten::optional_override([](L &self, val values) {
                    self.addAll(Conversion<ListPtr<T> >::read(values));
                }));

        binding.function("getAt", emscripten::optional_override([](L &self, size_t index) {
            if (index >= static_cast<size_t>(self.size()))throw std::out_of_range(
                "Native List operator[] index out of range");
            return Conversion<T>::write(std::as_const(self)[index]);
        })).function("setAt", emscripten::optional_override([](L &self, size_t index, val value) {
            if (index >= static_cast<size_t>(self.size()))throw std::out_of_range(
                "Native List operator[] index out of range");
            self[index] = Conversion<T>::read(value);
        }));
        if constexpr (PointeeComparable) {
            binding.function("containsByPtrDeref", emscripten::optional_override([](L &self, val value) {
                const T query = Conversion<T>::read(value);
                requireListPointeeDomain(self, query);
                return std::as_const(self).containsByPtrDeref(query);
            })).function("removeByPtrDeref", emscripten::optional_override([](L &self, val value) {
                const T query = Conversion<T>::read(value);
                requireListPointeeDomain(self, query);
                std::as_const(self).removeByPtrDeref(query);
            }));
        }
    }
}
#pragma pop_macro("null")
