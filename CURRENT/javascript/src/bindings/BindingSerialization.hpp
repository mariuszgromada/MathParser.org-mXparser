/*
 * @(#)BindingSerialization.hpp        6.2.0    2026-11-04
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

// D1 reification of native serialization templates and lossless byte transport.
#pragma once
#include "BindingSupport.hpp"
#pragma push_macro("null")
#undef null
namespace mx_binding {
    inline VectorPtr<char> readBytes(const val &value) {
        if (value.isNull())return nullptr;
        if (!value.instanceof(val::global("Uint8Array")))return value.as<VectorPtr<char> >();
        const size_t length = value["length"].as<size_t>();
        auto result = std::make_shared<std::vector<char> >(length);
        val view = val(emscripten::typed_memory_view(length, reinterpret_cast<unsigned char *>(result->data())));
        view.call<void>("set", value);
        return result;
    }

    inline val writeBytes(const char *data, size_t length) {
        const auto view = val(emscripten::typed_memory_view(length, reinterpret_cast<const unsigned char *>(data)));
        return val::global("Uint8Array").new_(view);
    }

    inline StdStringPtr readPath(const val &value) {
        if (value.isNull())return nullptr;
        if (value.instanceof(val::global("Uint8Array"))) {
            const auto bytes = readBytes(value);
            return new_StdString(std::string(bytes->begin(), bytes->end()));
        }
        return new_StdString(value.as<std::string>());
    }

    template<class T>
    val serializeRoot(val object, int format, val path) {
        const auto root = Conversion<std::shared_ptr<T> >::read(object);
        if (format == 2)return val(SerializationUtils::serializeToFile<T>(root, readPath(path)));
        if (format == 1) {
            const auto data = SerializationUtils::serializeToString<T>(root);
            return data ? writeBytes(data->data(), data->size()) : val::null();
        }
        const auto data = SerializationUtils::serializeToBytes<T>(root);
        return data ? writeBytes(data->data(), data->size()) : val::null();
    }

    template<class T>
    val deserializeRoot(val data, int format) {
        std::shared_ptr<T> root;
        if (format == 2)root = SerializationUtils::deserializeFromFile<T>(readPath(data));
        else {
            const auto bytes = readBytes(data);
            if (format == 1) {
                const StdStringPtr binary = bytes ? new_StdString(std::string(bytes->begin(), bytes->end())) : nullptr;
                root = SerializationUtils::deserializeFromString<T>(binary);
            } else root = SerializationUtils::deserializeFromBytes<T>(bytes);
        }
        return root ? val(root) : val::null();
    }

    inline val serialize(int type, int format, val object, val path) {
        switch (type) {
            case 0: return serializeRoot<Expression>(object, format, path);
            case 1: return serializeRoot<Argument>(object, format, path);
            case 2: return serializeRoot<Constant>(object, format, path);
            case 3: return serializeRoot<Function>(object, format, path);
            case 4: return serializeRoot<RecursiveArgument>(object, format, path);
            case 5: return serializeRoot<CalcStepsRegister>(object, format, path);
            case 6: return serializeRoot<CalcStepRecord>(object, format, path);
            case 7: return serializeRoot<Token>(object, format, path);
            case 8: return serializeRoot<KeyWord>(object, format, path);
            case 9: return serializeRoot<miscellaneous::FunctionParameter>(object, format, path);
            case 10: return serializeRoot<miscellaneous::IterativeOperatorParameters>(object, format, path);
            case 11: return serializeRoot<miscellaneous::ArgumentParameter>(object, format, path);
            case 12: return serializeRoot<miscellaneous::TokenStackElement>(object, format, path);
            case 13: return serializeRoot<miscellaneous::SyntaxStackElement>(object, format, path);
            case 14: return serializeRoot<miscellaneous::KwStrComparator>(object, format, path);
            case 15: return serializeRoot<miscellaneous::DescKwLenComparator>(object, format, path);
            case 16: return serializeRoot<miscellaneous::KwTypeComparator>(object, format, path);
            case 17: return serializeRoot<miscellaneous::HeadEqBody>(object, format, path);
            case 18: return serializeRoot<miscellaneous::TokenModification>(object, format, path);
            case 19: return serializeRoot<miscellaneous::TokenPart>(object, format, path);
            case 20: return serializeRoot<miscellaneous::CompiledElement>(object, format, path);
            case 21: return serializeRoot<miscellaneous::CompilationDetails>(object, format, path);
            case 22: return serializeRoot<PrimitiveElement>(object, format, path);
            case 23: return serializeRoot<List<double> >(object, format, path);
            case 24: return serializeRoot<List<int> >(object, format, path);
            case 25: return serializeRoot<List<Long> >(object, format, path);
            case 26: return serializeRoot<List<StringPtr> >(object, format, path);
            case 27: return serializeRoot<List<ArgumentPtr> >(object, format, path);
            case 28: return serializeRoot<List<ConstantPtr> >(object, format, path);
            case 29: return serializeRoot<List<FunctionPtr> >(object, format, path);
            case 30: return serializeRoot<List<ExpressionPtr> >(object, format, path);
            case 31: return serializeRoot<List<PrimitiveElementPtr> >(object, format, path);
            case 32: return serializeRoot<List<CalcStepRecordPtr> >(object, format, path);
            case 33: return serializeRoot<List<TokenPtr> >(object, format, path);
            case 34: return serializeRoot<List<miscellaneous::FunctionParameterPtr> >(object, format, path);
            case 35: return serializeRoot<List<miscellaneous::CompiledElementPtr> >(object, format, path);
            case 36: return serializeRoot<List<KeyWordPtr> >(object, format, path);
            case 37: return serializeRoot<List<RecursiveArgumentPtr> >(object, format, path);
            case 38: return serializeRoot<std::vector<PrimitiveElementPtr> >(object, format, path);
            case 39: return serializeRoot<std::vector<CalcStepRecordPtr> >(object, format, path);
            case 40: return serializeRoot<std::vector<double> >(object, format, path);
            case 41: return serializeRoot<std::vector<int> >(object, format, path);
            case 42: return serializeRoot<std::vector<Long> >(object, format, path);
            case 43: return serializeRoot<std::vector<StringPtr> >(object, format, path);
            case 44: return serializeRoot<std::vector<ArgumentPtr> >(object, format, path);
            case 45: return serializeRoot<std::vector<ConstantPtr> >(object, format, path);
            case 46: return serializeRoot<std::vector<FunctionPtr> >(object, format, path);
            case 47: return serializeRoot<std::vector<ExpressionPtr> >(object, format, path);
            case 48: return serializeRoot<std::vector<miscellaneous::FunctionParameterPtr> >(object, format, path);
            case 49: return serializeRoot<std::vector<miscellaneous::CompiledElementPtr> >(object, format, path);
            case 50: return serializeRoot<std::vector<TokenPtr> >(object, format, path);
            case 51: return serializeRoot<std::vector<KeyWordPtr> >(object, format, path);
            case 52: return serializeRoot<std::vector<RecursiveArgumentPtr> >(object, format, path);
            case 53: return serializeRoot<std::vector<char> >(object, format, path);
            case 54: return serializeRoot<std::vector<Char> >(object, format, path);
            default: throw std::invalid_argument("Unsupported native serialization type");
        }
    }

    inline val deserialize(int type, int format, val data) {
        switch (type) {
            case 0: return deserializeRoot<Expression>(data, format);
            case 1: return deserializeRoot<Argument>(data, format);
            case 2: return deserializeRoot<Constant>(data, format);
            case 3: return deserializeRoot<Function>(data, format);
            case 4: return deserializeRoot<RecursiveArgument>(data, format);
            case 5: return deserializeRoot<CalcStepsRegister>(data, format);
            case 6: return deserializeRoot<CalcStepRecord>(data, format);
            case 7: return deserializeRoot<Token>(data, format);
            case 8: return deserializeRoot<KeyWord>(data, format);
            case 9: return deserializeRoot<miscellaneous::FunctionParameter>(data, format);
            case 10: return deserializeRoot<miscellaneous::IterativeOperatorParameters>(data, format);
            case 11: return deserializeRoot<miscellaneous::ArgumentParameter>(data, format);
            case 12: return deserializeRoot<miscellaneous::TokenStackElement>(data, format);
            case 13: return deserializeRoot<miscellaneous::SyntaxStackElement>(data, format);
            case 14: return deserializeRoot<miscellaneous::KwStrComparator>(data, format);
            case 15: return deserializeRoot<miscellaneous::DescKwLenComparator>(data, format);
            case 16: return deserializeRoot<miscellaneous::KwTypeComparator>(data, format);
            case 17: return deserializeRoot<miscellaneous::HeadEqBody>(data, format);
            case 18: return deserializeRoot<miscellaneous::TokenModification>(data, format);
            case 19: return deserializeRoot<miscellaneous::TokenPart>(data, format);
            case 20: return deserializeRoot<miscellaneous::CompiledElement>(data, format);
            case 21: return deserializeRoot<miscellaneous::CompilationDetails>(data, format);
            case 22: return deserializeRoot<PrimitiveElement>(data, format);
            case 23: return deserializeRoot<List<double> >(data, format);
            case 24: return deserializeRoot<List<int> >(data, format);
            case 25: return deserializeRoot<List<Long> >(data, format);
            case 26: return deserializeRoot<List<StringPtr> >(data, format);
            case 27: return deserializeRoot<List<ArgumentPtr> >(data, format);
            case 28: return deserializeRoot<List<ConstantPtr> >(data, format);
            case 29: return deserializeRoot<List<FunctionPtr> >(data, format);
            case 30: return deserializeRoot<List<ExpressionPtr> >(data, format);
            case 31: return deserializeRoot<List<PrimitiveElementPtr> >(data, format);
            case 32: return deserializeRoot<List<CalcStepRecordPtr> >(data, format);
            case 33: return deserializeRoot<List<TokenPtr> >(data, format);
            case 34: return deserializeRoot<List<miscellaneous::FunctionParameterPtr> >(data, format);
            case 35: return deserializeRoot<List<miscellaneous::CompiledElementPtr> >(data, format);
            case 36: return deserializeRoot<List<KeyWordPtr> >(data, format);
            case 37: return deserializeRoot<List<RecursiveArgumentPtr> >(data, format);
            case 38: return deserializeRoot<std::vector<PrimitiveElementPtr> >(data, format);
            case 39: return deserializeRoot<std::vector<CalcStepRecordPtr> >(data, format);
            case 40: return deserializeRoot<std::vector<double> >(data, format);
            case 41: return deserializeRoot<std::vector<int> >(data, format);
            case 42: return deserializeRoot<std::vector<Long> >(data, format);
            case 43: return deserializeRoot<std::vector<StringPtr> >(data, format);
            case 44: return deserializeRoot<std::vector<ArgumentPtr> >(data, format);
            case 45: return deserializeRoot<std::vector<ConstantPtr> >(data, format);
            case 46: return deserializeRoot<std::vector<FunctionPtr> >(data, format);
            case 47: return deserializeRoot<std::vector<ExpressionPtr> >(data, format);
            case 48: return deserializeRoot<std::vector<miscellaneous::FunctionParameterPtr> >(data, format);
            case 49: return deserializeRoot<std::vector<miscellaneous::CompiledElementPtr> >(data, format);
            case 50: return deserializeRoot<std::vector<TokenPtr> >(data, format);
            case 51: return deserializeRoot<std::vector<KeyWordPtr> >(data, format);
            case 52: return deserializeRoot<std::vector<RecursiveArgumentPtr> >(data, format);
            case 53: return deserializeRoot<std::vector<char> >(data, format);
            case 54: return deserializeRoot<std::vector<Char> >(data, format);
            default: throw std::invalid_argument("Unsupported native deserialization type");
        }
    }
}
#pragma pop_macro("null")
