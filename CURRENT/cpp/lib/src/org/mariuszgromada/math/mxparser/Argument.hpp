/*
 * @(#)Argument.hpp        6.1.0    2024-09-08
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_ARGUMENT_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_ARGUMENT_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/Expression.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/PrimitiveElement.hpp"
#include "org/mariuszgromada/math/mxparser/StringInvariant.hpp"
#include "org/mariuszgromada/math/mxparser/StringModel.hpp"
#include "org/mariuszgromada/math/mxparser/StringResources.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Integer.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.hpp"

namespace org::mariuszgromada::math::mxparser {

	USING_FRIENDS_NAMESPACES;

	class API_VISIBLE Argument : public PrimitiveElement {

		ADD_FRIENDS_OF(Argument);

	private:

		// ***********************************************************
		// ****************** CONSTRUCTORS HELPERS *******************
		// ***********************************************************

		void analyzeArgumentDefinitionString(bool isRecursive, bool forceDependent, const StringPtr &argumentDefinitionString, const ListPtr<PrimitiveElementPtr> &elements);
		void analyzeArgumentDefinitionString(bool isRecursive, bool forceDependent, const StringPtr &argumentDefinitionString);

	public:

		// ***********************************************************
		// ********************** CONSTRUCTORS ***********************
		// ***********************************************************

		/**
		 * Default constructor - creates argument based on the argument definition string.
		 *
		 * @param      argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 *
		 * @param      elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 */
		template<typename... PrimitiveElements>
		explicit Argument(const StringPtr &argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, argumentDefinitionString
			);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Argument(const String &argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Argument(const std::string &argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Argument(std::string &argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Argument(const Char *argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Argument(const char *argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		/**
		 * Default constructor - creates argument based on the argument definition string.
		 *
		 * @param      argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 *
		 * @param      forceDependent   If true parser will try to create dependent argument
		 * @param      elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 */
		template<typename... PrimitiveElements>
		Argument(const StringPtr &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, forceDependent, argumentDefinitionString
			);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		Argument(const String &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, forceDependent, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		/**
		 * Constructor - creates dependent argument(with hidden
		 * argument expression).
		 *
		 * @param      argumentName                  the argument name
		 * @param      argumentExpressionString      the argument expression string
		 * @param      elements                      Optional parameters (comma separated)
		 *                                           such as Arguments, Constants, Functions
		 *
		 * @see        Expression
		 * @see        PrimitiveElement
		 */
		template<typename... PrimitiveElements>
		Argument(const StringPtr &argumentName, const StringPtr &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		Argument(StringPtr &argumentName, StringPtr &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(CONST_STRING_PTR(argumentName), CONST_STRING_PTR(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		Argument(const String &argumentName, const String &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		Argument(String &argumentName, String &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		Argument(const std::string &argumentName, const std::string &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}


		template<typename... PrimitiveElements>
		Argument(std::string &argumentName, std::string &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		Argument(const Char *argumentName, const Char *argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		Argument(const char *argumentName, const char *argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		// ***********************************************************


		Argument(const StringPtr &argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, argumentValue);
			iAmFullyConstructed = true;
		}

		Argument(const String &argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentValue);
			iAmFullyConstructed = true;
		}

		Argument(const std::string &argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentValue);
			iAmFullyConstructed = true;
		}

		Argument(std::string &argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentValue);
			iAmFullyConstructed = true;
		}

		Argument(const Char *argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentValue);
			iAmFullyConstructed = true;
		}

		Argument(const char *argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentValue);
			iAmFullyConstructed = true;
		}

		Argument(const StringPtr &argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, (double) argumentValue);
			iAmFullyConstructed = true;
		}

		Argument(const String &argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), (double) argumentValue);
			iAmFullyConstructed = true;
		}

		Argument(const std::string &argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), (double) argumentValue);
			iAmFullyConstructed = true;
		}

		Argument(std::string &argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), (double) argumentValue);
			iAmFullyConstructed = true;
		}

		Argument(const Char *argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), (double) argumentValue);
			iAmFullyConstructed = true;
		}

		Argument(const char *argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), (double) argumentValue);
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		Argument(const StringPtr &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, argumentExtension);
			iAmFullyConstructed = true;
		}
		Argument(const StringPtr &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, argumentExtension);
			iAmFullyConstructed = true;
		}
		Argument(StringPtr &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, argumentExtension);
			iAmFullyConstructed = true;
		}
		Argument(StringPtr &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, argumentExtension);
			iAmFullyConstructed = true;
		}

		Argument(const String &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		Argument(const String &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		Argument(String &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		Argument(String &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}

		Argument(const std::string &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		Argument(const std::string &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}

		Argument(std::string &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		Argument(std::string &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}

		Argument(const Char *argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		Argument(const Char *argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}

		Argument(const char *argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		Argument(const char *argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}

		// ***********************************************************
		// ************* API for dependency management ***************
		// ***********************************************************

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
		void defineArguments(const Char *argumentName) { defineArguments(S(argumentName)); }
		void defineArguments(const std::string &argumentName) { defineArguments(S(argumentName)); }
		void defineArguments(const char *argumentName) { defineArguments(S(argumentName)); }

		// ***********************************************************

		int getArgumentsNumber() const;

		// ***********************************************************

		int getArgumentIndex(const StringPtr &argumentName) const;

		int getArgumentIndex(const String &argumentName) const { return getArgumentIndex(S(argumentName)); }
		int getArgumentIndex(const Char *argumentName) const { return getArgumentIndex(S(argumentName)); }
		int getArgumentIndex(const std::string &argumentName) const { return getArgumentIndex(S(argumentName)); }
		int getArgumentIndex(const char *argumentName) const { return getArgumentIndex(S(argumentName)); }

		// ***********************************************************

		ArgumentPtr getArgument(int argumentIndex) const;

		// ***********************************************************

		ArgumentPtr getArgument(const StringPtr &argumentName) const;

		ArgumentPtr getArgument(const String &argumentName) const { return getArgument(S(argumentName)); }
		ArgumentPtr getArgument(const Char *argumentName) const { return getArgument(S(argumentName)); }
		ArgumentPtr getArgument(const std::string &argumentName) const { return getArgument(S(argumentName)); }
		ArgumentPtr getArgument(const char *argumentName) const { return getArgument(S(argumentName)); }

		// ***********************************************************

		template<typename... StringsOrArguments>
		void removeArguments(StringsOrArguments &&... arguments) {
			EXECUTE_FUNCTION_VARIADIC_WITH_STRING(VariadicProcessorStringOrArgument, arguments, removeArguments);
		}

		void removeArguments(const ListPtr<StringPtr> &argumentsNames);
		void removeArguments(ListPtr<StringPtr> &argumentsNames) { removeArguments(CONST_LIST_STRING(argumentsNames)); }

		void removeArguments(const StringPtr &argumentName);
		void removeArguments(StringPtr &argumentName) { removeArguments(CONST_STRING_PTR(argumentName)); }
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

		void defineConstant(const StringPtr &constantName, double constantValue);
		void defineConstant(const String &constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		void defineConstant(const Char *constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		void defineConstant(const std::string &constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		void defineConstant(const char *constantName, double constantValue) { defineConstant(S(constantName), constantValue); }

		// ***********************************************************

		int getConstantsNumber() const;

		// ***********************************************************

		int getConstantIndex(const StringPtr &constantName) const;

		int getConstantIndex(const String &constantName) const { return getConstantIndex(S(constantName)); }
		int getConstantIndex(const Char *constantName) const { return getConstantIndex(S(constantName)); }
		int getConstantIndex(const std::string &constantName) const { return getConstantIndex(S(constantName)); }
		int getConstantIndex(const char *constantName) const { return getConstantIndex(S(constantName)); }

		ConstantPtr getConstant(int constantIndex) const;

		// ***********************************************************

		ConstantPtr getConstant(const StringPtr &constantName) const;

		ConstantPtr getConstant(const String &constantName) const { return getConstant(S(constantName)); }
		ConstantPtr getConstant(const Char *constantName) const { return getConstant(S(constantName)); }
		ConstantPtr getConstant(const std::string &constantName) const { return getConstant(S(constantName)); }
		ConstantPtr getConstant(const char *constantName) const { return getConstant(S(constantName)); }

		// ***********************************************************

		template<typename... StringsOrConstants>
		void removeConstants(StringsOrConstants &&... constants) {
			EXECUTE_FUNCTION_VARIADIC_WITH_STRING(VariadicProcessorStringOrConstant, constants, removeConstants);
		}

		void removeConstants(const ListPtr<StringPtr> &constantsNames);
		void removeConstants(ListPtr<StringPtr> &constantsNames) { removeConstants(CONST_LIST_STRING(constantsNames)); }
		void removeConstants(const StringPtr &constantName);
		void removeConstants(StringPtr &constantName) { removeConstants(CONST_STRING_PTR(constantName)); }
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

		int getFunctionsNumber() const;

		// ***********************************************************

		int getFunctionIndex(const StringPtr &functionName) const;

		int getFunctionIndex(const String &functionName) const { return getFunctionIndex(S(functionName)); }
		int getFunctionIndex(const Char *functionName) const { return getFunctionIndex(S(functionName)); }
		int getFunctionIndex(const std::string &functionName) const { return getFunctionIndex(S(functionName)); }
		int getFunctionIndex(const char *functionName) const { return getFunctionIndex(S(functionName)); }

		// ***********************************************************

		FunctionPtr getFunction(int functionIndex) const;

		// ***********************************************************

		FunctionPtr getFunction(const StringPtr &functionName) const;

		FunctionPtr getFunction(const String &functionName) const { return getFunction(S(functionName)); }
		FunctionPtr getFunction(const Char *functionName) const { return getFunction(S(functionName)); }
		FunctionPtr getFunction(const std::string &functionName) const { return getFunction(S(functionName)); }
		FunctionPtr getFunction(const char *functionName) const { return getFunction(S(functionName)); }

		// ***********************************************************

		template<typename... StringsOrFunctions>
		void removeFunctions(StringsOrFunctions &&... functions) {
			EXECUTE_FUNCTION_VARIADIC_WITH_STRING(VariadicProcessorStringOrFunction, functions, removeFunctions);
		}

		void removeFunctions(const ListPtr<StringPtr> &functionsNames);
		void removeFunctions(ListPtr<StringPtr> &functionsNames) { removeFunctions(CONST_LIST_STRING(functionsNames)); }
		void removeFunctions(const StringPtr &functionName);
		void removeFunctions(StringPtr &functionName) { removeFunctions(CONST_STRING_PTR(functionName)); }
		void removeFunctions(const ListPtr<FunctionPtr> &functions);
		void removeFunctions(ListPtr<FunctionPtr> &functions) { removeFunctions(CONST_LIST_FUNCTION(functions)); }
		void removeFunctions(const FunctionPtr &function);
		void removeFunctions(FunctionPtr &function) { removeFunctions(CONST_FUNCTION(function)); }

		// ***********************************************************

		void removeAllFunctions();

		// ***********************************************************

		// ***********************************************************
		// *********** API is for THIS object management *************
		// ***********************************************************

		void defineArgument(const StringPtr &argumentName, double argumentValue);
		void defineArgument(const String &argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		void defineArgument(const Char *argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		void defineArgument(const std::string &argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		void defineArgument(const char *argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }

		// ***********************************************************

		void setDescription(const StringPtr &description);
		void setDescription(const String &description) { setDescription(S(description)); }
		void setDescription(const Char *description) { setDescription(S(description)); }
		void setDescription(const std::string &description) { setDescription(S(description)); }
		void setDescription(const char *description) { setDescription(S(description)); }

		StringPtr getDescription() const;

		// ***********************************************************

		void setArgumentName(const StringPtr &argumentName);

		void setArgumentName(const String &argumentName) { setArgumentName(S(argumentName)); }
		void setArgumentName(const Char *argumentName) { setArgumentName(S(argumentName)); }
		void setArgumentName(const std::string &argumentName) { setArgumentName(S(argumentName)); }
		void setArgumentName(const char *argumentName) { setArgumentName(S(argumentName)); }

		StringPtr getArgumentName() const;

		// ***********************************************************

		void setArgumentExpressionString(const StringPtr &argumentExpressionString);

		void setArgumentExpressionString(const String &argumentExpressionString) { setArgumentExpressionString(S(argumentExpressionString)); }
		void setArgumentExpressionString(const Char *argumentExpressionString) { setArgumentExpressionString(S(argumentExpressionString)); }
		void setArgumentExpressionString(const std::string &argumentExpressionString) { setArgumentExpressionString(S(argumentExpressionString)); }
		void setArgumentExpressionString(const char *argumentExpressionString) { setArgumentExpressionString(S(argumentExpressionString)); }

		StringPtr getArgumentExpressionString() const;

		// ***********************************************************

		bool checkSyntax();

		StringPtr getErrorMessage() const;

		// ***********************************************************

		void setArgumentValue(double argumentValue);

		double getArgumentValue();
		double getArgumentValue(const CalcStepsRegisterPtr &calcStepsRegister);
		double getArgumentValue(CalcStepsRegisterPtr &calcStepsRegister) { return getArgumentValue(CONST_CALC_STEPS_REGISTER(calcStepsRegister)); }
		double getComputingTime() const;

		// ***********************************************************

		void setVerboseMode();
		void setSilentMode();
		bool getVerboseMode() const;

		// ***********************************************************

		bool getRecursiveMode() const;
		int getArgumentType() const;
		int getArgumentBodyType() const;

		// ***********************************************************

		static constexpr int TYPE_ID = 101;
		static StringPtr TYPE_DESC;

		// ***********************************************************

		/**
		 * Type indicator for free argument->
		 */
		static constexpr int FREE_ARGUMENT = 1;
		/**
		 * Type indicator for dependent argument->
		 */
		static constexpr int DEPENDENT_ARGUMENT = 2;
		/**
		 * Type indicator for recursive argument->
		 */
		static constexpr int RECURSIVE_ARGUMENT = 3;

		// ***********************************************************

		/**
		 * Argument with body based on the value or expression string.
		 *
		 * @see Argument#getArgumentBodyType()
		 */
		static constexpr int BODY_RUNTIME = 1;
		/**
		 * Argument with body based on the extended code.
		 *
		 * @see ArgumentExtension
		 * @see Argument#getArgumentBodyType()
		 */
		static constexpr int BODY_EXTENDED = 2;

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
		 * @deprecated Planned to be removed, use {SYNTAX_ERROR} instead
		 */
		// @Deprecated
		static constexpr bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;

		// ***********************************************************

		/**
		 * Double::NaN as initial value of the argument->
		 */
		static constexpr double ARGUMENT_INITIAL_VALUE = Double::NaN;

		// ***********************************************************

		/**
		 * When argument was not found
		 */
		static constexpr int NOT_FOUND = Expression::NOT_FOUND;

		// ***********************************************************

		ArgumentPtr clone();

		virtual ArgumentPtr cloneForThreadSafe();

		// ***********************************************************

	public: /* should be private */
		Argument(bool isRecursive, const StringPtr &argumentDefinitionString);

		Argument(bool isRecursive, const StringPtr &argumentDefinitionString,
		         const ListPtr<PrimitiveElementPtr> &elements);

		Argument(const ArgumentPtr &argumentToClone, bool isThreadSafeClone, const CloneCachePtr &cloneCache);

		Argument() : PrimitiveElement(TYPE_ID) {};

	protected:
		bool syntaxStatusDefinition = SYNTAX_STATUS_UNKNOWN;
		ArgumentPtr n = nullptr;

	private:
		static StringPtr StringInvariantEMPTY();

		void executeConstrutorConstPPEnonTemplatePart(const StringPtr &argumentName, const StringPtr &argumentExpressionString, const ListPtr<PrimitiveElementPtr>& paramsPrimitiveElement);
		
		template<typename... PrimitiveElements>
		void executeConstrutorConstPPE(const StringPtr &argumentName, const StringPtr &argumentExpressionString, PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				executeConstrutorConstPPEnonTemplatePart, argumentName, argumentExpressionString
			);
		}

		void executeConstrutorConst(const StringPtr &argumentName, double argumentValue);
		void executeConstrutorConst(const StringPtr &argumentName, const ArgumentExtensionPtr &argumentExtension);
		
		static const ListPtr<ArgumentPtr> LIST_PTR_OF_ARGUMENT_PTR_ALWAYS_EMPTY;
		static constexpr bool SYNTAX_STATUS_UNKNOWN = SYNTAX_ERROR;

		int argumentBodyType = BODY_RUNTIME;
		ArgumentExtensionPtr argumentExtension = nullptr;
		StringPtr description = StringInvariantEMPTY();
		StringPtr argumentName = StringInvariantEMPTY();
		StringPtr errorMessageDefinition = StringInvariantEMPTY();
		int recursionCallsCounter = 0;

		static StringPtr buildErrorMessageInvalidArgumentName(const StringPtr &argumentName);

		static StringPtr buildErrorMessageInvalidArgumentDefinition(const StringPtr &argumentDefinitionString, const StringPtr &argumentDefinitionExamples);
		static StringPtr buildErrorMessageInvalidArgumentDefinition(const StringPtr &argumentDefinitionString);
		void registerNoSyntaxErrorInDefinition();
		void registerSyntaxErrorInDefinition(const StringPtr &errorMessage);

		// package:
		ExpressionPtr argumentExpression = nullptr;
		int argumentType = FREE_ARGUMENT;
		double argumentValue = ARGUMENT_INITIAL_VALUE;
		double computingTime = 0;
		// 2 more vs Expression as to reach Expression->calculate()
		// from getArgumentValue() requires additional steps
		static int MAX_RECURSION_CALLS;

		static void refreshMaxAllowedRecursionDepth();
		void addRelatedExpression(const ExpressionPtr &expression) override;
		void removeRelatedExpression(const ExpressionPtr &expression);
		void setExpressionModifiedFlags();
		virtual ArgumentPtr cloneForThreadSafeInternal(const CloneCachePtr &cloneCache);
		virtual ArgumentPtr cloneForThreadSafeInternal(const ExpressionPtr &relatedExpressionThatInitiatedClone, const CloneCachePtr &cloneCache);
		
		SERIALIZE_DERIVED(2, PrimitiveElement,
			(
				NVP(argumentName)
				,NVP(argumentExpression)
				,NVP(argumentType)
				,NVP(argumentBodyType)
				,NVP(argumentExtension)
				,NVP(description)
				,NVP(recursionCallsCounter)
				,NVP(argumentValue)
				,NVP(computingTime)
				,NVP(errorMessageDefinition)
				,NVP(syntaxStatusDefinition)
				,NVP(n)
			)
		);


	public:
		STATIC_VARS_INITI_H;

	};

	// ***********************************************************
	// ************************ WRAPPERS *************************
	// ***********************************************************

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const StringPtr &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(StringPtr &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(argumentDefinitionString), FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const String &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(String &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING(argumentDefinitionString), FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const StringPtr &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(StringPtr &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(argumentDefinitionString), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const std::string &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(S(argumentDefinitionString)), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(std::string &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(S(argumentDefinitionString)), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const Char *argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(S(argumentDefinitionString)), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const char *argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(S(argumentDefinitionString)), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const String &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(String &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING(argumentDefinitionString), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const std::string &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(std::string &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const Char *argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const char *argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const StringPtr &argumentName, const StringPtr &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(StringPtr &argumentName, StringPtr &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(argumentName), CONST_STRING_PTR(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const String &argumentName, const String &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(String &argumentName, String &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING(argumentName), CONST_STRING(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const std::string &argumentName, const std::string &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(std::string &argumentName, std::string &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const Char *argumentName, const Char *argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const char *argumentName, const char *argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	inline ArgumentPtr new_Argument(const StringPtr &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(StringPtr &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(argumentName), argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(const String &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(String &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING(argumentName), argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(const std::string &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(std::string &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(const Char *argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(const char *argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}


	inline ArgumentPtr new_Argument(const StringPtr &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(StringPtr &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(argumentName), argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(const String &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(String &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING(argumentName), argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(const std::string &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(std::string &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(const Char *argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(const char *argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	inline ArgumentPtr new_Argument(const StringPtr &argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(const StringPtr &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(StringPtr &argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(StringPtr &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(const String &argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(const String &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(String &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(const std::string &argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(const std::string &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(std::string &argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(std::string &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(const Char *argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(const Char *argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(const char *argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	inline ArgumentPtr new_Argument(const char *argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	inline ArgumentPtr new_Argument(bool isRecursive, const StringPtr &argumentDefinitionString) {
		ArgumentPtr argument = std::make_shared<Argument>(isRecursive, argumentDefinitionString);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(bool isRecursive, StringPtr &argumentDefinitionString) {
		ArgumentPtr argument = std::make_shared<Argument>(isRecursive, CONST_STRING_PTR(argumentDefinitionString));
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	inline ArgumentPtr new_Argument(bool isRecursive, const StringPtr &argumentDefinitionString, const ListPtr<PrimitiveElementPtr> &elements) {
		ArgumentPtr argument = std::make_shared<Argument>(isRecursive, argumentDefinitionString, elements);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(bool isRecursive, StringPtr &argumentDefinitionString, ListPtr<PrimitiveElementPtr> &elements) {
		ArgumentPtr argument = std::make_shared<Argument>(isRecursive, CONST_STRING_PTR(argumentDefinitionString), CONST_LIST_PRIMITIVE_ELEMENT(elements));
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	inline ArgumentPtr new_Argument(const ArgumentPtr &argumentToClone, bool isThreadSafeClone, const CloneCachePtr &cloneCache) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentToClone, isThreadSafeClone, cloneCache);
		argument->postConstructorSync();
		return argument;
	}

	inline ArgumentPtr new_Argument(ArgumentPtr &argumentToClone, bool isThreadSafeClone, CloneCachePtr &cloneCache) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_ARGUMENT(argumentToClone), isThreadSafeClone, CONST_CLONE_CACHE(cloneCache));
		argument->postConstructorSync();
		return argument;
	}

} // namespace org::mariuszgromada::math::mxparser

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_ARGUMENT_H
