/*
 * @(#)BindingVariadicProcessor.hpp        6.2.0    2026-11-04
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
#pragma push_macro("null")
#undef null
namespace mx_binding {
    using ProcessorPtr = std::shared_ptr<wrapper::VariadicProcessor>;
    inline ProcessorPtr constructHelperVariadicProcessor(val) { return std::make_shared<wrapper::VariadicProcessor>(); }

    inline ProcessorPtr constructHelperVariadicProcessorNull(val) {
        return std::make_shared<wrapper::VariadicProcessorNull>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorDouble(val) {
        return std::make_shared<wrapper::VariadicProcessorDouble>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorDoubleOrUdf(val) {
        return std::make_shared<wrapper::VariadicProcessorDoubleOrUdf>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorString(val) {
        return std::make_shared<wrapper::VariadicProcessorString>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorStringOrArgument(val) {
        return std::make_shared<wrapper::VariadicProcessorStringOrArgument>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorStringOrFunction(val) {
        return std::make_shared<wrapper::VariadicProcessorStringOrFunction>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorStringOrConstant(val) {
        return std::make_shared<wrapper::VariadicProcessorStringOrConstant>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorStringOrUdf(val) {
        return std::make_shared<wrapper::VariadicProcessorStringOrUdf>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorPrimitiveElement(val) {
        return std::make_shared<wrapper::VariadicProcessorPrimitiveElement>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorArgument(val) {
        return std::make_shared<wrapper::VariadicProcessorArgument>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorFunction(val) {
        return std::make_shared<wrapper::VariadicProcessorFunction>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorConstant(val) {
        return std::make_shared<wrapper::VariadicProcessorConstant>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorExpression(val) {
        return std::make_shared<wrapper::VariadicProcessorExpression>();
    }

    inline ProcessorPtr constructHelperVariadicProcessorUdfs(val) {
        return std::make_shared<wrapper::VariadicProcessorUdfs>();
    }

    template<class A>
    void requireProcessorState(wrapper::VariadicProcessor &self) {
        if constexpr (std::is_same_v<A, double>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorString) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrArgument) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrFunction) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrUdf) || typeid(self) == typeid(
                    wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorExpression) || typeid(self) == typeid(wrapper::VariadicProcessorUdfs))
                return;
            if (!self.paramsDouble)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, int>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorString) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrArgument) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrFunction) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrUdf) || typeid(self) == typeid(
                    wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorExpression) || typeid(self) == typeid(wrapper::VariadicProcessorUdfs))
                return;
            if (!self.paramsDouble)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const String &>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorDoubleOrUdf)
                || typeid(self) == typeid(wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorExpression) || typeid(self) == typeid(wrapper::VariadicProcessorUdfs))
                return;
            if (!self.paramsString)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const String *>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorDoubleOrUdf)
                || typeid(self) == typeid(wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorExpression) || typeid(self) == typeid(wrapper::VariadicProcessorUdfs))
                return;
            if (!self.paramsString)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const std::string &>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorDoubleOrUdf)
                || typeid(self) == typeid(wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorExpression) || typeid(self) == typeid(wrapper::VariadicProcessorUdfs))
                return;
            if (!self.paramsString)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const std::string *>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorDoubleOrUdf)
                || typeid(self) == typeid(wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorExpression) || typeid(self) == typeid(wrapper::VariadicProcessorUdfs))
                return;
            if (!self.paramsString)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const Char *>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorDoubleOrUdf)
                || typeid(self) == typeid(wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorExpression) || typeid(self) == typeid(wrapper::VariadicProcessorUdfs))
                return;
            if (!self.paramsString)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const char *>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorDoubleOrUdf)
                || typeid(self) == typeid(wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorExpression) || typeid(self) == typeid(wrapper::VariadicProcessorUdfs))
                return;
            if (!self.paramsString)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const StringPtr &>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorDoubleOrUdf)
                || typeid(self) == typeid(wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorExpression) || typeid(self) == typeid(wrapper::VariadicProcessorUdfs))
                return;
            if (!self.paramsString)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const PrimitiveElementPtr &>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorString) ||
                typeid(self) == typeid(wrapper::VariadicProcessorStringOrArgument) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrFunction) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorExpression))return;
            if (!self.paramsPrimitiveElement)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const ArgumentPtr &>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorString) ||
                typeid(self) == typeid(wrapper::VariadicProcessorStringOrFunction) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorFunction) || typeid(self) == typeid(wrapper::VariadicProcessorConstant) ||
                typeid(self) == typeid(wrapper::VariadicProcessorExpression))return;
            if (!self.paramsArgument || !self.paramsPrimitiveElement)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const RecursiveArgumentPtr &>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorString) ||
                typeid(self) == typeid(wrapper::VariadicProcessorStringOrFunction) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorFunction) || typeid(self) == typeid(wrapper::VariadicProcessorConstant) ||
                typeid(self) == typeid(wrapper::VariadicProcessorExpression))return;
            if (!self.paramsArgument || !self.paramsPrimitiveElement)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const FunctionPtr &>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorString) ||
                typeid(self) == typeid(wrapper::VariadicProcessorStringOrArgument) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorConstant) ||
                typeid(self) == typeid(wrapper::VariadicProcessorExpression))return;
            if (!self.paramsFunction || !self.paramsPrimitiveElement)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const ConstantPtr &>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorString) ||
                typeid(self) == typeid(wrapper::VariadicProcessorStringOrArgument) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrFunction) || typeid(self) == typeid(
                    wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorExpression))return;
            if (!self.paramsConstant || !self.paramsPrimitiveElement)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
        if constexpr (std::is_same_v<A, const ExpressionPtr &>) {
            if (typeid(self) == typeid(wrapper::VariadicProcessorNull) || typeid(self) == typeid(
                    wrapper::VariadicProcessorDouble) || typeid(self) == typeid(wrapper::VariadicProcessorString) ||
                typeid(self) == typeid(wrapper::VariadicProcessorStringOrArgument) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrFunction) || typeid(self) == typeid(
                    wrapper::VariadicProcessorStringOrConstant) || typeid(self) == typeid(
                    wrapper::VariadicProcessorPrimitiveElement) || typeid(self) == typeid(
                    wrapper::VariadicProcessorArgument) || typeid(self) == typeid(wrapper::VariadicProcessorFunction) ||
                typeid(self) == typeid(wrapper::VariadicProcessorConstant))return;
            if (!self.paramsExpression || !self.paramsPrimitiveElement)throw std::invalid_argument(
                "Native processor requires initialized output lists for this overload");
        }
    }

    template<>
    struct NativeMemberDomain<static_cast<void(wrapper::VariadicProcessor::*)(double)>(&
                wrapper::VariadicProcessor::ifElementTypeIs)> {
        static void check(wrapper::VariadicProcessor &self, const Value<double> &) {
            requireProcessorState<double>(self);
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(wrapper::VariadicProcessor::*)(int)>(&
                wrapper::VariadicProcessor::ifElementTypeIs)> {
        static void check(wrapper::VariadicProcessor &self, const Value<int> &) { requireProcessorState<int>(self); }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(wrapper::VariadicProcessor::*)(const StringPtr &)>(&
                wrapper::VariadicProcessor::ifElementTypeIs)> {
        static void check(wrapper::VariadicProcessor &self, const Value<const StringPtr &> &) {
            requireProcessorState<const StringPtr &>(self);
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(wrapper::VariadicProcessor::*)(const PrimitiveElementPtr &)>(&
                wrapper::VariadicProcessor::ifElementTypeIs)> {
        static void check(wrapper::VariadicProcessor &self, const Value<const PrimitiveElementPtr &> &) {
            requireProcessorState<const PrimitiveElementPtr &>(self);
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(wrapper::VariadicProcessor::*)(const ArgumentPtr &)>(&
                wrapper::VariadicProcessor::ifElementTypeIs)> {
        static void check(wrapper::VariadicProcessor &self, const Value<const ArgumentPtr &> &) {
            requireProcessorState<const ArgumentPtr &>(self);
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(wrapper::VariadicProcessor::*)(const RecursiveArgumentPtr &)>(&
                wrapper::VariadicProcessor::ifElementTypeIs)> {
        static void check(wrapper::VariadicProcessor &self, const Value<const RecursiveArgumentPtr &> &) {
            requireProcessorState<const RecursiveArgumentPtr &>(self);
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(wrapper::VariadicProcessor::*)(const FunctionPtr &)>(&
                wrapper::VariadicProcessor::ifElementTypeIs)> {
        static void check(wrapper::VariadicProcessor &self, const Value<const FunctionPtr &> &) {
            requireProcessorState<const FunctionPtr &>(self);
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(wrapper::VariadicProcessor::*)(const ConstantPtr &)>(&
                wrapper::VariadicProcessor::ifElementTypeIs)> {
        static void check(wrapper::VariadicProcessor &self, const Value<const ConstantPtr &> &) {
            requireProcessorState<const ConstantPtr &>(self);
        }
    };

    template<>
    struct NativeMemberDomain<static_cast<void(wrapper::VariadicProcessor::*)(const ExpressionPtr &)>(&
                wrapper::VariadicProcessor::ifElementTypeIs)> {
        static void check(wrapper::VariadicProcessor &self, const Value<const ExpressionPtr &> &) {
            requireProcessorState<const ExpressionPtr &>(self);
        }
    };

    template<int Kind>
    val processorStringOverload(const ProcessorPtr &self, val args) {
        const auto wide = args[0].isNull() ? StringPtr{} : S(args[0].as<String>());
        // Null value-string pointers are defined native inputs too. Preserve the
        // existing native output-list precondition before the actual virtual call.
        if constexpr (Kind == 1) {
            if (!wide) {
                requireProcessorState<const String *>(*self);
                self->ifElementTypeIs(static_cast<const String *>(nullptr));
                return val::undefined();
            }
        }
        if constexpr (Kind == 3) {
            if (!wide) {
                requireProcessorState<const std::string *>(*self);
                self->ifElementTypeIs(static_cast<const std::string *>(nullptr));
                return val::undefined();
            }
        }
        if constexpr (Kind == 4) {
            requireProcessorState<const Char *>(*self);
            self->ifElementTypeIs(wide ? wide->c_str() : static_cast<const Char *>(nullptr));
        } else if constexpr (Kind == 5) {
            requireProcessorState<const char *>(*self);
            const auto bytes = wide ? UTF16toUTF8(*wide) : std::string{};
            self->ifElementTypeIs(wide ? bytes.c_str() : static_cast<const char *>(nullptr));
        } else {
            if (!wide)throw std::invalid_argument("Native value-string overload requires non-null text");
            if constexpr (Kind == 0) {
                requireProcessorState<const String &>(*self);
                self->ifElementTypeIs(*wide);
            }
            if constexpr (Kind == 1) {
                requireProcessorState<const String *>(*self);
                self->ifElementTypeIs(wide.get());
            }
            if constexpr (Kind == 2) {
                requireProcessorState<const std::string &>(*self);
                const auto bytes = UTF16toUTF8(*wide);
                self->ifElementTypeIs(bytes);
            }
            if constexpr (Kind == 3) {
                requireProcessorState<const std::string *>(*self);
                const auto bytes = UTF16toUTF8(*wide);
                self->ifElementTypeIs(&bytes);
            }
        }
        return val::undefined();
    }

    template<class T>
    void processorElement(const ProcessorPtr &self, const val &value) {
        if constexpr (std::is_arithmetic_v<T>)requireProcessorState<T>(*self);
        else requireProcessorState<const T &>(*self);
        self->processElement(Conversion<T>::read(value));
    }

    template<class T>
    void processorListElement(const ProcessorPtr &self, const val &value) {
        const auto list = Conversion<ListPtr<T> >::read(value);
        if (list && list->size() > 0) {
            if constexpr (std::is_arithmetic_v<T>)requireProcessorState<T>(*self);
            else requireProcessorState<const T &>(*self);
        }
        self->processElement(list);
    }

    inline void processorApplyElement(const ProcessorPtr &self, const val &input) {
        const auto tag = input[0].as<std::string>();
        const auto value = input[1];
        if (tag == "double") {
            processorElement<double>(self, value);
            return;
        }
        if (tag == "int") {
            processorElement<int>(self, value);
            return;
        }
        if (tag == "StringPtr") {
            processorElement<StringPtr>(self, value);
            return;
        }
        if (tag == "PrimitiveElementPtr") {
            processorElement<PrimitiveElementPtr>(self, value);
            return;
        }
        if (tag == "ArgumentPtr") {
            processorElement<ArgumentPtr>(self, value);
            return;
        }
        if (tag == "RecursiveArgumentPtr") {
            processorElement<RecursiveArgumentPtr>(self, value);
            return;
        }
        if (tag == "FunctionPtr") {
            processorElement<FunctionPtr>(self, value);
            return;
        }
        if (tag == "ConstantPtr") {
            processorElement<ConstantPtr>(self, value);
            return;
        }
        if (tag == "ExpressionPtr") {
            processorElement<ExpressionPtr>(self, value);
            return;
        }
        if (tag == "String") {
            val args = val::array();
            args.call<void>("push", value);
            processorStringOverload<0>(self, args);
            return;
        }
        if (tag == "String*") {
            val args = val::array();
            args.call<void>("push", value);
            processorStringOverload<1>(self, args);
            return;
        }
        if (tag == "std::string") {
            val args = val::array();
            args.call<void>("push", value);
            processorStringOverload<2>(self, args);
            return;
        }
        if (tag == "std::string*") {
            val args = val::array();
            args.call<void>("push", value);
            processorStringOverload<3>(self, args);
            return;
        }
        if (tag == "Char*") {
            val args = val::array();
            args.call<void>("push", value);
            processorStringOverload<4>(self, args);
            return;
        }
        if (tag == "char*") {
            val args = val::array();
            args.call<void>("push", value);
            processorStringOverload<5>(self, args);
            return;
        }
        if (tag == "List<double>") {
            processorListElement<double>(self, value);
            return;
        }
        if (tag == "List<int>") {
            processorListElement<int>(self, value);
            return;
        }
        if (tag == "List<StringPtr>") {
            processorListElement<StringPtr>(self, value);
            return;
        }
        if (tag == "List<PrimitiveElementPtr>") {
            processorListElement<PrimitiveElementPtr>(self, value);
            return;
        }
        if (tag == "List<ArgumentPtr>") {
            processorListElement<ArgumentPtr>(self, value);
            return;
        }
        if (tag == "List<RecursiveArgumentPtr>") {
            processorListElement<RecursiveArgumentPtr>(self, value);
            return;
        }
        if (tag == "List<FunctionPtr>") {
            processorListElement<FunctionPtr>(self, value);
            return;
        }
        if (tag == "List<ConstantPtr>") {
            processorListElement<ConstantPtr>(self, value);
            return;
        }
        if (tag == "List<ExpressionPtr>") {
            processorListElement<ExpressionPtr>(self, value);
            return;
        }
        throw std::invalid_argument("Unsupported native processor input type");
    }

    inline val processorPack(const ProcessorPtr &self, val values, bool cleanup) {
        for (unsigned i = 0; i < values["length"].as<unsigned>(); i++)processorApplyElement(self, values[i]);
        if (cleanup)self->makeOutputNullIfOnlyNulls();
        return val::undefined();
    }

    inline val processorOneElement(const ProcessorPtr &self, val value) {
        processorApplyElement(self, value);
        return val::undefined();
    }


    // These registered derived overrides only call the original diagnostic helper.
    // The base raw-pointer overloads ADOPT ownership and must never use this bridge.
    template<auto Method>
    struct RejectedProcessorPointerCall;

    template<class C, class A, void(C::*Method)(A *)>
    struct RejectedProcessorPointerCall<Method> {
        static_assert(!std::is_same_v<C, wrapper::VariadicProcessor>);

        static val call(val self, val args) {
            const auto processor = self.as<ProcessorPtr>();
            auto *typed = dynamic_cast<C *>(processor.get());
            if (!typed)throw std::invalid_argument("Native raw-pointer overload requires its declared processor class");
            const auto argument = Conversion<std::shared_ptr<A> >::read(args[0]);
            (typed->*Method)(argument.get());
            return val::undefined();
        }
    };

    // Reify the existing math templates with the original native runtime pack
    // processor and original List overload. No arithmetic or type diagnostics
    // are implemented here; processorPack preserves native element order.
    // Reify exactly EXECUTE_FUNCTION_VARIADIC(VariadicProcessorUdfs,...).
    // Original processArgs classification/order/null cleanup and original member
    // body own all semantics. Empty packs skip processor creation and invocation.
    template<class C, void(C::*Method)(const ListPtr<PrimitiveElementPtr> &)>
    struct UdfMemberPackCall {
        static val call(val object, val args) {
            const auto self = Conversion<std::shared_ptr<C> >::read(object);
            const auto inputs = args[0];
            if (inputs["length"].as<unsigned>() == 0)return val::undefined();
            const auto processor = constructHelperVariadicProcessorUdfs(val::undefined());
            processorPack(processor, inputs, true);
            const auto &definitions = processor->paramsPrimitiveElement;
            if (definitions && !definitions->isEmpty())std::invoke(Method, *self, definitions);
            return val::undefined();
        }
    };

    // The same original EXECUTE_FUNCTION_VARIADIC macro, with its native
    // processor class and native typed output field selected at compile time.
    template<class C, class Processor, class Item, void(C::*Method)(const ListPtr<Item> &), ListPtr<Item>
        wrapper::VariadicProcessor::*Output>
    struct TypedMemberPackCall {
        static val call(val object, val args) {
            const auto self = Conversion<std::shared_ptr<C> >::read(object);
            const auto inputs = args[0];
            if (inputs["length"].as<unsigned>() == 0)return val::undefined();
            const ProcessorPtr processor = std::make_shared<Processor>();
            processorPack(processor, inputs, true);
            const auto &entries = processor.get()->*Output;
            if (entries && !entries->isEmpty())std::invoke(Method, *self, entries);
            return val::undefined();
        }
    };

    // Reifies EXECUTE_FUNCTION_VARIADIC_WITH_STRING with the original processor:
    // execute the native string-list overload before the native typed-list overload.
    template<class C, class Processor, class Item, void(C::*NamesMethod)(const ListPtr<StringPtr> &), void(C::*
        ItemsMethod)(const ListPtr<Item> &), ListPtr<Item> wrapper::VariadicProcessor::*Output>
    struct MixedMemberPackCall {
        static val call(val object, val args) {
            const auto self = Conversion<std::shared_ptr<C> >::read(object);
            const auto inputs = args[0];
            if (inputs["length"].as<unsigned>() == 0)return val::undefined();
            const ProcessorPtr processor = std::make_shared<Processor>();
            processorPack(processor, inputs, true);
            const auto &names = processor->paramsString;
            if (names && !names->isEmpty())std::invoke(NamesMethod, *self, names);
            const auto &entries = processor.get()->*Output;
            if (entries && !entries->isEmpty())std::invoke(ItemsMethod, *self, entries);
            return val::undefined();
        }
    };

    // Original string processor and original list target. The existing scalar
    // domain check excludes only undefined null-pattern calls before list dispatch.
    template<class C, void(C::*Method)(const ListPtr<StringPtr> &)>
    struct StringDefinitionMemberPackCall {
        static val call(val object, val args) {
            const auto self = Conversion<std::shared_ptr<C> >::read(object);
            const auto inputs = args[0];
            if (inputs["length"].as<unsigned>() == 0)return val::undefined();
            const ProcessorPtr processor = std::make_shared<wrapper::VariadicProcessorString>();
            processorPack(processor, inputs, true);
            const auto &entries = processor->paramsString;
            if (entries && !entries->isEmpty()) {
                for (const auto &definition: *entries)SingleArgumentDefinitionPatternDomain<
                    C>::check(*self, definition);
                std::invoke(Method, *self, entries);
            }
            return val::undefined();
        }
    };

    template<double(*Method)(const ListPtr<double> &)>
    struct NumericPackCall {
        static val call(val args) {
            const auto processor = constructHelperVariadicProcessorDouble(val::undefined());
            processorPack(processor, args[0], true);
            return val(Method(processor->paramsDouble));
        }
    };

    template<double(*Method)(double, const ListPtr<double> &)>
    struct NumericBasePackCall {
        static val call(val args) {
            const double base = Conversion<double>::read(args[0]);
            const auto processor = constructHelperVariadicProcessorDouble(val::undefined());
            processorPack(processor, args[1], true);
            return val(Method(base, processor->paramsDouble));
        }
    };
}
#pragma pop_macro("null")
