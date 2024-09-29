/*
 * @(#)Function.hpp        6.1.0    2024-09-08
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2024 Mariusz Gromada - All rights reserved
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_FUNCTION_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_FUNCTION_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/Argument.hpp"
#include "org/mariuszgromada/math/mxparser/Constant.hpp"
#include "org/mariuszgromada/math/mxparser/Expression.hpp"
#include "org/mariuszgromada/math/mxparser/ExpressionUtils.hpp"
#include "org/mariuszgromada/math/mxparser/Function.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Token.hpp"
#include "org/mariuszgromada/math/mxparser/PrimitiveElement.hpp"
#include "org/mariuszgromada/math/mxparser/StringModel.hpp"
#include "org/mariuszgromada/math/mxparser/StringResources.hpp"
#include "org/mariuszgromada/math/mxparser/StringUtils.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.hpp"

namespace org::mariuszgromada::math::mxparser {

	USING_FRIENDS_NAMESPACES;

	class API_VISIBLE Function : public PrimitiveElement {
		ADD_FRIENDS_OF(Function);

	private:
		// ***********************************************************
		// ****************** CONSTRUCTORS HELPERS *******************
		// ***********************************************************

		static const ListPtr<FunctionPtr> LIST_PTR_OF_FUNCTION_PTR_ALWAYS_EMPTY;

		bool contructorStringParamsOk(const StringPtr &functionName, const StringPtr &functionExpressionString);

		// ***********************************************************

		void executeContructorConstPEnonTemplatePart(const StringPtr &functionDefinitionString, const ListPtr<PrimitiveElementPtr>& paramsPrimitiveElement);

		template<typename... PrimitiveElements>
		void executeContructorConstPE(const StringPtr &functionDefinitionString, PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				executeContructorConstPEnonTemplatePart, functionDefinitionString
			);
		}

		template<typename... PrimitiveElements>
		void executeContructorPE(StringPtr &functionDefinitionString, PrimitiveElements &&... elements) {
			executeContructorConstPE(functionDefinitionString, FORWARD_PRIMITIVE(elements)...);
		}

		// ***********************************************************

		void executeContructorConstPPEnonTemplatePart(const StringPtr &functionName, const StringPtr &functionExpressionString, const ListPtr<PrimitiveElementPtr>& paramsPrimitiveElement, const ListPtr<StringPtr>& paramsString);

		template<typename... StringsOrPrimitiveElements>
		void executeContructorConstPPE(const StringPtr &functionName, const StringPtr &functionExpressionString, StringsOrPrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC_AND_STRING(VariadicProcessorStringOrUdf, elements,
				executeContructorConstPPEnonTemplatePart, functionName, functionExpressionString
			);
		}

		template<typename... StringsOrPrimitiveElements>
		void executeContructorPPE(StringPtr &functionName, StringPtr &functionExpressionString, StringsOrPrimitiveElements &&... elements) {
			executeContructorConstPPE(functionName, functionExpressionString, std::forward<StringsOrPrimitiveElements>(elements)...);
		}

		// ***********************************************************

		void executeContructorConstPPL(const StringPtr &functionName, const StringPtr &functionExpressionString, const ListPtr<StringPtr> &argumentsNames);
		void executeContructorPPL(StringPtr &functionName, StringPtr &functionExpressionString, ListPtr<StringPtr> &argumentsNames);

		// ***********************************************************

		void executeContructor(StringPtr &functionName, FunctionExtensionPtr &functionExtension) { executeContructorConst(functionName, functionExtension); }
		void executeContructor(String &functionName, FunctionExtensionPtr &functionExtension) { executeContructorConst(functionName, functionExtension); }
		void executeContructor(StringPtr &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) { executeContructorConst(functionName, functionExtensionVariadic); }
		void executeContructor(String &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) { executeContructorConst(functionName, functionExtensionVariadic); }
		void executeContructor(FunctionPtr &functionToClone, bool isThreadSafeClone, CloneCachePtr &cloneCache) { executeContructorConst(functionToClone, isThreadSafeClone, cloneCache); }

		// ***********************************************************

		void executeContructorConst(const StringPtr &functionName, const FunctionExtensionPtr &functionExtension);
		void executeContructorConst(const StringPtr &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic);
		void executeContructorConst(const String &functionName, const FunctionExtensionPtr &functionExtension) { executeContructorConst(S(functionName), functionExtension); }
		void executeContructorConst(const String &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) { executeContructorConst(S(functionName), functionExtensionVariadic); }
		void executeContructorConst(const FunctionPtr &functionToClone, bool isThreadSafeClone, const CloneCachePtr &cloneCache);

		// ***********************************************************

		template<typename... StringsOrPrimitiveElements>
		void executeContructorConstSSE(const String &functionName, const String &functionExpressionString, StringsOrPrimitiveElements &&... elements) {
			executeContructorConstPPE(S(functionName), S(functionExpressionString), std::forward<StringsOrPrimitiveElements>(elements)...);
		}

		template<typename... StringsOrPrimitiveElements>
		void executeContructorSSE(String &functionName, String &functionExpressionString, StringsOrPrimitiveElements &&... elements) {
			executeContructorConstSSE(functionName, functionExpressionString, std::forward<StringsOrPrimitiveElements>(elements)...);
		}

		// ***********************************************************

		template<typename... PrimitiveElements>
		void executeContructorConstSE(const String &functionDefinitionString, PrimitiveElements &&... elements) {
			executeContructorConstPE(S(functionDefinitionString), FORWARD_PRIMITIVE(elements)...);
		}

		template<typename... PrimitiveElements>
		void executeContructorSE(String &functionDefinitionString, PrimitiveElements &&... elements) {
			executeContructorConstSE(functionDefinitionString, FORWARD_PRIMITIVE(elements)...);
		}

		// ***********************************************************

		double calculateNonTemplatePart(
				const ListPtr<double>& paramsDouble
				,const ListPtr<ArgumentPtr>& paramsArgument
				,const ListPtr<ConstantPtr>& paramsConstant
				,const ListPtr<FunctionPtr>& paramsFunction
				,const ListPtr<ExpressionPtr>& paramsExpression);

	public:

		// ***********************************************************
		// ********************** CONSTRUCTORS ***********************
		// ***********************************************************

		// 1 =========================================================================

		/**
		 * Constructor - creates function from function name
		 * and function expression string.
		 *
		 * @param      functionName              the function name
		 * @param      functionExpressionString  the function expression string
		 * @param      elements                  optional parameters names in strings + Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 *
		 * @see        PrimitiveElement
		 * @see        Expression
		 */
		template<typename... StringsOrPrimitiveElements>
		Function(const StringPtr &functionName, const StringPtr &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPE(functionName, functionExpressionString, std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... StringsOrPrimitiveElements>
		Function(StringPtr &functionName, StringPtr &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorPPE(functionName, functionExpressionString, std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... StringsOrPrimitiveElements>
		Function(const String &functionName, const String &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstSSE(functionName, functionExpressionString, std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... StringsOrPrimitiveElements>
		Function(String &functionName, String &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorSSE(functionName, functionExpressionString, std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... StringsOrPrimitiveElements>
		Function(const std::string &functionName, const std::string &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPE(S(functionName), S(functionExpressionString), std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... StringsOrPrimitiveElements>
		Function(std::string &functionName, std::string &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPE(S(functionName), S(functionExpressionString), std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... StringsOrPrimitiveElements>
		Function(const Char *functionName, const Char *functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPE(S(functionName), S(functionExpressionString), std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... StringsOrPrimitiveElements>
		Function(const char *functionName, const char *functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPE(S(functionName), S(functionExpressionString), std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		// 2 =========================================================================

		/**
		 * Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 *
		 * @param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * @param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 *
		 * @see    PrimitiveElement
		 *
		 */
		template<typename... PrimitiveElements>
		explicit Function(const StringPtr &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(functionDefinitionString, FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Function(StringPtr &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorPE(functionDefinitionString, FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Function(const String &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstSE(functionDefinitionString, FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Function(String &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorSE(functionDefinitionString, FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Function(const std::string &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(functionDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Function(std::string &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(functionDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Function(const Char *functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(functionDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Function(const char *functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(functionDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		// 3 =========================================================================

		Function(const StringPtr &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		Function(const StringPtr &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		Function(StringPtr &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		Function(StringPtr &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}

		Function(const String &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		Function(const String &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		Function(String &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		Function(String &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructor(functionName, functionExtension);
			iAmFullyConstructed = true;
		}

		Function(const std::string &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}
		Function(const std::string &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}
		Function(std::string &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}
		Function(std::string &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}

		Function(const Char *functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}
		Function(const Char *functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}

		Function(const char *functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}
		Function(const char *functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}

		// 4 =========================================================================

		Function(const StringPtr &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		Function(const StringPtr &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		Function(StringPtr &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		Function(StringPtr &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructor(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}

		Function(const String &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		Function(const String &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		Function(String &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		Function(String &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructor(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}

		Function(const std::string &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		Function(const std::string &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		Function(std::string &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		Function(std::string &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}

		Function(const Char *functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		Function(const Char *functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}

		Function(const char *functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		Function(const char *functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}

		// 6 =========================================================================

		Function(const StringPtr &functionName, const StringPtr &functionExpressionString, const ListPtr<StringPtr> &argumentsNames) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPL(functionName, functionExpressionString, argumentsNames);
			iAmFullyConstructed = true;
		}

		Function(StringPtr &functionName, StringPtr &functionExpressionString, ListPtr<StringPtr> &argumentsNames) : PrimitiveElement(TYPE_ID) {
			executeContructorPPL(functionName, functionExpressionString, argumentsNames);
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		// @Deprecated
		template<typename... PrimitiveElements>
		void setFunction(const StringPtr &functionDefinitionString, PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_NOT_NULL_VARIADIC(VariadicProcessorUdfs, elements,
				setFunction, functionDefinitionString
			);
		}

		// @Deprecated
		template<typename... PrimitiveElements>
		void setFunction(const String &functionDefinitionString, PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_NOT_NULL_VARIADIC(VariadicProcessorUdfs, elements,
				setFunction, functionDefinitionString
			);
		}

		// @Deprecated
		void setFunction(const StringPtr &functionDefinitionString, const ListPtr<PrimitiveElementPtr> &elements);
		void setFunction(const StringPtr &functionDefinitionString, ListPtr<PrimitiveElementPtr> &elements) {
			setFunction(functionDefinitionString, CONST_LIST_PRIMITIVE_ELEMENT(elements));
		}

		// @Deprecated
		void setFunction(const String &functionDefinitionString, const ListPtr<PrimitiveElementPtr> &elements) {
			setFunction(S(functionDefinitionString), elements);
		}

		void setFunction(const String &functionDefinitionString, ListPtr<PrimitiveElementPtr> &elements) {
			setFunction(functionDefinitionString, CONST_LIST_PRIMITIVE_ELEMENT(elements));
		}

		// ***********************************************************

		template<typename... DoubleOrPrimitiveElements>
		double calculate(DoubleOrPrimitiveElements &&... parameters) {
			if constexpr (sizeof...(parameters) > 0) {
				VariadicProcessorDoubleOrUdf vp;
				vp.processArgs(std::forward<DoubleOrPrimitiveElements>(parameters)...);
				return calculateNonTemplatePart(vp.paramsDouble, vp.paramsArgument, vp.paramsConstant, vp.paramsFunction, vp.paramsExpression);
			} else {
				return calculateNonTemplatePart(
					VariadicProcessor::paramsDoubleEmpty
					,VariadicProcessor::paramsArgumentEmpty
					,VariadicProcessor::paramsConstantEmpty
					,VariadicProcessor::paramsFunctionEmpty
					,VariadicProcessor::paramsExpressionEmpty)
				;
			}
		}

		double calculate(const ListPtr<double> &parameters);
		double calculate(ListPtr<double> &parameters) { return calculate(CONST_LIST_DOUBLE(parameters)); }
		double calculate(const ListPtr<ArgumentPtr> &parameters);
		double calculate(ListPtr<ArgumentPtr> &parameters) { return calculate(CONST_LIST_ARGUMENT(parameters)); }

		// ***********************************************************

		template<typename... PrimitiveElements>
		void addDefinitions(PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorUdfs, elements, addDefinitions);
		}
		void addDefinitions(const ListPtr<PrimitiveElementPtr> &elements);
		void addDefinitions(ListPtr<PrimitiveElementPtr> &elements) { addDefinitions(CONST_LIST_PRIMITIVE_ELEMENT(elements)); }
		void addDefinitions(const PrimitiveElementPtr &element);
		void addDefinitions(PrimitiveElementPtr &element) { addDefinitions(CONST_PRIMITIVE_ELEMENT(element)); }

		// ***********************************************************

		template<typename... PrimitiveElements>
		void removeDefinitions(PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorUdfs, elements, removeDefinitions);
		}
		void removeDefinitions(const ListPtr<PrimitiveElementPtr> &elements);
		void removeDefinitions(ListPtr<PrimitiveElementPtr> &elements) { removeDefinitions(CONST_LIST_PRIMITIVE_ELEMENT(elements)); }
		void removeDefinitions(const PrimitiveElementPtr &element);
		void removeDefinitions(PrimitiveElementPtr &element) { removeDefinitions(CONST_PRIMITIVE_ELEMENT(element)); }

		// ***********************************************************

		template<typename... Arguments>
		void addArguments(Arguments &&... arguments) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorArgument, arguments, addArguments);
		}
		void addArguments(const ListPtr<ArgumentPtr> &arguments);
		void addArguments(ListPtr<ArgumentPtr> &arguments) { addArguments(CONST_LIST_ARGUMENT(arguments)); }
		void addArguments(const ArgumentPtr &argument);
		void addArguments(ArgumentPtr &argument) { addArguments(CONST_ARGUMENT(argument)); }

		// ***********************************************************

		template<typename... Strings>
		void defineArguments(Strings &&... argumentsNames) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorString, argumentsNames, defineArguments);
		}
		void defineArguments(const ListPtr<StringPtr> &argumentsNames);
		void defineArguments(ListPtr<StringPtr> &argumentsNames) { defineArguments(CONST_LIST_STRING(argumentsNames)); }
		void defineArguments(const StringPtr &argumentName);
		void defineArguments(StringPtr &argumentName) { defineArguments(CONST_STRING_PTR(argumentName)); }
		void defineArguments(const String &argumentName) { defineArguments(S(argumentName)); }
		void defineArguments(const Char *argumentName) { defineArguments(S(argumentName)); }
		void defineArguments(const std::string &argumentName) { defineArguments(S(argumentName)); }
		void defineArguments(const char *argumentName) { defineArguments(S(argumentName)); }

		// ***********************************************************

		template<typename... StringsOrArguments>
		void removeArguments(StringsOrArguments &&... arguments) {
			EXECUTE_FUNCTION_VARIADIC_WITH_STRING(VariadicProcessorStringOrArgument, arguments, removeArguments);
		}
		void removeArguments(const ListPtr<StringPtr> &argumentsNames);
		void removeArguments(ListPtr<StringPtr> &argumentsNames) { removeArguments(CONST_LIST_STRING(argumentsNames)); }
		void removeArguments(const StringPtr &argumentName);
		void removeArguments(StringPtr &argumentName) { removeArguments(CONST_STRING_PTR(argumentName)); }
		void removeArguments(const String &argumentName) { removeArguments(S(argumentName)); }
		void removeArguments(const Char *argumentName) { removeArguments(S(argumentName)); }
		void removeArguments(const std::string &argumentName) { removeArguments(S(argumentName)); }
		void removeArguments(const char *argumentName) { removeArguments(S(argumentName)); }
		void removeArguments(const ListPtr<ArgumentPtr> &arguments);
		void removeArguments(ListPtr<ArgumentPtr> &arguments) { removeArguments(CONST_LIST_ARGUMENT(arguments)); }
		void removeArguments(const ArgumentPtr &argument);
		void removeArguments(ArgumentPtr &argument) { removeArguments(CONST_ARGUMENT(argument)); }

		// ***********************************************************

		void removeAllArguments();

		// ***********************************************************

		template<typename... Constants>
		void addConstants(Constants &&... constants) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorConstant, constants, addConstants);
		}
		void addConstants(const ListPtr<ConstantPtr> &constants);
		void addConstants(ListPtr<ConstantPtr> &constants) { addConstants(CONST_LIST_CONSTANT(constants)); }
		void addConstants(const ConstantPtr &constant);
		void addConstants(ConstantPtr &constant) { addConstants(CONST_CONSTANT(constant)); }

		// ***********************************************************

		template<typename... StringsOrConstants>
		void removeConstants(StringsOrConstants &&... constants) {
			EXECUTE_FUNCTION_VARIADIC_WITH_STRING(VariadicProcessorStringOrConstant, constants, removeConstants);
		}
		void removeConstants(const ListPtr<StringPtr> &constantsNames);
		void removeConstants(ListPtr<StringPtr> &constantsNames) { removeConstants(CONST_LIST_STRING(constantsNames)); }
		void removeConstants(const StringPtr &constantName);
		void removeConstants(StringPtr &constantName) { removeConstants(CONST_STRING_PTR(constantName)); }
		void removeConstants(const String &constantName) { removeConstants(S(constantName)); }
		void removeConstants(const Char *constantName) { removeConstants(S(constantName)); }
		void removeConstants(const std::string &constantName) { removeConstants(S(constantName)); }
		void removeConstants(const char *constantName) { removeConstants(S(constantName)); }
		void removeConstants(const ListPtr<ConstantPtr> &constants);
		void removeConstants(ListPtr<ConstantPtr> &constants) { removeConstants(CONST_LIST_CONSTANT(constants)); }
		void removeConstants(const ConstantPtr &constant);
		void removeConstants(ConstantPtr &constant) { removeConstants(CONST_CONSTANT(constant)); }

		// ***********************************************************

		void removeAllConstants();

		// ***********************************************************

		template<typename... Functions>
		void addFunctions(Functions &&... functions) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorFunction, functions, addFunctions);
		}
		void addFunctions(const ListPtr<FunctionPtr> &functions);
		void addFunctions(ListPtr<FunctionPtr> &functions) { addFunctions(CONST_LIST_FUNCTION(functions)); }
		void addFunctions(const FunctionPtr &function);
		void addFunctions(FunctionPtr &function) { addFunctions(CONST_FUNCTION(function)); }

		// ***********************************************************

		template<typename... Strings>
		void defineFunction(const StringPtr &functionName, const StringPtr &functionExpressionString, Strings &&... argumentsNames) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorString, argumentsNames,
				defineFunction, functionName, functionExpressionString
			);
		}

		template<typename... Strings>
		void defineFunction(const String &functionName, const String &functionExpressionString, Strings &&... argumentsNames) {
			defineFunction(S(functionName), S(functionExpressionString), FORWARD_STRING(argumentsNames)...);
		}
		void defineFunction(const StringPtr &functionName, const StringPtr &functionExpressionString, const ListPtr<StringPtr> &argumentsNames);
		void defineFunction(const StringPtr &functionName, const StringPtr &functionExpressionString, ListPtr<StringPtr> &argumentsNames) {
			defineFunction(functionName, functionExpressionString, CONST_LIST_STRING(argumentsNames));
		}

		// ***********************************************************

		template<typename... StringsOrFunctions>
		void removeFunctions(StringsOrFunctions &&... functions) {
			EXECUTE_FUNCTION_VARIADIC_WITH_STRING(VariadicProcessorStringOrFunction, functions, removeFunctions);
		}
		void removeFunctions(const ListPtr<StringPtr> &functionsNames);
		void removeFunctions(ListPtr<StringPtr> &functionsNames) { removeFunctions(CONST_LIST_STRING(functionsNames)); }
		void removeFunctions(const StringPtr &functionName);
		void removeFunctions(StringPtr &functionName) { removeFunctions(CONST_STRING_PTR(functionName)); }
		void removeFunctions(const String &functionName) { removeFunctions(S(functionName)); }
		void removeFunctions(const Char *functionName) { removeFunctions(S(functionName)); }
		void removeFunctions(const std::string &functionName) { removeFunctions(S(functionName)); }
		void removeFunctions(const char *functionName) { removeFunctions(S(functionName)); }
		void removeFunctions(const ListPtr<FunctionPtr> &functions);
		void removeFunctions(ListPtr<FunctionPtr> &functions) { removeFunctions(CONST_LIST_FUNCTION(functions)); }
		void removeFunctions(const FunctionPtr &function);
		void removeFunctions(FunctionPtr &function) { removeFunctions(CONST_FUNCTION(function)); }

		// ***********************************************************

		void removeAllFunctions();

		// ***********************************************************

		static constexpr int TYPE_ID = 103;
		static StringPtr TYPE_DESC;

		// ***********************************************************

		/**
		 * Status of the syntax - no syntax error
		 */
		static constexpr bool NO_SYNTAX_ERRORS = Expression::NO_SYNTAX_ERRORS;
		/**
		 * Status of the syntax - syntax error or syntax status unknown
		 */
		static constexpr bool SYNTAX_ERROR = Expression::SYNTAX_ERROR;
		/**
		 * Status of the syntax - syntax error or syntax status unknown
		 *
		 * @deprecated Planned to be removed, use {@link SYNTAX_ERROR} instead
		 */
		// @Deprecated
		static constexpr bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;
		/**
		 * When function was not found
		 */
		static constexpr int NOT_FOUND = Expression::NOT_FOUND;
		/**
		 * Function with body based on the expression string.
		 *
		 * @see Function#getFunctionBodyType()
		 */
		static constexpr int BODY_RUNTIME = 1;
		/**
		 * Function with body based on the extended code.
		 *
		 * @see FunctionExtension
		 * @see Function#getFunctionBodyType()
		 */
		static constexpr int BODY_EXTENDED = 2;

		// ***********************************************************

		void setDescription(const StringPtr &description);
		void setDescription(const String &description) { setDescription(S(description)); }
		void setDescription(const std::string &description) { setDescription(SC(description)); }
		void setDescription(const Char* description) { setDescription(SC(description)); }
		void setDescription(const char* description) { setDescription(SC(description)); }

		// ***********************************************************

		StringPtr getDescription() const;

		// ***********************************************************

		void setFunctionName(const StringPtr &functionName);
		void setFunctionName(const String &functionName) { setFunctionName(S(functionName)); }
		void setFunctionName(const std::string &functionName) { setFunctionName(SC(functionName)); }
		void setFunctionName(const Char* functionName) { setFunctionName(SC(functionName)); }
		void setFunctionName(const char* functionName) { setFunctionName(SC(functionName)); }

		// ***********************************************************

		StringPtr getFunctionName() const;

		// ***********************************************************

		StringPtr getFunctionExpressionString() const;

		// ***********************************************************

		void setArgumentValue(int argumentIndex, double argumentValue);

		// ***********************************************************

		int getFunctionBodyType() const;

		// ***********************************************************

		bool checkSyntax();
		StringPtr getErrorMessage() const;

		// ***********************************************************

		double calculate();
		double calculate(const CalcStepsRegisterPtr &calcStepsRegister);
		double calculate(CalcStepsRegisterPtr &calcStepsRegister) {
			return calculate(CONST_CALC_STEPS_REGISTER(calcStepsRegister));
		}

		// ***********************************************************

		void defineArgument(const StringPtr &argumentName, double argumentValue);

		// ***********************************************************

		int getArgumentIndex(const StringPtr &argumentName) const;
		int getArgumentIndex(const String &argumentName) { return getArgumentIndex(S(argumentName)); }
		int getArgumentIndex(const std::string &argumentName) { return getArgumentIndex(SC(argumentName)); }
		int getArgumentIndex(const Char* argumentName) { return getArgumentIndex(SC(argumentName)); }
		int getArgumentIndex(const char* argumentName) { return getArgumentIndex(SC(argumentName)); }

		// ***********************************************************

		ArgumentPtr getArgument(const StringPtr &argumentName) const;
		ArgumentPtr getArgument(const String &argumentName) { return getArgument(S(argumentName)); }
		ArgumentPtr getArgument(const std::string &argumentName) { return getArgument(SC(argumentName)); }
		ArgumentPtr getArgument(const Char* argumentName) { return getArgument(SC(argumentName)); }
		ArgumentPtr getArgument(const char* argumentName) { return getArgument(SC(argumentName)); }
		ArgumentPtr getArgument(int argumentIndex) const;

		// ***********************************************************

		int getParametersNumber() const;
		void setParametersNumber(int parametersNumber);
		StringPtr getParameterName(int parameterIndex) const;
		int getArgumentsNumber() const;

		// ***********************************************************

		void defineConstant(const StringPtr &constantName, double constantValue);

		// ***********************************************************

		int getConstantIndex(const StringPtr &constantName) const;
		int getConstantIndex(const String &constantName) { return getConstantIndex(S(constantName)); }
		int getConstantIndex(const std::string &constantName) { return getConstantIndex(SC(constantName)); }
		int getConstantIndex(const Char* constantName) { return getConstantIndex(SC(constantName)); }
		int getConstantIndex(const char* constantName) { return getConstantIndex(SC(constantName)); }

		// ***********************************************************

		ConstantPtr getConstant(const StringPtr &constantName) const;
		ConstantPtr getConstant(const String &constantName) { return getConstant(S(constantName)); }
		ConstantPtr getConstant(const std::string &constantName) { return getConstant(SC(constantName)); }
		ConstantPtr getConstant(const Char* constantName) { return getConstant(SC(constantName)); }
		ConstantPtr getConstant(const char* constantName) { return getConstant(SC(constantName)); }
		ConstantPtr getConstant(int constantIndex) const;

		// ***********************************************************

		int getConstantsNumber() const;

		// ***********************************************************

		int getFunctionIndex(const StringPtr &functionName) const;
		int getFunctionIndex(const String &functionName) { return getFunctionIndex(S(functionName)); }
		int getFunctionIndex(const std::string &functionName) { return getFunctionIndex(SC(functionName)); }
		int getFunctionIndex(const Char* functionName) { return getFunctionIndex(SC(functionName)); }
		int getFunctionIndex(const char* functionName) { return getFunctionIndex(SC(functionName)); }

		// ***********************************************************

		int getFunctionsNumber();

		// ***********************************************************

		FunctionPtr getFunction(const StringPtr &functionName) const;
		FunctionPtr getFunction(const String &functionName) { return getFunction(S(functionName)); }
		FunctionPtr getFunction(const std::string &functionName) { return getFunction(SC(functionName)); }
		FunctionPtr getFunction(const Char* functionName) { return getFunction(SC(functionName)); }
		FunctionPtr getFunction(const char* functionName) { return getFunction(SC(functionName)); }
		FunctionPtr getFunction(int functionIndex) const;

		// ***********************************************************

		void setVerboseMode();
		void setSilentMode();
		bool getVerboseMode() const;

		// ***********************************************************

		bool getRecursiveMode() const;

		// ***********************************************************

		double getComputingTime() const;

		// ***********************************************************

		FunctionPtr cloneForThreadSafe();

	protected:

		FunctionPtr clone();

	public: /* should be private */

		// 5 =========================================================================

		Function(const FunctionPtr &functionToClone, bool isThreadSafeClone, const CloneCachePtr &cloneCache) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionToClone, isThreadSafeClone, cloneCache);
			iAmFullyConstructed = true;
		}

		Function(FunctionPtr &functionToClone, bool isThreadSafeClone, CloneCachePtr &cloneCache) : PrimitiveElement(TYPE_ID) {
			executeContructor(functionToClone, isThreadSafeClone, cloneCache);
			iAmFullyConstructed = true;
		}

	private:

		// ***********************************************************

		static constexpr bool SYNTAX_STATUS_UNKNOWN = SYNTAX_ERROR;

		// ***********************************************************

		static StringPtr StringInvariantEMPTY();
		int functionBodyType = BODY_RUNTIME;
		StringPtr functionName = StringInvariantEMPTY();
		bool syntaxStatusDefinition = SYNTAX_STATUS_UNKNOWN;
		StringPtr errorMessageDefinition = StringInvariantEMPTY();
		StringPtr description = StringInvariantEMPTY();
		int parametersNumber = 0;
		FunctionExtensionPtr functionExtension = nullptr;
		FunctionExtensionVariadicPtr functionExtensionVariadic = nullptr;
		bool thisAlreadyAdded = false;

		// ***********************************************************

		static StringPtr buildErrorMessageInvalidFunctionName(const StringPtr &functionName);
		static StringPtr buildErrorMessageInvalidFunctionDefinitionString(const StringPtr &functionDefinitionString);
		static StringPtr buildErrorMessageIncorrectNumberOfFunctionParameters(const StringPtr &functionName, int expectedNumberOfParameters, int providedNumberOfParameters);

		// ***********************************************************

		void registerNoSyntaxErrorInDefinition();
		void registerSyntaxErrorInDefinition(const StringPtr &errorMessage);

		// ***********************************************************

		void addHeadTokensArguments(const ListPtr<TokenPtr> &headTokens) const;

		// ***********************************************************

		int countRecursiveArguments();

		// ***********************************************************

		// package:
		ExpressionPtr functionExpression = nullptr;
		bool isVariadic = false;
		double computingTime = 0;

		// ***********************************************************

		void checkRecursiveMode();
		void addRelatedExpression(const ExpressionPtr &expression) override;
		void removeRelatedExpression(const ExpressionPtr &expression);
		void setExpressionModifiedFlags();

		// ***********************************************************

		FunctionPtr cloneForThreadSafeInternal(const CloneCachePtr &cloneCache);
		FunctionPtr cloneForThreadSafeInternal(const ExpressionPtr &relatedExpressionThatInitiatedClone, const CloneCachePtr &cloneCache);

		// ***********************************************************
		Function() : PrimitiveElement(TYPE_ID) {};

	private:

		SERIALIZE_DERIVED(3, PrimitiveElement,
			(
				NVP(functionName)
				,NVP(functionExpression)
				,NVP(parametersNumber)
				,NVP(description)
				,NVP(syntaxStatusDefinition)
				,NVP(errorMessageDefinition)
				,NVP(functionBodyType)
				,NVP(functionExtension)
				,NVP(functionExtensionVariadic)
				,NVP(thisAlreadyAdded)
				,NVP(isVariadic)
				,NVP(computingTime)
			)
		);

	public:
		STATIC_VARS_INITI_H;
	};

	// 1 =========================================================================

	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(const StringPtr &functionName, const StringPtr &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(StringPtr &functionName, StringPtr &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(const String &functionName, const String &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(String &functionName, String &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(const std::string &functionName, const std::string &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(std::string &functionName, std::string &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(const Char *functionName, const Char *functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(const char *functionName, const char *functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	// 2 =========================================================================

	template<typename... PrimitiveElements>
	FunctionPtr new_Function(const StringPtr &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... PrimitiveElements>
	FunctionPtr new_Function(StringPtr &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... PrimitiveElements>
	FunctionPtr new_Function(const String &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... PrimitiveElements>
	FunctionPtr new_Function(String &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... PrimitiveElements>
	FunctionPtr new_Function(const std::string &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... PrimitiveElements>
	FunctionPtr new_Function(std::string &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}


	template<typename... PrimitiveElements>
	FunctionPtr new_Function(const Char *functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	template<typename... PrimitiveElements>
	FunctionPtr new_Function(const char *functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	// 3 =========================================================================

	inline FunctionPtr new_Function(const StringPtr &functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const StringPtr &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(StringPtr &functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(StringPtr &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const String &functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const String &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(String &functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(String &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const std::string &functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const std::string &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(std::string &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const Char *functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const Char *functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const char *functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const char *functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}

	// 4 =========================================================================

	inline FunctionPtr new_Function(const StringPtr &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const StringPtr &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(StringPtr &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(StringPtr &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const String &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const String &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(String &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(String &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const std::string &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const std::string &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(std::string &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(std::string &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const Char *functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const Char *functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const char *functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	inline FunctionPtr new_Function(const char *functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}

	// 5 =========================================================================


	inline FunctionPtr new_Function(const FunctionPtr &functionToClone, bool isThreadSafeClone,
	                                const CloneCachePtr &cloneCache) {
		FunctionPtr function = std::make_shared<Function>(functionToClone, isThreadSafeClone, cloneCache);
		function->postConstructorSync();
		return function;
	}

	inline FunctionPtr new_Function(FunctionPtr &functionToClone, bool isThreadSafeClone, CloneCachePtr &cloneCache) {
		FunctionPtr function = std::make_shared<Function>(functionToClone, isThreadSafeClone, cloneCache);
		function->postConstructorSync();
		return function;
	}

	// 6 =========================================================================

	inline FunctionPtr new_Function(const StringPtr &functionName, const StringPtr &functionExpressionString,
	                                const ListPtr<StringPtr> &argumentsNames) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString, argumentsNames);
		function->postConstructorSync();
		return function;
	}

	inline FunctionPtr new_Function(StringPtr &functionName, StringPtr &functionExpressionString,
	                                ListPtr<StringPtr> &argumentsNames) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString, argumentsNames);
		function->postConstructorSync();
		return function;
	}

} // namespace org::mariuszgromada::math::mxparser

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_FUNCTION_H
