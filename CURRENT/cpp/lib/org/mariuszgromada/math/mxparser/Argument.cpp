/*
 * @(#)Argument.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/Argument.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/ArgumentExtension.hpp"
#include "org/mariuszgromada/math/mxparser/CloneCache.hpp"
#include "org/mariuszgromada/math/mxparser/License.hpp"
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Token.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/SystemUtils.hpp"

namespace org::mariuszgromada::math::mxparser {

	using namespace org::mariuszgromada::math::mxparser::wrapper;
	using namespace org::mariuszgromada::math::mxparser::parsertokens;
	using namespace org::mariuszgromada::math::mxparser::miscellaneous;

	API_VISIBLE StringPtr Argument::TYPE_DESC = nullptr;
	API_VISIBLE int Argument::MAX_RECURSION_CALLS = Integer::NaN;
	const ListPtr<ArgumentPtr> Argument::LIST_PTR_OF_ARGUMENT_PTR_ALWAYS_EMPTY = new_List<ArgumentPtr>();

	API_VISIBLE StringPtr Argument::StringInvariantEMPTY() {
		return StringInvariant::EMPTY;
	}

	STATIC_VARS_INITI_CPP(Argument,

		STATIC_VARS_INITI_DEPENDENCY(ParserSymbol);
		STATIC_VARS_INITI_DEPENDENCY(mXparser);
		STATIC_VARS_PARTIAL_INITI_DEPENDENCY(StringModel);

		INIT_WITH_NA(TYPE_DESC);
		MAX_RECURSION_CALLS = mXparser::MAX_RECURSION_CALLS + 2;
	);

	API_VISIBLE void Argument::refreshMaxAllowedRecursionDepth() {
		// 2 more vs Expression as to reach Expression->calculate()
		// from Argument::getArgumentValue() requires additional steps
		MAX_RECURSION_CALLS = mXparser::MAX_RECURSION_CALLS + 2;
	}

	/*=================================================
	 *
	 * Constructors
	 *
	 *=================================================
	 */
	API_VISIBLE StringPtr Argument::buildErrorMessageInvalidArgumentName(const StringPtr &argumentName) {
		return StringModel::buildErrorMessagePatternDoesNotMatchWithExamples(
			argumentName, StringModel::STRING_RESOURCES->INVALID_ARGUMENT_NAME,
			StringInvariant::ARGUMENT_NAME_EXAMPLES);
	}

	API_VISIBLE StringPtr Argument::buildErrorMessageInvalidArgumentDefinition(const StringPtr &argumentDefinitionString,
	                                                               const StringPtr &argumentDefinitionExamples) {
		return StringModel::buildErrorMessagePatternDoesNotMatchWithExamples(
			argumentDefinitionString, StringModel::STRING_RESOURCES->INVALID_ARGUMENT_DEFINITION,
			argumentDefinitionExamples);
	}

	API_VISIBLE StringPtr Argument::buildErrorMessageInvalidArgumentDefinition(const StringPtr &argumentDefinitionString) {
		return buildErrorMessageInvalidArgumentDefinition(argumentDefinitionString,
		                                                  StringInvariant::ARGUMENT_DEFINITION_EXAMPLES);
	}

	API_VISIBLE void Argument::registerNoSyntaxErrorInDefinition() {
		syntaxStatusDefinition = NO_SYNTAX_ERRORS;
		errorMessageDefinition = StringModel::STRING_RESOURCES->NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION;
		if (argumentExpression == nullptr)
			argumentExpression = new_Expression();
	}

	API_VISIBLE void Argument::registerSyntaxErrorInDefinition(const StringPtr &errorMessage) {
		syntaxStatusDefinition = SYNTAX_ERROR;
		errorMessageDefinition = errorMessage;
		if (argumentExpression == nullptr)
			argumentExpression = new_Expression();
	}

	/**
	 * Package level  constructor used by RecursiveArgument class
	 *
	 * @param isRecursive
	 * @param argumentDefinitionString
	 * @param elements
	 *
	 * @see RecursiveArgument
	 */
	API_VISIBLE Argument::Argument(bool isRecursive, const StringPtr &argumentDefinitionString,
	                   const ListPtr<PrimitiveElementPtr> &elements) : PrimitiveElement(Argument::TYPE_ID) {
		analyzeArgumentDefinitionString(isRecursive, false, argumentDefinitionString, elements);
		iAmFullyConstructed = true;
	}

	/**
	 * Package level  constructor used by RecursiveArgument class
	 *
	 * @param isRecursive
	 * @param argumentDefinitionString
	 *
	 * @see RecursiveArgument
	 */
	API_VISIBLE Argument::Argument(bool isRecursive, const StringPtr &argumentDefinitionString) : PrimitiveElement(
		Argument::TYPE_ID) {
		analyzeArgumentDefinitionString(isRecursive, false, argumentDefinitionString,
		                                LIST_PTR_OF_PRIMITIVE_ELEMENT_PTR_ALWAYS_EMPTY);
		iAmFullyConstructed = true;
	}

	/**
	 * Argument definition in one string logic
	 *
	 * @param isRecursive
	 * @param forceDependent
	 * @param argumentDefinitionString
	 * @param elements
	 */
	API_VISIBLE void Argument::analyzeArgumentDefinitionString(bool isRecursive, bool forceDependent, const StringPtr &argumentDefinitionString, const ListPtr<PrimitiveElementPtr> &elements) {
		if (argumentDefinitionString == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_STRING_IS_NULL);
			return;
		}
		if (elements == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_ELEMENTS_ARE_NULL);
			return;
		}
		StringPtr argumentDefinitionStringTrim = StringUtils::trim(argumentDefinitionString);
		if (StringUtils::regexMatch(argumentDefinitionStringTrim, ParserSymbol::nameOnlyTokenRegExp)) {
			argumentName = argumentDefinitionStringTrim;
			registerNoSyntaxErrorInDefinition();
			return;
		}
		if (StringUtils::regexMatch(argumentDefinitionStringTrim, ParserSymbol::constArgDefStrRegExp)) {
			HeadEqBodyPtr headEqBody = new_HeadEqBody(argumentDefinitionStringTrim);
			argumentName = headEqBody->headTokens->get(0)->tokenStr;
			ExpressionPtr bodyExpr = new_Expression(headEqBody->bodyStr);
			bodyExpr->setDescription(StringInvariant::INTERNAL);
			bodyExpr->setForwardErrorMessage(false);
			double bodyValue = bodyExpr->calculate();
			if (!forceDependent && bodyExpr->getSyntaxStatus() == Expression::NO_SYNTAX_ERRORS && !
			    Double::isNaN(bodyValue)) {
				argumentExpression = new_Expression();
				argumentValue = bodyValue;
				argumentType = FREE_ARGUMENT;
			} else {
				argumentExpression = bodyExpr;
				bodyExpr->setForwardErrorMessage(true);
				addDefinitions(elements);
				argumentType = DEPENDENT_ARGUMENT;
			}
			argumentExpression->setDescription(argumentName);
			registerNoSyntaxErrorInDefinition();
			return;
		}
		if (isRecursive) {
			if (StringUtils::regexMatch(argumentDefinitionStringTrim, ParserSymbol::function1ArgDefStrRegExp)) {
				HeadEqBodyPtr headEqBody = new_HeadEqBody(argumentDefinitionStringTrim);
				argumentName = headEqBody->headTokens->get(0)->tokenStr;
				argumentExpression = new_Expression(CONST_STRING_PTR(headEqBody->bodyStr), elements);
				argumentExpression->setDescription(headEqBody->headStr);
				argumentType = DEPENDENT_ARGUMENT;
				n = new_Argument(headEqBody->headTokens->get(2)->tokenStr);
				registerNoSyntaxErrorInDefinition();
				return;
			} else {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentDefinition(
					argumentDefinitionStringTrim, StringInvariant::RECURSIVE_ARGUMENT_DEFINITION_EXAMPLES));
				return;
			}
		}
		registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentDefinition(argumentDefinitionStringTrim));
	}

	API_VISIBLE void Argument::analyzeArgumentDefinitionString(bool isRecursive, bool forceDependent, const StringPtr &argumentDefinitionString) {
		analyzeArgumentDefinitionString(isRecursive, forceDependent, argumentDefinitionString, VariadicProcessor::paramsPrimitiveElementEmpty);
	}


	API_VISIBLE void Argument::executeConstrutorConstPPEnonTemplatePart(const StringPtr &argumentName, const StringPtr &argumentExpressionString, const ListPtr<PrimitiveElementPtr>& paramsPrimitiveElement) {
		if (argumentName == nullptr || argumentExpressionString == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_STRING_IS_NULL);
			return;
		}
		if (paramsPrimitiveElement == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_ELEMENTS_ARE_NULL);
			return;
		}
		StringPtr argumentNameTrim = StringUtils::trim(argumentName);
		if (!StringUtils::regexMatch(argumentNameTrim, ParserSymbol::nameOnlyTokenRegExp)) {
			registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentName(argumentNameTrim));
			return;
		}
		StringPtr argumentExpressionStringTrim = StringUtils::trim(argumentExpressionString);
		this->argumentName = argumentNameTrim;
		argumentExpression = new_Expression(argumentExpressionStringTrim, paramsPrimitiveElement);
		argumentExpression->setDescription(argumentNameTrim);
		argumentType = DEPENDENT_ARGUMENT;
		registerNoSyntaxErrorInDefinition();
	}
	/**
	 * Constructor - creates free argument->
	 *
	 * @param      argumentName   the argument name
	 * @param      argumentValue  the argument value
	 */
	API_VISIBLE void Argument::executeConstrutorConst(const StringPtr &argumentName, double argumentValue) {
		if (argumentName == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_STRING_IS_NULL);
			return;
		}
		StringPtr argumentNameTrim = StringUtils::trim(argumentName);
		if (!StringUtils::regexMatch(argumentNameTrim, ParserSymbol::nameOnlyTokenRegExp)) {
			registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentName(argumentNameTrim));
			return;
		}
		this->argumentName = argumentNameTrim;
		this->argumentValue = argumentValue;
		registerNoSyntaxErrorInDefinition();
	}

	/**
	 * Constructor for argument definition based on
	 * your own source code - this is via implementation
	 * of ArgumentExtension interface.
	 *
	 * @param argumentName       Argument name
	 * @param argumentExtension  Your own source code
	 */
	API_VISIBLE void Argument::executeConstrutorConst(const StringPtr &argumentName,
	                                      const ArgumentExtensionPtr &argumentExtension) {
		if (argumentName == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_STRING_IS_NULL);
			return;
		}
		if (argumentExtension == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_EXTENSION_IS_NULL);
			return;
		}
		StringPtr argumentNameTrim = StringUtils::trim(argumentName);
		if (!StringUtils::regexMatch(argumentNameTrim, ParserSymbol::nameOnlyTokenRegExp)) {
			registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentName(argumentNameTrim));
			return;
		}
		this->argumentName = argumentNameTrim;
		this->argumentExtension = argumentExtension;
		argumentBodyType = BODY_EXTENDED;
		registerNoSyntaxErrorInDefinition();
	}

	/*
	 * Internal constructor used for cloning
	 */
	API_VISIBLE Argument::Argument(const ArgumentPtr &argumentToClone, bool isThreadSafeClone,
	                   const CloneCachePtr &cloneCache) : PrimitiveElement(Argument::TYPE_ID) {
		argumentBodyType = argumentToClone->argumentBodyType;
		description = argumentToClone->description;
		argumentName = argumentToClone->argumentName;
		syntaxStatusDefinition = argumentToClone->syntaxStatusDefinition;
		errorMessageDefinition = argumentToClone->errorMessageDefinition;
		argumentType = argumentToClone->argumentType;
		argumentValue = argumentToClone->argumentValue;
		recursionCallsCounter = argumentToClone->recursionCallsCounter;
		computingTime = argumentToClone->computingTime;
		if (argumentToClone->argumentExtension != nullptr)
			argumentExtension = argumentToClone->argumentExtension->clone();

		if (isThreadSafeClone) {
			if (argumentToClone->argumentExpression != nullptr)
				argumentExpression = argumentToClone->argumentExpression->cloneForThreadSafeInternal(cloneCache);
			if (argumentToClone->n != nullptr)
				n = argumentToClone->n->cloneForThreadSafeInternal(cloneCache);
			return;
		}

		argumentExpression = argumentToClone->argumentExpression;
		n = argumentToClone->n;
		iAmFullyConstructed = true;
	}

	/**
	 * Sets argument description.
	 *
	 * @param      description         the argument description.
	 */
	API_VISIBLE void Argument::setDescription(const StringPtr &description) {
		if (description == nullptr)
			return;
		this->description = description;
	}

	/**
	 * Gets argument description.
	 *
	 * @return     The argument description string.
	 */
	API_VISIBLE StringPtr Argument::getDescription() const {
		return description;
	}

	/**
	 * Enables argument verbose mode
	 */
	API_VISIBLE void Argument::setVerboseMode() {
		argumentExpression->setVerboseMode();
	}

	/**
	 * Disables argument verbose mode (sets default silent mode)
	 */
	API_VISIBLE void Argument::setSilentMode() {
		argumentExpression->setSilentMode();
	}

	/**
	 * Returns verbose mode status
	 *
	 * @return     true if verbose mode is on,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool Argument::getVerboseMode() const {
		return argumentExpression->getVerboseMode();
	}

	/**
	 * Gets recursive mode status
	 *
	 * @return      true if recursive mode is enabled (RecursiveArgument),
	 *              otherwise returns false
	 *
	 * @see RecursiveArgument
	 */
	API_VISIBLE bool Argument::getRecursiveMode() const {
		if (argumentType == RECURSIVE_ARGUMENT)
			return true;
		return false;
	}

	/**
	 * Gets computing time
	 *
	 * @return     Computing time in seconds.
	 */
	API_VISIBLE double Argument::getComputingTime() const {
		return computingTime;
	}

	/**
	 * Sets (modifies) argument name.
	 * Each expression / function / dependent argument associated
	 * with this argument will be marked as modified
	 * (requires new syntax checking).
	 *
	 * @param      argumentName        the argument name
	 */
	API_VISIBLE void Argument::setArgumentName(const StringPtr &argumentName) {
		if (argumentName == nullptr) {
			if (!syntaxStatusDefinition)
				registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_STRING_IS_NULL);
			return;
		}
		StringPtr argumentNameTrim = StringUtils::trim(argumentName);
		if (*this->argumentName == *argumentNameTrim)
			return;
		if (!StringUtils::regexMatch(argumentNameTrim, ParserSymbol::nameOnlyTokenRegExp)) {
			if (!syntaxStatusDefinition)
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentName(argumentNameTrim));
			return;
		}
		this->argumentName = argumentNameTrim;
		setExpressionModifiedFlags();
		registerNoSyntaxErrorInDefinition();
	}

	/**
	 * Sets argument expression string.
	 * Each expression / function / dependent argument associated
	 * with this argument will be marked as modified
	 * (requires new syntax checking).
	 * If BODY_EXTENDED argument then BODY_RUNTIME is set.
	 *
	 * @param      argumentExpressionString      the argument expression string
	 *
	 * @see        Expression
	 */
	API_VISIBLE void Argument::setArgumentExpressionString(const StringPtr &argumentExpressionString) {
		if (argumentExpressionString == nullptr) {
			if (!syntaxStatusDefinition)
				registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_STRING_IS_NULL);
			return;
		}
		StringPtr argumentExpressionStringTrim = StringUtils::trim(argumentExpressionString);
		argumentExpression->setExpressionString(argumentExpressionStringTrim);
		argumentType = DEPENDENT_ARGUMENT;
		argumentBodyType = BODY_RUNTIME;
	}

	/**
	 * Gets argument name
	 *
	 * @return     the argument name as string
	 */
	API_VISIBLE StringPtr Argument::getArgumentName() const {
		return argumentName;
	}

	/**
	 * Gets argument expression string
	 *
	 * @return the argument expression string
	 */
	API_VISIBLE StringPtr Argument::getArgumentExpressionString() const {
		return argumentExpression->getExpressionString();
	}

	/**
	 * Gets argument type
	 *
	 * @return     Argument type: Argument::FREE_ARGUMENT,
	 *                            Argument::DEPENDENT_ARGUMENT,
	 *                            Argument::RECURSIVE_ARGUMENT
	 */
	API_VISIBLE int Argument::getArgumentType() const {
		return argumentType;
	}

	/**
	 * Sets argument value, if DEPENDENT_ARGUMENT then argument type
	 * is set to FREE_ARGUMENT.
	 * If BODY_EXTENDED argument the BODY_RUNTIME argument is set.
	 *
	 * @param  argumentValue       the value of argument
	 */
	API_VISIBLE void Argument::setArgumentValue(double argumentValue) {
		argumentType = FREE_ARGUMENT;
		argumentBodyType = BODY_RUNTIME;
		this->argumentValue = argumentValue;
	}

	/*=================================================
	 *
	 * Syntax checking and values calculation
	 *
	 *=================================================
	 */
	/**
	 * Returns argument body type: {Argument#BODY_RUNTIME} {Argument#BODY_EXTENDED}
	 * @return Returns argument body type: {Argument#BODY_RUNTIME} {Argument#BODY_EXTENDED}
	 */
	API_VISIBLE int Argument::getArgumentBodyType() const {
		return argumentBodyType;
	}

	/**
	 * Checks argument syntax
	 *
	 * @return    syntax status: Argument::NO_SYNTAX_ERRORS,
	 *            Argument::SYNTAX_ERROR
	 *
	 */
	API_VISIBLE bool Argument::checkSyntax() {
		if (!syntaxStatusDefinition)
			return SYNTAX_ERROR;
		if (argumentName->empty())
			return SYNTAX_ERROR;
		if (argumentBodyType == BODY_EXTENDED) {
			if (argumentExtension == nullptr)
				return SYNTAX_ERROR;
			return NO_SYNTAX_ERRORS;
		}
		if (argumentType == FREE_ARGUMENT)
			return NO_SYNTAX_ERRORS;
		return argumentExpression->checkSyntax();
	}

	/**
	 * Returns error message after checking the syntax
	 *
	 * @return     Error message as string.
	 */
	API_VISIBLE StringPtr Argument::getErrorMessage() const {
		if (!syntaxStatusDefinition)
			return errorMessageDefinition;
		if (argumentName->empty())
			return errorMessageDefinition;
		if (argumentBodyType == BODY_EXTENDED && argumentExtension == nullptr)
			return errorMessageDefinition;
		if (argumentType == FREE_ARGUMENT)
			return errorMessageDefinition;
		StringPtr argumentExpressionErrorMessage = argumentExpression->getErrorMessage();
		if (!errorMessageDefinition->empty() && argumentExpressionErrorMessage->empty())
			return errorMessageDefinition;
		return argumentExpressionErrorMessage;
	}

	/**
	 * Gets argument value.
	 *
	 * @return     direct argument value for free argument,
	 *             otherwise returns calculated argument value
	 *             based on the argument expression.
	 */
	API_VISIBLE double Argument::getArgumentValue() {
		return getArgumentValue(nullptr);
	}

	/**
	 * Gets argument value and registers all the calculation steps
	 *
	 * @param calcStepsRegister A collection to store list of calculation steps,
	 *                          steps registered as strings.
	 *
	 * @return     direct argument value for free argument,
	 *             otherwise returns calculated argument value
	 *             based on the argument expression.
	 */
	API_VISIBLE double Argument::getArgumentValue(const CalcStepsRegisterPtr &calcStepsRegister) {
		CalcStepsRegister::setUserArgument(calcStepsRegister, THIS(Argument));
		computingTime = 0;

		if (!syntaxStatusDefinition)
			return Double::NaN;

		double value;
		if (argumentBodyType == BODY_EXTENDED) {
			License::checkLicense();
			Long startTime = SystemUtils::currentTimeMillis();
			value = argumentExtension->getArgumentValue();
			computingTime = static_cast<double>(SystemUtils::currentTimeMillis() - startTime) / 1000.0;
			return value;
		}

		if (argumentType == FREE_ARGUMENT)
			return argumentValue;

		recursionCallsCounter++;
		if (recursionCallsCounter >= MAX_RECURSION_CALLS) {
			recursionCallsCounter--;
			return Double::NaN;
		}
		value = argumentExpression->calculate(calcStepsRegister);
		recursionCallsCounter--;
		computingTime = argumentExpression->computingTime;
		return value;
	}

	/**
	 * Adds user defined elements (such as: Arguments, Constants, Functions)
	 * to the argument expressions.
	 *
	 * @param elements Elements list (variadic - comma separated) of types: Argument, Constant, Function
	 *
	 * @see PrimitiveElement
	 */
	API_VISIBLE void Argument::addDefinitions(const ListPtr<PrimitiveElementPtr> &elements) {
		if (elements == nullptr) return;
		argumentExpression->addDefinitions(elements);
	}

	API_VISIBLE void Argument::addDefinitions(const PrimitiveElementPtr &element) {
		if (element == nullptr) return;
		argumentExpression->addDefinitions(element);
	}

	/**
	 * Removes user defined elements (such as: Arguments, Constants, Functions)
	 * from the argument expressions.
	 *
	 * @param elements Elements list (variadic - comma separated) of types: Argument, Constant, Function
	 *
	 * @see PrimitiveElement
	 */
	API_VISIBLE void Argument::removeDefinitions(const ListPtr<PrimitiveElementPtr> &elements) {
		if (elements == nullptr) return;
		argumentExpression->removeDefinitions(elements);
	}

	API_VISIBLE void Argument::removeDefinitions(const PrimitiveElementPtr &element) {
		if (element == nullptr) return;
		argumentExpression->removeDefinitions(element);
	}

	/*=================================================
 *
 * Arguments handling API (the same as in Expression)
 * (protected argument expression)
 *
 *=================================================
 */
	/**
	 * Adds arguments (variadic) to the argument expression definition.
	 *
	 * @param      arguments           the arguments list
	 *                                 (comma separated list)
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Argument::addArguments(const ListPtr<ArgumentPtr> &arguments) {
		if (arguments == nullptr) return;
		argumentExpression->addArguments(arguments);
	}

	API_VISIBLE void Argument::addArguments(const ArgumentPtr &argument) {
		if (argument == nullptr) return;
		argumentExpression->addArguments(argument);
	}

	/**
	 * Enables to define the arguments (associated with
	 * the argument expression) based on the given arguments names.
	 *
	 * @param      argumentsNames      the arguments names (variadic)
	 *                                 comma separated list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Argument::defineArguments(const ListPtr<StringPtr> &argumentsNames) {
		if (argumentsNames == nullptr) return;
		argumentExpression->defineArguments(argumentsNames);
	}

	API_VISIBLE void Argument::defineArguments(const StringPtr &argumentName) {
		if (argumentName == nullptr) return;
		argumentExpression->defineArguments(argumentName);
	}

	/**
	 * Enables to define the argument (associated with the argument expression)
	 * based on the argument name and the argument value.
	 *
	 * @param      argumentName        the argument name
	 * @param      argumentValue       the argument value
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Argument::defineArgument(const StringPtr &argumentName, double argumentValue) {
		if (argumentName == nullptr)
			return;
		argumentExpression->defineArgument(argumentName, argumentValue);
	}

	/**
	 * Gets argument index from the argument expression.
	 *
	 * @param      argumentName        the argument name
	 *
	 * @return     The argument index if the argument name was found,
	 *             otherwise returns Argument::NOT_FOUND
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE int Argument::getArgumentIndex(const StringPtr &argumentName) const {
		if (argumentName == nullptr)
			return NOT_FOUND;
		return argumentExpression->getArgumentIndex(argumentName);
	}

	/**
	 * Gets argument from the argument expression.
	 *
	 *
	 * @param      argumentName        the argument name
	 *
	 * @return     The argument if the argument name was found,
	 *             otherwise returns nullptr.
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE ArgumentPtr Argument::getArgument(const StringPtr &argumentName) const {
		if (argumentName == nullptr)
			return nullptr;
		return argumentExpression->getArgument(argumentName);
	}

	/**
	 * Gets argument from the argument expression.
	 *
	 * @param      argumentIndex       the argument index
	 *
	 * @return     Argument if the argument index is between 0 and
	 *             the last available argument index (getArgumentsNumber()-1),
	 *             otherwise returns nullptr.
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE ArgumentPtr Argument::getArgument(int argumentIndex) const {
		if (argumentIndex < 0)
			return nullptr;
		return argumentExpression->getArgument(argumentIndex);
	}

	/**
	 * Gets number of arguments associated with the argument expression.
	 *
	 * @return     The number of arguments (int &gt;= 0)
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE int Argument::getArgumentsNumber() const {
		if (argumentType != DEPENDENT_ARGUMENT)
			return 0;
		return argumentExpression->getArgumentsNumber();
	}

	/**
	 * Removes first occurrences of the arguments
	 * associated with the argument expression.
	 *
	 * @param      argumentsNames      the arguments names
	 *                                 (variadic parameters) comma separated
	 *                                 list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Argument::removeArguments(const ListPtr<StringPtr> &argumentsNames) {
		if (argumentsNames == nullptr) return;
		argumentExpression->removeArguments(argumentsNames);
	}

	API_VISIBLE void Argument::removeArguments(const StringPtr &argumentName) {
		if (argumentName == nullptr) return;
		argumentExpression->removeArguments(argumentName);
	}

	/**
	 * Removes first occurrences of the arguments
	 * associated with the argument expression.
	 *
	 * @param      arguments           the arguments (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Argument::removeArguments(const ListPtr<ArgumentPtr> &arguments) {
		if (arguments == nullptr) return;
		argumentExpression->removeArguments(arguments);
	}

	API_VISIBLE void Argument::removeArguments(const ArgumentPtr &argument) {
		if (argument == nullptr) return;
		argumentExpression->removeArguments(argument);
	}

	/**
	 * Removes all arguments associated with the argument expression.
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Argument::removeAllArguments() {
		argumentExpression->removeAllArguments();
	}

	/*=================================================
	 *
	 * Constants handling API (the same as in Expression)
	 * (protected argument expression)
	 *
	 *=================================================
	 */
	/**
	 * Adds constants (variadic parameters) to the argument expression definition.
	 *
	 * @param      constants           the constants
	 *                                 (comma separated list)
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Argument::addConstants(const ListPtr<ConstantPtr> &constants) {
		if (constants == nullptr) return;
		argumentExpression->addConstants(constants);
	}

	API_VISIBLE void Argument::addConstants(const ConstantPtr &constant) {
		if (constant == nullptr) return;
		argumentExpression->addConstants(constant);
	}

	/**
	 * Enables to define the constant (associated with
	 * the argument expression) based on the constant name and
	 * constant value.
	 *
	 * @param      constantName        the constant name
	 * @param      constantValue       the constant value
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Argument::defineConstant(const StringPtr &constantName, double constantValue) {
		if (constantName == nullptr)
			return;
		argumentExpression->defineConstant(constantName, constantValue);
	}

	/**
	 * Gets constant index associated with the argument expression.
	 *
	 * @param      constantName        the constant name
	 *
	 * @return     Constant index if constant name was found,
	 *             otherwise return Constant::NOT_FOUND.
	 *
	 * @see        Constant
	 */
	API_VISIBLE int Argument::getConstantIndex(const StringPtr &constantName) const {
		if (constantName == nullptr)
			return NOT_FOUND;
		return argumentExpression->getConstantIndex(constantName);
	}

	/**
	 * Gets constant associated with the argument expression.
	 *
	 * @param      constantName        the constant name
	 *
	 * @return     Constant if constant name was found,
	 *             otherwise return nullptr.
	 *
	 * @see        Constant
	 */
	API_VISIBLE ConstantPtr Argument::getConstant(const StringPtr &constantName) const {
		if (constantName == nullptr)
			return nullptr;
		return argumentExpression->getConstant(constantName);
	}

	/**
	 * Gets constant associated with the argument expression.
	 *
	 * @param      constantIndex       the constant index
	 *
	 * @return     Constant if the constantIndex is between
	 *             0 and the last available constant index
	 *             (getConstantsNumber() - 1),
	 *             otherwise it returns nullptr.
	 *
	 * @see        Constant
	 */
	API_VISIBLE ConstantPtr Argument::getConstant(int constantIndex) const {
		if (constantIndex < 0)
			return nullptr;
		return argumentExpression->getConstant(constantIndex);
	}

	/**
	 * Gets number of constants associated with the argument expression.
	 *
	 * @return     number of constants (int &gt;= 0)
	 *
	 * @see        Constant
	 */
	API_VISIBLE int Argument::getConstantsNumber() const {
		if (argumentType != DEPENDENT_ARGUMENT)
			return 0;
		return argumentExpression->getConstantsNumber();
	}

	/**
	 * Removes first occurrences of the constants
	 * associated with the argument expression.
	 *
	 * @param      constantsNames      the constants names (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Argument::removeConstants(const ListPtr<StringPtr> &constantsNames) {
		if (constantsNames == nullptr) return;
		argumentExpression->removeConstants(constantsNames);
	}

	API_VISIBLE void Argument::removeConstants(const StringPtr &constantName) {
		if (constantName == nullptr) return;
		argumentExpression->removeConstants(constantName);
	}

	/**
	 * Removes first occurrences of the constants
	 * associated with the argument expression
	 *
	 * @param      constants           the constants (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Argument::removeConstants(const ListPtr<ConstantPtr> &constants) {
		if (constants == nullptr) return;
		argumentExpression->removeConstants(constants);
	}

	API_VISIBLE void Argument::removeConstants(const ConstantPtr &constant) {
		if (constant == nullptr) return;
		argumentExpression->removeConstants(constant);
	}

	/**
	 * Removes all constants
	 * associated with the argument expression
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Argument::removeAllConstants() {
		argumentExpression->removeAllConstants();
	}

	/*=================================================
	 *
	 * Functions handling API (the same as in Expression)
	 * (protected argument expression)
	 *
	 *=================================================
	 */
	/**
	 * Adds functions (variadic parameters) to the argument expression definition.
	 *
	 * @param      functions           the functions
	 *                                 (variadic parameters) comma separated list
	 *
	 * @see        Function
	 */
	API_VISIBLE void Argument::addFunctions(const ListPtr<FunctionPtr> &functions) {
		if (functions == nullptr) return;
		argumentExpression->addFunctions(functions);
	}

	API_VISIBLE void Argument::addFunctions(const FunctionPtr &function) {
		if (function == nullptr) return;
		argumentExpression->addFunctions(function);
	}

	/**
	 * Enables to define the function (associated with
	 * the argument expression) based on the function name,
	 * function expression string and arguments names (variadic parameters).
	 *
	 * @param      functionName                  the function name
	 * @param      functionExpressionString      the expression string
	 * @param      argumentsNames                the function arguments names
	 *                                           (variadic parameters)
	 *                                           comma separated list
	 *
	 * @see        Function
	 */
	API_VISIBLE void Argument::defineFunction(const StringPtr &functionName, const StringPtr &functionExpressionString,
	                              const ListPtr<StringPtr> &argumentsNames) {
		if (functionName == nullptr || functionExpressionString == nullptr || argumentsNames == nullptr)
			return;
		argumentExpression->defineFunction(functionName, functionExpressionString, argumentsNames);
	}

	/**
	 * Gets index of function associated with the argument expression.
	 *
	 * @param      functionName        the function name
	 *
	 * @return     Function index if function name was found,
	 *             otherwise returns Function::NOT_FOUND
	 *
	 * @see        Function
	 */
	API_VISIBLE int Argument::getFunctionIndex(const StringPtr &functionName) const {
		if (functionName == nullptr)
			return -1;
		return argumentExpression->getFunctionIndex(functionName);
	}

	/**
	 * Gets function associated with the argument expression.
	 *
	 * @param      functionName        the function name
	 *
	 * @return     Function if function name was found,
	 *             otherwise returns nullptr.
	 *
	 * @see        Function
	 */
	API_VISIBLE FunctionPtr Argument::getFunction(const StringPtr &functionName) const {
		if (functionName == nullptr)
			return nullptr;
		return argumentExpression->getFunction(functionName);
	}

	/**
	 * Gets function associated with the argument expression.
	 *
	 * @param      functionIndex the function index
	 *
	 * @return     Function if function index is between 0 and
	 *             the last available function index (getFunctionsNumber()-1),
	 *             otherwise returns nullptr.
	 *
	 * @see        Function
	 */
	API_VISIBLE FunctionPtr Argument::getFunction(int functionIndex) const {
		if (functionIndex < 0)
			return nullptr;
		return argumentExpression->getFunction(functionIndex);
	}

	/**
	 * Gets number of functions associated with the argument expression.
	 *
	 * @return     number of functions (int &gt;= 0)
	 *
	 * @see        Function
	 */
	API_VISIBLE int Argument::getFunctionsNumber() const {
		if (argumentType != DEPENDENT_ARGUMENT)
			return 0;
		return argumentExpression->getFunctionsNumber();
	}

	/**
	 * Removes first occurrences of the functions
	 * associated with the argument expression.
	 *
	 * @param      functionsNames      the functions names (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Function
	 */
	API_VISIBLE void Argument::removeFunctions(const ListPtr<StringPtr> &functionsNames) {
		if (functionsNames == nullptr) return;
		argumentExpression->removeFunctions(functionsNames);
	}

	API_VISIBLE void Argument::removeFunctions(const StringPtr &functionName) {
		if (functionName == nullptr) return;
		argumentExpression->removeFunctions(functionName);
	}

	/**
	 * Removes first occurrences of the functions
	 * associated with the argument expression.
	 *
	 * @param      functions           the functions (variadic parameters)
	 *                                 comma separated list.
	 *
	 * @see        Function
	 */
	API_VISIBLE void Argument::removeFunctions(const ListPtr<FunctionPtr> &functions) {
		if (functions == nullptr) return;
		argumentExpression->removeFunctions(functions);
	}

	API_VISIBLE void Argument::removeFunctions(const FunctionPtr &function) {
		if (function == nullptr) return;
		argumentExpression->removeFunctions(function);
	}

	/**
	 * Removes all functions
	 * associated with the argument expression.
	 *
	 * @see        Function
	 */
	API_VISIBLE void Argument::removeAllFunctions() {
		argumentExpression->removeAllFunctions();
	}

	/*=================================================
	 *
	 * Related expressions handling
	 *
	 *=================================================
	 */
	/**
	 * Adds related expression to the argumentExpression
	 *
	 * @param      expression          the related expression
	 * @see        Expression
	 */
	API_VISIBLE void Argument::addRelatedExpression(const ExpressionPtr &expression) {
		if (expression == nullptr) return;
		argumentExpression->addRelatedExpression(expression);
	}

	/**
	 * Adds related expression form the argumentExpression
	 *
	 * @param      expression          related expression
	 *
	 * @see        Expression
	 */
	API_VISIBLE void Argument::removeRelatedExpression(const ExpressionPtr &expression) {
		if (expression == nullptr) return;
		argumentExpression->removeRelatedExpression(expression);
	}

	/**
	 * Sets expression was modified flag to all related expressions
	 * to the argumentExpression->
	 *
	 * @see        Expression
	 */
	API_VISIBLE void Argument::setExpressionModifiedFlags() {
		argumentExpression->setExpressionModifiedFlag();
	}

	/**
	 * Creates cloned object of this argument->
	 *
	 * @return     clone of the argument->
	 */
	//@Override
	API_VISIBLE ArgumentPtr Argument::clone() {
		return new_Argument(THIS(Argument), false, nullptr);
	}

	API_VISIBLE ArgumentPtr Argument::cloneForThreadSafeInternal(const CloneCachePtr &cloneCache) {
		ArgumentPtr argumentClone = cloneCache->getArgumentClone(THIS(Argument));
		if (argumentClone == nullptr) {
			cloneCache->cacheCloneInProgress(THIS(Argument));
			argumentClone = new_Argument(THIS(Argument), true, cloneCache);
			cloneCache->clearCloneInProgress(THIS(Argument));
			cloneCache->cacheArgumentClone(THIS(Argument), argumentClone);
		}
		return argumentClone;
	}

	API_VISIBLE ArgumentPtr Argument::cloneForThreadSafeInternal(const ExpressionPtr &relatedExpressionThatInitiatedClone,
	                                                 const CloneCachePtr &cloneCache) {
		ArgumentPtr argumentClone = cloneForThreadSafeInternal(cloneCache);
		argumentClone->addRelatedExpression(relatedExpressionThatInitiatedClone);
		return argumentClone;
	}

	/**
	 * Creates a completely independent 1-1 clone that can be safely used
	 * by a separate thread. If the cloned element contains references
	 * to other elements (e.g. arguments, functions, constants),
	 * then they will also be cloned and the newly created element will
	 * contain references to the corresponding clones.
	 * Important - the API allows you to extract all these clones.
	 *
	 * @return Cloned object.
	 */
	API_VISIBLE ArgumentPtr Argument::cloneForThreadSafe() {
		CloneCachePtr cloneCache = new_CloneCache();
		ArgumentPtr argumentClone = cloneForThreadSafeInternal(cloneCache);
		cloneCache->addAllAtTheEndElements();
		cloneCache->clearCache();
		return argumentClone;
	}

} // org::mariuszgromada::math::mxparser
