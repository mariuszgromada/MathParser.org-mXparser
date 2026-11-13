/*
 * @(#)Argument.hpp        6.2.0    2026-11-13
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
#include <stdexcept>

namespace org::mariuszgromada::math::mxparser {

	USING_FRIENDS_NAMESPACES;

	class API_VISIBLE Argument : public PrimitiveElement {

		ADD_FRIENDS_OF(Argument);
		friend struct OwnershipTestAccess;

	private:

		// ***********************************************************
		// ****************** CONSTRUCTORS HELPERS *******************
		// ***********************************************************

		void analyzeArgumentDefinitionString(bool isRecursive, bool forceDependent, const StringPtr &argumentDefinitionString, const ListPtr<PrimitiveElementPtr> &elements);
		void analyzeArgumentDefinitionString(bool isRecursive, bool forceDependent, const StringPtr &argumentDefinitionString);

	public:
		/**
		 * \brief Gets argument value and registers all the calculation steps
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * \return direct argument value for free argument,
		 *             otherwise returns calculated argument value
		 *             based on the argument expression.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::Argument::getArgumentValue()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		double getArgumentValueWithCancel(int cancelId);

		Argument(const Argument& other) noexcept;
		Argument(Argument&& other) noexcept;
		Argument& operator=(const Argument& other) noexcept;
		Argument& operator=(Argument&& other) noexcept;


		// ***********************************************************
		// ********************** CONSTRUCTORS ***********************
		// ***********************************************************

		/**
		 * \brief Default constructor - creates argument based on the argument definition string.
		 * \param argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Argument(const StringPtr &argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, argumentDefinitionString
			);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Default constructor - creates argument based on the argument definition string.
		 * \param argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Argument(const String &argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Default constructor - creates argument based on the argument definition string.
		 * \param argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Argument(const std::string &argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Default constructor - creates argument based on the argument definition string.
		 * \param argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Argument(std::string &argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Default constructor - creates argument based on the argument definition string.
		 * \param argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Argument(const Char *argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Default constructor - creates argument based on the argument definition string.
		 * \param argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Argument(const char *argumentDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, false, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		/**
		 * \brief Default constructor - creates argument based on the argument definition string.
		 * \param argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 * \param forceDependent   If true parser will try to create dependent argument
		 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		Argument(const StringPtr &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, forceDependent, argumentDefinitionString
			);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Default constructor - creates argument based on the argument definition string.
		 * \param argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 * \param forceDependent   If true parser will try to create dependent argument
		 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		Argument(const String &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				analyzeArgumentDefinitionString, false, forceDependent, S(argumentDefinitionString)
			);
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		/**
		 * \brief Constructor - creates dependent argument(with hidden
		 * argument expression).
		 * \param argumentName                  the argument name
		 * \param argumentExpressionString      the argument expression string
		 * \param elements                      Optional parameters (comma separated)
		 *                                           such as Arguments, Constants, Functions
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		Argument(const StringPtr &argumentName, const StringPtr &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates dependent argument(with hidden
		 * argument expression).
		 * \param argumentName                  the argument name
		 * \param argumentExpressionString      the argument expression string
		 * \param elements                      Optional parameters (comma separated)
		 *                                           such as Arguments, Constants, Functions
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		Argument(StringPtr &argumentName, StringPtr &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(CONST_STRING_PTR(argumentName), CONST_STRING_PTR(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates dependent argument(with hidden
		 * argument expression).
		 * \param argumentName                  the argument name
		 * \param argumentExpressionString      the argument expression string
		 * \param elements                      Optional parameters (comma separated)
		 *                                           such as Arguments, Constants, Functions
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		Argument(const String &argumentName, const String &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates dependent argument(with hidden
		 * argument expression).
		 * \param argumentName                  the argument name
		 * \param argumentExpressionString      the argument expression string
		 * \param elements                      Optional parameters (comma separated)
		 *                                           such as Arguments, Constants, Functions
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		Argument(String &argumentName, String &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates dependent argument(with hidden
		 * argument expression).
		 * \param argumentName                  the argument name
		 * \param argumentExpressionString      the argument expression string
		 * \param elements                      Optional parameters (comma separated)
		 *                                           such as Arguments, Constants, Functions
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		Argument(const std::string &argumentName, const std::string &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}


		/**
		 * \brief Constructor - creates dependent argument(with hidden
		 * argument expression).
		 * \param argumentName                  the argument name
		 * \param argumentExpressionString      the argument expression string
		 * \param elements                      Optional parameters (comma separated)
		 *                                           such as Arguments, Constants, Functions
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		Argument(std::string &argumentName, std::string &argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates dependent argument(with hidden
		 * argument expression).
		 * \param argumentName                  the argument name
		 * \param argumentExpressionString      the argument expression string
		 * \param elements                      Optional parameters (comma separated)
		 *                                           such as Arguments, Constants, Functions
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		Argument(const Char *argumentName, const Char *argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates dependent argument(with hidden
		 * argument expression).
		 * \param argumentName                  the argument name
		 * \param argumentExpressionString      the argument expression string
		 * \param elements                      Optional parameters (comma separated)
		 *                                           such as Arguments, Constants, Functions
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		Argument(const char *argumentName, const char *argumentExpressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConstPPE(S(argumentName), S(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		// ***********************************************************


		/**
		 * \brief Constructor - creates free argument.
		 * \param argumentName   the argument name
		 * \param argumentValue  the argument value
		 */
		Argument(const StringPtr &argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, argumentValue);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,double)
		 */
		Argument(const String &argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentValue);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,double)
		 */
		Argument(const std::string &argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentValue);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,double)
		 */
		Argument(std::string &argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentValue);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,double)
		 */
		Argument(const Char *argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentValue);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,double)
		 */
		Argument(const char *argumentName, double argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentValue);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,double)
		 */
		Argument(const StringPtr &argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, (double) argumentValue);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,double)
		 */
		Argument(const String &argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), (double) argumentValue);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,double)
		 */
		Argument(const std::string &argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), (double) argumentValue);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,double)
		 */
		Argument(std::string &argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), (double) argumentValue);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,double)
		 */
		Argument(const Char *argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), (double) argumentValue);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,double)
		 */
		Argument(const char *argumentName, int argumentValue) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), (double) argumentValue);
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		/**
		 * \brief Constructor for argument definition based on
		 * your own source code - this is via implementation
		 * of ArgumentExtension interface.
		 * \param argumentName       Argument name
		 * \param argumentExtension  Your own source code
		 */
		Argument(const StringPtr &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, argumentExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(const StringPtr &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, argumentExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(StringPtr &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, argumentExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(StringPtr &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(argumentName, argumentExtension);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(const String &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(const String &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(String &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(String &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(const std::string &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(const std::string &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(std::string &argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(std::string &argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(const Char *argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(const Char *argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(const char *argumentName, const ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::Argument(const StringPtr &,const ArgumentExtensionPtr &)
		 */
		Argument(const char *argumentName, ArgumentExtensionPtr &argumentExtension) : PrimitiveElement(TYPE_ID) {
			executeConstrutorConst(S(argumentName), argumentExtension);
			iAmFullyConstructed = true;
		}

		// ***********************************************************
		// ************* API for dependency management ***************
		// ***********************************************************

		// ***********************************************************

		/**
		 * \brief Adds user defined elements (such as: Arguments, Constants, Functions)
		 * to the argument expressions.
		 * \param elements Elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		void addDefinitions(PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorUdfs, elements, addDefinitions);
		}

		/**
		 * \brief Adds user defined elements (such as: Arguments, Constants, Functions)
		 * to the argument expressions.
		 * \param elements Elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void addDefinitions(const ListPtr<PrimitiveElementPtr> &elements);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::addDefinitions(const ListPtr< PrimitiveElementPtr > &)
		 */
		void addDefinitions(ListPtr<PrimitiveElementPtr> &elements) { addDefinitions(CONST_LIST_PRIMITIVE_ELEMENT(elements)); }

		/**
		 * \brief Adds user defined elements (such as: Arguments, Constants, Functions)
		 * to the argument expressions.
		 * \param element Elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void addDefinitions(const PrimitiveElementPtr &element);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::addDefinitions(const PrimitiveElementPtr &)
		 */
		void addDefinitions(PrimitiveElementPtr &element) { addDefinitions(CONST_PRIMITIVE_ELEMENT(element)); }

		// ***********************************************************

		/**
		 * \brief Removes user defined elements (such as: Arguments, Constants, Functions)
		 * from the argument expressions.
		 * \param elements Elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		void removeDefinitions(PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_VARIADIC(VariadicProcessorUdfs, elements, removeDefinitions);
		}

		/**
		 * \brief Removes user defined elements (such as: Arguments, Constants, Functions)
		 * from the argument expressions.
		 * \param elements Elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void removeDefinitions(const ListPtr<PrimitiveElementPtr> &elements);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeDefinitions(const ListPtr< PrimitiveElementPtr > &)
		 */
		void removeDefinitions(ListPtr<PrimitiveElementPtr> &elements) { removeDefinitions(CONST_LIST_PRIMITIVE_ELEMENT(elements)); }

		/**
		 * \brief Removes user defined elements (such as: Arguments, Constants, Functions)
		 * from the argument expressions.
		 * \param element Elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void removeDefinitions(const PrimitiveElementPtr &element);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeDefinitions(const PrimitiveElementPtr &)
		 */
		void removeDefinitions(PrimitiveElementPtr &element) { removeDefinitions(CONST_PRIMITIVE_ELEMENT(element)); }

		// ***********************************************************

		/**
		 * \brief Adds arguments (variadic) to the argument expression definition.
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
		 * \brief Adds arguments (variadic) to the argument expression definition.
		 * \param arguments           the arguments list
		 *                                 (comma separated list)
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void addArguments(const ListPtr<ArgumentPtr> &arguments);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::addArguments(const ListPtr< ArgumentPtr > &)
		 */
		void addArguments(ListPtr<ArgumentPtr> &arguments) { addArguments(CONST_LIST_ARGUMENT(arguments)); }

		/**
		 * \brief Adds arguments (variadic) to the argument expression definition.
		 * \param argument           the arguments list
		 *                                 (comma separated list)
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void addArguments(const ArgumentPtr &argument);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::addArguments(const ArgumentPtr &)
		 */
		void addArguments(ArgumentPtr &argument) { addArguments(CONST_ARGUMENT(argument)); }

		// ***********************************************************

		/**
		 * \brief Enables to define the arguments (associated with
		 * the argument expression) based on the given arguments names.
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
		 * the argument expression) based on the given arguments names.
		 * \param argumentsNames      the arguments names (variadic)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void defineArguments(const ListPtr<StringPtr> &argumentsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineArguments(const ListPtr< StringPtr > &)
		 */
		void defineArguments(ListPtr<StringPtr> &argumentsNames) { defineArguments(CONST_LIST_STRING(argumentsNames)); }

		/**
		 * \brief Enables to define the arguments (associated with
		 * the argument expression) based on the given arguments names.
		 * \param argumentName      the arguments names (variadic)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void defineArguments(const StringPtr &argumentName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineArguments(const StringPtr &)
		 */
		void defineArguments(StringPtr &argumentName) { defineArguments(CONST_STRING_PTR(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineArguments(const StringPtr &)
		 */
		void defineArguments(const Char *argumentName) { defineArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineArguments(const StringPtr &)
		 */
		void defineArguments(const std::string &argumentName) { defineArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineArguments(const StringPtr &)
		 */
		void defineArguments(const char *argumentName) { defineArguments(S(argumentName)); }

		// ***********************************************************

		/**
		 * \brief Gets number of arguments associated with the argument expression.
		 * \return The number of arguments (int &gt;= 0)
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		int getArgumentsNumber() const;

		// ***********************************************************

		/**
		 * \brief Gets argument index from the argument expression.
		 * \param argumentName        the argument name
		 * \return The argument index if the argument name was found,
		 *             otherwise returns Argument.NOT_FOUND
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		int getArgumentIndex(const StringPtr &argumentName) const;

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const String &argumentName) const { return getArgumentIndex(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const Char *argumentName) const { return getArgumentIndex(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const std::string &argumentName) const { return getArgumentIndex(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const char *argumentName) const { return getArgumentIndex(S(argumentName)); }

		// ***********************************************************

		/**
		 * \brief Gets argument from the argument expression.
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
		 * \brief Gets argument from the argument expression.
		 * \param argumentName        the argument name
		 * \return The argument if the argument name was found,
		 *             otherwise returns null.
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		ArgumentPtr getArgument(const StringPtr &argumentName) const;

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const String &argumentName) const { return getArgument(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const Char *argumentName) const { return getArgument(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const std::string &argumentName) const { return getArgument(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const char *argumentName) const { return getArgument(S(argumentName)); }

		// ***********************************************************

		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the argument expression.
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
		 * associated with the argument expression.
		 * \param argumentsNames      the arguments names
		 *                                 (variadic parameters) comma separated
		 *                                 list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const ListPtr<StringPtr> &argumentsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeArguments(const ListPtr< StringPtr > &)
		 */
		void removeArguments(ListPtr<StringPtr> &argumentsNames) { removeArguments(CONST_LIST_STRING(argumentsNames)); }

		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the argument expression.
		 * \param argumentName      the arguments names
		 *                                 (variadic parameters) comma separated
		 *                                 list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const StringPtr &argumentName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeArguments(const StringPtr &)
		 */
		void removeArguments(StringPtr &argumentName) { removeArguments(CONST_STRING_PTR(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeArguments(const StringPtr &)
		 */
		void removeArguments(const Char *argumentName) { removeArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeArguments(const StringPtr &)
		 */
		void removeArguments(const std::string &argumentName) { removeArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeArguments(const StringPtr &)
		 */
		void removeArguments(const char *argumentName) { removeArguments(S(argumentName)); }

		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the argument expression.
		 * \param arguments           the arguments (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const ListPtr<ArgumentPtr> &arguments);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeArguments(const ListPtr< ArgumentPtr > &)
		 */
		void removeArguments(ListPtr<ArgumentPtr> &arguments) { removeArguments(CONST_LIST_ARGUMENT(arguments)); }

		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the argument expression.
		 * \param argument           the arguments (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const ArgumentPtr &argument);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeArguments(const ArgumentPtr &)
		 */
		void removeArguments(ArgumentPtr &argument) { removeArguments(CONST_ARGUMENT(argument)); }

		// ***********************************************************

		/**
		 * \brief Removes all arguments associated with the argument expression.
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeAllArguments();

		// ***********************************************************

		/**
		 * \brief Adds constants (variadic parameters) to the argument expression definition.
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
		 * \brief Adds constants to the argument expression definition.
		 * \param constants       the list of constants
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void addConstants(const ListPtr<ConstantPtr> &constants);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::addConstants(const ListPtr< ConstantPtr > &)
		 */
		void addConstants(ListPtr<ConstantPtr> &constants) { addConstants(CONST_LIST_CONSTANT(constants)); }

		/**
		 * \brief Adds constants (variadic parameters) to the argument expression definition.
		 * \param constant           the constants
		 *                                 (comma separated list)
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void addConstants(const ConstantPtr &constant);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::addConstants(const ConstantPtr &)
		 */
		void addConstants(ConstantPtr &constant) { addConstants(CONST_CONSTANT(constant)); }

		// ***********************************************************

		/**
		 * \brief Enables to define the constant (associated with
		 * the argument expression) based on the constant name and
		 * constant value.
		 * \param constantName        the constant name
		 * \param constantValue       the constant value
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void defineConstant(const StringPtr &constantName, double constantValue);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineConstant(const StringPtr &,double)
		 */
		void defineConstant(const String &constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineConstant(const StringPtr &,double)
		 */
		void defineConstant(const Char *constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineConstant(const StringPtr &,double)
		 */
		void defineConstant(const std::string &constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineConstant(const StringPtr &,double)
		 */
		void defineConstant(const char *constantName, double constantValue) { defineConstant(S(constantName), constantValue); }

		// ***********************************************************

		/**
		 * \brief Gets number of constants associated with the argument expression.
		 * \return number of constants (int &gt;= 0)
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		int getConstantsNumber() const;

		// ***********************************************************

		/**
		 * \brief Gets constant index associated with the argument expression.
		 * \param constantName        the constant name
		 * \return Constant index if constant name was found,
		 *             otherwise return Constant.NOT_FOUND.
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		int getConstantIndex(const StringPtr &constantName) const;

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const String &constantName) const { return getConstantIndex(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const Char *constantName) const { return getConstantIndex(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const std::string &constantName) const { return getConstantIndex(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const char *constantName) const { return getConstantIndex(S(constantName)); }

		/**
		 * \brief Gets constant associated with the argument expression.
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
		 * \brief Gets constant associated with the argument expression.
		 * \param constantName        the constant name
		 * \return Constant if constant name was found,
		 *             otherwise return null.
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		ConstantPtr getConstant(const StringPtr &constantName) const;

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const String &constantName) const { return getConstant(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const Char *constantName) const { return getConstant(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const std::string &constantName) const { return getConstant(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const char *constantName) const { return getConstant(S(constantName)); }

		// ***********************************************************

		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the argument expression
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
		 * associated with the argument expression.
		 * \param constantsNames      the constants names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const ListPtr<StringPtr> &constantsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeConstants(const ListPtr< StringPtr > &)
		 */
		void removeConstants(ListPtr<StringPtr> &constantsNames) { removeConstants(CONST_LIST_STRING(constantsNames)); }
		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the argument expression.
		 * \param constantName      the constants names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const StringPtr &constantName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeConstants(const StringPtr &)
		 */
		void removeConstants(StringPtr &constantName) { removeConstants(CONST_STRING_PTR(constantName)); }
		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the argument expression
		 * \param constants           the constants (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const ListPtr<ConstantPtr> &constants);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeConstants(const ListPtr< ConstantPtr > &)
		 */
		void removeConstants(ListPtr<ConstantPtr> &constants) { removeConstants(CONST_LIST_CONSTANT(constants)); }
		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the argument expression
		 * \param constant           the constants (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const ConstantPtr &constant);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeConstants(const ConstantPtr &)
		 */
		void removeConstants(ConstantPtr &constant) { removeConstants(CONST_CONSTANT(constant)); }

		// ***********************************************************

		/**
		 * \brief Removes all constants
		 * associated with the argument expression
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeAllConstants();

		// ***********************************************************

		/**
		 * \brief Adds functions (variadic parameters) to the argument expression definition.
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
		 * \brief Adds functions (variadic parameters) to the argument expression definition.
		 * \param functions           the functions
		 *                                 (variadic parameters) comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void addFunctions(const ListPtr<FunctionPtr> &functions);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::addFunctions(const ListPtr< FunctionPtr > &)
		 */
		void addFunctions(ListPtr<FunctionPtr> &functions) { addFunctions(CONST_LIST_FUNCTION(functions)); }
		/**
		 * \brief Adds functions (variadic parameters) to the argument expression definition.
		 * \param function           the functions
		 *                                 (variadic parameters) comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void addFunctions(const FunctionPtr &function);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::addFunctions(const FunctionPtr &)
		 */
		void addFunctions(FunctionPtr &function) { addFunctions(CONST_FUNCTION(function)); }

		// ***********************************************************

		/**
		 * \brief Enables to define the function (associated with
		 * the argument expression) based on the function name,
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
		 * the argument expression) based on the function name,
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
		 * the argument expression) based on the function name,
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
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineFunction(const StringPtr &,const StringPtr &,const ListPtr< StringPtr > &)
		 */
		void defineFunction(const StringPtr &functionName, const StringPtr &functionExpressionString, ListPtr<StringPtr> &argumentsNames) {
			defineFunction(functionName, functionExpressionString, CONST_LIST_STRING(argumentsNames));
		}

		// ***********************************************************

		/**
		 * \brief Gets number of functions associated with the argument expression.
		 * \return number of functions (int &gt;= 0)
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		int getFunctionsNumber() const;

		// ***********************************************************

		/**
		 * \brief Gets index of function associated with the argument expression.
		 * \param functionName        the function name
		 * \return Function index if function name was found,
		 *             otherwise returns Function.NOT_FOUND
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		int getFunctionIndex(const StringPtr &functionName) const;

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const String &functionName) const { return getFunctionIndex(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const Char *functionName) const { return getFunctionIndex(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const std::string &functionName) const { return getFunctionIndex(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const char *functionName) const { return getFunctionIndex(S(functionName)); }

		// ***********************************************************

		/**
		 * \brief Gets function associated with the argument expression.
		 * \param functionIndex the function index
		 * \return Function if function index is between 0 and
		 *             the last available function index (getFunctionsNumber()-1),
		 *             otherwise returns null.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		FunctionPtr getFunction(int functionIndex) const;

		// ***********************************************************

		/**
		 * \brief Gets function associated with the argument expression.
		 * \param functionName        the function name
		 * \return Function if function name was found,
		 *             otherwise returns null.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		FunctionPtr getFunction(const StringPtr &functionName) const;

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const String &functionName) const { return getFunction(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const Char *functionName) const { return getFunction(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const std::string &functionName) const { return getFunction(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const char *functionName) const { return getFunction(S(functionName)); }

		// ***********************************************************

		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the argument expression.
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
		 * associated with the argument expression.
		 * \param functionsNames      the functions names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const ListPtr<StringPtr> &functionsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeFunctions(const ListPtr< StringPtr > &)
		 */
		void removeFunctions(ListPtr<StringPtr> &functionsNames) { removeFunctions(CONST_LIST_STRING(functionsNames)); }
		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the argument expression.
		 * \param functionName      the functions names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const StringPtr &functionName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeFunctions(const StringPtr &)
		 */
		void removeFunctions(StringPtr &functionName) { removeFunctions(CONST_STRING_PTR(functionName)); }
		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the argument expression.
		 * \param functions           the functions (variadic parameters)
		 *                                 comma separated list.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const ListPtr<FunctionPtr> &functions);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeFunctions(const ListPtr< FunctionPtr > &)
		 */
		void removeFunctions(ListPtr<FunctionPtr> &functions) { removeFunctions(CONST_LIST_FUNCTION(functions)); }
		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the argument expression.
		 * \param function           the functions (variadic parameters)
		 *                                 comma separated list.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const FunctionPtr &function);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::removeFunctions(const FunctionPtr &)
		 */
		void removeFunctions(FunctionPtr &function) { removeFunctions(CONST_FUNCTION(function)); }

		// ***********************************************************

		/**
		 * \brief Removes all functions
		 * associated with the argument expression.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeAllFunctions();

		// ***********************************************************

		// ***********************************************************
		// *********** API is for THIS object management *************
		// ***********************************************************

		/**
		 * \brief Enables to define the argument (associated with the argument expression)
		 * based on the argument name and the argument value.
		 * \param argumentName        the argument name
		 * \param argumentValue       the argument value
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void defineArgument(const StringPtr &argumentName, double argumentValue);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineArgument(const StringPtr &,double)
		 */
		void defineArgument(const String &argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineArgument(const StringPtr &,double)
		 */
		void defineArgument(const Char *argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineArgument(const StringPtr &,double)
		 */
		void defineArgument(const std::string &argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::defineArgument(const StringPtr &,double)
		 */
		void defineArgument(const char *argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }

		// ***********************************************************

		/**
		 * \brief Sets argument description.
		 * \param description         the argument description.
		 */
		void setDescription(const StringPtr &description);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setDescription(const StringPtr &)
		 */
		void setDescription(const String &description) { setDescription(S(description)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setDescription(const StringPtr &)
		 */
		void setDescription(const Char *description) { setDescription(S(description)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setDescription(const StringPtr &)
		 */
		void setDescription(const std::string &description) { setDescription(S(description)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setDescription(const StringPtr &)
		 */
		void setDescription(const char *description) { setDescription(S(description)); }

		/**
		 * \brief Gets argument description.
		 * \return The argument description string.
		 */
		StringPtr getDescription() const;

		// ***********************************************************

		/**
		 * \brief Sets (modifies) argument name.
		 * Each expression / function / dependent argument associated
		 * with this argument will be marked as modified
		 * (requires new syntax checking).
		 * \param argumentName        the argument name
		 */
		void setArgumentName(const StringPtr &argumentName);

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setArgumentName(const StringPtr &)
		 */
		void setArgumentName(const String &argumentName) { setArgumentName(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setArgumentName(const StringPtr &)
		 */
		void setArgumentName(const Char *argumentName) { setArgumentName(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setArgumentName(const StringPtr &)
		 */
		void setArgumentName(const std::string &argumentName) { setArgumentName(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setArgumentName(const StringPtr &)
		 */
		void setArgumentName(const char *argumentName) { setArgumentName(S(argumentName)); }

		/**
		 * \brief Gets argument name
		 * \return the argument name as string
		 */
		StringPtr getArgumentName() const;

		// ***********************************************************

		/**
		 * \brief Sets argument expression string.
		 * Each expression / function / dependent argument associated
		 * with this argument will be marked as modified
		 * (requires new syntax checking).
		 * If BODY_EXTENDED argument then BODY_RUNTIME is set.
		 * \param argumentExpressionString      the argument expression string
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 */
		void setArgumentExpressionString(const StringPtr &argumentExpressionString);

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setArgumentExpressionString(const StringPtr &)
		 */
		void setArgumentExpressionString(const String &argumentExpressionString) { setArgumentExpressionString(S(argumentExpressionString)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setArgumentExpressionString(const StringPtr &)
		 */
		void setArgumentExpressionString(const Char *argumentExpressionString) { setArgumentExpressionString(S(argumentExpressionString)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setArgumentExpressionString(const StringPtr &)
		 */
		void setArgumentExpressionString(const std::string &argumentExpressionString) { setArgumentExpressionString(S(argumentExpressionString)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::setArgumentExpressionString(const StringPtr &)
		 */
		void setArgumentExpressionString(const char *argumentExpressionString) { setArgumentExpressionString(S(argumentExpressionString)); }

		/**
		 * \brief Gets argument expression string
		 * \return the argument expression string
		 */
		StringPtr getArgumentExpressionString() const;

		// ***********************************************************

		/**
		 * \brief Checks argument syntax
		 * \return syntax status: Argument.NO_SYNTAX_ERRORS,
		 *            Argument.SYNTAX_ERROR
		 */
		bool checkSyntax();

		/**
		 * \brief Returns error message after checking the syntax
		 * \return Error message as string.
		 */
		StringPtr getErrorMessage() const;

		// ***********************************************************

		/**
		 * \brief Sets argument value, if DEPENDENT_ARGUMENT then argument type
		 * is set to FREE_ARGUMENT.
		 * If BODY_EXTENDED argument the BODY_RUNTIME argument is set.
		 * \param argumentValue       the value of argument
		 */
		void setArgumentValue(double argumentValue);

		/**
		 * \brief Gets argument value.
		 * \return direct argument value for free argument,
		 *             otherwise returns calculated argument value
		 *             based on the argument expression.
		 */
		double getArgumentValue();
		/**
		 * \brief Gets argument value and registers all the calculation steps
		 * \param calcStepsRegister A collection to store list of calculation steps,
		 *                          steps registered as strings.
		 * \return direct argument value for free argument,
		 *             otherwise returns calculated argument value
		 *             based on the argument expression.
		 */
		double getArgumentValue(const CalcStepsRegisterPtr &calcStepsRegister);
		/**
		 * \brief Gets argument value and registers all the calculation steps
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * \param calcStepsRegister A collection to store list of calculation steps,
		 *                          steps registered as strings.
		 * \return direct argument value for free argument,
		 *             otherwise returns calculated argument value
		 *             based on the argument expression.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::Argument::getArgumentValue
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		double getArgumentValueWithCancel(const CalcStepsRegisterPtr &calcStepsRegister, int cancelId);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getArgumentValue(const CalcStepsRegisterPtr &)
		 */
		double getArgumentValue(CalcStepsRegisterPtr &calcStepsRegister) { return getArgumentValue(CONST_CALC_STEPS_REGISTER(calcStepsRegister)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Argument::getArgumentValueWithCancel(const CalcStepsRegisterPtr &,int)
		 */
		double getArgumentValueWithCancel(CalcStepsRegisterPtr &calcStepsRegister, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return getArgumentValueWithCancel(CONST_CALC_STEPS_REGISTER(calcStepsRegister), cancelId);
		}
		/**
		 * \brief Gets computing time
		 * \return Computing time in seconds.
		 */
		double getComputingTime() const;

		// ***********************************************************

		/**
		 * \brief Enables argument verbose mode
		 */
		void setVerboseMode();
		/**
		 * \brief Disables argument verbose mode (sets default silent mode)
		 */
		void setSilentMode();
		/**
		 * \brief Returns verbose mode status
		 * \return true if verbose mode is on,
		 *             otherwise returns false.
		 */
		bool getVerboseMode() const;

		// ***********************************************************

		/**
		 * \brief Gets recursive mode status
		 * \return true if recursive mode is enabled (RecursiveArgument),
		 *              otherwise returns false
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		bool getRecursiveMode() const;
		/**
		 * \brief Gets argument type
		 * \return Argument type: Argument.FREE_ARGUMENT,
		 *                            Argument.DEPENDENT_ARGUMENT,
		 *                            Argument.RECURSIVE_ARGUMENT
		 */
		int getArgumentType() const;
		/**
		 * \brief Returns argument body type: \ref org::mariuszgromada::math::mxparser::Argument::BODY_RUNTIME \ref org::mariuszgromada::math::mxparser::Argument::BODY_EXTENDED
		 * \return Returns argument body type: \ref org::mariuszgromada::math::mxparser::Argument::BODY_RUNTIME \ref org::mariuszgromada::math::mxparser::Argument::BODY_EXTENDED
		 */
		int getArgumentBodyType() const;

		// ***********************************************************

		static constexpr int TYPE_ID = 101;
		static StringPtr TYPE_DESC;

		// ***********************************************************

		/**
		 * \brief Type indicator for free argument->
		 */
		static constexpr int FREE_ARGUMENT = 1;
		/**
		 * \brief Type indicator for dependent argument->
		 */
		static constexpr int DEPENDENT_ARGUMENT = 2;
		/**
		 * \brief Type indicator for recursive argument->
		 */
		static constexpr int RECURSIVE_ARGUMENT = 3;

		// ***********************************************************

		/**
		 * \brief Argument with body based on the value or expression string.
		 * \sa org::mariuszgromada::math::mxparser::Argument::getArgumentBodyType()
		 */
		static constexpr int BODY_RUNTIME = 1;
		/**
		 * \brief Argument with body based on the extended code.
		 * \sa org::mariuszgromada::math::mxparser::ArgumentExtension
		 * \sa org::mariuszgromada::math::mxparser::Argument::getArgumentBodyType()
		 */
		static constexpr int BODY_EXTENDED = 2;

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
		 * \deprecated Planned to be removed, use {SYNTAX_ERROR} instead
		 */
		// @Deprecated
		static constexpr bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;

		// ***********************************************************

		/**
		 * \brief Double::NaN as initial value of the argument->
		 */
		static constexpr double ARGUMENT_INITIAL_VALUE = Double::NaN;

		// ***********************************************************

		/**
		 * \brief When argument was not found
		 */
		static constexpr int NOT_FOUND = Expression::NOT_FOUND;

		// ***********************************************************

		/**
		 * \brief Creates cloned object of this argument.
		 * \return clone of the argument.
		 */
		ArgumentPtr clone();

		/**
		 * \brief Creates a completely independent 1-1 clone that can be safely used
		 * by a separate thread. If the cloned element contains references
		 * to other elements (e.g. arguments, functions, constants),
		 * then they will also be cloned and the newly created element will
		 * contain references to the corresponding clones.
		 * Important - the API allows you to extract all these clones.
		 * \return Cloned object.
		 */
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
		void restoreSelfReferenceOwnership();
		void refreshSelfReferencePin();
		std::shared_ptr<wrapper::List<ArgumentPtr>::SelfPin> shallowCloneSelfOwnerKeepAlive;
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
		
		SERIALIZE_DERIVED_POST_LOAD(2, PrimitiveElement,
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
			), restoreSelfReferenceOwnership()
		);


	public:
		STATIC_VARS_INITI_H;

	private:
		double getArgumentValueCoreWithCancel(const CalcStepsRegisterPtr &calcStepsRegister, int cancelId);

	};

	// ***********************************************************
	// ************************ WRAPPERS *************************
	// ***********************************************************

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const StringPtr &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(StringPtr &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(argumentDefinitionString), FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const String &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(String &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING(argumentDefinitionString), FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param forceDependent   If true parser will try to create dependent argument
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const StringPtr &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param forceDependent   If true parser will try to create dependent argument
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(StringPtr &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(argumentDefinitionString), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param forceDependent   If true parser will try to create dependent argument
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const std::string &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(S(argumentDefinitionString)), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param forceDependent   If true parser will try to create dependent argument
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(std::string &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(S(argumentDefinitionString)), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param forceDependent   If true parser will try to create dependent argument
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const Char *argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(S(argumentDefinitionString)), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param forceDependent   If true parser will try to create dependent argument
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const char *argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(S(argumentDefinitionString)), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param forceDependent   If true parser will try to create dependent argument
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const String &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param forceDependent   If true parser will try to create dependent argument
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(String &argumentDefinitionString, bool forceDependent, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING(argumentDefinitionString), forceDependent, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const std::string &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(std::string &argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const Char *argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Default constructor - creates argument based on the argument definition string.
	 * \param argumentDefinitionString        Argument definition string, i.e.:
	 *                                             <ul>
	 *                                                <li>'x' - only argument name
	 *                                                <li>'x=5' - argument name and argument value
	 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
	 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
	 *                                             </ul>
	 * \param elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const char *argumentDefinitionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentDefinitionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	/**
	 * \brief Constructor - creates dependent argument(with hidden
	 * argument expression).
	 * \param argumentName                  the argument name
	 * \param argumentExpressionString      the argument expression string
	 * \param elements                      Optional parameters (comma separated)
	 *                                           such as Arguments, Constants, Functions
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const StringPtr &argumentName, const StringPtr &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Constructor - creates dependent argument(with hidden
	 * argument expression).
	 * \param argumentName                  the argument name
	 * \param argumentExpressionString      the argument expression string
	 * \param elements                      Optional parameters (comma separated)
	 *                                           such as Arguments, Constants, Functions
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(StringPtr &argumentName, StringPtr &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(argumentName), CONST_STRING_PTR(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Constructor - creates dependent argument(with hidden
	 * argument expression).
	 * \param argumentName                  the argument name
	 * \param argumentExpressionString      the argument expression string
	 * \param elements                      Optional parameters (comma separated)
	 *                                           such as Arguments, Constants, Functions
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const String &argumentName, const String &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Constructor - creates dependent argument(with hidden
	 * argument expression).
	 * \param argumentName                  the argument name
	 * \param argumentExpressionString      the argument expression string
	 * \param elements                      Optional parameters (comma separated)
	 *                                           such as Arguments, Constants, Functions
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(String &argumentName, String &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING(argumentName), CONST_STRING(argumentExpressionString), FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Constructor - creates dependent argument(with hidden
	 * argument expression).
	 * \param argumentName                  the argument name
	 * \param argumentExpressionString      the argument expression string
	 * \param elements                      Optional parameters (comma separated)
	 *                                           such as Arguments, Constants, Functions
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const std::string &argumentName, const std::string &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Constructor - creates dependent argument(with hidden
	 * argument expression).
	 * \param argumentName                  the argument name
	 * \param argumentExpressionString      the argument expression string
	 * \param elements                      Optional parameters (comma separated)
	 *                                           such as Arguments, Constants, Functions
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(std::string &argumentName, std::string &argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Constructor - creates dependent argument(with hidden
	 * argument expression).
	 * \param argumentName                  the argument name
	 * \param argumentExpressionString      the argument expression string
	 * \param elements                      Optional parameters (comma separated)
	 *                                           such as Arguments, Constants, Functions
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const Char *argumentName, const Char *argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \brief Constructor - creates dependent argument(with hidden
	 * argument expression).
	 * \param argumentName                  the argument name
	 * \param argumentExpressionString      the argument expression string
	 * \param elements                      Optional parameters (comma separated)
	 *                                           such as Arguments, Constants, Functions
	 * \sa org::mariuszgromada::math::mxparser::Expression
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Argument instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ArgumentPtr new_Argument(const char *argumentName, const char *argumentExpressionString, PrimitiveElements &&... elements) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExpressionString, FORWARD_PRIMITIVE(elements)...);
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	/**
	 * \brief Constructor - creates free argument.
	 * \param argumentName   the argument name
	 * \param argumentValue  the argument value
	 * \return A shared pointer to the new Argument instance.
	 */
	inline ArgumentPtr new_Argument(const StringPtr &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(StringPtr &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(argumentName), argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(const String &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(String &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING(argumentName), argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(const std::string &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(std::string &argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(const Char *argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(const char *argumentName, double argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}


	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(const StringPtr &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(StringPtr &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING_PTR(argumentName), argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(const String &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(String &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(CONST_STRING(argumentName), argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(const std::string &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(std::string &argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(const Char *argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,double)
	 */
	inline ArgumentPtr new_Argument(const char *argumentName, int argumentValue) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentValue);
		argument->postConstructorSync();
		return argument;
	}

	// ***********************************************************

	/**
	 * \brief Constructor for argument definition based on
	 * your own source code - this is via implementation
	 * of ArgumentExtension interface.
	 * \param argumentName       Argument name
	 * \param argumentExtension  Your own source code
	 * \return A shared pointer to the new Argument instance.
	 */
	inline ArgumentPtr new_Argument(const StringPtr &argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(const StringPtr &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(StringPtr &argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(StringPtr &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(const String &argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(const String &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(String &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(const std::string &argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(const std::string &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(std::string &argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(std::string &argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(const Char *argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(const Char *argumentName, ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
	inline ArgumentPtr new_Argument(const char *argumentName, const ArgumentExtensionPtr &argumentExtension) {
		ArgumentPtr argument = std::make_shared<Argument>(argumentName, argumentExtension);
		argument->postConstructorSync();
		return argument;
	}
	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Argument(const StringPtr &,const ArgumentExtensionPtr &)
	 */
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