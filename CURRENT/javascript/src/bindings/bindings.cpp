/*
 * @(#)bindings.cpp        6.2.0    2026-11-11
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

// Initially generated during the full port; maintained as reviewed source in this public project.
// See docs/MAINTENANCE.md. Mathematical implementation stays in CURRENT/cpp.
#include "org/mariuszgromada/math/mxparser/syntaxchecker/TokenMgrError.hpp"
#include "org/mariuszgromada/math/mxparser/CalcStepRecord.hpp"
#include "BindingConstructors.hpp"
#include "BindingCString.hpp"
#include "BindingParserBorrowedTokens.hpp"
#include "BindingLexerState.hpp"
#include "BindingLexerStdio.hpp"
#include "BindingSyntaxDependencyFields.hpp"
#include "BindingTokenManagerBase.hpp"
#include "BindingReaderBuffer.hpp"
#include "BindingOwnedLexer.hpp"
#include "BindingLicense.hpp"
#include "BindingStringStream.hpp"
#include "BindingStdString.hpp"
#include "BindingStdLocale.hpp"
#include "BindingSyntaxReInit.hpp"
#include "BindingNativeVector.hpp"
#include "BindingErrorHandlers.hpp"
#include "BindingSyntaxScan.hpp"
#include "BindingSyntaxGrammar.hpp"
#include "BindingSyntaxLookahead.hpp"
#include "BindingSyntaxFactories.hpp"
#include "BindingCharStream.hpp"
#include "BindingSerialization.hpp"
#include "BindingVariadicProcessor.hpp"
#include "BindingVariadicPack.hpp"
#include "BindingElementAtTheEnd.hpp"
#include "BindingNativeArray.hpp"
#include "BindingExtensionFactories.hpp"
#include "BindingOwnedSyntax.hpp"
#include "BindingLaTeX.hpp"
using namespace mx_binding;

EMSCRIPTEN_BINDINGS (mxparser_public_bindings) {
    // Public Java/C# LaTeX surface. No exporter internals or C++ list API.
    emscripten::class_<LaTeXParser::Node>("NativeLaTeXNode")
        .smart_ptr<LaTeXParser::NodePtr>("LaTeXNodePtr")
        .function("nativeAliasOf", emscripten::optional_override(
            [](const LaTeXParser::Node& self, const LaTeXParser::Node& other) { return &self == &other; }));
    emscripten::function("api_C1_LTX_0001", &MemberCall<&Expression::getExpressionAsLaTeX>::call);
    emscripten::function("api_C1_LTX_0002", &StaticCall<static_cast<LaTeXParser::NodePtr (*)(const StringPtr&)>(&LaTeXParser::parse)>::call);
    emscripten::function("api_C1_LTX_0003", &MemberCall<&LaTeXParser::Node::getKind>::call);
    emscripten::function("api_C1_LTX_0004", &MemberCall<&LaTeXParser::Node::getText>::call);
    emscripten::function("api_C1_LTX_0005", &MemberCall<&LaTeXParser::Node::getSymbolStyle>::call);
    emscripten::function("api_C1_LTX_0006", &MemberCall<&LaTeXParser::Node::getChildren>::call);
    emscripten::function("api_C1_LTX_0007", &MemberCall<&LaTeXParser::Node::getStartOffset>::call);
    emscripten::function("api_C1_LTX_0008", &MemberCall<&LaTeXParser::Node::getEndOffset>::call);
    emscripten::function("api_C1_LTX_0009", &MemberCall<&LaTeXParser::Node::getSourceText>::call);
    emscripten::function("api_C1_LTX_0010_get", +[]() { return static_cast<int>(LaTeXParser::Kind::NUMBER); });
    emscripten::function("api_C1_LTX_0011_get", +[]() { return static_cast<int>(LaTeXParser::Kind::SYMBOL); });
    emscripten::function("api_C1_LTX_0012_get", +[]() { return static_cast<int>(LaTeXParser::Kind::POSITIVE); });
    emscripten::function("api_C1_LTX_0013_get", +[]() { return static_cast<int>(LaTeXParser::Kind::NEGATIVE); });
    emscripten::function("api_C1_LTX_0014_get", +[]() { return static_cast<int>(LaTeXParser::Kind::ADD); });
    emscripten::function("api_C1_LTX_0015_get", +[]() { return static_cast<int>(LaTeXParser::Kind::SUBTRACT); });
    emscripten::function("api_C1_LTX_0016_get", +[]() { return static_cast<int>(LaTeXParser::Kind::MULTIPLY); });
    emscripten::function("api_C1_LTX_0017_get", +[]() { return static_cast<int>(LaTeXParser::Kind::DIVIDE); });
    emscripten::function("api_C1_LTX_0018_get", +[]() { return static_cast<int>(LaTeXParser::Kind::POWER); });
    emscripten::function("api_C1_LTX_0019_get", +[]() { return static_cast<int>(LaTeXParser::Kind::FACTORIAL); });
    emscripten::function("api_C1_LTX_0020_get", +[]() { return static_cast<int>(LaTeXParser::Kind::PERCENT); });
    emscripten::function("api_C1_LTX_0021_get", +[]() { return static_cast<int>(LaTeXParser::Kind::FLOOR); });
    emscripten::function("api_C1_LTX_0022_get", +[]() { return static_cast<int>(LaTeXParser::Kind::REMAINDER); });
    emscripten::function("api_C1_LTX_0023_get", +[]() { return static_cast<int>(LaTeXParser::SymbolStyle::DEFAULT); });
    emscripten::function("api_C1_LTX_0024_get", +[]() { return static_cast<int>(LaTeXParser::SymbolStyle::ITALIC); });
    emscripten::function("api_C1_LTX_0025_get", +[]() { return static_cast<int>(LaTeXParser::SymbolStyle::UPRIGHT); });
    emscripten::function("ctor_StdLocale", &constructStdLocale);
    emscripten::function("native_stdLocale_name", &stdLocaleName);
    emscripten::function("factory_StdString", &stdStringFactory);
    emscripten::function("ctor_ExpressionDefinitions", &constructExpressionDefinitions);
    emscripten::function("ctor_StdStringStream", &constructStdStringStream);
    emscripten::function("native_stringStream_str", &stdStringStreamValue);
    emscripten::function("ctor_License", &constructLicense);
    emscripten::function("native_ReaderStream_read", &readNativeReaderBuffer);
    emscripten::function("native_syntax_parser_token_source", &syntaxParserTokenSource);
    emscripten::function("native_validate_parser_token", &validateBorrowedParserToken);
    emscripten::function("native_java_token_next", &javaTokenNext);
    emscripten::function("native_java_token_special", &javaTokenSpecial);
    emscripten::function("native_parser_current_token", &parserCurrentToken);
    emscripten::function("native_parser_cached_next_token", &parserCachedNextToken);
    registerParseExceptionArrayViews();
    emscripten::class_<PrimitiveElement>("NativePrimitiveElement").smart_ptr<std::shared_ptr<
        PrimitiveElement> >("PrimitiveElementPtr").function("nativeAliasOf",
                                                            emscripten::optional_override(
                                                                [](const PrimitiveElement &self,
                                                                   const PrimitiveElement &other) {
                                                                    return &self == &other;
                                                                }));
    emscripten::class_<Argument, emscripten::base<PrimitiveElement> >("NativeArgument").smart_ptr<std::shared_ptr<
        Argument> >("ArgumentPtr");
    emscripten::class_<Expression, emscripten::base<PrimitiveElement> >("NativeExpression").smart_ptr<std::shared_ptr<
        Expression> >("ExpressionPtr");
    emscripten::class_<Constant, emscripten::base<PrimitiveElement> >("NativeConstant").smart_ptr<std::shared_ptr<
        Constant> >("ConstantPtr");
    emscripten::class_<Function, emscripten::base<PrimitiveElement> >("NativeFunction").smart_ptr<std::shared_ptr<
        Function> >("FunctionPtr");
    emscripten::class_<RecursiveArgument, emscripten::base<Argument> >("NativeRecursiveArgument").smart_ptr<
        std::shared_ptr<RecursiveArgument> >("RecursiveArgumentPtr");
    emscripten::class_<CalcStepsRegister>("NativeCalcStepsRegister").smart_ptr<std::shared_ptr<
        CalcStepsRegister> >("CalcStepsRegisterPtr").function("nativeAliasOf",
                                                              emscripten::optional_override(
                                                                  [](const CalcStepsRegister &self,
                                                                     const CalcStepsRegister &other) {
                                                                      return &self == &other;
                                                                  }));
    emscripten::class_<CalcStepRecord>("NativeCalcStepRecord").smart_ptr<std::shared_ptr<
        CalcStepRecord> >("CalcStepRecordPtr").function("nativeAliasOf",
                                                        emscripten::optional_override(
                                                            [](const CalcStepRecord &self,
                                                               const CalcStepRecord &other) {
                                                                return &self == &other;
                                                            }));
    emscripten::class_<StringResources>("NativeStringResources").smart_ptr<std::shared_ptr<
        StringResources> >("StringResourcesPtr").function("nativeAliasOf",
                                                          emscripten::optional_override(
                                                              [](const StringResources &self,
                                                                 const StringResources &other) {
                                                                  return &self == &other;
                                                              }));
    emscripten::class_<parsertokens::Token>("NativeToken").smart_ptr<std::shared_ptr<parsertokens::Token> >("TokenPtr").
            function("nativeAliasOf",
                     emscripten::optional_override(
                         [](const parsertokens::Token &self, const parsertokens::Token &other) {
                             return &self == &other;
                         }));
    emscripten::class_<parsertokens::KeyWord>("NativeKeyWord").smart_ptr<std::shared_ptr<
        parsertokens::KeyWord> >("KeyWordPtr").function("nativeAliasOf",
                                                        emscripten::optional_override(
                                                            [](const parsertokens::KeyWord &self,
                                                               const parsertokens::KeyWord &other) {
                                                                return &self == &other;
                                                            }));
    emscripten::class_<mathcollection::PrimesCache>("NativePrimesCache").smart_ptr<std::shared_ptr<
        mathcollection::PrimesCache> >("PrimesCachePtr").function("nativeAliasOf",
                                                                  emscripten::optional_override(
                                                                      [](const mathcollection::PrimesCache &self,
                                                                         const mathcollection::PrimesCache &other) {
                                                                          return &self == &other;
                                                                      }));
    emscripten::class_<mathcollection::SpecialValue>("NativeSpecialValue").smart_ptr<std::shared_ptr<
        mathcollection::SpecialValue> >("SpecialValuePtr").function("nativeAliasOf",
                                                                    emscripten::optional_override(
                                                                        [](const mathcollection::SpecialValue &self,
                                                                           const mathcollection::SpecialValue &other) {
                                                                            return &self == &other;
                                                                        }));
    emscripten::class_<mathcollection::SpecialValueTrigonometric>("NativeSpecialValueTrigonometric").smart_ptr<
        std::shared_ptr<mathcollection::SpecialValueTrigonometric> >("SpecialValueTrigonometricPtr").function(
        "nativeAliasOf",
        emscripten::optional_override([](const mathcollection::SpecialValueTrigonometric &self,
                                         const mathcollection::SpecialValueTrigonometric &other) {
            return &self == &other;
        }));
    emscripten::class_<mathcollection::IRandom>("NativeIRandom").smart_ptr<std::shared_ptr<
        mathcollection::IRandom> >("IRandomPtr").function("nativeAliasOf",
                                                          emscripten::optional_override(
                                                              [](const mathcollection::IRandom &self,
                                                                 const mathcollection::IRandom &other) {
                                                                  return &self == &other;
                                                              }));
    emscripten::class_<wrapper::Random, emscripten::base<mathcollection::IRandom> >("NativeRandom");
    emscripten::class_<wrapper::StringBuilder>("NativeStringBuilder").smart_ptr<std::shared_ptr<
        wrapper::StringBuilder> >("StringBuilderPtr").function("nativeAliasOf",
                                                               emscripten::optional_override(
                                                                   [](const wrapper::StringBuilder &self,
                                                                      const wrapper::StringBuilder &other) {
                                                                       return &self == &other;
                                                                   }));
    emscripten::class_<wrapper::BigDecimal>("NativeBigDecimal").smart_ptr<std::shared_ptr<
        wrapper::BigDecimal> >("BigDecimalPtr").function("nativeAliasOf",
                                                         emscripten::optional_override(
                                                             [](const wrapper::BigDecimal &self,
                                                                const wrapper::BigDecimal &other) {
                                                                 return &self == &other;
                                                             }));
    emscripten::class_<StringResourcesChinese, emscripten::base<StringResources> >("NativeStringResourcesChinese");
    emscripten::class_<StringResourcesFrench, emscripten::base<StringResources> >("NativeStringResourcesFrench");
    emscripten::class_<StringResourcesGerman, emscripten::base<StringResources> >("NativeStringResourcesGerman");
    emscripten::class_<StringResourcesItalian, emscripten::base<StringResources> >("NativeStringResourcesItalian");
    emscripten::class_<StringResourcesPolish, emscripten::base<StringResources> >("NativeStringResourcesPolish");
    emscripten::class_<StringResourcesPortuguese, emscripten::base<
        StringResources> >("NativeStringResourcesPortuguese");
    emscripten::class_<StringResourcesSpanish, emscripten::base<StringResources> >("NativeStringResourcesSpanish");
    emscripten::class_<miscellaneous::FunctionParameter>("NativeFunctionParameter").smart_ptr<std::shared_ptr<
        miscellaneous::FunctionParameter> >("FunctionParameterPtr").function(
        "nativeAliasOf",
        emscripten::optional_override(
            [](const miscellaneous::FunctionParameter &self, const miscellaneous::FunctionParameter &other) {
                return &self == &other;
            }));
    emscripten::class_<miscellaneous::IterativeOperatorParameters>("NativeIterativeOperatorParameters").smart_ptr<
        std::shared_ptr<miscellaneous::IterativeOperatorParameters> >("IterativeOperatorParametersPtr").function(
        "nativeAliasOf",
        emscripten::optional_override([](const miscellaneous::IterativeOperatorParameters &self,
                                         const miscellaneous::IterativeOperatorParameters &other) {
            return &self == &other;
        }));
    emscripten::class_<miscellaneous::ArgumentParameter>("NativeArgumentParameter").smart_ptr<std::shared_ptr<
        miscellaneous::ArgumentParameter> >("ArgumentParameterPtr").function(
        "nativeAliasOf",
        emscripten::optional_override(
            [](const miscellaneous::ArgumentParameter &self, const miscellaneous::ArgumentParameter &other) {
                return &self == &other;
            }));
    emscripten::class_<miscellaneous::TokenStackElement>("NativeTokenStackElement").smart_ptr<std::shared_ptr<
        miscellaneous::TokenStackElement> >("TokenStackElementPtr").function(
        "nativeAliasOf",
        emscripten::optional_override(
            [](const miscellaneous::TokenStackElement &self, const miscellaneous::TokenStackElement &other) {
                return &self == &other;
            }));
    emscripten::class_<miscellaneous::SyntaxStackElement>("NativeSyntaxStackElement").smart_ptr<std::shared_ptr<
        miscellaneous::SyntaxStackElement> >("SyntaxStackElementPtr").function(
        "nativeAliasOf",
        emscripten::optional_override(
            [](const miscellaneous::SyntaxStackElement &self, const miscellaneous::SyntaxStackElement &other) {
                return &self == &other;
            }));
    emscripten::class_<miscellaneous::KwStrComparator>("NativeKwStrComparator").smart_ptr<std::shared_ptr<
        miscellaneous::KwStrComparator> >("KwStrComparatorPtr").function(
        "nativeAliasOf",
        emscripten::optional_override(
            [](const miscellaneous::KwStrComparator &self, const miscellaneous::KwStrComparator &other) {
                return &self == &other;
            }));
    emscripten::class_<miscellaneous::DescKwLenComparator>("NativeDescKwLenComparator").smart_ptr<std::shared_ptr<
        miscellaneous::DescKwLenComparator> >("DescKwLenComparatorPtr").function(
        "nativeAliasOf",
        emscripten::optional_override([](const miscellaneous::DescKwLenComparator &self,
                                         const miscellaneous::DescKwLenComparator &other) {
            return &self == &other;
        }));
    emscripten::class_<miscellaneous::KwTypeComparator>("NativeKwTypeComparator").smart_ptr<std::shared_ptr<
        miscellaneous::KwTypeComparator> >("KwTypeComparatorPtr").function(
        "nativeAliasOf",
        emscripten::optional_override(
            [](const miscellaneous::KwTypeComparator &self, const miscellaneous::KwTypeComparator &other) {
                return &self == &other;
            }));
    emscripten::class_<miscellaneous::HeadEqBody>("NativeHeadEqBody").smart_ptr<std::shared_ptr<
        miscellaneous::HeadEqBody> >("HeadEqBodyPtr").function("nativeAliasOf",
                                                               emscripten::optional_override(
                                                                   [](const miscellaneous::HeadEqBody &self,
                                                                      const miscellaneous::HeadEqBody &other) {
                                                                       return &self == &other;
                                                                   }));
    emscripten::class_<miscellaneous::TokenModification>("NativeTokenModification").smart_ptr<std::shared_ptr<
        miscellaneous::TokenModification> >("TokenModificationPtr").function(
        "nativeAliasOf",
        emscripten::optional_override(
            [](const miscellaneous::TokenModification &self, const miscellaneous::TokenModification &other) {
                return &self == &other;
            }));
    emscripten::class_<miscellaneous::TokenPart>("NativeTokenPart").smart_ptr<std::shared_ptr<
        miscellaneous::TokenPart> >("TokenPartPtr").function("nativeAliasOf",
                                                             emscripten::optional_override(
                                                                 [](const miscellaneous::TokenPart &self,
                                                                    const miscellaneous::TokenPart &other) {
                                                                     return &self == &other;
                                                                 }));
    emscripten::class_<miscellaneous::CompilationDetails>("NativeCompilationDetails").smart_ptr<std::shared_ptr<
        miscellaneous::CompilationDetails> >("CompilationDetailsPtr").function(
        "nativeAliasOf",
        emscripten::optional_override(
            [](const miscellaneous::CompilationDetails &self, const miscellaneous::CompilationDetails &other) {
                return &self == &other;
            }));
    emscripten::class_<miscellaneous::CompiledElement>("NativeCompiledElement").smart_ptr<std::shared_ptr<
        miscellaneous::CompiledElement> >("CompiledElementPtr").function(
        "nativeAliasOf",
        emscripten::optional_override(
            [](const miscellaneous::CompiledElement &self, const miscellaneous::CompiledElement &other) {
                return &self == &other;
            }));
    emscripten::class_<CloneCache>("NativeCloneCache").smart_ptr<std::shared_ptr<CloneCache> >("CloneCachePtr").
            function("nativeAliasOf",
                     emscripten::optional_override([](const CloneCache &self, const CloneCache &other) {
                         return &self == &other;
                     }));
    emscripten::class_<wrapper::VariadicProcessor>("NativeVariadicProcessor").smart_ptr<std::shared_ptr<
        wrapper::VariadicProcessor> >("VariadicProcessorPtr").function("nativeAliasOf",
                                                                       emscripten::optional_override(
                                                                           [](const wrapper::VariadicProcessor &self,
                                                                              const wrapper::VariadicProcessor &other) {
                                                                               return &self == &other;
                                                                           }));
    emscripten::class_<wrapper::VariadicProcessorNull, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorNull");
    emscripten::class_<wrapper::VariadicProcessorDouble, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorDouble");
    emscripten::class_<wrapper::VariadicProcessorDoubleOrUdf, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorDoubleOrUdf");
    emscripten::class_<wrapper::VariadicProcessorString, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorString");
    emscripten::class_<wrapper::VariadicProcessorStringOrArgument, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorStringOrArgument");
    emscripten::class_<wrapper::VariadicProcessorStringOrFunction, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorStringOrFunction");
    emscripten::class_<wrapper::VariadicProcessorStringOrConstant, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorStringOrConstant");
    emscripten::class_<wrapper::VariadicProcessorStringOrUdf, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorStringOrUdf");
    emscripten::class_<wrapper::VariadicProcessorPrimitiveElement, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorPrimitiveElement");
    emscripten::class_<wrapper::VariadicProcessorArgument, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorArgument");
    emscripten::class_<wrapper::VariadicProcessorFunction, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorFunction");
    emscripten::class_<wrapper::VariadicProcessorConstant, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorConstant");
    emscripten::class_<wrapper::VariadicProcessorExpression, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorExpression");
    emscripten::class_<wrapper::VariadicProcessorUdfs, emscripten::base<wrapper::VariadicProcessor> >(
        "NativeVariadicProcessorUdfs");
    emscripten::class_<syntaxchecker::ErrorMessage>("NativeErrorMessage").smart_ptr<std::shared_ptr<
        syntaxchecker::ErrorMessage> >("ErrorMessagePtr").function("nativeAliasOf",
                                                                   emscripten::optional_override(
                                                                       [](const syntaxchecker::ErrorMessage &self,
                                                                          const syntaxchecker::ErrorMessage &other) {
                                                                           return &self == &other;
                                                                       }));
    emscripten::class_<syntaxchecker::JavaCCToken>("NativeJavaCCToken").smart_ptr<std::shared_ptr<
        syntaxchecker::JavaCCToken> >("JavaCCTokenPtr").function("nativeAliasOf",
                                                                 emscripten::optional_override(
                                                                     [](const syntaxchecker::JavaCCToken &self,
                                                                        const syntaxchecker::JavaCCToken &other) {
                                                                         return &self == &other;
                                                                     }));
    emscripten::class_<syntaxchecker::TokenMgrError>("NativeTokenMgrError").smart_ptr<std::shared_ptr<
        syntaxchecker::TokenMgrError> >("TokenMgrErrorPtr").function("nativeAliasOf",
                                                                     emscripten::optional_override(
                                                                         [](const syntaxchecker::TokenMgrError &self,
                                                                            const syntaxchecker::TokenMgrError &other) {
                                                                             return &self == &other;
                                                                         }));
    emscripten::class_<syntaxchecker::ParseException>("NativeParseException").smart_ptr<std::shared_ptr<
        syntaxchecker::ParseException> >("ParseExceptionPtr").function("nativeAliasOf",
                                                                       emscripten::optional_override(
                                                                           [](const syntaxchecker::ParseException &self,
                                                                              const syntaxchecker::ParseException &
                                                                              other) {
                                                                               return &self == &other;
                                                                           }));
    emscripten::class_<syntaxchecker::ErrorHandler>("NativeErrorHandler").smart_ptr<std::shared_ptr<
        syntaxchecker::ErrorHandler> >("ErrorHandlerPtr").function("nativeAliasOf",
                                                                   emscripten::optional_override(
                                                                       [](const syntaxchecker::ErrorHandler &self,
                                                                          const syntaxchecker::ErrorHandler &other) {
                                                                           return &self == &other;
                                                                       }));
    emscripten::class_<syntaxchecker::ReaderStream>("NativeReaderStream").smart_ptr<std::shared_ptr<
        syntaxchecker::ReaderStream> >("ReaderStreamPtr").function("nativeAliasOf",
                                                                   emscripten::optional_override(
                                                                       [](const syntaxchecker::ReaderStream &self,
                                                                          const syntaxchecker::ReaderStream &other) {
                                                                           return &self == &other;
                                                                       }));
    emscripten::class_<syntaxchecker::JJCalls>("NativeJJCalls").smart_ptr<std::shared_ptr<
        syntaxchecker::JJCalls> >("JJCallsPtr").function("nativeAliasOf",
                                                         emscripten::optional_override(
                                                             [](const syntaxchecker::JJCalls &self,
                                                                const syntaxchecker::JJCalls &other) {
                                                                 return &self == &other;
                                                             }));
    emscripten::class_<syntaxchecker::CharStream>("NativeCharStream").smart_ptr<std::shared_ptr<
        syntaxchecker::CharStream> >("CharStreamPtr").function("nativeAliasOf",
                                                               emscripten::optional_override(
                                                                   [](const syntaxchecker::CharStream &self,
                                                                      const syntaxchecker::CharStream &other) {
                                                                       return &self == &other;
                                                                   }));
    emscripten::class_<syntaxchecker::TokenManager>("NativeTokenManager").smart_ptr<std::shared_ptr<
        syntaxchecker::TokenManager> >("TokenManagerPtr").function("nativeAliasOf",
                                                                   emscripten::optional_override(
                                                                       [](const syntaxchecker::TokenManager &self,
                                                                          const syntaxchecker::TokenManager &other) {
                                                                           return &self == &other;
                                                                       }));
    emscripten::class_<syntaxchecker::SyntaxCheckerTokenManager, emscripten::base<
        syntaxchecker::TokenManager> >("NativeSyntaxCheckerTokenManager").smart_ptr<std::shared_ptr<
        syntaxchecker::SyntaxCheckerTokenManager> >("SyntaxCheckerTokenManagerPtr");
    emscripten::class_<syntaxchecker::SyntaxChecker>("NativeSyntaxChecker").smart_ptr<std::shared_ptr<
        syntaxchecker::SyntaxChecker> >("SyntaxCheckerPtr").function("nativeAliasOf",
                                                                     emscripten::optional_override(
                                                                         [](const syntaxchecker::SyntaxChecker &self,
                                                                            const syntaxchecker::SyntaxChecker &other) {
                                                                             return &self == &other;
                                                                         }));
    emscripten::class_<syntaxchecker::TokenManagerErrorHandler>("NativeTokenManagerErrorHandler").smart_ptr<
        std::shared_ptr<syntaxchecker::TokenManagerErrorHandler> >("TokenManagerErrorHandlerPtr").function(
        "nativeAliasOf",
        emscripten::optional_override([](const syntaxchecker::TokenManagerErrorHandler &self,
                                         const syntaxchecker::TokenManagerErrorHandler &other) {
            return &self == &other;
        }));
    emscripten::class_<std::locale>("NativeStdLocale").smart_ptr<std::shared_ptr<std::locale> >("StdLocalePtr").
            function("nativeAliasOf",
                     emscripten::optional_override([](const std::locale &self, const std::locale &other) {
                         return &self == &other;
                     }));
    emscripten::class_<std::stringstream>("NativeStdStringStream").smart_ptr<std::shared_ptr<
        std::stringstream> >("StdStringStreamPtr").function("nativeAliasOf",
                                                            emscripten::optional_override(
                                                                [](const std::stringstream &self,
                                                                   const std::stringstream &other) {
                                                                    return &self == &other;
                                                                }));
    emscripten::class_<License>("NativeLicense").smart_ptr<std::shared_ptr<License> >("LicensePtr").function(
        "nativeAliasOf", emscripten::optional_override([](const License &self, const License &other) {
            return &self == &other;
        }));
    registerNativeVector<PrimitiveElementPtr>("NativeVector_PrimitiveElementPtr", "NativeVectorPtr_PrimitiveElementPtr",
                                              "factory_Vector_PrimitiveElementPtr");
    registerNativeVector<CalcStepRecordPtr>("NativeVector_CalcStepRecordPtr", "NativeVectorPtr_CalcStepRecordPtr",
                                            "factory_Vector_CalcStepRecordPtr");
    registerNativeVector<double>("NativeVector_double", "NativeVectorPtr_double", "factory_Vector_double");
    registerNativeVector<int>("NativeVector_int", "NativeVectorPtr_int", "factory_Vector_int");
    registerNativeVector<Long>("NativeVector_Long", "NativeVectorPtr_Long", "factory_Vector_Long");
    registerNativeVector<StringPtr>("NativeVector_StringPtr", "NativeVectorPtr_StringPtr", "factory_Vector_StringPtr");
    registerNativeVector<ArgumentPtr>("NativeVector_ArgumentPtr", "NativeVectorPtr_ArgumentPtr",
                                      "factory_Vector_ArgumentPtr");
    registerNativeVector<ConstantPtr>("NativeVector_ConstantPtr", "NativeVectorPtr_ConstantPtr",
                                      "factory_Vector_ConstantPtr");
    registerNativeVector<FunctionPtr>("NativeVector_FunctionPtr", "NativeVectorPtr_FunctionPtr",
                                      "factory_Vector_FunctionPtr");
    registerNativeVector<SpecialValuePtr>("NativeVector_SpecialValuePtr", "NativeVectorPtr_SpecialValuePtr",
                                          "factory_Vector_SpecialValuePtr");
    registerNativeVector<ExpressionPtr>("NativeVector_ExpressionPtr", "NativeVectorPtr_ExpressionPtr",
                                        "factory_Vector_ExpressionPtr");
    registerNativeVector<TokenPtr>("NativeVector_TokenPtr", "NativeVectorPtr_TokenPtr", "factory_Vector_TokenPtr");
    registerNativeVector<KeyWordPtr>("NativeVector_KeyWordPtr", "NativeVectorPtr_KeyWordPtr",
                                     "factory_Vector_KeyWordPtr");
    registerNativeVector<RecursiveArgumentPtr>("NativeVector_RecursiveArgumentPtr",
                                               "NativeVectorPtr_RecursiveArgumentPtr",
                                               "factory_Vector_RecursiveArgumentPtr");
    registerNativeVector<char>("NativeVector_char", "NativeVectorPtr_char", "factory_Vector_char");
    registerNativeVector<Char>("NativeVector_Char", "NativeVectorPtr_Char", "factory_Vector_Char");
    emscripten::function("factory_Vector_bytes", &nativeVectorFromBytes);
    registerNativeArray<PrimitiveElementPtr>("NativeArray_PrimitiveElementPtr", "NativeArray_PrimitiveElementPtrPtr",
                                             "NativeArrayData_PrimitiveElementPtr",
                                             "NativeArrayData_PrimitiveElementPtrPtr",
                                             "NativeArrayPointer_PrimitiveElementPtr",
                                             "NativeArrayPointer_PrimitiveElementPtrPtr",
                                             "ctor_NativeArray_PrimitiveElementPtr",
                                             "to_NativeArray_PrimitiveElementPtr");
    registerNativeArray<CalcStepRecordPtr>("NativeArray_CalcStepRecordPtr", "NativeArray_CalcStepRecordPtrPtr",
                                           "NativeArrayData_CalcStepRecordPtr", "NativeArrayData_CalcStepRecordPtrPtr",
                                           "NativeArrayPointer_CalcStepRecordPtr",
                                           "NativeArrayPointer_CalcStepRecordPtrPtr",
                                           "ctor_NativeArray_CalcStepRecordPtr", "to_NativeArray_CalcStepRecordPtr");
    registerNativeArray<double>("NativeArray_double", "NativeArray_doublePtr", "NativeArrayData_double",
                                "NativeArrayData_doublePtr", "NativeArrayPointer_double",
                                "NativeArrayPointer_doublePtr", "ctor_NativeArray_double", "to_NativeArray_double");
    registerNativeArray<int>("NativeArray_int", "NativeArray_intPtr", "NativeArrayData_int", "NativeArrayData_intPtr",
                             "NativeArrayPointer_int", "NativeArrayPointer_intPtr", "ctor_NativeArray_int",
                             "to_NativeArray_int");
    registerNativeArray<Long>("NativeArray_Long", "NativeArray_LongPtr", "NativeArrayData_Long",
                              "NativeArrayData_LongPtr", "NativeArrayPointer_Long", "NativeArrayPointer_LongPtr",
                              "ctor_NativeArray_Long", "to_NativeArray_Long");
    registerNativeArray<StringPtr>("NativeArray_StringPtr", "NativeArray_StringPtrPtr", "NativeArrayData_StringPtr",
                                   "NativeArrayData_StringPtrPtr", "NativeArrayPointer_StringPtr",
                                   "NativeArrayPointer_StringPtrPtr", "ctor_NativeArray_StringPtr",
                                   "to_NativeArray_StringPtr");
    registerNativeArray<ArgumentPtr>("NativeArray_ArgumentPtr", "NativeArray_ArgumentPtrPtr",
                                     "NativeArrayData_ArgumentPtr", "NativeArrayData_ArgumentPtrPtr",
                                     "NativeArrayPointer_ArgumentPtr", "NativeArrayPointer_ArgumentPtrPtr",
                                     "ctor_NativeArray_ArgumentPtr", "to_NativeArray_ArgumentPtr");
    registerNativeArray<ConstantPtr>("NativeArray_ConstantPtr", "NativeArray_ConstantPtrPtr",
                                     "NativeArrayData_ConstantPtr", "NativeArrayData_ConstantPtrPtr",
                                     "NativeArrayPointer_ConstantPtr", "NativeArrayPointer_ConstantPtrPtr",
                                     "ctor_NativeArray_ConstantPtr", "to_NativeArray_ConstantPtr");
    registerNativeArray<FunctionPtr>("NativeArray_FunctionPtr", "NativeArray_FunctionPtrPtr",
                                     "NativeArrayData_FunctionPtr", "NativeArrayData_FunctionPtrPtr",
                                     "NativeArrayPointer_FunctionPtr", "NativeArrayPointer_FunctionPtrPtr",
                                     "ctor_NativeArray_FunctionPtr", "to_NativeArray_FunctionPtr");
    registerNativeArray<SpecialValuePtr>("NativeArray_SpecialValuePtr", "NativeArray_SpecialValuePtrPtr",
                                         "NativeArrayData_SpecialValuePtr", "NativeArrayData_SpecialValuePtrPtr",
                                         "NativeArrayPointer_SpecialValuePtr", "NativeArrayPointer_SpecialValuePtrPtr",
                                         "ctor_NativeArray_SpecialValuePtr", "to_NativeArray_SpecialValuePtr");
    registerNativeArray<ExpressionPtr>("NativeArray_ExpressionPtr", "NativeArray_ExpressionPtrPtr",
                                       "NativeArrayData_ExpressionPtr", "NativeArrayData_ExpressionPtrPtr",
                                       "NativeArrayPointer_ExpressionPtr", "NativeArrayPointer_ExpressionPtrPtr",
                                       "ctor_NativeArray_ExpressionPtr", "to_NativeArray_ExpressionPtr");
    registerNativeArray<TokenPtr>("NativeArray_TokenPtr", "NativeArray_TokenPtrPtr", "NativeArrayData_TokenPtr",
                                  "NativeArrayData_TokenPtrPtr", "NativeArrayPointer_TokenPtr",
                                  "NativeArrayPointer_TokenPtrPtr", "ctor_NativeArray_TokenPtr",
                                  "to_NativeArray_TokenPtr");
    registerNativeArray<KeyWordPtr>("NativeArray_KeyWordPtr", "NativeArray_KeyWordPtrPtr", "NativeArrayData_KeyWordPtr",
                                    "NativeArrayData_KeyWordPtrPtr", "NativeArrayPointer_KeyWordPtr",
                                    "NativeArrayPointer_KeyWordPtrPtr", "ctor_NativeArray_KeyWordPtr",
                                    "to_NativeArray_KeyWordPtr");
    registerNativeArray<RecursiveArgumentPtr>("NativeArray_RecursiveArgumentPtr", "NativeArray_RecursiveArgumentPtrPtr",
                                              "NativeArrayData_RecursiveArgumentPtr",
                                              "NativeArrayData_RecursiveArgumentPtrPtr",
                                              "NativeArrayPointer_RecursiveArgumentPtr",
                                              "NativeArrayPointer_RecursiveArgumentPtrPtr",
                                              "ctor_NativeArray_RecursiveArgumentPtr",
                                              "to_NativeArray_RecursiveArgumentPtr");
    emscripten::function("native_SyntaxChecker_ReInit", &reinitSyntaxChecker);
    emscripten::function("native_SyntaxCheckerTokenManager_ReInit", &reinitSyntaxManager);
    registerLiveList<PrimitiveElementPtr, true>("NativePrimitiveElementList", "PrimitiveElementListPtr");
    emscripten::function("ctor_List_PrimitiveElementPtr", &constructList<PrimitiveElementPtr>);
    emscripten::function("factory_Stack_PrimitiveElementPtr", &wrapper::new_Stack<PrimitiveElementPtr>);
    registerLiveList<CalcStepRecordPtr, true>("NativeCalcStepRecordList", "CalcStepRecordListPtr");
    emscripten::function("ctor_List_CalcStepRecordPtr", &constructList<CalcStepRecordPtr>);
    emscripten::function("factory_Stack_CalcStepRecordPtr", &wrapper::new_Stack<CalcStepRecordPtr>);
    registerLiveList<double, false>("NativeDoubleList", "DoubleListPtr");
    emscripten::function("ctor_List_double", &constructList<double>);
    emscripten::function("factory_Stack_double", &wrapper::new_Stack<double>);
    registerLiveList<int, false>("NativeIntList", "IntListPtr");
    emscripten::function("ctor_List_int", &constructList<int>);
    emscripten::function("factory_Stack_int", &wrapper::new_Stack<int>);
    registerLiveList<Long, false>("NativeLongList", "LongListPtr");
    emscripten::function("ctor_List_Long", &constructList<Long>);
    emscripten::function("factory_Stack_Long", &wrapper::new_Stack<Long>);
    registerLiveList<StringPtr, true>("NativeStringList", "StringListPtr");
    emscripten::function("ctor_List_StringPtr", &constructList<StringPtr>);
    emscripten::function("factory_Stack_StringPtr", &wrapper::new_Stack<StringPtr>);
    registerLiveList<ArgumentPtr, true>("NativeArgumentList", "ArgumentListPtr");
    emscripten::function("ctor_List_ArgumentPtr", &constructList<ArgumentPtr>);
    emscripten::function("factory_Stack_ArgumentPtr", &wrapper::new_Stack<ArgumentPtr>);
    registerLiveList<ConstantPtr, true>("NativeConstantList", "ConstantListPtr");
    emscripten::function("ctor_List_ConstantPtr", &constructList<ConstantPtr>);
    emscripten::function("factory_Stack_ConstantPtr", &wrapper::new_Stack<ConstantPtr>);
    registerLiveList<FunctionPtr, true>("NativeFunctionList", "FunctionListPtr");
    emscripten::function("ctor_List_FunctionPtr", &constructList<FunctionPtr>);
    emscripten::function("factory_Stack_FunctionPtr", &wrapper::new_Stack<FunctionPtr>);
    registerLiveList<SpecialValuePtr, false>("NativeSpecialValueList", "SpecialValueListPtr");
    emscripten::function("ctor_List_SpecialValuePtr", &constructList<SpecialValuePtr>);
    emscripten::function("factory_Stack_SpecialValuePtr", &wrapper::new_Stack<SpecialValuePtr>);
    registerLiveList<ExpressionPtr, true>("NativeExpressionList", "ExpressionListPtr");
    emscripten::function("ctor_List_ExpressionPtr", &constructList<ExpressionPtr>);
    emscripten::function("factory_Stack_ExpressionPtr", &wrapper::new_Stack<ExpressionPtr>);
    registerLiveList<TokenPtr, false>("NativeTokenList", "TokenListPtr");
    emscripten::function("ctor_List_TokenPtr", &constructList<TokenPtr>);
    emscripten::function("factory_Stack_TokenPtr", &wrapper::new_Stack<TokenPtr>);
    registerLiveList<KeyWordPtr, false>("NativeKeyWordPtrList", "KeyWordPtrListPtr");
    emscripten::function("ctor_List_KeyWordPtr", &constructList<KeyWordPtr>);
    emscripten::function("factory_Stack_KeyWordPtr", &wrapper::new_Stack<KeyWordPtr>);
    registerLiveList<RecursiveArgumentPtr, true>("NativeRecursiveArgumentList", "RecursiveArgumentListPtr");
    emscripten::function("ctor_List_RecursiveArgumentPtr", &constructList<RecursiveArgumentPtr>);
    emscripten::function("factory_Stack_RecursiveArgumentPtr", &wrapper::new_Stack<RecursiveArgumentPtr>);
    emscripten::function("factory_ListInt", &wrapper::new_ListInt);
    registerFixedArrayView<SpecialValueTrigonometricPtr, 81>("NativeSpecialValueTrigonometricArray",
                                                             "SpecialValueTrigonometricArrayPtr");
    emscripten::function("ctor_Expression", &constructExpression);
    emscripten::function("ctor_Argument", &constructArgument);
    emscripten::function("ctor_Constant", &constructConstant);
    emscripten::function("ctor_Function", &constructFunction);
    emscripten::function("ctor_RecursiveArgument", &constructRecursiveArgument);
    emscripten::function("ctor_PrimesCache", &constructPrimesCache);
    emscripten::function("ctor_KeyWord", &constructKeyWord);
    emscripten::function("ctor_Token", &constructToken);
    emscripten::function("ctor_CalcStepRecord", &new_CalcStepRecord);
    emscripten::function("ctor_CalcStepsRegister", &new_CalcStepsRegister);
    emscripten::function("ctor_StringResources", &new_StringResources);
    emscripten::function("ctor_StringResourcesChinese", &new_StringResourcesChinese);
    emscripten::function("ctor_StringResourcesFrench", &resourceFactoryWithNewLine<&new_StringResourcesFrench>);
    emscripten::function("ctor_StringResourcesGerman", &resourceFactoryWithNewLine<&new_StringResourcesGerman>);
    emscripten::function("ctor_StringResourcesItalian", &resourceFactoryWithNewLine<&new_StringResourcesItalian>);
    emscripten::function("ctor_StringResourcesPolish", &resourceFactoryWithNewLine<&new_StringResourcesPolish>);
    emscripten::function("ctor_StringResourcesPortuguese", &resourceFactoryWithNewLine<&new_StringResourcesPortuguese>);
    emscripten::function("ctor_StringResourcesSpanish", &resourceFactoryWithNewLine<&new_StringResourcesSpanish>);
    emscripten::function("ctor_SpecialValue", &constructSpecialValue);
    emscripten::function("ctor_SpecialValueTrigonometric", &constructSpecialValueTrigonometric);
    emscripten::function("ctor_StringBuilder", &constructStringBuilder);
    emscripten::function("ctor_BigDecimal", &constructBigDecimal);
    emscripten::function("ctor_Random", &constructRandom);
    emscripten::function("ctor_IRandom", &constructIRandom);
    emscripten::function("function_calculateParameters", &calculateFunctionParameters);
    emscripten::function("pack_Expression_removeArguments", &removeDefinitionPack<Expression, Argument, 0>);
    emscripten::function("pack_Expression_removeConstants", &removeDefinitionPack<Expression, Constant, 1>);
    emscripten::function("pack_Expression_removeFunctions", &removeDefinitionPack<Expression, Function, 2>);
    emscripten::function("pack_Argument_removeArguments", &removeDefinitionPack<Argument, Argument, 0>);
    emscripten::function("pack_Argument_removeConstants", &removeDefinitionPack<Argument, Constant, 1>);
    emscripten::function("pack_Argument_removeFunctions", &removeDefinitionPack<Argument, Function, 2>);
    emscripten::function("pack_Function_removeArguments", &removeDefinitionPack<Function, Argument, 0>);
    emscripten::function("pack_Function_removeConstants", &removeDefinitionPack<Function, Constant, 1>);
    emscripten::function("pack_Function_removeFunctions", &removeDefinitionPack<Function, Function, 2>);
    emscripten::function("serialize_root", &mx_binding::serialize);
    emscripten::function("deserialize_root", &mx_binding::deserialize);
    emscripten::function("native_SyntaxCheckerTokenManager_SwitchTo", &switchLexerState);
    emscripten::function("ctor_FunctionParameter", &constructHelperFunctionParameter);
    emscripten::function("ctor_IterativeOperatorParameters", &constructHelperIterativeOperatorParameters);
    emscripten::function("ctor_ArgumentParameter", &constructHelperArgumentParameter);
    emscripten::function("ctor_TokenStackElement", &constructHelperTokenStackElement);
    emscripten::function("ctor_SyntaxStackElement", &constructHelperSyntaxStackElement);
    emscripten::function("ctor_KwStrComparator", &constructHelperKwStrComparator);
    emscripten::function("ctor_DescKwLenComparator", &constructHelperDescKwLenComparator);
    emscripten::function("ctor_KwTypeComparator", &constructHelperKwTypeComparator);
    emscripten::function("ctor_HeadEqBody", &constructHelperHeadEqBody);
    emscripten::function("ctor_TokenModification", &constructHelperTokenModification);
    emscripten::function("ctor_TokenPart", &constructHelperTokenPart);
    emscripten::function("ctor_CompilationDetails", &constructHelperCompilationDetails);
    emscripten::function("ctor_CompiledElement", &constructHelperCompiledElement);
    emscripten::function("ctor_CloneCache", &constructHelperCloneCache);
    emscripten::function("ctor_VariadicProcessor", &constructHelperVariadicProcessor);
    emscripten::function("ctor_VariadicProcessorNull", &constructHelperVariadicProcessorNull);
    emscripten::function("ctor_VariadicProcessorDouble", &constructHelperVariadicProcessorDouble);
    emscripten::function("ctor_VariadicProcessorDoubleOrUdf", &constructHelperVariadicProcessorDoubleOrUdf);
    emscripten::function("ctor_VariadicProcessorString", &constructHelperVariadicProcessorString);
    emscripten::function("ctor_VariadicProcessorStringOrArgument", &constructHelperVariadicProcessorStringOrArgument);
    emscripten::function("ctor_VariadicProcessorStringOrFunction", &constructHelperVariadicProcessorStringOrFunction);
    emscripten::function("ctor_VariadicProcessorStringOrConstant", &constructHelperVariadicProcessorStringOrConstant);
    emscripten::function("ctor_VariadicProcessorStringOrUdf", &constructHelperVariadicProcessorStringOrUdf);
    emscripten::function("ctor_VariadicProcessorPrimitiveElement", &constructHelperVariadicProcessorPrimitiveElement);
    emscripten::function("ctor_VariadicProcessorArgument", &constructHelperVariadicProcessorArgument);
    emscripten::function("ctor_VariadicProcessorFunction", &constructHelperVariadicProcessorFunction);
    emscripten::function("ctor_VariadicProcessorConstant", &constructHelperVariadicProcessorConstant);
    emscripten::function("ctor_VariadicProcessorExpression", &constructHelperVariadicProcessorExpression);
    emscripten::function("ctor_VariadicProcessorUdfs", &constructHelperVariadicProcessorUdfs);
    emscripten::function("ctor_ErrorMessage", &constructHelperErrorMessage);
    emscripten::function("ctor_JavaCCToken", &constructHelperJavaCCToken);
    emscripten::function("ctor_TokenMgrError", &constructHelperTokenMgrError);
    emscripten::function("ctor_ParseException", &constructHelperParseException);
    emscripten::function("ctor_ErrorHandler", &constructHelperErrorHandler);
    emscripten::function("ctor_ReaderStream", &constructHelperReaderStream);
    emscripten::function("ctor_JJCalls", &constructHelperJJCalls);
    emscripten::function("ctor_CharStream", &constructHelperCharStream);
    emscripten::function("ctor_TokenManager", &constructHelperTokenManager);
    emscripten::function("ctor_SyntaxCheckerTokenManager", &constructLexerStateManager);
    emscripten::function("ctor_SyntaxChecker", &constructHelperSyntaxChecker);
    emscripten::function("ctor_TokenManagerErrorHandler", &constructHelperTokenManagerErrorHandler);
    emscripten::function("processor_pack", &processorPack);
    emscripten::function("processor_element", &processorOneElement);
    emscripten::function("api_C1_06882_get", &StaticFieldAccess<&syntaxchecker::_EOF>::get);
    emscripten::function("api_C1_06883_get", &StaticFieldAccess<&syntaxchecker::WHITESPACE>::get);
    emscripten::function("api_C1_06884_get", &StaticFieldAccess<&syntaxchecker::LETTER>::get);
    emscripten::function("api_C1_06885_get", &StaticFieldAccess<&syntaxchecker::DIGIT>::get);
    emscripten::function("api_C1_06886_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B1>::get);
    emscripten::function("api_C1_06887_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B2>::get);
    emscripten::function("api_C1_06888_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B3>::get);
    emscripten::function("api_C1_06889_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B4>::get);
    emscripten::function("api_C1_06890_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B5>::get);
    emscripten::function("api_C1_06891_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B6>::get);
    emscripten::function("api_C1_06892_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B7>::get);
    emscripten::function("api_C1_06893_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B8>::get);
    emscripten::function("api_C1_06894_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B9>::get);
    emscripten::function("api_C1_06895_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B10>::get);
    emscripten::function("api_C1_06896_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B11>::get);
    emscripten::function("api_C1_06897_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B12>::get);
    emscripten::function("api_C1_06898_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B13>::get);
    emscripten::function("api_C1_06899_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B14>::get);
    emscripten::function("api_C1_06900_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B15>::get);
    emscripten::function("api_C1_06901_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B16>::get);
    emscripten::function("api_C1_06902_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B17>::get);
    emscripten::function("api_C1_06903_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B18>::get);
    emscripten::function("api_C1_06904_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B19>::get);
    emscripten::function("api_C1_06905_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B20>::get);
    emscripten::function("api_C1_06906_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B21>::get);
    emscripten::function("api_C1_06907_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B22>::get);
    emscripten::function("api_C1_06908_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B23>::get);
    emscripten::function("api_C1_06909_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B24>::get);
    emscripten::function("api_C1_06910_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B25>::get);
    emscripten::function("api_C1_06911_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B26>::get);
    emscripten::function("api_C1_06912_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B27>::get);
    emscripten::function("api_C1_06913_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B28>::get);
    emscripten::function("api_C1_06914_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B29>::get);
    emscripten::function("api_C1_06915_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B30>::get);
    emscripten::function("api_C1_06916_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B31>::get);
    emscripten::function("api_C1_06917_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B32>::get);
    emscripten::function("api_C1_06918_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B33>::get);
    emscripten::function("api_C1_06919_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B34>::get);
    emscripten::function("api_C1_06920_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B35>::get);
    emscripten::function("api_C1_06921_get", &StaticFieldAccess<&syntaxchecker::DIGIT_B36>::get);
    emscripten::function("api_C1_06922_get", &StaticFieldAccess<&syntaxchecker::LETTERS>::get);
    emscripten::function("api_C1_06923_get", &StaticFieldAccess<&syntaxchecker::INTEGER>::get);
    emscripten::function("api_C1_06924_get", &StaticFieldAccess<&syntaxchecker::DEC_FRACT>::get);
    emscripten::function("api_C1_06925_get", &StaticFieldAccess<&syntaxchecker::DEC_FRACT_OR_INT>::get);
    emscripten::function("api_C1_06926_get", &StaticFieldAccess<&syntaxchecker::DECIMAL_NUMBER>::get);
    emscripten::function("api_C1_06927_get", &StaticFieldAccess<&syntaxchecker::BASE1>::get);
    emscripten::function("api_C1_06928_get", &StaticFieldAccess<&syntaxchecker::BASE2>::get);
    emscripten::function("api_C1_06929_get", &StaticFieldAccess<&syntaxchecker::BASE3>::get);
    emscripten::function("api_C1_06930_get", &StaticFieldAccess<&syntaxchecker::BASE4>::get);
    emscripten::function("api_C1_06931_get", &StaticFieldAccess<&syntaxchecker::BASE5>::get);
    emscripten::function("api_C1_06932_get", &StaticFieldAccess<&syntaxchecker::BASE6>::get);
    emscripten::function("api_C1_06933_get", &StaticFieldAccess<&syntaxchecker::BASE7>::get);
    emscripten::function("api_C1_06934_get", &StaticFieldAccess<&syntaxchecker::BASE8>::get);
    emscripten::function("api_C1_06935_get", &StaticFieldAccess<&syntaxchecker::BASE9>::get);
    emscripten::function("api_C1_06936_get", &StaticFieldAccess<&syntaxchecker::BASE10>::get);
    emscripten::function("api_C1_06937_get", &StaticFieldAccess<&syntaxchecker::BASE11>::get);
    emscripten::function("api_C1_06938_get", &StaticFieldAccess<&syntaxchecker::BASE12>::get);
    emscripten::function("api_C1_06939_get", &StaticFieldAccess<&syntaxchecker::BASE13>::get);
    emscripten::function("api_C1_06940_get", &StaticFieldAccess<&syntaxchecker::BASE14>::get);
    emscripten::function("api_C1_06941_get", &StaticFieldAccess<&syntaxchecker::BASE15>::get);
    emscripten::function("api_C1_06942_get", &StaticFieldAccess<&syntaxchecker::BASE16>::get);
    emscripten::function("api_C1_06943_get", &StaticFieldAccess<&syntaxchecker::BASE17>::get);
    emscripten::function("api_C1_06944_get", &StaticFieldAccess<&syntaxchecker::BASE18>::get);
    emscripten::function("api_C1_06945_get", &StaticFieldAccess<&syntaxchecker::BASE19>::get);
    emscripten::function("api_C1_06946_get", &StaticFieldAccess<&syntaxchecker::BASE20>::get);
    emscripten::function("api_C1_06947_get", &StaticFieldAccess<&syntaxchecker::BASE21>::get);
    emscripten::function("api_C1_06948_get", &StaticFieldAccess<&syntaxchecker::BASE22>::get);
    emscripten::function("api_C1_06949_get", &StaticFieldAccess<&syntaxchecker::BASE23>::get);
    emscripten::function("api_C1_06950_get", &StaticFieldAccess<&syntaxchecker::BASE24>::get);
    emscripten::function("api_C1_06951_get", &StaticFieldAccess<&syntaxchecker::BASE25>::get);
    emscripten::function("api_C1_06952_get", &StaticFieldAccess<&syntaxchecker::BASE26>::get);
    emscripten::function("api_C1_06953_get", &StaticFieldAccess<&syntaxchecker::BASE27>::get);
    emscripten::function("api_C1_06954_get", &StaticFieldAccess<&syntaxchecker::BASE28>::get);
    emscripten::function("api_C1_06955_get", &StaticFieldAccess<&syntaxchecker::BASE29>::get);
    emscripten::function("api_C1_06956_get", &StaticFieldAccess<&syntaxchecker::BASE30>::get);
    emscripten::function("api_C1_06957_get", &StaticFieldAccess<&syntaxchecker::BASE31>::get);
    emscripten::function("api_C1_06958_get", &StaticFieldAccess<&syntaxchecker::BASE32>::get);
    emscripten::function("api_C1_06959_get", &StaticFieldAccess<&syntaxchecker::BASE33>::get);
    emscripten::function("api_C1_06960_get", &StaticFieldAccess<&syntaxchecker::BASE34>::get);
    emscripten::function("api_C1_06961_get", &StaticFieldAccess<&syntaxchecker::BASE35>::get);
    emscripten::function("api_C1_06962_get", &StaticFieldAccess<&syntaxchecker::BASE36>::get);
    emscripten::function("api_C1_06963_get", &StaticFieldAccess<&syntaxchecker::BINARY>::get);
    emscripten::function("api_C1_06964_get", &StaticFieldAccess<&syntaxchecker::OCTAL>::get);
    emscripten::function("api_C1_06965_get", &StaticFieldAccess<&syntaxchecker::HEXADECIMAL>::get);
    emscripten::function("api_C1_06966_get", &StaticFieldAccess<&syntaxchecker::FRACTION>::get);
    emscripten::function("api_C1_06967_get", &StaticFieldAccess<&syntaxchecker::LEFT_PAR>::get);
    emscripten::function("api_C1_06968_get", &StaticFieldAccess<&syntaxchecker::RIGHT_PAR>::get);
    emscripten::function("api_C1_06969_get", &StaticFieldAccess<&syntaxchecker::COMMA>::get);
    emscripten::function("api_C1_06970_get", &StaticFieldAccess<&syntaxchecker::SEMICOLON>::get);
    emscripten::function("api_C1_06971_get", &StaticFieldAccess<&syntaxchecker::PLUS>::get);
    emscripten::function("api_C1_06972_get", &StaticFieldAccess<&syntaxchecker::MINUS>::get);
    emscripten::function("api_C1_06973_get", &StaticFieldAccess<&syntaxchecker::MULTIPLY>::get);
    emscripten::function("api_C1_06974_get", &StaticFieldAccess<&syntaxchecker::DIV>::get);
    emscripten::function("api_C1_06975_get", &StaticFieldAccess<&syntaxchecker::POWER>::get);
    emscripten::function("api_C1_06976_get", &StaticFieldAccess<&syntaxchecker::TETRATION>::get);
    emscripten::function("api_C1_06977_get", &StaticFieldAccess<&syntaxchecker::MODULO>::get);
    emscripten::function("api_C1_06978_get", &StaticFieldAccess<&syntaxchecker::FACTORIAL>::get);
    emscripten::function("api_C1_06979_get", &StaticFieldAccess<&syntaxchecker::PERCENTAGE>::get);
    emscripten::function("api_C1_06980_get", &StaticFieldAccess<&syntaxchecker::EQ>::get);
    emscripten::function("api_C1_06981_get", &StaticFieldAccess<&syntaxchecker::NEQ>::get);
    emscripten::function("api_C1_06982_get", &StaticFieldAccess<&syntaxchecker::LT>::get);
    emscripten::function("api_C1_06983_get", &StaticFieldAccess<&syntaxchecker::LEQ>::get);
    emscripten::function("api_C1_06984_get", &StaticFieldAccess<&syntaxchecker::GT>::get);
    emscripten::function("api_C1_06985_get", &StaticFieldAccess<&syntaxchecker::GEQ>::get);
    emscripten::function("api_C1_06986_get", &StaticFieldAccess<&syntaxchecker::OR>::get);
    emscripten::function("api_C1_06987_get", &StaticFieldAccess<&syntaxchecker::AND>::get);
    emscripten::function("api_C1_06988_get", &StaticFieldAccess<&syntaxchecker::NOT>::get);
    emscripten::function("api_C1_06989_get", &StaticFieldAccess<&syntaxchecker::UNICODE_ROOT>::get);
    emscripten::function("api_C1_06990_get", &StaticFieldAccess<&syntaxchecker::BITNOT>::get);
    emscripten::function("api_C1_06991_get", &StaticFieldAccess<&syntaxchecker::IMP>::get);
    emscripten::function("api_C1_06992_get", &StaticFieldAccess<&syntaxchecker::CIMP>::get);
    emscripten::function("api_C1_06993_get", &StaticFieldAccess<&syntaxchecker::NIMP>::get);
    emscripten::function("api_C1_06994_get", &StaticFieldAccess<&syntaxchecker::CNIMP>::get);
    emscripten::function("api_C1_06995_get", &StaticFieldAccess<&syntaxchecker::NAND>::get);
    emscripten::function("api_C1_06996_get", &StaticFieldAccess<&syntaxchecker::EQV>::get);
    emscripten::function("api_C1_06997_get", &StaticFieldAccess<&syntaxchecker::NOR>::get);
    emscripten::function("api_C1_06998_get", &StaticFieldAccess<&syntaxchecker::BITWISE>::get);
    emscripten::function("api_C1_06999_get", &StaticFieldAccess<&syntaxchecker::XOR>::get);
    emscripten::function("api_C1_07000_get", &StaticFieldAccess<&syntaxchecker::IDENTIFIER>::get);
    emscripten::function("api_C1_07001_get", &StaticFieldAccess<&syntaxchecker::LEFT_OR_RIGHT_DER>::get);
    emscripten::function("api_C1_07002_get", &StaticFieldAccess<&syntaxchecker::UNICODE_NAME>::get);
    emscripten::function("api_C1_07003_get", &StaticFieldAccess<&syntaxchecker::OTHER_CHAR>::get);
    emscripten::function("api_C1_07004_get", &StaticFieldAccess<&syntaxchecker::INVALID_TOKEN>::get);
    emscripten::function("api_C1_07005_get", &StaticFieldAccess<&syntaxchecker::UNEXPECTED_CHAR>::get);
    emscripten::function("api_C1_07006_get", &StaticFieldAccess<&syntaxchecker::DEFAULT>::get);
    emscripten::function("api_C1_00051",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<PrimitiveElementPtr> &)>(&
                             Argument::addDefinitions)>::call);
    emscripten::function("api_C1_00053",
                         &MemberCall<static_cast<void (Argument::*)(const PrimitiveElementPtr &)>(&
                             Argument::addDefinitions)>::call);
    emscripten::function("api_C1_00056",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<PrimitiveElementPtr> &)>(&
                             Argument::removeDefinitions)>::call);
    emscripten::function("api_C1_00058",
                         &MemberCall<static_cast<void (Argument::*)(const PrimitiveElementPtr &)>(&
                             Argument::removeDefinitions)>::call);
    emscripten::function("api_C1_00061",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<ArgumentPtr> &)>(&
                             Argument::addArguments)>::call);
    emscripten::function("api_C1_00063",
                         &MemberCall<static_cast<void (Argument::*)(const ArgumentPtr &)>(&
                             Argument::addArguments)>::call);
    emscripten::function("api_C1_00066",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<StringPtr> &)>(&
                             Argument::defineArguments)>::call);
    emscripten::function("api_C1_00068",
                         &MemberCall<static_cast<void (Argument::*)(const StringPtr &)>(&
                             Argument::defineArguments)>::call);
    emscripten::function("api_C1_00071",
                         &MemberCall<static_cast<void (Argument::*)(const std::string &)>(&
                             Argument::defineArguments)>::call);
    emscripten::function("api_C1_00073",
                         &MemberCall<static_cast<int (Argument::*)() const>(&Argument::getArgumentsNumber)>::call);
    emscripten::function("api_C1_00074",
                         &MemberCall<static_cast<int (Argument::*)(const StringPtr &) const>(&
                             Argument::getArgumentIndex)>::call);
    emscripten::function("api_C1_00075",
                         &MemberCall<static_cast<int (Argument::*)(const String &) const>(&
                             Argument::getArgumentIndex)>::call);
    emscripten::function("api_C1_00079",
                         &MemberCall<static_cast<ArgumentPtr (Argument::*)(int) const>(&Argument::getArgument)>::call);
    emscripten::function("api_C1_00080",
                         &MemberCall<static_cast<ArgumentPtr (Argument::*)(const StringPtr &) const>(&
                             Argument::getArgument)>::call);
    emscripten::function("api_C1_00081",
                         &MemberCall<static_cast<ArgumentPtr (Argument::*)(const String &) const>(&
                             Argument::getArgument)>::call);
    emscripten::function("api_C1_00086",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<StringPtr> &)>(&
                             Argument::removeArguments)>::call);
    emscripten::function("api_C1_00088",
                         &MemberCall<static_cast<void (Argument::*)(const StringPtr &)>(&
                             Argument::removeArguments)>::call);
    emscripten::function("api_C1_00091",
                         &MemberCall<static_cast<void (Argument::*)(const std::string &)>(&
                             Argument::removeArguments)>::call);
    emscripten::function("api_C1_00093",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<ArgumentPtr> &)>(&
                             Argument::removeArguments)>::call);
    emscripten::function("api_C1_00095",
                         &MemberCall<static_cast<void (Argument::*)(const ArgumentPtr &)>(&
                             Argument::removeArguments)>::call);
    emscripten::function("api_C1_00097",
                         &MemberCall<static_cast<void (Argument::*)()>(&Argument::removeAllArguments)>::call);
    emscripten::function("api_C1_00099",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<ConstantPtr> &)>(&
                             Argument::addConstants)>::call);
    emscripten::function("api_C1_00101",
                         &MemberCall<static_cast<void (Argument::*)(const ConstantPtr &)>(&
                             Argument::addConstants)>::call);
    emscripten::function("api_C1_00103",
                         &MemberCall<static_cast<void (Argument::*)(const StringPtr &, double)>(&
                             Argument::defineConstant)>::call);
    emscripten::function("api_C1_00104",
                         &MemberCall<static_cast<void (Argument::*)(const String &, double)>(&
                             Argument::defineConstant)>::call);
    emscripten::function("api_C1_00108",
                         &MemberCall<static_cast<int (Argument::*)() const>(&Argument::getConstantsNumber)>::call);
    emscripten::function("api_C1_00109",
                         &MemberCall<static_cast<int (Argument::*)(const StringPtr &) const>(&
                             Argument::getConstantIndex)>::call);
    emscripten::function("api_C1_00110",
                         &MemberCall<static_cast<int (Argument::*)(const String &) const>(&
                             Argument::getConstantIndex)>::call);
    emscripten::function("api_C1_00114",
                         &MemberCall<static_cast<ConstantPtr (Argument::*)(int) const>(&Argument::getConstant)>::call);
    emscripten::function("api_C1_00115",
                         &MemberCall<static_cast<ConstantPtr (Argument::*)(const StringPtr &) const>(&
                             Argument::getConstant)>::call);
    emscripten::function("api_C1_00116",
                         &MemberCall<static_cast<ConstantPtr (Argument::*)(const String &) const>(&
                             Argument::getConstant)>::call);
    emscripten::function("api_C1_00121",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<StringPtr> &)>(&
                             Argument::removeConstants)>::call);
    emscripten::function("api_C1_00123",
                         &MemberCall<static_cast<void (Argument::*)(const StringPtr &)>(&
                             Argument::removeConstants)>::call);
    emscripten::function("api_C1_00125",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<ConstantPtr> &)>(&
                             Argument::removeConstants)>::call);
    emscripten::function("api_C1_00127",
                         &MemberCall<static_cast<void (Argument::*)(const ConstantPtr &)>(&
                             Argument::removeConstants)>::call);
    emscripten::function("api_C1_00129",
                         &MemberCall<static_cast<void (Argument::*)()>(&Argument::removeAllConstants)>::call);
    emscripten::function("api_C1_00131",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<FunctionPtr> &)>(&
                             Argument::addFunctions)>::call);
    emscripten::function("api_C1_00133",
                         &MemberCall<static_cast<void (Argument::*)(const FunctionPtr &)>(&
                             Argument::addFunctions)>::call);
    emscripten::function("api_C1_00137",
                         &MemberCall<static_cast<void (Argument::*)(const StringPtr &, const StringPtr &,
                                                                    const ListPtr<StringPtr> &)>(&
                             Argument::defineFunction)>::call);
    emscripten::function("api_C1_00139",
                         &MemberCall<static_cast<int (Argument::*)() const>(&Argument::getFunctionsNumber)>::call);
    emscripten::function("api_C1_00140",
                         &MemberCall<static_cast<int (Argument::*)(const StringPtr &) const>(&
                             Argument::getFunctionIndex)>::call);
    emscripten::function("api_C1_00141",
                         &MemberCall<static_cast<int (Argument::*)(const String &) const>(&
                             Argument::getFunctionIndex)>::call);
    emscripten::function("api_C1_00145",
                         &MemberCall<static_cast<FunctionPtr (Argument::*)(int) const>(&Argument::getFunction)>::call);
    emscripten::function("api_C1_00146",
                         &MemberCall<static_cast<FunctionPtr (Argument::*)(const StringPtr &) const>(&
                             Argument::getFunction)>::call);
    emscripten::function("api_C1_00147",
                         &MemberCall<static_cast<FunctionPtr (Argument::*)(const String &) const>(&
                             Argument::getFunction)>::call);
    emscripten::function("api_C1_00152",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<StringPtr> &)>(&
                             Argument::removeFunctions)>::call);
    emscripten::function("api_C1_00154",
                         &MemberCall<static_cast<void (Argument::*)(const StringPtr &)>(&
                             Argument::removeFunctions)>::call);
    emscripten::function("api_C1_00156",
                         &MemberCall<static_cast<void (Argument::*)(const ListPtr<FunctionPtr> &)>(&
                             Argument::removeFunctions)>::call);
    emscripten::function("api_C1_00158",
                         &MemberCall<static_cast<void (Argument::*)(const FunctionPtr &)>(&
                             Argument::removeFunctions)>::call);
    emscripten::function("api_C1_00160",
                         &MemberCall<static_cast<void (Argument::*)()>(&Argument::removeAllFunctions)>::call);
    emscripten::function("api_C1_00161",
                         &MemberCall<static_cast<void (Argument::*)(const StringPtr &, double)>(&
                             Argument::defineArgument)>::call);
    emscripten::function("api_C1_00162",
                         &MemberCall<static_cast<void (Argument::*)(const String &, double)>(&
                             Argument::defineArgument)>::call);
    emscripten::function("api_C1_00166",
                         &MemberCall<static_cast<void (Argument::*)(const StringPtr &)>(&
                             Argument::setDescription)>::call);
    emscripten::function("api_C1_00167",
                         &MemberCall<static_cast<void (Argument::*)(const String &)>(&Argument::setDescription)>::call);
    emscripten::function("api_C1_00171",
                         &MemberCall<static_cast<StringPtr (Argument::*)() const>(&Argument::getDescription)>::call);
    emscripten::function("api_C1_00172",
                         &MemberCall<static_cast<void (Argument::*)(const StringPtr &)>(&
                             Argument::setArgumentName)>::call);
    emscripten::function("api_C1_00173",
                         &MemberCall<static_cast<void (Argument::*)(const String &)>(&
                             Argument::setArgumentName)>::call);
    emscripten::function("api_C1_00177",
                         &MemberCall<static_cast<StringPtr (Argument::*)() const>(&Argument::getArgumentName)>::call);
    emscripten::function("api_C1_00178",
                         &MemberCall<static_cast<void (Argument::*)(const StringPtr &)>(&
                             Argument::setArgumentExpressionString)>::call);
    emscripten::function("api_C1_00179",
                         &MemberCall<static_cast<void (Argument::*)(const String &)>(&
                             Argument::setArgumentExpressionString)>::call);
    emscripten::function("api_C1_00183",
                         &MemberCall<static_cast<StringPtr (Argument::*)() const>(&
                             Argument::getArgumentExpressionString)>::call);
    emscripten::function("api_C1_00184", &MemberCall<static_cast<bool (Argument::*)()>(&Argument::checkSyntax)>::call);
    emscripten::function("api_C1_00185",
                         &MemberCall<static_cast<StringPtr (Argument::*)() const>(&Argument::getErrorMessage)>::call);
    emscripten::function("api_C1_00186",
                         &MemberCall<static_cast<void (Argument::*)(double)>(&Argument::setArgumentValue)>::call);
    emscripten::function("api_C1_00187",
                         &MemberCall<static_cast<double (Argument::*)()>(&Argument::getArgumentValue)>::call);
    emscripten::function("api_C1_00188",
                         &MemberCall<static_cast<double (Argument::*)(const CalcStepsRegisterPtr &)>(&
                             Argument::getArgumentValue)>::call);
    emscripten::function("api_C1_00190",
                         &MemberCall<static_cast<double (Argument::*)() const>(&Argument::getComputingTime)>::call);
    emscripten::function("api_C1_00191",
                         &MemberCall<static_cast<void (Argument::*)()>(&Argument::setVerboseMode)>::call);
    emscripten::function("api_C1_00192",
                         &MemberCall<static_cast<void (Argument::*)()>(&Argument::setSilentMode)>::call);
    emscripten::function("api_C1_00193",
                         &MemberCall<static_cast<bool (Argument::*)() const>(&Argument::getVerboseMode)>::call);
    emscripten::function("api_C1_00194",
                         &MemberCall<static_cast<bool (Argument::*)() const>(&Argument::getRecursiveMode)>::call);
    emscripten::function("api_C1_00195",
                         &MemberCall<static_cast<int (Argument::*)() const>(&Argument::getArgumentType)>::call);
    emscripten::function("api_C1_00196",
                         &MemberCall<static_cast<int (Argument::*)() const>(&Argument::getArgumentBodyType)>::call);
    emscripten::function("api_C1_00197_get", &StaticFieldAccess<&Argument::TYPE_ID>::get);
    emscripten::function("api_C1_00198_get", &StaticFieldAccess<&Argument::TYPE_DESC>::get);
    emscripten::function("api_C1_00198_set", &StaticFieldAccess<&Argument::TYPE_DESC>::set);
    emscripten::function("api_C1_00199_get", &StaticFieldAccess<&Argument::FREE_ARGUMENT>::get);
    emscripten::function("api_C1_00200_get", &StaticFieldAccess<&Argument::DEPENDENT_ARGUMENT>::get);
    emscripten::function("api_C1_00201_get", &StaticFieldAccess<&Argument::RECURSIVE_ARGUMENT>::get);
    emscripten::function("api_C1_00202_get", &StaticFieldAccess<&Argument::BODY_RUNTIME>::get);
    emscripten::function("api_C1_00203_get", &StaticFieldAccess<&Argument::BODY_EXTENDED>::get);
    emscripten::function("api_C1_00204_get", &StaticFieldAccess<&Argument::NO_SYNTAX_ERRORS>::get);
    emscripten::function("api_C1_00205_get", &StaticFieldAccess<&Argument::SYNTAX_ERROR>::get);
    emscripten::function("api_C1_00206_get", &StaticFieldAccess<&Argument::SYNTAX_ERROR_OR_STATUS_UNKNOWN>::get);
    emscripten::function("api_C1_00207_get", &StaticFieldAccess<&Argument::ARGUMENT_INITIAL_VALUE>::get);
    emscripten::function("api_C1_00208_get", &StaticFieldAccess<&Argument::NOT_FOUND>::get);
    emscripten::function("api_C1_00209", &MemberCall<static_cast<ArgumentPtr (Argument::*)()>(&Argument::clone)>::call);
    emscripten::function("api_C1_00210",
                         &MemberCall<static_cast<ArgumentPtr (Argument::*)()>(&Argument::cloneForThreadSafe)>::call);
    emscripten::function("api_C1_00287_get", +[]() {
        return static_cast<int>(org::mariuszgromada::math::mxparser::CalcStepRecord::StepType::Expression);
    });
    emscripten::function("api_C1_00288_get", +[]() {
        return static_cast<int>(org::mariuszgromada::math::mxparser::CalcStepRecord::StepType::Argument);
    });
    emscripten::function("api_C1_00289_get", +[]() {
        return static_cast<int>(org::mariuszgromada::math::mxparser::CalcStepRecord::StepType::Function);
    });
    emscripten::function("api_C1_00290_get", +[]() {
        return static_cast<int>(org::mariuszgromada::math::mxparser::CalcStepRecord::StepType::Unknown);
    });
    emscripten::function("api_C1_00291_get", &FieldAccess<&CalcStepRecord::numberGroup>::get);
    emscripten::function("api_C1_00291_set", &FieldAccess<&CalcStepRecord::numberGroup>::set);
    emscripten::function("api_C1_00292_get", &FieldAccess<&CalcStepRecord::numberGroupWithin>::get);
    emscripten::function("api_C1_00292_set", &FieldAccess<&CalcStepRecord::numberGroupWithin>::set);
    emscripten::function("api_C1_00293_get", &FieldAccess<&CalcStepRecord::type>::get);
    emscripten::function("api_C1_00293_set", &FieldAccess<&CalcStepRecord::type>::set);
    emscripten::function("api_C1_00294_get", &FieldAccess<&CalcStepRecord::description>::get);
    emscripten::function("api_C1_00294_set", &FieldAccess<&CalcStepRecord::description>::set);
    emscripten::function("api_C1_00295_get", &FieldAccess<&CalcStepRecord::content>::get);
    emscripten::function("api_C1_00295_set", &FieldAccess<&CalcStepRecord::content>::set);
    emscripten::function("api_C1_00296_get", &FieldAccess<&CalcStepRecord::firstInGroup>::get);
    emscripten::function("api_C1_00296_set", &FieldAccess<&CalcStepRecord::firstInGroup>::set);
    emscripten::function("api_C1_00297_get", &FieldAccess<&CalcStepRecord::lastInGroup>::get);
    emscripten::function("api_C1_00297_set", &FieldAccess<&CalcStepRecord::lastInGroup>::set);
    emscripten::function("api_C1_00303_get", &LiveListFieldAccess<&CalcStepsRegister::calcStepRecords>::get);
    emscripten::function("api_C1_00303_set", &LiveListFieldAccess<&CalcStepsRegister::calcStepRecords>::set);
    emscripten::function("api_C1_00304_get", &FieldAccess<&CalcStepsRegister::argumentNameStart>::get);
    emscripten::function("api_C1_00304_set", &FieldAccess<&CalcStepsRegister::argumentNameStart>::set);
    emscripten::function("api_C1_00305_get", &FieldAccess<&CalcStepsRegister::functionNameStart>::get);
    emscripten::function("api_C1_00305_set", &FieldAccess<&CalcStepsRegister::functionNameStart>::set);
    emscripten::function("api_C1_00306_get", &FieldAccess<&CalcStepsRegister::expressionStringStart>::get);
    emscripten::function("api_C1_00306_set", &FieldAccess<&CalcStepsRegister::expressionStringStart>::set);
    emscripten::function("api_C1_00307_get", &FieldAccess<&CalcStepsRegister::result>::get);
    emscripten::function("api_C1_00307_set", &FieldAccess<&CalcStepsRegister::result>::set);
    emscripten::function("api_C1_00308_get", &FieldAccess<&CalcStepsRegister::computingTime>::get);
    emscripten::function("api_C1_00308_set", &FieldAccess<&CalcStepsRegister::computingTime>::set);
    emscripten::function("api_C1_00309_get", &FieldAccess<&CalcStepsRegister::errorMessage>::get);
    emscripten::function("api_C1_00309_set", &FieldAccess<&CalcStepsRegister::errorMessage>::set);
    emscripten::function("api_C1_00310",
                         &MemberCall<static_cast<void (CalcStepsRegister::*)() const>(&
                             CalcStepsRegister::consolePrint)>::call);
    emscripten::function("api_C1_00311",
                         &MemberCall<static_cast<StringPtr (CalcStepsRegister::*)() const>(&
                             CalcStepsRegister::toString)>::call);
    emscripten::function("api_C1_00350_get", &StaticFieldAccess<&Constant::TYPE_ID>::get);
    emscripten::function("api_C1_00351_get", &StaticFieldAccess<&Constant::TYPE_DESC>::get);
    emscripten::function("api_C1_00351_set", &StaticFieldAccess<&Constant::TYPE_DESC>::set);
    emscripten::function("api_C1_00352_get", &StaticFieldAccess<&Constant::NOT_FOUND>::get);
    emscripten::function("api_C1_00353_get", &StaticFieldAccess<&Constant::NO_SYNTAX_ERRORS>::get);
    emscripten::function("api_C1_00354_get", &StaticFieldAccess<&Constant::SYNTAX_ERROR>::get);
    emscripten::function("api_C1_00355_get", &StaticFieldAccess<&Constant::SYNTAX_ERROR_OR_STATUS_UNKNOWN>::get);
    emscripten::function("api_C1_00356",
                         &MemberCall<static_cast<StringPtr (Constant::*)()>(&Constant::getConstantName)>::call);
    emscripten::function("api_C1_00357",
                         &MemberCall<static_cast<void (Constant::*)(const StringPtr &)>(&
                             Constant::setConstantName)>::call);
    emscripten::function("api_C1_00358",
                         &MemberCall<static_cast<void (Constant::*)(const String &)>(&
                             Constant::setConstantName)>::call);
    emscripten::function("api_C1_00362",
                         &MemberCall<static_cast<void (Constant::*)(double)>(&Constant::setConstantValue)>::call);
    emscripten::function("api_C1_00363",
                         &MemberCall<static_cast<double (Constant::*)() const>(&Constant::getConstantValue)>::call);
    emscripten::function("api_C1_00364",
                         &MemberCall<static_cast<StringPtr (Constant::*)()>(&Constant::getDescription)>::call);
    emscripten::function("api_C1_00365",
                         &MemberCall<static_cast<void (Constant::*)(const StringPtr &)>(&
                             Constant::setDescription)>::call);
    emscripten::function("api_C1_00366",
                         &MemberCall<static_cast<void (Constant::*)(const String &)>(&Constant::setDescription)>::call);
    emscripten::function("api_C1_00370",
                         &MemberCall<static_cast<StringPtr (Constant::*)()>(&Constant::getErrorMessage)>::call);
    emscripten::function("api_C1_00371",
                         &MemberCall<static_cast<bool (Constant::*)() const>(&Constant::getSyntaxStatus)>::call);
    emscripten::function("api_C1_00372",
                         &MemberCall<static_cast<ConstantPtr (Constant::*)()>(&Constant::cloneForThreadSafe)>::call);
    emscripten::function("api_C1_00451",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<PrimitiveElementPtr> &)>(&
                             Expression::addDefinitions)>::call);
    emscripten::function("api_C1_00453",
                         &MemberCall<static_cast<void (Expression::*)(const PrimitiveElementPtr &)>(&
                             Expression::addDefinitions)>::call);
    emscripten::function("api_C1_00456",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<PrimitiveElementPtr> &)>(&
                             Expression::removeDefinitions)>::call);
    emscripten::function("api_C1_00458",
                         &MemberCall<static_cast<void (Expression::*)(const PrimitiveElementPtr &)>(&
                             Expression::removeDefinitions)>::call);
    emscripten::function("api_C1_00461",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<ArgumentPtr> &)>(&
                             Expression::addArguments)>::call);
    emscripten::function("api_C1_00463",
                         &MemberCall<static_cast<void (Expression::*)(const ArgumentPtr &)>(&
                             Expression::addArguments)>::call);
    emscripten::function("api_C1_00466",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<StringPtr> &)>(&
                             Expression::defineArguments)>::call);
    emscripten::function("api_C1_00468",
                         &MemberCall<static_cast<void (Expression::*)(const StringPtr &)>(&
                             Expression::defineArguments)>::call);
    emscripten::function("api_C1_00470",
                         &MemberCall<static_cast<void (Expression::*)(const String &)>(&
                             Expression::defineArguments)>::call);
    emscripten::function("api_C1_00475",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<StringPtr> &)>(&
                             Expression::removeArguments)>::call);
    emscripten::function("api_C1_00477",
                         &MemberCall<static_cast<void (Expression::*)(const StringPtr &)>(&
                             Expression::removeArguments)>::call);
    emscripten::function("api_C1_00479",
                         &MemberCall<static_cast<void (Expression::*)(const String &)>(&
                             Expression::removeArguments)>::call);
    emscripten::function("api_C1_00483",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<ArgumentPtr> &)>(&
                             Expression::removeArguments)>::call);
    emscripten::function("api_C1_00485",
                         &MemberCall<static_cast<void (Expression::*)(const ArgumentPtr &)>(&
                             Expression::removeArguments)>::call);
    emscripten::function("api_C1_00487",
                         &MemberCall<static_cast<void (Expression::*)()>(&Expression::removeAllArguments)>::call);
    emscripten::function("api_C1_00489",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<ConstantPtr> &)>(&
                             Expression::addConstants)>::call);
    emscripten::function("api_C1_00491",
                         &MemberCall<static_cast<void (Expression::*)(const ConstantPtr &)>(&
                             Expression::addConstants)>::call);
    emscripten::function("api_C1_00494",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<StringPtr> &)>(&
                             Expression::removeConstants)>::call);
    emscripten::function("api_C1_00496",
                         &MemberCall<static_cast<void (Expression::*)(const StringPtr &)>(&
                             Expression::removeConstants)>::call);
    emscripten::function("api_C1_00498",
                         &MemberCall<static_cast<void (Expression::*)(const String &)>(&
                             Expression::removeConstants)>::call);
    emscripten::function("api_C1_00502",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<ConstantPtr> &)>(&
                             Expression::removeConstants)>::call);
    emscripten::function("api_C1_00504",
                         &MemberCall<static_cast<void (Expression::*)(const ConstantPtr &)>(&
                             Expression::removeConstants)>::call);
    emscripten::function("api_C1_00506",
                         &MemberCall<static_cast<void (Expression::*)()>(&Expression::removeAllConstants)>::call);
    emscripten::function("api_C1_00508",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<FunctionPtr> &)>(&
                             Expression::addFunctions)>::call);
    emscripten::function("api_C1_00510",
                         &MemberCall<static_cast<void (Expression::*)(const FunctionPtr &)>(&
                             Expression::addFunctions)>::call);
    emscripten::function("api_C1_00517",
                         &MemberCall<static_cast<void (Expression::*)(const StringPtr &, const StringPtr &,
                                                                      const ListPtr<StringPtr> &)>(&
                             Expression::defineFunction)>::call);
    emscripten::function("api_C1_00520",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<StringPtr> &)>(&
                             Expression::removeFunctions)>::call);
    emscripten::function("api_C1_00522",
                         &MemberCall<static_cast<void (Expression::*)(const StringPtr &)>(&
                             Expression::removeFunctions)>::call);
    emscripten::function("api_C1_00524",
                         &MemberCall<static_cast<void (Expression::*)(const String &)>(&
                             Expression::removeFunctions)>::call);
    emscripten::function("api_C1_00528",
                         &MemberCall<static_cast<void (Expression::*)(const ListPtr<FunctionPtr> &)>(&
                             Expression::removeFunctions)>::call);
    emscripten::function("api_C1_00530",
                         &MemberCall<static_cast<void (Expression::*)(const FunctionPtr &)>(&
                             Expression::removeFunctions)>::call);
    emscripten::function("api_C1_00532",
                         &MemberCall<static_cast<void (Expression::*)()>(&Expression::removeAllFunctions)>::call);
    emscripten::function("api_C1_00533_get", &StaticFieldAccess<&Expression::TYPE_ID>::get);
    emscripten::function("api_C1_00534_get", &StaticFieldAccess<&Expression::TYPE_DESC>::get);
    emscripten::function("api_C1_00534_set", &StaticFieldAccess<&Expression::TYPE_DESC>::set);
    emscripten::function("api_C1_00535_get", &StaticFieldAccess<&Expression::NO_SYNTAX_ERRORS>::get);
    emscripten::function("api_C1_00536_get", &StaticFieldAccess<&Expression::SYNTAX_ERROR>::get);
    emscripten::function("api_C1_00537_get", &StaticFieldAccess<&Expression::SYNTAX_ERROR_OR_STATUS_UNKNOWN>::get);
    emscripten::function("api_C1_00538",
                         &MemberCall<static_cast<StringPtr (Expression::*)() const>(&
                             Expression::getErrorMessage)>::call);
    emscripten::function("api_C1_00539",
                         &MemberCall<static_cast<bool (Expression::*)() const>(&Expression::getSyntaxStatus)>::call);
    emscripten::function("api_C1_00540",
                         &MemberCall<static_cast<void (Expression::*)(const StringPtr &)>(&
                             Expression::setExpressionString)>::call);
    emscripten::function("api_C1_00541",
                         &MemberCall<static_cast<void (Expression::*)(const String &)>(&
                             Expression::setExpressionString)>::call);
    emscripten::function("api_C1_00545",
                         &MemberCall<static_cast<StringPtr (Expression::*)()>(&Expression::getExpressionString)>::call);
    emscripten::function("api_C1_00546",
                         &MemberCall<static_cast<StringPtr (Expression::*)()>(&
                             Expression::getCanonicalExpressionString)>::call);
    emscripten::function("api_C1_00547",
                         &MemberCall<static_cast<void (Expression::*)()>(&Expression::clearExpressionString)>::call);
    emscripten::function("api_C1_00548",
                         &MemberCall<static_cast<void (Expression::*)(const StringPtr &)>(&
                             Expression::setDescription)>::call);
    emscripten::function("api_C1_00549",
                         &MemberCall<static_cast<void (Expression::*)(const String &)>(&
                             Expression::setDescription)>::call);
    emscripten::function("api_C1_00553",
                         &MemberCall<static_cast<StringPtr (Expression::*)()>(&Expression::getDescription)>::call);
    emscripten::function("api_C1_00554",
                         &MemberCall<static_cast<void (Expression::*)()>(&Expression::clearDescription)>::call);
    emscripten::function("api_C1_00555",
                         &MemberCall<static_cast<void (Expression::*)()>(&Expression::setVerboseMode)>::call);
    emscripten::function("api_C1_00556",
                         &MemberCall<static_cast<void (Expression::*)()>(&Expression::setSilentMode)>::call);
    emscripten::function("api_C1_00557",
                         &MemberCall<static_cast<bool (Expression::*)() const>(&Expression::getVerboseMode)>::call);
    emscripten::function("api_C1_00558",
                         &MemberCall<static_cast<void (Expression::*)()>(&
                             Expression::enableImpliedMultiplicationMode)>::call);
    emscripten::function("api_C1_00559",
                         &MemberCall<static_cast<void (Expression::*)()>(&
                             Expression::disableImpliedMultiplicationMode)>::call);
    emscripten::function("api_C1_00560",
                         &MemberCall<static_cast<bool (Expression::*)() const>(&
                             Expression::checkIfImpliedMultiplicationMode)>::call);
    emscripten::function("api_C1_00561",
                         &MemberCall<static_cast<void (Expression::*)()>(&
                             Expression::enableUnicodeBuiltinKeyWordsMode)>::call);
    emscripten::function("api_C1_00562",
                         &MemberCall<static_cast<void (Expression::*)()>(&
                             Expression::disableUnicodeBuiltinKeyWordsMode)>::call);
    emscripten::function("api_C1_00563",
                         &MemberCall<static_cast<bool (Expression::*)() const>(&
                             Expression::checkIfUnicodeBuiltinKeyWordsMode)>::call);
    emscripten::function("api_C1_00564",
                         &MemberCall<static_cast<void (Expression::*)()>(&
                             Expression::enableAttemptToFixExpStrMode)>::call);
    emscripten::function("api_C1_00565",
                         &MemberCall<static_cast<void (Expression::*)()>(&
                             Expression::disableAttemptToFixExpStrMode)>::call);
    emscripten::function("api_C1_00566",
                         &MemberCall<static_cast<bool (Expression::*)() const>(&
                             Expression::checkIfAttemptToFixExpStrMode)>::call);
    emscripten::function("api_C1_00567",
                         &MemberCall<static_cast<bool (Expression::*)() const>(&Expression::getRecursiveMode)>::call);
    emscripten::function("api_C1_00568",
                         &MemberCall<static_cast<double (Expression::*)() const>(&Expression::getComputingTime)>::call);
    emscripten::function("api_C1_00569",
                         &MemberCall<static_cast<void (Expression::*)(const StringPtr &, double)>(&
                             Expression::defineArgument)>::call);
    emscripten::function("api_C1_00570",
                         &MemberCall<static_cast<void (Expression::*)(const String &, double)>(&
                             Expression::defineArgument)>::call);
    emscripten::function("api_C1_00574",
                         &MemberCall<static_cast<int (Expression::*)(const StringPtr &) const>(&
                             Expression::getArgumentIndex)>::call);
    emscripten::function("api_C1_00575",
                         &MemberCall<static_cast<int (Expression::*)(const String &) const>(&
                             Expression::getArgumentIndex)>::call);
    emscripten::function("api_C1_00579",
                         &MemberCall<static_cast<int (Expression::*)() const>(&Expression::getArgumentsNumber)>::call);
    emscripten::function("api_C1_00580",
                         &MemberCall<static_cast<ArgumentPtr (Expression::*)(const StringPtr &) const>(&
                             Expression::getArgument)>::call);
    emscripten::function("api_C1_00581",
                         &MemberCall<static_cast<ArgumentPtr (Expression::*)(const String &) const>(&
                             Expression::getArgument)>::call);
    emscripten::function("api_C1_00585",
                         &MemberCall<static_cast<ArgumentPtr (Expression::*)(int) const>(&
                             Expression::getArgument)>::call);
    emscripten::function("api_C1_00586",
                         &MemberCall<static_cast<void (Expression::*)(const StringPtr &, double)>(&
                             Expression::setArgumentValue)>::call);
    emscripten::function("api_C1_00587",
                         &MemberCall<static_cast<void (Expression::*)(const String &, double)>(&
                             Expression::setArgumentValue)>::call);
    emscripten::function("api_C1_00591",
                         &MemberCall<static_cast<double (Expression::*)(const StringPtr &)>(&
                             Expression::getArgumentValue)>::call);
    emscripten::function("api_C1_00592",
                         &MemberCall<static_cast<double (Expression::*)(const String &)>(&
                             Expression::getArgumentValue)>::call);
    emscripten::function("api_C1_00596",
                         &MemberCall<static_cast<void (Expression::*)(const StringPtr &, double)>(&
                             Expression::defineConstant)>::call);
    emscripten::function("api_C1_00597",
                         &MemberCall<static_cast<void (Expression::*)(const String &, double)>(&
                             Expression::defineConstant)>::call);
    emscripten::function("api_C1_00601",
                         &MemberCall<static_cast<int (Expression::*)(const StringPtr &) const>(&
                             Expression::getConstantIndex)>::call);
    emscripten::function("api_C1_00602",
                         &MemberCall<static_cast<int (Expression::*)(const String &) const>(&
                             Expression::getConstantIndex)>::call);
    emscripten::function("api_C1_00606",
                         &MemberCall<static_cast<int (Expression::*)() const>(&Expression::getConstantsNumber)>::call);
    emscripten::function("api_C1_00607",
                         &MemberCall<static_cast<ConstantPtr (Expression::*)(const StringPtr &) const>(&
                             Expression::getConstant)>::call);
    emscripten::function("api_C1_00608",
                         &MemberCall<static_cast<ConstantPtr (Expression::*)(const String &) const>(&
                             Expression::getConstant)>::call);
    emscripten::function("api_C1_00612",
                         &MemberCall<static_cast<ConstantPtr (Expression::*)(int) const>(&
                             Expression::getConstant)>::call);
    emscripten::function("api_C1_00613",
                         &MemberCall<static_cast<int (Expression::*)(const StringPtr &) const>(&
                             Expression::getFunctionIndex)>::call);
    emscripten::function("api_C1_00614",
                         &MemberCall<static_cast<int (Expression::*)(const String &) const>(&
                             Expression::getFunctionIndex)>::call);
    emscripten::function("api_C1_00618",
                         &MemberCall<static_cast<int (Expression::*)() const>(&Expression::getFunctionsNumber)>::call);
    emscripten::function("api_C1_00619",
                         &MemberCall<static_cast<FunctionPtr (Expression::*)(const StringPtr &) const>(&
                             Expression::getFunction)>::call);
    emscripten::function("api_C1_00620",
                         &MemberCall<static_cast<FunctionPtr (Expression::*)(const String &) const>(&
                             Expression::getFunction)>::call);
    emscripten::function("api_C1_00624",
                         &MemberCall<static_cast<FunctionPtr (Expression::*)(int) const>(&
                             Expression::getFunction)>::call);
    emscripten::function("api_C1_00625",
                         &MemberCall<static_cast<bool (Expression::*)()>(&Expression::checkLexSyntax)>::call);
    emscripten::function("api_C1_00626",
                         &MemberCall<static_cast<bool (Expression::*)()>(&Expression::checkSyntax)>::call);
    emscripten::function("api_C1_00627",
                         &MemberCall<static_cast<double (Expression::*)()>(&Expression::calculate)>::call);
    emscripten::function("api_C1_00628",
                         &MemberCall<static_cast<double (Expression::*)(const CalcStepsRegisterPtr &)>(&
                             Expression::calculate)>::call);
    emscripten::function("api_C1_00630",
                         &MemberCall<static_cast<ListPtr<TokenPtr> (Expression::*)()>(&
                             Expression::getCopyOfInitialTokens)>::call);
    emscripten::function("api_C1_00631",
                         &MemberCall<static_cast<ArrayPtr<StringPtr> (Expression::*)()>(&
                             Expression::getMissingUserDefinedArguments)>::call);
    emscripten::function("api_C1_00632",
                         &MemberCall<static_cast<ArrayPtr<StringPtr> (Expression::*)()>(&
                             Expression::getMissingUserDefinedUnits)>::call);
    emscripten::function("api_C1_00633",
                         &MemberCall<static_cast<ArrayPtr<StringPtr> (Expression::*)()>(&
                             Expression::getMissingUserDefinedFunctions)>::call);
    emscripten::function("api_C1_00634",
                         &MemberCall<static_cast<void (Expression::*)()>(&
                             Expression::consolePrintCopyOfInitialTokens)>::call);
    emscripten::function("api_C1_00635",
                         &MemberCall<static_cast<StringPtr (Expression::*)()>(&Expression::getHelp)>::call);
    emscripten::function("api_C1_00636",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const StringPtr &)>(&
                             Expression::getHelp)>::call);
    emscripten::function("api_C1_00637",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const String &)>(&
                             Expression::getHelp)>::call);
    emscripten::function("api_C1_00641",
                         &MemberCall<static_cast<StringPtr (Expression::*)(bool, bool, const StringPtr &)>(&
                             Expression::getHelp)>::call);
    emscripten::function("api_C1_00642",
                         &MemberCall<static_cast<StringPtr (Expression::*)(bool, bool, const String &)>(&
                             Expression::getHelp)>::call);
    emscripten::function("api_C1_00646",
                         &MemberCall<static_cast<StringPtr (Expression::*)(
                             const StringPtr &, bool, bool, const StringPtr &)>(&Expression::getHelp)>::call);
    emscripten::function("api_C1_00647",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const String &, bool, bool, const String &)>(
                             &Expression::getHelp)>::call);
    emscripten::function("api_C1_00651",
                         &MemberCall<static_cast<StringPtr (Expression::*)()>(&Expression::getHelpAsCsv)>::call);
    emscripten::function("api_C1_00652",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const StringPtr &)>(&
                             Expression::getHelpAsCsv)>::call);
    emscripten::function("api_C1_00653",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const String &)>(&
                             Expression::getHelpAsCsv)>::call);
    emscripten::function("api_C1_00657",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const StringPtr &, const StringPtr &, bool)>(
                             &Expression::getHelpAsCsv)>::call);
    emscripten::function("api_C1_00658",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const String &, const String &, bool)>(&
                             Expression::getHelpAsCsv)>::call);
    emscripten::function("api_C1_00662",
                         &MemberCall<static_cast<StringPtr (Expression::*)(
                             const StringPtr &, const StringPtr &, const StringPtr &,
                             bool)>(&Expression::getHelpAsCsv)>::call);
    emscripten::function("api_C1_00663",
                         &MemberCall<static_cast<StringPtr (Expression::*)(
                             const String &, const String &, const String &, bool)>(&Expression::getHelpAsCsv)>::call);
    emscripten::function("api_C1_00667",
                         &MemberCall<static_cast<StringPtr (Expression::*)()>(&Expression::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_00668",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const StringPtr &)>(&
                             Expression::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_00669",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const String &)>(&
                             Expression::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_00673",
                         &MemberCall<static_cast<StringPtr (Expression::*)(
                             bool, bool, bool, const StringPtr &,
                             const StringPtr &)>(&Expression::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_00674",
                         &MemberCall<static_cast<StringPtr (Expression::*)(
                             bool, bool, bool, const String &,
                             const String &)>(&Expression::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_00678",
                         &MemberCall<static_cast<StringPtr (Expression::*)(
                             const StringPtr &, bool, bool, bool, const StringPtr &,
                             const StringPtr &)>(&Expression::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_00679",
                         &MemberCall<static_cast<StringPtr (Expression::*)(
                             const String &, bool, bool, bool, const String &,
                             const String &)>(&Expression::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_00683",
                         &MemberCall<static_cast<StringPtr (Expression::*)()>(&
                             Expression::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_00684",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const StringPtr &)>(&
                             Expression::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_00685",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const String &)>(&
                             Expression::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_00689",
                         &MemberCall<static_cast<StringPtr (Expression::*)(bool, bool, const StringPtr &)>(&
                             Expression::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_00690",
                         &MemberCall<static_cast<StringPtr (Expression::*)(bool, bool, const String &)>(&
                             Expression::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_00694",
                         &MemberCall<static_cast<StringPtr (Expression::*)(
                             const StringPtr &, bool, bool,
                             const StringPtr &)>(&Expression::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_00695",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const String &, bool, bool, const String &)>(
                             &Expression::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_00699",
                         &MemberCall<static_cast<StringPtr (Expression::*)()>(&Expression::getHelpAsJson)>::call);
    emscripten::function("api_C1_00700",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const StringPtr &)>(&
                             Expression::getHelpAsJson)>::call);
    emscripten::function("api_C1_00701",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const String &)>(&
                             Expression::getHelpAsJson)>::call);
    emscripten::function("api_C1_00705",
                         &MemberCall<static_cast<StringPtr (Expression::*)(bool, const StringPtr &)>(&
                             Expression::getHelpAsJson)>::call);
    emscripten::function("api_C1_00706",
                         &MemberCall<static_cast<StringPtr (Expression::*)(bool, const String &)>(&
                             Expression::getHelpAsJson)>::call);
    emscripten::function("api_C1_00710",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const StringPtr &, bool, const StringPtr &)>(
                             &Expression::getHelpAsJson)>::call);
    emscripten::function("api_C1_00711",
                         &MemberCall<static_cast<StringPtr (Expression::*)(const String &, bool, const String &)>(&
                             Expression::getHelpAsJson)>::call);
    emscripten::function("api_C1_00715",
                         &MemberCall<static_cast<ListPtr<KeyWordPtr> (Expression::*)()>(&
                             Expression::getKeyWords)>::call);
    emscripten::function("api_C1_00716",
                         &MemberCall<static_cast<ListPtr<KeyWordPtr> (Expression::*)(const StringPtr &)>(&
                             Expression::getKeyWords)>::call);
    emscripten::function("api_C1_00717",
                         &MemberCall<static_cast<ListPtr<KeyWordPtr> (Expression::*)(const String &)>(&
                             Expression::getKeyWords)>::call);
    emscripten::function("api_C1_00721",
                         &MemberCall<static_cast<ExpressionPtr (Expression::*)()>(&
                             Expression::cloneForThreadSafe)>::call);
    emscripten::function("api_C1_00873",
                         &MemberCall<static_cast<void (Function::*)(const StringPtr &,
                                                                    const ListPtr<PrimitiveElementPtr> &)>(&
                             Function::setFunction)>::call);
    emscripten::function("api_C1_00875",
                         &MemberCall<static_cast<void (Function::*)(const String &,
                                                                    const ListPtr<PrimitiveElementPtr> &)>(&
                             Function::setFunction)>::call);
    emscripten::function("api_C1_00878",
                         &MemberCall<static_cast<double (Function::*)(const ListPtr<double> &)>(&
                             Function::calculate)>::call);
    emscripten::function("api_C1_00880",
                         &MemberCall<static_cast<double (Function::*)(const ListPtr<ArgumentPtr> &)>(&
                             Function::calculate)>::call);
    emscripten::function("api_C1_00883",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<PrimitiveElementPtr> &)>(&
                             Function::addDefinitions)>::call);
    emscripten::function("api_C1_00885",
                         &MemberCall<static_cast<void (Function::*)(const PrimitiveElementPtr &)>(&
                             Function::addDefinitions)>::call);
    emscripten::function("api_C1_00888",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<PrimitiveElementPtr> &)>(&
                             Function::removeDefinitions)>::call);
    emscripten::function("api_C1_00890",
                         &MemberCall<static_cast<void (Function::*)(const PrimitiveElementPtr &)>(&
                             Function::removeDefinitions)>::call);
    emscripten::function("api_C1_00893",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<ArgumentPtr> &)>(&
                             Function::addArguments)>::call);
    emscripten::function("api_C1_00895",
                         &MemberCall<static_cast<void (Function::*)(const ArgumentPtr &)>(&
                             Function::addArguments)>::call);
    emscripten::function("api_C1_00898",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<StringPtr> &)>(&
                             Function::defineArguments)>::call);
    emscripten::function("api_C1_00900",
                         &MemberCall<static_cast<void (Function::*)(const StringPtr &)>(&
                             Function::defineArguments)>::call);
    emscripten::function("api_C1_00902",
                         &MemberCall<static_cast<void (Function::*)(const String &)>(&
                             Function::defineArguments)>::call);
    emscripten::function("api_C1_00907",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<StringPtr> &)>(&
                             Function::removeArguments)>::call);
    emscripten::function("api_C1_00909",
                         &MemberCall<static_cast<void (Function::*)(const StringPtr &)>(&
                             Function::removeArguments)>::call);
    emscripten::function("api_C1_00911",
                         &MemberCall<static_cast<void (Function::*)(const String &)>(&
                             Function::removeArguments)>::call);
    emscripten::function("api_C1_00915",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<ArgumentPtr> &)>(&
                             Function::removeArguments)>::call);
    emscripten::function("api_C1_00917",
                         &MemberCall<static_cast<void (Function::*)(const ArgumentPtr &)>(&
                             Function::removeArguments)>::call);
    emscripten::function("api_C1_00919",
                         &MemberCall<static_cast<void (Function::*)()>(&Function::removeAllArguments)>::call);
    emscripten::function("api_C1_00921",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<ConstantPtr> &)>(&
                             Function::addConstants)>::call);
    emscripten::function("api_C1_00923",
                         &MemberCall<static_cast<void (Function::*)(const ConstantPtr &)>(&
                             Function::addConstants)>::call);
    emscripten::function("api_C1_00926",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<StringPtr> &)>(&
                             Function::removeConstants)>::call);
    emscripten::function("api_C1_00928",
                         &MemberCall<static_cast<void (Function::*)(const StringPtr &)>(&
                             Function::removeConstants)>::call);
    emscripten::function("api_C1_00930",
                         &MemberCall<static_cast<void (Function::*)(const String &)>(&
                             Function::removeConstants)>::call);
    emscripten::function("api_C1_00934",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<ConstantPtr> &)>(&
                             Function::removeConstants)>::call);
    emscripten::function("api_C1_00936",
                         &MemberCall<static_cast<void (Function::*)(const ConstantPtr &)>(&
                             Function::removeConstants)>::call);
    emscripten::function("api_C1_00938",
                         &MemberCall<static_cast<void (Function::*)()>(&Function::removeAllConstants)>::call);
    emscripten::function("api_C1_00940",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<FunctionPtr> &)>(&
                             Function::addFunctions)>::call);
    emscripten::function("api_C1_00942",
                         &MemberCall<static_cast<void (Function::*)(const FunctionPtr &)>(&
                             Function::addFunctions)>::call);
    emscripten::function("api_C1_00946",
                         &MemberCall<static_cast<void (Function::*)(const StringPtr &, const StringPtr &,
                                                                    const ListPtr<StringPtr> &)>(&
                             Function::defineFunction)>::call);
    emscripten::function("api_C1_00949",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<StringPtr> &)>(&
                             Function::removeFunctions)>::call);
    emscripten::function("api_C1_00951",
                         &MemberCall<static_cast<void (Function::*)(const StringPtr &)>(&
                             Function::removeFunctions)>::call);
    emscripten::function("api_C1_00953",
                         &MemberCall<static_cast<void (Function::*)(const String &)>(&
                             Function::removeFunctions)>::call);
    emscripten::function("api_C1_00957",
                         &MemberCall<static_cast<void (Function::*)(const ListPtr<FunctionPtr> &)>(&
                             Function::removeFunctions)>::call);
    emscripten::function("api_C1_00959",
                         &MemberCall<static_cast<void (Function::*)(const FunctionPtr &)>(&
                             Function::removeFunctions)>::call);
    emscripten::function("api_C1_00961",
                         &MemberCall<static_cast<void (Function::*)()>(&Function::removeAllFunctions)>::call);
    emscripten::function("api_C1_00962_get", &StaticFieldAccess<&Function::TYPE_ID>::get);
    emscripten::function("api_C1_00963_get", &StaticFieldAccess<&Function::TYPE_DESC>::get);
    emscripten::function("api_C1_00963_set", &StaticFieldAccess<&Function::TYPE_DESC>::set);
    emscripten::function("api_C1_00964_get", &StaticFieldAccess<&Function::NO_SYNTAX_ERRORS>::get);
    emscripten::function("api_C1_00965_get", &StaticFieldAccess<&Function::SYNTAX_ERROR>::get);
    emscripten::function("api_C1_00966_get", &StaticFieldAccess<&Function::SYNTAX_ERROR_OR_STATUS_UNKNOWN>::get);
    emscripten::function("api_C1_00967_get", &StaticFieldAccess<&Function::NOT_FOUND>::get);
    emscripten::function("api_C1_00968_get", &StaticFieldAccess<&Function::BODY_RUNTIME>::get);
    emscripten::function("api_C1_00969_get", &StaticFieldAccess<&Function::BODY_EXTENDED>::get);
    emscripten::function("api_C1_00970",
                         &MemberCall<static_cast<void (Function::*)(const StringPtr &)>(&
                             Function::setDescription)>::call);
    emscripten::function("api_C1_00971",
                         &MemberCall<static_cast<void (Function::*)(const String &)>(&Function::setDescription)>::call);
    emscripten::function("api_C1_00975",
                         &MemberCall<static_cast<StringPtr (Function::*)() const>(&Function::getDescription)>::call);
    emscripten::function("api_C1_00976",
                         &MemberCall<static_cast<void (Function::*)(const StringPtr &)>(&
                             Function::setFunctionName)>::call);
    emscripten::function("api_C1_00977",
                         &MemberCall<static_cast<void (Function::*)(const String &)>(&
                             Function::setFunctionName)>::call);
    emscripten::function("api_C1_00981",
                         &MemberCall<static_cast<StringPtr (Function::*)() const>(&Function::getFunctionName)>::call);
    emscripten::function("api_C1_00982",
                         &MemberCall<static_cast<StringPtr (Function::*)() const>(&
                             Function::getFunctionExpressionString)>::call);
    emscripten::function("api_C1_00983",
                         &MemberCall<static_cast<void (Function::*)(int, double)>(&Function::setArgumentValue)>::call);
    emscripten::function("api_C1_00984",
                         &MemberCall<static_cast<int (Function::*)() const>(&Function::getFunctionBodyType)>::call);
    emscripten::function("api_C1_00985", &MemberCall<static_cast<bool (Function::*)()>(&Function::checkSyntax)>::call);
    emscripten::function("api_C1_00986",
                         &MemberCall<static_cast<StringPtr (Function::*)() const>(&Function::getErrorMessage)>::call);
    emscripten::function("api_C1_00987", &MemberCall<static_cast<double (Function::*)()>(&Function::calculate)>::call);
    emscripten::function("api_C1_00988",
                         &MemberCall<static_cast<double (Function::*)(const CalcStepsRegisterPtr &)>(&
                             Function::calculate)>::call);
    emscripten::function("api_C1_00990",
                         &MemberCall<static_cast<void (Function::*)(const StringPtr &, double)>(&
                             Function::defineArgument)>::call);
    emscripten::function("api_C1_00991",
                         &MemberCall<static_cast<int (Function::*)(const StringPtr &) const>(&
                             Function::getArgumentIndex)>::call);
    emscripten::function("api_C1_00992",
                         &MemberCall<static_cast<int (Function::*)(const String &)>(&
                             Function::getArgumentIndex)>::call);
    emscripten::function("api_C1_00996",
                         &MemberCall<static_cast<ArgumentPtr (Function::*)(const StringPtr &) const>(&
                             Function::getArgument)>::call);
    emscripten::function("api_C1_00997",
                         &MemberCall<static_cast<ArgumentPtr (Function::*)(const String &)>(&
                             Function::getArgument)>::call);
    emscripten::function("api_C1_01001",
                         &MemberCall<static_cast<ArgumentPtr (Function::*)(int) const>(&Function::getArgument)>::call);
    emscripten::function("api_C1_01002",
                         &MemberCall<static_cast<int (Function::*)() const>(&Function::getParametersNumber)>::call);
    emscripten::function("api_C1_01003",
                         &MemberCall<static_cast<void (Function::*)(int)>(&Function::setParametersNumber)>::call);
    emscripten::function("api_C1_01004",
                         &MemberCall<static_cast<StringPtr (Function::*)(int) const>(&
                             Function::getParameterName)>::call);
    emscripten::function("api_C1_01005",
                         &MemberCall<static_cast<int (Function::*)() const>(&Function::getArgumentsNumber)>::call);
    emscripten::function("api_C1_01006",
                         &MemberCall<static_cast<void (Function::*)(const StringPtr &, double)>(&
                             Function::defineConstant)>::call);
    emscripten::function("api_C1_01007",
                         &MemberCall<static_cast<int (Function::*)(const StringPtr &) const>(&
                             Function::getConstantIndex)>::call);
    emscripten::function("api_C1_01008",
                         &MemberCall<static_cast<int (Function::*)(const String &)>(&
                             Function::getConstantIndex)>::call);
    emscripten::function("api_C1_01012",
                         &MemberCall<static_cast<ConstantPtr (Function::*)(const StringPtr &) const>(&
                             Function::getConstant)>::call);
    emscripten::function("api_C1_01013",
                         &MemberCall<static_cast<ConstantPtr (Function::*)(const String &)>(&
                             Function::getConstant)>::call);
    emscripten::function("api_C1_01017",
                         &MemberCall<static_cast<ConstantPtr (Function::*)(int) const>(&Function::getConstant)>::call);
    emscripten::function("api_C1_01018",
                         &MemberCall<static_cast<int (Function::*)() const>(&Function::getConstantsNumber)>::call);
    emscripten::function("api_C1_01019",
                         &MemberCall<static_cast<int (Function::*)(const StringPtr &) const>(&
                             Function::getFunctionIndex)>::call);
    emscripten::function("api_C1_01020",
                         &MemberCall<static_cast<int (Function::*)(const String &)>(&
                             Function::getFunctionIndex)>::call);
    emscripten::function("api_C1_01024",
                         &MemberCall<static_cast<int (Function::*)()>(&Function::getFunctionsNumber)>::call);
    emscripten::function("api_C1_01025",
                         &MemberCall<static_cast<FunctionPtr (Function::*)(const StringPtr &) const>(&
                             Function::getFunction)>::call);
    emscripten::function("api_C1_01026",
                         &MemberCall<static_cast<FunctionPtr (Function::*)(const String &)>(&
                             Function::getFunction)>::call);
    emscripten::function("api_C1_01030",
                         &MemberCall<static_cast<FunctionPtr (Function::*)(int) const>(&Function::getFunction)>::call);
    emscripten::function("api_C1_01031",
                         &MemberCall<static_cast<void (Function::*)()>(&Function::setVerboseMode)>::call);
    emscripten::function("api_C1_01032",
                         &MemberCall<static_cast<void (Function::*)()>(&Function::setSilentMode)>::call);
    emscripten::function("api_C1_01033",
                         &MemberCall<static_cast<bool (Function::*)() const>(&Function::getVerboseMode)>::call);
    emscripten::function("api_C1_01034",
                         &MemberCall<static_cast<bool (Function::*)() const>(&Function::getRecursiveMode)>::call);
    emscripten::function("api_C1_01035",
                         &MemberCall<static_cast<double (Function::*)() const>(&Function::getComputingTime)>::call);
    emscripten::function("api_C1_01036",
                         &MemberCall<static_cast<FunctionPtr (Function::*)()>(&Function::cloneForThreadSafe)>::call);
    emscripten::function("api_C1_01107",
                         &StaticCall<static_cast<bool (*)(const StringPtr &)>(&License::iConfirmCommercialUse)>::call);
    emscripten::function("api_C1_01108",
                         &StaticCall<static_cast<bool (*)(const String &)>(&License::iConfirmCommercialUse)>::call);
    emscripten::function("api_C1_01112",
                         &StaticCall<static_cast<bool (*)(const StringPtr &)>(&
                             License::iConfirmNonCommercialUse)>::call);
    emscripten::function("api_C1_01113",
                         &StaticCall<static_cast<bool (*)(const String &)>(&License::iConfirmNonCommercialUse)>::call);
    emscripten::function("api_C1_01117", &StaticCall<static_cast<bool (*)()>(&License::checkIfUseTypeConfirmed)>::call);
    emscripten::function("api_C1_01118",
                         &StaticCall<static_cast<StringPtr (*)()>(&License::getUseTypeConfirmationMessage)>::call);
    emscripten::function("api_C1_01119", &StaticCall<static_cast<StringPtr (*)()>(&License::getErrorMessage)>::call);
    emscripten::function("api_C1_01120", &StaticCall<static_cast<StringPtr (*)()>(&License::geTermsOfAgreement)>::call);
    emscripten::function("api_C1_01121", &StaticCall<static_cast<void (*)()>(&License::consolePrintLicense)>::call);
    emscripten::function("api_C1_01122_get",
                         &StaticFieldAccess<&License::MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT>::get);
    emscripten::function("api_C1_01269",
                         &MemberCall<static_cast<int (PrimitiveElement::*)() const>(&
                             PrimitiveElement::getMyTypeId)>::call);
    emscripten::function("api_C1_01273_get", &StaticFieldAccess<&RecursiveArgument::TYPE_ID_RECURSIVE>::get);
    emscripten::function("api_C1_01274_get", &StaticFieldAccess<&RecursiveArgument::TYPE_DESC_RECURSIVE>::get);
    emscripten::function("api_C1_01274_set", &StaticFieldAccess<&RecursiveArgument::TYPE_DESC_RECURSIVE>::set);
    emscripten::function("api_C1_01299",
                         &MemberCall<static_cast<void (RecursiveArgument::*)(int, double) const>(&
                             RecursiveArgument::addBaseCase)>::call);
    emscripten::function("api_C1_01300",
                         &MemberCall<static_cast<void (RecursiveArgument::*)()>(&
                             RecursiveArgument::resetAllCases)>::call);
    emscripten::function("api_C1_01301",
                         &MemberCall<static_cast<double (RecursiveArgument::*)(double)>(&
                             RecursiveArgument::getArgumentValue)>::call);
    emscripten::function("api_C1_01302",
                         &MemberCall<static_cast<ArgumentPtr (RecursiveArgument::*)()>(&
                             RecursiveArgument::cloneForThreadSafe)>::call);
    emscripten::function("api_C1_01339",
                         &StaticCall<static_cast<void (*)()>(&
                             SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks)>::call);
    emscripten::function("api_C1_01340",
                         &StaticCall<static_cast<void (*)()>(&SerializationUtils::disableBinarySerialization)>::call);
    emscripten::function("api_C1_01341",
                         &StaticCall<static_cast<bool (*)()>(&SerializationUtils::isBinarySerializationEnabled)>::call);
    emscripten::function("api_C1_01342",
                         &StaticCall<static_cast<bool (*)()>(&
                             SerializationUtils::checkLastOperationWasSuccessful)>::call);
    emscripten::function("api_C1_01343",
                         &StaticCall<static_cast<StringPtr (*)()>(&SerializationUtils::getLastOperationMessage)>::call);
    emscripten::function("api_C1_01587",
                         &StaticCall<static_cast<void (*)(const StringResourcesPtr &)>(&
                             StringModel::setStringResources)>::call);
    emscripten::function("api_C1_01588",
                         &StaticCall<static_cast<void (*)()>(&StringModel::setDefaultStringResources)>::call);
    emscripten::function("api_C1_01590",
                         &StaticCall<static_cast<void (*)()>(&StringModel::setDefaultEnglishStringResources)>::call);
    emscripten::function("api_C1_01591",
                         &StaticCall<static_cast<StringResourcesPtr (*)()>(&StringModel::getStringResources)>::call);
    emscripten::function("api_C1_01592", &StaticCall<static_cast<void (*)()>(&StringModel::print)>::call);
    emscripten::function("api_C1_01593", &StaticCall<static_cast<void (*)()>(&StringModel::printDescriptions)>::call);
    emscripten::function("api_C1_01606",
                         &StaticCall<static_cast<StringResourcesPtr (*)()>(&StringResources::languageDefault)>::call);
    emscripten::function("api_C1_01607",
                         &StaticCall<static_cast<StringResourcesPtr (*)()>(&StringResources::languageChinese)>::call);
    emscripten::function("api_C1_01608",
                         &StaticCall<static_cast<StringResourcesPtr (*)()>(&StringResources::languageEnglish)>::call);
    emscripten::function("api_C1_01609",
                         &StaticCall<static_cast<StringResourcesPtr (*)()>(&StringResources::languageFrench)>::call);
    emscripten::function("api_C1_01610",
                         &StaticCall<static_cast<StringResourcesPtr (*)()>(&StringResources::languageGerman)>::call);
    emscripten::function("api_C1_01611",
                         &StaticCall<static_cast<StringResourcesPtr (*)()>(&StringResources::languageItalian)>::call);
    emscripten::function("api_C1_01612",
                         &StaticCall<static_cast<StringResourcesPtr (*)()>(&StringResources::languagePolish)>::call);
    emscripten::function("api_C1_01613",
                         &StaticCall<static_cast<StringResourcesPtr (*)()>(&
                             StringResources::languagePortuguese)>::call);
    emscripten::function("api_C1_01614",
                         &StaticCall<static_cast<StringResourcesPtr (*)()>(&StringResources::languageSpanish)>::call);
    emscripten::function("api_C1_01616",
                         &StaticCall<static_cast<StringResourcesPtr (*)(const StringPtr &)>(&
                             StringResources::bestMatchingLanguage)>::call);
    emscripten::function("api_C1_01617",
                         &StaticCall<static_cast<StringResourcesPtr (*)(const String &)>(&
                             StringResources::bestMatchingLanguage)>::call);
    emscripten::function("api_C1_01621",
                         &StaticCall<static_cast<StringResourcesPtr (*)()>(&
                             StringResources::bestMatchingLanguage)>::call);
    emscripten::function("api_C1_01622_get", &FieldAccess<&StringResources::USER_LANGUAGE>::get);
    emscripten::function("api_C1_01622_set", &FieldAccess<&StringResources::USER_LANGUAGE>::set);
    emscripten::function("api_C1_01623_get", &FieldAccess<&StringResources::STARTING_SYNTAX_CHECK>::get);
    emscripten::function("api_C1_01623_set", &FieldAccess<&StringResources::STARTING_SYNTAX_CHECK>::set);
    emscripten::function("api_C1_01624_get", &FieldAccess<&StringResources::NO_ERRORS_DETECTED>::get);
    emscripten::function("api_C1_01624_set", &FieldAccess<&StringResources::NO_ERRORS_DETECTED>::set);
    emscripten::function("api_C1_01625_get",
                         &FieldAccess<&StringResources::NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION>::get);
    emscripten::function("api_C1_01625_set",
                         &FieldAccess<&StringResources::NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION>::set);
    emscripten::function("api_C1_01626_get",
                         &FieldAccess<&StringResources::NO_ERRORS_DETECTED_IN_RECURSIVE_ARGUMENT_DEFINITION>::get);
    emscripten::function("api_C1_01626_set",
                         &FieldAccess<&StringResources::NO_ERRORS_DETECTED_IN_RECURSIVE_ARGUMENT_DEFINITION>::set);
    emscripten::function("api_C1_01627_get",
                         &FieldAccess<&StringResources::NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION>::get);
    emscripten::function("api_C1_01627_set",
                         &FieldAccess<&StringResources::NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION>::set);
    emscripten::function("api_C1_01628_get",
                         &FieldAccess<&StringResources::NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION>::get);
    emscripten::function("api_C1_01628_set",
                         &FieldAccess<&StringResources::NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION>::set);
    emscripten::function("api_C1_01629_get", &FieldAccess<&StringResources::LEXICAL_ERROR_HAS_BEEN_FOUND>::get);
    emscripten::function("api_C1_01629_set", &FieldAccess<&StringResources::LEXICAL_ERROR_HAS_BEEN_FOUND>::set);
    emscripten::function("api_C1_01630_get", &FieldAccess<&StringResources::ERRORS_HAVE_BEEN_FOUND>::get);
    emscripten::function("api_C1_01630_set", &FieldAccess<&StringResources::ERRORS_HAVE_BEEN_FOUND>::set);
    emscripten::function("api_C1_01631_get", &FieldAccess<&StringResources::ALREADY_CHECKED_NO_ERRORS>::get);
    emscripten::function("api_C1_01631_set", &FieldAccess<&StringResources::ALREADY_CHECKED_NO_ERRORS>::set);
    emscripten::function("api_C1_01632_get", &FieldAccess<&StringResources::SYNTAX_STATUS_UNKNOWN>::get);
    emscripten::function("api_C1_01632_set", &FieldAccess<&StringResources::SYNTAX_STATUS_UNKNOWN>::set);
    emscripten::function("api_C1_01633_get", &FieldAccess<&StringResources::PROBLEM_WITH_EXPRESSION_SYNTAX>::get);
    emscripten::function("api_C1_01633_set", &FieldAccess<&StringResources::PROBLEM_WITH_EXPRESSION_SYNTAX>::set);
    emscripten::function("api_C1_01634_get", &FieldAccess<&StringResources::ENCOUNTERED>::get);
    emscripten::function("api_C1_01634_set", &FieldAccess<&StringResources::ENCOUNTERED>::set);
    emscripten::function("api_C1_01638_get", &FieldAccess<&StringResources::AT_INDEX>::get);
    emscripten::function("api_C1_01638_set", &FieldAccess<&StringResources::AT_INDEX>::set);
    emscripten::function("api_C1_01640_get", &FieldAccess<&StringResources::WAS_EXPECTING>::get);
    emscripten::function("api_C1_01640_set", &FieldAccess<&StringResources::WAS_EXPECTING>::set);
    emscripten::function("api_C1_01641_get", &FieldAccess<&StringResources::WAS_EXPECTING_ONE_OF>::get);
    emscripten::function("api_C1_01641_set", &FieldAccess<&StringResources::WAS_EXPECTING_ONE_OF>::set);
    emscripten::function("api_C1_01642_get", &FieldAccess<&StringResources::UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED>::get);
    emscripten::function("api_C1_01642_set", &FieldAccess<&StringResources::UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED>::set);
    emscripten::function("api_C1_01643_get",
                         &FieldAccess<&StringResources::UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED>::get);
    emscripten::function("api_C1_01643_set",
                         &FieldAccess<&StringResources::UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED>::set);
    emscripten::function("api_C1_01644_get", &FieldAccess<&StringResources::EXPRESSION_STRING_IS_EMPTY>::get);
    emscripten::function("api_C1_01644_set", &FieldAccess<&StringResources::EXPRESSION_STRING_IS_EMPTY>::set);
    emscripten::function("api_C1_01645_get",
                         &FieldAccess<&StringResources::EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS>::get);
    emscripten::function("api_C1_01645_set",
                         &FieldAccess<&StringResources::EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS>::set);
    emscripten::function("api_C1_01646_get", &FieldAccess<&StringResources::DUPLICATED_KEYWORD>::get);
    emscripten::function("api_C1_01646_set", &FieldAccess<&StringResources::DUPLICATED_KEYWORD>::set);
    emscripten::function("api_C1_01647_get", &FieldAccess<&StringResources::ELEMENT>::get);
    emscripten::function("api_C1_01647_set", &FieldAccess<&StringResources::ELEMENT>::set);
    emscripten::function("api_C1_01648_get", &FieldAccess<&StringResources::ERROR>::get);
    emscripten::function("api_C1_01648_set", &FieldAccess<&StringResources::ERROR>::set);
    emscripten::function("api_C1_01649_get", &FieldAccess<&StringResources::EXCEPTION>::get);
    emscripten::function("api_C1_01649_set", &FieldAccess<&StringResources::EXCEPTION>::set);
    emscripten::function("api_C1_01650_get", &FieldAccess<&StringResources::TOKEN>::get);
    emscripten::function("api_C1_01650_set", &FieldAccess<&StringResources::TOKEN>::set);
    emscripten::function("api_C1_01651_get", &FieldAccess<&StringResources::INDEX>::get);
    emscripten::function("api_C1_01651_set", &FieldAccess<&StringResources::INDEX>::set);
    emscripten::function("api_C1_01652_get", &FieldAccess<&StringResources::INVALID_TOKEN>::get);
    emscripten::function("api_C1_01652_set", &FieldAccess<&StringResources::INVALID_TOKEN>::set);
    emscripten::function("api_C1_01653_get",
                         &FieldAccess<&StringResources::INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR>::get);
    emscripten::function("api_C1_01653_set",
                         &FieldAccess<&StringResources::INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR>::set);
    emscripten::function("api_C1_01654_get", &FieldAccess<&StringResources::EXPRESSION_TOKENS>::get);
    emscripten::function("api_C1_01654_set", &FieldAccess<&StringResources::EXPRESSION_TOKENS>::set);
    emscripten::function("api_C1_01655_get", &FieldAccess<&StringResources::NULL_TOKENS_LIST>::get);
    emscripten::function("api_C1_01655_set", &FieldAccess<&StringResources::NULL_TOKENS_LIST>::set);
    emscripten::function("api_C1_01656_get",
                         &FieldAccess<&StringResources::FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS>::get);
    emscripten::function("api_C1_01656_set",
                         &FieldAccess<&StringResources::FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS>::set);
    emscripten::function("api_C1_01657_get",
                         &FieldAccess<&StringResources::ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS>::get);
    emscripten::function("api_C1_01657_set",
                         &FieldAccess<&StringResources::ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS>::set);
    emscripten::function("api_C1_01658_get", &FieldAccess<&StringResources::PROVIDED_EXTENSION_IS_NULL>::get);
    emscripten::function("api_C1_01658_set", &FieldAccess<&StringResources::PROVIDED_EXTENSION_IS_NULL>::set);
    emscripten::function("api_C1_01659_get", &FieldAccess<&StringResources::PROVIDED_STRING_IS_NULL>::get);
    emscripten::function("api_C1_01659_set", &FieldAccess<&StringResources::PROVIDED_STRING_IS_NULL>::set);
    emscripten::function("api_C1_01660_get", &FieldAccess<&StringResources::PROVIDED_ELEMENTS_ARE_NULL>::get);
    emscripten::function("api_C1_01660_set", &FieldAccess<&StringResources::PROVIDED_ELEMENTS_ARE_NULL>::set);
    emscripten::function("api_C1_01661_get",
                         &FieldAccess<&
                             StringResources::MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE>::get);
    emscripten::function("api_C1_01661_set",
                         &FieldAccess<&
                             StringResources::MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE>::set);
    emscripten::function("api_C1_01662_get",
                         &FieldAccess<&StringResources::STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT>::get);
    emscripten::function("api_C1_01662_set",
                         &FieldAccess<&StringResources::STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT>::set);
    emscripten::function("api_C1_01663_get",
                         &FieldAccess<&StringResources::STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT>::get);
    emscripten::function("api_C1_01663_set",
                         &FieldAccess<&StringResources::STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT>::set);
    emscripten::function("api_C1_01664_get",
                         &FieldAccess<&StringResources::STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION>::get);
    emscripten::function("api_C1_01664_set",
                         &FieldAccess<&StringResources::STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION>::set);
    emscripten::function("api_C1_01665_get",
                         &FieldAccess<&StringResources::STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION>::get);
    emscripten::function("api_C1_01665_set",
                         &FieldAccess<&StringResources::STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION>::set);
    emscripten::function("api_C1_01666_get", &FieldAccess<&StringResources::ARGUMENT_WAS_EXPECTED>::get);
    emscripten::function("api_C1_01666_set", &FieldAccess<&StringResources::ARGUMENT_WAS_EXPECTED>::set);
    emscripten::function("api_C1_01667_get",
                         &FieldAccess<&StringResources::RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER>::get);
    emscripten::function("api_C1_01667_set",
                         &FieldAccess<&StringResources::RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER>::set);
    emscripten::function("api_C1_01668_get",
                         &FieldAccess<&StringResources::INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION>::get);
    emscripten::function("api_C1_01668_set",
                         &FieldAccess<&StringResources::INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION>::set);
    emscripten::function("api_C1_01669_get",
                         &FieldAccess<&StringResources::INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS>::get);
    emscripten::function("api_C1_01669_set",
                         &FieldAccess<&StringResources::INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS>::set);
    emscripten::function("api_C1_01670_get", &FieldAccess<&StringResources::EXPECTED>::get);
    emscripten::function("api_C1_01670_set", &FieldAccess<&StringResources::EXPECTED>::set);
    emscripten::function("api_C1_01671_get", &FieldAccess<&StringResources::PROVIDED>::get);
    emscripten::function("api_C1_01671_set", &FieldAccess<&StringResources::PROVIDED>::set);
    emscripten::function("api_C1_01672_get",
                         &FieldAccess<&StringResources::USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT>::get);
    emscripten::function("api_C1_01672_set",
                         &FieldAccess<&StringResources::USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT>::set);
    emscripten::function("api_C1_01673_get", &FieldAccess<&StringResources::EXPECTED_EVEN_NUMBER_OF_ARGUMENTS>::get);
    emscripten::function("api_C1_01673_set", &FieldAccess<&StringResources::EXPECTED_EVEN_NUMBER_OF_ARGUMENTS>::set);
    emscripten::function("api_C1_01674_get", &FieldAccess<&StringResources::INVALID_FUNCTION_NAME>::get);
    emscripten::function("api_C1_01674_set", &FieldAccess<&StringResources::INVALID_FUNCTION_NAME>::set);
    emscripten::function("api_C1_01675_get", &FieldAccess<&StringResources::INVALID_ARGUMENT_NAME>::get);
    emscripten::function("api_C1_01675_set", &FieldAccess<&StringResources::INVALID_ARGUMENT_NAME>::set);
    emscripten::function("api_C1_01676_get", &FieldAccess<&StringResources::INVALID_CONSTANT_NAME>::get);
    emscripten::function("api_C1_01676_set", &FieldAccess<&StringResources::INVALID_CONSTANT_NAME>::set);
    emscripten::function("api_C1_01677_get", &FieldAccess<&StringResources::INVALID_FUNCTION_DEFINITION>::get);
    emscripten::function("api_C1_01677_set", &FieldAccess<&StringResources::INVALID_FUNCTION_DEFINITION>::set);
    emscripten::function("api_C1_01678_get", &FieldAccess<&StringResources::INVALID_ARGUMENT_DEFINITION>::get);
    emscripten::function("api_C1_01678_set", &FieldAccess<&StringResources::INVALID_ARGUMENT_DEFINITION>::set);
    emscripten::function("api_C1_01679_get", &FieldAccess<&StringResources::INVALID_CONSTANT_DEFINITION>::get);
    emscripten::function("api_C1_01679_set", &FieldAccess<&StringResources::INVALID_CONSTANT_DEFINITION>::set);
    emscripten::function("api_C1_01680_get", &FieldAccess<&StringResources::PATTERN_DOES_NOT_MATCH>::get);
    emscripten::function("api_C1_01680_set", &FieldAccess<&StringResources::PATTERN_DOES_NOT_MATCH>::set);
    emscripten::function("api_C1_01681_get", &FieldAccess<&StringResources::PATTERN_EXAMPLES>::get);
    emscripten::function("api_C1_01681_set", &FieldAccess<&StringResources::PATTERN_EXAMPLES>::set);
    emscripten::function("api_C1_01682_get", &FieldAccess<&StringResources::CONSTANT_WAS_EXPECTED>::get);
    emscripten::function("api_C1_01682_set", &FieldAccess<&StringResources::CONSTANT_WAS_EXPECTED>::set);
    emscripten::function("api_C1_01683_get", &FieldAccess<&StringResources::USER_CONSTANT_WAS_EXPECTED>::get);
    emscripten::function("api_C1_01683_set", &FieldAccess<&StringResources::USER_CONSTANT_WAS_EXPECTED>::set);
    emscripten::function("api_C1_01684_get", &FieldAccess<&StringResources::UNARY_FUNCTION_EXPECTS_1_PARAMETER>::get);
    emscripten::function("api_C1_01684_set", &FieldAccess<&StringResources::UNARY_FUNCTION_EXPECTS_1_PARAMETER>::set);
    emscripten::function("api_C1_01685_get", &FieldAccess<&StringResources::BINARY_FUNCTION_EXPECTS_2_PARAMETERS>::get);
    emscripten::function("api_C1_01685_set", &FieldAccess<&StringResources::BINARY_FUNCTION_EXPECTS_2_PARAMETERS>::set);
    emscripten::function("api_C1_01686_get",
                         &FieldAccess<&StringResources::TERNARY_FUNCTION_EXPECTS_3_PARAMETERS>::get);
    emscripten::function("api_C1_01686_set",
                         &FieldAccess<&StringResources::TERNARY_FUNCTION_EXPECTS_3_PARAMETERS>::set);
    emscripten::function("api_C1_01687_get",
                         &FieldAccess<&
                             StringResources::DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS>::get);
    emscripten::function("api_C1_01687_set",
                         &FieldAccess<&
                             StringResources::DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS>::set);
    emscripten::function("api_C1_01688_get",
                         &FieldAccess<&
                             StringResources::ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION>::get);
    emscripten::function("api_C1_01688_set",
                         &FieldAccess<&
                             StringResources::ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION>::set);
    emscripten::function("api_C1_01689_get",
                         &FieldAccess<&
                             StringResources::DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION>::get);
    emscripten::function("api_C1_01689_set",
                         &FieldAccess<&
                             StringResources::DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION>::set);
    emscripten::function("api_C1_01690_get",
                         &FieldAccess<&
                             StringResources::ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION>::get);
    emscripten::function("api_C1_01690_set",
                         &FieldAccess<&
                             StringResources::ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION>::set);
    emscripten::function("api_C1_01691_get",
                         &FieldAccess<&
                             StringResources::NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS>::get);
    emscripten::function("api_C1_01691_set",
                         &FieldAccess<&
                             StringResources::NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS>::set);
    emscripten::function("api_C1_01692_get",
                         &FieldAccess<&StringResources::INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS>::get);
    emscripten::function("api_C1_01692_set",
                         &FieldAccess<&StringResources::INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS>::set);
    emscripten::function("api_C1_01693_get",
                         &FieldAccess<&StringResources::ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS>::get);
    emscripten::function("api_C1_01693_set",
                         &FieldAccess<&StringResources::ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS>::set);
    emscripten::function("api_C1_01694_get",
                         &FieldAccess<&StringResources::FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS>::get);
    emscripten::function("api_C1_01694_set",
                         &FieldAccess<&StringResources::FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS>::set);
    emscripten::function("api_C1_01695_get",
                         &FieldAccess<&StringResources::FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED>::get);
    emscripten::function("api_C1_01695_set",
                         &FieldAccess<&StringResources::FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED>::set);
    emscripten::function("api_C1_01696_get", &FieldAccess<&StringResources::AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED>::get);
    emscripten::function("api_C1_01696_set", &FieldAccess<&StringResources::AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED>::set);
    emscripten::function("api_C1_01697_get", &FieldAccess<&StringResources::ERROR_WHILE_EXECUTING_THE_CALCULATE>::get);
    emscripten::function("api_C1_01697_set", &FieldAccess<&StringResources::ERROR_WHILE_EXECUTING_THE_CALCULATE>::set);
    emscripten::function("api_C1_01698_get", &FieldAccess<&StringResources::RECURSION_CALLS_COUNTER_EXCEEDED>::get);
    emscripten::function("api_C1_01698_set", &FieldAccess<&StringResources::RECURSION_CALLS_COUNTER_EXCEEDED>::set);
    emscripten::function("api_C1_01699_get", &FieldAccess<&StringResources::RECURSION_CALLS_COUNTER>::get);
    emscripten::function("api_C1_01699_set", &FieldAccess<&StringResources::RECURSION_CALLS_COUNTER>::set);
    emscripten::function("api_C1_01700_get", &FieldAccess<&StringResources::STARTING_CALCULATION_LOOP>::get);
    emscripten::function("api_C1_01700_set", &FieldAccess<&StringResources::STARTING_CALCULATION_LOOP>::set);
    emscripten::function("api_C1_01701_get", &FieldAccess<&StringResources::CANCEL_REQUEST_FINISHING>::get);
    emscripten::function("api_C1_01701_set", &FieldAccess<&StringResources::CANCEL_REQUEST_FINISHING>::set);
    emscripten::function("api_C1_01702_get",
                         &FieldAccess<&StringResources::INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING>::get);
    emscripten::function("api_C1_01702_set",
                         &FieldAccess<&StringResources::INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING>::set);
    emscripten::function("api_C1_01703_get",
                         &FieldAccess<&
                             StringResources::FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN>::get);
    emscripten::function("api_C1_01703_set",
                         &FieldAccess<&
                             StringResources::FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN>::set);
    emscripten::function("api_C1_01704_get",
                         &FieldAccess<&StringResources::MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED>::get);
    emscripten::function("api_C1_01704_set",
                         &FieldAccess<&StringResources::MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED>::set);
    emscripten::function("api_C1_01705_get", &FieldAccess<&StringResources::STARTING>::get);
    emscripten::function("api_C1_01705_set", &FieldAccess<&StringResources::STARTING>::set);
    emscripten::function("api_C1_01706_get", &FieldAccess<&StringResources::PARSING>::get);
    emscripten::function("api_C1_01706_set", &FieldAccess<&StringResources::PARSING>::set);
    emscripten::function("api_C1_01707_get", &FieldAccess<&StringResources::FULLY_COMPILED>::get);
    emscripten::function("api_C1_01707_set", &FieldAccess<&StringResources::FULLY_COMPILED>::set);
    emscripten::function("api_C1_01708_get", &FieldAccess<&StringResources::CALCULATED_VALUE>::get);
    emscripten::function("api_C1_01708_set", &FieldAccess<&StringResources::CALCULATED_VALUE>::set);
    emscripten::function("api_C1_01709_get", &FieldAccess<&StringResources::EXITING>::get);
    emscripten::function("api_C1_01709_set", &FieldAccess<&StringResources::EXITING>::set);
    emscripten::function("api_C1_01710_get", &FieldAccess<&StringResources::DONE>::get);
    emscripten::function("api_C1_01710_set", &FieldAccess<&StringResources::DONE>::set);
    emscripten::function("api_C1_01711_get", &FieldAccess<&StringResources::KEYWORD>::get);
    emscripten::function("api_C1_01711_set", &FieldAccess<&StringResources::KEYWORD>::set);
    emscripten::function("api_C1_01712_get", &FieldAccess<&StringResources::SYNTAX>::get);
    emscripten::function("api_C1_01712_set", &FieldAccess<&StringResources::SYNTAX>::set);
    emscripten::function("api_C1_01713_get", &FieldAccess<&StringResources::NUMBER>::get);
    emscripten::function("api_C1_01713_set", &FieldAccess<&StringResources::NUMBER>::set);
    emscripten::function("api_C1_01714_get", &FieldAccess<&StringResources::NUMBER_LITERAL>::get);
    emscripten::function("api_C1_01714_set", &FieldAccess<&StringResources::NUMBER_LITERAL>::set);
    emscripten::function("api_C1_01715_get", &FieldAccess<&StringResources::TYPE>::get);
    emscripten::function("api_C1_01715_set", &FieldAccess<&StringResources::TYPE>::set);
    emscripten::function("api_C1_01716_get", &FieldAccess<&StringResources::SINCE>::get);
    emscripten::function("api_C1_01716_set", &FieldAccess<&StringResources::SINCE>::set);
    emscripten::function("api_C1_01717_get", &FieldAccess<&StringResources::DESCRIPTION>::get);
    emscripten::function("api_C1_01717_set", &FieldAccess<&StringResources::DESCRIPTION>::set);
    emscripten::function("api_C1_01718_get", &FieldAccess<&StringResources::CALC_STEPS_REGISTER_IS_EMPTY>::get);
    emscripten::function("api_C1_01718_set", &FieldAccess<&StringResources::CALC_STEPS_REGISTER_IS_EMPTY>::set);
    emscripten::function("api_C1_01719_get", &FieldAccess<&StringResources::CALC_STEPS_REGISTER_FOR>::get);
    emscripten::function("api_C1_01719_set", &FieldAccess<&StringResources::CALC_STEPS_REGISTER_FOR>::set);
    emscripten::function("api_C1_01720_get", &FieldAccess<&StringResources::ARGUMENT>::get);
    emscripten::function("api_C1_01720_set", &FieldAccess<&StringResources::ARGUMENT>::set);
    emscripten::function("api_C1_01721_get", &FieldAccess<&StringResources::FUNCTION>::get);
    emscripten::function("api_C1_01721_set", &FieldAccess<&StringResources::FUNCTION>::set);
    emscripten::function("api_C1_01722_get", &FieldAccess<&StringResources::EXPRESSION>::get);
    emscripten::function("api_C1_01722_set", &FieldAccess<&StringResources::EXPRESSION>::set);
    emscripten::function("api_C1_01723_get", &FieldAccess<&StringResources::RESULT>::get);
    emscripten::function("api_C1_01723_set", &FieldAccess<&StringResources::RESULT>::set);
    emscripten::function("api_C1_01724_get", &FieldAccess<&StringResources::COMPUTING_TIME>::get);
    emscripten::function("api_C1_01724_set", &FieldAccess<&StringResources::COMPUTING_TIME>::set);
    emscripten::function("api_C1_01725_get", &FieldAccess<&StringResources::GROUP_SHORT>::get);
    emscripten::function("api_C1_01725_set", &FieldAccess<&StringResources::GROUP_SHORT>::set);
    emscripten::function("api_C1_01726_get", &FieldAccess<&StringResources::NUMBER_SHORT>::get);
    emscripten::function("api_C1_01726_set", &FieldAccess<&StringResources::NUMBER_SHORT>::set);
    emscripten::function("api_C1_01727_get", &FieldAccess<&StringResources::FIRST>::get);
    emscripten::function("api_C1_01727_set", &FieldAccess<&StringResources::FIRST>::set);
    emscripten::function("api_C1_01728_get", &FieldAccess<&StringResources::LAST>::get);
    emscripten::function("api_C1_01728_set", &FieldAccess<&StringResources::LAST>::set);
    emscripten::function("api_C1_01729_get", &FieldAccess<&StringResources::DESCRIPTION_SHORT>::get);
    emscripten::function("api_C1_01729_set", &FieldAccess<&StringResources::DESCRIPTION_SHORT>::set);
    emscripten::function("api_C1_01730_get", &FieldAccess<&StringResources::STEP>::get);
    emscripten::function("api_C1_01730_set", &FieldAccess<&StringResources::STEP>::set);
    emscripten::function("api_C1_01731_get", &FieldAccess<&StringResources::SERIALIZATION_PERFORMED>::get);
    emscripten::function("api_C1_01731_set", &FieldAccess<&StringResources::SERIALIZATION_PERFORMED>::set);
    emscripten::function("api_C1_01732_get", &FieldAccess<&StringResources::DESERIALIZATION_PERFORMED>::get);
    emscripten::function("api_C1_01732_set", &FieldAccess<&StringResources::DESERIALIZATION_PERFORMED>::set);
    emscripten::function("api_C1_01733_get", &FieldAccess<&StringResources::NULL_OBJECT_PROVIDED>::get);
    emscripten::function("api_C1_01733_set", &FieldAccess<&StringResources::NULL_OBJECT_PROVIDED>::set);
    emscripten::function("api_C1_01734_get", &FieldAccess<&StringResources::NULL_FILE_PATH_PROVIDED>::get);
    emscripten::function("api_C1_01734_set", &FieldAccess<&StringResources::NULL_FILE_PATH_PROVIDED>::set);
    emscripten::function("api_C1_01735_get", &FieldAccess<&StringResources::FILE_PATH_ZERO_LENGTH_PROVIDED>::get);
    emscripten::function("api_C1_01735_set", &FieldAccess<&StringResources::FILE_PATH_ZERO_LENGTH_PROVIDED>::set);
    emscripten::function("api_C1_01736_get", &FieldAccess<&StringResources::FILE_PATH_IS_NOT_A_FILE>::get);
    emscripten::function("api_C1_01736_set", &FieldAccess<&StringResources::FILE_PATH_IS_NOT_A_FILE>::set);
    emscripten::function("api_C1_01737_get", &FieldAccess<&StringResources::FILE_PATH_NOT_EXISTS>::get);
    emscripten::function("api_C1_01737_set", &FieldAccess<&StringResources::FILE_PATH_NOT_EXISTS>::set);
    emscripten::function("api_C1_01738_get", &FieldAccess<&StringResources::NULL_DATA_PROVIDED>::get);
    emscripten::function("api_C1_01738_set", &FieldAccess<&StringResources::NULL_DATA_PROVIDED>::set);
    emscripten::function("api_C1_01739_get", &FieldAccess<&StringResources::BINARY_SERIALIZATION_ENABLED>::get);
    emscripten::function("api_C1_01739_set", &FieldAccess<&StringResources::BINARY_SERIALIZATION_ENABLED>::set);
    emscripten::function("api_C1_01740_get", &FieldAccess<&StringResources::BINARY_SERIALIZATION_DISABLED>::get);
    emscripten::function("api_C1_01740_set", &FieldAccess<&StringResources::BINARY_SERIALIZATION_DISABLED>::set);
    emscripten::function("api_C1_01741_get", &FieldAccess<&StringResources::USER_DEFINED_EXPRESSION>::get);
    emscripten::function("api_C1_01741_set", &FieldAccess<&StringResources::USER_DEFINED_EXPRESSION>::set);
    emscripten::function("api_C1_01742_get", &FieldAccess<&StringResources::USER_DEFINED_ARGUMENT>::get);
    emscripten::function("api_C1_01742_set", &FieldAccess<&StringResources::USER_DEFINED_ARGUMENT>::set);
    emscripten::function("api_C1_01743_get", &FieldAccess<&StringResources::USER_DEFINED_CONSTANT>::get);
    emscripten::function("api_C1_01743_set", &FieldAccess<&StringResources::USER_DEFINED_CONSTANT>::set);
    emscripten::function("api_C1_01744_get", &FieldAccess<&StringResources::USER_DEFINED_FUNCTION>::get);
    emscripten::function("api_C1_01744_set", &FieldAccess<&StringResources::USER_DEFINED_FUNCTION>::set);
    emscripten::function("api_C1_01745_get", &FieldAccess<&StringResources::USER_DEFINED_RECURSIVE_ARGUMENT>::get);
    emscripten::function("api_C1_01745_set", &FieldAccess<&StringResources::USER_DEFINED_RECURSIVE_ARGUMENT>::set);
    emscripten::function("api_C1_01746_get", &FieldAccess<&StringResources::HELP_CONTENT_LIMITED_TO_QUERY>::get);
    emscripten::function("api_C1_01746_set", &FieldAccess<&StringResources::HELP_CONTENT_LIMITED_TO_QUERY>::set);
    emscripten::function("api_C1_01747_get", &FieldAccess<&StringResources::ALL_HELP_CONTENT>::get);
    emscripten::function("api_C1_01747_set", &FieldAccess<&StringResources::ALL_HELP_CONTENT>::set);
    emscripten::function("api_C1_01748_get", &FieldAccess<&StringResources::CAPTION>::get);
    emscripten::function("api_C1_01748_set", &FieldAccess<&StringResources::CAPTION>::set);
    emscripten::function("api_C1_01749_get",
                         &FieldAccess<&StringResources::WARNING_BINARY_SERIALIZATION_SECURITY_RISKS>::get);
    emscripten::function("api_C1_01749_set",
                         &FieldAccess<&StringResources::WARNING_BINARY_SERIALIZATION_SECURITY_RISKS>::set);
    emscripten::function("api_C1_01750_get", &FieldAccess<&StringResources::BINARY_RELATION>::get);
    emscripten::function("api_C1_01750_set", &FieldAccess<&StringResources::BINARY_RELATION>::set);
    emscripten::function("api_C1_01751_get", &FieldAccess<&StringResources::BITWISE_OPERATOR>::get);
    emscripten::function("api_C1_01751_set", &FieldAccess<&StringResources::BITWISE_OPERATOR>::set);
    emscripten::function("api_C1_01752_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR>::get);
    emscripten::function("api_C1_01752_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR>::set);
    emscripten::function("api_C1_01753_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR>::get);
    emscripten::function("api_C1_01753_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR>::set);
    emscripten::function("api_C1_01754_get", &FieldAccess<&StringResources::CONSTANT_VALUE>::get);
    emscripten::function("api_C1_01754_set", &FieldAccess<&StringResources::CONSTANT_VALUE>::set);
    emscripten::function("api_C1_01755_get", &FieldAccess<&StringResources::FUNCTION_1_ARG>::get);
    emscripten::function("api_C1_01755_set", &FieldAccess<&StringResources::FUNCTION_1_ARG>::set);
    emscripten::function("api_C1_01756_get", &FieldAccess<&StringResources::FUNCTION_2_ARG>::get);
    emscripten::function("api_C1_01756_set", &FieldAccess<&StringResources::FUNCTION_2_ARG>::set);
    emscripten::function("api_C1_01757_get", &FieldAccess<&StringResources::FUNCTION_3_ARG>::get);
    emscripten::function("api_C1_01757_set", &FieldAccess<&StringResources::FUNCTION_3_ARG>::set);
    emscripten::function("api_C1_01758_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC>::get);
    emscripten::function("api_C1_01758_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC>::set);
    emscripten::function("api_C1_01759_get", &FieldAccess<&StringResources::OPERATOR>::get);
    emscripten::function("api_C1_01759_set", &FieldAccess<&StringResources::OPERATOR>::set);
    emscripten::function("api_C1_01760_get", &FieldAccess<&StringResources::PARSER_SYMBOL>::get);
    emscripten::function("api_C1_01760_set", &FieldAccess<&StringResources::PARSER_SYMBOL>::set);
    emscripten::function("api_C1_01761_get", &FieldAccess<&StringResources::RANDOM_VARIABLE>::get);
    emscripten::function("api_C1_01761_set", &FieldAccess<&StringResources::RANDOM_VARIABLE>::set);
    emscripten::function("api_C1_01762_get", &FieldAccess<&StringResources::UNIT>::get);
    emscripten::function("api_C1_01762_set", &FieldAccess<&StringResources::UNIT>::set);
    emscripten::function("api_C1_01763_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT>::get);
    emscripten::function("api_C1_01763_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT>::set);
    emscripten::function("api_C1_01764_get", &FieldAccess<&StringResources::ITERATED_OPERATOR>::get);
    emscripten::function("api_C1_01764_set", &FieldAccess<&StringResources::ITERATED_OPERATOR>::set);
    emscripten::function("api_C1_01765_get", &FieldAccess<&StringResources::RATIO_FRACTION>::get);
    emscripten::function("api_C1_01765_set", &FieldAccess<&StringResources::RATIO_FRACTION>::set);
    emscripten::function("api_C1_01766_get", &FieldAccess<&StringResources::METRIC_PREFIX>::get);
    emscripten::function("api_C1_01766_set", &FieldAccess<&StringResources::METRIC_PREFIX>::set);
    emscripten::function("api_C1_01767_get", &FieldAccess<&StringResources::UNIT_OF_LENGTH>::get);
    emscripten::function("api_C1_01767_set", &FieldAccess<&StringResources::UNIT_OF_LENGTH>::set);
    emscripten::function("api_C1_01768_get", &FieldAccess<&StringResources::UNIT_OF_AREA>::get);
    emscripten::function("api_C1_01768_set", &FieldAccess<&StringResources::UNIT_OF_AREA>::set);
    emscripten::function("api_C1_01769_get", &FieldAccess<&StringResources::UNIT_OF_VOLUME>::get);
    emscripten::function("api_C1_01769_set", &FieldAccess<&StringResources::UNIT_OF_VOLUME>::set);
    emscripten::function("api_C1_01770_get", &FieldAccess<&StringResources::UNIT_OF_TIME>::get);
    emscripten::function("api_C1_01770_set", &FieldAccess<&StringResources::UNIT_OF_TIME>::set);
    emscripten::function("api_C1_01771_get", &FieldAccess<&StringResources::UNIT_OF_MASS>::get);
    emscripten::function("api_C1_01771_set", &FieldAccess<&StringResources::UNIT_OF_MASS>::set);
    emscripten::function("api_C1_01772_get", &FieldAccess<&StringResources::UNIT_OF_INFORMATION>::get);
    emscripten::function("api_C1_01772_set", &FieldAccess<&StringResources::UNIT_OF_INFORMATION>::set);
    emscripten::function("api_C1_01773_get", &FieldAccess<&StringResources::UNIT_OF_ENERGY>::get);
    emscripten::function("api_C1_01773_set", &FieldAccess<&StringResources::UNIT_OF_ENERGY>::set);
    emscripten::function("api_C1_01774_get", &FieldAccess<&StringResources::UNIT_OF_SPEED>::get);
    emscripten::function("api_C1_01774_set", &FieldAccess<&StringResources::UNIT_OF_SPEED>::set);
    emscripten::function("api_C1_01775_get", &FieldAccess<&StringResources::UNIT_OF_ACCELERATION>::get);
    emscripten::function("api_C1_01775_set", &FieldAccess<&StringResources::UNIT_OF_ACCELERATION>::set);
    emscripten::function("api_C1_01776_get", &FieldAccess<&StringResources::UNIT_OF_ANGLE>::get);
    emscripten::function("api_C1_01776_set", &FieldAccess<&StringResources::UNIT_OF_ANGLE>::set);
    emscripten::function("api_C1_01777_get", &FieldAccess<&StringResources::PHYSICAL_CONSTANT>::get);
    emscripten::function("api_C1_01777_set", &FieldAccess<&StringResources::PHYSICAL_CONSTANT>::set);
    emscripten::function("api_C1_01778_get", &FieldAccess<&StringResources::ASTRONOMICAL_CONSTANT>::get);
    emscripten::function("api_C1_01778_set", &FieldAccess<&StringResources::ASTRONOMICAL_CONSTANT>::set);
    emscripten::function("api_C1_01779_get", &FieldAccess<&StringResources::MATHEMATICAL_CONSTANT>::get);
    emscripten::function("api_C1_01779_set", &FieldAccess<&StringResources::MATHEMATICAL_CONSTANT>::set);
    emscripten::function("api_C1_01780_get", &FieldAccess<&StringResources::PROBABILITY_DISTRIBUTION_FUNCTION>::get);
    emscripten::function("api_C1_01780_set", &FieldAccess<&StringResources::PROBABILITY_DISTRIBUTION_FUNCTION>::set);
    emscripten::function("api_C1_01781_get", &FieldAccess<&StringResources::CUMULATIVE_DISTRIBUTION_FUNCTION>::get);
    emscripten::function("api_C1_01781_set", &FieldAccess<&StringResources::CUMULATIVE_DISTRIBUTION_FUNCTION>::set);
    emscripten::function("api_C1_01782_get", &FieldAccess<&StringResources::QUANTILE_FUNCTION>::get);
    emscripten::function("api_C1_01782_set", &FieldAccess<&StringResources::QUANTILE_FUNCTION>::set);
    emscripten::function("api_C1_01783_get", &FieldAccess<&StringResources::STUDENTS_T_DISTRIBUTION>::get);
    emscripten::function("api_C1_01783_set", &FieldAccess<&StringResources::STUDENTS_T_DISTRIBUTION>::set);
    emscripten::function("api_C1_01784_get", &FieldAccess<&StringResources::CHI_SQUARED_DISTRIBUTION>::get);
    emscripten::function("api_C1_01784_set", &FieldAccess<&StringResources::CHI_SQUARED_DISTRIBUTION>::set);
    emscripten::function("api_C1_01785_get", &FieldAccess<&StringResources::SNEDECORS_F_DISTRIBUTION>::get);
    emscripten::function("api_C1_01785_set", &FieldAccess<&StringResources::SNEDECORS_F_DISTRIBUTION>::set);
    emscripten::function("api_C1_01786_get", &FieldAccess<&StringResources::UNIFORM_CONTINUOUS_DISTRIBUTION>::get);
    emscripten::function("api_C1_01786_set", &FieldAccess<&StringResources::UNIFORM_CONTINUOUS_DISTRIBUTION>::set);
    emscripten::function("api_C1_01787_get", &FieldAccess<&StringResources::UNIFORM_DISCRETE_DISTRIBUTION>::get);
    emscripten::function("api_C1_01787_set", &FieldAccess<&StringResources::UNIFORM_DISCRETE_DISTRIBUTION>::set);
    emscripten::function("api_C1_01788_get", &FieldAccess<&StringResources::NORMAL_DISTRIBUTION>::get);
    emscripten::function("api_C1_01788_set", &FieldAccess<&StringResources::NORMAL_DISTRIBUTION>::set);
    emscripten::function("api_C1_01789_get", &FieldAccess<&StringResources::RANDOM_INTEGER>::get);
    emscripten::function("api_C1_01789_set", &FieldAccess<&StringResources::RANDOM_INTEGER>::set);
    emscripten::function("api_C1_01790_get", &FieldAccess<&StringResources::RANDOM_NATURAL_NUMBER>::get);
    emscripten::function("api_C1_01790_set", &FieldAccess<&StringResources::RANDOM_NATURAL_NUMBER>::set);
    emscripten::function("api_C1_01791_get", &FieldAccess<&StringResources::RANDOM_NATURAL_NUMBER_INCLUDING_0>::get);
    emscripten::function("api_C1_01791_set", &FieldAccess<&StringResources::RANDOM_NATURAL_NUMBER_INCLUDING_0>::set);
    emscripten::function("api_C1_01792_get", &FieldAccess<&StringResources::SPECIAL_FUNCTION>::get);
    emscripten::function("api_C1_01792_set", &FieldAccess<&StringResources::SPECIAL_FUNCTION>::set);
    emscripten::function("api_C1_01793_get", &FieldAccess<&StringResources::SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_01793_set", &FieldAccess<&StringResources::SEMI_MAJOR_AXIS>::set);
    emscripten::function("api_C1_01794_get", &FieldAccess<&StringResources::BINARY_RELATION_EQ>::get);
    emscripten::function("api_C1_01794_set", &FieldAccess<&StringResources::BINARY_RELATION_EQ>::set);
    emscripten::function("api_C1_01795_get", &FieldAccess<&StringResources::BINARY_RELATION_NEQ>::get);
    emscripten::function("api_C1_01795_set", &FieldAccess<&StringResources::BINARY_RELATION_NEQ>::set);
    emscripten::function("api_C1_01796_get", &FieldAccess<&StringResources::BINARY_RELATION_LT>::get);
    emscripten::function("api_C1_01796_set", &FieldAccess<&StringResources::BINARY_RELATION_LT>::set);
    emscripten::function("api_C1_01797_get", &FieldAccess<&StringResources::BINARY_RELATION_GT>::get);
    emscripten::function("api_C1_01797_set", &FieldAccess<&StringResources::BINARY_RELATION_GT>::set);
    emscripten::function("api_C1_01798_get", &FieldAccess<&StringResources::BINARY_RELATION_LEQ>::get);
    emscripten::function("api_C1_01798_set", &FieldAccess<&StringResources::BINARY_RELATION_LEQ>::set);
    emscripten::function("api_C1_01799_get", &FieldAccess<&StringResources::BINARY_RELATION_GEQ>::get);
    emscripten::function("api_C1_01799_set", &FieldAccess<&StringResources::BINARY_RELATION_GEQ>::set);
    emscripten::function("api_C1_01800_get", &FieldAccess<&StringResources::BITWISE_OPERATOR_COMPL>::get);
    emscripten::function("api_C1_01800_set", &FieldAccess<&StringResources::BITWISE_OPERATOR_COMPL>::set);
    emscripten::function("api_C1_01801_get", &FieldAccess<&StringResources::BITWISE_OPERATOR_AND>::get);
    emscripten::function("api_C1_01801_set", &FieldAccess<&StringResources::BITWISE_OPERATOR_AND>::set);
    emscripten::function("api_C1_01802_get", &FieldAccess<&StringResources::BITWISE_OPERATOR_XOR>::get);
    emscripten::function("api_C1_01802_set", &FieldAccess<&StringResources::BITWISE_OPERATOR_XOR>::set);
    emscripten::function("api_C1_01803_get", &FieldAccess<&StringResources::BITWISE_OPERATOR_OR>::get);
    emscripten::function("api_C1_01803_set", &FieldAccess<&StringResources::BITWISE_OPERATOR_OR>::set);
    emscripten::function("api_C1_01804_get", &FieldAccess<&StringResources::BITWISE_OPERATOR_LEFT_SHIFT>::get);
    emscripten::function("api_C1_01804_set", &FieldAccess<&StringResources::BITWISE_OPERATOR_LEFT_SHIFT>::set);
    emscripten::function("api_C1_01805_get", &FieldAccess<&StringResources::BITWISE_OPERATOR_RIGHT_SHIFT>::get);
    emscripten::function("api_C1_01805_set", &FieldAccess<&StringResources::BITWISE_OPERATOR_RIGHT_SHIFT>::set);
    emscripten::function("api_C1_01806_get", &FieldAccess<&StringResources::BITWISE_OPERATOR_NAND>::get);
    emscripten::function("api_C1_01806_set", &FieldAccess<&StringResources::BITWISE_OPERATOR_NAND>::set);
    emscripten::function("api_C1_01807_get", &FieldAccess<&StringResources::BITWISE_OPERATOR_NOR>::get);
    emscripten::function("api_C1_01807_set", &FieldAccess<&StringResources::BITWISE_OPERATOR_NOR>::set);
    emscripten::function("api_C1_01808_get", &FieldAccess<&StringResources::BITWISE_OPERATOR_XNOR>::get);
    emscripten::function("api_C1_01808_set", &FieldAccess<&StringResources::BITWISE_OPERATOR_XNOR>::set);
    emscripten::function("api_C1_01809_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_AND>::get);
    emscripten::function("api_C1_01809_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_AND>::set);
    emscripten::function("api_C1_01810_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_OR>::get);
    emscripten::function("api_C1_01810_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_OR>::set);
    emscripten::function("api_C1_01811_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_NEG>::get);
    emscripten::function("api_C1_01811_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_NEG>::set);
    emscripten::function("api_C1_01812_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_NAND>::get);
    emscripten::function("api_C1_01812_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_NAND>::set);
    emscripten::function("api_C1_01813_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_NOR>::get);
    emscripten::function("api_C1_01813_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_NOR>::set);
    emscripten::function("api_C1_01814_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_XOR>::get);
    emscripten::function("api_C1_01814_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_XOR>::set);
    emscripten::function("api_C1_01815_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_IMP>::get);
    emscripten::function("api_C1_01815_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_IMP>::set);
    emscripten::function("api_C1_01816_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_CIMP>::get);
    emscripten::function("api_C1_01816_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_CIMP>::set);
    emscripten::function("api_C1_01817_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_NIMP>::get);
    emscripten::function("api_C1_01817_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_NIMP>::set);
    emscripten::function("api_C1_01818_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_CNIMP>::get);
    emscripten::function("api_C1_01818_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_CNIMP>::set);
    emscripten::function("api_C1_01819_get", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_EQV>::get);
    emscripten::function("api_C1_01819_set", &FieldAccess<&StringResources::BOOLEAN_OPERATOR_EQV>::set);
    emscripten::function("api_C1_01820_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_SUM>::get);
    emscripten::function("api_C1_01820_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_SUM>::set);
    emscripten::function("api_C1_01821_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_PROD>::get);
    emscripten::function("api_C1_01821_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_PROD>::set);
    emscripten::function("api_C1_01822_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_INT>::get);
    emscripten::function("api_C1_01822_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_INT>::set);
    emscripten::function("api_C1_01823_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_DER>::get);
    emscripten::function("api_C1_01823_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_DER>::set);
    emscripten::function("api_C1_01824_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_DER_LEFT>::get);
    emscripten::function("api_C1_01824_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_DER_LEFT>::set);
    emscripten::function("api_C1_01825_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_DER_RIGHT>::get);
    emscripten::function("api_C1_01825_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_DER_RIGHT>::set);
    emscripten::function("api_C1_01826_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_DERN>::get);
    emscripten::function("api_C1_01826_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_DERN>::set);
    emscripten::function("api_C1_01827_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_FORW_DIFF>::get);
    emscripten::function("api_C1_01827_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_FORW_DIFF>::set);
    emscripten::function("api_C1_01828_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_BACKW_DIFF>::get);
    emscripten::function("api_C1_01828_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_BACKW_DIFF>::set);
    emscripten::function("api_C1_01829_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_AVG>::get);
    emscripten::function("api_C1_01829_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_AVG>::set);
    emscripten::function("api_C1_01830_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_VAR>::get);
    emscripten::function("api_C1_01830_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_VAR>::set);
    emscripten::function("api_C1_01831_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_STD>::get);
    emscripten::function("api_C1_01831_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_STD>::set);
    emscripten::function("api_C1_01832_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_MIN>::get);
    emscripten::function("api_C1_01832_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_MIN>::set);
    emscripten::function("api_C1_01833_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_MAX>::get);
    emscripten::function("api_C1_01833_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_MAX>::set);
    emscripten::function("api_C1_01834_get", &FieldAccess<&StringResources::CALCULUS_OPERATOR_SOLVE>::get);
    emscripten::function("api_C1_01834_set", &FieldAccess<&StringResources::CALCULUS_OPERATOR_SOLVE>::set);
    emscripten::function("api_C1_01835_get", &FieldAccess<&StringResources::CONSTANT_VALUE_PI>::get);
    emscripten::function("api_C1_01835_set", &FieldAccess<&StringResources::CONSTANT_VALUE_PI>::set);
    emscripten::function("api_C1_01836_get", &FieldAccess<&StringResources::CONSTANT_VALUE_EULER>::get);
    emscripten::function("api_C1_01836_set", &FieldAccess<&StringResources::CONSTANT_VALUE_EULER>::set);
    emscripten::function("api_C1_01837_get", &FieldAccess<&StringResources::CONSTANT_VALUE_EULER_MASCHERONI>::get);
    emscripten::function("api_C1_01837_set", &FieldAccess<&StringResources::CONSTANT_VALUE_EULER_MASCHERONI>::set);
    emscripten::function("api_C1_01838_get", &FieldAccess<&StringResources::CONSTANT_VALUE_GOLDEN_RATIO>::get);
    emscripten::function("api_C1_01838_set", &FieldAccess<&StringResources::CONSTANT_VALUE_GOLDEN_RATIO>::set);
    emscripten::function("api_C1_01839_get", &FieldAccess<&StringResources::CONSTANT_VALUE_PLASTIC>::get);
    emscripten::function("api_C1_01839_set", &FieldAccess<&StringResources::CONSTANT_VALUE_PLASTIC>::set);
    emscripten::function("api_C1_01840_get", &FieldAccess<&StringResources::CONSTANT_VALUE_EMBREE_TREFETHEN>::get);
    emscripten::function("api_C1_01840_set", &FieldAccess<&StringResources::CONSTANT_VALUE_EMBREE_TREFETHEN>::set);
    emscripten::function("api_C1_01841_get", &FieldAccess<&StringResources::CONSTANT_VALUE_FEIGENBAUM_DELTA>::get);
    emscripten::function("api_C1_01841_set", &FieldAccess<&StringResources::CONSTANT_VALUE_FEIGENBAUM_DELTA>::set);
    emscripten::function("api_C1_01842_get", &FieldAccess<&StringResources::CONSTANT_VALUE_FEIGENBAUM_ALPHA>::get);
    emscripten::function("api_C1_01842_set", &FieldAccess<&StringResources::CONSTANT_VALUE_FEIGENBAUM_ALPHA>::set);
    emscripten::function("api_C1_01843_get", &FieldAccess<&StringResources::CONSTANT_VALUE_TWIN_PRIME>::get);
    emscripten::function("api_C1_01843_set", &FieldAccess<&StringResources::CONSTANT_VALUE_TWIN_PRIME>::set);
    emscripten::function("api_C1_01844_get", &FieldAccess<&StringResources::CONSTANT_VALUE_MEISSEL_MERTEENS>::get);
    emscripten::function("api_C1_01844_set", &FieldAccess<&StringResources::CONSTANT_VALUE_MEISSEL_MERTEENS>::set);
    emscripten::function("api_C1_01845_get", &FieldAccess<&StringResources::CONSTANT_VALUE_BRAUN_TWIN_PRIME>::get);
    emscripten::function("api_C1_01845_set", &FieldAccess<&StringResources::CONSTANT_VALUE_BRAUN_TWIN_PRIME>::set);
    emscripten::function("api_C1_01846_get", &FieldAccess<&StringResources::CONSTANT_VALUE_BRAUN_PRIME_QUADR>::get);
    emscripten::function("api_C1_01846_set", &FieldAccess<&StringResources::CONSTANT_VALUE_BRAUN_PRIME_QUADR>::set);
    emscripten::function("api_C1_01847_get", &FieldAccess<&StringResources::CONSTANT_VALUE_BRUIJN_NEWMAN>::get);
    emscripten::function("api_C1_01847_set", &FieldAccess<&StringResources::CONSTANT_VALUE_BRUIJN_NEWMAN>::set);
    emscripten::function("api_C1_01848_get", &FieldAccess<&StringResources::CONSTANT_VALUE_CATALAN>::get);
    emscripten::function("api_C1_01848_set", &FieldAccess<&StringResources::CONSTANT_VALUE_CATALAN>::set);
    emscripten::function("api_C1_01849_get", &FieldAccess<&StringResources::CONSTANT_VALUE_LANDAU_RAMANUJAN>::get);
    emscripten::function("api_C1_01849_set", &FieldAccess<&StringResources::CONSTANT_VALUE_LANDAU_RAMANUJAN>::set);
    emscripten::function("api_C1_01850_get", &FieldAccess<&StringResources::CONSTANT_VALUE_VISWANATH>::get);
    emscripten::function("api_C1_01850_set", &FieldAccess<&StringResources::CONSTANT_VALUE_VISWANATH>::set);
    emscripten::function("api_C1_01851_get", &FieldAccess<&StringResources::CONSTANT_VALUE_LEGENDRE>::get);
    emscripten::function("api_C1_01851_set", &FieldAccess<&StringResources::CONSTANT_VALUE_LEGENDRE>::set);
    emscripten::function("api_C1_01852_get", &FieldAccess<&StringResources::CONSTANT_VALUE_RAMANUJAN_SOLDNER>::get);
    emscripten::function("api_C1_01852_set", &FieldAccess<&StringResources::CONSTANT_VALUE_RAMANUJAN_SOLDNER>::set);
    emscripten::function("api_C1_01853_get", &FieldAccess<&StringResources::CONSTANT_VALUE_ERDOS_BORWEIN>::get);
    emscripten::function("api_C1_01853_set", &FieldAccess<&StringResources::CONSTANT_VALUE_ERDOS_BORWEIN>::set);
    emscripten::function("api_C1_01854_get", &FieldAccess<&StringResources::CONSTANT_VALUE_BERNSTEIN>::get);
    emscripten::function("api_C1_01854_set", &FieldAccess<&StringResources::CONSTANT_VALUE_BERNSTEIN>::set);
    emscripten::function("api_C1_01855_get", &FieldAccess<&StringResources::CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING>::get);
    emscripten::function("api_C1_01855_set", &FieldAccess<&StringResources::CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING>::set);
    emscripten::function("api_C1_01856_get",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY>::get);
    emscripten::function("api_C1_01856_set",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY>::set);
    emscripten::function("api_C1_01857_get", &FieldAccess<&StringResources::CONSTANT_VALUE_GOLOMB_DICKMAN>::get);
    emscripten::function("api_C1_01857_set", &FieldAccess<&StringResources::CONSTANT_VALUE_GOLOMB_DICKMAN>::set);
    emscripten::function("api_C1_01858_get", &FieldAccess<&StringResources::CONSTANT_VALUE_CAHEN>::get);
    emscripten::function("api_C1_01858_set", &FieldAccess<&StringResources::CONSTANT_VALUE_CAHEN>::set);
    emscripten::function("api_C1_01859_get", &FieldAccess<&StringResources::CONSTANT_VALUE_LAPLACE_LIMIT>::get);
    emscripten::function("api_C1_01859_set", &FieldAccess<&StringResources::CONSTANT_VALUE_LAPLACE_LIMIT>::set);
    emscripten::function("api_C1_01860_get", &FieldAccess<&StringResources::CONSTANT_VALUE_ALLADI_GRINSTEAD>::get);
    emscripten::function("api_C1_01860_set", &FieldAccess<&StringResources::CONSTANT_VALUE_ALLADI_GRINSTEAD>::set);
    emscripten::function("api_C1_01861_get", &FieldAccess<&StringResources::CONSTANT_VALUE_LENGYEL>::get);
    emscripten::function("api_C1_01861_set", &FieldAccess<&StringResources::CONSTANT_VALUE_LENGYEL>::set);
    emscripten::function("api_C1_01862_get", &FieldAccess<&StringResources::CONSTANT_VALUE_LEVY>::get);
    emscripten::function("api_C1_01862_set", &FieldAccess<&StringResources::CONSTANT_VALUE_LEVY>::set);
    emscripten::function("api_C1_01863_get", &FieldAccess<&StringResources::CONSTANT_VALUE_APERY>::get);
    emscripten::function("api_C1_01863_set", &FieldAccess<&StringResources::CONSTANT_VALUE_APERY>::set);
    emscripten::function("api_C1_01864_get", &FieldAccess<&StringResources::CONSTANT_VALUE_MILLS>::get);
    emscripten::function("api_C1_01864_set", &FieldAccess<&StringResources::CONSTANT_VALUE_MILLS>::set);
    emscripten::function("api_C1_01865_get", &FieldAccess<&StringResources::CONSTANT_VALUE_BACKHOUSE>::get);
    emscripten::function("api_C1_01865_set", &FieldAccess<&StringResources::CONSTANT_VALUE_BACKHOUSE>::set);
    emscripten::function("api_C1_01866_get", &FieldAccess<&StringResources::CONSTANT_VALUE_PORTER>::get);
    emscripten::function("api_C1_01866_set", &FieldAccess<&StringResources::CONSTANT_VALUE_PORTER>::set);
    emscripten::function("api_C1_01867_get", &FieldAccess<&StringResources::CONSTANT_VALUE_LIEB_QUARE_ICE>::get);
    emscripten::function("api_C1_01867_set", &FieldAccess<&StringResources::CONSTANT_VALUE_LIEB_QUARE_ICE>::set);
    emscripten::function("api_C1_01868_get", &FieldAccess<&StringResources::CONSTANT_VALUE_NIVEN>::get);
    emscripten::function("api_C1_01868_set", &FieldAccess<&StringResources::CONSTANT_VALUE_NIVEN>::set);
    emscripten::function("api_C1_01869_get", &FieldAccess<&StringResources::CONSTANT_VALUE_SIERPINSKI>::get);
    emscripten::function("api_C1_01869_set", &FieldAccess<&StringResources::CONSTANT_VALUE_SIERPINSKI>::set);
    emscripten::function("api_C1_01870_get", &FieldAccess<&StringResources::CONSTANT_VALUE_KHINCHIN>::get);
    emscripten::function("api_C1_01870_set", &FieldAccess<&StringResources::CONSTANT_VALUE_KHINCHIN>::set);
    emscripten::function("api_C1_01871_get", &FieldAccess<&StringResources::CONSTANT_VALUE_FRANSEN_ROBINSON>::get);
    emscripten::function("api_C1_01871_set", &FieldAccess<&StringResources::CONSTANT_VALUE_FRANSEN_ROBINSON>::set);
    emscripten::function("api_C1_01872_get", &FieldAccess<&StringResources::CONSTANT_VALUE_LANDAU>::get);
    emscripten::function("api_C1_01872_set", &FieldAccess<&StringResources::CONSTANT_VALUE_LANDAU>::set);
    emscripten::function("api_C1_01873_get", &FieldAccess<&StringResources::CONSTANT_VALUE_PARABOLIC>::get);
    emscripten::function("api_C1_01873_set", &FieldAccess<&StringResources::CONSTANT_VALUE_PARABOLIC>::set);
    emscripten::function("api_C1_01874_get", &FieldAccess<&StringResources::CONSTANT_VALUE_OMEGA>::get);
    emscripten::function("api_C1_01874_set", &FieldAccess<&StringResources::CONSTANT_VALUE_OMEGA>::set);
    emscripten::function("api_C1_01875_get", &FieldAccess<&StringResources::CONSTANT_VALUE_MRB>::get);
    emscripten::function("api_C1_01875_set", &FieldAccess<&StringResources::CONSTANT_VALUE_MRB>::set);
    emscripten::function("api_C1_01876_get", &FieldAccess<&StringResources::CONSTANT_VALUE_LI2>::get);
    emscripten::function("api_C1_01876_set", &FieldAccess<&StringResources::CONSTANT_VALUE_LI2>::set);
    emscripten::function("api_C1_01877_get", &FieldAccess<&StringResources::CONSTANT_VALUE_GOMPERTZ>::get);
    emscripten::function("api_C1_01877_set", &FieldAccess<&StringResources::CONSTANT_VALUE_GOMPERTZ>::set);
    emscripten::function("api_C1_01878_get", &FieldAccess<&StringResources::CONSTANT_VALUE_LIGHT_SPEED>::get);
    emscripten::function("api_C1_01878_set", &FieldAccess<&StringResources::CONSTANT_VALUE_LIGHT_SPEED>::set);
    emscripten::function("api_C1_01879_get",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_GRAVITATIONAL_CONSTANT>::get);
    emscripten::function("api_C1_01879_set",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_GRAVITATIONAL_CONSTANT>::set);
    emscripten::function("api_C1_01880_get", &FieldAccess<&StringResources::CONSTANT_VALUE_GRAVIT_ACC_EARTH>::get);
    emscripten::function("api_C1_01880_set", &FieldAccess<&StringResources::CONSTANT_VALUE_GRAVIT_ACC_EARTH>::set);
    emscripten::function("api_C1_01881_get", &FieldAccess<&StringResources::CONSTANT_VALUE_PLANCK_CONSTANT>::get);
    emscripten::function("api_C1_01881_set", &FieldAccess<&StringResources::CONSTANT_VALUE_PLANCK_CONSTANT>::set);
    emscripten::function("api_C1_01882_get",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED>::get);
    emscripten::function("api_C1_01882_set",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED>::set);
    emscripten::function("api_C1_01883_get", &FieldAccess<&StringResources::CONSTANT_VALUE_PLANCK_LENGTH>::get);
    emscripten::function("api_C1_01883_set", &FieldAccess<&StringResources::CONSTANT_VALUE_PLANCK_LENGTH>::set);
    emscripten::function("api_C1_01884_get", &FieldAccess<&StringResources::CONSTANT_VALUE_PLANCK_MASS>::get);
    emscripten::function("api_C1_01884_set", &FieldAccess<&StringResources::CONSTANT_VALUE_PLANCK_MASS>::set);
    emscripten::function("api_C1_01885_get", &FieldAccess<&StringResources::CONSTANT_VALUE_PLANCK_TIME>::get);
    emscripten::function("api_C1_01885_set", &FieldAccess<&StringResources::CONSTANT_VALUE_PLANCK_TIME>::set);
    emscripten::function("api_C1_01886_get", &FieldAccess<&StringResources::CONSTANT_VALUE_LIGHT_YEAR>::get);
    emscripten::function("api_C1_01886_set", &FieldAccess<&StringResources::CONSTANT_VALUE_LIGHT_YEAR>::set);
    emscripten::function("api_C1_01887_get", &FieldAccess<&StringResources::CONSTANT_VALUE_ASTRONOMICAL_UNIT>::get);
    emscripten::function("api_C1_01887_set", &FieldAccess<&StringResources::CONSTANT_VALUE_ASTRONOMICAL_UNIT>::set);
    emscripten::function("api_C1_01888_get", &FieldAccess<&StringResources::CONSTANT_VALUE_PARSEC>::get);
    emscripten::function("api_C1_01888_set", &FieldAccess<&StringResources::CONSTANT_VALUE_PARSEC>::set);
    emscripten::function("api_C1_01889_get", &FieldAccess<&StringResources::CONSTANT_VALUE_KILOPARSEC>::get);
    emscripten::function("api_C1_01889_set", &FieldAccess<&StringResources::CONSTANT_VALUE_KILOPARSEC>::set);
    emscripten::function("api_C1_01890_get",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL>::get);
    emscripten::function("api_C1_01890_set",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL>::set);
    emscripten::function("api_C1_01891_get", &FieldAccess<&StringResources::CONSTANT_VALUE_EARTH_RADIUS_POLAR>::get);
    emscripten::function("api_C1_01891_set", &FieldAccess<&StringResources::CONSTANT_VALUE_EARTH_RADIUS_POLAR>::set);
    emscripten::function("api_C1_01892_get", &FieldAccess<&StringResources::CONSTANT_VALUE_EARTH_RADIUS_MEAN>::get);
    emscripten::function("api_C1_01892_set", &FieldAccess<&StringResources::CONSTANT_VALUE_EARTH_RADIUS_MEAN>::set);
    emscripten::function("api_C1_01893_get", &FieldAccess<&StringResources::CONSTANT_VALUE_EARTH_MASS>::get);
    emscripten::function("api_C1_01893_set", &FieldAccess<&StringResources::CONSTANT_VALUE_EARTH_MASS>::set);
    emscripten::function("api_C1_01894_get", &FieldAccess<&StringResources::CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_01894_set", &FieldAccess<&StringResources::CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS>::set);
    emscripten::function("api_C1_01895_get", &FieldAccess<&StringResources::CONSTANT_VALUE_MOON_RADIUS_MEAN>::get);
    emscripten::function("api_C1_01895_set", &FieldAccess<&StringResources::CONSTANT_VALUE_MOON_RADIUS_MEAN>::set);
    emscripten::function("api_C1_01896_get", &FieldAccess<&StringResources::CONSTANT_VALUE_MOON_MASS>::get);
    emscripten::function("api_C1_01896_set", &FieldAccess<&StringResources::CONSTANT_VALUE_MOON_MASS>::set);
    emscripten::function("api_C1_01897_get", &FieldAccess<&StringResources::CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_01897_set", &FieldAccess<&StringResources::CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS>::set);
    emscripten::function("api_C1_01898_get", &FieldAccess<&StringResources::CONSTANT_VALUE_SOLAR_RADIUS>::get);
    emscripten::function("api_C1_01898_set", &FieldAccess<&StringResources::CONSTANT_VALUE_SOLAR_RADIUS>::set);
    emscripten::function("api_C1_01899_get", &FieldAccess<&StringResources::CONSTANT_VALUE_SOLAR_MASS>::get);
    emscripten::function("api_C1_01899_set", &FieldAccess<&StringResources::CONSTANT_VALUE_SOLAR_MASS>::set);
    emscripten::function("api_C1_01900_get", &FieldAccess<&StringResources::CONSTANT_VALUE_MERCURY_RADIUS_MEAN>::get);
    emscripten::function("api_C1_01900_set", &FieldAccess<&StringResources::CONSTANT_VALUE_MERCURY_RADIUS_MEAN>::set);
    emscripten::function("api_C1_01901_get", &FieldAccess<&StringResources::CONSTANT_VALUE_MERCURY_MASS>::get);
    emscripten::function("api_C1_01901_set", &FieldAccess<&StringResources::CONSTANT_VALUE_MERCURY_MASS>::set);
    emscripten::function("api_C1_01902_get",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_01902_set",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS>::set);
    emscripten::function("api_C1_01903_get", &FieldAccess<&StringResources::CONSTANT_VALUE_VENUS_RADIUS_MEAN>::get);
    emscripten::function("api_C1_01903_set", &FieldAccess<&StringResources::CONSTANT_VALUE_VENUS_RADIUS_MEAN>::set);
    emscripten::function("api_C1_01904_get", &FieldAccess<&StringResources::CONSTANT_VALUE_VENUS_MASS>::get);
    emscripten::function("api_C1_01904_set", &FieldAccess<&StringResources::CONSTANT_VALUE_VENUS_MASS>::set);
    emscripten::function("api_C1_01905_get", &FieldAccess<&StringResources::CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_01905_set", &FieldAccess<&StringResources::CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS>::set);
    emscripten::function("api_C1_01906_get", &FieldAccess<&StringResources::CONSTANT_VALUE_MARS_RADIUS_MEAN>::get);
    emscripten::function("api_C1_01906_set", &FieldAccess<&StringResources::CONSTANT_VALUE_MARS_RADIUS_MEAN>::set);
    emscripten::function("api_C1_01907_get", &FieldAccess<&StringResources::CONSTANT_VALUE_MARS_MASS>::get);
    emscripten::function("api_C1_01907_set", &FieldAccess<&StringResources::CONSTANT_VALUE_MARS_MASS>::set);
    emscripten::function("api_C1_01908_get", &FieldAccess<&StringResources::CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_01908_set", &FieldAccess<&StringResources::CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS>::set);
    emscripten::function("api_C1_01909_get", &FieldAccess<&StringResources::CONSTANT_VALUE_JUPITER_RADIUS_MEAN>::get);
    emscripten::function("api_C1_01909_set", &FieldAccess<&StringResources::CONSTANT_VALUE_JUPITER_RADIUS_MEAN>::set);
    emscripten::function("api_C1_01910_get", &FieldAccess<&StringResources::CONSTANT_VALUE_JUPITER_MASS>::get);
    emscripten::function("api_C1_01910_set", &FieldAccess<&StringResources::CONSTANT_VALUE_JUPITER_MASS>::set);
    emscripten::function("api_C1_01911_get",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_01911_set",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS>::set);
    emscripten::function("api_C1_01912_get", &FieldAccess<&StringResources::CONSTANT_VALUE_SATURN_RADIUS_MEAN>::get);
    emscripten::function("api_C1_01912_set", &FieldAccess<&StringResources::CONSTANT_VALUE_SATURN_RADIUS_MEAN>::set);
    emscripten::function("api_C1_01913_get", &FieldAccess<&StringResources::CONSTANT_VALUE_SATURN_MASS>::get);
    emscripten::function("api_C1_01913_set", &FieldAccess<&StringResources::CONSTANT_VALUE_SATURN_MASS>::set);
    emscripten::function("api_C1_01914_get",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_01914_set",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS>::set);
    emscripten::function("api_C1_01915_get", &FieldAccess<&StringResources::CONSTANT_VALUE_URANUS_RADIUS_MEAN>::get);
    emscripten::function("api_C1_01915_set", &FieldAccess<&StringResources::CONSTANT_VALUE_URANUS_RADIUS_MEAN>::set);
    emscripten::function("api_C1_01916_get", &FieldAccess<&StringResources::CONSTANT_VALUE_URANUS_MASS>::get);
    emscripten::function("api_C1_01916_set", &FieldAccess<&StringResources::CONSTANT_VALUE_URANUS_MASS>::set);
    emscripten::function("api_C1_01917_get",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_01917_set",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS>::set);
    emscripten::function("api_C1_01918_get", &FieldAccess<&StringResources::CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN>::get);
    emscripten::function("api_C1_01918_set", &FieldAccess<&StringResources::CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN>::set);
    emscripten::function("api_C1_01919_get", &FieldAccess<&StringResources::CONSTANT_VALUE_NEPTUNE_MASS>::get);
    emscripten::function("api_C1_01919_set", &FieldAccess<&StringResources::CONSTANT_VALUE_NEPTUNE_MASS>::set);
    emscripten::function("api_C1_01920_get",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_01920_set",
                         &FieldAccess<&StringResources::CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS>::set);
    emscripten::function("api_C1_01921_get", &FieldAccess<&StringResources::CONSTANT_VALUE_TRUE>::get);
    emscripten::function("api_C1_01921_set", &FieldAccess<&StringResources::CONSTANT_VALUE_TRUE>::set);
    emscripten::function("api_C1_01922_get", &FieldAccess<&StringResources::CONSTANT_VALUE_FALSE>::get);
    emscripten::function("api_C1_01922_set", &FieldAccess<&StringResources::CONSTANT_VALUE_FALSE>::set);
    emscripten::function("api_C1_01923_get", &FieldAccess<&StringResources::CONSTANT_VALUE_NPAR>::get);
    emscripten::function("api_C1_01923_set", &FieldAccess<&StringResources::CONSTANT_VALUE_NPAR>::set);
    emscripten::function("api_C1_01924_get", &FieldAccess<&StringResources::CONSTANT_VALUE_NAN>::get);
    emscripten::function("api_C1_01924_set", &FieldAccess<&StringResources::CONSTANT_VALUE_NAN>::set);
    emscripten::function("api_C1_01925_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_SIN>::get);
    emscripten::function("api_C1_01925_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_SIN>::set);
    emscripten::function("api_C1_01926_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_COS>::get);
    emscripten::function("api_C1_01926_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_COS>::set);
    emscripten::function("api_C1_01927_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_TAN>::get);
    emscripten::function("api_C1_01927_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_TAN>::set);
    emscripten::function("api_C1_01928_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_CTAN>::get);
    emscripten::function("api_C1_01928_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_CTAN>::set);
    emscripten::function("api_C1_01929_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_SEC>::get);
    emscripten::function("api_C1_01929_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_SEC>::set);
    emscripten::function("api_C1_01930_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_COSEC>::get);
    emscripten::function("api_C1_01930_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_COSEC>::set);
    emscripten::function("api_C1_01931_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ASIN>::get);
    emscripten::function("api_C1_01931_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ASIN>::set);
    emscripten::function("api_C1_01932_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ACOS>::get);
    emscripten::function("api_C1_01932_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ACOS>::set);
    emscripten::function("api_C1_01933_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ATAN>::get);
    emscripten::function("api_C1_01933_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ATAN>::set);
    emscripten::function("api_C1_01934_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ACTAN>::get);
    emscripten::function("api_C1_01934_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ACTAN>::set);
    emscripten::function("api_C1_01935_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_LN>::get);
    emscripten::function("api_C1_01935_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_LN>::set);
    emscripten::function("api_C1_01936_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_LOG2>::get);
    emscripten::function("api_C1_01936_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_LOG2>::set);
    emscripten::function("api_C1_01937_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_LOG10>::get);
    emscripten::function("api_C1_01937_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_LOG10>::set);
    emscripten::function("api_C1_01938_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_RAD>::get);
    emscripten::function("api_C1_01938_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_RAD>::set);
    emscripten::function("api_C1_01939_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_EXP>::get);
    emscripten::function("api_C1_01939_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_EXP>::set);
    emscripten::function("api_C1_01940_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_SQRT>::get);
    emscripten::function("api_C1_01940_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_SQRT>::set);
    emscripten::function("api_C1_01941_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_SINH>::get);
    emscripten::function("api_C1_01941_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_SINH>::set);
    emscripten::function("api_C1_01942_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_COSH>::get);
    emscripten::function("api_C1_01942_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_COSH>::set);
    emscripten::function("api_C1_01943_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_TANH>::get);
    emscripten::function("api_C1_01943_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_TANH>::set);
    emscripten::function("api_C1_01944_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_COTH>::get);
    emscripten::function("api_C1_01944_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_COTH>::set);
    emscripten::function("api_C1_01945_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_SECH>::get);
    emscripten::function("api_C1_01945_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_SECH>::set);
    emscripten::function("api_C1_01946_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_CSCH>::get);
    emscripten::function("api_C1_01946_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_CSCH>::set);
    emscripten::function("api_C1_01947_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_DEG>::get);
    emscripten::function("api_C1_01947_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_DEG>::set);
    emscripten::function("api_C1_01948_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ABS>::get);
    emscripten::function("api_C1_01948_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ABS>::set);
    emscripten::function("api_C1_01949_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_SGN>::get);
    emscripten::function("api_C1_01949_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_SGN>::set);
    emscripten::function("api_C1_01950_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_FLOOR>::get);
    emscripten::function("api_C1_01950_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_FLOOR>::set);
    emscripten::function("api_C1_01951_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_CEIL>::get);
    emscripten::function("api_C1_01951_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_CEIL>::set);
    emscripten::function("api_C1_01952_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_NOT>::get);
    emscripten::function("api_C1_01952_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_NOT>::set);
    emscripten::function("api_C1_01953_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARSINH>::get);
    emscripten::function("api_C1_01953_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARSINH>::set);
    emscripten::function("api_C1_01954_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARCOSH>::get);
    emscripten::function("api_C1_01954_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARCOSH>::set);
    emscripten::function("api_C1_01955_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARTANH>::get);
    emscripten::function("api_C1_01955_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARTANH>::set);
    emscripten::function("api_C1_01956_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARCOTH>::get);
    emscripten::function("api_C1_01956_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARCOTH>::set);
    emscripten::function("api_C1_01957_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARSECH>::get);
    emscripten::function("api_C1_01957_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARSECH>::set);
    emscripten::function("api_C1_01958_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARCSCH>::get);
    emscripten::function("api_C1_01958_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARCSCH>::set);
    emscripten::function("api_C1_01959_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_SA>::get);
    emscripten::function("api_C1_01959_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_SA>::set);
    emscripten::function("api_C1_01960_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_SINC>::get);
    emscripten::function("api_C1_01960_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_SINC>::set);
    emscripten::function("api_C1_01961_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_BELL_NUMBER>::get);
    emscripten::function("api_C1_01961_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_BELL_NUMBER>::set);
    emscripten::function("api_C1_01962_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_LUCAS_NUMBER>::get);
    emscripten::function("api_C1_01962_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_LUCAS_NUMBER>::set);
    emscripten::function("api_C1_01963_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_FIBONACCI_NUMBER>::get);
    emscripten::function("api_C1_01963_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_FIBONACCI_NUMBER>::set);
    emscripten::function("api_C1_01964_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_HARMONIC_NUMBER>::get);
    emscripten::function("api_C1_01964_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_HARMONIC_NUMBER>::set);
    emscripten::function("api_C1_01965_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_IS_PRIME>::get);
    emscripten::function("api_C1_01965_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_IS_PRIME>::set);
    emscripten::function("api_C1_01966_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_PRIME_COUNT>::get);
    emscripten::function("api_C1_01966_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_PRIME_COUNT>::set);
    emscripten::function("api_C1_01967_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_EXP_INT>::get);
    emscripten::function("api_C1_01967_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_EXP_INT>::set);
    emscripten::function("api_C1_01968_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_LOG_INT>::get);
    emscripten::function("api_C1_01968_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_LOG_INT>::set);
    emscripten::function("api_C1_01969_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_OFF_LOG_INT>::get);
    emscripten::function("api_C1_01969_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_OFF_LOG_INT>::set);
    emscripten::function("api_C1_01970_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_GAUSS_ERF>::get);
    emscripten::function("api_C1_01970_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_GAUSS_ERF>::set);
    emscripten::function("api_C1_01971_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_GAUSS_ERFC>::get);
    emscripten::function("api_C1_01971_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_GAUSS_ERFC>::set);
    emscripten::function("api_C1_01972_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_GAUSS_ERF_INV>::get);
    emscripten::function("api_C1_01972_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_GAUSS_ERF_INV>::set);
    emscripten::function("api_C1_01973_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_GAUSS_ERFC_INV>::get);
    emscripten::function("api_C1_01973_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_GAUSS_ERFC_INV>::set);
    emscripten::function("api_C1_01974_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ULP>::get);
    emscripten::function("api_C1_01974_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ULP>::set);
    emscripten::function("api_C1_01975_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ISNAN>::get);
    emscripten::function("api_C1_01975_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ISNAN>::set);
    emscripten::function("api_C1_01976_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_NDIG10>::get);
    emscripten::function("api_C1_01976_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_NDIG10>::set);
    emscripten::function("api_C1_01977_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_NFACT>::get);
    emscripten::function("api_C1_01977_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_NFACT>::set);
    emscripten::function("api_C1_01978_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARCSEC>::get);
    emscripten::function("api_C1_01978_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARCSEC>::set);
    emscripten::function("api_C1_01979_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARCCSC>::get);
    emscripten::function("api_C1_01979_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_ARCCSC>::set);
    emscripten::function("api_C1_01980_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_GAMMA>::get);
    emscripten::function("api_C1_01980_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_GAMMA>::set);
    emscripten::function("api_C1_01981_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_LAMBERT_W0>::get);
    emscripten::function("api_C1_01981_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_LAMBERT_W0>::set);
    emscripten::function("api_C1_01982_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_LAMBERT_W1>::get);
    emscripten::function("api_C1_01982_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_LAMBERT_W1>::set);
    emscripten::function("api_C1_01983_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_SGN_GAMMA>::get);
    emscripten::function("api_C1_01983_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_SGN_GAMMA>::set);
    emscripten::function("api_C1_01984_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_LOG_GAMMA>::get);
    emscripten::function("api_C1_01984_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_LOG_GAMMA>::set);
    emscripten::function("api_C1_01985_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_DI_GAMMA>::get);
    emscripten::function("api_C1_01985_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_DI_GAMMA>::set);
    emscripten::function("api_C1_01986_get", &FieldAccess<&StringResources::FUNCTION_1_ARG_PARAM>::get);
    emscripten::function("api_C1_01986_set", &FieldAccess<&StringResources::FUNCTION_1_ARG_PARAM>::set);
    emscripten::function("api_C1_01987_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_LOG>::get);
    emscripten::function("api_C1_01987_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_LOG>::set);
    emscripten::function("api_C1_01988_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_MOD>::get);
    emscripten::function("api_C1_01988_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_MOD>::set);
    emscripten::function("api_C1_01989_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_BINOM_COEFF>::get);
    emscripten::function("api_C1_01989_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_BINOM_COEFF>::set);
    emscripten::function("api_C1_01990_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_BERNOULLI_NUMBER>::get);
    emscripten::function("api_C1_01990_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_BERNOULLI_NUMBER>::set);
    emscripten::function("api_C1_01991_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_STIRLING1_NUMBER>::get);
    emscripten::function("api_C1_01991_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_STIRLING1_NUMBER>::set);
    emscripten::function("api_C1_01992_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_STIRLING2_NUMBER>::get);
    emscripten::function("api_C1_01992_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_STIRLING2_NUMBER>::set);
    emscripten::function("api_C1_01993_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_WORPITZKY_NUMBER>::get);
    emscripten::function("api_C1_01993_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_WORPITZKY_NUMBER>::set);
    emscripten::function("api_C1_01994_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_EULER_NUMBER>::get);
    emscripten::function("api_C1_01994_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_EULER_NUMBER>::set);
    emscripten::function("api_C1_01995_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_KRONECKER_DELTA>::get);
    emscripten::function("api_C1_01995_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_KRONECKER_DELTA>::set);
    emscripten::function("api_C1_01996_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_EULER_POLYNOMIAL>::get);
    emscripten::function("api_C1_01996_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_EULER_POLYNOMIAL>::set);
    emscripten::function("api_C1_01997_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_HARMONIC_NUMBER>::get);
    emscripten::function("api_C1_01997_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_HARMONIC_NUMBER>::set);
    emscripten::function("api_C1_01998_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_ROUND>::get);
    emscripten::function("api_C1_01998_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_ROUND>::set);
    emscripten::function("api_C1_01999_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_NDIG>::get);
    emscripten::function("api_C1_01999_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_NDIG>::set);
    emscripten::function("api_C1_02000_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_DIGIT10>::get);
    emscripten::function("api_C1_02000_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_DIGIT10>::set);
    emscripten::function("api_C1_02001_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_FACTVAL>::get);
    emscripten::function("api_C1_02001_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_FACTVAL>::set);
    emscripten::function("api_C1_02002_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_FACTEXP>::get);
    emscripten::function("api_C1_02002_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_FACTEXP>::set);
    emscripten::function("api_C1_02003_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_ROOT>::get);
    emscripten::function("api_C1_02003_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_ROOT>::set);
    emscripten::function("api_C1_02004_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_INC_GAMMA_LOWER>::get);
    emscripten::function("api_C1_02004_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_INC_GAMMA_LOWER>::set);
    emscripten::function("api_C1_02005_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_INC_GAMMA_UPPER>::get);
    emscripten::function("api_C1_02005_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_INC_GAMMA_UPPER>::set);
    emscripten::function("api_C1_02006_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_REG_GAMMA_LOWER>::get);
    emscripten::function("api_C1_02006_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_REG_GAMMA_LOWER>::set);
    emscripten::function("api_C1_02007_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_REG_GAMMA_UPPER>::get);
    emscripten::function("api_C1_02007_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_REG_GAMMA_UPPER>::set);
    emscripten::function("api_C1_02008_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_PERMUTATIONS>::get);
    emscripten::function("api_C1_02008_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_PERMUTATIONS>::set);
    emscripten::function("api_C1_02009_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_BETA>::get);
    emscripten::function("api_C1_02009_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_BETA>::set);
    emscripten::function("api_C1_02010_get", &FieldAccess<&StringResources::FUNCTION_2_ARG_LOG_BETA>::get);
    emscripten::function("api_C1_02010_set", &FieldAccess<&StringResources::FUNCTION_2_ARG_LOG_BETA>::set);
    emscripten::function("api_C1_02011_get", &FieldAccess<&StringResources::FUNCTION_3_ARG_IF>::get);
    emscripten::function("api_C1_02011_set", &FieldAccess<&StringResources::FUNCTION_3_ARG_IF>::set);
    emscripten::function("api_C1_02012_get", &FieldAccess<&StringResources::FUNCTION_3_ARG_CHI>::get);
    emscripten::function("api_C1_02012_set", &FieldAccess<&StringResources::FUNCTION_3_ARG_CHI>::set);
    emscripten::function("api_C1_02013_get", &FieldAccess<&StringResources::FUNCTION_3_ARG_CHI_LR>::get);
    emscripten::function("api_C1_02013_set", &FieldAccess<&StringResources::FUNCTION_3_ARG_CHI_LR>::set);
    emscripten::function("api_C1_02014_get", &FieldAccess<&StringResources::FUNCTION_3_ARG_CHI_L>::get);
    emscripten::function("api_C1_02014_set", &FieldAccess<&StringResources::FUNCTION_3_ARG_CHI_L>::set);
    emscripten::function("api_C1_02015_get", &FieldAccess<&StringResources::FUNCTION_3_ARG_CHI_R>::get);
    emscripten::function("api_C1_02015_set", &FieldAccess<&StringResources::FUNCTION_3_ARG_CHI_R>::set);
    emscripten::function("api_C1_02016_get", &FieldAccess<&StringResources::FUNCTION_3_ARG_DIGIT>::get);
    emscripten::function("api_C1_02016_set", &FieldAccess<&StringResources::FUNCTION_3_ARG_DIGIT>::set);
    emscripten::function("api_C1_02017_get", &FieldAccess<&StringResources::FUNCTION_3_ARG_INC_BETA>::get);
    emscripten::function("api_C1_02017_set", &FieldAccess<&StringResources::FUNCTION_3_ARG_INC_BETA>::set);
    emscripten::function("api_C1_02018_get", &FieldAccess<&StringResources::FUNCTION_3_ARG_REG_BETA>::get);
    emscripten::function("api_C1_02018_set", &FieldAccess<&StringResources::FUNCTION_3_ARG_REG_BETA>::set);
    emscripten::function("api_C1_02019_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_IFF>::get);
    emscripten::function("api_C1_02019_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_IFF>::set);
    emscripten::function("api_C1_02020_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_MIN>::get);
    emscripten::function("api_C1_02020_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_MIN>::set);
    emscripten::function("api_C1_02021_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_MAX>::get);
    emscripten::function("api_C1_02021_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_MAX>::set);
    emscripten::function("api_C1_02022_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_CONT_FRAC>::get);
    emscripten::function("api_C1_02022_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_CONT_FRAC>::set);
    emscripten::function("api_C1_02023_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_CONT_POL>::get);
    emscripten::function("api_C1_02023_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_CONT_POL>::set);
    emscripten::function("api_C1_02024_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_GCD>::get);
    emscripten::function("api_C1_02024_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_GCD>::set);
    emscripten::function("api_C1_02025_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_LCM>::get);
    emscripten::function("api_C1_02025_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_LCM>::set);
    emscripten::function("api_C1_02026_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_SUM>::get);
    emscripten::function("api_C1_02026_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_SUM>::set);
    emscripten::function("api_C1_02027_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_PROD>::get);
    emscripten::function("api_C1_02027_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_PROD>::set);
    emscripten::function("api_C1_02028_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_AVG>::get);
    emscripten::function("api_C1_02028_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_AVG>::set);
    emscripten::function("api_C1_02029_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_VAR>::get);
    emscripten::function("api_C1_02029_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_VAR>::set);
    emscripten::function("api_C1_02030_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_STD>::get);
    emscripten::function("api_C1_02030_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_STD>::set);
    emscripten::function("api_C1_02031_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_RND_LIST>::get);
    emscripten::function("api_C1_02031_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_RND_LIST>::set);
    emscripten::function("api_C1_02032_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_COALESCE>::get);
    emscripten::function("api_C1_02032_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_COALESCE>::set);
    emscripten::function("api_C1_02033_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_OR>::get);
    emscripten::function("api_C1_02033_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_OR>::set);
    emscripten::function("api_C1_02034_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_AND>::get);
    emscripten::function("api_C1_02034_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_AND>::set);
    emscripten::function("api_C1_02035_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_XOR>::get);
    emscripten::function("api_C1_02035_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_XOR>::set);
    emscripten::function("api_C1_02036_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_ARGMIN>::get);
    emscripten::function("api_C1_02036_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_ARGMIN>::set);
    emscripten::function("api_C1_02037_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_ARGMAX>::get);
    emscripten::function("api_C1_02037_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_ARGMAX>::set);
    emscripten::function("api_C1_02038_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_MEDIAN>::get);
    emscripten::function("api_C1_02038_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_MEDIAN>::set);
    emscripten::function("api_C1_02039_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_MODE>::get);
    emscripten::function("api_C1_02039_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_MODE>::set);
    emscripten::function("api_C1_02040_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_BASE>::get);
    emscripten::function("api_C1_02040_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_BASE>::set);
    emscripten::function("api_C1_02041_get", &FieldAccess<&StringResources::FUNCTION_VARIADIC_NDIST>::get);
    emscripten::function("api_C1_02041_set", &FieldAccess<&StringResources::FUNCTION_VARIADIC_NDIST>::set);
    emscripten::function("api_C1_02042_get", &FieldAccess<&StringResources::OPERATOR_PLUS>::get);
    emscripten::function("api_C1_02042_set", &FieldAccess<&StringResources::OPERATOR_PLUS>::set);
    emscripten::function("api_C1_02043_get", &FieldAccess<&StringResources::OPERATOR_MINUS>::get);
    emscripten::function("api_C1_02043_set", &FieldAccess<&StringResources::OPERATOR_MINUS>::set);
    emscripten::function("api_C1_02044_get", &FieldAccess<&StringResources::OPERATOR_MULTIPLY>::get);
    emscripten::function("api_C1_02044_set", &FieldAccess<&StringResources::OPERATOR_MULTIPLY>::set);
    emscripten::function("api_C1_02045_get", &FieldAccess<&StringResources::OPERATOR_DIVIDE>::get);
    emscripten::function("api_C1_02045_set", &FieldAccess<&StringResources::OPERATOR_DIVIDE>::set);
    emscripten::function("api_C1_02046_get", &FieldAccess<&StringResources::OPERATOR_DIVIDE_QUOTIENT>::get);
    emscripten::function("api_C1_02046_set", &FieldAccess<&StringResources::OPERATOR_DIVIDE_QUOTIENT>::set);
    emscripten::function("api_C1_02047_get", &FieldAccess<&StringResources::OPERATOR_POWER>::get);
    emscripten::function("api_C1_02047_set", &FieldAccess<&StringResources::OPERATOR_POWER>::set);
    emscripten::function("api_C1_02048_get", &FieldAccess<&StringResources::OPERATOR_FACT>::get);
    emscripten::function("api_C1_02048_set", &FieldAccess<&StringResources::OPERATOR_FACT>::set);
    emscripten::function("api_C1_02049_get", &FieldAccess<&StringResources::OPERATOR_MOD>::get);
    emscripten::function("api_C1_02049_set", &FieldAccess<&StringResources::OPERATOR_MOD>::set);
    emscripten::function("api_C1_02050_get", &FieldAccess<&StringResources::OPERATOR_PERC>::get);
    emscripten::function("api_C1_02050_set", &FieldAccess<&StringResources::OPERATOR_PERC>::set);
    emscripten::function("api_C1_02051_get", &FieldAccess<&StringResources::OPERATOR_TETRATION>::get);
    emscripten::function("api_C1_02051_set", &FieldAccess<&StringResources::OPERATOR_TETRATION>::set);
    emscripten::function("api_C1_02052_get", &FieldAccess<&StringResources::OPERATOR_SQUARE_ROOT>::get);
    emscripten::function("api_C1_02052_set", &FieldAccess<&StringResources::OPERATOR_SQUARE_ROOT>::set);
    emscripten::function("api_C1_02053_get", &FieldAccess<&StringResources::OPERATOR_CUBE_ROOT>::get);
    emscripten::function("api_C1_02053_set", &FieldAccess<&StringResources::OPERATOR_CUBE_ROOT>::set);
    emscripten::function("api_C1_02054_get", &FieldAccess<&StringResources::OPERATOR_FOURTH_ROOT>::get);
    emscripten::function("api_C1_02054_set", &FieldAccess<&StringResources::OPERATOR_FOURTH_ROOT>::set);
    emscripten::function("api_C1_02055_get", &FieldAccess<&StringResources::PARSER_SYMBOL_LEFT_PARENTHESES>::get);
    emscripten::function("api_C1_02055_set", &FieldAccess<&StringResources::PARSER_SYMBOL_LEFT_PARENTHESES>::set);
    emscripten::function("api_C1_02056_get", &FieldAccess<&StringResources::PARSER_SYMBOL_RIGHT_PARENTHESES>::get);
    emscripten::function("api_C1_02056_set", &FieldAccess<&StringResources::PARSER_SYMBOL_RIGHT_PARENTHESES>::set);
    emscripten::function("api_C1_02057_get", &FieldAccess<&StringResources::PARSER_SYMBOL_COMMA>::get);
    emscripten::function("api_C1_02057_set", &FieldAccess<&StringResources::PARSER_SYMBOL_COMMA>::set);
    emscripten::function("api_C1_02058_get", &FieldAccess<&StringResources::PARSER_SYMBOL_SEMI>::get);
    emscripten::function("api_C1_02058_set", &FieldAccess<&StringResources::PARSER_SYMBOL_SEMI>::set);
    emscripten::function("api_C1_02059_get", &FieldAccess<&StringResources::PARSER_SYMBOL_BLANK>::get);
    emscripten::function("api_C1_02059_set", &FieldAccess<&StringResources::PARSER_SYMBOL_BLANK>::set);
    emscripten::function("api_C1_02060_get", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_INTEGER>::get);
    emscripten::function("api_C1_02060_set", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_INTEGER>::set);
    emscripten::function("api_C1_02061_get", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_DECIMAL>::get);
    emscripten::function("api_C1_02061_set", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_DECIMAL>::set);
    emscripten::function("api_C1_02062_get", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_LEADING_ZERO>::get);
    emscripten::function("api_C1_02062_set", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_LEADING_ZERO>::set);
    emscripten::function("api_C1_02063_get", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_SCI_NOTATION>::get);
    emscripten::function("api_C1_02063_set", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_SCI_NOTATION>::set);
    emscripten::function("api_C1_02064_get", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO>::get);
    emscripten::function("api_C1_02064_set", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO>::set);
    emscripten::function("api_C1_02065_get", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_FRACTIONS>::get);
    emscripten::function("api_C1_02065_set", &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_FRACTIONS>::set);
    emscripten::function("api_C1_02066_get",
                         &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS>::get);
    emscripten::function("api_C1_02066_set",
                         &FieldAccess<&StringResources::PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS>::set);
    emscripten::function("api_C1_02067_get", &FieldAccess<&StringResources::PARSER_SYMBOL_UNICODE_MATH>::get);
    emscripten::function("api_C1_02067_set", &FieldAccess<&StringResources::PARSER_SYMBOL_UNICODE_MATH>::set);
    emscripten::function("api_C1_02068_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_PERC>::get);
    emscripten::function("api_C1_02068_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_PERC>::set);
    emscripten::function("api_C1_02069_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_PERM>::get);
    emscripten::function("api_C1_02069_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_PERM>::set);
    emscripten::function("api_C1_02070_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_YOTTA>::get);
    emscripten::function("api_C1_02070_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_YOTTA>::set);
    emscripten::function("api_C1_02071_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_ZETTA>::get);
    emscripten::function("api_C1_02071_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_ZETTA>::set);
    emscripten::function("api_C1_02072_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_EXA>::get);
    emscripten::function("api_C1_02072_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_EXA>::set);
    emscripten::function("api_C1_02073_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_PETA>::get);
    emscripten::function("api_C1_02073_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_PETA>::set);
    emscripten::function("api_C1_02074_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_TERA>::get);
    emscripten::function("api_C1_02074_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_TERA>::set);
    emscripten::function("api_C1_02075_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_GIGA>::get);
    emscripten::function("api_C1_02075_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_GIGA>::set);
    emscripten::function("api_C1_02076_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_MEGA>::get);
    emscripten::function("api_C1_02076_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_MEGA>::set);
    emscripten::function("api_C1_02077_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_KILO>::get);
    emscripten::function("api_C1_02077_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_KILO>::set);
    emscripten::function("api_C1_02078_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_HECTO>::get);
    emscripten::function("api_C1_02078_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_HECTO>::set);
    emscripten::function("api_C1_02079_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_DECA>::get);
    emscripten::function("api_C1_02079_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_DECA>::set);
    emscripten::function("api_C1_02080_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_DECI>::get);
    emscripten::function("api_C1_02080_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_DECI>::set);
    emscripten::function("api_C1_02081_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_CENTI>::get);
    emscripten::function("api_C1_02081_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_CENTI>::set);
    emscripten::function("api_C1_02082_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_MILLI>::get);
    emscripten::function("api_C1_02082_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_MILLI>::set);
    emscripten::function("api_C1_02083_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_MICRO>::get);
    emscripten::function("api_C1_02083_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_MICRO>::set);
    emscripten::function("api_C1_02084_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_NANO>::get);
    emscripten::function("api_C1_02084_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_NANO>::set);
    emscripten::function("api_C1_02085_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_PICO>::get);
    emscripten::function("api_C1_02085_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_PICO>::set);
    emscripten::function("api_C1_02086_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_FEMTO>::get);
    emscripten::function("api_C1_02086_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_FEMTO>::set);
    emscripten::function("api_C1_02087_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_ATTO>::get);
    emscripten::function("api_C1_02087_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_ATTO>::set);
    emscripten::function("api_C1_02088_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_ZEPTO>::get);
    emscripten::function("api_C1_02088_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_ZEPTO>::set);
    emscripten::function("api_C1_02089_get", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_YOCTO>::get);
    emscripten::function("api_C1_02089_set", &FieldAccess<&StringResources::DIMENSIONLESS_UNIT_YOCTO>::set);
    emscripten::function("api_C1_02090_get", &FieldAccess<&StringResources::UNIT_METRE>::get);
    emscripten::function("api_C1_02090_set", &FieldAccess<&StringResources::UNIT_METRE>::set);
    emscripten::function("api_C1_02091_get", &FieldAccess<&StringResources::UNIT_KILOMETRE>::get);
    emscripten::function("api_C1_02091_set", &FieldAccess<&StringResources::UNIT_KILOMETRE>::set);
    emscripten::function("api_C1_02092_get", &FieldAccess<&StringResources::UNIT_CENTIMETRE>::get);
    emscripten::function("api_C1_02092_set", &FieldAccess<&StringResources::UNIT_CENTIMETRE>::set);
    emscripten::function("api_C1_02093_get", &FieldAccess<&StringResources::UNIT_MILLIMETRE>::get);
    emscripten::function("api_C1_02093_set", &FieldAccess<&StringResources::UNIT_MILLIMETRE>::set);
    emscripten::function("api_C1_02094_get", &FieldAccess<&StringResources::UNIT_INCH>::get);
    emscripten::function("api_C1_02094_set", &FieldAccess<&StringResources::UNIT_INCH>::set);
    emscripten::function("api_C1_02095_get", &FieldAccess<&StringResources::UNIT_YARD>::get);
    emscripten::function("api_C1_02095_set", &FieldAccess<&StringResources::UNIT_YARD>::set);
    emscripten::function("api_C1_02096_get", &FieldAccess<&StringResources::UNIT_FEET>::get);
    emscripten::function("api_C1_02096_set", &FieldAccess<&StringResources::UNIT_FEET>::set);
    emscripten::function("api_C1_02097_get", &FieldAccess<&StringResources::UNIT_MILE>::get);
    emscripten::function("api_C1_02097_set", &FieldAccess<&StringResources::UNIT_MILE>::set);
    emscripten::function("api_C1_02098_get", &FieldAccess<&StringResources::UNIT_NAUTICAL_MILE>::get);
    emscripten::function("api_C1_02098_set", &FieldAccess<&StringResources::UNIT_NAUTICAL_MILE>::set);
    emscripten::function("api_C1_02099_get", &FieldAccess<&StringResources::UNIT_METRE2>::get);
    emscripten::function("api_C1_02099_set", &FieldAccess<&StringResources::UNIT_METRE2>::set);
    emscripten::function("api_C1_02100_get", &FieldAccess<&StringResources::UNIT_CENTIMETRE2>::get);
    emscripten::function("api_C1_02100_set", &FieldAccess<&StringResources::UNIT_CENTIMETRE2>::set);
    emscripten::function("api_C1_02101_get", &FieldAccess<&StringResources::UNIT_MILLIMETRE2>::get);
    emscripten::function("api_C1_02101_set", &FieldAccess<&StringResources::UNIT_MILLIMETRE2>::set);
    emscripten::function("api_C1_02102_get", &FieldAccess<&StringResources::UNIT_ARE>::get);
    emscripten::function("api_C1_02102_set", &FieldAccess<&StringResources::UNIT_ARE>::set);
    emscripten::function("api_C1_02103_get", &FieldAccess<&StringResources::UNIT_HECTARE>::get);
    emscripten::function("api_C1_02103_set", &FieldAccess<&StringResources::UNIT_HECTARE>::set);
    emscripten::function("api_C1_02104_get", &FieldAccess<&StringResources::UNIT_ACRE>::get);
    emscripten::function("api_C1_02104_set", &FieldAccess<&StringResources::UNIT_ACRE>::set);
    emscripten::function("api_C1_02105_get", &FieldAccess<&StringResources::UNIT_KILOMETRE2>::get);
    emscripten::function("api_C1_02105_set", &FieldAccess<&StringResources::UNIT_KILOMETRE2>::set);
    emscripten::function("api_C1_02106_get", &FieldAccess<&StringResources::UNIT_MILLIMETRE3>::get);
    emscripten::function("api_C1_02106_set", &FieldAccess<&StringResources::UNIT_MILLIMETRE3>::set);
    emscripten::function("api_C1_02107_get", &FieldAccess<&StringResources::UNIT_CENTIMETRE3>::get);
    emscripten::function("api_C1_02107_set", &FieldAccess<&StringResources::UNIT_CENTIMETRE3>::set);
    emscripten::function("api_C1_02108_get", &FieldAccess<&StringResources::UNIT_METRE3>::get);
    emscripten::function("api_C1_02108_set", &FieldAccess<&StringResources::UNIT_METRE3>::set);
    emscripten::function("api_C1_02109_get", &FieldAccess<&StringResources::UNIT_KILOMETRE3>::get);
    emscripten::function("api_C1_02109_set", &FieldAccess<&StringResources::UNIT_KILOMETRE3>::set);
    emscripten::function("api_C1_02110_get", &FieldAccess<&StringResources::UNIT_MILLILITRE>::get);
    emscripten::function("api_C1_02110_set", &FieldAccess<&StringResources::UNIT_MILLILITRE>::set);
    emscripten::function("api_C1_02111_get", &FieldAccess<&StringResources::UNIT_LITRE>::get);
    emscripten::function("api_C1_02111_set", &FieldAccess<&StringResources::UNIT_LITRE>::set);
    emscripten::function("api_C1_02112_get", &FieldAccess<&StringResources::UNIT_GALLON>::get);
    emscripten::function("api_C1_02112_set", &FieldAccess<&StringResources::UNIT_GALLON>::set);
    emscripten::function("api_C1_02113_get", &FieldAccess<&StringResources::UNIT_PINT>::get);
    emscripten::function("api_C1_02113_set", &FieldAccess<&StringResources::UNIT_PINT>::set);
    emscripten::function("api_C1_02114_get", &FieldAccess<&StringResources::UNIT_SECOND>::get);
    emscripten::function("api_C1_02114_set", &FieldAccess<&StringResources::UNIT_SECOND>::set);
    emscripten::function("api_C1_02115_get", &FieldAccess<&StringResources::UNIT_MILLISECOND>::get);
    emscripten::function("api_C1_02115_set", &FieldAccess<&StringResources::UNIT_MILLISECOND>::set);
    emscripten::function("api_C1_02116_get", &FieldAccess<&StringResources::UNIT_MINUTE>::get);
    emscripten::function("api_C1_02116_set", &FieldAccess<&StringResources::UNIT_MINUTE>::set);
    emscripten::function("api_C1_02117_get", &FieldAccess<&StringResources::UNIT_HOUR>::get);
    emscripten::function("api_C1_02117_set", &FieldAccess<&StringResources::UNIT_HOUR>::set);
    emscripten::function("api_C1_02118_get", &FieldAccess<&StringResources::UNIT_DAY>::get);
    emscripten::function("api_C1_02118_set", &FieldAccess<&StringResources::UNIT_DAY>::set);
    emscripten::function("api_C1_02119_get", &FieldAccess<&StringResources::UNIT_WEEK>::get);
    emscripten::function("api_C1_02119_set", &FieldAccess<&StringResources::UNIT_WEEK>::set);
    emscripten::function("api_C1_02120_get", &FieldAccess<&StringResources::UNIT_JULIAN_YEAR>::get);
    emscripten::function("api_C1_02120_set", &FieldAccess<&StringResources::UNIT_JULIAN_YEAR>::set);
    emscripten::function("api_C1_02121_get", &FieldAccess<&StringResources::UNIT_KILOGRAM>::get);
    emscripten::function("api_C1_02121_set", &FieldAccess<&StringResources::UNIT_KILOGRAM>::set);
    emscripten::function("api_C1_02122_get", &FieldAccess<&StringResources::UNIT_GRAM>::get);
    emscripten::function("api_C1_02122_set", &FieldAccess<&StringResources::UNIT_GRAM>::set);
    emscripten::function("api_C1_02123_get", &FieldAccess<&StringResources::UNIT_MILLIGRAM>::get);
    emscripten::function("api_C1_02123_set", &FieldAccess<&StringResources::UNIT_MILLIGRAM>::set);
    emscripten::function("api_C1_02124_get", &FieldAccess<&StringResources::UNIT_DECAGRAM>::get);
    emscripten::function("api_C1_02124_set", &FieldAccess<&StringResources::UNIT_DECAGRAM>::set);
    emscripten::function("api_C1_02125_get", &FieldAccess<&StringResources::UNIT_TONNE>::get);
    emscripten::function("api_C1_02125_set", &FieldAccess<&StringResources::UNIT_TONNE>::set);
    emscripten::function("api_C1_02126_get", &FieldAccess<&StringResources::UNIT_OUNCE>::get);
    emscripten::function("api_C1_02126_set", &FieldAccess<&StringResources::UNIT_OUNCE>::set);
    emscripten::function("api_C1_02127_get", &FieldAccess<&StringResources::UNIT_POUND>::get);
    emscripten::function("api_C1_02127_set", &FieldAccess<&StringResources::UNIT_POUND>::set);
    emscripten::function("api_C1_02128_get", &FieldAccess<&StringResources::UNIT_BIT>::get);
    emscripten::function("api_C1_02128_set", &FieldAccess<&StringResources::UNIT_BIT>::set);
    emscripten::function("api_C1_02129_get", &FieldAccess<&StringResources::UNIT_KILOBIT>::get);
    emscripten::function("api_C1_02129_set", &FieldAccess<&StringResources::UNIT_KILOBIT>::set);
    emscripten::function("api_C1_02130_get", &FieldAccess<&StringResources::UNIT_MEGABIT>::get);
    emscripten::function("api_C1_02130_set", &FieldAccess<&StringResources::UNIT_MEGABIT>::set);
    emscripten::function("api_C1_02131_get", &FieldAccess<&StringResources::UNIT_GIGABIT>::get);
    emscripten::function("api_C1_02131_set", &FieldAccess<&StringResources::UNIT_GIGABIT>::set);
    emscripten::function("api_C1_02132_get", &FieldAccess<&StringResources::UNIT_TERABIT>::get);
    emscripten::function("api_C1_02132_set", &FieldAccess<&StringResources::UNIT_TERABIT>::set);
    emscripten::function("api_C1_02133_get", &FieldAccess<&StringResources::UNIT_PETABIT>::get);
    emscripten::function("api_C1_02133_set", &FieldAccess<&StringResources::UNIT_PETABIT>::set);
    emscripten::function("api_C1_02134_get", &FieldAccess<&StringResources::UNIT_EXABIT>::get);
    emscripten::function("api_C1_02134_set", &FieldAccess<&StringResources::UNIT_EXABIT>::set);
    emscripten::function("api_C1_02135_get", &FieldAccess<&StringResources::UNIT_ZETTABIT>::get);
    emscripten::function("api_C1_02135_set", &FieldAccess<&StringResources::UNIT_ZETTABIT>::set);
    emscripten::function("api_C1_02136_get", &FieldAccess<&StringResources::UNIT_YOTTABIT>::get);
    emscripten::function("api_C1_02136_set", &FieldAccess<&StringResources::UNIT_YOTTABIT>::set);
    emscripten::function("api_C1_02137_get", &FieldAccess<&StringResources::UNIT_BYTE>::get);
    emscripten::function("api_C1_02137_set", &FieldAccess<&StringResources::UNIT_BYTE>::set);
    emscripten::function("api_C1_02138_get", &FieldAccess<&StringResources::UNIT_KILOBYTE>::get);
    emscripten::function("api_C1_02138_set", &FieldAccess<&StringResources::UNIT_KILOBYTE>::set);
    emscripten::function("api_C1_02139_get", &FieldAccess<&StringResources::UNIT_MEGABYTE>::get);
    emscripten::function("api_C1_02139_set", &FieldAccess<&StringResources::UNIT_MEGABYTE>::set);
    emscripten::function("api_C1_02140_get", &FieldAccess<&StringResources::UNIT_GIGABYTE>::get);
    emscripten::function("api_C1_02140_set", &FieldAccess<&StringResources::UNIT_GIGABYTE>::set);
    emscripten::function("api_C1_02141_get", &FieldAccess<&StringResources::UNIT_TERABYTE>::get);
    emscripten::function("api_C1_02141_set", &FieldAccess<&StringResources::UNIT_TERABYTE>::set);
    emscripten::function("api_C1_02142_get", &FieldAccess<&StringResources::UNIT_PETABYTE>::get);
    emscripten::function("api_C1_02142_set", &FieldAccess<&StringResources::UNIT_PETABYTE>::set);
    emscripten::function("api_C1_02143_get", &FieldAccess<&StringResources::UNIT_EXABYTE>::get);
    emscripten::function("api_C1_02143_set", &FieldAccess<&StringResources::UNIT_EXABYTE>::set);
    emscripten::function("api_C1_02144_get", &FieldAccess<&StringResources::UNIT_ZETTABYTE>::get);
    emscripten::function("api_C1_02144_set", &FieldAccess<&StringResources::UNIT_ZETTABYTE>::set);
    emscripten::function("api_C1_02145_get", &FieldAccess<&StringResources::UNIT_YOTTABYTE>::get);
    emscripten::function("api_C1_02145_set", &FieldAccess<&StringResources::UNIT_YOTTABYTE>::set);
    emscripten::function("api_C1_02146_get", &FieldAccess<&StringResources::UNIT_JOULE>::get);
    emscripten::function("api_C1_02146_set", &FieldAccess<&StringResources::UNIT_JOULE>::set);
    emscripten::function("api_C1_02147_get", &FieldAccess<&StringResources::UNIT_ELECTRONO_VOLT>::get);
    emscripten::function("api_C1_02147_set", &FieldAccess<&StringResources::UNIT_ELECTRONO_VOLT>::set);
    emscripten::function("api_C1_02148_get", &FieldAccess<&StringResources::UNIT_KILO_ELECTRONO_VOLT>::get);
    emscripten::function("api_C1_02148_set", &FieldAccess<&StringResources::UNIT_KILO_ELECTRONO_VOLT>::set);
    emscripten::function("api_C1_02149_get", &FieldAccess<&StringResources::UNIT_MEGA_ELECTRONO_VOLT>::get);
    emscripten::function("api_C1_02149_set", &FieldAccess<&StringResources::UNIT_MEGA_ELECTRONO_VOLT>::set);
    emscripten::function("api_C1_02150_get", &FieldAccess<&StringResources::UNIT_GIGA_ELECTRONO_VOLT>::get);
    emscripten::function("api_C1_02150_set", &FieldAccess<&StringResources::UNIT_GIGA_ELECTRONO_VOLT>::set);
    emscripten::function("api_C1_02151_get", &FieldAccess<&StringResources::UNIT_TERA_ELECTRONO_VOLT>::get);
    emscripten::function("api_C1_02151_set", &FieldAccess<&StringResources::UNIT_TERA_ELECTRONO_VOLT>::set);
    emscripten::function("api_C1_02152_get", &FieldAccess<&StringResources::UNIT_METRE_PER_SECOND>::get);
    emscripten::function("api_C1_02152_set", &FieldAccess<&StringResources::UNIT_METRE_PER_SECOND>::set);
    emscripten::function("api_C1_02153_get", &FieldAccess<&StringResources::UNIT_KILOMETRE_PER_HOUR>::get);
    emscripten::function("api_C1_02153_set", &FieldAccess<&StringResources::UNIT_KILOMETRE_PER_HOUR>::set);
    emscripten::function("api_C1_02154_get", &FieldAccess<&StringResources::UNIT_MILE_PER_HOUR>::get);
    emscripten::function("api_C1_02154_set", &FieldAccess<&StringResources::UNIT_MILE_PER_HOUR>::set);
    emscripten::function("api_C1_02155_get", &FieldAccess<&StringResources::UNIT_KNOT>::get);
    emscripten::function("api_C1_02155_set", &FieldAccess<&StringResources::UNIT_KNOT>::set);
    emscripten::function("api_C1_02156_get", &FieldAccess<&StringResources::UNIT_METRE_PER_SECOND2>::get);
    emscripten::function("api_C1_02156_set", &FieldAccess<&StringResources::UNIT_METRE_PER_SECOND2>::set);
    emscripten::function("api_C1_02157_get", &FieldAccess<&StringResources::UNIT_KILOMETRE_PER_HOUR2>::get);
    emscripten::function("api_C1_02157_set", &FieldAccess<&StringResources::UNIT_KILOMETRE_PER_HOUR2>::set);
    emscripten::function("api_C1_02158_get", &FieldAccess<&StringResources::UNIT_MILE_PER_HOUR2>::get);
    emscripten::function("api_C1_02158_set", &FieldAccess<&StringResources::UNIT_MILE_PER_HOUR2>::set);
    emscripten::function("api_C1_02159_get", &FieldAccess<&StringResources::UNIT_RADIAN_ARC>::get);
    emscripten::function("api_C1_02159_set", &FieldAccess<&StringResources::UNIT_RADIAN_ARC>::set);
    emscripten::function("api_C1_02160_get", &FieldAccess<&StringResources::UNIT_DEGREE_ARC>::get);
    emscripten::function("api_C1_02160_set", &FieldAccess<&StringResources::UNIT_DEGREE_ARC>::set);
    emscripten::function("api_C1_02161_get", &FieldAccess<&StringResources::UNIT_MINUTE_ARC>::get);
    emscripten::function("api_C1_02161_set", &FieldAccess<&StringResources::UNIT_MINUTE_ARC>::set);
    emscripten::function("api_C1_02162_get", &FieldAccess<&StringResources::UNIT_SECOND_ARC>::get);
    emscripten::function("api_C1_02162_set", &FieldAccess<&StringResources::UNIT_SECOND_ARC>::set);
    emscripten::function("api_C1_02170",
                         &MemberCall<static_cast<void (StringResources::*)() const>(&StringResources::print)>::call);
    emscripten::function("api_C1_02171",
                         &MemberCall<static_cast<void (StringResources::*)() const>(&
                             StringResources::printInitSrc)>::call);
    emscripten::function("api_C1_02202",
                         &StaticCall<static_cast<StringPtr (*)(int)>(&
                             stringutils::StringUtils::numberToHexString)>::call);
    emscripten::function("api_C1_02203",
                         &StaticCall<static_cast<StringPtr (*)(Long)>(&
                             stringutils::StringUtils::numberToHexString)>::call);
    emscripten::function("api_C1_02204",
                         &StaticCall<static_cast<StringPtr (*)(double)>(&
                             stringutils::StringUtils::numberToHexString)>::call);
    emscripten::function("api_C1_02205",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &)>(&
                             stringutils::StringUtils::hexString2AsciiString)>::call);
    emscripten::function("api_C1_02206",
                         &StaticCall<static_cast<StringPtr (*)(int)>(&
                             stringutils::StringUtils::numberToAsciiString)>::call);
    emscripten::function("api_C1_02207",
                         &StaticCall<static_cast<StringPtr (*)(Long)>(&
                             stringutils::StringUtils::numberToAsciiString)>::call);
    emscripten::function("api_C1_02208",
                         &StaticCall<static_cast<StringPtr (*)(double)>(&
                             stringutils::StringUtils::numberToAsciiString)>::call);
    emscripten::function("api_C1_02209",
                         &StaticCall<static_cast<int (*)(const StringPtr &, const StringPtr &)>(&
                             stringutils::StringUtils::countOccurrences)>::call);
    emscripten::function("api_C1_02210",
                         &StaticCall<static_cast<int (*)(const String &, const String &)>(&
                             stringutils::StringUtils::countOccurrences)>::call);
    emscripten::function("api_C1_02211",
                         &StaticCall<static_cast<int (*)(const std::string &, const std::string &)>(&
                             stringutils::StringUtils::countOccurrences)>::call);
    emscripten::function("api_C1_02214",
                         &StaticCall<static_cast<int (*)(const StringPtr &)>(&
                             stringutils::StringUtils::countLines)>::call);
    emscripten::function("api_C1_02605_get", &StaticFieldAccess<&mXparser::VERSION_MAJOR>::get);
    emscripten::function("api_C1_02606_get", &StaticFieldAccess<&mXparser::VERSION_MINOR>::get);
    emscripten::function("api_C1_02607_get", &StaticFieldAccess<&mXparser::VERSION_PATCH>::get);
    emscripten::function("api_C1_02608_get", &StaticFieldAccess<&mXparser::VERSION>::get);
    emscripten::function("api_C1_02609_get", &StaticFieldAccess<&mXparser::VERSION_CODE_NAME>::get);
    emscripten::function("api_C1_02610_get", &StaticFieldAccess<&mXparser::VERSION_NAME>::get);
    emscripten::function("api_C1_02611_get", &StaticFieldAccess<&mXparser::BUIT_FOR>::get);
    emscripten::function("api_C1_02612",
                         &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfWarmedUpBeforeConcurrentUse)>::call);
    emscripten::function("api_C1_02613",
                         &StaticCall<static_cast<bool (*)()>(&mXparser::warmUpBeforeConcurrentUse)>::call);
    emscripten::function("api_C1_02614_get", &StaticFieldAccess<&mXparser::primesCache>::get);
    emscripten::function("api_C1_02614_set", &StaticFieldAccess<&mXparser::primesCache>::set);
    emscripten::function("api_C1_02615_get", &StaticFieldAccess<&mXparser::PRIMES_CACHE_NOT_INITIALIZED>::get);
    emscripten::function("api_C1_02616", &StaticCall<static_cast<void (*)()>(&mXparser::initPrimesCache)>::call);
    emscripten::function("api_C1_02617", &StaticCall<static_cast<void (*)(int)>(&mXparser::initPrimesCache)>::call);
    emscripten::function("api_C1_02618",
                         &StaticCall<static_cast<void (*)(const PrimesCachePtr &)>(&mXparser::initPrimesCache)>::call);
    emscripten::function("api_C1_02619",
                         &StaticCall<static_cast<bool (*)()>(&mXparser::isInitPrimesCacheSuccessful)>::call);
    emscripten::function("api_C1_02620", &StaticCall<static_cast<void (*)()>(&mXparser::setNoPrimesCache)>::call);
    emscripten::function("api_C1_02621", &StaticCall<static_cast<int (*)()>(&mXparser::getMaxNumInPrimesCache)>::call);
    emscripten::function("api_C1_02622", &StaticCall<static_cast<int (*)()>(&mXparser::getThreadsNumber)>::call);
    emscripten::function("api_C1_02623",
                         &StaticCall<static_cast<void (*)()>(&mXparser::setDefaultThreadsNumber)>::call);
    emscripten::function("api_C1_02624", &StaticCall<static_cast<void (*)(int)>(&mXparser::setThreadsNumber)>::call);
    emscripten::function("api_C1_02625",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double)>(&
                             mXparser::getFunctionValue)>::call);
    emscripten::function("api_C1_02626",
                         &StaticCall<static_cast<ArrayPtr<double> (*)(const ExpressionPtr &, const ArgumentPtr &,
                                                                      double, double,
                                                                      double)>(&mXparser::getFunctionValues)>::call);
    emscripten::function("api_C1_02627",
                         &StaticCall<static_cast<ArrayPtr<double> (*)(const ListPtr<double> &)>(&
                             mXparser::arrayList2double)>::call);
    emscripten::function("api_C1_02628",
                         &StaticCall<static_cast<void (*)(const RandomPtr &)>(&mXparser::setRandomGenerator)>::call);
    emscripten::function("api_C1_02629", &StaticCall<static_cast<void (*)()>(&mXparser::setExactComparison)>::call);
    emscripten::function("api_C1_02630", &StaticCall<static_cast<void (*)()>(&mXparser::setEpsilonComparison)>::call);
    emscripten::function("api_C1_02631", &StaticCall<static_cast<void (*)(double)>(&mXparser::setEpsilon)>::call);
    emscripten::function("api_C1_02632", &StaticCall<static_cast<void (*)()>(&mXparser::setDefaultEpsilon)>::call);
    emscripten::function("api_C1_02633", &StaticCall<static_cast<double (*)()>(&mXparser::getEpsilon)>::call);
    emscripten::function("api_C1_02634", &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfEpsilonMode)>::call);
    emscripten::function("api_C1_02635", &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfExactMode)>::call);
    emscripten::function("api_C1_02636", &StaticCall<static_cast<void (*)()>(&mXparser::enableUlpRounding)>::call);
    emscripten::function("api_C1_02637", &StaticCall<static_cast<void (*)()>(&mXparser::disableUlpRounding)>::call);
    emscripten::function("api_C1_02638", &StaticCall<static_cast<void (*)(bool)>(&mXparser::setUlpRounding)>::call);
    emscripten::function("api_C1_02639", &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfUlpRounding)>::call);
    emscripten::function("api_C1_02640",
                         &StaticCall<static_cast<void (*)()>(&mXparser::enableCanonicalRounding)>::call);
    emscripten::function("api_C1_02641",
                         &StaticCall<static_cast<void (*)()>(&mXparser::disableCanonicalRounding)>::call);
    emscripten::function("api_C1_02642",
                         &StaticCall<static_cast<void (*)(bool)>(&mXparser::setCanonicalRounding)>::call);
    emscripten::function("api_C1_02643",
                         &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfCanonicalRounding)>::call);
    emscripten::function("api_C1_02644",
                         &StaticCall<static_cast<void (*)()>(&mXparser::enableAlmostIntRounding)>::call);
    emscripten::function("api_C1_02645",
                         &StaticCall<static_cast<void (*)()>(&mXparser::disableAlmostIntRounding)>::call);
    emscripten::function("api_C1_02646",
                         &StaticCall<static_cast<void (*)(bool)>(&mXparser::setAlmostIntRounding)>::call);
    emscripten::function("api_C1_02647",
                         &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfAlmostIntRounding)>::call);
    emscripten::function("api_C1_02648", &StaticCall<static_cast<void (*)()>(&mXparser::enableSpecialCases)>::call);
    emscripten::function("api_C1_02649", &StaticCall<static_cast<void (*)()>(&mXparser::disableSpecialCases)>::call);
    emscripten::function("api_C1_02650", &StaticCall<static_cast<void (*)(bool)>(&mXparser::setSpecialCases)>::call);
    emscripten::function("api_C1_02651", &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfSpecialCases)>::call);
    emscripten::function("api_C1_02652",
                         &StaticCall<static_cast<void (*)(int)>(&mXparser::setMaxAllowedRecursionDepth)>::call);
    emscripten::function("api_C1_02653",
                         &StaticCall<static_cast<void (*)()>(&mXparser::setDefaultMaxAllowedRecursionDepth)>::call);
    emscripten::function("api_C1_02654",
                         &StaticCall<static_cast<int (*)()>(&mXparser::getMaxAllowedRecursionDepth)>::call);
    emscripten::function("api_C1_02655", &StaticCall<static_cast<void (*)()>(&mXparser::setRadiansMode)>::call);
    emscripten::function("api_C1_02656", &StaticCall<static_cast<void (*)()>(&mXparser::setDegreesMode)>::call);
    emscripten::function("api_C1_02657", &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfRadiansMode)>::call);
    emscripten::function("api_C1_02658", &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfDegreesMode)>::call);
    emscripten::function("api_C1_02659",
                         &StaticCall<static_cast<void (*)()>(&mXparser::enableImpliedMultiplicationMode)>::call);
    emscripten::function("api_C1_02660",
                         &StaticCall<static_cast<void (*)()>(&mXparser::disableImpliedMultiplicationMode)>::call);
    emscripten::function("api_C1_02661",
                         &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfImpliedMultiplicationMode)>::call);
    emscripten::function("api_C1_02662",
                         &StaticCall<static_cast<void (*)()>(&mXparser::enableUnicodeBuiltinKeyWordsMode)>::call);
    emscripten::function("api_C1_02663",
                         &StaticCall<static_cast<void (*)()>(&mXparser::disableUnicodeBuiltinKeyWordsMode)>::call);
    emscripten::function("api_C1_02664",
                         &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfUnicodeBuiltinKeyWordsMode)>::call);
    emscripten::function("api_C1_02665",
                         &StaticCall<static_cast<void (*)()>(&mXparser::enableAttemptToFixExpStrMode)>::call);
    emscripten::function("api_C1_02666",
                         &StaticCall<static_cast<void (*)()>(&mXparser::disableAttemptToFixExpStrMode)>::call);
    emscripten::function("api_C1_02667",
                         &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfAttemptToFixExpStrMode)>::call);
    emscripten::function("api_C1_02668",
                         &StaticCall<static_cast<void (*)()>(&mXparser::enableSelectBestMatchingLanguage)>::call);
    emscripten::function("api_C1_02669",
                         &StaticCall<static_cast<void (*)()>(&mXparser::disableSelectBestMatchingLanguage)>::call);
    emscripten::function("api_C1_02670",
                         &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfSelectBestMatchingLanguage)>::call);
    emscripten::function("api_C1_02671",
                         &StaticCall<static_cast<void (*)(const StringPtr &)>(&mXparser::changeLanguageTo)>::call);
    emscripten::function("api_C1_02672",
                         &StaticCall<static_cast<void (*)(const String &)>(&mXparser::changeLanguageTo)>::call);
    emscripten::function("api_C1_02674",
                         &StaticCall<static_cast<void (*)()>(&mXparser::changeLanguageToBestMatching)>::call);
    emscripten::function("api_C1_02675",
                         &StaticCall<static_cast<void (*)(Long)>(&mXparser::setToFractionInitSearchSize)>::call);
    emscripten::function("api_C1_02676",
                         &StaticCall<static_cast<Long (*)()>(&mXparser::getToFractionInitSearchSize)>::call);
    emscripten::function("api_C1_02678",
                         &StaticCall<static_cast<void (*)(const ListPtr<StringPtr> &)>(&
                             mXparser::removeBuiltinTokens)>::call);
    emscripten::function("api_C1_02681",
                         &StaticCall<static_cast<void (*)(const ListPtr<StringPtr> &)>(&
                             mXparser::unremoveBuiltinTokens)>::call);
    emscripten::function("api_C1_02683",
                         &StaticCall<static_cast<void (*)()>(&mXparser::unremoveAllBuiltinTokens)>::call);
    emscripten::function("api_C1_02684",
                         &StaticCall<static_cast<ArrayPtr<StringPtr> (*)()>(&
                             mXparser::getBuiltinTokensToRemove)>::call);
    emscripten::function("api_C1_02685",
                         &StaticCall<static_cast<void (*)(const StringPtr &, const StringPtr &)>(&
                             mXparser::modifyBuiltinToken)>::call);
    emscripten::function("api_C1_02686",
                         &StaticCall<static_cast<void (*)(const String &, const String &)>(&
                             mXparser::modifyBuiltinToken)>::call);
    emscripten::function("api_C1_02690",
                         &StaticCall<static_cast<void (*)(const StringPtr &, const StringPtr &, const StringPtr &)>(&
                             mXparser::modifyBuiltinToken)>::call);
    emscripten::function("api_C1_02691",
                         &StaticCall<static_cast<void (*)(const String &, const String &, const String &)>(&
                             mXparser::modifyBuiltinToken)>::call);
    emscripten::function("api_C1_02696",
                         &StaticCall<static_cast<void (*)(const ListPtr<StringPtr> &)>(&
                             mXparser::unmodifyBuiltinTokens)>::call);
    emscripten::function("api_C1_02698",
                         &StaticCall<static_cast<void (*)()>(&mXparser::unmodifyAllBuiltinTokens)>::call);
    emscripten::function("api_C1_02699",
                         &StaticCall<static_cast<ArrayPtr<StringPtr> (*)()>(&
                             mXparser::getBuiltinTokensToModify)>::call);
    emscripten::function("api_C1_02700",
                         &StaticCall<static_cast<void (*)()>(&mXparser::setToOverrideBuiltinTokens)>::call);
    emscripten::function("api_C1_02701",
                         &StaticCall<static_cast<void (*)()>(&mXparser::setNotToOverrideBuiltinTokens)>::call);
    emscripten::function("api_C1_02702",
                         &StaticCall<static_cast<bool (*)()>(&mXparser::checkIfsetToOverrideBuiltinTokens)>::call);
    emscripten::function("api_C1_02703", &StaticCall<static_cast<void (*)()>(&mXparser::setDefaultOptions)>::call);
    emscripten::function("api_C1_02704",
                         &StaticCall<static_cast<StringPtr (*)(int)>(&mXparser::getTokenTypeDescription)>::call);
    emscripten::function("api_C1_02705",
                         &StaticCall<static_cast<StringPtr (*)(int)>(&mXparser::numberToHexString)>::call);
    emscripten::function("api_C1_02706",
                         &StaticCall<static_cast<StringPtr (*)(Long)>(&mXparser::numberToHexString)>::call);
    emscripten::function("api_C1_02707",
                         &StaticCall<static_cast<StringPtr (*)(double)>(&mXparser::numberToHexString)>::call);
    emscripten::function("api_C1_02708",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &)>(&
                             mXparser::hexString2AsciiString)>::call);
    emscripten::function("api_C1_02709",
                         &StaticCall<static_cast<StringPtr (*)(int)>(&mXparser::numberToAsciiString)>::call);
    emscripten::function("api_C1_02710",
                         &StaticCall<static_cast<StringPtr (*)(Long)>(&mXparser::numberToAsciiString)>::call);
    emscripten::function("api_C1_02711",
                         &StaticCall<static_cast<StringPtr (*)(double)>(&mXparser::numberToAsciiString)>::call);
    emscripten::function("api_C1_02712",
                         &StaticCall<static_cast<double (*)(const StringPtr &, int)>(&
                             mXparser::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_02713",
                         &StaticCall<static_cast<double (*)(const StringPtr &)>(&mXparser::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_02715",
                         &StaticCall<static_cast<double (*)(int, const ListPtr<int> &)>(&
                             mXparser::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_02718",
                         &StaticCall<static_cast<double (*)(double, const ListPtr<double> &)>(&
                             mXparser::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_02720",
                         &StaticCall<static_cast<StringPtr (*)(double, int)>(&mXparser::convDecimal2OthBase)>::call);
    emscripten::function("api_C1_02721",
                         &StaticCall<static_cast<StringPtr (*)(double, int, int)>(&
                             mXparser::convDecimal2OthBase)>::call);
    emscripten::function("api_C1_02722",
                         &StaticCall<static_cast<ArrayPtr<double> (*)(double)>(&mXparser::toFraction)>::call);
    emscripten::function("api_C1_02723",
                         &StaticCall<static_cast<ArrayPtr<double> (*)(double)>(&mXparser::toMixedFraction)>::call);
    emscripten::function("api_C1_02724",
                         &StaticCall<static_cast<StringPtr (*)(const ArrayPtr<double> &)>(&
                             mXparser::fractionToString)>::call);
    emscripten::function("api_C1_02725",
                         &StaticCall<static_cast<StringPtr (*)(double)>(&mXparser::toFractionString)>::call);
    emscripten::function("api_C1_02726",
                         &StaticCall<static_cast<StringPtr (*)(double)>(&mXparser::toMixedFractionString)>::call);
    emscripten::function("api_C1_02727_Long",
                         &StaticCall<static_cast<void (*)(const Long &)>(&mXparser::consolePrint<Long>)>::call);
    emscripten::function("api_C1_02727_StringPtr",
                         &StaticCall<static_cast<void (*)(const StringPtr &)>(&mXparser::consolePrint<
                             StringPtr>)>::call);
    emscripten::function("api_C1_02727_bool",
                         &StaticCall<static_cast<void (*)(const bool &)>(&mXparser::consolePrint<bool>)>::call);
    emscripten::function("api_C1_02727_double",
                         &StaticCall<static_cast<void (*)(const double &)>(&mXparser::consolePrint<double>)>::call);
    emscripten::function("api_C1_02729_Long",
                         &StaticCall<static_cast<void (*)(const Long &)>(&mXparser::consolePrintln<Long>)>::call);
    emscripten::function("api_C1_02729_StringPtr",
                         &StaticCall<static_cast<void (*)(const StringPtr &)>(&mXparser::consolePrintln<
                             StringPtr>)>::call);
    emscripten::function("api_C1_02729_bool",
                         &StaticCall<static_cast<void (*)(const bool &)>(&mXparser::consolePrintln<bool>)>::call);
    emscripten::function("api_C1_02729_double",
                         &StaticCall<static_cast<void (*)(const double &)>(&mXparser::consolePrintln<double>)>::call);
    emscripten::function("api_C1_02731", &StaticCall<static_cast<void (*)()>(&mXparser::consolePrintln)>::call);
    emscripten::function("api_C1_02732",
                         &StaticCall<static_cast<void (*)(const ArrayPtr<StringPtr> &)>(&
                             mXparser::consolePrintln)>::call);
    emscripten::function("api_C1_02733",
                         &StaticCall<static_cast<void (*)(const ListPtr<StringPtr> &)>(&
                             mXparser::consolePrintln)>::call);
    emscripten::function("api_C1_02734",
                         &StaticCall<static_cast<void (*)(const StringPtr &)>(&mXparser::consolePrintSettings)>::call);
    emscripten::function("api_C1_02735",
                         &StaticCall<static_cast<void (*)(const String &)>(&mXparser::consolePrintSettings)>::call);
    emscripten::function("api_C1_02739", &StaticCall<static_cast<void (*)()>(&mXparser::consolePrintSettings)>::call);
    emscripten::function("api_C1_02740", &StaticCall<static_cast<void (*)()>(&mXparser::resetConsoleOutput)>::call);
    emscripten::function("api_C1_02741",
                         &StaticCall<static_cast<void (*)()>(&mXparser::setDefaultConsolePrefix)>::call);
    emscripten::function("api_C1_02742",
                         &StaticCall<static_cast<void (*)()>(&mXparser::setDefaultConsoleOutputPrefix)>::call);
    emscripten::function("api_C1_02743",
                         &StaticCall<static_cast<void (*)(const StringPtr &)>(&mXparser::setConsolePrefix)>::call);
    emscripten::function("api_C1_02744",
                         &StaticCall<static_cast<void (*)(const String &)>(&mXparser::setConsolePrefix)>::call);
    emscripten::function("api_C1_02748",
                         &StaticCall<static_cast<void (*)(const StringPtr &)>(&
                             mXparser::setConsoleOutputPrefix)>::call);
    emscripten::function("api_C1_02749",
                         &StaticCall<static_cast<void (*)(const String &)>(&mXparser::setConsoleOutputPrefix)>::call);
    emscripten::function("api_C1_02753", &StaticCall<static_cast<StringPtr (*)()>(&mXparser::getConsoleOutput)>::call);
    emscripten::function("api_C1_02754", &StaticCall<static_cast<StringPtr (*)()>(&mXparser::getHelp)>::call);
    emscripten::function("api_C1_02755",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &)>(&mXparser::getHelp)>::call);
    emscripten::function("api_C1_02756",
                         &StaticCall<static_cast<StringPtr (*)(const String &)>(&mXparser::getHelp)>::call);
    emscripten::function("api_C1_02760",
                         &StaticCall<static_cast<StringPtr (*)(bool, bool, const StringPtr &)>(&
                             mXparser::getHelp)>::call);
    emscripten::function("api_C1_02761",
                         &StaticCall<static_cast<StringPtr (*)(bool, bool, const String &)>(&mXparser::getHelp)>::call);
    emscripten::function("api_C1_02765",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &, bool, bool, const StringPtr &)>(&
                             mXparser::getHelp)>::call);
    emscripten::function("api_C1_02766",
                         &StaticCall<static_cast<StringPtr (*)(const String &, bool, bool, const String &)>(&
                             mXparser::getHelp)>::call);
    emscripten::function("api_C1_02770", &StaticCall<static_cast<StringPtr (*)()>(&mXparser::getHelpAsCsv)>::call);
    emscripten::function("api_C1_02771",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &)>(&mXparser::getHelpAsCsv)>::call);
    emscripten::function("api_C1_02772",
                         &StaticCall<static_cast<StringPtr (*)(const String &)>(&mXparser::getHelpAsCsv)>::call);
    emscripten::function("api_C1_02776",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &, const StringPtr &, bool)>(&
                             mXparser::getHelpAsCsv)>::call);
    emscripten::function("api_C1_02777",
                         &StaticCall<static_cast<StringPtr (*)(const String &, const String &, bool)>(&
                             mXparser::getHelpAsCsv)>::call);
    emscripten::function("api_C1_02781",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &, const StringPtr &, const StringPtr &,
                                                               bool)>(&mXparser::getHelpAsCsv)>::call);
    emscripten::function("api_C1_02782",
                         &StaticCall<static_cast<StringPtr (*)(const String &, const String &, const String &, bool)>(&
                             mXparser::getHelpAsCsv)>::call);
    emscripten::function("api_C1_02786",
                         &StaticCall<static_cast<StringPtr (*)()>(&mXparser::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_02787",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &)>(&
                             mXparser::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_02788",
                         &StaticCall<static_cast<StringPtr (*)(const String &)>(&mXparser::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_02792",
                         &StaticCall<static_cast<StringPtr (*)(bool, bool, bool, const StringPtr &, const StringPtr &)>(
                             &mXparser::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_02793",
                         &StaticCall<static_cast<StringPtr (*)(bool, bool, bool, const String &, const String &)>(&
                             mXparser::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_02797",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &, bool, bool, bool, const StringPtr &,
                                                               const StringPtr &)>(&
                             mXparser::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_02798",
                         &StaticCall<static_cast<StringPtr (*)(const String &, bool, bool, bool, const String &,
                                                               const String &)>(&mXparser::getHelpAsHtmlTable)>::call);
    emscripten::function("api_C1_02802",
                         &StaticCall<static_cast<StringPtr (*)()>(&mXparser::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_02803",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &)>(&
                             mXparser::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_02804",
                         &StaticCall<static_cast<StringPtr (*)(const String &)>(&
                             mXparser::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_02808",
                         &StaticCall<static_cast<StringPtr (*)(bool, bool, const StringPtr &)>(&
                             mXparser::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_02809",
                         &StaticCall<static_cast<StringPtr (*)(bool, bool, const String &)>(&
                             mXparser::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_02813",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &, bool, bool, const StringPtr &)>(&
                             mXparser::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_02814",
                         &StaticCall<static_cast<StringPtr (*)(const String &, bool, bool, const String &)>(&
                             mXparser::getHelpAsMarkdownTable)>::call);
    emscripten::function("api_C1_02818", &StaticCall<static_cast<StringPtr (*)()>(&mXparser::getHelpAsJson)>::call);
    emscripten::function("api_C1_02819",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &)>(&mXparser::getHelpAsJson)>::call);
    emscripten::function("api_C1_02820",
                         &StaticCall<static_cast<StringPtr (*)(const String &)>(&mXparser::getHelpAsJson)>::call);
    emscripten::function("api_C1_02824",
                         &StaticCall<static_cast<StringPtr (*)(bool, const StringPtr &)>(&
                             mXparser::getHelpAsJson)>::call);
    emscripten::function("api_C1_02825",
                         &StaticCall<static_cast<StringPtr (*)(bool, const String &)>(&mXparser::getHelpAsJson)>::call);
    emscripten::function("api_C1_02829",
                         &StaticCall<static_cast<StringPtr (*)(const StringPtr &, bool, const StringPtr &)>(&
                             mXparser::getHelpAsJson)>::call);
    emscripten::function("api_C1_02830",
                         &StaticCall<static_cast<StringPtr (*)(const String &, bool, const String &)>(&
                             mXparser::getHelpAsJson)>::call);
    emscripten::function("api_C1_02834", &StaticCall<static_cast<void (*)()>(&mXparser::consolePrintHelp)>::call);
    emscripten::function("api_C1_02835",
                         &StaticCall<static_cast<void (*)(const StringPtr &)>(&mXparser::consolePrintHelp)>::call);
    emscripten::function("api_C1_02836",
                         &StaticCall<static_cast<void (*)(const std::string &)>(&mXparser::consolePrintHelp)>::call);
    emscripten::function("api_C1_02840",
                         &StaticCall<static_cast<ListPtr<KeyWordPtr> (*)()>(&mXparser::getKeyWords)>::call);
    emscripten::function("api_C1_02841",
                         &StaticCall<static_cast<ListPtr<KeyWordPtr> (*)(const StringPtr &)>(&
                             mXparser::getKeyWords)>::call);
    emscripten::function("api_C1_02842",
                         &StaticCall<static_cast<ListPtr<KeyWordPtr> (*)(const String &)>(&
                             mXparser::getKeyWords)>::call);
    emscripten::function("api_C1_02846",
                         &StaticCall<static_cast<bool (*)(const StringPtr &, const StringPtr &)>(&
                             mXparser::regexMatch)>::call);
    emscripten::function("api_C1_02847",
                         &StaticCall<static_cast<bool (*)(const String &, const String &)>(&
                             mXparser::regexMatch)>::call);
    emscripten::function("api_C1_02851",
                         &StaticCall<static_cast<void (*)(const ListPtr<TokenPtr> &)>(&
                             mXparser::consolePrintTokens)>::call);
    emscripten::function("api_C1_02852",
                         &StaticCall<static_cast<void (*)(const ListPtr<TokenPtr> &)>(&mXparser::consolePrint)>::call);
    emscripten::function("api_C1_02853",
                         &StaticCall<static_cast<void (*)(const ListPtr<TokenPtr> &)>(&
                             mXparser::consolePrintln)>::call);
    emscripten::function("api_C1_02854_get", &StaticFieldAccess<&mXparser::LICENSE>::get);
    emscripten::function("api_C1_02855", &StaticCall<static_cast<void (*)()>(&mXparser::consolePrintLicense)>::call);
    emscripten::function("api_C1_02856", &StaticCall<static_cast<StringPtr (*)()>(&mXparser::getLicense)>::call);
    emscripten::function("api_C1_02857", &StaticCall<static_cast<void (*)(int)>(&mXparser::wait)>::call);
    emscripten::function("api_C1_02858",
                         &StaticCall<static_cast<void (*)()>(&mXparser::cancelCurrentCalculation)>::call);
    emscripten::function("api_C1_02859",
                         &StaticCall<static_cast<void (*)()>(&mXparser::resetCancelCurrentCalculationFlag)>::call);
    emscripten::function("api_C1_02860",
                         &StaticCall<static_cast<bool (*)()>(&mXparser::isCurrentCalculationCancelled)>::call);
    emscripten::function("api_C1_02861_get", &StaticFieldAccess<&mXparser::NAMEv10>::get);
    emscripten::function("api_C1_02862_get", &StaticFieldAccess<&mXparser::NAMEv20>::get);
    emscripten::function("api_C1_02863_get", &StaticFieldAccess<&mXparser::NAMEv23>::get);
    emscripten::function("api_C1_02864_get", &StaticFieldAccess<&mXparser::NAMEv24>::get);
    emscripten::function("api_C1_02865_get", &StaticFieldAccess<&mXparser::NAMEv30>::get);
    emscripten::function("api_C1_02866_get", &StaticFieldAccess<&mXparser::NAMEv40>::get);
    emscripten::function("api_C1_02867_get", &StaticFieldAccess<&mXparser::NAMEv41>::get);
    emscripten::function("api_C1_02868_get", &StaticFieldAccess<&mXparser::NAMEv42>::get);
    emscripten::function("api_C1_02869_get", &StaticFieldAccess<&mXparser::NAMEv43>::get);
    emscripten::function("api_C1_02870_get", &StaticFieldAccess<&mXparser::NAMEv44>::get);
    emscripten::function("api_C1_02871_get", &StaticFieldAccess<&mXparser::NAMEv50>::get);
    emscripten::function("api_C1_02872_get", &StaticFieldAccess<&mXparser::NAMEv51>::get);
    emscripten::function("api_C1_02873_get", &StaticFieldAccess<&mXparser::NAMEv52>::get);
    emscripten::function("api_C1_02874_get", &StaticFieldAccess<&mXparser::NAMEv60>::get);
    emscripten::function("api_C1_02875_get", &StaticFieldAccess<&mXparser::NAMEv61>::get);
    emscripten::function("api_C1_02885_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::LIGHT_YEAR>::get);
    emscripten::function("api_C1_02886_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::ASTRONOMICAL_UNIT>::get);
    emscripten::function("api_C1_02887_get", &StaticFieldAccess<&mathcollection::AstronomicalConstants::PARSEC>::get);
    emscripten::function("api_C1_02888_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::KILOPARSEC>::get);
    emscripten::function("api_C1_02889_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::EARTH_RADIUS_EQUATORIAL>::get);
    emscripten::function("api_C1_02890_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::EARTH_RADIUS_POLAR>::get);
    emscripten::function("api_C1_02891_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::EARTH_RADIUS_MEAN>::get);
    emscripten::function("api_C1_02892_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::EARTH_MASS>::get);
    emscripten::function("api_C1_02893_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::EARTH_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_02894_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::MOON_RADIUS_MEAN>::get);
    emscripten::function("api_C1_02895_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::MOON_MASS>::get);
    emscripten::function("api_C1_02896_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::MOON_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_02897_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::SOLAR_RADIUS>::get);
    emscripten::function("api_C1_02898_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::SOLAR_MASS>::get);
    emscripten::function("api_C1_02899_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::MERCURY_RADIUS_MEAN>::get);
    emscripten::function("api_C1_02900_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::MERCURY_MASS>::get);
    emscripten::function("api_C1_02901_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::MERCURY_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_02902_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::VENUS_RADIUS_MEAN>::get);
    emscripten::function("api_C1_02903_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::VENUS_MASS>::get);
    emscripten::function("api_C1_02904_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::VENUS_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_02905_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::MARS_RADIUS_MEAN>::get);
    emscripten::function("api_C1_02906_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::MARS_MASS>::get);
    emscripten::function("api_C1_02907_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::MARS_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_02908_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::JUPITER_RADIUS_MEAN>::get);
    emscripten::function("api_C1_02909_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::JUPITER_MASS>::get);
    emscripten::function("api_C1_02910_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::JUPITER_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_02911_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::SATURN_RADIUS_MEAN>::get);
    emscripten::function("api_C1_02912_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::SATURN_MASS>::get);
    emscripten::function("api_C1_02913_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::SATURN_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_02914_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::URANUS_RADIUS_MEAN>::get);
    emscripten::function("api_C1_02915_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::URANUS_MASS>::get);
    emscripten::function("api_C1_02916_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::URANUS_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_02917_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::NEPTUNE_RADIUS_MEAN>::get);
    emscripten::function("api_C1_02918_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::NEPTUNE_MASS>::get);
    emscripten::function("api_C1_02919_get",
                         &StaticFieldAccess<&mathcollection::AstronomicalConstants::NEPTUNE_SEMI_MAJOR_AXIS>::get);
    emscripten::function("api_C1_02922_get",
                         &StaticFieldAccess<&mathcollection::BinaryRelations::DEFAULT_COMPARISON_EPSILON>::get);
    emscripten::function("api_C1_02923",
                         &StaticCall<static_cast<void (*)()>(&
                             mathcollection::BinaryRelations::setExactComparison)>::call);
    emscripten::function("api_C1_02924",
                         &StaticCall<static_cast<void (*)()>(&
                             mathcollection::BinaryRelations::setEpsilonComparison)>::call);
    emscripten::function("api_C1_02925",
                         &StaticCall<static_cast<void (*)(double)>(&
                             mathcollection::BinaryRelations::setEpsilon)>::call);
    emscripten::function("api_C1_02926",
                         &StaticCall<static_cast<void (*)()>(&
                             mathcollection::BinaryRelations::setDefaultEpsilon)>::call);
    emscripten::function("api_C1_02927",
                         &StaticCall<static_cast<double (*)()>(&mathcollection::BinaryRelations::getEpsilon)>::call);
    emscripten::function("api_C1_02928",
                         &StaticCall<static_cast<bool (*)()>(&
                             mathcollection::BinaryRelations::checkIfEpsilonMode)>::call);
    emscripten::function("api_C1_02929",
                         &StaticCall<static_cast<bool (*)()>(&
                             mathcollection::BinaryRelations::checkIfExactMode)>::call);
    emscripten::function("api_C1_02930",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BinaryRelations::eq)>::call);
    emscripten::function("api_C1_02931",
                         &StaticCall<static_cast<bool (*)(double, double)>(&
                             mathcollection::BinaryRelations::isEqualOrAlmost)>::call);
    emscripten::function("api_C1_02932",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BinaryRelations::neq)>::call);
    emscripten::function("api_C1_02933",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BinaryRelations::lt)>::call);
    emscripten::function("api_C1_02934",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BinaryRelations::gt)>::call);
    emscripten::function("api_C1_02935",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BinaryRelations::leq)>::call);
    emscripten::function("api_C1_02936",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BinaryRelations::geq)>::call);
    emscripten::function("api_C1_02939_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::FALSE>::get);
    emscripten::function("api_C1_02940_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::TRUE>::get);
    emscripten::function("api_C1_02941_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::NULLVAL>::get);
    emscripten::function("api_C1_02942_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::F>::get);
    emscripten::function("api_C1_02943_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::T>::get);
    emscripten::function("api_C1_02944_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::N>::get);
    emscripten::function("api_C1_02957",
                         &StaticCall<static_cast<int (*)(double)>(&
                             mathcollection::BooleanAlgebra::double2IntBoolean)>::call);
    emscripten::function("api_C1_02958",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BooleanAlgebra::and_)>::call);
    emscripten::function("api_C1_02959",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BooleanAlgebra::or_)>::call);
    emscripten::function("api_C1_02960",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BooleanAlgebra::xor_)>::call);
    emscripten::function("api_C1_02961",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BooleanAlgebra::nand)>::call);
    emscripten::function("api_C1_02962",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BooleanAlgebra::nor)>::call);
    emscripten::function("api_C1_02963",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BooleanAlgebra::xnor)>::call);
    emscripten::function("api_C1_02964",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BooleanAlgebra::imp)>::call);
    emscripten::function("api_C1_02965",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BooleanAlgebra::eqv)>::call);
    emscripten::function("api_C1_02966",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::BooleanAlgebra::not_)>::call);
    emscripten::function("api_C1_02967",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BooleanAlgebra::cimp)>::call);
    emscripten::function("api_C1_02968",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BooleanAlgebra::nimp)>::call);
    emscripten::function("api_C1_02969",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::BooleanAlgebra::cnimp)>::call);
    emscripten::function("api_C1_02970",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::BooleanAlgebra::andVariadic)>::call);
    emscripten::function("api_C1_02971",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::BooleanAlgebra::orVariadic)>::call);
    emscripten::function("api_C1_02972",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::BooleanAlgebra::xorVariadic)>::call);
    emscripten::function("api_C1_02975_get", &StaticFieldAccess<&mathcollection::Calculus::LEFT_DERIVATIVE>::get);
    emscripten::function("api_C1_02976_get", &StaticFieldAccess<&mathcollection::Calculus::RIGHT_DERIVATIVE>::get);
    emscripten::function("api_C1_02977_get", &StaticFieldAccess<&mathcollection::Calculus::GENERAL_DERIVATIVE>::get);
    emscripten::function("api_C1_02978",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double, double,
                                                            double, int)>(&
                             mathcollection::Calculus::integralTrapezoid)>::call);
    emscripten::function("api_C1_02979",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double, int,
                                                            double,
                                                            int)>(&mathcollection::Calculus::derivative)>::call);
    emscripten::function("api_C1_02980",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, double, const ArgumentPtr &, double,
                                                            int, double,
                                                            int)>(&mathcollection::Calculus::derivativeNth)>::call);
    emscripten::function("api_C1_02981",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double)>(&
                             mathcollection::Calculus::forwardDifference)>::call);
    emscripten::function("api_C1_02982",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &)>(&
                             mathcollection::Calculus::forwardDifference)>::call);
    emscripten::function("api_C1_02983",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double)>(&
                             mathcollection::Calculus::backwardDifference)>::call);
    emscripten::function("api_C1_02984",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &)>(&
                             mathcollection::Calculus::backwardDifference)>::call);
    emscripten::function("api_C1_02985",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, double, const ArgumentPtr &, double)>
                             (&mathcollection::Calculus::forwardDifference)>::call);
    emscripten::function("api_C1_02986",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, double, const ArgumentPtr &)>(&
                             mathcollection::Calculus::forwardDifference)>::call);
    emscripten::function("api_C1_02987",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, double, const ArgumentPtr &, double)>
                             (&mathcollection::Calculus::backwardDifference)>::call);
    emscripten::function("api_C1_02988",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, double, const ArgumentPtr &)>(&
                             mathcollection::Calculus::backwardDifference)>::call);
    emscripten::function("api_C1_02989",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double, double,
                                                            double, double)>(&
                             mathcollection::Calculus::solveBrent)>::call);
    emscripten::function("api_C1_02999",
                         &MemberCall<static_cast<Long (mathcollection::IRandom::*)(Long)>(&
                             mathcollection::IRandom::nextInt)>::call);
    emscripten::function("api_C1_03000",
                         &MemberCall<static_cast<Long (mathcollection::IRandom::*)()>(&
                             mathcollection::IRandom::nextInt)>::call);
    emscripten::function("api_C1_03001",
                         &MemberCall<static_cast<double (mathcollection::IRandom::*)()>(&
                             mathcollection::IRandom::nextDouble)>::call);
    emscripten::function("api_C1_03002",
                         &MemberCall<static_cast<void (mathcollection::IRandom::*)(unsigned int)>(&
                             mathcollection::IRandom::setSeed)>::call);
    emscripten::function("api_C1_03005_get", &StaticFieldAccess<&mathcollection::MathConstants::PI>::get);
    emscripten::function("api_C1_03006_get", &StaticFieldAccess<&mathcollection::MathConstants::PIBY2>::get);
    emscripten::function("api_C1_03007_get", &StaticFieldAccess<&mathcollection::MathConstants::PIINV>::get);
    emscripten::function("api_C1_03008_get", &StaticFieldAccess<&mathcollection::MathConstants::E>::get);
    emscripten::function("api_C1_03009_get", &StaticFieldAccess<&mathcollection::MathConstants::EULER_MASCHERONI>::get);
    emscripten::function("api_C1_03010_get", &StaticFieldAccess<&mathcollection::MathConstants::GOLDEN_RATIO>::get);
    emscripten::function("api_C1_03011_get", &StaticFieldAccess<&mathcollection::MathConstants::PLASTIC>::get);
    emscripten::function("api_C1_03012_get", &StaticFieldAccess<&mathcollection::MathConstants::EMBREE_TREFETHEN>::get);
    emscripten::function("api_C1_03013_get", &StaticFieldAccess<&mathcollection::MathConstants::FEIGENBAUM_DELTA>::get);
    emscripten::function("api_C1_03014_get", &StaticFieldAccess<&mathcollection::MathConstants::FEIGENBAUM_ALFA>::get);
    emscripten::function("api_C1_03015_get", &StaticFieldAccess<&mathcollection::MathConstants::TWIN_PRIME>::get);
    emscripten::function("api_C1_03016_get", &StaticFieldAccess<&mathcollection::MathConstants::MEISSEL_MERTEENS>::get);
    emscripten::function("api_C1_03017_get", &StaticFieldAccess<&mathcollection::MathConstants::BRAUN_TWIN_PRIME>::get);
    emscripten::function("api_C1_03018_get",
                         &StaticFieldAccess<&mathcollection::MathConstants::BRAUN_PRIME_QUADR>::get);
    emscripten::function("api_C1_03019_get", &StaticFieldAccess<&mathcollection::MathConstants::BRUIJN_NEWMAN>::get);
    emscripten::function("api_C1_03020_get", &StaticFieldAccess<&mathcollection::MathConstants::CATALAN>::get);
    emscripten::function("api_C1_03021_get", &StaticFieldAccess<&mathcollection::MathConstants::LANDAU_RAMANUJAN>::get);
    emscripten::function("api_C1_03022_get", &StaticFieldAccess<&mathcollection::MathConstants::VISWANATH>::get);
    emscripten::function("api_C1_03023_get", &StaticFieldAccess<&mathcollection::MathConstants::LEGENDRE>::get);
    emscripten::function("api_C1_03024_get",
                         &StaticFieldAccess<&mathcollection::MathConstants::RAMANUJAN_SOLDNER>::get);
    emscripten::function("api_C1_03025_get", &StaticFieldAccess<&mathcollection::MathConstants::ERDOS_BORWEIN>::get);
    emscripten::function("api_C1_03026_get", &StaticFieldAccess<&mathcollection::MathConstants::BERNSTEIN>::get);
    emscripten::function("api_C1_03027_get",
                         &StaticFieldAccess<&mathcollection::MathConstants::GAUSS_KUZMIN_WIRSING>::get);
    emscripten::function("api_C1_03028_get",
                         &StaticFieldAccess<&mathcollection::MathConstants::HAFNER_SARNAK_MCCURLEY>::get);
    emscripten::function("api_C1_03029_get", &StaticFieldAccess<&mathcollection::MathConstants::GOLOMB_DICKMAN>::get);
    emscripten::function("api_C1_03030_get", &StaticFieldAccess<&mathcollection::MathConstants::CAHEN>::get);
    emscripten::function("api_C1_03031_get", &StaticFieldAccess<&mathcollection::MathConstants::LAPLACE_LIMIT>::get);
    emscripten::function("api_C1_03032_get", &StaticFieldAccess<&mathcollection::MathConstants::ALLADI_GRINSTEAD>::get);
    emscripten::function("api_C1_03033_get", &StaticFieldAccess<&mathcollection::MathConstants::LENGYEL>::get);
    emscripten::function("api_C1_03034_get", &StaticFieldAccess<&mathcollection::MathConstants::LEVY>::get);
    emscripten::function("api_C1_03035_get", &StaticFieldAccess<&mathcollection::MathConstants::APERY>::get);
    emscripten::function("api_C1_03036_get", &StaticFieldAccess<&mathcollection::MathConstants::MILLS>::get);
    emscripten::function("api_C1_03037_get", &StaticFieldAccess<&mathcollection::MathConstants::BACKHOUSE>::get);
    emscripten::function("api_C1_03038_get", &StaticFieldAccess<&mathcollection::MathConstants::PORTER>::get);
    emscripten::function("api_C1_03039_get", &StaticFieldAccess<&mathcollection::MathConstants::LIEB_QUARE_ICE>::get);
    emscripten::function("api_C1_03040_get", &StaticFieldAccess<&mathcollection::MathConstants::NIVEN>::get);
    emscripten::function("api_C1_03041_get", &StaticFieldAccess<&mathcollection::MathConstants::SIERPINSKI>::get);
    emscripten::function("api_C1_03042_get", &StaticFieldAccess<&mathcollection::MathConstants::KHINCHIN>::get);
    emscripten::function("api_C1_03043_get", &StaticFieldAccess<&mathcollection::MathConstants::FRANSEN_ROBINSON>::get);
    emscripten::function("api_C1_03044_get", &StaticFieldAccess<&mathcollection::MathConstants::LANDAU>::get);
    emscripten::function("api_C1_03045_get", &StaticFieldAccess<&mathcollection::MathConstants::PARABOLIC>::get);
    emscripten::function("api_C1_03046_get", &StaticFieldAccess<&mathcollection::MathConstants::OMEGA>::get);
    emscripten::function("api_C1_03047_get", &StaticFieldAccess<&mathcollection::MathConstants::MRB>::get);
    emscripten::function("api_C1_03048_get", &StaticFieldAccess<&mathcollection::MathConstants::LI2>::get);
    emscripten::function("api_C1_03049_get", &StaticFieldAccess<&mathcollection::MathConstants::GOMPERTZ>::get);
    emscripten::function("api_C1_03050_get", &StaticFieldAccess<&mathcollection::MathConstants::SQRT2>::get);
    emscripten::function("api_C1_03051_get", &StaticFieldAccess<&mathcollection::MathConstants::SQRTPi>::get);
    emscripten::function("api_C1_03052_get", &StaticFieldAccess<&mathcollection::MathConstants::SQRT2Pi>::get);
    emscripten::function("api_C1_03053_get", &StaticFieldAccess<&mathcollection::MathConstants::LNPI>::get);
    emscripten::function("api_C1_03054_get", &StaticFieldAccess<&mathcollection::MathConstants::EXP_MINUS_E>::get);
    emscripten::function("api_C1_03055_get", &StaticFieldAccess<&mathcollection::MathConstants::EXP_1_OVER_E>::get);
    emscripten::function("api_C1_03056_get", &StaticFieldAccess<&mathcollection::MathConstants::EXP_MINUS_1>::get);
    emscripten::function("api_C1_03057_get", &StaticFieldAccess<&mathcollection::MathConstants::LN_SQRT2>::get);
    emscripten::function("api_C1_03058_get", &StaticFieldAccess<&mathcollection::MathConstants::SQRT2BY2>::get);
    emscripten::function("api_C1_03059_get", &StaticFieldAccess<&mathcollection::MathConstants::SQRT3>::get);
    emscripten::function("api_C1_03060_get", &StaticFieldAccess<&mathcollection::MathConstants::SQRT3BY2>::get);
    emscripten::function("api_C1_03061_get", &StaticFieldAccess<&mathcollection::MathConstants::D2BYSQRT3>::get);
    emscripten::function("api_C1_03062_get", &StaticFieldAccess<&mathcollection::MathConstants::SQRT3BY3>::get);
    emscripten::function("api_C1_03063_get", &StaticFieldAccess<&mathcollection::MathConstants::SQRT5>::get);
    emscripten::function("api_C1_03064_get", &StaticFieldAccess<&mathcollection::MathConstants::NOT_A_NUMBER>::get);
    emscripten::function("api_C1_03065",
                         &StaticCall<static_cast<double (*)(int)>(&
                             mathcollection::MathConstants::getConstantValue)>::call);
    emscripten::function("api_C1_03068",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::plus)>::call);
    emscripten::function("api_C1_03069",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::minus)>::call);
    emscripten::function("api_C1_03070",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::multiply)>::call);
    emscripten::function("api_C1_03071",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::div)>::call);
    emscripten::function("api_C1_03072",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::divQuotient)>::call);
    emscripten::function("api_C1_03073",
                         &StaticCall<static_cast<double (*)(int)>(&mathcollection::MathFunctions::bellNumber)>::call);
    emscripten::function("api_C1_03074",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::MathFunctions::bellNumber)>::call);
    emscripten::function("api_C1_03075",
                         &StaticCall<static_cast<double (*)(int, int)>(&
                             mathcollection::MathFunctions::eulerNumber)>::call);
    emscripten::function("api_C1_03076",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::eulerNumber)>::call);
    emscripten::function("api_C1_03077",
                         &StaticCall<static_cast<double (*)(int)>(&mathcollection::MathFunctions::factorial)>::call);
    emscripten::function("api_C1_03078",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::factorial)>::call);
    emscripten::function("api_C1_03079",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::factorialFalling)>::call);
    emscripten::function("api_C1_03080",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::factorialRising)>::call);
    emscripten::function("api_C1_03081",
                         &StaticCall<static_cast<double (*)(double, Long)>(&
                             mathcollection::MathFunctions::binomCoeff)>::call);
    emscripten::function("api_C1_03082",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::binomCoeff)>::call);
    emscripten::function("api_C1_03083",
                         &StaticCall<static_cast<double (*)(double, Long)>(&
                             mathcollection::MathFunctions::numberOfPermutations)>::call);
    emscripten::function("api_C1_03084",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::numberOfPermutations)>::call);
    emscripten::function("api_C1_03085",
                         &StaticCall<static_cast<double (*)(int, int)>(&
                             mathcollection::MathFunctions::bernoulliNumber)>::call);
    emscripten::function("api_C1_03086",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::bernoulliNumber)>::call);
    emscripten::function("api_C1_03087",
                         &StaticCall<static_cast<double (*)(int, int)>(&
                             mathcollection::MathFunctions::Stirling1Number)>::call);
    emscripten::function("api_C1_03088",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::Stirling1Number)>::call);
    emscripten::function("api_C1_03089",
                         &StaticCall<static_cast<double (*)(int, int)>(&
                             mathcollection::MathFunctions::Stirling2Number)>::call);
    emscripten::function("api_C1_03090",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::Stirling2Number)>::call);
    emscripten::function("api_C1_03091",
                         &StaticCall<static_cast<double (*)(int, int)>(&
                             mathcollection::MathFunctions::worpitzkyNumber)>::call);
    emscripten::function("api_C1_03092",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::worpitzkyNumber)>::call);
    emscripten::function("api_C1_03093",
                         &StaticCall<static_cast<double (*)(int)>(&
                             mathcollection::MathFunctions::harmonicNumber)>::call);
    emscripten::function("api_C1_03094",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::MathFunctions::harmonicNumber)>::call);
    emscripten::function("api_C1_03095",
                         &StaticCall<static_cast<double (*)(double, int)>(&
                             mathcollection::MathFunctions::harmonicNumber)>::call);
    emscripten::function("api_C1_03096",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::harmonicNumber)>::call);
    emscripten::function("api_C1_03097",
                         &StaticCall<static_cast<double (*)(int)>(&
                             mathcollection::MathFunctions::catalanNumber)>::call);
    emscripten::function("api_C1_03098",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::MathFunctions::catalanNumber)>::call);
    emscripten::function("api_C1_03099",
                         &StaticCall<static_cast<double (*)(int)>(&
                             mathcollection::MathFunctions::fibonacciNumber)>::call);
    emscripten::function("api_C1_03100",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::MathFunctions::fibonacciNumber)>::call);
    emscripten::function("api_C1_03101",
                         &StaticCall<static_cast<double (*)(int)>(&mathcollection::MathFunctions::lucasNumber)>::call);
    emscripten::function("api_C1_03102",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::MathFunctions::lucasNumber)>::call);
    emscripten::function("api_C1_03103",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::kroneckerDelta)>::call);
    emscripten::function("api_C1_03104",
                         &StaticCall<static_cast<double (*)(int, int)>(&
                             mathcollection::MathFunctions::kroneckerDelta)>::call);
    emscripten::function("api_C1_03105",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::MathFunctions::continuedFraction)>::call);
    emscripten::function("api_C1_03106",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::MathFunctions::continuedPolynomial)>::call);
    emscripten::function("api_C1_03107",
                         &StaticCall<static_cast<double (*)(int, double)>(&
                             mathcollection::MathFunctions::eulerPolynomial)>::call);
    emscripten::function("api_C1_03108",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::eulerPolynomial)>::call);
    emscripten::function("api_C1_03109",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::MathFunctions::chi)>::call);
    emscripten::function("api_C1_03110",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::MathFunctions::chi_LR)>::call);
    emscripten::function("api_C1_03111",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::MathFunctions::chi_L)>::call);
    emscripten::function("api_C1_03112",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::MathFunctions::chi_R)>::call);
    emscripten::function("api_C1_03113",
                         &StaticCall<static_cast<bool (*)(double)>(&mathcollection::MathFunctions::isAlmostInt)>::call);
    emscripten::function("api_C1_03114",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::power)>::call);
    emscripten::function("api_C1_03115",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::root)>::call);
    emscripten::function("api_C1_03116",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::tetration)>::call);
    emscripten::function("api_C1_03117",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::mod)>::call);
    emscripten::function("api_C1_03118",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::sin)>::call);
    emscripten::function("api_C1_03119",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::cos)>::call);
    emscripten::function("api_C1_03120",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::tan)>::call);
    emscripten::function("api_C1_03121",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::ctan)>::call);
    emscripten::function("api_C1_03122",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::sec)>::call);
    emscripten::function("api_C1_03123",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::cosec)>::call);
    emscripten::function("api_C1_03124",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::asin)>::call);
    emscripten::function("api_C1_03125",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::acos)>::call);
    emscripten::function("api_C1_03126",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::atan)>::call);
    emscripten::function("api_C1_03127",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::actan)>::call);
    emscripten::function("api_C1_03128",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::asec)>::call);
    emscripten::function("api_C1_03129",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::acosec)>::call);
    emscripten::function("api_C1_03130",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::ln)>::call);
    emscripten::function("api_C1_03131",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::log2)>::call);
    emscripten::function("api_C1_03132",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::log10)>::call);
    emscripten::function("api_C1_03133",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::rad)>::call);
    emscripten::function("api_C1_03134",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::exp)>::call);
    emscripten::function("api_C1_03135",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::sqrt)>::call);
    emscripten::function("api_C1_03136",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::sinh)>::call);
    emscripten::function("api_C1_03137",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::cosh)>::call);
    emscripten::function("api_C1_03138",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::tanh)>::call);
    emscripten::function("api_C1_03139",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::coth)>::call);
    emscripten::function("api_C1_03140",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::sech)>::call);
    emscripten::function("api_C1_03141",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::csch)>::call);
    emscripten::function("api_C1_03142",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::deg)>::call);
    emscripten::function("api_C1_03143",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::abs)>::call);
    emscripten::function("api_C1_03144",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::sgn)>::call);
    emscripten::function("api_C1_03145",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::floor)>::call);
    emscripten::function("api_C1_03146",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::ceil)>::call);
    emscripten::function("api_C1_03147",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::arsinh)>::call);
    emscripten::function("api_C1_03148",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::arcosh)>::call);
    emscripten::function("api_C1_03149",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::artanh)>::call);
    emscripten::function("api_C1_03150",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::arcoth)>::call);
    emscripten::function("api_C1_03151",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::arsech)>::call);
    emscripten::function("api_C1_03152",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::arcsch)>::call);
    emscripten::function("api_C1_03153",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::sa)>::call);
    emscripten::function("api_C1_03154",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::sinc)>::call);
    emscripten::function("api_C1_03155",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::MathFunctions::log)>::call);
    emscripten::function("api_C1_03156",
                         &StaticCall<static_cast<double (*)(double, int)>(&
                             mathcollection::MathFunctions::round)>::call);
    emscripten::function("api_C1_03158",
                         &StaticCall<static_cast<double (*)(double, int)>(&
                             mathcollection::MathFunctions::roundHalfUp)>::call);
    emscripten::function("api_C1_03159",
                         &StaticCall<static_cast<double (*)(double, int)>(&
                             mathcollection::MathFunctions::roundDown)>::call);
    emscripten::function("api_C1_03160",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::roundUlp)>::call);
    emscripten::function("api_C1_03161",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::MathFunctions::integerPart)>::call);
    emscripten::function("api_C1_03162",
                         &StaticCall<static_cast<int (*)(double)>(&
                             mathcollection::MathFunctions::decimalDigitsBefore)>::call);
    emscripten::function("api_C1_03163",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::MathFunctions::ulp)>::call);
    emscripten::function("api_C1_03164",
                         &StaticCall<static_cast<int (*)(double)>(&
                             mathcollection::MathFunctions::ulpDecimalDigitsBefore)>::call);
    emscripten::function("api_C1_03165",
                         &StaticCall<static_cast<int (*)(double)>(&
                             mathcollection::MathFunctions::decimalNumberLength)>::call);
    emscripten::function("api_C1_03166",
                         &StaticCall<static_cast<int (*)(double)>(&
                             mathcollection::MathFunctions::fractionalPartLength)>::call);
    emscripten::function("api_C1_03167",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::MathFunctions::lengthRound)>::call);
    emscripten::function("api_C1_03168",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::MathFunctions::coalesce)>::call);
    emscripten::function("api_C1_03169",
                         &StaticCall<static_cast<bool (*)(double)>(&mathcollection::MathFunctions::isInteger)>::call);
    emscripten::function("api_C1_03170",
                         &StaticCall<static_cast<bool (*)(double, double)>(&
                             mathcollection::MathFunctions::almostEqual)>::call);
    emscripten::function("api_C1_03171",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double)>(&
                             mathcollection::MathFunctions::getFunctionValue)>::call);
    emscripten::function("api_C1_03172",
                         &StaticCall<static_cast<ArrayPtr<double> (*)(const ExpressionPtr &, const ArgumentPtr &,
                                                                      double, double,
                                                                      double)>(&
                             mathcollection::MathFunctions::getFunctionValues)>::call);
    emscripten::function("api_C1_03179_get",
                         &StaticFieldAccess<&mathcollection::NumberTheory::DEFAULT_TO_FRACTION_INIT_SEARCH_SIZE>::get);
    emscripten::function("api_C1_03180",
                         &StaticCall<static_cast<void (*)(Long)>(&
                             mathcollection::NumberTheory::setToFractionInitSearchSize)>::call);
    emscripten::function("api_C1_03181",
                         &StaticCall<static_cast<Long (*)()>(&
                             mathcollection::NumberTheory::getToFractionInitSearchSize)>::call);
    emscripten::function("api_C1_03182",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::NumberTheory::min)>::call);
    emscripten::function("api_C1_03184",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::min)>::call);
    emscripten::function("api_C1_03186",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::min)>::call);
    emscripten::function("api_C1_03189",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::argmin)>::call);
    emscripten::function("api_C1_03191",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::argmin)>::call);
    emscripten::function("api_C1_03193",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::NumberTheory::max)>::call);
    emscripten::function("api_C1_03195",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::max)>::call);
    emscripten::function("api_C1_03197",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::max)>::call);
    emscripten::function("api_C1_03200",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::argmax)>::call);
    emscripten::function("api_C1_03202",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::argmax)>::call);
    emscripten::function("api_C1_03204",
                         &StaticCallInOut<static_cast<ArrayPtr<int> (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::sortAsc)>::call);
    emscripten::function("api_C1_03205",
                         &StaticCallInOut<static_cast<ArrayPtr<double> (*)(const ArrayPtr<double> &, bool)>(&
                             mathcollection::NumberTheory::getDistValues)>::call);
    emscripten::function("api_C1_03207",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::numberOfDistValues)>::call);
    emscripten::function("api_C1_03209",
                         &StaticCallInOut<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::numberOfDistValues)>::call);
    emscripten::function("api_C1_03211",
                         &StaticCall<static_cast<Long (*)(Long, Long)>(&mathcollection::NumberTheory::gcd)>::call);
    emscripten::function("api_C1_03212",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::NumberTheory::gcd)>::call);
    emscripten::function("api_C1_03213",
                         &StaticCallInOut<static_cast<Long (*)(const ArrayPtr<Long> &)>(&
                             mathcollection::NumberTheory::gcd)>::call);
    emscripten::function("api_C1_03215",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::gcd)>::call);
    emscripten::function("api_C1_03217",
                         &StaticCallInOut<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::gcd)>::call);
    emscripten::function("api_C1_03219",
                         &StaticCall<static_cast<Long (*)(Long, Long)>(&mathcollection::NumberTheory::lcm)>::call);
    emscripten::function("api_C1_03220",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::NumberTheory::lcm)>::call);
    emscripten::function("api_C1_03221",
                         &StaticCallInOut<static_cast<Long (*)(const ArrayPtr<Long> &)>(&
                             mathcollection::NumberTheory::lcm)>::call);
    emscripten::function("api_C1_03223",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::lcm)>::call);
    emscripten::function("api_C1_03225",
                         &StaticCallInOut<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::lcm)>::call);
    emscripten::function("api_C1_03228",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::sum)>::call);
    emscripten::function("api_C1_03230",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::sum)>::call);
    emscripten::function("api_C1_03233",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::prod)>::call);
    emscripten::function("api_C1_03235",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::prod)>::call);
    emscripten::function("api_C1_03237",
                         &StaticCall<static_cast<bool (*)(Long)>(&mathcollection::NumberTheory::primeTest)>::call);
    emscripten::function("api_C1_03238",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::NumberTheory::primeTest)>::call);
    emscripten::function("api_C1_03239",
                         &StaticCall<static_cast<Long (*)(Long)>(&mathcollection::NumberTheory::primeCount)>::call);
    emscripten::function("api_C1_03240",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::NumberTheory::primeCount)>::call);
    emscripten::function("api_C1_03241",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double, double,
                                                            double)>(&
                             mathcollection::NumberTheory::sigmaSummation)>::call);
    emscripten::function("api_C1_03243",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double, double,
                                                            double)>(&mathcollection::NumberTheory::piProduct)>::call);
    emscripten::function("api_C1_03245",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double, double,
                                                            double)>(&mathcollection::NumberTheory::min)>::call);
    emscripten::function("api_C1_03247",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double, double,
                                                            double)>(&mathcollection::NumberTheory::max)>::call);
    emscripten::function("api_C1_03249",
                         &StaticCall<static_cast<int (*)(Char)>(&mathcollection::NumberTheory::digitIndex)>::call);
    emscripten::function("api_C1_03250",
                         &StaticCall<static_cast<Char (*)(int)>(&mathcollection::NumberTheory::digitChar)>::call);
    emscripten::function("api_C1_03251",
                         &StaticCall<static_cast<int (*)(const StringPtr &)>(&
                             mathcollection::NumberTheory::getNumeralSystemBase)>::call);
    emscripten::function("api_C1_03253",
                         &StaticCall<static_cast<int (*)(const String &)>(&
                             mathcollection::NumberTheory::getNumeralSystemBase)>::call);
    emscripten::function("api_C1_03257",
                         &StaticCall<static_cast<double (*)(const StringPtr &, int)>(&
                             mathcollection::NumberTheory::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_03259",
                         &StaticCall<static_cast<double (*)(const String &, int)>(&
                             mathcollection::NumberTheory::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_03263",
                         &StaticCall<static_cast<double (*)(const StringPtr &)>(&
                             mathcollection::NumberTheory::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_03265",
                         &StaticCall<static_cast<double (*)(const String &)>(&
                             mathcollection::NumberTheory::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_03269",
                         &StaticCall<static_cast<double (*)(int, const ListPtr<int> &)>(&
                             mathcollection::NumberTheory::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_03271",
                         &StaticCall<static_cast<double (*)(int, const ArrayPtr<int> &)>(&
                             mathcollection::NumberTheory::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_03274",
                         &StaticCall<static_cast<double (*)(double, const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_03276",
                         &StaticCall<static_cast<double (*)(double, const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_03278",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<int> &)>(&
                             mathcollection::NumberTheory::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_03280",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::convOthBase2Decimal)>::call);
    emscripten::function("api_C1_03282",
                         &StaticCall<static_cast<StringPtr (*)(double, int)>(&
                             mathcollection::NumberTheory::convDecimal2OthBase)>::call);
    emscripten::function("api_C1_03283",
                         &StaticCall<static_cast<StringPtr (*)(double, int, int)>(&
                             mathcollection::NumberTheory::convDecimal2OthBase)>::call);
    emscripten::function("api_C1_03284",
                         &StaticCall<static_cast<int (*)(Long)>(&mathcollection::NumberTheory::numberOfDigits)>::call);
    emscripten::function("api_C1_03285",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::NumberTheory::numberOfDigits)>::call);
    emscripten::function("api_C1_03286",
                         &StaticCall<static_cast<Long (*)(Long, Long)>(&
                             mathcollection::NumberTheory::numberOfDigits)>::call);
    emscripten::function("api_C1_03287",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::NumberTheory::numberOfDigits)>::call);
    emscripten::function("api_C1_03288",
                         &StaticCall<static_cast<int (*)(Long, int, int)>(&
                             mathcollection::NumberTheory::digitAtPosition)>::call);
    emscripten::function("api_C1_03289",
                         &StaticCall<static_cast<int (*)(Long, int)>(&
                             mathcollection::NumberTheory::digitAtPosition)>::call);
    emscripten::function("api_C1_03290",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::NumberTheory::digitAtPosition)>::call);
    emscripten::function("api_C1_03291",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::NumberTheory::digitAtPosition)>::call);
    emscripten::function("api_C1_03292",
                         &StaticCall<static_cast<ArrayPtr<Long> (*)(Long)>(&
                             mathcollection::NumberTheory::primeFactors)>::call);
    emscripten::function("api_C1_03293",
                         &StaticCall<static_cast<ArrayPtr<double> (*)(double)>(&
                             mathcollection::NumberTheory::primeFactors)>::call);
    emscripten::function("api_C1_03294",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::NumberTheory::numberOfPrimeFactors)>::call);
    emscripten::function("api_C1_03295",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::NumberTheory::primeFactorValue)>::call);
    emscripten::function("api_C1_03296",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::NumberTheory::primeFactorExponent)>::call);
    emscripten::function("api_C1_03297",
                         &StaticCall<static_cast<ArrayPtr<double> (*)(double)>(&
                             mathcollection::NumberTheory::toFraction)>::call);
    emscripten::function("api_C1_03298",
                         &StaticCall<static_cast<ArrayPtr<double> (*)(double)>(&
                             mathcollection::NumberTheory::toMixedFraction)>::call);
    emscripten::function("api_C1_03299",
                         &StaticCall<static_cast<StringPtr (*)(const ArrayPtr<double> &)>(&
                             mathcollection::NumberTheory::fractionToString)>::call);
    emscripten::function("api_C1_03301",
                         &StaticCall<static_cast<StringPtr (*)(double)>(&
                             mathcollection::NumberTheory::toFractionString)>::call);
    emscripten::function("api_C1_03302",
                         &StaticCall<static_cast<StringPtr (*)(double)>(&
                             mathcollection::NumberTheory::toMixedFractionString)>::call);
    emscripten::function("api_C1_03305_get", &StaticFieldAccess<&mathcollection::PhysicalConstants::LIGHT_SPEED>::get);
    emscripten::function("api_C1_03306_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::GRAVITATIONAL_CONSTANT>::get);
    emscripten::function("api_C1_03307_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::GRAVIT_ACC_EARTH>::get);
    emscripten::function("api_C1_03308_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::PLANCK_CONSTANT>::get);
    emscripten::function("api_C1_03309_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::PLANCK_CONSTANT_REDUCED>::get);
    emscripten::function("api_C1_03310_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::PLANCK_LENGTH>::get);
    emscripten::function("api_C1_03311_get", &StaticFieldAccess<&mathcollection::PhysicalConstants::PLANCK_MASS>::get);
    emscripten::function("api_C1_03312_get", &StaticFieldAccess<&mathcollection::PhysicalConstants::PLANCK_TIME>::get);
    emscripten::function("api_C1_03313_get", &StaticFieldAccess<&mathcollection::PhysicalConstants::N_A>::get);
    emscripten::function("api_C1_03314_get", &StaticFieldAccess<&mathcollection::PhysicalConstants::R>::get);
    emscripten::function("api_C1_03315_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::BOLTZMANN_CONSTANT>::get);
    emscripten::function("api_C1_03316_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::NEUTRON_REST_MASS>::get);
    emscripten::function("api_C1_03317_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::NEUTRON_EQUIVALENT_REST_MASS>::get);
    emscripten::function("api_C1_03318_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::PROTON_REST_MASS>::get);
    emscripten::function("api_C1_03319_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::PROTON_EQUIVALENT_REST_MASS>::get);
    emscripten::function("api_C1_03320_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::ELEMENTARY_CHARGE>::get);
    emscripten::function("api_C1_03321_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::ELECTRON_REST_MASS>::get);
    emscripten::function("api_C1_03322_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::ELECTRON_EQUIVALENT_REST_MASS>::get);
    emscripten::function("api_C1_03323_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::VACUUM_PERMITTIVITY>::get);
    emscripten::function("api_C1_03324_get",
                         &StaticFieldAccess<&mathcollection::PhysicalConstants::VACUUM_PERMEABILITY>::get);
    emscripten::function("api_C1_03328_get",
                         &StaticFieldAccess<&mathcollection::PrimesCache::DEFAULT_MAX_NUM_IN_CACHE>::get);
    emscripten::function("api_C1_03329_get", &StaticFieldAccess<&mathcollection::PrimesCache::CACHE_EMPTY>::get);
    emscripten::function("api_C1_03330_get", &StaticFieldAccess<&mathcollection::PrimesCache::CACHING_FINISHED>::get);
    emscripten::function("api_C1_03331_get", &StaticFieldAccess<&mathcollection::PrimesCache::IS_PRIME>::get);
    emscripten::function("api_C1_03332_get", &StaticFieldAccess<&mathcollection::PrimesCache::IS_NOT_PRIME>::get);
    emscripten::function("api_C1_03333_get", &StaticFieldAccess<&mathcollection::PrimesCache::NOT_IN_CACHE>::get);
    emscripten::function("api_C1_03335",
                         &MemberCall<static_cast<double (mathcollection::PrimesCache::*)() const>(&
                             mathcollection::PrimesCache::getComputingTime)>::call);
    emscripten::function("api_C1_03336",
                         &MemberCall<static_cast<bool (mathcollection::PrimesCache::*)() const>(&
                             mathcollection::PrimesCache::getCacheStatus)>::call);
    emscripten::function("api_C1_03337",
                         &MemberCall<static_cast<int (mathcollection::PrimesCache::*)() const>(&
                             mathcollection::PrimesCache::getNumberOfPrimes)>::call);
    emscripten::function("api_C1_03338",
                         &MemberCall<static_cast<int (mathcollection::PrimesCache::*)() const>(&
                             mathcollection::PrimesCache::getMaxNumInCache)>::call);
    emscripten::function("api_C1_03339",
                         &MemberCall<static_cast<int (mathcollection::PrimesCache::*)(int) const>(&
                             mathcollection::PrimesCache::primeTest)>::call);
    emscripten::function("api_C1_03340",
                         &MemberCall<static_cast<bool (mathcollection::PrimesCache::*)() const>(&
                             mathcollection::PrimesCache::isInitSuccessful)>::call);
    emscripten::function("api_C1_03345_get",
                         &StaticFieldAccess<&mathcollection::ProbabilityDistributions::randomGenerator>::get);
    emscripten::function("api_C1_03345_set",
                         &StaticFieldAccess<&mathcollection::ProbabilityDistributions::randomGenerator>::set);
    emscripten::function("api_C1_03346",
                         &StaticCall<static_cast<double (*)(double, double, const RandomPtr &)>(&
                             mathcollection::ProbabilityDistributions::rndUniformContinuous)>::call);
    emscripten::function("api_C1_03347",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::ProbabilityDistributions::rndUniformContinuous)>::call);
    emscripten::function("api_C1_03348",
                         &StaticCall<static_cast<double (*)(const RandomPtr &)>(&
                             mathcollection::ProbabilityDistributions::rndUniformContinuous)>::call);
    emscripten::function("api_C1_03349",
                         &StaticCall<static_cast<double (*)()>(&
                             mathcollection::ProbabilityDistributions::randomUniformContinuous)>::call);
    emscripten::function("api_C1_03350",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::ProbabilityDistributions::pdfUniformContinuous)>::call);
    emscripten::function("api_C1_03351",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::ProbabilityDistributions::cdfUniformContinuous)>::call);
    emscripten::function("api_C1_03352",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::ProbabilityDistributions::qntUniformContinuous)>::call);
    emscripten::function("api_C1_03353",
                         &StaticCall<static_cast<double (*)(int, int, const RandomPtr &)>(&
                             mathcollection::ProbabilityDistributions::rndInteger)>::call);
    emscripten::function("api_C1_03354",
                         &StaticCall<static_cast<double (*)(double, double, const RandomPtr &)>(&
                             mathcollection::ProbabilityDistributions::rndInteger)>::call);
    emscripten::function("api_C1_03355",
                         &StaticCall<static_cast<double (*)(int, int)>(&
                             mathcollection::ProbabilityDistributions::rndInteger)>::call);
    emscripten::function("api_C1_03356",
                         &StaticCall<static_cast<double (*)(const RandomPtr &)>(&
                             mathcollection::ProbabilityDistributions::rndInteger)>::call);
    emscripten::function("api_C1_03357",
                         &StaticCall<static_cast<int (*)(int, const RandomPtr &)>(&
                             mathcollection::ProbabilityDistributions::rndIndex)>::call);
    emscripten::function("api_C1_03358",
                         &StaticCall<static_cast<int (*)(int)>(&
                             mathcollection::ProbabilityDistributions::rndIndex)>::call);
    emscripten::function("api_C1_03359",
                         &StaticCall<static_cast<double (*)()>(&
                             mathcollection::ProbabilityDistributions::rndInteger)>::call);
    emscripten::function("api_C1_03360",
                         &StaticCall<static_cast<double (*)(double, double, const RandomPtr &)>(&
                             mathcollection::ProbabilityDistributions::rndNormal)>::call);
    emscripten::function("api_C1_03361",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::ProbabilityDistributions::rndNormal)>::call);
    emscripten::function("api_C1_03362",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::ProbabilityDistributions::pdfNormal)>::call);
    emscripten::function("api_C1_03363",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::ProbabilityDistributions::cdfNormal)>::call);
    emscripten::function("api_C1_03364",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::ProbabilityDistributions::qntNormal)>::call);
    emscripten::function("api_C1_03365",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::ProbabilityDistributions::pdfStudentT)>::call);
    emscripten::function("api_C1_03366",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::ProbabilityDistributions::cdfStudentT)>::call);
    emscripten::function("api_C1_03367",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::ProbabilityDistributions::qntStudentT)>::call);
    emscripten::function("api_C1_03368",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::ProbabilityDistributions::rndStudentT)>::call);
    emscripten::function("api_C1_03369",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::ProbabilityDistributions::pdfChiSquared)>::call);
    emscripten::function("api_C1_03370",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::ProbabilityDistributions::cdfChiSquared)>::call);
    emscripten::function("api_C1_03371",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::ProbabilityDistributions::qntChiSquared)>::call);
    emscripten::function("api_C1_03372",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::ProbabilityDistributions::rndChiSquared)>::call);
    emscripten::function("api_C1_03373",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::ProbabilityDistributions::pdfSnedecordF)>::call);
    emscripten::function("api_C1_03374",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::ProbabilityDistributions::cdfSnedecordF)>::call);
    emscripten::function("api_C1_03375",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::ProbabilityDistributions::qntSnedecordF)>::call);
    emscripten::function("api_C1_03376",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::ProbabilityDistributions::rndSnedecordF)>::call);
    emscripten::function("api_C1_03377",
                         &StaticCall<static_cast<double (*)(int)>(&
                             mathcollection::ProbabilityDistributions::getRandomVariableValue)>::call);
    emscripten::function("api_C1_03384",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::SpecialFunctions::exponentialIntegralEi)>::call);
    emscripten::function("api_C1_03385",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::SpecialFunctions::logarithmicIntegralLi)>::call);
    emscripten::function("api_C1_03386",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::SpecialFunctions::offsetLogarithmicIntegralLi)>::call);
    emscripten::function("api_C1_03387",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::SpecialFunctions::erf)>::call);
    emscripten::function("api_C1_03388",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::SpecialFunctions::erfc)>::call);
    emscripten::function("api_C1_03389",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::SpecialFunctions::erfInv)>::call);
    emscripten::function("api_C1_03390",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::SpecialFunctions::erfcInv)>::call);
    emscripten::function("api_C1_03391",
                         &StaticCall<static_cast<double (*)(double)>(&mathcollection::SpecialFunctions::gamma)>::call);
    emscripten::function("api_C1_03392",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::SpecialFunctions::lanchosGamma)>::call);
    emscripten::function("api_C1_03393",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::SpecialFunctions::logGamma)>::call);
    emscripten::function("api_C1_03394",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::SpecialFunctions::sgnGamma)>::call);
    emscripten::function("api_C1_03395",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::SpecialFunctions::regularizedGammaLowerP)>::call);
    emscripten::function("api_C1_03396",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::SpecialFunctions::inverseRegularizedGammaLowerP)>::call);
    emscripten::function("api_C1_03397",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::SpecialFunctions::incompleteGammaLower)>::call);
    emscripten::function("api_C1_03398",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::SpecialFunctions::regularizedGammaUpperQ)>::call);
    emscripten::function("api_C1_03399",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::SpecialFunctions::incompleteGammaUpper)>::call);
    emscripten::function("api_C1_03400",
                         &StaticCall<static_cast<double (*)(double)>(&
                             mathcollection::SpecialFunctions::diGamma)>::call);
    emscripten::function("api_C1_03401",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::SpecialFunctions::logBeta)>::call);
    emscripten::function("api_C1_03402",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::SpecialFunctions::beta)>::call);
    emscripten::function("api_C1_03403",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::SpecialFunctions::incompleteBeta)>::call);
    emscripten::function("api_C1_03404",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::SpecialFunctions::regularizedBeta)>::call);
    emscripten::function("api_C1_03405",
                         &StaticCall<static_cast<double (*)(double, double, double)>(&
                             mathcollection::SpecialFunctions::inverseRegularizedBeta)>::call);
    emscripten::function("api_C1_03406",
                         &StaticCall<static_cast<double (*)(double, double)>(&
                             mathcollection::SpecialFunctions::lambertW)>::call);
    emscripten::function("api_C1_03407",
                         &StaticCall<static_cast<double (*)(double, double, double, double, double, double)>(&
                             mathcollection::SpecialFunctions::hypergeometricF)>::call);
    emscripten::function("api_C1_03411_get",
                         &StaticFieldAccess<&mathcollection::SpecialValue::specialCasesDisabled>::get);
    emscripten::function("api_C1_03411_set",
                         &StaticFieldAccess<&mathcollection::SpecialValue::specialCasesDisabled>::set);
    emscripten::function("api_C1_03412_get", &StaticFieldAccess<&mathcollection::SpecialValue::EPSILON>::get);
    emscripten::function("api_C1_03413_get", &FieldAccess<&mathcollection::SpecialValue::x>::get);
    emscripten::function("api_C1_03413_set", &FieldAccess<&mathcollection::SpecialValue::x>::set);
    emscripten::function("api_C1_03414_get", &FieldAccess<&mathcollection::SpecialValue::xFrom>::get);
    emscripten::function("api_C1_03414_set", &FieldAccess<&mathcollection::SpecialValue::xFrom>::set);
    emscripten::function("api_C1_03415_get", &FieldAccess<&mathcollection::SpecialValue::xTo>::get);
    emscripten::function("api_C1_03415_set", &FieldAccess<&mathcollection::SpecialValue::xTo>::set);
    emscripten::function("api_C1_03416_get", &FieldAccess<&mathcollection::SpecialValue::fv>::get);
    emscripten::function("api_C1_03416_set", &FieldAccess<&mathcollection::SpecialValue::fv>::set);
    emscripten::function("api_C1_03417_get", &FieldAccess<&mathcollection::SpecialValue::fvdeg>::get);
    emscripten::function("api_C1_03417_set", &FieldAccess<&mathcollection::SpecialValue::fvdeg>::set);
    emscripten::function("api_C1_03422_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::EPSILON>::get);
    emscripten::function("api_C1_03423_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_0>::get);
    emscripten::function("api_C1_03424_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_0>::get);
    emscripten::function("api_C1_03425_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_0>::get);
    emscripten::function("api_C1_03426_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_0>::get);
    emscripten::function("api_C1_03427_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_0>::get);
    emscripten::function("api_C1_03428_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_0>::get);
    emscripten::function("api_C1_03429_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_30>::get);
    emscripten::function("api_C1_03430_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_30>::get);
    emscripten::function("api_C1_03431_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_30>::get);
    emscripten::function("api_C1_03432_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_30>::get);
    emscripten::function("api_C1_03433_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_30>::get);
    emscripten::function("api_C1_03434_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_30>::get);
    emscripten::function("api_C1_03435_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_45>::get);
    emscripten::function("api_C1_03436_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_45>::get);
    emscripten::function("api_C1_03437_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_45>::get);
    emscripten::function("api_C1_03438_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_45>::get);
    emscripten::function("api_C1_03439_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_45>::get);
    emscripten::function("api_C1_03440_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_45>::get);
    emscripten::function("api_C1_03441_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_60>::get);
    emscripten::function("api_C1_03442_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_60>::get);
    emscripten::function("api_C1_03443_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_60>::get);
    emscripten::function("api_C1_03444_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_60>::get);
    emscripten::function("api_C1_03445_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_60>::get);
    emscripten::function("api_C1_03446_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_60>::get);
    emscripten::function("api_C1_03447_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_90>::get);
    emscripten::function("api_C1_03448_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_90>::get);
    emscripten::function("api_C1_03449_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_90>::get);
    emscripten::function("api_C1_03450_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_90>::get);
    emscripten::function("api_C1_03451_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_90>::get);
    emscripten::function("api_C1_03452_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_90>::get);
    emscripten::function("api_C1_03453_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_120>::get);
    emscripten::function("api_C1_03454_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_120>::get);
    emscripten::function("api_C1_03455_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_120>::get);
    emscripten::function("api_C1_03456_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_120>::get);
    emscripten::function("api_C1_03457_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_120>::get);
    emscripten::function("api_C1_03458_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_120>::get);
    emscripten::function("api_C1_03459_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_135>::get);
    emscripten::function("api_C1_03460_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_135>::get);
    emscripten::function("api_C1_03461_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_135>::get);
    emscripten::function("api_C1_03462_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_135>::get);
    emscripten::function("api_C1_03463_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_135>::get);
    emscripten::function("api_C1_03464_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_135>::get);
    emscripten::function("api_C1_03465_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_150>::get);
    emscripten::function("api_C1_03466_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_150>::get);
    emscripten::function("api_C1_03467_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_150>::get);
    emscripten::function("api_C1_03468_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_150>::get);
    emscripten::function("api_C1_03469_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_150>::get);
    emscripten::function("api_C1_03470_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_150>::get);
    emscripten::function("api_C1_03471_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_180>::get);
    emscripten::function("api_C1_03472_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_180>::get);
    emscripten::function("api_C1_03473_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_180>::get);
    emscripten::function("api_C1_03474_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_180>::get);
    emscripten::function("api_C1_03475_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_180>::get);
    emscripten::function("api_C1_03476_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_180>::get);
    emscripten::function("api_C1_03477_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_210>::get);
    emscripten::function("api_C1_03478_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_210>::get);
    emscripten::function("api_C1_03479_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_210>::get);
    emscripten::function("api_C1_03480_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_210>::get);
    emscripten::function("api_C1_03481_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_210>::get);
    emscripten::function("api_C1_03482_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_210>::get);
    emscripten::function("api_C1_03483_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_225>::get);
    emscripten::function("api_C1_03484_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_225>::get);
    emscripten::function("api_C1_03485_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_225>::get);
    emscripten::function("api_C1_03486_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_225>::get);
    emscripten::function("api_C1_03487_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_225>::get);
    emscripten::function("api_C1_03488_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_225>::get);
    emscripten::function("api_C1_03489_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_240>::get);
    emscripten::function("api_C1_03490_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_240>::get);
    emscripten::function("api_C1_03491_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_240>::get);
    emscripten::function("api_C1_03492_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_240>::get);
    emscripten::function("api_C1_03493_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_240>::get);
    emscripten::function("api_C1_03494_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_240>::get);
    emscripten::function("api_C1_03495_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_270>::get);
    emscripten::function("api_C1_03496_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_270>::get);
    emscripten::function("api_C1_03497_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_270>::get);
    emscripten::function("api_C1_03498_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_270>::get);
    emscripten::function("api_C1_03499_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_270>::get);
    emscripten::function("api_C1_03500_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_270>::get);
    emscripten::function("api_C1_03501_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_300>::get);
    emscripten::function("api_C1_03502_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_300>::get);
    emscripten::function("api_C1_03503_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_300>::get);
    emscripten::function("api_C1_03504_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_300>::get);
    emscripten::function("api_C1_03505_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_300>::get);
    emscripten::function("api_C1_03506_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_300>::get);
    emscripten::function("api_C1_03507_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_315>::get);
    emscripten::function("api_C1_03508_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_315>::get);
    emscripten::function("api_C1_03509_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_315>::get);
    emscripten::function("api_C1_03510_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_315>::get);
    emscripten::function("api_C1_03511_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_315>::get);
    emscripten::function("api_C1_03512_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_315>::get);
    emscripten::function("api_C1_03513_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_330>::get);
    emscripten::function("api_C1_03514_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_330>::get);
    emscripten::function("api_C1_03515_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_330>::get);
    emscripten::function("api_C1_03516_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_330>::get);
    emscripten::function("api_C1_03517_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_330>::get);
    emscripten::function("api_C1_03518_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_330>::get);
    emscripten::function("api_C1_03519_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SIN_360>::get);
    emscripten::function("api_C1_03520_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::COS_360>::get);
    emscripten::function("api_C1_03521_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::TAN_360>::get);
    emscripten::function("api_C1_03522_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CTAN_360>::get);
    emscripten::function("api_C1_03523_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::SEC_360>::get);
    emscripten::function("api_C1_03524_get",
                         &StaticFieldAccess<&mathcollection::SpecialValueTrigonometric::CSC_360>::get);
    emscripten::function("api_C1_03525_get", &FieldAccess<&mathcollection::SpecialValueTrigonometric::factor>::get);
    emscripten::function("api_C1_03525_set", &FieldAccess<&mathcollection::SpecialValueTrigonometric::factor>::set);
    emscripten::function("api_C1_03526_get", &FieldAccess<&mathcollection::SpecialValueTrigonometric::xrad>::get);
    emscripten::function("api_C1_03526_set", &FieldAccess<&mathcollection::SpecialValueTrigonometric::xrad>::set);
    emscripten::function("api_C1_03527_get", &FieldAccess<&mathcollection::SpecialValueTrigonometric::xdeg>::get);
    emscripten::function("api_C1_03527_set", &FieldAccess<&mathcollection::SpecialValueTrigonometric::xdeg>::set);
    emscripten::function("api_C1_03528_get", &FieldAccess<&mathcollection::SpecialValueTrigonometric::xradFrom>::get);
    emscripten::function("api_C1_03528_set", &FieldAccess<&mathcollection::SpecialValueTrigonometric::xradFrom>::set);
    emscripten::function("api_C1_03529_get", &FieldAccess<&mathcollection::SpecialValueTrigonometric::xradTo>::get);
    emscripten::function("api_C1_03529_set", &FieldAccess<&mathcollection::SpecialValueTrigonometric::xradTo>::set);
    emscripten::function("api_C1_03530_get", &FieldAccess<&mathcollection::SpecialValueTrigonometric::sin>::get);
    emscripten::function("api_C1_03530_set", &FieldAccess<&mathcollection::SpecialValueTrigonometric::sin>::set);
    emscripten::function("api_C1_03531_get", &FieldAccess<&mathcollection::SpecialValueTrigonometric::cos>::get);
    emscripten::function("api_C1_03531_set", &FieldAccess<&mathcollection::SpecialValueTrigonometric::cos>::set);
    emscripten::function("api_C1_03532_get", &FieldAccess<&mathcollection::SpecialValueTrigonometric::tan>::get);
    emscripten::function("api_C1_03532_set", &FieldAccess<&mathcollection::SpecialValueTrigonometric::tan>::set);
    emscripten::function("api_C1_03533_get", &FieldAccess<&mathcollection::SpecialValueTrigonometric::ctan>::get);
    emscripten::function("api_C1_03533_set", &FieldAccess<&mathcollection::SpecialValueTrigonometric::ctan>::set);
    emscripten::function("api_C1_03534_get", &FieldAccess<&mathcollection::SpecialValueTrigonometric::sec>::get);
    emscripten::function("api_C1_03534_set", &FieldAccess<&mathcollection::SpecialValueTrigonometric::sec>::set);
    emscripten::function("api_C1_03535_get", &FieldAccess<&mathcollection::SpecialValueTrigonometric::csc>::get);
    emscripten::function("api_C1_03535_set", &FieldAccess<&mathcollection::SpecialValueTrigonometric::csc>::set);
    emscripten::function("api_C1_03536_get",
                         &FixedArrayStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListTrig>::get);
    emscripten::function("api_C1_03537_get",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListAsin>::get);
    emscripten::function("api_C1_03537_set",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListAsin>::set);
    emscripten::function("api_C1_03538_get",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListAcos>::get);
    emscripten::function("api_C1_03538_set",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListAcos>::set);
    emscripten::function("api_C1_03539_get",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListAtan>::get);
    emscripten::function("api_C1_03539_set",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListAtan>::set);
    emscripten::function("api_C1_03540_get",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListActan>::get);
    emscripten::function("api_C1_03540_set",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListActan>::set);
    emscripten::function("api_C1_03541_get",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListAsec>::get);
    emscripten::function("api_C1_03541_set",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListAsec>::set);
    emscripten::function("api_C1_03542_get",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListAcsc>::get);
    emscripten::function("api_C1_03542_set",
                         &LiveListStaticFieldAccess<&mathcollection::SpecialValueTrigonometric::valuesListAcsc>::set);
    emscripten::function("api_C1_03543",
                         &StaticCall<static_cast<SpecialValueTrigonometricPtr (*)(double)>(&
                             mathcollection::SpecialValueTrigonometric::getSpecialValueTrigonometric)>::call);
    emscripten::function("api_C1_03544",
                         &StaticCall<static_cast<SpecialValuePtr (*)(double)>(&
                             mathcollection::SpecialValueTrigonometric::getSpecialValueAsin)>::call);
    emscripten::function("api_C1_03545",
                         &StaticCall<static_cast<SpecialValuePtr (*)(double)>(&
                             mathcollection::SpecialValueTrigonometric::getSpecialValueAcos)>::call);
    emscripten::function("api_C1_03546",
                         &StaticCall<static_cast<SpecialValuePtr (*)(double)>(&
                             mathcollection::SpecialValueTrigonometric::getSpecialValueAtan)>::call);
    emscripten::function("api_C1_03547",
                         &StaticCall<static_cast<SpecialValuePtr (*)(double)>(&
                             mathcollection::SpecialValueTrigonometric::getSpecialValueActan)>::call);
    emscripten::function("api_C1_03548",
                         &StaticCall<static_cast<SpecialValuePtr (*)(double)>(&
                             mathcollection::SpecialValueTrigonometric::getSpecialValueAsec)>::call);
    emscripten::function("api_C1_03549",
                         &StaticCall<static_cast<SpecialValuePtr (*)(double)>(&
                             mathcollection::SpecialValueTrigonometric::getSpecialValueAcsc)>::call);
    emscripten::function("api_C1_03553",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double, double,
                                                            double)>(&mathcollection::Statistics::avg)>::call);
    emscripten::function("api_C1_03555",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double, double,
                                                            double)>(&mathcollection::Statistics::var)>::call);
    emscripten::function("api_C1_03557",
                         &StaticCall<static_cast<double (*)(const ExpressionPtr &, const ArgumentPtr &, double, double,
                                                            double)>(&mathcollection::Statistics::std)>::call);
    emscripten::function("api_C1_03560",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::Statistics::avg)>::call);
    emscripten::function("api_C1_03562",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::Statistics::avg)>::call);
    emscripten::function("api_C1_03565",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::Statistics::var)>::call);
    emscripten::function("api_C1_03567",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::Statistics::var)>::call);
    emscripten::function("api_C1_03570",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::Statistics::std)>::call);
    emscripten::function("api_C1_03572",
                         &StaticCall<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::Statistics::std)>::call);
    emscripten::function("api_C1_03575",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::Statistics::median)>::call);
    emscripten::function("api_C1_03577",
                         &StaticCallInOut<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::Statistics::median)>::call);
    emscripten::function("api_C1_03580",
                         &StaticCall<static_cast<double (*)(const ListPtr<double> &)>(&
                             mathcollection::Statistics::mode)>::call);
    emscripten::function("api_C1_03582",
                         &StaticCallInOut<static_cast<double (*)(const ArrayPtr<double> &)>(&
                             mathcollection::Statistics::mode)>::call);
    emscripten::function("api_C1_03586_get", &StaticFieldAccess<&mathcollection::Units::PERC>::get);
    emscripten::function("api_C1_03587_get", &StaticFieldAccess<&mathcollection::Units::PROMIL>::get);
    emscripten::function("api_C1_03588_get", &StaticFieldAccess<&mathcollection::Units::YOTTA>::get);
    emscripten::function("api_C1_03589_get", &StaticFieldAccess<&mathcollection::Units::ZETTA>::get);
    emscripten::function("api_C1_03590_get", &StaticFieldAccess<&mathcollection::Units::EXA>::get);
    emscripten::function("api_C1_03591_get", &StaticFieldAccess<&mathcollection::Units::PETA>::get);
    emscripten::function("api_C1_03592_get", &StaticFieldAccess<&mathcollection::Units::TERA>::get);
    emscripten::function("api_C1_03593_get", &StaticFieldAccess<&mathcollection::Units::GIGA>::get);
    emscripten::function("api_C1_03594_get", &StaticFieldAccess<&mathcollection::Units::MEGA>::get);
    emscripten::function("api_C1_03595_get", &StaticFieldAccess<&mathcollection::Units::KILO>::get);
    emscripten::function("api_C1_03596_get", &StaticFieldAccess<&mathcollection::Units::HECTO>::get);
    emscripten::function("api_C1_03597_get", &StaticFieldAccess<&mathcollection::Units::DECA>::get);
    emscripten::function("api_C1_03598_get", &StaticFieldAccess<&mathcollection::Units::DECI>::get);
    emscripten::function("api_C1_03599_get", &StaticFieldAccess<&mathcollection::Units::CENTI>::get);
    emscripten::function("api_C1_03600_get", &StaticFieldAccess<&mathcollection::Units::MILLI>::get);
    emscripten::function("api_C1_03601_get", &StaticFieldAccess<&mathcollection::Units::MICRO>::get);
    emscripten::function("api_C1_03602_get", &StaticFieldAccess<&mathcollection::Units::NANO>::get);
    emscripten::function("api_C1_03603_get", &StaticFieldAccess<&mathcollection::Units::PICO>::get);
    emscripten::function("api_C1_03604_get", &StaticFieldAccess<&mathcollection::Units::FEMTO>::get);
    emscripten::function("api_C1_03605_get", &StaticFieldAccess<&mathcollection::Units::ATTO>::get);
    emscripten::function("api_C1_03606_get", &StaticFieldAccess<&mathcollection::Units::ZEPTO>::get);
    emscripten::function("api_C1_03607_get", &StaticFieldAccess<&mathcollection::Units::YOCTO>::get);
    emscripten::function("api_C1_03608_get", &StaticFieldAccess<&mathcollection::Units::METRE>::get);
    emscripten::function("api_C1_03609_get", &StaticFieldAccess<&mathcollection::Units::KILOMETRE>::get);
    emscripten::function("api_C1_03610_get", &StaticFieldAccess<&mathcollection::Units::CENTIMETRE>::get);
    emscripten::function("api_C1_03611_get", &StaticFieldAccess<&mathcollection::Units::MILLIMETRE>::get);
    emscripten::function("api_C1_03612_get", &StaticFieldAccess<&mathcollection::Units::INCH>::get);
    emscripten::function("api_C1_03613_get", &StaticFieldAccess<&mathcollection::Units::YARD>::get);
    emscripten::function("api_C1_03614_get", &StaticFieldAccess<&mathcollection::Units::FEET>::get);
    emscripten::function("api_C1_03615_get", &StaticFieldAccess<&mathcollection::Units::MILE>::get);
    emscripten::function("api_C1_03616_get", &StaticFieldAccess<&mathcollection::Units::NAUTICAL_MILE>::get);
    emscripten::function("api_C1_03617_get", &StaticFieldAccess<&mathcollection::Units::METRE2>::get);
    emscripten::function("api_C1_03618_get", &StaticFieldAccess<&mathcollection::Units::CENTIMETRE2>::get);
    emscripten::function("api_C1_03619_get", &StaticFieldAccess<&mathcollection::Units::MILLIMETRE2>::get);
    emscripten::function("api_C1_03620_get", &StaticFieldAccess<&mathcollection::Units::ARE>::get);
    emscripten::function("api_C1_03621_get", &StaticFieldAccess<&mathcollection::Units::HECTARE>::get);
    emscripten::function("api_C1_03622_get", &StaticFieldAccess<&mathcollection::Units::KILOMETRE2>::get);
    emscripten::function("api_C1_03623_get", &StaticFieldAccess<&mathcollection::Units::ACRE>::get);
    emscripten::function("api_C1_03624_get", &StaticFieldAccess<&mathcollection::Units::MILLIMETRE3>::get);
    emscripten::function("api_C1_03625_get", &StaticFieldAccess<&mathcollection::Units::CENTIMETRE3>::get);
    emscripten::function("api_C1_03626_get", &StaticFieldAccess<&mathcollection::Units::METRE3>::get);
    emscripten::function("api_C1_03627_get", &StaticFieldAccess<&mathcollection::Units::KILOMETRE3>::get);
    emscripten::function("api_C1_03628_get", &StaticFieldAccess<&mathcollection::Units::MILLILITRE>::get);
    emscripten::function("api_C1_03629_get", &StaticFieldAccess<&mathcollection::Units::LITRE>::get);
    emscripten::function("api_C1_03630_get", &StaticFieldAccess<&mathcollection::Units::GALLON>::get);
    emscripten::function("api_C1_03631_get", &StaticFieldAccess<&mathcollection::Units::PINT>::get);
    emscripten::function("api_C1_03632_get", &StaticFieldAccess<&mathcollection::Units::SECOND>::get);
    emscripten::function("api_C1_03633_get", &StaticFieldAccess<&mathcollection::Units::MILLISECOND>::get);
    emscripten::function("api_C1_03634_get", &StaticFieldAccess<&mathcollection::Units::MINUTE>::get);
    emscripten::function("api_C1_03635_get", &StaticFieldAccess<&mathcollection::Units::HOUR>::get);
    emscripten::function("api_C1_03636_get", &StaticFieldAccess<&mathcollection::Units::DAY>::get);
    emscripten::function("api_C1_03637_get", &StaticFieldAccess<&mathcollection::Units::WEEK>::get);
    emscripten::function("api_C1_03638_get", &StaticFieldAccess<&mathcollection::Units::JULIAN_YEAR>::get);
    emscripten::function("api_C1_03639_get", &StaticFieldAccess<&mathcollection::Units::KILOGRAM>::get);
    emscripten::function("api_C1_03640_get", &StaticFieldAccess<&mathcollection::Units::GRAM>::get);
    emscripten::function("api_C1_03641_get", &StaticFieldAccess<&mathcollection::Units::MILLIGRAM>::get);
    emscripten::function("api_C1_03642_get", &StaticFieldAccess<&mathcollection::Units::DECAGRAM>::get);
    emscripten::function("api_C1_03643_get", &StaticFieldAccess<&mathcollection::Units::TONNE>::get);
    emscripten::function("api_C1_03644_get", &StaticFieldAccess<&mathcollection::Units::OUNCE>::get);
    emscripten::function("api_C1_03645_get", &StaticFieldAccess<&mathcollection::Units::POUND>::get);
    emscripten::function("api_C1_03646_get", &StaticFieldAccess<&mathcollection::Units::MOLE>::get);
    emscripten::function("api_C1_03647_get", &StaticFieldAccess<&mathcollection::Units::COULOMB>::get);
    emscripten::function("api_C1_03648_get", &StaticFieldAccess<&mathcollection::Units::AMPERE>::get);
    emscripten::function("api_C1_03649_get", &StaticFieldAccess<&mathcollection::Units::KELVIN>::get);
    emscripten::function("api_C1_03650_get", &StaticFieldAccess<&mathcollection::Units::CELCIUS>::get);
    emscripten::function("api_C1_03651_get", &StaticFieldAccess<&mathcollection::Units::FARENHEIGHT>::get);
    emscripten::function("api_C1_03652_get", &StaticFieldAccess<&mathcollection::Units::BIT>::get);
    emscripten::function("api_C1_03653_get", &StaticFieldAccess<&mathcollection::Units::KILOBIT>::get);
    emscripten::function("api_C1_03654_get", &StaticFieldAccess<&mathcollection::Units::MEGABIT>::get);
    emscripten::function("api_C1_03655_get", &StaticFieldAccess<&mathcollection::Units::GIGABIT>::get);
    emscripten::function("api_C1_03656_get", &StaticFieldAccess<&mathcollection::Units::TERABIT>::get);
    emscripten::function("api_C1_03657_get", &StaticFieldAccess<&mathcollection::Units::PETABIT>::get);
    emscripten::function("api_C1_03658_get", &StaticFieldAccess<&mathcollection::Units::EXABIT>::get);
    emscripten::function("api_C1_03659_get", &StaticFieldAccess<&mathcollection::Units::ZETTABIT>::get);
    emscripten::function("api_C1_03660_get", &StaticFieldAccess<&mathcollection::Units::YOTTABIT>::get);
    emscripten::function("api_C1_03661_get", &StaticFieldAccess<&mathcollection::Units::BYTE>::get);
    emscripten::function("api_C1_03662_get", &StaticFieldAccess<&mathcollection::Units::KILOBYTE>::get);
    emscripten::function("api_C1_03663_get", &StaticFieldAccess<&mathcollection::Units::MEGABYTE>::get);
    emscripten::function("api_C1_03664_get", &StaticFieldAccess<&mathcollection::Units::GIGABYTE>::get);
    emscripten::function("api_C1_03665_get", &StaticFieldAccess<&mathcollection::Units::TERABYTE>::get);
    emscripten::function("api_C1_03666_get", &StaticFieldAccess<&mathcollection::Units::PETABYTE>::get);
    emscripten::function("api_C1_03667_get", &StaticFieldAccess<&mathcollection::Units::EXABYTE>::get);
    emscripten::function("api_C1_03668_get", &StaticFieldAccess<&mathcollection::Units::ZETTABYTE>::get);
    emscripten::function("api_C1_03669_get", &StaticFieldAccess<&mathcollection::Units::YOTTABYTE>::get);
    emscripten::function("api_C1_03670_get", &StaticFieldAccess<&mathcollection::Units::JOULE>::get);
    emscripten::function("api_C1_03671_get", &StaticFieldAccess<&mathcollection::Units::ELECTRONO_VOLT>::get);
    emscripten::function("api_C1_03672_get", &StaticFieldAccess<&mathcollection::Units::KILO_ELECTRONO_VOLT>::get);
    emscripten::function("api_C1_03673_get", &StaticFieldAccess<&mathcollection::Units::MEGA_ELECTRONO_VOLT>::get);
    emscripten::function("api_C1_03674_get", &StaticFieldAccess<&mathcollection::Units::GIGA_ELECTRONO_VOLT>::get);
    emscripten::function("api_C1_03675_get", &StaticFieldAccess<&mathcollection::Units::TERA_ELECTRONO_VOLT>::get);
    emscripten::function("api_C1_03676_get", &StaticFieldAccess<&mathcollection::Units::METRE_PER_SECOND>::get);
    emscripten::function("api_C1_03677_get", &StaticFieldAccess<&mathcollection::Units::KILOMETRE_PER_HOUR>::get);
    emscripten::function("api_C1_03678_get", &StaticFieldAccess<&mathcollection::Units::MILE_PER_HOUR>::get);
    emscripten::function("api_C1_03679_get", &StaticFieldAccess<&mathcollection::Units::KNOT>::get);
    emscripten::function("api_C1_03680_get", &StaticFieldAccess<&mathcollection::Units::METRE_PER_SECOND2>::get);
    emscripten::function("api_C1_03681_get", &StaticFieldAccess<&mathcollection::Units::KILOMETRE_PER_HOUR2>::get);
    emscripten::function("api_C1_03682_get", &StaticFieldAccess<&mathcollection::Units::MILE_PER_HOUR2>::get);
    emscripten::function("api_C1_03683_get", &StaticFieldAccess<&mathcollection::Units::RADIAN_ARC>::get);
    emscripten::function("api_C1_03684_get", &StaticFieldAccess<&mathcollection::Units::DEGREE_ARC>::get);
    emscripten::function("api_C1_03685_get", &StaticFieldAccess<&mathcollection::Units::MINUTE_ARC>::get);
    emscripten::function("api_C1_03686_get", &StaticFieldAccess<&mathcollection::Units::SECOND_ARC>::get);
    emscripten::function("api_C1_03687",
                         &StaticCall<static_cast<double (*)(int)>(&mathcollection::Units::getUnitValue)>::call);
    emscripten::function("api_C1_03690_get", &StaticFieldAccess<&parsertokens::BinaryRelation::TYPE_ID>::get);
    emscripten::function("api_C1_03691_get", &StaticFieldAccess<&parsertokens::BinaryRelation::TYPE_DESC>::get);
    emscripten::function("api_C1_03691_set", &StaticFieldAccess<&parsertokens::BinaryRelation::TYPE_DESC>::set);
    emscripten::function("api_C1_03692_get", &StaticFieldAccess<&parsertokens::BinaryRelation::EQ_ID>::get);
    emscripten::function("api_C1_03693_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ_ID>::get);
    emscripten::function("api_C1_03694_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LT_ID>::get);
    emscripten::function("api_C1_03695_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GT_ID>::get);
    emscripten::function("api_C1_03696_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_ID>::get);
    emscripten::function("api_C1_03697_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_ID>::get);
    emscripten::function("api_C1_03698_get", &StaticFieldAccess<&parsertokens::BinaryRelation::EQ_STR>::get);
    emscripten::function("api_C1_03699_get", &StaticFieldAccess<&parsertokens::BinaryRelation::EQ1_STR>::get);
    emscripten::function("api_C1_03700_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ_STR>::get);
    emscripten::function("api_C1_03701_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ_STR_UNI_1>::get);
    emscripten::function("api_C1_03702_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ1_STR>::get);
    emscripten::function("api_C1_03703_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ2_STR>::get);
    emscripten::function("api_C1_03704_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LT_STR>::get);
    emscripten::function("api_C1_03705_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GT_STR>::get);
    emscripten::function("api_C1_03706_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_STR>::get);
    emscripten::function("api_C1_03707_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_STR_UNI_1>::get);
    emscripten::function("api_C1_03708_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_STR_UNI_2>::get);
    emscripten::function("api_C1_03709_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_STR>::get);
    emscripten::function("api_C1_03710_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_STR_UNI_1>::get);
    emscripten::function("api_C1_03711_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_STR_UNI_2>::get);
    emscripten::function("api_C1_03712_get", &StaticFieldAccess<&parsertokens::BinaryRelation::EQ_SYN>::get);
    emscripten::function("api_C1_03713_get", &StaticFieldAccess<&parsertokens::BinaryRelation::EQ1_SYN>::get);
    emscripten::function("api_C1_03714_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ_SYN>::get);
    emscripten::function("api_C1_03715_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ_SYN_UNI_1>::get);
    emscripten::function("api_C1_03716_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ1_SYN>::get);
    emscripten::function("api_C1_03717_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ2_SYN>::get);
    emscripten::function("api_C1_03718_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LT_SYN>::get);
    emscripten::function("api_C1_03719_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GT_SYN>::get);
    emscripten::function("api_C1_03720_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_SYN>::get);
    emscripten::function("api_C1_03721_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_SYN_UNI_1>::get);
    emscripten::function("api_C1_03722_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_SYN_UNI_2>::get);
    emscripten::function("api_C1_03723_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_SYN>::get);
    emscripten::function("api_C1_03724_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_SYN_UNI_1>::get);
    emscripten::function("api_C1_03725_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_SYN_UNI_2>::get);
    emscripten::function("api_C1_03726_get", &StaticFieldAccess<&parsertokens::BinaryRelation::EQ_DESC>::get);
    emscripten::function("api_C1_03726_set", &StaticFieldAccess<&parsertokens::BinaryRelation::EQ_DESC>::set);
    emscripten::function("api_C1_03727_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ_DESC>::get);
    emscripten::function("api_C1_03727_set", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ_DESC>::set);
    emscripten::function("api_C1_03728_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LT_DESC>::get);
    emscripten::function("api_C1_03728_set", &StaticFieldAccess<&parsertokens::BinaryRelation::LT_DESC>::set);
    emscripten::function("api_C1_03729_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GT_DESC>::get);
    emscripten::function("api_C1_03729_set", &StaticFieldAccess<&parsertokens::BinaryRelation::GT_DESC>::set);
    emscripten::function("api_C1_03730_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_DESC>::get);
    emscripten::function("api_C1_03730_set", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_DESC>::set);
    emscripten::function("api_C1_03731_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_DESC>::get);
    emscripten::function("api_C1_03731_set", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_DESC>::set);
    emscripten::function("api_C1_03732_get", &StaticFieldAccess<&parsertokens::BinaryRelation::EQ_SINCE>::get);
    emscripten::function("api_C1_03733_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ_SINCE>::get);
    emscripten::function("api_C1_03734_get", &StaticFieldAccess<&parsertokens::BinaryRelation::NEQ_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03735_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LT_SINCE>::get);
    emscripten::function("api_C1_03736_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GT_SINCE>::get);
    emscripten::function("api_C1_03737_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_SINCE>::get);
    emscripten::function("api_C1_03738_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03739_get", &StaticFieldAccess<&parsertokens::BinaryRelation::LEQ_SINCE_UNI_2>::get);
    emscripten::function("api_C1_03740_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_SINCE>::get);
    emscripten::function("api_C1_03741_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03742_get", &StaticFieldAccess<&parsertokens::BinaryRelation::GEQ_SINCE_UNI_2>::get);
    emscripten::function("api_C1_03749_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::TYPE_ID>::get);
    emscripten::function("api_C1_03750_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::TYPE_DESC>::get);
    emscripten::function("api_C1_03750_set", &StaticFieldAccess<&parsertokens::BitwiseOperator::TYPE_DESC>::set);
    emscripten::function("api_C1_03751_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::COMPL_ID>::get);
    emscripten::function("api_C1_03752_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::AND_ID>::get);
    emscripten::function("api_C1_03753_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::XOR_ID>::get);
    emscripten::function("api_C1_03754_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::OR_ID>::get);
    emscripten::function("api_C1_03755_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::LEFT_SHIFT_ID>::get);
    emscripten::function("api_C1_03756_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::RIGHT_SHIFT_ID>::get);
    emscripten::function("api_C1_03757_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::NAND_ID>::get);
    emscripten::function("api_C1_03758_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::NOR_ID>::get);
    emscripten::function("api_C1_03759_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::XNOR_ID>::get);
    emscripten::function("api_C1_03760_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::COMPL_STR>::get);
    emscripten::function("api_C1_03761_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::AND_STR>::get);
    emscripten::function("api_C1_03762_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::XOR_STR>::get);
    emscripten::function("api_C1_03763_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::OR_STR>::get);
    emscripten::function("api_C1_03764_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::LEFT_SHIFT_STR>::get);
    emscripten::function("api_C1_03765_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::RIGHT_SHIFT_STR>::get);
    emscripten::function("api_C1_03766_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::NAND_STR>::get);
    emscripten::function("api_C1_03767_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::NOR_STR>::get);
    emscripten::function("api_C1_03768_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::XNOR_STR>::get);
    emscripten::function("api_C1_03769_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::COMPL_SYN>::get);
    emscripten::function("api_C1_03770_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::AND_SYN>::get);
    emscripten::function("api_C1_03771_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::XOR_SYN>::get);
    emscripten::function("api_C1_03772_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::OR_SYN>::get);
    emscripten::function("api_C1_03773_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::LEFT_SHIFT_SYN>::get);
    emscripten::function("api_C1_03774_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::RIGHT_SHIFT_SYN>::get);
    emscripten::function("api_C1_03775_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::NAND_SYN>::get);
    emscripten::function("api_C1_03776_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::NOR_SYN>::get);
    emscripten::function("api_C1_03777_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::XNOR_SYN>::get);
    emscripten::function("api_C1_03778_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::COMPL_DESC>::get);
    emscripten::function("api_C1_03778_set", &StaticFieldAccess<&parsertokens::BitwiseOperator::COMPL_DESC>::set);
    emscripten::function("api_C1_03779_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::AND_DESC>::get);
    emscripten::function("api_C1_03779_set", &StaticFieldAccess<&parsertokens::BitwiseOperator::AND_DESC>::set);
    emscripten::function("api_C1_03780_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::XOR_DESC>::get);
    emscripten::function("api_C1_03780_set", &StaticFieldAccess<&parsertokens::BitwiseOperator::XOR_DESC>::set);
    emscripten::function("api_C1_03781_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::OR_DESC>::get);
    emscripten::function("api_C1_03781_set", &StaticFieldAccess<&parsertokens::BitwiseOperator::OR_DESC>::set);
    emscripten::function("api_C1_03782_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::LEFT_SHIFT_DESC>::get);
    emscripten::function("api_C1_03782_set", &StaticFieldAccess<&parsertokens::BitwiseOperator::LEFT_SHIFT_DESC>::set);
    emscripten::function("api_C1_03783_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::RIGHT_SHIFT_DESC>::get);
    emscripten::function("api_C1_03783_set", &StaticFieldAccess<&parsertokens::BitwiseOperator::RIGHT_SHIFT_DESC>::set);
    emscripten::function("api_C1_03784_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::NAND_DESC>::get);
    emscripten::function("api_C1_03784_set", &StaticFieldAccess<&parsertokens::BitwiseOperator::NAND_DESC>::set);
    emscripten::function("api_C1_03785_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::NOR_DESC>::get);
    emscripten::function("api_C1_03785_set", &StaticFieldAccess<&parsertokens::BitwiseOperator::NOR_DESC>::set);
    emscripten::function("api_C1_03786_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::XNOR_DESC>::get);
    emscripten::function("api_C1_03786_set", &StaticFieldAccess<&parsertokens::BitwiseOperator::XNOR_DESC>::set);
    emscripten::function("api_C1_03787_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::COMPL_SINCE>::get);
    emscripten::function("api_C1_03788_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::AND_SINCE>::get);
    emscripten::function("api_C1_03789_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::XOR_SINCE>::get);
    emscripten::function("api_C1_03790_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::OR_SINCE>::get);
    emscripten::function("api_C1_03791_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::LEFT_SHIFT_SINCE>::get);
    emscripten::function("api_C1_03792_get",
                         &StaticFieldAccess<&parsertokens::BitwiseOperator::RIGHT_SHIFT_SINCE>::get);
    emscripten::function("api_C1_03793_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::NAND_SINCE>::get);
    emscripten::function("api_C1_03794_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::NOR_SINCE>::get);
    emscripten::function("api_C1_03795_get", &StaticFieldAccess<&parsertokens::BitwiseOperator::XNOR_SINCE>::get);
    emscripten::function("api_C1_03802_get", &StaticFieldAccess<&parsertokens::BooleanOperator::TYPE_ID>::get);
    emscripten::function("api_C1_03803_get", &StaticFieldAccess<&parsertokens::BooleanOperator::TYPE_DESC>::get);
    emscripten::function("api_C1_03803_set", &StaticFieldAccess<&parsertokens::BooleanOperator::TYPE_DESC>::set);
    emscripten::function("api_C1_03804_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND_ID>::get);
    emscripten::function("api_C1_03805_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_ID>::get);
    emscripten::function("api_C1_03806_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR_ID>::get);
    emscripten::function("api_C1_03807_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_ID>::get);
    emscripten::function("api_C1_03808_get", &StaticFieldAccess<&parsertokens::BooleanOperator::XOR_ID>::get);
    emscripten::function("api_C1_03809_get", &StaticFieldAccess<&parsertokens::BooleanOperator::IMP_ID>::get);
    emscripten::function("api_C1_03810_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CIMP_ID>::get);
    emscripten::function("api_C1_03811_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NIMP_ID>::get);
    emscripten::function("api_C1_03812_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CNIMP_ID>::get);
    emscripten::function("api_C1_03813_get", &StaticFieldAccess<&parsertokens::BooleanOperator::EQV_ID>::get);
    emscripten::function("api_C1_03814_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NEG_ID>::get);
    emscripten::function("api_C1_03815_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NEG_STR>::get);
    emscripten::function("api_C1_03816_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NEG_STR_UNI_1>::get);
    emscripten::function("api_C1_03817_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND_STR>::get);
    emscripten::function("api_C1_03818_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND_STR_UNI_1>::get);
    emscripten::function("api_C1_03819_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND1_STR>::get);
    emscripten::function("api_C1_03820_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND2_STR>::get);
    emscripten::function("api_C1_03821_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_STR>::get);
    emscripten::function("api_C1_03822_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND1_STR>::get);
    emscripten::function("api_C1_03823_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND2_STR>::get);
    emscripten::function("api_C1_03824_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_STR_UNI_1>::get);
    emscripten::function("api_C1_03825_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_STR_UNI_2>::get);
    emscripten::function("api_C1_03826_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_STR_UNI_3>::get);
    emscripten::function("api_C1_03827_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_STR_UNI_4>::get);
    emscripten::function("api_C1_03828_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_STR_UNI_5>::get);
    emscripten::function("api_C1_03829_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_STR_UNI_6>::get);
    emscripten::function("api_C1_03830_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR_STR>::get);
    emscripten::function("api_C1_03831_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR_STR_UNI_1>::get);
    emscripten::function("api_C1_03832_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR1_STR>::get);
    emscripten::function("api_C1_03833_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR2_STR>::get);
    emscripten::function("api_C1_03834_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_STR>::get);
    emscripten::function("api_C1_03835_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR1_STR>::get);
    emscripten::function("api_C1_03836_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR2_STR>::get);
    emscripten::function("api_C1_03837_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_STR_UNI_1>::get);
    emscripten::function("api_C1_03838_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_STR_UNI_2>::get);
    emscripten::function("api_C1_03839_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_STR_UNI_3>::get);
    emscripten::function("api_C1_03840_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_STR_UNI_4>::get);
    emscripten::function("api_C1_03841_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_STR_UNI_5>::get);
    emscripten::function("api_C1_03842_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_STR_UNI_6>::get);
    emscripten::function("api_C1_03843_get", &StaticFieldAccess<&parsertokens::BooleanOperator::XOR_STR>::get);
    emscripten::function("api_C1_03844_get", &StaticFieldAccess<&parsertokens::BooleanOperator::XOR_STR_UNI_1>::get);
    emscripten::function("api_C1_03845_get", &StaticFieldAccess<&parsertokens::BooleanOperator::IMP_STR>::get);
    emscripten::function("api_C1_03846_get", &StaticFieldAccess<&parsertokens::BooleanOperator::IMP_STR_UNI_1>::get);
    emscripten::function("api_C1_03847_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CIMP_STR>::get);
    emscripten::function("api_C1_03848_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CIMP_STR_UNI_1>::get);
    emscripten::function("api_C1_03849_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NIMP_STR>::get);
    emscripten::function("api_C1_03850_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NIMP_STR_UNI_1>::get);
    emscripten::function("api_C1_03851_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CNIMP_STR>::get);
    emscripten::function("api_C1_03852_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CNIMP_STR_UNI_1>::get);
    emscripten::function("api_C1_03853_get", &StaticFieldAccess<&parsertokens::BooleanOperator::EQV_STR>::get);
    emscripten::function("api_C1_03854_get", &StaticFieldAccess<&parsertokens::BooleanOperator::EQV_STR_UNI_1>::get);
    emscripten::function("api_C1_03855_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NEG_SYN>::get);
    emscripten::function("api_C1_03856_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NEG_SYN_UNI_1>::get);
    emscripten::function("api_C1_03857_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND_SYN>::get);
    emscripten::function("api_C1_03858_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND1_SYN>::get);
    emscripten::function("api_C1_03859_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND2_SYN>::get);
    emscripten::function("api_C1_03860_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND_SYN_UNI_1>::get);
    emscripten::function("api_C1_03861_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SYN>::get);
    emscripten::function("api_C1_03862_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND1_SYN>::get);
    emscripten::function("api_C1_03863_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND2_SYN>::get);
    emscripten::function("api_C1_03864_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SYN_UNI_1>::get);
    emscripten::function("api_C1_03865_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SYN_UNI_2>::get);
    emscripten::function("api_C1_03866_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SYN_UNI_3>::get);
    emscripten::function("api_C1_03867_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SYN_UNI_4>::get);
    emscripten::function("api_C1_03868_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SYN_UNI_5>::get);
    emscripten::function("api_C1_03869_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SYN_UNI_6>::get);
    emscripten::function("api_C1_03870_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR_SYN>::get);
    emscripten::function("api_C1_03871_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR1_SYN>::get);
    emscripten::function("api_C1_03872_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR2_SYN>::get);
    emscripten::function("api_C1_03873_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR_SYN_UNI_1>::get);
    emscripten::function("api_C1_03874_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SYN>::get);
    emscripten::function("api_C1_03875_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR1_SYN>::get);
    emscripten::function("api_C1_03876_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR2_SYN>::get);
    emscripten::function("api_C1_03877_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SYN_UNI_1>::get);
    emscripten::function("api_C1_03878_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SYN_UNI_2>::get);
    emscripten::function("api_C1_03879_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SYN_UNI_3>::get);
    emscripten::function("api_C1_03880_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SYN_UNI_4>::get);
    emscripten::function("api_C1_03881_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SYN_UNI_5>::get);
    emscripten::function("api_C1_03882_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SYN_UNI_6>::get);
    emscripten::function("api_C1_03883_get", &StaticFieldAccess<&parsertokens::BooleanOperator::XOR_SYN>::get);
    emscripten::function("api_C1_03884_get", &StaticFieldAccess<&parsertokens::BooleanOperator::XOR_SYN_UNI_1>::get);
    emscripten::function("api_C1_03885_get", &StaticFieldAccess<&parsertokens::BooleanOperator::IMP_SYN>::get);
    emscripten::function("api_C1_03886_get", &StaticFieldAccess<&parsertokens::BooleanOperator::IMP_SYN_UNI_1>::get);
    emscripten::function("api_C1_03887_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CIMP_SYN>::get);
    emscripten::function("api_C1_03888_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CIMP_SYN_UNI_1>::get);
    emscripten::function("api_C1_03889_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NIMP_SYN>::get);
    emscripten::function("api_C1_03890_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NIMP_SYN_UNI_1>::get);
    emscripten::function("api_C1_03891_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CNIMP_SYN>::get);
    emscripten::function("api_C1_03892_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CNIMP_SYN_UNI_1>::get);
    emscripten::function("api_C1_03893_get", &StaticFieldAccess<&parsertokens::BooleanOperator::EQV_SYN>::get);
    emscripten::function("api_C1_03894_get", &StaticFieldAccess<&parsertokens::BooleanOperator::EQV_SYN_UNI_1>::get);
    emscripten::function("api_C1_03895_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND_DESC>::get);
    emscripten::function("api_C1_03895_set", &StaticFieldAccess<&parsertokens::BooleanOperator::AND_DESC>::set);
    emscripten::function("api_C1_03896_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR_DESC>::get);
    emscripten::function("api_C1_03896_set", &StaticFieldAccess<&parsertokens::BooleanOperator::OR_DESC>::set);
    emscripten::function("api_C1_03897_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NEG_DESC>::get);
    emscripten::function("api_C1_03897_set", &StaticFieldAccess<&parsertokens::BooleanOperator::NEG_DESC>::set);
    emscripten::function("api_C1_03898_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_DESC>::get);
    emscripten::function("api_C1_03898_set", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_DESC>::set);
    emscripten::function("api_C1_03899_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_DESC>::get);
    emscripten::function("api_C1_03899_set", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_DESC>::set);
    emscripten::function("api_C1_03900_get", &StaticFieldAccess<&parsertokens::BooleanOperator::XOR_DESC>::get);
    emscripten::function("api_C1_03900_set", &StaticFieldAccess<&parsertokens::BooleanOperator::XOR_DESC>::set);
    emscripten::function("api_C1_03901_get", &StaticFieldAccess<&parsertokens::BooleanOperator::IMP_DESC>::get);
    emscripten::function("api_C1_03901_set", &StaticFieldAccess<&parsertokens::BooleanOperator::IMP_DESC>::set);
    emscripten::function("api_C1_03902_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CIMP_DESC>::get);
    emscripten::function("api_C1_03902_set", &StaticFieldAccess<&parsertokens::BooleanOperator::CIMP_DESC>::set);
    emscripten::function("api_C1_03903_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NIMP_DESC>::get);
    emscripten::function("api_C1_03903_set", &StaticFieldAccess<&parsertokens::BooleanOperator::NIMP_DESC>::set);
    emscripten::function("api_C1_03904_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CNIMP_DESC>::get);
    emscripten::function("api_C1_03904_set", &StaticFieldAccess<&parsertokens::BooleanOperator::CNIMP_DESC>::set);
    emscripten::function("api_C1_03905_get", &StaticFieldAccess<&parsertokens::BooleanOperator::EQV_DESC>::get);
    emscripten::function("api_C1_03905_set", &StaticFieldAccess<&parsertokens::BooleanOperator::EQV_DESC>::set);
    emscripten::function("api_C1_03906_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND_SINCE>::get);
    emscripten::function("api_C1_03907_get", &StaticFieldAccess<&parsertokens::BooleanOperator::AND_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03908_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR_SINCE>::get);
    emscripten::function("api_C1_03909_get", &StaticFieldAccess<&parsertokens::BooleanOperator::OR_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03910_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NEG_SINCE>::get);
    emscripten::function("api_C1_03911_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NEG_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03912_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SINCE>::get);
    emscripten::function("api_C1_03913_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03914_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SINCE_UNI_2>::get);
    emscripten::function("api_C1_03915_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SINCE_UNI_3>::get);
    emscripten::function("api_C1_03916_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SINCE_UNI_4>::get);
    emscripten::function("api_C1_03917_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SINCE_UNI_5>::get);
    emscripten::function("api_C1_03918_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NAND_SINCE_UNI_6>::get);
    emscripten::function("api_C1_03919_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SINCE>::get);
    emscripten::function("api_C1_03920_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03921_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SINCE_UNI_2>::get);
    emscripten::function("api_C1_03922_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SINCE_UNI_3>::get);
    emscripten::function("api_C1_03923_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SINCE_UNI_4>::get);
    emscripten::function("api_C1_03924_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SINCE_UNI_5>::get);
    emscripten::function("api_C1_03925_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NOR_SINCE_UNI_6>::get);
    emscripten::function("api_C1_03926_get", &StaticFieldAccess<&parsertokens::BooleanOperator::XOR_SINCE>::get);
    emscripten::function("api_C1_03927_get", &StaticFieldAccess<&parsertokens::BooleanOperator::XOR_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03928_get", &StaticFieldAccess<&parsertokens::BooleanOperator::IMP_SINCE>::get);
    emscripten::function("api_C1_03929_get", &StaticFieldAccess<&parsertokens::BooleanOperator::IMP_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03930_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CIMP_SINCE>::get);
    emscripten::function("api_C1_03931_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CIMP_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03932_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NIMP_SINCE>::get);
    emscripten::function("api_C1_03933_get", &StaticFieldAccess<&parsertokens::BooleanOperator::NIMP_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03934_get", &StaticFieldAccess<&parsertokens::BooleanOperator::CNIMP_SINCE>::get);
    emscripten::function("api_C1_03935_get",
                         &StaticFieldAccess<&parsertokens::BooleanOperator::CNIMP_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03936_get", &StaticFieldAccess<&parsertokens::BooleanOperator::EQV_SINCE>::get);
    emscripten::function("api_C1_03937_get", &StaticFieldAccess<&parsertokens::BooleanOperator::EQV_SINCE_UNI_1>::get);
    emscripten::function("api_C1_03944_get", &StaticFieldAccess<&parsertokens::CalculusOperator::TYPE_ID>::get);
    emscripten::function("api_C1_03945_get", &StaticFieldAccess<&parsertokens::CalculusOperator::TYPE_DESC>::get);
    emscripten::function("api_C1_03945_set", &StaticFieldAccess<&parsertokens::CalculusOperator::TYPE_DESC>::set);
    emscripten::function("api_C1_03946_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_ID>::get);
    emscripten::function("api_C1_03947_get", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_ID>::get);
    emscripten::function("api_C1_03948_get", &StaticFieldAccess<&parsertokens::CalculusOperator::INT_ID>::get);
    emscripten::function("api_C1_03949_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_ID>::get);
    emscripten::function("api_C1_03950_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_LEFT_ID>::get);
    emscripten::function("api_C1_03951_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_RIGHT_ID>::get);
    emscripten::function("api_C1_03952_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DERN_ID>::get);
    emscripten::function("api_C1_03953_get", &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_ID>::get);
    emscripten::function("api_C1_03954_get", &StaticFieldAccess<&parsertokens::CalculusOperator::BACKW_DIFF_ID>::get);
    emscripten::function("api_C1_03955_get", &StaticFieldAccess<&parsertokens::CalculusOperator::AVG_ID>::get);
    emscripten::function("api_C1_03956_get", &StaticFieldAccess<&parsertokens::CalculusOperator::VAR_ID>::get);
    emscripten::function("api_C1_03957_get", &StaticFieldAccess<&parsertokens::CalculusOperator::STD_ID>::get);
    emscripten::function("api_C1_03958_get", &StaticFieldAccess<&parsertokens::CalculusOperator::MIN_ID>::get);
    emscripten::function("api_C1_03959_get", &StaticFieldAccess<&parsertokens::CalculusOperator::MAX_ID>::get);
    emscripten::function("api_C1_03960_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SOLVE_ID>::get);
    emscripten::function("api_C1_03961_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_STR>::get);
    emscripten::function("api_C1_03962_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_STR_UNI_1>::get);
    emscripten::function("api_C1_03963_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_STR_UNI_2>::get);
    emscripten::function("api_C1_03964_get", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_STR>::get);
    emscripten::function("api_C1_03965_get", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_STR_UNI_1>::get);
    emscripten::function("api_C1_03966_get", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_STR_UNI_2>::get);
    emscripten::function("api_C1_03967_get", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_STR_UNI_3>::get);
    emscripten::function("api_C1_03968_get", &StaticFieldAccess<&parsertokens::CalculusOperator::INT_STR>::get);
    emscripten::function("api_C1_03969_get", &StaticFieldAccess<&parsertokens::CalculusOperator::INT_STR_UNI_1>::get);
    emscripten::function("api_C1_03970_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_STR>::get);
    emscripten::function("api_C1_03971_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_STR_UNI_1>::get);
    emscripten::function("api_C1_03972_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_LEFT_STR>::get);
    emscripten::function("api_C1_03973_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::DER_LEFT_STR_UNI_1>::get);
    emscripten::function("api_C1_03974_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_RIGHT_STR>::get);
    emscripten::function("api_C1_03975_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::DER_RIGHT_STR_UNI_1>::get);
    emscripten::function("api_C1_03976_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DERN_STR>::get);
    emscripten::function("api_C1_03977_get", &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_STR>::get);
    emscripten::function("api_C1_03978_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_STR_UNI_1>::get);
    emscripten::function("api_C1_03979_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_STR_UNI_2>::get);
    emscripten::function("api_C1_03980_get", &StaticFieldAccess<&parsertokens::CalculusOperator::BACKW_DIFF_STR>::get);
    emscripten::function("api_C1_03981_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::BACKW_DIFF_STR_UNI_1>::get);
    emscripten::function("api_C1_03982_get", &StaticFieldAccess<&parsertokens::CalculusOperator::AVG_STR>::get);
    emscripten::function("api_C1_03983_get", &StaticFieldAccess<&parsertokens::CalculusOperator::VAR_STR>::get);
    emscripten::function("api_C1_03984_get", &StaticFieldAccess<&parsertokens::CalculusOperator::STD_STR>::get);
    emscripten::function("api_C1_03985_get", &StaticFieldAccess<&parsertokens::CalculusOperator::MIN_STR>::get);
    emscripten::function("api_C1_03986_get", &StaticFieldAccess<&parsertokens::CalculusOperator::MAX_STR>::get);
    emscripten::function("api_C1_03987_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SOLVE_STR>::get);
    emscripten::function("api_C1_03988_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_SYN>::get);
    emscripten::function("api_C1_03989_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_SYN_UNI_1>::get);
    emscripten::function("api_C1_03990_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_SYN_UNI_2>::get);
    emscripten::function("api_C1_03991_get", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_SYN>::get);
    emscripten::function("api_C1_03992_get", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_SYN_UNI_1>::get);
    emscripten::function("api_C1_03993_get", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_SYN_UNI_2>::get);
    emscripten::function("api_C1_03994_get", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_SYN_UNI_3>::get);
    emscripten::function("api_C1_03995_get", &StaticFieldAccess<&parsertokens::CalculusOperator::INT_SYN>::get);
    emscripten::function("api_C1_03996_get", &StaticFieldAccess<&parsertokens::CalculusOperator::INT_SYN_UNI_1>::get);
    emscripten::function("api_C1_03997_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_SYN>::get);
    emscripten::function("api_C1_03998_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_SYN_UNI_1>::get);
    emscripten::function("api_C1_03999_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_LEFT_SYN>::get);
    emscripten::function("api_C1_04000_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::DER_LEFT_SYN_UNI_1>::get);
    emscripten::function("api_C1_04001_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_RIGHT_SYN>::get);
    emscripten::function("api_C1_04002_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::DER_RIGHT_SYN_UNI_1>::get);
    emscripten::function("api_C1_04003_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DERN_SYN>::get);
    emscripten::function("api_C1_04004_get", &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_SYN>::get);
    emscripten::function("api_C1_04005_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_SYN_UNI_1>::get);
    emscripten::function("api_C1_04006_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_SYN_UNI_2>::get);
    emscripten::function("api_C1_04007_get", &StaticFieldAccess<&parsertokens::CalculusOperator::BACKW_DIFF_SYN>::get);
    emscripten::function("api_C1_04008_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::BACKW_DIFF_SYN_UNI_1>::get);
    emscripten::function("api_C1_04009_get", &StaticFieldAccess<&parsertokens::CalculusOperator::AVG_SYN>::get);
    emscripten::function("api_C1_04010_get", &StaticFieldAccess<&parsertokens::CalculusOperator::VAR_SYN>::get);
    emscripten::function("api_C1_04011_get", &StaticFieldAccess<&parsertokens::CalculusOperator::STD_SYN>::get);
    emscripten::function("api_C1_04012_get", &StaticFieldAccess<&parsertokens::CalculusOperator::MIN_SYN>::get);
    emscripten::function("api_C1_04013_get", &StaticFieldAccess<&parsertokens::CalculusOperator::MAX_SYN>::get);
    emscripten::function("api_C1_04014_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SOLVE_SYN>::get);
    emscripten::function("api_C1_04015_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_DESC>::get);
    emscripten::function("api_C1_04015_set", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_DESC>::set);
    emscripten::function("api_C1_04016_get", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_DESC>::get);
    emscripten::function("api_C1_04016_set", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_DESC>::set);
    emscripten::function("api_C1_04017_get", &StaticFieldAccess<&parsertokens::CalculusOperator::INT_DESC>::get);
    emscripten::function("api_C1_04017_set", &StaticFieldAccess<&parsertokens::CalculusOperator::INT_DESC>::set);
    emscripten::function("api_C1_04018_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_DESC>::get);
    emscripten::function("api_C1_04018_set", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_DESC>::set);
    emscripten::function("api_C1_04019_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_LEFT_DESC>::get);
    emscripten::function("api_C1_04019_set", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_LEFT_DESC>::set);
    emscripten::function("api_C1_04020_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_RIGHT_DESC>::get);
    emscripten::function("api_C1_04020_set", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_RIGHT_DESC>::set);
    emscripten::function("api_C1_04021_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DERN_DESC>::get);
    emscripten::function("api_C1_04021_set", &StaticFieldAccess<&parsertokens::CalculusOperator::DERN_DESC>::set);
    emscripten::function("api_C1_04022_get", &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_DESC>::get);
    emscripten::function("api_C1_04022_set", &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_DESC>::set);
    emscripten::function("api_C1_04023_get", &StaticFieldAccess<&parsertokens::CalculusOperator::BACKW_DIFF_DESC>::get);
    emscripten::function("api_C1_04023_set", &StaticFieldAccess<&parsertokens::CalculusOperator::BACKW_DIFF_DESC>::set);
    emscripten::function("api_C1_04024_get", &StaticFieldAccess<&parsertokens::CalculusOperator::AVG_DESC>::get);
    emscripten::function("api_C1_04024_set", &StaticFieldAccess<&parsertokens::CalculusOperator::AVG_DESC>::set);
    emscripten::function("api_C1_04025_get", &StaticFieldAccess<&parsertokens::CalculusOperator::VAR_DESC>::get);
    emscripten::function("api_C1_04025_set", &StaticFieldAccess<&parsertokens::CalculusOperator::VAR_DESC>::set);
    emscripten::function("api_C1_04026_get", &StaticFieldAccess<&parsertokens::CalculusOperator::STD_DESC>::get);
    emscripten::function("api_C1_04026_set", &StaticFieldAccess<&parsertokens::CalculusOperator::STD_DESC>::set);
    emscripten::function("api_C1_04027_get", &StaticFieldAccess<&parsertokens::CalculusOperator::MIN_DESC>::get);
    emscripten::function("api_C1_04027_set", &StaticFieldAccess<&parsertokens::CalculusOperator::MIN_DESC>::set);
    emscripten::function("api_C1_04028_get", &StaticFieldAccess<&parsertokens::CalculusOperator::MAX_DESC>::get);
    emscripten::function("api_C1_04028_set", &StaticFieldAccess<&parsertokens::CalculusOperator::MAX_DESC>::set);
    emscripten::function("api_C1_04029_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SOLVE_DESC>::get);
    emscripten::function("api_C1_04029_set", &StaticFieldAccess<&parsertokens::CalculusOperator::SOLVE_DESC>::set);
    emscripten::function("api_C1_04030_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_SINCE>::get);
    emscripten::function("api_C1_04031_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_SINCE_UNI_1>::get);
    emscripten::function("api_C1_04032_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SUM_SINCE_UNI_2>::get);
    emscripten::function("api_C1_04033_get", &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_SINCE>::get);
    emscripten::function("api_C1_04034_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_SINCE_UNI_1>::get);
    emscripten::function("api_C1_04035_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_SINCE_UNI_2>::get);
    emscripten::function("api_C1_04036_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::PROD_SINCE_UNI_3>::get);
    emscripten::function("api_C1_04037_get", &StaticFieldAccess<&parsertokens::CalculusOperator::INT_SINCE>::get);
    emscripten::function("api_C1_04038_get", &StaticFieldAccess<&parsertokens::CalculusOperator::INT_SINCE_UNI_1>::get);
    emscripten::function("api_C1_04039_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_SINCE>::get);
    emscripten::function("api_C1_04040_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_SINCE_UNI_1>::get);
    emscripten::function("api_C1_04041_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_LEFT_SINCE>::get);
    emscripten::function("api_C1_04042_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::DER_LEFT_SINCE_UNI_1>::get);
    emscripten::function("api_C1_04043_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DER_RIGHT_SINCE>::get);
    emscripten::function("api_C1_04044_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::DER_RIGHT_SINCE_UNI_1>::get);
    emscripten::function("api_C1_04045_get", &StaticFieldAccess<&parsertokens::CalculusOperator::DERN_SINCE>::get);
    emscripten::function("api_C1_04046_get", &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_SINCE>::get);
    emscripten::function("api_C1_04047_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_SINCE_UNI_1>::get);
    emscripten::function("api_C1_04048_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::FORW_DIFF_SINCE_UNI_2>::get);
    emscripten::function("api_C1_04049_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::BACKW_DIFF_SINCE>::get);
    emscripten::function("api_C1_04050_get",
                         &StaticFieldAccess<&parsertokens::CalculusOperator::BACKW_DIFF_SINCE_UNI_1>::get);
    emscripten::function("api_C1_04051_get", &StaticFieldAccess<&parsertokens::CalculusOperator::AVG_SINCE>::get);
    emscripten::function("api_C1_04052_get", &StaticFieldAccess<&parsertokens::CalculusOperator::VAR_SINCE>::get);
    emscripten::function("api_C1_04053_get", &StaticFieldAccess<&parsertokens::CalculusOperator::STD_SINCE>::get);
    emscripten::function("api_C1_04054_get", &StaticFieldAccess<&parsertokens::CalculusOperator::MIN_SINCE>::get);
    emscripten::function("api_C1_04055_get", &StaticFieldAccess<&parsertokens::CalculusOperator::MAX_SINCE>::get);
    emscripten::function("api_C1_04056_get", &StaticFieldAccess<&parsertokens::CalculusOperator::SOLVE_SINCE>::get);
    emscripten::function("api_C1_04063_get", &StaticFieldAccess<&parsertokens::ConstantValue::TYPE_ID>::get);
    emscripten::function("api_C1_04064_get", &StaticFieldAccess<&parsertokens::ConstantValue::TYPE_DESC>::get);
    emscripten::function("api_C1_04064_set", &StaticFieldAccess<&parsertokens::ConstantValue::TYPE_DESC>::set);
    emscripten::function("api_C1_04065_get", &StaticFieldAccess<&parsertokens::ConstantValue::PI_ID>::get);
    emscripten::function("api_C1_04066_get", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_ID>::get);
    emscripten::function("api_C1_04067_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EULER_MASCHERONI_ID>::get);
    emscripten::function("api_C1_04068_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOLDEN_RATIO_ID>::get);
    emscripten::function("api_C1_04069_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLASTIC_ID>::get);
    emscripten::function("api_C1_04070_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EMBREE_TREFETHEN_ID>::get);
    emscripten::function("api_C1_04071_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_DELTA_ID>::get);
    emscripten::function("api_C1_04072_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_ALPHA_ID>::get);
    emscripten::function("api_C1_04073_get", &StaticFieldAccess<&parsertokens::ConstantValue::TWIN_PRIME_ID>::get);
    emscripten::function("api_C1_04074_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MEISSEL_MERTEENS_ID>::get);
    emscripten::function("api_C1_04075_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_TWIN_PRIME_ID>::get);
    emscripten::function("api_C1_04076_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_PRIME_QUADR_ID>::get);
    emscripten::function("api_C1_04077_get", &StaticFieldAccess<&parsertokens::ConstantValue::BRUIJN_NEWMAN_ID>::get);
    emscripten::function("api_C1_04078_get", &StaticFieldAccess<&parsertokens::ConstantValue::CATALAN_ID>::get);
    emscripten::function("api_C1_04079_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_RAMANUJAN_ID>::get);
    emscripten::function("api_C1_04080_get", &StaticFieldAccess<&parsertokens::ConstantValue::VISWANATH_ID>::get);
    emscripten::function("api_C1_04081_get", &StaticFieldAccess<&parsertokens::ConstantValue::LEGENDRE_ID>::get);
    emscripten::function("api_C1_04082_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::RAMANUJAN_SOLDNER_ID>::get);
    emscripten::function("api_C1_04083_get", &StaticFieldAccess<&parsertokens::ConstantValue::ERDOS_BORWEIN_ID>::get);
    emscripten::function("api_C1_04084_get", &StaticFieldAccess<&parsertokens::ConstantValue::BERNSTEIN_ID>::get);
    emscripten::function("api_C1_04085_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GAUSS_KUZMIN_WIRSING_ID>::get);
    emscripten::function("api_C1_04086_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::HAFNER_SARNAK_MCCURLEY_ID>::get);
    emscripten::function("api_C1_04087_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOLOMB_DICKMAN_ID>::get);
    emscripten::function("api_C1_04088_get", &StaticFieldAccess<&parsertokens::ConstantValue::CAHEN_ID>::get);
    emscripten::function("api_C1_04089_get", &StaticFieldAccess<&parsertokens::ConstantValue::LAPLACE_LIMIT_ID>::get);
    emscripten::function("api_C1_04090_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ALLADI_GRINSTEAD_ID>::get);
    emscripten::function("api_C1_04091_get", &StaticFieldAccess<&parsertokens::ConstantValue::LENGYEL_ID>::get);
    emscripten::function("api_C1_04092_get", &StaticFieldAccess<&parsertokens::ConstantValue::LEVY_ID>::get);
    emscripten::function("api_C1_04093_get", &StaticFieldAccess<&parsertokens::ConstantValue::APERY_ID>::get);
    emscripten::function("api_C1_04094_get", &StaticFieldAccess<&parsertokens::ConstantValue::MILLS_ID>::get);
    emscripten::function("api_C1_04095_get", &StaticFieldAccess<&parsertokens::ConstantValue::BACKHOUSE_ID>::get);
    emscripten::function("api_C1_04096_get", &StaticFieldAccess<&parsertokens::ConstantValue::PORTER_ID>::get);
    emscripten::function("api_C1_04097_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIEB_QUARE_ICE_ID>::get);
    emscripten::function("api_C1_04098_get", &StaticFieldAccess<&parsertokens::ConstantValue::NIVEN_ID>::get);
    emscripten::function("api_C1_04099_get", &StaticFieldAccess<&parsertokens::ConstantValue::SIERPINSKI_ID>::get);
    emscripten::function("api_C1_04100_get", &StaticFieldAccess<&parsertokens::ConstantValue::KHINCHIN_ID>::get);
    emscripten::function("api_C1_04101_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FRANSEN_ROBINSON_ID>::get);
    emscripten::function("api_C1_04102_get", &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_ID>::get);
    emscripten::function("api_C1_04103_get", &StaticFieldAccess<&parsertokens::ConstantValue::PARABOLIC_ID>::get);
    emscripten::function("api_C1_04104_get", &StaticFieldAccess<&parsertokens::ConstantValue::OMEGA_ID>::get);
    emscripten::function("api_C1_04105_get", &StaticFieldAccess<&parsertokens::ConstantValue::MRB_ID>::get);
    emscripten::function("api_C1_04106_get", &StaticFieldAccess<&parsertokens::ConstantValue::LI2_ID>::get);
    emscripten::function("api_C1_04107_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOMPERTZ_ID>::get);
    emscripten::function("api_C1_04108_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_SPEED_ID>::get);
    emscripten::function("api_C1_04109_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVITATIONAL_CONSTANT_ID>::get);
    emscripten::function("api_C1_04110_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVIT_ACC_EARTH_ID>::get);
    emscripten::function("api_C1_04111_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_ID>::get);
    emscripten::function("api_C1_04112_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_REDUCED_ID>::get);
    emscripten::function("api_C1_04113_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_LENGTH_ID>::get);
    emscripten::function("api_C1_04114_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_MASS_ID>::get);
    emscripten::function("api_C1_04115_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_TIME_ID>::get);
    emscripten::function("api_C1_04116_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_YEAR_ID>::get);
    emscripten::function("api_C1_04117_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ASTRONOMICAL_UNIT_ID>::get);
    emscripten::function("api_C1_04118_get", &StaticFieldAccess<&parsertokens::ConstantValue::PARSEC_ID>::get);
    emscripten::function("api_C1_04119_get", &StaticFieldAccess<&parsertokens::ConstantValue::KILOPARSEC_ID>::get);
    emscripten::function("api_C1_04120_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_EQUATORIAL_ID>::get);
    emscripten::function("api_C1_04121_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_POLAR_ID>::get);
    emscripten::function("api_C1_04122_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_MEAN_ID>::get);
    emscripten::function("api_C1_04123_get", &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_MASS_ID>::get);
    emscripten::function("api_C1_04124_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_SEMI_MAJOR_AXIS_ID>::get);
    emscripten::function("api_C1_04125_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MOON_RADIUS_MEAN_ID>::get);
    emscripten::function("api_C1_04126_get", &StaticFieldAccess<&parsertokens::ConstantValue::MOON_MASS_ID>::get);
    emscripten::function("api_C1_04127_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MONN_SEMI_MAJOR_AXIS_ID>::get);
    emscripten::function("api_C1_04128_get", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_RADIUS_ID>::get);
    emscripten::function("api_C1_04129_get", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_MASS_ID>::get);
    emscripten::function("api_C1_04130_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_RADIUS_MEAN_ID>::get);
    emscripten::function("api_C1_04131_get", &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_MASS_ID>::get);
    emscripten::function("api_C1_04132_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_SEMI_MAJOR_AXIS_ID>::get);
    emscripten::function("api_C1_04133_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_RADIUS_MEAN_ID>::get);
    emscripten::function("api_C1_04134_get", &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_MASS_ID>::get);
    emscripten::function("api_C1_04135_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_SEMI_MAJOR_AXIS_ID>::get);
    emscripten::function("api_C1_04136_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_RADIUS_MEAN_ID>::get);
    emscripten::function("api_C1_04137_get", &StaticFieldAccess<&parsertokens::ConstantValue::MARS_MASS_ID>::get);
    emscripten::function("api_C1_04138_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_SEMI_MAJOR_AXIS_ID>::get);
    emscripten::function("api_C1_04139_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_RADIUS_MEAN_ID>::get);
    emscripten::function("api_C1_04140_get", &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_MASS_ID>::get);
    emscripten::function("api_C1_04141_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_SEMI_MAJOR_AXIS_ID>::get);
    emscripten::function("api_C1_04142_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_RADIUS_MEAN_ID>::get);
    emscripten::function("api_C1_04143_get", &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_MASS_ID>::get);
    emscripten::function("api_C1_04144_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_SEMI_MAJOR_AXIS_ID>::get);
    emscripten::function("api_C1_04145_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_RADIUS_MEAN_ID>::get);
    emscripten::function("api_C1_04146_get", &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_MASS_ID>::get);
    emscripten::function("api_C1_04147_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_SEMI_MAJOR_AXIS_ID>::get);
    emscripten::function("api_C1_04148_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_RADIUS_MEAN_ID>::get);
    emscripten::function("api_C1_04149_get", &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_MASS_ID>::get);
    emscripten::function("api_C1_04150_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_ID>::get);
    emscripten::function("api_C1_04151_get", &StaticFieldAccess<&parsertokens::ConstantValue::TRUE_ID>::get);
    emscripten::function("api_C1_04152_get", &StaticFieldAccess<&parsertokens::ConstantValue::FALSE_ID>::get);
    emscripten::function("api_C1_04153_get", &StaticFieldAccess<&parsertokens::ConstantValue::NPAR_ID>::get);
    emscripten::function("api_C1_04154_get", &StaticFieldAccess<&parsertokens::ConstantValue::NAN_ID>::get);
    emscripten::function("api_C1_04155_get", &StaticFieldAccess<&parsertokens::ConstantValue::NaN>::get);
    emscripten::function("api_C1_04156_get", &StaticFieldAccess<&parsertokens::ConstantValue::PI_STR>::get);
    emscripten::function("api_C1_04157_get", &StaticFieldAccess<&parsertokens::ConstantValue::PI_STR_UNI_1>::get);
    emscripten::function("api_C1_04158_get", &StaticFieldAccess<&parsertokens::ConstantValue::PI_STR_UNI_2>::get);
    emscripten::function("api_C1_04159_get", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_STR>::get);
    emscripten::function("api_C1_04160_get", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_STR_UNI_1>::get);
    emscripten::function("api_C1_04161_get", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_STR_UNI_2>::get);
    emscripten::function("api_C1_04162_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EULER_MASCHERONI_STR>::get);
    emscripten::function("api_C1_04163_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOLDEN_RATIO_STR>::get);
    emscripten::function("api_C1_04164_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLASTIC_STR>::get);
    emscripten::function("api_C1_04165_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EMBREE_TREFETHEN_STR>::get);
    emscripten::function("api_C1_04166_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_DELTA_STR>::get);
    emscripten::function("api_C1_04167_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_ALPHA_STR>::get);
    emscripten::function("api_C1_04168_get", &StaticFieldAccess<&parsertokens::ConstantValue::TWIN_PRIME_STR>::get);
    emscripten::function("api_C1_04169_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MEISSEL_MERTEENS_STR>::get);
    emscripten::function("api_C1_04170_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_TWIN_PRIME_STR>::get);
    emscripten::function("api_C1_04171_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_PRIME_QUADR_STR>::get);
    emscripten::function("api_C1_04172_get", &StaticFieldAccess<&parsertokens::ConstantValue::BRUIJN_NEWMAN_STR>::get);
    emscripten::function("api_C1_04173_get", &StaticFieldAccess<&parsertokens::ConstantValue::CATALAN_STR>::get);
    emscripten::function("api_C1_04174_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_RAMANUJAN_STR>::get);
    emscripten::function("api_C1_04175_get", &StaticFieldAccess<&parsertokens::ConstantValue::VISWANATH_STR>::get);
    emscripten::function("api_C1_04176_get", &StaticFieldAccess<&parsertokens::ConstantValue::LEGENDRE_STR>::get);
    emscripten::function("api_C1_04177_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::RAMANUJAN_SOLDNER_STR>::get);
    emscripten::function("api_C1_04178_get", &StaticFieldAccess<&parsertokens::ConstantValue::ERDOS_BORWEIN_STR>::get);
    emscripten::function("api_C1_04179_get", &StaticFieldAccess<&parsertokens::ConstantValue::BERNSTEIN_STR>::get);
    emscripten::function("api_C1_04180_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GAUSS_KUZMIN_WIRSING_STR>::get);
    emscripten::function("api_C1_04181_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::HAFNER_SARNAK_MCCURLEY_STR>::get);
    emscripten::function("api_C1_04182_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOLOMB_DICKMAN_STR>::get);
    emscripten::function("api_C1_04183_get", &StaticFieldAccess<&parsertokens::ConstantValue::CAHEN_STR>::get);
    emscripten::function("api_C1_04184_get", &StaticFieldAccess<&parsertokens::ConstantValue::LAPLACE_LIMIT_STR>::get);
    emscripten::function("api_C1_04185_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ALLADI_GRINSTEAD_STR>::get);
    emscripten::function("api_C1_04186_get", &StaticFieldAccess<&parsertokens::ConstantValue::LENGYEL_STR>::get);
    emscripten::function("api_C1_04187_get", &StaticFieldAccess<&parsertokens::ConstantValue::LEVY_STR>::get);
    emscripten::function("api_C1_04188_get", &StaticFieldAccess<&parsertokens::ConstantValue::APERY_STR>::get);
    emscripten::function("api_C1_04189_get", &StaticFieldAccess<&parsertokens::ConstantValue::MILLS_STR>::get);
    emscripten::function("api_C1_04190_get", &StaticFieldAccess<&parsertokens::ConstantValue::BACKHOUSE_STR>::get);
    emscripten::function("api_C1_04191_get", &StaticFieldAccess<&parsertokens::ConstantValue::PORTER_STR>::get);
    emscripten::function("api_C1_04192_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIEB_QUARE_ICE_STR>::get);
    emscripten::function("api_C1_04193_get", &StaticFieldAccess<&parsertokens::ConstantValue::NIVEN_STR>::get);
    emscripten::function("api_C1_04194_get", &StaticFieldAccess<&parsertokens::ConstantValue::SIERPINSKI_STR>::get);
    emscripten::function("api_C1_04195_get", &StaticFieldAccess<&parsertokens::ConstantValue::KHINCHIN_STR>::get);
    emscripten::function("api_C1_04196_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FRANSEN_ROBINSON_STR>::get);
    emscripten::function("api_C1_04197_get", &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_STR>::get);
    emscripten::function("api_C1_04198_get", &StaticFieldAccess<&parsertokens::ConstantValue::PARABOLIC_STR>::get);
    emscripten::function("api_C1_04199_get", &StaticFieldAccess<&parsertokens::ConstantValue::OMEGA_STR>::get);
    emscripten::function("api_C1_04200_get", &StaticFieldAccess<&parsertokens::ConstantValue::MRB_STR>::get);
    emscripten::function("api_C1_04201_get", &StaticFieldAccess<&parsertokens::ConstantValue::LI2_STR>::get);
    emscripten::function("api_C1_04202_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOMPERTZ_STR>::get);
    emscripten::function("api_C1_04203_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_SPEED_STR>::get);
    emscripten::function("api_C1_04204_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVITATIONAL_CONSTANT_STR>::get);
    emscripten::function("api_C1_04205_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVIT_ACC_EARTH_STR>::get);
    emscripten::function("api_C1_04206_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_STR>::get);
    emscripten::function("api_C1_04207_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_REDUCED_STR>::get);
    emscripten::function("api_C1_04208_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_LENGTH_STR>::get);
    emscripten::function("api_C1_04209_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_MASS_STR>::get);
    emscripten::function("api_C1_04210_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_TIME_STR>::get);
    emscripten::function("api_C1_04211_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_YEAR_STR>::get);
    emscripten::function("api_C1_04212_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ASTRONOMICAL_UNIT_STR>::get);
    emscripten::function("api_C1_04213_get", &StaticFieldAccess<&parsertokens::ConstantValue::PARSEC_STR>::get);
    emscripten::function("api_C1_04214_get", &StaticFieldAccess<&parsertokens::ConstantValue::KILOPARSEC_STR>::get);
    emscripten::function("api_C1_04215_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_EQUATORIAL_STR>::get);
    emscripten::function("api_C1_04216_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_POLAR_STR>::get);
    emscripten::function("api_C1_04217_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_MEAN_STR>::get);
    emscripten::function("api_C1_04218_get", &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_MASS_STR>::get);
    emscripten::function("api_C1_04219_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_SEMI_MAJOR_AXIS_STR>::get);
    emscripten::function("api_C1_04220_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MOON_RADIUS_MEAN_STR>::get);
    emscripten::function("api_C1_04221_get", &StaticFieldAccess<&parsertokens::ConstantValue::MOON_MASS_STR>::get);
    emscripten::function("api_C1_04222_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MONN_SEMI_MAJOR_AXIS_STR>::get);
    emscripten::function("api_C1_04223_get", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_RADIUS_STR>::get);
    emscripten::function("api_C1_04224_get", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_MASS_STR>::get);
    emscripten::function("api_C1_04225_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_RADIUS_MEAN_STR>::get);
    emscripten::function("api_C1_04226_get", &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_MASS_STR>::get);
    emscripten::function("api_C1_04227_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_SEMI_MAJOR_AXIS_STR>::get);
    emscripten::function("api_C1_04228_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_RADIUS_MEAN_STR>::get);
    emscripten::function("api_C1_04229_get", &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_MASS_STR>::get);
    emscripten::function("api_C1_04230_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_SEMI_MAJOR_AXIS_STR>::get);
    emscripten::function("api_C1_04231_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_RADIUS_MEAN_STR>::get);
    emscripten::function("api_C1_04232_get", &StaticFieldAccess<&parsertokens::ConstantValue::MARS_MASS_STR>::get);
    emscripten::function("api_C1_04233_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_SEMI_MAJOR_AXIS_STR>::get);
    emscripten::function("api_C1_04234_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_RADIUS_MEAN_STR>::get);
    emscripten::function("api_C1_04235_get", &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_MASS_STR>::get);
    emscripten::function("api_C1_04236_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_SEMI_MAJOR_AXIS_STR>::get);
    emscripten::function("api_C1_04237_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_RADIUS_MEAN_STR>::get);
    emscripten::function("api_C1_04238_get", &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_MASS_STR>::get);
    emscripten::function("api_C1_04239_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_SEMI_MAJOR_AXIS_STR>::get);
    emscripten::function("api_C1_04240_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_RADIUS_MEAN_STR>::get);
    emscripten::function("api_C1_04241_get", &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_MASS_STR>::get);
    emscripten::function("api_C1_04242_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_SEMI_MAJOR_AXIS_STR>::get);
    emscripten::function("api_C1_04243_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_RADIUS_MEAN_STR>::get);
    emscripten::function("api_C1_04244_get", &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_MASS_STR>::get);
    emscripten::function("api_C1_04245_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_STR>::get);
    emscripten::function("api_C1_04246_get", &StaticFieldAccess<&parsertokens::ConstantValue::TRUE_STR>::get);
    emscripten::function("api_C1_04247_get", &StaticFieldAccess<&parsertokens::ConstantValue::FALSE_STR>::get);
    emscripten::function("api_C1_04248_get", &StaticFieldAccess<&parsertokens::ConstantValue::NPAR_STR>::get);
    emscripten::function("api_C1_04249_get", &StaticFieldAccess<&parsertokens::ConstantValue::NAN_STR>::get);
    emscripten::function("api_C1_04250_get", &StaticFieldAccess<&parsertokens::ConstantValue::PI_SYN>::get);
    emscripten::function("api_C1_04251_get", &StaticFieldAccess<&parsertokens::ConstantValue::PI_SYN_UNI_1>::get);
    emscripten::function("api_C1_04252_get", &StaticFieldAccess<&parsertokens::ConstantValue::PI_SYN_UNI_2>::get);
    emscripten::function("api_C1_04253_get", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_SYN>::get);
    emscripten::function("api_C1_04254_get", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_SYN_UNI_1>::get);
    emscripten::function("api_C1_04255_get", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_SYN_UNI_2>::get);
    emscripten::function("api_C1_04256_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EULER_MASCHERONI_SYN>::get);
    emscripten::function("api_C1_04257_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOLDEN_RATIO_SYN>::get);
    emscripten::function("api_C1_04258_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLASTIC_SYN>::get);
    emscripten::function("api_C1_04259_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EMBREE_TREFETHEN_SYN>::get);
    emscripten::function("api_C1_04260_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_DELTA_SYN>::get);
    emscripten::function("api_C1_04261_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_ALPHA_SYN>::get);
    emscripten::function("api_C1_04262_get", &StaticFieldAccess<&parsertokens::ConstantValue::TWIN_PRIME_SYN>::get);
    emscripten::function("api_C1_04263_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MEISSEL_MERTEENS_SYN>::get);
    emscripten::function("api_C1_04264_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_TWIN_PRIME_SYN>::get);
    emscripten::function("api_C1_04265_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_PRIME_QUADR_SYN>::get);
    emscripten::function("api_C1_04266_get", &StaticFieldAccess<&parsertokens::ConstantValue::BRUIJN_NEWMAN_SYN>::get);
    emscripten::function("api_C1_04267_get", &StaticFieldAccess<&parsertokens::ConstantValue::CATALAN_SYN>::get);
    emscripten::function("api_C1_04268_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_RAMANUJAN_SYN>::get);
    emscripten::function("api_C1_04269_get", &StaticFieldAccess<&parsertokens::ConstantValue::VISWANATH_SYN>::get);
    emscripten::function("api_C1_04270_get", &StaticFieldAccess<&parsertokens::ConstantValue::LEGENDRE_SYN>::get);
    emscripten::function("api_C1_04271_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::RAMANUJAN_SOLDNER_SYN>::get);
    emscripten::function("api_C1_04272_get", &StaticFieldAccess<&parsertokens::ConstantValue::ERDOS_BORWEIN_SYN>::get);
    emscripten::function("api_C1_04273_get", &StaticFieldAccess<&parsertokens::ConstantValue::BERNSTEIN_SYN>::get);
    emscripten::function("api_C1_04274_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GAUSS_KUZMIN_WIRSING_SYN>::get);
    emscripten::function("api_C1_04275_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::HAFNER_SARNAK_MCCURLEY_SYN>::get);
    emscripten::function("api_C1_04276_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOLOMB_DICKMAN_SYN>::get);
    emscripten::function("api_C1_04277_get", &StaticFieldAccess<&parsertokens::ConstantValue::CAHEN_SYN>::get);
    emscripten::function("api_C1_04278_get", &StaticFieldAccess<&parsertokens::ConstantValue::LAPLACE_LIMIT_SYN>::get);
    emscripten::function("api_C1_04279_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ALLADI_GRINSTEAD_SYN>::get);
    emscripten::function("api_C1_04280_get", &StaticFieldAccess<&parsertokens::ConstantValue::LENGYEL_SYN>::get);
    emscripten::function("api_C1_04281_get", &StaticFieldAccess<&parsertokens::ConstantValue::LEVY_SYN>::get);
    emscripten::function("api_C1_04282_get", &StaticFieldAccess<&parsertokens::ConstantValue::APERY_SYN>::get);
    emscripten::function("api_C1_04283_get", &StaticFieldAccess<&parsertokens::ConstantValue::MILLS_SYN>::get);
    emscripten::function("api_C1_04284_get", &StaticFieldAccess<&parsertokens::ConstantValue::BACKHOUSE_SYN>::get);
    emscripten::function("api_C1_04285_get", &StaticFieldAccess<&parsertokens::ConstantValue::PORTER_SYN>::get);
    emscripten::function("api_C1_04286_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIEB_QUARE_ICE_SYN>::get);
    emscripten::function("api_C1_04287_get", &StaticFieldAccess<&parsertokens::ConstantValue::NIVEN_SYN>::get);
    emscripten::function("api_C1_04288_get", &StaticFieldAccess<&parsertokens::ConstantValue::SIERPINSKI_SYN>::get);
    emscripten::function("api_C1_04289_get", &StaticFieldAccess<&parsertokens::ConstantValue::KHINCHIN_SYN>::get);
    emscripten::function("api_C1_04290_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FRANSEN_ROBINSON_SYN>::get);
    emscripten::function("api_C1_04291_get", &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_SYN>::get);
    emscripten::function("api_C1_04292_get", &StaticFieldAccess<&parsertokens::ConstantValue::PARABOLIC_SYN>::get);
    emscripten::function("api_C1_04293_get", &StaticFieldAccess<&parsertokens::ConstantValue::OMEGA_SYN>::get);
    emscripten::function("api_C1_04294_get", &StaticFieldAccess<&parsertokens::ConstantValue::MRB_SYN>::get);
    emscripten::function("api_C1_04295_get", &StaticFieldAccess<&parsertokens::ConstantValue::LI2_SYN>::get);
    emscripten::function("api_C1_04296_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOMPERTZ_SYN>::get);
    emscripten::function("api_C1_04297_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_SPEED_SYN>::get);
    emscripten::function("api_C1_04298_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVITATIONAL_CONSTANT_SYN>::get);
    emscripten::function("api_C1_04299_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVIT_ACC_EARTH_SYN>::get);
    emscripten::function("api_C1_04300_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_SYN>::get);
    emscripten::function("api_C1_04301_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_REDUCED_SYN>::get);
    emscripten::function("api_C1_04302_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_LENGTH_SYN>::get);
    emscripten::function("api_C1_04303_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_MASS_SYN>::get);
    emscripten::function("api_C1_04304_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_TIME_SYN>::get);
    emscripten::function("api_C1_04305_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_YEAR_SYN>::get);
    emscripten::function("api_C1_04306_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ASTRONOMICAL_UNIT_SYN>::get);
    emscripten::function("api_C1_04307_get", &StaticFieldAccess<&parsertokens::ConstantValue::PARSEC_SYN>::get);
    emscripten::function("api_C1_04308_get", &StaticFieldAccess<&parsertokens::ConstantValue::KILOPARSEC_SYN>::get);
    emscripten::function("api_C1_04309_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_EQUATORIAL_SYN>::get);
    emscripten::function("api_C1_04310_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_POLAR_SYN>::get);
    emscripten::function("api_C1_04311_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_MEAN_SYN>::get);
    emscripten::function("api_C1_04312_get", &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_MASS_SYN>::get);
    emscripten::function("api_C1_04313_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_SEMI_MAJOR_AXIS_SYN>::get);
    emscripten::function("api_C1_04314_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MOON_RADIUS_MEAN_SYN>::get);
    emscripten::function("api_C1_04315_get", &StaticFieldAccess<&parsertokens::ConstantValue::MOON_MASS_SYN>::get);
    emscripten::function("api_C1_04316_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MONN_SEMI_MAJOR_AXIS_SYN>::get);
    emscripten::function("api_C1_04317_get", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_RADIUS_SYN>::get);
    emscripten::function("api_C1_04318_get", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_MASS_SYN>::get);
    emscripten::function("api_C1_04319_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_RADIUS_MEAN_SYN>::get);
    emscripten::function("api_C1_04320_get", &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_MASS_SYN>::get);
    emscripten::function("api_C1_04321_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_SEMI_MAJOR_AXIS_SYN>::get);
    emscripten::function("api_C1_04322_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_RADIUS_MEAN_SYN>::get);
    emscripten::function("api_C1_04323_get", &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_MASS_SYN>::get);
    emscripten::function("api_C1_04324_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_SEMI_MAJOR_AXIS_SYN>::get);
    emscripten::function("api_C1_04325_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_RADIUS_MEAN_SYN>::get);
    emscripten::function("api_C1_04326_get", &StaticFieldAccess<&parsertokens::ConstantValue::MARS_MASS_SYN>::get);
    emscripten::function("api_C1_04327_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_SEMI_MAJOR_AXIS_SYN>::get);
    emscripten::function("api_C1_04328_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_RADIUS_MEAN_SYN>::get);
    emscripten::function("api_C1_04329_get", &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_MASS_SYN>::get);
    emscripten::function("api_C1_04330_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_SEMI_MAJOR_AXIS_SYN>::get);
    emscripten::function("api_C1_04331_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_RADIUS_MEAN_SYN>::get);
    emscripten::function("api_C1_04332_get", &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_MASS_SYN>::get);
    emscripten::function("api_C1_04333_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_SEMI_MAJOR_AXIS_SYN>::get);
    emscripten::function("api_C1_04334_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_RADIUS_MEAN_SYN>::get);
    emscripten::function("api_C1_04335_get", &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_MASS_SYN>::get);
    emscripten::function("api_C1_04336_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_SEMI_MAJOR_AXIS_SYN>::get);
    emscripten::function("api_C1_04337_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_RADIUS_MEAN_SYN>::get);
    emscripten::function("api_C1_04338_get", &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_MASS_SYN>::get);
    emscripten::function("api_C1_04339_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_SYN>::get);
    emscripten::function("api_C1_04340_get", &StaticFieldAccess<&parsertokens::ConstantValue::TRUE_SYN>::get);
    emscripten::function("api_C1_04341_get", &StaticFieldAccess<&parsertokens::ConstantValue::FALSE_SYN>::get);
    emscripten::function("api_C1_04342_get", &StaticFieldAccess<&parsertokens::ConstantValue::NPAR_SYN>::get);
    emscripten::function("api_C1_04343_get", &StaticFieldAccess<&parsertokens::ConstantValue::NAN_SYN>::get);
    emscripten::function("api_C1_04344_get", &StaticFieldAccess<&parsertokens::ConstantValue::PI_DESC>::get);
    emscripten::function("api_C1_04344_set", &StaticFieldAccess<&parsertokens::ConstantValue::PI_DESC>::set);
    emscripten::function("api_C1_04345_get", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_DESC>::get);
    emscripten::function("api_C1_04345_set", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_DESC>::set);
    emscripten::function("api_C1_04346_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EULER_MASCHERONI_DESC>::get);
    emscripten::function("api_C1_04346_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EULER_MASCHERONI_DESC>::set);
    emscripten::function("api_C1_04347_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOLDEN_RATIO_DESC>::get);
    emscripten::function("api_C1_04347_set", &StaticFieldAccess<&parsertokens::ConstantValue::GOLDEN_RATIO_DESC>::set);
    emscripten::function("api_C1_04348_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLASTIC_DESC>::get);
    emscripten::function("api_C1_04348_set", &StaticFieldAccess<&parsertokens::ConstantValue::PLASTIC_DESC>::set);
    emscripten::function("api_C1_04349_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EMBREE_TREFETHEN_DESC>::get);
    emscripten::function("api_C1_04349_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EMBREE_TREFETHEN_DESC>::set);
    emscripten::function("api_C1_04350_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_DELTA_DESC>::get);
    emscripten::function("api_C1_04350_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_DELTA_DESC>::set);
    emscripten::function("api_C1_04351_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_ALPHA_DESC>::get);
    emscripten::function("api_C1_04351_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_ALPHA_DESC>::set);
    emscripten::function("api_C1_04352_get", &StaticFieldAccess<&parsertokens::ConstantValue::TWIN_PRIME_DESC>::get);
    emscripten::function("api_C1_04352_set", &StaticFieldAccess<&parsertokens::ConstantValue::TWIN_PRIME_DESC>::set);
    emscripten::function("api_C1_04353_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MEISSEL_MERTEENS_DESC>::get);
    emscripten::function("api_C1_04353_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MEISSEL_MERTEENS_DESC>::set);
    emscripten::function("api_C1_04354_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_TWIN_PRIME_DESC>::get);
    emscripten::function("api_C1_04354_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_TWIN_PRIME_DESC>::set);
    emscripten::function("api_C1_04355_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_PRIME_QUADR_DESC>::get);
    emscripten::function("api_C1_04355_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_PRIME_QUADR_DESC>::set);
    emscripten::function("api_C1_04356_get", &StaticFieldAccess<&parsertokens::ConstantValue::BRUIJN_NEWMAN_DESC>::get);
    emscripten::function("api_C1_04356_set", &StaticFieldAccess<&parsertokens::ConstantValue::BRUIJN_NEWMAN_DESC>::set);
    emscripten::function("api_C1_04357_get", &StaticFieldAccess<&parsertokens::ConstantValue::CATALAN_DESC>::get);
    emscripten::function("api_C1_04357_set", &StaticFieldAccess<&parsertokens::ConstantValue::CATALAN_DESC>::set);
    emscripten::function("api_C1_04358_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_RAMANUJAN_DESC>::get);
    emscripten::function("api_C1_04358_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_RAMANUJAN_DESC>::set);
    emscripten::function("api_C1_04359_get", &StaticFieldAccess<&parsertokens::ConstantValue::VISWANATH_DESC>::get);
    emscripten::function("api_C1_04359_set", &StaticFieldAccess<&parsertokens::ConstantValue::VISWANATH_DESC>::set);
    emscripten::function("api_C1_04360_get", &StaticFieldAccess<&parsertokens::ConstantValue::LEGENDRE_DESC>::get);
    emscripten::function("api_C1_04360_set", &StaticFieldAccess<&parsertokens::ConstantValue::LEGENDRE_DESC>::set);
    emscripten::function("api_C1_04361_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::RAMANUJAN_SOLDNER_DESC>::get);
    emscripten::function("api_C1_04361_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::RAMANUJAN_SOLDNER_DESC>::set);
    emscripten::function("api_C1_04362_get", &StaticFieldAccess<&parsertokens::ConstantValue::ERDOS_BORWEIN_DESC>::get);
    emscripten::function("api_C1_04362_set", &StaticFieldAccess<&parsertokens::ConstantValue::ERDOS_BORWEIN_DESC>::set);
    emscripten::function("api_C1_04363_get", &StaticFieldAccess<&parsertokens::ConstantValue::BERNSTEIN_DESC>::get);
    emscripten::function("api_C1_04363_set", &StaticFieldAccess<&parsertokens::ConstantValue::BERNSTEIN_DESC>::set);
    emscripten::function("api_C1_04364_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GAUSS_KUZMIN_WIRSING_DESC>::get);
    emscripten::function("api_C1_04364_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GAUSS_KUZMIN_WIRSING_DESC>::set);
    emscripten::function("api_C1_04365_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::HAFNER_SARNAK_MCCURLEY_DESC>::get);
    emscripten::function("api_C1_04365_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::HAFNER_SARNAK_MCCURLEY_DESC>::set);
    emscripten::function("api_C1_04366_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GOLOMB_DICKMAN_DESC>::get);
    emscripten::function("api_C1_04366_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GOLOMB_DICKMAN_DESC>::set);
    emscripten::function("api_C1_04367_get", &StaticFieldAccess<&parsertokens::ConstantValue::CAHEN_DESC>::get);
    emscripten::function("api_C1_04367_set", &StaticFieldAccess<&parsertokens::ConstantValue::CAHEN_DESC>::set);
    emscripten::function("api_C1_04368_get", &StaticFieldAccess<&parsertokens::ConstantValue::LAPLACE_LIMIT_DESC>::get);
    emscripten::function("api_C1_04368_set", &StaticFieldAccess<&parsertokens::ConstantValue::LAPLACE_LIMIT_DESC>::set);
    emscripten::function("api_C1_04369_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ALLADI_GRINSTEAD_DESC>::get);
    emscripten::function("api_C1_04369_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ALLADI_GRINSTEAD_DESC>::set);
    emscripten::function("api_C1_04370_get", &StaticFieldAccess<&parsertokens::ConstantValue::LENGYEL_DESC>::get);
    emscripten::function("api_C1_04370_set", &StaticFieldAccess<&parsertokens::ConstantValue::LENGYEL_DESC>::set);
    emscripten::function("api_C1_04371_get", &StaticFieldAccess<&parsertokens::ConstantValue::LEVY_DESC>::get);
    emscripten::function("api_C1_04371_set", &StaticFieldAccess<&parsertokens::ConstantValue::LEVY_DESC>::set);
    emscripten::function("api_C1_04372_get", &StaticFieldAccess<&parsertokens::ConstantValue::APERY_DESC>::get);
    emscripten::function("api_C1_04372_set", &StaticFieldAccess<&parsertokens::ConstantValue::APERY_DESC>::set);
    emscripten::function("api_C1_04373_get", &StaticFieldAccess<&parsertokens::ConstantValue::MILLS_DESC>::get);
    emscripten::function("api_C1_04373_set", &StaticFieldAccess<&parsertokens::ConstantValue::MILLS_DESC>::set);
    emscripten::function("api_C1_04374_get", &StaticFieldAccess<&parsertokens::ConstantValue::BACKHOUSE_DESC>::get);
    emscripten::function("api_C1_04374_set", &StaticFieldAccess<&parsertokens::ConstantValue::BACKHOUSE_DESC>::set);
    emscripten::function("api_C1_04375_get", &StaticFieldAccess<&parsertokens::ConstantValue::PORTER_DESC>::get);
    emscripten::function("api_C1_04375_set", &StaticFieldAccess<&parsertokens::ConstantValue::PORTER_DESC>::set);
    emscripten::function("api_C1_04376_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::LIEB_QUARE_ICE_DESC>::get);
    emscripten::function("api_C1_04376_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::LIEB_QUARE_ICE_DESC>::set);
    emscripten::function("api_C1_04377_get", &StaticFieldAccess<&parsertokens::ConstantValue::NIVEN_DESC>::get);
    emscripten::function("api_C1_04377_set", &StaticFieldAccess<&parsertokens::ConstantValue::NIVEN_DESC>::set);
    emscripten::function("api_C1_04378_get", &StaticFieldAccess<&parsertokens::ConstantValue::SIERPINSKI_DESC>::get);
    emscripten::function("api_C1_04378_set", &StaticFieldAccess<&parsertokens::ConstantValue::SIERPINSKI_DESC>::set);
    emscripten::function("api_C1_04379_get", &StaticFieldAccess<&parsertokens::ConstantValue::KHINCHIN_DESC>::get);
    emscripten::function("api_C1_04379_set", &StaticFieldAccess<&parsertokens::ConstantValue::KHINCHIN_DESC>::set);
    emscripten::function("api_C1_04380_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FRANSEN_ROBINSON_DESC>::get);
    emscripten::function("api_C1_04380_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FRANSEN_ROBINSON_DESC>::set);
    emscripten::function("api_C1_04381_get", &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_DESC>::get);
    emscripten::function("api_C1_04381_set", &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_DESC>::set);
    emscripten::function("api_C1_04382_get", &StaticFieldAccess<&parsertokens::ConstantValue::PARABOLIC_DESC>::get);
    emscripten::function("api_C1_04382_set", &StaticFieldAccess<&parsertokens::ConstantValue::PARABOLIC_DESC>::set);
    emscripten::function("api_C1_04383_get", &StaticFieldAccess<&parsertokens::ConstantValue::OMEGA_DESC>::get);
    emscripten::function("api_C1_04383_set", &StaticFieldAccess<&parsertokens::ConstantValue::OMEGA_DESC>::set);
    emscripten::function("api_C1_04384_get", &StaticFieldAccess<&parsertokens::ConstantValue::MRB_DESC>::get);
    emscripten::function("api_C1_04384_set", &StaticFieldAccess<&parsertokens::ConstantValue::MRB_DESC>::set);
    emscripten::function("api_C1_04385_get", &StaticFieldAccess<&parsertokens::ConstantValue::LI2_DESC>::get);
    emscripten::function("api_C1_04385_set", &StaticFieldAccess<&parsertokens::ConstantValue::LI2_DESC>::set);
    emscripten::function("api_C1_04386_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOMPERTZ_DESC>::get);
    emscripten::function("api_C1_04386_set", &StaticFieldAccess<&parsertokens::ConstantValue::GOMPERTZ_DESC>::set);
    emscripten::function("api_C1_04387_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_SPEED_DESC>::get);
    emscripten::function("api_C1_04387_set", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_SPEED_DESC>::set);
    emscripten::function("api_C1_04388_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVITATIONAL_CONSTANT_DESC>::get);
    emscripten::function("api_C1_04388_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVITATIONAL_CONSTANT_DESC>::set);
    emscripten::function("api_C1_04389_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVIT_ACC_EARTH_DESC>::get);
    emscripten::function("api_C1_04389_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVIT_ACC_EARTH_DESC>::set);
    emscripten::function("api_C1_04390_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_DESC>::get);
    emscripten::function("api_C1_04390_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_DESC>::set);
    emscripten::function("api_C1_04391_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_REDUCED_DESC>::get);
    emscripten::function("api_C1_04391_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_REDUCED_DESC>::set);
    emscripten::function("api_C1_04392_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_LENGTH_DESC>::get);
    emscripten::function("api_C1_04392_set", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_LENGTH_DESC>::set);
    emscripten::function("api_C1_04393_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_MASS_DESC>::get);
    emscripten::function("api_C1_04393_set", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_MASS_DESC>::set);
    emscripten::function("api_C1_04394_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_TIME_DESC>::get);
    emscripten::function("api_C1_04394_set", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_TIME_DESC>::set);
    emscripten::function("api_C1_04395_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_YEAR_DESC>::get);
    emscripten::function("api_C1_04395_set", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_YEAR_DESC>::set);
    emscripten::function("api_C1_04396_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ASTRONOMICAL_UNIT_DESC>::get);
    emscripten::function("api_C1_04396_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ASTRONOMICAL_UNIT_DESC>::set);
    emscripten::function("api_C1_04397_get", &StaticFieldAccess<&parsertokens::ConstantValue::PARSEC_DESC>::get);
    emscripten::function("api_C1_04397_set", &StaticFieldAccess<&parsertokens::ConstantValue::PARSEC_DESC>::set);
    emscripten::function("api_C1_04398_get", &StaticFieldAccess<&parsertokens::ConstantValue::KILOPARSEC_DESC>::get);
    emscripten::function("api_C1_04398_set", &StaticFieldAccess<&parsertokens::ConstantValue::KILOPARSEC_DESC>::set);
    emscripten::function("api_C1_04399_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_EQUATORIAL_DESC>::get);
    emscripten::function("api_C1_04399_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_EQUATORIAL_DESC>::set);
    emscripten::function("api_C1_04400_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_POLAR_DESC>::get);
    emscripten::function("api_C1_04400_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_POLAR_DESC>::set);
    emscripten::function("api_C1_04401_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_MEAN_DESC>::get);
    emscripten::function("api_C1_04401_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_MEAN_DESC>::set);
    emscripten::function("api_C1_04402_get", &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_MASS_DESC>::get);
    emscripten::function("api_C1_04402_set", &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_MASS_DESC>::set);
    emscripten::function("api_C1_04403_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_SEMI_MAJOR_AXIS_DESC>::get);
    emscripten::function("api_C1_04403_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_SEMI_MAJOR_AXIS_DESC>::set);
    emscripten::function("api_C1_04404_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MOON_RADIUS_MEAN_DESC>::get);
    emscripten::function("api_C1_04404_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MOON_RADIUS_MEAN_DESC>::set);
    emscripten::function("api_C1_04405_get", &StaticFieldAccess<&parsertokens::ConstantValue::MOON_MASS_DESC>::get);
    emscripten::function("api_C1_04405_set", &StaticFieldAccess<&parsertokens::ConstantValue::MOON_MASS_DESC>::set);
    emscripten::function("api_C1_04406_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MOON_SEMI_MAJOR_AXIS_DESC>::get);
    emscripten::function("api_C1_04406_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MOON_SEMI_MAJOR_AXIS_DESC>::set);
    emscripten::function("api_C1_04407_get", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_RADIUS_DESC>::get);
    emscripten::function("api_C1_04407_set", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_RADIUS_DESC>::set);
    emscripten::function("api_C1_04408_get", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_MASS_DESC>::get);
    emscripten::function("api_C1_04408_set", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_MASS_DESC>::set);
    emscripten::function("api_C1_04409_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_RADIUS_MEAN_DESC>::get);
    emscripten::function("api_C1_04409_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_RADIUS_MEAN_DESC>::set);
    emscripten::function("api_C1_04410_get", &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_MASS_DESC>::get);
    emscripten::function("api_C1_04410_set", &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_MASS_DESC>::set);
    emscripten::function("api_C1_04411_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_SEMI_MAJOR_AXIS_DESC>::get);
    emscripten::function("api_C1_04411_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_SEMI_MAJOR_AXIS_DESC>::set);
    emscripten::function("api_C1_04412_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_RADIUS_MEAN_DESC>::get);
    emscripten::function("api_C1_04412_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_RADIUS_MEAN_DESC>::set);
    emscripten::function("api_C1_04413_get", &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_MASS_DESC>::get);
    emscripten::function("api_C1_04413_set", &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_MASS_DESC>::set);
    emscripten::function("api_C1_04414_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_SEMI_MAJOR_AXIS_DESC>::get);
    emscripten::function("api_C1_04414_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_SEMI_MAJOR_AXIS_DESC>::set);
    emscripten::function("api_C1_04415_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_RADIUS_MEAN_DESC>::get);
    emscripten::function("api_C1_04415_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_RADIUS_MEAN_DESC>::set);
    emscripten::function("api_C1_04416_get", &StaticFieldAccess<&parsertokens::ConstantValue::MARS_MASS_DESC>::get);
    emscripten::function("api_C1_04416_set", &StaticFieldAccess<&parsertokens::ConstantValue::MARS_MASS_DESC>::set);
    emscripten::function("api_C1_04417_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_SEMI_MAJOR_AXIS_DESC>::get);
    emscripten::function("api_C1_04417_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_SEMI_MAJOR_AXIS_DESC>::set);
    emscripten::function("api_C1_04418_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_RADIUS_MEAN_DESC>::get);
    emscripten::function("api_C1_04418_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_RADIUS_MEAN_DESC>::set);
    emscripten::function("api_C1_04419_get", &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_MASS_DESC>::get);
    emscripten::function("api_C1_04419_set", &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_MASS_DESC>::set);
    emscripten::function("api_C1_04420_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_SEMI_MAJOR_AXIS_DESC>::get);
    emscripten::function("api_C1_04420_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_SEMI_MAJOR_AXIS_DESC>::set);
    emscripten::function("api_C1_04421_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_RADIUS_MEAN_DESC>::get);
    emscripten::function("api_C1_04421_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_RADIUS_MEAN_DESC>::set);
    emscripten::function("api_C1_04422_get", &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_MASS_DESC>::get);
    emscripten::function("api_C1_04422_set", &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_MASS_DESC>::set);
    emscripten::function("api_C1_04423_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_SEMI_MAJOR_AXIS_DESC>::get);
    emscripten::function("api_C1_04423_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_SEMI_MAJOR_AXIS_DESC>::set);
    emscripten::function("api_C1_04424_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_RADIUS_MEAN_DESC>::get);
    emscripten::function("api_C1_04424_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_RADIUS_MEAN_DESC>::set);
    emscripten::function("api_C1_04425_get", &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_MASS_DESC>::get);
    emscripten::function("api_C1_04425_set", &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_MASS_DESC>::set);
    emscripten::function("api_C1_04426_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_SEMI_MAJOR_AXIS_DESC>::get);
    emscripten::function("api_C1_04426_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_SEMI_MAJOR_AXIS_DESC>::set);
    emscripten::function("api_C1_04427_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_RADIUS_MEAN_DESC>::get);
    emscripten::function("api_C1_04427_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_RADIUS_MEAN_DESC>::set);
    emscripten::function("api_C1_04428_get", &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_MASS_DESC>::get);
    emscripten::function("api_C1_04428_set", &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_MASS_DESC>::set);
    emscripten::function("api_C1_04429_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_DESC>::get);
    emscripten::function("api_C1_04429_set",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_DESC>::set);
    emscripten::function("api_C1_04430_get", &StaticFieldAccess<&parsertokens::ConstantValue::TRUE_DESC>::get);
    emscripten::function("api_C1_04430_set", &StaticFieldAccess<&parsertokens::ConstantValue::TRUE_DESC>::set);
    emscripten::function("api_C1_04431_get", &StaticFieldAccess<&parsertokens::ConstantValue::FALSE_DESC>::get);
    emscripten::function("api_C1_04431_set", &StaticFieldAccess<&parsertokens::ConstantValue::FALSE_DESC>::set);
    emscripten::function("api_C1_04432_get", &StaticFieldAccess<&parsertokens::ConstantValue::NPAR_DESC>::get);
    emscripten::function("api_C1_04432_set", &StaticFieldAccess<&parsertokens::ConstantValue::NPAR_DESC>::set);
    emscripten::function("api_C1_04433_get", &StaticFieldAccess<&parsertokens::ConstantValue::NAN_DESC>::get);
    emscripten::function("api_C1_04433_set", &StaticFieldAccess<&parsertokens::ConstantValue::NAN_DESC>::set);
    emscripten::function("api_C1_04434_get", &StaticFieldAccess<&parsertokens::ConstantValue::PI_SINCE>::get);
    emscripten::function("api_C1_04435_get", &StaticFieldAccess<&parsertokens::ConstantValue::PI_SINCE_UNI_1>::get);
    emscripten::function("api_C1_04436_get", &StaticFieldAccess<&parsertokens::ConstantValue::PI_SINCE_UNI_2>::get);
    emscripten::function("api_C1_04437_get", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_SINCE>::get);
    emscripten::function("api_C1_04438_get", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_SINCE_UNI_1>::get);
    emscripten::function("api_C1_04439_get", &StaticFieldAccess<&parsertokens::ConstantValue::EULER_SINCE_UNI_2>::get);
    emscripten::function("api_C1_04440_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EULER_MASCHERONI_SINCE>::get);
    emscripten::function("api_C1_04441_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOLDEN_RATIO_SINCE>::get);
    emscripten::function("api_C1_04442_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLASTIC_SINCE>::get);
    emscripten::function("api_C1_04443_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EMBREE_TREFETHEN_SINCE>::get);
    emscripten::function("api_C1_04444_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_DELTA_SINCE>::get);
    emscripten::function("api_C1_04445_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FEIGENBAUM_ALPHA_SINCE>::get);
    emscripten::function("api_C1_04446_get", &StaticFieldAccess<&parsertokens::ConstantValue::TWIN_PRIME_SINCE>::get);
    emscripten::function("api_C1_04447_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MEISSEL_MERTEENS_SINCE>::get);
    emscripten::function("api_C1_04448_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_TWIN_PRIME_SINCE>::get);
    emscripten::function("api_C1_04449_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRAUN_PRIME_QUADR_SINCE>::get);
    emscripten::function("api_C1_04450_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::BRUIJN_NEWMAN_SINCE>::get);
    emscripten::function("api_C1_04451_get", &StaticFieldAccess<&parsertokens::ConstantValue::CATALAN_SINCE>::get);
    emscripten::function("api_C1_04452_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_RAMANUJAN_SINCE>::get);
    emscripten::function("api_C1_04453_get", &StaticFieldAccess<&parsertokens::ConstantValue::VISWANATH_SINCE>::get);
    emscripten::function("api_C1_04454_get", &StaticFieldAccess<&parsertokens::ConstantValue::LEGENDRE_SINCE>::get);
    emscripten::function("api_C1_04455_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::RAMANUJAN_SOLDNER_SINCE>::get);
    emscripten::function("api_C1_04456_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ERDOS_BORWEIN_SINCE>::get);
    emscripten::function("api_C1_04457_get", &StaticFieldAccess<&parsertokens::ConstantValue::BERNSTEIN_SINCE>::get);
    emscripten::function("api_C1_04458_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GAUSS_KUZMIN_WIRSING_SINCE>::get);
    emscripten::function("api_C1_04459_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::HAFNER_SARNAK_MCCURLEY_SINCE>::get);
    emscripten::function("api_C1_04460_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GOLOMB_DICKMAN_SINCE>::get);
    emscripten::function("api_C1_04461_get", &StaticFieldAccess<&parsertokens::ConstantValue::CAHEN_SINCE>::get);
    emscripten::function("api_C1_04462_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::LAPLACE_LIMIT_SINCE>::get);
    emscripten::function("api_C1_04463_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ALLADI_GRINSTEAD_SINCE>::get);
    emscripten::function("api_C1_04464_get", &StaticFieldAccess<&parsertokens::ConstantValue::LENGYEL_SINCE>::get);
    emscripten::function("api_C1_04465_get", &StaticFieldAccess<&parsertokens::ConstantValue::LEVY_SINCE>::get);
    emscripten::function("api_C1_04466_get", &StaticFieldAccess<&parsertokens::ConstantValue::APERY_SINCE>::get);
    emscripten::function("api_C1_04467_get", &StaticFieldAccess<&parsertokens::ConstantValue::MILLS_SINCE>::get);
    emscripten::function("api_C1_04468_get", &StaticFieldAccess<&parsertokens::ConstantValue::BACKHOUSE_SINCE>::get);
    emscripten::function("api_C1_04469_get", &StaticFieldAccess<&parsertokens::ConstantValue::PORTER_SINCE>::get);
    emscripten::function("api_C1_04470_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::LIEB_QUARE_ICE_SINCE>::get);
    emscripten::function("api_C1_04471_get", &StaticFieldAccess<&parsertokens::ConstantValue::NIVEN_SINCE>::get);
    emscripten::function("api_C1_04472_get", &StaticFieldAccess<&parsertokens::ConstantValue::SIERPINSKI_SINCE>::get);
    emscripten::function("api_C1_04473_get", &StaticFieldAccess<&parsertokens::ConstantValue::KHINCHIN_SINCE>::get);
    emscripten::function("api_C1_04474_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::FRANSEN_ROBINSON_SINCE>::get);
    emscripten::function("api_C1_04475_get", &StaticFieldAccess<&parsertokens::ConstantValue::LANDAU_SINCE>::get);
    emscripten::function("api_C1_04476_get", &StaticFieldAccess<&parsertokens::ConstantValue::PARABOLIC_SINCE>::get);
    emscripten::function("api_C1_04477_get", &StaticFieldAccess<&parsertokens::ConstantValue::OMEGA_SINCE>::get);
    emscripten::function("api_C1_04478_get", &StaticFieldAccess<&parsertokens::ConstantValue::MRB_SINCE>::get);
    emscripten::function("api_C1_04479_get", &StaticFieldAccess<&parsertokens::ConstantValue::LI2_SINCE>::get);
    emscripten::function("api_C1_04480_get", &StaticFieldAccess<&parsertokens::ConstantValue::GOMPERTZ_SINCE>::get);
    emscripten::function("api_C1_04481_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_SPEED_SINCE>::get);
    emscripten::function("api_C1_04482_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVITATIONAL_CONSTANT_SINCE>::get);
    emscripten::function("api_C1_04483_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::GRAVIT_ACC_EARTH_SINCE>::get);
    emscripten::function("api_C1_04484_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_SINCE>::get);
    emscripten::function("api_C1_04485_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_CONSTANT_REDUCED_SINCE>::get);
    emscripten::function("api_C1_04486_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_LENGTH_SINCE>::get);
    emscripten::function("api_C1_04487_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_MASS_SINCE>::get);
    emscripten::function("api_C1_04488_get", &StaticFieldAccess<&parsertokens::ConstantValue::PLANCK_TIME_SINCE>::get);
    emscripten::function("api_C1_04489_get", &StaticFieldAccess<&parsertokens::ConstantValue::LIGHT_YEAR_SINCE>::get);
    emscripten::function("api_C1_04490_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::ASTRONOMICAL_UNIT_SINCE>::get);
    emscripten::function("api_C1_04491_get", &StaticFieldAccess<&parsertokens::ConstantValue::PARSEC_SINCE>::get);
    emscripten::function("api_C1_04492_get", &StaticFieldAccess<&parsertokens::ConstantValue::KILOPARSEC_SINCE>::get);
    emscripten::function("api_C1_04493_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_EQUATORIAL_SINCE>::get);
    emscripten::function("api_C1_04494_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_POLAR_SINCE>::get);
    emscripten::function("api_C1_04495_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_RADIUS_MEAN_SINCE>::get);
    emscripten::function("api_C1_04496_get", &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_MASS_SINCE>::get);
    emscripten::function("api_C1_04497_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::EARTH_SEMI_MAJOR_AXIS_SINCE>::get);
    emscripten::function("api_C1_04498_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MOON_RADIUS_MEAN_SINCE>::get);
    emscripten::function("api_C1_04499_get", &StaticFieldAccess<&parsertokens::ConstantValue::MOON_MASS_SINCE>::get);
    emscripten::function("api_C1_04500_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MONN_SEMI_MAJOR_AXIS_SINCE>::get);
    emscripten::function("api_C1_04501_get", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_RADIUS_SINCE>::get);
    emscripten::function("api_C1_04502_get", &StaticFieldAccess<&parsertokens::ConstantValue::SOLAR_MASS_SINCE>::get);
    emscripten::function("api_C1_04503_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_RADIUS_MEAN_SINCE>::get);
    emscripten::function("api_C1_04504_get", &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_MASS_SINCE>::get);
    emscripten::function("api_C1_04505_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MERCURY_SEMI_MAJOR_AXIS_SINCE>::get);
    emscripten::function("api_C1_04506_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_RADIUS_MEAN_SINCE>::get);
    emscripten::function("api_C1_04507_get", &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_MASS_SINCE>::get);
    emscripten::function("api_C1_04508_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::VENUS_SEMI_MAJOR_AXIS_SINCE>::get);
    emscripten::function("api_C1_04509_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_RADIUS_MEAN_SINCE>::get);
    emscripten::function("api_C1_04510_get", &StaticFieldAccess<&parsertokens::ConstantValue::MARS_MASS_SINCE>::get);
    emscripten::function("api_C1_04511_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::MARS_SEMI_MAJOR_AXIS_SINCE>::get);
    emscripten::function("api_C1_04512_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_RADIUS_MEAN_SINCE>::get);
    emscripten::function("api_C1_04513_get", &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_MASS_SINCE>::get);
    emscripten::function("api_C1_04514_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::JUPITER_SEMI_MAJOR_AXIS_SINCE>::get);
    emscripten::function("api_C1_04515_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_RADIUS_MEAN_SINCE>::get);
    emscripten::function("api_C1_04516_get", &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_MASS_SINCE>::get);
    emscripten::function("api_C1_04517_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::SATURN_SEMI_MAJOR_AXIS_SINCE>::get);
    emscripten::function("api_C1_04518_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_RADIUS_MEAN_SINCE>::get);
    emscripten::function("api_C1_04519_get", &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_MASS_SINCE>::get);
    emscripten::function("api_C1_04520_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::URANUS_SEMI_MAJOR_AXIS_SINCE>::get);
    emscripten::function("api_C1_04521_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_RADIUS_MEAN_SINCE>::get);
    emscripten::function("api_C1_04522_get", &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_MASS_SINCE>::get);
    emscripten::function("api_C1_04523_get",
                         &StaticFieldAccess<&parsertokens::ConstantValue::NEPTUNE_SEMI_MAJOR_AXIS_SINCE>::get);
    emscripten::function("api_C1_04524_get", &StaticFieldAccess<&parsertokens::ConstantValue::TRUE_SINCE>::get);
    emscripten::function("api_C1_04525_get", &StaticFieldAccess<&parsertokens::ConstantValue::FALSE_SINCE>::get);
    emscripten::function("api_C1_04526_get", &StaticFieldAccess<&parsertokens::ConstantValue::NPAR_SINCE>::get);
    emscripten::function("api_C1_04527_get", &StaticFieldAccess<&parsertokens::ConstantValue::NAN_SINCE>::get);
    emscripten::function("api_C1_04534_get", &StaticFieldAccess<&parsertokens::Function1Arg::TYPE_ID>::get);
    emscripten::function("api_C1_04535_get", &StaticFieldAccess<&parsertokens::Function1Arg::TYPE_DESC>::get);
    emscripten::function("api_C1_04535_set", &StaticFieldAccess<&parsertokens::Function1Arg::TYPE_DESC>::set);
    emscripten::function("api_C1_04536_get", &StaticFieldAccess<&parsertokens::Function1Arg::SIN_ID>::get);
    emscripten::function("api_C1_04537_get", &StaticFieldAccess<&parsertokens::Function1Arg::COS_ID>::get);
    emscripten::function("api_C1_04538_get", &StaticFieldAccess<&parsertokens::Function1Arg::TAN_ID>::get);
    emscripten::function("api_C1_04539_get", &StaticFieldAccess<&parsertokens::Function1Arg::CTAN_ID>::get);
    emscripten::function("api_C1_04540_get", &StaticFieldAccess<&parsertokens::Function1Arg::SEC_ID>::get);
    emscripten::function("api_C1_04541_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSEC_ID>::get);
    emscripten::function("api_C1_04542_get", &StaticFieldAccess<&parsertokens::Function1Arg::ASIN_ID>::get);
    emscripten::function("api_C1_04543_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOS_ID>::get);
    emscripten::function("api_C1_04544_get", &StaticFieldAccess<&parsertokens::Function1Arg::ATAN_ID>::get);
    emscripten::function("api_C1_04545_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACTAN_ID>::get);
    emscripten::function("api_C1_04546_get", &StaticFieldAccess<&parsertokens::Function1Arg::LN_ID>::get);
    emscripten::function("api_C1_04547_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG2_ID>::get);
    emscripten::function("api_C1_04548_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG10_ID>::get);
    emscripten::function("api_C1_04549_get", &StaticFieldAccess<&parsertokens::Function1Arg::RAD_ID>::get);
    emscripten::function("api_C1_04550_get", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_ID>::get);
    emscripten::function("api_C1_04551_get", &StaticFieldAccess<&parsertokens::Function1Arg::SQRT_ID>::get);
    emscripten::function("api_C1_04552_get", &StaticFieldAccess<&parsertokens::Function1Arg::SINH_ID>::get);
    emscripten::function("api_C1_04553_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSH_ID>::get);
    emscripten::function("api_C1_04554_get", &StaticFieldAccess<&parsertokens::Function1Arg::TANH_ID>::get);
    emscripten::function("api_C1_04555_get", &StaticFieldAccess<&parsertokens::Function1Arg::COTH_ID>::get);
    emscripten::function("api_C1_04556_get", &StaticFieldAccess<&parsertokens::Function1Arg::SECH_ID>::get);
    emscripten::function("api_C1_04557_get", &StaticFieldAccess<&parsertokens::Function1Arg::CSCH_ID>::get);
    emscripten::function("api_C1_04558_get", &StaticFieldAccess<&parsertokens::Function1Arg::DEG_ID>::get);
    emscripten::function("api_C1_04559_get", &StaticFieldAccess<&parsertokens::Function1Arg::ABS_ID>::get);
    emscripten::function("api_C1_04560_get", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_ID>::get);
    emscripten::function("api_C1_04561_get", &StaticFieldAccess<&parsertokens::Function1Arg::FLOOR_ID>::get);
    emscripten::function("api_C1_04562_get", &StaticFieldAccess<&parsertokens::Function1Arg::CEIL_ID>::get);
    emscripten::function("api_C1_04563_get", &StaticFieldAccess<&parsertokens::Function1Arg::NOT_ID>::get);
    emscripten::function("api_C1_04564_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSINH_ID>::get);
    emscripten::function("api_C1_04565_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOSH_ID>::get);
    emscripten::function("api_C1_04566_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARTANH_ID>::get);
    emscripten::function("api_C1_04567_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOTH_ID>::get);
    emscripten::function("api_C1_04568_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSECH_ID>::get);
    emscripten::function("api_C1_04569_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSCH_ID>::get);
    emscripten::function("api_C1_04570_get", &StaticFieldAccess<&parsertokens::Function1Arg::SA_ID>::get);
    emscripten::function("api_C1_04571_get", &StaticFieldAccess<&parsertokens::Function1Arg::SINC_ID>::get);
    emscripten::function("api_C1_04572_get", &StaticFieldAccess<&parsertokens::Function1Arg::BELL_NUMBER_ID>::get);
    emscripten::function("api_C1_04573_get", &StaticFieldAccess<&parsertokens::Function1Arg::LUCAS_NUMBER_ID>::get);
    emscripten::function("api_C1_04574_get", &StaticFieldAccess<&parsertokens::Function1Arg::FIBONACCI_NUMBER_ID>::get);
    emscripten::function("api_C1_04575_get", &StaticFieldAccess<&parsertokens::Function1Arg::HARMONIC_NUMBER_ID>::get);
    emscripten::function("api_C1_04576_get", &StaticFieldAccess<&parsertokens::Function1Arg::IS_PRIME_ID>::get);
    emscripten::function("api_C1_04577_get", &StaticFieldAccess<&parsertokens::Function1Arg::PRIME_COUNT_ID>::get);
    emscripten::function("api_C1_04578_get", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_INT_ID>::get);
    emscripten::function("api_C1_04579_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_INT_ID>::get);
    emscripten::function("api_C1_04580_get", &StaticFieldAccess<&parsertokens::Function1Arg::OFF_LOG_INT_ID>::get);
    emscripten::function("api_C1_04581_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_ID>::get);
    emscripten::function("api_C1_04582_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_ID>::get);
    emscripten::function("api_C1_04583_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_INV_ID>::get);
    emscripten::function("api_C1_04584_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_INV_ID>::get);
    emscripten::function("api_C1_04585_get", &StaticFieldAccess<&parsertokens::Function1Arg::ULP_ID>::get);
    emscripten::function("api_C1_04586_get", &StaticFieldAccess<&parsertokens::Function1Arg::ISNAN_ID>::get);
    emscripten::function("api_C1_04587_get", &StaticFieldAccess<&parsertokens::Function1Arg::NDIG10_ID>::get);
    emscripten::function("api_C1_04588_get", &StaticFieldAccess<&parsertokens::Function1Arg::NFACT_ID>::get);
    emscripten::function("api_C1_04589_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSEC_ID>::get);
    emscripten::function("api_C1_04590_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCSC_ID>::get);
    emscripten::function("api_C1_04591_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAMMA_ID>::get);
    emscripten::function("api_C1_04592_get", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W0_ID>::get);
    emscripten::function("api_C1_04593_get", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W1_ID>::get);
    emscripten::function("api_C1_04594_get", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_GAMMA_ID>::get);
    emscripten::function("api_C1_04595_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_GAMMA_ID>::get);
    emscripten::function("api_C1_04596_get", &StaticFieldAccess<&parsertokens::Function1Arg::DI_GAMMA_ID>::get);
    emscripten::function("api_C1_04597_get", &StaticFieldAccess<&parsertokens::Function1Arg::PARAM_ID>::get);
    emscripten::function("api_C1_04598_get", &StaticFieldAccess<&parsertokens::Function1Arg::RND_STUDENT_T_ID>::get);
    emscripten::function("api_C1_04599_get", &StaticFieldAccess<&parsertokens::Function1Arg::RND_CHI2_ID>::get);
    emscripten::function("api_C1_04600_get", &StaticFieldAccess<&parsertokens::Function1Arg::SIN_STR>::get);
    emscripten::function("api_C1_04601_get", &StaticFieldAccess<&parsertokens::Function1Arg::COS_STR>::get);
    emscripten::function("api_C1_04602_get", &StaticFieldAccess<&parsertokens::Function1Arg::TAN_STR>::get);
    emscripten::function("api_C1_04603_get", &StaticFieldAccess<&parsertokens::Function1Arg::TG_STR>::get);
    emscripten::function("api_C1_04604_get", &StaticFieldAccess<&parsertokens::Function1Arg::CTAN_STR>::get);
    emscripten::function("api_C1_04605_get", &StaticFieldAccess<&parsertokens::Function1Arg::CTG_STR>::get);
    emscripten::function("api_C1_04606_get", &StaticFieldAccess<&parsertokens::Function1Arg::COT_STR>::get);
    emscripten::function("api_C1_04607_get", &StaticFieldAccess<&parsertokens::Function1Arg::SEC_STR>::get);
    emscripten::function("api_C1_04608_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSEC_STR>::get);
    emscripten::function("api_C1_04609_get", &StaticFieldAccess<&parsertokens::Function1Arg::CSC_STR>::get);
    emscripten::function("api_C1_04610_get", &StaticFieldAccess<&parsertokens::Function1Arg::ASIN_STR>::get);
    emscripten::function("api_C1_04611_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSIN_STR>::get);
    emscripten::function("api_C1_04612_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSIN_STR>::get);
    emscripten::function("api_C1_04613_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOS_STR>::get);
    emscripten::function("api_C1_04614_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOS_STR>::get);
    emscripten::function("api_C1_04615_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCOS_STR>::get);
    emscripten::function("api_C1_04616_get", &StaticFieldAccess<&parsertokens::Function1Arg::ATAN_STR>::get);
    emscripten::function("api_C1_04617_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCTAN_STR>::get);
    emscripten::function("api_C1_04618_get", &StaticFieldAccess<&parsertokens::Function1Arg::ATG_STR>::get);
    emscripten::function("api_C1_04619_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCTG_STR>::get);
    emscripten::function("api_C1_04620_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACTAN_STR>::get);
    emscripten::function("api_C1_04621_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCTAN_STR>::get);
    emscripten::function("api_C1_04622_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACTG_STR>::get);
    emscripten::function("api_C1_04623_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCTG_STR>::get);
    emscripten::function("api_C1_04624_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOT_STR>::get);
    emscripten::function("api_C1_04625_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCOT_STR>::get);
    emscripten::function("api_C1_04626_get", &StaticFieldAccess<&parsertokens::Function1Arg::LN_STR>::get);
    emscripten::function("api_C1_04627_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG2_STR>::get);
    emscripten::function("api_C1_04628_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG10_STR>::get);
    emscripten::function("api_C1_04629_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG10_STR_LG>::get);
    emscripten::function("api_C1_04630_get", &StaticFieldAccess<&parsertokens::Function1Arg::RAD_STR>::get);
    emscripten::function("api_C1_04631_get", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_STR>::get);
    emscripten::function("api_C1_04632_get", &StaticFieldAccess<&parsertokens::Function1Arg::SQRT_STR>::get);
    emscripten::function("api_C1_04633_get", &StaticFieldAccess<&parsertokens::Function1Arg::SINH_STR>::get);
    emscripten::function("api_C1_04634_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSH_STR>::get);
    emscripten::function("api_C1_04635_get", &StaticFieldAccess<&parsertokens::Function1Arg::TANH_STR>::get);
    emscripten::function("api_C1_04636_get", &StaticFieldAccess<&parsertokens::Function1Arg::TGH_STR>::get);
    emscripten::function("api_C1_04637_get", &StaticFieldAccess<&parsertokens::Function1Arg::CTANH_STR>::get);
    emscripten::function("api_C1_04638_get", &StaticFieldAccess<&parsertokens::Function1Arg::COTH_STR>::get);
    emscripten::function("api_C1_04639_get", &StaticFieldAccess<&parsertokens::Function1Arg::CTGH_STR>::get);
    emscripten::function("api_C1_04640_get", &StaticFieldAccess<&parsertokens::Function1Arg::SECH_STR>::get);
    emscripten::function("api_C1_04641_get", &StaticFieldAccess<&parsertokens::Function1Arg::CSCH_STR>::get);
    emscripten::function("api_C1_04642_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSECH_STR>::get);
    emscripten::function("api_C1_04643_get", &StaticFieldAccess<&parsertokens::Function1Arg::DEG_STR>::get);
    emscripten::function("api_C1_04644_get", &StaticFieldAccess<&parsertokens::Function1Arg::ABS_STR>::get);
    emscripten::function("api_C1_04645_get", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_STR>::get);
    emscripten::function("api_C1_04646_get", &StaticFieldAccess<&parsertokens::Function1Arg::FLOOR_STR>::get);
    emscripten::function("api_C1_04647_get", &StaticFieldAccess<&parsertokens::Function1Arg::CEIL_STR>::get);
    emscripten::function("api_C1_04648_get", &StaticFieldAccess<&parsertokens::Function1Arg::NOT_STR>::get);
    emscripten::function("api_C1_04649_get", &StaticFieldAccess<&parsertokens::Function1Arg::ASINH_STR>::get);
    emscripten::function("api_C1_04650_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSINH_STR>::get);
    emscripten::function("api_C1_04651_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSINH_STR>::get);
    emscripten::function("api_C1_04652_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOSH_STR>::get);
    emscripten::function("api_C1_04653_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOSH_STR>::get);
    emscripten::function("api_C1_04654_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCOSH_STR>::get);
    emscripten::function("api_C1_04655_get", &StaticFieldAccess<&parsertokens::Function1Arg::ATANH_STR>::get);
    emscripten::function("api_C1_04656_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCTANH_STR>::get);
    emscripten::function("api_C1_04657_get", &StaticFieldAccess<&parsertokens::Function1Arg::ATGH_STR>::get);
    emscripten::function("api_C1_04658_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCTGH_STR>::get);
    emscripten::function("api_C1_04659_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACTANH_STR>::get);
    emscripten::function("api_C1_04660_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCTANH_STR>::get);
    emscripten::function("api_C1_04661_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOTH_STR>::get);
    emscripten::function("api_C1_04662_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOTH_STR>::get);
    emscripten::function("api_C1_04663_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCOTH_STR>::get);
    emscripten::function("api_C1_04664_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACTGH_STR>::get);
    emscripten::function("api_C1_04665_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCTGH_STR>::get);
    emscripten::function("api_C1_04666_get", &StaticFieldAccess<&parsertokens::Function1Arg::ASECH_STR>::get);
    emscripten::function("api_C1_04667_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSECH_STR>::get);
    emscripten::function("api_C1_04668_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSECH_STR>::get);
    emscripten::function("api_C1_04669_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACSCH_STR>::get);
    emscripten::function("api_C1_04670_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSCH_STR>::get);
    emscripten::function("api_C1_04671_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCSCH_STR>::get);
    emscripten::function("api_C1_04672_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOSECH_STR>::get);
    emscripten::function("api_C1_04673_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOSECH_STR>::get);
    emscripten::function("api_C1_04674_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCOSECH_STR>::get);
    emscripten::function("api_C1_04675_get", &StaticFieldAccess<&parsertokens::Function1Arg::SA_STR>::get);
    emscripten::function("api_C1_04676_get", &StaticFieldAccess<&parsertokens::Function1Arg::SA1_STR>::get);
    emscripten::function("api_C1_04677_get", &StaticFieldAccess<&parsertokens::Function1Arg::SINC_STR>::get);
    emscripten::function("api_C1_04678_get", &StaticFieldAccess<&parsertokens::Function1Arg::BELL_NUMBER_STR>::get);
    emscripten::function("api_C1_04679_get", &StaticFieldAccess<&parsertokens::Function1Arg::LUCAS_NUMBER_STR>::get);
    emscripten::function("api_C1_04680_get",
                         &StaticFieldAccess<&parsertokens::Function1Arg::FIBONACCI_NUMBER_STR>::get);
    emscripten::function("api_C1_04681_get", &StaticFieldAccess<&parsertokens::Function1Arg::HARMONIC_NUMBER_STR>::get);
    emscripten::function("api_C1_04682_get", &StaticFieldAccess<&parsertokens::Function1Arg::IS_PRIME_STR>::get);
    emscripten::function("api_C1_04683_get", &StaticFieldAccess<&parsertokens::Function1Arg::PRIME_COUNT_STR>::get);
    emscripten::function("api_C1_04684_get", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_INT_STR>::get);
    emscripten::function("api_C1_04685_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_INT_STR>::get);
    emscripten::function("api_C1_04686_get", &StaticFieldAccess<&parsertokens::Function1Arg::OFF_LOG_INT_STR>::get);
    emscripten::function("api_C1_04687_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_STR>::get);
    emscripten::function("api_C1_04688_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_STR>::get);
    emscripten::function("api_C1_04689_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_INV_STR>::get);
    emscripten::function("api_C1_04690_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_INV_STR>::get);
    emscripten::function("api_C1_04691_get", &StaticFieldAccess<&parsertokens::Function1Arg::ULP_STR>::get);
    emscripten::function("api_C1_04692_get", &StaticFieldAccess<&parsertokens::Function1Arg::ISNAN_STR>::get);
    emscripten::function("api_C1_04693_get", &StaticFieldAccess<&parsertokens::Function1Arg::NDIG10_STR>::get);
    emscripten::function("api_C1_04694_get", &StaticFieldAccess<&parsertokens::Function1Arg::NFACT_STR>::get);
    emscripten::function("api_C1_04695_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSEC_STR>::get);
    emscripten::function("api_C1_04696_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCSC_STR>::get);
    emscripten::function("api_C1_04697_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAMMA_STR>::get);
    emscripten::function("api_C1_04698_get", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W0_STR>::get);
    emscripten::function("api_C1_04699_get", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W1_STR>::get);
    emscripten::function("api_C1_04700_get", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_GAMMA_STR>::get);
    emscripten::function("api_C1_04701_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_GAMMA_STR>::get);
    emscripten::function("api_C1_04702_get", &StaticFieldAccess<&parsertokens::Function1Arg::DI_GAMMA_STR>::get);
    emscripten::function("api_C1_04703_get", &StaticFieldAccess<&parsertokens::Function1Arg::PARAM_STR>::get);
    emscripten::function("api_C1_04704_get", &StaticFieldAccess<&parsertokens::Function1Arg::RND_STUDENT_T_STR>::get);
    emscripten::function("api_C1_04705_get", &StaticFieldAccess<&parsertokens::Function1Arg::RND_CHI2_STR>::get);
    emscripten::function("api_C1_04706_get", &StaticFieldAccess<&parsertokens::Function1Arg::SIN_SYN>::get);
    emscripten::function("api_C1_04707_get", &StaticFieldAccess<&parsertokens::Function1Arg::COS_SYN>::get);
    emscripten::function("api_C1_04708_get", &StaticFieldAccess<&parsertokens::Function1Arg::TAN_SYN>::get);
    emscripten::function("api_C1_04709_get", &StaticFieldAccess<&parsertokens::Function1Arg::TG_SYN>::get);
    emscripten::function("api_C1_04710_get", &StaticFieldAccess<&parsertokens::Function1Arg::CTAN_SYN>::get);
    emscripten::function("api_C1_04711_get", &StaticFieldAccess<&parsertokens::Function1Arg::CTG_SYN>::get);
    emscripten::function("api_C1_04712_get", &StaticFieldAccess<&parsertokens::Function1Arg::COT_SYN>::get);
    emscripten::function("api_C1_04713_get", &StaticFieldAccess<&parsertokens::Function1Arg::SEC_SYN>::get);
    emscripten::function("api_C1_04714_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSEC_SYN>::get);
    emscripten::function("api_C1_04715_get", &StaticFieldAccess<&parsertokens::Function1Arg::CSC_SYN>::get);
    emscripten::function("api_C1_04716_get", &StaticFieldAccess<&parsertokens::Function1Arg::ASIN_SYN>::get);
    emscripten::function("api_C1_04717_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSIN_SYN>::get);
    emscripten::function("api_C1_04718_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSIN_SYN>::get);
    emscripten::function("api_C1_04719_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOS_SYN>::get);
    emscripten::function("api_C1_04720_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOS_SYN>::get);
    emscripten::function("api_C1_04721_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCOS_SYN>::get);
    emscripten::function("api_C1_04722_get", &StaticFieldAccess<&parsertokens::Function1Arg::ATAN_SYN>::get);
    emscripten::function("api_C1_04723_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCTAN_SYN>::get);
    emscripten::function("api_C1_04724_get", &StaticFieldAccess<&parsertokens::Function1Arg::ATG_SYN>::get);
    emscripten::function("api_C1_04725_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCTG_SYN>::get);
    emscripten::function("api_C1_04726_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACTAN_SYN>::get);
    emscripten::function("api_C1_04727_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCTAN_SYN>::get);
    emscripten::function("api_C1_04728_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACTG_SYN>::get);
    emscripten::function("api_C1_04729_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCTG_SYN>::get);
    emscripten::function("api_C1_04730_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOT_SYN>::get);
    emscripten::function("api_C1_04731_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCOT_SYN>::get);
    emscripten::function("api_C1_04732_get", &StaticFieldAccess<&parsertokens::Function1Arg::LN_SYN>::get);
    emscripten::function("api_C1_04733_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG2_SYN>::get);
    emscripten::function("api_C1_04734_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG10_SYN>::get);
    emscripten::function("api_C1_04735_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG10_SYN_LG>::get);
    emscripten::function("api_C1_04736_get", &StaticFieldAccess<&parsertokens::Function1Arg::RAD_SYN>::get);
    emscripten::function("api_C1_04737_get", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_SYN>::get);
    emscripten::function("api_C1_04738_get", &StaticFieldAccess<&parsertokens::Function1Arg::SQRT_SYN>::get);
    emscripten::function("api_C1_04739_get", &StaticFieldAccess<&parsertokens::Function1Arg::SINH_SYN>::get);
    emscripten::function("api_C1_04740_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSH_SYN>::get);
    emscripten::function("api_C1_04741_get", &StaticFieldAccess<&parsertokens::Function1Arg::TANH_SYN>::get);
    emscripten::function("api_C1_04742_get", &StaticFieldAccess<&parsertokens::Function1Arg::TGH_SYN>::get);
    emscripten::function("api_C1_04743_get", &StaticFieldAccess<&parsertokens::Function1Arg::CTANH_SYN>::get);
    emscripten::function("api_C1_04744_get", &StaticFieldAccess<&parsertokens::Function1Arg::COTH_SYN>::get);
    emscripten::function("api_C1_04745_get", &StaticFieldAccess<&parsertokens::Function1Arg::CTGH_SYN>::get);
    emscripten::function("api_C1_04746_get", &StaticFieldAccess<&parsertokens::Function1Arg::SECH_SYN>::get);
    emscripten::function("api_C1_04747_get", &StaticFieldAccess<&parsertokens::Function1Arg::CSCH_SYN>::get);
    emscripten::function("api_C1_04748_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSECH_SYN>::get);
    emscripten::function("api_C1_04749_get", &StaticFieldAccess<&parsertokens::Function1Arg::DEG_SYN>::get);
    emscripten::function("api_C1_04750_get", &StaticFieldAccess<&parsertokens::Function1Arg::ABS_SYN>::get);
    emscripten::function("api_C1_04751_get", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_SYN>::get);
    emscripten::function("api_C1_04752_get", &StaticFieldAccess<&parsertokens::Function1Arg::FLOOR_SYN>::get);
    emscripten::function("api_C1_04753_get", &StaticFieldAccess<&parsertokens::Function1Arg::CEIL_SYN>::get);
    emscripten::function("api_C1_04754_get", &StaticFieldAccess<&parsertokens::Function1Arg::NOT_SYN>::get);
    emscripten::function("api_C1_04755_get", &StaticFieldAccess<&parsertokens::Function1Arg::ASINH_SYN>::get);
    emscripten::function("api_C1_04756_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSINH_SYN>::get);
    emscripten::function("api_C1_04757_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSINH_SYN>::get);
    emscripten::function("api_C1_04758_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOSH_SYN>::get);
    emscripten::function("api_C1_04759_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOSH_SYN>::get);
    emscripten::function("api_C1_04760_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCOSH_SYN>::get);
    emscripten::function("api_C1_04761_get", &StaticFieldAccess<&parsertokens::Function1Arg::ATANH_SYN>::get);
    emscripten::function("api_C1_04762_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCTANH_SYN>::get);
    emscripten::function("api_C1_04763_get", &StaticFieldAccess<&parsertokens::Function1Arg::ATGH_SYN>::get);
    emscripten::function("api_C1_04764_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCTGH_SYN>::get);
    emscripten::function("api_C1_04765_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACTANH_SYN>::get);
    emscripten::function("api_C1_04766_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCTANH_SYN>::get);
    emscripten::function("api_C1_04767_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOTH_SYN>::get);
    emscripten::function("api_C1_04768_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOTH_SYN>::get);
    emscripten::function("api_C1_04769_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCOTH_SYN>::get);
    emscripten::function("api_C1_04770_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACTGH_SYN>::get);
    emscripten::function("api_C1_04771_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCTGH_SYN>::get);
    emscripten::function("api_C1_04772_get", &StaticFieldAccess<&parsertokens::Function1Arg::ASECH_SYN>::get);
    emscripten::function("api_C1_04773_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSECH_SYN>::get);
    emscripten::function("api_C1_04774_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSECH_SYN>::get);
    emscripten::function("api_C1_04775_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACSCH_SYN>::get);
    emscripten::function("api_C1_04776_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSCH_SYN>::get);
    emscripten::function("api_C1_04777_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCSCH_SYN>::get);
    emscripten::function("api_C1_04778_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOSECH_SYN>::get);
    emscripten::function("api_C1_04779_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOSECH_SYN>::get);
    emscripten::function("api_C1_04780_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCOSECH_SYN>::get);
    emscripten::function("api_C1_04781_get", &StaticFieldAccess<&parsertokens::Function1Arg::SA_SYN>::get);
    emscripten::function("api_C1_04782_get", &StaticFieldAccess<&parsertokens::Function1Arg::SA1_SYN>::get);
    emscripten::function("api_C1_04783_get", &StaticFieldAccess<&parsertokens::Function1Arg::SINC_SYN>::get);
    emscripten::function("api_C1_04784_get", &StaticFieldAccess<&parsertokens::Function1Arg::BELL_NUMBER_SYN>::get);
    emscripten::function("api_C1_04785_get", &StaticFieldAccess<&parsertokens::Function1Arg::LUCAS_NUMBER_SYN>::get);
    emscripten::function("api_C1_04786_get",
                         &StaticFieldAccess<&parsertokens::Function1Arg::FIBONACCI_NUMBER_SYN>::get);
    emscripten::function("api_C1_04787_get", &StaticFieldAccess<&parsertokens::Function1Arg::HARMONIC_NUMBER_SYN>::get);
    emscripten::function("api_C1_04788_get", &StaticFieldAccess<&parsertokens::Function1Arg::IS_PRIME_SYN>::get);
    emscripten::function("api_C1_04789_get", &StaticFieldAccess<&parsertokens::Function1Arg::PRIME_COUNT_SYN>::get);
    emscripten::function("api_C1_04790_get", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_INT_SYN>::get);
    emscripten::function("api_C1_04791_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_INT_SYN>::get);
    emscripten::function("api_C1_04792_get", &StaticFieldAccess<&parsertokens::Function1Arg::OFF_LOG_INT_SYN>::get);
    emscripten::function("api_C1_04793_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_SYN>::get);
    emscripten::function("api_C1_04794_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_SYN>::get);
    emscripten::function("api_C1_04795_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_INV_SYN>::get);
    emscripten::function("api_C1_04796_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_INV_SYN>::get);
    emscripten::function("api_C1_04797_get", &StaticFieldAccess<&parsertokens::Function1Arg::ULP_SYN>::get);
    emscripten::function("api_C1_04798_get", &StaticFieldAccess<&parsertokens::Function1Arg::ISNAN_SYN>::get);
    emscripten::function("api_C1_04799_get", &StaticFieldAccess<&parsertokens::Function1Arg::NDIG10_SYN>::get);
    emscripten::function("api_C1_04800_get", &StaticFieldAccess<&parsertokens::Function1Arg::NFACT_SYN>::get);
    emscripten::function("api_C1_04801_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSEC_SYN>::get);
    emscripten::function("api_C1_04802_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCSC_SYN>::get);
    emscripten::function("api_C1_04803_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAMMA_SYN>::get);
    emscripten::function("api_C1_04804_get", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W0_SYN>::get);
    emscripten::function("api_C1_04805_get", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W1_SYN>::get);
    emscripten::function("api_C1_04806_get", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_GAMMA_SYN>::get);
    emscripten::function("api_C1_04807_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_GAMMA_SYN>::get);
    emscripten::function("api_C1_04808_get", &StaticFieldAccess<&parsertokens::Function1Arg::DI_GAMMA_SYN>::get);
    emscripten::function("api_C1_04809_get", &StaticFieldAccess<&parsertokens::Function1Arg::PARAM_SYN>::get);
    emscripten::function("api_C1_04810_get", &StaticFieldAccess<&parsertokens::Function1Arg::RND_STUDENT_T_SYN>::get);
    emscripten::function("api_C1_04811_get", &StaticFieldAccess<&parsertokens::Function1Arg::RND_CHI2_SYN>::get);
    emscripten::function("api_C1_04812_get", &StaticFieldAccess<&parsertokens::Function1Arg::SIN_DESC>::get);
    emscripten::function("api_C1_04812_set", &StaticFieldAccess<&parsertokens::Function1Arg::SIN_DESC>::set);
    emscripten::function("api_C1_04813_get", &StaticFieldAccess<&parsertokens::Function1Arg::COS_DESC>::get);
    emscripten::function("api_C1_04813_set", &StaticFieldAccess<&parsertokens::Function1Arg::COS_DESC>::set);
    emscripten::function("api_C1_04814_get", &StaticFieldAccess<&parsertokens::Function1Arg::TAN_DESC>::get);
    emscripten::function("api_C1_04814_set", &StaticFieldAccess<&parsertokens::Function1Arg::TAN_DESC>::set);
    emscripten::function("api_C1_04815_get", &StaticFieldAccess<&parsertokens::Function1Arg::CTAN_DESC>::get);
    emscripten::function("api_C1_04815_set", &StaticFieldAccess<&parsertokens::Function1Arg::CTAN_DESC>::set);
    emscripten::function("api_C1_04816_get", &StaticFieldAccess<&parsertokens::Function1Arg::SEC_DESC>::get);
    emscripten::function("api_C1_04816_set", &StaticFieldAccess<&parsertokens::Function1Arg::SEC_DESC>::set);
    emscripten::function("api_C1_04817_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSEC_DESC>::get);
    emscripten::function("api_C1_04817_set", &StaticFieldAccess<&parsertokens::Function1Arg::COSEC_DESC>::set);
    emscripten::function("api_C1_04818_get", &StaticFieldAccess<&parsertokens::Function1Arg::ASIN_DESC>::get);
    emscripten::function("api_C1_04818_set", &StaticFieldAccess<&parsertokens::Function1Arg::ASIN_DESC>::set);
    emscripten::function("api_C1_04819_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOS_DESC>::get);
    emscripten::function("api_C1_04819_set", &StaticFieldAccess<&parsertokens::Function1Arg::ACOS_DESC>::set);
    emscripten::function("api_C1_04820_get", &StaticFieldAccess<&parsertokens::Function1Arg::ATAN_DESC>::get);
    emscripten::function("api_C1_04820_set", &StaticFieldAccess<&parsertokens::Function1Arg::ATAN_DESC>::set);
    emscripten::function("api_C1_04821_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACTAN_DESC>::get);
    emscripten::function("api_C1_04821_set", &StaticFieldAccess<&parsertokens::Function1Arg::ACTAN_DESC>::set);
    emscripten::function("api_C1_04822_get", &StaticFieldAccess<&parsertokens::Function1Arg::LN_DESC>::get);
    emscripten::function("api_C1_04822_set", &StaticFieldAccess<&parsertokens::Function1Arg::LN_DESC>::set);
    emscripten::function("api_C1_04823_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG2_DESC>::get);
    emscripten::function("api_C1_04823_set", &StaticFieldAccess<&parsertokens::Function1Arg::LOG2_DESC>::set);
    emscripten::function("api_C1_04824_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG10_DESC>::get);
    emscripten::function("api_C1_04824_set", &StaticFieldAccess<&parsertokens::Function1Arg::LOG10_DESC>::set);
    emscripten::function("api_C1_04825_get", &StaticFieldAccess<&parsertokens::Function1Arg::RAD_DESC>::get);
    emscripten::function("api_C1_04825_set", &StaticFieldAccess<&parsertokens::Function1Arg::RAD_DESC>::set);
    emscripten::function("api_C1_04826_get", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_DESC>::get);
    emscripten::function("api_C1_04826_set", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_DESC>::set);
    emscripten::function("api_C1_04827_get", &StaticFieldAccess<&parsertokens::Function1Arg::SQRT_DESC>::get);
    emscripten::function("api_C1_04827_set", &StaticFieldAccess<&parsertokens::Function1Arg::SQRT_DESC>::set);
    emscripten::function("api_C1_04828_get", &StaticFieldAccess<&parsertokens::Function1Arg::SINH_DESC>::get);
    emscripten::function("api_C1_04828_set", &StaticFieldAccess<&parsertokens::Function1Arg::SINH_DESC>::set);
    emscripten::function("api_C1_04829_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSH_DESC>::get);
    emscripten::function("api_C1_04829_set", &StaticFieldAccess<&parsertokens::Function1Arg::COSH_DESC>::set);
    emscripten::function("api_C1_04830_get", &StaticFieldAccess<&parsertokens::Function1Arg::TANH_DESC>::get);
    emscripten::function("api_C1_04830_set", &StaticFieldAccess<&parsertokens::Function1Arg::TANH_DESC>::set);
    emscripten::function("api_C1_04831_get", &StaticFieldAccess<&parsertokens::Function1Arg::COTH_DESC>::get);
    emscripten::function("api_C1_04831_set", &StaticFieldAccess<&parsertokens::Function1Arg::COTH_DESC>::set);
    emscripten::function("api_C1_04832_get", &StaticFieldAccess<&parsertokens::Function1Arg::SECH_DESC>::get);
    emscripten::function("api_C1_04832_set", &StaticFieldAccess<&parsertokens::Function1Arg::SECH_DESC>::set);
    emscripten::function("api_C1_04833_get", &StaticFieldAccess<&parsertokens::Function1Arg::CSCH_DESC>::get);
    emscripten::function("api_C1_04833_set", &StaticFieldAccess<&parsertokens::Function1Arg::CSCH_DESC>::set);
    emscripten::function("api_C1_04834_get", &StaticFieldAccess<&parsertokens::Function1Arg::DEG_DESC>::get);
    emscripten::function("api_C1_04834_set", &StaticFieldAccess<&parsertokens::Function1Arg::DEG_DESC>::set);
    emscripten::function("api_C1_04835_get", &StaticFieldAccess<&parsertokens::Function1Arg::ABS_DESC>::get);
    emscripten::function("api_C1_04835_set", &StaticFieldAccess<&parsertokens::Function1Arg::ABS_DESC>::set);
    emscripten::function("api_C1_04836_get", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_DESC>::get);
    emscripten::function("api_C1_04836_set", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_DESC>::set);
    emscripten::function("api_C1_04837_get", &StaticFieldAccess<&parsertokens::Function1Arg::FLOOR_DESC>::get);
    emscripten::function("api_C1_04837_set", &StaticFieldAccess<&parsertokens::Function1Arg::FLOOR_DESC>::set);
    emscripten::function("api_C1_04838_get", &StaticFieldAccess<&parsertokens::Function1Arg::CEIL_DESC>::get);
    emscripten::function("api_C1_04838_set", &StaticFieldAccess<&parsertokens::Function1Arg::CEIL_DESC>::set);
    emscripten::function("api_C1_04839_get", &StaticFieldAccess<&parsertokens::Function1Arg::NOT_DESC>::get);
    emscripten::function("api_C1_04839_set", &StaticFieldAccess<&parsertokens::Function1Arg::NOT_DESC>::set);
    emscripten::function("api_C1_04840_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSINH_DESC>::get);
    emscripten::function("api_C1_04840_set", &StaticFieldAccess<&parsertokens::Function1Arg::ARSINH_DESC>::set);
    emscripten::function("api_C1_04841_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOSH_DESC>::get);
    emscripten::function("api_C1_04841_set", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOSH_DESC>::set);
    emscripten::function("api_C1_04842_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARTANH_DESC>::get);
    emscripten::function("api_C1_04842_set", &StaticFieldAccess<&parsertokens::Function1Arg::ARTANH_DESC>::set);
    emscripten::function("api_C1_04843_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOTH_DESC>::get);
    emscripten::function("api_C1_04843_set", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOTH_DESC>::set);
    emscripten::function("api_C1_04844_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSECH_DESC>::get);
    emscripten::function("api_C1_04844_set", &StaticFieldAccess<&parsertokens::Function1Arg::ARSECH_DESC>::set);
    emscripten::function("api_C1_04845_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSCH_DESC>::get);
    emscripten::function("api_C1_04845_set", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSCH_DESC>::set);
    emscripten::function("api_C1_04846_get", &StaticFieldAccess<&parsertokens::Function1Arg::SA_DESC>::get);
    emscripten::function("api_C1_04846_set", &StaticFieldAccess<&parsertokens::Function1Arg::SA_DESC>::set);
    emscripten::function("api_C1_04847_get", &StaticFieldAccess<&parsertokens::Function1Arg::SINC_DESC>::get);
    emscripten::function("api_C1_04847_set", &StaticFieldAccess<&parsertokens::Function1Arg::SINC_DESC>::set);
    emscripten::function("api_C1_04848_get", &StaticFieldAccess<&parsertokens::Function1Arg::BELL_NUMBER_DESC>::get);
    emscripten::function("api_C1_04848_set", &StaticFieldAccess<&parsertokens::Function1Arg::BELL_NUMBER_DESC>::set);
    emscripten::function("api_C1_04849_get", &StaticFieldAccess<&parsertokens::Function1Arg::LUCAS_NUMBER_DESC>::get);
    emscripten::function("api_C1_04849_set", &StaticFieldAccess<&parsertokens::Function1Arg::LUCAS_NUMBER_DESC>::set);
    emscripten::function("api_C1_04850_get",
                         &StaticFieldAccess<&parsertokens::Function1Arg::FIBONACCI_NUMBER_DESC>::get);
    emscripten::function("api_C1_04850_set",
                         &StaticFieldAccess<&parsertokens::Function1Arg::FIBONACCI_NUMBER_DESC>::set);
    emscripten::function("api_C1_04851_get",
                         &StaticFieldAccess<&parsertokens::Function1Arg::HARMONIC_NUMBER_DESC>::get);
    emscripten::function("api_C1_04851_set",
                         &StaticFieldAccess<&parsertokens::Function1Arg::HARMONIC_NUMBER_DESC>::set);
    emscripten::function("api_C1_04852_get", &StaticFieldAccess<&parsertokens::Function1Arg::IS_PRIME_DESC>::get);
    emscripten::function("api_C1_04852_set", &StaticFieldAccess<&parsertokens::Function1Arg::IS_PRIME_DESC>::set);
    emscripten::function("api_C1_04853_get", &StaticFieldAccess<&parsertokens::Function1Arg::PRIME_COUNT_DESC>::get);
    emscripten::function("api_C1_04853_set", &StaticFieldAccess<&parsertokens::Function1Arg::PRIME_COUNT_DESC>::set);
    emscripten::function("api_C1_04854_get", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_INT_DESC>::get);
    emscripten::function("api_C1_04854_set", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_INT_DESC>::set);
    emscripten::function("api_C1_04855_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_INT_DESC>::get);
    emscripten::function("api_C1_04855_set", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_INT_DESC>::set);
    emscripten::function("api_C1_04856_get", &StaticFieldAccess<&parsertokens::Function1Arg::OFF_LOG_INT_DESC>::get);
    emscripten::function("api_C1_04856_set", &StaticFieldAccess<&parsertokens::Function1Arg::OFF_LOG_INT_DESC>::set);
    emscripten::function("api_C1_04857_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_DESC>::get);
    emscripten::function("api_C1_04857_set", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_DESC>::set);
    emscripten::function("api_C1_04858_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_DESC>::get);
    emscripten::function("api_C1_04858_set", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_DESC>::set);
    emscripten::function("api_C1_04859_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_INV_DESC>::get);
    emscripten::function("api_C1_04859_set", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_INV_DESC>::set);
    emscripten::function("api_C1_04860_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_INV_DESC>::get);
    emscripten::function("api_C1_04860_set", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_INV_DESC>::set);
    emscripten::function("api_C1_04861_get", &StaticFieldAccess<&parsertokens::Function1Arg::ULP_DESC>::get);
    emscripten::function("api_C1_04861_set", &StaticFieldAccess<&parsertokens::Function1Arg::ULP_DESC>::set);
    emscripten::function("api_C1_04862_get", &StaticFieldAccess<&parsertokens::Function1Arg::ISNAN_DESC>::get);
    emscripten::function("api_C1_04862_set", &StaticFieldAccess<&parsertokens::Function1Arg::ISNAN_DESC>::set);
    emscripten::function("api_C1_04863_get", &StaticFieldAccess<&parsertokens::Function1Arg::NDIG10_DESC>::get);
    emscripten::function("api_C1_04863_set", &StaticFieldAccess<&parsertokens::Function1Arg::NDIG10_DESC>::set);
    emscripten::function("api_C1_04864_get", &StaticFieldAccess<&parsertokens::Function1Arg::NFACT_DESC>::get);
    emscripten::function("api_C1_04864_set", &StaticFieldAccess<&parsertokens::Function1Arg::NFACT_DESC>::set);
    emscripten::function("api_C1_04865_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSEC_DESC>::get);
    emscripten::function("api_C1_04865_set", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSEC_DESC>::set);
    emscripten::function("api_C1_04866_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCSC_DESC>::get);
    emscripten::function("api_C1_04866_set", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCSC_DESC>::set);
    emscripten::function("api_C1_04867_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAMMA_DESC>::get);
    emscripten::function("api_C1_04867_set", &StaticFieldAccess<&parsertokens::Function1Arg::GAMMA_DESC>::set);
    emscripten::function("api_C1_04868_get", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W0_DESC>::get);
    emscripten::function("api_C1_04868_set", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W0_DESC>::set);
    emscripten::function("api_C1_04869_get", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W1_DESC>::get);
    emscripten::function("api_C1_04869_set", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W1_DESC>::set);
    emscripten::function("api_C1_04870_get", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_GAMMA_DESC>::get);
    emscripten::function("api_C1_04870_set", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_GAMMA_DESC>::set);
    emscripten::function("api_C1_04871_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_GAMMA_DESC>::get);
    emscripten::function("api_C1_04871_set", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_GAMMA_DESC>::set);
    emscripten::function("api_C1_04872_get", &StaticFieldAccess<&parsertokens::Function1Arg::DI_GAMMA_DESC>::get);
    emscripten::function("api_C1_04872_set", &StaticFieldAccess<&parsertokens::Function1Arg::DI_GAMMA_DESC>::set);
    emscripten::function("api_C1_04873_get", &StaticFieldAccess<&parsertokens::Function1Arg::PARAM_DESC>::get);
    emscripten::function("api_C1_04873_set", &StaticFieldAccess<&parsertokens::Function1Arg::PARAM_DESC>::set);
    emscripten::function("api_C1_04874_get", &StaticFieldAccess<&parsertokens::Function1Arg::RND_STUDENT_T_DESC>::get);
    emscripten::function("api_C1_04874_set", &StaticFieldAccess<&parsertokens::Function1Arg::RND_STUDENT_T_DESC>::set);
    emscripten::function("api_C1_04875_get", &StaticFieldAccess<&parsertokens::Function1Arg::RND_CHI2_DESC>::get);
    emscripten::function("api_C1_04875_set", &StaticFieldAccess<&parsertokens::Function1Arg::RND_CHI2_DESC>::set);
    emscripten::function("api_C1_04876_get", &StaticFieldAccess<&parsertokens::Function1Arg::SIN_SINCE>::get);
    emscripten::function("api_C1_04877_get", &StaticFieldAccess<&parsertokens::Function1Arg::COS_SINCE>::get);
    emscripten::function("api_C1_04878_get", &StaticFieldAccess<&parsertokens::Function1Arg::TAN_SINCE>::get);
    emscripten::function("api_C1_04879_get", &StaticFieldAccess<&parsertokens::Function1Arg::CTAN_SINCE>::get);
    emscripten::function("api_C1_04880_get", &StaticFieldAccess<&parsertokens::Function1Arg::SEC_SINCE>::get);
    emscripten::function("api_C1_04881_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSEC_SINCE>::get);
    emscripten::function("api_C1_04882_get", &StaticFieldAccess<&parsertokens::Function1Arg::ASIN_SINCE>::get);
    emscripten::function("api_C1_04883_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACOS_SINCE>::get);
    emscripten::function("api_C1_04884_get", &StaticFieldAccess<&parsertokens::Function1Arg::ATAN_SINCE>::get);
    emscripten::function("api_C1_04885_get", &StaticFieldAccess<&parsertokens::Function1Arg::ACTAN_SINCE>::get);
    emscripten::function("api_C1_04886_get", &StaticFieldAccess<&parsertokens::Function1Arg::LN_SINCE>::get);
    emscripten::function("api_C1_04887_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG2_SINCE>::get);
    emscripten::function("api_C1_04888_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG10_SINCE>::get);
    emscripten::function("api_C1_04889_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG10_SINCE_LG>::get);
    emscripten::function("api_C1_04890_get", &StaticFieldAccess<&parsertokens::Function1Arg::RAD_SINCE>::get);
    emscripten::function("api_C1_04891_get", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_SINCE>::get);
    emscripten::function("api_C1_04892_get", &StaticFieldAccess<&parsertokens::Function1Arg::SQRT_SINCE>::get);
    emscripten::function("api_C1_04893_get", &StaticFieldAccess<&parsertokens::Function1Arg::SINH_SINCE>::get);
    emscripten::function("api_C1_04894_get", &StaticFieldAccess<&parsertokens::Function1Arg::COSH_SINCE>::get);
    emscripten::function("api_C1_04895_get", &StaticFieldAccess<&parsertokens::Function1Arg::TANH_SINCE>::get);
    emscripten::function("api_C1_04896_get", &StaticFieldAccess<&parsertokens::Function1Arg::COTH_SINCE>::get);
    emscripten::function("api_C1_04897_get", &StaticFieldAccess<&parsertokens::Function1Arg::SECH_SINCE>::get);
    emscripten::function("api_C1_04898_get", &StaticFieldAccess<&parsertokens::Function1Arg::CSCH_SINCE>::get);
    emscripten::function("api_C1_04899_get", &StaticFieldAccess<&parsertokens::Function1Arg::DEG_SINCE>::get);
    emscripten::function("api_C1_04900_get", &StaticFieldAccess<&parsertokens::Function1Arg::ABS_SINCE>::get);
    emscripten::function("api_C1_04901_get", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_SINCE>::get);
    emscripten::function("api_C1_04902_get", &StaticFieldAccess<&parsertokens::Function1Arg::FLOOR_SINCE>::get);
    emscripten::function("api_C1_04903_get", &StaticFieldAccess<&parsertokens::Function1Arg::CEIL_SINCE>::get);
    emscripten::function("api_C1_04904_get", &StaticFieldAccess<&parsertokens::Function1Arg::NOT_SINCE>::get);
    emscripten::function("api_C1_04905_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSINH_SINCE>::get);
    emscripten::function("api_C1_04906_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOSH_SINCE>::get);
    emscripten::function("api_C1_04907_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARTANH_SINCE>::get);
    emscripten::function("api_C1_04908_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCOTH_SINCE>::get);
    emscripten::function("api_C1_04909_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARSECH_SINCE>::get);
    emscripten::function("api_C1_04910_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSCH_SINCE>::get);
    emscripten::function("api_C1_04911_get", &StaticFieldAccess<&parsertokens::Function1Arg::SA_SINCE>::get);
    emscripten::function("api_C1_04912_get", &StaticFieldAccess<&parsertokens::Function1Arg::SINC_SINCE>::get);
    emscripten::function("api_C1_04913_get", &StaticFieldAccess<&parsertokens::Function1Arg::BELL_NUMBER_SINCE>::get);
    emscripten::function("api_C1_04914_get", &StaticFieldAccess<&parsertokens::Function1Arg::LUCAS_NUMBER_SINCE>::get);
    emscripten::function("api_C1_04915_get",
                         &StaticFieldAccess<&parsertokens::Function1Arg::FIBONACCI_NUMBER_SINCE>::get);
    emscripten::function("api_C1_04916_get",
                         &StaticFieldAccess<&parsertokens::Function1Arg::HARMONIC_NUMBER_SINCE>::get);
    emscripten::function("api_C1_04917_get", &StaticFieldAccess<&parsertokens::Function1Arg::IS_PRIME_SINCE>::get);
    emscripten::function("api_C1_04918_get", &StaticFieldAccess<&parsertokens::Function1Arg::PRIME_COUNT_SINCE>::get);
    emscripten::function("api_C1_04919_get", &StaticFieldAccess<&parsertokens::Function1Arg::EXP_INT_SINCE>::get);
    emscripten::function("api_C1_04920_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_INT_SINCE>::get);
    emscripten::function("api_C1_04921_get", &StaticFieldAccess<&parsertokens::Function1Arg::OFF_LOG_INT_SINCE>::get);
    emscripten::function("api_C1_04922_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_SINCE>::get);
    emscripten::function("api_C1_04923_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_SINCE>::get);
    emscripten::function("api_C1_04924_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERF_INV_SINCE>::get);
    emscripten::function("api_C1_04925_get",
                         &StaticFieldAccess<&parsertokens::Function1Arg::GAUSS_ERFC_INV_SINCE>::get);
    emscripten::function("api_C1_04926_get", &StaticFieldAccess<&parsertokens::Function1Arg::ULP_SINCE>::get);
    emscripten::function("api_C1_04927_get", &StaticFieldAccess<&parsertokens::Function1Arg::ISNAN_SINCE>::get);
    emscripten::function("api_C1_04928_get", &StaticFieldAccess<&parsertokens::Function1Arg::NDIG10_SINCE>::get);
    emscripten::function("api_C1_04929_get", &StaticFieldAccess<&parsertokens::Function1Arg::NFACT_SINCE>::get);
    emscripten::function("api_C1_04930_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCSEC_SINCE>::get);
    emscripten::function("api_C1_04931_get", &StaticFieldAccess<&parsertokens::Function1Arg::ARCCSC_SINCE>::get);
    emscripten::function("api_C1_04932_get", &StaticFieldAccess<&parsertokens::Function1Arg::GAMMA_SINCE>::get);
    emscripten::function("api_C1_04933_get", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W0_SINCE>::get);
    emscripten::function("api_C1_04934_get", &StaticFieldAccess<&parsertokens::Function1Arg::LAMBERT_W1_SINCE>::get);
    emscripten::function("api_C1_04935_get", &StaticFieldAccess<&parsertokens::Function1Arg::SGN_GAMMA_SINCE>::get);
    emscripten::function("api_C1_04936_get", &StaticFieldAccess<&parsertokens::Function1Arg::LOG_GAMMA_SINCE>::get);
    emscripten::function("api_C1_04937_get", &StaticFieldAccess<&parsertokens::Function1Arg::DI_GAMMA_SINCE>::get);
    emscripten::function("api_C1_04938_get", &StaticFieldAccess<&parsertokens::Function1Arg::PARAM_SINCE>::get);
    emscripten::function("api_C1_04939_get", &StaticFieldAccess<&parsertokens::Function1Arg::RND_STUDENT_T_SINCE>::get);
    emscripten::function("api_C1_04940_get", &StaticFieldAccess<&parsertokens::Function1Arg::RND_CHI2_SINCE>::get);
    emscripten::function("api_C1_04947_get", &StaticFieldAccess<&parsertokens::Function2Arg::TYPE_ID>::get);
    emscripten::function("api_C1_04948_get", &StaticFieldAccess<&parsertokens::Function2Arg::TYPE_DESC>::get);
    emscripten::function("api_C1_04948_set", &StaticFieldAccess<&parsertokens::Function2Arg::TYPE_DESC>::set);
    emscripten::function("api_C1_04949_get", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_ID>::get);
    emscripten::function("api_C1_04950_get", &StaticFieldAccess<&parsertokens::Function2Arg::MOD_ID>::get);
    emscripten::function("api_C1_04951_get", &StaticFieldAccess<&parsertokens::Function2Arg::BINOM_COEFF_ID>::get);
    emscripten::function("api_C1_04952_get", &StaticFieldAccess<&parsertokens::Function2Arg::BERNOULLI_NUMBER_ID>::get);
    emscripten::function("api_C1_04953_get", &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING1_NUMBER_ID>::get);
    emscripten::function("api_C1_04954_get", &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING2_NUMBER_ID>::get);
    emscripten::function("api_C1_04955_get", &StaticFieldAccess<&parsertokens::Function2Arg::WORPITZKY_NUMBER_ID>::get);
    emscripten::function("api_C1_04956_get", &StaticFieldAccess<&parsertokens::Function2Arg::EULER_NUMBER_ID>::get);
    emscripten::function("api_C1_04957_get", &StaticFieldAccess<&parsertokens::Function2Arg::KRONECKER_DELTA_ID>::get);
    emscripten::function("api_C1_04958_get", &StaticFieldAccess<&parsertokens::Function2Arg::EULER_POLYNOMIAL_ID>::get);
    emscripten::function("api_C1_04959_get", &StaticFieldAccess<&parsertokens::Function2Arg::HARMONIC_NUMBER_ID>::get);
    emscripten::function("api_C1_04960_get", &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_CONT_ID>::get);
    emscripten::function("api_C1_04961_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_DISCR_ID>::get);
    emscripten::function("api_C1_04962_get", &StaticFieldAccess<&parsertokens::Function2Arg::ROUND_ID>::get);
    emscripten::function("api_C1_04963_get", &StaticFieldAccess<&parsertokens::Function2Arg::RND_NORMAL_ID>::get);
    emscripten::function("api_C1_04964_get", &StaticFieldAccess<&parsertokens::Function2Arg::NDIG_ID>::get);
    emscripten::function("api_C1_04965_get", &StaticFieldAccess<&parsertokens::Function2Arg::DIGIT10_ID>::get);
    emscripten::function("api_C1_04966_get", &StaticFieldAccess<&parsertokens::Function2Arg::FACTVAL_ID>::get);
    emscripten::function("api_C1_04967_get", &StaticFieldAccess<&parsertokens::Function2Arg::FACTEXP_ID>::get);
    emscripten::function("api_C1_04968_get", &StaticFieldAccess<&parsertokens::Function2Arg::ROOT_ID>::get);
    emscripten::function("api_C1_04969_get", &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_LOWER_ID>::get);
    emscripten::function("api_C1_04970_get", &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_UPPER_ID>::get);
    emscripten::function("api_C1_04971_get", &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_LOWER_ID>::get);
    emscripten::function("api_C1_04972_get", &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_UPPER_ID>::get);
    emscripten::function("api_C1_04973_get", &StaticFieldAccess<&parsertokens::Function2Arg::PERMUTATIONS_ID>::get);
    emscripten::function("api_C1_04974_get", &StaticFieldAccess<&parsertokens::Function2Arg::BETA_ID>::get);
    emscripten::function("api_C1_04975_get", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_BETA_ID>::get);
    emscripten::function("api_C1_04976_get", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_STUDENT_T_ID>::get);
    emscripten::function("api_C1_04977_get", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_STUDENT_T_ID>::get);
    emscripten::function("api_C1_04978_get", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_STUDENT_T_ID>::get);
    emscripten::function("api_C1_04979_get", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_CHI2_ID>::get);
    emscripten::function("api_C1_04980_get", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_CHI2_ID>::get);
    emscripten::function("api_C1_04981_get", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_CHI2_ID>::get);
    emscripten::function("api_C1_04982_get", &StaticFieldAccess<&parsertokens::Function2Arg::RND_F_SNEDECOR_ID>::get);
    emscripten::function("api_C1_04983_get", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_STR>::get);
    emscripten::function("api_C1_04984_get", &StaticFieldAccess<&parsertokens::Function2Arg::MOD_STR>::get);
    emscripten::function("api_C1_04985_get", &StaticFieldAccess<&parsertokens::Function2Arg::BINOM_COEFF_STR>::get);
    emscripten::function("api_C1_04986_get", &StaticFieldAccess<&parsertokens::Function2Arg::BINOM_COEFF_NCK_STR>::get);
    emscripten::function("api_C1_04987_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::BERNOULLI_NUMBER_STR>::get);
    emscripten::function("api_C1_04988_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING1_NUMBER_STR>::get);
    emscripten::function("api_C1_04989_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING2_NUMBER_STR>::get);
    emscripten::function("api_C1_04990_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::WORPITZKY_NUMBER_STR>::get);
    emscripten::function("api_C1_04991_get", &StaticFieldAccess<&parsertokens::Function2Arg::EULER_NUMBER_STR>::get);
    emscripten::function("api_C1_04992_get", &StaticFieldAccess<&parsertokens::Function2Arg::KRONECKER_DELTA_STR>::get);
    emscripten::function("api_C1_04993_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::EULER_POLYNOMIAL_STR>::get);
    emscripten::function("api_C1_04994_get", &StaticFieldAccess<&parsertokens::Function2Arg::HARMONIC_NUMBER_STR>::get);
    emscripten::function("api_C1_04995_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_CONT_STR>::get);
    emscripten::function("api_C1_04996_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_DISCR_STR>::get);
    emscripten::function("api_C1_04997_get", &StaticFieldAccess<&parsertokens::Function2Arg::ROUND_STR>::get);
    emscripten::function("api_C1_04998_get", &StaticFieldAccess<&parsertokens::Function2Arg::RND_NORMAL_STR>::get);
    emscripten::function("api_C1_04999_get", &StaticFieldAccess<&parsertokens::Function2Arg::NDIG_STR>::get);
    emscripten::function("api_C1_05000_get", &StaticFieldAccess<&parsertokens::Function2Arg::DIGIT10_STR>::get);
    emscripten::function("api_C1_05001_get", &StaticFieldAccess<&parsertokens::Function2Arg::FACTVAL_STR>::get);
    emscripten::function("api_C1_05002_get", &StaticFieldAccess<&parsertokens::Function2Arg::FACTEXP_STR>::get);
    emscripten::function("api_C1_05003_get", &StaticFieldAccess<&parsertokens::Function2Arg::ROOT_STR>::get);
    emscripten::function("api_C1_05004_get", &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_LOWER_STR>::get);
    emscripten::function("api_C1_05005_get", &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_UPPER_STR>::get);
    emscripten::function("api_C1_05006_get", &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_LOWER_STR>::get);
    emscripten::function("api_C1_05007_get", &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_UPPER_STR>::get);
    emscripten::function("api_C1_05008_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_LOWER_P_STR>::get);
    emscripten::function("api_C1_05009_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_UPPER_Q_STR>::get);
    emscripten::function("api_C1_05010_get", &StaticFieldAccess<&parsertokens::Function2Arg::PERMUTATIONS_STR>::get);
    emscripten::function("api_C1_05011_get", &StaticFieldAccess<&parsertokens::Function2Arg::BETA_STR>::get);
    emscripten::function("api_C1_05012_get", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_BETA_STR>::get);
    emscripten::function("api_C1_05013_get", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_STUDENT_T_STR>::get);
    emscripten::function("api_C1_05014_get", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_STUDENT_T_STR>::get);
    emscripten::function("api_C1_05015_get", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_STUDENT_T_STR>::get);
    emscripten::function("api_C1_05016_get", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_CHI2_STR>::get);
    emscripten::function("api_C1_05017_get", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_CHI2_STR>::get);
    emscripten::function("api_C1_05018_get", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_CHI2_STR>::get);
    emscripten::function("api_C1_05019_get", &StaticFieldAccess<&parsertokens::Function2Arg::RND_F_SNEDECOR_STR>::get);
    emscripten::function("api_C1_05020_get", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_SYN>::get);
    emscripten::function("api_C1_05021_get", &StaticFieldAccess<&parsertokens::Function2Arg::MOD_SYN>::get);
    emscripten::function("api_C1_05022_get", &StaticFieldAccess<&parsertokens::Function2Arg::BINOM_COEFF_SYN>::get);
    emscripten::function("api_C1_05023_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::BERNOULLI_NUMBER_SYN>::get);
    emscripten::function("api_C1_05024_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING1_NUMBER_SYN>::get);
    emscripten::function("api_C1_05025_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING2_NUMBER_SYN>::get);
    emscripten::function("api_C1_05026_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::WORPITZKY_NUMBER_SYN>::get);
    emscripten::function("api_C1_05027_get", &StaticFieldAccess<&parsertokens::Function2Arg::EULER_NUMBER_SYN>::get);
    emscripten::function("api_C1_05028_get", &StaticFieldAccess<&parsertokens::Function2Arg::KRONECKER_DELTA_SYN>::get);
    emscripten::function("api_C1_05029_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::EULER_POLYNOMIAL_SYN>::get);
    emscripten::function("api_C1_05030_get", &StaticFieldAccess<&parsertokens::Function2Arg::HARMONIC_NUMBER_SYN>::get);
    emscripten::function("api_C1_05031_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_CONT_SYN>::get);
    emscripten::function("api_C1_05032_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_DISCR_SYN>::get);
    emscripten::function("api_C1_05033_get", &StaticFieldAccess<&parsertokens::Function2Arg::ROUND_SYN>::get);
    emscripten::function("api_C1_05034_get", &StaticFieldAccess<&parsertokens::Function2Arg::RND_NORMAL_SYN>::get);
    emscripten::function("api_C1_05035_get", &StaticFieldAccess<&parsertokens::Function2Arg::NDIG_SYN>::get);
    emscripten::function("api_C1_05036_get", &StaticFieldAccess<&parsertokens::Function2Arg::DIGIT10_SYN>::get);
    emscripten::function("api_C1_05037_get", &StaticFieldAccess<&parsertokens::Function2Arg::FACTVAL_SYN>::get);
    emscripten::function("api_C1_05038_get", &StaticFieldAccess<&parsertokens::Function2Arg::FACTEXP_SYN>::get);
    emscripten::function("api_C1_05039_get", &StaticFieldAccess<&parsertokens::Function2Arg::ROOT_SYN>::get);
    emscripten::function("api_C1_05040_get", &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_LOWER_SYN>::get);
    emscripten::function("api_C1_05041_get", &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_UPPER_SYN>::get);
    emscripten::function("api_C1_05042_get", &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_LOWER_SYN>::get);
    emscripten::function("api_C1_05043_get", &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_UPPER_SYN>::get);
    emscripten::function("api_C1_05044_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_LOWER_P_SYN>::get);
    emscripten::function("api_C1_05045_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_UPPER_Q_SYN>::get);
    emscripten::function("api_C1_05046_get", &StaticFieldAccess<&parsertokens::Function2Arg::BINOM_COEFF_NCK_SYN>::get);
    emscripten::function("api_C1_05047_get", &StaticFieldAccess<&parsertokens::Function2Arg::PERMUTATIONS_SYN>::get);
    emscripten::function("api_C1_05048_get", &StaticFieldAccess<&parsertokens::Function2Arg::BETA_SYN>::get);
    emscripten::function("api_C1_05049_get", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_BETA_SYN>::get);
    emscripten::function("api_C1_05050_get", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_STUDENT_T_SYN>::get);
    emscripten::function("api_C1_05051_get", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_STUDENT_T_SYN>::get);
    emscripten::function("api_C1_05052_get", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_STUDENT_T_SYN>::get);
    emscripten::function("api_C1_05053_get", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_CHI2_SYN>::get);
    emscripten::function("api_C1_05054_get", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_CHI2_SYN>::get);
    emscripten::function("api_C1_05055_get", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_CHI2_SYN>::get);
    emscripten::function("api_C1_05056_get", &StaticFieldAccess<&parsertokens::Function2Arg::RND_F_SNEDECOR_SYN>::get);
    emscripten::function("api_C1_05057_get", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_DESC>::get);
    emscripten::function("api_C1_05057_set", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_DESC>::set);
    emscripten::function("api_C1_05058_get", &StaticFieldAccess<&parsertokens::Function2Arg::MOD_DESC>::get);
    emscripten::function("api_C1_05058_set", &StaticFieldAccess<&parsertokens::Function2Arg::MOD_DESC>::set);
    emscripten::function("api_C1_05059_get", &StaticFieldAccess<&parsertokens::Function2Arg::BINOM_COEFF_DESC>::get);
    emscripten::function("api_C1_05059_set", &StaticFieldAccess<&parsertokens::Function2Arg::BINOM_COEFF_DESC>::set);
    emscripten::function("api_C1_05060_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::BERNOULLI_NUMBER_DESC>::get);
    emscripten::function("api_C1_05060_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::BERNOULLI_NUMBER_DESC>::set);
    emscripten::function("api_C1_05061_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING1_NUMBER_DESC>::get);
    emscripten::function("api_C1_05061_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING1_NUMBER_DESC>::set);
    emscripten::function("api_C1_05062_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING2_NUMBER_DESC>::get);
    emscripten::function("api_C1_05062_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING2_NUMBER_DESC>::set);
    emscripten::function("api_C1_05063_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::WORPITZKY_NUMBER_DESC>::get);
    emscripten::function("api_C1_05063_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::WORPITZKY_NUMBER_DESC>::set);
    emscripten::function("api_C1_05064_get", &StaticFieldAccess<&parsertokens::Function2Arg::EULER_NUMBER_DESC>::get);
    emscripten::function("api_C1_05064_set", &StaticFieldAccess<&parsertokens::Function2Arg::EULER_NUMBER_DESC>::set);
    emscripten::function("api_C1_05065_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::KRONECKER_DELTA_DESC>::get);
    emscripten::function("api_C1_05065_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::KRONECKER_DELTA_DESC>::set);
    emscripten::function("api_C1_05066_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::EULER_POLYNOMIAL_DESC>::get);
    emscripten::function("api_C1_05066_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::EULER_POLYNOMIAL_DESC>::set);
    emscripten::function("api_C1_05067_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::HARMONIC_NUMBER_DESC>::get);
    emscripten::function("api_C1_05067_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::HARMONIC_NUMBER_DESC>::set);
    emscripten::function("api_C1_05068_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_CONT_DESC>::get);
    emscripten::function("api_C1_05068_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_CONT_DESC>::set);
    emscripten::function("api_C1_05069_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_DISCR_DESC>::get);
    emscripten::function("api_C1_05069_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_DISCR_DESC>::set);
    emscripten::function("api_C1_05070_get", &StaticFieldAccess<&parsertokens::Function2Arg::ROUND_DESC>::get);
    emscripten::function("api_C1_05070_set", &StaticFieldAccess<&parsertokens::Function2Arg::ROUND_DESC>::set);
    emscripten::function("api_C1_05071_get", &StaticFieldAccess<&parsertokens::Function2Arg::RND_NORMAL_DESC>::get);
    emscripten::function("api_C1_05071_set", &StaticFieldAccess<&parsertokens::Function2Arg::RND_NORMAL_DESC>::set);
    emscripten::function("api_C1_05072_get", &StaticFieldAccess<&parsertokens::Function2Arg::NDIG_DESC>::get);
    emscripten::function("api_C1_05072_set", &StaticFieldAccess<&parsertokens::Function2Arg::NDIG_DESC>::set);
    emscripten::function("api_C1_05073_get", &StaticFieldAccess<&parsertokens::Function2Arg::DIGIT10_DESC>::get);
    emscripten::function("api_C1_05073_set", &StaticFieldAccess<&parsertokens::Function2Arg::DIGIT10_DESC>::set);
    emscripten::function("api_C1_05074_get", &StaticFieldAccess<&parsertokens::Function2Arg::FACTVAL_DESC>::get);
    emscripten::function("api_C1_05074_set", &StaticFieldAccess<&parsertokens::Function2Arg::FACTVAL_DESC>::set);
    emscripten::function("api_C1_05075_get", &StaticFieldAccess<&parsertokens::Function2Arg::FACTEXP_DESC>::get);
    emscripten::function("api_C1_05075_set", &StaticFieldAccess<&parsertokens::Function2Arg::FACTEXP_DESC>::set);
    emscripten::function("api_C1_05076_get", &StaticFieldAccess<&parsertokens::Function2Arg::ROOT_DESC>::get);
    emscripten::function("api_C1_05076_set", &StaticFieldAccess<&parsertokens::Function2Arg::ROOT_DESC>::set);
    emscripten::function("api_C1_05077_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_LOWER_DESC>::get);
    emscripten::function("api_C1_05077_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_LOWER_DESC>::set);
    emscripten::function("api_C1_05078_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_UPPER_DESC>::get);
    emscripten::function("api_C1_05078_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_UPPER_DESC>::set);
    emscripten::function("api_C1_05079_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_LOWER_DESC>::get);
    emscripten::function("api_C1_05079_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_LOWER_DESC>::set);
    emscripten::function("api_C1_05080_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_UPPER_DESC>::get);
    emscripten::function("api_C1_05080_set",
                         &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_UPPER_DESC>::set);
    emscripten::function("api_C1_05081_get", &StaticFieldAccess<&parsertokens::Function2Arg::PERMUTATIONS_DESC>::get);
    emscripten::function("api_C1_05081_set", &StaticFieldAccess<&parsertokens::Function2Arg::PERMUTATIONS_DESC>::set);
    emscripten::function("api_C1_05082_get", &StaticFieldAccess<&parsertokens::Function2Arg::BETA_DESC>::get);
    emscripten::function("api_C1_05082_set", &StaticFieldAccess<&parsertokens::Function2Arg::BETA_DESC>::set);
    emscripten::function("api_C1_05083_get", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_BETA_DESC>::get);
    emscripten::function("api_C1_05083_set", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_BETA_DESC>::set);
    emscripten::function("api_C1_05084_get", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_STUDENT_T_DESC>::get);
    emscripten::function("api_C1_05084_set", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_STUDENT_T_DESC>::set);
    emscripten::function("api_C1_05085_get", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_STUDENT_T_DESC>::get);
    emscripten::function("api_C1_05085_set", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_STUDENT_T_DESC>::set);
    emscripten::function("api_C1_05086_get", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_STUDENT_T_DESC>::get);
    emscripten::function("api_C1_05086_set", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_STUDENT_T_DESC>::set);
    emscripten::function("api_C1_05087_get", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_CHI2_DESC>::get);
    emscripten::function("api_C1_05087_set", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_CHI2_DESC>::set);
    emscripten::function("api_C1_05088_get", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_CHI2_DESC>::get);
    emscripten::function("api_C1_05088_set", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_CHI2_DESC>::set);
    emscripten::function("api_C1_05089_get", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_CHI2_DESC>::get);
    emscripten::function("api_C1_05089_set", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_CHI2_DESC>::set);
    emscripten::function("api_C1_05090_get", &StaticFieldAccess<&parsertokens::Function2Arg::RND_F_SNEDECOR_DESC>::get);
    emscripten::function("api_C1_05090_set", &StaticFieldAccess<&parsertokens::Function2Arg::RND_F_SNEDECOR_DESC>::set);
    emscripten::function("api_C1_05091_get", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_SINCE>::get);
    emscripten::function("api_C1_05092_get", &StaticFieldAccess<&parsertokens::Function2Arg::MOD_SINCE>::get);
    emscripten::function("api_C1_05093_get", &StaticFieldAccess<&parsertokens::Function2Arg::BINOM_COEFF_SINCE>::get);
    emscripten::function("api_C1_05094_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::BINOM_COEFF_NCK_SINCE>::get);
    emscripten::function("api_C1_05095_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::BERNOULLI_NUMBER_SINCE>::get);
    emscripten::function("api_C1_05096_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING1_NUMBER_SINCE>::get);
    emscripten::function("api_C1_05097_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::STIRLING2_NUMBER_SINCE>::get);
    emscripten::function("api_C1_05098_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::WORPITZKY_NUMBER_SINCE>::get);
    emscripten::function("api_C1_05099_get", &StaticFieldAccess<&parsertokens::Function2Arg::EULER_NUMBER_SINCE>::get);
    emscripten::function("api_C1_05100_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::KRONECKER_DELTA_SINCE>::get);
    emscripten::function("api_C1_05101_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::EULER_POLYNOMIAL_SINCE>::get);
    emscripten::function("api_C1_05102_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::HARMONIC_NUMBER_SINCE>::get);
    emscripten::function("api_C1_05103_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_CONT_SINCE>::get);
    emscripten::function("api_C1_05104_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_UNIFORM_DISCR_SINCE>::get);
    emscripten::function("api_C1_05105_get", &StaticFieldAccess<&parsertokens::Function2Arg::ROUND_SINCE>::get);
    emscripten::function("api_C1_05106_get", &StaticFieldAccess<&parsertokens::Function2Arg::RND_NORMAL_SINCE>::get);
    emscripten::function("api_C1_05107_get", &StaticFieldAccess<&parsertokens::Function2Arg::NDIG_SINCE>::get);
    emscripten::function("api_C1_05108_get", &StaticFieldAccess<&parsertokens::Function2Arg::DIGIT10_SINCE>::get);
    emscripten::function("api_C1_05109_get", &StaticFieldAccess<&parsertokens::Function2Arg::FACTVAL_SINCE>::get);
    emscripten::function("api_C1_05110_get", &StaticFieldAccess<&parsertokens::Function2Arg::FACTEXP_SINCE>::get);
    emscripten::function("api_C1_05111_get", &StaticFieldAccess<&parsertokens::Function2Arg::ROOT_SINCE>::get);
    emscripten::function("api_C1_05112_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_LOWER_SINCE>::get);
    emscripten::function("api_C1_05113_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::INC_GAMMA_UPPER_SINCE>::get);
    emscripten::function("api_C1_05114_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_LOWER_SINCE>::get);
    emscripten::function("api_C1_05115_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::REG_GAMMA_UPPER_SINCE>::get);
    emscripten::function("api_C1_05116_get", &StaticFieldAccess<&parsertokens::Function2Arg::PERMUTATIONS_SINCE>::get);
    emscripten::function("api_C1_05117_get", &StaticFieldAccess<&parsertokens::Function2Arg::BETA_SINCE>::get);
    emscripten::function("api_C1_05118_get", &StaticFieldAccess<&parsertokens::Function2Arg::LOG_BETA_SINCE>::get);
    emscripten::function("api_C1_05119_get", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_STUDENT_T_SINCE>::get);
    emscripten::function("api_C1_05120_get", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_STUDENT_T_SINCE>::get);
    emscripten::function("api_C1_05121_get", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_STUDENT_T_SINCE>::get);
    emscripten::function("api_C1_05122_get", &StaticFieldAccess<&parsertokens::Function2Arg::PDF_CHI2_SINCE>::get);
    emscripten::function("api_C1_05123_get", &StaticFieldAccess<&parsertokens::Function2Arg::CDF_CHI2_SINCE>::get);
    emscripten::function("api_C1_05124_get", &StaticFieldAccess<&parsertokens::Function2Arg::QNT_CHI2_SINCE>::get);
    emscripten::function("api_C1_05125_get",
                         &StaticFieldAccess<&parsertokens::Function2Arg::RND_F_SNEDECOR_SINCE>::get);
    emscripten::function("api_C1_05132_get", &StaticFieldAccess<&parsertokens::Function3Arg::TYPE_ID>::get);
    emscripten::function("api_C1_05133_get", &StaticFieldAccess<&parsertokens::Function3Arg::TYPE_DESC>::get);
    emscripten::function("api_C1_05133_set", &StaticFieldAccess<&parsertokens::Function3Arg::TYPE_DESC>::set);
    emscripten::function("api_C1_05134_get", &StaticFieldAccess<&parsertokens::Function3Arg::IF_CONDITION_ID>::get);
    emscripten::function("api_C1_05135_get", &StaticFieldAccess<&parsertokens::Function3Arg::IF_ID>::get);
    emscripten::function("api_C1_05136_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_ID>::get);
    emscripten::function("api_C1_05137_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_LR_ID>::get);
    emscripten::function("api_C1_05138_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_L_ID>::get);
    emscripten::function("api_C1_05139_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_R_ID>::get);
    emscripten::function("api_C1_05140_get", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_UNIFORM_CONT_ID>::get);
    emscripten::function("api_C1_05141_get", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_UNIFORM_CONT_ID>::get);
    emscripten::function("api_C1_05142_get", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_UNIFORM_CONT_ID>::get);
    emscripten::function("api_C1_05143_get", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_NORMAL_ID>::get);
    emscripten::function("api_C1_05144_get", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_NORMAL_ID>::get);
    emscripten::function("api_C1_05145_get", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_NORMAL_ID>::get);
    emscripten::function("api_C1_05146_get", &StaticFieldAccess<&parsertokens::Function3Arg::DIGIT_ID>::get);
    emscripten::function("api_C1_05147_get", &StaticFieldAccess<&parsertokens::Function3Arg::INC_BETA_ID>::get);
    emscripten::function("api_C1_05148_get", &StaticFieldAccess<&parsertokens::Function3Arg::REG_BETA_ID>::get);
    emscripten::function("api_C1_05149_get", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_F_SNEDECOR_ID>::get);
    emscripten::function("api_C1_05150_get", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_F_SNEDECOR_ID>::get);
    emscripten::function("api_C1_05151_get", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_F_SNEDECOR_ID>::get);
    emscripten::function("api_C1_05152_get", &StaticFieldAccess<&parsertokens::Function3Arg::IF_STR>::get);
    emscripten::function("api_C1_05153_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_STR>::get);
    emscripten::function("api_C1_05154_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_LR_STR>::get);
    emscripten::function("api_C1_05155_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_L_STR>::get);
    emscripten::function("api_C1_05156_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_R_STR>::get);
    emscripten::function("api_C1_05157_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::PDF_UNIFORM_CONT_STR>::get);
    emscripten::function("api_C1_05158_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::CDF_UNIFORM_CONT_STR>::get);
    emscripten::function("api_C1_05159_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::QNT_UNIFORM_CONT_STR>::get);
    emscripten::function("api_C1_05160_get", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_NORMAL_STR>::get);
    emscripten::function("api_C1_05161_get", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_NORMAL_STR>::get);
    emscripten::function("api_C1_05162_get", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_NORMAL_STR>::get);
    emscripten::function("api_C1_05163_get", &StaticFieldAccess<&parsertokens::Function3Arg::DIGIT_STR>::get);
    emscripten::function("api_C1_05164_get", &StaticFieldAccess<&parsertokens::Function3Arg::INC_BETA_STR>::get);
    emscripten::function("api_C1_05165_get", &StaticFieldAccess<&parsertokens::Function3Arg::REG_BETA_STR>::get);
    emscripten::function("api_C1_05166_get", &StaticFieldAccess<&parsertokens::Function3Arg::REG_BETA_I_STR>::get);
    emscripten::function("api_C1_05167_get", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_F_SNEDECOR_STR>::get);
    emscripten::function("api_C1_05168_get", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_F_SNEDECOR_STR>::get);
    emscripten::function("api_C1_05169_get", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_F_SNEDECOR_STR>::get);
    emscripten::function("api_C1_05170_get", &StaticFieldAccess<&parsertokens::Function3Arg::IF_SYN>::get);
    emscripten::function("api_C1_05171_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_SYN>::get);
    emscripten::function("api_C1_05172_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_LR_SYN>::get);
    emscripten::function("api_C1_05173_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_L_SYN>::get);
    emscripten::function("api_C1_05174_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_R_SYN>::get);
    emscripten::function("api_C1_05175_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::PDF_UNIFORM_CONT_SYN>::get);
    emscripten::function("api_C1_05176_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::CDF_UNIFORM_CONT_SYN>::get);
    emscripten::function("api_C1_05177_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::QNT_UNIFORM_CONT_SYN>::get);
    emscripten::function("api_C1_05178_get", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_NORMAL_SYN>::get);
    emscripten::function("api_C1_05179_get", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_NORMAL_SYN>::get);
    emscripten::function("api_C1_05180_get", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_NORMAL_SYN>::get);
    emscripten::function("api_C1_05181_get", &StaticFieldAccess<&parsertokens::Function3Arg::DIGIT_SYN>::get);
    emscripten::function("api_C1_05182_get", &StaticFieldAccess<&parsertokens::Function3Arg::INC_BETA_SYN>::get);
    emscripten::function("api_C1_05183_get", &StaticFieldAccess<&parsertokens::Function3Arg::REG_BETA_SYN>::get);
    emscripten::function("api_C1_05184_get", &StaticFieldAccess<&parsertokens::Function3Arg::REG_BETA_I_SYN>::get);
    emscripten::function("api_C1_05185_get", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_F_SNEDECOR_SYN>::get);
    emscripten::function("api_C1_05186_get", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_F_SNEDECOR_SYN>::get);
    emscripten::function("api_C1_05187_get", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_F_SNEDECOR_SYN>::get);
    emscripten::function("api_C1_05188_get", &StaticFieldAccess<&parsertokens::Function3Arg::IF_DESC>::get);
    emscripten::function("api_C1_05188_set", &StaticFieldAccess<&parsertokens::Function3Arg::IF_DESC>::set);
    emscripten::function("api_C1_05189_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_DESC>::get);
    emscripten::function("api_C1_05189_set", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_DESC>::set);
    emscripten::function("api_C1_05190_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_LR_DESC>::get);
    emscripten::function("api_C1_05190_set", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_LR_DESC>::set);
    emscripten::function("api_C1_05191_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_L_DESC>::get);
    emscripten::function("api_C1_05191_set", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_L_DESC>::set);
    emscripten::function("api_C1_05192_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_R_DESC>::get);
    emscripten::function("api_C1_05192_set", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_R_DESC>::set);
    emscripten::function("api_C1_05193_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::PDF_UNIFORM_CONT_DESC>::get);
    emscripten::function("api_C1_05193_set",
                         &StaticFieldAccess<&parsertokens::Function3Arg::PDF_UNIFORM_CONT_DESC>::set);
    emscripten::function("api_C1_05194_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::CDF_UNIFORM_CONT_DESC>::get);
    emscripten::function("api_C1_05194_set",
                         &StaticFieldAccess<&parsertokens::Function3Arg::CDF_UNIFORM_CONT_DESC>::set);
    emscripten::function("api_C1_05195_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::QNT_UNIFORM_CONT_DESC>::get);
    emscripten::function("api_C1_05195_set",
                         &StaticFieldAccess<&parsertokens::Function3Arg::QNT_UNIFORM_CONT_DESC>::set);
    emscripten::function("api_C1_05196_get", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_NORMAL_DESC>::get);
    emscripten::function("api_C1_05196_set", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_NORMAL_DESC>::set);
    emscripten::function("api_C1_05197_get", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_NORMAL_DESC>::get);
    emscripten::function("api_C1_05197_set", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_NORMAL_DESC>::set);
    emscripten::function("api_C1_05198_get", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_NORMAL_DESC>::get);
    emscripten::function("api_C1_05198_set", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_NORMAL_DESC>::set);
    emscripten::function("api_C1_05199_get", &StaticFieldAccess<&parsertokens::Function3Arg::DIGIT_DESC>::get);
    emscripten::function("api_C1_05199_set", &StaticFieldAccess<&parsertokens::Function3Arg::DIGIT_DESC>::set);
    emscripten::function("api_C1_05200_get", &StaticFieldAccess<&parsertokens::Function3Arg::INC_BETA_DESC>::get);
    emscripten::function("api_C1_05200_set", &StaticFieldAccess<&parsertokens::Function3Arg::INC_BETA_DESC>::set);
    emscripten::function("api_C1_05201_get", &StaticFieldAccess<&parsertokens::Function3Arg::REG_BETA_DESC>::get);
    emscripten::function("api_C1_05201_set", &StaticFieldAccess<&parsertokens::Function3Arg::REG_BETA_DESC>::set);
    emscripten::function("api_C1_05202_get", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_F_SNEDECOR_DESC>::get);
    emscripten::function("api_C1_05202_set", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_F_SNEDECOR_DESC>::set);
    emscripten::function("api_C1_05203_get", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_F_SNEDECOR_DESC>::get);
    emscripten::function("api_C1_05203_set", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_F_SNEDECOR_DESC>::set);
    emscripten::function("api_C1_05204_get", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_F_SNEDECOR_DESC>::get);
    emscripten::function("api_C1_05204_set", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_F_SNEDECOR_DESC>::set);
    emscripten::function("api_C1_05205_get", &StaticFieldAccess<&parsertokens::Function3Arg::IF_SINCE>::get);
    emscripten::function("api_C1_05206_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_SINCE>::get);
    emscripten::function("api_C1_05207_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_LR_SINCE>::get);
    emscripten::function("api_C1_05208_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_L_SINCE>::get);
    emscripten::function("api_C1_05209_get", &StaticFieldAccess<&parsertokens::Function3Arg::CHI_R_SINCE>::get);
    emscripten::function("api_C1_05210_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::PDF_UNIFORM_CONT_SINCE>::get);
    emscripten::function("api_C1_05211_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::CDF_UNIFORM_CONT_SINCE>::get);
    emscripten::function("api_C1_05212_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::QNT_UNIFORM_CONT_SINCE>::get);
    emscripten::function("api_C1_05213_get", &StaticFieldAccess<&parsertokens::Function3Arg::PDF_NORMAL_SINCE>::get);
    emscripten::function("api_C1_05214_get", &StaticFieldAccess<&parsertokens::Function3Arg::CDF_NORMAL_SINCE>::get);
    emscripten::function("api_C1_05215_get", &StaticFieldAccess<&parsertokens::Function3Arg::QNT_NORMAL_SINCE>::get);
    emscripten::function("api_C1_05216_get", &StaticFieldAccess<&parsertokens::Function3Arg::DIGIT_SINCE>::get);
    emscripten::function("api_C1_05217_get", &StaticFieldAccess<&parsertokens::Function3Arg::INC_BETA_SINCE>::get);
    emscripten::function("api_C1_05218_get", &StaticFieldAccess<&parsertokens::Function3Arg::REG_BETA_SINCE>::get);
    emscripten::function("api_C1_05219_get", &StaticFieldAccess<&parsertokens::Function3Arg::REG_BETA_I_SINCE>::get);
    emscripten::function("api_C1_05220_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::PDF_F_SNEDECOR_SINCE>::get);
    emscripten::function("api_C1_05221_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::CDF_F_SNEDECOR_SINCE>::get);
    emscripten::function("api_C1_05222_get",
                         &StaticFieldAccess<&parsertokens::Function3Arg::QNT_F_SNEDECOR_SINCE>::get);
    emscripten::function("api_C1_05229_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::TYPE_ID>::get);
    emscripten::function("api_C1_05230_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::TYPE_DESC>::get);
    emscripten::function("api_C1_05230_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::TYPE_DESC>::set);
    emscripten::function("api_C1_05231_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::IFF_ID>::get);
    emscripten::function("api_C1_05232_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MIN_ID>::get);
    emscripten::function("api_C1_05233_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MAX_ID>::get);
    emscripten::function("api_C1_05234_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_FRAC_ID>::get);
    emscripten::function("api_C1_05235_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_POL_ID>::get);
    emscripten::function("api_C1_05236_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::GCD_ID>::get);
    emscripten::function("api_C1_05237_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::LCM_ID>::get);
    emscripten::function("api_C1_05238_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::SUM_ID>::get);
    emscripten::function("api_C1_05239_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::PROD_ID>::get);
    emscripten::function("api_C1_05240_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::AVG_ID>::get);
    emscripten::function("api_C1_05241_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::VAR_ID>::get);
    emscripten::function("api_C1_05242_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::STD_ID>::get);
    emscripten::function("api_C1_05243_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::RND_LIST_ID>::get);
    emscripten::function("api_C1_05244_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::COALESCE_ID>::get);
    emscripten::function("api_C1_05245_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::OR_ID>::get);
    emscripten::function("api_C1_05246_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::AND_ID>::get);
    emscripten::function("api_C1_05247_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::XOR_ID>::get);
    emscripten::function("api_C1_05248_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMIN_ID>::get);
    emscripten::function("api_C1_05249_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMAX_ID>::get);
    emscripten::function("api_C1_05250_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MEDIAN_ID>::get);
    emscripten::function("api_C1_05251_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MODE_ID>::get);
    emscripten::function("api_C1_05252_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::BASE_ID>::get);
    emscripten::function("api_C1_05253_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::NDIST_ID>::get);
    emscripten::function("api_C1_05254_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::IFF_STR>::get);
    emscripten::function("api_C1_05255_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MIN_STR>::get);
    emscripten::function("api_C1_05256_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MAX_STR>::get);
    emscripten::function("api_C1_05257_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_FRAC_STR>::get);
    emscripten::function("api_C1_05258_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_POL_STR>::get);
    emscripten::function("api_C1_05259_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::GCD_STR>::get);
    emscripten::function("api_C1_05260_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::LCM_STR>::get);
    emscripten::function("api_C1_05261_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::SUM_STR>::get);
    emscripten::function("api_C1_05262_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::PROD_STR>::get);
    emscripten::function("api_C1_05263_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::AVG_STR>::get);
    emscripten::function("api_C1_05264_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::VAR_STR>::get);
    emscripten::function("api_C1_05265_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::STD_STR>::get);
    emscripten::function("api_C1_05266_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::RND_LIST_STR>::get);
    emscripten::function("api_C1_05267_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::COALESCE_STR>::get);
    emscripten::function("api_C1_05268_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::OR_STR>::get);
    emscripten::function("api_C1_05269_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::AND_STR>::get);
    emscripten::function("api_C1_05270_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::XOR_STR>::get);
    emscripten::function("api_C1_05271_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMIN_STR>::get);
    emscripten::function("api_C1_05272_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMAX_STR>::get);
    emscripten::function("api_C1_05273_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MEDIAN_STR>::get);
    emscripten::function("api_C1_05274_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MODE_STR>::get);
    emscripten::function("api_C1_05275_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::BASE_STR>::get);
    emscripten::function("api_C1_05276_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::NDIST_STR>::get);
    emscripten::function("api_C1_05277_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::IFF_SYN>::get);
    emscripten::function("api_C1_05278_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MIN_SYN>::get);
    emscripten::function("api_C1_05279_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MAX_SYN>::get);
    emscripten::function("api_C1_05280_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_FRAC_SYN>::get);
    emscripten::function("api_C1_05281_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_POL_SYN>::get);
    emscripten::function("api_C1_05282_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::GCD_SYN>::get);
    emscripten::function("api_C1_05283_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::LCM_SYN>::get);
    emscripten::function("api_C1_05284_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::SUM_SYN>::get);
    emscripten::function("api_C1_05285_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::PROD_SYN>::get);
    emscripten::function("api_C1_05286_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::AVG_SYN>::get);
    emscripten::function("api_C1_05287_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::VAR_SYN>::get);
    emscripten::function("api_C1_05288_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::STD_SYN>::get);
    emscripten::function("api_C1_05289_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::RND_LIST_SYN>::get);
    emscripten::function("api_C1_05290_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::COALESCE_SYN>::get);
    emscripten::function("api_C1_05291_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::OR_SYN>::get);
    emscripten::function("api_C1_05292_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::AND_SYN>::get);
    emscripten::function("api_C1_05293_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::XOR_SYN>::get);
    emscripten::function("api_C1_05294_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMIN_SYN>::get);
    emscripten::function("api_C1_05295_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMAX_SYN>::get);
    emscripten::function("api_C1_05296_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MEDIAN_SYN>::get);
    emscripten::function("api_C1_05297_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MODE_SYN>::get);
    emscripten::function("api_C1_05298_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::BASE_SYN>::get);
    emscripten::function("api_C1_05299_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::NDIST_SYN>::get);
    emscripten::function("api_C1_05300_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::IFF_DESC>::get);
    emscripten::function("api_C1_05300_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::IFF_DESC>::set);
    emscripten::function("api_C1_05301_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MIN_DESC>::get);
    emscripten::function("api_C1_05301_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::MIN_DESC>::set);
    emscripten::function("api_C1_05302_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MAX_DESC>::get);
    emscripten::function("api_C1_05302_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::MAX_DESC>::set);
    emscripten::function("api_C1_05303_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_FRAC_DESC>::get);
    emscripten::function("api_C1_05303_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_FRAC_DESC>::set);
    emscripten::function("api_C1_05304_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_POL_DESC>::get);
    emscripten::function("api_C1_05304_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_POL_DESC>::set);
    emscripten::function("api_C1_05305_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::GCD_DESC>::get);
    emscripten::function("api_C1_05305_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::GCD_DESC>::set);
    emscripten::function("api_C1_05306_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::LCM_DESC>::get);
    emscripten::function("api_C1_05306_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::LCM_DESC>::set);
    emscripten::function("api_C1_05307_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::SUM_DESC>::get);
    emscripten::function("api_C1_05307_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::SUM_DESC>::set);
    emscripten::function("api_C1_05308_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::PROD_DESC>::get);
    emscripten::function("api_C1_05308_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::PROD_DESC>::set);
    emscripten::function("api_C1_05309_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::AVG_DESC>::get);
    emscripten::function("api_C1_05309_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::AVG_DESC>::set);
    emscripten::function("api_C1_05310_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::VAR_DESC>::get);
    emscripten::function("api_C1_05310_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::VAR_DESC>::set);
    emscripten::function("api_C1_05311_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::STD_DESC>::get);
    emscripten::function("api_C1_05311_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::STD_DESC>::set);
    emscripten::function("api_C1_05312_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::RND_LIST_DESC>::get);
    emscripten::function("api_C1_05312_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::RND_LIST_DESC>::set);
    emscripten::function("api_C1_05313_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::COALESCE_DESC>::get);
    emscripten::function("api_C1_05313_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::COALESCE_DESC>::set);
    emscripten::function("api_C1_05314_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::OR_DESC>::get);
    emscripten::function("api_C1_05314_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::OR_DESC>::set);
    emscripten::function("api_C1_05315_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::AND_DESC>::get);
    emscripten::function("api_C1_05315_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::AND_DESC>::set);
    emscripten::function("api_C1_05316_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::XOR_DESC>::get);
    emscripten::function("api_C1_05316_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::XOR_DESC>::set);
    emscripten::function("api_C1_05317_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMIN_DESC>::get);
    emscripten::function("api_C1_05317_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMIN_DESC>::set);
    emscripten::function("api_C1_05318_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMAX_DESC>::get);
    emscripten::function("api_C1_05318_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMAX_DESC>::set);
    emscripten::function("api_C1_05319_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MEDIAN_DESC>::get);
    emscripten::function("api_C1_05319_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::MEDIAN_DESC>::set);
    emscripten::function("api_C1_05320_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MODE_DESC>::get);
    emscripten::function("api_C1_05320_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::MODE_DESC>::set);
    emscripten::function("api_C1_05321_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::BASE_DESC>::get);
    emscripten::function("api_C1_05321_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::BASE_DESC>::set);
    emscripten::function("api_C1_05322_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::NDIST_DESC>::get);
    emscripten::function("api_C1_05322_set", &StaticFieldAccess<&parsertokens::FunctionVariadic::NDIST_DESC>::set);
    emscripten::function("api_C1_05323_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::IFF_SINCE>::get);
    emscripten::function("api_C1_05324_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MIN_SINCE>::get);
    emscripten::function("api_C1_05325_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MAX_SINCE>::get);
    emscripten::function("api_C1_05326_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_FRAC_SINCE>::get);
    emscripten::function("api_C1_05327_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::CONT_POL_SINCE>::get);
    emscripten::function("api_C1_05328_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::GCD_SINCE>::get);
    emscripten::function("api_C1_05329_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::LCM_SINCE>::get);
    emscripten::function("api_C1_05330_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::SUM_SINCE>::get);
    emscripten::function("api_C1_05331_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::PROD_SINCE>::get);
    emscripten::function("api_C1_05332_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::AVG_SINCE>::get);
    emscripten::function("api_C1_05333_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::VAR_SINCE>::get);
    emscripten::function("api_C1_05334_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::STD_SINCE>::get);
    emscripten::function("api_C1_05335_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::RND_LIST_SINCE>::get);
    emscripten::function("api_C1_05336_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::COALESCE_SINCE>::get);
    emscripten::function("api_C1_05337_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::OR_SINCE>::get);
    emscripten::function("api_C1_05338_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::AND_SINCE>::get);
    emscripten::function("api_C1_05339_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::XOR_SINCE>::get);
    emscripten::function("api_C1_05340_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMIN_SINCE>::get);
    emscripten::function("api_C1_05341_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::ARGMAX_SINCE>::get);
    emscripten::function("api_C1_05342_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MEDIAN_SINCE>::get);
    emscripten::function("api_C1_05343_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::MODE_SINCE>::get);
    emscripten::function("api_C1_05344_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::BASE_SINCE>::get);
    emscripten::function("api_C1_05345_get", &StaticFieldAccess<&parsertokens::FunctionVariadic::NDIST_SINCE>::get);
    emscripten::function("api_C1_05353_get", &StaticFieldAccess<&parsertokens::KeyWord::NO_DEFINITION>::get);
    emscripten::function("api_C1_05354_get", &FieldAccess<&parsertokens::KeyWord::wordString>::get);
    emscripten::function("api_C1_05354_set", &FieldAccess<&parsertokens::KeyWord::wordString>::set);
    emscripten::function("api_C1_05355_get", &FieldAccess<&parsertokens::KeyWord::wordId>::get);
    emscripten::function("api_C1_05355_set", &FieldAccess<&parsertokens::KeyWord::wordId>::set);
    emscripten::function("api_C1_05356_get", &FieldAccess<&parsertokens::KeyWord::wordTypeId>::get);
    emscripten::function("api_C1_05356_set", &FieldAccess<&parsertokens::KeyWord::wordTypeId>::set);
    emscripten::function("api_C1_05357_get", &FieldAccess<&parsertokens::KeyWord::description>::get);
    emscripten::function("api_C1_05357_set", &FieldAccess<&parsertokens::KeyWord::description>::set);
    emscripten::function("api_C1_05358_get", &FieldAccess<&parsertokens::KeyWord::syntax>::get);
    emscripten::function("api_C1_05358_set", &FieldAccess<&parsertokens::KeyWord::syntax>::set);
    emscripten::function("api_C1_05359_get", &FieldAccess<&parsertokens::KeyWord::since>::get);
    emscripten::function("api_C1_05359_set", &FieldAccess<&parsertokens::KeyWord::since>::set);
    emscripten::function("api_C1_05360",
                         &StaticCall<static_cast<bool (*)(const KeyWordPtr &)>(&
                             parsertokens::KeyWord::isFunctionForm)>::call);
    emscripten::function("api_C1_05365_get", &StaticFieldAccess<&parsertokens::Operator::TYPE_ID>::get);
    emscripten::function("api_C1_05366_get", &StaticFieldAccess<&parsertokens::Operator::TYPE_DESC>::get);
    emscripten::function("api_C1_05366_set", &StaticFieldAccess<&parsertokens::Operator::TYPE_DESC>::set);
    emscripten::function("api_C1_05367_get", &StaticFieldAccess<&parsertokens::Operator::PLUS_ID>::get);
    emscripten::function("api_C1_05368_get", &StaticFieldAccess<&parsertokens::Operator::MINUS_ID>::get);
    emscripten::function("api_C1_05369_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_ID>::get);
    emscripten::function("api_C1_05370_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_ID>::get);
    emscripten::function("api_C1_05371_get", &StaticFieldAccess<&parsertokens::Operator::POWER_ID>::get);
    emscripten::function("api_C1_05372_get", &StaticFieldAccess<&parsertokens::Operator::FACT_ID>::get);
    emscripten::function("api_C1_05373_get", &StaticFieldAccess<&parsertokens::Operator::MOD_ID>::get);
    emscripten::function("api_C1_05374_get", &StaticFieldAccess<&parsertokens::Operator::PERC_ID>::get);
    emscripten::function("api_C1_05375_get", &StaticFieldAccess<&parsertokens::Operator::TETRATION_ID>::get);
    emscripten::function("api_C1_05376_get", &StaticFieldAccess<&parsertokens::Operator::SQUARE_ROOT_ID>::get);
    emscripten::function("api_C1_05377_get", &StaticFieldAccess<&parsertokens::Operator::CUBE_ROOT_ID>::get);
    emscripten::function("api_C1_05378_get", &StaticFieldAccess<&parsertokens::Operator::FOURTH_ROOT_ID>::get);
    emscripten::function("api_C1_05379_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_QUOTIENT_ID>::get);
    emscripten::function("api_C1_05380_get", &StaticFieldAccess<&parsertokens::Operator::PLUS_STR>::get);
    emscripten::function("api_C1_05381_get", &StaticFieldAccess<&parsertokens::Operator::MINUS_STR>::get);
    emscripten::function("api_C1_05382_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_STR>::get);
    emscripten::function("api_C1_05383_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_STR_UNI_1>::get);
    emscripten::function("api_C1_05384_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_STR_UNI_2>::get);
    emscripten::function("api_C1_05385_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_STR_UNI_3>::get);
    emscripten::function("api_C1_05386_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_STR>::get);
    emscripten::function("api_C1_05387_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_EUROPE_STR>::get);
    emscripten::function("api_C1_05388_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_STR_UNI_1>::get);
    emscripten::function("api_C1_05389_get", &StaticFieldAccess<&parsertokens::Operator::POWER_STR>::get);
    emscripten::function("api_C1_05390_get", &StaticFieldAccess<&parsertokens::Operator::FACT_STR>::get);
    emscripten::function("api_C1_05391_get", &StaticFieldAccess<&parsertokens::Operator::MOD_STR>::get);
    emscripten::function("api_C1_05392_get", &StaticFieldAccess<&parsertokens::Operator::PERC_STR>::get);
    emscripten::function("api_C1_05393_get", &StaticFieldAccess<&parsertokens::Operator::TETRATION_STR>::get);
    emscripten::function("api_C1_05394_get", &StaticFieldAccess<&parsertokens::Operator::SQUARE_ROOT_STR>::get);
    emscripten::function("api_C1_05395_get", &StaticFieldAccess<&parsertokens::Operator::CUBE_ROOT_STR>::get);
    emscripten::function("api_C1_05396_get", &StaticFieldAccess<&parsertokens::Operator::FOURTH_ROOT_STR>::get);
    emscripten::function("api_C1_05397_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_QUOTIENT_STR>::get);
    emscripten::function("api_C1_05398_get", &StaticFieldAccess<&parsertokens::Operator::PLUS_SYN>::get);
    emscripten::function("api_C1_05399_get", &StaticFieldAccess<&parsertokens::Operator::MINUS_SYN>::get);
    emscripten::function("api_C1_05400_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_SYN>::get);
    emscripten::function("api_C1_05401_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_SYN_UNI_1>::get);
    emscripten::function("api_C1_05402_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_SYN_UNI_2>::get);
    emscripten::function("api_C1_05403_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_SYN_UNI_3>::get);
    emscripten::function("api_C1_05404_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_SYN>::get);
    emscripten::function("api_C1_05405_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_EUROPE_SYN>::get);
    emscripten::function("api_C1_05406_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_SYN_UNI_1>::get);
    emscripten::function("api_C1_05407_get", &StaticFieldAccess<&parsertokens::Operator::POWER_SYN>::get);
    emscripten::function("api_C1_05408_get", &StaticFieldAccess<&parsertokens::Operator::FACT_SYN>::get);
    emscripten::function("api_C1_05409_get", &StaticFieldAccess<&parsertokens::Operator::MOD_SYN>::get);
    emscripten::function("api_C1_05410_get", &StaticFieldAccess<&parsertokens::Operator::PERC_SYN>::get);
    emscripten::function("api_C1_05411_get", &StaticFieldAccess<&parsertokens::Operator::TETRATION_SYN>::get);
    emscripten::function("api_C1_05412_get", &StaticFieldAccess<&parsertokens::Operator::SQUARE_ROOT_SYN>::get);
    emscripten::function("api_C1_05413_get", &StaticFieldAccess<&parsertokens::Operator::CUBE_ROOT_SYN>::get);
    emscripten::function("api_C1_05414_get", &StaticFieldAccess<&parsertokens::Operator::FOURTH_ROOT_SYN>::get);
    emscripten::function("api_C1_05415_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_QUOTIENT_SYN>::get);
    emscripten::function("api_C1_05416_get", &StaticFieldAccess<&parsertokens::Operator::PLUS_DESC>::get);
    emscripten::function("api_C1_05416_set", &StaticFieldAccess<&parsertokens::Operator::PLUS_DESC>::set);
    emscripten::function("api_C1_05417_get", &StaticFieldAccess<&parsertokens::Operator::MINUS_DESC>::get);
    emscripten::function("api_C1_05417_set", &StaticFieldAccess<&parsertokens::Operator::MINUS_DESC>::set);
    emscripten::function("api_C1_05418_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_DESC>::get);
    emscripten::function("api_C1_05418_set", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_DESC>::set);
    emscripten::function("api_C1_05419_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_DESC>::get);
    emscripten::function("api_C1_05419_set", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_DESC>::set);
    emscripten::function("api_C1_05420_get", &StaticFieldAccess<&parsertokens::Operator::POWER_DESC>::get);
    emscripten::function("api_C1_05420_set", &StaticFieldAccess<&parsertokens::Operator::POWER_DESC>::set);
    emscripten::function("api_C1_05421_get", &StaticFieldAccess<&parsertokens::Operator::FACT_DESC>::get);
    emscripten::function("api_C1_05421_set", &StaticFieldAccess<&parsertokens::Operator::FACT_DESC>::set);
    emscripten::function("api_C1_05422_get", &StaticFieldAccess<&parsertokens::Operator::MOD_DESC>::get);
    emscripten::function("api_C1_05422_set", &StaticFieldAccess<&parsertokens::Operator::MOD_DESC>::set);
    emscripten::function("api_C1_05423_get", &StaticFieldAccess<&parsertokens::Operator::PERC_DESC>::get);
    emscripten::function("api_C1_05423_set", &StaticFieldAccess<&parsertokens::Operator::PERC_DESC>::set);
    emscripten::function("api_C1_05424_get", &StaticFieldAccess<&parsertokens::Operator::TETRATION_DESC>::get);
    emscripten::function("api_C1_05424_set", &StaticFieldAccess<&parsertokens::Operator::TETRATION_DESC>::set);
    emscripten::function("api_C1_05425_get", &StaticFieldAccess<&parsertokens::Operator::SQUARE_ROOT_DESC>::get);
    emscripten::function("api_C1_05425_set", &StaticFieldAccess<&parsertokens::Operator::SQUARE_ROOT_DESC>::set);
    emscripten::function("api_C1_05426_get", &StaticFieldAccess<&parsertokens::Operator::CUBE_ROOT_DESC>::get);
    emscripten::function("api_C1_05426_set", &StaticFieldAccess<&parsertokens::Operator::CUBE_ROOT_DESC>::set);
    emscripten::function("api_C1_05427_get", &StaticFieldAccess<&parsertokens::Operator::FOURTH_ROOT_DESC>::get);
    emscripten::function("api_C1_05427_set", &StaticFieldAccess<&parsertokens::Operator::FOURTH_ROOT_DESC>::set);
    emscripten::function("api_C1_05428_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_QUOTIENT_DESC>::get);
    emscripten::function("api_C1_05428_set", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_QUOTIENT_DESC>::set);
    emscripten::function("api_C1_05429_get", &StaticFieldAccess<&parsertokens::Operator::PLUS_SINCE>::get);
    emscripten::function("api_C1_05430_get", &StaticFieldAccess<&parsertokens::Operator::MINUS_SINCE>::get);
    emscripten::function("api_C1_05431_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_SINCE>::get);
    emscripten::function("api_C1_05432_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_SINCE_UNI_1>::get);
    emscripten::function("api_C1_05433_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_SINCE_UNI_2>::get);
    emscripten::function("api_C1_05434_get", &StaticFieldAccess<&parsertokens::Operator::MULTIPLY_SINCE_UNI_3>::get);
    emscripten::function("api_C1_05435_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_SINCE>::get);
    emscripten::function("api_C1_05436_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_SINCE_EUROPE>::get);
    emscripten::function("api_C1_05437_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_SINCE_UNI_1>::get);
    emscripten::function("api_C1_05438_get", &StaticFieldAccess<&parsertokens::Operator::POWER_SINCE>::get);
    emscripten::function("api_C1_05439_get", &StaticFieldAccess<&parsertokens::Operator::FACT_SINCE>::get);
    emscripten::function("api_C1_05440_get", &StaticFieldAccess<&parsertokens::Operator::MOD_SINCE>::get);
    emscripten::function("api_C1_05441_get", &StaticFieldAccess<&parsertokens::Operator::PERC_SINCE>::get);
    emscripten::function("api_C1_05442_get", &StaticFieldAccess<&parsertokens::Operator::TETRATION_SINCE>::get);
    emscripten::function("api_C1_05443_get", &StaticFieldAccess<&parsertokens::Operator::SQUARE_ROOT_SINCE>::get);
    emscripten::function("api_C1_05444_get", &StaticFieldAccess<&parsertokens::Operator::CUBE_ROOT_SINCE>::get);
    emscripten::function("api_C1_05445_get", &StaticFieldAccess<&parsertokens::Operator::FOURTH_ROOT_SINCE>::get);
    emscripten::function("api_C1_05446_get", &StaticFieldAccess<&parsertokens::Operator::DIVIDE_QUOTIENT_SINCE>::get);
    emscripten::function("api_C1_05453_get", &StaticFieldAccess<&parsertokens::ParserSymbol::NA>::get);
    emscripten::function("api_C1_05454_get", &StaticFieldAccess<&parsertokens::ParserSymbol::EMPTY>::get);
    emscripten::function("api_C1_05455_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT>::get);
    emscripten::function("api_C1_05456_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B1>::get);
    emscripten::function("api_C1_05457_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B2>::get);
    emscripten::function("api_C1_05458_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B3>::get);
    emscripten::function("api_C1_05459_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B4>::get);
    emscripten::function("api_C1_05460_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B5>::get);
    emscripten::function("api_C1_05461_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B6>::get);
    emscripten::function("api_C1_05462_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B7>::get);
    emscripten::function("api_C1_05463_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B8>::get);
    emscripten::function("api_C1_05464_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B9>::get);
    emscripten::function("api_C1_05465_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B10>::get);
    emscripten::function("api_C1_05466_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B11>::get);
    emscripten::function("api_C1_05467_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B12>::get);
    emscripten::function("api_C1_05468_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B13>::get);
    emscripten::function("api_C1_05469_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B14>::get);
    emscripten::function("api_C1_05470_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B15>::get);
    emscripten::function("api_C1_05471_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B16>::get);
    emscripten::function("api_C1_05472_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B17>::get);
    emscripten::function("api_C1_05473_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B18>::get);
    emscripten::function("api_C1_05474_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B19>::get);
    emscripten::function("api_C1_05475_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B20>::get);
    emscripten::function("api_C1_05476_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B21>::get);
    emscripten::function("api_C1_05477_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B22>::get);
    emscripten::function("api_C1_05478_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B23>::get);
    emscripten::function("api_C1_05479_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B24>::get);
    emscripten::function("api_C1_05480_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B25>::get);
    emscripten::function("api_C1_05481_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B26>::get);
    emscripten::function("api_C1_05482_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B27>::get);
    emscripten::function("api_C1_05483_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B28>::get);
    emscripten::function("api_C1_05484_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B29>::get);
    emscripten::function("api_C1_05485_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B30>::get);
    emscripten::function("api_C1_05486_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B31>::get);
    emscripten::function("api_C1_05487_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B32>::get);
    emscripten::function("api_C1_05488_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B33>::get);
    emscripten::function("api_C1_05489_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B34>::get);
    emscripten::function("api_C1_05490_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B35>::get);
    emscripten::function("api_C1_05491_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DIGIT_B36>::get);
    emscripten::function("api_C1_05492_get", &StaticFieldAccess<&parsertokens::ParserSymbol::INTEGER>::get);
    emscripten::function("api_C1_05493_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DEC_FRACT>::get);
    emscripten::function("api_C1_05494_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DEC_FRACT_OR_INT>::get);
    emscripten::function("api_C1_05495_get", &StaticFieldAccess<&parsertokens::ParserSymbol::DECIMAL_REG_EXP>::get);
    emscripten::function("api_C1_05496_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE1_REG_EXP>::get);
    emscripten::function("api_C1_05497_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE2_REG_EXP>::get);
    emscripten::function("api_C1_05498_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE3_REG_EXP>::get);
    emscripten::function("api_C1_05499_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE4_REG_EXP>::get);
    emscripten::function("api_C1_05500_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE5_REG_EXP>::get);
    emscripten::function("api_C1_05501_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE6_REG_EXP>::get);
    emscripten::function("api_C1_05502_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE7_REG_EXP>::get);
    emscripten::function("api_C1_05503_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE8_REG_EXP>::get);
    emscripten::function("api_C1_05504_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE9_REG_EXP>::get);
    emscripten::function("api_C1_05505_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE10_REG_EXP>::get);
    emscripten::function("api_C1_05506_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE11_REG_EXP>::get);
    emscripten::function("api_C1_05507_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE12_REG_EXP>::get);
    emscripten::function("api_C1_05508_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE13_REG_EXP>::get);
    emscripten::function("api_C1_05509_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE14_REG_EXP>::get);
    emscripten::function("api_C1_05510_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE15_REG_EXP>::get);
    emscripten::function("api_C1_05511_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE16_REG_EXP>::get);
    emscripten::function("api_C1_05512_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE17_REG_EXP>::get);
    emscripten::function("api_C1_05513_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE18_REG_EXP>::get);
    emscripten::function("api_C1_05514_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE19_REG_EXP>::get);
    emscripten::function("api_C1_05515_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE20_REG_EXP>::get);
    emscripten::function("api_C1_05516_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE21_REG_EXP>::get);
    emscripten::function("api_C1_05517_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE22_REG_EXP>::get);
    emscripten::function("api_C1_05518_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE23_REG_EXP>::get);
    emscripten::function("api_C1_05519_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE24_REG_EXP>::get);
    emscripten::function("api_C1_05520_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE25_REG_EXP>::get);
    emscripten::function("api_C1_05521_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE26_REG_EXP>::get);
    emscripten::function("api_C1_05522_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE27_REG_EXP>::get);
    emscripten::function("api_C1_05523_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE28_REG_EXP>::get);
    emscripten::function("api_C1_05524_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE29_REG_EXP>::get);
    emscripten::function("api_C1_05525_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE30_REG_EXP>::get);
    emscripten::function("api_C1_05526_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE31_REG_EXP>::get);
    emscripten::function("api_C1_05527_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE32_REG_EXP>::get);
    emscripten::function("api_C1_05528_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE33_REG_EXP>::get);
    emscripten::function("api_C1_05529_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE34_REG_EXP>::get);
    emscripten::function("api_C1_05530_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE35_REG_EXP>::get);
    emscripten::function("api_C1_05531_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE36_REG_EXP>::get);
    emscripten::function("api_C1_05532_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BASE_OTHER_REG_EXP>::get);
    emscripten::function("api_C1_05533_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::UNICODE_NAME_REG_EXP>::get);
    emscripten::function("api_C1_05534_get", &StaticFieldAccess<&parsertokens::ParserSymbol::FRACTION>::get);
    emscripten::function("api_C1_05535_get", &StaticFieldAccess<&parsertokens::ParserSymbol::nameOnlyTokenRegExp>::get);
    emscripten::function("api_C1_05536_get", &StaticFieldAccess<&parsertokens::ParserSymbol::unitOnlyTokenRegExp>::get);
    emscripten::function("api_C1_05537_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::nameOnlyTokenOptBracketsRegExp>::get);
    emscripten::function("api_C1_05538_get", &StaticFieldAccess<&parsertokens::ParserSymbol::nameTokenRegExp>::get);
    emscripten::function("api_C1_05539_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::nameTokenOptBracketsRegExp>::get);
    emscripten::function("api_C1_05540_get", &StaticFieldAccess<&parsertokens::ParserSymbol::paramsTokenRegeExp>::get);
    emscripten::function("api_C1_05541_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::constArgDefStrRegExp>::get);
    emscripten::function("api_C1_05542_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::constUnitgDefStrRegExp>::get);
    emscripten::function("api_C1_05543_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::functionDefStrRegExp>::get);
    emscripten::function("api_C1_05544_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::function1ArgDefStrRegExp>::get);
    emscripten::function("api_C1_05545_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::functionVariadicDefStrRegExp>::get);
    emscripten::function("api_C1_05546_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::ANY_NUMBER_LITERAL_REG_EXP>::get);
    emscripten::function("api_C1_05547_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::NUMBER_NAME_IMPL_MULTI_REG_EXP>::get);
    emscripten::function("api_C1_05548_get", &StaticFieldAccess<&parsertokens::ParserSymbol::TYPE_ID>::get);
    emscripten::function("api_C1_05549_get", &StaticFieldAccess<&parsertokens::ParserSymbol::TYPE_DESC>::get);
    emscripten::function("api_C1_05549_set", &StaticFieldAccess<&parsertokens::ParserSymbol::TYPE_DESC>::set);
    emscripten::function("api_C1_05550_get", &StaticFieldAccess<&parsertokens::ParserSymbol::LEFT_PARENTHESES_ID>::get);
    emscripten::function("api_C1_05551_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::RIGHT_PARENTHESES_ID>::get);
    emscripten::function("api_C1_05552_get", &StaticFieldAccess<&parsertokens::ParserSymbol::COMMA_ID>::get);
    emscripten::function("api_C1_05553_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BLANK_ID>::get);
    emscripten::function("api_C1_05554_get", &StaticFieldAccess<&parsertokens::ParserSymbol::NUMBER_ID>::get);
    emscripten::function("api_C1_05555_get", &StaticFieldAccess<&parsertokens::ParserSymbol::NUMBER_TYPE_ID>::get);
    emscripten::function("api_C1_05556_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::LEFT_PARENTHESES_STR>::get);
    emscripten::function("api_C1_05557_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::RIGHT_PARENTHESES_STR>::get);
    emscripten::function("api_C1_05558_get", &StaticFieldAccess<&parsertokens::ParserSymbol::COMMA_STR>::get);
    emscripten::function("api_C1_05559_get", &StaticFieldAccess<&parsertokens::ParserSymbol::SEMI_STR>::get);
    emscripten::function("api_C1_05560_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BLANK_STR>::get);
    emscripten::function("api_C1_05561_get", &StaticFieldAccess<&parsertokens::ParserSymbol::NUMBER_STR>::get);
    emscripten::function("api_C1_05562_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::LEFT_PARENTHESES_SYN>::get);
    emscripten::function("api_C1_05563_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::RIGHT_PARENTHESES_SYN>::get);
    emscripten::function("api_C1_05564_get", &StaticFieldAccess<&parsertokens::ParserSymbol::COMMA_SYN>::get);
    emscripten::function("api_C1_05565_get", &StaticFieldAccess<&parsertokens::ParserSymbol::SEMI_SYN>::get);
    emscripten::function("api_C1_05566_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BLANK_SYN>::get);
    emscripten::function("api_C1_05567_get", &StaticFieldAccess<&parsertokens::ParserSymbol::NUMBER_SYN>::get);
    emscripten::function("api_C1_05568_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::LEFT_PARENTHESES_DESC>::get);
    emscripten::function("api_C1_05568_set",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::LEFT_PARENTHESES_DESC>::set);
    emscripten::function("api_C1_05569_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::RIGHT_PARENTHESES_DESC>::get);
    emscripten::function("api_C1_05569_set",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::RIGHT_PARENTHESES_DESC>::set);
    emscripten::function("api_C1_05570_get", &StaticFieldAccess<&parsertokens::ParserSymbol::COMMA_DESC>::get);
    emscripten::function("api_C1_05570_set", &StaticFieldAccess<&parsertokens::ParserSymbol::COMMA_DESC>::set);
    emscripten::function("api_C1_05571_get", &StaticFieldAccess<&parsertokens::ParserSymbol::SEMI_DESC>::get);
    emscripten::function("api_C1_05571_set", &StaticFieldAccess<&parsertokens::ParserSymbol::SEMI_DESC>::set);
    emscripten::function("api_C1_05572_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BLANK_DESC>::get);
    emscripten::function("api_C1_05572_set", &StaticFieldAccess<&parsertokens::ParserSymbol::BLANK_DESC>::set);
    emscripten::function("api_C1_05573_get", &StaticFieldAccess<&parsertokens::ParserSymbol::UNICODE_MATH_DESC>::get);
    emscripten::function("api_C1_05573_set", &StaticFieldAccess<&parsertokens::ParserSymbol::UNICODE_MATH_DESC>::set);
    emscripten::function("api_C1_05574_get", &StaticFieldAccess<&parsertokens::ParserSymbol::NUMBER_LITERAL_STR>::get);
    emscripten::function("api_C1_05574_set", &StaticFieldAccess<&parsertokens::ParserSymbol::NUMBER_LITERAL_STR>::set);
    emscripten::function("api_C1_05575_get", &StaticFieldAccess<&parsertokens::ParserSymbol::NUMBER_LITERAL_DESC>::get);
    emscripten::function("api_C1_05575_set", &StaticFieldAccess<&parsertokens::ParserSymbol::NUMBER_LITERAL_DESC>::set);
    emscripten::function("api_C1_05576_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::LEFT_PARENTHESES_SINCE>::get);
    emscripten::function("api_C1_05577_get",
                         &StaticFieldAccess<&parsertokens::ParserSymbol::RIGHT_PARENTHESES_SINCE>::get);
    emscripten::function("api_C1_05578_get", &StaticFieldAccess<&parsertokens::ParserSymbol::COMMA_SINCE>::get);
    emscripten::function("api_C1_05579_get", &StaticFieldAccess<&parsertokens::ParserSymbol::BLANK_SINCE>::get);
    emscripten::function("api_C1_05580_get", &StaticFieldAccess<&parsertokens::ParserSymbol::NUMBER_SINCE>::get);
    emscripten::function("api_C1_05587_get", &StaticFieldAccess<&parsertokens::RandomVariable::TYPE_ID>::get);
    emscripten::function("api_C1_05588_get", &StaticFieldAccess<&parsertokens::RandomVariable::TYPE_DESC>::get);
    emscripten::function("api_C1_05588_set", &StaticFieldAccess<&parsertokens::RandomVariable::TYPE_DESC>::set);
    emscripten::function("api_C1_05589_get", &StaticFieldAccess<&parsertokens::RandomVariable::UNIFORM_ID>::get);
    emscripten::function("api_C1_05590_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT_ID>::get);
    emscripten::function("api_C1_05591_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT1_ID>::get);
    emscripten::function("api_C1_05592_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT2_ID>::get);
    emscripten::function("api_C1_05593_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT3_ID>::get);
    emscripten::function("api_C1_05594_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT4_ID>::get);
    emscripten::function("api_C1_05595_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT5_ID>::get);
    emscripten::function("api_C1_05596_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT6_ID>::get);
    emscripten::function("api_C1_05597_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT7_ID>::get);
    emscripten::function("api_C1_05598_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT8_ID>::get);
    emscripten::function("api_C1_05599_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT9_ID>::get);
    emscripten::function("api_C1_05600_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_ID>::get);
    emscripten::function("api_C1_05601_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_1_ID>::get);
    emscripten::function("api_C1_05602_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_2_ID>::get);
    emscripten::function("api_C1_05603_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_3_ID>::get);
    emscripten::function("api_C1_05604_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_4_ID>::get);
    emscripten::function("api_C1_05605_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_5_ID>::get);
    emscripten::function("api_C1_05606_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_6_ID>::get);
    emscripten::function("api_C1_05607_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_7_ID>::get);
    emscripten::function("api_C1_05608_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_8_ID>::get);
    emscripten::function("api_C1_05609_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_9_ID>::get);
    emscripten::function("api_C1_05610_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_ID>::get);
    emscripten::function("api_C1_05611_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_1_ID>::get);
    emscripten::function("api_C1_05612_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_2_ID>::get);
    emscripten::function("api_C1_05613_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_3_ID>::get);
    emscripten::function("api_C1_05614_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_4_ID>::get);
    emscripten::function("api_C1_05615_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_5_ID>::get);
    emscripten::function("api_C1_05616_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_6_ID>::get);
    emscripten::function("api_C1_05617_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_7_ID>::get);
    emscripten::function("api_C1_05618_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_8_ID>::get);
    emscripten::function("api_C1_05619_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_9_ID>::get);
    emscripten::function("api_C1_05620_get", &StaticFieldAccess<&parsertokens::RandomVariable::NOR_ID>::get);
    emscripten::function("api_C1_05621_get", &StaticFieldAccess<&parsertokens::RandomVariable::UNIFORM_STR>::get);
    emscripten::function("api_C1_05622_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT_STR>::get);
    emscripten::function("api_C1_05623_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT1_STR>::get);
    emscripten::function("api_C1_05624_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT2_STR>::get);
    emscripten::function("api_C1_05625_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT3_STR>::get);
    emscripten::function("api_C1_05626_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT4_STR>::get);
    emscripten::function("api_C1_05627_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT5_STR>::get);
    emscripten::function("api_C1_05628_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT6_STR>::get);
    emscripten::function("api_C1_05629_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT7_STR>::get);
    emscripten::function("api_C1_05630_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT8_STR>::get);
    emscripten::function("api_C1_05631_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT9_STR>::get);
    emscripten::function("api_C1_05632_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_STR>::get);
    emscripten::function("api_C1_05633_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_1_STR>::get);
    emscripten::function("api_C1_05634_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_2_STR>::get);
    emscripten::function("api_C1_05635_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_3_STR>::get);
    emscripten::function("api_C1_05636_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_4_STR>::get);
    emscripten::function("api_C1_05637_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_5_STR>::get);
    emscripten::function("api_C1_05638_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_6_STR>::get);
    emscripten::function("api_C1_05639_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_7_STR>::get);
    emscripten::function("api_C1_05640_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_8_STR>::get);
    emscripten::function("api_C1_05641_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_9_STR>::get);
    emscripten::function("api_C1_05642_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_STR>::get);
    emscripten::function("api_C1_05643_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_1_STR>::get);
    emscripten::function("api_C1_05644_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_2_STR>::get);
    emscripten::function("api_C1_05645_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_3_STR>::get);
    emscripten::function("api_C1_05646_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_4_STR>::get);
    emscripten::function("api_C1_05647_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_5_STR>::get);
    emscripten::function("api_C1_05648_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_6_STR>::get);
    emscripten::function("api_C1_05649_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_7_STR>::get);
    emscripten::function("api_C1_05650_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_8_STR>::get);
    emscripten::function("api_C1_05651_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_9_STR>::get);
    emscripten::function("api_C1_05652_get", &StaticFieldAccess<&parsertokens::RandomVariable::NOR_STR>::get);
    emscripten::function("api_C1_05653_get", &StaticFieldAccess<&parsertokens::RandomVariable::UNIFORM_SYN>::get);
    emscripten::function("api_C1_05654_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT_SYN>::get);
    emscripten::function("api_C1_05655_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT1_SYN>::get);
    emscripten::function("api_C1_05656_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT2_SYN>::get);
    emscripten::function("api_C1_05657_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT3_SYN>::get);
    emscripten::function("api_C1_05658_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT4_SYN>::get);
    emscripten::function("api_C1_05659_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT5_SYN>::get);
    emscripten::function("api_C1_05660_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT6_SYN>::get);
    emscripten::function("api_C1_05661_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT7_SYN>::get);
    emscripten::function("api_C1_05662_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT8_SYN>::get);
    emscripten::function("api_C1_05663_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT9_SYN>::get);
    emscripten::function("api_C1_05664_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_SYN>::get);
    emscripten::function("api_C1_05665_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_1_SYN>::get);
    emscripten::function("api_C1_05666_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_2_SYN>::get);
    emscripten::function("api_C1_05667_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_3_SYN>::get);
    emscripten::function("api_C1_05668_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_4_SYN>::get);
    emscripten::function("api_C1_05669_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_5_SYN>::get);
    emscripten::function("api_C1_05670_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_6_SYN>::get);
    emscripten::function("api_C1_05671_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_7_SYN>::get);
    emscripten::function("api_C1_05672_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_8_SYN>::get);
    emscripten::function("api_C1_05673_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_9_SYN>::get);
    emscripten::function("api_C1_05674_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_SYN>::get);
    emscripten::function("api_C1_05675_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_1_SYN>::get);
    emscripten::function("api_C1_05676_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_2_SYN>::get);
    emscripten::function("api_C1_05677_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_3_SYN>::get);
    emscripten::function("api_C1_05678_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_4_SYN>::get);
    emscripten::function("api_C1_05679_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_5_SYN>::get);
    emscripten::function("api_C1_05680_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_6_SYN>::get);
    emscripten::function("api_C1_05681_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_7_SYN>::get);
    emscripten::function("api_C1_05682_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_8_SYN>::get);
    emscripten::function("api_C1_05683_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_9_SYN>::get);
    emscripten::function("api_C1_05684_get", &StaticFieldAccess<&parsertokens::RandomVariable::NOR_SYN>::get);
    emscripten::function("api_C1_05685_get", &StaticFieldAccess<&parsertokens::RandomVariable::UNIFORM_DESC>::get);
    emscripten::function("api_C1_05685_set", &StaticFieldAccess<&parsertokens::RandomVariable::UNIFORM_DESC>::set);
    emscripten::function("api_C1_05686_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT_DESC>::get);
    emscripten::function("api_C1_05686_set", &StaticFieldAccess<&parsertokens::RandomVariable::INT_DESC>::set);
    emscripten::function("api_C1_05687_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT1_DESC>::get);
    emscripten::function("api_C1_05687_set", &StaticFieldAccess<&parsertokens::RandomVariable::INT1_DESC>::set);
    emscripten::function("api_C1_05688_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT2_DESC>::get);
    emscripten::function("api_C1_05688_set", &StaticFieldAccess<&parsertokens::RandomVariable::INT2_DESC>::set);
    emscripten::function("api_C1_05689_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT3_DESC>::get);
    emscripten::function("api_C1_05689_set", &StaticFieldAccess<&parsertokens::RandomVariable::INT3_DESC>::set);
    emscripten::function("api_C1_05690_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT4_DESC>::get);
    emscripten::function("api_C1_05690_set", &StaticFieldAccess<&parsertokens::RandomVariable::INT4_DESC>::set);
    emscripten::function("api_C1_05691_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT5_DESC>::get);
    emscripten::function("api_C1_05691_set", &StaticFieldAccess<&parsertokens::RandomVariable::INT5_DESC>::set);
    emscripten::function("api_C1_05692_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT6_DESC>::get);
    emscripten::function("api_C1_05692_set", &StaticFieldAccess<&parsertokens::RandomVariable::INT6_DESC>::set);
    emscripten::function("api_C1_05693_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT7_DESC>::get);
    emscripten::function("api_C1_05693_set", &StaticFieldAccess<&parsertokens::RandomVariable::INT7_DESC>::set);
    emscripten::function("api_C1_05694_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT8_DESC>::get);
    emscripten::function("api_C1_05694_set", &StaticFieldAccess<&parsertokens::RandomVariable::INT8_DESC>::set);
    emscripten::function("api_C1_05695_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT9_DESC>::get);
    emscripten::function("api_C1_05695_set", &StaticFieldAccess<&parsertokens::RandomVariable::INT9_DESC>::set);
    emscripten::function("api_C1_05696_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_DESC>::get);
    emscripten::function("api_C1_05696_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_DESC>::set);
    emscripten::function("api_C1_05697_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_1_DESC>::get);
    emscripten::function("api_C1_05697_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_1_DESC>::set);
    emscripten::function("api_C1_05698_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_2_DESC>::get);
    emscripten::function("api_C1_05698_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_2_DESC>::set);
    emscripten::function("api_C1_05699_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_3_DESC>::get);
    emscripten::function("api_C1_05699_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_3_DESC>::set);
    emscripten::function("api_C1_05700_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_4_DESC>::get);
    emscripten::function("api_C1_05700_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_4_DESC>::set);
    emscripten::function("api_C1_05701_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_5_DESC>::get);
    emscripten::function("api_C1_05701_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_5_DESC>::set);
    emscripten::function("api_C1_05702_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_6_DESC>::get);
    emscripten::function("api_C1_05702_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_6_DESC>::set);
    emscripten::function("api_C1_05703_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_7_DESC>::get);
    emscripten::function("api_C1_05703_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_7_DESC>::set);
    emscripten::function("api_C1_05704_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_8_DESC>::get);
    emscripten::function("api_C1_05704_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_8_DESC>::set);
    emscripten::function("api_C1_05705_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_9_DESC>::get);
    emscripten::function("api_C1_05705_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_9_DESC>::set);
    emscripten::function("api_C1_05706_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_DESC>::get);
    emscripten::function("api_C1_05706_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_DESC>::set);
    emscripten::function("api_C1_05707_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_1_DESC>::get);
    emscripten::function("api_C1_05707_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_1_DESC>::set);
    emscripten::function("api_C1_05708_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_2_DESC>::get);
    emscripten::function("api_C1_05708_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_2_DESC>::set);
    emscripten::function("api_C1_05709_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_3_DESC>::get);
    emscripten::function("api_C1_05709_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_3_DESC>::set);
    emscripten::function("api_C1_05710_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_4_DESC>::get);
    emscripten::function("api_C1_05710_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_4_DESC>::set);
    emscripten::function("api_C1_05711_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_5_DESC>::get);
    emscripten::function("api_C1_05711_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_5_DESC>::set);
    emscripten::function("api_C1_05712_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_6_DESC>::get);
    emscripten::function("api_C1_05712_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_6_DESC>::set);
    emscripten::function("api_C1_05713_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_7_DESC>::get);
    emscripten::function("api_C1_05713_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_7_DESC>::set);
    emscripten::function("api_C1_05714_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_8_DESC>::get);
    emscripten::function("api_C1_05714_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_8_DESC>::set);
    emscripten::function("api_C1_05715_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_9_DESC>::get);
    emscripten::function("api_C1_05715_set", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_9_DESC>::set);
    emscripten::function("api_C1_05716_get", &StaticFieldAccess<&parsertokens::RandomVariable::NOR_DESC>::get);
    emscripten::function("api_C1_05716_set", &StaticFieldAccess<&parsertokens::RandomVariable::NOR_DESC>::set);
    emscripten::function("api_C1_05717_get", &StaticFieldAccess<&parsertokens::RandomVariable::UNIFORM_SINCE>::get);
    emscripten::function("api_C1_05718_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT_SINCE>::get);
    emscripten::function("api_C1_05719_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT1_SINCE>::get);
    emscripten::function("api_C1_05720_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT2_SINCE>::get);
    emscripten::function("api_C1_05721_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT3_SINCE>::get);
    emscripten::function("api_C1_05722_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT4_SINCE>::get);
    emscripten::function("api_C1_05723_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT5_SINCE>::get);
    emscripten::function("api_C1_05724_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT6_SINCE>::get);
    emscripten::function("api_C1_05725_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT7_SINCE>::get);
    emscripten::function("api_C1_05726_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT8_SINCE>::get);
    emscripten::function("api_C1_05727_get", &StaticFieldAccess<&parsertokens::RandomVariable::INT9_SINCE>::get);
    emscripten::function("api_C1_05728_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_SINCE>::get);
    emscripten::function("api_C1_05729_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_1_SINCE>::get);
    emscripten::function("api_C1_05730_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_2_SINCE>::get);
    emscripten::function("api_C1_05731_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_3_SINCE>::get);
    emscripten::function("api_C1_05732_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_4_SINCE>::get);
    emscripten::function("api_C1_05733_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_5_SINCE>::get);
    emscripten::function("api_C1_05734_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_6_SINCE>::get);
    emscripten::function("api_C1_05735_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_7_SINCE>::get);
    emscripten::function("api_C1_05736_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_8_SINCE>::get);
    emscripten::function("api_C1_05737_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT0_9_SINCE>::get);
    emscripten::function("api_C1_05738_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_SINCE>::get);
    emscripten::function("api_C1_05739_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_1_SINCE>::get);
    emscripten::function("api_C1_05740_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_2_SINCE>::get);
    emscripten::function("api_C1_05741_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_3_SINCE>::get);
    emscripten::function("api_C1_05742_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_4_SINCE>::get);
    emscripten::function("api_C1_05743_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_5_SINCE>::get);
    emscripten::function("api_C1_05744_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_6_SINCE>::get);
    emscripten::function("api_C1_05745_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_7_SINCE>::get);
    emscripten::function("api_C1_05746_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_8_SINCE>::get);
    emscripten::function("api_C1_05747_get", &StaticFieldAccess<&parsertokens::RandomVariable::NAT1_9_SINCE>::get);
    emscripten::function("api_C1_05748_get", &StaticFieldAccess<&parsertokens::RandomVariable::NOR_SINCE>::get);
    emscripten::function("api_C1_05850_get", &StaticFieldAccess<&parsertokens::Token::NOT_MATCHED>::get);
    emscripten::function("api_C1_05851_get", &FieldAccess<&parsertokens::Token::tokenStr>::get);
    emscripten::function("api_C1_05851_set", &FieldAccess<&parsertokens::Token::tokenStr>::set);
    emscripten::function("api_C1_05852_get", &FieldAccess<&parsertokens::Token::keyWord>::get);
    emscripten::function("api_C1_05852_set", &FieldAccess<&parsertokens::Token::keyWord>::set);
    emscripten::function("api_C1_05853_get", &FieldAccess<&parsertokens::Token::tokenId>::get);
    emscripten::function("api_C1_05853_set", &FieldAccess<&parsertokens::Token::tokenId>::set);
    emscripten::function("api_C1_05854_get", &FieldAccess<&parsertokens::Token::tokenTypeId>::get);
    emscripten::function("api_C1_05854_set", &FieldAccess<&parsertokens::Token::tokenTypeId>::set);
    emscripten::function("api_C1_05855_get", &FieldAccess<&parsertokens::Token::tokenLevel>::get);
    emscripten::function("api_C1_05855_set", &FieldAccess<&parsertokens::Token::tokenLevel>::set);
    emscripten::function("api_C1_05856_get", &FieldAccess<&parsertokens::Token::tokenValue>::get);
    emscripten::function("api_C1_05856_set", &FieldAccess<&parsertokens::Token::tokenValue>::set);
    emscripten::function("api_C1_05857_get", &FieldAccess<&parsertokens::Token::looksLike>::get);
    emscripten::function("api_C1_05857_set", &FieldAccess<&parsertokens::Token::looksLike>::set);
    emscripten::function("api_C1_05858",
                         &StaticCall<static_cast<bool (*)(const TokenPtr &)>(&
                             parsertokens::Token::isUnaryLeftOperator)>::call);
    emscripten::function("api_C1_05859",
                         &StaticCall<static_cast<bool (*)(const TokenPtr &)>(&
                             parsertokens::Token::isUnaryRightOperator)>::call);
    emscripten::function("api_C1_05860",
                         &StaticCall<static_cast<bool (*)(const TokenPtr &)>(&
                             parsertokens::Token::isLeftParenthesis)>::call);
    emscripten::function("api_C1_05861",
                         &StaticCall<static_cast<bool (*)(const TokenPtr &)>(&
                             parsertokens::Token::isRightParenthesis)>::call);
    emscripten::function("api_C1_05862",
                         &StaticCall<static_cast<bool (*)(const TokenPtr &)>(&
                             parsertokens::Token::isIdentifier)>::call);
    emscripten::function("api_C1_05863",
                         &StaticCall<static_cast<bool (*)(const TokenPtr &)>(&
                             parsertokens::Token::isBinaryOperator)>::call);
    emscripten::function("api_C1_05864",
                         &StaticCall<static_cast<bool (*)(const TokenPtr &)>(&
                             parsertokens::Token::isParameterSeparator)>::call);
    emscripten::function("api_C1_05865",
                         &StaticCall<static_cast<bool (*)(const TokenPtr &)>(&parsertokens::Token::isNumber)>::call);
    emscripten::function("api_C1_05866",
                         &StaticCall<static_cast<bool (*)(const TokenPtr &)>(&
                             parsertokens::Token::isSpecialTokenName)>::call);
    emscripten::function("api_C1_05867",
                         &StaticCall<static_cast<bool (*)(const TokenPtr &)>(&
                             parsertokens::Token::isUnicodeRootOperator)>::call);
    emscripten::function("api_C1_05868",
                         &StaticCall<static_cast<TokenPtr (*)(const TokenPtr &)>(&parsertokens::Token::clone)>::call);
    emscripten::function("api_C1_05870",
                         &StaticCall<static_cast<TokenPtr (*)()>(&parsertokens::Token::makeMultiplyToken)>::call);
    emscripten::function("api_C1_05871",
                         &StaticCall<static_cast<TokenPtr (*)()>(&parsertokens::Token::makeNumberToken)>::call);
    emscripten::function("api_C1_05872",
                         &StaticCall<static_cast<TokenPtr (*)(double, int)>(&
                             parsertokens::Token::makeNumberToken)>::call);
    emscripten::function("api_C1_05873",
                         &StaticCall<static_cast<TokenPtr (*)()>(&parsertokens::Token::makeCommaToken)>::call);
    emscripten::function("api_C1_05874",
                         &StaticCall<static_cast<TokenPtr (*)(int)>(&parsertokens::Token::makeCommaToken)>::call);
    emscripten::function("api_C1_05875",
                         &StaticCall<static_cast<TokenPtr (*)()>(&
                             parsertokens::Token::makeLeftParenthesisToken)>::call);
    emscripten::function("api_C1_05876",
                         &StaticCall<static_cast<TokenPtr (*)(int)>(&
                             parsertokens::Token::makeLeftParenthesisToken)>::call);
    emscripten::function("api_C1_05877",
                         &StaticCall<static_cast<TokenPtr (*)()>(&
                             parsertokens::Token::makeRightParenthesisToken)>::call);
    emscripten::function("api_C1_05878",
                         &StaticCall<static_cast<TokenPtr (*)(int)>(&
                             parsertokens::Token::makeRightParenthesisToken)>::call);
    emscripten::function("api_C1_05879",
                         &StaticCall<static_cast<TokenPtr (*)()>(&parsertokens::Token::makeDerToken)>::call);
    emscripten::function("api_C1_05880",
                         &StaticCall<static_cast<TokenPtr (*)(int)>(&parsertokens::Token::makeDerToken)>::call);
    emscripten::function("api_C1_05881",
                         &StaticCall<static_cast<TokenPtr (*)(const StringPtr &, int, int, double)>(&
                             parsertokens::Token::makeArgumentToken)>::call);
    emscripten::function("api_C1_05882",
                         &StaticCall<static_cast<StringPtr (*)(int)>(&
                             parsertokens::Token::getTokenTypeDescription)>::call);
    emscripten::function("api_C1_05886_get", &StaticFieldAccess<&parsertokens::Unit::TYPE_ID>::get);
    emscripten::function("api_C1_05887_get", &StaticFieldAccess<&parsertokens::Unit::TYPE_DESC>::get);
    emscripten::function("api_C1_05887_set", &StaticFieldAccess<&parsertokens::Unit::TYPE_DESC>::set);
    emscripten::function("api_C1_05888_get", &StaticFieldAccess<&parsertokens::Unit::PERC_ID>::get);
    emscripten::function("api_C1_05889_get", &StaticFieldAccess<&parsertokens::Unit::PERM_ID>::get);
    emscripten::function("api_C1_05890_get", &StaticFieldAccess<&parsertokens::Unit::YOTTA_ID>::get);
    emscripten::function("api_C1_05891_get", &StaticFieldAccess<&parsertokens::Unit::ZETTA_ID>::get);
    emscripten::function("api_C1_05892_get", &StaticFieldAccess<&parsertokens::Unit::EXA_ID>::get);
    emscripten::function("api_C1_05893_get", &StaticFieldAccess<&parsertokens::Unit::PETA_ID>::get);
    emscripten::function("api_C1_05894_get", &StaticFieldAccess<&parsertokens::Unit::TERA_ID>::get);
    emscripten::function("api_C1_05895_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_ID>::get);
    emscripten::function("api_C1_05896_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_ID>::get);
    emscripten::function("api_C1_05897_get", &StaticFieldAccess<&parsertokens::Unit::KILO_ID>::get);
    emscripten::function("api_C1_05898_get", &StaticFieldAccess<&parsertokens::Unit::HECTO_ID>::get);
    emscripten::function("api_C1_05899_get", &StaticFieldAccess<&parsertokens::Unit::DECA_ID>::get);
    emscripten::function("api_C1_05900_get", &StaticFieldAccess<&parsertokens::Unit::DECI_ID>::get);
    emscripten::function("api_C1_05901_get", &StaticFieldAccess<&parsertokens::Unit::CENTI_ID>::get);
    emscripten::function("api_C1_05902_get", &StaticFieldAccess<&parsertokens::Unit::MILLI_ID>::get);
    emscripten::function("api_C1_05903_get", &StaticFieldAccess<&parsertokens::Unit::MICRO_ID>::get);
    emscripten::function("api_C1_05904_get", &StaticFieldAccess<&parsertokens::Unit::NANO_ID>::get);
    emscripten::function("api_C1_05905_get", &StaticFieldAccess<&parsertokens::Unit::PICO_ID>::get);
    emscripten::function("api_C1_05906_get", &StaticFieldAccess<&parsertokens::Unit::FEMTO_ID>::get);
    emscripten::function("api_C1_05907_get", &StaticFieldAccess<&parsertokens::Unit::ATTO_ID>::get);
    emscripten::function("api_C1_05908_get", &StaticFieldAccess<&parsertokens::Unit::ZEPTO_ID>::get);
    emscripten::function("api_C1_05909_get", &StaticFieldAccess<&parsertokens::Unit::YOCTO_ID>::get);
    emscripten::function("api_C1_05910_get", &StaticFieldAccess<&parsertokens::Unit::METRE_ID>::get);
    emscripten::function("api_C1_05911_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_ID>::get);
    emscripten::function("api_C1_05912_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE_ID>::get);
    emscripten::function("api_C1_05913_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE_ID>::get);
    emscripten::function("api_C1_05914_get", &StaticFieldAccess<&parsertokens::Unit::INCH_ID>::get);
    emscripten::function("api_C1_05915_get", &StaticFieldAccess<&parsertokens::Unit::YARD_ID>::get);
    emscripten::function("api_C1_05916_get", &StaticFieldAccess<&parsertokens::Unit::FEET_ID>::get);
    emscripten::function("api_C1_05917_get", &StaticFieldAccess<&parsertokens::Unit::MILE_ID>::get);
    emscripten::function("api_C1_05918_get", &StaticFieldAccess<&parsertokens::Unit::NAUTICAL_MILE_ID>::get);
    emscripten::function("api_C1_05919_get", &StaticFieldAccess<&parsertokens::Unit::METRE2_ID>::get);
    emscripten::function("api_C1_05920_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE2_ID>::get);
    emscripten::function("api_C1_05921_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE2_ID>::get);
    emscripten::function("api_C1_05922_get", &StaticFieldAccess<&parsertokens::Unit::ARE_ID>::get);
    emscripten::function("api_C1_05923_get", &StaticFieldAccess<&parsertokens::Unit::HECTARE_ID>::get);
    emscripten::function("api_C1_05924_get", &StaticFieldAccess<&parsertokens::Unit::ACRE_ID>::get);
    emscripten::function("api_C1_05925_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE2_ID>::get);
    emscripten::function("api_C1_05926_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE3_ID>::get);
    emscripten::function("api_C1_05927_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE3_ID>::get);
    emscripten::function("api_C1_05928_get", &StaticFieldAccess<&parsertokens::Unit::METRE3_ID>::get);
    emscripten::function("api_C1_05929_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE3_ID>::get);
    emscripten::function("api_C1_05930_get", &StaticFieldAccess<&parsertokens::Unit::MILLILITRE_ID>::get);
    emscripten::function("api_C1_05931_get", &StaticFieldAccess<&parsertokens::Unit::LITRE_ID>::get);
    emscripten::function("api_C1_05932_get", &StaticFieldAccess<&parsertokens::Unit::GALLON_ID>::get);
    emscripten::function("api_C1_05933_get", &StaticFieldAccess<&parsertokens::Unit::PINT_ID>::get);
    emscripten::function("api_C1_05934_get", &StaticFieldAccess<&parsertokens::Unit::SECOND_ID>::get);
    emscripten::function("api_C1_05935_get", &StaticFieldAccess<&parsertokens::Unit::MILLISECOND_ID>::get);
    emscripten::function("api_C1_05936_get", &StaticFieldAccess<&parsertokens::Unit::MINUTE_ID>::get);
    emscripten::function("api_C1_05937_get", &StaticFieldAccess<&parsertokens::Unit::HOUR_ID>::get);
    emscripten::function("api_C1_05938_get", &StaticFieldAccess<&parsertokens::Unit::DAY_ID>::get);
    emscripten::function("api_C1_05939_get", &StaticFieldAccess<&parsertokens::Unit::WEEK_ID>::get);
    emscripten::function("api_C1_05940_get", &StaticFieldAccess<&parsertokens::Unit::JULIAN_YEAR_ID>::get);
    emscripten::function("api_C1_05941_get", &StaticFieldAccess<&parsertokens::Unit::KILOGRAM_ID>::get);
    emscripten::function("api_C1_05942_get", &StaticFieldAccess<&parsertokens::Unit::GRAM_ID>::get);
    emscripten::function("api_C1_05943_get", &StaticFieldAccess<&parsertokens::Unit::MILLIGRAM_ID>::get);
    emscripten::function("api_C1_05944_get", &StaticFieldAccess<&parsertokens::Unit::DECAGRAM_ID>::get);
    emscripten::function("api_C1_05945_get", &StaticFieldAccess<&parsertokens::Unit::TONNE_ID>::get);
    emscripten::function("api_C1_05946_get", &StaticFieldAccess<&parsertokens::Unit::OUNCE_ID>::get);
    emscripten::function("api_C1_05947_get", &StaticFieldAccess<&parsertokens::Unit::POUND_ID>::get);
    emscripten::function("api_C1_05948_get", &StaticFieldAccess<&parsertokens::Unit::BIT_ID>::get);
    emscripten::function("api_C1_05949_get", &StaticFieldAccess<&parsertokens::Unit::KILOBIT_ID>::get);
    emscripten::function("api_C1_05950_get", &StaticFieldAccess<&parsertokens::Unit::MEGABIT_ID>::get);
    emscripten::function("api_C1_05951_get", &StaticFieldAccess<&parsertokens::Unit::GIGABIT_ID>::get);
    emscripten::function("api_C1_05952_get", &StaticFieldAccess<&parsertokens::Unit::TERABIT_ID>::get);
    emscripten::function("api_C1_05953_get", &StaticFieldAccess<&parsertokens::Unit::PETABIT_ID>::get);
    emscripten::function("api_C1_05954_get", &StaticFieldAccess<&parsertokens::Unit::EXABIT_ID>::get);
    emscripten::function("api_C1_05955_get", &StaticFieldAccess<&parsertokens::Unit::ZETTABIT_ID>::get);
    emscripten::function("api_C1_05956_get", &StaticFieldAccess<&parsertokens::Unit::YOTTABIT_ID>::get);
    emscripten::function("api_C1_05957_get", &StaticFieldAccess<&parsertokens::Unit::BYTE_ID>::get);
    emscripten::function("api_C1_05958_get", &StaticFieldAccess<&parsertokens::Unit::KILOBYTE_ID>::get);
    emscripten::function("api_C1_05959_get", &StaticFieldAccess<&parsertokens::Unit::MEGABYTE_ID>::get);
    emscripten::function("api_C1_05960_get", &StaticFieldAccess<&parsertokens::Unit::GIGABYTE_ID>::get);
    emscripten::function("api_C1_05961_get", &StaticFieldAccess<&parsertokens::Unit::TERABYTE_ID>::get);
    emscripten::function("api_C1_05962_get", &StaticFieldAccess<&parsertokens::Unit::PETABYTE_ID>::get);
    emscripten::function("api_C1_05963_get", &StaticFieldAccess<&parsertokens::Unit::EXABYTE_ID>::get);
    emscripten::function("api_C1_05964_get", &StaticFieldAccess<&parsertokens::Unit::ZETTABYTE_ID>::get);
    emscripten::function("api_C1_05965_get", &StaticFieldAccess<&parsertokens::Unit::YOTTABYTE_ID>::get);
    emscripten::function("api_C1_05966_get", &StaticFieldAccess<&parsertokens::Unit::JOULE_ID>::get);
    emscripten::function("api_C1_05967_get", &StaticFieldAccess<&parsertokens::Unit::ELECTRONO_VOLT_ID>::get);
    emscripten::function("api_C1_05968_get", &StaticFieldAccess<&parsertokens::Unit::KILO_ELECTRONO_VOLT_ID>::get);
    emscripten::function("api_C1_05969_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_ELECTRONO_VOLT_ID>::get);
    emscripten::function("api_C1_05970_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_ELECTRONO_VOLT_ID>::get);
    emscripten::function("api_C1_05971_get", &StaticFieldAccess<&parsertokens::Unit::TERA_ELECTRONO_VOLT_ID>::get);
    emscripten::function("api_C1_05972_get", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND_ID>::get);
    emscripten::function("api_C1_05973_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR_ID>::get);
    emscripten::function("api_C1_05974_get", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR_ID>::get);
    emscripten::function("api_C1_05975_get", &StaticFieldAccess<&parsertokens::Unit::KNOT_ID>::get);
    emscripten::function("api_C1_05976_get", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND2_ID>::get);
    emscripten::function("api_C1_05977_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR2_ID>::get);
    emscripten::function("api_C1_05978_get", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR2_ID>::get);
    emscripten::function("api_C1_05979_get", &StaticFieldAccess<&parsertokens::Unit::RADIAN_ARC_ID>::get);
    emscripten::function("api_C1_05980_get", &StaticFieldAccess<&parsertokens::Unit::DEGREE_ARC_ID>::get);
    emscripten::function("api_C1_05981_get", &StaticFieldAccess<&parsertokens::Unit::MINUTE_ARC_ID>::get);
    emscripten::function("api_C1_05982_get", &StaticFieldAccess<&parsertokens::Unit::SECOND_ARC_ID>::get);
    emscripten::function("api_C1_05983_get", &StaticFieldAccess<&parsertokens::Unit::PERC_STR>::get);
    emscripten::function("api_C1_05984_get", &StaticFieldAccess<&parsertokens::Unit::PERM_STR>::get);
    emscripten::function("api_C1_05985_get", &StaticFieldAccess<&parsertokens::Unit::YOTTA_STR>::get);
    emscripten::function("api_C1_05986_get", &StaticFieldAccess<&parsertokens::Unit::YOTTA_SEPT_STR>::get);
    emscripten::function("api_C1_05987_get", &StaticFieldAccess<&parsertokens::Unit::ZETTA_STR>::get);
    emscripten::function("api_C1_05988_get", &StaticFieldAccess<&parsertokens::Unit::ZETTA_SEXT_STR>::get);
    emscripten::function("api_C1_05989_get", &StaticFieldAccess<&parsertokens::Unit::EXA_STR>::get);
    emscripten::function("api_C1_05990_get", &StaticFieldAccess<&parsertokens::Unit::EXA_QUINT_STR>::get);
    emscripten::function("api_C1_05991_get", &StaticFieldAccess<&parsertokens::Unit::PETA_STR>::get);
    emscripten::function("api_C1_05992_get", &StaticFieldAccess<&parsertokens::Unit::PETA_QUAD_STR>::get);
    emscripten::function("api_C1_05993_get", &StaticFieldAccess<&parsertokens::Unit::TERA_STR>::get);
    emscripten::function("api_C1_05994_get", &StaticFieldAccess<&parsertokens::Unit::TERA_TRIL_STR>::get);
    emscripten::function("api_C1_05995_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_STR>::get);
    emscripten::function("api_C1_05996_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_BIL_STR>::get);
    emscripten::function("api_C1_05997_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_STR>::get);
    emscripten::function("api_C1_05998_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_MIL_STR>::get);
    emscripten::function("api_C1_05999_get", &StaticFieldAccess<&parsertokens::Unit::KILO_STR>::get);
    emscripten::function("api_C1_06000_get", &StaticFieldAccess<&parsertokens::Unit::KILO_TH_STR>::get);
    emscripten::function("api_C1_06001_get", &StaticFieldAccess<&parsertokens::Unit::HECTO_STR>::get);
    emscripten::function("api_C1_06002_get", &StaticFieldAccess<&parsertokens::Unit::HECTO_HUND_STR>::get);
    emscripten::function("api_C1_06003_get", &StaticFieldAccess<&parsertokens::Unit::DECA_STR>::get);
    emscripten::function("api_C1_06004_get", &StaticFieldAccess<&parsertokens::Unit::DECA_TEN_STR>::get);
    emscripten::function("api_C1_06005_get", &StaticFieldAccess<&parsertokens::Unit::DECI_STR>::get);
    emscripten::function("api_C1_06006_get", &StaticFieldAccess<&parsertokens::Unit::CENTI_STR>::get);
    emscripten::function("api_C1_06007_get", &StaticFieldAccess<&parsertokens::Unit::MILLI_STR>::get);
    emscripten::function("api_C1_06008_get", &StaticFieldAccess<&parsertokens::Unit::MICRO_STR>::get);
    emscripten::function("api_C1_06009_get", &StaticFieldAccess<&parsertokens::Unit::NANO_STR>::get);
    emscripten::function("api_C1_06010_get", &StaticFieldAccess<&parsertokens::Unit::PICO_STR>::get);
    emscripten::function("api_C1_06011_get", &StaticFieldAccess<&parsertokens::Unit::FEMTO_STR>::get);
    emscripten::function("api_C1_06012_get", &StaticFieldAccess<&parsertokens::Unit::ATTO_STR>::get);
    emscripten::function("api_C1_06013_get", &StaticFieldAccess<&parsertokens::Unit::ZEPTO_STR>::get);
    emscripten::function("api_C1_06014_get", &StaticFieldAccess<&parsertokens::Unit::YOCTO_STR>::get);
    emscripten::function("api_C1_06015_get", &StaticFieldAccess<&parsertokens::Unit::METRE_STR>::get);
    emscripten::function("api_C1_06016_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_STR>::get);
    emscripten::function("api_C1_06017_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE_STR>::get);
    emscripten::function("api_C1_06018_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE_STR>::get);
    emscripten::function("api_C1_06019_get", &StaticFieldAccess<&parsertokens::Unit::INCH_STR>::get);
    emscripten::function("api_C1_06020_get", &StaticFieldAccess<&parsertokens::Unit::YARD_STR>::get);
    emscripten::function("api_C1_06021_get", &StaticFieldAccess<&parsertokens::Unit::FEET_STR>::get);
    emscripten::function("api_C1_06022_get", &StaticFieldAccess<&parsertokens::Unit::MILE_STR>::get);
    emscripten::function("api_C1_06023_get", &StaticFieldAccess<&parsertokens::Unit::NAUTICAL_MILE_STR>::get);
    emscripten::function("api_C1_06024_get", &StaticFieldAccess<&parsertokens::Unit::METRE2_STR>::get);
    emscripten::function("api_C1_06025_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE2_STR>::get);
    emscripten::function("api_C1_06026_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE2_STR>::get);
    emscripten::function("api_C1_06027_get", &StaticFieldAccess<&parsertokens::Unit::ARE_STR>::get);
    emscripten::function("api_C1_06028_get", &StaticFieldAccess<&parsertokens::Unit::HECTARE_STR>::get);
    emscripten::function("api_C1_06029_get", &StaticFieldAccess<&parsertokens::Unit::ACRE_STR>::get);
    emscripten::function("api_C1_06030_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE2_STR>::get);
    emscripten::function("api_C1_06031_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE3_STR>::get);
    emscripten::function("api_C1_06032_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE3_STR>::get);
    emscripten::function("api_C1_06033_get", &StaticFieldAccess<&parsertokens::Unit::METRE3_STR>::get);
    emscripten::function("api_C1_06034_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE3_STR>::get);
    emscripten::function("api_C1_06035_get", &StaticFieldAccess<&parsertokens::Unit::MILLILITRE_STR>::get);
    emscripten::function("api_C1_06036_get", &StaticFieldAccess<&parsertokens::Unit::LITRE_STR>::get);
    emscripten::function("api_C1_06037_get", &StaticFieldAccess<&parsertokens::Unit::GALLON_STR>::get);
    emscripten::function("api_C1_06038_get", &StaticFieldAccess<&parsertokens::Unit::PINT_STR>::get);
    emscripten::function("api_C1_06039_get", &StaticFieldAccess<&parsertokens::Unit::SECOND_STR>::get);
    emscripten::function("api_C1_06040_get", &StaticFieldAccess<&parsertokens::Unit::MILLISECOND_STR>::get);
    emscripten::function("api_C1_06041_get", &StaticFieldAccess<&parsertokens::Unit::MINUTE_STR>::get);
    emscripten::function("api_C1_06042_get", &StaticFieldAccess<&parsertokens::Unit::HOUR_STR>::get);
    emscripten::function("api_C1_06043_get", &StaticFieldAccess<&parsertokens::Unit::DAY_STR>::get);
    emscripten::function("api_C1_06044_get", &StaticFieldAccess<&parsertokens::Unit::WEEK_STR>::get);
    emscripten::function("api_C1_06045_get", &StaticFieldAccess<&parsertokens::Unit::JULIAN_YEAR_STR>::get);
    emscripten::function("api_C1_06046_get", &StaticFieldAccess<&parsertokens::Unit::KILOGRAM_STR>::get);
    emscripten::function("api_C1_06047_get", &StaticFieldAccess<&parsertokens::Unit::GRAM_STR>::get);
    emscripten::function("api_C1_06048_get", &StaticFieldAccess<&parsertokens::Unit::MILLIGRAM_STR>::get);
    emscripten::function("api_C1_06049_get", &StaticFieldAccess<&parsertokens::Unit::DECAGRAM_STR>::get);
    emscripten::function("api_C1_06050_get", &StaticFieldAccess<&parsertokens::Unit::TONNE_STR>::get);
    emscripten::function("api_C1_06051_get", &StaticFieldAccess<&parsertokens::Unit::OUNCE_STR>::get);
    emscripten::function("api_C1_06052_get", &StaticFieldAccess<&parsertokens::Unit::POUND_STR>::get);
    emscripten::function("api_C1_06053_get", &StaticFieldAccess<&parsertokens::Unit::BIT_STR>::get);
    emscripten::function("api_C1_06054_get", &StaticFieldAccess<&parsertokens::Unit::KILOBIT_STR>::get);
    emscripten::function("api_C1_06055_get", &StaticFieldAccess<&parsertokens::Unit::MEGABIT_STR>::get);
    emscripten::function("api_C1_06056_get", &StaticFieldAccess<&parsertokens::Unit::GIGABIT_STR>::get);
    emscripten::function("api_C1_06057_get", &StaticFieldAccess<&parsertokens::Unit::TERABIT_STR>::get);
    emscripten::function("api_C1_06058_get", &StaticFieldAccess<&parsertokens::Unit::PETABIT_STR>::get);
    emscripten::function("api_C1_06059_get", &StaticFieldAccess<&parsertokens::Unit::EXABIT_STR>::get);
    emscripten::function("api_C1_06060_get", &StaticFieldAccess<&parsertokens::Unit::ZETTABIT_STR>::get);
    emscripten::function("api_C1_06061_get", &StaticFieldAccess<&parsertokens::Unit::YOTTABIT_STR>::get);
    emscripten::function("api_C1_06062_get", &StaticFieldAccess<&parsertokens::Unit::BYTE_STR>::get);
    emscripten::function("api_C1_06063_get", &StaticFieldAccess<&parsertokens::Unit::KILOBYTE_STR>::get);
    emscripten::function("api_C1_06064_get", &StaticFieldAccess<&parsertokens::Unit::MEGABYTE_STR>::get);
    emscripten::function("api_C1_06065_get", &StaticFieldAccess<&parsertokens::Unit::GIGABYTE_STR>::get);
    emscripten::function("api_C1_06066_get", &StaticFieldAccess<&parsertokens::Unit::TERABYTE_STR>::get);
    emscripten::function("api_C1_06067_get", &StaticFieldAccess<&parsertokens::Unit::PETABYTE_STR>::get);
    emscripten::function("api_C1_06068_get", &StaticFieldAccess<&parsertokens::Unit::EXABYTE_STR>::get);
    emscripten::function("api_C1_06069_get", &StaticFieldAccess<&parsertokens::Unit::ZETTABYTE_STR>::get);
    emscripten::function("api_C1_06070_get", &StaticFieldAccess<&parsertokens::Unit::YOTTABYTE_STR>::get);
    emscripten::function("api_C1_06071_get", &StaticFieldAccess<&parsertokens::Unit::JOULE_STR>::get);
    emscripten::function("api_C1_06072_get", &StaticFieldAccess<&parsertokens::Unit::ELECTRONO_VOLT_STR>::get);
    emscripten::function("api_C1_06073_get", &StaticFieldAccess<&parsertokens::Unit::KILO_ELECTRONO_VOLT_STR>::get);
    emscripten::function("api_C1_06074_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_ELECTRONO_VOLT_STR>::get);
    emscripten::function("api_C1_06075_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_ELECTRONO_VOLT_STR>::get);
    emscripten::function("api_C1_06076_get", &StaticFieldAccess<&parsertokens::Unit::TERA_ELECTRONO_VOLT_STR>::get);
    emscripten::function("api_C1_06077_get", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND_STR>::get);
    emscripten::function("api_C1_06078_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR_STR>::get);
    emscripten::function("api_C1_06079_get", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR_STR>::get);
    emscripten::function("api_C1_06080_get", &StaticFieldAccess<&parsertokens::Unit::KNOT_STR>::get);
    emscripten::function("api_C1_06081_get", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND2_STR>::get);
    emscripten::function("api_C1_06082_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR2_STR>::get);
    emscripten::function("api_C1_06083_get", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR2_STR>::get);
    emscripten::function("api_C1_06084_get", &StaticFieldAccess<&parsertokens::Unit::RADIAN_ARC_STR>::get);
    emscripten::function("api_C1_06085_get", &StaticFieldAccess<&parsertokens::Unit::DEGREE_ARC_STR>::get);
    emscripten::function("api_C1_06086_get", &StaticFieldAccess<&parsertokens::Unit::MINUTE_ARC_STR>::get);
    emscripten::function("api_C1_06087_get", &StaticFieldAccess<&parsertokens::Unit::SECOND_ARC_STR>::get);
    emscripten::function("api_C1_06088_get", &StaticFieldAccess<&parsertokens::Unit::PERC_SYN>::get);
    emscripten::function("api_C1_06089_get", &StaticFieldAccess<&parsertokens::Unit::PERM_SYN>::get);
    emscripten::function("api_C1_06090_get", &StaticFieldAccess<&parsertokens::Unit::YOTTA_SYN>::get);
    emscripten::function("api_C1_06091_get", &StaticFieldAccess<&parsertokens::Unit::YOTTA_SEPT_SYN>::get);
    emscripten::function("api_C1_06092_get", &StaticFieldAccess<&parsertokens::Unit::ZETTA_SYN>::get);
    emscripten::function("api_C1_06093_get", &StaticFieldAccess<&parsertokens::Unit::ZETTA_SEXT_SYN>::get);
    emscripten::function("api_C1_06094_get", &StaticFieldAccess<&parsertokens::Unit::EXA_SYN>::get);
    emscripten::function("api_C1_06095_get", &StaticFieldAccess<&parsertokens::Unit::EXA_QUINT_SYN>::get);
    emscripten::function("api_C1_06096_get", &StaticFieldAccess<&parsertokens::Unit::PETA_SYN>::get);
    emscripten::function("api_C1_06097_get", &StaticFieldAccess<&parsertokens::Unit::PETA_QUAD_SYN>::get);
    emscripten::function("api_C1_06098_get", &StaticFieldAccess<&parsertokens::Unit::TERA_SYN>::get);
    emscripten::function("api_C1_06099_get", &StaticFieldAccess<&parsertokens::Unit::TERA_TRIL_SYN>::get);
    emscripten::function("api_C1_06100_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_SYN>::get);
    emscripten::function("api_C1_06101_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_BIL_SYN>::get);
    emscripten::function("api_C1_06102_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_SYN>::get);
    emscripten::function("api_C1_06103_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_MIL_SYN>::get);
    emscripten::function("api_C1_06104_get", &StaticFieldAccess<&parsertokens::Unit::KILO_SYN>::get);
    emscripten::function("api_C1_06105_get", &StaticFieldAccess<&parsertokens::Unit::KILO_TH_SYN>::get);
    emscripten::function("api_C1_06106_get", &StaticFieldAccess<&parsertokens::Unit::HECTO_SYN>::get);
    emscripten::function("api_C1_06107_get", &StaticFieldAccess<&parsertokens::Unit::HECTO_HUND_SYN>::get);
    emscripten::function("api_C1_06108_get", &StaticFieldAccess<&parsertokens::Unit::DECA_SYN>::get);
    emscripten::function("api_C1_06109_get", &StaticFieldAccess<&parsertokens::Unit::DECA_TEN_SYN>::get);
    emscripten::function("api_C1_06110_get", &StaticFieldAccess<&parsertokens::Unit::DECI_SYN>::get);
    emscripten::function("api_C1_06111_get", &StaticFieldAccess<&parsertokens::Unit::CENTI_SYN>::get);
    emscripten::function("api_C1_06112_get", &StaticFieldAccess<&parsertokens::Unit::MILLI_SYN>::get);
    emscripten::function("api_C1_06113_get", &StaticFieldAccess<&parsertokens::Unit::MICRO_SYN>::get);
    emscripten::function("api_C1_06114_get", &StaticFieldAccess<&parsertokens::Unit::NANO_SYN>::get);
    emscripten::function("api_C1_06115_get", &StaticFieldAccess<&parsertokens::Unit::PICO_SYN>::get);
    emscripten::function("api_C1_06116_get", &StaticFieldAccess<&parsertokens::Unit::FEMTO_SYN>::get);
    emscripten::function("api_C1_06117_get", &StaticFieldAccess<&parsertokens::Unit::ATTO_SYN>::get);
    emscripten::function("api_C1_06118_get", &StaticFieldAccess<&parsertokens::Unit::ZEPTO_SYN>::get);
    emscripten::function("api_C1_06119_get", &StaticFieldAccess<&parsertokens::Unit::YOCTO_SYN>::get);
    emscripten::function("api_C1_06120_get", &StaticFieldAccess<&parsertokens::Unit::METRE_SYN>::get);
    emscripten::function("api_C1_06121_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_SYN>::get);
    emscripten::function("api_C1_06122_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE_SYN>::get);
    emscripten::function("api_C1_06123_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE_SYN>::get);
    emscripten::function("api_C1_06124_get", &StaticFieldAccess<&parsertokens::Unit::INCH_SYN>::get);
    emscripten::function("api_C1_06125_get", &StaticFieldAccess<&parsertokens::Unit::YARD_SYN>::get);
    emscripten::function("api_C1_06126_get", &StaticFieldAccess<&parsertokens::Unit::FEET_SYN>::get);
    emscripten::function("api_C1_06127_get", &StaticFieldAccess<&parsertokens::Unit::MILE_SYN>::get);
    emscripten::function("api_C1_06128_get", &StaticFieldAccess<&parsertokens::Unit::NAUTICAL_MILE_SYN>::get);
    emscripten::function("api_C1_06129_get", &StaticFieldAccess<&parsertokens::Unit::METRE2_SYN>::get);
    emscripten::function("api_C1_06130_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE2_SYN>::get);
    emscripten::function("api_C1_06131_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE2_SYN>::get);
    emscripten::function("api_C1_06132_get", &StaticFieldAccess<&parsertokens::Unit::ARE_SYN>::get);
    emscripten::function("api_C1_06133_get", &StaticFieldAccess<&parsertokens::Unit::HECTARE_SYN>::get);
    emscripten::function("api_C1_06134_get", &StaticFieldAccess<&parsertokens::Unit::ACRE_SYN>::get);
    emscripten::function("api_C1_06135_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE2_SYN>::get);
    emscripten::function("api_C1_06136_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE3_SYN>::get);
    emscripten::function("api_C1_06137_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE3_SYN>::get);
    emscripten::function("api_C1_06138_get", &StaticFieldAccess<&parsertokens::Unit::METRE3_SYN>::get);
    emscripten::function("api_C1_06139_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE3_SYN>::get);
    emscripten::function("api_C1_06140_get", &StaticFieldAccess<&parsertokens::Unit::MILLILITRE_SYN>::get);
    emscripten::function("api_C1_06141_get", &StaticFieldAccess<&parsertokens::Unit::LITRE_SYN>::get);
    emscripten::function("api_C1_06142_get", &StaticFieldAccess<&parsertokens::Unit::GALLON_SYN>::get);
    emscripten::function("api_C1_06143_get", &StaticFieldAccess<&parsertokens::Unit::PINT_SYN>::get);
    emscripten::function("api_C1_06144_get", &StaticFieldAccess<&parsertokens::Unit::SECOND_SYN>::get);
    emscripten::function("api_C1_06145_get", &StaticFieldAccess<&parsertokens::Unit::MILLISECOND_SYN>::get);
    emscripten::function("api_C1_06146_get", &StaticFieldAccess<&parsertokens::Unit::MINUTE_SYN>::get);
    emscripten::function("api_C1_06147_get", &StaticFieldAccess<&parsertokens::Unit::HOUR_SYN>::get);
    emscripten::function("api_C1_06148_get", &StaticFieldAccess<&parsertokens::Unit::DAY_SYN>::get);
    emscripten::function("api_C1_06149_get", &StaticFieldAccess<&parsertokens::Unit::WEEK_SYN>::get);
    emscripten::function("api_C1_06150_get", &StaticFieldAccess<&parsertokens::Unit::JULIAN_YEAR_SYN>::get);
    emscripten::function("api_C1_06151_get", &StaticFieldAccess<&parsertokens::Unit::KILOGRAM_SYN>::get);
    emscripten::function("api_C1_06152_get", &StaticFieldAccess<&parsertokens::Unit::GRAM_SYN>::get);
    emscripten::function("api_C1_06153_get", &StaticFieldAccess<&parsertokens::Unit::MILLIGRAM_SYN>::get);
    emscripten::function("api_C1_06154_get", &StaticFieldAccess<&parsertokens::Unit::DECAGRAM_SYN>::get);
    emscripten::function("api_C1_06155_get", &StaticFieldAccess<&parsertokens::Unit::TONNE_SYN>::get);
    emscripten::function("api_C1_06156_get", &StaticFieldAccess<&parsertokens::Unit::OUNCE_SYN>::get);
    emscripten::function("api_C1_06157_get", &StaticFieldAccess<&parsertokens::Unit::POUND_SYN>::get);
    emscripten::function("api_C1_06158_get", &StaticFieldAccess<&parsertokens::Unit::BIT_SYN>::get);
    emscripten::function("api_C1_06159_get", &StaticFieldAccess<&parsertokens::Unit::KILOBIT_SYN>::get);
    emscripten::function("api_C1_06160_get", &StaticFieldAccess<&parsertokens::Unit::MEGABIT_SYN>::get);
    emscripten::function("api_C1_06161_get", &StaticFieldAccess<&parsertokens::Unit::GIGABIT_SYN>::get);
    emscripten::function("api_C1_06162_get", &StaticFieldAccess<&parsertokens::Unit::TERABIT_SYN>::get);
    emscripten::function("api_C1_06163_get", &StaticFieldAccess<&parsertokens::Unit::PETABIT_SYN>::get);
    emscripten::function("api_C1_06164_get", &StaticFieldAccess<&parsertokens::Unit::EXABIT_SYN>::get);
    emscripten::function("api_C1_06165_get", &StaticFieldAccess<&parsertokens::Unit::ZETTABIT_SYN>::get);
    emscripten::function("api_C1_06166_get", &StaticFieldAccess<&parsertokens::Unit::YOTTABIT_SYN>::get);
    emscripten::function("api_C1_06167_get", &StaticFieldAccess<&parsertokens::Unit::BYTE_SYN>::get);
    emscripten::function("api_C1_06168_get", &StaticFieldAccess<&parsertokens::Unit::KILOBYTE_SYN>::get);
    emscripten::function("api_C1_06169_get", &StaticFieldAccess<&parsertokens::Unit::MEGABYTE_SYN>::get);
    emscripten::function("api_C1_06170_get", &StaticFieldAccess<&parsertokens::Unit::GIGABYTE_SYN>::get);
    emscripten::function("api_C1_06171_get", &StaticFieldAccess<&parsertokens::Unit::TERABYTE_SYN>::get);
    emscripten::function("api_C1_06172_get", &StaticFieldAccess<&parsertokens::Unit::PETABYTE_SYN>::get);
    emscripten::function("api_C1_06173_get", &StaticFieldAccess<&parsertokens::Unit::EXABYTE_SYN>::get);
    emscripten::function("api_C1_06174_get", &StaticFieldAccess<&parsertokens::Unit::ZETTABYTE_SYN>::get);
    emscripten::function("api_C1_06175_get", &StaticFieldAccess<&parsertokens::Unit::YOTTABYTE_SYN>::get);
    emscripten::function("api_C1_06176_get", &StaticFieldAccess<&parsertokens::Unit::JOULE_SYN>::get);
    emscripten::function("api_C1_06177_get", &StaticFieldAccess<&parsertokens::Unit::ELECTRONO_VOLT_SYN>::get);
    emscripten::function("api_C1_06178_get", &StaticFieldAccess<&parsertokens::Unit::KILO_ELECTRONO_VOLT_SYN>::get);
    emscripten::function("api_C1_06179_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_ELECTRONO_VOLT_SYN>::get);
    emscripten::function("api_C1_06180_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_ELECTRONO_VOLT_SYN>::get);
    emscripten::function("api_C1_06181_get", &StaticFieldAccess<&parsertokens::Unit::TERA_ELECTRONO_VOLT_SYN>::get);
    emscripten::function("api_C1_06182_get", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND_SYN>::get);
    emscripten::function("api_C1_06183_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR_SYN>::get);
    emscripten::function("api_C1_06184_get", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR_SYN>::get);
    emscripten::function("api_C1_06185_get", &StaticFieldAccess<&parsertokens::Unit::KNOT_SYN>::get);
    emscripten::function("api_C1_06186_get", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND2_SYN>::get);
    emscripten::function("api_C1_06187_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR2_SYN>::get);
    emscripten::function("api_C1_06188_get", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR2_SYN>::get);
    emscripten::function("api_C1_06189_get", &StaticFieldAccess<&parsertokens::Unit::RADIAN_ARC_SYN>::get);
    emscripten::function("api_C1_06190_get", &StaticFieldAccess<&parsertokens::Unit::DEGREE_ARC_SYN>::get);
    emscripten::function("api_C1_06191_get", &StaticFieldAccess<&parsertokens::Unit::MINUTE_ARC_SYN>::get);
    emscripten::function("api_C1_06192_get", &StaticFieldAccess<&parsertokens::Unit::SECOND_ARC_SYN>::get);
    emscripten::function("api_C1_06193_get", &StaticFieldAccess<&parsertokens::Unit::PERC_DESC>::get);
    emscripten::function("api_C1_06193_set", &StaticFieldAccess<&parsertokens::Unit::PERC_DESC>::set);
    emscripten::function("api_C1_06194_get", &StaticFieldAccess<&parsertokens::Unit::PERM_DESC>::get);
    emscripten::function("api_C1_06194_set", &StaticFieldAccess<&parsertokens::Unit::PERM_DESC>::set);
    emscripten::function("api_C1_06195_get", &StaticFieldAccess<&parsertokens::Unit::YOTTA_DESC>::get);
    emscripten::function("api_C1_06195_set", &StaticFieldAccess<&parsertokens::Unit::YOTTA_DESC>::set);
    emscripten::function("api_C1_06196_get", &StaticFieldAccess<&parsertokens::Unit::ZETTA_DESC>::get);
    emscripten::function("api_C1_06196_set", &StaticFieldAccess<&parsertokens::Unit::ZETTA_DESC>::set);
    emscripten::function("api_C1_06197_get", &StaticFieldAccess<&parsertokens::Unit::EXA_DESC>::get);
    emscripten::function("api_C1_06197_set", &StaticFieldAccess<&parsertokens::Unit::EXA_DESC>::set);
    emscripten::function("api_C1_06198_get", &StaticFieldAccess<&parsertokens::Unit::PETA_DESC>::get);
    emscripten::function("api_C1_06198_set", &StaticFieldAccess<&parsertokens::Unit::PETA_DESC>::set);
    emscripten::function("api_C1_06199_get", &StaticFieldAccess<&parsertokens::Unit::TERA_DESC>::get);
    emscripten::function("api_C1_06199_set", &StaticFieldAccess<&parsertokens::Unit::TERA_DESC>::set);
    emscripten::function("api_C1_06200_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_DESC>::get);
    emscripten::function("api_C1_06200_set", &StaticFieldAccess<&parsertokens::Unit::GIGA_DESC>::set);
    emscripten::function("api_C1_06201_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_DESC>::get);
    emscripten::function("api_C1_06201_set", &StaticFieldAccess<&parsertokens::Unit::MEGA_DESC>::set);
    emscripten::function("api_C1_06202_get", &StaticFieldAccess<&parsertokens::Unit::KILO_DESC>::get);
    emscripten::function("api_C1_06202_set", &StaticFieldAccess<&parsertokens::Unit::KILO_DESC>::set);
    emscripten::function("api_C1_06203_get", &StaticFieldAccess<&parsertokens::Unit::HECTO_DESC>::get);
    emscripten::function("api_C1_06203_set", &StaticFieldAccess<&parsertokens::Unit::HECTO_DESC>::set);
    emscripten::function("api_C1_06204_get", &StaticFieldAccess<&parsertokens::Unit::DECA_DESC>::get);
    emscripten::function("api_C1_06204_set", &StaticFieldAccess<&parsertokens::Unit::DECA_DESC>::set);
    emscripten::function("api_C1_06205_get", &StaticFieldAccess<&parsertokens::Unit::DECI_DESC>::get);
    emscripten::function("api_C1_06205_set", &StaticFieldAccess<&parsertokens::Unit::DECI_DESC>::set);
    emscripten::function("api_C1_06206_get", &StaticFieldAccess<&parsertokens::Unit::CENTI_DESC>::get);
    emscripten::function("api_C1_06206_set", &StaticFieldAccess<&parsertokens::Unit::CENTI_DESC>::set);
    emscripten::function("api_C1_06207_get", &StaticFieldAccess<&parsertokens::Unit::MILLI_DESC>::get);
    emscripten::function("api_C1_06207_set", &StaticFieldAccess<&parsertokens::Unit::MILLI_DESC>::set);
    emscripten::function("api_C1_06208_get", &StaticFieldAccess<&parsertokens::Unit::MICRO_DESC>::get);
    emscripten::function("api_C1_06208_set", &StaticFieldAccess<&parsertokens::Unit::MICRO_DESC>::set);
    emscripten::function("api_C1_06209_get", &StaticFieldAccess<&parsertokens::Unit::NANO_DESC>::get);
    emscripten::function("api_C1_06209_set", &StaticFieldAccess<&parsertokens::Unit::NANO_DESC>::set);
    emscripten::function("api_C1_06210_get", &StaticFieldAccess<&parsertokens::Unit::PICO_DESC>::get);
    emscripten::function("api_C1_06210_set", &StaticFieldAccess<&parsertokens::Unit::PICO_DESC>::set);
    emscripten::function("api_C1_06211_get", &StaticFieldAccess<&parsertokens::Unit::FEMTO_DESC>::get);
    emscripten::function("api_C1_06211_set", &StaticFieldAccess<&parsertokens::Unit::FEMTO_DESC>::set);
    emscripten::function("api_C1_06212_get", &StaticFieldAccess<&parsertokens::Unit::ATTO_DESC>::get);
    emscripten::function("api_C1_06212_set", &StaticFieldAccess<&parsertokens::Unit::ATTO_DESC>::set);
    emscripten::function("api_C1_06213_get", &StaticFieldAccess<&parsertokens::Unit::ZEPTO_DESC>::get);
    emscripten::function("api_C1_06213_set", &StaticFieldAccess<&parsertokens::Unit::ZEPTO_DESC>::set);
    emscripten::function("api_C1_06214_get", &StaticFieldAccess<&parsertokens::Unit::YOCTO_DESC>::get);
    emscripten::function("api_C1_06214_set", &StaticFieldAccess<&parsertokens::Unit::YOCTO_DESC>::set);
    emscripten::function("api_C1_06215_get", &StaticFieldAccess<&parsertokens::Unit::METRE_DESC>::get);
    emscripten::function("api_C1_06215_set", &StaticFieldAccess<&parsertokens::Unit::METRE_DESC>::set);
    emscripten::function("api_C1_06216_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_DESC>::get);
    emscripten::function("api_C1_06216_set", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_DESC>::set);
    emscripten::function("api_C1_06217_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE_DESC>::get);
    emscripten::function("api_C1_06217_set", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE_DESC>::set);
    emscripten::function("api_C1_06218_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE_DESC>::get);
    emscripten::function("api_C1_06218_set", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE_DESC>::set);
    emscripten::function("api_C1_06219_get", &StaticFieldAccess<&parsertokens::Unit::INCH_DESC>::get);
    emscripten::function("api_C1_06219_set", &StaticFieldAccess<&parsertokens::Unit::INCH_DESC>::set);
    emscripten::function("api_C1_06220_get", &StaticFieldAccess<&parsertokens::Unit::YARD_DESC>::get);
    emscripten::function("api_C1_06220_set", &StaticFieldAccess<&parsertokens::Unit::YARD_DESC>::set);
    emscripten::function("api_C1_06221_get", &StaticFieldAccess<&parsertokens::Unit::FEET_DESC>::get);
    emscripten::function("api_C1_06221_set", &StaticFieldAccess<&parsertokens::Unit::FEET_DESC>::set);
    emscripten::function("api_C1_06222_get", &StaticFieldAccess<&parsertokens::Unit::MILE_DESC>::get);
    emscripten::function("api_C1_06222_set", &StaticFieldAccess<&parsertokens::Unit::MILE_DESC>::set);
    emscripten::function("api_C1_06223_get", &StaticFieldAccess<&parsertokens::Unit::NAUTICAL_MILE_DESC>::get);
    emscripten::function("api_C1_06223_set", &StaticFieldAccess<&parsertokens::Unit::NAUTICAL_MILE_DESC>::set);
    emscripten::function("api_C1_06224_get", &StaticFieldAccess<&parsertokens::Unit::METRE2_DESC>::get);
    emscripten::function("api_C1_06224_set", &StaticFieldAccess<&parsertokens::Unit::METRE2_DESC>::set);
    emscripten::function("api_C1_06225_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE2_DESC>::get);
    emscripten::function("api_C1_06225_set", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE2_DESC>::set);
    emscripten::function("api_C1_06226_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE2_DESC>::get);
    emscripten::function("api_C1_06226_set", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE2_DESC>::set);
    emscripten::function("api_C1_06227_get", &StaticFieldAccess<&parsertokens::Unit::ARE_DESC>::get);
    emscripten::function("api_C1_06227_set", &StaticFieldAccess<&parsertokens::Unit::ARE_DESC>::set);
    emscripten::function("api_C1_06228_get", &StaticFieldAccess<&parsertokens::Unit::HECTARE_DESC>::get);
    emscripten::function("api_C1_06228_set", &StaticFieldAccess<&parsertokens::Unit::HECTARE_DESC>::set);
    emscripten::function("api_C1_06229_get", &StaticFieldAccess<&parsertokens::Unit::ACRE_DESC>::get);
    emscripten::function("api_C1_06229_set", &StaticFieldAccess<&parsertokens::Unit::ACRE_DESC>::set);
    emscripten::function("api_C1_06230_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE2_DESC>::get);
    emscripten::function("api_C1_06230_set", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE2_DESC>::set);
    emscripten::function("api_C1_06231_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE3_DESC>::get);
    emscripten::function("api_C1_06231_set", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE3_DESC>::set);
    emscripten::function("api_C1_06232_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE3_DESC>::get);
    emscripten::function("api_C1_06232_set", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE3_DESC>::set);
    emscripten::function("api_C1_06233_get", &StaticFieldAccess<&parsertokens::Unit::METRE3_DESC>::get);
    emscripten::function("api_C1_06233_set", &StaticFieldAccess<&parsertokens::Unit::METRE3_DESC>::set);
    emscripten::function("api_C1_06234_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE3_DESC>::get);
    emscripten::function("api_C1_06234_set", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE3_DESC>::set);
    emscripten::function("api_C1_06235_get", &StaticFieldAccess<&parsertokens::Unit::MILLILITRE_DESC>::get);
    emscripten::function("api_C1_06235_set", &StaticFieldAccess<&parsertokens::Unit::MILLILITRE_DESC>::set);
    emscripten::function("api_C1_06236_get", &StaticFieldAccess<&parsertokens::Unit::LITRE_DESC>::get);
    emscripten::function("api_C1_06236_set", &StaticFieldAccess<&parsertokens::Unit::LITRE_DESC>::set);
    emscripten::function("api_C1_06237_get", &StaticFieldAccess<&parsertokens::Unit::GALLON_DESC>::get);
    emscripten::function("api_C1_06237_set", &StaticFieldAccess<&parsertokens::Unit::GALLON_DESC>::set);
    emscripten::function("api_C1_06238_get", &StaticFieldAccess<&parsertokens::Unit::PINT_DESC>::get);
    emscripten::function("api_C1_06238_set", &StaticFieldAccess<&parsertokens::Unit::PINT_DESC>::set);
    emscripten::function("api_C1_06239_get", &StaticFieldAccess<&parsertokens::Unit::SECOND_DESC>::get);
    emscripten::function("api_C1_06239_set", &StaticFieldAccess<&parsertokens::Unit::SECOND_DESC>::set);
    emscripten::function("api_C1_06240_get", &StaticFieldAccess<&parsertokens::Unit::MILLISECOND_DESC>::get);
    emscripten::function("api_C1_06240_set", &StaticFieldAccess<&parsertokens::Unit::MILLISECOND_DESC>::set);
    emscripten::function("api_C1_06241_get", &StaticFieldAccess<&parsertokens::Unit::MINUTE_DESC>::get);
    emscripten::function("api_C1_06241_set", &StaticFieldAccess<&parsertokens::Unit::MINUTE_DESC>::set);
    emscripten::function("api_C1_06242_get", &StaticFieldAccess<&parsertokens::Unit::HOUR_DESC>::get);
    emscripten::function("api_C1_06242_set", &StaticFieldAccess<&parsertokens::Unit::HOUR_DESC>::set);
    emscripten::function("api_C1_06243_get", &StaticFieldAccess<&parsertokens::Unit::DAY_DESC>::get);
    emscripten::function("api_C1_06243_set", &StaticFieldAccess<&parsertokens::Unit::DAY_DESC>::set);
    emscripten::function("api_C1_06244_get", &StaticFieldAccess<&parsertokens::Unit::WEEK_DESC>::get);
    emscripten::function("api_C1_06244_set", &StaticFieldAccess<&parsertokens::Unit::WEEK_DESC>::set);
    emscripten::function("api_C1_06245_get", &StaticFieldAccess<&parsertokens::Unit::JULIAN_YEAR_DESC>::get);
    emscripten::function("api_C1_06245_set", &StaticFieldAccess<&parsertokens::Unit::JULIAN_YEAR_DESC>::set);
    emscripten::function("api_C1_06246_get", &StaticFieldAccess<&parsertokens::Unit::KILOGRAM_DESC>::get);
    emscripten::function("api_C1_06246_set", &StaticFieldAccess<&parsertokens::Unit::KILOGRAM_DESC>::set);
    emscripten::function("api_C1_06247_get", &StaticFieldAccess<&parsertokens::Unit::GRAM_DESC>::get);
    emscripten::function("api_C1_06247_set", &StaticFieldAccess<&parsertokens::Unit::GRAM_DESC>::set);
    emscripten::function("api_C1_06248_get", &StaticFieldAccess<&parsertokens::Unit::MILLIGRAM_DESC>::get);
    emscripten::function("api_C1_06248_set", &StaticFieldAccess<&parsertokens::Unit::MILLIGRAM_DESC>::set);
    emscripten::function("api_C1_06249_get", &StaticFieldAccess<&parsertokens::Unit::DECAGRAM_DESC>::get);
    emscripten::function("api_C1_06249_set", &StaticFieldAccess<&parsertokens::Unit::DECAGRAM_DESC>::set);
    emscripten::function("api_C1_06250_get", &StaticFieldAccess<&parsertokens::Unit::TONNE_DESC>::get);
    emscripten::function("api_C1_06250_set", &StaticFieldAccess<&parsertokens::Unit::TONNE_DESC>::set);
    emscripten::function("api_C1_06251_get", &StaticFieldAccess<&parsertokens::Unit::OUNCE_DESC>::get);
    emscripten::function("api_C1_06251_set", &StaticFieldAccess<&parsertokens::Unit::OUNCE_DESC>::set);
    emscripten::function("api_C1_06252_get", &StaticFieldAccess<&parsertokens::Unit::POUND_DESC>::get);
    emscripten::function("api_C1_06252_set", &StaticFieldAccess<&parsertokens::Unit::POUND_DESC>::set);
    emscripten::function("api_C1_06253_get", &StaticFieldAccess<&parsertokens::Unit::BIT_DESC>::get);
    emscripten::function("api_C1_06253_set", &StaticFieldAccess<&parsertokens::Unit::BIT_DESC>::set);
    emscripten::function("api_C1_06254_get", &StaticFieldAccess<&parsertokens::Unit::KILOBIT_DESC>::get);
    emscripten::function("api_C1_06254_set", &StaticFieldAccess<&parsertokens::Unit::KILOBIT_DESC>::set);
    emscripten::function("api_C1_06255_get", &StaticFieldAccess<&parsertokens::Unit::MEGABIT_DESC>::get);
    emscripten::function("api_C1_06255_set", &StaticFieldAccess<&parsertokens::Unit::MEGABIT_DESC>::set);
    emscripten::function("api_C1_06256_get", &StaticFieldAccess<&parsertokens::Unit::GIGABIT_DESC>::get);
    emscripten::function("api_C1_06256_set", &StaticFieldAccess<&parsertokens::Unit::GIGABIT_DESC>::set);
    emscripten::function("api_C1_06257_get", &StaticFieldAccess<&parsertokens::Unit::TERABIT_DESC>::get);
    emscripten::function("api_C1_06257_set", &StaticFieldAccess<&parsertokens::Unit::TERABIT_DESC>::set);
    emscripten::function("api_C1_06258_get", &StaticFieldAccess<&parsertokens::Unit::PETABIT_DESC>::get);
    emscripten::function("api_C1_06258_set", &StaticFieldAccess<&parsertokens::Unit::PETABIT_DESC>::set);
    emscripten::function("api_C1_06259_get", &StaticFieldAccess<&parsertokens::Unit::EXABIT_DESC>::get);
    emscripten::function("api_C1_06259_set", &StaticFieldAccess<&parsertokens::Unit::EXABIT_DESC>::set);
    emscripten::function("api_C1_06260_get", &StaticFieldAccess<&parsertokens::Unit::ZETTABIT_DESC>::get);
    emscripten::function("api_C1_06260_set", &StaticFieldAccess<&parsertokens::Unit::ZETTABIT_DESC>::set);
    emscripten::function("api_C1_06261_get", &StaticFieldAccess<&parsertokens::Unit::YOTTABIT_DESC>::get);
    emscripten::function("api_C1_06261_set", &StaticFieldAccess<&parsertokens::Unit::YOTTABIT_DESC>::set);
    emscripten::function("api_C1_06262_get", &StaticFieldAccess<&parsertokens::Unit::BYTE_DESC>::get);
    emscripten::function("api_C1_06262_set", &StaticFieldAccess<&parsertokens::Unit::BYTE_DESC>::set);
    emscripten::function("api_C1_06263_get", &StaticFieldAccess<&parsertokens::Unit::KILOBYTE_DESC>::get);
    emscripten::function("api_C1_06263_set", &StaticFieldAccess<&parsertokens::Unit::KILOBYTE_DESC>::set);
    emscripten::function("api_C1_06264_get", &StaticFieldAccess<&parsertokens::Unit::MEGABYTE_DESC>::get);
    emscripten::function("api_C1_06264_set", &StaticFieldAccess<&parsertokens::Unit::MEGABYTE_DESC>::set);
    emscripten::function("api_C1_06265_get", &StaticFieldAccess<&parsertokens::Unit::GIGABYTE_DESC>::get);
    emscripten::function("api_C1_06265_set", &StaticFieldAccess<&parsertokens::Unit::GIGABYTE_DESC>::set);
    emscripten::function("api_C1_06266_get", &StaticFieldAccess<&parsertokens::Unit::TERABYTE_DESC>::get);
    emscripten::function("api_C1_06266_set", &StaticFieldAccess<&parsertokens::Unit::TERABYTE_DESC>::set);
    emscripten::function("api_C1_06267_get", &StaticFieldAccess<&parsertokens::Unit::PETABYTE_DESC>::get);
    emscripten::function("api_C1_06267_set", &StaticFieldAccess<&parsertokens::Unit::PETABYTE_DESC>::set);
    emscripten::function("api_C1_06268_get", &StaticFieldAccess<&parsertokens::Unit::EXABYTE_DESC>::get);
    emscripten::function("api_C1_06268_set", &StaticFieldAccess<&parsertokens::Unit::EXABYTE_DESC>::set);
    emscripten::function("api_C1_06269_get", &StaticFieldAccess<&parsertokens::Unit::ZETTABYTE_DESC>::get);
    emscripten::function("api_C1_06269_set", &StaticFieldAccess<&parsertokens::Unit::ZETTABYTE_DESC>::set);
    emscripten::function("api_C1_06270_get", &StaticFieldAccess<&parsertokens::Unit::YOTTABYTE_DESC>::get);
    emscripten::function("api_C1_06270_set", &StaticFieldAccess<&parsertokens::Unit::YOTTABYTE_DESC>::set);
    emscripten::function("api_C1_06271_get", &StaticFieldAccess<&parsertokens::Unit::JOULE_DESC>::get);
    emscripten::function("api_C1_06271_set", &StaticFieldAccess<&parsertokens::Unit::JOULE_DESC>::set);
    emscripten::function("api_C1_06272_get", &StaticFieldAccess<&parsertokens::Unit::ELECTRONO_VOLT_DESC>::get);
    emscripten::function("api_C1_06272_set", &StaticFieldAccess<&parsertokens::Unit::ELECTRONO_VOLT_DESC>::set);
    emscripten::function("api_C1_06273_get", &StaticFieldAccess<&parsertokens::Unit::KILO_ELECTRONO_VOLT_DESC>::get);
    emscripten::function("api_C1_06273_set", &StaticFieldAccess<&parsertokens::Unit::KILO_ELECTRONO_VOLT_DESC>::set);
    emscripten::function("api_C1_06274_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_ELECTRONO_VOLT_DESC>::get);
    emscripten::function("api_C1_06274_set", &StaticFieldAccess<&parsertokens::Unit::MEGA_ELECTRONO_VOLT_DESC>::set);
    emscripten::function("api_C1_06275_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_ELECTRONO_VOLT_DESC>::get);
    emscripten::function("api_C1_06275_set", &StaticFieldAccess<&parsertokens::Unit::GIGA_ELECTRONO_VOLT_DESC>::set);
    emscripten::function("api_C1_06276_get", &StaticFieldAccess<&parsertokens::Unit::TERA_ELECTRONO_VOLT_DESC>::get);
    emscripten::function("api_C1_06276_set", &StaticFieldAccess<&parsertokens::Unit::TERA_ELECTRONO_VOLT_DESC>::set);
    emscripten::function("api_C1_06277_get", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND_DESC>::get);
    emscripten::function("api_C1_06277_set", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND_DESC>::set);
    emscripten::function("api_C1_06278_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR_DESC>::get);
    emscripten::function("api_C1_06278_set", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR_DESC>::set);
    emscripten::function("api_C1_06279_get", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR_DESC>::get);
    emscripten::function("api_C1_06279_set", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR_DESC>::set);
    emscripten::function("api_C1_06280_get", &StaticFieldAccess<&parsertokens::Unit::KNOT_DESC>::get);
    emscripten::function("api_C1_06280_set", &StaticFieldAccess<&parsertokens::Unit::KNOT_DESC>::set);
    emscripten::function("api_C1_06281_get", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND2_DESC>::get);
    emscripten::function("api_C1_06281_set", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND2_DESC>::set);
    emscripten::function("api_C1_06282_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR2_DESC>::get);
    emscripten::function("api_C1_06282_set", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR2_DESC>::set);
    emscripten::function("api_C1_06283_get", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR2_DESC>::get);
    emscripten::function("api_C1_06283_set", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR2_DESC>::set);
    emscripten::function("api_C1_06284_get", &StaticFieldAccess<&parsertokens::Unit::RADIAN_ARC_DESC>::get);
    emscripten::function("api_C1_06284_set", &StaticFieldAccess<&parsertokens::Unit::RADIAN_ARC_DESC>::set);
    emscripten::function("api_C1_06285_get", &StaticFieldAccess<&parsertokens::Unit::DEGREE_ARC_DESC>::get);
    emscripten::function("api_C1_06285_set", &StaticFieldAccess<&parsertokens::Unit::DEGREE_ARC_DESC>::set);
    emscripten::function("api_C1_06286_get", &StaticFieldAccess<&parsertokens::Unit::MINUTE_ARC_DESC>::get);
    emscripten::function("api_C1_06286_set", &StaticFieldAccess<&parsertokens::Unit::MINUTE_ARC_DESC>::set);
    emscripten::function("api_C1_06287_get", &StaticFieldAccess<&parsertokens::Unit::SECOND_ARC_DESC>::get);
    emscripten::function("api_C1_06287_set", &StaticFieldAccess<&parsertokens::Unit::SECOND_ARC_DESC>::set);
    emscripten::function("api_C1_06288_get", &StaticFieldAccess<&parsertokens::Unit::PERC_SINCE>::get);
    emscripten::function("api_C1_06289_get", &StaticFieldAccess<&parsertokens::Unit::PERM_SINCE>::get);
    emscripten::function("api_C1_06290_get", &StaticFieldAccess<&parsertokens::Unit::YOTTA_SINCE>::get);
    emscripten::function("api_C1_06291_get", &StaticFieldAccess<&parsertokens::Unit::ZETTA_SINCE>::get);
    emscripten::function("api_C1_06292_get", &StaticFieldAccess<&parsertokens::Unit::EXA_SINCE>::get);
    emscripten::function("api_C1_06293_get", &StaticFieldAccess<&parsertokens::Unit::PETA_SINCE>::get);
    emscripten::function("api_C1_06294_get", &StaticFieldAccess<&parsertokens::Unit::TERA_SINCE>::get);
    emscripten::function("api_C1_06295_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_SINCE>::get);
    emscripten::function("api_C1_06296_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_SINCE>::get);
    emscripten::function("api_C1_06297_get", &StaticFieldAccess<&parsertokens::Unit::KILO_SINCE>::get);
    emscripten::function("api_C1_06298_get", &StaticFieldAccess<&parsertokens::Unit::HECTO_SINCE>::get);
    emscripten::function("api_C1_06299_get", &StaticFieldAccess<&parsertokens::Unit::DECA_SINCE>::get);
    emscripten::function("api_C1_06300_get", &StaticFieldAccess<&parsertokens::Unit::DECI_SINCE>::get);
    emscripten::function("api_C1_06301_get", &StaticFieldAccess<&parsertokens::Unit::CENTI_SINCE>::get);
    emscripten::function("api_C1_06302_get", &StaticFieldAccess<&parsertokens::Unit::MILLI_SINCE>::get);
    emscripten::function("api_C1_06303_get", &StaticFieldAccess<&parsertokens::Unit::MICRO_SINCE>::get);
    emscripten::function("api_C1_06304_get", &StaticFieldAccess<&parsertokens::Unit::NANO_SINCE>::get);
    emscripten::function("api_C1_06305_get", &StaticFieldAccess<&parsertokens::Unit::PICO_SINCE>::get);
    emscripten::function("api_C1_06306_get", &StaticFieldAccess<&parsertokens::Unit::FEMTO_SINCE>::get);
    emscripten::function("api_C1_06307_get", &StaticFieldAccess<&parsertokens::Unit::ATTO_SINCE>::get);
    emscripten::function("api_C1_06308_get", &StaticFieldAccess<&parsertokens::Unit::ZEPTO_SINCE>::get);
    emscripten::function("api_C1_06309_get", &StaticFieldAccess<&parsertokens::Unit::YOCTO_SINCE>::get);
    emscripten::function("api_C1_06310_get", &StaticFieldAccess<&parsertokens::Unit::METRE_SINCE>::get);
    emscripten::function("api_C1_06311_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_SINCE>::get);
    emscripten::function("api_C1_06312_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE_SINCE>::get);
    emscripten::function("api_C1_06313_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE_SINCE>::get);
    emscripten::function("api_C1_06314_get", &StaticFieldAccess<&parsertokens::Unit::INCH_SINCE>::get);
    emscripten::function("api_C1_06315_get", &StaticFieldAccess<&parsertokens::Unit::YARD_SINCE>::get);
    emscripten::function("api_C1_06316_get", &StaticFieldAccess<&parsertokens::Unit::FEET_SINCE>::get);
    emscripten::function("api_C1_06317_get", &StaticFieldAccess<&parsertokens::Unit::MILE_SINCE>::get);
    emscripten::function("api_C1_06318_get", &StaticFieldAccess<&parsertokens::Unit::NAUTICAL_MILE_SINCE>::get);
    emscripten::function("api_C1_06319_get", &StaticFieldAccess<&parsertokens::Unit::METRE2_SINCE>::get);
    emscripten::function("api_C1_06320_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE2_SINCE>::get);
    emscripten::function("api_C1_06321_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE2_SINCE>::get);
    emscripten::function("api_C1_06322_get", &StaticFieldAccess<&parsertokens::Unit::ARE_SINCE>::get);
    emscripten::function("api_C1_06323_get", &StaticFieldAccess<&parsertokens::Unit::HECTARE_SINCE>::get);
    emscripten::function("api_C1_06324_get", &StaticFieldAccess<&parsertokens::Unit::ACRE_SINCE>::get);
    emscripten::function("api_C1_06325_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE2_SINCE>::get);
    emscripten::function("api_C1_06326_get", &StaticFieldAccess<&parsertokens::Unit::MILLIMETRE3_SINCE>::get);
    emscripten::function("api_C1_06327_get", &StaticFieldAccess<&parsertokens::Unit::CENTIMETRE3_SINCE>::get);
    emscripten::function("api_C1_06328_get", &StaticFieldAccess<&parsertokens::Unit::METRE3_SINCE>::get);
    emscripten::function("api_C1_06329_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE3_SINCE>::get);
    emscripten::function("api_C1_06330_get", &StaticFieldAccess<&parsertokens::Unit::MILLILITRE_SINCE>::get);
    emscripten::function("api_C1_06331_get", &StaticFieldAccess<&parsertokens::Unit::LITRE_SINCE>::get);
    emscripten::function("api_C1_06332_get", &StaticFieldAccess<&parsertokens::Unit::GALLON_SINCE>::get);
    emscripten::function("api_C1_06333_get", &StaticFieldAccess<&parsertokens::Unit::PINT_SINCE>::get);
    emscripten::function("api_C1_06334_get", &StaticFieldAccess<&parsertokens::Unit::SECOND_SINCE>::get);
    emscripten::function("api_C1_06335_get", &StaticFieldAccess<&parsertokens::Unit::MILLISECOND_SINCE>::get);
    emscripten::function("api_C1_06336_get", &StaticFieldAccess<&parsertokens::Unit::MINUTE_SINCE>::get);
    emscripten::function("api_C1_06337_get", &StaticFieldAccess<&parsertokens::Unit::HOUR_SINCE>::get);
    emscripten::function("api_C1_06338_get", &StaticFieldAccess<&parsertokens::Unit::DAY_SINCE>::get);
    emscripten::function("api_C1_06339_get", &StaticFieldAccess<&parsertokens::Unit::WEEK_SINCE>::get);
    emscripten::function("api_C1_06340_get", &StaticFieldAccess<&parsertokens::Unit::JULIAN_YEAR_SINCE>::get);
    emscripten::function("api_C1_06341_get", &StaticFieldAccess<&parsertokens::Unit::KILOGRAM_SINCE>::get);
    emscripten::function("api_C1_06342_get", &StaticFieldAccess<&parsertokens::Unit::GRAM_SINCE>::get);
    emscripten::function("api_C1_06343_get", &StaticFieldAccess<&parsertokens::Unit::MILLIGRAM_SINCE>::get);
    emscripten::function("api_C1_06344_get", &StaticFieldAccess<&parsertokens::Unit::DECAGRAM_SINCE>::get);
    emscripten::function("api_C1_06345_get", &StaticFieldAccess<&parsertokens::Unit::TONNE_SINCE>::get);
    emscripten::function("api_C1_06346_get", &StaticFieldAccess<&parsertokens::Unit::OUNCE_SINCE>::get);
    emscripten::function("api_C1_06347_get", &StaticFieldAccess<&parsertokens::Unit::POUND_SINCE>::get);
    emscripten::function("api_C1_06348_get", &StaticFieldAccess<&parsertokens::Unit::BIT_SINCE>::get);
    emscripten::function("api_C1_06349_get", &StaticFieldAccess<&parsertokens::Unit::KILOBIT_SINCE>::get);
    emscripten::function("api_C1_06350_get", &StaticFieldAccess<&parsertokens::Unit::MEGABIT_SINCE>::get);
    emscripten::function("api_C1_06351_get", &StaticFieldAccess<&parsertokens::Unit::GIGABIT_SINCE>::get);
    emscripten::function("api_C1_06352_get", &StaticFieldAccess<&parsertokens::Unit::TERABIT_SINCE>::get);
    emscripten::function("api_C1_06353_get", &StaticFieldAccess<&parsertokens::Unit::PETABIT_SINCE>::get);
    emscripten::function("api_C1_06354_get", &StaticFieldAccess<&parsertokens::Unit::EXABIT_SINCE>::get);
    emscripten::function("api_C1_06355_get", &StaticFieldAccess<&parsertokens::Unit::ZETTABIT_SINCE>::get);
    emscripten::function("api_C1_06356_get", &StaticFieldAccess<&parsertokens::Unit::YOTTABIT_SINCE>::get);
    emscripten::function("api_C1_06357_get", &StaticFieldAccess<&parsertokens::Unit::BYTE_SINCE>::get);
    emscripten::function("api_C1_06358_get", &StaticFieldAccess<&parsertokens::Unit::KILOBYTE_SINCE>::get);
    emscripten::function("api_C1_06359_get", &StaticFieldAccess<&parsertokens::Unit::MEGABYTE_SINCE>::get);
    emscripten::function("api_C1_06360_get", &StaticFieldAccess<&parsertokens::Unit::GIGABYTE_SINCE>::get);
    emscripten::function("api_C1_06361_get", &StaticFieldAccess<&parsertokens::Unit::TERABYTE_SINCE>::get);
    emscripten::function("api_C1_06362_get", &StaticFieldAccess<&parsertokens::Unit::PETABYTE_SINCE>::get);
    emscripten::function("api_C1_06363_get", &StaticFieldAccess<&parsertokens::Unit::EXABYTE_SINCE>::get);
    emscripten::function("api_C1_06364_get", &StaticFieldAccess<&parsertokens::Unit::ZETTABYTE_SINCE>::get);
    emscripten::function("api_C1_06365_get", &StaticFieldAccess<&parsertokens::Unit::YOTTABYTE_SINCE>::get);
    emscripten::function("api_C1_06366_get", &StaticFieldAccess<&parsertokens::Unit::JOULE_SINCE>::get);
    emscripten::function("api_C1_06367_get", &StaticFieldAccess<&parsertokens::Unit::ELECTRONO_VOLT_SINCE>::get);
    emscripten::function("api_C1_06368_get", &StaticFieldAccess<&parsertokens::Unit::KILO_ELECTRONO_VOLT_SINCE>::get);
    emscripten::function("api_C1_06369_get", &StaticFieldAccess<&parsertokens::Unit::MEGA_ELECTRONO_VOLT_SINCE>::get);
    emscripten::function("api_C1_06370_get", &StaticFieldAccess<&parsertokens::Unit::GIGA_ELECTRONO_VOLT_SINCE>::get);
    emscripten::function("api_C1_06371_get", &StaticFieldAccess<&parsertokens::Unit::TERA_ELECTRONO_VOLT_SINCE>::get);
    emscripten::function("api_C1_06372_get", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND_SINCE>::get);
    emscripten::function("api_C1_06373_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR_SINCE>::get);
    emscripten::function("api_C1_06374_get", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR_SINCE>::get);
    emscripten::function("api_C1_06375_get", &StaticFieldAccess<&parsertokens::Unit::KNOT_SINCE>::get);
    emscripten::function("api_C1_06376_get", &StaticFieldAccess<&parsertokens::Unit::METRE_PER_SECOND2_SINCE>::get);
    emscripten::function("api_C1_06377_get", &StaticFieldAccess<&parsertokens::Unit::KILOMETRE_PER_HOUR2_SINCE>::get);
    emscripten::function("api_C1_06378_get", &StaticFieldAccess<&parsertokens::Unit::MILE_PER_HOUR2_SINCE>::get);
    emscripten::function("api_C1_06379_get", &StaticFieldAccess<&parsertokens::Unit::RADIAN_ARC_SINCE>::get);
    emscripten::function("api_C1_06380_get", &StaticFieldAccess<&parsertokens::Unit::DEGREE_ARC_SINCE>::get);
    emscripten::function("api_C1_06381_get", &StaticFieldAccess<&parsertokens::Unit::MINUTE_ARC_SINCE>::get);
    emscripten::function("api_C1_06382_get", &StaticFieldAccess<&parsertokens::Unit::SECOND_ARC_SINCE>::get);
    emscripten::function("api_C1_07204_get", +[]() {
        return static_cast<int>(org::mariuszgromada::math::mxparser::syntaxchecker::LexerErrors::LEXICAL_ERROR);
    });
    emscripten::function("api_C1_07205_get", +[]() {
        return static_cast<int>(org::mariuszgromada::math::mxparser::syntaxchecker::LexerErrors::STATIC_LEXER_ERROR);
    });
    emscripten::function("api_C1_07206_get", +[]() {
        return static_cast<int>(org::mariuszgromada::math::mxparser::syntaxchecker::LexerErrors::INVALID_LEXICAL_STATE);
    });
    emscripten::function("api_C1_07207_get", +[]() {
        return static_cast<int>(org::mariuszgromada::math::mxparser::syntaxchecker::LexerErrors::LOOP_DETECTED);
    });
    emscripten::function("api_C1_02994",
                         &StaticCall<static_cast<double (*)(double, const Array<double> &)>(&
                             mathcollection::Evaluate::polynomial)>::call);
    emscripten::function("api_C1_02995",
                         &StaticCall<static_cast<double (*)(double, const Array<double> &, int)>(&
                             mathcollection::Evaluate::p1evl)>::call);
    emscripten::function("api_C1_02996",
                         &StaticCall<static_cast<double (*)(double, const Array<double> &, int)>(&
                             mathcollection::Evaluate::polevl)>::call);
    emscripten::function("api_C1_02945_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::AND_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02946_get",
                         &StaticFieldAccess<&mathcollection::BooleanAlgebra::NAND_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02947_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::OR_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02948_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::NOR_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02949_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::XOR_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02950_get",
                         &StaticFieldAccess<&mathcollection::BooleanAlgebra::XNOR_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02951_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::IMP_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02952_get",
                         &StaticFieldAccess<&mathcollection::BooleanAlgebra::CIMP_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02953_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::EQV_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02954_get",
                         &StaticFieldAccess<&mathcollection::BooleanAlgebra::NIMP_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02955_get",
                         &StaticFieldAccess<&mathcollection::BooleanAlgebra::CNIMP_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02956_get", &StaticFieldAccess<&mathcollection::BooleanAlgebra::NOT_TRUTH_TABLE>::get);
    emscripten::function("api_C1_02201",
                         &StaticCall<static_cast<bool (*)(const StringPtr &, const StringPtr &)>(&
                             stringutils::StringUtils::regexMatch)>::call);
    emscripten::function("api_C1_07139_get", &ImmutableWideArrayStaticFieldAccess<&syntaxchecker::tokenImage>::get);
    emscripten::function("api_C1_03183",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::min)>::call);
    emscripten::function("api_C1_03188",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::argmin)>::call);
    emscripten::function("api_C1_03194",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::max)>::call);
    emscripten::function("api_C1_03199",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::argmax)>::call);
    emscripten::function("api_C1_03206",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::numberOfDistValues)>::call);
    emscripten::function("api_C1_03214",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::gcd)>::call);
    emscripten::function("api_C1_03222",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::lcm)>::call);
    emscripten::function("api_C1_03227",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::sum)>::call);
    emscripten::function("api_C1_03232",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::NumberTheory::prod)>::call);
    emscripten::function("api_C1_03559",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::Statistics::avg)>::call);
    emscripten::function("api_C1_03564",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::Statistics::var)>::call);
    emscripten::function("api_C1_03569",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::Statistics::std)>::call);
    emscripten::function("api_C1_03574",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::Statistics::median)>::call);
    emscripten::function("api_C1_03579",
                         &NumericPackCall<static_cast<double(*)(const ListPtr<double> &)>(&
                             mathcollection::Statistics::mode)>::call);
    emscripten::function("api_C1_06486_get", &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::kind>::get);
    emscripten::function("api_C1_06486_set", &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::kind>::set);
    emscripten::function("api_C1_06487_get",
                         &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::beginLine>::get);
    emscripten::function("api_C1_06487_set",
                         &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::beginLine>::set);
    emscripten::function("api_C1_06488_get",
                         &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::beginColumn>::get);
    emscripten::function("api_C1_06488_set",
                         &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::beginColumn>::set);
    emscripten::function("api_C1_06489_get", &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::endLine>::get);
    emscripten::function("api_C1_06489_set", &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::endLine>::set);
    emscripten::function("api_C1_06490_get",
                         &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::endColumn>::get);
    emscripten::function("api_C1_06490_set",
                         &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::endColumn>::set);
    emscripten::function("api_C1_06491_get", &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::image>::get);
    emscripten::function("api_C1_06491_set", &BorrowedJavaTokenFieldAccess<&syntaxchecker::JavaCCToken::image>::set);
    emscripten::function("api_C1_06494",
                         &NullPointerStaticCall<static_cast<void * (*)()>(&
                             syntaxchecker::JavaCCToken::getValue)>::call);
    emscripten::function("api_C1_06499",
                         &BorrowedJavaTokenMemberCall<static_cast<const String & (syntaxchecker::JavaCCToken::*)()>(&
                             syntaxchecker::JavaCCToken::toString)>::call);
    emscripten::function("api_C1_06500",
                         &OwnedJavaTokenFactoryCall<static_cast<syntaxchecker::JavaCCToken * (*)(int, const String &)>(&
                             syntaxchecker::JavaCCToken::newToken)>::call);
    emscripten::function("api_C1_06501",
                         &OwnedJavaTokenFactoryCall<static_cast<syntaxchecker::JavaCCToken * (*)(int)>(&
                             syntaxchecker::JavaCCToken::newToken)>::call);
    emscripten::function("api_C1_06506_get",
                         &EmbeddedJavaTokenFieldAccess<&syntaxchecker::ParseException::currentToken>::get);
    emscripten::function("api_C1_06506_set",
                         &EmbeddedJavaTokenFieldAccess<&syntaxchecker::ParseException::currentToken>::set);
    emscripten::function("api_C1_07211",
                         &MemberCall<static_cast<String (syntaxchecker::TokenMgrError::*)()>(&
                             syntaxchecker::TokenMgrError::getMessage)>::call);
    emscripten::function("api_C1_00871", &FunctionSetPrefixPackCall<0>::call);
    emscripten::function("api_C1_06388",
                         &MemberCall<static_cast<void (CharStream::*)(int)>(&
                             syntaxchecker::CharStream::setTabSize)>::call);
    emscripten::function("api_C1_06389",
                         &MemberCall<static_cast<int (CharStream::*)(int) const>(&
                             syntaxchecker::CharStream::getTabSize)>::call);
    emscripten::function("api_C1_06390",
                         &MemberCall<static_cast<int (CharStream::*)()>(&syntaxchecker::CharStream::getColumn)>::call);
    emscripten::function("api_C1_06391",
                         &MemberCall<static_cast<int (CharStream::*)()>(&syntaxchecker::CharStream::getLine)>::call);
    emscripten::function("api_C1_06392",
                         &MemberCall<static_cast<int (CharStream::*)()>(&
                             syntaxchecker::CharStream::getEndColumn)>::call);
    emscripten::function("api_C1_06393",
                         &MemberCall<static_cast<int (CharStream::*)()>(&syntaxchecker::CharStream::getEndLine)>::call);
    emscripten::function("api_C1_06394",
                         &MemberCall<static_cast<int (CharStream::*)()>(&
                             syntaxchecker::CharStream::getBeginColumn)>::call);
    emscripten::function("api_C1_06395",
                         &MemberCall<static_cast<int (CharStream::*)()>(&
                             syntaxchecker::CharStream::getBeginLine)>::call);
    emscripten::function("api_C1_06398",
                         &MemberCall<static_cast<void (CharStream::*)(int)>(&syntaxchecker::CharStream::backup)>::call);
    emscripten::function("api_C1_06399",
                         &MemberCall<static_cast<syntaxchecker::JJChar (CharStream::*)()>(&
                             syntaxchecker::CharStream::BeginToken)>::call);
    emscripten::function("api_C1_06400",
                         &MemberCall<static_cast<syntaxchecker::JJChar (CharStream::*)()>(&
                             syntaxchecker::CharStream::readChar)>::call);
    emscripten::function("api_C1_06403",
                         &MemberCall<static_cast<syntaxchecker::JJString (CharStream::*)()>(&
                             syntaxchecker::CharStream::GetImage)>::call);
    emscripten::function("api_C1_06404",
                         &MemberCall<static_cast<syntaxchecker::JJString (CharStream::*)(int)>(&
                             syntaxchecker::CharStream::GetSuffix)>::call);
    emscripten::function("api_C1_06418",
                         &CharStreamTextReInitCall<static_cast<void (CharStream::*)(
                             const syntaxchecker::JJString &, int, int,
                             int)>(&syntaxchecker::CharStream::ReInit)>::call);
    emscripten::function("api_C1_06419",
                         &CharStreamTextReInitCall<static_cast<void (CharStream::*)(
                             const syntaxchecker::JJString &, int, int)>(&syntaxchecker::CharStream::ReInit)>::call);
    emscripten::function("api_C1_06405",
                         &MemberCall<static_cast<void (CharStream::*)()>(&
                             syntaxchecker::CharStream::DeleteBuffers)>::call);
    emscripten::function("api_C1_06876",
                         &MemberCall<static_cast<bool (BoundSyntaxChecker::*)() const>(&
                             syntaxchecker::SyntaxChecker::trace_enabled)>::call);
    emscripten::function("api_C1_06877",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::enable_tracing)>::call);
    emscripten::function("api_C1_06878",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::disable_tracing)>::call);
    emscripten::function("api_C1_06518",
                         &MemberCall<static_cast<bool (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::checkSyntax)>::call);
    emscripten::function("api_C1_06519",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::start)>::call);
    emscripten::function("api_C1_06520",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::expression)>::call);
    emscripten::function("api_C1_06521",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::binaryExpression)>::call);
    emscripten::function("api_C1_06522",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::unaryRigthExpression)>::call);
    emscripten::function("api_C1_06523",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::unaryLeftExpression)>::call);
    emscripten::function("api_C1_06524",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::binaryOperator)>::call);
    emscripten::function("api_C1_06525",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::unaryRigthOperator)>::call);
    emscripten::function("api_C1_06526",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::unaryLeftOperator)>::call);
    emscripten::function("api_C1_06527",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::itemExpression)>::call);
    emscripten::function("api_C1_06528",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::bracketedExpressionOptionalImpliedMultiplication)>::call);
    emscripten::function("api_C1_06529",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::bracketedExpression)>::call);
    emscripten::function("api_C1_06530",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::itemOrFunctionOptionalImpliedMultiplication)>::call);
    emscripten::function("api_C1_06531",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::itemOrFunctionImpliedMultiplication)>::call);
    emscripten::function("api_C1_06532",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::itemOrFunction)>::call);
    emscripten::function("api_C1_06533",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::otherBaseNumber)>::call);
    emscripten::function("api_C1_06534",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::itemName)>::call);
    emscripten::function("api_C1_06535",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::unitOrSpecialConstant)>::call);
    emscripten::function("api_C1_06536",
                         &MemberCall<static_cast<void (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::argumentList)>::call);
    emscripten::function("api_C1_07178",
                         &OwnedJavaTokenFactoryCall<static_cast<syntaxchecker::JavaCCToken * (BoundSyntaxManager::*)()>(
                             &syntaxchecker::SyntaxCheckerTokenManager::getNextToken)>::call);
    emscripten::function("api_C1_06415",
                         &CharStreamReaderReInitCall<static_cast<void (NativeCharStream::*)(
                             syntaxchecker::ReaderStream *, int, int, int)>(&syntaxchecker::CharStream::ReInit)>::call);
    emscripten::function("api_C1_06416",
                         &CharStreamReaderReInitCall<static_cast<void (NativeCharStream::*)(
                             syntaxchecker::ReaderStream *, int, int)>(&syntaxchecker::CharStream::ReInit)>::call);
    emscripten::function("api_C1_06417",
                         &CharStreamReaderReInitCall<static_cast<void (NativeCharStream::*)(
                             syntaxchecker::ReaderStream *)>(&syntaxchecker::CharStream::ReInit)>::call);
    emscripten::function("api_C1_07200", &TokenManagerOwnedCall::call);
    emscripten::function("api_C1_06873",
                         &BorrowedParserTokenCall<static_cast<JavaToken * (BoundSyntaxChecker::*)()>(&
                             syntaxchecker::SyntaxChecker::getNextToken)>::call);
    emscripten::function("api_C1_06874",
                         &BorrowedParserTokenCall<static_cast<JavaToken * (BoundSyntaxChecker::*)(int) const>(&
                             syntaxchecker::SyntaxChecker::getToken)>::call);
    emscripten::function("api_C1_07142_get", &lexerDebugStreamGet);
    emscripten::function("api_C1_07142_set", &lexerDebugStreamSet);
    emscripten::function("api_C1_07143", &lexerDebugStreamCall);
    emscripten::function("api_C1_06420",
                         &MemberCall<static_cast<void (CharStream::*)(int, int)>(&
                             syntaxchecker::CharStream::adjustBeginLineColumn)>::call);
    emscripten::function("api_C1_06507_get",
                         &ParseExceptionArrayMemberFieldAccess<&
                             syntaxchecker::ParseException::expectedTokenSequences>::get);
    emscripten::function("api_C1_06507_set",
                         &ParseExceptionArrayMemberFieldAccess<&
                             syntaxchecker::ParseException::expectedTokenSequences>::set);
    emscripten::function("api_C1_06508_get",
                         &ParseExceptionArrayMemberFieldAccess<&syntaxchecker::ParseException::tokenImage>::get);
    emscripten::function("api_C1_06508_set",
                         &ParseExceptionArrayMemberFieldAccess<&syntaxchecker::ParseException::tokenImage>::set);
}
