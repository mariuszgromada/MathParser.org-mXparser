/*
 * @(#)Expression.hpp        6.2.0    2026-11-13
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
#include <stdexcept>

namespace org::mariuszgromada::math::mxparser {

	USING_FRIENDS_NAMESPACES;

	class API_VISIBLE Expression : public PrimitiveElement {
		ADD_FRIENDS_OF(Expression);
		friend struct OwnershipTestAccess;
		friend struct CancellationTestAccess;

	private:
		int activeCancelId = 0;
		bool checkSyntaxWithCancel(const StringPtr &recursionInfoLevel, bool functionWithBodyExt, int cancelId);

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
		/**
		 * \brief Calculates the expression value
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * \return The expression value if syntax was ok,
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::Expression::calculate()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		double calculateWithCancel(int cancelId);


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

		Expression(char *expressionString, bool parserKeyWordsOnly)
			: Expression(static_cast<const char *>(expressionString), parserKeyWordsOnly) { }

		// 1 =========================================================================

		/**
		 * \brief Default constructor - empty expression
		 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Expression(PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst();
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Default constructor - empty expression
		 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		explicit Expression(const ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst();
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		// 2 =========================================================================

		/**
		 * \brief Constructor - creates new expression from expression string.
		 * \param expressionString    definition of the expression
		 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Expression(const StringPtr &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Expression(char *expressionString, PrimitiveElements &&... elements)
			: Expression(static_cast<const char *>(expressionString), FORWARD_PRIMITIVE(elements)...) { }


		/**
		 * \brief Constructor - creates new expression from expression string.
		 * \param expressionString    definition of the expression
		 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Expression(StringPtr &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates new expression from expression string.
		 * \param expressionString    definition of the expression
		 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Expression(const String &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates new expression from expression string.
		 * \param expressionString    definition of the expression
		 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Expression(String &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates new expression from expression string.
		 * \param expressionString    definition of the expression
		 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Expression(const std::string &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString));
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates new expression from expression string.
		 * \param expressionString    definition of the expression
		 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Expression(std::string &expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString));
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates new expression from expression string.
		 * \param expressionString    definition of the expression
		 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Expression(const Char *expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString));
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates new expression from expression string.
		 * \param expressionString    definition of the expression
		 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 * \tparam PrimitiveElements Types of the forwarded arguments.
		 */
		template<typename... PrimitiveElements>
		explicit Expression(const char *expressionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(S(expressionString));
			addDefinitions(FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * \brief Constructor - creates new expression from expression string.
		 * \param expressionString    definition of the expression
		 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		explicit Expression(const StringPtr &expressionString, const ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
		 */
		explicit Expression(StringPtr &expressionString, const ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
		 */
		explicit Expression(const StringPtr &expressionString, ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
		 */
		explicit Expression(StringPtr &expressionString, ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
		 */
		explicit Expression(const String &expressionString, const ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
		 */
		explicit Expression(String &expressionString, const ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
		 */
		explicit Expression(const String &expressionString, ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
		 */
		explicit Expression(String &expressionString, ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(TYPE_ID) {
			executeConstructorConst(expressionString);
			addDefinitions(elements);
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		/**
		 * \brief Adds user defined elements (such as: Arguments, Constants, Functions)
		 * to the expressions.
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
		 * to the expressions.
		 * \param elements Elements list (variadic), where Argument, Constant, Function
		 *                 extend the same class PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void addDefinitions(const ListPtr<PrimitiveElementPtr> &elements);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::addDefinitions(const ListPtr< PrimitiveElementPtr > &)
		 */
		void addDefinitions(ListPtr<PrimitiveElementPtr> &elements) { addDefinitions(CONST_LIST_PRIMITIVE_ELEMENT(elements)); }
		/**
		 * \brief Adds user defined elements (such as: Arguments, Constants, Functions)
		 * to the expressions.
		 * \param element Elements list (variadic), where Argument, Constant, Function
		 *                 extend the same class PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void addDefinitions(const PrimitiveElementPtr &element);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::addDefinitions(const PrimitiveElementPtr &)
		 */
		void addDefinitions(PrimitiveElementPtr &element) { addDefinitions(CONST_PRIMITIVE_ELEMENT(element)); }

		// ***********************************************************

		/**
		 * \brief Removes user defined elements (such as: Arguments, Constants, Functions)
		 * to the expressions.
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
		 * to the expressions.
		 * \param elements Elements list (variadic), where Argument, Constant, Function
		 *                 extend the same class PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void removeDefinitions(const ListPtr<PrimitiveElementPtr> &elements);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeDefinitions(const ListPtr< PrimitiveElementPtr > &)
		 */
		void removeDefinitions(ListPtr<PrimitiveElementPtr> &elements) { removeDefinitions(CONST_LIST_PRIMITIVE_ELEMENT(elements)); }
		/**
		 * \brief Removes user defined elements (such as: Arguments, Constants, Functions)
		 * to the expressions.
		 * \param element Elements list (variadic), where Argument, Constant, Function
		 *                 extend the same class PrimitiveElement
		 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
		 */
		void removeDefinitions(const PrimitiveElementPtr &element);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeDefinitions(const PrimitiveElementPtr &)
		 */
		void removeDefinitions(PrimitiveElementPtr &element) { removeDefinitions(CONST_PRIMITIVE_ELEMENT(element)); }

		// ***********************************************************

		/**
		 * \brief Adds arguments (variadic) to the expression definition.
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
		 * \brief Adds arguments (variadic) to the expression definition.
		 * \param arguments           the arguments list
		 *                                 (comma separated list)
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void addArguments(const ListPtr<ArgumentPtr> &arguments);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::addArguments(const ListPtr< ArgumentPtr > &)
		 */
		void addArguments(ListPtr<ArgumentPtr> &arguments) { addArguments(CONST_LIST_ARGUMENT(arguments)); }
		/**
		 * \brief Adds arguments (variadic) to the expression definition.
		 * \param argument           the arguments list
		 *                                 (comma separated list)
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void addArguments(const ArgumentPtr &argument);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::addArguments(const ArgumentPtr &)
		 */
		void addArguments(ArgumentPtr &argument) { addArguments(CONST_ARGUMENT(argument)); }

		// ***********************************************************

		/**
		 * \brief Enables to define the arguments (associated with
		 * the expression) based on the given arguments names.
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
		 * the expression) based on the given arguments names.
		 * \param argumentsNames      the arguments names (variadic)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void defineArguments(const ListPtr<StringPtr> &argumentsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineArguments(const ListPtr< StringPtr > &)
		 */
		void defineArguments(ListPtr<StringPtr> &argumentsNames) { defineArguments(CONST_LIST_STRING(argumentsNames)); }
		/**
		 * \brief Enables to define the arguments (associated with
		 * the expression) based on the given arguments names.
		 * \param argumentName      the arguments names (variadic)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void defineArguments(const StringPtr &argumentName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineArguments(const StringPtr &)
		 */
		void defineArguments(StringPtr &argumentName) { defineArguments(CONST_STRING_PTR(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineArguments(const StringPtr &)
		 */
		void defineArguments(const String &argumentName) { defineArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineArguments(const StringPtr &)
		 */
		void defineArguments(const Char *argumentName) { defineArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineArguments(const StringPtr &)
		 */
		void defineArguments(const std::string &argumentName) { defineArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineArguments(const StringPtr &)
		 */
		void defineArguments(const char *argumentName) { defineArguments(S(argumentName)); }

		// ***********************************************************

		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the expression.
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
		 * associated with the expression.
		 * \param argumentsNames      the arguments names
		 *                                 (variadic parameters) comma separated
		 *                                 list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const ListPtr<StringPtr> &argumentsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeArguments(const ListPtr< StringPtr > &)
		 */
		void removeArguments(ListPtr<StringPtr> &argumentsNames) { removeArguments(CONST_LIST_STRING(argumentsNames)); }
		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the expression.
		 * \param argumentName      the arguments names
		 *                                 (variadic parameters) comma separated
		 *                                 list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const StringPtr &argumentName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeArguments(const StringPtr &)
		 */
		void removeArguments(StringPtr &argumentName) { removeArguments(CONST_STRING_PTR(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeArguments(const StringPtr &)
		 */
		void removeArguments(const String &argumentName) { removeArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeArguments(const StringPtr &)
		 */
		void removeArguments(const Char *argumentName) { removeArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeArguments(const StringPtr &)
		 */
		void removeArguments(const std::string &argumentName) { removeArguments(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeArguments(const StringPtr &)
		 */
		void removeArguments(const char *argumentName) { removeArguments(S(argumentName)); }
		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the expression.
		 * \param arguments           the arguments (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const ListPtr<ArgumentPtr> &arguments);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeArguments(const ListPtr< ArgumentPtr > &)
		 */
		void removeArguments(ListPtr<ArgumentPtr> &arguments) { removeArguments(CONST_LIST_ARGUMENT(arguments)); }
		/**
		 * \brief Removes first occurrences of the arguments
		 * associated with the expression.
		 * \param argument           the arguments (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeArguments(const ArgumentPtr &argument);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeArguments(const ArgumentPtr &)
		 */
		void removeArguments(ArgumentPtr &argument) { removeArguments(CONST_ARGUMENT(argument)); }

		// ***********************************************************

		/**
		 * \brief Removes all arguments associated with the expression.
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void removeAllArguments();

		// ***********************************************************

		/**
		 * \brief Adds constants (variadic parameters) to the expression definition.
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
		 * \brief Adds constants to the expression definition.
		 * \param constants       the list of constants
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void addConstants(const ListPtr<ConstantPtr> &constants);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::addConstants(const ListPtr< ConstantPtr > &)
		 */
		void addConstants(ListPtr<ConstantPtr> &constants) { addConstants(CONST_LIST_CONSTANT(constants)); }
		/**
		 * \brief Adds constants (variadic parameters) to the expression definition.
		 * \param constant           the constants
		 *                                 (comma separated list)
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void addConstants(const ConstantPtr &constant);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::addConstants(const ConstantPtr &)
		 */
		void addConstants(ConstantPtr &constant) { addConstants(CONST_CONSTANT(constant)); }

		// ***********************************************************

		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the expression
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
		 * associated with the expression.
		 * \param constantsNames      the constants names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const ListPtr<StringPtr> &constantsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeConstants(const ListPtr< StringPtr > &)
		 */
		void removeConstants(ListPtr<StringPtr> &constantsNames) { removeConstants(CONST_LIST_STRING(constantsNames)); }
		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the expression.
		 * \param constantName      the constants names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const StringPtr &constantName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeConstants(const StringPtr &)
		 */
		void removeConstants(StringPtr &constantName) { removeConstants(CONST_STRING_PTR(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeConstants(const StringPtr &)
		 */
		void removeConstants(const String &constantName) { removeConstants(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeConstants(const StringPtr &)
		 */
		void removeConstants(const Char *constantName) { removeConstants(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeConstants(const StringPtr &)
		 */
		void removeConstants(const std::string &constantName) { removeConstants(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeConstants(const StringPtr &)
		 */
		void removeConstants(const char *constantName) { removeConstants(S(constantName)); }
		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the expression
		 * \param constants           the constants (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const ListPtr<ConstantPtr> &constants);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeConstants(const ListPtr< ConstantPtr > &)
		 */
		void removeConstants(ListPtr<ConstantPtr> &constants) { removeConstants(CONST_LIST_CONSTANT(constants)); }
		/**
		 * \brief Removes first occurrences of the constants
		 * associated with the expression
		 * \param constant           the constants (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeConstants(const ConstantPtr &constant);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeConstants(const ConstantPtr &)
		 */
		void removeConstants(ConstantPtr &constant) { removeConstants(CONST_CONSTANT(constant)); }

		// ***********************************************************

		/**
		 * \brief Removes all constants
		 * associated with the expression
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void removeAllConstants();

		// ***********************************************************

		/**
		 * \brief Adds functions (variadic parameters) to the expression definition.
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
		 * \brief Adds functions (variadic parameters) to the expression definition.
		 * \param functions           the functions
		 *                                 (variadic parameters) comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void addFunctions(const ListPtr<FunctionPtr> &functions);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::addFunctions(const ListPtr< FunctionPtr > &)
		 */
		void addFunctions(ListPtr<FunctionPtr> &functions) { addFunctions(CONST_LIST_FUNCTION(functions)); }
		/**
		 * \brief Adds functions (variadic parameters) to the expression definition.
		 * \param function           the functions
		 *                                 (variadic parameters) comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void addFunctions(const FunctionPtr &function);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::addFunctions(const FunctionPtr &)
		 */
		void addFunctions(FunctionPtr &function) { addFunctions(CONST_FUNCTION(function)); }

		// ***********************************************************

		/**
		 * \brief Enables to define the function (associated with
		 * the expression) based on the function name,
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
		 * the expression) based on the function name,
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
		 * the expression) based on the function name,
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
		void defineFunction(const std::string &functionName, const std::string &functionExpressionString, Strings &&... argumentsNames) {
			defineFunction(S(functionName), S(functionExpressionString), FORWARD_STRING(argumentsNames)...);
		}

		/**
		 * \brief Enables to define the function (associated with
		 * the expression) based on the function name,
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
		void defineFunction(const Char* functionName, const Char* functionExpressionString, Strings &&... argumentsNames) {
			defineFunction(S(functionName), S(functionExpressionString), FORWARD_STRING(argumentsNames)...);
		}

		/**
		 * \brief Enables to define the function (associated with
		 * the expression) based on the function name,
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
		void defineFunction(const char* functionName, const char* functionExpressionString, Strings &&... argumentsNames) {
			defineFunction(S(functionName), S(functionExpressionString), FORWARD_STRING(argumentsNames)...);
		}

		/**
		 * \brief Enables to define the function (associated with
		 * the expression) based on the function name,
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
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineFunction(const StringPtr &,const StringPtr &,const ListPtr< StringPtr > &)
		 */
		void defineFunction(const StringPtr &functionName, const StringPtr &functionExpressionString, ListPtr<StringPtr> &argumentsNames) {
			defineFunction(functionName, functionExpressionString, CONST_LIST_STRING(argumentsNames));
		}

		// ***********************************************************

		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the expression.
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
		 * associated with the expression.
		 * \param functionsNames      the functions names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const ListPtr<StringPtr> &functionsNames);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeFunctions(const ListPtr< StringPtr > &)
		 */
		void removeFunctions(ListPtr<StringPtr> &functionsNames) { removeFunctions(CONST_LIST_STRING(functionsNames)); }
		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the expression.
		 * \param functionName      the functions names (variadic parameters)
		 *                                 comma separated list
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const StringPtr &functionName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeFunctions(const StringPtr &)
		 */
		void removeFunctions(StringPtr &functionName) { removeFunctions(CONST_STRING_PTR(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeFunctions(const StringPtr &)
		 */
		void removeFunctions(const String &functionName) { removeFunctions(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeFunctions(const StringPtr &)
		 */
		void removeFunctions(const Char *functionName) { removeFunctions(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeFunctions(const StringPtr &)
		 */
		void removeFunctions(const std::string &functionName) { removeFunctions(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeFunctions(const StringPtr &)
		 */
		void removeFunctions(const char *functionName) { removeFunctions(S(functionName)); }
		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the expression.
		 * \param functions           the functions (variadic parameters)
		 *                                 comma separated list.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const ListPtr<FunctionPtr> &functions);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeFunctions(const ListPtr< FunctionPtr > &)
		 */
		void removeFunctions(ListPtr<FunctionPtr> &functions) { removeFunctions(CONST_LIST_FUNCTION(functions)); }
		/**
		 * \brief Removes first occurrences of the functions
		 * associated with the expression.
		 * \param function           the functions (variadic parameters)
		 *                                 comma separated list.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeFunctions(const FunctionPtr &function);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::removeFunctions(const FunctionPtr &)
		 */
		void removeFunctions(FunctionPtr &function) { removeFunctions(CONST_FUNCTION(function)); }

		// ***********************************************************

		/**
		 * \brief Removes all functions
		 * associated with the expression.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		void removeAllFunctions();

		// ***********************************************************

		static constexpr int TYPE_ID = 100;
		static StringPtr TYPE_DESC;

		// ***********************************************************

		/**
		 * \brief Status of the syntax - no syntax error
		 */
		static constexpr bool NO_SYNTAX_ERRORS = true;
		/**
		 * \brief Status of the syntax - syntax error or syntax status unknown
		 */
		static constexpr bool SYNTAX_ERROR = false;
		// @Deprecated
		/**
		 * \brief Status of the syntax - syntax error or syntax status unknown
		 * \deprecated Planned to be removed, use {SYNTAX_ERROR} instead
		 */
		// @Deprecated
		static constexpr bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;

		// ***********************************************************

		/**
		 * \brief Method return error message after
		 * calling checkSyntax() method or
		 * calculate().
		 * \return Error message as string.
		 */
		StringPtr getErrorMessage() const;
		/**
		 * \brief Gets syntax status of the expression.
		 * \return true if there are no syntax errors,
		 *             false when syntax error was found or
		 *             syntax status is unknown
		 */
		bool getSyntaxStatus() const;

		// ***********************************************************

		/**
		 * \brief Sets (modifies expression) expression string.
		 * \param expressionString    the expression string
		 */
		void setExpressionString(const StringPtr &expressionString);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setExpressionString(const StringPtr &)
		 */
		void setExpressionString(const String &expressionString) { setExpressionString(S(expressionString)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setExpressionString(const StringPtr &)
		 */
		void setExpressionString(const Char *expressionString) { setExpressionString(S(expressionString)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setExpressionString(const StringPtr &)
		 */
		void setExpressionString(const std::string &expressionString) { setExpressionString(S(expressionString)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setExpressionString(const StringPtr &)
		 */
		void setExpressionString(const char *expressionString) { setExpressionString(S(expressionString)); }

		// ***********************************************************

		/**
		 * \brief Returns expression string
		 * \return Expression string definition.
		 */
		StringPtr getExpressionString();
		/**
		 * \brief Returns expression string
		 * \return Expression string definition.
		 */
		StringPtr getCanonicalExpressionString();
		/**
		 * \brief Clears expression string
		 */
		void clearExpressionString();

		// ***********************************************************

		/**
		 * \brief Sets expression description.
		 * \param description         the description string
		 */
		void setDescription(const StringPtr &description);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setDescription(const StringPtr &)
		 */
		void setDescription(const String &description) { setDescription(S(description)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setDescription(const StringPtr &)
		 */
		void setDescription(const Char *description) { setDescription(S(description)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setDescription(const StringPtr &)
		 */
		void setDescription(const std::string &description) { setDescription(S(description)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setDescription(const StringPtr &)
		 */
		void setDescription(const char *description) { setDescription(S(description)); }

		// ***********************************************************

		/**
		 * \brief Gets expression description.
		 * \return String description.
		 */
		StringPtr getDescription();
		/**
		 * \brief Clears expression description
		 */
		void clearDescription();

		// ***********************************************************

		/**
		 * \brief Enables verbose mode.
		 */
		void setVerboseMode();
		/**
		 * \brief Disables verbose mode (default silent mode).
		 */
		void setSilentMode();
		/**
		 * \brief Returns verbose mode status.
		 * \return true if verbose mode is on,
		 *             otherwise returns false.
		 */
		bool getVerboseMode() const;

		// ***********************************************************

		/**
		 * \brief Sets implied multiplication
		 */
		void enableImpliedMultiplicationMode();
		/**
		 * \brief Disables implied multiplication
		 */
		void disableImpliedMultiplicationMode();
		/**
		 * \brief Gets implied multiplication status
		 * \return true if implied multiplication is enabled,
		 *             otherwise returns false.
		 */
		bool checkIfImpliedMultiplicationMode() const;

		// ***********************************************************

		/**
		 * \brief Enables unicode built-in parser keywords, this flag
		 * informs the parser that built-in unicode keywords
		 * are supported and will be recognized as functions or
		 * operators.
		 */
		void enableUnicodeBuiltinKeyWordsMode();
		/**
		 * \brief Disables unicode built-in parser keywords, this flag
		 * informs the parser that built-in unicode keywords
		 * are not supported and will not be recognized as functions or
		 * operators.
		 */
		void disableUnicodeBuiltinKeyWordsMode();
		/**
		 * \brief Gets unicode built-in parser keywords mode
		 * \return true if unicode built-in parser keywords is enabled,
		 *             otherwise returns false.
		 */
		bool checkIfUnicodeBuiltinKeyWordsMode() const;

		// ***********************************************************

		/**
		 * \brief Enables attempt to fix the expression String.
		 * For example, situations such as:
		 * "++" change to "+",
		 * "+-" changed to "-"
		 * "-+" changed to "-"
		 * "--" changed to "+"
		 */
		void enableAttemptToFixExpStrMode();
		/**
		 * \brief Disables attempt to fix the expression String.
		 * For example, situations such as:
		 * "++" change to "+",
		 * "+-" changed to "-"
		 * "-+" changed to "-"
		 * "--" changed ro "+"
		 */
		void disableAttemptToFixExpStrMode();
		/**
		 * \brief Gets attempt to fix expression string mode
		 * \return true attempt to fix expression string mode is enabled,
		 *             otherwise returns false.
		 */
		bool checkIfAttemptToFixExpStrMode() const;

		// ***********************************************************

		/**
		 * \brief Gets recursive mode status
		 * \return true if recursive mode is enabled,
		 *             otherwise returns false.
		 */
		bool getRecursiveMode() const;

		// ***********************************************************

		/**
		 * \brief Gets computing time.
		 * \return computing time in seconds.
		 */
		double getComputingTime() const;

		// ***********************************************************

		/**
		 * \brief Enables to define the argument (associated with the expression)
		 * based on the argument name and the argument value.
		 * \param argumentName        the argument name
		 * \param argumentValue       the argument value
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		void defineArgument(const StringPtr &argumentName, double argumentValue);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineArgument(const StringPtr &,double)
		 */
		void defineArgument(const String &argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineArgument(const StringPtr &,double)
		 */
		void defineArgument(const Char *argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineArgument(const StringPtr &,double)
		 */
		void defineArgument(const std::string &argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineArgument(const StringPtr &,double)
		 */
		void defineArgument(const char *argumentName, double argumentValue) { defineArgument(S(argumentName), argumentValue); }

		// ***********************************************************

		/**
		 * \brief Gets argument index from the expression.
		 * \param argumentName        the argument name
		 * \return The argument index if the argument name was found,
		 *             otherwise returns Argument.NOT_FOUND
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		int getArgumentIndex(const StringPtr &argumentName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const String &argumentName) const { return getArgumentIndex(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const Char *argumentName) const { return getArgumentIndex(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const std::string &argumentName) const { return getArgumentIndex(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgumentIndex(const StringPtr &) const
		 */
		int getArgumentIndex(const char *argumentName) const { return getArgumentIndex(S(argumentName)); }

		// ***********************************************************

		/**
		 * \brief Gets number of arguments associated with the expression.
		 * \return The number of arguments (int &gt;= 0)
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		int getArgumentsNumber() const;

		// ***********************************************************
		/**
		 * \brief Gets argument from the expression.
		 * \param argumentName        the argument name
		 * \return The argument if the argument name was found,
		 *             otherwise returns null.
		 * \sa org::mariuszgromada::math::mxparser::Argument
		 * \sa org::mariuszgromada::math::mxparser::RecursiveArgument
		 */
		ArgumentPtr getArgument(const StringPtr &argumentName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const String &argumentName) const { return getArgument(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const Char *argumentName) const { return getArgument(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const std::string &argumentName) const { return getArgument(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgument(const StringPtr &) const
		 */
		ArgumentPtr getArgument(const char *argumentName) const { return getArgument(S(argumentName)); }
		/**
		 * \brief Gets argument from the expression.
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
		 * \brief Sets argument value.
		 * \param argumentName        the argument name
		 * \param argumentValue       the argument value
		 */
		void setArgumentValue(const StringPtr &argumentName, double argumentValue);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setArgumentValue(const StringPtr &,double)
		 */
		void setArgumentValue(const String &argumentName, double argumentValue) { setArgumentValue(S(argumentName), argumentValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setArgumentValue(const StringPtr &,double)
		 */
		void setArgumentValue(const Char *argumentName, double argumentValue) { setArgumentValue(S(argumentName), argumentValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setArgumentValue(const StringPtr &,double)
		 */
		void setArgumentValue(const std::string &argumentName, double argumentValue) { setArgumentValue(S(argumentName), argumentValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::setArgumentValue(const StringPtr &,double)
		 */
		void setArgumentValue(const char *argumentName, double argumentValue) { setArgumentValue(S(argumentName), argumentValue); }

		// ***********************************************************

		/**
		 * \brief Gets argument vale.
		 * \param argumentName        the argument name
		 * \return Argument value if argument name was found,
		 *             otherwise return Double.NaN.
		 */
		double getArgumentValue(const StringPtr &argumentName);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgumentValue(const StringPtr &)
		 */
		double getArgumentValue(const String &argumentName) { return getArgumentValue(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgumentValue(const StringPtr &)
		 */
		double getArgumentValue(const Char *argumentName) { return getArgumentValue(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgumentValue(const StringPtr &)
		 */
		double getArgumentValue(const std::string &argumentName) { return getArgumentValue(S(argumentName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getArgumentValue(const StringPtr &)
		 */
		double getArgumentValue(const char *argumentName) { return getArgumentValue(S(argumentName)); }

		// ***********************************************************

		/**
		 * \brief Enables to define the constant (associated with
		 * the expression) based on the constant name and
		 * constant value.
		 * \param constantName        the constant name
		 * \param constantValue       the constant value
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		void defineConstant(const StringPtr &constantName, double constantValue);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineConstant(const StringPtr &,double)
		 */
		void defineConstant(const String &constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineConstant(const StringPtr &,double)
		 */
		void defineConstant(const Char *constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineConstant(const StringPtr &,double)
		 */
		void defineConstant(const std::string &constantName, double constantValue) { defineConstant(S(constantName), constantValue); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::defineConstant(const StringPtr &,double)
		 */
		void defineConstant(const char *constantName, double constantValue) { defineConstant(S(constantName), constantValue); }

		// ***********************************************************

		/**
		 * \brief Gets constant index associated with the expression.
		 * \param constantName        the constant name
		 * \return Constant index if constant name was found,
		 *             otherwise return Constant.NOT_FOUND.
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		int getConstantIndex(const StringPtr &constantName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const String &constantName) const { return getConstantIndex(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const Char *constantName) const { return getConstantIndex(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const std::string &constantName) const { return getConstantIndex(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getConstantIndex(const StringPtr &) const
		 */
		int getConstantIndex(const char *constantName) const { return getConstantIndex(S(constantName)); }

		// ***********************************************************

		/**
		 * \brief Gets number of constants associated with the expression.
		 * \return number of constants (int &gt;= 0)
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		int getConstantsNumber() const;

		// ***********************************************************

		/**
		 * \brief Gets constant associated with the expression.
		 * \param constantName        the constant name
		 * \return Constant if constant name was found,
		 *             otherwise return null.
		 * \sa org::mariuszgromada::math::mxparser::Constant
		 */
		ConstantPtr getConstant(const StringPtr &constantName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const String &constantName) const { return getConstant(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const Char *constantName) const { return getConstant(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const std::string &constantName) const { return getConstant(S(constantName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getConstant(const StringPtr &) const
		 */
		ConstantPtr getConstant(const char *constantName) const { return getConstant(S(constantName)); }
		/**
		 * \brief Gets constant associated with the expression.
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
		 * \brief Gets index of function associated with the expression.
		 * \param functionName        the function name
		 * \return Function index if function name was found,
		 *             otherwise returns Function.NOT_FOUND
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		int getFunctionIndex(const StringPtr &functionName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const String &functionName) const { return getFunctionIndex(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const Char *functionName) const { return getFunctionIndex(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const std::string &functionName) const { return getFunctionIndex(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getFunctionIndex(const StringPtr &) const
		 */
		int getFunctionIndex(const char *functionName) const { return getFunctionIndex(S(functionName)); }

		// ***********************************************************

		/**
		 * \brief Gets number of functions associated with the expression.
		 * \return number of functions (int &gt;= 0)
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		int getFunctionsNumber() const;

		// ***********************************************************

		/**
		 * \brief Gets function associated with the expression.
		 * \param functionName        the function name
		 * \return Function if function name was found,
		 *             otherwise returns null.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		FunctionPtr getFunction(const StringPtr &functionName) const;
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const String &functionName) const { return getFunction(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const Char *functionName) const { return getFunction(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const std::string &functionName) const { return getFunction(S(functionName)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getFunction(const StringPtr &) const
		 */
		FunctionPtr getFunction(const char *functionName) const { return getFunction(S(functionName)); }
		/**
		 * \brief Gets function associated with the expression.
		 * \param functionIndex the function index
		 * \return Function if function index is between 0 and
		 *             the last available function index (getFunctionsNumber()-1),
		 *             otherwise returns null.
		 * \sa org::mariuszgromada::math::mxparser::Function
		 */
		FunctionPtr getFunction(int functionIndex) const;

		// ***********************************************************

		/**
		 * \brief Checks syntax of the expression string.
		 * \return true if syntax is ok
		 */
		bool checkLexSyntax();
		/**
		 * \brief Checks syntax of the expression string.
		 * \return true if syntax is ok
		 */
		bool checkSyntax();

		// ***********************************************************

		/**
		 * \brief Calculates the expression value and registers all the calculation steps
		 * \return The expression value if syntax was ok,
		 *             otherwise returns Double.NaN.
		 */
		double calculate();
		/**
		 * \brief Calculates the expression value
		 * \param calcStepsRegister A collection to store list of calculation steps,
		 *                          steps registered as strings.
		 * \return The expression value if syntax was ok,
		 *             otherwise returns Double.NaN.
		 */
		double calculate(const CalcStepsRegisterPtr &calcStepsRegister);
		/**
		 * \brief Calculates the expression value
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * \param calcStepsRegister A collection to store list of calculation steps,
		 *                          steps registered as strings.
		 * \return The expression value if syntax was ok,
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::Expression::calculate
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		double calculateWithCancel(const CalcStepsRegisterPtr &calcStepsRegister, int cancelId);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::calculate(const CalcStepsRegisterPtr &)
		 */
		double calculate(CalcStepsRegisterPtr &calcStepsRegister) { return calculate(CONST_CALC_STEPS_REGISTER(calcStepsRegister)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::calculateWithCancel(const CalcStepsRegisterPtr &,int)
		 */
		double calculateWithCancel(CalcStepsRegisterPtr &calcStepsRegister, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return calculateWithCancel(CONST_CALC_STEPS_REGISTER(calcStepsRegister), cancelId);
		}

		// ***********************************************************

		/**
		 * \brief Tokenizes expression string and returns tokens list,
		 * including: string, type, level.
		 * \return Copy of initial tokens.
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::Token
		 * \sa org::mariuszgromada::math::mxparser::mXparser::consolePrintTokens(const ListPtr< TokenPtr > &)
		 */
		ListPtr<TokenPtr> getCopyOfInitialTokens();
        /**
         * \brief Returns this expression in classical mathematical LaTeX notation, without
         * math-mode delimiters. Values, user function bodies and numerical algorithm
         * settings are not evaluated. Undefined symbols with unambiguous structure
         * are supported. This method uses \ref org::mariuszgromada::math::mxparser::Expression::getCopyOfInitialTokens() and has
         * the same tokenization/cache and extension-metadata behavior as that method.
         * The returned notation describes the formula, not numerical implementation
         * details such as rounding, angular mode or special values at singularities.
         * \return A mathematical LaTeX fragment, or an empty string for empty input.
         * \since 6.2.0
         * \exception std::logic_error Invalid structure, builtin arity, identifier or resource budget.
         */
        StringPtr getExpressionAsLaTeX();
		/**
		 * \brief Returns missing user defined arguments names, i.e.
		 * sin(x) + cos(y) where x and y are not defined
		 * function will return x and y.
		 * \return Array of missing user defined arguments names
		 * - distinct strings.
		 */
		ArrayPtr<StringPtr> getMissingUserDefinedArguments();
		/**
		 * \brief Returns missing user defined units names, i.e.
		 * 2*[w] + [q] where [w] and [q] are not defined
		 * function will return [w] and [q].
		 * \return Array of missing user defined units names
		 * - distinct strings.
		 */
		ArrayPtr<StringPtr> getMissingUserDefinedUnits();
		/**
		 * \brief Returns missing user defined functions names, i.e.
		 * sin(x) + fun(x,y) where fun is not defined
		 * function will return fun.
		 * \return Array of missing user defined functions names
		 * - distinct strings.
		 */
		ArrayPtr<StringPtr> getMissingUserDefinedFunctions();
		/**
		 * \brief Prints to the console copy of initial tokens. Presents how
		 * expression string is interpreted by the parser.
		 * \sa org::mariuszgromada::math::mxparser::Expression::getCopyOfInitialTokens()
		 */
		void consolePrintCopyOfInitialTokens();

		// ***********************************************************

		/**
		 * \brief Returns detailed user help on the syntax of mathematical expressions.
		 * \return One string value containing all the help.
		 */
		StringPtr getHelp();
		/**
		 * \brief Returns detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return One string value containing all the help.
		 */
		StringPtr getHelp(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(const StringPtr &)
		 */
		StringPtr getHelp(const String &query) { return getHelp(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(const StringPtr &)
		 */
		StringPtr getHelp(const Char *query) { return getHelp(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(const StringPtr &)
		 */
		StringPtr getHelp(const std::string &query) { return getHelp(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(const StringPtr &)
		 */
		StringPtr getHelp(const char *query) { return getHelp(S(query)); }
		/**
		 * \brief Returns detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, any string other than ""
		 * will replace the standard caption with the one specified by the user.
		 * \return One string value containing all the help.
		 */
		StringPtr getHelp(bool addHeader, bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(bool,bool,const StringPtr &)
		 */
		StringPtr getHelp(bool addHeader, bool addCaption, const String &caption) { return getHelp(addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(bool,bool,const StringPtr &)
		 */
		StringPtr getHelp(bool addHeader, bool addCaption, const Char *caption) { return getHelp(addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(bool,bool,const StringPtr &)
		 */
		StringPtr getHelp(bool addHeader, bool addCaption, const std::string &caption) { return getHelp(addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(bool,bool,const StringPtr &)
		 */
		StringPtr getHelp(bool addHeader, bool addCaption, const char *caption) { return getHelp(addHeader, addCaption, S(caption)); }
		/**
		 * \brief Returns detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, any string other than ""
		 * \return One string value containing all the help.
		 */
		StringPtr getHelp(const StringPtr &query, bool addHeader, bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(const StringPtr &,bool,bool,const StringPtr &)
		 */
		StringPtr getHelp(const String &query, bool addHeader, bool addCaption, const String &caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(const StringPtr &,bool,bool,const StringPtr &)
		 */
		StringPtr getHelp(const Char *query, bool addHeader, bool addCaption, const Char *caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(const StringPtr &,bool,bool,const StringPtr &)
		 */
		StringPtr getHelp(const std::string &query, bool addHeader, bool addCaption, const std::string &caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelp(const StringPtr &,bool,bool,const StringPtr &)
		 */
		StringPtr getHelp(const char *query, bool addHeader, bool addCaption, const char *caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }

		// ***********************************************************

		/**
		 * \brief Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 * \return One string value in CSV format containing all the help.
		 */
		StringPtr getHelpAsCsv();
		/**
		 * \brief Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return One string value in CSV format containing all the help.
		 */
		StringPtr getHelpAsCsv(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &)
		 */
		StringPtr getHelpAsCsv(const String &query) { return getHelpAsCsv(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &)
		 */
		StringPtr getHelpAsCsv(const Char *query) { return getHelpAsCsv(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &)
		 */
		StringPtr getHelpAsCsv(const std::string &query) { return getHelpAsCsv(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &)
		 */
		StringPtr getHelpAsCsv(const char *query) { return getHelpAsCsv(S(query)); }
		/**
		 * \brief Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 * \param quote Text qualifier.
		 * \param delimiter Delimiter.
		 * \param addHeader Indicator whether to add a header.
		 * \return One string value in CSV format containing all the help.
		 */
		StringPtr getHelpAsCsv(const StringPtr &quote, const StringPtr &delimiter, bool addHeader);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &,const StringPtr &,bool)
		 */
		StringPtr getHelpAsCsv(const String &quote, const String &delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &,const StringPtr &,bool)
		 */
		StringPtr getHelpAsCsv(const Char *quote, const Char *delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &,const StringPtr &,bool)
		 */
		StringPtr getHelpAsCsv(const std::string &quote, const std::string &delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &,const StringPtr &,bool)
		 */
		StringPtr getHelpAsCsv(const char *quote, const char *delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		/**
		 * \brief Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \param quote Text qualifier.
		 * \param delimiter Delimiter.
		 * \param addHeader Indicator whether to add a header.
		 * \return One string value in CSV format containing all the help.
		 */
		StringPtr getHelpAsCsv(const StringPtr &query, const StringPtr &quote, const StringPtr &delimiter, bool addHeader);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &,const StringPtr &,const StringPtr &,bool)
		 */
		StringPtr getHelpAsCsv(const String &query, const String &quote, const String &delimiter, bool addHeader) { return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &,const StringPtr &,const StringPtr &,bool)
		 */
		StringPtr getHelpAsCsv(const Char *query, const Char *quote, const Char *delimiter, bool addHeader) { return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &,const StringPtr &,const StringPtr &,bool)
		 */
		StringPtr getHelpAsCsv(const std::string &query, const std::string &quote, const std::string &delimiter, bool addHeader) { return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsCsv(const StringPtr &,const StringPtr &,const StringPtr &,bool)
		 */
		StringPtr getHelpAsCsv(const char *query, const char *quote, const char *delimiter, bool addHeader) { return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader); }

		// ***********************************************************

		/**
		 * \brief Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 * \return One string value containing all the help. String in HTML table format.
		 */
		StringPtr getHelpAsHtmlTable();
		/**
		 * \brief Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return One string value containing all the help. String in HTML table format.
		 */
		StringPtr getHelpAsHtmlTable(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(const String &query) { return getHelpAsHtmlTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(const Char *query) { return getHelpAsHtmlTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(const std::string &query) { return getHelpAsHtmlTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(const char *query) { return getHelpAsHtmlTable(S(query)); }
		/**
		 * \brief Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param addFigure Indicator whether to add a FIGURE tag.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \param cssClass If CSS class is to be added, use any string other than "".
		 * \return One string value containing all the help. String in HTML table format.
		 */
		StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const StringPtr &caption, const StringPtr &cssClass);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const String &caption, const String &cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const Char *caption, const Char *cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const std::string &caption, const std::string &cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const char *caption, const char *cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \brief Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param addFigure Indicator whether to add a FIGURE tag.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \param cssClass If CSS class is to be added, use any string other than "".
		 * \return One string value containing all the help. String in HTML table format.
		 */
		StringPtr getHelpAsHtmlTable(const StringPtr &query, bool addHeader, bool addCaption, bool addFigure, const StringPtr &caption, const StringPtr &cssClass);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(const StringPtr &,bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(const String &query, bool addHeader, bool addCaption, bool addFigure,const String &caption, const String &cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(const StringPtr &,bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(const Char *query, bool addHeader, bool addCaption, bool addFigure, const Char *caption, const Char *cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(const StringPtr &,bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(const std::string &query, bool addHeader, bool addCaption, bool addFigure, const std::string &caption, const std::string &cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsHtmlTable(const StringPtr &,bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		StringPtr getHelpAsHtmlTable(const char *query, bool addHeader, bool addCaption, bool addFigure, const char *caption, const char *cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}

		// ***********************************************************

		/**
		 * \brief Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 * \return One string value containing all the help. String in Markdown table format.
		 */
		StringPtr getHelpAsMarkdownTable();
		/**
		 * \brief Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return One string value containing all the help. String in Markdown table format.
		 */
		StringPtr getHelpAsMarkdownTable(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(const String &query) { return getHelpAsMarkdownTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(const Char *query) { return getHelpAsMarkdownTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(const std::string &query) { return getHelpAsMarkdownTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(const char *query) { return getHelpAsMarkdownTable(S(query)); }
		/**
		 * \brief Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \return One string value containing all the help. String in Markdown table format.
		 */
		StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(bool,bool,const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const String &caption) { return getHelpAsMarkdownTable(addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(bool,bool,const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const Char *caption) { return getHelpAsMarkdownTable(addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(bool,bool,const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const std::string &caption) { return getHelpAsMarkdownTable(addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(bool,bool,const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const char *caption) { return getHelpAsMarkdownTable(addHeader, addCaption, S(caption)); }
		/**
		 * \brief Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \return One string value containing all the help. String in Markdown table format.
		 */
		StringPtr getHelpAsMarkdownTable(const StringPtr &query, bool addHeader, bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(const StringPtr &,bool,bool,const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(const String &query, bool addHeader, bool addCaption, const String &caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(const StringPtr &,bool,bool,const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(const Char *query, bool addHeader, bool addCaption, const Char *caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(const StringPtr &,bool,bool,const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(const std::string &query, bool addHeader, bool addCaption, const std::string &caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsMarkdownTable(const StringPtr &,bool,bool,const StringPtr &)
		 */
		StringPtr getHelpAsMarkdownTable(const char *query, bool addHeader, bool addCaption, const char *caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}

		// ***********************************************************

		/**
		 * \brief Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 * \return One string value containing all the help. String in Json format.
		 */
		StringPtr getHelpAsJson();
		/**
		 * \brief Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return One string value containing all the help. String in Json format.
		 */
		StringPtr getHelpAsJson(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(const StringPtr &)
		 */
		StringPtr getHelpAsJson(const String &query) { return getHelpAsJson(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(const StringPtr &)
		 */
		StringPtr getHelpAsJson(const Char *query) { return getHelpAsJson(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(const StringPtr &)
		 */
		StringPtr getHelpAsJson(const std::string &query) { return getHelpAsJson(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(const StringPtr &)
		 */
		StringPtr getHelpAsJson(const char *query) { return getHelpAsJson(S(query)); }
		/**
		 * \brief Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \return One string value containing all the help. String in Json format.
		 */
		StringPtr getHelpAsJson(bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(bool,const StringPtr &)
		 */
		StringPtr getHelpAsJson(bool addCaption, const String &caption) { return getHelpAsJson(addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(bool,const StringPtr &)
		 */
		StringPtr getHelpAsJson(bool addCaption, const Char *caption) { return getHelpAsJson(addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(bool,const StringPtr &)
		 */
		StringPtr getHelpAsJson(bool addCaption, const std::string &caption) { return getHelpAsJson(addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(bool,const StringPtr &)
		 */
		StringPtr getHelpAsJson(bool addCaption, const char *caption) { return getHelpAsJson(addCaption, S(caption)); }
		/**
		 * \brief Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \return One string value containing all the help. String in Json format.
		 */
		StringPtr getHelpAsJson(const StringPtr &query, bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(const StringPtr &,bool,const StringPtr &)
		 */
		StringPtr getHelpAsJson(const String &query, bool addCaption, const String &caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(const StringPtr &,bool,const StringPtr &)
		 */
		StringPtr getHelpAsJson(const Char *query, bool addCaption, const Char *caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(const StringPtr &,bool,const StringPtr &)
		 */
		StringPtr getHelpAsJson(const std::string &query, bool addCaption, const std::string &caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getHelpAsJson(const StringPtr &,bool,const StringPtr &)
		 */
		StringPtr getHelpAsJson(const char *query, bool addCaption, const char *caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }

		// ***********************************************************

		/**
		 * \brief Returns list of keywords known to the parser
		 * \return List of keywords known to the parser.
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::KeyWord
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::KeyWord::wordTypeId
		 * \sa org::mariuszgromada::math::mxparser::Expression::getHelp()
		 */
		ListPtr<KeyWordPtr> getKeyWords();
		/**
		 * \brief Returns list of keywords known to the parser. Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return List of keywords known to the parser filter against query string.
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::KeyWord
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::KeyWord::wordTypeId
		 * \sa org::mariuszgromada::math::mxparser::Expression::getHelp(const StringPtr &)
		 */
		ListPtr<KeyWordPtr> getKeyWords(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getKeyWords(const StringPtr &)
		 */
		ListPtr<KeyWordPtr> getKeyWords(const String &query) { return getKeyWords(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getKeyWords(const StringPtr &)
		 */
		ListPtr<KeyWordPtr> getKeyWords(const Char *query) { return getKeyWords(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getKeyWords(const StringPtr &)
		 */
		ListPtr<KeyWordPtr> getKeyWords(const std::string &query) { return getKeyWords(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::Expression::getKeyWords(const StringPtr &)
		 */
		ListPtr<KeyWordPtr> getKeyWords(const char *query) { return getKeyWords(S(query)); }


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
		ExpressionPtr cloneForThreadSafe();

		// ***********************************************************

		/**
		 * \brief FOUND / NOT_FOUND
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
		 * \brief For verbose mode purposes
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
		static int findDecimalLiteralEnd(const StringPtr &str, int start, bool allowTrailingDot);
		static int findFractionLiteralEnd(const StringPtr &str, int start);
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
		 * \brief Marker for internal processing
		 */
		static constexpr bool INTERNAL = true;
		StringPtr expressionString = StringInvariantEMPTY();
		ListPtr<ArgumentPtr> argumentsList = nullptr;
		ListPtr<FunctionPtr> functionsList = nullptr;
		// Independent expression views own weak-self targets they actually use.
		std::shared_ptr<wrapper::List<ArgumentPtr>::SelfPin> weakArgumentOwnerKeepAlive;
		std::shared_ptr<wrapper::List<FunctionPtr>::SelfPin> weakFunctionOwnerKeepAlive;
		std::weak_ptr<Argument> argumentBodyOwner;
		std::weak_ptr<Function> functionBodyOwner;
		bool isDefinitionBody = false;
		void retainWeakDefinitionOwners();
		ListPtr<ConstantPtr> constantsList = nullptr;

		ListPtr<TokenPtr> initialTokens = nullptr;

		// Reverse invalidation observers do not own their parent expressions.
		ListPtr<std::weak_ptr<Expression>> relatedExpressionsList = nullptr;
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

		SERIALIZE_DERIVED_POST_LOAD(6, PrimitiveElement,
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
			), retainWeakDefinitionOwners()
		);

	public:
		void showKeyWords() const;

		STATIC_VARS_INITI_H;
	private:
		double calculateCoreWithCancel(const CalcStepsRegisterPtr &calcStepsRegister, int cancelId);

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

	inline ExpressionPtr new_Expression(char *expressionString, bool parserKeyWordsOnly) {
		return new_Expression(static_cast<const char *>(expressionString), parserKeyWordsOnly);
	}


	/**
	 * \brief Default constructor - empty expression
	 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Expression instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \brief Default constructor - empty expression
	 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Expression instance.
	 */
	inline ExpressionPtr new_Expression(const ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(elements);
		expression->postConstructorSync();
		return expression;
	}

	// 2 =========================================================================


	/**
	 * \brief Constructor - creates new expression from expression string.
	 * \param expressionString    definition of the expression
	 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Expression instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(const StringPtr &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(char *expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(static_cast<const char *>(expressionString), FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}


	/**
	 * \brief Constructor - creates new expression from expression string.
	 * \param expressionString    definition of the expression
	 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Expression instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(StringPtr &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \brief Constructor - creates new expression from expression string.
	 * \param expressionString    definition of the expression
	 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Expression instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(const String &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \brief Constructor - creates new expression from expression string.
	 * \param expressionString    definition of the expression
	 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Expression instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(String &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \brief Constructor - creates new expression from expression string.
	 * \param expressionString    definition of the expression
	 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Expression instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(const std::string &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \brief Constructor - creates new expression from expression string.
	 * \param expressionString    definition of the expression
	 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Expression instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(std::string &expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \brief Constructor - creates new expression from expression string.
	 * \param expressionString    definition of the expression
	 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Expression instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(const Char *expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \brief Constructor - creates new expression from expression string.
	 * \param expressionString    definition of the expression
	 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Expression instance.
	 * \tparam PrimitiveElements Types of the forwarded arguments.
	 */
	template<typename... PrimitiveElements>
	ExpressionPtr new_Expression(const char *expressionString, PrimitiveElements &&... elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, FORWARD_PRIMITIVE(elements)...);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \brief Constructor - creates new expression from expression string.
	 * \param expressionString    definition of the expression
	 * \param elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 * \sa org::mariuszgromada::math::mxparser::PrimitiveElement
	 * \return A shared pointer to the new Expression instance.
	 */
	inline ExpressionPtr new_Expression(const StringPtr &expressionString,
	                                    const ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
	 */
	inline ExpressionPtr new_Expression(StringPtr &expressionString, const ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
	 */
	inline ExpressionPtr new_Expression(const StringPtr &expressionString, ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
	 */
	inline ExpressionPtr new_Expression(StringPtr &expressionString, ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}


	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
	 */
	inline ExpressionPtr new_Expression(const String &expressionString, const ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
	 */
	inline ExpressionPtr new_Expression(String &expressionString, const ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
	 */
	inline ExpressionPtr new_Expression(const String &expressionString, ListPtr<PrimitiveElementPtr> &elements) {
		ExpressionPtr expression = std::make_shared<Expression>(expressionString, elements);
		expression->postConstructorSync();
		return expression;
	}

	/**
	 * \copydoc org::mariuszgromada::math::mxparser::new_Expression(const StringPtr &,const ListPtr< PrimitiveElementPtr > &)
	 */
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
