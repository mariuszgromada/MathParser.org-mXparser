/*
 * @(#)BindingVariadicPack.hpp        6.2.0    2026-11-04
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
#include "BindingVariadicProcessor.hpp"
#include "BindingCString.hpp"
#pragma push_macro("null")
#undef null
namespace mx_binding {
    // Internal foreign-language argument carrier. Its native processor stays on the
    // original constructor stack; no processor pointer/control block escapes.
    struct NativeInputPack {
        val values;
    };

    inline void checkPackedArgumentDefinition(const StringPtr &definition,
                                              const ListPtr<PrimitiveElementPtr> &elements) {
        if (!definition || !elements)return;
        if (ParserSymbol::nameOnlyTokenRegExp &&ParserSymbol::constArgDefStrRegExp)return;
        if (!ParserSymbol::nameOnlyTokenRegExp)throw std::invalid_argument(
            "Native argument definition requires non-null name-only pattern");
        if (!ParserSymbol::constArgDefStrRegExp && !StringUtils::regexMatch(
                StringUtils::trim(definition), ParserSymbol::nameOnlyTokenRegExp))
            throw std::invalid_argument(
                "Native argument definition requires non-null constant-argument definition pattern after its name-only check");
    }

    inline void checkPackedArgumentBody(const StringPtr &name, const StringPtr &body,
                                        const ListPtr<PrimitiveElementPtr> &elements) {
        if (name && body && elements && !ParserSymbol::nameOnlyTokenRegExp)
            throw std::invalid_argument("Native named Argument construction requires a non-null name-only pattern");
    }
}

namespace org::mariuszgromada::math::mxparser::wrapper {
    template<>
    inline void VariadicProcessor::processArgs<mx_binding::NativeInputPack>(mx_binding::NativeInputPack &&pack) {
        // Empty-owner alias: borrowed pointer, zero control blocks/refcounts.
        const mx_binding::ProcessorPtr borrowed(mx_binding::ProcessorPtr{}, this);
        mx_binding::processorPack(borrowed, pack.values, true);
    }
}

namespace org::mariuszgromada::math::mxparser {
    template<>
    inline Argument::Argument(const std::string &argumentDefinitionString,
                              mx_binding::NativeInputPack &&pack) : PrimitiveElement(TYPE_ID) {
        VariadicProcessorUdfs vp;
        vp.processArgs(std::move(pack));
        const StringPtr definition = S(argumentDefinitionString);
        mx_binding::checkPackedArgumentDefinition(definition, vp.paramsPrimitiveElement);
        analyzeArgumentDefinitionString(false, false, definition, vp.paramsPrimitiveElement);
        iAmFullyConstructed = true;
    }

    template<>
    inline Argument::Argument(std::string &argumentDefinitionString,
                              mx_binding::NativeInputPack &&pack) : PrimitiveElement(TYPE_ID) {
        VariadicProcessorUdfs vp;
        vp.processArgs(std::move(pack));
        const StringPtr definition = S(argumentDefinitionString);
        mx_binding::checkPackedArgumentDefinition(definition, vp.paramsPrimitiveElement);
        analyzeArgumentDefinitionString(false, false, definition, vp.paramsPrimitiveElement);
        iAmFullyConstructed = true;
    }

    template<>
    inline Argument::Argument(const Char *argumentDefinitionString,
                              mx_binding::NativeInputPack &&pack) : PrimitiveElement(TYPE_ID) {
        VariadicProcessorUdfs vp;
        vp.processArgs(std::move(pack));
        const StringPtr definition = S(argumentDefinitionString);
        mx_binding::checkPackedArgumentDefinition(definition, vp.paramsPrimitiveElement);
        analyzeArgumentDefinitionString(false, false, definition, vp.paramsPrimitiveElement);
        iAmFullyConstructed = true;
    }

    template<>
    inline Argument::Argument(const char *argumentDefinitionString,
                              mx_binding::NativeInputPack &&pack) : PrimitiveElement(TYPE_ID) {
        VariadicProcessorUdfs vp;
        vp.processArgs(std::move(pack));
        const StringPtr definition = S(argumentDefinitionString);
        mx_binding::checkPackedArgumentDefinition(definition, vp.paramsPrimitiveElement);
        analyzeArgumentDefinitionString(false, false, definition, vp.paramsPrimitiveElement);
        iAmFullyConstructed = true;
    }

    template<>
    inline void Argument::executeConstrutorConstPPE<mx_binding::NativeInputPack>(
        const StringPtr &name, const StringPtr &body, mx_binding::NativeInputPack &&pack) {
        VariadicProcessorUdfs vp;
        vp.processArgs(std::move(pack));
        mx_binding::checkPackedArgumentBody(name, body, vp.paramsPrimitiveElement);
        executeConstrutorConstPPEnonTemplatePart(name, body, vp.paramsPrimitiveElement);
    }
}

namespace mx_binding {
    template<int Mode>
    struct ForeignArgumentDefinitionCall {
        template<class D, class B>
        static ArgumentPtr createBody(D &&definition, B &body, const val &values) {
            const auto tail = values.call<val>("slice", 1);
            if (tail["length"].as<unsigned>() == 0) {
                if (!ParserSymbol::nameOnlyTokenRegExp)
                    checkPackedArgumentBody(S(definition), S(body),
                                            wrapper::VariadicProcessor::paramsPrimitiveElementEmpty);
                return new_Argument<B &>(std::forward<D>(definition), body);
            }
            return new_Argument<B &, NativeInputPack>(std::forward<D>(definition), body, NativeInputPack{tail});
        }

        template<class D>
        static ArgumentPtr create(D &&definition, const val &values) {
            const unsigned length = values["length"].as<unsigned>();
            if (length) {
                const auto first = values[0];
                const auto tag = first[0].as<std::string>();
                // Original make_shared<Argument> overload resolution: singleton
                // numeric values select non-template value constructors.
                if (length == 1 && tag == "double") {
                    const double value = first[1].as<double>();
                    if (!ParserSymbol::nameOnlyTokenRegExp)ArgumentConstructionPatternDomain::check(
                        S(definition), value);
                    return new_Argument<double>(std::forward<D>(definition), double(value));
                }
                if (length == 1 && tag == "int") {
                    const int value = first[1].as<int>();
                    if (!ParserSymbol::nameOnlyTokenRegExp)ArgumentConstructionPatternDomain::check(
                        S(definition), value);
                    return new_Argument<int>(std::forward<D>(definition), int(value));
                }
                // Preserve the exact mutable-string / same-character-pointer
                // body constructor selections from the native overload set.
                if constexpr (Mode == 1) {
                    if (tag == "std::string") {
                        std::string body = UTF16toUTF8(first[1].as<String>());
                        return createBody(std::forward<D>(definition), body, values);
                    }
                }
                if constexpr (Mode == 2) {
                    if (tag == "Char*") {
                        const bool nil = first[1].isNull();
                        const String storage = nil ? String{} : first[1].as<String>();
                        const Char *body = nil ? nullptr : storage.c_str();
                        return createBody(std::forward<D>(definition), body, values);
                    }
                }
                if constexpr (Mode == 3) {
                    if (tag == "char*") {
                        const bool nil = first[1].isNull();
                        const String wide = nil ? String{} : first[1].as<String>();
                        const std::string storage = nil ? std::string{} : UTF16toUTF8(wide);
                        const char *body = nil ? nullptr : storage.c_str();
                        return createBody(std::forward<D>(definition), body, values);
                    }
                }
            }
            if (values["length"].as<unsigned>() == 0) {
                // Preserve the original empty-tail template/default native pack.
                if ((!ParserSymbol::nameOnlyTokenRegExp || !ParserSymbol::constArgDefStrRegExp) &&
                    wrapper::VariadicProcessor::paramsPrimitiveElementEmpty)
                    checkPackedArgumentDefinition(S(definition),
                                                  wrapper::VariadicProcessor::paramsPrimitiveElementEmpty);
                return new_Argument<>(std::forward<D>(definition));
            }
            return new_Argument<NativeInputPack>(std::forward<D>(definition), NativeInputPack{values});
        }

        static val call(val args) {
            const val values = args[1];
            if constexpr (Mode == 0 || Mode == 1) {
                std::string storage = readNativeNarrowFactoryArgument<const std::string &>(args[0]);
                if constexpr (Mode == 0)return Conversion<ArgumentPtr>::write(
                    create(static_cast<const std::string &>(storage), values));
                else return Conversion<ArgumentPtr>::write(create(storage, values));
            } else if constexpr (Mode == 2) {
                const OwnedCStringArgument<Char> storage(args[0]);
                return Conversion<ArgumentPtr>::write(create(static_cast<const Char *>(storage), values));
            } else {
                const OwnedCStringArgument<char> storage(args[0]);
                return Conversion<ArgumentPtr>::write(create(static_cast<const char *>(storage), values));
            }
        }
    };

    template<int Mode>
    struct ForeignExpressionDefinitionCall {
        template<class D>
        static ExpressionPtr create(D &&definition, const val &values) {
            if (values["length"].as<unsigned>() == 1) {
                const auto entry = values[0];
                const auto tag = entry[0].as<std::string>();
                if (tag == "PrimitiveElementPtr") {
                    auto element = Conversion<PrimitiveElementPtr>::read(entry[1]);
                    return new_Expression<PrimitiveElementPtr &>(std::forward<D>(definition), element);
                }
                if (tag == "List<PrimitiveElementPtr>") {
                    auto elements = Conversion<ListPtr<PrimitiveElementPtr> >::read(entry[1]);
                    if (!elements) {
                        // Original text decoding precedes the undefined null-list
                        // dereference in the native direct addDefinitions overload.
                        (void) S(definition);
                        throw std::invalid_argument("A variadic collection must not be null");
                    }
                    return new_Expression<ListPtr<PrimitiveElementPtr> &>(std::forward<D>(definition), elements);
                }
            }
            if (values["length"].as<unsigned>() == 0)return new_Expression<>(std::forward<D>(definition));
            return new_Expression<NativeInputPack>(std::forward<D>(definition), NativeInputPack{values});
        }

        static val call(val args) {
            const val values = args[1];
            if constexpr (Mode == 0 || Mode == 1) {
                std::string storage = readNativeNarrowFactoryArgument<const std::string &>(args[0]);
                if constexpr (Mode == 0)return Conversion<ExpressionPtr>::write(
                    create(static_cast<const std::string &>(storage), values));
                else return Conversion<ExpressionPtr>::write(create(storage, values));
            } else if constexpr (Mode == 2) {
                const OwnedCStringArgument<Char> storage(args[0]);
                return Conversion<ExpressionPtr>::write(create(static_cast<const Char *>(storage), values));
            } else {
                const OwnedCStringArgument<char> storage(args[0]);
                return Conversion<ExpressionPtr>::write(create(static_cast<const char *>(storage), values));
            }
        }
    };

    template<int Mode>
    struct ForeignArgumentBodyCall {
        template<class D>
        static ArgumentPtr create(D &&name, D &&body, const val &values) {
            if (values["length"].as<unsigned>() == 0) {
                if (!ParserSymbol::nameOnlyTokenRegExp)
                    checkPackedArgumentBody(S(name), S(body), wrapper::VariadicProcessor::paramsPrimitiveElementEmpty);
                return new_Argument<>(std::forward<D>(name), std::forward<D>(body));
            }
            return new_Argument<NativeInputPack>(std::forward<D>(name), std::forward<D>(body), NativeInputPack{values});
        }

        static val call(val args) {
            const val values = args[2];
            if constexpr (Mode == 0 || Mode == 1) {
                std::string name = readNativeNarrowFactoryArgument<const std::string &>(args[0]);
                std::string body = readNativeNarrowFactoryArgument<const std::string &>(args[1]);
                if constexpr (Mode == 0)return Conversion<ArgumentPtr>::write(
                    create(static_cast<const std::string &>(name), static_cast<const std::string &>(body), values));
                else return Conversion<ArgumentPtr>::write(create(name, body, values));
            } else if constexpr (Mode == 2) {
                const OwnedCStringArgument<Char> name(args[0]), body(args[1]);
                return Conversion<ArgumentPtr>::write(create(static_cast<const Char *>(name),
                                                             static_cast<const Char *>(body), values));
            } else {
                const OwnedCStringArgument<char> name(args[0]), body(args[1]);
                return Conversion<ArgumentPtr>::write(create(static_cast<const char *>(name),
                                                             static_cast<const char *>(body), values));
            }
        }
    };

    template<void(*Method)(NativeInputPack &&)>
    struct NativeStaticStringPackCall {
        static val call(val args) {
            // The original mXparser template constructs its own native String
            // processor, including an empty tail; all settings/cache work is native.
            Method(NativeInputPack{args[0]});
            return val::undefined();
        }
    };

    template<class C>
    struct FunctionDefinitionPackPatternDomain {
        static void check(C &self, const StringPtr &name, const StringPtr &body, const ListPtr<StringPtr> &names) {
            if (ParserSymbol::nameOnlyTokenRegExp &&ParserSymbol::constArgDefStrRegExp)return;
            if (!name || !body || !names)return;
            if constexpr (std::is_same_v<C, Function>)if (self.getFunctionBodyType() != Function::BODY_RUNTIME)return;
            if (!ParserSymbol::nameOnlyTokenRegExp)
                throw std::invalid_argument("Native function definition requires a non-null name-only pattern");
            if (!StringUtils::regexMatch(StringUtils::trim(name), ParserSymbol::nameOnlyTokenRegExp))return;
            for (const auto &argument: *names)SingleArgumentDefinitionPatternDomain<C>::check(self, argument);
        }
    };

    template<class C, int Mode>
    struct DefineFunctionPrefixPackCall {
        static void invoke(const std::shared_ptr<C> &self, const StringPtr &name, const StringPtr &body,
                           const val &inputs) {
            using Target = void(C::*)(const StringPtr &, const StringPtr &, const ListPtr<StringPtr> &);
            const Target method = static_cast<Target>(&C::defineFunction);
            // String/std::string/C-string forwarding overloads resolve a single
            // mutable native String list directly to the original list overload.
            if constexpr (Mode != 0) {
                if (inputs["length"].as<unsigned>() == 1) {
                    const val entry = inputs[0];
                    if (entry[0].as<std::string>() == "List<StringPtr>") {
                        const auto names = Conversion<ListPtr<StringPtr> >::read(entry[1]);
                        FunctionDefinitionPackPatternDomain<C>::check(*self, name, body, names);
                        std::invoke(method, *self, name, body, names);
                        return;
                    }
                }
            }
            // Exact EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC split: only a nonempty
            // native tuple constructs the original String processor. Empty tuples
            // pass the original mutable native default list by reference.
            if (inputs["length"].as<unsigned>() == 0) {
                const auto &names = wrapper::VariadicProcessor::paramsStringEmpty;
                FunctionDefinitionPackPatternDomain<C>::check(*self, name, body, names);
                std::invoke(method, *self, name, body, names);
            } else {
                wrapper::VariadicProcessorString processor;
                processor.processArgs(NativeInputPack{inputs});
                FunctionDefinitionPackPatternDomain<C>::check(*self, name, body, processor.paramsString);
                std::invoke(method, *self, name, body, processor.paramsString);
            }
        }

        static val call(val object, val args) {
            const auto self = Conversion<std::shared_ptr<C> >::read(object);
            if constexpr (Mode == 0) {
                const StringPtr name = Conversion<StringPtr>::read(args[0]), body = Conversion<
                    StringPtr>::read(args[1]);
                invoke(self, name, body, args[2]);
            } else if constexpr (Mode == 1) {
                const String name = Conversion<String>::read(args[0]), body = Conversion<String>::read(args[1]);
                invoke(self, S(name), S(body), args[2]);
            } else if constexpr (Mode == 2) {
                const std::string name = readNativeNarrowFactoryArgument<const std::string &>(args[0]);
                const std::string body = readNativeNarrowFactoryArgument<const std::string &>(args[1]);
                invoke(self, S(name), S(body), args[2]);
            } else if constexpr (Mode == 3) {
                const OwnedCStringArgument<Char> name(args[0]), body(args[1]);
                const Char *namePointer = name;
                const Char *bodyPointer = body;
                invoke(self, S(namePointer), S(bodyPointer), args[2]);
            } else {
                const OwnedCStringArgument<char> name(args[0]), body(args[1]);
                const char *namePointer = name;
                const char *bodyPointer = body;
                invoke(self, S(namePointer), S(bodyPointer), args[2]);
            }
            return val::undefined();
        }
    };

    inline void checkPackedConstantDefinition(const StringPtr &definition,
                                              const ListPtr<PrimitiveElementPtr> &elements) {
        if (definition && elements && !ParserSymbol::constUnitgDefStrRegExp)
            throw std::invalid_argument(
                "Native Constant definition construction requires a non-null constant-definition pattern");
    }
}

namespace org::mariuszgromada::math::mxparser {
    template<>
    inline void Constant::executeContructorConstPE<mx_binding::NativeInputPack>(
        const StringPtr &definition, mx_binding::NativeInputPack &&pack) {
        VariadicProcessorUdfs vp;
        vp.processArgs(std::move(pack));
        mx_binding::checkPackedConstantDefinition(definition, vp.paramsPrimitiveElement);
        executeContructorConstPEnonTemplatePart(definition, vp.paramsPrimitiveElement);
    }
}

namespace mx_binding {
    template<int Mode>
    struct ForeignConstantDefinitionCall {
        template<class D, class... Args>
        static ConstantPtr construct(D &&definition, Args &&... args) {
            if constexpr (Mode == 1) {
                // There is no mutable-std::string variadic new_Constant factory.
                // The const factory changes overload selection for numeric tails.
                // Preserve the original mutable constructor with the identical
                // shared factory ownership/post-sync sequence used by new_Constant.
                auto value = std::make_shared<Constant>(definition, std::forward<Args>(args)...);
                value->postConstructorSync();
                return value;
            } else return new_Constant<Args...>(std::forward<D>(definition), std::forward<Args>(args)...);
        }

        template<class D>
        static ConstantPtr create(D &&definition, const val &values) {
            const unsigned length = values["length"].as<unsigned>();
            if constexpr (Mode != 1) {
                if (length == 1) {
                    const val first = values[0];
                    const auto tag = first[0].as<std::string>();
                    // Exact original make_shared<Constant> overload resolution.
                    if (tag == "double") {
                        const double number = first[1].as<double>();
                        ConstantConstructionPatternDomain::check(S(definition), number);
                        return construct(std::forward<D>(definition), double(number));
                    }
                    if (tag == "int") {
                        const int number = first[1].as<int>();
                        ConstantConstructionPatternDomain::check(S(definition), number);
                        return construct(std::forward<D>(definition), int(number));
                    }
                }
            }
            if (length == 2) {
                const val numberInput = values[0], descriptionInput = values[1];
                const auto numberTag = numberInput[0].as<std::string>();
                const auto descriptionTag = descriptionInput[0].as<std::string>();
                if (numberTag == "double" || numberTag == "int") {
                    const auto withDescription = [&](auto &&description) {
                        if (numberTag == "double") {
                            const double number = numberInput[1].as<double>();
                            if (!ParserSymbol::nameOnlyTokenOptBracketsRegExp)
                                ConstantConstructionPatternDomain::check(S(definition), number, S(description));
                            return construct(std::forward<D>(definition), double(number),
                                             std::forward<decltype(description)>(description));
                        }
                        const int number = numberInput[1].as<int>();
                        if (!ParserSymbol::nameOnlyTokenOptBracketsRegExp)
                            ConstantConstructionPatternDomain::check(S(definition), number, S(description));
                        return construct(std::forward<D>(definition), int(number),
                                         std::forward<decltype(description)>(description));
                    };
                    if constexpr (Mode == 1) {
                        if (descriptionTag == "std::string") {
                            std::string description = UTF16toUTF8(descriptionInput[1].as<String>());
                            return withDescription(description);
                        }
                    }
                    if constexpr (Mode == 2) {
                        if (descriptionTag == "Char*") {
                            const OwnedCStringArgument<Char> description(descriptionInput[1]);
                            return withDescription(static_cast<const Char *>(description));
                        }
                    }
                    if constexpr (Mode == 3) {
                        if (descriptionTag == "char*") {
                            const OwnedCStringArgument<char> description(descriptionInput[1]);
                            return withDescription(static_cast<const char *>(description));
                        }
                    }
                }
            }
            if (length == 0) {
                checkPackedConstantDefinition(S(definition), wrapper::VariadicProcessor::paramsPrimitiveElementEmpty);
                return construct(std::forward<D>(definition));
            }
            return construct(std::forward<D>(definition), NativeInputPack{values});
        }

        static val call(val args) {
            const val values = args[1];
            if constexpr (Mode == 0 || Mode == 1) {
                std::string storage = readNativeNarrowFactoryArgument<const std::string &>(args[0]);
                if constexpr (Mode == 0)return Conversion<ConstantPtr>::write(
                    create(static_cast<const std::string &>(storage), values));
                else return Conversion<ConstantPtr>::write(create(storage, values));
            } else if constexpr (Mode == 2) {
                const OwnedCStringArgument<Char> storage(args[0]);
                return Conversion<ConstantPtr>::write(create(static_cast<const Char *>(storage), values));
            } else {
                const OwnedCStringArgument<char> storage(args[0]);
                return Conversion<ConstantPtr>::write(create(static_cast<const char *>(storage), values));
            }
        }
    };
}

namespace org::mariuszgromada::math::mxparser {
    template<>
    inline Argument::Argument(const StringPtr &definition, bool forceDependent,
                              mx_binding::NativeInputPack &&pack) : PrimitiveElement(TYPE_ID) {
        VariadicProcessorUdfs vp;
        vp.processArgs(std::move(pack));
        mx_binding::checkPackedArgumentDefinition(definition, vp.paramsPrimitiveElement);
        analyzeArgumentDefinitionString(false, forceDependent, definition, vp.paramsPrimitiveElement);
        iAmFullyConstructed = true;
    }
}

namespace mx_binding {
    template<int Mode>
    struct ForeignArgumentForcedDefinitionCall {
        template<class D>
        static ArgumentPtr create(D &&definition, bool forceDependent, const val &values) {
            if (values["length"].as<unsigned>() == 0) {
                if (!ParserSymbol::nameOnlyTokenRegExp || !ParserSymbol::constArgDefStrRegExp)
                    checkPackedArgumentDefinition(S(definition),
                                                  wrapper::VariadicProcessor::paramsPrimitiveElementEmpty);
                return new_Argument<>(std::forward<D>(definition), forceDependent);
            }
            return new_Argument<NativeInputPack>(std::forward<D>(definition), forceDependent, NativeInputPack{values});
        }

        static val call(val args) {
            const bool forceDependent = args[1].as<bool>();
            const val values = args[2];
            if constexpr (Mode == 0 || Mode == 1) {
                std::string storage = readNativeNarrowFactoryArgument<const std::string &>(args[0]);
                if constexpr (Mode == 0)return Conversion<ArgumentPtr>::write(
                    create(static_cast<const std::string &>(storage), forceDependent, values));
                else return Conversion<ArgumentPtr>::write(create(storage, forceDependent, values));
            } else if constexpr (Mode == 2) {
                const OwnedCStringArgument<Char> storage(args[0]);
                return Conversion<ArgumentPtr>::write(
                    create(static_cast<const Char *>(storage), forceDependent, values));
            } else {
                const OwnedCStringArgument<char> storage(args[0]);
                return Conversion<ArgumentPtr>::write(
                    create(static_cast<const char *>(storage), forceDependent, values));
            }
        }
    };

    inline void checkPackedFunctionDefinition(const StringPtr &definition,
                                              const ListPtr<PrimitiveElementPtr> &elements) {
        if (!definition || !elements)return;
        if (!ParserSymbol::functionDefStrRegExp)
            throw std::invalid_argument("Native Function definition requires a non-null function-definition pattern");
        if (!ParserSymbol::functionVariadicDefStrRegExp || !ParserSymbol::nameOnlyTokenRegExp || !
            ParserSymbol::constArgDefStrRegExp) {
            const auto trimmed = StringUtils::trim(definition);
            if (StringUtils::regexMatch(trimmed, ParserSymbol::functionDefStrRegExp)) {
                if (!ParserSymbol::nameOnlyTokenRegExp)
                    throw std::invalid_argument(
                        "Native Function head tokenization requires a non-null name-only pattern");
                if (wrapper::VariadicProcessor::paramsPrimitiveElementEmpty && !ParserSymbol::constArgDefStrRegExp) {
                    const auto head = new_HeadEqBody(trimmed);
                    for (int i = 1; i < head->headTokens->size(); ++i) {
                        const auto token = head->headTokens->get(i);
                        if (token->tokenTypeId == ParserSymbol::TYPE_ID)continue;
                        checkPackedArgumentDefinition(token->tokenStr,
                                                      wrapper::VariadicProcessor::paramsPrimitiveElementEmpty);
                    }
                }
            } else if (!ParserSymbol::functionVariadicDefStrRegExp)
                throw std::invalid_argument(
                    "Native Function definition requires a non-null variadic-function pattern after its fixed-function check");
            else if (!ParserSymbol::nameOnlyTokenRegExp && StringUtils::regexMatch(
                         trimmed, ParserSymbol::functionVariadicDefStrRegExp))
                throw std::invalid_argument("Native Function head tokenization requires a non-null name-only pattern");
        }
    }

    inline void checkPackedFunctionBody(const StringPtr &name, const StringPtr &body,
                                        const ListPtr<PrimitiveElementPtr> &elements, const ListPtr<StringPtr> &names) {
        if (!name || !body)return;
        if (!ParserSymbol::nameOnlyTokenRegExp)
            throw std::invalid_argument("Native named Function construction requires a non-null name-only pattern");
        if (!elements || !names || ParserSymbol::constArgDefStrRegExp || !
            wrapper::VariadicProcessor::paramsPrimitiveElementEmpty)return;
        if (!StringUtils::regexMatch(StringUtils::trim(name), ParserSymbol::nameOnlyTokenRegExp))return;
        for (const auto &argument: *names)checkPackedArgumentDefinition(
            argument, wrapper::VariadicProcessor::paramsPrimitiveElementEmpty);
    }
}

namespace org::mariuszgromada::math::mxparser {
    template<>
    inline void Function::executeContructorConstPE<mx_binding::NativeInputPack>(
        const StringPtr &definition, mx_binding::NativeInputPack &&pack) {
        VariadicProcessorUdfs vp;
        vp.processArgs(std::move(pack));
        mx_binding::checkPackedFunctionDefinition(definition, vp.paramsPrimitiveElement);
        executeContructorConstPEnonTemplatePart(definition, vp.paramsPrimitiveElement);
    }

    template<>
    inline void Function::executeContructorConstPPE<mx_binding::NativeInputPack>(
        const StringPtr &name, const StringPtr &body, mx_binding::NativeInputPack &&pack) {
        VariadicProcessorStringOrUdf vp;
        vp.processArgs(std::move(pack));
        mx_binding::checkPackedFunctionBody(name, body, vp.paramsPrimitiveElement, vp.paramsString);
        executeContructorConstPPEnonTemplatePart(name, body, vp.paramsPrimitiveElement, vp.paramsString);
    }
}

namespace mx_binding {
    template<int Mode>
    struct ForeignFunctionDefinitionCall {
        template<class D, class B>
        static FunctionPtr createBody(D &&definition, B &body, const val &values) {
            const auto tail = values.call<val>("slice", 1);
            if (tail["length"].as<unsigned>() == 0) {
                if (!ParserSymbol::nameOnlyTokenRegExp || !ParserSymbol::constArgDefStrRegExp)
                    checkPackedFunctionBody(S(definition), S(body),
                                            wrapper::VariadicProcessor::paramsPrimitiveElementEmpty,
                                            wrapper::VariadicProcessor::paramsStringEmpty);
                return new_Function<B &>(std::forward<D>(definition), body);
            }
            return new_Function<B &, NativeInputPack>(std::forward<D>(definition), body, NativeInputPack{tail});
        }

        template<class D>
        static FunctionPtr create(D &&definition, const val &values) {
            if (values["length"].as<unsigned>()) {
                const auto first = values[0];
                const auto tag = first[0].as<std::string>();
                // Original make_shared<Function> selects name/body constructors
                // for a mutable narrow string or a matching character pointer.
                if constexpr (Mode == 1) {
                    if (tag == "std::string") {
                        std::string body = UTF16toUTF8(first[1].as<String>());
                        return createBody(std::forward<D>(definition), body, values);
                    }
                }
                if constexpr (Mode == 2) {
                    if (tag == "Char*") {
                        const bool nil = first[1].isNull();
                        const String storage = nil ? String{} : first[1].as<String>();
                        const Char *body = nil ? nullptr : storage.c_str();
                        return createBody(std::forward<D>(definition), body, values);
                    }
                }
                if constexpr (Mode == 3) {
                    if (tag == "char*") {
                        const bool nil = first[1].isNull();
                        const String wide = nil ? String{} : first[1].as<String>();
                        const std::string storage = nil ? std::string{} : UTF16toUTF8(wide);
                        const char *body = nil ? nullptr : storage.c_str();
                        return createBody(std::forward<D>(definition), body, values);
                    }
                }
            }
            if (values["length"].as<unsigned>() == 0) {
                if (!ParserSymbol::functionDefStrRegExp || !ParserSymbol::functionVariadicDefStrRegExp || !
                    ParserSymbol::nameOnlyTokenRegExp || !ParserSymbol::constArgDefStrRegExp)
                    checkPackedFunctionDefinition(S(definition),
                                                  wrapper::VariadicProcessor::paramsPrimitiveElementEmpty);
                return new_Function<>(std::forward<D>(definition));
            }
            return new_Function<NativeInputPack>(std::forward<D>(definition), NativeInputPack{values});
        }

        static val call(val args) {
            const val values = args[1];
            if constexpr (Mode == 0 || Mode == 1) {
                std::string storage = readNativeNarrowFactoryArgument<const std::string &>(args[0]);
                if constexpr (Mode == 0)return Conversion<FunctionPtr>::write(
                    create(static_cast<const std::string &>(storage), values));
                else return Conversion<FunctionPtr>::write(create(storage, values));
            } else if constexpr (Mode == 2) {
                const OwnedCStringArgument<Char> storage(args[0]);
                return Conversion<FunctionPtr>::write(create(static_cast<const Char *>(storage), values));
            } else {
                const OwnedCStringArgument<char> storage(args[0]);
                return Conversion<FunctionPtr>::write(create(static_cast<const char *>(storage), values));
            }
        }
    };

    template<int Mode>
    struct ForeignFunctionBodyCall {
        template<class D>
        static FunctionPtr create(D &&name, D &&body, const val &values) {
            if (values["length"].as<unsigned>() == 0) {
                if (!ParserSymbol::nameOnlyTokenRegExp || !ParserSymbol::constArgDefStrRegExp)
                    checkPackedFunctionBody(S(name), S(body), wrapper::VariadicProcessor::paramsPrimitiveElementEmpty,
                                            wrapper::VariadicProcessor::paramsStringEmpty);
                return new_Function<>(std::forward<D>(name), std::forward<D>(body));
            }
            // Reuse the already verified native StringOrUdf optional-pack helper;
            // all names, parameters and dependency ownership remain native.
            return new_Function<NativeInputPack>(std::forward<D>(name), std::forward<D>(body), NativeInputPack{values});
        }

        static val call(val args) {
            const val values = args[2];
            if constexpr (Mode == 0 || Mode == 1) {
                std::string name = readNativeNarrowFactoryArgument<const std::string &>(args[0]);
                std::string body = readNativeNarrowFactoryArgument<const std::string &>(args[1]);
                if constexpr (Mode == 0)return Conversion<FunctionPtr>::write(
                    create(static_cast<const std::string &>(name), static_cast<const std::string &>(body), values));
                else return Conversion<FunctionPtr>::write(create(name, body, values));
            } else if constexpr (Mode == 2) {
                const OwnedCStringArgument<Char> name(args[0]), body(args[1]);
                return Conversion<FunctionPtr>::write(create(static_cast<const Char *>(name),
                                                             static_cast<const Char *>(body), values));
            } else {
                const OwnedCStringArgument<char> name(args[0]), body(args[1]);
                return Conversion<FunctionPtr>::write(create(static_cast<const char *>(name),
                                                             static_cast<const char *>(body), values));
            }
        }
    };

    // Three-string RecursiveArgument factories retain their original base
    // Argument construction, index-Argument construction and postConstructorSync.
    // Only native regex dereferences with a publicly nulled pattern are guarded.
    struct RecursiveTrioPatternDomain {
        static StringPtr decode(const String &text) { return S(text); }
        static StringPtr decode(const std::string &text) { return S(text); }

        template<class Character>
        static StringPtr decode(const Character *text) { return S(text); }

        template<class Text>
        static void check(const Text &name, const Text &body, const Text &index) {
            if (ParserSymbol::nameOnlyTokenRegExp &&ParserSymbol::constArgDefStrRegExp)return;
            const auto &elements = wrapper::VariadicProcessor::paramsPrimitiveElementEmpty;
            if (!elements)return; // Original base/index constructors return before regex use.
            const StringPtr decodedName = decode(name), decodedBody = decode(body);
            if (!decodedName || !decodedBody)return;
            checkPackedArgumentBody(decodedName, decodedBody, elements);
            if (!StringUtils::regexMatch(StringUtils::trim(decodedName), ParserSymbol::nameOnlyTokenRegExp))return;
            const StringPtr decodedIndex = decode(index);
            checkPackedArgumentDefinition(decodedIndex, elements);
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<RecursiveArgumentPtr(*)(const String &, const String &, const String &)>(&
                new_RecursiveArgument)> : RecursiveTrioPatternDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<RecursiveArgumentPtr(*)(const std::string &, const std::string &,
                                                                    const std::string &)>(&
                new_RecursiveArgument)> : RecursiveTrioPatternDomain {
    };

    template<>
    struct NumericUtilityDomain<static_cast<RecursiveArgumentPtr(*)(std::string &, std::string &, std::string &)>(&
                new_RecursiveArgument)> : RecursiveTrioPatternDomain {
    };

    template<class Character>
    struct RecursiveTrioCStringPatternDomain {
        static void check(const Character *name, const Character *body, const Character *index) {
            RecursiveTrioPatternDomain::check(name, body, index);
        }
    };

    template<>
    struct NumericUtilityDomain<static_cast<RecursiveArgumentPtr(*)(const Char *, const Char *, const Char *)>(&
                new_RecursiveArgument)> : RecursiveTrioCStringPatternDomain<Char> {
    };

    template<>
    struct NumericUtilityDomain<static_cast<RecursiveArgumentPtr(*)(const char *, const char *, const char *)>(&
                new_RecursiveArgument)> : RecursiveTrioCStringPatternDomain<char> {
    };

    // Reuse the installed dynamic argument carrier with the original public
    // C++ templates. Numeric processing, casts, diagnostics and base validation
    // remain in CURRENT/cpp; no numeric implementation is reproduced here.
    template<class Base>
    struct MXParserDigitPackCall {
        static val call(val args) {
            const Base base = Conversion<Base>::read(args[0]);
            const val inputs = args[1];
            if (inputs["length"].as<unsigned>() == 0)
                return val(mXparser::convOthBase2Decimal<>(base));
            return val(mXparser::convOthBase2Decimal<NativeInputPack>(base, NativeInputPack{inputs}));
        }
    };

    // Borrowed call-local prefix context. It never escapes the synchronous native
    // invocation and creates no registry, owner, reference count or JS graph.
    struct NativeFunctionSetterInputPack {
        val values;
        const void *prefix;

        StringPtr (*readPrefix)(const void *);

        bool prefixDefined;
    };
}

namespace org::mariuszgromada::math::mxparser::wrapper {
    template<>
    inline void VariadicProcessor::processArgs<mx_binding::NativeFunctionSetterInputPack>(
        mx_binding::NativeFunctionSetterInputPack &&pack) {
        const mx_binding::ProcessorPtr borrowed(mx_binding::ProcessorPtr{}, this);
        mx_binding::processorPack(borrowed, pack.values, true);
        const auto &elements = paramsPrimitiveElement ? paramsPrimitiveElement : paramsPrimitiveElementEmpty;
        // Host diagnostics may have changed public patterns/defaults while the
        // processor ran. Check now, before the original macro selects/uses them.
        if (pack.prefixDefined && elements && mx_binding::nativeFunctionSetterPatternsReady())return;
        mx_binding::checkNativeFunctionSetterDefinition(pack.readPrefix(pack.prefix), elements);
    }
}

namespace mx_binding {
    template<int Mode>
    struct FunctionSetPrefixPackCall {
        template<class Text>
        static StringPtr readPrefix(const void *prefix) {
            if constexpr (Mode == 0)return *static_cast<const Text *>(prefix);
            else return S(*static_cast<const Text *>(prefix));
        }

        template<class Text>
        static void invoke(const FunctionPtr &self, const Text &prefix, const val &inputs) {
            bool defined = true;
            if constexpr (Mode == 0)defined = prefix != nullptr;
            if (inputs["length"].as<unsigned>() == 0) {
                const auto &elements = wrapper::VariadicProcessor::paramsPrimitiveElementEmpty;
                if (!defined || !elements || !nativeFunctionSetterPatternsReady())
                    checkNativeFunctionSetterDefinition(readPrefix<Text>(&prefix), elements);
                self->setFunction<>(prefix);
            } else {
                self->setFunction<NativeFunctionSetterInputPack>(prefix,
                                                                 NativeFunctionSetterInputPack{
                                                                     inputs, &prefix, &readPrefix<Text>, defined
                                                                 });
            }
        }

        static val call(val object, val args) {
            const auto self = Conversion<FunctionPtr>::read(object);
            if constexpr (Mode == 0)invoke(self, Conversion<StringPtr>::read(args[0]), args[1]);
            else invoke(self, Conversion<String>::read(args[0]), args[1]);
            return val::undefined();
        }
    };

    // The bool-first overloads are original base Argument factories, not derived
    // RecursiveArgument construction. Preserve their constant-list/default split.
    inline void checkNativeArgumentRecursiveFlagDefinition(bool recursive, const StringPtr &definition,
                                                           bool elementsPresent) {
        if (!definition || !elementsPresent)return;
        if (ParserSymbol::nameOnlyTokenRegExp &&ParserSymbol::constArgDefStrRegExp
            &&
                (!recursive || ParserSymbol::function1ArgDefStrRegExp))return;
        if (!ParserSymbol::nameOnlyTokenRegExp)
            throw std::invalid_argument("Native argument definition requires non-null name-only pattern");
        const auto trimmed = StringUtils::trim(definition);
        if (StringUtils::regexMatch(trimmed, ParserSymbol::nameOnlyTokenRegExp))return;
        if (!ParserSymbol::constArgDefStrRegExp)
            throw std::invalid_argument(
                "Native argument definition requires non-null constant-argument definition pattern after its name-only check");
        if (StringUtils::regexMatch(trimmed, ParserSymbol::constArgDefStrRegExp))return;
        if (recursive && !ParserSymbol::function1ArgDefStrRegExp)
            throw std::invalid_argument(
                "Native recursive-flag Argument definition requires a non-null one-argument function pattern after its earlier definition checks");
    }

    inline void checkNativeArgumentRecursiveFlagDefinition(bool recursive, const StringPtr &definition,
                                                           const ListPtr<PrimitiveElementPtr> &elements) {
        checkNativeArgumentRecursiveFlagDefinition(recursive, definition, elements != nullptr);
    }

    inline void checkNativeArgumentRecursiveFlagDefinition(bool recursive, const StringPtr &definition) {
        // The ORIGINAL two-argument constructor uses its protected static const
        // shared_ptr initialized by new_List in PrimitiveElement.cpp. Only its
        // proved non-null invariant is needed here; no protected value is exposed
        // or substituted, and the original factory still selects the actual list.
        checkNativeArgumentRecursiveFlagDefinition(recursive, definition, true);
    }

    template<auto Factory>
    struct ArgumentRecursiveFlagFactoryCall;

    template<class R, class... A, R(*Factory)(A...)>
    struct ArgumentRecursiveFlagFactoryCall<Factory> {
        static val call(val values) {
            auto converted = arguments<A...>(values, std::index_sequence_for<A...>{});
            return std::apply([&](auto &... args) {
                checkNativeArgumentRecursiveFlagDefinition(args...);
                return result<R>([&]()-> R { return std::invoke(Factory, args...); });
            }, converted);
        }
    };

    // D1 runtime pack carrier for original static templates. Prefix conversion
    // retains shared native objects; the original zero-pack or one carrier-pack
    // template performs all processing, formatting, escaping and exceptions.
    template<auto Packed, auto Empty>
    struct NativeStaticPrefixPackCall;

    template<auto Packed, class R, class... A, R(*Empty)(A...)>
    struct NativeStaticPrefixPackCall<Packed, Empty> {
        static val call(val values) {
            auto converted = arguments<A...>(values, std::index_sequence_for<A...>{});
            const val elements = values[sizeof...(A)];
            return std::apply([&](auto &... args) {
                return result<R>([&]()-> R {
                    if (elements["length"].as<unsigned>() == 0)return std::invoke(Empty, args...);
                    return std::invoke(Packed, args..., NativeInputPack{elements});
                });
            }, converted);
        }
    };


    // Exact original std::wstring factory, including its true empty-pack branch.
    // The existing foreign argument carrier only adapts value transport; native
    // constructor helpers perform definition parsing, recursion and ownership.
    struct RecursiveWideDefinitionFactoryCall {
        static val call(val arguments) {
            const String definition = Conversion<String>::read(arguments[0]);
            if (!ParserSymbol::nameOnlyTokenRegExp || !ParserSymbol::constArgDefStrRegExp || !
                ParserSymbol::function1ArgDefStrRegExp)
                checkNativeArgumentRecursiveFlagDefinition(true, S(definition));
            const val elements = arguments[1];
            if (elements["length"].as<unsigned>() == 0)
                return Conversion<RecursiveArgumentPtr>::write(new_RecursiveArgument<>(definition));
            return Conversion<RecursiveArgumentPtr>::write(
                new_RecursiveArgument<NativeInputPack>(definition, NativeInputPack{elements}));
        }
    };


    // Typed prefix transport only. All constructor processing and recursion stay
    // in the original selected new_RecursiveArgument overload and its helpers.
    template<int Mode, bool MutableIndex>
    struct RecursiveIndexFactoryCall {
        template<class Text>
        static StringPtr decoded(const Text &value) {
            if constexpr (std::is_same_v<Value<Text>, StringPtr>)return value;
            else return S(value);
        }

        template<class Text, class Index>
        static RecursiveArgumentPtr create(Text &name, Text &body, Index &index, const val &elements) {
            if (!ParserSymbol::nameOnlyTokenRegExp || !ParserSymbol::constArgDefStrRegExp)
                checkPackedArgumentBody(decoded(name), decoded(body), VariadicProcessor::paramsPrimitiveElementEmpty);
            if (elements["length"].as<unsigned>() == 0)return new_RecursiveArgument<>(name, body, index);
            return new_RecursiveArgument<NativeInputPack>(name, body, index, NativeInputPack{elements});
        }

        template<class Text>
        static val invoke(Text &name, Text &body, val args) {
            ArgumentPtr index = Conversion<ArgumentPtr>::read(args[2]);
            if constexpr (MutableIndex)return Conversion<RecursiveArgumentPtr>::write(
                create(name, body, index, args[3]));
            else {
                const ArgumentPtr constIndex = index;
                return Conversion<RecursiveArgumentPtr>::write(create(name, body, constIndex, args[3]));
            }
        }

        static val call(val args) {
            if constexpr (Mode == 0) {
                const StringPtr name = Conversion<StringPtr>::read(args[0]), body = Conversion<
                    StringPtr>::read(args[1]);
                return invoke(name, body, args);
            } else if constexpr (Mode == 1) {
                const String name = Conversion<String>::read(args[0]), body = Conversion<String>::read(args[1]);
                return invoke(name, body, args);
            } else if constexpr (Mode == 2) {
                const std::string name = Conversion<std::string>::read(args[0]), body = Conversion<
                    std::string>::read(args[1]);
                return invoke(name, body, args);
            } else if constexpr (Mode == 3) {
                std::string name = Conversion<std::string>::read(args[0]), body = Conversion<
                    std::string>::read(args[1]);
                return invoke(name, body, args);
            } else if constexpr (Mode == 4) {
                const OwnedCStringArgument<Char> first(args[0]), second(args[1]);
                const Char *name = static_cast<const Char *>(first);
                const Char *body = static_cast<const Char *>(second);
                return invoke(name, body, args);
            } else {
                const OwnedCStringArgument<char> first(args[0]), second(args[1]);
                const char *name = static_cast<const char *>(first);
                const char *body = static_cast<const char *>(second);
                return invoke(name, body, args);
            }
        }
    };


    // Exact original definition factories. Keep value strings and borrowed
    // C-string storage alive for the original constructor; no definition parser.
    template<int Mode>
    struct RecursiveDefinitionFactoryCall {
        template<class Text>
        static val create(Text &definition, const val &elements) {
            if (!ParserSymbol::nameOnlyTokenRegExp || !ParserSymbol::constArgDefStrRegExp || !
                ParserSymbol::function1ArgDefStrRegExp)
                checkNativeArgumentRecursiveFlagDefinition(true, S(definition));
            if (elements["length"].as<unsigned>() == 0)return Conversion<RecursiveArgumentPtr>::write(
                new_RecursiveArgument<>(definition));
            return Conversion<RecursiveArgumentPtr>::write(
                new_RecursiveArgument<NativeInputPack>(definition, NativeInputPack{elements}));
        }

        static val call(val args) {
            if constexpr (Mode == 0) {
                const std::string definition = Conversion<std::string>::read(args[0]);
                return create(definition, args[1]);
            } else if constexpr (Mode == 1) {
                std::string definition = Conversion<std::string>::read(args[0]);
                return create(definition, args[1]);
            } else if constexpr (Mode == 2) {
                const OwnedCStringArgument<Char> storage(args[0]);
                const Char *definition = static_cast<const Char *>(storage);
                return create(definition, args[1]);
            } else {
                const OwnedCStringArgument<char> storage(args[0]);
                const char *definition = static_cast<const char *>(storage);
                return create(definition, args[1]);
            }
        }
    };


    // Original template, including its distinct zero-argument/default-list path.
    inline double calculateFunctionNativePack(FunctionPtr self, val args) {
        if (args[0]["length"].as<unsigned>() == 0)return self->calculate<>();
        return self->calculate<NativeInputPack>(NativeInputPack{args[0]});
    }


    inline val expressionStringPointerFactory(val args) {
        const StringPtr definition = Conversion<StringPtr>::read(args[0]);
        const val elements = args[1];
        const auto length = elements["length"].as<unsigned>();
        if (length == 0)return Conversion<ExpressionPtr>::write(new_Expression<>(definition));
        if (length == 1) {
            const auto entry = elements[0];
            const auto tag = entry[0].as<std::string>();
            if (tag == "PrimitiveElementPtr") {
                auto element = Conversion<PrimitiveElementPtr>::read(entry[1]);
                return Conversion<ExpressionPtr>::write(new_Expression<PrimitiveElementPtr &>(definition, element));
            }
            if (tag == "List<PrimitiveElementPtr>") {
                auto list = Conversion<ListPtr<PrimitiveElementPtr> >::read(entry[1]);
                return Conversion<ExpressionPtr>::write(
                    new_Expression<ListPtr<PrimitiveElementPtr> &>(definition, list));
            }
        }
        return Conversion<ExpressionPtr>::write(new_Expression<NativeInputPack>(definition, NativeInputPack{elements}));
    }
}
#pragma pop_macro("null")
