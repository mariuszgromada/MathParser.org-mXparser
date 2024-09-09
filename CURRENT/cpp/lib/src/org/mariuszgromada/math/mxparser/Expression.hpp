/*
 * @(#)Expression.hpp        6.1.0    2024-09-08
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_EXPRESSION_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_EXPRESSION_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/Miscellaneous.hpp"
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/PrimitiveElement.hpp"
#include "org/mariuszgromada/math/mxparser/StringInvariant.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.hpp"
#include <memory>
#include <mutex>

namespace org::mariuszgromada::math::mxparser {

	USING_FRIENDS_NAMESPACES;

	class API_VISIBLE Expression : public PrimitiveElement {
		ADD_FRIENDS_OF(Expression);

	private:

		// ***********************************************************
		// ****************** CONSTRUCTORS HELPERS *******************
		// ***********************************************************

		// 0 =========================================================================

		void executeConstructorConst(const StringPtr &expressionString, bool parserKeyWordsOnly);
		void executeConstructorConst(StringPtr &expressionString, bool parserKeyWordsOnly);
		void executeConstructorConst(const String &expressionString, bool parserKeyWordsOnly);
		void executeConstructorConst(String &expressionString, bool parserKeyWordsOnly);

		// 1 =========================================================================

		void executeConstructorConst();

		// 2 =========================================================================

		void executeConstructorConst(const StringPtr &expressionString);
		void executeConstructorConst(StringPtr &expressionString);
		void executeConstructorConst(const String &expressionString);
		void executeConstructorConst(String &expressionString);

		// 3 =========================================================================

		void executeConstructorConst(const ExpressionPtr &expressionToClone, bool isThreadSafeClone, const CloneCachePtr &cloneCache);
		void executeConstructorConst(ExpressionPtr &expressionToClone, bool isThreadSafeClone, CloneCachePtr &cloneCache);

		// 4 =========================================================================

		void executeConstructorConst(const StringPtr &expressionString, const ListPtr<TokenPtr> &initialTokens,
		                             const ListPtr<ArgumentPtr> &argumentsList,
		                             const ListPtr<FunctionPtr> &functionsList,
		                             const ListPtr<ConstantPtr> &constantsList, bool disableUlpRounding,
		                             bool UDFExpression, const ListPtr<double> &UDFVariadicParamsAtRunTime);

		void executeConstructorConst(StringPtr &expressionString, ListPtr<TokenPtr> &initialTokens,
		                             ListPtr<ArgumentPtr> &argumentsList, ListPtr<FunctionPtr> &functionsList,
		                             ListPtr<ConstantPtr> &constantsList, bool disableUlpRounding, bool UDFExpression,
		                             ListPtr<double> &UDFVariadicParamsAtRunTime);

		// 5 =========================================================================

		void executeConstructorConst(const StringPtr &expressionString, const ListPtr<ArgumentPtr> &argumentsList,
		                             const ListPtr<FunctionPtr> &functionsList,
		                             const ListPtr<ConstantPtr> &constantsList, bool internal, bool UDFExpression,
		                             const ListPtr<double> &UDFVariadicParamsAtRunTime);

		void executeConstructorConst(StringPtr &expressionString, ListPtr<ArgumentPtr> &argumentsList,
		                             ListPtr<FunctionPtr> &functionsList, ListPtr<ConstantPtr> &constantsList,
		                             bool internal, bool UDFExpression, ListPtr<double> &UDFVariadicParamsAtRunTime);

	public:

		// ***********************************************************
		// ********************** CONSTRUCTORS ***********************
		// ***********************************************************

		// 0 =========================================================================

		Expression(const StringPtr &expressionString, bool parserKeyWordsOnly) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString, parserKeyWordsOnly);
			iAmFullyConstructed = true;
		}

		Expression(StringPtr &expressionString, bool parserKeyWordsOnly) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString, parserKeyWordsOnly);
			iAmFullyConstructed = true;
		}

		Expression(const String &expressionString, bool parserKeyWordsOnly) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString, parserKeyWordsOnly);
			iAmFullyConstructed = true;
		}

		Expression(String &expressionString, bool parserKeyWordsOnly) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString, parserKeyWordsOnly);
			iAmFullyConstructed = true;
		}

		Expression(const std::string &expressionString, bool parserKeyWordsOnly) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString), parserKeyWordsOnly);
			iAmFullyConstructed = true;
		}

		Expression(std::string &expressionString, bool parserKeyWordsOnly) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString), parserKeyWordsOnly);
			iAmFullyConstructed = true;
		}

		Expression(const Char *expressionString, bool parserKeyWordsOnly) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString), parserKeyWordsOnly);
			iAmFullyConstructed = true;
		}

		Expression(const char *expressionString, bool parserKeyWordsOnly) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString), parserKeyWordsOnly);
			iAmFullyConstructed = true;
		}

		// 1 =========================================================================

		/**
		 * Default constructor - empty expression
		 *
		 * @param  elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 *
		 * @see    PrimitiveElement
		 */
		template<typename... PrimitiveElements>
		explicit Expression(PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst();
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		explicit Expression(const ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst();
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		// 2 =========================================================================

		/**
		 * Constructor - creates new expression from expression string.
		 *
		 * @param      expressionString    definition of the expression
		 * @param      elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 *
		 * @see    PrimitiveElement
		 *
		 */
		template<typename... PrimitiveElements>
		explicit Expression(const StringPtr &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Expression(StringPtr &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Expression(const String &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Expression(String &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Expression(const std::string &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString));
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Expression(std::string &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString));
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Expression(const Char *expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString));
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Expression(const char *expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString));
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		explicit Expression(const StringPtr &expressionString, const ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		explicit Expression(StringPtr &expressionString, const ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		explicit Expression(const StringPtr &expressionString, ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		explicit Expression(StringPtr &expressionString, ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		explicit Expression(const String &expressionString, const ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		explicit Expression(String &expressionString, const ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		explicit Expression(const String &expressionString, ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		explicit Expression(String &expressionString, ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

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

		template<typename... Strings>
		void defineFunction(const std::string &functionName, const std::string &functionExpressionString, Strings &&... argumentsNames) {
			defineFunction(S(functionName), S(functionExpressionString), FORWARD_STRING(argumentsNames)...);
		}

		template<typename... Strings>
		void defineFunction(const Char* functionName, const Char* functionExpressionString, Strings &&... argumentsNames) {
			defineFunction(S(functionName), S(functionExpressionString), FORWARD_STRING(argumentsNames)...);
		}

		template<typename... Strings>
		void defineFunction(const char* functionName, const char* functionExpressionString, Strings &&... argumentsNames) {
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

		static constexpr int TYPE_ID = 100;
		static StringPtr TYPE_DESC;

		// ***********************************************************

		/**
		 * Status of the syntax - no syntax error
		 */
		static constexpr bool NO_SYNTAX_ERRORS = true;
		/**
		 * Status of the syntax - syntax error or syntax status unknown
		 */
		static constexpr bool SYNTAX_ERROR = false;
		// @Deprecated
		/**
		 * Status of the syntax - syntax error or syntax status unknown
		 *
		 * @deprecated Planned to be removed, use {SYNTAX_ERROR} instead
		 */
		// @Deprecated
		static constexpr bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;

		// ***********************************************************

		StringPtr getErrorMessage() const;
		bool getSyntaxStatus() const;

		// ***********************************************************

		void setExpressionString(const StringPtr &expressionString);
		void setExpressionString(const String &expressionString) { setExpressionString(S(expressionString)); }
		void setExpressionString(const Char *expressionString) { setExpressionString(S(expressionString)); }
		void setExpressionString(const std::string &expressionString) { setExpressionString(S(expressionString)); }
		void setExpressionString(const char *expressionString) { setExpressionString(S(expressionString)); }

		// ***********************************************************

		StringPtr getExpressionString();
		StringPtr getCanonicalExpressionString();
		void clearExpressionString();

		// ***********************************************************

		void setDescription(const StringPtr &description);
		void setDescription(const String &description) { setDescription(S(description)); }
		void setDescription(const Char *description) { setDescription(S(description)); }
		void setDescription(const std::string &description) { setDescription(S(description)); }
		void setDescription(const char *description) { setDescription(S(description)); }

		// ***********************************************************

		StringPtr getDescription();
		void clearDescription();

		// ***********************************************************

		void setVerboseMode();
		void setSilentMode();
		bool getVerboseMode() const;

		// ***********************************************************

		void enableImpliedMultiplicationMode();
		void disableImpliedMultiplicationMode();
		bool checkIfImpliedMultiplicationMode() const;

		// ***********************************************************

		void enableUnicodeBuiltinKeyWordsMode();
		void disableUnicodeBuiltinKeyWordsMode();
		bool checkIfUnicodeBuiltinKeyWordsMode() const;

		// ***********************************************************

		void enableAttemptToFixExpStrMode();
		void disableAttemptToFixExpStrMode();
		bool checkIfAttemptToFixExpStrMode() const;

		// ***********************************************************

		bool getRecursiveMode() const;

		// ***********************************************************

		double getComputingTime() const;

		// ***********************************************************

		void defineArgument(const StringPtr &argumentName, double argumentValue);
		void defineArgument(const String &argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		void defineArgument(const Char *argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		void defineArgument(const std::string &argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		void defineArgument(const char *argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }

		// ***********************************************************

		int getArgumentIndex(const StringPtr &argumentName) const;
		int getArgumentIndex(const String &argumentName) const { return getArgumentIndex(S(argumentName)); }
		int getArgumentIndex(const Char *argumentName) const { return getArgumentIndex(S(argumentName)); }
		int getArgumentIndex(const std::string &argumentName) const { return getArgumentIndex(S(argumentName)); }
		int getArgumentIndex(const char *argumentName) const { return getArgumentIndex(S(argumentName)); }

		// ***********************************************************

		int getArgumentsNumber() const;

		// ***********************************************************
		ArgumentPtr getArgument(const StringPtr &argumentName) const;
		ArgumentPtr getArgument(const String &argumentName) const { return getArgument(S(argumentName)); }
		ArgumentPtr getArgument(const Char *argumentName) const { return getArgument(S(argumentName)); }
		ArgumentPtr getArgument(const std::string &argumentName) const { return getArgument(S(argumentName)); }
		ArgumentPtr getArgument(const char *argumentName) const { return getArgument(S(argumentName)); }
		ArgumentPtr getArgument(int argumentIndex) const;

		// ***********************************************************

		void setArgumentValue(const StringPtr &argumentName, double argumentValue);
		void setArgumentValue(const String &argumentName, double argumentValue) { setArgumentValue(S(argumentName), argumentValue); }
		void setArgumentValue(const Char *argumentName, double argumentValue) { setArgumentValue(S(argumentName), argumentValue); }
		void setArgumentValue(const std::string &argumentName, double argumentValue) { setArgumentValue(S(argumentName), argumentValue); }
		void setArgumentValue(const char *argumentName, double argumentValue) { setArgumentValue(S(argumentName), argumentValue); }

		// ***********************************************************

		double getArgumentValue(const StringPtr &argumentName);
		double getArgumentValue(const String &argumentName) { return getArgumentValue(S(argumentName)); }
		double getArgumentValue(const Char *argumentName) { return getArgumentValue(S(argumentName)); }
		double getArgumentValue(const std::string &argumentName) { return getArgumentValue(S(argumentName)); }
		double getArgumentValue(const char *argumentName) { return getArgumentValue(S(argumentName)); }

		// ***********************************************************

		void defineConstant(const StringPtr &constantName, double constantValue);
		void defineConstant(const String &constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		void defineConstant(const Char *constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		void defineConstant(const std::string &constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		void defineConstant(const char *constantName, double constantValue) { defineConstant(S(constantName), constantValue); }

		// ***********************************************************

		int getConstantIndex(const StringPtr &constantName) const;
		int getConstantIndex(const String &constantName) const { return getConstantIndex(S(constantName)); }
		int getConstantIndex(const Char *constantName) const { return getConstantIndex(S(constantName)); }
		int getConstantIndex(const std::string &constantName) const { return getConstantIndex(S(constantName)); }
		int getConstantIndex(const char *constantName) const { return getConstantIndex(S(constantName)); }

		// ***********************************************************

		int getConstantsNumber() const;

		// ***********************************************************

		ConstantPtr getConstant(const StringPtr &constantName) const;
		ConstantPtr getConstant(const String &constantName) const { return getConstant(S(constantName)); }
		ConstantPtr getConstant(const Char *constantName) const { return getConstant(S(constantName)); }
		ConstantPtr getConstant(const std::string &constantName) const { return getConstant(S(constantName)); }
		ConstantPtr getConstant(const char *constantName) const { return getConstant(S(constantName)); }
		ConstantPtr getConstant(int constantIndex) const;

		// ***********************************************************

		int getFunctionIndex(const StringPtr &functionName) const;
		int getFunctionIndex(const String &functionName) const { return getFunctionIndex(S(functionName)); }
		int getFunctionIndex(const Char *functionName) const { return getFunctionIndex(S(functionName)); }
		int getFunctionIndex(const std::string &functionName) const { return getFunctionIndex(S(functionName)); }
		int getFunctionIndex(const char *functionName) const { return getFunctionIndex(S(functionName)); }

		// ***********************************************************

		int getFunctionsNumber() const;

		// ***********************************************************

		FunctionPtr getFunction(const StringPtr &functionName) const;
		FunctionPtr getFunction(const String &functionName) const { return getFunction(S(functionName)); }
		FunctionPtr getFunction(const Char *functionName) const { return getFunction(S(functionName)); }
		FunctionPtr getFunction(const std::string &functionName) const { return getFunction(S(functionName)); }
		FunctionPtr getFunction(const char *functionName) const { return getFunction(S(functionName)); }
		FunctionPtr getFunction(int functionIndex) const;

		// ***********************************************************

		bool checkLexSyntax();
		bool checkSyntax();

		// ***********************************************************

		double calculate();
		double calculate(const CalcStepsRegisterPtr &calcStepsRegister);
		double calculate(CalcStepsRegisterPtr &calcStepsRegister) { return calculate(CONST_CALC_STEPS_REGISTER(calcStepsRegister)); }

		// ***********************************************************

		ListPtr<TokenPtr> getCopyOfInitialTokens();
		ArrayPtr<StringPtr> getMissingUserDefinedArguments();
		ArrayPtr<StringPtr> getMissingUserDefinedUnits();
		ArrayPtr<StringPtr> getMissingUserDefinedFunctions();
		void consolePrintCopyOfInitialTokens();

		// ***********************************************************

		StringPtr getHelp();
		StringPtr getHelp(const StringPtr &query);
		StringPtr getHelp(const String &query) { return getHelp(S(query)); }
		StringPtr getHelp(const Char *query) { return getHelp(S(query)); }
		StringPtr getHelp(const std::string &query) { return getHelp(S(query)); }
		StringPtr getHelp(const char *query) { return getHelp(S(query)); }
		StringPtr getHelp(bool addHeader, bool addCaption, const StringPtr &caption);
		StringPtr getHelp(bool addHeader, bool addCaption, const String &caption) { return getHelp(addHeader, addCaption, S(caption)); }
		StringPtr getHelp(bool addHeader, bool addCaption, const Char *caption) { return getHelp(addHeader, addCaption, S(caption)); }
		StringPtr getHelp(bool addHeader, bool addCaption, const std::string &caption) { return getHelp(addHeader, addCaption, S(caption)); }
		StringPtr getHelp(bool addHeader, bool addCaption, const char *caption) { return getHelp(addHeader, addCaption, S(caption)); }
		StringPtr getHelp(const StringPtr &query, bool addHeader, bool addCaption, const StringPtr &caption);
		StringPtr getHelp(const String &query, bool addHeader, bool addCaption, const String &caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		StringPtr getHelp(const Char *query, bool addHeader, bool addCaption, const Char *caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		StringPtr getHelp(const std::string &query, bool addHeader, bool addCaption, const std::string &caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		StringPtr getHelp(const char *query, bool addHeader, bool addCaption, const char *caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }

		// ***********************************************************

		StringPtr getHelpAsCsv();
		StringPtr getHelpAsCsv(const StringPtr &query);
		StringPtr getHelpAsCsv(const String &query) { return getHelpAsCsv(S(query)); }
		StringPtr getHelpAsCsv(const Char *query) { return getHelpAsCsv(S(query)); }
		StringPtr getHelpAsCsv(const std::string &query) { return getHelpAsCsv(S(query)); }
		StringPtr getHelpAsCsv(const char *query) { return getHelpAsCsv(S(query)); }
		StringPtr getHelpAsCsv(const StringPtr &quote, const StringPtr &delimiter, bool addHeader);
		StringPtr getHelpAsCsv(const String &quote, const String &delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		StringPtr getHelpAsCsv(const Char *quote, const Char *delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		StringPtr getHelpAsCsv(const std::string &quote, const std::string &delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		StringPtr getHelpAsCsv(const char *quote, const char *delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		StringPtr getHelpAsCsv(const StringPtr &query, const StringPtr &quote, const StringPtr &delimiter, bool addHeader);
		StringPtr getHelpAsCsv(const String &query, const String &quote, const String &delimiter, bool addHeader) { return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader); }
		StringPtr getHelpAsCsv(const Char *query, const Char *quote, const Char *delimiter, bool addHeader) { return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader); }
		StringPtr getHelpAsCsv(const std::string &query, const std::string &quote, const std::string &delimiter, bool addHeader) { return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader); }
		StringPtr getHelpAsCsv(const char *query, const char *quote, const char *delimiter, bool addHeader) { return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader); }

		// ***********************************************************

		StringPtr getHelpAsHtmlTable();
		StringPtr getHelpAsHtmlTable(const StringPtr &query);
		StringPtr getHelpAsHtmlTable(const String &query) { return getHelpAsHtmlTable(S(query)); }
		StringPtr getHelpAsHtmlTable(const Char *query) { return getHelpAsHtmlTable(S(query)); }
		StringPtr getHelpAsHtmlTable(const std::string &query) { return getHelpAsHtmlTable(S(query)); }
		StringPtr getHelpAsHtmlTable(const char *query) { return getHelpAsHtmlTable(S(query)); }
		StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const StringPtr &caption, const StringPtr &cssClass);
		StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const String &caption, const String &cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const Char *caption, const Char *cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const std::string &caption, const std::string &cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const char *caption, const char *cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		StringPtr getHelpAsHtmlTable(const StringPtr &query, bool addHeader, bool addCaption, bool addFigure, const StringPtr &caption, const StringPtr &cssClass);
		StringPtr getHelpAsHtmlTable(const String &query, bool addHeader, bool addCaption, bool addFigure,const String &caption, const String &cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		StringPtr getHelpAsHtmlTable(const Char *query, bool addHeader, bool addCaption, bool addFigure, const Char *caption, const Char *cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		StringPtr getHelpAsHtmlTable(const std::string &query, bool addHeader, bool addCaption, bool addFigure, const std::string &caption, const std::string &cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		StringPtr getHelpAsHtmlTable(const char *query, bool addHeader, bool addCaption, bool addFigure, const char *caption, const char *cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}

		// ***********************************************************

		StringPtr getHelpAsMarkdownTable();
		StringPtr getHelpAsMarkdownTable(const StringPtr &query);
		StringPtr getHelpAsMarkdownTable(const String &query) { return getHelpAsMarkdownTable(S(query)); }
		StringPtr getHelpAsMarkdownTable(const Char *query) { return getHelpAsMarkdownTable(S(query)); }
		StringPtr getHelpAsMarkdownTable(const std::string &query) { return getHelpAsMarkdownTable(S(query)); }
		StringPtr getHelpAsMarkdownTable(const char *query) { return getHelpAsMarkdownTable(S(query)); }
		StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const StringPtr &caption);
		StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const String &caption) { return getHelpAsMarkdownTable(addHeader, addCaption, S(caption)); }
		StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const Char *caption) { return getHelpAsMarkdownTable(addHeader, addCaption, S(caption)); }
		StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const std::string &caption) { return getHelpAsMarkdownTable(addHeader, addCaption, S(caption)); }
		StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const char *caption) { return getHelpAsMarkdownTable(addHeader, addCaption, S(caption)); }
		StringPtr getHelpAsMarkdownTable(const StringPtr &query, bool addHeader, bool addCaption, const StringPtr &caption);
		StringPtr getHelpAsMarkdownTable(const String &query, bool addHeader, bool addCaption, const String &caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		StringPtr getHelpAsMarkdownTable(const Char *query, bool addHeader, bool addCaption, const Char *caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		StringPtr getHelpAsMarkdownTable(const std::string &query, bool addHeader, bool addCaption, const std::string &caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		StringPtr getHelpAsMarkdownTable(const char *query, bool addHeader, bool addCaption, const char *caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}

		// ***********************************************************

		StringPtr getHelpAsJson();
		StringPtr getHelpAsJson(const StringPtr &query);
		StringPtr getHelpAsJson(const String &query) { return getHelpAsJson(S(query)); }
		StringPtr getHelpAsJson(const Char *query) { return getHelpAsJson(S(query)); }
		StringPtr getHelpAsJson(const std::string &query) { return getHelpAsJson(S(query)); }
		StringPtr getHelpAsJson(const char *query) { return getHelpAsJson(S(query)); }
		StringPtr getHelpAsJson(bool addCaption, const StringPtr &caption);
		StringPtr getHelpAsJson(bool addCaption, const String &caption) { return getHelpAsJson(addCaption, S(caption)); }
		StringPtr getHelpAsJson(bool addCaption, const Char *caption) { return getHelpAsJson(addCaption, S(caption)); }
		StringPtr getHelpAsJson(bool addCaption, const std::string &caption) { return getHelpAsJson(addCaption, S(caption)); }
		StringPtr getHelpAsJson(bool addCaption, const char *caption) { return getHelpAsJson(addCaption, S(caption)); }
		StringPtr getHelpAsJson(const StringPtr &query, bool addCaption, const StringPtr &caption);
		StringPtr getHelpAsJson(const String &query, bool addCaption, const String &caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		StringPtr getHelpAsJson(const Char *query, bool addCaption, const Char *caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		StringPtr getHelpAsJson(const std::string &query, bool addCaption, const std::string &caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		StringPtr getHelpAsJson(const char *query, bool addCaption, const char *caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }

		// ***********************************************************

		ListPtr<KeyWordPtr> getKeyWords();
		ListPtr<KeyWordPtr> getKeyWords(const StringPtr &query);
		ListPtr<KeyWordPtr> getKeyWords(const String &query) { return getKeyWords(S(query)); }
		ListPtr<KeyWordPtr> getKeyWords(const Char *query) { return getKeyWords(S(query)); }
		ListPtr<KeyWordPtr> getKeyWords(const std::string &query) { return getKeyWords(S(query)); }
		ListPtr<KeyWordPtr> getKeyWords(const char *query) { return getKeyWords(S(query)); }


		// ***********************************************************

		ExpressionPtr cloneForThreadSafe();

		// ***********************************************************

		/**
		 * FOUND / NOT_FOUND
		 * used for matching purposes
		 */
		static constexpr int NOT_FOUND = mXparser::NOT_FOUND;
		static constexpr int FOUND = mXparser::FOUND;

	protected:

		ExpressionPtr clone();

	public: /* should be private or package */

		// 3 =========================================================================

		Expression(const ExpressionPtr &expressionToClone, bool isThreadSafeClone, const CloneCachePtr &cloneCache) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionToClone, isThreadSafeClone, cloneCache);
			iAmFullyConstructed = true;
		}

		Expression(ExpressionPtr &expressionToClone, bool isThreadSafeClone, CloneCachePtr &cloneCache) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionToClone, isThreadSafeClone, cloneCache);
			iAmFullyConstructed = true;
		}

		// 4 =========================================================================

		Expression(const StringPtr &expressionString, const ListPtr<TokenPtr> &initialTokens,
		           const ListPtr<ArgumentPtr> &argumentsList, const ListPtr<FunctionPtr> &functionsList,
		           const ListPtr<ConstantPtr> &constantsList, bool disableUlpRounding, bool UDFExpression,
		           const ListPtr<double> &UDFVariadicParamsAtRunTime) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString, initialTokens, argumentsList, functionsList, constantsList, disableUlpRounding, UDFExpression, UDFVariadicParamsAtRunTime);
			iAmFullyConstructed = true;
		}

		Expression(StringPtr &expressionString, ListPtr<TokenPtr> &initialTokens, ListPtr<ArgumentPtr> &argumentsList,
		           ListPtr<FunctionPtr> &functionsList, ListPtr<ConstantPtr> &constantsList, bool disableUlpRounding,
		           bool UDFExpression, ListPtr<double> &UDFVariadicParamsAtRunTime) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString, initialTokens, argumentsList, functionsList, constantsList, disableUlpRounding, UDFExpression, UDFVariadicParamsAtRunTime);
			iAmFullyConstructed = true;
		}

		// 5 =========================================================================

		Expression(const StringPtr &expressionString, const ListPtr<ArgumentPtr> &argumentsList,
		           const ListPtr<FunctionPtr> &functionsList, const ListPtr<ConstantPtr> &constantsList, bool internal,
		           bool UDFExpression, const ListPtr<double> &UDFVariadicParamsAtRunTime) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString, argumentsList, functionsList, constantsList, internal, UDFExpression, UDFVariadicParamsAtRunTime);
			iAmFullyConstructed = true;
		}

		Expression(StringPtr &expressionString, ListPtr<ArgumentPtr> &argumentsList,
		           ListPtr<FunctionPtr> &functionsList, ListPtr<ConstantPtr> &constantsList, bool internal,
		           bool UDFExpression, ListPtr<double> &UDFVariadicParamsAtRunTime) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString, argumentsList, functionsList, constantsList, internal, UDFExpression, UDFVariadicParamsAtRunTime);
			iAmFullyConstructed = true;
		}
		Expression() : PrimitiveElement(TYPE_ID) {
			expressionInit();
		};

	private:
		static StringPtr StringInvariantEMPTY();

		static const ListPtr<ExpressionPtr> LIST_PTR_OF_EXPRESSION_PTR_ALWAYS_EMPTY;

		/**
		 * For verbose mode purposes
		 */
		static constexpr bool WITH_EXP_STR = true;
		static constexpr bool NO_EXP_STR = false;
		static constexpr bool SYNTAX_STATUS_UNKNOWN = false;

		// ***********************************************************

		StringPtr expressionStringCleaned = StringInvariantEMPTY();
		StringPtr description = StringInvariantEMPTY();

		// ***********************************************************

		ListPtr<KeyWordPtr> keyWordsList = nullptr;
		CompilationDetailsPtr initialCompilationDetails = nullptr;
		PtrsSetPtr<String> neverParseForImpliedMultiplication = nullptr;
		ListPtr<TokenPtr> tokensList = nullptr;
		CompilationDetailsPtr compilationDetails = nullptr;

		// ***********************************************************

		bool verboseMode = false;
		bool impliedMultiplicationMode = mXparser::impliedMultiplicationMode;
		bool impliedMultiplicationError = false;
		bool syntaxStatus = SYNTAX_ERROR;
		bool isFullyCompiled = false;
		StringPtr errorMessage = StringInvariantEMPTY();
		StringPtr errorMessageCalculate = StringInvariantEMPTY();
		static int ERROR_MESSAGE_CALCULATE_MAXIMUM_LENGTH;
		bool recursionCallPending = false;
		int recursionCallsCounter = 0;
		bool parserKeyWordsOnly = false;
		bool unicodeKeyWordsEnabled = mXparser::unicodeKeyWordsEnabled;
		bool attemptToFixExpStrEnabled = mXparser::attemptToFixExpStrEnabled;
		bool internalClone = false;
		bool forwardErrorMessage = true;
		int optionsChangesetNumber = -1;

		// ***********************************************************

		void expressionInternalVarsInit();
		void expressionInit();

		// ***********************************************************

		void setToNumber(int pos, double number, bool ulpRound);
		void setToNumber(int pos, double number);

		// ***********************************************************

		void f1SetDecreaseRemove(int pos, double result, bool ulpRound);
		void f1SetDecreaseRemove(int pos, double result);
		void f2SetDecreaseRemove(int pos, double result, bool ulpRound);
		void f2SetDecreaseRemove(int pos, double result);
		void f3SetDecreaseRemove(int pos, double result, bool ulpRound);
		void f3SetDecreaseRemove(int pos, double result);
		void opSetDecreaseRemove(int pos, double result, bool ulpRound);
		void opSetDecreaseRemove(int pos, double result);
		void calcSetDecreaseRemove(int pos, double result, bool ulpRound);
		void calcSetDecreaseRemove(int pos, double result);
		void variadicSetDecreaseRemove(int pos, double value, int length, bool ulpRound);
		void variadicSetDecreaseRemove(int pos, double value, int length);
		void ifSetRemove(int pos, double ifCondition, bool ulpRound);
		void removeTokens(int from, int to);
		void ifSetRemove(int pos, double ifCondition);

		// ***********************************************************

		static ListPtr<TokenPtr> createInitialTokens(int startPos, int endPos, const ListPtr<TokenPtr> &tokensList);

		// ***********************************************************

		int getParametersNumber(int pos);
		ArgumentParameterPtr getParamArgument(const StringPtr &argumentName);
		void clearParamArgument(const ArgumentParameterPtr &argParam);
		double getTokenValue(int tokenIndex);
		ListPtr<double> getNumbers(int pos);

		// ***********************************************************

		void FREE_ARGUMENT(int pos);
		void DEPENDENT_ARGUMENT(int pos, const CalcStepsRegisterPtr &calcStepsRegister);
		void USER_FUNCTION(int pos, const CalcStepsRegisterPtr &calcStepsRegister);
		void USER_CONSTANT(int pos);
		void RECURSIVE_ARGUMENT(int pos);
		void CONSTANT(int pos);
		void UNIT(int pos);
		void RANDOM_VARIABLE(int pos);
		void TETRATION(int pos);
		void POWER(int pos);
		void MODULO(int pos);
		void DIVIDE(int pos);
		void DIVIDE_QUOTIENT(int pos);
		void MULTIPLY(int pos);
		void PLUS(int pos);
		void MINUS(int pos);
		void AND(int pos);
		void OR(int pos);
		void NAND(int pos);
		void NOR(int pos);
		void XOR(int pos);
		void IMP(int pos);
		void CIMP(int pos);
		void NIMP(int pos);
		void CNIMP(int pos);
		void EQV(int pos);
		void NEG(int pos);
		void EQ(int pos);
		void NEQ(int pos);
		void LT(int pos);
		void GT(int pos);
		void LEQ(int pos);
		void GEQ(int pos);
		void SQUARE_ROOT_OPERATOR(int pos);
		void CUBE_ROOT_OPERATOR(int pos);
		void FOURTH_ROOT_OPERATOR(int pos);
		void BITWISE_COMPL(int pos);
		void BITWISE_AND(int pos);
		void BITWISE_OR(int pos);
		void BITWISE_XOR(int pos);
		void BITWISE_NAND(int pos);
		void BITWISE_NOR(int pos);
		void BITWISE_XNOR(int pos);
		void BITWISE_LEFT_SHIFT(int pos);
		void BITWISE_RIGHT_SHIFT(int pos);
		void SIN(int pos);
		void COS(int pos);
		void TAN(int pos);
		void CTAN(int pos);
		void SEC(int pos);
		void COSEC(int pos);
		void ASIN(int pos);
		void ACOS(int pos);
		void ATAN(int pos);
		void ACTAN(int pos);
		void LN(int pos);
		void LOG2(int pos);
		void LOG10(int pos);
		void RAD(int pos);
		void EXP(int pos);
		void SQRT(int pos);
		void SINH(int pos);
		void COSH(int pos);
		void TANH(int pos);
		void COTH(int pos);
		void SECH(int pos);
		void CSCH(int pos);
		void DEG(int pos);
		void ABS(int pos);
		void SGN(int pos);
		void FLOOR(int pos);
		void CEIL(int pos);
		void ARSINH(int pos);
		void ARCOSH(int pos);
		void ARTANH(int pos);
		void ARCOTH(int pos);
		void ARSECH(int pos);
		void ARCSCH(int pos);
		void SA(int pos);
		void SINC(int pos);
		void BELL_NUMBER(int pos);
		void LUCAS_NUMBER(int pos);
		void FIBONACCI_NUMBER(int pos);
		void HARMONIC_NUMBER(int pos);
		void IS_PRIME(int pos);
		void PRIME_COUNT(int pos);
		void EXP_INT(int pos);
		void LOG_INT(int pos);
		void OFF_LOG_INT(int pos);
		void FACT(int pos);
		void PERC(int pos);
		void NOT(int pos);
		void GAUSS_ERF(int pos);
		void GAUSS_ERFC(int pos);
		void GAUSS_ERF_INV(int pos);
		void GAUSS_ERFC_INV(int pos);
		void ULP(int pos);
		void ISNAN(int pos);
		void NDIG10(int pos);
		void NFACT(int pos);
		void ARCSEC(int pos);
		void ARCCSC(int pos);
		void GAMMA(int pos);
		void LAMBERT_W0(int pos);
		void LAMBERT_W1(int pos);
		void SGN_GAMMA(int pos);
		void LOG_GAMMA(int pos);
		void DI_GAMMA(int pos);
		void UDF_PARAM(int pos);
		void RND_STUDENT_T(int pos);
		void RND_CHI2(int pos);
		void LOG(int pos);
		void MOD(int pos);
		void BINOM_COEFF(int pos);
		void PERMUTATIONS(int pos);
		void BETA(int pos);
		void LOG_BETA(int pos);
		void PDF_STUDENT_T(int pos);
		void CDF_STUDENT_T(int pos);
		void QNT_STUDENT_T(int pos);
		void PDF_CHI2(int pos);
		void CDF_CHI2(int pos);
		void QNT_CHI2(int pos);
		void BERNOULLI_NUMBER(int pos);
		void STIRLING1_NUMBER(int pos);
		void STIRLING2_NUMBER(int pos);
		void WORPITZKY_NUMBER(int pos);
		void EULER_NUMBER(int pos);
		void KRONECKER_DELTA(int pos);
		void EULER_POLYNOMIAL(int pos);
		void HARMONIC2_NUMBER(int pos);
		void ROUND(int pos);
		void RND_VAR_UNIFORM_CONT(int pos);
		void RND_VAR_UNIFORM_DISCR(int pos);
		void RND_NORMAL(int pos);
		void RND_F_SNEDECOR(int pos);
		void NDIG(int pos);
		void DIGIT10(int pos);
		void FACTVAL(int pos);
		void FACTEXP(int pos);
		void ROOT(int pos);
		void INC_GAMMA_LOWER(int pos);
		void INC_GAMMA_UPPER(int pos);
		void REG_GAMMA_LOWER(int pos);
		void REG_GAMMA_UPPER(int pos);
		void IF_CONDITION(int pos);
		void IFF(int pos);
		void IF(int pos);
		void CHI(int pos);
		void CHI_LR(int pos);
		void CHI_L(int pos);
		void CHI_R(int pos);
		void PDF_UNIFORM_CONT(int pos);
		void CDF_UNIFORM_CONT(int pos);
		void QNT_UNIFORM_CONT(int pos);
		void PDF_NORMAL(int pos);
		void CDF_NORMAL(int pos);
		void QNT_NORMAL(int pos);
		void PDF_F_SNEDECOR(int pos);
		void CDF_F_SNEDECOR(int pos);
		void QNT_F_SNEDECOR(int pos);

		// ***********************************************************

		static const double PP;
		static const double EE;
		static const double GG;

		// ***********************************************************

		void DIGIT(int pos);
		void INC_BETA(int pos);
		void REG_BETA(int pos);

		static void updateMissingTokens(const ListPtr<TokenPtr> &tokens, const StringPtr &keyWord, int tokenId,
		                                int tokenTypeId);

		static void updateMissingTokens(const ArgumentParameterPtr &index, const IterativeOperatorParametersPtr &iterParams);
		void evalFromToDeltaParameters(const ArgumentParameterPtr &index,
		                               const IterativeOperatorParametersPtr &iterParams);
		void SUM(int pos);
		void PROD(int pos);
		void MINIMUM(int pos);
		void MAXIMUM(int pos);
		void AVG(int pos);
		void VAR(int pos);
		void STD(int pos);
		void DERIVATIVE(int pos, int derivativeType);
		void DERIVATIVE_NTH(int pos, int derivativeType);
		void INTEGRAL(int pos);
		void SOLVE(int pos);
		void FORWARD_DIFFERENCE(int pos);
		void BACKWARD_DIFFERENCE(int pos);
		void MIN_VARIADIC(int pos);
		void MAX_VARIADIC(int pos);
		void SUM_VARIADIC(int pos);
		void PROD_VARIADIC(int pos);
		void AVG_VARIADIC(int pos);
		void VAR_VARIADIC(int pos);
		void STD_VARIADIC(int pos);
		void CONTINUED_FRACTION(int pos);
		void CONTINUED_POLYNOMIAL(int pos);
		void GCD(int pos);
		void LCM(int pos);
		void RND_LIST(int pos);
		void COALESCE(int pos);
		void OR_VARIADIC(int pos);
		void AND_VARIADIC(int pos);
		void XOR_VARIADIC(int pos);
		void ARGMIN_VARIADIC(int pos);
		void ARGMAX_VARIADIC(int pos);
		void MEDIAN_VARIADIC(int pos);
		void MODE_VARIADIC(int pos);
		void BASE_VARIADIC(int pos);
		void NDIST_VARIADIC(int pos);
		void COMMA(int pos);
		void PARENTHESES(int lPos, int rPos);

		// ***********************************************************

		void cleanExpressionString();

		// ***********************************************************

		int checkCalculusParameter(const StringPtr &param);

		static bool checkIfKnownArgument(const FunctionParameterPtr &param);

		static bool checkIfUnknownToken(const FunctionParameterPtr &param);
		bool syntaxIsAlreadyCheckedNorErrors();
		void registerFinalSyntaxAlreadyCheckedNorErrors(const StringPtr &recursionInfoLevel);
		void registerFinalSyntaxFunctionWithBodyExtNoErrors(const StringPtr &recursionInfoLevel);
		void registerFinalSyntaxExpressionStringIsEmpty(const StringPtr &recursionInfoLevel);
		void registerSyntaxLexicalError(const StringPtr &recursionInfoLevel,
		                                const VectorPtr<ErrorMessagePtr> &syntaxCheckerErrorMessages,
		                                const VectorPtr<ErrorMessagePtr> &tokenMmanagerErrorMessages);
		void registerSyntaxLexicalErrorFromParserErrorMessage(const StringPtr &recursionInfoLevel,
		                                                      const ErrorMessagePtr &parserErrorMessege);
		void registerFinalSyntax(const StringPtr &recursionInfoLevel, bool syntax);
		void registerPartialSyntaxStartingSyntaxCheck(const StringPtr &recursionInfoLevel);
		bool checkPartialSyntaxImpliedMultiplication(const StringPtr &recursionInfoLevel);
		bool checkPartialSyntaxDuplicatedKeywords(const StringPtr &recursionInfoLevel);
		bool checkPartialSyntaxUserDefinedArgument(const StringPtr &recursionInfoLevel, int tokenIndex,
		                                           const TokenPtr &token, const StringPtr &tokenInfoMessage);
		bool checkPartialSyntaxUserDefinedRecursiveArgument(const StringPtr &recursionInfoLevel, int tokenIndex,
		                                                    const TokenPtr &token, const StringPtr &tokenInfoMessage);
		bool checkPartialSyntaxInvalidToken(const StringPtr &recursionInfoLevel, const TokenPtr &token,
		                                    const StringPtr &tokenInfoMessage,
		                                    const StackPtr<SyntaxStackElementPtr> &syntaxStack);
		bool checkPartialSyntaxUserDefinedFunction(const StringPtr &recursionInfoLevel, int tokenIndex,
		                                           const TokenPtr &token, const StringPtr &tokenInfoMessage);
		bool checkPartialSyntaxBuiltinConstant(const StringPtr &recursionInfoLevel, int tokenIndex,
		                                       const TokenPtr &token, const StringPtr &tokenInfoMessage);
		bool checkPartialSyntaxUserDefinedConstant(const StringPtr &recursionInfoLevel, int tokenIndex,
		                                           const TokenPtr &token, const StringPtr &tokenStr);
		bool checkPartialSyntaxUnaryFunction(const StringPtr &recursionInfoLevel, int tokenIndex, const TokenPtr &token,
		                                     const StringPtr &tokenInfoMessage);
		bool checkPartialSyntaxBinaryFunction(const StringPtr &recursionInfoLevel, int tokenIndex,
		                                      const TokenPtr &token, const StringPtr &tokenInfoMessage);
		bool checkPartialSyntaxTernaryFunction(const StringPtr &recursionInfoLevel, int tokenIndex,
		                                       const TokenPtr &token, const StringPtr &tokenInfoMessage);
		bool checkInternalSyntaxCalculusOperatorDerivative(const StringPtr &recursionInfoLevel, const TokenPtr &token,
		                                                   const StringPtr &tokenInfoMessage,
		                                                   const StackPtr<SyntaxStackElementPtr> &syntaxStack,
		                                                   int paramsNumber,
		                                                   const ListPtr<FunctionParameterPtr> &funParams);
		bool checkInternalSyntaxCalculusOperatorDerivativeNth(const StringPtr &recursionInfoLevel,
		                                                      const TokenPtr &token, const StringPtr &tokenInfoMessage,
		                                                      const StackPtr<SyntaxStackElementPtr> &syntaxStack,
		                                                      int paramsNumber,
		                                                      const ListPtr<FunctionParameterPtr> &funParams);
		bool checkInternalSyntaxCalculusOperatorIntegralSolve(const StringPtr &recursionInfoLevel,
		                                                      const TokenPtr &token, const StringPtr &tokenInfoMessage,
		                                                      const StackPtr<SyntaxStackElementPtr> &syntaxStack,
		                                                      int paramsNumber,
		                                                      const ListPtr<FunctionParameterPtr> &funParams);
		bool checkInternalSyntaxCalculusOperatorIterated(const StringPtr &recursionInfoLevel, const TokenPtr &token,
		                                                 const StringPtr &tokenInfoMessage,
		                                                 const StackPtr<SyntaxStackElementPtr> &syntaxStack,
		                                                 int paramsNumber,
		                                                 const ListPtr<FunctionParameterPtr> &funParams);
		bool checkInternalSyntaxCalculusOperatorForwardBackwardDiff(const StringPtr &recursionInfoLevel,
		                                                            const TokenPtr &token,
		                                                            const StringPtr &tokenInfoMessage,
		                                                            const StackPtr<SyntaxStackElementPtr> &syntaxStack,
		                                                            int paramsNumber,
		                                                            const ListPtr<FunctionParameterPtr> &funParams);
		bool checkPartialSyntaxVariadicFunction(const StringPtr &recursionInfoLevel, int tokenIndex,
		                                        const TokenPtr &token, const StringPtr &tokenInfoMessage);
		bool checkPartialSyntaxCalculusOperator(const StringPtr &recursionInfoLevel, int tokenIndex,
		                                        const TokenPtr &token, const StringPtr &tokenInfoMessage,
		                                        const StackPtr<SyntaxStackElementPtr> &syntaxStack);

		static void performSyntaxStackPopIfEndOfSectionLevel(const TokenPtr &token, const StackPtr<SyntaxStackElementPtr> &syntaxStack);

		// ***********************************************************

		bool checkSyntax(const StringPtr &recursionInfoLevel, bool functionWithBodyExt);

		// ***********************************************************

		void registerErrorWhileCalculate(const StringPtr &errorMessageToAdd);
		StringPtr makeStepDescription();

		// ***********************************************************

		void registerCalculationStepRecord(const CalcStepsRegisterPtr &calcStepsRegister, int stepsRegisteredCounter, const StringPtr &stepDescription);
		void registerCalculationStepRecord(const CalcStepsRegisterPtr &calcStepsRegister, int stepsRegisteredCounter, const StringPtr &stepDescription, double result) const;

		// ***********************************************************

		int calculateFirstAndFullyCompile(const CalcStepsRegisterPtr &calcStepsRegister, const StringPtr &stepDescription);
		int applySequenceFromCompilation(const CalcStepsRegisterPtr &calcStepsRegister, const StringPtr &stepDescription);

		// ***********************************************************

		double calculateInternal(const CalcStepsRegisterPtr &calcStepsRegister);
		double calculateInternal(CalcStepsRegisterPtr &calcStepsRegister) { return calculateInternal(CONST_CALC_STEPS_REGISTER(calcStepsRegister)); }

		// ***********************************************************

		void registerCompiledElement(CompiledElement::ToCall toCall, int position);
		void registerCompiledElement(CompiledElement::ToCall toCall, int position1, int position2);
		void f1ArgCalc(int pos);
		void f2ArgCalc(int pos);
		void f3ArgCalc(int pos);
		void variadicFunCalc(int pos);
		void calculusCalc(int pos);
		void rootOperCalc(int pos);
		void bolCalc(int pos);
		void bitwiseCalc(int pos);
		void initParserKeyWords();
		void modifyParserKeyWords();
		void validateParserKeyWords();
		bool checkArgumentNameInCalculusOperator(const TokenPtr &token);
		bool checkSpecialConstantName(const TokenPtr &token);
		bool checkOtherNumberBases(const TokenPtr &token);
		void addFractionToken(const TokenPtr &token);
		bool checkFraction(const TokenPtr &token);
		void initialTokensAdd(const TokenPtr &token);
		void assignKnownKeyword(const TokenPtr &token, const KeyWordPtr &keyWord);
		KeyWordPtr tryFindKnownKeyword(const StringPtr &tokenStr);
		bool tryAssignKnownKeyword(const TokenPtr &token);
		void initialTokensAddTokenPart(const TokenPartPtr &tokenPart);
		bool checkNumberNameManyImpliedMultiplication(const TokenPtr &token, bool parenthesisIsOnTheRight);
		void addToken(const StringPtr &tokenStr, const KeyWordPtr &keyWord, bool parenthesisIsOnTheRight);
		void addToken(const StringPtr &tokenStr, const KeyWordPtr &keyWord);
		void addUserDefinedKeyWords();
		void tokenizeExpressionString();
		void copyInitialTokens();
		void showArguments() const;
		void printSystemInfo(const StringPtr &info, bool withExpressionString) const;

		// package:
		/**
		 * Marker for internal processing
		 */
		static constexpr bool INTERNAL = true;
		StringPtr expressionString = StringInvariantEMPTY();
		ListPtr<ArgumentPtr> argumentsList = nullptr;
		ListPtr<FunctionPtr> functionsList = nullptr;
		ListPtr<ConstantPtr> constantsList = nullptr;

		ListPtr<TokenPtr> initialTokens = nullptr;

		ListPtr<ExpressionPtr> relatedExpressionsList = nullptr;
		double computingTime = 0;
		bool expressionWasModified = false;
		bool recursiveMode = false;
		bool disableRounding = false;

		// ***********************************************************

		static constexpr bool DISABLE_ROUNDING = true;
		static constexpr bool KEEP_ROUNDING_SETTINGS = false;

		// ***********************************************************

		bool UDFExpression = false;
		ListPtr<double> UDFVariadicParamsAtRunTime = nullptr;

		// ***********************************************************

		void addRelatedExpression(const ExpressionPtr &expression) override;
		void removeRelatedExpression(const ExpressionPtr &expression);
		void showRelatedExpressions() const;
		void setSyntaxStatus(bool syntaxStatus, const StringPtr &errorMessage);
		void markAsNotFullyCompiled();
		void setExpressionModifiedFlag();
		void setRecursiveMode();
		void disableRecursiveMode();
		void setForwardErrorMessage(bool forward);
		ListPtr<TokenPtr> getInitialTokens();
		void showParsing(int lPos, int rPos) const;
		void showTokens() const;
		static void showTokens(const ListPtr<TokenPtr> &tokensList);
		void showInitialTokens() const;
		ExpressionPtr cloneForThreadSafeInternal(const CloneCachePtr &cloneCache);

		mutable std::mutex mtx;


	private:

		SERIALIZE_DERIVED(6, PrimitiveElement,
			(
				NVP(expressionString)
				,NVP(expressionStringCleaned)
				,NVP(argumentsList)
				,NVP(functionsList)
				,NVP(constantsList)
				,NVP(relatedExpressionsList)
				,NVP(description)
				,NVP(keyWordsList)
				,NVP(initialTokens)
				,NVP(computingTime)
				,NVP(recursiveMode)
				,NVP(isFullyCompiled)
				,NVP(initialCompilationDetails)
				,NVP(compilationDetails)
				,NVP(syntaxStatus)
				,NVP(errorMessage)
				,NVP(errorMessageCalculate)
				,NVP(forwardErrorMessage)
				,NVP(disableRounding)
				,NVP(impliedMultiplicationMode)
				,NVP(impliedMultiplicationError)
				,NVP(unicodeKeyWordsEnabled)
				,NVP(parserKeyWordsOnly)
				,NVP(attemptToFixExpStrEnabled)
				,NVP(neverParseForImpliedMultiplication)
				,NVP(recursionCallPending)
				,NVP(recursionCallsCounter)
				,NVP(UDFExpression)
				,NVP(UDFVariadicParamsAtRunTime)
				,NVP(optionsChangesetNumber)
				,NVP(expressionWasModified)
				,NVP(internalClone)
				,NVP(verboseMode)
			)
		);

	public:
		void showKeyWords() const;

		STATIC_VARS_INITI_H;
	};

	// 0 =========================================================================

	inline ExpressionPtr new_Expression(const StringPtr &expressionString, bool parserKeyWordsOnly) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, parserKeyWordsOnly);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(StringPtr &expressionString, bool parserKeyWordsOnly) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, parserKeyWordsOnly);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(const String &expressionString, bool parserKeyWordsOnly) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, parserKeyWordsOnly);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(String &expressionString, bool parserKeyWordsOnly) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, parserKeyWordsOnly);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(const std::string &expressionString, bool parserKeyWordsOnly) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, parserKeyWordsOnly);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(std::string &expressionString, bool parserKeyWordsOnly) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, parserKeyWordsOnly);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(const Char *expressionString, bool parserKeyWordsOnly) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, parserKeyWordsOnly);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(const char *expressionString, bool parserKeyWordsOnly) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, parserKeyWordsOnly);
		expression->postConstructorSync();
		return expression;
	}

	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(const ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(elements);
		expression->postConstructorSync();
		return expression;
	}

	// 2 =========================================================================


	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(const StringPtr &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(StringPtr &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(const String &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(String &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(const std::string &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(std::string &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(const Char *expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(const char *expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(const StringPtr &expressionString,
	                                    const ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(StringPtr &expressionString, const ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(const StringPtr &expressionString, ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(StringPtr &expressionString, ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}


	inline ExpressionPtr new_Expression(const String &expressionString, const ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(String &expressionString, const ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(const String &expressionString, ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(String &expressionString, ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}


	// 3 =========================================================================

	inline ExpressionPtr new_Expression(const ExpressionPtr &expressionToClone, bool isThreadSafeClone,
	                                    const CloneCachePtr &cloneCache) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionToClone, isThreadSafeClone, cloneCache);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(ExpressionPtr &expressionToClone, bool isThreadSafeClone,
	                                    CloneCachePtr &cloneCache) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionToClone, isThreadSafeClone, cloneCache);
		expression->postConstructorSync();
		return expression;
	}

	// 4 =========================================================================

	inline ExpressionPtr new_Expression(const StringPtr &expressionString, const ListPtr<TokenPtr> &initialTokens,
	                                    const ListPtr<ArgumentPtr> &argumentsList,
	                                    const ListPtr<FunctionPtr> &functionsList,
	                                    const ListPtr<ConstantPtr> &constantsList, bool disableUlpRounding,
	                                    bool UDFExpression, const ListPtr<double> &UDFVariadicParamsAtRunTime) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, initialTokens, argumentsList,
		                                                        functionsList, constantsList, disableUlpRounding,
		                                                        UDFExpression, UDFVariadicParamsAtRunTime);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(StringPtr &expressionString, ListPtr<TokenPtr> &initialTokens,
	                                    ListPtr<ArgumentPtr> &argumentsList, ListPtr<FunctionPtr> &functionsList,
	                                    ListPtr<ConstantPtr> &constantsList, bool disableUlpRounding,
	                                    bool UDFExpression, ListPtr<double> &UDFVariadicParamsAtRunTime) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, initialTokens, argumentsList,
		                                                        functionsList, constantsList, disableUlpRounding,
		                                                        UDFExpression, UDFVariadicParamsAtRunTime);
		expression->postConstructorSync();
		return expression;
	}

	// 5 =========================================================================

	inline ExpressionPtr new_Expression(const StringPtr &expressionString, const ListPtr<ArgumentPtr> &argumentsList,
	                                    const ListPtr<FunctionPtr> &functionsList,
	                                    const ListPtr<ConstantPtr> &constantsList, bool internal, bool UDFExpression,
	                                    const ListPtr<double> &UDFVariadicParamsAtRunTime) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, argumentsList, functionsList,
		                                                        constantsList, internal, UDFExpression,
		                                                        UDFVariadicParamsAtRunTime);
		expression->postConstructorSync();
		return expression;
	}

	inline ExpressionPtr new_Expression(StringPtr &expressionString, ListPtr<ArgumentPtr> &argumentsList,
	                                    ListPtr<FunctionPtr> &functionsList, ListPtr<ConstantPtr> &constantsList,
	                                    bool internal, bool UDFExpression,
	                                    ListPtr<double> &UDFVariadicParamsAtRunTime) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, argumentsList, functionsList,
		                                                        constantsList, internal, UDFExpression,
		                                                        UDFVariadicParamsAtRunTime);
		expression->postConstructorSync();
		return expression;
	}

} // namespace org::mariuszgromada::math::mxparser

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_EXPRESSION_H
