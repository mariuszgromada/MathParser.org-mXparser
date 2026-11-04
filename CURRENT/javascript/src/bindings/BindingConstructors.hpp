/*
 * @(#)BindingConstructors.hpp        6.2.0    2026-11-04
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

// Proposed constructor/variadic/virtual interop, using the original factories.
#pragma once
#include "BindingSupport.hpp"
#pragma push_macro("null")
#undef null
namespace mx_binding {
    // These public constructors take a borrowed std::string pointer and copy it
    // through S(*name). Keep the existing lossless byte storage alive for the call.
    // No exact original new_Constant pointer/numeric factory exists.
    template<class Numeric>
    ConstantPtr constructPointerConstant(const std::string &name, Numeric value) {
        ConstantNarrowFactoryDomain::check(name, value);
        auto constant = std::make_shared<Constant>(&name, value);
        constant->postConstructorSync();
        return constant;
    }

    inline syntaxchecker::ErrorMessagePtr constructHelperErrorMessage(val) {
        return std::make_shared<syntaxchecker::ErrorMessage>();
    }

    template<StringResourcesPtr(*Factory)()>
    StringResourcesPtr resourceFactoryWithNewLine() {
        requireResourceNewLine();
        return Factory();
    }

    inline int count(const val &args) { return args["length"].as<int>(); }
    inline StringPtr text(const val &value) { return Conversion<StringPtr>::read(value); }
    // This original by-value class has no new_BigDecimal factory. Standard
    // shared_ptr boxing provides an Embind-owned handle without a second owner model.
    inline std::shared_ptr<BigDecimal> constructBigDecimal(val args) {
        if (!count(args))return std::make_shared<BigDecimal>();
        if (count(args) != 1)throw std::invalid_argument("BigDecimal expects zero or one value");
        const val value = args[0];
        const auto kind = value.typeOf().as<std::string>();
        if (kind == "number")return std::make_shared<BigDecimal>(value.as<double>());
        if (kind == "string") {
            const auto input = Conversion<StringPtr>::read(value);
            // Original construction swallows parse failure and leaves its value
            // uninitialized. Check that native stdlib domain before constructing.
            (void) std::stold(*input);
            return std::make_shared<BigDecimal>(input);
        }
        if (value.instanceof(val::module_property("NativeBigDecimal")))
            return std::make_shared<BigDecimal>(*Conversion<std::shared_ptr<BigDecimal> >::read(value));
        if (value.instanceof(val::global("Uint8Array")))
            return std::make_shared<BigDecimal>(Conversion<long double>::read(value));
        throw std::invalid_argument("Unsupported BigDecimal construction value");
    }

    template<class T>
    bool appendDefinitionList(const val &value, const char *name, const ListPtr<PrimitiveElementPtr> &target) {
        if (!value.instanceof(val::module_property(name)))return false;
        const auto list = value.as<ListPtr<T> >();
        for (const auto &element: *list)target->add(factoryOwner(element));
        return true;
    }

    inline void appendDefinition(const val &value, const ListPtr<PrimitiveElementPtr> &target) {
        if (value.isNull() || value.instanceof(val::module_property("NativePrimitiveElement"))) {
            target->add(Conversion<PrimitiveElementPtr>::read(value));
            return;
        }
        if (appendDefinitionList<PrimitiveElementPtr>(value, "NativePrimitiveElementList", target)
            || appendDefinitionList<ArgumentPtr>(value, "NativeArgumentList", target)
            || appendDefinitionList<RecursiveArgumentPtr>(value, "NativeRecursiveArgumentList", target)
            || appendDefinitionList<ConstantPtr>(value, "NativeConstantList", target)
            || appendDefinitionList<FunctionPtr>(value, "NativeFunctionList", target))
            return;
        target->add(Conversion<PrimitiveElementPtr>::read(value));
    }

    inline ListPtr<PrimitiveElementPtr> definitions(const val &args, int begin) {
        const auto result = new_List<PrimitiveElementPtr>();
        for (int i = begin; i < count(args); i++)appendDefinition(args[i], result);
        return result;
    }

    struct Callback {
        val implementation, invoke;

        Callback(val object, val boundary) : implementation(std::move(object)), invoke(std::move(boundary)) {
        }

        val call(const char *method, const char *expected, val args = val::array()) {
            const val answer = invoke(implementation, std::string(method), args, std::string(expected));
            if (!answer["ok"].as<bool>())throw std::runtime_error(answer["message"].as<std::string>());
            return answer["value"];
        }
    };

    struct JsArgumentExtension final : ArgumentExtension, Callback {
        using Callback::Callback;
        double getArgumentValue() override { return call("getArgumentValue", "number").as<double>(); }

        ArgumentExtensionPtr clone() override {
            return std::make_shared<JsArgumentExtension>(call("clone", "ArgumentExtension"), invoke);
        }
    };

    struct JsFunctionExtension final : FunctionExtension, Callback {
        using Callback::Callback;
        int getParametersNumber() override { return call("getParametersNumber", "int").as<int>(); }

        void setParameterValue(int index, double value) override {
            val args = val::array();
            args.call<void>("push", index, value);
            call("setParameterValue", "void", args);
        }

        StringPtr getParameterName(int index) override {
            val args = val::array();
            args.call<void>("push", index);
            return text(call("getParameterName", "string", args));
        }

        double calculate() override { return call("calculate", "number").as<double>(); }

        FunctionExtensionPtr clone() override {
            return std::make_shared<JsFunctionExtension>(call("clone", "FunctionExtension"), invoke);
        }
    };

    struct JsFunctionExtensionVariadic final : FunctionExtensionVariadic, Callback {
        using Callback::Callback;

        double calculate(const ListPtr<double> &parameters) override {
            val args = val::array();
            args.call<void>("push", parameters ? val(parameters) : val::null());
            return call("calculate", "variadic-number", args).as<double>();
        }

        FunctionExtensionVariadicPtr clone() override {
            return std::make_shared<JsFunctionExtensionVariadic>(call("clone", "FunctionExtensionVariadic"), invoke);
        }
    };

    struct JsIRandom final : IRandom, Callback {
        using Callback::Callback;

        Long nextInt(Long bound) override {
            val args = val::array();
            args.call<void>("push", bound);
            return call("nextInt", "bigint", args).as<Long>();
        }

        double nextDouble() override { return call("nextDouble", "number").as<double>(); }

        void setSeed(unsigned int seed) override {
            val args = val::array();
            args.call<void>("push", seed);
            call("setSeed", "void", args);
        }
    };

    inline wrapper::StringBuilderPtr constructStringBuilder(val args) {
        return count(args) ? wrapper::new_StringBuilder(text(args[0])) : wrapper::new_StringBuilder();
    }

    inline RandomPtr constructRandom(val args) {
        return count(args) == 0 ? new_Random() : new_Random(args[0].as<unsigned int>());
    }

    inline RandomPtr constructIRandom(val object, val invoke) { return std::make_shared<JsIRandom>(object, invoke); }

    inline ExpressionPtr constructInternalExpression(val args) {
        const bool prevalidated = count(args) == 8;
        const int start = prevalidated ? 2 : 1;
        const auto source = text(args[0]);
        const auto arguments = Conversion<ListPtr<ArgumentPtr> >::read(args[start]);
        const auto functions = Conversion<ListPtr<FunctionPtr> >::read(args[start + 1]);
        const auto constants = Conversion<ListPtr<ConstantPtr> >::read(args[start + 2]);
        const bool flag = args[start + 3].as<bool>(), udf = args[start + 4].as<bool>();
        const auto parameters = Conversion<ListPtr<double> >::read(args[start + 5]);
        if (!arguments || !functions || !constants)throw std::invalid_argument(
            "Native internal Expression requires non-null definition lists");
        if (prevalidated) {
            const auto tokens = Conversion<ListPtr<TokenPtr> >::read(args[1]);
            if (!tokens)throw std::invalid_argument("Native prevalidated Expression requires a non-null token list");
            for (int i = 0; i < tokens->size(); i++)if (!tokens->get(i))throw std::invalid_argument(
                "Native prevalidated Expression requires non-null runtime tokens");
            using Factory = ExpressionPtr(*)(const StringPtr &, const ListPtr<TokenPtr> &, const ListPtr<ArgumentPtr> &,
                                             const ListPtr<FunctionPtr> &, const ListPtr<ConstantPtr> &, bool, bool,
                                             const ListPtr<double> &);
            return static_cast<Factory>(&new_Expression)(source, tokens, arguments, functions, constants, flag, udf,
                                                         parameters);
        }
        using Factory = ExpressionPtr(*)(const StringPtr &, const ListPtr<ArgumentPtr> &, const ListPtr<FunctionPtr> &,
                                         const ListPtr<ConstantPtr> &, bool, bool, const ListPtr<double> &);
        return static_cast<Factory>(&new_Expression)(source, arguments, functions, constants, flag, udf, parameters);
    }

    inline ExpressionPtr constructExpressionDefinitions(val args) {
        return new_Expression(definitions(args, 0));
    }

    inline ExpressionPtr constructExpression(val args) {
        if (count(args) == 3 && args[1].typeOf().as<std::string>() == "boolean") {
            const ExpressionPtr source = Conversion<ExpressionPtr>::read(args[0]);
            const CloneCachePtr cache = Conversion<CloneCachePtr>::read(args[2]);
            const bool deep = args[1].as<bool>();
            if (!source || (deep && !cache))throw std::invalid_argument(
                "Native clone constructor requires a source and deep-clone cache");
            return new_Expression(source, deep, cache);
        }
        if ((count(args) == 7 || count(args) == 8) && args[count(args) - 3].typeOf().as<std::string>() == "boolean" &&
            args[count(args) - 2].typeOf().as<std::string>() == "boolean")return constructInternalExpression(args);

        if (count(args) == 0)return new_Expression();
        if (args[0].isNull() || args[0].typeOf().as<std::string>() == "string") {
            const StringPtr source = text(args[0]);
            if (count(args) == 2 && args[1].typeOf().as<std::string>() == "boolean")return new_Expression(
                source, args[1].as<bool>());
            const auto elements = definitions(args, 1);
            return new_Expression(source, elements);
        }
        const auto elements = definitions(args, 0);
        return new_Expression(elements);
    }

    inline ArgumentPtr constructArgument(val args, val invoke, int mode) {
        if (mode == 7) {
            const ArgumentPtr source = Conversion<ArgumentPtr>::read(args[0]);
            const CloneCachePtr cache = Conversion<CloneCachePtr>::read(args[2]);
            const bool deep = args[1].as<bool>();
            if (!source || (deep && !cache))throw std::invalid_argument(
                "Native clone constructor requires a source and deep-clone cache");
            return new_Argument(source, deep, cache);
        }
        const StringPtr name = text(args[0]);
        if (mode == 10) {
            const int value = args[1].as<int>();
            ArgumentConstructionPatternDomain::check(name, value);
            return new_Argument(name, value);
        }
        if (mode == 4) {
            const ArgumentExtensionPtr extension;
            return new_Argument(name, extension);
        }
        if (mode == 3) {
            const auto elements = definitions(args, 1);
            return new_Argument(name, elements);
        }
        if (mode == 1) {
            const ArgumentExtensionPtr extension = std::make_shared<JsArgumentExtension>(args[1], invoke);
            return new_Argument(name, extension);
        }
        if (count(args) >= 2) {
            const auto secondType = args[1].typeOf().as<std::string>();
            if (secondType == "number") {
                const double value = args[1].as<double>();
                ArgumentConstructionPatternDomain::check(name, value);
                return new_Argument(name, value);
            }
            if (secondType == "boolean") {
                // Mode8 records an explicit definitions collection before JS flattens it.
                if (count(args) == 2 && mode != 8)return new_Argument(name, args[1].as<bool>());
                const auto elements = definitions(args, 2);
                return new_Argument(name, args[1].as<bool>(), elements);
            }
            if (secondType == "string" || args[1].isNull()) {
                const StringPtr body = text(args[1]);
                // Mode9 preserves an explicitly supplied (possibly empty) collection.
                if (count(args) == 2 && mode != 9)return new_Argument(name, body);
                const auto elements = definitions(args, 2);
                return new_Argument(name, body, elements);
            }
        }
        if (count(args) == 1)return new_Argument(name);
        const auto elements = definitions(args, 1);
        return new_Argument(name, elements);
    }

    inline ConstantPtr constructConstant(val args, int mode) {
        if (count(args) == 1 && !args[0].isNull() && args[0].typeOf().as<std::string>() != "string")
            return new_Constant(Conversion<ConstantPtr>::read(args[0]));
        const StringPtr name = text(args[0]);
        if (mode == 10) {
            const int value = args[1].as<int>();
            if (count(args) == 3) {
                const StringPtr description = text(args[2]);
                ConstantConstructionPatternDomain::check(name, value, description);
                return new_Constant(name, value, description);
            }
            ConstantConstructionPatternDomain::check(name, value);
            return new_Constant(name, value);
        }
        if (count(args) >= 2 && args[1].typeOf().as<std::string>() == "number") {
            const double value = args[1].as<double>();
            if (count(args) == 3) {
                const StringPtr description = text(args[2]);
                ConstantConstructionPatternDomain::check(name, value, description);
                return new_Constant(name, value, description);
            }
            ConstantConstructionPatternDomain::check(name, value);
            return new_Constant(name, value);
        }
        if (count(args) == 1 && mode != 3)return new_Constant(name);
        const auto elements = definitions(args, 1);
        return new_Constant(name, elements);
    }

    inline FunctionPtr constructFunction(val args, val invoke, int mode) {
        if (mode == 7) {
            const FunctionPtr source = Conversion<FunctionPtr>::read(args[0]);
            const CloneCachePtr cache = Conversion<CloneCachePtr>::read(args[2]);
            const bool deep = args[1].as<bool>();
            if (!source || (deep && !cache))throw std::invalid_argument(
                "Native clone constructor requires a source and deep-clone cache");
            return new_Function(source, deep, cache);
        }
        const StringPtr name = text(args[0]);
        if (mode == 6) {
            const StringPtr body = text(args[1]);
            const auto names = Conversion<ListPtr<StringPtr> >::read(args[2]);
            if (count(args) == 3)return new_Function(name, body, names);
            const auto elements = definitions(args, 3);
            return new_Function(name, body, names, elements);
        }
        if (mode == 4) {
            const FunctionExtensionPtr extension;
            return new_Function(name, extension);
        }
        if (mode == 5) {
            const FunctionExtensionVariadicPtr extension;
            return new_Function(name, extension);
        }
        if (mode == 3) {
            const auto elements = definitions(args, 1);
            return new_Function(name, elements);
        }
        if (mode == 1) {
            const FunctionExtensionPtr extension = std::make_shared<JsFunctionExtension>(args[1], invoke);
            return new_Function(name, extension);
        }
        if (mode == 2) {
            const FunctionExtensionVariadicPtr extension = std::make_shared<JsFunctionExtensionVariadic>(
                args[1], invoke);
            return new_Function(name, extension);
        }
        if (count(args) >= 2 && (args[1].isNull() || args[1].typeOf().as<std::string>() == "string")) {
            const StringPtr body = text(args[1]);
            if (count(args) == 2 && mode != 8)return new_Function(name, body);
            const auto names = new_List<StringPtr>();
            const auto elements = new_List<PrimitiveElementPtr>();
            for (int i = 2; i < count(args); i++) {
                if (args[i].typeOf().as<std::string>() == "string")names->add(text(args[i]));
                else appendDefinition(args[i], elements);
            }
            return new_Function(name, body, names, elements);
        }
        if (count(args) == 1)return new_Function(name);
        const auto elements = definitions(args, 1);
        return new_Function(name, elements);
    }

    inline RecursiveArgumentPtr constructRecursiveArgument(val args, int mode) {
        if (mode == 7) {
            const RecursiveArgumentPtr source = Conversion<RecursiveArgumentPtr>::read(args[0]);
            const CloneCachePtr cache = Conversion<CloneCachePtr>::read(args[1]);
            if (!source || !cache)throw std::invalid_argument(
                "Native recursive clone constructor requires a source and cache");
            return new_RecursiveArgument(source, cache);
        }
        const StringPtr name = text(args[0]);
        if (count(args) >= 3 && (args[1].isNull() || args[1].typeOf().as<std::string>() == "string")) {
            const StringPtr body = text(args[1]);
            if (args[2].isNull() || args[2].typeOf().as<std::string>() == "string") {
                const StringPtr indexName = text(args[2]);
                return new_RecursiveArgument(name, body, indexName);
            }
            const ArgumentPtr index = Conversion<ArgumentPtr>::read(args[2]);
            if (count(args) == 3 && mode != 3)return new_RecursiveArgument(name, body, index);
            const auto elements = definitions(args, 3);
            return new_RecursiveArgument(name, body, index, elements);
        }
        if (count(args) == 1)return new_RecursiveArgument<>(name);
        const auto elements = definitions(args, 1);
        return new_RecursiveArgument(name, elements);
    }

    template<class T>
    bool processCalculationList(VariadicProcessorDoubleOrUdf &processor, const val &value, const char *name) {
        if (!value.instanceof(val::module_property(name)))return false;
        processor.processElement(value.as<ListPtr<T> >());
        return true;
    }

    inline double calculateFunctionParameters(FunctionPtr function, val args) {
        VariadicProcessorDoubleOrUdf processor;
        for (int i = 0; i < count(args); i++) {
            if (args[i].typeOf().as<std::string>() == "number")processor.processElement(args[i].as<double>());
            else {
                const val value = args[i];
                if (!value.isNull() && (processCalculationList<double>(processor, value, "NativeDoubleList")
                                        || processCalculationList<int>(processor, value, "NativeIntList")
                                        || processCalculationList<ArgumentPtr>(processor, value, "NativeArgumentList")
                                        || processCalculationList<RecursiveArgumentPtr>(
                                            processor, value, "NativeRecursiveArgumentList")
                                        || processCalculationList<ConstantPtr>(processor, value, "NativeConstantList")
                                        || processCalculationList<FunctionPtr>(processor, value, "NativeFunctionList")
                                        || processCalculationList<ExpressionPtr>(
                                            processor, value, "NativeExpressionList")
                                        || processCalculationList<PrimitiveElementPtr>(
                                            processor, value, "NativePrimitiveElementList")))
                    continue;
                const auto element = Conversion<PrimitiveElementPtr>::read(args[i]);
                if (const auto argument = std::dynamic_pointer_cast<Argument>(element))processor.processElement(
                    argument);
                else if (const auto constant = std::dynamic_pointer_cast<Constant>(element))processor.processElement(
                    constant);
                else if (const auto dependent = std::dynamic_pointer_cast<Function>(element))processor.processElement(
                    dependent);
                else if (const auto expression = std::dynamic_pointer_cast<Expression>(element))processor.
                        processElement(expression);
                else throw std::invalid_argument("Unsupported function calculation parameter");
            }
        }
        return function->calculate(processor.paramsDouble, processor.paramsArgument, processor.paramsConstant,
                                   processor.paramsFunction, processor.paramsExpression);
    }

    inline SpecialValuePtr constructSpecialValue(val args) {
        const double x = args[0].as<double>(), value = args[1].as<double>();
        return count(args) == 2 ? new_SpecialValue(x, value) : new_SpecialValue(x, value, args[2].as<double>());
    }

    inline SpecialValueTrigonometricPtr constructSpecialValueTrigonometric(val args) {
        return new_SpecialValueTrigonometric(args[0].as<double>(), args[1].as<double>(), args[2].as<double>(),
                                             args[3].as<double>(), args[4].as<double>(), args[5].as<double>(),
                                             args[6].as<double>());
    }

    // Reify the ORIGINAL heterogeneous variadic removal templates. Native
    // VariadicProcessor retains its string-first/object-second order and all cache
    // invalidation behavior; JavaScript only validates/transports the input pack.
    template<class C, class T, int Kind>
    void removeDefinitionPack(std::shared_ptr<C> self, val args) {
        const auto names = new_List<StringPtr>();
        const auto objects = new_List<std::shared_ptr<T> >();
        for (int i = 0; i < count(args); i++) {
            if (args[i].isNull() || args[i].typeOf().as<std::string>() == "string")names->add(
                Conversion<StringPtr>::read(args[i]));
            else objects->add(Conversion<std::shared_ptr<T> >::read(args[i]));
        }
        if constexpr (Kind == 0)self->removeArguments(names, objects);
        if constexpr (Kind == 1)self->removeConstants(names, objects);
        if constexpr (Kind == 2)self->removeFunctions(names, objects);
    }

    inline PrimesCachePtr constructPrimesCache(val args) {
        return count(args) ? new_PrimesCache(args[0].as<int>()) : new_PrimesCache();
    }

    inline KeyWordPtr constructKeyWord(val args) {
        if (!count(args))return new_KeyWord();
        const StringPtr word = text(args[0]), description = text(args[1]), syntax = text(args[3]), since =
                text(args[4]);
        return new_KeyWord(word, description, args[2].as<int>(), syntax, since, args[5].as<int>());
    }

    inline TokenPtr constructToken(val args) {
        return count(args) ? Token::clone(Conversion<TokenPtr>::read(args[0])) : new_Token();
    }

    template<class T>
    ListPtr<T> constructList(val args) { return count(args) ? new_List<T>(args[0].as<int>()) : new_List<T>(); }

    // D1 helper construction: only original factories and direct standard shared_ptr boxing.
    inline miscellaneous::FunctionParameterPtr constructHelperFunctionParameter(val args) {
        return miscellaneous::new_FunctionParameter(Conversion<ListPtr<TokenPtr> >::read(args[0]), text(args[1]),
                                                    args[2].as<int>(), args[3].as<int>());
    }

    inline miscellaneous::IterativeOperatorParametersPtr constructHelperIterativeOperatorParameters(val args) {
        const auto parameters = Conversion<ListPtr<miscellaneous::FunctionParameterPtr> >::read(args[0]);
        if (!parameters || parameters->size() < 4)throw std::invalid_argument(
            "IterativeOperatorParameters requires at least four native parameters");
        return miscellaneous::new_IterativeOperatorParameters(parameters);
    }

    inline miscellaneous::SyntaxStackElementPtr constructHelperSyntaxStackElement(val args) {
        return miscellaneous::new_SyntaxStackElement(text(args[0]), args[1].as<int>());
    }

    inline miscellaneous::HeadEqBodyPtr constructHelperHeadEqBody(val args) {
        const auto definition = text(args[0]);
        if (!definition)throw std::invalid_argument("HeadEqBody requires a definition string");
        return miscellaneous::new_HeadEqBody(definition);
    }

    template<class Comparator>
    val compareHelperKeywords(const std::shared_ptr<Comparator> &self, val args) {
        const auto left = Conversion<KeyWordPtr>::read(args[0]), right = Conversion<KeyWordPtr>::read(args[1]);
        if (!left || !right || !left->wordString || !right->wordString)throw std::invalid_argument(
            "Keyword comparison requires initialized keyword strings");
        return val((*self)(left, right));
    }

    inline miscellaneous::ArgumentParameterPtr constructHelperArgumentParameter(val) {
        return miscellaneous::new_ArgumentParameter();
    }

    inline miscellaneous::TokenStackElementPtr constructHelperTokenStackElement(val) {
        return miscellaneous::new_TokenStackElement();
    }

    inline miscellaneous::TokenModificationPtr constructHelperTokenModification(val) {
        return miscellaneous::new_TokenModification();
    }

    inline miscellaneous::TokenPartPtr constructHelperTokenPart(val) { return miscellaneous::new_TokenPart(); }

    inline miscellaneous::CompilationDetailsPtr constructHelperCompilationDetails(val) {
        return miscellaneous::new_CompilationDetails();
    }

    inline miscellaneous::CompiledElementPtr constructHelperCompiledElement(val) {
        return miscellaneous::new_CompiledElement();
    }

    inline CloneCachePtr constructHelperCloneCache(val) { return new_CloneCache(); }

    inline std::shared_ptr<miscellaneous::KwStrComparator> constructHelperKwStrComparator(val) {
        return std::make_shared<miscellaneous::KwStrComparator>();
    }

    inline std::shared_ptr<miscellaneous::DescKwLenComparator> constructHelperDescKwLenComparator(val) {
        return std::make_shared<miscellaneous::DescKwLenComparator>();
    }

    inline std::shared_ptr<miscellaneous::KwTypeComparator> constructHelperKwTypeComparator(val) {
        return std::make_shared<miscellaneous::KwTypeComparator>();
    }
}
#pragma pop_macro("null")
