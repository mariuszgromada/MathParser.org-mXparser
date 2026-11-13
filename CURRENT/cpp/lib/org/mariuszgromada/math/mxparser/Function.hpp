/*
 * @(#)Function.hpp        6.2.0    2026-11-13
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
#include <stdexcept>

namespace org::mariuszgromada::math::mxparser {

	USING_FRIENDS_NAMESPACES;

	class API_VISIBLE Function : public PrimitiveElement {
		ADD_FRIENDS_OF(Function);
		friend struct OwnershipTestAccess;

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
		/**
		 * \brief Calculates function value and registers all the calculation steps
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * \return Function value as double.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::Function::calculate()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		double calculateWithCancel(int cancelId);

		Function(const Function& other) noexcept;
		Function(Function&& other) noexcept;
		Function& operator=(const Function& other) noexcept;
		Function& operator=(Function&& other) noexcept;


		// ***********************************************************
		// ********************** CONSTRUCTORS ***********************
		// ***********************************************************

		// 1 =========================================================================

		/**
		 * \brief Constructor - creates function from function name
		 * and function expression string.
		 * \param functionName              the function name
		 * \param functionExpressionString  the function expression string
		 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... StringsOrPrimitiveElements>
		Function(const StringPtr &functionName, const StringPtr &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPE(functionName, functionExpressionString, std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates function from function name
		 * and function expression string.
		 * \param functionName              the function name
		 * \param functionExpressionString  the function expression string
		 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... StringsOrPrimitiveElements>
		Function(StringPtr &functionName, StringPtr &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorPPE(functionName, functionExpressionString, std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates function from function name
		 * and function expression string.
		 * \param functionName              the function name
		 * \param functionExpressionString  the function expression string
		 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... StringsOrPrimitiveElements>
		Function(const String &functionName, const String &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstSSE(functionName, functionExpressionString, std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates function from function name
		 * and function expression string.
		 * \param functionName              the function name
		 * \param functionExpressionString  the function expression string
		 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... StringsOrPrimitiveElements>
		Function(String &functionName, String &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorSSE(functionName, functionExpressionString, std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates function from function name
		 * and function expression string.
		 * \param functionName              the function name
		 * \param functionExpressionString  the function expression string
		 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... StringsOrPrimitiveElements>
		Function(const std::string &functionName, const std::string &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPE(S(functionName), S(functionExpressionString), std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates function from function name
		 * and function expression string.
		 * \param functionName              the function name
		 * \param functionExpressionString  the function expression string
		 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... StringsOrPrimitiveElements>
		Function(std::string &functionName, std::string &functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPE(S(functionName), S(functionExpressionString), std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates function from function name
		 * and function expression string.
		 * \param functionName              the function name
		 * \param functionExpressionString  the function expression string
		 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... StringsOrPrimitiveElements>
		Function(const Char *functionName, const Char *functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPE(S(functionName), S(functionExpressionString), std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates function from function name
		 * and function expression string.
		 * \param functionName              the function name
		 * \param functionExpressionString  the function expression string
		 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... StringsOrPrimitiveElements>
		Function(const char *functionName, const char *functionExpressionString, StringsOrPrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPE(S(functionName), S(functionExpressionString), std::forward<StringsOrPrimitiveElements>(elements)...);
			iAmFullyConstructed = true;
		}

		// 2 =========================================================================

		/**
		 * \brief Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 * \param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * \param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Function(const StringPtr &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(functionDefinitionString, FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 * \param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * \param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Function(StringPtr &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorPE(functionDefinitionString, FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 * \param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * \param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Function(const String &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstSE(functionDefinitionString, FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 * \param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * \param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Function(String &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorSE(functionDefinitionString, FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 * \param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * \param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Function(const std::string &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(functionDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 * \param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * \param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Function(std::string &functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(functionDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 * \param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * \param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Function(const Char *functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(functionDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 * \param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * \param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Function(const char *functionDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(functionDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		// 3 =========================================================================

		/**
		 * \brief Constructor for function definition based on
		 * your own source code - this is via implementation
		 * of FunctionExtension interface.
		 * \param functionName       Function name
		 * \param functionExtension  Your own source code
		 */
		Function(const StringPtr &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(const StringPtr &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(StringPtr &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(StringPtr &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(const String &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(const String &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(String &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(String &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructor(functionName, functionExtension);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(const std::string &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(const std::string &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(std::string &functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(std::string &functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(const Char *functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(const Char *functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(const char *functionName, const FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionPtr &)
		 */
		Function(const char *functionName, FunctionExtensionPtr &functionExtension) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtension);
			iAmFullyConstructed = true;
		}

		// 4 =========================================================================

		/**
		 * \brief Constructor for function definition based on
		 * your own source code - this is via implementation
		 * of FunctionExtensionVariadic interface.
		 * \param functionName       Function name
		 * \param functionExtensionVariadic  Your own source code
		 */
		Function(const StringPtr &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(const StringPtr &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(StringPtr &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(StringPtr &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructor(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(const String &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(const String &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(String &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(String &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructor(functionName, functionExtensionVariadic);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(const std::string &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(const std::string &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(std::string &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(std::string &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(const Char *functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(const Char *functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(const char *functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
		 */
		Function(const char *functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(functionName), functionExtensionVariadic);
			iAmFullyConstructed = true;
		}

		// 6 =========================================================================

		/**
		 * \brief Constructor - creates function from function name,
		 * function expression string and argument names.
		 * \param functionName              the function name
		 * \param functionExpressionString  the function expression string
		 * \param argumentsNames            the arguments names (variadic parameters)
		 *                                       comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 */
		Function(const StringPtr &functionName, const StringPtr &functionExpressionString, const ListPtr<StringPtr> &argumentsNames) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPPL(functionName, functionExpressionString, argumentsNames);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::Function(const StringPtr &,const StringPtr &,const ListPtr< StringPtr > &)
		 */
		Function(StringPtr &functionName, StringPtr &functionExpressionString, ListPtr<StringPtr> &argumentsNames) : PrimitiveElement(TYPE_ID) {
			executeContructorPPL(functionName, functionExpressionString, argumentsNames);
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		// @Deprecated
		/**
		 * \brief Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 * \param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * \param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::Function::addFunctions, \ref org::mariuszgromada::math::mxparser::Function::addDefinitions instead
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		void setFunction(const StringPtr &functionDefinitionString, PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_NOT_NULL_VARIADIC(VariadicProcessorUdfs, elements,
				setFunction, functionDefinitionString
			);
		}

		// @Deprecated
		/**
		 * \brief Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 * \param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * \param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::Function::addFunctions, \ref org::mariuszgromada::math::mxparser::Function::addDefinitions instead
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		void setFunction(const String &functionDefinitionString, PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_NOT_NULL_VARIADIC(VariadicProcessorUdfs, elements,
				setFunction, functionDefinitionString
			);
		}

		// @Deprecated
		/**
		 * \brief Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 * \param functionDefinitionString      Function definition in the form
		 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
		 * \param elements                      Optional elements list (variadic - comma separated)
		 *                                      of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::Function::addFunctions, \ref org::mariuszgromada::math::mxparser::Function::addDefinitions instead
		 */
		void setFunction(const StringPtr &functionDefinitionString, const ListPtr<PrimitiveElementPtr> &elements);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::setFunction(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
		 */
		void setFunction(const StringPtr &functionDefinitionString, ListPtr<PrimitiveElementPtr> &elements) {
			setFunction(functionDefinitionString, CONST_LIST_PRIMITIVE_ELEMENT(elements));
		}

		// @Deprecated
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::setFunction(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
		 */
		void setFunction(const String &functionDefinitionString, const ListPtr<PrimitiveElementPtr> &elements) {
			setFunction(S(functionDefinitionString), elements);
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::setFunction(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
		 */
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

		/**
		 * \brief Calculates function value
		 * \param parameters              the function parameters values (as doubles)
		 * \return function value as double.
		 */
		double calculate(const ListPtr<double> &parameters);
		/**
		 * \brief Calculates function value
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * \param parameters              the function parameters values (as doubles)
		 * \return function value as double.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::Function::calculate
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		double calculateWithCancel(const ListPtr<double> &parameters, int cancelId);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::calculate(const ListPtr< double > &)
		 */
		double calculate(ListPtr<double> &parameters) { return calculate(CONST_LIST_DOUBLE(parameters)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::calculateWithCancel(const ListPtr< double > &,int)
		 */
		double calculateWithCancel(ListPtr<double> &parameters, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return calculateWithCancel(CONST_LIST_DOUBLE(parameters), cancelId);
		}
		/**
		 * \brief Calculates function value
		 * \param parameters   function parameters (as Arguments)
		 * \return function value as double
		 */
		double calculate(const ListPtr<ArgumentPtr> &parameters);
		/**
		 * \brief Calculates function value
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * \param parameters   function parameters (as Arguments)
		 * \return function value as double
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::Function::calculate
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		double calculateWithCancel(const ListPtr<ArgumentPtr> &parameters, int cancelId);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::calculate(const ListPtr< ArgumentPtr > &)
		 */
		double calculate(ListPtr<ArgumentPtr> &parameters) { return calculate(CONST_LIST_ARGUMENT(parameters)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::calculateWithCancel(const ListPtr< ArgumentPtr > &,int)
		 */
		double calculateWithCancel(ListPtr<ArgumentPtr> &parameters, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return calculateWithCancel(CONST_LIST_ARGUMENT(parameters), cancelId);
		}

		// ***********************************************************

		/**
		 * \brief Adds user defined elements (such as: Arguments, Constants, Functions)
		 * to the function expressions.
		 * \param elements Elements list (variadic), where Argument, Constant, Function
		 *                 extend the same class PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		void addDefinitions(PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorUdfs, elements, addDefinitions);
		}
		/**
		 * \brief Adds user defined elements (such as: Arguments, Constants, Functions)
		 * to the function expressions.
		 * \param elements Elements list (variadic), where Argument, Constant, Function
		 *                 extend the same class PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void addDefinitions(const ListPtr<PrimitiveElementPtr> &elements);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::addDefinitions(const ListPtr< PrimitiveElementPtr > &)
		 */
		void addDefinitions(ListPtr<PrimitiveElementPtr> &elements) { addDefinitions(CONST_LIST_PRIMITIVE_ELEMENT(elements)); }
		/**
		 * \brief Adds user defined elements (such as: Arguments, Constants, Functions)
		 * to the function expressions.
		 * \param element Elements list (variadic), where Argument, Constant, Function
		 *                 extend the same class PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void addDefinitions(const PrimitiveElementPtr &element);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::addDefinitions(const PrimitiveElementPtr &)
		 */
		void addDefinitions(PrimitiveElementPtr &element) { addDefinitions(CONST_PRIMITIVE_ELEMENT(element)); }

		// ***********************************************************

		/**
		 * \brief Removes user defined elements (such as: Arguments, Constants, Functions)
		 * from the function expressions.
		 * \param elements Elements list (variadic), where Argument, Constant, Function
		 *                 extend the same class PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		void removeDefinitions(PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorUdfs, elements, removeDefinitions);
		}
		/**
		 * \brief Removes user defined elements (such as: Arguments, Constants, Functions)
		 * from the function expressions.
		 * \param elements Elements list (variadic), where Argument, Constant, Function
		 *                 extend the same class PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void removeDefinitions(const ListPtr<PrimitiveElementPtr> &elements);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeDefinitions(const ListPtr< PrimitiveElementPtr > &)
		 */
		void removeDefinitions(ListPtr<PrimitiveElementPtr> &elements) { removeDefinitions(CONST_LIST_PRIMITIVE_ELEMENT(elements)); }
		/**
		 * \brief Removes user defined elements (such as: Arguments, Constants, Functions)
		 * from the function expressions.
		 * \param element Elements list (variadic), where Argument, Constant, Function
		 *                 extend the same class PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void removeDefinitions(const PrimitiveElementPtr &element);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeDefinitions(const PrimitiveElementPtr &)
		 */
		void removeDefinitions(PrimitiveElementPtr &element) { removeDefinitions(CONST_PRIMITIVE_ELEMENT(element)); }

		// ***********************************************************

		/**
		 * \brief Adds arguments (variadic) to the function expression definition.
		 * \param arguments           the arguments list
		 *                                 (comma separated list)
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 * \tparam Arguments Types of the forwarded arguments.
		 */
		template<typename... Arguments>
		void addArguments(Arguments &&... arguments) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorArgument, arguments, addArguments);
		}
		/**
		 * \brief Adds arguments (variadic) to the function expression definition.
		 * \param arguments           the arguments list
		 *                                 (comma separated list)
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void addArguments(const ListPtr<ArgumentPtr> &arguments);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::addArguments(const ListPtr< ArgumentPtr > &)
		 */
		void addArguments(ListPtr<ArgumentPtr> &arguments) { addArguments(CONST_LIST_ARGUMENT(arguments)); }
		/**
		 * \brief Adds arguments (variadic) to the function expression definition.
		 * \param argument           the arguments list
		 *                                 (comma separated list)
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void addArguments(const ArgumentPtr &argument);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::addArguments(const ArgumentPtr &)
		 */
		void addArguments(ArgumentPtr &argument) { addArguments(CONST_ARGUMENT(argument)); }

		// ***********************************************************

		/**
		 * \brief Enables to define the arguments (associated with
		 * the function expression) based on the given arguments names.
		 * \param argumentsNames      the arguments names (variadic)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 * \tparam Strings Types of the forwarded arguments.
		 */
		template<typename... Strings>
		void defineArguments(Strings &&... argumentsNames) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorString, argumentsNames, defineArguments);
		}
		/**
		 * \brief Enables to define the arguments (associated with
		 * the function expression) based on the given arguments names.
		 * \param argumentsNames      the arguments names (variadic)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void defineArguments(const ListPtr<StringPtr> &argumentsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::defineArguments(const ListPtr< StringPtr > &)
		 */
		void defineArguments(ListPtr<StringPtr> &argumentsNames) { defineArguments(CONST_LIST_STRING(argumentsNames)); }
		/**
		 * \brief Enables to define the arguments (associated with
		 * the function expression) based on the given arguments names.
		 * \param argumentName      the arguments names (variadic)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void defineArguments(const StringPtr &argumentName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::defineArguments(const StringPtr &)
		 */
		void defineArguments(StringPtr &argumentName) { defineArguments(CONST_STRING_PTR(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::defineArguments(const StringPtr &)
		 */
		void defineArguments(const String &argumentName) { defineArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::defineArguments(const StringPtr &)
		 */
		void defineArguments(const Char *argumentName) { defineArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::defineArguments(const StringPtr &)
		 */
		void defineArguments(const std::string &argumentName) { defineArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::defineArguments(const StringPtr &)
		 */
		void defineArguments(const char *argumentName) { defineArguments(S(argumentName)); }

		// ***********************************************************

		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the function expression.
		 * \param arguments           the arguments (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 * \tparam StringsOrArguments Types of the forwarded arguments.
		 */
		template<typename... StringsOrArguments>
		void removeArguments(StringsOrArguments &&... arguments) {
			EXECUTE_FUNCTION_VARIADIC_WITH_STRING(VariadicProcessorStringOrArgument, arguments, removeArguments);
		}
		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the function expression.
		 * \param argumentsNames      the arguments names
		 *                                 (variadic parameters) comma separated
		 *                                 list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const ListPtr<StringPtr> &argumentsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeArguments(const ListPtr< StringPtr > &)
		 */
		void removeArguments(ListPtr<StringPtr> &argumentsNames) { removeArguments(CONST_LIST_STRING(argumentsNames)); }
		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the function expression.
		 * \param argumentName      the arguments names
		 *                                 (variadic parameters) comma separated
		 *                                 list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const StringPtr &argumentName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeArguments(const StringPtr &)
		 */
		void removeArguments(StringPtr &argumentName) { removeArguments(CONST_STRING_PTR(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeArguments(const StringPtr &)
		 */
		void removeArguments(const String &argumentName) { removeArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeArguments(const StringPtr &)
		 */
		void removeArguments(const Char *argumentName) { removeArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeArguments(const StringPtr &)
		 */
		void removeArguments(const std::string &argumentName) { removeArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeArguments(const StringPtr &)
		 */
		void removeArguments(const char *argumentName) { removeArguments(S(argumentName)); }
		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the function expression.
		 * \param arguments           the arguments (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const ListPtr<ArgumentPtr> &arguments);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeArguments(const ListPtr< ArgumentPtr > &)
		 */
		void removeArguments(ListPtr<ArgumentPtr> &arguments) { removeArguments(CONST_LIST_ARGUMENT(arguments)); }
		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the function expression.
		 * \param argument           the arguments (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const ArgumentPtr &argument);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeArguments(const ArgumentPtr &)
		 */
		void removeArguments(ArgumentPtr &argument) { removeArguments(CONST_ARGUMENT(argument)); }

		// ***********************************************************

		/**
		 * \brief Removes all arguments associated with the function expression.
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeAllArguments();

		// ***********************************************************

		/**
		 * \brief Adds constants (variadic parameters) to the function expression definition.
		 * \param constants           the constants
		 *                                 (comma separated list)
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 * \tparam Constants Types of the forwarded arguments.
		 */
		template<typename... Constants>
		void addConstants(Constants &&... constants) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorConstant, constants, addConstants);
		}
		/**
		 * \brief Adds constants to the function expression definition.
		 * \param constants       the list of constants
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void addConstants(const ListPtr<ConstantPtr> &constants);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::addConstants(const ListPtr< ConstantPtr > &)
		 */
		void addConstants(ListPtr<ConstantPtr> &constants) { addConstants(CONST_LIST_CONSTANT(constants)); }
		/**
		 * \brief Adds constants (variadic parameters) to the function expression definition.
		 * \param constant           the constants
		 *                                 (comma separated list)
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void addConstants(const ConstantPtr &constant);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::addConstants(const ConstantPtr &)
		 */
		void addConstants(ConstantPtr &constant) { addConstants(CONST_CONSTANT(constant)); }

		// ***********************************************************

		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the function expression
		 * \param constants           the constants (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 * \tparam StringsOrConstants Types of the forwarded arguments.
		 */
		template<typename... StringsOrConstants>
		void removeConstants(StringsOrConstants &&... constants) {
			EXECUTE_FUNCTION_VARIADIC_WITH_STRING(VariadicProcessorStringOrConstant, constants, removeConstants);
		}
		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the function expression.
		 * \param constantsNames      the constants names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const ListPtr<StringPtr> &constantsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeConstants(const ListPtr< StringPtr > &)
		 */
		void removeConstants(ListPtr<StringPtr> &constantsNames) { removeConstants(CONST_LIST_STRING(constantsNames)); }
		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the function expression.
		 * \param constantName      the constants names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const StringPtr &constantName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeConstants(const StringPtr &)
		 */
		void removeConstants(StringPtr &constantName) { removeConstants(CONST_STRING_PTR(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeConstants(const StringPtr &)
		 */
		void removeConstants(const String &constantName) { removeConstants(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeConstants(const StringPtr &)
		 */
		void removeConstants(const Char *constantName) { removeConstants(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeConstants(const StringPtr &)
		 */
		void removeConstants(const std::string &constantName) { removeConstants(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeConstants(const StringPtr &)
		 */
		void removeConstants(const char *constantName) { removeConstants(S(constantName)); }
		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the function expression
		 * \param constants           the constants (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const ListPtr<ConstantPtr> &constants);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeConstants(const ListPtr< ConstantPtr > &)
		 */
		void removeConstants(ListPtr<ConstantPtr> &constants) { removeConstants(CONST_LIST_CONSTANT(constants)); }
		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the function expression
		 * \param constant           the constants (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const ConstantPtr &constant);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeConstants(const ConstantPtr &)
		 */
		void removeConstants(ConstantPtr &constant) { removeConstants(CONST_CONSTANT(constant)); }

		// ***********************************************************

		/**
		 * \brief Removes all constants
		 * associated with the function expression
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeAllConstants();

		// ***********************************************************

		/**
		 * \brief Adds functions (variadic parameters) to the function expression definition.
		 * \param functions           the functions
		 *                                 (variadic parameters) comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 * \tparam Functions Types of the forwarded arguments.
		 */
		template<typename... Functions>
		void addFunctions(Functions &&... functions) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorFunction, functions, addFunctions);
		}
		/**
		 * \brief Adds functions (variadic parameters) to the function expression definition.
		 * \param functions           the functions
		 *                                 (variadic parameters) comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void addFunctions(const ListPtr<FunctionPtr> &functions);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::addFunctions(const ListPtr< FunctionPtr > &)
		 */
		void addFunctions(ListPtr<FunctionPtr> &functions) { addFunctions(CONST_LIST_FUNCTION(functions)); }
		/**
		 * \brief Adds functions (variadic parameters) to the function expression definition.
		 * \param function           the functions
		 *                                 (variadic parameters) comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void addFunctions(const FunctionPtr &function);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::addFunctions(const FunctionPtr &)
		 */
		void addFunctions(FunctionPtr &function) { addFunctions(CONST_FUNCTION(function)); }

		// ***********************************************************

		/**
		 * \brief Enables to define the function (associated with
		 * the function expression) based on the function name,
		 * function expression string and arguments names (variadic parameters).
		 * \param functionName                  the function name
		 * \param functionExpressionString      the expression string
		 * \param argumentsNames                the function arguments names
		 *                                           (variadic parameters)
		 *                                           comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 * \tparam Strings Types of the forwarded arguments.
		 */
		template<typename... Strings>
		void defineFunction(const StringPtr &functionName, const StringPtr &functionExpressionString, Strings &&... argumentsNames) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorString, argumentsNames,
				defineFunction, functionName, functionExpressionString
			);
		}

		/**
		 * \brief Enables to define the function (associated with
		 * the function expression) based on the function name,
		 * function expression string and arguments names (variadic parameters).
		 * \param functionName                  the function name
		 * \param functionExpressionString      the expression string
		 * \param argumentsNames                the function arguments names
		 *                                           (variadic parameters)
		 *                                           comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 * \tparam Strings Types of the forwarded arguments.
		 */
		template<typename... Strings>
		void defineFunction(const String &functionName, const String &functionExpressionString, Strings &&... argumentsNames) {
			defineFunction(S(functionName), S(functionExpressionString), FORWARD_STRING(argumentsNames)...);
		}
		/**
		 * \brief Enables to define the function (associated with
		 * the function expression) based on the function name,
		 * function expression string and arguments names (variadic parameters).
		 * \param functionName                  the function name
		 * \param functionExpressionString      the expression string
		 * \param argumentsNames                the function arguments names
		 *                                           (variadic parameters)
		 *                                           comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void defineFunction(const StringPtr &functionName, const StringPtr &functionExpressionString, const ListPtr<StringPtr> &argumentsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::defineFunction(const StringPtr &,const StringPtr &,const ListPtr< StringPtr > &)
		 */
		void defineFunction(const StringPtr &functionName, const StringPtr &functionExpressionString, ListPtr<StringPtr> &argumentsNames) {
			defineFunction(functionName, functionExpressionString, CONST_LIST_STRING(argumentsNames));
		}

		// ***********************************************************

		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the function expression.
		 * \param functions           the functions (variadic parameters)
		 *                                 comma separated list.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 * \tparam StringsOrFunctions Types of the forwarded arguments.
		 */
		template<typename... StringsOrFunctions>
		void removeFunctions(StringsOrFunctions &&... functions) {
			EXECUTE_FUNCTION_VARIADIC_WITH_STRING(VariadicProcessorStringOrFunction, functions, removeFunctions);
		}
		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the function expression.
		 * \param functionsNames      the functions names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const ListPtr<StringPtr> &functionsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeFunctions(const ListPtr< StringPtr > &)
		 */
		void removeFunctions(ListPtr<StringPtr> &functionsNames) { removeFunctions(CONST_LIST_STRING(functionsNames)); }
		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the function expression.
		 * \param functionName      the functions names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const StringPtr &functionName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeFunctions(const StringPtr &)
		 */
		void removeFunctions(StringPtr &functionName) { removeFunctions(CONST_STRING_PTR(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeFunctions(const StringPtr &)
		 */
		void removeFunctions(const String &functionName) { removeFunctions(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeFunctions(const StringPtr &)
		 */
		void removeFunctions(const Char *functionName) { removeFunctions(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeFunctions(const StringPtr &)
		 */
		void removeFunctions(const std::string &functionName) { removeFunctions(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeFunctions(const StringPtr &)
		 */
		void removeFunctions(const char *functionName) { removeFunctions(S(functionName)); }
		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the function expression.
		 * \param functions           the functions (variadic parameters)
		 *                                 comma separated list.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const ListPtr<FunctionPtr> &functions);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeFunctions(const ListPtr< FunctionPtr > &)
		 */
		void removeFunctions(ListPtr<FunctionPtr> &functions) { removeFunctions(CONST_LIST_FUNCTION(functions)); }
		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the function expression.
		 * \param function           the functions (variadic parameters)
		 *                                 comma separated list.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const FunctionPtr &function);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::removeFunctions(const FunctionPtr &)
		 */
		void removeFunctions(FunctionPtr &function) { removeFunctions(CONST_FUNCTION(function)); }

		// ***********************************************************

		/**
		 * \brief Removes all functions
		 * associated with the function expression.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeAllFunctions();

		// ***********************************************************

		static constexpr int TYPE_ID = 103;
		static StringPtr TYPE_DESC;

		// ***********************************************************

		/**
		 * \brief Status of the syntax - no syntax error
		 */
		static constexpr bool NO_SYNTAX_ERRORS = Expression::NO_SYNTAX_ERRORS;
		/**
		 * \brief Status of the syntax - syntax error or syntax status unknown
		 */
		static constexpr bool SYNTAX_ERROR = Expression::SYNTAX_ERROR;
		/**
		 * \brief Status of the syntax - syntax error or syntax status unknown
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::Function::SYNTAX_ERROR instead
		 */
		// @Deprecated
		static constexpr bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;
		/**
		 * \brief When function was not found
		 */
		static constexpr int NOT_FOUND = Expression::NOT_FOUND;
		/**
		 * \brief Function with body based on the expression string.
		 * \sa org::mariuszgromada::math::mxparser::Function::getFunctionBodyType()
		 */
		static constexpr int BODY_RUNTIME = 1;
		/**
		 * \brief Function with body based on the extended code.
		 * \sa org::mariuszgromada::math::mxparser::FunctionExtension
		 * \sa org::mariuszgromada::math::mxparser::Function::getFunctionBodyType()
		 */
		static constexpr int BODY_EXTENDED = 2;

		// ***********************************************************

		/**
		 * \brief Sets function description.
		 * \param description         the function description
		 */
		void setDescription(const StringPtr &description);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::setDescription(const StringPtr &)
		 */
		void setDescription(const String &description) { setDescription(S(description)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::setDescription(const StringPtr &)
		 */
		void setDescription(const std::string &description) { setDescription(SC(description)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::setDescription(const StringPtr &)
		 */
		void setDescription(const Char* description) { setDescription(SC(description)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::setDescription(const StringPtr &)
		 */
		void setDescription(const char* description) { setDescription(SC(description)); }

		// ***********************************************************

		/**
		 * \brief Gets function description
		 * \return Function description as string
		 */
		StringPtr getDescription() const;

		// ***********************************************************

		/**
		 * \brief Sets function name.
		 * \param functionName        the function name
		 */
		void setFunctionName(const StringPtr &functionName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::setFunctionName(const StringPtr &)
		 */
		void setFunctionName(const String &functionName) { setFunctionName(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::setFunctionName(const StringPtr &)
		 */
		void setFunctionName(const std::string &functionName) { setFunctionName(SC(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::setFunctionName(const StringPtr &)
		 */
		void setFunctionName(const Char* functionName) { setFunctionName(SC(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::setFunctionName(const StringPtr &)
		 */
		void setFunctionName(const char* functionName) { setFunctionName(SC(functionName)); }

		// ***********************************************************

		/**
		 * \brief Gets function name.
		 * \return Function name as string.
		 */
		StringPtr getFunctionName() const;

		// ***********************************************************

		/**
		 * \brief Gets function expression string
		 * \return Function expression as string.
		 */
		StringPtr getFunctionExpressionString() const;

		// ***********************************************************

		/**
		 * \brief Sets value of function argument (function parameter).
		 * \param argumentIndex   the argument index (in accordance to
		 *                             arguments declaration sequence)
		 * \param argumentValue   the argument value
		 */
		void setArgumentValue(int argumentIndex, double argumentValue);

		// ***********************************************************

		/**
		 * \brief Returns function body type: \ref org::mariuszgromada::math::mxparser::Function::BODY_RUNTIME \ref org::mariuszgromada::math::mxparser::Function::BODY_EXTENDED
		 * \return Returns function body type: \ref org::mariuszgromada::math::mxparser::Function::BODY_RUNTIME \ref org::mariuszgromada::math::mxparser::Function::BODY_EXTENDED
		 */
		int getFunctionBodyType() const;

		// ***********************************************************

		/**
		 * \brief Checks function syntax
		 * \return syntax status: Function.NO_SYNTAX_ERRORS,
		 *                            Function.SYNTAX_ERROR
		 */
		bool checkSyntax();
		/**
		 * \brief Returns error message after checking the syntax.
		 * \return Error message as string.
		 */
		StringPtr getErrorMessage() const;

		// ***********************************************************

		/**
		 * \brief Calculates function value
		 * \return Function value as double.
		 */
		double calculate();
		/**
		 * \brief Calculates function value and registers all the calculation steps
		 * \param calcStepsRegister A collection to store list of calculation steps,
		 *                          steps registered as strings.
		 * \return Function value as double.
		 */
		double calculate(const CalcStepsRegisterPtr &calcStepsRegister);
		/**
		 * \brief Calculates function value and registers all the calculation steps
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * \param calcStepsRegister A collection to store list of calculation steps,
		 *                          steps registered as strings.
		 * \return Function value as double.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::Function::calculate
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		double calculateWithCancel(const CalcStepsRegisterPtr &calcStepsRegister, int cancelId);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::calculate(const CalcStepsRegisterPtr &)
		 */
		double calculate(CalcStepsRegisterPtr &calcStepsRegister) {
			return calculate(CONST_CALC_STEPS_REGISTER(calcStepsRegister));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::calculateWithCancel(const CalcStepsRegisterPtr &,int)
		 */
		double calculateWithCancel(CalcStepsRegisterPtr &calcStepsRegister, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return calculateWithCancel(CONST_CALC_STEPS_REGISTER(calcStepsRegister), cancelId);
		}

		// ***********************************************************

		/**
		 * \brief Enables to define the argument (associated with the function expression)
		 * based on the argument name and the argument value.
		 * \param argumentName        the argument name
		 * \param argumentValue       the argument value
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void defineArgument(const StringPtr &argumentName, double argumentValue);

		// ***********************************************************

		/**
		 * \brief Gets argument index from the function expression.
		 * \param argumentName        the argument name
		 * \return The argument index if the argument name was found,
		 *             otherwise returns Argument.NOT_FOUND
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		int getArgumentIndex(const StringPtr &argumentName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const String &argumentName) { return getArgumentIndex(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const std::string &argumentName) { return getArgumentIndex(SC(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const Char* argumentName) { return getArgumentIndex(SC(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const char* argumentName) { return getArgumentIndex(SC(argumentName)); }

		// ***********************************************************

		/**
		 * \brief Gets argument from the function expression.
		 * \param argumentName        the argument name
		 * \return The argument if the argument name was found,
		 *             otherwise returns null.
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		ArgumentPtr getArgument(const StringPtr &argumentName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const String &argumentName) { return getArgument(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const std::string &argumentName) { return getArgument(SC(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const Char* argumentName) { return getArgument(SC(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const char* argumentName) { return getArgument(SC(argumentName)); }
		/**
		 * \brief Gets argument from the function expression.
		 * \param argumentIndex       the argument index
		 * \return Argument if the argument index is between 0 and
		 *             the last available argument index (getArgumentsNumber()-1),
		 *             otherwise returns null.
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		ArgumentPtr getArgument(int argumentIndex) const;

		// ***********************************************************

		/**
		 * \brief Gets number of parameters associated with the function expression.
		 * \return The number of function parameters (int &gt;= 0)
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		int getParametersNumber() const;
		/**
		 * \brief Set parameters number.
		 * \param parametersNumber    the number of function parameters (default = number of arguments
		 *                                 (lower number might be specified).
		 */
		void setParametersNumber(int parametersNumber);
		/**
		 * \brief Gets user defined function parameter name
		 * \param parameterIndex  Parameter index between 0 and n-1
		 * \return If parameter exists returns parameters name, otherwise empty string is returned.
		 */
		StringPtr getParameterName(int parameterIndex) const;
		/**
		 * \brief Gets number of arguments associated with the function expression.
		 * \return The number of arguments (int &gt;= 0)
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		int getArgumentsNumber() const;

		// ***********************************************************

		/**
		 * \brief Enables to define the constant (associated with
		 * the function expression) based on the constant name and
		 * constant value.
		 * \param constantName        the constant name
		 * \param constantValue       the constant value
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void defineConstant(const StringPtr &constantName, double constantValue);

		// ***********************************************************

		/**
		 * \brief Gets constant index associated with the function expression.
		 * \param constantName        the constant name
		 * \return Constant index if constant name was found,
		 *             otherwise return Constant.NOT_FOUND.
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		int getConstantIndex(const StringPtr &constantName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const String &constantName) { return getConstantIndex(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const std::string &constantName) { return getConstantIndex(SC(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const Char* constantName) { return getConstantIndex(SC(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const char* constantName) { return getConstantIndex(SC(constantName)); }

		// ***********************************************************

		/**
		 * \brief Gets constant associated with the function expression.
		 * \param constantName        the constant name
		 * \return Constant if constant name was found,
		 *             otherwise return null.
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		ConstantPtr getConstant(const StringPtr &constantName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const String &constantName) { return getConstant(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const std::string &constantName) { return getConstant(SC(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const Char* constantName) { return getConstant(SC(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const char* constantName) { return getConstant(SC(constantName)); }
		/**
		 * \brief Gets constant associated with the function expression.
		 * \param constantIndex       the constant index
		 * \return Constant if the constantIndex is between
		 *             0 and the last available constant index
		 *             (getConstantsNumber() - 1),
		 *             otherwise it returns null.
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		ConstantPtr getConstant(int constantIndex) const;

		// ***********************************************************

		/**
		 * \brief Gets number of constants associated with the function expression.
		 * \return number of constants (int &gt;= 0)
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		int getConstantsNumber() const;

		// ***********************************************************

		/**
		 * \brief Gets index of function associated with the function expression.
		 * \param functionName        the function name
		 * \return Function index if function name was found,
		 *             otherwise returns Function.NOT_FOUND
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		int getFunctionIndex(const StringPtr &functionName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const String &functionName) { return getFunctionIndex(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const std::string &functionName) { return getFunctionIndex(SC(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const Char* functionName) { return getFunctionIndex(SC(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const char* functionName) { return getFunctionIndex(SC(functionName)); }

		// ***********************************************************

		/**
		 * \brief Gets number of functions associated with the function expression.
		 * \return number of functions (int &gt;= 0)
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		int getFunctionsNumber();

		// ***********************************************************

		/**
		 * \brief Gets function associated with the function expression.
		 * \param functionName        the function name
		 * \return Function if function name was found,
		 *             otherwise returns null.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		FunctionPtr getFunction(const StringPtr &functionName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const String &functionName) { return getFunction(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const std::string &functionName) { return getFunction(SC(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const Char* functionName) { return getFunction(SC(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Function::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const char* functionName) { return getFunction(SC(functionName)); }
		/**
		 * \brief Gets function associated with the function expression.
		 * \param functionIndex the function index
		 * \return Function if function index is between 0 and
		 *             the last available function index (getFunctionsNumber()-1),
		 *             otherwise returns null.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		FunctionPtr getFunction(int functionIndex) const;

		// ***********************************************************

		/**
		 * \brief Enables verbose function mode
		 */
		void setVerboseMode();
		/**
		 * \brief Disables function verbose mode (sets default silent mode)
		 */
		void setSilentMode();
		/**
		 * \brief Returns verbose mode status
		 * \return true if verbose mode is on,
		 *             otherwise returns false
		 */
		bool getVerboseMode() const;

		// ***********************************************************

		/**
		 * \brief Gets recursive mode status
		 * \return true if recursive mode is enabled,
		 *             otherwise returns false
		 */
		bool getRecursiveMode() const;

		// ***********************************************************

		/**
		 * \brief Gets computing time
		 * \return computing time in seconds.
		 */
		double getComputingTime() const;

		// ***********************************************************

		/**
		 * \brief Creates a completely independent 1-1 clone that can be safely used
		 * by a separate thread. If the cloned element contains references
		 * to other elements (e.g. arguments, functions, constants),
		 * then they will also be cloned and the newly created element will
		 * contain references to the corresponding clones.
		 * Important - the API allows you to extract all these clones.
		 * \return Cloned object.
		 */
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
		void restoreSelfReferenceOwnership();
		void refreshSelfReferencePin();
		std::shared_ptr<wrapper::List<FunctionPtr>::SelfPin> sharedBodySelfOwnerKeepAlive;
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

		SERIALIZE_DERIVED_POST_LOAD(3, PrimitiveElement,
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
			), restoreSelfReferenceOwnership()
		);

	public:
		STATIC_VARS_INITI_H;
	private:
		double calculateCoreWithCancel(const CalcStepsRegisterPtr &calcStepsRegister, int cancelId);
		double calculateCoreWithCancel(const ListPtr<double> &parameters, int cancelId);
		double calculateCoreWithCancel(const ListPtr<ArgumentPtr> &parameters, int cancelId);

	};

	// 1 =========================================================================

	/**
	 * \brief Constructor - creates function from function name
	 * and function expression string.
	 * \param functionName              the function name
	 * \param functionExpressionString  the function expression string
	 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \return A shared pointer to the new Function instance.
	 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(const StringPtr &functionName, const StringPtr &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor - creates function from function name
	 * and function expression string.
	 * \param functionName              the function name
	 * \param functionExpressionString  the function expression string
	 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \return A shared pointer to the new Function instance.
	 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(StringPtr &functionName, StringPtr &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor - creates function from function name
	 * and function expression string.
	 * \param functionName              the function name
	 * \param functionExpressionString  the function expression string
	 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \return A shared pointer to the new Function instance.
	 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(const String &functionName, const String &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor - creates function from function name
	 * and function expression string.
	 * \param functionName              the function name
	 * \param functionExpressionString  the function expression string
	 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \return A shared pointer to the new Function instance.
	 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(String &functionName, String &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor - creates function from function name
	 * and function expression string.
	 * \param functionName              the function name
	 * \param functionExpressionString  the function expression string
	 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \return A shared pointer to the new Function instance.
	 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(const std::string &functionName, const std::string &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor - creates function from function name
	 * and function expression string.
	 * \param functionName              the function name
	 * \param functionExpressionString  the function expression string
	 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \return A shared pointer to the new Function instance.
	 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(std::string &functionName, std::string &functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor - creates function from function name
	 * and function expression string.
	 * \param functionName              the function name
	 * \param functionExpressionString  the function expression string
	 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \return A shared pointer to the new Function instance.
	 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(const Char *functionName, const Char *functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor - creates function from function name
	 * and function expression string.
	 * \param functionName              the function name
	 * \param functionExpressionString  the function expression string
	 * \param elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \return A shared pointer to the new Function instance.
	 * \tparam StringsOrPrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... StringsOrPrimitiveElements>
	FunctionPtr new_Function(const char *functionName, const char *functionExpressionString,
	                         StringsOrPrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString,
		                                                  std::forward<StringsOrPrimitiveElements>(elements)...);
		function->postConstructorSync();
		return function;
	}

	// 2 =========================================================================

	/**
	 * \brief Constructor for function definition in natural math language,
	 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
	 * is enough to define function "f" with parameters "x and y"
	 * and function body "sin(x) + cos(x)".
	 * \param functionDefinitionString      Function definition in the form
	 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
	 * \param elements                      Optional elements list (variadic - comma separated)
	 *                                      of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Function instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	FunctionPtr new_Function(const StringPtr &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor for function definition in natural math language,
	 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
	 * is enough to define function "f" with parameters "x and y"
	 * and function body "sin(x) + cos(x)".
	 * \param functionDefinitionString      Function definition in the form
	 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
	 * \param elements                      Optional elements list (variadic - comma separated)
	 *                                      of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Function instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	FunctionPtr new_Function(StringPtr &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor for function definition in natural math language,
	 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
	 * is enough to define function "f" with parameters "x and y"
	 * and function body "sin(x) + cos(x)".
	 * \param functionDefinitionString      Function definition in the form
	 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
	 * \param elements                      Optional elements list (variadic - comma separated)
	 *                                      of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Function instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	FunctionPtr new_Function(const String &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor for function definition in natural math language,
	 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
	 * is enough to define function "f" with parameters "x and y"
	 * and function body "sin(x) + cos(x)".
	 * \param functionDefinitionString      Function definition in the form
	 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
	 * \param elements                      Optional elements list (variadic - comma separated)
	 *                                      of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Function instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	FunctionPtr new_Function(String &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor for function definition in natural math language,
	 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
	 * is enough to define function "f" with parameters "x and y"
	 * and function body "sin(x) + cos(x)".
	 * \param functionDefinitionString      Function definition in the form
	 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
	 * \param elements                      Optional elements list (variadic - comma separated)
	 *                                      of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Function instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	FunctionPtr new_Function(const std::string &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor for function definition in natural math language,
	 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
	 * is enough to define function "f" with parameters "x and y"
	 * and function body "sin(x) + cos(x)".
	 * \param functionDefinitionString      Function definition in the form
	 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
	 * \param elements                      Optional elements list (variadic - comma separated)
	 *                                      of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Function instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	FunctionPtr new_Function(std::string &functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}


	/**
	 * \brief Constructor for function definition in natural math language,
	 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
	 * is enough to define function "f" with parameters "x and y"
	 * and function body "sin(x) + cos(x)".
	 * \param functionDefinitionString      Function definition in the form
	 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
	 * \param elements                      Optional elements list (variadic - comma separated)
	 *                                      of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Function instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	FunctionPtr new_Function(const Char *functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \brief Constructor for function definition in natural math language,
	 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
	 * is enough to define function "f" with parameters "x and y"
	 * and function body "sin(x) + cos(x)".
	 * \param functionDefinitionString      Function definition in the form
	 *                                      of one String, ie "f(x,y) = sin(x) + cos(x)"
	 * \param elements                      Optional elements list (variadic - comma separated)
	 *                                      of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Function instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	FunctionPtr new_Function(const char *functionDefinitionString, PrimitiveElements &&... elements) {
		FunctionPtr function = std::make_shared<Function>(functionDefinitionString,
		                                                  FORWARD_PRIMITIVE(elements)...);
		function->postConstructorSync();
		return function;
	}

	// 3 =========================================================================

	/**
	 * \brief Constructor for function definition based on
	 * your own source code - this is via implementation
	 * of FunctionExtension interface.
	 * \param functionName       Function name
	 * \param functionExtension  Your own source code
	 * \return A shared pointer to the new Function instance.
	 */
	inline FunctionPtr new_Function(const StringPtr &functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(const StringPtr &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(StringPtr &functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(StringPtr &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(const String &functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(const String &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(String &functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(String &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(const std::string &functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(const std::string &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(std::string &functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(const Char *functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(const Char *functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(const char *functionName, const FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionPtr &)
	 */
	inline FunctionPtr new_Function(const char *functionName, FunctionExtensionPtr &functionExtension) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtension);
		function->postConstructorSync();
		return function;
	}

	// 4 =========================================================================

	/**
	 * \brief Constructor for function definition based on
	 * your own source code - this is via implementation
	 * of FunctionExtensionVariadic interface.
	 * \param functionName       Function name
	 * \param functionExtensionVariadic  Your own source code
	 * \return A shared pointer to the new Function instance.
	 */
	inline FunctionPtr new_Function(const StringPtr &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(const StringPtr &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(StringPtr &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(StringPtr &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(const String &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(const String &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(String &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(String &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(const std::string &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(const std::string &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(std::string &functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(std::string &functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(const Char *functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(const Char *functionName, FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
	inline FunctionPtr new_Function(const char *functionName, const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExtensionVariadic);
		function->postConstructorSync();
		return function;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const FunctionExtensionVariadicPtr &)
	 */
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

	/**
	 * \brief Constructor - creates function from function name,
	 * function expression string and argument names.
	 * \param functionName              the function name
	 * \param functionExpressionString  the function expression string
	 * \param argumentsNames            the arguments names (variadic parameters)
	 *                                       comma separated list
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \return A shared pointer to the new Function instance.
	 */
	inline FunctionPtr new_Function(const StringPtr &functionName, const StringPtr &functionExpressionString,
	                                const ListPtr<StringPtr> &argumentsNames) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString, argumentsNames);
		function->postConstructorSync();
		return function;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Function(const StringPtr &,const StringPtr &,const ListPtr< StringPtr > &)
	 */
	inline FunctionPtr new_Function(StringPtr &functionName, StringPtr &functionExpressionString,
	                                ListPtr<StringPtr> &argumentsNames) {
		FunctionPtr function = std::make_shared<Function>(functionName, functionExpressionString, argumentsNames);
		function->postConstructorSync();
		return function;
	}

} // namespace org::mariuszgromada::math::mxparser

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_FUNCTION_H